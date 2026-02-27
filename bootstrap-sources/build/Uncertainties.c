#include "omc_simulation_settings.h"
#include "Uncertainties.h"
#define _OMC_LIT0_data " *Approximated = false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,22,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,4,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,5,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data " *Approximated = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,17,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "+"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "-"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,0,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT9,0.0);
#define _OMC_LIT9 MMC_REFREALLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT10,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT11,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,9) {&BackendDAE_EquationKind_UNKNOWN__EQUATION__KIND__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT13,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,4) {&BackendDAE_IndexReduction_NO__INDEX__REDUCTION__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,3) {&BackendDAE_EquationConstraints_ALLOW__UNDERCONSTRAINED__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,0) {_OMC_LIT16,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,1) {_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,1,4) {&BackendDAE_IndexType_NORMAL__desc,}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "getUncertainRefineVariableIndexes failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,42,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,1,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Warning: The variable '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,23,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "' was not found in the system of knowns\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,40,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,1,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,1,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "List of size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,15,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,1) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,1) {_OMC_LIT31,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "TarjanAlgorithm failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,23,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Text[Style[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,12,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "\",Bold,Large]]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,14,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Warning: The system of equations is under-determined. The results may be incorrect.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,84,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,1,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data ") ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,3,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,1,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "Reduced variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,19,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "Warning: The system is ill-posed. There are no remaining equations containing the knowns.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,90,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "System of knowns after step 7"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,29,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "Blocks (each row is a block)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,28,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "Grid["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,5,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data ",Frame->All]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,12,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "System of knowns after step 8 and 9"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,35,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,1,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "modelEquationsUC: The model "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,28,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data " could not be flattened"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,23,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,17,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT50,_OMC_LIT51,_OMC_LIT53}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "__OpenModelica_ApproximatedEquation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,35,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "\"None\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,6,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "Done..."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,7,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "Grid[{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,6,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "},Frame -> All]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,15,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "\"-\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,3,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "Warning: The system is ill-posed. When computing the unknowns, there are more equations than variables.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,104,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "Warning: The system is ill-posed. When computing the unknowns, there are more variables than equations.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,104,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "}, Frame -> All]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,16,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "}]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,2,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "{ "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,2,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "} , "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,4,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "unknowns"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,8,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "knowns"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,6,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "inputs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,6,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "\nLoop-1\n========\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,17,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "\nExtractEquationsfromNoPredecessorBlocks :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,42,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data " => "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,4,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data " => known blocks:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,17,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data ": Problem is ill posed because a variable of interest is set on boundary condition B"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,84,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,1) {_OMC_LIT74,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "\nProblem is ill posed because there are two few variables of interest. Boundary condition A is ignored \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,104,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "\nAfterinsertion :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,17,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "=> SET_S :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,10,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "\nFinal Extraction After Loop-1:\n===================================\nSET_C : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,76,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "SET_S : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,8,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "\nLoop-2\n===========\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,20,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "\nFinal Extraction After Loop 2:\n=============================\nSET_C : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,70,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "SET_S: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,7,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data " Set-C is Empty! : Problem is ill posed because there are two few variables of interest"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,87,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,2,1) {_OMC_LIT84,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "Targets of blocks without predecessors\n=====================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,77,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "target("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,7,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data ") : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,4,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data " => Blue_Block_Ranks in target "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,31,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data " => Blue Block Equations : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,27,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data ":\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,2,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "=========================================================================="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,74,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,2,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "\n\nAutomatic Verification Steps of DataReconciliation Algorithm\n==========================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,138,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "knownVariables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,15,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "-SET_C:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,7,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "-SET_S:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,7,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "Condition-1 \"SET_C and SET_S must not have no equations in common\"\n==========================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,142,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "-Failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,8,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "-Equations Found in SET_C and SET_S:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,36,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data ": Condition 1- Failed : The system is ill-posed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,48,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,2,1) {_OMC_LIT101,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "-Passed\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,9,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "Condition-2 \"All variables of interest must be involved in SET_C or SET_S\"\n==========================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,150,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "knownVariables not Found:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,25,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data ": Condition 2- Failed : The system is ill-posed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,48,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,2,1) {_OMC_LIT106,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "-Passed \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,9,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "-SET_C has known variables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,27,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "-SET_S has known variables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,27,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "-SET_C has all known variables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,31,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "Condition-3 \"SET_C equations must be strictly less than Variable of Interest\"\n==========================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,153,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "-Failed\n-SET_C contains:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,24,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data " equations  > "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,14,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data " known variables \n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,19,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data ": Condition 3-Failed : The system is ill-posed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,47,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT117,2,1) {_OMC_LIT116,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT117 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "-Passed\n-SET_C contains:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,24,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data " equations < "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,13,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "Condition-4 \"SET_S should contain all intermediate variables involved in SET_C\"\n==========================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,155,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "-SET_C has intermediate variables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,34,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "-SET_S does not have intermediate variables involved in SET_C:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,62,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data ": Condition 4-Failed : The system is ill-posed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,47,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT124,2,1) {_OMC_LIT123,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT124 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "-SET_S has intermediate variables involved in SET_C:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,52,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "-Passed\n-SET_C contains No Intermediate Variables \n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,52,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "Condition-5 \"SET_S should be square \"\n==========================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,113,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "-Failed\n Set_S has "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,19,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data " equations and "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,15,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data " variables\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,12,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data ": Condition 5-Failed Set_S is not square: The system is ill-posed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,66,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT132,2,1) {_OMC_LIT131,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT132 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "-Passed\n Set_S has "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,19,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "-Passed\n-SET_S contains 0 intermediate variables and 0 equations \n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,67,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "\n-The intermediate variable: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,29,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data " does not have any knowns or constants as Leaf"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,46,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data ": Condition 5-Failed : The system is ill-posed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,47,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT138,2,1) {_OMC_LIT137,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT138 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "Intermediate_Variable_in_SET_C"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,30,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "Dependency_tree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,15,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "\nModelInfo: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,12,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "orderedEquation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,15,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "orderedVariables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,16,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "BLT_BLOCKS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,10,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "\nFINAL SET OF EQUATIONS After Reconciliation \n==========================================================================\nSET_C: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,128,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "SET_C"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,5,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "SET_S"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,5,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "$res"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,4,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "Unknown variables in SET_S "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,27,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "Parameters in SET_S"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,19,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "F"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,1,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT152,1,3) {&DAE_VarDirection_INPUT__desc,}};
#define _OMC_LIT152 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "Variable Names,Measured Value-x,HalfWidthConfidenceInterval,xi,xk,rx_ik\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,72,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "_Inputs.csv"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,11,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
#define _OMC_LIT155_data "defaultOptModulesOrdering"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT155,25,_OMC_LIT155_data);
#define _OMC_LIT155 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT155)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT156,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT156 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT156)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT157,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT157 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT157)
#define _OMC_LIT158_data "If this is activated, then the specified pre-/post-/init-optimization modules will be rearranged to the recommended ordering."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT158,125,_OMC_LIT158_data);
#define _OMC_LIT158 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT158)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT159,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT158}};
#define _OMC_LIT159 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT159)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT160,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(72)),_OMC_LIT155,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT156,_OMC_LIT157,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT159}};
#define _OMC_LIT160 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data "removeSimpleEquations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,21,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
#define _OMC_LIT162_data "removeUnusedVariables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT162,21,_OMC_LIT162_data);
#define _OMC_LIT162 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data "removeEqualRHS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,14,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#define _OMC_LIT164_data "expandDerOperator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT164,17,_OMC_LIT164_data);
#define _OMC_LIT164 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT164)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT165,2,1) {_OMC_LIT164,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT165 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT165)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT166,2,1) {_OMC_LIT163,_OMC_LIT165}};
#define _OMC_LIT166 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT166)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT167,2,1) {_OMC_LIT162,_OMC_LIT166}};
#define _OMC_LIT167 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT167)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT168,2,1) {_OMC_LIT161,_OMC_LIT167}};
#define _OMC_LIT168 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT168)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT169,1,1) {_OMC_LIT168}};
#define _OMC_LIT169 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT169)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT170,1,1) {MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT170 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT170)
#define _OMC_LIT171_data "== Initial system =="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT171,20,_OMC_LIT171_data);
#define _OMC_LIT171 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT171)
#define _OMC_LIT172_data "After Symbolic Elimination"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT172,26,_OMC_LIT172_data);
#define _OMC_LIT172 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT172)
#define _OMC_LIT173_data "Equations (Function calls represent more than one equation)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT173,59,_OMC_LIT173_data);
#define _OMC_LIT173 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT173)
#define _OMC_LIT174_data "Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT174,9,_OMC_LIT174_data);
#define _OMC_LIT174 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT174)
#define _OMC_LIT175_data "Approximated equations to be removed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT175,36,_OMC_LIT175_data);
#define _OMC_LIT175 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT175)
#define _OMC_LIT176_data "After eliminating approximated equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT176,40,_OMC_LIT176_data);
#define _OMC_LIT176 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT176)
#define _OMC_LIT177_data "Known variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT177,15,_OMC_LIT177_data);
#define _OMC_LIT177 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT177)
#define _OMC_LIT178_data "Directly linked variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT178,25,_OMC_LIT178_data);
#define _OMC_LIT178 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT178)
#define _OMC_LIT179_data "Indirectly linked variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT179,27,_OMC_LIT179_data);
#define _OMC_LIT179 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT179)
#define _OMC_LIT180_data "Output variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT180,16,_OMC_LIT180_data);
#define _OMC_LIT180 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT180)
#define _OMC_LIT181_data "After eliminating output variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT181,34,_OMC_LIT181_data);
#define _OMC_LIT181 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT181)
#define _OMC_LIT182_data "Matching performed after step 5 (Set S)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT182,39,_OMC_LIT182_data);
#define _OMC_LIT182 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT182)
#define _OMC_LIT183_data "Remaining equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT183,19,_OMC_LIT183_data);
#define _OMC_LIT183 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT183)
#define _OMC_LIT184_data "Warning: the system is ill-posed. One or more equations have been removed from squared system of knowns.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT184,105,_OMC_LIT184_data);
#define _OMC_LIT184 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT184)
#define _OMC_LIT185_data "Equations removed from squared blocks (with more than one equation)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT185,67,_OMC_LIT185_data);
#define _OMC_LIT185 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT185)
#define _OMC_LIT186_data "Final Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT186,15,_OMC_LIT186_data);
#define _OMC_LIT186 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT186)
#define _OMC_LIT187_data "{{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT187,2,_OMC_LIT187_data);
#define _OMC_LIT187 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT187)
#define _OMC_LIT188_data "},{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT188,3,_OMC_LIT188_data);
#define _OMC_LIT188 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT188)
#define _OMC_LIT189_data "},"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT189,2,_OMC_LIT189_data);
#define _OMC_LIT189 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT189)
#define _OMC_LIT190_data "Extraction finished"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT190,19,_OMC_LIT190_data);
#define _OMC_LIT190 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT190)
#define _OMC_LIT191_data "Extraction failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT191,17,_OMC_LIT191_data);
#define _OMC_LIT191 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT191)
#define _OMC_LIT192_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT192,9,_OMC_LIT192_data);
#define _OMC_LIT192 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT192)
#define _OMC_LIT193_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT193,41,_OMC_LIT193_data);
#define _OMC_LIT193 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT193)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT194,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT193}};
#define _OMC_LIT194 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT194)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT195,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT192,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT194}};
#define _OMC_LIT195 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT195)
#define _OMC_LIT196_data "modelEquationsUC: The model equations in model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT196,46,_OMC_LIT196_data);
#define _OMC_LIT196 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT196)
#define _OMC_LIT197_data " could not be extracted"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT197,23,_OMC_LIT197_data);
#define _OMC_LIT197 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT197)
#include "util/modelica.h"

#include "Uncertainties_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_Uncertainties_dumpAliasSets3(threadData_t *threadData, modelica_metatype _sourceIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_dumpAliasSets3,2,0) {(void*) boxptr_Uncertainties_dumpAliasSets3,0}};
#define boxvar_Uncertainties_dumpAliasSets3 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_dumpAliasSets3)
PROTECTED_FUNCTION_STATIC void omc_Uncertainties_dumpAliasSets2(threadData_t *threadData, modelica_metatype _crefs, modelica_metatype _sign_values);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_dumpAliasSets2,2,0) {(void*) boxptr_Uncertainties_dumpAliasSets2,0}};
#define boxvar_Uncertainties_dumpAliasSets2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_dumpAliasSets2)
PROTECTED_FUNCTION_STATIC void omc_Uncertainties_dumpAliasSets(threadData_t *threadData, modelica_metatype _sets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_dumpAliasSets,2,0) {(void*) boxptr_Uncertainties_dumpAliasSets,0}};
#define boxvar_Uncertainties_dumpAliasSets MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_dumpAliasSets)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Uncertainties_getAliasSetExpressionAndSign(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _set, modelica_metatype *out_eOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_getAliasSetExpressionAndSign(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _set, modelica_metatype *out_eOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getAliasSetExpressionAndSign,2,0) {(void*) boxptr_Uncertainties_getAliasSetExpressionAndSign,0}};
#define boxvar_Uncertainties_getAliasSetExpressionAndSign MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getAliasSetExpressionAndSign)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getAliasSetSource(threadData_t *threadData, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getAliasSetSource,2,0) {(void*) boxptr_Uncertainties_getAliasSetSource,0}};
#define boxvar_Uncertainties_getAliasSetSource MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getAliasSetSource)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getAliasSetSymbolList(threadData_t *threadData, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getAliasSetSymbolList,2,0) {(void*) boxptr_Uncertainties_getAliasSetSymbolList,0}};
#define boxvar_Uncertainties_getAliasSetSymbolList MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getAliasSetSymbolList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_pushToSetList(threadData_t *threadData, modelica_metatype _sets, modelica_metatype _cr1, modelica_metatype _e1, modelica_integer _sign1, modelica_metatype _cr2, modelica_metatype _e2, modelica_integer _sign2, modelica_metatype _source);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_pushToSetList(threadData_t *threadData, modelica_metatype _sets, modelica_metatype _cr1, modelica_metatype _e1, modelica_metatype _sign1, modelica_metatype _cr2, modelica_metatype _e2, modelica_metatype _sign2, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_pushToSetList,2,0) {(void*) boxptr_Uncertainties_pushToSetList,0}};
#define boxvar_Uncertainties_pushToSetList MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_pushToSetList)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_existsInSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype _cr);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_existsInSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype _cr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_existsInSet,2,0) {(void*) boxptr_Uncertainties_existsInSet,0}};
#define boxvar_Uncertainties_existsInSet MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_existsInSet)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_updateSource(threadData_t *threadData, modelica_metatype _source1, modelica_metatype _source2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_updateSource,2,0) {(void*) boxptr_Uncertainties_updateSource,0}};
#define boxvar_Uncertainties_updateSource MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_updateSource)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_addToSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype _cr1, modelica_metatype _e1, modelica_integer _sign1In, modelica_metatype _cr2, modelica_metatype _e2, modelica_integer _sign2In, modelica_metatype _sourceIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_addToSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype _cr1, modelica_metatype _e1, modelica_metatype _sign1In, modelica_metatype _cr2, modelica_metatype _e2, modelica_metatype _sign2In, modelica_metatype _sourceIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_addToSet,2,0) {(void*) boxptr_Uncertainties_addToSet,0}};
#define boxvar_Uncertainties_addToSet MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_addToSet)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_createSet(threadData_t *threadData, modelica_metatype _cr1, modelica_metatype _e1, modelica_integer _sign1In, modelica_metatype _cr2, modelica_metatype _e2, modelica_integer _sign2In, modelica_metatype _source);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_createSet(threadData_t *threadData, modelica_metatype _cr1, modelica_metatype _e1, modelica_metatype _sign1In, modelica_metatype _cr2, modelica_metatype _e2, modelica_metatype _sign2In, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_createSet,2,0) {(void*) boxptr_Uncertainties_createSet,0}};
#define boxvar_Uncertainties_createSet MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_createSet)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getSourceIfApproximated(threadData_t *threadData, modelica_metatype _eqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getSourceIfApproximated,2,0) {(void*) boxptr_Uncertainties_getSourceIfApproximated,0}};
#define boxvar_Uncertainties_getSourceIfApproximated MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getSourceIfApproximated)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_addPairToSet(threadData_t *threadData, modelica_metatype _sets, modelica_metatype _eqn_acc, modelica_metatype _eqn, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype *out_eqn_acc_out);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_addPairToSet,2,0) {(void*) boxptr_Uncertainties_addPairToSet,0}};
#define boxvar_Uncertainties_addPairToSet MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_addPairToSet)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_separateAliasSetsAndEquations(threadData_t *threadData, modelica_metatype _eqnIn, modelica_metatype _sets, modelica_metatype _eqn_accIn, modelica_metatype *out_eqn_accOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_separateAliasSetsAndEquations,2,0) {(void*) boxptr_Uncertainties_separateAliasSetsAndEquations,0}};
#define boxvar_Uncertainties_separateAliasSetsAndEquations MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_separateAliasSetsAndEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_createReplacementsAndEquations(threadData_t *threadData, modelica_metatype _solutions, modelica_metatype _sets, modelica_metatype _vars, modelica_metatype _globalKnownVars, modelica_metatype _repl_acc, modelica_metatype _eqns_acc, modelica_metatype _removed_vars_acc, modelica_metatype *out_eqnsOut, modelica_metatype *out_removed_vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_createReplacementsAndEquations,2,0) {(void*) boxptr_Uncertainties_createReplacementsAndEquations,0}};
#define boxvar_Uncertainties_createReplacementsAndEquations MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_createReplacementsAndEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_createReplacementsAndEquationsForSet(threadData_t *threadData, modelica_metatype _solution, modelica_metatype _symbols, modelica_metatype _set, modelica_metatype _vars, modelica_metatype _globalKnownVars, modelica_metatype _repl_acc, modelica_metatype _eqns_acc, modelica_metatype _removed_vars_acc, modelica_metatype *out_eqnsOut, modelica_metatype *out_removed_varsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_createReplacementsAndEquationsForSet,2,0) {(void*) boxptr_Uncertainties_createReplacementsAndEquationsForSet,0}};
#define boxvar_Uncertainties_createReplacementsAndEquationsForSet MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_createReplacementsAndEquationsForSet)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_generateEquation(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_generateEquation,2,0) {(void*) boxptr_Uncertainties_generateEquation,0}};
#define boxvar_Uncertainties_generateEquation MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_generateEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_fixSingOfExp(threadData_t *threadData, modelica_integer _sign, modelica_metatype _eIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_fixSingOfExp(threadData_t *threadData, modelica_metatype _sign, modelica_metatype _eIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_fixSingOfExp,2,0) {(void*) boxptr_Uncertainties_fixSingOfExp,0}};
#define boxvar_Uncertainties_fixSingOfExp MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_fixSingOfExp)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isRemovableSymbol(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars, modelica_metatype _globalKnownVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isRemovableSymbol(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars, modelica_metatype _globalKnownVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_isRemovableSymbol,2,0) {(void*) boxptr_Uncertainties_isRemovableSymbol,0}};
#define boxvar_Uncertainties_isRemovableSymbol MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_isRemovableSymbol)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isRemovableVarList(threadData_t *threadData, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isRemovableVarList(threadData_t *threadData, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_isRemovableVarList,2,0) {(void*) boxptr_Uncertainties_isRemovableVarList,0}};
#define boxvar_Uncertainties_isRemovableVarList MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_isRemovableVarList)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isRemovableVar(threadData_t *threadData, modelica_metatype _var);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isRemovableVar(threadData_t *threadData, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_isRemovableVar,2,0) {(void*) boxptr_Uncertainties_isRemovableVar,0}};
#define boxvar_Uncertainties_isRemovableVar MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_isRemovableVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_solveAliasSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype _vars, modelica_metatype _globalKnownVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_solveAliasSet,2,0) {(void*) boxptr_Uncertainties_solveAliasSet,0}};
#define boxvar_Uncertainties_solveAliasSet MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_solveAliasSet)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_setPairSortFunction(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_setPairSortFunction(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_setPairSortFunction,2,0) {(void*) boxptr_Uncertainties_setPairSortFunction,0}};
#define boxvar_Uncertainties_setPairSortFunction MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_setPairSortFunction)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_rateSetElement(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars, modelica_metatype _globalKnownVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_rateSetElement,2,0) {(void*) boxptr_Uncertainties_rateSetElement,0}};
#define boxvar_Uncertainties_rateSetElement MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_rateSetElement)
PROTECTED_FUNCTION_STATIC modelica_real omc_Uncertainties_rateVariableList(threadData_t *threadData, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_rateVariableList(threadData_t *threadData, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_rateVariableList,2,0) {(void*) boxptr_Uncertainties_rateVariableList,0}};
#define boxvar_Uncertainties_rateVariableList MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_rateVariableList)
PROTECTED_FUNCTION_STATIC modelica_real omc_Uncertainties_rateVariable(threadData_t *threadData, modelica_metatype _var);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_rateVariable(threadData_t *threadData, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_rateVariable,2,0) {(void*) boxptr_Uncertainties_rateVariable,0}};
#define boxvar_Uncertainties_rateVariable MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_rateVariable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getAllVariablesForCref(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars, modelica_metatype _globalKnownVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getAllVariablesForCref,2,0) {(void*) boxptr_Uncertainties_getAllVariablesForCref,0}};
#define boxvar_Uncertainties_getAllVariablesForCref MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getAllVariablesForCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_addCrefsToHashTable(threadData_t *threadData, modelica_metatype _crefs, modelica_metatype _table);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_addCrefsToHashTable,2,0) {(void*) boxptr_Uncertainties_addCrefsToHashTable,0}};
#define boxvar_Uncertainties_addCrefsToHashTable MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_addCrefsToHashTable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeSimpleEquationsUC(threadData_t *threadData, modelica_metatype _daeIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_removeSimpleEquationsUC,2,0) {(void*) boxptr_Uncertainties_removeSimpleEquationsUC,0}};
#define boxvar_Uncertainties_removeSimpleEquationsUC MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_removeSimpleEquationsUC)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_mergeBy1(threadData_t *threadData, modelica_metatype _inLeft, modelica_metatype _inRight, modelica_fnptr _inCompFunc, modelica_metatype _inArgument1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_mergeBy1,2,0) {(void*) boxptr_Uncertainties_mergeBy1,0}};
#define boxvar_Uncertainties_mergeBy1 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_mergeBy1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_moveVariables2(threadData_t *threadData, modelica_metatype _inVarLst1, modelica_metatype _inVarLst2, modelica_metatype _hashTable, modelica_metatype *out_outVarLst2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_moveVariables2,2,0) {(void*) boxptr_Uncertainties_moveVariables2,0}};
#define boxvar_Uncertainties_moveVariables2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_moveVariables2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_replaceVars(threadData_t *threadData, modelica_metatype _invarLst, modelica_metatype _repl, modelica_metatype _func, modelica_boolean _replaceName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_replaceVars(threadData_t *threadData, modelica_metatype _invarLst, modelica_metatype _repl, modelica_metatype _func, modelica_metatype _replaceName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_replaceVars,2,0) {(void*) boxptr_Uncertainties_replaceVars,0}};
#define boxvar_Uncertainties_replaceVars MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_replaceVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_setDaeEqns(threadData_t *threadData, modelica_metatype _dae, modelica_metatype _eqns, modelica_boolean _initEqs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_setDaeEqns(threadData_t *threadData, modelica_metatype _dae, modelica_metatype _eqns, modelica_metatype _initEqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_setDaeEqns,2,0) {(void*) boxptr_Uncertainties_setDaeEqns,0}};
#define boxvar_Uncertainties_setDaeEqns MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_setDaeEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_setDaeVars(threadData_t *threadData, modelica_metatype _systIn, modelica_metatype _newVarsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_setDaeVars,2,0) {(void*) boxptr_Uncertainties_setDaeVars,0}};
#define boxvar_Uncertainties_setDaeVars MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_setDaeVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_solveEqn2(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _cr, modelica_metatype *out_source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_solveEqn2,2,0) {(void*) boxptr_Uncertainties_solveEqn2,0}};
#define boxvar_Uncertainties_solveEqn2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_solveEqn2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_eliminateVariablesDAE2(threadData_t *threadData, modelica_metatype _ieqns, modelica_integer _eqnIndex, modelica_metatype _vars, modelica_metatype _globalKnownVars, modelica_metatype _mvars, modelica_metatype _repl, modelica_metatype _inDoubles, modelica_metatype _m, modelica_metatype _elimVarIndexList, modelica_boolean _failCheck, modelica_metatype *out_outSimpleEqns, modelica_metatype *out_outMvars, modelica_metatype *out_outRepl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_eliminateVariablesDAE2(threadData_t *threadData, modelica_metatype _ieqns, modelica_metatype _eqnIndex, modelica_metatype _vars, modelica_metatype _globalKnownVars, modelica_metatype _mvars, modelica_metatype _repl, modelica_metatype _inDoubles, modelica_metatype _m, modelica_metatype _elimVarIndexList, modelica_metatype _failCheck, modelica_metatype *out_outSimpleEqns, modelica_metatype *out_outMvars, modelica_metatype *out_outRepl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_eliminateVariablesDAE2,2,0) {(void*) boxptr_Uncertainties_eliminateVariablesDAE2,0}};
#define boxvar_Uncertainties_eliminateVariablesDAE2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_eliminateVariablesDAE2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysInRecordLst(threadData_t *threadData, modelica_metatype _inht, modelica_metatype _recordCr, modelica_metatype _invarLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysInRecordLst,2,0) {(void*) boxptr_Uncertainties_findArraysInRecordLst,0}};
#define boxvar_Uncertainties_findArraysInRecordLst MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysInRecordLst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysPartiallyIndexedRecordsExpVisitor(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inHt, modelica_metatype *out_ht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysPartiallyIndexedRecordsExpVisitor,2,0) {(void*) boxptr_Uncertainties_findArraysPartiallyIndexedRecordsExpVisitor,0}};
#define boxvar_Uncertainties_findArraysPartiallyIndexedRecordsExpVisitor MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysPartiallyIndexedRecordsExpVisitor)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysPartiallyIndexedRecords(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype _ht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysPartiallyIndexedRecords,2,0) {(void*) boxptr_Uncertainties_findArraysPartiallyIndexedRecords,0}};
#define boxvar_Uncertainties_findArraysPartiallyIndexedRecords MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysPartiallyIndexedRecords)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArrayVariables(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_findArrayVariables,2,0) {(void*) boxptr_Uncertainties_findArrayVariables,0}};
#define boxvar_Uncertainties_findArrayVariables MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_findArrayVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysPartiallyIndexed2(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _indubRef, modelica_metatype _inht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysPartiallyIndexed2,2,0) {(void*) boxptr_Uncertainties_findArraysPartiallyIndexed2,0}};
#define boxvar_Uncertainties_findArraysPartiallyIndexed2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysPartiallyIndexed2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysPartiallyIndexed1(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype _inht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysPartiallyIndexed1,2,0) {(void*) boxptr_Uncertainties_findArraysPartiallyIndexed1,0}};
#define boxvar_Uncertainties_findArraysPartiallyIndexed1 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysPartiallyIndexed1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysPartiallyIndexed(threadData_t *threadData, modelica_metatype _inEqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysPartiallyIndexed,2,0) {(void*) boxptr_Uncertainties_findArraysPartiallyIndexed,0}};
#define boxvar_Uncertainties_findArraysPartiallyIndexed MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_findArraysPartiallyIndexed)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_containsAll(threadData_t *threadData, modelica_metatype _m1, modelica_metatype _m2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_containsAll(threadData_t *threadData, modelica_metatype _m1, modelica_metatype _m2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_containsAll,2,0) {(void*) boxptr_Uncertainties_containsAll,0}};
#define boxvar_Uncertainties_containsAll MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_containsAll)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_containsAny(threadData_t *threadData, modelica_metatype _m1, modelica_metatype _m2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_containsAny(threadData_t *threadData, modelica_metatype _m1, modelica_metatype _m2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_containsAny,2,0) {(void*) boxptr_Uncertainties_containsAny,0}};
#define boxvar_Uncertainties_containsAny MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_containsAny)
PROTECTED_FUNCTION_STATIC void omc_Uncertainties_dumpExtAdjacencyMatrix(threadData_t *threadData, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_dumpExtAdjacencyMatrix,2,0) {(void*) boxptr_Uncertainties_dumpExtAdjacencyMatrix,0}};
#define boxvar_Uncertainties_dumpExtAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_dumpExtAdjacencyMatrix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getExtAdjacencyMatrix2(threadData_t *threadData, modelica_integer _i, modelica_metatype _m, modelica_metatype _acc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_getExtAdjacencyMatrix2(threadData_t *threadData, modelica_metatype _i, modelica_metatype _m, modelica_metatype _acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getExtAdjacencyMatrix2,2,0) {(void*) boxptr_Uncertainties_getExtAdjacencyMatrix2,0}};
#define boxvar_Uncertainties_getExtAdjacencyMatrix2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getExtAdjacencyMatrix2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getExtAdjacencyMatrix(threadData_t *threadData, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getExtAdjacencyMatrix,2,0) {(void*) boxptr_Uncertainties_getExtAdjacencyMatrix,0}};
#define boxvar_Uncertainties_getExtAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getExtAdjacencyMatrix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_fixUnderdeterminedSystem(threadData_t *threadData, modelica_metatype _m, modelica_integer _nvars, modelica_integer _neqs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_fixUnderdeterminedSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _nvars, modelica_metatype _neqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_fixUnderdeterminedSystem,2,0) {(void*) boxptr_Uncertainties_fixUnderdeterminedSystem,0}};
#define boxvar_Uncertainties_fixUnderdeterminedSystem MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_fixUnderdeterminedSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeDummyEquations(threadData_t *threadData, modelica_metatype _comps, modelica_integer _max_neqs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_removeDummyEquations(threadData_t *threadData, modelica_metatype _comps, modelica_metatype _max_neqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_removeDummyEquations,2,0) {(void*) boxptr_Uncertainties_removeDummyEquations,0}};
#define boxvar_Uncertainties_removeDummyEquations MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_removeDummyEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_prepareForMatching(threadData_t *threadData, modelica_metatype _mExt, modelica_metatype *out_varMap, modelica_metatype *out_mOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_prepareForMatching,2,0) {(void*) boxptr_Uncertainties_prepareForMatching,0}};
#define boxvar_Uncertainties_prepareForMatching MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_prepareForMatching)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_prepareForMatching2(threadData_t *threadData, modelica_metatype _mExt, modelica_metatype _eqMap, modelica_metatype _varMap, modelica_metatype _m, modelica_metatype *out_varMapOut, modelica_metatype *out_mOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_prepareForMatching2,2,0) {(void*) boxptr_Uncertainties_prepareForMatching2,0}};
#define boxvar_Uncertainties_prepareForMatching2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_prepareForMatching2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_addVarEquivalences(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _map, modelica_metatype _varsFixed, modelica_metatype *out_varsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_addVarEquivalences,2,0) {(void*) boxptr_Uncertainties_addVarEquivalences,0}};
#define boxvar_Uncertainties_addVarEquivalences MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_addVarEquivalences)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Uncertainties_addIndexEquivalence(threadData_t *threadData, modelica_integer _index, modelica_metatype _map, modelica_metatype *out_mapOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_addIndexEquivalence(threadData_t *threadData, modelica_metatype _index, modelica_metatype _map, modelica_metatype *out_mapOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_addIndexEquivalence,2,0) {(void*) boxptr_Uncertainties_addIndexEquivalence,0}};
#define boxvar_Uncertainties_addIndexEquivalence MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_addIndexEquivalence)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_restoreIndicesEquivalence(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_restoreIndicesEquivalence,2,0) {(void*) boxptr_Uncertainties_restoreIndicesEquivalence,0}};
#define boxvar_Uncertainties_restoreIndicesEquivalence MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_restoreIndicesEquivalence)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getRelatedVariables(threadData_t *threadData, modelica_metatype _m, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getRelatedVariables,2,0) {(void*) boxptr_Uncertainties_getRelatedVariables,0}};
#define boxvar_Uncertainties_getRelatedVariables MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getRelatedVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getSystemForUnknowns(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns, modelica_metatype _unknowns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getSystemForUnknowns,2,0) {(void*) boxptr_Uncertainties_getSystemForUnknowns,0}};
#define boxvar_Uncertainties_getSystemForUnknowns MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getSystemForUnknowns)
PROTECTED_FUNCTION_STATIC void omc_Uncertainties_checkSystemContainsVars(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knows, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_checkSystemContainsVars,2,0) {(void*) boxptr_Uncertainties_checkSystemContainsVars,0}};
#define boxvar_Uncertainties_checkSystemContainsVars MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_checkSystemContainsVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeUnrelatedEquations(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_removeUnrelatedEquations,2,0) {(void*) boxptr_Uncertainties_removeUnrelatedEquations,0}};
#define boxvar_Uncertainties_removeUnrelatedEquations MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_removeUnrelatedEquations)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_removeUnrelatedEquations2(threadData_t *threadData, modelica_metatype _row, modelica_metatype _knowns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_removeUnrelatedEquations2(threadData_t *threadData, modelica_metatype _row, modelica_metatype _knowns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_removeUnrelatedEquations2,2,0) {(void*) boxptr_Uncertainties_removeUnrelatedEquations2,0}};
#define boxvar_Uncertainties_removeUnrelatedEquations2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_removeUnrelatedEquations2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquations(threadData_t *threadData, modelica_metatype _m, modelica_metatype _eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getEquations,2,0) {(void*) boxptr_Uncertainties_getEquations,0}};
#define boxvar_Uncertainties_getEquations MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getEquations)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_getEquationsHelper(threadData_t *threadData, modelica_metatype _m, modelica_metatype _eqns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_getEquationsHelper(threadData_t *threadData, modelica_metatype _m, modelica_metatype _eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsHelper,2,0) {(void*) boxptr_Uncertainties_getEquationsHelper,0}};
#define boxvar_Uncertainties_getEquationsHelper MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsHelper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeEquations(threadData_t *threadData, modelica_metatype _m, modelica_metatype _eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_removeEquations,2,0) {(void*) boxptr_Uncertainties_removeEquations,0}};
#define boxvar_Uncertainties_removeEquations MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_removeEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeVarsNotInSet(threadData_t *threadData, modelica_metatype _m, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_removeVarsNotInSet,2,0) {(void*) boxptr_Uncertainties_removeVarsNotInSet,0}};
#define boxvar_Uncertainties_removeVarsNotInSet MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_removeVarsNotInSet)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_removeVarsNotInSet__helper(threadData_t *threadData, modelica_integer _var, modelica_metatype _elems);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_removeVarsNotInSet__helper(threadData_t *threadData, modelica_metatype _var, modelica_metatype _elems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_removeVarsNotInSet__helper,2,0) {(void*) boxptr_Uncertainties_removeVarsNotInSet__helper,0}};
#define boxvar_Uncertainties_removeVarsNotInSet__helper MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_removeVarsNotInSet__helper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_sortEquations(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_sortEquations,2,0) {(void*) boxptr_Uncertainties_sortEquations,0}};
#define boxvar_Uncertainties_sortEquations MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_sortEquations)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Uncertainties_countKnowns(threadData_t *threadData, modelica_metatype _row, modelica_metatype _knowns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_countKnowns(threadData_t *threadData, modelica_metatype _row, modelica_metatype _knowns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_countKnowns,2,0) {(void*) boxptr_Uncertainties_countKnowns,0}};
#define boxvar_Uncertainties_countKnowns MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_countKnowns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_setOfList(threadData_t *threadData, modelica_metatype _inList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_setOfList,2,0) {(void*) boxptr_Uncertainties_setOfList,0}};
#define boxvar_Uncertainties_setOfList MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_setOfList)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_listString(threadData_t *threadData, modelica_metatype _l);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_listString,2,0) {(void*) boxptr_Uncertainties_listString,0}};
#define boxvar_Uncertainties_listString MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_listString)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_intListString(threadData_t *threadData, modelica_metatype _l);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_intListString,2,0) {(void*) boxptr_Uncertainties_intListString,0}};
#define boxvar_Uncertainties_intListString MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_intListString)
PROTECTED_FUNCTION_STATIC void omc_Uncertainties_printIntList(threadData_t *threadData, modelica_metatype _l);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_printIntList,2,0) {(void*) boxptr_Uncertainties_printIntList,0}};
#define boxvar_Uncertainties_printIntList MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_printIntList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeEquationInSquaredBlock(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _components, modelica_metatype *out_removedEquations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_removeEquationInSquaredBlock,2,0) {(void*) boxptr_Uncertainties_removeEquationInSquaredBlock,0}};
#define boxvar_Uncertainties_removeEquationInSquaredBlock MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_removeEquationInSquaredBlock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getVariables(threadData_t *threadData, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getVariables,2,0) {(void*) boxptr_Uncertainties_getVariables,0}};
#define boxvar_Uncertainties_getVariables MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getComponentsWrapper(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getComponentsWrapper,2,0) {(void*) boxptr_Uncertainties_getComponentsWrapper,0}};
#define boxvar_Uncertainties_getComponentsWrapper MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getComponentsWrapper)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_getMathematicaText(threadData_t *threadData, modelica_string _text);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getMathematicaText,2,0) {(void*) boxptr_Uncertainties_getMathematicaText,0}};
#define boxvar_Uncertainties_getMathematicaText MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getMathematicaText)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationsNumber(threadData_t *threadData, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsNumber,2,0) {(void*) boxptr_Uncertainties_getEquationsNumber,0}};
#define boxvar_Uncertainties_getEquationsNumber MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsNumber)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_occurrencesOfVariable(threadData_t *threadData, modelica_metatype _m, modelica_integer _var);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_occurrencesOfVariable(threadData_t *threadData, modelica_metatype _m, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_occurrencesOfVariable,2,0) {(void*) boxptr_Uncertainties_occurrencesOfVariable,0}};
#define boxvar_Uncertainties_occurrencesOfVariable MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_occurrencesOfVariable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_eliminateOutputVariables(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _outputs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_eliminateOutputVariables,2,0) {(void*) boxptr_Uncertainties_eliminateOutputVariables,0}};
#define boxvar_Uncertainties_eliminateOutputVariables MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_eliminateOutputVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findReductionCantidates2(threadData_t *threadData, modelica_integer _var, modelica_metatype _occurrence, modelica_metatype _acc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_findReductionCantidates2(threadData_t *threadData, modelica_metatype _var, modelica_metatype _occurrence, modelica_metatype _acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_findReductionCantidates2,2,0) {(void*) boxptr_Uncertainties_findReductionCantidates2,0}};
#define boxvar_Uncertainties_findReductionCantidates2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_findReductionCantidates2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findReductionCantidates(threadData_t *threadData, modelica_metatype _variables, modelica_metatype _occurrences, modelica_metatype _acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_findReductionCantidates,2,0) {(void*) boxptr_Uncertainties_findReductionCantidates,0}};
#define boxvar_Uncertainties_findReductionCantidates MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_findReductionCantidates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_reduceVariablesInMatrix(threadData_t *threadData, modelica_metatype _m, modelica_metatype _candidates, modelica_integer _count);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_reduceVariablesInMatrix(threadData_t *threadData, modelica_metatype _m, modelica_metatype _candidates, modelica_metatype _count);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_reduceVariablesInMatrix,2,0) {(void*) boxptr_Uncertainties_reduceVariablesInMatrix,0}};
#define boxvar_Uncertainties_reduceVariablesInMatrix MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_reduceVariablesInMatrix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_reduceVariables(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_reduceVariables,2,0) {(void*) boxptr_Uncertainties_reduceVariables,0}};
#define boxvar_Uncertainties_reduceVariables MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_reduceVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_pickReductionCandidates(threadData_t *threadData, modelica_metatype _elems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_pickReductionCandidates,2,0) {(void*) boxptr_Uncertainties_pickReductionCandidates,0}};
#define boxvar_Uncertainties_pickReductionCandidates MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_pickReductionCandidates)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_printVarReduction2(threadData_t *threadData, modelica_metatype _elem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_printVarReduction2,2,0) {(void*) boxptr_Uncertainties_printVarReduction2,0}};
#define boxvar_Uncertainties_printVarReduction2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_printVarReduction2)
PROTECTED_FUNCTION_STATIC void omc_Uncertainties_printVarReduction(threadData_t *threadData, modelica_metatype _elems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_printVarReduction,2,0) {(void*) boxptr_Uncertainties_printVarReduction,0}};
#define boxvar_Uncertainties_printVarReduction MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_printVarReduction)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationsForKnownsSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _setS, modelica_metatype _allEqs, modelica_metatype _variables, modelica_metatype _knownVariables, modelica_metatype _mapIncRowEqn, modelica_metatype *out_removed_equations_squaredOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsForKnownsSystem,2,0) {(void*) boxptr_Uncertainties_getEquationsForKnownsSystem,0}};
#define boxvar_Uncertainties_getEquationsForKnownsSystem MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsForKnownsSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationsForUnknownsSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype *out_varsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsForUnknownsSystem,2,0) {(void*) boxptr_Uncertainties_getEquationsForUnknownsSystem,0}};
#define boxvar_Uncertainties_getEquationsForUnknownsSystem MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsForUnknownsSystem)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_getMathematicaEqStr(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _systemVars, modelica_metatype _globalKnownVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getMathematicaEqStr,2,0) {(void*) boxptr_Uncertainties_getMathematicaEqStr,0}};
#define boxvar_Uncertainties_getMathematicaEqStr MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getMathematicaEqStr)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_getMathematicaVarStr(threadData_t *threadData, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getMathematicaVarStr,2,0) {(void*) boxptr_Uncertainties_getMathematicaVarStr,0}};
#define boxvar_Uncertainties_getMathematicaVarStr MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getMathematicaVarStr)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_flattenModel(threadData_t *threadData, modelica_metatype _className, modelica_metatype _p, modelica_metatype _icache, modelica_metatype *out_cacheOut, modelica_metatype *out_graphOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_flattenModel,2,0) {(void*) boxptr_Uncertainties_flattenModel,0}};
#define boxvar_Uncertainties_flattenModel MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_flattenModel)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isApproximatedEquation3(threadData_t *threadData, modelica_metatype _m);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isApproximatedEquation3(threadData_t *threadData, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_isApproximatedEquation3,2,0) {(void*) boxptr_Uncertainties_isApproximatedEquation3,0}};
#define boxvar_Uncertainties_isApproximatedEquation3 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_isApproximatedEquation3)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isApproximatedEquation2(threadData_t *threadData, modelica_metatype _commentIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isApproximatedEquation2(threadData_t *threadData, modelica_metatype _commentIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_isApproximatedEquation2,2,0) {(void*) boxptr_Uncertainties_isApproximatedEquation2,0}};
#define boxvar_Uncertainties_isApproximatedEquation2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_isApproximatedEquation2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isApproximatedEquation(threadData_t *threadData, modelica_metatype _eqn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isApproximatedEquation(threadData_t *threadData, modelica_metatype _eqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_isApproximatedEquation,2,0) {(void*) boxptr_Uncertainties_isApproximatedEquation,0}};
#define boxvar_Uncertainties_isApproximatedEquation MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_isApproximatedEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationsWithApproximatedAnnotation2(threadData_t *threadData, modelica_metatype _eqs, modelica_integer _index);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_getEquationsWithApproximatedAnnotation2(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsWithApproximatedAnnotation2,2,0) {(void*) boxptr_Uncertainties_getEquationsWithApproximatedAnnotation2,0}};
#define boxvar_Uncertainties_getEquationsWithApproximatedAnnotation2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsWithApproximatedAnnotation2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationsWithApproximatedAnnotation(threadData_t *threadData, modelica_metatype _dae);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsWithApproximatedAnnotation,2,0) {(void*) boxptr_Uncertainties_getEquationsWithApproximatedAnnotation,0}};
#define boxvar_Uncertainties_getEquationsWithApproximatedAnnotation MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationsWithApproximatedAnnotation)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_dumpVarsDistributionInfo(threadData_t *threadData, modelica_metatype _d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_dumpVarsDistributionInfo,2,0) {(void*) boxptr_Uncertainties_dumpVarsDistributionInfo,0}};
#define boxvar_Uncertainties_dumpVarsDistributionInfo MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_dumpVarsDistributionInfo)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_dumpVarDistributionInfo(threadData_t *threadData, modelica_metatype _d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_dumpVarDistributionInfo,2,0) {(void*) boxptr_Uncertainties_dumpVarDistributionInfo,0}};
#define boxvar_Uncertainties_dumpVarDistributionInfo MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_dumpVarDistributionInfo)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_writeFileIfNonEmpty(threadData_t *threadData, modelica_string _filename, modelica_string _content);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_writeFileIfNonEmpty,2,0) {(void*) boxptr_Uncertainties_writeFileIfNonEmpty,0}};
#define boxvar_Uncertainties_writeFileIfNonEmpty MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_writeFileIfNonEmpty)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_variablesToMathematicaGrid(threadData_t *threadData, modelica_metatype _varIndices, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_variablesToMathematicaGrid,2,0) {(void*) boxptr_Uncertainties_variablesToMathematicaGrid,0}};
#define boxvar_Uncertainties_variablesToMathematicaGrid MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_variablesToMathematicaGrid)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_unknowsMatchingToMathematicaGrid(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _equations, modelica_metatype _allEqs, modelica_metatype _variables, modelica_metatype _knownVariables, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_unknowsMatchingToMathematicaGrid,2,0) {(void*) boxptr_Uncertainties_unknowsMatchingToMathematicaGrid,0}};
#define boxvar_Uncertainties_unknowsMatchingToMathematicaGrid MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_unknowsMatchingToMathematicaGrid)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationStringOrNothing(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _allEqs, modelica_metatype _variables, modelica_metatype _knownVariables, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationStringOrNothing,2,0) {(void*) boxptr_Uncertainties_getEquationStringOrNothing,0}};
#define boxvar_Uncertainties_getEquationStringOrNothing MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_getEquationStringOrNothing)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_unknowsMatchingToMathematicaGrid2(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_unknowsMatchingToMathematicaGrid2,2,0) {(void*) boxptr_Uncertainties_unknowsMatchingToMathematicaGrid2,0}};
#define boxvar_Uncertainties_unknowsMatchingToMathematicaGrid2 MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_unknowsMatchingToMathematicaGrid2)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_equationsToMathematicaGrid(threadData_t *threadData, modelica_metatype _equIndices, modelica_metatype _allEqs, modelica_metatype _variables, modelica_metatype _knownVariables, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_equationsToMathematicaGrid,2,0) {(void*) boxptr_Uncertainties_equationsToMathematicaGrid,0}};
#define boxvar_Uncertainties_equationsToMathematicaGrid MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_equationsToMathematicaGrid)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_numerateListIndex(threadData_t *threadData, modelica_metatype _elems, modelica_metatype _indices);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_numerateListIndex,2,0) {(void*) boxptr_Uncertainties_numerateListIndex,0}};
#define boxvar_Uncertainties_numerateListIndex MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_numerateListIndex)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_numerateList(threadData_t *threadData, modelica_metatype _elems, modelica_integer _index);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_numerateList(threadData_t *threadData, modelica_metatype _elems, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_numerateList,2,0) {(void*) boxptr_Uncertainties_numerateList,0}};
#define boxvar_Uncertainties_numerateList MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_numerateList)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_verticalGridBoxed(threadData_t *threadData, modelica_metatype _elems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_verticalGridBoxed,2,0) {(void*) boxptr_Uncertainties_verticalGridBoxed,0}};
#define boxvar_Uncertainties_verticalGridBoxed MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_verticalGridBoxed)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_verticalGrid(threadData_t *threadData, modelica_metatype _elems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_verticalGrid,2,0) {(void*) boxptr_Uncertainties_verticalGrid,0}};
#define boxvar_Uncertainties_verticalGrid MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_verticalGrid)
PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_wrapInList(threadData_t *threadData, modelica_string _text);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_wrapInList,2,0) {(void*) boxptr_Uncertainties_wrapInList,0}};
#define boxvar_Uncertainties_wrapInList MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_wrapInList)
PROTECTED_FUNCTION_STATIC void omc_Uncertainties_printSep(threadData_t *threadData, modelica_string _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Uncertainties_printSep,2,0) {(void*) boxptr_Uncertainties_printSep,0}};
#define boxvar_Uncertainties_printSep MMC_REFSTRUCTLIT(boxvar_lit_Uncertainties_printSep)

PROTECTED_FUNCTION_STATIC void omc_Uncertainties_dumpAliasSets3(threadData_t *threadData, modelica_metatype _sourceIn)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _sourceIn;
    {
      modelica_metatype _comment = NULL;
      modelica_string _str = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _comment has no default value.
      // _str has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!optionNone(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT0),stdout);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 1));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 8));
          _comment = tmpMeta6;
          /* Pattern matching succeeded */
          _str = (omc_Uncertainties_isApproximatedEquation2(threadData, _comment)?_OMC_LIT1:_OMC_LIT2);

          tmpMeta7 = stringAppend(_OMC_LIT3,_str);
          fputs(MMC_STRINGDATA(tmpMeta7),stdout);
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

PROTECTED_FUNCTION_STATIC void omc_Uncertainties_dumpAliasSets2(threadData_t *threadData, modelica_metatype _crefs, modelica_metatype _sign_values)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _crefs;
    tmp3_2 = _sign_values;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _cr_t = NULL;
      modelica_integer _i;
      modelica_metatype _i_t = NULL;
      modelica_string _s = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _cr has no default value.
      // _cr_t has no default value.
      // _i has no default value.
      // _i_t has no default value.
      // _s has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (!listEmpty(tmp3_2)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_2);
          tmpMeta8 = MMC_CDR(tmp3_2);
          tmp9 = mmc_unbox_integer(tmpMeta7);
          _cr = tmpMeta5;
          _cr_t = tmpMeta6;
          _i = tmp9  /* pattern as ty=Integer */;
          _i_t = tmpMeta8;
          /* Pattern matching succeeded */
          _s = ((_i > ((modelica_integer) 0))?_OMC_LIT4:_OMC_LIT5);

          tmpMeta10 = stringAppend(_s,omc_ComponentReference_printComponentRefStr(threadData, _cr));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT6);
          fputs(MMC_STRINGDATA(tmpMeta11),stdout);

          /* Tail recursive call */
          _crefs = _cr_t;
          _sign_values = _i_t;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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

PROTECTED_FUNCTION_STATIC void omc_Uncertainties_dumpAliasSets(threadData_t *threadData, modelica_metatype _sets)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _sets;
    {
      modelica_metatype _t = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _sign_values = NULL;
      modelica_metatype _symbols = NULL;
      modelica_metatype _signs = NULL;
      modelica_metatype _source = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _t has no default value.
      // _crefs has no default value.
      // _sign_values has no default value.
      // _symbols has no default value.
      // _signs has no default value.
      // _source has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 5));
          _symbols = tmpMeta7;
          _signs = tmpMeta8;
          _source = tmpMeta9;
          _t = tmpMeta6;
          /* Pattern matching succeeded */
          _crefs = omc_BaseHashSet_hashSetList(threadData, _symbols);

          _sign_values = omc_List_map1(threadData, _crefs, boxvar_BaseHashTable_get, _signs);

          omc_Uncertainties_dumpAliasSets2(threadData, _crefs, _sign_values);

          omc_Uncertainties_dumpAliasSets3(threadData, _source);

          fputs(MMC_STRINGDATA(_OMC_LIT7),stdout);

          /* Tail recursive call */
          _sets = _t;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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

PROTECTED_FUNCTION_STATIC modelica_integer omc_Uncertainties_getAliasSetExpressionAndSign(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _set, modelica_metatype *out_eOut)
{
  modelica_integer _signOut;
  modelica_metatype _eOut = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _signOut has no default value.
  // _eOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _set;
    {
      modelica_metatype _expl = NULL;
      modelica_metatype _signs = NULL;
      modelica_integer _sign;
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expl has no default value.
      // _signs has no default value.
      // _sign has no default value.
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _expl = tmpMeta6;
          _signs = tmpMeta7;
          /* Pattern matching succeeded */
          _sign = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _cr, _signs));

          _e = omc_BaseHashTable_get(threadData, _cr, _expl);
          tmp1_c0 = _sign;
          tmpMeta[0+1] = _e;
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
  _signOut = tmp1_c0;
  _eOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_eOut) { *out_eOut = _eOut; }
  return _signOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_getAliasSetExpressionAndSign(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _set, modelica_metatype *out_eOut)
{
  modelica_integer _signOut;
  modelica_metatype out_signOut;
  _signOut = omc_Uncertainties_getAliasSetExpressionAndSign(threadData, _cr, _set, out_eOut);
  out_signOut = mmc_mk_icon(_signOut);
  /* skip box _eOut; DAE.Exp */
  return out_signOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getAliasSetSource(threadData_t *threadData, modelica_metatype _set)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _set;
    {
      modelica_metatype _source = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _source has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          _source = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = _source;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (!optionNone(tmpMeta8)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT12;
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
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getAliasSetSymbolList(threadData_t *threadData, modelica_metatype _set)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _set;
    {
      modelica_metatype _symbols = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _symbols has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _symbols = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_BaseHashSet_hashSetList(threadData, _symbols);
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
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_pushToSetList(threadData_t *threadData, modelica_metatype _sets, modelica_metatype _cr1, modelica_metatype _e1, modelica_integer _sign1, modelica_metatype _cr2, modelica_metatype _e2, modelica_integer _sign2, modelica_metatype _source)
{
  modelica_metatype _setsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _setsOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _sets;
    {
      modelica_metatype _new_set = NULL;
      modelica_metatype _h = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _inner_sets = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _new_set has no default value.
      // _h has no default value.
      // _t has no default value.
      // _inner_sets has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _new_set = omc_Uncertainties_createSet(threadData, _cr1, _e1, _sign1, _cr2, _e2, _sign2, _source);
          tmpMeta6 = mmc_mk_cons(_new_set, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _h = tmpMeta7;
          _t = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_Uncertainties_existsInSet(threadData, _h, _cr1);
          if (1 /* true */ != tmp9) goto goto_2;

          _new_set = omc_Uncertainties_addToSet(threadData, _h, _cr1, _e1, _sign1, _cr2, _e2, _sign2, _source);
          tmpMeta10 = mmc_mk_cons(_new_set, _t);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          _h = tmpMeta11;
          _t = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = omc_Uncertainties_existsInSet(threadData, _h, _cr2);
          if (1 /* true */ != tmp13) goto goto_2;

          _new_set = omc_Uncertainties_addToSet(threadData, _h, _cr2, _e2, _sign2, _cr1, _e1, _sign1, _source);
          tmpMeta14 = mmc_mk_cons(_new_set, _t);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          _h = tmpMeta15;
          _t = tmpMeta16;
          /* Pattern matching succeeded */
          _inner_sets = omc_Uncertainties_pushToSetList(threadData, _t, _cr1, _e1, _sign1, _cr2, _e2, _sign2, _source);
          tmpMeta17 = mmc_mk_cons(_h, _inner_sets);
          tmpMeta1 = tmpMeta17;
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
  _setsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _setsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_pushToSetList(threadData_t *threadData, modelica_metatype _sets, modelica_metatype _cr1, modelica_metatype _e1, modelica_metatype _sign1, modelica_metatype _cr2, modelica_metatype _e2, modelica_metatype _sign2, modelica_metatype _source)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _setsOut = NULL;
  tmp1 = mmc_unbox_integer(_sign1);
  tmp2 = mmc_unbox_integer(_sign2);
  _setsOut = omc_Uncertainties_pushToSetList(threadData, _sets, _cr1, _e1, tmp1, _cr2, _e2, tmp2, _source);
  /* skip box _setsOut; list<Uncertainties.AliasSet> */
  return _setsOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_existsInSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype _cr)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _set;
    {
      modelica_metatype _symbols = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _symbols has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _symbols = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_BaseHashSet_has(threadData, _cr, _symbols);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_existsInSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype _cr)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_existsInSet(threadData, _set, _cr);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_updateSource(threadData_t *threadData, modelica_metatype _source1, modelica_metatype _source2)
{
  modelica_metatype _sourceOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sourceOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _source1;
    tmp4_2 = _source2;
    {
      modelica_metatype _s = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _s has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (!optionNone(tmp4_2)) goto tmp3_end;
          _s = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(_s);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _s = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(_s);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _s = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(_s);
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
  _sourceOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sourceOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_addToSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype _cr1, modelica_metatype _e1, modelica_integer _sign1In, modelica_metatype _cr2, modelica_metatype _e2, modelica_integer _sign2In, modelica_metatype _sourceIn)
{
  modelica_metatype _setOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _setOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;modelica_integer tmp4_3;
    tmp4_1 = _set;
    tmp4_2 = _sign1In;
    tmp4_3 = _sign2In;
    {
      modelica_integer _current_sign;
      modelica_integer _sign1_temp;
      modelica_integer _sign1;
      modelica_integer _sign2;
      modelica_metatype _symbols = NULL;
      modelica_metatype _new_symbols = NULL;
      modelica_metatype _signs = NULL;
      modelica_metatype _new_signs = NULL;
      modelica_metatype _expl = NULL;
      modelica_metatype _new_expl = NULL;
      modelica_metatype _source_current = NULL;
      modelica_metatype _source_new = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _current_sign has no default value.
      // _sign1_temp has no default value.
      // _sign1 has no default value.
      // _sign2 has no default value.
      // _symbols has no default value.
      // _new_symbols has no default value.
      // _signs has no default value.
      // _new_signs has no default value.
      // _expl has no default value.
      // _new_expl has no default value.
      // _source_current has no default value.
      // _source_new has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _symbols = tmpMeta6;
          _expl = tmpMeta7;
          _signs = tmpMeta8;
          _source_current = tmpMeta9;
          _sign1 = tmp4_2;
          _sign2 = tmp4_3;
          /* Pattern matching succeeded */
          _current_sign = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _cr1, _signs));

          _sign1_temp = _sign1;

          _sign1 = ((_sign1_temp == _current_sign)?_sign1:(-_sign1));

          _sign2 = ((_sign1_temp == _current_sign)?_sign2:(-_sign2));

          tmpMeta10 = mmc_mk_box2(0, _cr2, mmc_mk_integer(_sign2));
          _new_signs = omc_BaseHashTable_add(threadData, tmpMeta10, _signs);

          _new_symbols = omc_BaseHashSet_add(threadData, _cr2, _symbols);

          tmpMeta11 = mmc_mk_box2(0, _cr2, _e2);
          _new_expl = omc_BaseHashTable_add(threadData, tmpMeta11, _expl);

          _source_new = omc_Uncertainties_updateSource(threadData, _source_current, _sourceIn);
          tmpMeta12 = mmc_mk_box5(3, &Uncertainties_AliasSet_ALIASSET__desc, _new_symbols, _new_expl, _new_signs, _source_new);
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
  _setOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _setOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_addToSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype _cr1, modelica_metatype _e1, modelica_metatype _sign1In, modelica_metatype _cr2, modelica_metatype _e2, modelica_metatype _sign2In, modelica_metatype _sourceIn)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _setOut = NULL;
  tmp1 = mmc_unbox_integer(_sign1In);
  tmp2 = mmc_unbox_integer(_sign2In);
  _setOut = omc_Uncertainties_addToSet(threadData, _set, _cr1, _e1, tmp1, _cr2, _e2, tmp2, _sourceIn);
  /* skip box _setOut; Uncertainties.AliasSet */
  return _setOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_createSet(threadData_t *threadData, modelica_metatype _cr1, modelica_metatype _e1, modelica_integer _sign1In, modelica_metatype _cr2, modelica_metatype _e2, modelica_integer _sign2In, modelica_metatype _source)
{
  modelica_metatype _setOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _setOut has no default value.
  { /* match expression */
    modelica_integer tmp4_1;modelica_integer tmp4_2;
    tmp4_1 = _sign1In;
    tmp4_2 = _sign2In;
    {
      modelica_integer _sign1;
      modelica_integer _sign2;
      modelica_metatype _new_symbols = NULL;
      modelica_metatype _new_signs = NULL;
      modelica_metatype _new_expl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sign1 has no default value.
      // _sign2 has no default value.
      // _new_symbols has no default value.
      // _new_signs has no default value.
      // _new_expl has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          _sign1 = tmp4_1;
          _sign2 = tmp4_2;
          /* Pattern matching succeeded */
          _new_signs = omc_HashTable_emptyHashTable(threadData);

          _new_symbols = omc_HashSet_emptyHashSet(threadData);

          _new_expl = omc_HashTable2_emptyHashTable(threadData);

          tmpMeta6 = mmc_mk_box2(0, _cr1, mmc_mk_integer(_sign1));
          _new_signs = omc_BaseHashTable_add(threadData, tmpMeta6, _new_signs);

          tmpMeta7 = mmc_mk_box2(0, _cr2, mmc_mk_integer(_sign2));
          _new_signs = omc_BaseHashTable_add(threadData, tmpMeta7, _new_signs);

          _new_symbols = omc_BaseHashSet_add(threadData, _cr1, _new_symbols);

          _new_symbols = omc_BaseHashSet_add(threadData, _cr2, _new_symbols);

          tmpMeta8 = mmc_mk_box2(0, _cr1, _e1);
          _new_expl = omc_BaseHashTable_add(threadData, tmpMeta8, _new_expl);

          tmpMeta9 = mmc_mk_box2(0, _cr2, _e2);
          _new_expl = omc_BaseHashTable_add(threadData, tmpMeta9, _new_expl);
          tmpMeta10 = mmc_mk_box5(3, &Uncertainties_AliasSet_ALIASSET__desc, _new_symbols, _new_expl, _new_signs, _source);
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
  _setOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _setOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_createSet(threadData_t *threadData, modelica_metatype _cr1, modelica_metatype _e1, modelica_metatype _sign1In, modelica_metatype _cr2, modelica_metatype _e2, modelica_metatype _sign2In, modelica_metatype _source)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _setOut = NULL;
  tmp1 = mmc_unbox_integer(_sign1In);
  tmp2 = mmc_unbox_integer(_sign2In);
  _setOut = omc_Uncertainties_createSet(threadData, _cr1, _e1, tmp1, _cr2, _e2, tmp2, _source);
  /* skip box _setOut; Uncertainties.AliasSet */
  return _setOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getSourceIfApproximated(threadData_t *threadData, modelica_metatype _eqn)
{
  modelica_metatype _source = NULL;
  modelica_metatype _temp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _source has no default value.
  // _temp has no default value.
  _temp = omc_BackendEquation_equationSource(threadData, _eqn);

  _source = (omc_Uncertainties_isApproximatedEquation(threadData, _eqn)?mmc_mk_some(_temp):mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  return _source;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_addPairToSet(threadData_t *threadData, modelica_metatype _sets, modelica_metatype _eqn_acc, modelica_metatype _eqn, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype *out_eqn_acc_out)
{
  modelica_metatype _out = NULL;
  modelica_metatype _eqn_acc_out = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _eqn_acc_out has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _lhs;
    tmp4_2 = _rhs;
    {
      modelica_metatype _cr1 = NULL;
      modelica_metatype _cr2 = NULL;
      modelica_metatype _new_sets = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _source = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr1 has no default value.
      // _cr2 has no default value.
      // _new_sets has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _source has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _e1 = tmp4_1;
          _cr1 = tmpMeta6;
          _e2 = tmp4_2;
          _cr2 = tmpMeta7;
          /* Pattern matching succeeded */
          _source = omc_Uncertainties_getSourceIfApproximated(threadData, _eqn);

          _new_sets = omc_Uncertainties_pushToSetList(threadData, _sets, _cr1, _e1, ((modelica_integer) 1), _cr2, _e2, ((modelica_integer) 1), _source);
          tmpMeta[0+0] = _new_sets;
          tmpMeta[0+1] = _eqn_acc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,5,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          
          _e1 = tmp4_1;
          _cr1 = tmpMeta8;
          _e2 = tmpMeta10;
          _cr2 = tmpMeta11;
          /* Pattern matching succeeded */
          _source = omc_Uncertainties_getSourceIfApproximated(threadData, _eqn);

          _new_sets = omc_Uncertainties_pushToSetList(threadData, _sets, _cr1, _e1, ((modelica_integer) 1), _cr2, _e2, ((modelica_integer) -1), _source);
          tmpMeta[0+0] = _new_sets;
          tmpMeta[0+1] = _eqn_acc;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,5,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,6,2) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          
          _e2 = tmp4_2;
          _cr2 = tmpMeta12;
          _e1 = tmp4_1;
          _cr1 = tmpMeta15;
          /* Pattern matching succeeded */
          _source = omc_Uncertainties_getSourceIfApproximated(threadData, _eqn);

          _new_sets = omc_Uncertainties_pushToSetList(threadData, _sets, _cr1, _e1, ((modelica_integer) -1), _cr2, _e2, ((modelica_integer) 1), _source);
          tmpMeta[0+0] = _new_sets;
          tmpMeta[0+1] = _eqn_acc;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,5,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,6,2) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,5,1) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,6,2) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          
          _e1 = tmp4_1;
          _cr1 = tmpMeta18;
          _e2 = tmp4_2;
          _cr2 = tmpMeta21;
          /* Pattern matching succeeded */
          _source = omc_Uncertainties_getSourceIfApproximated(threadData, _eqn);

          _new_sets = omc_Uncertainties_pushToSetList(threadData, _sets, _cr1, _e1, ((modelica_integer) -1), _cr2, _e2, ((modelica_integer) -1), _source);
          tmpMeta[0+0] = _new_sets;
          tmpMeta[0+1] = _eqn_acc;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta22 = mmc_mk_cons(_eqn, _eqn_acc);
          tmpMeta[0+0] = _sets;
          tmpMeta[0+1] = tmpMeta22;
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
  _out = tmpMeta[0+0];
  _eqn_acc_out = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_eqn_acc_out) { *out_eqn_acc_out = _eqn_acc_out; }
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_separateAliasSetsAndEquations(threadData_t *threadData, modelica_metatype _eqnIn, modelica_metatype _sets, modelica_metatype _eqn_accIn, modelica_metatype *out_eqn_accOut)
{
  modelica_metatype _setsOut = NULL;
  modelica_metatype _eqn_accOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _setsOut has no default value.
  // _eqn_accOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqnIn;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _eqn_acc = NULL;
      modelica_metatype _new_sets = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _eqn has no default value.
      // _t has no default value.
      // _eqn_acc has no default value.
      // _new_sets has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          _eqn_acc = listReverse(_eqn_accIn);
          tmpMeta[0+0] = _sets;
          tmpMeta[0+1] = _eqn_acc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          
          _eqn = tmpMeta6;
          _e1 = tmpMeta8;
          _e2 = tmpMeta9;
          _t = tmpMeta7;
          /* Pattern matching succeeded */
          _new_sets = omc_Uncertainties_addPairToSet(threadData, _sets, _eqn_accIn, _eqn, _e1, _e2 ,&_eqn_acc);
          /* Tail recursive call */
          _eqnIn = _t;
          _sets = _new_sets;
          _eqn_accIn = _eqn_acc;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,4) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          
          _eqn = tmpMeta10;
          _cr = tmpMeta12;
          _e2 = tmpMeta13;
          _t = tmpMeta11;
          /* Pattern matching succeeded */
          _e1 = omc_Expression_crefExp(threadData, _cr);

          _new_sets = omc_Uncertainties_addPairToSet(threadData, _sets, _eqn_accIn, _eqn, _e1, _e2 ,&_eqn_acc);
          /* Tail recursive call */
          _eqnIn = _t;
          _sets = _new_sets;
          _eqn_accIn = _eqn_acc;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          _eqn = tmpMeta14;
          _t = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_cons(_eqn, _eqn_accIn);
          /* Tail recursive call */
          _eqnIn = _t;
          _eqn_accIn = tmpMeta16;
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
  _setsOut = tmpMeta[0+0];
  _eqn_accOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_eqn_accOut) { *out_eqn_accOut = _eqn_accOut; }
  return _setsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_createReplacementsAndEquations(threadData_t *threadData, modelica_metatype _solutions, modelica_metatype _sets, modelica_metatype _vars, modelica_metatype _globalKnownVars, modelica_metatype _repl_acc, modelica_metatype _eqns_acc, modelica_metatype _removed_vars_acc, modelica_metatype *out_eqnsOut, modelica_metatype *out_removed_vars)
{
  modelica_metatype _replOut = NULL;
  modelica_metatype _eqnsOut = NULL;
  modelica_metatype _removed_vars = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replOut has no default value.
  // _eqnsOut has no default value.
  // _removed_vars has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _solutions;
    tmp4_2 = _sets;
    {
      modelica_metatype _symbols = NULL;
      modelica_metatype _solt = NULL;
      modelica_metatype _new_removed_vars = NULL;
      modelica_metatype _sett = NULL;
      modelica_metatype _set = NULL;
      modelica_metatype _solution = NULL;
      modelica_metatype _new_repl = NULL;
      modelica_metatype _new_eqns = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _symbols has no default value.
      // _solt has no default value.
      // _new_removed_vars has no default value.
      // _sett has no default value.
      // _set has no default value.
      // _solution has no default value.
      // _new_repl has no default value.
      // _new_eqns has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _repl_acc;
          tmpMeta[0+1] = _eqns_acc;
          tmpMeta[0+2] = _removed_vars_acc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _solution = tmpMeta6;
          _solt = tmpMeta7;
          _set = tmpMeta8;
          _sett = tmpMeta9;
          /* Pattern matching succeeded */
          _symbols = omc_Uncertainties_getAliasSetSymbolList(threadData, _set);

          _new_repl = omc_Uncertainties_createReplacementsAndEquationsForSet(threadData, _solution, _symbols, _set, _vars, _globalKnownVars, _repl_acc, _eqns_acc, _removed_vars_acc ,&_new_eqns ,&_new_removed_vars);
          /* Tail recursive call */
          _solutions = _solt;
          _sets = _sett;
          _repl_acc = _new_repl;
          _eqns_acc = _new_eqns;
          _removed_vars_acc = _new_removed_vars;
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
  _replOut = tmpMeta[0+0];
  _eqnsOut = tmpMeta[0+1];
  _removed_vars = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_eqnsOut) { *out_eqnsOut = _eqnsOut; }
  if (out_removed_vars) { *out_removed_vars = _removed_vars; }
  return _replOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_createReplacementsAndEquationsForSet(threadData_t *threadData, modelica_metatype _solution, modelica_metatype _symbols, modelica_metatype _set, modelica_metatype _vars, modelica_metatype _globalKnownVars, modelica_metatype _repl_acc, modelica_metatype _eqns_acc, modelica_metatype _removed_vars_acc, modelica_metatype *out_eqnsOut, modelica_metatype *out_removed_varsOut)
{
  modelica_metatype _replOut = NULL;
  modelica_metatype _eqnsOut = NULL;
  modelica_metatype _removed_varsOut = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replOut has no default value.
  // _eqnsOut has no default value.
  // _removed_varsOut has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _symbols;
    {
      modelica_metatype _t = NULL;
      modelica_metatype _new_removed_vars = NULL;
      modelica_metatype _h = NULL;
      modelica_metatype _e = NULL;
      modelica_integer _sign1;
      modelica_integer _sign2;
      modelica_integer _sign;
      modelica_metatype _new_repl = NULL;
      modelica_metatype _new_eqns = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _source = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t has no default value.
      // _new_removed_vars has no default value.
      // _h has no default value.
      // _e has no default value.
      // _sign1 has no default value.
      // _sign2 has no default value.
      // _sign has no default value.
      // _new_repl has no default value.
      // _new_eqns has no default value.
      // _eqn has no default value.
      // _source has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _repl_acc;
          tmpMeta[0+1] = _eqns_acc;
          tmpMeta[0+2] = _removed_vars_acc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _h = tmpMeta6;
          _t = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = omc_ComponentReference_crefEqual(threadData, _solution, _h);
          if (1 /* true */ != tmp8) goto goto_2;
          tmpMeta[0+0] = omc_Uncertainties_createReplacementsAndEquationsForSet(threadData, _solution, _t, _set, _vars, _globalKnownVars, _repl_acc, _eqns_acc, _removed_vars_acc, &tmpMeta[0+1], &tmpMeta[0+2]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          _h = tmpMeta9;
          _t = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = omc_Uncertainties_isRemovableSymbol(threadData, _h, _vars, _globalKnownVars);
          if (1 /* true */ != tmp11) goto goto_2;

          _sign1 = omc_Uncertainties_getAliasSetExpressionAndSign(threadData, _solution, _set ,&_e);

          _sign2 = omc_Uncertainties_getAliasSetExpressionAndSign(threadData, _h, _set, NULL);

          _sign = ((_sign2 < ((modelica_integer) 0))?(-_sign1):_sign1);

          _e = omc_Uncertainties_fixSingOfExp(threadData, _sign, _e);

          _new_repl = omc_BackendVarTransform_addReplacement(threadData, _repl_acc, _h, _e, mmc_mk_none());

          tmpMeta12 = mmc_mk_cons(_h, _removed_vars_acc);
          _new_removed_vars = tmpMeta12;
          tmpMeta[0+0] = omc_Uncertainties_createReplacementsAndEquationsForSet(threadData, _solution, _t, _set, _vars, _globalKnownVars, _new_repl, _eqns_acc, _new_removed_vars, &tmpMeta[0+1], &tmpMeta[0+2]);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_boolean tmp15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_1);
          tmpMeta14 = MMC_CDR(tmp4_1);
          _h = tmpMeta13;
          _t = tmpMeta14;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp15 = omc_Uncertainties_isRemovableSymbol(threadData, _h, _vars, _globalKnownVars);
          if (0 /* false */ != tmp15) goto goto_2;

          _sign1 = omc_Uncertainties_getAliasSetExpressionAndSign(threadData, _solution, _set ,&_e);

          _sign2 = omc_Uncertainties_getAliasSetExpressionAndSign(threadData, _h, _set, NULL);

          _sign = ((_sign2 < ((modelica_integer) 0))?(-_sign1):_sign1);

          _e = omc_Uncertainties_fixSingOfExp(threadData, _sign, _e);

          _source = omc_Uncertainties_getAliasSetSource(threadData, _set);

          _eqn = omc_Uncertainties_generateEquation(threadData, _h, _e, _source);

          tmpMeta16 = mmc_mk_cons(_eqn, _eqns_acc);
          _new_eqns = tmpMeta16;
          tmpMeta[0+0] = omc_Uncertainties_createReplacementsAndEquationsForSet(threadData, _solution, _t, _set, _vars, _globalKnownVars, _repl_acc, _new_eqns, _removed_vars_acc, &tmpMeta[0+1], &tmpMeta[0+2]);
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
  _replOut = tmpMeta[0+0];
  _eqnsOut = tmpMeta[0+1];
  _removed_varsOut = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_eqnsOut) { *out_eqnsOut = _eqnsOut; }
  if (out_removed_varsOut) { *out_removed_varsOut = _removed_varsOut; }
  return _replOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_generateEquation(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _source)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  tmpMeta1 = mmc_mk_box5(5, &BackendDAE_Equation_SOLVED__EQUATION__desc, _cr, _e, _source, _OMC_LIT15);
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_fixSingOfExp(threadData_t *threadData, modelica_integer _sign, modelica_metatype _eIn)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = _sign;
    {
      modelica_metatype _tp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tp has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (-1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _eIn);
          tmpMeta6 = mmc_mk_box2(8, &DAE_Operator_UMINUS__desc, _tp);
          tmpMeta7 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, tmpMeta6, _eIn);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _eIn;
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
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_fixSingOfExp(threadData_t *threadData, modelica_metatype _sign, modelica_metatype _eIn)
{
  modelica_integer tmp1;
  modelica_metatype _out = NULL;
  tmp1 = mmc_unbox_integer(_sign);
  _out = omc_Uncertainties_fixSingOfExp(threadData, tmp1, _eIn);
  /* skip box _out; DAE.Exp */
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isRemovableSymbol(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars, modelica_metatype _globalKnownVars)
{
  modelica_boolean _out;
  modelica_metatype _var = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _var has no default value.
  _var = omc_Uncertainties_getAllVariablesForCref(threadData, _cr, _vars, _globalKnownVars);

  _out = omc_Uncertainties_isRemovableVarList(threadData, _var);
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isRemovableSymbol(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars, modelica_metatype _globalKnownVars)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_isRemovableSymbol(threadData, _cr, _vars, _globalKnownVars);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isRemovableVarList(threadData_t *threadData, modelica_metatype _vars)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _vars;
    {
      modelica_boolean _r1;
      modelica_boolean _r2;
      modelica_metatype _h = NULL;
      modelica_metatype _t = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r1 has no default value.
      // _r2 has no default value.
      // _h has no default value.
      // _t has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _h = tmpMeta6;
          _t = tmpMeta7;
          /* Pattern matching succeeded */
          _r1 = omc_Uncertainties_isRemovableVar(threadData, _h);

          _r2 = omc_Uncertainties_isRemovableVarList(threadData, _t);
          tmp1 = (_r1 && _r2);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isRemovableVarList(threadData_t *threadData, modelica_metatype _vars)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_isRemovableVarList(threadData, _vars);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isRemovableVar(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _out;
  modelica_metatype _cr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _cr has no default value.
  _out = ((!omc_BackendVariable_isStateVar(threadData, _var)) && (!omc_BackendVariable_varHasUncertainValueRefine(threadData, _var)));
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isRemovableVar(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_isRemovableVar(threadData, _var);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_solveAliasSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype _vars, modelica_metatype _globalKnownVars)
{
  modelica_metatype _out = NULL;
  modelica_metatype _names = NULL;
  modelica_metatype _name_rate_list = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _names has no default value.
  // _name_rate_list has no default value.
  _names = omc_Uncertainties_getAliasSetSymbolList(threadData, _set);

  _name_rate_list = omc_List_map2(threadData, _names, boxvar_Uncertainties_rateSetElement, _vars, _globalKnownVars);

  _name_rate_list = omc_List_sort(threadData, _name_rate_list, boxvar_Uncertainties_setPairSortFunction);

  /* Pattern-matching assignment */
  tmpMeta1 = _name_rate_list;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  _out = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_setPairSortFunction(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b)
{
  modelica_boolean _out;
  modelica_real _av;
  modelica_real _bv;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_real tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _av has no default value.
  // _bv has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _a;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_real(tmpMeta2);
  _av = tmp3  /* pattern as ty=Real */;

  /* Pattern-matching assignment */
  tmpMeta4 = _b;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp6 = mmc_unbox_real(tmpMeta5);
  _bv = tmp6  /* pattern as ty=Real */;

  _out = (_av < _bv);
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_setPairSortFunction(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_setPairSortFunction(threadData, _a, _b);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_rateSetElement(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars, modelica_metatype _globalKnownVars)
{
  modelica_metatype _out = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _var has no default value.
  _var = omc_Uncertainties_getAllVariablesForCref(threadData, _cr, _vars, _globalKnownVars);

  tmpMeta1 = mmc_mk_box2(0, _cr, mmc_mk_real(omc_Uncertainties_rateVariableList(threadData, _var)));
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_Uncertainties_rateVariableList(threadData_t *threadData, modelica_metatype _vars)
{
  modelica_real _out;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _vars;
    {
      modelica_real _r1;
      modelica_real _r2;
      modelica_metatype _h = NULL;
      modelica_metatype _t = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r1 has no default value.
      // _r2 has no default value.
      // _h has no default value.
      // _t has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0.0;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _h = tmpMeta6;
          _t = tmpMeta7;
          /* Pattern matching succeeded */
          _r1 = omc_Uncertainties_rateVariable(threadData, _h);

          _r2 = omc_Uncertainties_rateVariableList(threadData, _t);
          tmp1 = ((_r1 > _r2)?_r1:_r2);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_rateVariableList(threadData_t *threadData, modelica_metatype _vars)
{
  modelica_real _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_rateVariableList(threadData, _vars);
  out_out = mmc_mk_rcon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_Uncertainties_rateVariable(threadData_t *threadData, modelica_metatype _var)
{
  modelica_real _out;
  modelica_real _acc;
  modelica_real _i;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _acc has no default value.
  // _i has no default value.
  // _cr has no default value.
  _acc = 0.0;

  /* Pattern-matching assignment */
  tmpMeta1 = _var;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _cr = tmpMeta2;

  tmp3 = 1.0 + ((modelica_real)omc_ComponentReference_crefDepth(threadData, _cr));
  if (tmp3 == 0) {MMC_THROW_INTERNAL();}
  _i = (1.0) / tmp3;

  _acc = _acc + _i;

  _i = (omc_BackendVariable_isParam(threadData, _var)?3.0:0.0);

  _acc = _acc + _i;

  _i = (omc_BackendVariable_isStateVar(threadData, _var)?5.0:0.0);

  _acc = _acc + _i;

  _i = (omc_BackendVariable_varHasUncertainValueRefine(threadData, _var)?7.0:0.0);

  _acc = _acc + _i;

  _out = _acc;
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_rateVariable(threadData_t *threadData, modelica_metatype _var)
{
  modelica_real _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_rateVariable(threadData, _var);
  out_out = mmc_mk_rcon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getAllVariablesForCref(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars, modelica_metatype _globalKnownVars)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
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
          tmpMeta1 = omc_BackendVariable_getVar(threadData, _cr, _vars, NULL);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = omc_BackendVariable_getVar(threadData, _cr, _globalKnownVars, NULL);
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
  _outVarLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVarLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_addCrefsToHashTable(threadData_t *threadData, modelica_metatype _crefs, modelica_metatype _table)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _crefs;
    {
      modelica_metatype _h = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _new_table = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _h has no default value.
      // _t has no default value.
      // _new_table has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _table;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _h = tmpMeta6;
          _t = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(0, _h, mmc_mk_integer(((modelica_integer) 0)));
          _new_table = omc_BaseHashTable_add(threadData, tmpMeta8, _table);
          /* Tail recursive call */
          _crefs = _t;
          _table = _new_table;
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
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeSimpleEquationsUC(threadData_t *threadData, modelica_metatype _daeIn)
{
  modelica_metatype _daeOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _daeOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _daeIn;
    {
      modelica_metatype _dae = NULL;
      modelica_metatype _sets = NULL;
      modelica_metatype _other_eqns = NULL;
      modelica_metatype _simple_eqns = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _globalKnownVars = NULL;
      modelica_metatype _set_solutions = NULL;
      modelica_metatype _removed_vars = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _removed_vars_table = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dae has no default value.
      // _sets has no default value.
      // _other_eqns has no default value.
      // _simple_eqns has no default value.
      // _eqns has no default value.
      // _vars has no default value.
      // _globalKnownVars has no default value.
      // _set_solutions has no default value.
      // _removed_vars has no default value.
      // _repl has no default value.
      // _removed_vars_table has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          
          _dae = tmp4_1;
          _vars = tmpMeta9;
          _eqns = tmpMeta10;
          _globalKnownVars = tmpMeta12;
          /* Pattern matching succeeded */
          _repl = omc_BackendVarTransform_emptyReplacements(threadData);

          _removed_vars_table = omc_HashTable_emptyHashTable(threadData);

          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          _sets = omc_Uncertainties_separateAliasSetsAndEquations(threadData, omc_BackendEquation_equationList(threadData, _eqns), tmpMeta13, tmpMeta14 ,&_other_eqns);

          _set_solutions = omc_List_map2(threadData, _sets, boxvar_Uncertainties_solveAliasSet, _vars, _globalKnownVars);

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          _repl = omc_Uncertainties_createReplacementsAndEquations(threadData, _set_solutions, _sets, _vars, _globalKnownVars, _repl, tmpMeta15, tmpMeta16 ,&_simple_eqns ,&_removed_vars);

          _other_eqns = omc_BackendVarTransform_replaceEquations(threadData, _other_eqns, _repl, mmc_mk_none(), NULL);

          _removed_vars_table = omc_Uncertainties_addCrefsToHashTable(threadData, _removed_vars, _removed_vars_table);

          _vars = omc_Uncertainties_moveVariables(threadData, _vars, _globalKnownVars, _removed_vars_table ,&_globalKnownVars);

          _dae = omc_Uncertainties_setDaeVars(threadData, _dae, _vars);

          _dae = omc_BackendDAEUtil_setDAEGlobalKnownVars(threadData, _dae, _globalKnownVars);

          _dae = omc_Uncertainties_setDaeEqns(threadData, _dae, omc_BackendEquation_listEquation(threadData, listAppend(_simple_eqns, _other_eqns)), 0 /* false */);

          _dae = omc_BackendDAEUtil_transformBackendDAE(threadData, _dae, _OMC_LIT19, mmc_mk_none(), mmc_mk_none());
          tmpMeta1 = omc_BackendDAEUtil_mapEqSystem1(threadData, _dae, boxvar_BackendDAEUtil_getAdjacencyMatrixfromOptionForMapEqSystem, _OMC_LIT20);
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
  _daeOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _daeOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_mergeBy1(threadData_t *threadData, modelica_metatype _inLeft, modelica_metatype _inRight, modelica_fnptr _inCompFunc, modelica_metatype _inArgument1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inLeft;
    tmp4_2 = _inRight;
    {
      modelica_metatype _l = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _l_rest = NULL;
      modelica_metatype _r_rest = NULL;
      modelica_metatype _res = NULL;
      modelica_integer _ri;
      modelica_integer _li;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _l has no default value.
      // _r has no default value.
      // _l_rest has no default value.
      // _r_rest has no default value.
      // _res has no default value.
      // _ri has no default value.
      // _li has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_2);
          tmpMeta10 = MMC_CDR(tmp4_2);
          _l = tmpMeta7;
          _l_rest = tmpMeta8;
          _r = tmpMeta9;
          /* Pattern matching succeeded */
          _ri = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _r, _inArgument1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _r, _inArgument1));

          _li = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), _l, _inArgument1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, _l, _inArgument1));

          /* Pattern-matching assignment */
          tmp11 = (_ri > _li);
          if (1 /* true */ != tmp11) goto goto_2;

          _res = omc_Uncertainties_mergeBy1(threadData, _l_rest, _inRight, ((modelica_fnptr) _inCompFunc), _inArgument1);
          tmpMeta12 = mmc_mk_cons(_l, _res);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_1);
          tmpMeta14 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_2);
          tmpMeta16 = MMC_CDR(tmp4_2);
          _r = tmpMeta15;
          _r_rest = tmpMeta16;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _res = omc_Uncertainties_mergeBy1(threadData, _inLeft, _r_rest, ((modelica_fnptr) _inCompFunc), _inArgument1);
          tmpMeta17 = mmc_mk_cons(_r, _res);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 3: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inRight;
          goto tmp3_done;
        }
        case 4: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inLeft;
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
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

DLLDirection
modelica_metatype omc_Uncertainties_sortBy1(threadData_t *threadData, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_metatype _inArgument1)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inList;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _left = NULL;
      modelica_metatype _right = NULL;
      modelica_integer _middle;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _left has no default value.
      // _right has no default value.
      // _middle has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta8)) goto tmp3_end;
          _e = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 2: {
          modelica_integer tmp10;
          
          /* Pattern matching succeeded */
          tmp10 = ((modelica_integer) 2);
          if (tmp10 == 0) {goto goto_2;}
          _middle = modelica_div_integer(listLength(_inList),tmp10).quot;

          _left = omc_List_split(threadData, _inList, _middle ,&_right);

          _left = omc_Uncertainties_sortBy1(threadData, _left, ((modelica_fnptr) _inCompFunc), _inArgument1);

          _right = omc_Uncertainties_sortBy1(threadData, _right, ((modelica_fnptr) _inCompFunc), _inArgument1);
          tmpMeta1 = omc_Uncertainties_mergeBy1(threadData, _left, _right, ((modelica_fnptr) _inCompFunc), _inArgument1);
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
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_moveVariables2(threadData_t *threadData, modelica_metatype _inVarLst1, modelica_metatype _inVarLst2, modelica_metatype _hashTable, modelica_metatype *out_outVarLst2)
{
  modelica_metatype _outVarLst1 = NULL;
  modelica_metatype _outVarLst2 = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst1 has no default value.
  // _outVarLst2 has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _inVarLst1;
    tmp4_2 = _inVarLst2;
    tmp4_3 = _hashTable;
    {
      modelica_metatype _globalKnownVars = NULL;
      modelica_metatype _vs_1 = NULL;
      modelica_metatype _knvars_1 = NULL;
      modelica_metatype _vs = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _mvars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _globalKnownVars has no default value.
      // _vs_1 has no default value.
      // _knvars_1 has no default value.
      // _vs has no default value.
      // _v has no default value.
      // _cr has no default value.
      // _mvars has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _globalKnownVars = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = _globalKnownVars;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _v = tmpMeta7;
          _cr = tmpMeta9;
          _vs = tmpMeta8;
          _globalKnownVars = tmp4_2;
          _mvars = tmp4_3;
          /* Pattern matching succeeded */
          if(omc_BaseHashTable_hasKey(threadData, _cr, _mvars))
          {
            _vs_1 = omc_Uncertainties_moveVariables2(threadData, _vs, _globalKnownVars, _mvars ,&_knvars_1);

            tmpMeta10 = mmc_mk_cons(_v, _knvars_1);
            _knvars_1 = tmpMeta10;
          }
          else
          {
            _vs_1 = omc_Uncertainties_moveVariables2(threadData, _vs, _globalKnownVars, _mvars ,&_knvars_1);

            tmpMeta11 = mmc_mk_cons(_v, _vs_1);
            _vs_1 = tmpMeta11;
          }
          tmpMeta[0+0] = _vs_1;
          tmpMeta[0+1] = _knvars_1;
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
  _outVarLst1 = tmpMeta[0+0];
  _outVarLst2 = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outVarLst2) { *out_outVarLst2 = _outVarLst2; }
  return _outVarLst1;
}

DLLDirection
modelica_metatype omc_Uncertainties_moveVariables(threadData_t *threadData, modelica_metatype _inVariables1, modelica_metatype _inVariables2, modelica_metatype _hashTable, modelica_metatype *out_outVariables2)
{
  modelica_metatype _outVariables1 = NULL;
  modelica_metatype _outVariables2 = NULL;
  modelica_metatype _lst1 = NULL;
  modelica_metatype _lst2 = NULL;
  modelica_metatype _lst1_1 = NULL;
  modelica_metatype _lst2_1 = NULL;
  modelica_metatype _v1 = NULL;
  modelica_metatype _v2 = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _globalKnownVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables1 has no default value.
  // _outVariables2 has no default value.
  // _lst1 has no default value.
  // _lst2 has no default value.
  // _lst1_1 has no default value.
  // _lst2_1 has no default value.
  // _v1 has no default value.
  // _v2 has no default value.
  // _vars has no default value.
  // _globalKnownVars has no default value.
  _lst1 = omc_BackendVariable_varList(threadData, _inVariables1);

  _lst2 = omc_BackendVariable_varList(threadData, _inVariables2);

  _lst1_1 = omc_Uncertainties_moveVariables2(threadData, _lst1, _lst2, _hashTable ,&_lst2_1);

  _v1 = omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013));

  _v2 = omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013));

  _outVariables1 = omc_BackendVariable_addVars(threadData, _lst1_1, _v1);

  _outVariables2 = omc_BackendVariable_addVars(threadData, _lst2_1, _v2);
  _return: OMC_LABEL_UNUSED
  if (out_outVariables2) { *out_outVariables2 = _outVariables2; }
  return _outVariables1;
}

DLLDirection
modelica_metatype omc_Uncertainties_setVarBindingOpt(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _bindExp)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _kind = NULL;
  modelica_metatype _dir = NULL;
  modelica_metatype _prl = NULL;
  modelica_metatype _tp = NULL;
  modelica_metatype _bind = NULL;
  modelica_metatype _tplExp = NULL;
  modelica_metatype _ad = NULL;
  modelica_metatype _source = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype _ts = NULL;
  modelica_metatype _hideResult = NULL;
  modelica_metatype _cmt = NULL;
  modelica_metatype _ct = NULL;
  modelica_metatype _innerOuter = NULL;
  modelica_boolean _encrypted;
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
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _name has no default value.
  // _kind has no default value.
  // _dir has no default value.
  // _prl has no default value.
  // _tp has no default value.
  // _bind has no default value.
  // _tplExp has no default value.
  // _ad has no default value.
  // _source has no default value.
  // _attr has no default value.
  // _ts has no default value.
  // _hideResult has no default value.
  // _cmt has no default value.
  // _ct has no default value.
  // _innerOuter has no default value.
  // _encrypted has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVar;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 8));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 9));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 10));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 12));
  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 13));
  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 14));
  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 15));
  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 16));
  tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 19));
  tmp18 = mmc_unbox_integer(tmpMeta17);
  _name = tmpMeta2;
  _kind = tmpMeta3;
  _dir = tmpMeta4;
  _prl = tmpMeta5;
  _tp = tmpMeta6;
  _bind = tmpMeta7;
  _tplExp = tmpMeta8;
  _ad = tmpMeta9;
  _source = tmpMeta10;
  _attr = tmpMeta11;
  _ts = tmpMeta12;
  _hideResult = tmpMeta13;
  _cmt = tmpMeta14;
  _ct = tmpMeta15;
  _innerOuter = tmpMeta16;
  _encrypted = tmp18  /* pattern as ty=Boolean */;

  tmpMeta19 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _name, _kind, _dir, _prl, _tp, _bindExp, _tplExp, _ad, _source, _attr, _ts, _hideResult, _cmt, _ct, _innerOuter, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(_encrypted));
  _outVar = tmpMeta19;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_Uncertainties_setVarCref(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _cr)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = _cr;
  _outVar = tmpMeta1;

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[17] = mmc_mk_boolean(0 /* false */);
  _outVar = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_Uncertainties_applyOptionSimplify(threadData_t *threadData, modelica_metatype _bindExpIn)
{
  modelica_metatype _bindExpOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _bindExpOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _bindExpIn;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _e = tmpMeta6;
          /* Pattern matching succeeded */
          _e1 = omc_ExpressionSimplify_simplify1(threadData, _e, NULL);
          tmpMeta1 = mmc_mk_some(_e1);
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
  _bindExpOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _bindExpOut;
}

DLLDirection
modelica_metatype omc_Uncertainties_replaceExpOpt(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _repl, modelica_metatype _funcOpt)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _e = tmpMeta6;
          /* Pattern matching succeeded */
          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, _funcOpt, NULL);
          tmpMeta1 = mmc_mk_some(_e);
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

DLLDirection
modelica_metatype omc_Uncertainties_varBindingOpt(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _v;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          
          _exp = tmpMeta6;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_replaceVars(threadData_t *threadData, modelica_metatype _invarLst, modelica_metatype _repl, modelica_metatype _func, modelica_boolean _replaceName)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _invarLst;
    tmp4_2 = _replaceName;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _bindExp = NULL;
      modelica_metatype _varLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _cr has no default value.
      // _bindExp has no default value.
      // _varLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _v = tmpMeta7;
          _varLst = tmpMeta8;
          /* Pattern matching succeeded */
          _cr = omc_BackendVariable_varCref(threadData, _v);

          _bindExp = omc_Uncertainties_varBindingOpt(threadData, _v);

          _bindExp = omc_Uncertainties_replaceExpOpt(threadData, _bindExp, _repl, _func);

          _bindExp = omc_Uncertainties_applyOptionSimplify(threadData, _bindExp);

          /* Pattern-matching tuple assignment */
          tmpMeta9 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _OMC_LIT21);
          tmpMeta10 = omc_BackendVarTransform_replaceExp(threadData, tmpMeta9, _repl, _func, NULL);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,2) == 0) goto goto_2;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          _cr = tmpMeta11;

          _v = omc_Uncertainties_setVarCref(threadData, _v, _cr);

          _v = omc_Uncertainties_setVarBindingOpt(threadData, _v, _bindExp);

          _varLst = omc_Uncertainties_replaceVars(threadData, _varLst, _repl, _func, _replaceName);
          tmpMeta12 = mmc_mk_cons(_v, _varLst);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_1);
          tmpMeta14 = MMC_CDR(tmp4_1);
          _v = tmpMeta13;
          _varLst = tmpMeta14;
          /* Pattern matching succeeded */
          _bindExp = omc_Uncertainties_varBindingOpt(threadData, _v);

          _bindExp = omc_Uncertainties_replaceExpOpt(threadData, _bindExp, _repl, _func);

          _bindExp = omc_Uncertainties_applyOptionSimplify(threadData, _bindExp);

          _v = omc_Uncertainties_setVarBindingOpt(threadData, _v, _bindExp);

          _varLst = omc_Uncertainties_replaceVars(threadData, _varLst, _repl, _func, _replaceName);
          tmpMeta15 = mmc_mk_cons(_v, _varLst);
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
  _outVarLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVarLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_replaceVars(threadData_t *threadData, modelica_metatype _invarLst, modelica_metatype _repl, modelica_metatype _func, modelica_metatype _replaceName)
{
  modelica_integer tmp1;
  modelica_metatype _outVarLst = NULL;
  tmp1 = mmc_unbox_integer(_replaceName);
  _outVarLst = omc_Uncertainties_replaceVars(threadData, _invarLst, _repl, _func, tmp1);
  /* skip box _outVarLst; list<BackendDAE.Var> */
  return _outVarLst;
}

DLLDirection
modelica_metatype omc_Uncertainties_replaceDAElow(threadData_t *threadData, modelica_metatype _idlow, modelica_metatype _repl, modelica_metatype _func, modelica_boolean _replaceVariables)
{
  modelica_metatype _odae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _odae has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _idlow;
    {
      modelica_metatype _syst = NULL;
      modelica_metatype _systList = NULL;
      modelica_metatype _shared = NULL;
      modelica_metatype _orderedVars = NULL;
      modelica_metatype _orderedEqs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _syst has no default value.
      // _systList has no default value.
      // _shared has no default value.
      // _orderedVars has no default value.
      // _orderedEqs has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _syst = tmpMeta7;
          _orderedVars = tmpMeta9;
          _orderedEqs = tmpMeta10;
          _systList = tmpMeta8;
          _shared = tmpMeta11;
          /* Pattern matching succeeded */
          _orderedVars = omc_BackendVariable_listVar1(threadData, omc_Uncertainties_replaceVars(threadData, omc_BackendVariable_varList(threadData, _orderedVars), _repl, _func, _replaceVariables));

          _orderedEqs = omc_BackendVarTransform_replaceEquationsArr(threadData, _orderedEqs, _repl, mmc_mk_none(), NULL);

          _syst = omc_BackendDAEUtil_setEqSystVars(threadData, _syst, _orderedVars);

          _syst = omc_BackendDAEUtil_setEqSystEqs(threadData, _syst, _orderedEqs);
          tmpMeta12 = mmc_mk_cons(_syst, _systList);
          tmpMeta13 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, tmpMeta12, _shared);
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
  _odae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _odae;
}
modelica_metatype boxptr_Uncertainties_replaceDAElow(threadData_t *threadData, modelica_metatype _idlow, modelica_metatype _repl, modelica_metatype _func, modelica_metatype _replaceVariables)
{
  modelica_integer tmp1;
  modelica_metatype _odae = NULL;
  tmp1 = mmc_unbox_integer(_replaceVariables);
  _odae = omc_Uncertainties_replaceDAElow(threadData, _idlow, _repl, _func, tmp1);
  /* skip box _odae; BackendDAE.BackendDAE */
  return _odae;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_setDaeEqns(threadData_t *threadData, modelica_metatype _dae, modelica_metatype _eqns, modelica_boolean _initEqs)
{
  modelica_metatype _odae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _odae has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _dae;
    tmp4_2 = _initEqs;
    {
      modelica_metatype _syst = NULL;
      modelica_metatype _systList = NULL;
      modelica_metatype _shared = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _syst has no default value.
      // _systList has no default value.
      // _shared has no default value.
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
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _syst = tmpMeta7;
          _systList = tmpMeta8;
          _shared = tmpMeta9;
          /* Pattern matching succeeded */
          _syst = omc_BackendDAEUtil_setEqSystEqs(threadData, _syst, _eqns);
          tmpMeta10 = mmc_mk_cons(_syst, _systList);
          tmpMeta11 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, tmpMeta10, _shared);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _systList = tmpMeta12;
          _shared = tmpMeta13;
          /* Pattern matching succeeded */
          _shared = omc_BackendDAEUtil_setSharedInitialEqns(threadData, _shared, _eqns);
          tmpMeta14 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systList, _shared);
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
  _odae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _odae;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_setDaeEqns(threadData_t *threadData, modelica_metatype _dae, modelica_metatype _eqns, modelica_metatype _initEqs)
{
  modelica_integer tmp1;
  modelica_metatype _odae = NULL;
  tmp1 = mmc_unbox_integer(_initEqs);
  _odae = omc_Uncertainties_setDaeEqns(threadData, _dae, _eqns, tmp1);
  /* skip box _odae; BackendDAE.BackendDAE */
  return _odae;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_setDaeVars(threadData_t *threadData, modelica_metatype _systIn, modelica_metatype _newVarsIn)
{
  modelica_metatype _sysOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sysOut has no default value.
  _sysOut = omc_BackendDAEUtil_setVars(threadData, _systIn, _newVarsIn);
  _return: OMC_LABEL_UNUSED
  return _sysOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_solveEqn2(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _cr, modelica_metatype *out_source)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _source = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _source has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
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
          
          _e1 = tmpMeta6;
          _e2 = tmpMeta7;
          _source = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _OMC_LIT21);
          _exp = omc_ExpressionSolve_solve(threadData, _e1, _e2, tmpMeta9, mmc_mk_none(), NULL);
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _source;
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
  _exp = tmpMeta[0+0];
  _source = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_source) { *out_source = _source; }
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_eliminateVariablesDAE2(threadData_t *threadData, modelica_metatype _ieqns, modelica_integer _eqnIndex, modelica_metatype _vars, modelica_metatype _globalKnownVars, modelica_metatype _mvars, modelica_metatype _repl, modelica_metatype _inDoubles, modelica_metatype _m, modelica_metatype _elimVarIndexList, modelica_boolean _failCheck, modelica_metatype *out_outSimpleEqns, modelica_metatype *out_outMvars, modelica_metatype *out_outRepl)
{
  modelica_metatype _outEqns = NULL;
  modelica_metatype _outSimpleEqns = NULL;
  modelica_metatype _outMvars = NULL;
  modelica_metatype _outRepl = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqns has no default value.
  // _outSimpleEqns has no default value.
  // _outMvars has no default value.
  // _outRepl has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_boolean tmp4_2;
    tmp4_1 = _ieqns;
    tmp4_2 = _failCheck;
    {
      modelica_metatype _mvars_1 = NULL;
      modelica_metatype _mvars_2 = NULL;
      modelica_metatype _repl_1 = NULL;
      modelica_metatype _repl_2 = NULL;
      modelica_metatype _cr1 = NULL;
      modelica_metatype _eqns_1 = NULL;
      modelica_metatype _seqns_1 = NULL;
      modelica_metatype _varIndexList = NULL;
      modelica_metatype _elimVarIndexList_1 = NULL;
      modelica_integer _elimVarIndex;
      modelica_metatype _e = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _elimVar = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _mvars_1 has no default value.
      // _mvars_2 has no default value.
      // _repl_1 has no default value.
      // _repl_2 has no default value.
      // _cr1 has no default value.
      // _eqns_1 has no default value.
      // _seqns_1 has no default value.
      // _varIndexList has no default value.
      // _elimVarIndexList_1 has no default value.
      // _elimVarIndex has no default value.
      // _e has no default value.
      // _eqns has no default value.
      // _e2 has no default value.
      // _source has no default value.
      // _elimVar has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta7;
          tmpMeta[0+2] = _mvars;
          tmpMeta[0+3] = _repl;
          goto tmp3_done;
        }
        case 1: {
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
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _e = tmpMeta8;
          _eqns = tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta10 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta11 = omc_BackendVarTransform_replaceEquations(threadData, tmpMeta10, _repl, mmc_mk_none(), NULL);
          if (listEmpty(tmpMeta11)) goto goto_2;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (!listEmpty(tmpMeta13)) goto goto_2;
          _e = tmpMeta12;

          _varIndexList = arrayGet(_m,_eqnIndex) /* DAE.ASUB */;

          /* Pattern-matching assignment */
          tmpMeta14 = omc_List_intersectionOnTrue(threadData, _varIndexList, _elimVarIndexList, boxvar_intEq);
          if (listEmpty(tmpMeta14)) goto goto_2;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          tmp17 = mmc_unbox_integer(tmpMeta15);
          _elimVarIndex = tmp17  /* pattern as ty=Integer */;

          _elimVarIndexList_1 = omc_List_removeOnTrue(threadData, mmc_mk_integer(_elimVarIndex), boxvar_intEq, _elimVarIndexList);

          _elimVar = omc_BackendVariable_getVarAt(threadData, _vars, _elimVarIndex);

          /* Pattern-matching assignment */
          tmpMeta18 = _elimVar;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          _cr1 = tmpMeta19;

          _e2 = omc_Uncertainties_solveEqn2(threadData, _e, _cr1 ,&_source);

          _repl_1 = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr1, _e2, mmc_mk_none());

          tmpMeta20 = mmc_mk_box2(0, _cr1, mmc_mk_integer(((modelica_integer) 0)));
          _mvars_1 = omc_BaseHashTable_add(threadData, tmpMeta20, _mvars);

          _eqns_1 = omc_Uncertainties_eliminateVariablesDAE2(threadData, _eqns, ((modelica_integer) 1) + _eqnIndex, _vars, _globalKnownVars, _mvars_1, _repl_1, _inDoubles, _m, _elimVarIndexList_1, _failCheck ,&_seqns_1 ,&_mvars_2 ,&_repl_2);
          tmpMeta22 = mmc_mk_box5(5, &BackendDAE_Equation_SOLVED__EQUATION__desc, _cr1, _e2, _source, _OMC_LIT15);
          tmpMeta21 = mmc_mk_cons(tmpMeta22, _seqns_1);
          tmpMeta[0+0] = _eqns_1;
          tmpMeta[0+1] = tmpMeta21;
          tmpMeta[0+2] = _mvars_2;
          tmpMeta[0+3] = _repl_2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta23 = MMC_CAR(tmp4_1);
          tmpMeta24 = MMC_CDR(tmp4_1);
          _e = tmpMeta23;
          _eqns = tmpMeta24;
          /* Pattern matching succeeded */
          _eqns_1 = omc_Uncertainties_eliminateVariablesDAE2(threadData, _eqns, ((modelica_integer) 1) + _eqnIndex, _vars, _globalKnownVars, _mvars, _repl, _inDoubles, _m, _elimVarIndexList, 0 /* false */ ,&_seqns_1 ,&_mvars_1 ,&_repl_1);
          tmpMeta25 = mmc_mk_cons(_e, _eqns_1);
          tmpMeta[0+0] = tmpMeta25;
          tmpMeta[0+1] = _seqns_1;
          tmpMeta[0+2] = _mvars_1;
          tmpMeta[0+3] = _repl_1;
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
  _outEqns = tmpMeta[0+0];
  _outSimpleEqns = tmpMeta[0+1];
  _outMvars = tmpMeta[0+2];
  _outRepl = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outSimpleEqns) { *out_outSimpleEqns = _outSimpleEqns; }
  if (out_outMvars) { *out_outMvars = _outMvars; }
  if (out_outRepl) { *out_outRepl = _outRepl; }
  return _outEqns;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_eliminateVariablesDAE2(threadData_t *threadData, modelica_metatype _ieqns, modelica_metatype _eqnIndex, modelica_metatype _vars, modelica_metatype _globalKnownVars, modelica_metatype _mvars, modelica_metatype _repl, modelica_metatype _inDoubles, modelica_metatype _m, modelica_metatype _elimVarIndexList, modelica_metatype _failCheck, modelica_metatype *out_outSimpleEqns, modelica_metatype *out_outMvars, modelica_metatype *out_outRepl)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outEqns = NULL;
  tmp1 = mmc_unbox_integer(_eqnIndex);
  tmp2 = mmc_unbox_integer(_failCheck);
  _outEqns = omc_Uncertainties_eliminateVariablesDAE2(threadData, _ieqns, tmp1, _vars, _globalKnownVars, _mvars, _repl, _inDoubles, _m, _elimVarIndexList, tmp2, out_outSimpleEqns, out_outMvars, out_outRepl);
  /* skip box _outEqns; list<BackendDAE.Equation> */
  /* skip box _outSimpleEqns; list<BackendDAE.Equation> */
  /* skip box _outMvars; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, #Integer>>>>, #Integer, tuple<.HashTable.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTable.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTable.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTable.FuncExpStr<function>(#Integer exp) => String>> */
  /* skip box _outRepl; BackendVarTransform.VariableReplacements */
  return _outEqns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysInRecordLst(threadData_t *threadData, modelica_metatype _inht, modelica_metatype _recordCr, modelica_metatype _invarLst)
{
  modelica_metatype _outHt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHt has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inht;
    tmp4_2 = _invarLst;
    {
      modelica_metatype _ht = NULL;
      modelica_string _name = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _thisCr = NULL;
      modelica_metatype _varLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ht has no default value.
      // _name has no default value.
      // _tp has no default value.
      // _thisCr has no default value.
      // _varLst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          _ht = tmp4_1;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _ht;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          
          _name = tmpMeta8;
          _tp = tmpMeta9;
          _varLst = tmpMeta7;
          _ht = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = omc_Expression_isArrayType(threadData, _tp);
          if (1 /* true */ != tmp10) goto goto_2;

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name, _tp, tmpMeta11);
          _thisCr = omc_ComponentReference_joinCrefs(threadData, _recordCr, tmpMeta12);

          tmpMeta13 = mmc_mk_box2(0, _thisCr, mmc_mk_integer(((modelica_integer) 0)));
          _ht = omc_BaseHashTable_add(threadData, tmpMeta13, _ht);
          tmpMeta1 = omc_Uncertainties_findArraysInRecordLst(threadData, _ht, _recordCr, _varLst);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_2);
          tmpMeta15 = MMC_CDR(tmp4_2);
          
          _varLst = tmpMeta15;
          _ht = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Uncertainties_findArraysInRecordLst(threadData, _ht, _recordCr, _varLst);
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
  _outHt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outHt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysPartiallyIndexedRecordsExpVisitor(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inHt, modelica_metatype *out_ht)
{
  modelica_metatype _e = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _e has no default value.
  // _ht has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inHt;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _varLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _e = tmp4_1;
          _cr = tmpMeta6;
          _ht = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = omc_ComponentReference_crefLastType(threadData, _cr);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,9,4) == 0) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,3,1) == 0) goto goto_2;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          _varLst = tmpMeta9;

          _ht = omc_Uncertainties_findArraysInRecordLst(threadData, _ht, _cr, _varLst);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _ht;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inHt;
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
  _e = tmpMeta[0+0];
  _ht = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_ht) { *out_ht = _ht; }
  return _e;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysPartiallyIndexedRecords(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype _ht)
{
  modelica_metatype _outHt = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHt has no default value.
  omc_BackendEquation_traverseExpsOfEquationList(threadData, _inEqs, boxvar_Uncertainties_findArraysPartiallyIndexedRecordsExpVisitor, _ht ,&_outHt);
  _return: OMC_LABEL_UNUSED
  return _outHt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArrayVariables(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _inht)
{
  modelica_metatype _outHt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHt has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inRef;
    tmp4_2 = _inht;
    {
      modelica_metatype _expl1 = NULL;
      modelica_metatype _c1 = NULL;
      modelica_metatype _ht = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expl1 has no default value.
      // _c1 has no default value.
      // _ht has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _ht = tmp4_2;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _ht;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _c1 = tmpMeta8;
          _expl1 = tmpMeta7;
          _ht = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_Expression_isArrayType(threadData, omc_ComponentReference_crefTypeConsiderSubs(threadData, _c1));
          if (1 /* true */ != tmp9) goto goto_2;

          tmpMeta10 = mmc_mk_box2(0, _c1, mmc_mk_integer(((modelica_integer) 1)));
          _ht = omc_BaseHashTable_add(threadData, tmpMeta10, _ht);
          tmpMeta1 = omc_Uncertainties_findArrayVariables(threadData, _expl1, _ht);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          
          _expl1 = tmpMeta12;
          _ht = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Uncertainties_findArrayVariables(threadData, _expl1, _ht);
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
  _outHt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outHt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysPartiallyIndexed2(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _indubRef, modelica_metatype _inht)
{
  modelica_metatype _outHt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _inRef;
    tmp4_2 = _indubRef;
    tmp4_3 = _inht;
    {
      modelica_metatype _c1 = NULL;
      modelica_metatype _c2 = NULL;
      modelica_metatype _expl1 = NULL;
      modelica_metatype _dubRef = NULL;
      modelica_metatype _ht = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _c1 has no default value.
      // _c2 has no default value.
      // _expl1 has no default value.
      // _dubRef has no default value.
      // _ht has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _ht = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta1 = _ht;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _c1 = tmpMeta8;
          _expl1 = tmpMeta7;
          _dubRef = tmp4_2;
          _ht = tmp4_3;
          /* Pattern matching succeeded */
          _c2 = omc_ComponentReference_crefStripLastSubs(threadData, _c1);

          if(omc_BaseHashTable_hasKey(threadData, _c2, _dubRef))
          {
            if(omc_BaseHashTable_hasKey(threadData, _c2, _ht))
            {
            }
            else
            {
              tmpMeta9 = mmc_mk_box2(0, _c2, mmc_mk_integer(((modelica_integer) 1)));
              _ht = omc_BaseHashTable_add(threadData, tmpMeta9, _ht);
            }
          }
          else
          {
            tmpMeta10 = mmc_mk_box2(0, _c2, mmc_mk_integer(((modelica_integer) 1)));
            _dubRef = omc_BaseHashTable_add(threadData, tmpMeta10, _dubRef);
          }
          /* Tail recursive call */
          _inRef = _expl1;
          _indubRef = _dubRef;
          _inht = _ht;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          
          _expl1 = tmpMeta12;
          _dubRef = tmp4_2;
          _ht = tmp4_3;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inRef = _expl1;
          _indubRef = _dubRef;
          _inht = _ht;
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
  _outHt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outHt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysPartiallyIndexed1(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype _inht)
{
  modelica_metatype _outHt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHt has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inEqs;
    tmp4_2 = _inht;
    {
      modelica_metatype _eqs = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _ht = NULL;
      modelica_metatype _alg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqs has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _ht has no default value.
      // _alg has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _ht = tmp4_2;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _ht;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,4,5) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          
          _alg = tmpMeta8;
          _eqs = tmpMeta7;
          _ht = tmp4_2;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          omc_Algorithm_getAllExps(threadData, _alg);
          tmpMeta1 = omc_Uncertainties_findArraysPartiallyIndexed1(threadData, _eqs, _ht);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,6) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          
          _e1 = tmpMeta11;
          _e2 = tmpMeta12;
          _eqs = tmpMeta10;
          _ht = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_cons(_e1, mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil)));
          _ht = omc_Uncertainties_findArraysPartiallyIndexed2(threadData, tmpMeta13, _ht, omc_HashTable_emptyHashTable(threadData));

          tmpMeta14 = mmc_mk_cons(_e1, mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil)));
          _ht = omc_Uncertainties_findArrayVariables(threadData, tmpMeta14, _ht);
          tmpMeta1 = omc_Uncertainties_findArraysPartiallyIndexed1(threadData, _eqs, _ht);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          
          _eqs = tmpMeta16;
          _ht = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Uncertainties_findArraysPartiallyIndexed1(threadData, _eqs, _ht);
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
  _outHt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outHt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findArraysPartiallyIndexed(threadData_t *threadData, modelica_metatype _inEqs)
{
  modelica_metatype _ht = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ht has no default value.
  _ht = omc_Uncertainties_findArraysPartiallyIndexed1(threadData, _inEqs, omc_HashTable_emptyHashTable(threadData));

  _ht = omc_Uncertainties_findArraysPartiallyIndexedRecords(threadData, _inEqs, _ht);
  _return: OMC_LABEL_UNUSED
  return _ht;
}

DLLDirection
modelica_metatype omc_Uncertainties_eliminateVariablesDAE(threadData_t *threadData, modelica_metatype _elimVarIndexList, modelica_metatype _indae)
{
  modelica_metatype _outDae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDae has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _indae;
    {
      modelica_metatype _dae = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _vars_1 = NULL;
      modelica_metatype _globalKnownVars = NULL;
      modelica_metatype _kvars_1 = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _ieqns = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _shared = NULL;
      modelica_metatype _crefDouble = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _movedvars_1 = NULL;
      modelica_metatype _eqnLst = NULL;
      modelica_metatype _repl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dae has no default value.
      // _vars has no default value.
      // _vars_1 has no default value.
      // _globalKnownVars has no default value.
      // _kvars_1 has no default value.
      // _eqns has no default value.
      // _ieqns has no default value.
      // _syst has no default value.
      // _shared has no default value.
      // _crefDouble has no default value.
      // _m has no default value.
      // _movedvars_1 has no default value.
      // _eqnLst has no default value.
      // _repl has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 6));
          
          _dae = tmp4_1;
          _syst = tmpMeta7;
          _vars = tmpMeta9;
          _eqns = tmpMeta10;
          _shared = tmpMeta11;
          _globalKnownVars = tmpMeta12;
          _ieqns = tmpMeta13;
          /* Pattern matching succeeded */
          omc_BackendEquation_equationList(threadData, _ieqns);

          _eqnLst = omc_BackendEquation_equationList(threadData, _eqns);

          _crefDouble = omc_Uncertainties_findArraysPartiallyIndexed(threadData, _eqnLst);

          _repl = omc_BackendVarTransform_emptyReplacements(threadData);

          _m = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _syst, _OMC_LIT20, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared), NULL, NULL, NULL);

          _eqnLst = omc_Uncertainties_eliminateVariablesDAE2(threadData, _eqnLst, ((modelica_integer) 1), _vars, _globalKnownVars, omc_HashTable_emptyHashTable(threadData), _repl, _crefDouble, _m, _elimVarIndexList, 0 /* false */ ,NULL ,&_movedvars_1 ,&_repl);

          _dae = omc_Uncertainties_setDaeEqns(threadData, _dae, omc_BackendEquation_listEquation(threadData, _eqnLst), 0 /* false */);

          _dae = omc_Uncertainties_replaceDAElow(threadData, _dae, _repl, mmc_mk_none(), 0 /* false */);

          _vars_1 = omc_Uncertainties_moveVariables(threadData, omc_BackendVariable_daeVars(threadData, _syst), omc_BackendVariable_daeGlobalKnownVars(threadData, _shared), _movedvars_1 ,&_kvars_1);

          _dae = omc_Uncertainties_setDaeVars(threadData, _dae, _vars_1);

          _dae = omc_BackendDAEUtil_setDAEGlobalKnownVars(threadData, _dae, _kvars_1);

          _dae = omc_BackendDAEUtil_transformBackendDAE(threadData, _dae, _OMC_LIT19, mmc_mk_none(), mmc_mk_none());
          tmpMeta1 = omc_BackendDAEUtil_mapEqSystem1(threadData, _dae, boxvar_BackendDAEUtil_getAdjacencyMatrixfromOptionForMapEqSystem, _OMC_LIT20);
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
  _outDae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outDae;
}

DLLDirection
modelica_metatype omc_Uncertainties_getUncertainRefineVariableIndexes(threadData_t *threadData, modelica_metatype _allVariables, modelica_metatype _variableIndexList, modelica_metatype *out_distributions)
{
  modelica_metatype _indices = NULL;
  modelica_metatype _distributions = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _indices has no default value.
  // _distributions has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _variableIndexList;
    {
      modelica_metatype _variableIndexListRest = NULL;
      modelica_metatype _refineVariableIndexList = NULL;
      modelica_integer _index;
      modelica_metatype _var = NULL;
      modelica_metatype _dist = NULL;
      modelica_metatype _distInner = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _variableIndexListRest has no default value.
      // _refineVariableIndexList has no default value.
      // _index has no default value.
      // _var has no default value.
      // _dist has no default value.
      // _distInner has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          tmp10 = mmc_unbox_integer(tmpMeta8);
          _index = tmp10  /* pattern as ty=Integer */;
          _variableIndexListRest = tmpMeta9;
          /* Pattern matching succeeded */
          _var = omc_BackendVariable_getVarAt(threadData, _allVariables, _index);

          /* Pattern-matching assignment */
          tmp11 = omc_BackendVariable_varHasUncertainValueRefine(threadData, _var);
          if (1 /* true */ != tmp11) goto goto_2;

          _dist = omc_BackendVariable_varTryGetDistribution(threadData, _var);

          _refineVariableIndexList = omc_Uncertainties_getUncertainRefineVariableIndexes(threadData, _allVariables, _variableIndexListRest ,&_distInner);
          tmpMeta12 = mmc_mk_cons(mmc_mk_integer(_index), _refineVariableIndexList);
          tmpMeta13 = mmc_mk_cons(_dist, _distInner);
          tmpMeta[0+0] = tmpMeta12;
          tmpMeta[0+1] = tmpMeta13;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_boolean tmp17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          tmp16 = mmc_unbox_integer(tmpMeta14);
          _index = tmp16  /* pattern as ty=Integer */;
          _variableIndexListRest = tmpMeta15;
          /* Pattern matching succeeded */
          _var = omc_BackendVariable_getVarAt(threadData, _allVariables, _index);

          /* Pattern-matching assignment */
          tmp17 = omc_BackendVariable_varHasUncertainValueRefine(threadData, _var);
          if (0 /* false */ != tmp17) goto goto_2;
          tmpMeta[0+0] = omc_Uncertainties_getUncertainRefineVariableIndexes(threadData, _allVariables, _variableIndexListRest, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT22),stdout);
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
  _indices = tmpMeta[0+0];
  _distributions = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_distributions) { *out_distributions = _distributions; }
  return _indices;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_containsAll(threadData_t *threadData, modelica_metatype _m1, modelica_metatype _m2)
{
  modelica_boolean _out;
  modelica_metatype _m3 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _m3 has no default value.
  _m3 = omc_List_intersectionOnTrue(threadData, _m1, _m2, boxvar_intEq);

  _out = (listLength(_m3) == listLength(_m2));
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_containsAll(threadData_t *threadData, modelica_metatype _m1, modelica_metatype _m2)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_containsAll(threadData, _m1, _m2);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_containsAny(threadData_t *threadData, modelica_metatype _m1, modelica_metatype _m2)
{
  modelica_boolean _out;
  modelica_metatype _m3 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _m3 has no default value.
  _m3 = omc_List_intersectionOnTrue(threadData, _m1, _m2, boxvar_intEq);

  _out = (!listEmpty(_m3));
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_containsAny(threadData_t *threadData, modelica_metatype _m1, modelica_metatype _m2)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_containsAny(threadData, _m1, _m2);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC void omc_Uncertainties_dumpExtAdjacencyMatrix(threadData_t *threadData, modelica_metatype _m)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _m;
    {
      modelica_metatype _t = NULL;
      modelica_integer _eq;
      modelica_metatype _vars = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _t has no default value.
      // _eq has no default value.
      // _vars has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          _eq = tmp8  /* pattern as ty=Integer */;
          _vars = tmpMeta9;
          _t = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(intString(_eq),_OMC_LIT23);
          tmpMeta11 = stringAppend(tmpMeta10,stringDelimitList(omc_List_map(threadData, _vars, boxvar_intString), _OMC_LIT24));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT7);
          fputs(MMC_STRINGDATA(tmpMeta12),stdout);

          /* Tail recursive call */
          _m = _t;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getExtAdjacencyMatrix2(threadData_t *threadData, modelica_integer _i, modelica_metatype _m, modelica_metatype _acc)
{
  modelica_metatype _mOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _m;
    {
      modelica_metatype _h = NULL;
      modelica_metatype _t = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _h has no default value.
      // _t has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = listReverse(_acc);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _h = tmpMeta6;
          _t = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box2(0, mmc_mk_integer(_i), _h);
          tmpMeta9 = mmc_mk_cons(tmpMeta10, _acc);
          /* Tail recursive call */
          tmp8 = ((modelica_integer) 1) + _i;
          _m = _t;
          _acc = tmpMeta9;
          _i = tmp8;
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
  _mOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_getExtAdjacencyMatrix2(threadData_t *threadData, modelica_metatype _i, modelica_metatype _m, modelica_metatype _acc)
{
  modelica_integer tmp1;
  modelica_metatype _mOut = NULL;
  tmp1 = mmc_unbox_integer(_i);
  _mOut = omc_Uncertainties_getExtAdjacencyMatrix2(threadData, tmp1, _m, _acc);
  /* skip box _mOut; list<tuple<#Integer, list<#Integer>>> */
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getExtAdjacencyMatrix(threadData_t *threadData, modelica_metatype _m)
{
  modelica_metatype _mOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _mOut = omc_Uncertainties_getExtAdjacencyMatrix2(threadData, ((modelica_integer) 1), arrayList(_m), tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_fixUnderdeterminedSystem(threadData_t *threadData, modelica_metatype _m, modelica_integer _nvars, modelica_integer _neqs)
{
  modelica_metatype _mOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _dummyEq = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dummyEq has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_nvars > _neqs);
          if (1 /* true */ != tmp6) goto goto_2;

          _dummyEq = omc_List_intRange(threadData, _nvars);
          tmpMeta7 = mmc_mk_cons(_dummyEq, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_Uncertainties_fixUnderdeterminedSystem(threadData, listAppend(_m, tmpMeta7), _nvars, ((modelica_integer) 1) + _neqs);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _m;
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
  _mOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_fixUnderdeterminedSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _nvars, modelica_metatype _neqs)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _mOut = NULL;
  tmp1 = mmc_unbox_integer(_nvars);
  tmp2 = mmc_unbox_integer(_neqs);
  _mOut = omc_Uncertainties_fixUnderdeterminedSystem(threadData, _m, tmp1, tmp2);
  /* skip box _mOut; list<list<#Integer>> */
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeDummyEquations(threadData_t *threadData, modelica_metatype _comps, modelica_integer _max_neqs)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comps;
    {
      modelica_metatype _t = NULL;
      modelica_metatype _ret = NULL;
      modelica_metatype _h = NULL;
      modelica_metatype _row = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t has no default value.
      // _ret has no default value.
      // _h has no default value.
      // _row has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _h = tmpMeta7;
          _t = tmpMeta8;
          /* Pattern matching succeeded */
          _row = omc_List_removeOnTrue(threadData, mmc_mk_integer(_max_neqs), boxvar_intLt, _h);

          _ret = omc_Uncertainties_removeDummyEquations(threadData, _t, _max_neqs);
          tmpMeta9 = mmc_mk_cons(_row, _ret);
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
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_removeDummyEquations(threadData_t *threadData, modelica_metatype _comps, modelica_metatype _max_neqs)
{
  modelica_integer tmp1;
  modelica_metatype _out = NULL;
  tmp1 = mmc_unbox_integer(_max_neqs);
  _out = omc_Uncertainties_removeDummyEquations(threadData, _comps, tmp1);
  /* skip box _out; list<list<#Integer>> */
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_prepareForMatching(threadData_t *threadData, modelica_metatype _mExt, modelica_metatype *out_varMap, modelica_metatype *out_mOut)
{
  modelica_metatype _eqMap = NULL;
  modelica_metatype _varMap = NULL;
  modelica_metatype _mOut = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqMap has no default value.
  // _varMap has no default value.
  // _mOut has no default value.
  // _m has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqMap = omc_Uncertainties_prepareForMatching2(threadData, _mExt, tmpMeta1, tmpMeta2, tmpMeta3 ,&_varMap ,&_m);

  _mOut = listArray(omc_Uncertainties_fixUnderdeterminedSystem(threadData, _m, listLength(_varMap), listLength(_eqMap)));
  _return: OMC_LABEL_UNUSED
  if (out_varMap) { *out_varMap = _varMap; }
  if (out_mOut) { *out_mOut = _mOut; }
  return _eqMap;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_prepareForMatching2(threadData_t *threadData, modelica_metatype _mExt, modelica_metatype _eqMap, modelica_metatype _varMap, modelica_metatype _m, modelica_metatype *out_varMapOut, modelica_metatype *out_mOut)
{
  modelica_metatype _eqMapOut = NULL;
  modelica_metatype _varMapOut = NULL;
  modelica_metatype _mOut = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqMapOut has no default value.
  // _varMapOut has no default value.
  // _mOut has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mExt;
    {
      modelica_integer _eq;
      modelica_metatype _vars = NULL;
      modelica_metatype _newVarMap = NULL;
      modelica_metatype _newEqMap = NULL;
      modelica_metatype _newVars = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _newM = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eq has no default value.
      // _vars has no default value.
      // _newVarMap has no default value.
      // _newEqMap has no default value.
      // _newVars has no default value.
      // _t has no default value.
      // _newM has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          _newM = listReverse(_m);
          tmpMeta[0+0] = _eqMap;
          tmpMeta[0+1] = _varMap;
          tmpMeta[0+2] = _newM;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _eq = tmp9  /* pattern as ty=Integer */;
          _vars = tmpMeta10;
          _t = tmpMeta7;
          /* Pattern matching succeeded */
          omc_Uncertainties_addIndexEquivalence(threadData, _eq, _eqMap ,&_newEqMap);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _newVarMap = omc_Uncertainties_addVarEquivalences(threadData, _vars, _varMap, tmpMeta11 ,&_newVars);
          tmpMeta12 = mmc_mk_cons(_newVars, _m);
          /* Tail recursive call */
          _mExt = _t;
          _eqMap = _newEqMap;
          _varMap = _newVarMap;
          _m = tmpMeta12;
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
  _eqMapOut = tmpMeta[0+0];
  _varMapOut = tmpMeta[0+1];
  _mOut = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_varMapOut) { *out_varMapOut = _varMapOut; }
  if (out_mOut) { *out_mOut = _mOut; }
  return _eqMapOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_addVarEquivalences(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _map, modelica_metatype _varsFixed, modelica_metatype *out_varsOut)
{
  modelica_metatype _varMapOut = NULL;
  modelica_metatype _varsOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varMapOut has no default value.
  // _varsOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _vars;
    {
      modelica_integer _h;
      modelica_integer _v;
      modelica_metatype _remaining = NULL;
      modelica_metatype _newMap = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _h has no default value.
      // _v has no default value.
      // _remaining has no default value.
      // _newMap has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _map;
          tmpMeta[0+1] = _varsFixed;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _h = tmp8  /* pattern as ty=Integer */;
          _remaining = tmpMeta7;
          /* Pattern matching succeeded */
          _v = omc_Uncertainties_addIndexEquivalence(threadData, _h, _map ,&_newMap);
          tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_v), _varsFixed);
          /* Tail recursive call */
          _vars = _remaining;
          _map = _newMap;
          _varsFixed = tmpMeta9;
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
  _varMapOut = tmpMeta[0+0];
  _varsOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_varsOut) { *out_varsOut = _varsOut; }
  return _varMapOut;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Uncertainties_addIndexEquivalence(threadData_t *threadData, modelica_integer _index, modelica_metatype _map, modelica_metatype *out_mapOut)
{
  modelica_integer _indexOut;
  modelica_metatype _mapOut = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _indexOut has no default value.
  // _mapOut has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_integer _pos;
      modelica_metatype _newMap = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _pos has no default value.
      // _newMap has no default value.
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
          tmp6 = omc_List_isMemberOnTrue(threadData, mmc_mk_integer(_index), _map, boxvar_intEq);
          if (1 /* true */ != tmp6) goto goto_2;

          _pos = omc_List_position(threadData, mmc_mk_integer(_index), _map);
          tmp1_c0 = _pos;
          tmpMeta[0+1] = _map;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_List_isMemberOnTrue(threadData, mmc_mk_integer(_index), _map, boxvar_intEq);
          if (0 /* false */ != tmp7) goto goto_2;

          _pos = ((modelica_integer) 1) + listLength(_map);

          tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_index), MMC_REFSTRUCTLIT(mmc_nil));
          _newMap = listAppend(_map, tmpMeta8);
          tmp1_c0 = _pos;
          tmpMeta[0+1] = _newMap;
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
  _indexOut = tmp1_c0;
  _mapOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_mapOut) { *out_mapOut = _mapOut; }
  return _indexOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_addIndexEquivalence(threadData_t *threadData, modelica_metatype _index, modelica_metatype _map, modelica_metatype *out_mapOut)
{
  modelica_integer tmp1;
  modelica_integer _indexOut;
  modelica_metatype out_indexOut;
  tmp1 = mmc_unbox_integer(_index);
  _indexOut = omc_Uncertainties_addIndexEquivalence(threadData, tmp1, _map, out_mapOut);
  out_indexOut = mmc_mk_icon(_indexOut);
  /* skip box _mapOut; list<#Integer> */
  return out_indexOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_restoreIndicesEquivalence(threadData_t *threadData, modelica_metatype _inList, modelica_metatype _map)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inList;
    {
      modelica_metatype _t = NULL;
      modelica_metatype _inner_ret = NULL;
      modelica_integer _h;
      modelica_integer _v;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t has no default value.
      // _inner_ret has no default value.
      // _h has no default value.
      // _v has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmp9 = mmc_unbox_integer(tmpMeta7);
          _h = tmp9  /* pattern as ty=Integer */;
          _t = tmpMeta8;
          /* Pattern matching succeeded */
          _v = mmc_unbox_integer(listGet(_map, _h));

          _inner_ret = omc_Uncertainties_restoreIndicesEquivalence(threadData, _t, _map);
          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_v), _inner_ret);
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
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getRelatedVariables(threadData_t *threadData, modelica_metatype _m, modelica_metatype _vars)
{
  modelica_metatype _varsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varsOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _m;
    {
      modelica_metatype _t = NULL;
      modelica_metatype _eqvars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t has no default value.
      // _eqvars has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _eqvars = tmpMeta9;
          _t = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = omc_Uncertainties_containsAny(threadData, _eqvars, _vars);
          if (1 /* true */ != tmp10) goto goto_2;

          _eqvars = listAppend(_eqvars, omc_Uncertainties_getRelatedVariables(threadData, _t, _vars));
          tmpMeta1 = omc_List_setDifference(threadData, omc_Uncertainties_setOfList(threadData, _eqvars), _vars);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          _eqvars = tmpMeta13;
          _t = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = omc_Uncertainties_containsAny(threadData, _eqvars, _vars);
          if (0 /* false */ != tmp14) goto goto_2;

          _eqvars = omc_Uncertainties_getRelatedVariables(threadData, _t, _vars);
          tmpMeta1 = omc_List_setDifference(threadData, omc_Uncertainties_setOfList(threadData, _eqvars), _vars);
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
  _varsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _varsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getSystemForUnknowns(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns, modelica_metatype _unknowns)
{
  modelica_metatype _mOut = NULL;
  modelica_metatype _mTemp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  // _mTemp has no default value.
  _mTemp = omc_Uncertainties_sortEquations(threadData, _m, _knowns);

  _mOut = omc_Uncertainties_removeVarsNotInSet(threadData, _mTemp, _unknowns);
  _return: OMC_LABEL_UNUSED
  return _mOut;
}

PROTECTED_FUNCTION_STATIC void omc_Uncertainties_checkSystemContainsVars(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knows, modelica_metatype _variables)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _knows;
    {
      modelica_integer _h;
      modelica_metatype _t = NULL;
      modelica_metatype _not_found_var = NULL;
      modelica_string _str = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _h has no default value.
      // _t has no default value.
      // _not_found_var has no default value.
      // _str has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          tmp3 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _h = tmp7  /* pattern as ty=Integer */;
          _t = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_h), MMC_REFSTRUCTLIT(mmc_nil));
          tmp9 = listEmpty(omc_Uncertainties_removeUnrelatedEquations(threadData, _m, tmpMeta8));
          if (1 /* true */ != tmp9) goto goto_1;

          _not_found_var = omc_BackendVariable_getVarAt(threadData, _variables, _h);

          _str = omc_ComponentReference_crefStr(threadData, omc_BackendVariable_varCref(threadData, _not_found_var));

          tmpMeta10 = stringAppend(_OMC_LIT25,_str);
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT26);
          fputs(MMC_STRINGDATA(tmpMeta11),stdout);

          omc_Uncertainties_checkSystemContainsVars(threadData, _m, _t, _variables);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta12 = MMC_CAR(tmp3_1);
          tmpMeta13 = MMC_CDR(tmp3_1);
          tmp14 = mmc_unbox_integer(tmpMeta12);
          _h = tmp14  /* pattern as ty=Integer */;
          _t = tmpMeta13;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta15 = mmc_mk_cons(mmc_mk_integer(_h), MMC_REFSTRUCTLIT(mmc_nil));
          tmp16 = listEmpty(omc_Uncertainties_removeUnrelatedEquations(threadData, _m, tmpMeta15));
          if (0 /* false */ != tmp16) goto goto_1;

          omc_Uncertainties_checkSystemContainsVars(threadData, _m, _t, _variables);
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
      if (++tmp3 < 3) {
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeUnrelatedEquations(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns)
{
  modelica_metatype _mOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  _mOut = omc_List_filter1OnTrue(threadData, _m, boxvar_Uncertainties_removeUnrelatedEquations2, _knowns);
  _return: OMC_LABEL_UNUSED
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_removeUnrelatedEquations2(threadData_t *threadData, modelica_metatype _row, modelica_metatype _knowns)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _row;
    {
      modelica_metatype _vars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _vars = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_Uncertainties_containsAny(threadData, _vars, _knowns);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_removeUnrelatedEquations2(threadData_t *threadData, modelica_metatype _row, modelica_metatype _knowns)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_removeUnrelatedEquations2(threadData, _row, _knowns);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquations(threadData_t *threadData, modelica_metatype _m, modelica_metatype _eqns)
{
  modelica_metatype _mOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  _mOut = omc_List_filter1OnTrue(threadData, _m, boxvar_Uncertainties_getEquationsHelper, _eqns);
  _return: OMC_LABEL_UNUSED
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_getEquationsHelper(threadData_t *threadData, modelica_metatype _m, modelica_metatype _eqns)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _m;
    {
      modelica_integer _e;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          
          _e = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = omc_List_isMemberOnTrue(threadData, mmc_mk_integer(_e), _eqns, boxvar_intEq);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_getEquationsHelper(threadData_t *threadData, modelica_metatype _m, modelica_metatype _eqns)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_getEquationsHelper(threadData, _m, _eqns);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeEquations(threadData_t *threadData, modelica_metatype _m, modelica_metatype _eqns)
{
  modelica_metatype _mOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _m;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _inner_ret = NULL;
      modelica_integer _eq;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _t has no default value.
      // _inner_ret has no default value.
      // _eq has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          
          _e = tmpMeta7;
          _eq = tmp10  /* pattern as ty=Integer */;
          _t = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_eq), MMC_REFSTRUCTLIT(mmc_nil));
          tmp12 = omc_Uncertainties_containsAny(threadData, tmpMeta11, _eqns);
          if (0 /* false */ != tmp12) goto goto_2;

          _inner_ret = omc_Uncertainties_removeEquations(threadData, _t, _eqns);
          tmpMeta13 = mmc_mk_cons(_e, _inner_ret);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_boolean tmp19;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          
          _eq = tmp17  /* pattern as ty=Integer */;
          _t = tmpMeta15;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta18 = mmc_mk_cons(mmc_mk_integer(_eq), MMC_REFSTRUCTLIT(mmc_nil));
          tmp19 = omc_Uncertainties_containsAny(threadData, tmpMeta18, _eqns);
          if (1 /* true */ != tmp19) goto goto_2;
          tmpMeta1 = omc_Uncertainties_removeEquations(threadData, _t, _eqns);
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
  _mOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeVarsNotInSet(threadData_t *threadData, modelica_metatype _m, modelica_metatype _set)
{
  modelica_metatype _mOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _vars = NULL;
  modelica_metatype _newVars = NULL;
  modelica_integer _eq;
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
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _mOut = tmpMeta1;
  // _vars has no default value.
  // _newVars has no default value.
  // _eq has no default value.
  {
    modelica_metatype _el;
    for (tmpMeta2 = _m; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _el = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _el;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmp5 = mmc_unbox_integer(tmpMeta4);
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _eq = tmp5  /* pattern as ty=Integer */;
      _vars = tmpMeta6;

      _newVars = omc_List_filter1OnTrue(threadData, _vars, boxvar_Uncertainties_removeVarsNotInSet__helper, _set);

      if((!listEmpty(_newVars)))
      {
        tmpMeta8 = mmc_mk_box2(0, mmc_mk_integer(_eq), _newVars);
        tmpMeta7 = mmc_mk_cons(tmpMeta8, _mOut);
        _mOut = tmpMeta7;
      }
    }
  }

  _mOut = listReverseInPlace(_mOut);
  _return: OMC_LABEL_UNUSED
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_removeVarsNotInSet__helper(threadData_t *threadData, modelica_integer _var, modelica_metatype _elems)
{
  modelica_boolean _out;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  tmpMeta1 = mmc_mk_cons(mmc_mk_integer(_var), MMC_REFSTRUCTLIT(mmc_nil));
  _out = omc_Uncertainties_containsAny(threadData, tmpMeta1, _elems);
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_removeVarsNotInSet__helper(threadData_t *threadData, modelica_metatype _var, modelica_metatype _elems)
{
  modelica_integer tmp1;
  modelica_boolean _out;
  modelica_metatype out_out;
  tmp1 = mmc_unbox_integer(_var);
  _out = omc_Uncertainties_removeVarsNotInSet__helper(threadData, tmp1, _elems);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_sortEquations(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns)
{
  modelica_metatype _mOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  _mOut = omc_Uncertainties_sortBy1(threadData, _m, boxvar_Uncertainties_countKnowns, _knowns);
  _return: OMC_LABEL_UNUSED
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Uncertainties_countKnowns(threadData_t *threadData, modelica_metatype _row, modelica_metatype _knowns)
{
  modelica_integer _out;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _row;
    {
      modelica_metatype _vars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _vars = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = listLength(omc_List_intersectionOnTrue(threadData, _vars, _knowns, boxvar_intEq));
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_countKnowns(threadData_t *threadData, modelica_metatype _row, modelica_metatype _knowns)
{
  modelica_integer _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_countKnowns(threadData, _row, _knowns);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_setOfList(threadData_t *threadData, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  _outList = omc_List_unique(threadData, _inList);
  _return: OMC_LABEL_UNUSED
  return _outList;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_listString(threadData_t *threadData, modelica_metatype _l)
{
  modelica_string _out = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT27,stringDelimitList(_l, _OMC_LIT24));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT28);
  _out = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_intListString(threadData_t *threadData, modelica_metatype _l)
{
  modelica_string _out = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT27,stringDelimitList(omc_List_map(threadData, _l, boxvar_intString), _OMC_LIT24));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT28);
  _out = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC void omc_Uncertainties_printIntList(threadData_t *threadData, modelica_metatype _l)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_OMC_LIT29,intString(listLength(_l)));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT7);
  fputs(MMC_STRINGDATA(tmpMeta2),stdout);

  fputs(MMC_STRINGDATA(stringDelimitList(omc_List_map(threadData, _l, boxvar_intString), _OMC_LIT24)),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT7),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_removeEquationInSquaredBlock(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _components, modelica_metatype *out_removedEquations)
{
  modelica_metatype _mOut = NULL;
  modelica_metatype _removedEquations = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  // _removedEquations has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _components;
    {
      modelica_metatype _h = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _usedKnowns = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _compEqns = NULL;
      modelica_metatype _compsSorted = NULL;
      modelica_metatype _tailEquations = NULL;
      modelica_metatype _inner_ret = NULL;
      modelica_integer _removeEquation;
      modelica_metatype _removed_inner = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _h has no default value.
      // _vars has no default value.
      // _usedKnowns has no default value.
      // _t has no default value.
      // _compEqns has no default value.
      // _compsSorted has no default value.
      // _tailEquations has no default value.
      // _inner_ret has no default value.
      // _removeEquation has no default value.
      // _removed_inner has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _h = tmpMeta8;
          _t = tmpMeta9;
          /* Pattern matching succeeded */
          _compEqns = omc_Uncertainties_getEquations(threadData, _m, _h);

          _vars = omc_Uncertainties_getVariables(threadData, _compEqns);

          _usedKnowns = omc_List_intersectionOnTrue(threadData, _vars, _knowns, boxvar_intEq);

          /* Pattern-matching assignment */
          tmp10 = (listLength(_h) == listLength(_usedKnowns));
          if (1 /* true */ != tmp10) goto goto_2;

          _compsSorted = listReverse(omc_Uncertainties_sortEquations(threadData, _compEqns, _unknowns));

          /* Pattern-matching assignment */
          tmpMeta11 = _compsSorted;
          if (listEmpty(tmpMeta11)) goto goto_2;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          _removeEquation = tmp15  /* pattern as ty=Integer */;
          _tailEquations = tmpMeta13;

          _inner_ret = omc_Uncertainties_removeEquationInSquaredBlock(threadData, _m, _knowns, _unknowns, _t ,&_removed_inner);

          tmp17 = (modelica_boolean)(listLength(_compsSorted) > ((modelica_integer) 1));
          if(tmp17)
          {
            tmpMeta16 = mmc_mk_cons(mmc_mk_integer(_removeEquation), _removed_inner);
            tmpMeta18 = tmpMeta16;
          }
          else
          {
            tmpMeta18 = _removed_inner;
          }
          _removed_inner = tmpMeta18;
          tmpMeta[0+0] = listAppend(_tailEquations, _inner_ret);
          tmpMeta[0+1] = _removed_inner;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_boolean tmp21;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta19 = MMC_CAR(tmp4_1);
          tmpMeta20 = MMC_CDR(tmp4_1);
          _h = tmpMeta19;
          _t = tmpMeta20;
          /* Pattern matching succeeded */
          _compEqns = omc_Uncertainties_getEquations(threadData, _m, _h);

          _vars = omc_Uncertainties_getVariables(threadData, _compEqns);

          _usedKnowns = omc_List_intersectionOnTrue(threadData, _vars, _knowns, boxvar_intEq);

          /* Pattern-matching assignment */
          tmp21 = (listLength(_h) == listLength(_usedKnowns));
          if (0 /* false */ != tmp21) goto goto_2;

          _inner_ret = omc_Uncertainties_removeEquationInSquaredBlock(threadData, _m, _knowns, _unknowns, _t ,&_removed_inner);
          tmpMeta[0+0] = listAppend(_compEqns, _inner_ret);
          tmpMeta[0+1] = _removed_inner;
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
  _mOut = tmpMeta[0+0];
  _removedEquations = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_removedEquations) { *out_removedEquations = _removedEquations; }
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getVariables(threadData_t *threadData, modelica_metatype _m)
{
  modelica_metatype _varsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varsOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _m;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _newVars = NULL;
      modelica_metatype _t = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _newVars has no default value.
      // _t has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _vars = tmpMeta9;
          _t = tmpMeta8;
          /* Pattern matching succeeded */
          _newVars = listAppend(_vars, omc_Uncertainties_getVariables(threadData, _t));
          tmpMeta1 = omc_List_unique(threadData, _newVars);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getComponentsWrapper(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2)
{
  modelica_metatype _compsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _compsOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _comp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _comp has no default value.
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
          tmp6 = (((modelica_integer) 0) == arrayLength(_m));
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta1 = _OMC_LIT30;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = (((modelica_integer) 1) == arrayLength(_m));
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp8;
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          tmp8 = 0; /* begin failure */
          MMC_TRY_INTERNAL(mmc_jumper)
            omc_Sorting_TarjanTransposed(threadData, _mt, _ass2);
            tmp8 = 1;
          goto goto_9;
          goto_9:;
          MMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp8) {goto goto_2;} /* end failure */

          fputs(MMC_STRINGDATA(_OMC_LIT33),stdout);

          omc_Error_clearMessages(threadData);

          _comp = omc_List_intRange(threadData, arrayLength(_m));
          tmpMeta10 = mmc_mk_cons(_comp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 3: {
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Sorting_TarjanTransposed(threadData, _mt, _ass2);
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
  _compsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _compsOut;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_getMathematicaText(threadData_t *threadData, modelica_string _text)
{
  modelica_string _textOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _textOut has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT34,_text);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT35);
  _textOut = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _textOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationsNumber(threadData_t *threadData, modelica_metatype _m)
{
  modelica_metatype _numbers = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _numbers has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _m;
    {
      modelica_metatype _t = NULL;
      modelica_integer _eq;
      modelica_metatype _inner_ret = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t has no default value.
      // _eq has no default value.
      // _inner_ret has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          
          _eq = tmp10  /* pattern as ty=Integer */;
          _t = tmpMeta8;
          /* Pattern matching succeeded */
          _inner_ret = omc_Uncertainties_getEquationsNumber(threadData, _t);
          tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_eq), _inner_ret);
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
  _numbers = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _numbers;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_occurrencesOfVariable(threadData_t *threadData, modelica_metatype _m, modelica_integer _var)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _m;
    {
      modelica_metatype _tail = NULL;
      modelica_metatype _ret = NULL;
      modelica_metatype _vars = NULL;
      modelica_integer _eq;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tail has no default value.
      // _ret has no default value.
      // _vars has no default value.
      // _eq has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _eq = tmp10  /* pattern as ty=Integer */;
          _vars = tmpMeta11;
          _tail = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta12 = mmc_mk_cons(mmc_mk_integer(_var), MMC_REFSTRUCTLIT(mmc_nil));
          tmp13 = omc_Uncertainties_containsAny(threadData, _vars, tmpMeta12);
          if (1 /* true */ != tmp13) goto goto_2;

          _ret = omc_Uncertainties_occurrencesOfVariable(threadData, _tail, _var);
          tmpMeta14 = mmc_mk_cons(mmc_mk_integer(_eq), _ret);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          _tail = tmpMeta16;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Uncertainties_occurrencesOfVariable(threadData, _tail, _var);
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
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_occurrencesOfVariable(threadData_t *threadData, modelica_metatype _m, modelica_metatype _var)
{
  modelica_integer tmp1;
  modelica_metatype _out = NULL;
  tmp1 = mmc_unbox_integer(_var);
  _out = omc_Uncertainties_occurrencesOfVariable(threadData, _m, tmp1);
  /* skip box _out; list<#Integer> */
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_eliminateOutputVariables(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _outputs)
{
  modelica_metatype _mOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _mIn;
    tmp4_2 = _outputs;
    {
      modelica_integer _var;
      modelica_metatype _tail = NULL;
      modelica_metatype _o = NULL;
      modelica_metatype _newM = NULL;
      modelica_metatype _m = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _var has no default value.
      // _tail has no default value.
      // _o has no default value.
      // _newM has no default value.
      // _m has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          _m = tmp4_1;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _m;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          
          _var = tmp8  /* pattern as ty=Integer */;
          _tail = tmpMeta7;
          _m = tmp4_1;
          /* Pattern matching succeeded */
          _o = omc_Uncertainties_occurrencesOfVariable(threadData, _m, _var);

          /* Pattern-matching assignment */
          tmp9 = (listLength(_o) == ((modelica_integer) 1));
          if (1 /* true */ != tmp9) goto goto_2;

          _newM = omc_Uncertainties_removeEquations(threadData, _m, _o);
          tmpMeta1 = omc_Uncertainties_eliminateOutputVariables(threadData, _newM, _tail);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          
          _tail = tmpMeta11;
          _m = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Uncertainties_eliminateOutputVariables(threadData, _m, _tail);
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
  _mOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findReductionCantidates2(threadData_t *threadData, modelica_integer _var, modelica_metatype _occurrence, modelica_metatype _acc)
{
  modelica_metatype _accOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _accOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _acc;
    {
      modelica_metatype _newAcc = NULL;
      modelica_metatype _tail = NULL;
      modelica_metatype _elemOccurrences = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _elem = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _newAcc has no default value.
      // _tail has no default value.
      // _elemOccurrences has no default value.
      // _vars has no default value.
      // _elem has no default value.
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
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta7 = mmc_mk_cons(mmc_mk_integer(_var), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta8 = mmc_mk_box2(0, _occurrence, tmpMeta7);
          tmpMeta6 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          _elemOccurrences = tmpMeta11;
          _vars = tmpMeta12;
          _tail = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = (listLength(_occurrence) == listLength(_elemOccurrences));
          if (1 /* true */ != tmp13) goto goto_2;

          /* Pattern-matching assignment */
          tmp14 = omc_Uncertainties_containsAll(threadData, _occurrence, _elemOccurrences);
          if (1 /* true */ != tmp14) goto goto_2;

          tmpMeta15 = mmc_mk_cons(mmc_mk_integer(_var), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta16 = mmc_mk_box2(0, _elemOccurrences, listAppend(_vars, tmpMeta15));
          _elem = tmpMeta16;
          tmpMeta17 = mmc_mk_cons(_elem, _tail);
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          _elemOccurrences = tmpMeta20;
          _vars = tmpMeta21;
          _tail = tmpMeta19;
          /* Pattern matching succeeded */
          _newAcc = omc_Uncertainties_findReductionCantidates2(threadData, _var, _occurrence, _tail);
          tmpMeta23 = mmc_mk_box2(0, _elemOccurrences, _vars);
          tmpMeta22 = mmc_mk_cons(tmpMeta23, _newAcc);
          tmpMeta1 = tmpMeta22;
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
  _accOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _accOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_findReductionCantidates2(threadData_t *threadData, modelica_metatype _var, modelica_metatype _occurrence, modelica_metatype _acc)
{
  modelica_integer tmp1;
  modelica_metatype _accOut = NULL;
  tmp1 = mmc_unbox_integer(_var);
  _accOut = omc_Uncertainties_findReductionCantidates2(threadData, tmp1, _occurrence, _acc);
  /* skip box _accOut; list<tuple<list<#Integer>, list<#Integer>>> */
  return _accOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_findReductionCantidates(threadData_t *threadData, modelica_metatype _variables, modelica_metatype _occurrences, modelica_metatype _acc)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _variables;
    tmp4_2 = _occurrences;
    {
      modelica_integer _var;
      modelica_metatype _occurrence = NULL;
      modelica_metatype _varTail = NULL;
      modelica_metatype _occurrenceTail = NULL;
      modelica_metatype _newAcc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _var has no default value.
      // _occurrence has no default value.
      // _varTail has no default value.
      // _occurrenceTail has no default value.
      // _newAcc has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _acc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_2);
          tmpMeta10 = MMC_CDR(tmp4_2);
          _var = tmp8  /* pattern as ty=Integer */;
          _varTail = tmpMeta7;
          _occurrence = tmpMeta9;
          _occurrenceTail = tmpMeta10;
          /* Pattern matching succeeded */
          _newAcc = omc_Uncertainties_findReductionCantidates2(threadData, _var, _occurrence, _acc);
          /* Tail recursive call */
          _variables = _varTail;
          _occurrences = _occurrenceTail;
          _acc = _newAcc;
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
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_reduceVariablesInMatrix(threadData_t *threadData, modelica_metatype _m, modelica_metatype _candidates, modelica_integer _count)
{
  modelica_metatype _mOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _candidates;
    {
      modelica_metatype _candidate = NULL;
      modelica_metatype _variables = NULL;
      modelica_integer _temp;
      modelica_metatype _candidatesTail = NULL;
      modelica_metatype _newM = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _candidate has no default value.
      // _variables has no default value.
      // _temp has no default value.
      // _candidatesTail has no default value.
      // _newM has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_count > ((modelica_integer) 0));
          if (1 /* true */ != tmp6) goto goto_2;

          fputs(MMC_STRINGDATA(_OMC_LIT36),stdout);
          tmpMeta1 = _m;
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _m;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = (_count == ((modelica_integer) 0));
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta1 = _m;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _candidate = tmpMeta8;
          _candidatesTail = tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (_count > ((modelica_integer) 0));
          if (1 /* true */ != tmp10) goto goto_2;

          _temp = mmc_unbox_integer(listHead(_candidate));

          tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_temp), MMC_REFSTRUCTLIT(mmc_nil));
          _variables = omc_List_setDifference(threadData, omc_Uncertainties_getVariables(threadData, _m), tmpMeta11);

          _newM = omc_Uncertainties_removeVarsNotInSet(threadData, _m, _variables);
          tmpMeta1 = omc_Uncertainties_reduceVariablesInMatrix(threadData, _newM, _candidatesTail, ((modelica_integer) -1) + _count);
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
  _mOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_reduceVariablesInMatrix(threadData_t *threadData, modelica_metatype _m, modelica_metatype _candidates, modelica_metatype _count)
{
  modelica_integer tmp1;
  modelica_metatype _mOut = NULL;
  tmp1 = mmc_unbox_integer(_count);
  _mOut = omc_Uncertainties_reduceVariablesInMatrix(threadData, _m, _candidates, tmp1);
  /* skip box _mOut; list<tuple<#Integer, list<#Integer>>> */
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_reduceVariables(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns)
{
  modelica_metatype _mOut = NULL;
  modelica_integer _neq;
  modelica_integer _nvar;
  modelica_metatype _variables = NULL;
  modelica_metatype _occurrences = NULL;
  modelica_metatype _candidates = NULL;
  modelica_metatype _reducedVars = NULL;
  modelica_metatype _newM = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mOut has no default value.
  // _neq has no default value.
  // _nvar has no default value.
  // _variables has no default value.
  // _occurrences has no default value.
  // _candidates has no default value.
  // _reducedVars has no default value.
  // _newM has no default value.
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
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          _neq = listLength(omc_Uncertainties_getEquationsNumber(threadData, _m));

          _variables = omc_Uncertainties_getVariables(threadData, _m);

          _nvar = listLength(_variables);

          /* Pattern-matching assignment */
          tmp6 = (_neq >= _nvar);
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta1 = _m;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          _neq = listLength(omc_Uncertainties_getEquationsNumber(threadData, _m));

          _variables = omc_Uncertainties_getVariables(threadData, _m);

          _nvar = listLength(_variables);

          /* Pattern-matching assignment */
          tmp7 = (_neq < _nvar);
          if (1 /* true */ != tmp7) goto goto_2;

          _occurrences = omc_List_map1r(threadData, _knowns, boxvar_Uncertainties_occurrencesOfVariable, _m);

          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _reducedVars = omc_Uncertainties_findReductionCantidates(threadData, _variables, _occurrences, tmpMeta8);

          _candidates = omc_Uncertainties_pickReductionCandidates(threadData, _reducedVars);
          tmpMeta1 = omc_Uncertainties_reduceVariablesInMatrix(threadData, _m, _candidates, _nvar - _neq);
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
  _mOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_pickReductionCandidates(threadData_t *threadData, modelica_metatype _elems)
{
  modelica_metatype _elemsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _elemsOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _elems;
    {
      modelica_metatype _occurrence = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _tail = NULL;
      modelica_metatype _newElems = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _occurrence has no default value.
      // _vars has no default value.
      // _tail has no default value.
      // _newElems has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _occurrence = tmpMeta9;
          _vars = tmpMeta10;
          _tail = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = ((listLength(_vars) > ((modelica_integer) 1)) && (listLength(_occurrence) > ((modelica_integer) 1)));
          if (1 /* true */ != tmp11) goto goto_2;

          _newElems = omc_Uncertainties_pickReductionCandidates(threadData, _tail);
          tmpMeta12 = mmc_mk_cons(_vars, _newElems);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_1);
          tmpMeta14 = MMC_CDR(tmp4_1);
          _tail = tmpMeta14;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Uncertainties_pickReductionCandidates(threadData, _tail);
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
  _elemsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _elemsOut;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_printVarReduction2(threadData_t *threadData, modelica_metatype _elem)
{
  modelica_string _out = NULL;
  modelica_metatype _occurrences = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _occurrences has no default value.
  // _vars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _elem;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _occurrences = tmpMeta2;
  _vars = tmpMeta3;

  tmpMeta4 = stringAppend(_OMC_LIT37,stringDelimitList(omc_List_map(threadData, _vars, boxvar_intString), _OMC_LIT24));
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT38);
  tmpMeta6 = stringAppend(tmpMeta5,stringDelimitList(omc_List_map(threadData, _occurrences, boxvar_intString), _OMC_LIT24));
  tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT39);
  _out = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC void omc_Uncertainties_printVarReduction(threadData_t *threadData, modelica_metatype _elems)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(MMC_STRINGDATA(_OMC_LIT40),stdout);

  fputs(MMC_STRINGDATA(stringDelimitList(omc_List_map(threadData, _elems, boxvar_Uncertainties_printVarReduction2), _OMC_LIT7)),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationsForKnownsSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _setS, modelica_metatype _allEqs, modelica_metatype _variables, modelica_metatype _knownVariables, modelica_metatype _mapIncRowEqn, modelica_metatype *out_removed_equations_squaredOut)
{
  modelica_metatype _setCOut = NULL;
  modelica_metatype _removed_equations_squaredOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _setCOut has no default value.
  // _removed_equations_squaredOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _knowns;
    {
      modelica_metatype _knownsSystem = NULL;
      modelica_metatype _knownsSystemComp = NULL;
      modelica_metatype _xEqMap = NULL;
      modelica_metatype _xVarMap = NULL;
      modelica_metatype _mx = NULL;
      modelica_metatype _mt = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _comps_fixed = NULL;
      modelica_metatype _setC = NULL;
      modelica_metatype _removed_equations_squared = NULL;
      modelica_integer _nxVarMap;
      modelica_integer _nxEqMap;
      modelica_integer _size;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _knownsSystem has no default value.
      // _knownsSystemComp has no default value.
      // _xEqMap has no default value.
      // _xVarMap has no default value.
      // _mx has no default value.
      // _mt has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _comps has no default value.
      // _comps_fixed has no default value.
      // _setC has no default value.
      // _removed_equations_squared has no default value.
      // _nxVarMap has no default value.
      // _nxEqMap has no default value.
      // _size has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          _knownsSystem = omc_Uncertainties_removeEquations(threadData, _m, _setS);

          _knownsSystem = omc_Uncertainties_removeUnrelatedEquations(threadData, _knownsSystem, _knowns);

          /* Pattern-matching assignment */
          tmp8 = listEmpty(_knownsSystem);
          if (1 /* true */ != tmp8) goto goto_2;

          fputs(MMC_STRINGDATA(_OMC_LIT41),stdout);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta9;
          tmpMeta[0+1] = tmpMeta10;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _knownsSystem = omc_Uncertainties_removeEquations(threadData, _m, _setS);

          _knownsSystem = omc_Uncertainties_removeUnrelatedEquations(threadData, _knownsSystem, _knowns);

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT42));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_equationsToMathematicaGrid(threadData, omc_Uncertainties_getEquationsNumber(threadData, _knownsSystem), _allEqs, _variables, _knownVariables, _mapIncRowEqn));

          _knownsSystemComp = omc_Uncertainties_sortEquations(threadData, _knownsSystem, _knowns);

          _knownsSystemComp = omc_Uncertainties_removeVarsNotInSet(threadData, _knownsSystemComp, _knowns);

          _xEqMap = omc_Uncertainties_prepareForMatching(threadData, _knownsSystemComp ,&_xVarMap ,&_mx);

          _nxVarMap = listLength(_xVarMap);

          _nxEqMap = listLength(_xEqMap);

          _size = ((_nxEqMap > _nxVarMap)?_nxEqMap:_nxVarMap);

          omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _size, _size, _mx);

          _ass1 = arrayCreate(_size, mmc_mk_integer(((modelica_integer) 0)));

          _ass2 = arrayCreate(_size, mmc_mk_integer(((modelica_integer) 0)));

          /* Pattern-matching assignment */
          tmp11 = omc_BackendDAEEXT_setAssignment(threadData, _size, _size, _ass2, _ass1);
          if (1 /* true */ != tmp11) goto goto_2;

          omc_BackendDAEEXT_matching(threadData, _size, _size, ((modelica_integer) 1), ((modelica_integer) -1), 1.0, ((modelica_integer) 0));

          omc_BackendDAEEXT_getAssignment(threadData, _ass1, _ass2);

          _mt = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _mx, _nxVarMap);

          _comps = omc_Uncertainties_getComponentsWrapper(threadData, _mx, _mt, _ass1, _ass2);

          _comps = omc_Uncertainties_removeDummyEquations(threadData, _comps, listLength(_xEqMap));

          _comps_fixed = omc_List_map1(threadData, _comps, boxvar_Uncertainties_restoreIndicesEquivalence, _xEqMap);

          _knownsSystem = omc_Uncertainties_removeEquationInSquaredBlock(threadData, _knownsSystem, _knowns, _unknowns, _comps_fixed ,&_removed_equations_squared);

          _comps_fixed = omc_List_map1(threadData, _comps_fixed, boxvar_Uncertainties_restoreIndicesEquivalence, arrayList(_mapIncRowEqn));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT43));

          tmpMeta12 = stringAppend(_OMC_LIT44,omc_Uncertainties_listString(threadData, omc_List_map(threadData, _comps_fixed, boxvar_Uncertainties_intListString)));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT45);
          omc_Uncertainties_printSep(threadData, tmpMeta13);

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT46));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_equationsToMathematicaGrid(threadData, omc_Uncertainties_getEquationsNumber(threadData, _knownsSystem), _allEqs, _variables, _knownVariables, _mapIncRowEqn));

          omc_Uncertainties_checkSystemContainsVars(threadData, _knownsSystem, _knowns, _variables);

          _setC = omc_Uncertainties_getEquationsNumber(threadData, _knownsSystem);
          tmpMeta[0+0] = _setC;
          tmpMeta[0+1] = _removed_equations_squared;
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
  _setCOut = tmpMeta[0+0];
  _removed_equations_squaredOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_removed_equations_squaredOut) { *out_removed_equations_squaredOut = _removed_equations_squaredOut; }
  return _setCOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationsForUnknownsSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype *out_varsOut)
{
  modelica_metatype _eqnsOut = NULL;
  modelica_metatype _varsOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqnsOut has no default value.
  // _varsOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _unknowns;
    {
      modelica_metatype _unknownsSystem = NULL;
      modelica_metatype _yEqMap = NULL;
      modelica_metatype _yVarMap = NULL;
      modelica_metatype _setS = NULL;
      modelica_integer _nv;
      modelica_integer _ne;
      modelica_metatype _my = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _vars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _unknownsSystem has no default value.
      // _yEqMap has no default value.
      // _yVarMap has no default value.
      // _setS has no default value.
      // _nv has no default value.
      // _ne has no default value.
      // _my has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
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
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp8;
          
          /* Pattern matching succeeded */
          _unknownsSystem = omc_Uncertainties_getSystemForUnknowns(threadData, _m, _knowns, _unknowns);

          _yEqMap = omc_Uncertainties_prepareForMatching(threadData, _unknownsSystem ,&_yVarMap ,&_my);

          _ne = listLength(_yEqMap);

          _nv = listLength(_yVarMap);

          _ass1 = arrayCreate(_ne, mmc_mk_integer(((modelica_integer) -1)));

          _ass2 = arrayCreate(_nv, mmc_mk_integer(((modelica_integer) -1)));

          /* Pattern-matching assignment */
          tmp8 = omc_BackendDAEEXT_setAssignment(threadData, _ne, _nv, _ass1, _ass2);
          if (1 /* true */ != tmp8) goto goto_2;

          omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _nv, _ne, _my);

          omc_BackendDAEEXT_matching(threadData, _nv, _ne, ((modelica_integer) 1), ((modelica_integer) -1), 0.0, ((modelica_integer) 0));

          omc_BackendDAEEXT_getAssignment(threadData, _ass1, _ass2);

          _vars = _yVarMap;

          _setS = omc_Uncertainties_restoreIndicesEquivalence(threadData, omc_List_filter1OnTrue(threadData, arrayList(_ass2), boxvar_intGt, mmc_mk_integer(((modelica_integer) -1))), _yEqMap);
          tmpMeta[0+0] = _setS;
          tmpMeta[0+1] = _vars;
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
  _eqnsOut = tmpMeta[0+0];
  _varsOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_varsOut) { *out_varsOut = _varsOut; }
  return _eqnsOut;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_getMathematicaEqStr(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _systemVars, modelica_metatype _globalKnownVars)
{
  modelica_string _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  tmpMeta1 = mmc_mk_box2(0, _systemVars, _globalKnownVars);
  _out = omc_MathematicaDump_printMmaEqnsStr(threadData, _eqns, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_getMathematicaVarStr(threadData_t *threadData, modelica_metatype _vars)
{
  modelica_string _out = NULL;
  modelica_metatype _states = NULL;
  modelica_metatype _algs = NULL;
  modelica_metatype _outputs = NULL;
  modelica_metatype _inputsStates = NULL;
  modelica_string _s1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _states has no default value.
  // _algs has no default value.
  // _outputs has no default value.
  // _inputsStates has no default value.
  // _s1 has no default value.
  _states = omc_MathematicaDump_printMmaVarsStr(threadData, _vars ,&_algs ,&_outputs ,&_inputsStates);

  tmpMeta1 = stringAppend(_OMC_LIT27,omc_Util_stringDelimitListNonEmptyElts(threadData, listAppend(_states, listAppend(_algs, listAppend(_outputs, _inputsStates))), _OMC_LIT24));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT28);
  _out = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_flattenModel(threadData_t *threadData, modelica_metatype _className, modelica_metatype _p, modelica_metatype _icache, modelica_metatype *out_cacheOut, modelica_metatype *out_graphOut)
{
  modelica_metatype _daeOut = NULL;
  modelica_metatype _cacheOut = NULL;
  modelica_metatype _graphOut = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _daeOut has no default value.
  // _cacheOut has no default value.
  // _graphOut has no default value.
  
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _p_1 = NULL;
      modelica_metatype _dae = NULL;
      modelica_metatype _graph = NULL;
      modelica_string _resstr = NULL;
      modelica_metatype _cache = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _p_1 has no default value.
      // _dae has no default value.
      // _graph has no default value.
      // _resstr has no default value.
      // _cache has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          omc_System_realtimeTick(threadData, ((modelica_integer) 18));

          _p_1 = omc_AbsynToSCode_translateAbsyn2SCode(threadData, _p);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _cache = omc_Inst_instantiateClass(threadData, _icache, tmpMeta6, _p_1, _className, 1 /* true */, 1 /* true */ ,&_graph ,NULL ,&_dae);

          omc_System_realtimeTock(threadData, ((modelica_integer) 18));

          omc_System_realtimeTick(threadData, ((modelica_integer) 14));

          _dae = omc_DAEUtil_transformationsBeforeBackend(threadData, _cache, _graph, _dae);
          tmpMeta[0+0] = _dae;
          tmpMeta[0+1] = _cache;
          tmpMeta[0+2] = _graph;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          _resstr = omc_AbsynUtil_pathStringNoQual(threadData, _className, _OMC_LIT47, 0 /* false */, 0 /* false */);

          tmpMeta7 = mmc_mk_cons(_OMC_LIT48, mmc_mk_cons(_resstr, mmc_mk_cons(_OMC_LIT49, MMC_REFSTRUCTLIT(mmc_nil))));
          _resstr = stringAppendList(tmpMeta7);

          tmpMeta8 = mmc_mk_cons(_resstr, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT54, tmpMeta8);
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
  _daeOut = tmpMeta[0+0];
  _cacheOut = tmpMeta[0+1];
  _graphOut = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cacheOut) { *out_cacheOut = _cacheOut; }
  if (out_graphOut) { *out_graphOut = _graphOut; }
  return _daeOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isApproximatedEquation3(threadData_t *threadData, modelica_metatype _m)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _m;
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
          modelica_integer tmp11;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (35 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,6) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 5));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,4,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (1 /* true */ != tmp11) goto tmp3_end;
          
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
  _out = tmp1;
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isApproximatedEquation3(threadData_t *threadData, modelica_metatype _m)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_isApproximatedEquation3(threadData, _m);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isApproximatedEquation2(threadData_t *threadData, modelica_metatype _commentIn)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _commentIn;
    {
      modelica_metatype _t = NULL;
      modelica_metatype _subModLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t has no default value.
      // _subModLst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
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
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,6) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
          
          _subModLst = tmpMeta11;
          _t = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = (omc_List_any(threadData, _subModLst, boxvar_Uncertainties_isApproximatedEquation3) || omc_Uncertainties_isApproximatedEquation2(threadData, _t));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          _t = tmpMeta13;
          /* Pattern matching succeeded */
          tmp1 = omc_Uncertainties_isApproximatedEquation2(threadData, _t);
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
  _out = tmp1;
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isApproximatedEquation2(threadData_t *threadData, modelica_metatype _commentIn)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_isApproximatedEquation2(threadData, _commentIn);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Uncertainties_isApproximatedEquation(threadData_t *threadData, modelica_metatype _eqn)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      modelica_metatype _comment = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _comment has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 8));
          
          _comment = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_Uncertainties_isApproximatedEquation2(threadData, _comment);
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
  _out = tmp1;
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_isApproximatedEquation(threadData_t *threadData, modelica_metatype _eqn)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_Uncertainties_isApproximatedEquation(threadData, _eqn);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationsWithApproximatedAnnotation2(threadData_t *threadData, modelica_metatype _eqs, modelica_integer _index)
{
  modelica_metatype _listOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _listOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_integer tmp4_2;
    tmp4_1 = _eqs;
    tmp4_2 = _index;
    {
      modelica_metatype _h = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _inner_ret = NULL;
      modelica_integer _i;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _h has no default value.
      // _t has no default value.
      // _inner_ret has no default value.
      // _i has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          
          _h = tmpMeta7;
          _t = tmpMeta8;
          _i = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_Uncertainties_isApproximatedEquation(threadData, _h);
          if (1 /* true */ != tmp9) goto goto_2;

          _inner_ret = omc_Uncertainties_getEquationsWithApproximatedAnnotation2(threadData, _t, ((modelica_integer) 1) + _i);
          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_i), _inner_ret);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          
          _t = tmpMeta12;
          _i = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Uncertainties_getEquationsWithApproximatedAnnotation2(threadData, _t, ((modelica_integer) 1) + _i);
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
  _listOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _listOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_getEquationsWithApproximatedAnnotation2(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_metatype _listOut = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _listOut = omc_Uncertainties_getEquationsWithApproximatedAnnotation2(threadData, _eqs, tmp1);
  /* skip box _listOut; list<#Integer> */
  return _listOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationsWithApproximatedAnnotation(threadData_t *threadData, modelica_metatype _dae)
{
  modelica_metatype _outEqs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dae;
    {
      modelica_metatype _orderedEqs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _orderedEqs has no default value.
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
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          
          _orderedEqs = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Uncertainties_getEquationsWithApproximatedAnnotation2(threadData, omc_BackendEquation_equationList(threadData, _orderedEqs), ((modelica_integer) 1));
          goto tmp3_done;
        }
        case 1: {
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
  _outEqs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outEqs;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_dumpVarsDistributionInfo(threadData_t *threadData, modelica_metatype _d)
{
  modelica_string _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT27,stringDelimitList(omc_List_map(threadData, _d, boxvar_Uncertainties_dumpVarDistributionInfo), _OMC_LIT24));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT28);
  _s = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _s;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_dumpVarDistributionInfo(threadData_t *threadData, modelica_metatype _d)
{
  modelica_string _out = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _d;
    {
      modelica_metatype _name = NULL;
      modelica_metatype _params = NULL;
      modelica_metatype _paramNames = NULL;
      modelica_string _e1 = NULL;
      modelica_string _e2 = NULL;
      modelica_string _e3 = NULL;
      modelica_string _s1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _params has no default value.
      // _paramNames has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _s1 has no default value.
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
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          _name = tmpMeta7;
          _params = tmpMeta8;
          _paramNames = tmpMeta9;
          /* Pattern matching succeeded */
          _e1 = omc_MathematicaDump_printExpMmaStr(threadData, _name, omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013)), omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013)));

          _e2 = omc_MathematicaDump_printExpMmaStr(threadData, _params, omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013)), omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013)));

          _e3 = omc_MathematicaDump_printExpMmaStr(threadData, _paramNames, omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013)), omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013)));

          tmpMeta10 = mmc_mk_cons(_e1, mmc_mk_cons(_e2, mmc_mk_cons(_e3, MMC_REFSTRUCTLIT(mmc_nil))));
          _s1 = stringDelimitList(tmpMeta10, _OMC_LIT24);
          tmpMeta11 = mmc_mk_cons(_OMC_LIT27, mmc_mk_cons(_s1, mmc_mk_cons(_OMC_LIT28, MMC_REFSTRUCTLIT(mmc_nil))));
          tmp1 = stringAppendList(tmpMeta11);
          goto tmp3_done;
        }
        case 1: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT56;
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

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_writeFileIfNonEmpty(threadData_t *threadData, modelica_string _filename, modelica_string _content)
{
  modelica_string _out = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* matchcontinue expression */
    volatile modelica_string tmp4_1;
    tmp4_1 = _filename;
    {
      modelica_string _directory = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _directory has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _content;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp6;
          
          /* Pattern matching succeeded */
          _directory = omc_System_dirname(threadData, _filename);

          /* Pattern-matching assignment */
          tmp6 = omc_System_directoryExists(threadData, _directory);
          if (1 /* true */ != tmp6) goto goto_2;

          omc_System_writeFile(threadData, _filename, _content);
          tmp1 = _OMC_LIT57;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = _content;
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
  _out = tmp1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_variablesToMathematicaGrid(threadData_t *threadData, modelica_metatype _varIndices, modelica_metatype _variables)
{
  modelica_string _out = NULL;
  modelica_metatype _varList = NULL;
  modelica_metatype _eqsString = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _varList has no default value.
  // _eqsString has no default value.
  _varList = omc_List_map1r(threadData, _varIndices, boxvar_BackendVariable_getVarAt, _variables);

  _eqsString = omc_List_map2(threadData, _varList, boxvar_MathematicaDump_printMmaVarStr, mmc_mk_boolean(0 /* false */), _variables);

  tmpMeta1 = stringAppend(_OMC_LIT58,omc_Uncertainties_numerateListIndex(threadData, _eqsString, _varIndices));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT59);
  _out = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_unknowsMatchingToMathematicaGrid(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _equations, modelica_metatype _allEqs, modelica_metatype _variables, modelica_metatype _knownVariables, modelica_metatype _mapIncRowEqn)
{
  modelica_string _out = NULL;
  modelica_metatype _eqList = NULL;
  modelica_metatype _varList = NULL;
  modelica_metatype _eqsString = NULL;
  modelica_metatype _varString = NULL;
  modelica_metatype _eqns = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _eqList has no default value.
  // _varList has no default value.
  // _eqsString has no default value.
  // _varString has no default value.
  // _eqns has no default value.
  _eqns = omc_List_map1r(threadData, _equations, boxvar_listGet, arrayList(_mapIncRowEqn));

  _eqsString = omc_Uncertainties_getEquationStringOrNothing(threadData, _eqns, _allEqs, _variables, _knownVariables, _mapIncRowEqn);

  _varList = omc_List_map1r(threadData, _vars, boxvar_BackendVariable_getVarAt, _variables);

  _varString = omc_List_map2(threadData, _varList, boxvar_MathematicaDump_printMmaVarStr, mmc_mk_boolean(0 /* false */), _variables);

  _out = omc_Uncertainties_verticalGridBoxed(threadData, omc_Uncertainties_unknowsMatchingToMathematicaGrid2(threadData, _varString, _eqsString));
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_getEquationStringOrNothing(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _allEqs, modelica_metatype _variables, modelica_metatype _knownVariables, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _equations;
    {
      modelica_integer _eqn;
      modelica_metatype _eqn_t = NULL;
      modelica_string _s = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqn has no default value.
      // _eqn_t has no default value.
      // _s has no default value.
      // _r has no default value.
      // _e has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmp9 = mmc_unbox_integer(tmpMeta7);
          _eqn = tmp9  /* pattern as ty=Integer */;
          _eqn_t = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (_eqn == ((modelica_integer) 0));
          if (1 /* true */ != tmp10) goto goto_2;

          _r = omc_Uncertainties_getEquationStringOrNothing(threadData, _eqn_t, _allEqs, _variables, _knownVariables, _mapIncRowEqn);

          _s = _OMC_LIT60;
          tmpMeta11 = mmc_mk_cons(_s, _r);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          tmp14 = mmc_unbox_integer(tmpMeta12);
          _eqn = tmp14  /* pattern as ty=Integer */;
          _eqn_t = tmpMeta13;
          /* Pattern matching succeeded */
          _e = omc_BackendEquation_get(threadData, _allEqs, _eqn);

          _r = omc_Uncertainties_getEquationStringOrNothing(threadData, _eqn_t, _allEqs, _variables, _knownVariables, _mapIncRowEqn);

          tmpMeta15 = mmc_mk_box2(0, _variables, _knownVariables);
          _s = omc_MathematicaDump_printMmaEqnStr(threadData, _e, tmpMeta15);
          tmpMeta16 = mmc_mk_cons(_s, _r);
          tmpMeta1 = tmpMeta16;
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
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Uncertainties_unknowsMatchingToMathematicaGrid2(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _eqns)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _vars;
    tmp4_2 = _eqns;
    {
      modelica_string _var = NULL;
      modelica_string _eqn = NULL;
      modelica_string _s = NULL;
      modelica_metatype _var_t = NULL;
      modelica_metatype _eqn_t = NULL;
      modelica_metatype _r = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _var has no default value.
      // _eqn has no default value.
      // _s has no default value.
      // _var_t has no default value.
      // _eqn_t has no default value.
      // _r has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT61),stdout);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          fputs(MMC_STRINGDATA(_OMC_LIT62),stdout);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_2);
          tmpMeta12 = MMC_CDR(tmp4_2);
          _var = tmpMeta9;
          _var_t = tmpMeta10;
          _eqn = tmpMeta11;
          _eqn_t = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_var,_OMC_LIT24);
          tmpMeta14 = stringAppend(tmpMeta13,_eqn);
          _s = tmpMeta14;

          _r = omc_Uncertainties_unknowsMatchingToMathematicaGrid2(threadData, _var_t, _eqn_t);
          tmpMeta15 = mmc_mk_cons(_s, _r);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_equationsToMathematicaGrid(threadData_t *threadData, modelica_metatype _equIndices, modelica_metatype _allEqs, modelica_metatype _variables, modelica_metatype _knownVariables, modelica_metatype _mapIncRowEqn)
{
  modelica_string _out = NULL;
  modelica_metatype _eqList = NULL;
  modelica_metatype _eqsString = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _eqList has no default value.
  // _eqsString has no default value.
  // _eqns has no default value.
  _eqns = omc_List_unique(threadData, omc_List_map1r(threadData, _equIndices, boxvar_listGet, arrayList(_mapIncRowEqn)));

  _eqList = omc_List_map1r(threadData, _eqns, boxvar_BackendEquation_get, _allEqs);

  tmpMeta1 = mmc_mk_box2(0, _variables, _knownVariables);
  _eqsString = omc_List_map1(threadData, _eqList, boxvar_MathematicaDump_printMmaEqnStr, tmpMeta1);

  tmpMeta2 = stringAppend(_OMC_LIT58,omc_Uncertainties_numerateListIndex(threadData, _eqsString, _eqns));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT63);
  _out = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_numerateListIndex(threadData_t *threadData, modelica_metatype _elems, modelica_metatype _indices)
{
  modelica_string _out = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _elems;
    tmp4_2 = _indices;
    {
      modelica_string _h = NULL;
      modelica_string _s = NULL;
      modelica_metatype _t = NULL;
      modelica_integer _n;
      modelica_metatype _tn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _h has no default value.
      // _s has no default value.
      // _t has no default value.
      // _n has no default value.
      // _tn has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT8;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          tmp10 = mmc_unbox_integer(tmpMeta8);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          _h = tmpMeta6;
          _n = tmp10  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta11 = stringAppend(_OMC_LIT27,intString(_n));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT24);
          tmpMeta13 = stringAppend(tmpMeta12,_h);
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT28);
          tmp1 = tmpMeta14;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmp4_2);
          tmpMeta18 = MMC_CDR(tmp4_2);
          tmp19 = mmc_unbox_integer(tmpMeta17);
          _h = tmpMeta15;
          _t = tmpMeta16;
          _n = tmp19  /* pattern as ty=Integer */;
          _tn = tmpMeta18;
          /* Pattern matching succeeded */
          tmpMeta20 = stringAppend(_OMC_LIT27,intString(_n));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT24);
          tmpMeta22 = stringAppend(tmpMeta21,_h);
          tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT28);
          _s = tmpMeta23;
          tmpMeta24 = stringAppend(_s,_OMC_LIT24);
          tmpMeta25 = stringAppend(tmpMeta24,omc_Uncertainties_numerateListIndex(threadData, _t, _tn));
          tmp1 = tmpMeta25;
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

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_numerateList(threadData_t *threadData, modelica_metatype _elems, modelica_integer _index)
{
  modelica_string _out = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _elems;
    {
      modelica_string _h = NULL;
      modelica_string _s = NULL;
      modelica_metatype _t = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _h has no default value.
      // _s has no default value.
      // _t has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT8;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _h = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT27,intString(_index));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT24);
          tmpMeta10 = stringAppend(tmpMeta9,_h);
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT28);
          tmp1 = tmpMeta11;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          _h = tmpMeta12;
          _t = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = stringAppend(_OMC_LIT27,intString(_index));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT24);
          tmpMeta16 = stringAppend(tmpMeta15,_h);
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT28);
          _s = tmpMeta17;
          tmpMeta18 = stringAppend(_s,_OMC_LIT24);
          tmpMeta19 = stringAppend(tmpMeta18,omc_Uncertainties_numerateList(threadData, _t, ((modelica_integer) 1) + _index));
          tmp1 = tmpMeta19;
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Uncertainties_numerateList(threadData_t *threadData, modelica_metatype _elems, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_string _out = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _out = omc_Uncertainties_numerateList(threadData, _elems, tmp1);
  /* skip box _out; String */
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_verticalGridBoxed(threadData_t *threadData, modelica_metatype _elems)
{
  modelica_string _out = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT58,stringDelimitList(omc_List_map(threadData, _elems, boxvar_Uncertainties_wrapInList), _OMC_LIT24));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT59);
  _out = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_verticalGrid(threadData_t *threadData, modelica_metatype _elems)
{
  modelica_string _out = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT58,stringDelimitList(omc_List_map(threadData, _elems, boxvar_Uncertainties_wrapInList), _OMC_LIT24));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT64);
  _out = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Uncertainties_wrapInList(threadData_t *threadData, modelica_string _text)
{
  modelica_string _oText = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oText has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT27,_text);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT28);
  _oText = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _oText;
}

PROTECTED_FUNCTION_STATIC void omc_Uncertainties_printSep(threadData_t *threadData, modelica_string _s)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Print_printBuf(threadData, _OMC_LIT65);

  omc_Print_printBuf(threadData, _s);

  omc_Print_printBuf(threadData, _OMC_LIT66);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_Uncertainties_dumpMatching(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _eqvarlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _count;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqvarlist = tmpMeta1;
  _count = ((modelica_integer) 1);
  {
    modelica_metatype _i;
    for (tmpMeta2 = _v, tmp7 = arrayLength(tmpMeta2), tmp6 = 1; tmp6 <= tmp7; tmp6++)
    {
      _i = arrayGet(tmpMeta2,tmp6);
      tmpMeta4 = mmc_mk_box2(0, _i, mmc_mk_integer(_count));
      tmpMeta3 = mmc_mk_cons(tmpMeta4, _eqvarlist);
      _eqvarlist = tmpMeta3;

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _eqvarlist;
}

DLLDirection
modelica_integer omc_Uncertainties_getSolvedEquationNumber(threadData_t *threadData, modelica_integer _varnumber, modelica_metatype _inlist)
{
  modelica_integer _solvedeq;
  modelica_integer _solvedvar;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _solvedeq has no default value.
  // _solvedvar has no default value.
  {
    modelica_metatype _var;
    for (tmpMeta1 = _inlist; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _var;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmp4 = mmc_unbox_integer(tmpMeta3);
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      _solvedeq = tmp4  /* pattern as ty=Integer */;
      _solvedvar = tmp6  /* pattern as ty=Integer */;

      if((_varnumber == _solvedvar))
      {
        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _solvedeq;
}
modelica_metatype boxptr_Uncertainties_getSolvedEquationNumber(threadData_t *threadData, modelica_metatype _varnumber, modelica_metatype _inlist)
{
  modelica_integer tmp1;
  modelica_integer _solvedeq;
  modelica_metatype out_solvedeq;
  tmp1 = mmc_unbox_integer(_varnumber);
  _solvedeq = omc_Uncertainties_getSolvedEquationNumber(threadData, tmp1, _inlist);
  out_solvedeq = mmc_mk_icon(_solvedeq);
  return out_solvedeq;
}

DLLDirection
modelica_integer omc_Uncertainties_getSolvedVariableNumber(threadData_t *threadData, modelica_integer _eqnumber, modelica_metatype _inlist)
{
  modelica_integer _solvedvar;
  modelica_integer _solvedeq;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _solvedvar has no default value.
  // _solvedeq has no default value.
  {
    modelica_metatype _var;
    for (tmpMeta1 = _inlist; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _var;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmp4 = mmc_unbox_integer(tmpMeta3);
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      _solvedeq = tmp4  /* pattern as ty=Integer */;
      _solvedvar = tmp6  /* pattern as ty=Integer */;

      if((_eqnumber == _solvedeq))
      {
        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _solvedvar;
}
modelica_metatype boxptr_Uncertainties_getSolvedVariableNumber(threadData_t *threadData, modelica_metatype _eqnumber, modelica_metatype _inlist)
{
  modelica_integer tmp1;
  modelica_integer _solvedvar;
  modelica_metatype out_solvedvar;
  tmp1 = mmc_unbox_integer(_eqnumber);
  _solvedvar = omc_Uncertainties_getSolvedVariableNumber(threadData, tmp1, _inlist);
  out_solvedvar = mmc_mk_icon(_solvedvar);
  return out_solvedvar;
}

DLLDirection
modelica_metatype omc_Uncertainties_checkBlueOrRedSquareBlocks(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _outputs, modelica_metatype _solvedvar, modelica_metatype *out_outstring)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outstring = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _count;
  modelica_integer _varnumber;
  modelica_boolean _b1;
  modelica_boolean _b2;
  modelica_boolean _b3;
  modelica_string _s1 = NULL;
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
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outstring = tmpMeta2;
  _count = ((modelica_integer) 1);
  // _varnumber has no default value.
  // _b1 has no default value.
  // _b2 has no default value.
  // _b3 has no default value.
  // _s1 has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = _inlist; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      _varnumber = omc_Uncertainties_getSolvedVariableNumber(threadData, mmc_unbox_integer(_i), _solvedvar);

      _b1 = listMember(mmc_mk_integer(_varnumber), _knowns);

      _b2 = listMember(mmc_mk_integer(_varnumber), _unknowns);

      _b3 = listMember(mmc_mk_integer(_varnumber), _outputs);

      if(((!_b1 == !0 /* false */) && (!_b2 == !1 /* true */)))
      {
        _s1 = _OMC_LIT67;

        tmpMeta4 = mmc_mk_cons(_s1, _outstring);
        _outstring = tmpMeta4;

        tmpMeta5 = mmc_mk_cons(_i, _outlist);
        _outlist = tmpMeta5;
      }

      if(((!_b1 == !1 /* true */) && (!_b2 == !0 /* false */)))
      {
        _s1 = _OMC_LIT68;

        tmpMeta6 = mmc_mk_cons(_s1, _outstring);
        _outstring = tmpMeta6;

        tmpMeta7 = mmc_mk_cons(_i, _outlist);
        _outlist = tmpMeta7;
      }

      if(((!_b1 == !0 /* false */) && (!_b2 == !0 /* false */)))
      {
        _s1 = _OMC_LIT67;

        tmpMeta8 = mmc_mk_cons(_s1, _outstring);
        _outstring = tmpMeta8;

        tmpMeta9 = mmc_mk_cons(_i, _outlist);
        _outlist = tmpMeta9;
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _outlist = listReverse(_outlist);

  _outstring = listReverse(_outstring);
  _return: OMC_LABEL_UNUSED
  if (out_outstring) { *out_outstring = _outstring; }
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_getdirectOccurrencesinEquation(threadData_t *threadData, modelica_metatype _m, modelica_integer _eqnumber, modelica_integer _varnumber)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;modelica_integer tmp4_3;
    tmp4_1 = _m;
    tmp4_2 = _eqnumber;
    tmp4_3 = _varnumber;
    {
      modelica_metatype _tail = NULL;
      modelica_metatype _ret = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _matchedeq = NULL;
      modelica_integer _eq;
      modelica_integer _eqnum;
      modelica_integer _varnum;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tail has no default value.
      // _ret has no default value.
      // _vars has no default value.
      // _matchedeq has no default value.
      // _eq has no default value.
      // _eqnum has no default value.
      // _varnum has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _eq = tmp9  /* pattern as ty=Integer */;
          _vars = tmpMeta10;
          _tail = tmpMeta7;
          _eqnum = tmp4_2;
          _varnum = tmp4_3;
          /* Pattern matching succeeded */
          if((!(_eq == _eqnum)))
          {
            if(listMember(mmc_mk_integer(_varnum), _vars))
            {
              tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_eq), MMC_REFSTRUCTLIT(mmc_nil));
              _matchedeq = tmpMeta11;
            }
            else
            {
              tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
              _matchedeq = tmpMeta12;
            }
          }
          else
          {
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            _matchedeq = tmpMeta13;
          }

          _ret = omc_Uncertainties_getdirectOccurrencesinEquation(threadData, _tail, _eqnum, _varnum);
          tmpMeta1 = listAppend(_matchedeq, _ret);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
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
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}
modelica_metatype boxptr_Uncertainties_getdirectOccurrencesinEquation(threadData_t *threadData, modelica_metatype _m, modelica_metatype _eqnumber, modelica_metatype _varnumber)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _out = NULL;
  tmp1 = mmc_unbox_integer(_eqnumber);
  tmp2 = mmc_unbox_integer(_varnumber);
  _out = omc_Uncertainties_getdirectOccurrencesinEquation(threadData, _m, tmp1, tmp2);
  /* skip box _out; list<#Integer> */
  return _out;
}

DLLDirection
modelica_metatype omc_Uncertainties_getDependencyequation(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _inlist1, modelica_metatype _solvedvariables, modelica_metatype _m)
{
  modelica_metatype _outinteger = NULL;
  modelica_metatype _t = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _nonsq = NULL;
  modelica_integer _varnumber;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outinteger has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _t = tmpMeta1;
  // _nonsq has no default value.
  // _varnumber has no default value.
  {
    modelica_metatype _eqnumber;
    for (tmpMeta2 = _inlist; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eqnumber = MMC_CAR(tmpMeta2);
      _varnumber = omc_Uncertainties_getSolvedVariableNumber(threadData, mmc_unbox_integer(_eqnumber), _solvedvariables);

      _nonsq = omc_Uncertainties_getdirectOccurrencesinEquation(threadData, _m, mmc_unbox_integer(_eqnumber), _varnumber);

      {
        modelica_metatype _lst;
        for (tmpMeta3 = _nonsq; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _lst = MMC_CAR(tmpMeta3);
          if((!listMember(_lst, _inlist)))
          {
            tmpMeta4 = mmc_mk_cons(_lst, _t);
            _t = tmpMeta4;
          }
        }
      }
    }
  }

  _outinteger = listAppend(_t, _inlist1);
  _return: OMC_LABEL_UNUSED
  return _outinteger;
}

DLLDirection
modelica_metatype omc_Uncertainties_extractMixedBlock(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _instringList, modelica_metatype *out_sets)
{
  modelica_metatype _setc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _sets = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _count;
  modelica_string _s = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _setc = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _sets = tmpMeta2;
  _count = ((modelica_integer) 1);
  // _s has no default value.
  {
    modelica_metatype _e;
    for (tmpMeta3 = _inlist; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _e = MMC_CAR(tmpMeta3);
      _s = listGet(_instringList, _count);

      if(valueEq(_s, _OMC_LIT68))
      {
        tmpMeta4 = mmc_mk_cons(_e, _setc);
        _setc = tmpMeta4;
      }
      else
      {
        tmpMeta5 = mmc_mk_cons(_e, _sets);
        _sets = tmpMeta5;
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_sets) { *out_sets = _sets; }
  return _setc;
}

DLLDirection
modelica_metatype omc_Uncertainties_originalBlocks(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _outputs, modelica_metatype _solvedvariables, modelica_metatype *out_outstringlist)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outstringlist = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _blocks = NULL;
  modelica_metatype _blockinfo = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outstringlist = tmpMeta2;
  // _blocks has no default value.
  // _blockinfo has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = _inlist; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      _blocks = omc_Uncertainties_checkBlueOrRedSquareBlocks(threadData, _i, _knowns, _unknowns, _outputs, _solvedvariables ,&_blockinfo);

      tmpMeta4 = mmc_mk_cons(_blocks, _outlist);
      _outlist = tmpMeta4;

      tmpMeta5 = mmc_mk_cons(_blockinfo, _outstringlist);
      _outstringlist = tmpMeta5;
    }
  }

  _outlist = listReverse(_outlist);

  _outstringlist = listReverse(_outstringlist);
  _return: OMC_LABEL_UNUSED
  if (out_outstringlist) { *out_outstringlist = _outstringlist; }
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_checkBlockStatus(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2)
{
  modelica_metatype _instringlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _count;
  modelica_boolean _b1;
  modelica_boolean _b2;
  modelica_boolean _b3;
  modelica_boolean _setinputs;
  modelica_boolean _setinputs1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _instringlist = tmpMeta1;
  _count = ((modelica_integer) 0);
  // _b1 has no default value.
  // _b2 has no default value.
  // _b3 has no default value.
  _setinputs = 1 /* true */;
  _setinputs1 = 1 /* true */;
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist2; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      _b1 = listMember(_OMC_LIT68, _i);

      _b2 = listMember(_OMC_LIT67, _i);

      _b3 = listMember(_OMC_LIT69, _i);

      if((((!_setinputs == !1 /* true */) && (!_b2 == !1 /* true */)) && (!_b1 == !0 /* false */)))
      {
        _i = omc_List_fill(threadData, _OMC_LIT69, listLength(_i));
      }

      if(((!_b1 == !1 /* true */) && (!_b2 == !0 /* false */)))
      {
        _setinputs = 0 /* false */;
      }

      if(((!_b1 == !1 /* true */) && (!_b2 == !1 /* true */)))
      {
        _setinputs = 0 /* false */;
      }

      tmpMeta3 = mmc_mk_cons(_i, _instringlist);
      _instringlist = tmpMeta3;

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _instringlist = listReverse(_instringlist);
  _return: OMC_LABEL_UNUSED
  return _instringlist;
}

DLLDirection
modelica_integer omc_Uncertainties_countKnownVariables(threadData_t *threadData, modelica_metatype _inlist1)
{
  modelica_integer _count;
  modelica_boolean _value;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = ((modelica_integer) 0);
  // _value has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta1 = _inlist1; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      if(valueEq(_i, _OMC_LIT68))
      {
        _count = ((modelica_integer) 1) + _count;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_Uncertainties_countKnownVariables(threadData_t *threadData, modelica_metatype _inlist1)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_Uncertainties_countKnownVariables(threadData, _inlist1);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
modelica_metatype omc_Uncertainties_getRemovedEquationSolvedVariables(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _solvedvar)
{
  modelica_metatype _outvarlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _varnumber;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outvarlist = tmpMeta1;
  // _varnumber has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      _varnumber = omc_Uncertainties_getSolvedVariableNumber(threadData, mmc_unbox_integer(_i), _solvedvar);

      tmpMeta3 = mmc_mk_cons(mmc_mk_integer(_varnumber), _outvarlist);
      _outvarlist = tmpMeta3;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outvarlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_ExtractEquationsfromBlocks(threadData_t *threadData, modelica_metatype _blockdata, modelica_metatype _approximatedEquation, modelica_metatype *out_sets, modelica_metatype *out_removedeq)
{
  modelica_metatype _setc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _sets = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _removedeq = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _blockitem = NULL;
  modelica_metatype _blockitem1 = NULL;
  modelica_metatype _setc1 = NULL;
  modelica_metatype _sets1 = NULL;
  modelica_metatype _temp1 = NULL;
  modelica_metatype _temp2 = NULL;
  modelica_metatype _rmeqlist = NULL;
  modelica_metatype _tmplist1 = NULL;
  modelica_metatype _tmplist2 = NULL;
  modelica_metatype _tmplist3 = NULL;
  modelica_metatype _usedblocklist = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _blockvarlist = NULL;
  modelica_boolean _blockexist;
  modelica_boolean _squarestatus;
  modelica_boolean _used;
  modelica_boolean _checkusedblock;
  modelica_boolean _targetBlockSquareStatus;
  modelica_integer _blockrank;
  modelica_integer _knownvarcount;
  modelica_integer _blocksize;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _setc = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _sets = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _removedeq = tmpMeta3;
  // _blockitem has no default value.
  // _blockitem1 has no default value.
  // _setc1 has no default value.
  // _sets1 has no default value.
  // _temp1 has no default value.
  // _temp2 has no default value.
  // _rmeqlist has no default value.
  // _tmplist1 has no default value.
  // _tmplist2 has no default value.
  // _tmplist3 has no default value.
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _usedblocklist = tmpMeta4;
  // _blockvarlist has no default value.
  // _blockexist has no default value.
  // _squarestatus has no default value.
  _used = 0 /* false */;
  // _checkusedblock has no default value.
  // _targetBlockSquareStatus has no default value.
  // _blockrank has no default value.
  // _knownvarcount has no default value.
  // _blocksize has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta5 = _blockdata; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _i = MMC_CAR(tmpMeta5);
      /* Pattern-matching assignment */
      tmpMeta6 = _i;
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
      tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
      tmp10 = mmc_unbox_integer(tmpMeta9);
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
      tmp12 = mmc_unbox_integer(tmpMeta11);
      tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
      tmp14 = mmc_unbox_integer(tmpMeta13);
      _blockitem = tmpMeta7;
      _blockvarlist = tmpMeta8;
      _blockexist = tmp10  /* pattern as ty=Boolean */;
      _blockrank = tmp12  /* pattern as ty=Integer */;
      _squarestatus = tmp14  /* pattern as ty=Boolean */;

      if(((!_blockexist == !1 /* true */) && (!_squarestatus == !1 /* true */)))
      {
        /* Pattern-matching assignment */
        tmpMeta15 = listGet(_blockdata, _blockrank);
        tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
        tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 5));
        tmp18 = mmc_unbox_integer(tmpMeta17);
        _blockitem1 = tmpMeta16;
        _targetBlockSquareStatus = tmp18  /* pattern as ty=Boolean */;

        _checkusedblock = listMember(_blockitem1, _usedblocklist);

        if((!omc_List_setEqualOnTrue(threadData, _blockitem, _blockitem1, boxvar_intEq)))
        {
          if(((!_targetBlockSquareStatus == !1 /* true */) && (!_checkusedblock == !0 /* false */)))
          {
            _temp1 = omc_List_lastN(threadData, _blockitem, ((modelica_integer) -1) + listLength(_blockitem));

            if(listEmpty(_temp1))
            {
              _removedeq = listAppend(_blockitem, _removedeq);
            }

            _sets = listAppend(_temp1, _sets);

            _sets = listAppend(omc_List_firstOrEmpty(threadData, _blockitem1), _sets);

            tmpMeta19 = mmc_mk_cons(_blockitem1, _usedblocklist);
            _usedblocklist = tmpMeta19;
          }
          else
          {
            if(((!_targetBlockSquareStatus == !0 /* false */) || (!_checkusedblock == !1 /* true */)))
            {
              _sets = listAppend(_blockitem, _sets);
            }
          }
        }
        else
        {
          _setc1 = omc_Uncertainties_extractMixedBlock(threadData, _blockitem, _blockvarlist ,&_sets1);

          _tmplist1 = omc_List_intersection1OnTrue(threadData, _setc1, _approximatedEquation, boxvar_intEq ,&_tmplist2 ,&_tmplist3);

          _setc1 = listAppend(_tmplist1, _tmplist2);

          _setc = listAppend(omc_List_restOrEmpty(threadData, _setc1), _setc);

          _sets = listAppend(_sets, _sets1);

          _removedeq = listAppend(omc_List_firstOrEmpty(threadData, _setc1), _removedeq);
        }
      }
      else
      {
        if(((!_blockexist == !1 /* true */) && (!_squarestatus == !0 /* false */)))
        {
          _setc1 = omc_Uncertainties_extractMixedBlock(threadData, _blockitem, _blockvarlist ,&_sets1);

          _sets = listAppend(_sets, _sets1);

          _setc = listAppend(_setc, _setc1);
        }
        else
        {
          _removedeq = listAppend(_blockitem, _removedeq);
        }
      }
    }
  }

  _setc = omc_List_unique(threadData, _setc);

  _sets = omc_List_unique(threadData, _sets);

  _removedeq = omc_List_unique(threadData, _removedeq);
  _return: OMC_LABEL_UNUSED
  if (out_sets) { *out_sets = _sets; }
  if (out_removedeq) { *out_removedeq = _removedeq; }
  return _setc;
}

DLLDirection
modelica_metatype omc_Uncertainties_ExtractEquationsfromPredecessorBlocks(threadData_t *threadData, modelica_metatype _predecessortargetinfo, modelica_metatype _allblockranks, modelica_metatype _approximatedEquations, modelica_metatype *out_sets)
{
  modelica_metatype _setc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _sets = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _dependendblock = NULL;
  modelica_metatype _foundblockranks = NULL;
  modelica_metatype _knownblocks = NULL;
  modelica_metatype _usedblocks = NULL;
  modelica_metatype _targetblocktobeinserted = NULL;
  modelica_metatype _blockspostoberemoved = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _blockstoupdate = NULL;
  modelica_metatype _targetblocks = NULL;
  modelica_metatype _tmptargetblocks = NULL;
  modelica_metatype _targetblocksvar = NULL;
  modelica_metatype _tmptargetblocksvar = NULL;
  modelica_metatype _blockitems = NULL;
  modelica_metatype _blockitems1 = NULL;
  modelica_metatype _blockitems2 = NULL;
  modelica_metatype _tmpsetc = NULL;
  modelica_metatype _tmpsets = NULL;
  modelica_metatype _blockvarlst = NULL;
  modelica_metatype _blockvarlst1 = NULL;
  modelica_metatype _blockvarlst2 = NULL;
  modelica_integer _foundblock;
  modelica_integer _count;
  modelica_integer _tmpcount;
  modelica_integer _blocksize;
  modelica_boolean _visited;
  modelica_boolean _square;
  modelica_boolean _status;
  modelica_boolean _checkknowns;
  modelica_boolean _finalsquarestauts;
  modelica_boolean _exist;
  modelica_boolean _exist1;
  modelica_boolean _targetexist;
  modelica_metatype _outlist1 = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _tmppredecessortargetinfo = NULL;
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
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta51;
  modelica_metatype tmpMeta52;
  modelica_metatype tmpMeta53;
  modelica_metatype tmpMeta54;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _setc = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _sets = tmpMeta2;
  // _dependendblock has no default value.
  // _foundblockranks has no default value.
  // _knownblocks has no default value.
  // _usedblocks has no default value.
  // _targetblocktobeinserted has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _blockspostoberemoved = tmpMeta3;
  // _blockstoupdate has no default value.
  // _targetblocks has no default value.
  // _tmptargetblocks has no default value.
  // _targetblocksvar has no default value.
  // _tmptargetblocksvar has no default value.
  // _blockitems has no default value.
  // _blockitems1 has no default value.
  // _blockitems2 has no default value.
  // _tmpsetc has no default value.
  // _tmpsets has no default value.
  // _blockvarlst has no default value.
  // _blockvarlst1 has no default value.
  // _blockvarlst2 has no default value.
  // _foundblock has no default value.
  // _count has no default value.
  // _tmpcount has no default value.
  // _blocksize has no default value.
  // _visited has no default value.
  // _square has no default value.
  // _status has no default value.
  // _checkknowns has no default value.
  // _finalsquarestauts has no default value.
  // _exist has no default value.
  // _exist1 has no default value.
  // _targetexist has no default value.
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist1 = tmpMeta4;
  // _tmppredecessortargetinfo has no default value.
  _tmpcount = ((modelica_integer) 1);

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _usedblocks = tmpMeta5;

  fputs(MMC_STRINGDATA(_OMC_LIT70),stdout);

  {
    modelica_metatype _blocks;
    for (tmpMeta6 = _predecessortargetinfo; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _blocks = MMC_CAR(tmpMeta6);
      /* Pattern-matching assignment */
      tmpMeta7 = _blocks;
      tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
      tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
      tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 5));
      _blockitems = tmpMeta8;
      _targetblocks = tmpMeta9;
      _targetblocksvar = tmpMeta10;
      _knownblocks = tmpMeta11;
      _foundblockranks = tmpMeta12;

      /* Pattern-matching assignment */
      tmpMeta13 = listGet(_allblockranks, mmc_unbox_integer(listHead(_foundblockranks)));
      tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
      _dependendblock = tmpMeta14;

      _targetblocktobeinserted = omc_List_setDifferenceOnTrue(threadData, _knownblocks, _usedblocks, boxvar_intEq);

      tmpMeta15 = stringAppend(_OMC_LIT71,omc_Uncertainties_dumplistInteger(threadData, _blockitems));
      tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT72);
      tmpMeta17 = stringAppend(tmpMeta16,omc_Uncertainties_dumplistInteger(threadData, _dependendblock));
      tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT73);
      tmpMeta19 = stringAppend(tmpMeta18,omc_Uncertainties_dumplistInteger(threadData, _targetblocktobeinserted));
      tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT7);
      fputs(MMC_STRINGDATA(tmpMeta20),stdout);

      if((!listEmpty(_targetblocktobeinserted)))
      {
        tmpMeta21 = mmc_mk_cons(listHead(_targetblocktobeinserted), _usedblocks);
        _usedblocks = tmpMeta21;
      }
      else
      {
        tmpMeta22 = mmc_mk_cons(mmc_mk_integer(_tmpcount), _blockspostoberemoved);
        _blockspostoberemoved = tmpMeta22;
      }

      if(((!omc_List_setEqualOnTrue(threadData, _blockitems, _dependendblock, boxvar_intEq)) && (!listEmpty(_targetblocktobeinserted))))
      {
        _blocksize = ((modelica_integer) -1) + listLength(_blockitems);

        _sets = listAppend(omc_List_firstN(threadData, _blockitems, _blocksize), _sets);

        tmpMeta23 = mmc_mk_cons(listHead(_targetblocktobeinserted), _sets);
        _sets = tmpMeta23;

        tmpMeta24 = stringAppend(_OMC_LIT77,omc_Uncertainties_dumplistInteger(threadData, _targetblocktobeinserted));
        tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT78);
        tmpMeta26 = stringAppend(tmpMeta25,omc_Uncertainties_dumplistInteger(threadData, _sets));
        tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT7);
        fputs(MMC_STRINGDATA(tmpMeta27),stdout);
      }
      else
      {
        if(((!omc_List_setEqualOnTrue(threadData, _blockitems, _dependendblock, boxvar_intEq)) && listEmpty(_targetblocktobeinserted)))
        {
          fputs(MMC_STRINGDATA(_OMC_LIT76),stdout);

          _sets = listAppend(_blockitems, _sets);

          tmpMeta28 = stringAppend(_OMC_LIT77,omc_Uncertainties_dumplistInteger(threadData, _targetblocktobeinserted));
          tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT78);
          tmpMeta30 = stringAppend(tmpMeta29,omc_Uncertainties_dumplistInteger(threadData, _sets));
          tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT7);
          fputs(MMC_STRINGDATA(tmpMeta31),stdout);
        }
        else
        {
          if((omc_List_setEqualOnTrue(threadData, _blockitems, _dependendblock, boxvar_intEq) && (listLength(_blockitems) == ((modelica_integer) 1))))
          {
            tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
            _sets = tmpMeta32;
          }
          else
          {
            omc_Error_addMessage(threadData, _OMC_LIT54, _OMC_LIT75);
          }
        }
      }

      _tmpcount = ((modelica_integer) 1) + _tmpcount;
    }
  }

  tmpMeta34 = stringAppend(_OMC_LIT79,omc_Uncertainties_dumplistInteger(threadData, _setc));
  tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT7);
  tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT80);
  tmpMeta37 = stringAppend(tmpMeta36,omc_Uncertainties_dumplistInteger(threadData, _sets));
  tmpMeta38 = stringAppend(tmpMeta37,_OMC_LIT7);
  fputs(MMC_STRINGDATA(tmpMeta38),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT81),stdout);

  {
    modelica_metatype _i;
    for (tmpMeta39 = _predecessortargetinfo; !listEmpty(tmpMeta39); tmpMeta39=MMC_CDR(tmpMeta39))
    {
      _i = MMC_CAR(tmpMeta39);
      /* Pattern-matching assignment */
      tmpMeta40 = _i;
      tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 2));
      tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 3));
      _targetblocks = tmpMeta41;
      _targetblocksvar = tmpMeta42;

      _tmptargetblocks = omc_List_restOrEmpty(threadData, _targetblocks);

      _tmptargetblocksvar = omc_List_restOrEmpty(threadData, _targetblocksvar);

      _count = ((modelica_integer) 1);

      {
        modelica_metatype _j;
        for (tmpMeta43 = _tmptargetblocks; !listEmpty(tmpMeta43); tmpMeta43=MMC_CDR(tmpMeta43))
        {
          _j = MMC_CAR(tmpMeta43);
          /* Pattern-matching assignment */
          tmpMeta44 = _j;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 1));
          _blockitems1 = tmpMeta45;

          /* Pattern-matching assignment */
          tmpMeta46 = listGet(_tmptargetblocksvar, _count);
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 1));
          _blockvarlst1 = tmpMeta47;

          _tmpsetc = omc_Uncertainties_extractMixedBlock(threadData, _blockitems1, _blockvarlst1 ,&_tmpsets);

          _setc = listAppend(_setc, _tmpsetc);

          _sets = listAppend(_sets, _tmpsets);

          _count = ((modelica_integer) 1) + _count;
        }
      }
    }
  }

  _sets = omc_List_unique(threadData, _sets);

  _setc = omc_List_unique(threadData, _setc);

  _setc = omc_List_setDifferenceOnTrue(threadData, _setc, _sets, boxvar_intEq);

  _setc = omc_List_setDifferenceOnTrue(threadData, _setc, _approximatedEquations, boxvar_intEq);

  _sets = omc_List_setDifferenceOnTrue(threadData, _sets, _approximatedEquations, boxvar_intEq);

  tmpMeta50 = stringAppend(_OMC_LIT82,omc_Uncertainties_dumplistInteger(threadData, _setc));
  tmpMeta51 = stringAppend(tmpMeta50,_OMC_LIT7);
  tmpMeta52 = stringAppend(tmpMeta51,_OMC_LIT83);
  tmpMeta53 = stringAppend(tmpMeta52,omc_Uncertainties_dumplistInteger(threadData, _sets));
  tmpMeta54 = stringAppend(tmpMeta53,_OMC_LIT7);
  fputs(MMC_STRINGDATA(tmpMeta54),stdout);

  if(listEmpty(_setc))
  {
    omc_Error_addMessage(threadData, _OMC_LIT54, _OMC_LIT85);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  if (out_sets) { *out_sets = _sets; }
  return _setc;
}

DLLDirection
modelica_metatype omc_Uncertainties_getActualBlocks(threadData_t *threadData, modelica_metatype _searchblock, modelica_metatype _inlist1, modelica_metatype _inlist2)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      if((!listEmpty(omc_List_intersectionOnTrue(threadData, _searchblock, _i, boxvar_intEq))))
      {
        tmpMeta3 = mmc_mk_cons(_i, _outlist);
        _outlist = tmpMeta3;
      }
    }
  }

  _outlist = listReverse(_outlist);
  _return: OMC_LABEL_UNUSED
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_getBlockVarList(threadData_t *threadData, modelica_metatype _blocktofind, modelica_metatype _inlist1, modelica_metatype _inlist2)
{
  modelica_metatype _outstringlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _count;
  modelica_boolean _b3;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outstringlist = tmpMeta1;
  _count = ((modelica_integer) 1);
  // _b3 has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      _b3 = omc_List_setEqualOnTrue(threadData, _i, _blocktofind, boxvar_intEq);

      if((!_b3 == !1 /* true */))
      {
        _outstringlist = listGet(_inlist2, _count);
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outstringlist;
}

DLLDirection
modelica_boolean omc_Uncertainties_findSquareAndNonSquareBlocksHelper1(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype *out_foundknownblocks, modelica_metatype *out_blockranks)
{
  modelica_boolean _exists;
  modelica_metatype _foundknownblocks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _blockranks = NULL;
  modelica_metatype tmpMeta2;
  modelica_boolean _checkknowns;
  modelica_metatype _blocksvarlist = NULL;
  modelica_integer _count;
  modelica_integer _rank;
  modelica_integer _tmpcount;
  modelica_metatype _targetblocks = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exists = 0 /* false */;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _foundknownblocks = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _blockranks = tmpMeta2;
  // _checkknowns has no default value.
  // _blocksvarlist has no default value.
  _count = ((modelica_integer) 1);
  // _rank has no default value.
  // _tmpcount has no default value.
  // _targetblocks has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = _inlist2; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _i;
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      tmp7 = mmc_unbox_integer(tmpMeta6);
      _blocksvarlist = tmpMeta5;
      _rank = tmp7  /* pattern as ty=Integer */;

      /* Pattern-matching assignment */
      tmpMeta8 = listGet(_inlist1, _count);
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
      _targetblocks = tmpMeta9;

      _checkknowns = listMember(_OMC_LIT68, _blocksvarlist);

      if((!_checkknowns == !1 /* true */))
      {
        _exists = 1 /* true */;

        tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_rank), _blockranks);
        _blockranks = tmpMeta10;

        _tmpcount = ((modelica_integer) 1);

        {
          modelica_metatype _j;
          for (tmpMeta11 = _blocksvarlist; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
          {
            _j = MMC_CAR(tmpMeta11);
            if(valueEq(_j, _OMC_LIT68))
            {
              tmpMeta12 = mmc_mk_cons(listGet(_targetblocks, _tmpcount), _foundknownblocks);
              _foundknownblocks = tmpMeta12;
            }

            _tmpcount = ((modelica_integer) 1) + _tmpcount;
          }
        }
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _foundknownblocks = listReverse(_foundknownblocks);

  _blockranks = listReverse(_blockranks);
  _return: OMC_LABEL_UNUSED
  if (out_foundknownblocks) { *out_foundknownblocks = _foundknownblocks; }
  if (out_blockranks) { *out_blockranks = _blockranks; }
  return _exists;
}
modelica_metatype boxptr_Uncertainties_findSquareAndNonSquareBlocksHelper1(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype *out_foundknownblocks, modelica_metatype *out_blockranks)
{
  modelica_boolean _exists;
  modelica_metatype out_exists;
  _exists = omc_Uncertainties_findSquareAndNonSquareBlocksHelper1(threadData, _inlist1, _inlist2, out_foundknownblocks, out_blockranks);
  out_exists = mmc_mk_icon(_exists);
  /* skip box _foundknownblocks; list<#Integer> */
  /* skip box _blockranks; list<#Integer> */
  return out_exists;
}

DLLDirection
modelica_metatype omc_Uncertainties_findSquareAndNonSquareBlocksHelper(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_boolean *out_exists, modelica_integer *out_foundblock)
{
  modelica_metatype _targetblocks = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _exists;
  modelica_integer _foundblock;
  modelica_boolean _checkknowns;
  modelica_metatype _blocksvarlist = NULL;
  modelica_integer _count;
  modelica_integer _rank;
  modelica_metatype _targetblockstest = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _targetblocks = tmpMeta1;
  _exists = 0 /* false */;
  _foundblock = ((modelica_integer) -1);
  // _checkknowns has no default value.
  // _blocksvarlist has no default value.
  _count = ((modelica_integer) 1);
  // _rank has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _targetblockstest = tmpMeta2;
  {
    modelica_metatype _i;
    for (tmpMeta3 = _inlist2; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _i;
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      tmp7 = mmc_unbox_integer(tmpMeta6);
      _blocksvarlist = tmpMeta5;
      _rank = tmp7  /* pattern as ty=Integer */;

      _checkknowns = listMember(_OMC_LIT68, _blocksvarlist);

      if((!_checkknowns == !1 /* true */))
      {
        _targetblocks = omc_List_lastN(threadData, _inlist1, listLength(_inlist1) - _count);

        _foundblock = _rank;

        _exists = 1 /* true */;

        break;
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_exists) { *out_exists = _exists; }
  if (out_foundblock) { *out_foundblock = _foundblock; }
  return _targetblocks;
}
modelica_metatype boxptr_Uncertainties_findSquareAndNonSquareBlocksHelper(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype *out_exists, modelica_metatype *out_foundblock)
{
  modelica_boolean _exists;
  modelica_integer _foundblock;
  modelica_metatype _targetblocks = NULL;
  modelica_metatype tmpMeta1;
  _targetblocks = omc_Uncertainties_findSquareAndNonSquareBlocksHelper(threadData, _inlist1, _inlist2, &_exists, &_foundblock);
  /* skip box _targetblocks; list<tuple<list<#Integer>, #Integer>> */
  if (out_exists) { *out_exists = mmc_mk_icon(_exists); }
  if (out_foundblock) { *out_foundblock = mmc_mk_icon(_foundblock); }
  return _targetblocks;
}

DLLDirection
modelica_metatype omc_Uncertainties_findSquareAndNonSquareBlocks(threadData_t *threadData, modelica_metatype _blockinfo, modelica_metatype _solvedvariables, modelica_metatype _mxt, modelica_metatype _map, modelica_metatype *out_outlist2)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outlist2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _dependencyequation = NULL;
  modelica_metatype _blockstoupdate = NULL;
  modelica_metatype _targetblocks = NULL;
  modelica_metatype _targetblocksvar = NULL;
  modelica_metatype _blockitem = NULL;
  modelica_metatype _blockitems1 = NULL;
  modelica_metatype _blockitems2 = NULL;
  modelica_metatype _blockvarlst = NULL;
  modelica_metatype _blockvarlst1 = NULL;
  modelica_metatype _blockvarlst2 = NULL;
  modelica_integer _foundblock;
  modelica_integer _count;
  modelica_integer _foundblockrank;
  modelica_metatype _map1 = NULL;
  modelica_boolean _visited;
  modelica_boolean _square;
  modelica_boolean _status;
  modelica_boolean _checkknowns;
  modelica_boolean _finalsquarestauts;
  modelica_boolean _exist;
  modelica_boolean _exist1;
  modelica_metatype _outlist1 = NULL;
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
  modelica_integer tmp21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_integer tmp26;
  modelica_metatype tmpMeta27;
  modelica_integer tmp28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist2 = tmpMeta2;
  // _dependencyequation has no default value.
  // _blockstoupdate has no default value.
  // _targetblocks has no default value.
  // _targetblocksvar has no default value.
  // _blockitem has no default value.
  // _blockitems1 has no default value.
  // _blockitems2 has no default value.
  // _blockvarlst has no default value.
  // _blockvarlst1 has no default value.
  // _blockvarlst2 has no default value.
  // _foundblock has no default value.
  _count = ((modelica_integer) 1);
  // _foundblockrank has no default value.
  _map1 = _map;
  // _visited has no default value.
  // _square has no default value.
  // _status has no default value.
  // _checkknowns has no default value.
  // _finalsquarestauts has no default value.
  // _exist has no default value.
  // _exist1 has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist1 = tmpMeta3;
  {
    modelica_metatype _blocks;
    for (tmpMeta4 = _blockinfo; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _blocks = MMC_CAR(tmpMeta4);
      /* Pattern-matching assignment */
      tmpMeta5 = _blocks;
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
      tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
      _blockitems1 = tmpMeta6;
      _targetblocks = tmpMeta7;
      _targetblocksvar = tmpMeta8;

      _blockstoupdate = omc_Uncertainties_findSquareAndNonSquareBlocksHelper(threadData, _targetblocks, _targetblocksvar ,&_exist ,&_foundblock);

      /* Pattern-matching assignment */
      tmpMeta9 = listHead(_targetblocksvar);
      tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
      _blockvarlst1 = tmpMeta10;

      tmpMeta12 = mmc_mk_box4(0, _blockitems1, _blockvarlst1, mmc_mk_boolean(_exist), mmc_mk_integer(_foundblock));
      tmpMeta11 = mmc_mk_cons(tmpMeta12, _outlist1);
      _outlist1 = tmpMeta11;

      {
        modelica_metatype _j;
        for (tmpMeta13 = _blockstoupdate; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
        {
          _j = MMC_CAR(tmpMeta13);
          /* Pattern-matching assignment */
          tmpMeta14 = _j;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          _blockitem = tmpMeta15;

          _visited = 0 /* false */;

          _map1 = omc_Uncertainties_updateBlocks(threadData, _blockitem, _map1, _visited, 0 /* false */);
        }
      }
    }
  }

  {
    modelica_metatype _k;
    for (tmpMeta18 = _map1; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
    {
      _k = MMC_CAR(tmpMeta18);
      /* Pattern-matching assignment */
      tmpMeta19 = _k;
      tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
      tmp21 = mmc_unbox_integer(tmpMeta20);
      _finalsquarestauts = tmp21  /* pattern as ty=Boolean */;

      /* Pattern-matching assignment */
      tmpMeta22 = listGet(listReverse(_outlist1), _count);
      tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 1));
      tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
      tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 3));
      tmp26 = mmc_unbox_integer(tmpMeta25);
      tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 4));
      tmp28 = mmc_unbox_integer(tmpMeta27);
      _blockitems1 = tmpMeta23;
      _blockvarlst2 = tmpMeta24;
      _exist1 = tmp26  /* pattern as ty=Boolean */;
      _foundblockrank = tmp28  /* pattern as ty=Integer */;

      tmpMeta29 = mmc_mk_cons(mmc_mk_boolean(_finalsquarestauts), _outlist);
      _outlist = tmpMeta29;

      tmpMeta31 = mmc_mk_box5(0, _blockitems1, _blockvarlst2, mmc_mk_boolean(_exist1), mmc_mk_integer(_foundblockrank), mmc_mk_boolean(_finalsquarestauts));
      tmpMeta30 = mmc_mk_cons(tmpMeta31, _outlist2);
      _outlist2 = tmpMeta30;

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _outlist = listReverse(_outlist);

  _outlist2 = listReverse(_outlist2);
  _return: OMC_LABEL_UNUSED
  if (out_outlist2) { *out_outlist2 = _outlist2; }
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_EliminatePredecessorBlockTarget(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype *out_targetblocksvar)
{
  modelica_metatype _targetblocks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _targetblocksvar = NULL;
  modelica_metatype tmpMeta2;
  modelica_boolean _checkknowns;
  modelica_metatype _blocksvarlist = NULL;
  modelica_integer _count;
  modelica_integer _rank;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _targetblocks = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _targetblocksvar = tmpMeta2;
  // _checkknowns has no default value.
  // _blocksvarlist has no default value.
  _count = ((modelica_integer) 1);
  // _rank has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = listReverse(_inlist2); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _i;
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      tmp7 = mmc_unbox_integer(tmpMeta6);
      _blocksvarlist = tmpMeta5;
      _rank = tmp7  /* pattern as ty=Integer */;

      _checkknowns = listMember(_OMC_LIT68, _blocksvarlist);

      if(listMember(_OMC_LIT68, _blocksvarlist))
      {
        _targetblocks = omc_List_firstN(threadData, _inlist1, ((modelica_integer) 1) + listLength(_inlist1) - _count);

        _targetblocksvar = omc_List_firstN(threadData, _inlist2, ((modelica_integer) 1) + listLength(_inlist2) - _count);

        break;
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_targetblocksvar) { *out_targetblocksvar = _targetblocksvar; }
  return _targetblocks;
}

DLLDirection
modelica_metatype omc_Uncertainties_findPredecessorBlocks(threadData_t *threadData, modelica_metatype _blockinfo)
{
  modelica_metatype _outblockinfo = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _dependencyequation = NULL;
  modelica_metatype _blockstoupdate = NULL;
  modelica_metatype _targetblocks = NULL;
  modelica_metatype _tmptargetblocks = NULL;
  modelica_metatype _targetblocksvar = NULL;
  modelica_metatype _blockitem = NULL;
  modelica_metatype _blockitems1 = NULL;
  modelica_metatype _blockitems2 = NULL;
  modelica_metatype _foundblockranks = NULL;
  modelica_metatype _blockvarlst = NULL;
  modelica_metatype _blockvarlst1 = NULL;
  modelica_metatype _blockvarlst2 = NULL;
  modelica_integer _foundblock;
  modelica_integer _count;
  modelica_integer _foundblockrank;
  modelica_integer _tmpcount;
  modelica_boolean _visited;
  modelica_boolean _square;
  modelica_boolean _status;
  modelica_boolean _checkknowns;
  modelica_boolean _finalsquarestauts;
  modelica_boolean _exist;
  modelica_boolean _exist1;
  modelica_boolean _targetexist;
  modelica_metatype _outlist1 = NULL;
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
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outblockinfo = tmpMeta1;
  // _dependencyequation has no default value.
  // _blockstoupdate has no default value.
  // _targetblocks has no default value.
  // _tmptargetblocks has no default value.
  // _targetblocksvar has no default value.
  // _blockitem has no default value.
  // _blockitems1 has no default value.
  // _blockitems2 has no default value.
  // _foundblockranks has no default value.
  // _blockvarlst has no default value.
  // _blockvarlst1 has no default value.
  // _blockvarlst2 has no default value.
  // _foundblock has no default value.
  _count = ((modelica_integer) 1);
  // _foundblockrank has no default value.
  // _tmpcount has no default value.
  // _visited has no default value.
  // _square has no default value.
  // _status has no default value.
  // _checkknowns has no default value.
  // _finalsquarestauts has no default value.
  // _exist has no default value.
  // _exist1 has no default value.
  // _targetexist has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist1 = tmpMeta2;
  fputs(MMC_STRINGDATA(_OMC_LIT86),stdout);

  {
    modelica_metatype _blocks;
    for (tmpMeta3 = _blockinfo; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _blocks = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _blocks;
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
      _blockitems1 = tmpMeta5;
      _targetblocks = tmpMeta6;
      _targetblocksvar = tmpMeta7;

      _tmpcount = ((modelica_integer) 1);

      _targetexist = 0 /* false */;

      {
        modelica_metatype _tmpblocks;
        for (tmpMeta8 = _blockinfo; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
        {
          _tmpblocks = MMC_CAR(tmpMeta8);
          /* Pattern-matching assignment */
          tmpMeta9 = _tmpblocks;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          _tmptargetblocks = tmpMeta10;

          if((!(_count == _tmpcount)))
          {
            if(listMember(listHead(_targetblocks), _tmptargetblocks))
            {
              _targetexist = 1 /* true */;
            }
          }

          _tmpcount = ((modelica_integer) 1) + _tmpcount;
        }
      }

      if((!_targetexist == !0 /* false */))
      {
        _exist = omc_Uncertainties_findSquareAndNonSquareBlocksHelper1(threadData, _targetblocks, _targetblocksvar ,&_dependencyequation ,&_foundblockranks);

        if(_exist)
        {
          _targetblocks = omc_Uncertainties_EliminatePredecessorBlockTarget(threadData, _targetblocks, _targetblocksvar ,&_targetblocksvar);

          tmpMeta12 = stringAppend(_OMC_LIT87,omc_Uncertainties_dumplistInteger(threadData, _blockitems1));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT88);
          tmpMeta14 = stringAppend(tmpMeta13,mmc_anyString(_targetblocks));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT89);
          tmpMeta16 = stringAppend(tmpMeta15,omc_Uncertainties_dumplistInteger(threadData, _foundblockranks));
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT90);
          tmpMeta18 = stringAppend(tmpMeta17,omc_Uncertainties_dumplistInteger(threadData, _dependencyequation));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT7);
          fputs(MMC_STRINGDATA(tmpMeta19),stdout);

          tmpMeta21 = mmc_mk_box5(0, _blockitems1, _targetblocks, _targetblocksvar, _dependencyequation, _foundblockranks);
          tmpMeta20 = mmc_mk_cons(tmpMeta21, _outblockinfo);
          _outblockinfo = tmpMeta20;
        }
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _outblockinfo = listReverse(_outblockinfo);
  _return: OMC_LABEL_UNUSED
  return _outblockinfo;
}

DLLDirection
modelica_metatype omc_Uncertainties_findBlockTargetsHelper1(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _solvedvariables, modelica_metatype _mxt)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _dependencyequations = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  // _dependencyequations has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _dependencyequations = omc_Uncertainties_getDependencyequation(threadData, _i, tmpMeta3, _solvedvariables, _mxt);

      {
        modelica_metatype _v;
        for (tmpMeta4 = listReverse(_dependencyequations); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
        {
          _v = MMC_CAR(tmpMeta4);
          tmpMeta5 = mmc_mk_cons(_v, _outlist);
          _outlist = tmpMeta5;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_findBlockTargetsHelper(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype _solvedvariables, modelica_metatype _mxt, modelica_metatype _map, modelica_metatype _actualblocks)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  { /* match expression */
    modelica_metatype tmp5_1;modelica_metatype tmp5_2;modelica_metatype tmp5_3;modelica_metatype tmp5_4;modelica_metatype tmp5_5;modelica_metatype tmp5_6;
    tmp5_1 = _inlist1;
    tmp5_2 = _inlist2;
    tmp5_3 = _solvedvariables;
    tmp5_4 = _mxt;
    tmp5_5 = _map;
    tmp5_6 = _actualblocks;
    {
      modelica_metatype _first = NULL;
      modelica_metatype _dependencyequation = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _targetblocks = NULL;
      modelica_metatype _targetblocks1 = NULL;
      modelica_metatype _originalblocks = NULL;
      modelica_metatype _restitem = NULL;
      modelica_metatype _firstitem = NULL;
      modelica_metatype _solvar = NULL;
      modelica_metatype _mxt1 = NULL;
      modelica_metatype _map1 = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _first has no default value.
      // _dependencyequation has no default value.
      // _rest has no default value.
      // _targetblocks has no default value.
      // _targetblocks1 has no default value.
      // _originalblocks has no default value.
      // _restitem has no default value.
      // _firstitem has no default value.
      // _solvar has no default value.
      // _mxt1 has no default value.
      // _map1 has no default value.
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
          if (listEmpty(tmp5_1)) goto tmp4_end;
          tmpMeta7 = MMC_CAR(tmp5_1);
          tmpMeta8 = MMC_CDR(tmp5_1);
          if (listEmpty(tmp5_2)) goto tmp4_end;
          tmpMeta9 = MMC_CAR(tmp5_2);
          tmpMeta10 = MMC_CDR(tmp5_2);
          
          _first = tmpMeta7;
          _rest = tmpMeta8;
          _firstitem = tmpMeta9;
          _restitem = tmpMeta10;
          _solvar = tmp5_3;
          _mxt1 = tmp5_4;
          _map1 = tmp5_5;
          _originalblocks = tmp5_6;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(_first, _rest);
          _dependencyequation = omc_Uncertainties_findBlockTargetsHelper1(threadData, tmpMeta11, _solvar, _mxt1);

          _targetblocks = omc_Uncertainties_getActualBlocks(threadData, _dependencyequation, _originalblocks, _first);

          tmpMeta12 = mmc_mk_cons(_firstitem, _restitem);
          _targetblocks1 = omc_Uncertainties_findBlockTargetsHelper(threadData, _targetblocks, tmpMeta12, _solvar, _mxt1, _map1, _originalblocks);
          tmpMeta2 = omc_List_unique(threadData, listAppend(_targetblocks, _targetblocks1));
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta2 = tmpMeta13;
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
  _outlist = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_findBlockTargets(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype _solvedvariables, modelica_metatype _mxt, modelica_metatype _map, modelica_metatype _blockranks)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _targetblocks = NULL;
  modelica_metatype _targetvarlist = NULL;
  modelica_metatype _blockvarlst = NULL;
  modelica_metatype _ranklist = NULL;
  modelica_metatype _blocks1 = NULL;
  modelica_integer _rank;
  modelica_metatype _updatedblocks = NULL;
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
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  // _targetblocks has no default value.
  // _targetvarlist has no default value.
  // _blockvarlst has no default value.
  // _ranklist has no default value.
  // _blocks1 has no default value.
  // _rank has no default value.
  // _updatedblocks has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      tmpMeta3 = mmc_mk_cons(_i, MMC_REFSTRUCTLIT(mmc_nil));
      _targetblocks = omc_Uncertainties_findBlockTargetsHelper(threadData, tmpMeta3, _inlist2, _solvedvariables, _mxt, _map, _inlist1);

      tmpMeta4 = mmc_mk_cons(_i, _targetblocks);
      _targetblocks = tmpMeta4;

      _updatedblocks = omc_Uncertainties_findBlocksRanks(threadData, _blockranks, _targetblocks ,&_ranklist);

      _updatedblocks = omc_Uncertainties_sortBlocks(threadData, _ranklist, _updatedblocks);

      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _targetvarlist = tmpMeta5;

      {
        modelica_metatype _blocks;
        for (tmpMeta6 = _updatedblocks; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
        {
          _blocks = MMC_CAR(tmpMeta6);
          /* Pattern-matching assignment */
          tmpMeta7 = _blocks;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          _blocks1 = tmpMeta8;
          _rank = tmp10  /* pattern as ty=Integer */;

          _blockvarlst = omc_Uncertainties_getBlockVarList(threadData, _blocks1, _inlist1, _inlist2);

          tmpMeta12 = mmc_mk_box2(0, _blockvarlst, mmc_mk_integer(_rank));
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _targetvarlist);
          _targetvarlist = tmpMeta11;
        }
      }

      tmpMeta15 = mmc_mk_box3(0, _i, _updatedblocks, listReverse(_targetvarlist));
      tmpMeta14 = mmc_mk_cons(tmpMeta15, _outlist);
      _outlist = tmpMeta14;
    }
  }

  _outlist = listReverse(_outlist);
  _return: OMC_LABEL_UNUSED
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_findBlocksRanks(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _inlist2, modelica_metatype *out_ranklist)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ranklist = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _blocks = NULL;
  modelica_integer _rank;
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
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _ranklist = tmpMeta2;
  // _blocks has no default value.
  // _rank has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = _inlist2; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      {
        modelica_metatype _j;
        for (tmpMeta4 = _inlist1; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
        {
          _j = MMC_CAR(tmpMeta4);
          /* Pattern-matching assignment */
          tmpMeta5 = _j;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          _blocks = tmpMeta6;
          _rank = tmp8  /* pattern as ty=Integer */;

          if(valueEq(_i, _blocks))
          {
            tmpMeta10 = mmc_mk_box2(0, _i, mmc_mk_integer(_rank));
            tmpMeta9 = mmc_mk_cons(tmpMeta10, _outlist);
            _outlist = tmpMeta9;

            tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_rank), _ranklist);
            _ranklist = tmpMeta11;
          }
        }
      }
    }
  }

  _outlist = listReverse(_outlist);

  _ranklist = omc_List_sort(threadData, _ranklist, boxvar_intGt);
  _return: OMC_LABEL_UNUSED
  if (out_ranklist) { *out_ranklist = _ranklist; }
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_sortBlocks(threadData_t *threadData, modelica_metatype _sortedranklist, modelica_metatype _inlist2)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _e1;
  modelica_integer _e2;
  modelica_metatype _blocks = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  // _e1 has no default value.
  // _e2 has no default value.
  // _blocks has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _sortedranklist; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      {
        modelica_metatype _j;
        for (tmpMeta3 = _inlist2; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _j = MMC_CAR(tmpMeta3);
          /* Pattern-matching assignment */
          tmpMeta4 = _j;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          _blocks = tmpMeta5;
          _e1 = tmp7  /* pattern as ty=Integer */;

          if(valueEq(_i, mmc_mk_integer(_e1)))
          {
            tmpMeta9 = mmc_mk_box2(0, _blocks, mmc_mk_integer(_e1));
            tmpMeta8 = mmc_mk_cons(tmpMeta9, _outlist);
            _outlist = tmpMeta8;
          }
        }
      }
    }
  }

  _outlist = listReverse(_outlist);
  _return: OMC_LABEL_UNUSED
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_updateBlocks(threadData_t *threadData, modelica_metatype _blocktoupdate, modelica_metatype _inlist, modelica_boolean _visited, modelica_boolean _square)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _i1 = NULL;
  modelica_boolean _b1;
  modelica_boolean _b2;
  modelica_boolean _b3;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  // _i1 has no default value.
  // _b1 has no default value.
  // _b2 has no default value.
  // _b3 has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _i;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
      tmp8 = mmc_unbox_integer(tmpMeta7);
      _i1 = tmpMeta4;
      _b1 = tmp6  /* pattern as ty=Boolean */;
      _b2 = tmp8  /* pattern as ty=Boolean */;

      _b3 = omc_List_setEqualOnTrue(threadData, _i1, _blocktoupdate, boxvar_intEq);

      if((!_b3 == !1 /* true */))
      {
        _b1 = _visited;

        _b2 = _square;
      }

      tmpMeta10 = mmc_mk_box3(0, _i1, mmc_mk_boolean(_b1), mmc_mk_boolean(_b2));
      tmpMeta9 = mmc_mk_cons(tmpMeta10, _outlist);
      _outlist = tmpMeta9;
    }
  }

  _outlist = listReverse(_outlist);
  _return: OMC_LABEL_UNUSED
  return _outlist;
}
modelica_metatype boxptr_Uncertainties_updateBlocks(threadData_t *threadData, modelica_metatype _blocktoupdate, modelica_metatype _inlist, modelica_metatype _visited, modelica_metatype _square)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_visited);
  tmp2 = mmc_unbox_integer(_square);
  _outlist = omc_Uncertainties_updateBlocks(threadData, _blocktoupdate, _inlist, tmp1, tmp2);
  /* skip box _outlist; list<tuple<list<#Integer>, #Boolean, #Boolean>> */
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_setInitialBlocks(threadData_t *threadData, modelica_metatype _inlist1)
{
  modelica_metatype _outlist = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outlist = tmpMeta1;
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inlist1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      tmpMeta4 = mmc_mk_box3(0, _i, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(1 /* true */));
      tmpMeta3 = mmc_mk_cons(tmpMeta4, _outlist);
      _outlist = tmpMeta3;
    }
  }

  _outlist = listReverse(_outlist);
  _return: OMC_LABEL_UNUSED
  return _outlist;
}

DLLDirection
modelica_metatype omc_Uncertainties_getVariableOccurence(threadData_t *threadData, modelica_metatype _setc, modelica_metatype _mext, modelica_metatype _knowns, modelica_metatype *out_unknownvariables)
{
  modelica_metatype _knownvariables = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _unknownvariables = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _vars = NULL;
  modelica_integer _eq;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _knownvariables = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _unknownvariables = tmpMeta2;
  // _vars has no default value.
  // _eq has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta3 = _setc; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _i = MMC_CAR(tmpMeta3);
      {
        modelica_metatype _j;
        for (tmpMeta4 = _mext; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
        {
          _j = MMC_CAR(tmpMeta4);
          /* Pattern-matching assignment */
          tmpMeta5 = _j;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          _eq = tmp7  /* pattern as ty=Integer */;
          _vars = tmpMeta8;

          if((mmc_unbox_integer(_i) == _eq))
          {
            {
              modelica_metatype _var;
              for (tmpMeta9 = _vars; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
              {
                _var = MMC_CAR(tmpMeta9);
                if(listMember(_var, _knowns))
                {
                  tmpMeta10 = mmc_mk_cons(_var, _knownvariables);
                  _knownvariables = tmpMeta10;
                }
                else
                {
                  tmpMeta11 = mmc_mk_cons(_var, _unknownvariables);
                  _unknownvariables = tmpMeta11;
                }
              }
            }
          }
        }
      }
    }
  }

  _knownvariables = omc_List_unique(threadData, _knownvariables);

  _unknownvariables = omc_List_unique(threadData, _unknownvariables);
  _return: OMC_LABEL_UNUSED
  if (out_unknownvariables) { *out_unknownvariables = _unknownvariables; }
  return _knownvariables;
}

DLLDirection
modelica_string omc_Uncertainties_dumplistInteger(threadData_t *threadData, modelica_metatype _inlist)
{
  modelica_string _outstring = NULL;
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outstring has no default value.
  // _s has no default value.
  _s = omc_List_map(threadData, _inlist, boxvar_intString);

  _outstring = stringDelimitList(_s, _OMC_LIT6);

  tmpMeta1 = mmc_mk_cons(_OMC_LIT27, mmc_mk_cons(_outstring, mmc_mk_cons(_OMC_LIT28, MMC_REFSTRUCTLIT(mmc_nil))));
  _outstring = stringAppendList(tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _outstring;
}

DLLDirection
void omc_Uncertainties_dumpListList(threadData_t *threadData, modelica_metatype _lstLst, modelica_string _heading)
{
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
  tmpMeta1 = stringAppend(_OMC_LIT7,_heading);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT91);
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT92);
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT7);
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT27);
  tmpMeta6 = stringAppend(tmpMeta5,stringDelimitList(omc_List_map(threadData, _lstLst, boxvar_Uncertainties_dumplistInteger), _OMC_LIT24));
  tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT28);
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT93);
  fputs(MMC_STRINGDATA(tmpMeta8),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_Uncertainties_BuildSquareSubSet(threadData_t *threadData, modelica_metatype _ineqs, modelica_metatype _invars, modelica_metatype _knowns, modelica_metatype _mExt, modelica_metatype _solvedeqvar, modelica_metatype _constantvars, modelica_metatype _approximatedEquations, modelica_metatype *out_solvedeqs, modelica_metatype *out_dependency_variables_tree, modelica_metatype *out_dependency_equation_tree)
{
  modelica_metatype _solvedvars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _solvedeqs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _dependency_variables_tree = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _dependency_equation_tree = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _tempvars1 = NULL;
  modelica_metatype _tempvars2 = NULL;
  modelica_metatype _allvars = NULL;
  modelica_metatype _tempeqs = NULL;
  modelica_metatype _t1 = NULL;
  modelica_metatype _t2 = NULL;
  modelica_metatype _t3 = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype _tmpvars = NULL;
  modelica_metatype _tmpeqs = NULL;
  modelica_integer _eqnumber;
  modelica_integer _varnumber;
  modelica_integer _count;
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
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _solvedvars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _solvedeqs = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _dependency_variables_tree = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _dependency_equation_tree = tmpMeta4;
  // _tempvars1 has no default value.
  // _tempvars2 has no default value.
  // _allvars has no default value.
  // _tempeqs has no default value.
  // _t1 has no default value.
  // _t2 has no default value.
  // _t3 has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _e3 has no default value.
  // _tmpvars has no default value.
  // _tmpeqs has no default value.
  // _eqnumber has no default value.
  // _varnumber has no default value.
  _count = ((modelica_integer) 1);
  {
    modelica_metatype _i;
    for (tmpMeta5 = _ineqs; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _i = MMC_CAR(tmpMeta5);
      tmpMeta6 = mmc_mk_cons(_i, MMC_REFSTRUCTLIT(mmc_nil));
      _tempvars1 = omc_Uncertainties_getVariableOccurence(threadData, tmpMeta6, _mExt, _knowns ,&_tempvars2);

      _varnumber = mmc_unbox_integer(listGet(_invars, _count));

      _allvars = omc_List_unique(threadData, listAppend(_tempvars1, _tempvars2));

      tmpMeta7 = mmc_mk_cons(mmc_mk_integer(_varnumber), MMC_REFSTRUCTLIT(mmc_nil));
      _t1 = omc_List_intersection1OnTrue(threadData, _allvars, tmpMeta7, boxvar_intEq ,&_t2 ,&_t3);

      tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_varnumber), MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta9 = mmc_mk_cons(_i, MMC_REFSTRUCTLIT(mmc_nil));
      _tmpvars = omc_Uncertainties_BuildSquareSubSetHelper(threadData, _allvars, _knowns, _mExt, _solvedeqvar, tmpMeta8, tmpMeta9, _constantvars ,&_tmpeqs);

      _solvedvars = listAppend(_solvedvars, _tmpvars);

      _solvedeqs = listAppend(_solvedeqs, _tmpeqs);

      tmpMeta11 = mmc_mk_box2(0, mmc_mk_integer(_varnumber), omc_List_unique(threadData, _tmpvars));
      tmpMeta10 = mmc_mk_cons(tmpMeta11, _dependency_variables_tree);
      _dependency_variables_tree = tmpMeta10;

      _tmpeqs = omc_List_setDifferenceOnTrue(threadData, _tmpeqs, _approximatedEquations, boxvar_intEq);

      tmpMeta13 = mmc_mk_box2(0, _i, omc_List_unique(threadData, _tmpeqs));
      tmpMeta12 = mmc_mk_cons(tmpMeta13, _dependency_equation_tree);
      _dependency_equation_tree = tmpMeta12;

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _solvedvars = omc_List_unique(threadData, _solvedvars);

  _solvedeqs = omc_List_unique(threadData, _solvedeqs);
  _return: OMC_LABEL_UNUSED
  if (out_solvedeqs) { *out_solvedeqs = _solvedeqs; }
  if (out_dependency_variables_tree) { *out_dependency_variables_tree = _dependency_variables_tree; }
  if (out_dependency_equation_tree) { *out_dependency_equation_tree = _dependency_equation_tree; }
  return _solvedvars;
}

DLLDirection
modelica_metatype omc_Uncertainties_BuildSquareSubSetHelper1(threadData_t *threadData, modelica_metatype _inlist1, modelica_metatype _solvedeqvar, modelica_metatype _solvedeqs, modelica_metatype *out_tempeqs)
{
  modelica_metatype _tempsolvedeqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _tempeqs = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _eqnumber;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tempsolvedeqs = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _tempeqs = tmpMeta2;
  // _eqnumber has no default value.
  {
    modelica_metatype _varnumber;
    for (tmpMeta3 = _inlist1; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _varnumber = MMC_CAR(tmpMeta3);
      _eqnumber = omc_Uncertainties_getSolvedEquationNumber(threadData, mmc_unbox_integer(_varnumber), _solvedeqvar);

      if((!listMember(mmc_mk_integer(_eqnumber), _solvedeqs)))
      {
        tmpMeta4 = mmc_mk_cons(mmc_mk_integer(_eqnumber), _tempeqs);
        _tempeqs = tmpMeta4;

        tmpMeta5 = mmc_mk_cons(mmc_mk_integer(_eqnumber), _tempsolvedeqs);
        _tempsolvedeqs = tmpMeta5;
      }
    }
  }

  _tempsolvedeqs = listAppend(_solvedeqs, _tempsolvedeqs);
  _return: OMC_LABEL_UNUSED
  if (out_tempeqs) { *out_tempeqs = _tempeqs; }
  return _tempsolvedeqs;
}

DLLDirection
modelica_metatype omc_Uncertainties_BuildSquareSubSetHelper(threadData_t *threadData, modelica_metatype _invars, modelica_metatype _knowns, modelica_metatype _mExt, modelica_metatype _solvedeqvar, modelica_metatype _solvedvars, modelica_metatype _solvedeqs, modelica_metatype _constantvars, modelica_metatype *out_outlist2)
{
  modelica_metatype _outlist1 = NULL;
  modelica_metatype _outlist2 = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outlist1 has no default value.
  // _outlist2 has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;modelica_metatype tmp4_5;modelica_metatype tmp4_6;modelica_metatype tmp4_7;
    tmp4_1 = _invars;
    tmp4_2 = _knowns;
    tmp4_3 = _mExt;
    tmp4_4 = _solvedeqvar;
    tmp4_5 = _solvedvars;
    tmp4_6 = _solvedeqs;
    tmp4_7 = _constantvars;
    {
      modelica_metatype _t1 = NULL;
      modelica_metatype _t2 = NULL;
      modelica_metatype _tempeqs = NULL;
      modelica_metatype _tempvars1 = NULL;
      modelica_metatype _tempvars2 = NULL;
      modelica_metatype _allvars = NULL;
      modelica_metatype _tmp2 = NULL;
      modelica_metatype _tempsolvedvars = NULL;
      modelica_metatype _tempsolvedeqs = NULL;
      modelica_metatype _tmpsolveeqvar = NULL;
      modelica_metatype _tmpvars = NULL;
      modelica_metatype _tmpknowns = NULL;
      modelica_metatype _tmpconstantvars = NULL;
      modelica_metatype _c1 = NULL;
      modelica_metatype _tmpExt = NULL;
      modelica_boolean _found;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t1 has no default value.
      // _t2 has no default value.
      // _tempeqs has no default value.
      // _tempvars1 has no default value.
      // _tempvars2 has no default value.
      // _allvars has no default value.
      // _tmp2 has no default value.
      // _tempsolvedvars has no default value.
      // _tempsolvedeqs has no default value.
      // _tmpsolveeqvar has no default value.
      // _tmpvars has no default value.
      // _tmpknowns has no default value.
      // _tmpconstantvars has no default value.
      // _c1 has no default value.
      // _tmpExt has no default value.
      _found = 0 /* false */;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _tmpvars = tmp4_1;
          _tmpknowns = tmp4_2;
          _tmpExt = tmp4_3;
          _tmpsolveeqvar = tmp4_4;
          _tempsolvedvars = tmp4_5;
          _tempsolvedeqs = tmp4_6;
          _tmpconstantvars = tmp4_7;
          /* Pattern matching succeeded */
          _t1 = omc_List_intersection1OnTrue(threadData, _tmpvars, _tmpknowns, boxvar_intEq ,&_t2 ,NULL);

          _c1 = omc_List_intersection1OnTrue(threadData, _tmpvars, _tmpconstantvars, boxvar_intEq, NULL, NULL);

          if((!listEmpty(_c1)))
          {
            _tempsolvedeqs = omc_Uncertainties_BuildSquareSubSetHelper1(threadData, _c1, _tmpsolveeqvar, _tempsolvedeqs, NULL);

            _tempsolvedvars = listAppend(_tempsolvedvars, _c1);
          }

          if((!listEmpty(_t1)))
          {
            _tempsolvedeqs = omc_Uncertainties_BuildSquareSubSetHelper1(threadData, _t1, _tmpsolveeqvar, _tempsolvedeqs, NULL);

            _tempsolvedvars = listAppend(_tempsolvedvars, _t1);
          }

          if((!_found == !0 /* false */))
          {
            _tempsolvedvars = listAppend(_tempsolvedvars, _t2);

            _tempsolvedeqs = omc_Uncertainties_BuildSquareSubSetHelper1(threadData, _t2, _solvedeqvar, _tempsolvedeqs ,&_tempeqs);

            _tempvars1 = omc_Uncertainties_getVariableOccurence(threadData, _tempeqs, _mExt, _knowns ,&_tempvars2);

            _allvars = omc_List_unique(threadData, listAppend(_tempvars1, _tempvars2));

            omc_List_intersection1OnTrue(threadData, _allvars, _solvedvars, boxvar_intEq ,&_tmp2 ,NULL);

            if((!listEmpty(_tmp2)))
            {
              _tempsolvedvars = omc_Uncertainties_BuildSquareSubSetHelper(threadData, _tmp2, _tmpknowns, _tmpExt, _tmpsolveeqvar, _tempsolvedvars, _tempsolvedeqs, _tmpconstantvars ,&_tempsolvedeqs);
            }
          }
          tmpMeta[0+0] = _tempsolvedvars;
          tmpMeta[0+1] = _tempsolvedeqs;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta7;
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
  _outlist1 = tmpMeta[0+0];
  _outlist2 = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outlist2) { *out_outlist2 = _outlist2; }
  return _outlist1;
}

DLLDirection
void omc_Uncertainties_VerifyDataReconciliation(threadData_t *threadData, modelica_metatype _setc, modelica_metatype _sets, modelica_metatype _knowns, modelica_metatype _unknowns, modelica_metatype _mExt, modelica_metatype _solvedvar, modelica_metatype _constantvars, modelica_metatype _approximatedEquations, modelica_metatype _allVars, modelica_metatype _allEqs, modelica_metatype _mapIncRowEqn, modelica_metatype _outsetS_vars, modelica_metatype _outsetS_eq)
{
  modelica_metatype _matchedeq = NULL;
  modelica_metatype _matchedknownssetc = NULL;
  modelica_metatype _matchedunknownssetc = NULL;
  modelica_metatype _matchedknownssets = NULL;
  modelica_metatype _matchedunknownssets = NULL;
  modelica_metatype _tmpunknowns = NULL;
  modelica_metatype _tmpknowns = NULL;
  modelica_metatype _tmplist1 = NULL;
  modelica_metatype _tmplist2 = NULL;
  modelica_metatype _tmplist3 = NULL;
  modelica_metatype _tmplist1sets = NULL;
  modelica_metatype _setstmp = NULL;
  modelica_metatype _tmplistvar1 = NULL;
  modelica_metatype _tmplistvar2 = NULL;
  modelica_metatype _tmplistvar3 = NULL;
  modelica_metatype _sets_eqs = NULL;
  modelica_metatype _sets_vars = NULL;
  modelica_metatype _extractedeqs = NULL;
  modelica_integer _eqnumber;
  modelica_integer _varnumber;
  modelica_metatype _var_dependencytree = NULL;
  modelica_metatype _eq_dependencytree = NULL;
  modelica_string _str = NULL;
  modelica_string _resstr = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _convar = NULL;
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
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matchedeq has no default value.
  // _matchedknownssetc has no default value.
  // _matchedunknownssetc has no default value.
  // _matchedknownssets has no default value.
  // _matchedunknownssets has no default value.
  // _tmpunknowns has no default value.
  // _tmpknowns has no default value.
  // _tmplist1 has no default value.
  // _tmplist2 has no default value.
  // _tmplist3 has no default value.
  // _tmplist1sets has no default value.
  // _setstmp has no default value.
  // _tmplistvar1 has no default value.
  // _tmplistvar2 has no default value.
  // _tmplistvar3 has no default value.
  // _sets_eqs has no default value.
  // _sets_vars has no default value.
  // _extractedeqs has no default value.
  // _eqnumber has no default value.
  // _varnumber has no default value.
  // _var_dependencytree has no default value.
  // _eq_dependencytree has no default value.
  // _str has no default value.
  // _resstr has no default value.
  // _var has no default value.
  // _convar has no default value.
  fputs(MMC_STRINGDATA(_OMC_LIT94),stdout);

  _var = omc_List_map1r(threadData, listReverse(_knowns), boxvar_BackendVariable_getVarAt, _allVars);

  tmpMeta1 = stringAppend(_OMC_LIT95,omc_Uncertainties_dumplistInteger(threadData, listReverse(_knowns)));
  omc_BackendDump_dumpVarList(threadData, _var, tmpMeta1);

  tmpMeta2 = stringAppend(_OMC_LIT96,omc_Uncertainties_dumplistInteger(threadData, _setc));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT7);
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT97);
  tmpMeta5 = stringAppend(tmpMeta4,omc_Uncertainties_dumplistInteger(threadData, _sets));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT93);
  fputs(MMC_STRINGDATA(tmpMeta6),stdout);

  _matchedeq = omc_List_intersectionOnTrue(threadData, _setc, _sets, boxvar_intEq);

  fputs(MMC_STRINGDATA(_OMC_LIT98),stdout);

  if(listEmpty(_matchedeq))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT103),stdout);
  }
  else
  {
    fputs(MMC_STRINGDATA(_OMC_LIT99),stdout);

    tmpMeta7 = stringAppend(_OMC_LIT100,omc_Uncertainties_dumplistInteger(threadData, _matchedeq));
    omc_BackendDump_dumpEquationList(threadData, omc_List_map1r(threadData, _matchedeq, boxvar_BackendEquation_get, _allEqs), tmpMeta7);

    omc_Error_addMessage(threadData, _OMC_LIT54, _OMC_LIT102);

    MMC_THROW_INTERNAL();
  }

  _matchedknownssetc = omc_Uncertainties_getVariableOccurence(threadData, _setc, _mExt, _knowns ,&_matchedunknownssetc);

  _matchedknownssets = omc_Uncertainties_getVariableOccurence(threadData, _sets, _mExt, _knowns ,&_matchedunknownssets);

  fputs(MMC_STRINGDATA(_OMC_LIT104),stdout);

  _tmplist1 = omc_List_intersection1OnTrue(threadData, _matchedknownssetc, _knowns, boxvar_intEq ,&_tmplist2 ,&_tmplist3);

  if(listEmpty(_tmplist3))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT108),stdout);

    tmpMeta8 = stringAppend(_OMC_LIT111,omc_Uncertainties_dumplistInteger(threadData, _tmplist1));
    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplist1, boxvar_BackendVariable_getVarAt, _allVars), tmpMeta8);
  }
  else
  {
    if((!listEmpty(_tmplist3)))
    {
      _tmplist1sets = omc_List_intersection1OnTrue(threadData, _tmplist3, _matchedknownssets, boxvar_intEq ,&_tmplist2 ,NULL);

      if((!listEmpty(_tmplist2)))
      {
        _str = omc_Uncertainties_dumplistInteger(threadData, _tmplist2);

        fputs(MMC_STRINGDATA(_OMC_LIT99),stdout);

        tmpMeta9 = stringAppend(_OMC_LIT105,omc_Uncertainties_dumplistInteger(threadData, _tmplist2));
        omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplist2, boxvar_BackendVariable_getVarAt, _allVars), tmpMeta9);

        omc_Error_addMessage(threadData, _OMC_LIT54, _OMC_LIT107);

        MMC_THROW_INTERNAL();
      }

      fputs(MMC_STRINGDATA(_OMC_LIT108),stdout);

      tmpMeta10 = stringAppend(_OMC_LIT109,omc_Uncertainties_dumplistInteger(threadData, _tmplist1));
      omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplist1, boxvar_BackendVariable_getVarAt, _allVars), tmpMeta10);

      tmpMeta11 = stringAppend(_OMC_LIT110,omc_Uncertainties_dumplistInteger(threadData, _tmplist1sets));
      omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplist1sets, boxvar_BackendVariable_getVarAt, _allVars), tmpMeta11);
    }
  }

  fputs(MMC_STRINGDATA(_OMC_LIT112),stdout);

  if((listLength(_setc) < listLength(_knowns)))
  {
    tmpMeta12 = stringAppend(_OMC_LIT118,intString(listLength(_setc)));
    tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT119);
    tmpMeta14 = stringAppend(tmpMeta13,intString(listLength(_knowns)));
    tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT115);
    fputs(MMC_STRINGDATA(tmpMeta15),stdout);
  }
  else
  {
    tmpMeta16 = stringAppend(_OMC_LIT113,intString(listLength(_setc)));
    tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT114);
    tmpMeta18 = stringAppend(tmpMeta17,intString(listLength(_knowns)));
    tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT115);
    _resstr = tmpMeta19;

    omc_Error_addMessage(threadData, _OMC_LIT54, _OMC_LIT117);

    MMC_THROW_INTERNAL();
  }

  fputs(MMC_STRINGDATA(_OMC_LIT120),stdout);

  _tmplistvar1 = omc_List_intersection1OnTrue(threadData, _matchedunknownssetc, _matchedunknownssets, boxvar_intEq ,&_tmplistvar2 ,&_tmplistvar3);

  if(listEmpty(_matchedunknownssetc))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT126),stdout);

    goto _return;
  }
  else
  {
    tmpMeta20 = stringAppend(_OMC_LIT121,omc_Uncertainties_dumplistInteger(threadData, _matchedunknownssetc));
    omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _matchedunknownssetc, boxvar_BackendVariable_getVarAt, _allVars), tmpMeta20);

    if(listEmpty(_tmplistvar2))
    {
      tmpMeta21 = stringAppend(_OMC_LIT125,omc_Uncertainties_dumplistInteger(threadData, _tmplistvar1));
      omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplistvar1, boxvar_BackendVariable_getVarAt, _allVars), tmpMeta21);

      fputs(MMC_STRINGDATA(_OMC_LIT103),stdout);
    }
    else
    {
      tmpMeta22 = stringAppend(_OMC_LIT122,omc_Uncertainties_dumplistInteger(threadData, _tmplistvar2));
      omc_BackendDump_dumpVarList(threadData, omc_List_map1r(threadData, _tmplistvar2, boxvar_BackendVariable_getVarAt, _allVars), tmpMeta22);

      omc_Error_addMessage(threadData, _OMC_LIT54, _OMC_LIT124);

      MMC_THROW_INTERNAL();
    }
  }

  fputs(MMC_STRINGDATA(_OMC_LIT127),stdout);

  if(listEmpty(_outsetS_eq))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT134),stdout);

    goto _return;
  }
  else
  {
    if((listLength(_outsetS_eq) == listLength(omc_BackendVariable_varList(threadData, _outsetS_vars))))
    {
      tmpMeta23 = stringAppend(_OMC_LIT133,intString(listLength(_outsetS_eq)));
      tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT129);
      tmpMeta25 = stringAppend(tmpMeta24,intString(listLength(omc_BackendVariable_varList(threadData, _outsetS_vars))));
      tmpMeta26 = stringAppend(tmpMeta25,_OMC_LIT130);
      fputs(MMC_STRINGDATA(tmpMeta26),stdout);
    }
    else
    {
      tmpMeta27 = stringAppend(_OMC_LIT128,intString(listLength(_outsetS_eq)));
      tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT129);
      tmpMeta29 = stringAppend(tmpMeta28,intString(listLength(omc_BackendVariable_varList(threadData, _outsetS_vars))));
      tmpMeta30 = stringAppend(tmpMeta29,_OMC_LIT130);
      fputs(MMC_STRINGDATA(tmpMeta30),stdout);

      omc_Error_addMessage(threadData, _OMC_LIT54, _OMC_LIT132);

      MMC_THROW_INTERNAL();
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_Uncertainties_getConstantVariables(threadData_t *threadData, modelica_metatype _mext)
{
  modelica_metatype _constantvars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _vars = NULL;
  modelica_integer _eqnumber;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _constantvars = tmpMeta1;
  // _vars has no default value.
  // _eqnumber has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _mext; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _i;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmp5 = mmc_unbox_integer(tmpMeta4);
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _eqnumber = tmp5  /* pattern as ty=Integer */;
      _vars = tmpMeta6;

      if((listLength(_vars) == ((modelica_integer) 1)))
      {
        {
          modelica_metatype _j;
          for (tmpMeta7 = _vars; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
          {
            _j = MMC_CAR(tmpMeta7);
            tmpMeta8 = mmc_mk_cons(_j, _constantvars);
            _constantvars = tmpMeta8;
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _constantvars;
}

DLLDirection
modelica_metatype omc_Uncertainties_getVariablesAfterExtraction(threadData_t *threadData, modelica_metatype _setc, modelica_metatype _sets, modelica_metatype _mext)
{
  modelica_metatype _finalvars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _fulleqs = NULL;
  modelica_metatype _vars = NULL;
  modelica_integer _eq;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _finalvars = tmpMeta1;
  // _fulleqs has no default value.
  // _vars has no default value.
  // _eq has no default value.
  _fulleqs = listAppend(_setc, _sets);

  {
    modelica_metatype _i;
    for (tmpMeta2 = _fulleqs; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      {
        modelica_metatype _j;
        for (tmpMeta3 = _mext; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _j = MMC_CAR(tmpMeta3);
          /* Pattern-matching assignment */
          tmpMeta4 = _j;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
          tmp6 = mmc_unbox_integer(tmpMeta5);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
          _eq = tmp6  /* pattern as ty=Integer */;
          _vars = tmpMeta7;

          if((mmc_unbox_integer(_i) == _eq))
          {
            {
              modelica_metatype _k;
              for (tmpMeta8 = _vars; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
              {
                _k = MMC_CAR(tmpMeta8);
                tmpMeta9 = mmc_mk_cons(_k, _finalvars);
                _finalvars = tmpMeta9;
              }
            }
          }
        }
      }
    }
  }

  _finalvars = omc_List_unique(threadData, _finalvars);
  _return: OMC_LABEL_UNUSED
  return _finalvars;
}

DLLDirection
modelica_metatype omc_Uncertainties_getSolvedDependentEquationAndVars(threadData_t *threadData, modelica_metatype _inlist, modelica_metatype _solvedvar, modelica_metatype *out_sets_vars)
{
  modelica_metatype _sets_eqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _sets_vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _eqnumber;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _sets_eqs = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _sets_vars = tmpMeta2;
  // _eqnumber has no default value.
  {
    modelica_metatype _varnumber;
    for (tmpMeta3 = _inlist; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _varnumber = MMC_CAR(tmpMeta3);
      _eqnumber = omc_Uncertainties_getSolvedEquationNumber(threadData, mmc_unbox_integer(_varnumber), _solvedvar);

      tmpMeta4 = mmc_mk_cons(mmc_mk_integer(_eqnumber), _sets_eqs);
      _sets_eqs = tmpMeta4;

      tmpMeta5 = mmc_mk_cons(_varnumber, _sets_vars);
      _sets_vars = tmpMeta5;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_sets_vars) { *out_sets_vars = _sets_vars; }
  return _sets_eqs;
}

DLLDirection
void omc_Uncertainties_dumpDependencyTree(threadData_t *threadData, modelica_metatype _invartree, modelica_metatype _ineqtree, modelica_metatype _knowns, modelica_metatype _constantvars, modelica_metatype _allVars, modelica_metatype _allEqs, modelica_metatype _mapIncRowEqn)
{
  modelica_integer _varnumber;
  modelica_integer _count;
  modelica_metatype _eqs = NULL;
  modelica_metatype _varlist = NULL;
  modelica_metatype _depeqs = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _kn1 = NULL;
  modelica_metatype _kn2 = NULL;
  modelica_metatype _kn3 = NULL;
  modelica_metatype _c1 = NULL;
  modelica_metatype _c2 = NULL;
  modelica_metatype _c3 = NULL;
  modelica_boolean _flag;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varnumber has no default value.
  _count = ((modelica_integer) 1);
  // _eqs has no default value.
  // _varlist has no default value.
  // _depeqs has no default value.
  // _var has no default value.
  // _kn1 has no default value.
  // _kn2 has no default value.
  // _kn3 has no default value.
  // _c1 has no default value.
  // _c2 has no default value.
  // _c3 has no default value.
  _flag = 0 /* false */;
  {
    modelica_metatype _i;
    for (tmpMeta1 = _invartree; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _i;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmp4 = mmc_unbox_integer(tmpMeta3);
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _varnumber = tmp4  /* pattern as ty=Integer */;
      _varlist = tmpMeta5;

      /* Pattern-matching assignment */
      tmpMeta6 = listGet(_ineqtree, _count);
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
      _eqs = tmpMeta7;

      tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_varnumber), MMC_REFSTRUCTLIT(mmc_nil));
      _var = omc_List_map1r(threadData, tmpMeta8, boxvar_BackendVariable_getVarAt, _allVars);

      _depeqs = omc_List_map1r(threadData, omc_List_map1r(threadData, _eqs, boxvar_listGet, arrayList(_mapIncRowEqn)), boxvar_BackendEquation_get, _allEqs);

      _kn1 = omc_List_intersection1OnTrue(threadData, _varlist, listAppend(_knowns, _constantvars), boxvar_intEq ,&_kn2 ,&_kn3);

      if(listEmpty(_kn1))
      {
        tmpMeta9 = stringAppend(_OMC_LIT135,intString(_varnumber));
        tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT136);
        fputs(MMC_STRINGDATA(tmpMeta10),stdout);

        omc_Error_addMessage(threadData, _OMC_LIT54, _OMC_LIT138);

        goto _return;
      }

      omc_BackendDump_dumpVarList(threadData, _var, _OMC_LIT139);

      omc_BackendDump_dumpEquationList(threadData, _depeqs, _OMC_LIT140);

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_Uncertainties_createInnerEquations(threadData_t *threadData, modelica_metatype _tempsets, modelica_metatype _solvedeqvar, modelica_metatype _sets, modelica_metatype _knowns, modelica_metatype _inputlist)
{
  modelica_metatype _outequations = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _varnumber;
  modelica_integer _count;
  modelica_integer _inpcount;
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
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outequations = tmpMeta1;
  // _varnumber has no default value.
  _count = ((modelica_integer) 1);
  _inpcount = ((modelica_integer) 1);
  {
    modelica_metatype _eqnumber;
    for (tmpMeta2 = _tempsets; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eqnumber = MMC_CAR(tmpMeta2);
      _varnumber = omc_Uncertainties_getSolvedVariableNumber(threadData, mmc_unbox_integer(_eqnumber), _solvedeqvar);

      if((!listMember(mmc_mk_integer(_varnumber), _knowns)))
      {
        tmpMeta4 = mmc_mk_cons(mmc_mk_integer(_varnumber), MMC_REFSTRUCTLIT(mmc_nil));
        tmpMeta5 = mmc_mk_box3(3, &BackendDAE_InnerEquation_INNEREQUATION__desc, listGet(_sets, _count), tmpMeta4);
        tmpMeta3 = mmc_mk_cons(tmpMeta5, _outequations);
        _outequations = tmpMeta3;
      }
      else
      {
        tmpMeta7 = mmc_mk_cons(listGet(_inputlist, _inpcount), MMC_REFSTRUCTLIT(mmc_nil));
        tmpMeta8 = mmc_mk_box3(3, &BackendDAE_InnerEquation_INNEREQUATION__desc, listGet(_sets, _count), tmpMeta7);
        tmpMeta6 = mmc_mk_cons(tmpMeta8, _outequations);
        _outequations = tmpMeta6;

        _inpcount = ((modelica_integer) 1) + _inpcount;
      }

      _count = ((modelica_integer) 1) + _count;
    }
  }

  _outequations = listReverse(_outequations);
  _return: OMC_LABEL_UNUSED
  return _outequations;
}

DLLDirection
modelica_string omc_Uncertainties_dumpToCsv(threadData_t *threadData, modelica_string _instring, modelica_metatype _invar)
{
  modelica_string _outstring = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outstring = _OMC_LIT8;
  // _cr has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta1 = _invar; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      _cr = omc_BackendVariable_varCref(threadData, _i);

      tmpMeta2 = stringAppend(_outstring,omc_ComponentReference_crefStr(threadData, _cr));
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT7);
      _outstring = tmpMeta3;
    }
  }

  tmpMeta5 = stringAppend(_instring,_outstring);
  _outstring = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outstring;
}

DLLDirection
modelica_metatype omc_Uncertainties_dumpCrefList(threadData_t *threadData, modelica_metatype _cr_lst, modelica_metatype _invar, modelica_metatype _paramvars)
{
  modelica_metatype _outvar = NULL;
  modelica_metatype _tmpcr = NULL;
  modelica_metatype _tmpparamcrefs = NULL;
  modelica_metatype _tmpvar = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _count;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outvar has no default value.
  // _tmpcr has no default value.
  // _tmpparamcrefs has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpvar = tmpMeta1;
  _count = ((modelica_integer) 1);
  _tmpcr = omc_List_map(threadData, omc_BackendVariable_varList(threadData, _invar), boxvar_BackendVariable_varCref);

  _tmpparamcrefs = omc_List_map(threadData, _paramvars, boxvar_BackendVariable_varCref);

  {
    modelica_metatype _i;
    for (tmpMeta2 = _cr_lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      if(((!listMember(_i, _tmpcr)) && (!listMember(_i, _tmpparamcrefs))))
      {
        tmpMeta3 = mmc_mk_cons(omc_BackendVariable_makeVar(threadData, _i), _tmpvar);
        _tmpvar = tmpMeta3;

        _count = ((modelica_integer) 1) + _count;
      }
    }
  }

  _outvar = omc_BackendVariable_listVar(threadData, omc_List_unique(threadData, _tmpvar));
  _return: OMC_LABEL_UNUSED
  return _outvar;
}

DLLDirection
modelica_metatype omc_Uncertainties_dataReconciliation(threadData_t *threadData, modelica_metatype _inDae)
{
  modelica_metatype _outDae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDae has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inDae;
    {
      modelica_metatype _dae = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _approximatedEquations = NULL;
      modelica_metatype _approximatedEquations_one = NULL;
      modelica_metatype _constantvars = NULL;
      modelica_metatype _extractedvars = NULL;
      modelica_metatype _setC_eq = NULL;
      modelica_metatype _setS_eq = NULL;
      modelica_metatype _reqns = NULL;
      modelica_metatype _eqsyslist = NULL;
      modelica_metatype _allVars = NULL;
      modelica_metatype _globalKnownVars = NULL;
      modelica_metatype _tmpglobalKnownVars = NULL;
      modelica_metatype _allEqs = NULL;
      modelica_metatype _resVarsLst = NULL;
      modelica_metatype _variables = NULL;
      modelica_metatype _knowns = NULL;
      modelica_metatype _unknowns = NULL;
      modelica_metatype _directlyLinked = NULL;
      modelica_metatype _indirectlyLinked = NULL;
      modelica_metatype _outputvars = NULL;
      modelica_metatype _finalvarlist = NULL;
      modelica_metatype _shared = NULL;
      modelica_metatype _currentSystem = NULL;
      modelica_metatype _mExt = NULL;
      modelica_metatype _setS = NULL;
      modelica_metatype _setC = NULL;
      modelica_metatype _tempsetS = NULL;
      modelica_metatype _tempsetC = NULL;
      modelica_metatype _inputvarlist = NULL;
      modelica_metatype _mapEqnIncRow = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_metatype _match1 = NULL;
      modelica_metatype _bltblocks = NULL;
      modelica_metatype _blockstofind = NULL;
      modelica_metatype _blockranks = NULL;
      modelica_metatype _blockstatus = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _tempvar = NULL;
      modelica_metatype _tmpparamvars = NULL;
      modelica_metatype _blocktargetinfo = NULL;
      modelica_metatype _predecessorblocktargetinfo = NULL;
      modelica_metatype _initblocks = NULL;
      modelica_string _modelname = NULL;
      modelica_metatype _einfo = NULL;
      modelica_metatype _simcodejacobian = NULL;
      modelica_metatype _outDiffVars = NULL;
      modelica_metatype _outResidualVars = NULL;
      modelica_metatype _outOtherVars = NULL;
      modelica_metatype _outResidualEqns = NULL;
      modelica_metatype _outOtherEqns = NULL;
      modelica_string _str = NULL;
      modelica_metatype _cr_lst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dae has no default value.
      // _m has no default value.
      // _approximatedEquations has no default value.
      // _approximatedEquations_one has no default value.
      // _constantvars has no default value.
      // _extractedvars has no default value.
      // _setC_eq has no default value.
      // _setS_eq has no default value.
      // _reqns has no default value.
      // _eqsyslist has no default value.
      // _allVars has no default value.
      // _globalKnownVars has no default value.
      // _tmpglobalKnownVars has no default value.
      // _allEqs has no default value.
      // _resVarsLst has no default value.
      // _variables has no default value.
      // _knowns has no default value.
      // _unknowns has no default value.
      // _directlyLinked has no default value.
      // _indirectlyLinked has no default value.
      // _outputvars has no default value.
      // _finalvarlist has no default value.
      // _shared has no default value.
      // _currentSystem has no default value.
      // _mExt has no default value.
      // _setS has no default value.
      // _setC has no default value.
      // _tempsetS has no default value.
      // _tempsetC has no default value.
      // _inputvarlist has no default value.
      // _mapEqnIncRow has no default value.
      // _mapIncRowEqn has no default value.
      // _match1 has no default value.
      // _bltblocks has no default value.
      // _blockstofind has no default value.
      // _blockranks has no default value.
      // _blockstatus has no default value.
      // _var has no default value.
      // _tempvar has no default value.
      // _tmpparamvars has no default value.
      // _blocktargetinfo has no default value.
      // _predecessorblocktargetinfo has no default value.
      // _initblocks has no default value.
      // _modelname has no default value.
      // _einfo has no default value.
      // _simcodejacobian has no default value.
      // _outDiffVars has no default value.
      // _outResidualVars has no default value.
      // _outOtherVars has no default value.
      // _outResidualEqns has no default value.
      // _outOtherEqns has no default value.
      // _str has no default value.
      // _cr_lst has no default value.
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
          
          _dae = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = _dae;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (listEmpty(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          _currentSystem = tmpMeta8;
          _eqsyslist = tmpMeta9;
          _shared = tmpMeta10;

          /* Pattern-matching assignment */
          tmpMeta11 = _currentSystem;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          _allVars = tmpMeta12;
          _allEqs = tmpMeta13;

          /* Pattern-matching assignment */
          tmpMeta14 = _shared;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 17));
          _globalKnownVars = tmpMeta15;
          _einfo = tmpMeta16;

          /* Pattern-matching assignment */
          tmpMeta17 = _einfo;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 3));
          _modelname = tmpMeta18;

          _m = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _currentSystem, _OMC_LIT20, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

          tmpMeta19 = stringAppend(_OMC_LIT141,_modelname);
          tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT7);
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT92);
          tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT93);
          fputs(MMC_STRINGDATA(tmpMeta22),stdout);

          omc_BackendDump_dumpEquationArray(threadData, _allEqs, _OMC_LIT142);

          omc_BackendDump_dumpVariables(threadData, _allVars, _OMC_LIT143);

          _match1 = omc_Matching_PerfectMatching(threadData, _m, NULL);

          _var = omc_Uncertainties_dumpMatching(threadData, _match1);

          omc_BackendDump_dumpMatching(threadData, _match1);

          _bltblocks = omc_Sorting_Tarjan(threadData, _m, _match1, arrayLength(_match1));

          omc_Uncertainties_dumpListList(threadData, _bltblocks, _OMC_LIT144);

          /* Pattern-matching assignment */
          tmp23 = listEmpty(_eqsyslist);
          if (1 /* true */ != tmp23) goto goto_2;

          _mExt = omc_Uncertainties_getExtAdjacencyMatrix(threadData, _m);

          _variables = omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, _allVars));

          _knowns = omc_Uncertainties_getUncertainRefineVariableIndexes(threadData, _allVars, _variables, NULL);

          _directlyLinked = omc_Uncertainties_getRelatedVariables(threadData, _mExt, _knowns);

          _indirectlyLinked = omc_List_setDifference(threadData, omc_Uncertainties_getRelatedVariables(threadData, _mExt, _directlyLinked), _knowns);

          _unknowns = listAppend(_directlyLinked, _indirectlyLinked);

          _outputvars = omc_List_setDifference(threadData, omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, _allVars)), listAppend(_unknowns, _knowns));

          _unknowns = listAppend(_unknowns, _outputvars);

          listAppend(_unknowns, _knowns);

          _initblocks = omc_Uncertainties_setInitialBlocks(threadData, _bltblocks);

          _constantvars = omc_Uncertainties_getConstantVariables(threadData, _mExt);

          _approximatedEquations_one = omc_Uncertainties_getEquationsWithApproximatedAnnotation(threadData, _dae);

          _approximatedEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _approximatedEquations_one, boxvar_listGet, arrayList(_mapEqnIncRow)));

          omc_Uncertainties_getRemovedEquationSolvedVariables(threadData, _approximatedEquations, _var);

          _blockstofind = omc_Uncertainties_originalBlocks(threadData, _bltblocks, _knowns, _unknowns, _outputvars, _var ,&_blockstatus);

          _blockranks = omc_List_toListWithPositions(threadData, _blockstofind);

          _blockstatus = omc_Uncertainties_checkBlockStatus(threadData, _blockstofind, _blockstatus);

          _blocktargetinfo = omc_Uncertainties_findBlockTargets(threadData, _blockstofind, _blockstatus, _var, _mExt, _initblocks, _blockranks);

          _predecessorblocktargetinfo = omc_Uncertainties_findPredecessorBlocks(threadData, _blocktargetinfo);

          _tempsetC = omc_Uncertainties_ExtractEquationsfromPredecessorBlocks(threadData, _predecessorblocktargetinfo, _blockranks, _approximatedEquations ,&_tempsetS);

          omc_Uncertainties_getVariableOccurence(threadData, _tempsetC, _mExt, _knowns, NULL);

          _extractedvars = omc_Uncertainties_getVariablesAfterExtraction(threadData, _tempsetC, _tempsetS, _mExt);

          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Uncertainties_getVariablesAfterExtraction(threadData, _tempsetS, tmpMeta24, _mExt);

          _finalvarlist = omc_Uncertainties_getRemovedEquationSolvedVariables(threadData, listAppend(_tempsetC, _tempsetS), _var);

          _finalvarlist = omc_List_intersection1OnTrue(threadData, _extractedvars, _finalvarlist, boxvar_intEq ,&_inputvarlist ,NULL);

          _inputvarlist = omc_List_setDifferenceOnTrue(threadData, _inputvarlist, _knowns, boxvar_intEq);

          tmpMeta25 = stringAppend(_OMC_LIT145,omc_Uncertainties_dumplistInteger(threadData, _tempsetC));
          tmpMeta26 = stringAppend(tmpMeta25,_OMC_LIT7);
          tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT83);
          tmpMeta28 = stringAppend(tmpMeta27,omc_Uncertainties_dumplistInteger(threadData, _tempsetS));
          tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT93);
          fputs(MMC_STRINGDATA(tmpMeta29),stdout);

          _setC = omc_List_map1r(threadData, _tempsetC, boxvar_listGet, arrayList(_mapIncRowEqn));

          _setC = omc_List_unique(threadData, _setC);

          _setS = omc_List_map1r(threadData, _tempsetS, boxvar_listGet, arrayList(_mapIncRowEqn));

          _setS = omc_List_unique(threadData, _setS);

          _setC_eq = omc_List_map1r(threadData, _setC, boxvar_BackendEquation_get, _allEqs);

          _setS_eq = omc_List_map1r(threadData, _setS, boxvar_BackendEquation_get, _allEqs);

          omc_BackendDump_dumpEquationList(threadData, _setC_eq, _OMC_LIT146);

          omc_BackendDump_dumpEquationList(threadData, _setS_eq, _OMC_LIT147);

          _outDiffVars = omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, listReverse(_knowns), boxvar_BackendVariable_getVarAt, _allVars));

          _outDiffVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, _outDiffVars), boxvar_BackendVariable_setVarUnreplaceable, mmc_mk_boolean(1 /* true */)));

          /* Pattern-matching assignment */
          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta31 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 12))), tmpMeta30);
          tmpMeta32 = omc_BackendEquation_traverseEquationArray(threadData, omc_BackendEquation_listEquation(threadData, _setC_eq), boxvar_BackendEquation_traverseEquationToScalarResidualForm, tmpMeta31);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          _reqns = tmpMeta33;

          _reqns = omc_BackendEquation_convertResidualsIntoSolvedEquations(threadData, listReverse(_reqns), _OMC_LIT148, ((modelica_integer) 1), 0 /* false */ ,&_resVarsLst, NULL);

          _outResidualVars = omc_BackendVariable_listVar(threadData, _resVarsLst);

          _outResidualEqns = omc_BackendEquation_listEquation(threadData, _reqns);

          _outOtherEqns = omc_BackendEquation_listEquation(threadData, _setS_eq);

          _tmpparamvars = omc_BackendEquation_equationsVars(threadData, _outOtherEqns, _globalKnownVars);

          _cr_lst = omc_BackendEquation_getAllCrefFromEquations(threadData, omc_BackendEquation_listEquation(threadData, _setS_eq));

          _outOtherVars = omc_Uncertainties_dumpCrefList(threadData, _cr_lst, _outDiffVars, _tmpparamvars);

          omc_BackendDump_dumpVariables(threadData, _outOtherVars, _OMC_LIT149);

          omc_BackendDump_dumpVariables(threadData, omc_BackendVariable_listVar(threadData, _tmpparamvars), _OMC_LIT150);

          omc_Uncertainties_VerifyDataReconciliation(threadData, _tempsetC, _tempsetS, _knowns, _unknowns, _mExt, _var, _constantvars, _approximatedEquations, _allVars, _allEqs, _mapIncRowEqn, _outOtherVars, _setS_eq);

          _simcodejacobian = omc_SymbolicJacobian_getSymbolicJacobian(threadData, _outDiffVars, _outResidualEqns, _outResidualVars, _outOtherEqns, _outOtherVars, _shared, omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, _extractedvars, boxvar_BackendVariable_getVarAt, _allVars)), _OMC_LIT151, 0 /* false */ ,&_shared);

          omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, omc_Uncertainties_getRemovedEquationSolvedVariables(threadData, _tempsetC, _var), boxvar_BackendVariable_getVarAt, _allVars));

          tmpMeta35 = mmc_mk_box7(3, &BackendDAE_DataReconciliationData_DATA__RECON__desc, _simcodejacobian, _outResidualVars, _outDiffVars, mmc_mk_none(), mmc_mk_none(), mmc_mk_integer(((modelica_integer) 0)));
          tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(22));
          memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[20] = mmc_mk_some(tmpMeta35);
          _shared = tmpMeta34;

          _currentSystem = omc_BackendDAEUtil_setEqSystVars(threadData, _currentSystem, omc_BackendVariable_mergeVariables(threadData, _outResidualVars, _outOtherVars, 1 /* true */));

          _currentSystem = omc_BackendDAEUtil_setEqSystEqs(threadData, _currentSystem, omc_BackendEquation_merge(threadData, _outResidualEqns, _outOtherEqns));

          _tempvar = omc_BackendVariable_varList(threadData, _outDiffVars);

          _tmpglobalKnownVars = omc_BackendVariable_listVar(threadData, omc_List_map1(threadData, _tempvar, boxvar_BackendVariable_setVarDirection, _OMC_LIT152));

          _shared = omc_BackendDAEUtil_setSharedGlobalKnownVars(threadData, _shared, omc_BackendVariable_mergeVariables(threadData, _globalKnownVars, _tmpglobalKnownVars, 1 /* true */));

          tmpMeta36 = stringAppend(_modelname,_OMC_LIT154);
          if((!omc_System_regularFileExists(threadData, tmpMeta36)))
          {
            _str = _OMC_LIT153;

            _str = omc_Uncertainties_dumpToCsv(threadData, _str, _tempvar);

            tmpMeta37 = stringAppend(_modelname,_OMC_LIT154);
            omc_System_writeFile(threadData, tmpMeta37, _str);
          }
          tmpMeta38 = mmc_mk_cons(_currentSystem, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta39 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, tmpMeta38, _shared);
          tmpMeta1 = tmpMeta39;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inDae;
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
  _outDae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outDae;
}

DLLDirection
modelica_metatype omc_Uncertainties_modelEquationsUC(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _className, modelica_string _outputFileIn, modelica_boolean _dumpSteps, modelica_metatype *out_outValue)
{
  modelica_metatype _outCache = NULL;
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCache has no default value.
  // _outValue has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp10_1;volatile modelica_metatype tmp10_2;volatile modelica_string tmp10_3;
    tmp10_1 = _inCache;
    tmp10_2 = _inEnv;
    tmp10_3 = _outputFileIn;
    {
      modelica_string _outputFile = NULL;
      modelica_string _resstr = NULL;
      modelica_metatype _dae = NULL;
      modelica_metatype _cache = NULL;
      modelica_metatype _graph = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _dlow = NULL;
      modelica_metatype _dlow_1 = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _approximatedEquations = NULL;
      modelica_metatype _approximatedEquations_one = NULL;
      modelica_metatype _setC_eq = NULL;
      modelica_metatype _setS_eq = NULL;
      modelica_metatype _eqsyslist = NULL;
      modelica_metatype _allVars = NULL;
      modelica_metatype _knownVariables = NULL;
      modelica_metatype _unknownVariables = NULL;
      modelica_metatype _globalKnownVars = NULL;
      modelica_metatype _allEqs = NULL;
      modelica_metatype _variables = NULL;
      modelica_metatype _knowns = NULL;
      modelica_metatype _unknowns = NULL;
      modelica_metatype _directlyLinked = NULL;
      modelica_metatype _indirectlyLinked = NULL;
      modelica_metatype _outputvars = NULL;
      modelica_metatype _shared = NULL;
      modelica_metatype _currentSystem = NULL;
      modelica_metatype _mExt = NULL;
      modelica_metatype _setS = NULL;
      modelica_metatype _setC = NULL;
      modelica_metatype _unknownsVarsMatch = NULL;
      modelica_metatype _remainingEquations = NULL;
      modelica_metatype _removed_equations_squared = NULL;
      modelica_metatype _mapEqnIncRow = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_string _outStringA = NULL;
      modelica_string _outStringB = NULL;
      modelica_string _outString = NULL;
      modelica_string _description = NULL;
      modelica_metatype _distributions = NULL;
      modelica_boolean _forceOrdering;
      static const MMC_DEFSTRINGLIT(tmp3,25,"defaultOptModulesOrdering");
      modelica_metatype tmpMeta4;
      modelica_metatype tmpMeta5;
      static const MMC_DEFSTRINGLIT(tmp6,125,"If this is activated, then the specified pre-/post-/init-optimization modules will be rearranged to the recommended ordering.");
      modelica_metatype tmpMeta7;
      modelica_metatype tmpMeta8;
      volatile mmc_switch_type tmp10;
      int tmp11;
      // _outputFile has no default value.
      // _resstr has no default value.
      // _dae has no default value.
      // _cache has no default value.
      // _graph has no default value.
      // _p has no default value.
      // _dlow has no default value.
      // _dlow_1 has no default value.
      // _m has no default value.
      // _approximatedEquations has no default value.
      // _approximatedEquations_one has no default value.
      // _setC_eq has no default value.
      // _setS_eq has no default value.
      // _eqsyslist has no default value.
      // _allVars has no default value.
      // _knownVariables has no default value.
      // _unknownVariables has no default value.
      // _globalKnownVars has no default value.
      // _allEqs has no default value.
      // _variables has no default value.
      // _knowns has no default value.
      // _unknowns has no default value.
      // _directlyLinked has no default value.
      // _indirectlyLinked has no default value.
      // _outputvars has no default value.
      // _shared has no default value.
      // _currentSystem has no default value.
      // _mExt has no default value.
      // _setS has no default value.
      // _setC has no default value.
      // _unknownsVarsMatch has no default value.
      // _remainingEquations has no default value.
      // _removed_equations_squared has no default value.
      // _mapEqnIncRow has no default value.
      // _mapIncRowEqn has no default value.
      // _outStringA has no default value.
      // _outStringB has no default value.
      // _outString has no default value.
      // _description has no default value.
      // _distributions has no default value.
      tmpMeta4 = mmc_mk_box1(4, &Flags_FlagVisibility_EXTERNAL__desc);
      tmpMeta5 = mmc_mk_box2(4, &Flags_FlagData_BOOL__FLAG__desc, mmc_mk_boolean(1 /* true */));
      tmpMeta7 = mmc_mk_box2(3, &Gettext_TranslatableContent_gettext__desc, MMC_REFSTRINGLIT(tmp6));
      tmpMeta8 = mmc_mk_box8(3, &Flags_ConfigFlag_CONFIG__FLAG__desc, mmc_mk_integer(((modelica_integer) 72)), MMC_REFSTRINGLIT(tmp3), mmc_mk_none(), tmpMeta4, tmpMeta5, mmc_mk_none(), tmpMeta7);
      _forceOrdering = omc_Flags_getConfigBool(threadData, tmpMeta8);
      tmp10 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp9_top:
      threadData->mmc_jumper = &new_mmc_jumper;
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
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          
          _cache = tmp10_1;
          _graph = tmp10_2;
          _outputFile = tmp10_3;
          /* Pattern matching succeeded */
          omc_Print_clearBuf(threadData);

          _p = omc_SymbolTable_getAbsyn(threadData);

          _dae = omc_Uncertainties_flattenModel(threadData, _className, _p, _cache ,&_cache ,&_graph);

          _description = omc_DAEUtil_daeDescription(threadData, _dae);

          tmpMeta12 = mmc_mk_box4(3, &BackendDAE_ExtraInfo_EXTRA__INFO__desc, _description, _outputFile, mmc_mk_none());
          _dlow = omc_BackendDAECreate_lower(threadData, _dae, _cache, _graph, tmpMeta12);

          omc_FlagsUtil_setConfigBool(threadData, _OMC_LIT160, 0 /* false */);

          _dlow_1 = omc_BackendDAEUtil_getSolvedSystem(threadData, _dlow, _OMC_LIT8, _OMC_LIT169, mmc_mk_none(), mmc_mk_none(), _OMC_LIT170, NULL, NULL, NULL, NULL);

          omc_FlagsUtil_setConfigBool(threadData, _OMC_LIT160, _forceOrdering);

          _dlow_1 = omc_Uncertainties_removeSimpleEquationsUC(threadData, _dlow_1);

          /* Pattern-matching assignment */
          tmpMeta13 = _dlow_1;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          if (listEmpty(tmpMeta14)) goto goto_2;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
          _currentSystem = tmpMeta15;
          _eqsyslist = tmpMeta16;
          _shared = tmpMeta17;

          /* Pattern-matching assignment */
          tmpMeta18 = _currentSystem;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 3));
          _allVars = tmpMeta19;
          _allEqs = tmpMeta20;

          /* Pattern-matching assignment */
          tmpMeta21 = _shared;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          _globalKnownVars = tmpMeta22;

          _m = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _currentSystem, _OMC_LIT20, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

          /* Pattern-matching assignment */
          tmp23 = listEmpty(_eqsyslist);
          if (1 /* true */ != tmp23) goto goto_2;

          _mExt = omc_Uncertainties_getExtAdjacencyMatrix(threadData, _m);

          _variables = omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, _allVars));

          _knowns = omc_Uncertainties_getUncertainRefineVariableIndexes(threadData, _allVars, _variables, NULL);

          _directlyLinked = omc_Uncertainties_getRelatedVariables(threadData, _mExt, _knowns);

          _indirectlyLinked = omc_List_setDifference(threadData, omc_Uncertainties_getRelatedVariables(threadData, _mExt, _directlyLinked), _knowns);

          _unknowns = listAppend(_directlyLinked, _indirectlyLinked);

          _outputvars = omc_List_setDifference(threadData, omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, _allVars)), listAppend(_unknowns, _knowns));

          _dlow_1 = omc_Uncertainties_eliminateVariablesDAE(threadData, _unknowns, _dlow_1);

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT171));

          /* Pattern-matching assignment */
          tmpMeta24 = _dlow_1;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          if (listEmpty(tmpMeta25)) goto goto_2;
          tmpMeta26 = MMC_CAR(tmpMeta25);
          tmpMeta27 = MMC_CDR(tmpMeta25);
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 3));
          _currentSystem = tmpMeta26;
          _shared = tmpMeta28;

          /* Pattern-matching assignment */
          tmpMeta29 = _currentSystem;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 3));
          _allVars = tmpMeta30;
          _allEqs = tmpMeta31;

          /* Pattern-matching assignment */
          tmpMeta32 = _shared;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          _globalKnownVars = tmpMeta33;

          _m = omc_BackendDAEUtil_adjacencyMatrixScalar(threadData, _currentSystem, _OMC_LIT20, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT172));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT173));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_equationsToMathematicaGrid(threadData, omc_List_intRange(threadData, omc_BackendEquation_equationArraySize(threadData, _allEqs)), _allEqs, _allVars, _globalKnownVars, _mapIncRowEqn));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT174));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_variablesToMathematicaGrid(threadData, omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, _allVars)), _allVars));

          _mExt = omc_Uncertainties_getExtAdjacencyMatrix(threadData, _m);

          _approximatedEquations_one = omc_Uncertainties_getEquationsWithApproximatedAnnotation(threadData, _dlow_1);

          _approximatedEquations = omc_List_flatten(threadData, omc_List_map1r(threadData, _approximatedEquations_one, boxvar_listGet, arrayList(_mapEqnIncRow)));

          _mExt = omc_Uncertainties_removeEquations(threadData, _mExt, _approximatedEquations);

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT175));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_equationsToMathematicaGrid(threadData, _approximatedEquations, _allEqs, _allVars, _globalKnownVars, _mapIncRowEqn));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT176));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_equationsToMathematicaGrid(threadData, omc_Uncertainties_getEquationsNumber(threadData, _mExt), _allEqs, _allVars, _globalKnownVars, _mapIncRowEqn));

          _variables = omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, _allVars));

          _knowns = omc_Uncertainties_getUncertainRefineVariableIndexes(threadData, _allVars, _variables ,&_distributions);

          _directlyLinked = omc_Uncertainties_getRelatedVariables(threadData, _mExt, _knowns);

          _indirectlyLinked = omc_List_setDifference(threadData, omc_Uncertainties_getRelatedVariables(threadData, _mExt, _directlyLinked), _knowns);

          _unknowns = listAppend(_directlyLinked, _indirectlyLinked);

          _outputvars = omc_List_setDifference(threadData, omc_List_intRange(threadData, omc_BackendVariable_varsSize(threadData, _allVars)), listAppend(_unknowns, _knowns));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT177));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_variablesToMathematicaGrid(threadData, _knowns, _allVars));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT178));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_variablesToMathematicaGrid(threadData, _directlyLinked, _allVars));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT179));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_variablesToMathematicaGrid(threadData, _indirectlyLinked, _allVars));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT180));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_variablesToMathematicaGrid(threadData, _outputvars, _allVars));

          _mExt = omc_Uncertainties_eliminateOutputVariables(threadData, _mExt, _outputvars);

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT181));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_equationsToMathematicaGrid(threadData, omc_Uncertainties_getEquationsNumber(threadData, _mExt), _allEqs, _allVars, _globalKnownVars, _mapIncRowEqn));

          _setS = omc_Uncertainties_getEquationsForUnknownsSystem(threadData, _mExt, _knowns, _unknowns ,&_unknownsVarsMatch);

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT182));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_unknowsMatchingToMathematicaGrid(threadData, _unknownsVarsMatch, _setS, _allEqs, _allVars, _globalKnownVars, _mapIncRowEqn));

          _remainingEquations = omc_List_setDifference(threadData, omc_Uncertainties_getEquationsNumber(threadData, _mExt), _setS);

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT183));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_equationsToMathematicaGrid(threadData, _remainingEquations, _allEqs, _allVars, _globalKnownVars, _mapIncRowEqn));

          _setC = omc_Uncertainties_getEquationsForKnownsSystem(threadData, _mExt, _knowns, _unknowns, _setS, _allEqs, _allVars, _globalKnownVars, _mapIncRowEqn ,&_removed_equations_squared);

          if((!listEmpty(_removed_equations_squared)))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT184),stdout);
          }

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT185));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_equationsToMathematicaGrid(threadData, _removed_equations_squared, _allEqs, _allVars, _globalKnownVars, _mapIncRowEqn));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT186));

          omc_Uncertainties_printSep(threadData, omc_Uncertainties_equationsToMathematicaGrid(threadData, _setC, _allEqs, _allVars, _globalKnownVars, _mapIncRowEqn));

          _setC = omc_List_map1r(threadData, _setC, boxvar_listGet, arrayList(_mapIncRowEqn));

          _setC = omc_List_unique(threadData, _setC);

          _setS = omc_List_map1r(threadData, _setS, boxvar_listGet, arrayList(_mapIncRowEqn));

          _setS = omc_List_unique(threadData, _setS);

          _setC_eq = omc_List_map1r(threadData, _setC, boxvar_BackendEquation_get, _allEqs);

          _setS_eq = omc_List_map1r(threadData, _setS, boxvar_BackendEquation_get, _allEqs);

          _knownVariables = omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, _knowns, boxvar_BackendVariable_getVarAt, _allVars));

          _unknownVariables = omc_BackendVariable_listVar(threadData, omc_List_map1r(threadData, _unknowns, boxvar_BackendVariable_getVarAt, _allVars));

          tmpMeta34 = stringAppend(_OMC_LIT187,omc_Uncertainties_getMathematicaVarStr(threadData, _knownVariables));
          tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT24);
          tmpMeta36 = stringAppend(tmpMeta35,omc_Uncertainties_getMathematicaEqStr(threadData, _setC_eq, _allVars, _globalKnownVars));
          tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT188);
          tmpMeta38 = stringAppend(tmpMeta37,omc_Uncertainties_getMathematicaVarStr(threadData, _unknownVariables));
          tmpMeta39 = stringAppend(tmpMeta38,_OMC_LIT24);
          tmpMeta40 = stringAppend(tmpMeta39,omc_Uncertainties_getMathematicaEqStr(threadData, _setS_eq, _allVars, _globalKnownVars));
          tmpMeta41 = stringAppend(tmpMeta40,_OMC_LIT189);
          tmpMeta42 = stringAppend(tmpMeta41,omc_Uncertainties_dumpVarsDistributionInfo(threadData, _distributions));
          tmpMeta43 = stringAppend(tmpMeta42,_OMC_LIT28);
          _outStringB = tmpMeta43;

          tmpMeta44 = stringAppend(_OMC_LIT27,omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT190));
          tmpMeta45 = stringAppend(tmpMeta44,_OMC_LIT28);
          omc_Print_printBuf(threadData, tmpMeta45);

          tmpMeta46 = stringAppend(_OMC_LIT58,omc_Print_getString(threadData));
          tmpMeta47 = stringAppend(tmpMeta46,_OMC_LIT64);
          _outStringA = tmpMeta47;

          _outString = (_dumpSteps?_outStringA:_outStringB);

          _resstr = omc_Uncertainties_writeFileIfNonEmpty(threadData, _outputFile, _outString);
          tmpMeta48 = mmc_mk_box2(5, &Values_Value_STRING__desc, _resstr);
          tmpMeta[0+0] = _cache;
          tmpMeta[0+1] = tmpMeta48;
          goto tmp9_done;
        }
        case 1: {
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_boolean tmp53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          
          _outputFile = tmp10_3;
          /* Pattern matching succeeded */
          tmpMeta49 = stringAppend(_OMC_LIT27,omc_Uncertainties_getMathematicaText(threadData, _OMC_LIT191));
          tmpMeta50 = stringAppend(tmpMeta49,_OMC_LIT28);
          omc_Print_printBuf(threadData, tmpMeta50);

          tmpMeta51 = stringAppend(_OMC_LIT58,omc_Print_getString(threadData));
          tmpMeta52 = stringAppend(tmpMeta51,_OMC_LIT64);
          _outStringA = tmpMeta52;

          omc_Uncertainties_writeFileIfNonEmpty(threadData, _outputFile, _outStringA);

          /* Pattern-matching assignment */
          tmp53 = omc_Flags_isSet(threadData, _OMC_LIT195);
          if (1 /* true */ != tmp53) goto goto_2;

          _resstr = omc_AbsynUtil_pathStringNoQual(threadData, _className, _OMC_LIT47, 0 /* false */, 0 /* false */);

          tmpMeta54 = mmc_mk_cons(_OMC_LIT196, mmc_mk_cons(_resstr, mmc_mk_cons(_OMC_LIT197, MMC_REFSTRUCTLIT(mmc_nil))));
          _resstr = stringAppendList(tmpMeta54);

          tmpMeta55 = mmc_mk_cons(_resstr, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT54, tmpMeta55);
          goto goto_2;
          goto tmp9_done;
        }
        }
        goto tmp9_end;
        tmp9_end: ;
      }
      goto goto_2;
      tmp9_done:
      (void)tmp10;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp9_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp10 < 2) {
        goto tmp9_top;
      }
      MMC_THROW_INTERNAL();
      tmp9_done2:;
    }
  }
  _outCache = tmpMeta[0+0];
  _outValue = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outValue) { *out_outValue = _outValue; }
  return _outCache;
}
modelica_metatype boxptr_Uncertainties_modelEquationsUC(threadData_t *threadData, modelica_metatype _inCache, modelica_metatype _inEnv, modelica_metatype _className, modelica_metatype _outputFileIn, modelica_metatype _dumpSteps, modelica_metatype *out_outValue)
{
  modelica_integer tmp1;
  modelica_metatype _outCache = NULL;
  tmp1 = mmc_unbox_integer(_dumpSteps);
  _outCache = omc_Uncertainties_modelEquationsUC(threadData, _inCache, _inEnv, _className, _outputFileIn, tmp1, out_outValue);
  /* skip box _outCache; FCore.Cache */
  /* skip box _outValue; Values.Value */
  return _outCache;
}

