#include "omc_simulation_settings.h"
#include "NBResolveSingularities.h"
#define _OMC_LIT0_data "Stage "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,6,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data " underdetermined.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,18,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ") Unmatched variables:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,22,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Not underdetermined."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,20,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,0,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data " overdetermined.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,17,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data ") Unmatched equations:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,22,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Not overdetermined."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,19,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "	  DYNAMIC STATE SELECTION\n	(some unmatched equations)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,54,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data ") Remaining State Candidates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,28,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data ") Remaining Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,21,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Index Reduction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,15,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ") Sorted State Candidates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,25,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data ") Constraint Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,22,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "$DER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,4,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "/projects/OpenModelica-session2/OMCompiler/Compiler/NBackEnd/Modules/1_Main/NBResolveSingularities.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,101,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT19_6,1.781983298e9);
#define _OMC_LIT19_6 MMC_REFREALLIT(_OMC_LIT_STRUCT19_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(695)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(695)),MMC_IMMEDIATE(MMC_TAGFIXNUM(109)),_OMC_LIT19_6}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT20_6,1.781983298e9);
#define _OMC_LIT20_6 MMC_REFREALLIT(_OMC_LIT_STRUCT20_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(637)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(637)),MMC_IMMEDIATE(MMC_TAGFIXNUM(55)),_OMC_LIT20_6}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT21_6,1.781983298e9);
#define _OMC_LIT21_6 MMC_REFREALLIT(_OMC_LIT_STRUCT21_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(618)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(618)),MMC_IMMEDIATE(MMC_TAGFIXNUM(66)),_OMC_LIT21_6}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "initialization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,14,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "Shows additional information from the initialization process."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,61,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(86)),_OMC_LIT22,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT23}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,2,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6000)),_OMC_LIT25,_OMC_LIT26,_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "NBResolveSingularities.balanceInitialization reports an overdetermined initialization!\nChecking for consistency is not yet supported, following equations had to be removed:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,173,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "NBResolveSingularities.balanceInitialization failed because following non-fixable variables could not be solved:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,113,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,1,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,2,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "\nUse -d=initialization for more debug output."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,45,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "\nFollowing equations were created by fixing variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,55,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "\nUse -d=bltdump for more verbose debug output."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,46,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "All"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,3,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "bltdump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,7,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "Dumps information from index reduction."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,39,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(51)),_OMC_LIT37,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT38}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,17,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT25,_OMC_LIT40,_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "Created Start Equations for balancing the Initialization ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,58,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "):"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,2,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,2,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "NBResolveSingularities.indexReduction failed because no mapping was provided."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,77,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,1) {_OMC_LIT46,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "NBResolveSingularities.indexReduction expected final matrix as adj input but got :\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,83,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "NBResolveSingularities.indexReduction failed because there was not enough state candidates to balance out the constraint equations.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,132,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "Constraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,10,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "State Candidate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,15,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "dummyselect"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,11,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "Dumps information from dummy state selection heuristic."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,55,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(52)),_OMC_LIT52,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT53}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,3) {&NBAdjacency_Matrix_EMPTY__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "1. StateSelect.NEVER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,20,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "2. StateSelect.AVOID"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,20,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "3. Artificial Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,23,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "4. StateSelect.DEFAULT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,22,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "5. StateSelect.PREFER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,21,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT61_6,1.781983298e9);
#define _OMC_LIT61_6 MMC_REFREALLIT(_OMC_LIT_STRUCT61_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(222)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(222)),MMC_IMMEDIATE(MMC_TAGFIXNUM(76)),_OMC_LIT61_6}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data ") Index Reduction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,17,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "Finished with perfect matching in stage "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,40,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,1,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "Nothing done for ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,18,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "[dummyselect] 1. Differentiate the constraint equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,55,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT67_6,1.781983298e9);
#define _OMC_LIT67_6 MMC_REFREALLIT(_OMC_LIT_STRUCT67_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(259)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(259)),MMC_IMMEDIATE(MMC_TAGFIXNUM(188)),_OMC_LIT67_6}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "[dummyselect] constraint eqn:		"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,31,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "[dummyselect] differentiated eqn:	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,34,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "NBResolveSingularities.indexReduction failed because slicing during index reduction is not yet supported.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,106,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "Sliced Dummies:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,15,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,3,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "[dummyselect] ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,15,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data ") Selected States"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,17,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "[stateselection] ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,18,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data ") State Derivatives Created by Differentiation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,46,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data ") Selected Dummy States"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,23,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "stateselection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,14,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "Enables dumping of selected states. Extends -d=backenddaeinfo."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,62,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(70)),_OMC_LIT78,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT79}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "NBResolveSingularities.indexReduction failed because dynamic state selection is not yet supported."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,98,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,2,1) {_OMC_LIT81,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "	 STATIC STATE SELECTION\n	(no unmatched equations)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,50,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT84_6,1.781983298e9);
#define _OMC_LIT84_6 MMC_REFREALLIT(_OMC_LIT_STRUCT84_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(354)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(354)),MMC_IMMEDIATE(MMC_TAGFIXNUM(125)),_OMC_LIT84_6}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
#include "util/modelica.h"

#include "NBResolveSingularities_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringUnmatched(threadData_t *threadData, modelica_metatype _unmatched_vars, modelica_metatype _unmatched_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringUnmatched,2,0) {(void*) boxptr_NBResolveSingularities_toStringUnmatched,0}};
#define boxvar_NBResolveSingularities_toStringUnmatched MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringUnmatched)
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringDynamicSelect(threadData_t *threadData, modelica_metatype _dummy_states, modelica_metatype _unmatched_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringDynamicSelect,2,0) {(void*) boxptr_NBResolveSingularities_toStringDynamicSelect,0}};
#define boxvar_NBResolveSingularities_toStringDynamicSelect MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringDynamicSelect)
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringCandidatesConstraints(threadData_t *threadData, modelica_metatype _state_candidates, modelica_metatype _constraint_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringCandidatesConstraints,2,0) {(void*) boxptr_NBResolveSingularities_toStringCandidatesConstraints,0}};
#define boxvar_NBResolveSingularities_toStringCandidatesConstraints MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_toStringCandidatesConstraints)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _iter, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals,2,0) {(void*) boxptr_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals,0}};
#define boxvar_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivateEqn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivateEqn,2,0) {(void*) boxptr_NBResolveSingularities_removeSlicedDerivateEqn,0}};
#define boxvar_NBResolveSingularities_removeSlicedDerivateEqn MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivateEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivatives(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fderivative, modelica_metatype _slice_set, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivatives,2,0) {(void*) boxptr_NBResolveSingularities_removeSlicedDerivatives,0}};
#define boxvar_NBResolveSingularities_removeSlicedDerivatives MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_removeSlicedDerivatives)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_resolveSlicedUnmatched(threadData_t *threadData, modelica_metatype _old_unmatched, modelica_metatype _slice_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveSlicedUnmatched,2,0) {(void*) boxptr_NBResolveSingularities_resolveSlicedUnmatched,0}};
#define boxvar_NBResolveSingularities_resolveSlicedUnmatched MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveSlicedUnmatched)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_sortCandidates(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcandidates);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_sortCandidates,2,0) {(void*) boxptr_NBResolveSingularities_sortCandidates,0}};
#define boxvar_NBResolveSingularities_sortCandidates MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_sortCandidates)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBResolveSingularities_candidatePriority(threadData_t *threadData, modelica_metatype _candidate);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBResolveSingularities_candidatePriority(threadData_t *threadData, modelica_metatype _candidate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_candidatePriority,2,0) {(void*) boxptr_NBResolveSingularities_candidatePriority,0}};
#define boxvar_NBResolveSingularities_candidatePriority MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_candidatePriority)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_getStateCandidate_getStateCandidateVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getStateCandidate_getStateCandidateVar,2,0) {(void*) boxptr_NBResolveSingularities_getStateCandidate_getStateCandidateVar,0}};
#define boxvar_NBResolveSingularities_getStateCandidate_getStateCandidateVar MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getStateCandidate_getStateCandidateVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getStateCandidate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getStateCandidate,2,0) {(void*) boxptr_NBResolveSingularities_getStateCandidate,0}};
#define boxvar_NBResolveSingularities_getStateCandidate MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getStateCandidate)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getConstraintsAndCandidates(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _marked_eqns, modelica_metatype _mapping, modelica_metatype *out_states, modelica_metatype *out_sliced_constr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getConstraintsAndCandidates,2,0) {(void*) boxptr_NBResolveSingularities_getConstraintsAndCandidates,0}};
#define boxvar_NBResolveSingularities_getConstraintsAndCandidates MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getConstraintsAndCandidates)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_resolveClustering(threadData_t *threadData, modelica_metatype _color_clustering);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveClustering,2,0) {(void*) boxptr_NBResolveSingularities_resolveClustering,0}};
#define boxvar_NBResolveSingularities_resolveClustering MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_resolveClustering)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_colorClustering(threadData_t *threadData, modelica_integer _old_color, modelica_integer _new_color, modelica_metatype _color_clustering);
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_colorClustering(threadData_t *threadData, modelica_metatype _old_color, modelica_metatype _new_color, modelica_metatype _color_clustering);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_colorClustering,2,0) {(void*) boxptr_NBResolveSingularities_colorClustering,0}};
#define boxvar_NBResolveSingularities_colorClustering MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_colorClustering)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_integer _var, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping);
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorVar,2,0) {(void*) boxptr_NBResolveSingularities_fillColorVar,0}};
#define boxvar_NBResolveSingularities_fillColorVar MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorVar)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_integer _eqn, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping);
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorEqn,2,0) {(void*) boxptr_NBResolveSingularities_fillColorEqn,0}};
#define boxvar_NBResolveSingularities_fillColorEqn MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getMSSS(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _excluded_eqns, modelica_metatype _mapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getMSSS,2,0) {(void*) boxptr_NBResolveSingularities_getMSSS,0}};
#define boxvar_NBResolveSingularities_getMSSS MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_getMSSS)

static modelica_metatype closure0_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringUnmatched(threadData_t *threadData, modelica_metatype _unmatched_vars, modelica_metatype _unmatched_eqns)
{
  modelica_string _str = NULL;
  modelica_string _s1 = NULL;
  modelica_string _s2 = NULL;
  modelica_string _s3 = NULL;
  modelica_string _s4 = NULL;
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
  // _str has no default value.
  // _s1 has no default value.
  // _s2 has no default value.
  // _s3 has no default value.
  // _s4 has no default value.
  if(listEmpty(_unmatched_vars))
  {
    _s1 = omc_StringUtil_headline__4(threadData, _OMC_LIT5);

    _s3 = _OMC_LIT6;
  }
  else
  {
    tmpMeta1 = stringAppend(_OMC_LIT0,intString(listLength(_unmatched_vars)));
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT1);
    _s1 = tmpMeta2;

    tmpMeta3 = stringAppend(_OMC_LIT3,intString(listLength(_unmatched_vars)));
    tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT4);
    tmpMeta5 = stringAppend(_OMC_LIT2,omc_StringUtil_headline__4(threadData, tmpMeta4));
    tmpMeta6 = stringAppend(tmpMeta5,omc_NBSlice_lstToString(threadData, _unmatched_vars, boxvar_NBVariable_pointerToString, ((modelica_integer) 10)));
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT2);
    _s3 = tmpMeta7;
  }

  if(listEmpty(_unmatched_eqns))
  {
    _s2 = omc_StringUtil_headline__4(threadData, _OMC_LIT9);

    _s4 = _OMC_LIT6;
  }
  else
  {
    tmpMeta8 = stringAppend(_OMC_LIT0,intString(listLength(_unmatched_eqns)));
    tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT7);
    _s2 = tmpMeta9;

    tmpMeta10 = stringAppend(_OMC_LIT3,intString(listLength(_unmatched_eqns)));
    tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT8);
    tmpMeta12 = stringAppend(_OMC_LIT2,omc_StringUtil_headline__4(threadData, tmpMeta11));
    tmpMeta13 = mmc_mk_box1(0, _OMC_LIT6);
    tmpMeta14 = stringAppend(tmpMeta12,omc_NBSlice_lstToString(threadData, _unmatched_eqns, (modelica_fnptr) mmc_mk_box2(0,closure0_NBEquation_Equation_pointerToString,tmpMeta13), ((modelica_integer) 10)));
    tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT2);
    _s4 = tmpMeta15;
  }

  tmpMeta16 = stringAppend(_s1,_s2);
  tmpMeta17 = stringAppend(tmpMeta16,_s3);
  tmpMeta18 = stringAppend(tmpMeta17,_s4);
  tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT2);
  _str = tmpMeta19;
  _return: OMC_LABEL_UNUSED
  return _str;
}

static modelica_metatype closure1_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringDynamicSelect(threadData_t *threadData, modelica_metatype _dummy_states, modelica_metatype _unmatched_eqns)
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT3,intString(listLength(_dummy_states)));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT11);
  tmpMeta3 = stringAppend(omc_StringUtil_headline__2(threadData, _OMC_LIT10),omc_StringUtil_headline__4(threadData, tmpMeta2));
  tmpMeta4 = stringAppend(tmpMeta3,omc_NBSlice_lstToString(threadData, _dummy_states, boxvar_NBVariable_pointerToString, ((modelica_integer) 10)));
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT2);
  tmpMeta6 = stringAppend(_OMC_LIT3,intString(listLength(_unmatched_eqns)));
  tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT12);
  tmpMeta8 = stringAppend(tmpMeta5,omc_StringUtil_headline__4(threadData, tmpMeta7));
  tmpMeta9 = mmc_mk_box1(0, _OMC_LIT6);
  tmpMeta10 = stringAppend(tmpMeta8,omc_NBSlice_lstToString(threadData, _unmatched_eqns, (modelica_fnptr) mmc_mk_box2(0,closure1_NBEquation_Equation_pointerToString,tmpMeta9), ((modelica_integer) 10)));
  tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT2);
  _str = tmpMeta11;
  _return: OMC_LABEL_UNUSED
  return _str;
}

static modelica_metatype closure2_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
PROTECTED_FUNCTION_STATIC modelica_string omc_NBResolveSingularities_toStringCandidatesConstraints(threadData_t *threadData, modelica_metatype _state_candidates, modelica_metatype _constraint_eqns)
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(omc_StringUtil_headline__1(threadData, _OMC_LIT13),_OMC_LIT2);
  tmpMeta2 = stringAppend(_OMC_LIT3,intString(listLength(_state_candidates)));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT14);
  tmpMeta4 = stringAppend(tmpMeta1,omc_StringUtil_headline__4(threadData, tmpMeta3));
  tmpMeta5 = stringAppend(tmpMeta4,omc_NBSlice_lstToString(threadData, _state_candidates, boxvar_NBVariable_pointerToString, ((modelica_integer) 10)));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT2);
  tmpMeta7 = stringAppend(_OMC_LIT3,intString(listLength(_constraint_eqns)));
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT15);
  tmpMeta9 = stringAppend(tmpMeta6,omc_StringUtil_headline__4(threadData, tmpMeta8));
  tmpMeta10 = mmc_mk_box1(0, _OMC_LIT6);
  tmpMeta11 = stringAppend(tmpMeta9,omc_NBSlice_lstToString(threadData, _constraint_eqns, (modelica_fnptr) mmc_mk_box2(0,closure2_NBEquation_Equation_pointerToString,tmpMeta10), ((modelica_integer) 10)));
  tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT2);
  _str = tmpMeta12;
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _iter, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _aux = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _aux has no default value.
  if(omc_NFExpression_isLiteral(threadData, _exp))
  {
    _aux = omc_NBFunctionAlias_Call__Aux_createName(threadData, omc_NFExpression_typeOf(threadData, _exp), _iter, _aux_index, _OMC_LIT16, 0 /* false */);

    tmpMeta1 = mmc_mk_box3(9, &NFExpression_CREF__desc, omc_NFComponentRef_getSubscriptedType(threadData, _aux, 0 /* false */), _aux);
    _exp = tmpMeta1;

    omc_UnorderedSet_add(threadData, _aux, _dummy_slice_set);
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivateEqn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index)
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
      modelica_metatype _lhs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lhs has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp10;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar17;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar16 = omc_NBResolveSingularities_removeSlicedDerivateEqn(threadData, _b, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), _dummy_slice_set, _aux_index);
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar17;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_eqn), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = tmpMeta7;
          _eqn = tmpMeta6;
          tmpMeta1 = _eqn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,11,2) == 0) goto tmp3_end;
          
          _lhs = tmpMeta11;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp16;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3)));
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar19;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar18 = omc_NBResolveSingularities_removeSlicedDerivateEqn_replaceTupleLiterals(threadData, _e, _iter, _dummy_slice_set, _aux_index);
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar19;
          }
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_lhs), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = tmpMeta13;
          _lhs = tmpMeta12;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_eqn), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[3] = _lhs;
          _eqn = tmpMeta17;
          tmpMeta1 = _eqn;
          goto tmp3_done;
        }
        case 2: {
          
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_removeSlicedDerivatives(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fderivative, modelica_metatype _slice_set, modelica_metatype _dummy_slice_set, modelica_metatype _aux_index)
{
  modelica_metatype _derivative = NULL;
  modelica_metatype _eqn = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _derivative = __omcQ_24in_5Fderivative;
  // _eqn has no default value.
  if((!omc_UnorderedSet_isEmpty(threadData, _slice_set)))
  {
    _eqn = omc_NBResolveSingularities_removeSlicedDerivateEqn(threadData, omc_Pointer_access(threadData, _derivative), _OMC_LIT17, _dummy_slice_set, _aux_index);

    omc_Pointer_update(threadData, _derivative, _eqn);
  }
  _return: OMC_LABEL_UNUSED
  return _derivative;
}

DLLDirection
modelica_metatype omc_NBResolveSingularities_resolveSlicedUnmatched_resolveSlicedUnmatchedSingle(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Facc, modelica_metatype _slice_map)
{
  modelica_metatype _acc = NULL;
  modelica_metatype _relevant_indices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _acc = __omcQ_24in_5Facc;
  // _relevant_indices has no default value.
  _relevant_indices = omc_UnorderedMap_getSafe(threadData, omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, _eq)), _slice_map, _OMC_LIT19);

  if(omc_UnorderedSet_isEmpty(threadData, _relevant_indices))
  {
    tmpMeta1 = mmc_mk_cons(_eq, _acc);
    _acc = tmpMeta1;
  }
  else
  {
    {
      modelica_metatype __omcQ_24tmpVar21;
      modelica_metatype* tmp4;
      modelica_metatype tmpMeta5;
      modelica_metatype __omcQ_24tmpVar20;
      modelica_integer tmp6;
      modelica_metatype _ind_loopVar = 0;
      modelica_metatype _ind;
      _ind_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)));
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar21 = tmpMeta5; /* defaultValue */
      tmp4 = &__omcQ_24tmpVar21;
      while(1) {
        tmp6 = 1;
        while (!listEmpty(_ind_loopVar)) {
          _ind = MMC_CAR(_ind_loopVar);
          _ind_loopVar = MMC_CDR(_ind_loopVar);
          if (omc_UnorderedSet_contains(threadData, _ind, _relevant_indices)) {
            tmp6--;
            break;
          }
        }
        if (tmp6 == 0) {
          __omcQ_24tmpVar20 = _ind;
          *tmp4 = mmc_mk_cons(__omcQ_24tmpVar20,0);
          tmp4 = &MMC_CDR(*tmp4);
        } else if (tmp6 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp4 = mmc_mk_nil();
      tmpMeta3 = __omcQ_24tmpVar21;
    }
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(4));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_eq), 4*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = tmpMeta3;
    _eq = tmpMeta2;

    if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))))
    {
      tmpMeta7 = mmc_mk_cons(_eq, _acc);
      _acc = tmpMeta7;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _acc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_resolveSlicedUnmatched(threadData_t *threadData, modelica_metatype _old_unmatched, modelica_metatype _slice_map)
{
  modelica_metatype _filtered_unmatched = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _filtered_unmatched = tmpMeta1;
  {
    modelica_metatype _eq;
    for (tmpMeta2 = _old_unmatched; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      _filtered_unmatched = omc_NBResolveSingularities_resolveSlicedUnmatched_resolveSlicedUnmatchedSingle(threadData, _eq, _filtered_unmatched, _slice_map);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _filtered_unmatched;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_sortCandidates(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcandidates)
{
  modelica_metatype _candidates = NULL;
  modelica_metatype _priorities = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _candidates = __omcQ_24in_5Fcandidates;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _priorities = tmpMeta1;
  {
    modelica_metatype _candidate;
    for (tmpMeta2 = _candidates; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _candidate = MMC_CAR(tmpMeta2);
      tmpMeta4 = mmc_mk_box2(0, mmc_mk_integer(omc_NBResolveSingularities_candidatePriority(threadData, _candidate)), _candidate);
      tmpMeta3 = mmc_mk_cons(tmpMeta4, _priorities);
      _priorities = tmpMeta3;
    }
  }

  _priorities = omc_List_sort(threadData, _priorities, boxvar_NBBackendUtil_indexTplGt);

  _candidates = omc_List_unzipSecond(threadData, _priorities);
  _return: OMC_LABEL_UNUSED
  return _candidates;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBResolveSingularities_candidatePriority(threadData_t *threadData, modelica_metatype _candidate)
{
  modelica_integer _prio;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prio has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_Pointer_access(threadData, _candidate);
    {
      modelica_metatype _attributes = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _attributes has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,10) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,9) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          
          _attributes = tmpMeta7;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_integer tmp11_1;
            tmp11_1 = omc_NFBackendExtension_VariableAttributes_getStateSelect(threadData, _attributes);
            {
              int tmp11;
              {
                switch (MMC_SWITCH_CAST(tmp11_1)) {
                case 1: {
                  if (1 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) -200);
                  goto tmp10_done;
                }
                case 2: {
                  if (2 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) -100);
                  goto tmp10_done;
                }
                case 3: {
                  if (3 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) 0);
                  goto tmp10_done;
                }
                case 4: {
                  if (4 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) 100);
                  goto tmp10_done;
                }
                case 5: {
                  if (5 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) 200);
                  goto tmp10_done;
                }
                default:
                tmp10_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmp8 = ((modelica_integer) 0);
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
          }tmp1 = tmp8;
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
  _prio = tmp1;
  _return: OMC_LABEL_UNUSED
  return _prio;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBResolveSingularities_candidatePriority(threadData_t *threadData, modelica_metatype _candidate)
{
  modelica_integer _prio;
  modelica_metatype out_prio;
  _prio = omc_NBResolveSingularities_candidatePriority(threadData, _candidate);
  out_prio = mmc_mk_icon(_prio);
  return out_prio;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_getStateCandidate_getStateCandidateVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _acc)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((omc_NBVariable_isContinuous(threadData, _var, 0 /* false */) && (!(((omc_NBVariable_isTime(threadData, _var) || omc_NBVariable_isDummyVariable(threadData, _var)) || omc_NBVariable_isDummyState(threadData, _var)) || omc_NBVariable_isForcedState(threadData, _var)))))
  {
    omc_UnorderedSet_add(threadData, omc_NBVariable_getVarName(threadData, _var), _acc);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getStateCandidate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _acc)
{
  modelica_metatype _cref = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  // _var has no default value.
  _var = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT20);

  if(omc_NBVariable_isRecord(threadData, _var))
  {
    {
      modelica_metatype _child;
      for (tmpMeta1 = omc_NBVariable_getRecordChildren(threadData, _var); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _child = MMC_CAR(tmpMeta1);
        omc_NBResolveSingularities_getStateCandidate_getStateCandidateVar(threadData, _child, _acc);
      }
    }
  }
  else
  {
    omc_NBResolveSingularities_getStateCandidate_getStateCandidateVar(threadData, _var, _acc);
  }
  _return: OMC_LABEL_UNUSED
  return _cref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getConstraintsAndCandidates(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _marked_eqns, modelica_metatype _mapping, modelica_metatype *out_states, modelica_metatype *out_sliced_constr)
{
  modelica_metatype _constr = NULL;
  modelica_metatype _states = NULL;
  modelica_metatype _sliced_constr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _eqn_indices = NULL;
  modelica_metatype _eqn_slices = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _state_candidates = NULL;
  modelica_metatype _eqn_ptr = NULL;
  modelica_metatype _var_ptr = NULL;
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
  _constr = omc_NBEquation_EquationPointers_empty(threadData, ((modelica_integer) 4013));
  _states = omc_NBVariable_VariablePointers_empty(threadData, ((modelica_integer) 4013), 0 /* false */);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _sliced_constr = tmpMeta1;
  _eqn_indices = omc_UnorderedSet_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 13));
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqn_slices = arrayCreate(omc_NBEquation_EquationPointers_size(threadData, _equations), tmpMeta2);
  _state_candidates = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  // _eqn_ptr has no default value.
  // _var_ptr has no default value.
  {
    modelica_metatype _eqn;
    for (tmpMeta3 = _marked_eqns; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _eqn = MMC_CAR(tmpMeta3);
      omc_UnorderedSet_add(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),mmc_unbox_integer(_eqn)) /* DAE.ASUB */, _eqn_indices);

      tmpMeta4 = mmc_mk_cons(_eqn, arrayGet(_eqn_slices,mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),mmc_unbox_integer(_eqn)) /* DAE.ASUB */)) /* DAE.ASUB */);
      arrayUpdate(_eqn_slices,mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),mmc_unbox_integer(_eqn)) /* DAE.ASUB */),tmpMeta4);
    }
  }

  {
    modelica_metatype _eqn;
    for (tmpMeta6 = omc_UnorderedSet_toList(threadData, _eqn_indices); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _eqn = MMC_CAR(tmpMeta6);
      _eqn_ptr = omc_NBEquation_EquationPointers_getEqnAt(threadData, _equations, mmc_unbox_integer(_eqn));

      _constr = omc_NBEquation_EquationPointers_add(threadData, _eqn_ptr, _constr);

      tmpMeta8 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqn_ptr, arrayGet(_eqn_slices,mmc_unbox_integer(_eqn)) /* DAE.ASUB */);
      tmpMeta7 = mmc_mk_cons(tmpMeta8, _sliced_constr);
      _sliced_constr = tmpMeta7;

      {
        modelica_metatype _candidate;
        for (tmpMeta9 = omc_NBEquation_Equation_collectCrefs(threadData, omc_Pointer_access(threadData, _eqn_ptr), boxvar_NBResolveSingularities_getStateCandidate, boxvar_NFExpression_map); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
        {
          _candidate = MMC_CAR(tmpMeta9);
          omc_UnorderedSet_add(threadData, _candidate, _state_candidates);
        }
      }
    }
  }

  {
    modelica_metatype _candidate;
    for (tmpMeta12 = omc_UnorderedSet_toList(threadData, _state_candidates); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _candidate = MMC_CAR(tmpMeta12);
      _var_ptr = omc_NBVariable_getVarPointer(threadData, _candidate, _OMC_LIT21);

      _states = omc_NBVariable_VariablePointers_add(threadData, _var_ptr, _states);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_states) { *out_states = _states; }
  if (out_sliced_constr) { *out_sliced_constr = _sliced_constr; }
  return _constr;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_resolveClustering(threadData_t *threadData, modelica_metatype _color_clustering)
{
  modelica_integer _color;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _color has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_color_clustering);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _color = _i;

      while(1)
      {
        if(!(mmc_unbox_integer(arrayGet(_color_clustering,_color) /* DAE.ASUB */) != _color)) break;
        _color = mmc_unbox_integer(arrayGet(_color_clustering,_color) /* DAE.ASUB */);
      }

      arrayUpdate(_color_clustering, _i, mmc_mk_integer(_color));
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_colorClustering(threadData_t *threadData, modelica_integer _old_color, modelica_integer _new_color, modelica_metatype _color_clustering)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((mmc_unbox_integer(arrayGet(_color_clustering,_old_color) /* DAE.ASUB */) != _old_color))
  {
    omc_NBResolveSingularities_colorClustering(threadData, mmc_unbox_integer(arrayGet(_color_clustering,_old_color) /* DAE.ASUB */), _new_color, _color_clustering);
  }

  arrayUpdate(_color_clustering, _old_color, mmc_mk_integer(_new_color));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_colorClustering(threadData_t *threadData, modelica_metatype _old_color, modelica_metatype _new_color, modelica_metatype _color_clustering)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_old_color);
  tmp2 = mmc_unbox_integer(_new_color);
  omc_NBResolveSingularities_colorClustering(threadData, tmp1, tmp2, _color_clustering);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_integer _var, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping)
{
  modelica_integer _eqn;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))),_var) /* DAE.ASUB */);
  if((mmc_unbox_integer(arrayGet(_var_coloring,_var) /* DAE.ASUB */) == ((modelica_integer) -1)))
  {
    arrayUpdate(_var_coloring, _var, mmc_mk_integer(_color));

    if((_eqn != ((modelica_integer) -1)))
    {
      if((mmc_unbox_integer(arrayGet(_eqn_coloring,_eqn) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        omc_NBResolveSingularities_fillColorEqn(threadData, _eqn, _color, _eqn_coloring, _var_coloring, _color_clustering, _m, _mT, _matching, _mapping);
      }
    }
  }
  else
  {
    omc_NBResolveSingularities_colorClustering(threadData, mmc_unbox_integer(arrayGet(_var_coloring,_var) /* DAE.ASUB */), _color, _color_clustering);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_var);
  tmp2 = mmc_unbox_integer(_color);
  omc_NBResolveSingularities_fillColorVar(threadData, tmp1, tmp2, _eqn_coloring, _var_coloring, _color_clustering, _m, _mT, _matching, _mapping);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_integer _eqn, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  arrayUpdate(_eqn_coloring, _eqn, mmc_mk_integer(_color));

  {
    modelica_metatype _var;
    for (tmpMeta1 = arrayGet(_m,_eqn) /* DAE.ASUB */; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      omc_NBResolveSingularities_fillColorVar(threadData, mmc_unbox_integer(_var), _color, _eqn_coloring, _var_coloring, _color_clustering, _m, _mT, _matching, _mapping);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _color_clustering, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _mapping)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_eqn);
  tmp2 = mmc_unbox_integer(_color);
  omc_NBResolveSingularities_fillColorEqn(threadData, tmp1, tmp2, _eqn_coloring, _var_coloring, _color_clustering, _m, _mT, _matching, _mapping);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getMSSS(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _excluded_eqns, modelica_metatype _mapping)
{
  modelica_metatype _msss = NULL;
  modelica_metatype _eqn_candidates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _color_clustering = NULL;
  modelica_metatype _eqn_coloring = NULL;
  modelica_metatype _var_coloring = NULL;
  modelica_integer _color;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _msss has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqn_candidates = tmpMeta1;
  // _color_clustering has no default value.
  _eqn_coloring = arrayCreate(arrayLength(_m), mmc_mk_integer(((modelica_integer) -1)));
  _var_coloring = arrayCreate(arrayLength(_mT), mmc_mk_integer(((modelica_integer) -1)));
  _color = ((modelica_integer) 0);
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))));
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _eqn;
    for(_eqn = ((modelica_integer) 1); in_range_integer(_eqn, tmp3, tmp5); _eqn += tmp4)
    {
      if((mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))),_eqn) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_eqn), _eqn_candidates);
        _eqn_candidates = tmpMeta2;
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar23;
    modelica_metatype* tmp7;
    modelica_metatype tmpMeta8;
    modelica_metatype __omcQ_24tmpVar22;
    modelica_integer tmp9;
    modelica_integer tmp10;
    modelica_integer tmp11;
    modelica_integer _i;
    tmp10 = 1 /* Range step-value */;
    tmp11 = listLength(_eqn_candidates) /* Range stop-value */;
    _i = ((modelica_integer) 1) /* Range start-value */;
    _i = (((modelica_integer) 1) /* Range start-value */)-tmp10;
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar23 = tmpMeta8; /* defaultValue */
    tmp7 = &__omcQ_24tmpVar23;
    while(1) {
      tmp9 = 1;
      if (tmp10 > 0 ? _i+tmp10 <= tmp11 : _i+tmp10 >= tmp11) {
        _i += tmp10;
        tmp9--;
      }
      if (tmp9 == 0) {
        __omcQ_24tmpVar22 = mmc_mk_integer(_i);
        *tmp7 = mmc_mk_cons(__omcQ_24tmpVar22,0);
        tmp7 = &MMC_CDR(*tmp7);
      } else if (tmp9 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp7 = mmc_mk_nil();
    tmpMeta6 = __omcQ_24tmpVar23;
  }
  _color_clustering = listArray(tmpMeta6);

  {
    modelica_metatype _eqn;
    for (tmpMeta12 = _eqn_candidates; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _eqn = MMC_CAR(tmpMeta12);
      if((mmc_unbox_integer(arrayGet(_eqn_coloring,mmc_unbox_integer(_eqn)) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        _color = ((modelica_integer) 1) + _color;

        omc_NBResolveSingularities_fillColorEqn(threadData, mmc_unbox_integer(_eqn), _color, _eqn_coloring, _var_coloring, _color_clustering, _m, _mT, _matching, _mapping);
      }
    }
  }

  omc_NBResolveSingularities_resolveClustering(threadData, _color_clustering);

  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  _msss = arrayCreate(_color, tmpMeta14);

  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = arrayLength(_eqn_coloring);
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer _eqn;
    for(_eqn = ((modelica_integer) 1); in_range_integer(_eqn, tmp16, tmp18); _eqn += tmp17)
    {
      if(((mmc_unbox_integer(arrayGet(_eqn_coloring,_eqn) /* DAE.ASUB */) != ((modelica_integer) -1)) && (!mmc_unbox_boolean(arrayGet(_excluded_eqns,mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),_eqn) /* DAE.ASUB */)) /* DAE.ASUB */))))
      {
        _color = mmc_unbox_integer(arrayGet(_color_clustering,mmc_unbox_integer(arrayGet(_eqn_coloring,_eqn) /* DAE.ASUB */)) /* DAE.ASUB */);

        tmpMeta15 = mmc_mk_cons(mmc_mk_integer(_eqn), arrayGet(_msss,_color) /* DAE.ASUB */);
        arrayUpdate(_msss,_color,tmpMeta15);
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar25;
    modelica_metatype* tmp20;
    modelica_metatype tmpMeta21;
    modelica_metatype __omcQ_24tmpVar24;
    modelica_integer tmp22;
    modelica_metatype _ms_loopVar = 0;
    modelica_metatype _ms;
    _ms_loopVar = arrayList(_msss);
    tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar25 = tmpMeta21; /* defaultValue */
    tmp20 = &__omcQ_24tmpVar25;
    while(1) {
      tmp22 = 1;
      while (!listEmpty(_ms_loopVar)) {
        _ms = MMC_CAR(_ms_loopVar);
        _ms_loopVar = MMC_CDR(_ms_loopVar);
        if ((!listEmpty(_ms))) {
          tmp22--;
          break;
        }
      }
      if (tmp22 == 0) {
        __omcQ_24tmpVar24 = _ms;
        *tmp20 = mmc_mk_cons(__omcQ_24tmpVar24,0);
        tmp20 = &MMC_CDR(*tmp20);
      } else if (tmp22 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp20 = mmc_mk_nil();
    tmpMeta19 = __omcQ_24tmpVar25;
  }
  _msss = listArray(tmpMeta19);
  _return: OMC_LABEL_UNUSED
  return _msss;
}

static modelica_metatype closure3_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure4_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure5_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLDirection
modelica_metatype omc_NBResolveSingularities_balanceInitialization(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_integer _kind, modelica_metatype _funcMap, modelica_metatype _matching, modelica_metatype _mapping_opt, modelica_metatype *out_full, modelica_metatype *out_variables, modelica_metatype *out_equations, modelica_metatype *out_varData, modelica_metatype *out_eqData, modelica_boolean *out_changed)
{
  modelica_metatype _adj = NULL;
  modelica_metatype _full = NULL;
  modelica_metatype _variables = NULL;
  modelica_metatype _equations = NULL;
  modelica_metatype _varData = NULL;
  modelica_metatype _eqData = NULL;
  modelica_boolean _changed;
  modelica_metatype _unmatched_vars = NULL;
  modelica_metatype _unmatched_eqns = NULL;
  modelica_metatype _start_vars = NULL;
  modelica_metatype _failed_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _sliced_eqns = NULL;
  modelica_metatype _start_eqns = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _ptr_start_vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _ptr_start_eqns = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _idx = NULL;
  modelica_string _error_msg = NULL;
  modelica_metatype _vo = NULL;
  modelica_metatype _vn = NULL;
  modelica_metatype _eo = NULL;
  modelica_metatype _en = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _adj = __omcQ_24in_5Fadj;
  _full = __omcQ_24in_5Ffull;
  _variables = __omcQ_24in_5Fvariables;
  _equations = __omcQ_24in_5Fequations;
  _varData = __omcQ_24in_5FvarData;
  _eqData = __omcQ_24in_5FeqData;
  // _changed has no default value.
  // _unmatched_vars has no default value.
  // _unmatched_eqns has no default value.
  // _start_vars has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _failed_vars = tmpMeta1;
  // _sliced_eqns has no default value.
  // _start_eqns has no default value.
  // _var_ptr has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_vars = omc_Pointer_create(threadData, tmpMeta2);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_eqns = omc_Pointer_create(threadData, tmpMeta3);
  // _idx has no default value.
  // _error_msg has no default value.
  // _vo has no default value.
  // _vn has no default value.
  // _eo has no default value.
  // _en has no default value.
  omc_NBMatching_getMatches(threadData, _matching, _mapping_opt, _variables, _equations ,&_unmatched_vars ,NULL ,&_unmatched_eqns);

  if(omc_Flags_isSet(threadData, _OMC_LIT24))
  {
    fputs(MMC_STRINGDATA(omc_NBResolveSingularities_toStringUnmatched(threadData, _unmatched_vars, _unmatched_eqns)),stdout);
  }

  if((!(listEmpty(_unmatched_vars) && listEmpty(_unmatched_eqns))))
  {
    _changed = 1 /* true */;

    if((!listEmpty(_unmatched_eqns)))
    {
      tmpMeta5 = mmc_mk_box1(0, _OMC_LIT6);
      tmpMeta6 = stringAppend(_OMC_LIT29,omc_NBSlice_lstToString(threadData, _unmatched_eqns, (modelica_fnptr) mmc_mk_box2(0,closure3_NBEquation_Equation_pointerToString,tmpMeta5), ((modelica_integer) 10)));
      tmpMeta4 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT28, tmpMeta4);

      _eo = omc_UnorderedMap_copy(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2))));

      {
        modelica_metatype __omcQ_24tmpVar27;
        modelica_metatype* tmp8;
        modelica_metatype tmpMeta9;
        modelica_metatype __omcQ_24tmpVar26;
        modelica_integer tmp10;
        modelica_metatype _eqn_loopVar = 0;
        modelica_metatype _eqn;
        _eqn_loopVar = _unmatched_eqns;
        tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar27 = tmpMeta9; /* defaultValue */
        tmp8 = &__omcQ_24tmpVar27;
        while(1) {
          tmp10 = 1;
          if (!listEmpty(_eqn_loopVar)) {
            _eqn = MMC_CAR(_eqn_loopVar);
            _eqn_loopVar = MMC_CDR(_eqn_loopVar);
            tmp10--;
          }
          if (tmp10 == 0) {
            __omcQ_24tmpVar26 = omc_NBSlice_getT(threadData, _eqn);
            *tmp8 = mmc_mk_cons(__omcQ_24tmpVar26,0);
            tmp8 = &MMC_CDR(*tmp8);
          } else if (tmp10 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp8 = mmc_mk_nil();
        tmpMeta7 = __omcQ_24tmpVar27;
      }
      _sliced_eqns = tmpMeta7;

      _equations = omc_NBEquation_EquationPointers_removeList(threadData, _sliced_eqns, _equations);

      _adj = omc_NBAdjacency_Matrix_compress(threadData, _adj, _full, _equations, _variables, _eo ,&_full);
    }

    _idx = omc_NBEquation_EqData_getUniqueIndex(threadData, _eqData);

    {
      modelica_metatype _var;
      for (tmpMeta11 = _unmatched_vars; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
      {
        _var = MMC_CAR(tmpMeta11);
        _var_ptr = omc_NBSlice_getT(threadData, _var);

        if(omc_NBVariable_isFixable(threadData, _var_ptr))
        {
          omc_NBInitialization_createStartEquationSlice(threadData, _var, _ptr_start_vars, _ptr_start_eqns, _idx, 1 /* true */);
        }
        else
        {
          tmpMeta12 = mmc_mk_cons(_var_ptr, _failed_vars);
          _failed_vars = tmpMeta12;
        }
      }
    }

    if(listEmpty(_failed_vars))
    {
      _start_vars = omc_Pointer_access(threadData, _ptr_start_vars);

      _start_eqns = omc_Pointer_access(threadData, _ptr_start_eqns);

      _vo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 2)));

      _eo = omc_UnorderedMap_copy(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2))));

      _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _start_vars, 7);

      _eqData = omc_NBEquation_EqData_addTypedList(threadData, _eqData, _start_eqns, 4, 1 /* true */);

      _equations = omc_NBEquation_EquationPointers_addList(threadData, _start_eqns, _equations);

      _vn = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

      {
        modelica_metatype __omcQ_24tmpVar29;
        modelica_metatype* tmp15;
        modelica_metatype tmpMeta16;
        modelica_metatype __omcQ_24tmpVar28;
        modelica_integer tmp17;
        modelica_metatype _eqn_loopVar = 0;
        modelica_metatype _eqn;
        _eqn_loopVar = _start_eqns;
        tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar29 = tmpMeta16; /* defaultValue */
        tmp15 = &__omcQ_24tmpVar29;
        while(1) {
          tmp17 = 1;
          if (!listEmpty(_eqn_loopVar)) {
            _eqn = MMC_CAR(_eqn_loopVar);
            _eqn_loopVar = MMC_CDR(_eqn_loopVar);
            tmp17--;
          }
          if (tmp17 == 0) {
            __omcQ_24tmpVar28 = omc_NBEquation_Equation_getEqnName(threadData, _eqn);
            *tmp15 = mmc_mk_cons(__omcQ_24tmpVar28,0);
            tmp15 = &MMC_CDR(*tmp15);
          } else if (tmp17 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp15 = mmc_mk_nil();
        tmpMeta14 = __omcQ_24tmpVar29;
      }
      _en = omc_UnorderedMap_subMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2))), tmpMeta14);

      _adj = omc_NBAdjacency_Matrix_expand(threadData, _adj, _full, _vo, _vn, _eo, _en, _variables, _equations, (modelica_integer)_kind ,&_full);

      if(omc_Flags_isSet(threadData, _OMC_LIT24))
      {
        tmpMeta18 = mmc_mk_box1(0, _OMC_LIT6);
        tmpMeta19 = stringAppend(_OMC_LIT43,intString(listLength(_start_eqns)));
        tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT44);
        tmpMeta21 = stringAppend(omc_List_toString(threadData, _start_eqns, (modelica_fnptr) mmc_mk_box2(0,closure4_NBEquation_Equation_pointerToString,tmpMeta18), omc_StringUtil_headline__4(threadData, tmpMeta20), _OMC_LIT31, _OMC_LIT32, _OMC_LIT6, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT45);
        fputs(MMC_STRINGDATA(tmpMeta21),stdout);
      }
    }
    else
    {
      tmpMeta22 = stringAppend(_OMC_LIT30,omc_List_toString(threadData, _failed_vars, boxvar_NBVariable_pointerToString, _OMC_LIT6, _OMC_LIT31, _OMC_LIT32, _OMC_LIT2, 1 /* true */, ((modelica_integer) 0)));
      _error_msg = tmpMeta22;

      if(omc_Flags_isSet(threadData, _OMC_LIT24))
      {
        tmpMeta23 = stringAppend(_error_msg,_OMC_LIT34);
        tmpMeta24 = mmc_mk_box1(0, _OMC_LIT31);
        tmpMeta25 = stringAppend(tmpMeta23,omc_List_toString(threadData, omc_Pointer_access(threadData, _ptr_start_eqns), (modelica_fnptr) mmc_mk_box2(0,closure5_NBEquation_Equation_pointerToString,tmpMeta24), _OMC_LIT6, _OMC_LIT6, _OMC_LIT2, _OMC_LIT2, 1 /* true */, ((modelica_integer) 0)));
        _error_msg = tmpMeta25;
      }
      else
      {
        tmpMeta26 = stringAppend(_error_msg,_OMC_LIT33);
        _error_msg = tmpMeta26;
      }

      if(omc_Flags_isSet(threadData, _OMC_LIT39))
      {
        tmpMeta27 = stringAppend(_error_msg,_OMC_LIT2);
        tmpMeta28 = stringAppend(tmpMeta27,omc_NBVariable_VariablePointers_toString(threadData, _variables, _OMC_LIT36, mmc_mk_none(), 1 /* true */));
        tmpMeta29 = stringAppend(tmpMeta28,omc_NBEquation_EquationPointers_toString(threadData, _equations, _OMC_LIT36, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
        tmpMeta30 = stringAppend(tmpMeta29,omc_NBAdjacency_Mapping_toString(threadData, omc_Util_getOptionOrDefault(threadData, _mapping_opt, omc_NBAdjacency_Mapping_empty(threadData))));
        tmpMeta31 = stringAppend(tmpMeta30,omc_NBAdjacency_Matrix_toString(threadData, _adj, _OMC_LIT6));
        tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT2);
        tmpMeta33 = stringAppend(tmpMeta32,omc_NBMatching_toString(threadData, _matching, _OMC_LIT6));
        _error_msg = tmpMeta33;
      }
      else
      {
        tmpMeta34 = stringAppend(_error_msg,_OMC_LIT35);
        _error_msg = tmpMeta34;
      }

      tmpMeta35 = mmc_mk_cons(_error_msg, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT42, tmpMeta35);

      MMC_THROW_INTERNAL();
    }
  }
  else
  {
    _changed = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  if (out_full) { *out_full = _full; }
  if (out_variables) { *out_variables = _variables; }
  if (out_equations) { *out_equations = _equations; }
  if (out_varData) { *out_varData = _varData; }
  if (out_eqData) { *out_eqData = _eqData; }
  if (out_changed) { *out_changed = _changed; }
  return _adj;
}
modelica_metatype boxptr_NBResolveSingularities_balanceInitialization(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _kind, modelica_metatype _funcMap, modelica_metatype _matching, modelica_metatype _mapping_opt, modelica_metatype *out_full, modelica_metatype *out_variables, modelica_metatype *out_equations, modelica_metatype *out_varData, modelica_metatype *out_eqData, modelica_metatype *out_changed)
{
  modelica_integer tmp1;
  modelica_boolean _changed;
  modelica_metatype _adj = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _adj = omc_NBResolveSingularities_balanceInitialization(threadData, __omcQ_24in_5Fadj, __omcQ_24in_5Ffull, __omcQ_24in_5Fvariables, __omcQ_24in_5Fequations, __omcQ_24in_5FvarData, __omcQ_24in_5FeqData, tmp1, _funcMap, _matching, _mapping_opt, out_full, out_variables, out_equations, out_varData, out_eqData, &_changed);
  /* skip box _adj; NBAdjacency.Matrix */
  /* skip box _full; NBAdjacency.Matrix */
  /* skip box _variables; NBVariable.VariablePointers */
  /* skip box _equations; NBEquation.EquationPointers */
  /* skip box _varData; NBVariable.VarData */
  /* skip box _eqData; NBEquation.EqData */
  if (out_changed) { *out_changed = mmc_mk_icon(_changed); }
  return _adj;
}

static modelica_metatype closure6_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}static modelica_metatype closure7_NBVariable_isStateSelect(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype stateSelect = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isStateSelect(thData, var_ptr, stateSelect);
}static modelica_metatype closure8_NBVariable_isStateSelect(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype stateSelect = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isStateSelect(thData, var_ptr, stateSelect);
}static modelica_metatype closure9_NBVariable_isStateSelect(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype stateSelect = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isStateSelect(thData, var_ptr, stateSelect);
}static modelica_metatype closure10_NBVariable_isStateSelect(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype stateSelect = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isStateSelect(thData, var_ptr, stateSelect);
}static modelica_metatype closure11_NBSlice_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype slice)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype maxLength = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBSlice_toString(thData, slice, func, maxLength);
}
DLLDirection
modelica_metatype omc_NBResolveSingularities_indexReduction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_integer _kind, modelica_metatype _funcMap, modelica_metatype _matching, modelica_metatype _mapping_opt, modelica_metatype *out_full, modelica_metatype *out_variables, modelica_metatype *out_equations, modelica_metatype *out_varData, modelica_metatype *out_eqData, modelica_boolean *out_changed)
{
  modelica_metatype _adj = NULL;
  modelica_metatype _full = NULL;
  modelica_metatype _variables = NULL;
  modelica_metatype _equations = NULL;
  modelica_metatype _varData = NULL;
  modelica_metatype _eqData = NULL;
  modelica_boolean _changed;
  modelica_metatype _mapping = NULL;
  modelica_metatype _excluded_eqns = NULL;
  modelica_metatype _msss = NULL;
  modelica_metatype _marked_eqns = NULL;
  modelica_metatype _constraint = NULL;
  modelica_metatype _diffed_eqn = NULL;
  modelica_metatype _states = NULL;
  modelica_metatype _dummy_states = NULL;
  modelica_metatype _sliced_dummies = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _sliced_states = NULL;
  modelica_metatype _sliced_dummy_states = NULL;
  modelica_metatype _state_derivatives = NULL;
  modelica_metatype _dummy_derivatives = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _dummy_slice_vars = NULL;
  modelica_metatype _current_candidates = NULL;
  modelica_metatype _rest_candidates = NULL;
  modelica_metatype _constraint_eqns = NULL;
  modelica_metatype _matched_eqns = NULL;
  modelica_metatype _unmatched_eqns = NULL;
  modelica_metatype _new_eqns = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _diffArguments_ptr = NULL;
  modelica_metatype _candidate_ptrs = NULL;
  modelica_metatype _constraint_ptrs = NULL;
  modelica_metatype _set_adj = NULL;
  modelica_metatype _full_local = NULL;
  modelica_metatype _set_matching = NULL;
  modelica_metatype _vo = NULL;
  modelica_metatype _vn = NULL;
  modelica_metatype _eo = NULL;
  modelica_metatype _en = NULL;
  modelica_metatype _stages = NULL;
  modelica_fnptr _stageFunc;
  modelica_string _stageStr = NULL;
  modelica_metatype _slice_map = NULL;
  modelica_metatype _dummy_slice_set = NULL;
  modelica_boolean _debug;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_integer tmp23;
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
  modelica_metatype tmpMeta71;
  modelica_metatype tmpMeta72;
  modelica_metatype tmpMeta73;
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
  modelica_metatype tmpMeta86;
  modelica_metatype tmpMeta87;
  modelica_metatype tmpMeta88;
  modelica_metatype tmpMeta89;
  modelica_metatype tmpMeta90;
  modelica_metatype tmpMeta94;
  modelica_metatype tmpMeta98;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _adj = __omcQ_24in_5Fadj;
  _full = __omcQ_24in_5Ffull;
  _variables = __omcQ_24in_5Fvariables;
  _equations = __omcQ_24in_5Fequations;
  _varData = __omcQ_24in_5FvarData;
  _eqData = __omcQ_24in_5FeqData;
  // _changed has no default value.
  // _mapping has no default value.
  // _excluded_eqns has no default value.
  // _msss has no default value.
  // _marked_eqns has no default value.
  // _constraint has no default value.
  // _diffed_eqn has no default value.
  // _states has no default value.
  // _dummy_states has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _sliced_dummies = tmpMeta1;
  // _sliced_states has no default value.
  // _sliced_dummy_states has no default value.
  // _state_derivatives has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _dummy_derivatives = tmpMeta2;
  // _dummy_slice_vars has no default value.
  // _current_candidates has no default value.
  // _rest_candidates has no default value.
  // _constraint_eqns has no default value.
  // _matched_eqns has no default value.
  // _unmatched_eqns has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_eqns = tmpMeta3;
  // _diffArguments has no default value.
  // _diffArguments_ptr has no default value.
  // _candidate_ptrs has no default value.
  // _constraint_ptrs has no default value.
  // _set_adj has no default value.
  // _full_local has no default value.
  // _set_matching has no default value.
  // _vo has no default value.
  // _vn has no default value.
  // _eo has no default value.
  // _en has no default value.
  // _stages has no default value.
  // _stageStr has no default value.
  _slice_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  _dummy_slice_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _debug = 0 /* false */;
  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = _mapping_opt;
    {
      volatile mmc_switch_type tmp7;
      int tmp8;
      tmp7 = 0;
      for (; tmp7 < 2; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          modelica_metatype tmpMeta9;
          if (optionNone(tmp7_1)) goto tmp6_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 1));
          _mapping = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta4 = _mapping;
          goto tmp6_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT42, _OMC_LIT47);
          goto goto_5;
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
  _mapping = tmpMeta4;

  {
    modelica_metatype __omcQ_24tmpVar31;
    modelica_metatype* tmp11;
    modelica_metatype tmpMeta12;
    modelica_metatype __omcQ_24tmpVar30;
    modelica_integer tmp13;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = omc_NBEquation_EquationPointers_toList(threadData, _equations);
    tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar31 = tmpMeta12; /* defaultValue */
    tmp11 = &__omcQ_24tmpVar31;
    while(1) {
      tmp13 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp13--;
      }
      if (tmp13 == 0) {
        __omcQ_24tmpVar30 = mmc_mk_boolean((omc_NBEquation_Equation_isDiscrete(threadData, _eqn) || omc_NBEquation_Equation_hasDerivative(threadData, _eqn)));
        *tmp11 = mmc_mk_cons(__omcQ_24tmpVar30,0);
        tmp11 = &MMC_CDR(*tmp11);
      } else if (tmp13 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp11 = mmc_mk_nil();
    tmpMeta10 = __omcQ_24tmpVar31;
  }
  _excluded_eqns = listArray(tmpMeta10);

  { /* match expression */
    modelica_metatype tmp17_1;
    tmp17_1 = _adj;
    {
      volatile mmc_switch_type tmp17;
      int tmp18;
      tmp17 = 0;
      for (; tmp17 < 2; tmp17++) {
        switch (MMC_SWITCH_CAST(tmp17)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp17_1,2,5) == 0) goto tmp16_end;
          
          /* Pattern matching succeeded */
          tmpMeta14 = omc_NBResolveSingularities_getMSSS(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 3))), _matching, _excluded_eqns, _mapping);
          goto tmp16_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          tmpMeta20 = stringAppend(_OMC_LIT48,omc_NBAdjacency_Matrix_toString(threadData, _adj, _OMC_LIT6));
          tmpMeta19 = mmc_mk_cons(tmpMeta20, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT42, tmpMeta19);
          goto goto_15;
          goto tmp16_done;
        }
        }
        goto tmp16_end;
        tmp16_end: ;
      }
      goto goto_15;
      goto_15:;
      MMC_THROW_INTERNAL();
      goto tmp16_done;
      tmp16_done:;
    }
  }
  _msss = tmpMeta14;

  if((!(arrayLength(_msss) == ((modelica_integer) 0))))
  {
    _changed = 1 /* true */;

    _marked_eqns = omc_UnorderedSet_unique__list(threadData, omc_List_flatten(threadData, arrayList(_msss)), boxvar_Util_id, boxvar_intEq);

    _constraint_ptrs = omc_NBResolveSingularities_getConstraintsAndCandidates(threadData, _equations, _marked_eqns, _mapping ,&_candidate_ptrs ,&_constraint_eqns);

    {
      modelica_metatype _eq;
      for (tmpMeta21 = _constraint_eqns; !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
      {
        _eq = MMC_CAR(tmpMeta21);
        omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, _eq)), omc_UnorderedSet_fromList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_Util_id, boxvar_intEq), _slice_map);
      }
    }

    {
      modelica_integer __omcQ_24tmpVar33;
      modelica_metatype tmpMeta24;
      modelica_integer __omcQ_24tmpVar32;
      modelica_integer tmp25;
      modelica_metatype _eq_loopVar = 0;
      modelica_metatype _eq;
      _eq_loopVar = _constraint_eqns;
      __omcQ_24tmpVar33 = ((modelica_integer) 0); /* defaultValue */
      while(1) {
        tmp25 = 1;
        if (!listEmpty(_eq_loopVar)) {
          _eq = MMC_CAR(_eq_loopVar);
          _eq_loopVar = MMC_CDR(_eq_loopVar);
          tmp25--;
        }
        if (tmp25 == 0) {
          tmpMeta24 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
          __omcQ_24tmpVar32 = omc_NBSlice_size(threadData, _eq, (modelica_fnptr) mmc_mk_box2(0,closure6_NBEquation_Equation_size,tmpMeta24));
          __omcQ_24tmpVar33 = __omcQ_24tmpVar33 + __omcQ_24tmpVar32;
        } else if (tmp25 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      tmp23 = __omcQ_24tmpVar33;
    }
    if((omc_NBVariable_VariablePointers_scalarSize(threadData, _candidate_ptrs, 0 /* false */) < tmp23))
    {
      tmpMeta27 = stringAppend(_OMC_LIT49,omc_NBEquation_EquationPointers_toString(threadData, _constraint_ptrs, _OMC_LIT50, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
      tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT2);
      tmpMeta29 = stringAppend(tmpMeta28,omc_NBVariable_VariablePointers_toString(threadData, _candidate_ptrs, _OMC_LIT51, mmc_mk_none(), 1 /* true */));
      tmpMeta26 = mmc_mk_cons(tmpMeta29, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT42, tmpMeta26);

      MMC_THROW_INTERNAL();
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT54))
    {
      tmpMeta30 = stringAppend(omc_StringUtil_headline__1(threadData, _OMC_LIT13),_OMC_LIT2);
      tmpMeta31 = stringAppend(tmpMeta30,omc_NBVariable_VariablePointers_toString(threadData, _candidate_ptrs, _OMC_LIT51, mmc_mk_none(), 1 /* true */));
      tmpMeta32 = stringAppend(tmpMeta31,omc_NBEquation_EquationPointers_toString(threadData, _constraint_ptrs, _OMC_LIT50, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
      fputs(MMC_STRINGDATA(tmpMeta32),stdout);
    }

    _full_local = omc_NBAdjacency_Matrix_createFull(threadData, _candidate_ptrs, _constraint_ptrs, (modelica_integer)_kind);

    _set_adj = _OMC_LIT55;

    _rest_candidates = omc_NBVariable_VariablePointers_toList(threadData, _candidate_ptrs);

    _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_constraint_ptrs), 2)));

    _en = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

    _vo = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

    _vn = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

    tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta35 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, listArray(tmpMeta33), listArray(tmpMeta34));
    _set_matching = tmpMeta35;

    tmpMeta37 = mmc_mk_box1(0, mmc_mk_integer(1));
    tmpMeta38 = mmc_mk_box2(0, _OMC_LIT56, (modelica_fnptr) mmc_mk_box2(0,closure7_NBVariable_isStateSelect,tmpMeta37));
    tmpMeta39 = mmc_mk_box1(0, mmc_mk_integer(2));
    tmpMeta40 = mmc_mk_box2(0, _OMC_LIT57, (modelica_fnptr) mmc_mk_box2(0,closure8_NBVariable_isStateSelect,tmpMeta39));
    tmpMeta41 = mmc_mk_box2(0, _OMC_LIT58, boxvar_NBVariable_isArtificial);
    tmpMeta42 = mmc_mk_box1(0, mmc_mk_integer(3));
    tmpMeta43 = mmc_mk_box2(0, _OMC_LIT59, (modelica_fnptr) mmc_mk_box2(0,closure9_NBVariable_isStateSelect,tmpMeta42));
    tmpMeta44 = mmc_mk_box1(0, mmc_mk_integer(4));
    tmpMeta45 = mmc_mk_box2(0, _OMC_LIT60, (modelica_fnptr) mmc_mk_box2(0,closure10_NBVariable_isStateSelect,tmpMeta44));
    tmpMeta36 = mmc_mk_cons(tmpMeta38, mmc_mk_cons(tmpMeta40, mmc_mk_cons(tmpMeta41, mmc_mk_cons(tmpMeta43, mmc_mk_cons(tmpMeta45, MMC_REFSTRUCTLIT(mmc_nil))))));
    _stages = tmpMeta36;

    {
      modelica_metatype _stage;
      for (tmpMeta46 = _stages; !listEmpty(tmpMeta46); tmpMeta46=MMC_CDR(tmpMeta46))
      {
        _stage = MMC_CAR(tmpMeta46);
        /* Pattern-matching assignment */
        tmpMeta47 = _stage;
        tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 1));
        tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 2));
        _stageStr = tmpMeta48;
        _stageFunc = tmpMeta49;

        _current_candidates = omc_List_splitOnTrue(threadData, _rest_candidates, ((modelica_fnptr) _stageFunc) ,&_rest_candidates);

        if(listEmpty(_current_candidates))
        {
          if(_debug)
          {
            tmpMeta50 = stringAppend(_OMC_LIT65,_stageStr);
            tmpMeta51 = stringAppend(tmpMeta50,_OMC_LIT62);
            tmpMeta52 = stringAppend(omc_StringUtil_headline__2(threadData, tmpMeta51),_OMC_LIT2);
            fputs(MMC_STRINGDATA(tmpMeta52),stdout);
          }
        }
        else
        {
          _vo = omc_UnorderedMap_merge(threadData, _vo, omc_UnorderedMap_copy(threadData, _vn), _OMC_LIT61);

          {
            modelica_metatype __omcQ_24tmpVar35;
            modelica_metatype* tmp54;
            modelica_metatype tmpMeta55;
            modelica_metatype __omcQ_24tmpVar34;
            modelica_integer tmp56;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = _current_candidates;
            tmpMeta55 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar35 = tmpMeta55; /* defaultValue */
            tmp54 = &__omcQ_24tmpVar35;
            while(1) {
              tmp56 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp56--;
              }
              if (tmp56 == 0) {
                __omcQ_24tmpVar34 = omc_NBVariable_getVarName(threadData, _var);
                *tmp54 = mmc_mk_cons(__omcQ_24tmpVar34,0);
                tmp54 = &MMC_CDR(*tmp54);
              } else if (tmp56 == 1) {
                break;
              } else {
                MMC_THROW_INTERNAL();
              }
            }
            *tmp54 = mmc_mk_nil();
            tmpMeta53 = __omcQ_24tmpVar35;
          }
          _vn = omc_UnorderedMap_subMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_candidate_ptrs), 2))), tmpMeta53);

          _set_adj = omc_NBAdjacency_Matrix_expand(threadData, _set_adj, _full_local, _vo, _vn, _eo, _en, _candidate_ptrs, _constraint_ptrs, (modelica_integer)_kind ,&_full_local);

          _set_matching = omc_NBMatching_regular(threadData, _set_matching, _set_adj, 0 /* false */, 1 /* true */, 0 /* false */);

          if(_debug)
          {
            tmpMeta57 = stringAppend(_OMC_LIT3,_stageStr);
            tmpMeta58 = stringAppend(tmpMeta57,_OMC_LIT62);
            fputs(MMC_STRINGDATA(omc_NBAdjacency_Matrix_toString(threadData, _set_adj, tmpMeta58)),stdout);

            tmpMeta59 = stringAppend(_OMC_LIT3,_stageStr);
            tmpMeta60 = stringAppend(tmpMeta59,_OMC_LIT62);
            fputs(MMC_STRINGDATA(omc_NBMatching_toString(threadData, _set_matching, tmpMeta60)),stdout);
          }

          if((omc_NBMatching_isEmpty(threadData, _set_matching) && omc_NBMatching_isPerfect(threadData, _set_matching)))
          {
            if(_debug)
            {
              tmpMeta61 = stringAppend(_OMC_LIT63,_stageStr);
              tmpMeta62 = stringAppend(tmpMeta61,_OMC_LIT64);
              tmpMeta63 = stringAppend(omc_StringUtil_headline__2(threadData, tmpMeta62),_OMC_LIT2);
              fputs(MMC_STRINGDATA(tmpMeta63),stdout);
            }

            break;
          }
        }
      }
    }

    _dummy_states = omc_NBMatching_getMatches(threadData, _set_matching, omc_NBAdjacency_Matrix_getMappingOpt(threadData, _set_adj), _candidate_ptrs, _constraint_ptrs ,&_states ,&_matched_eqns ,&_unmatched_eqns);

    _unmatched_eqns = omc_NBResolveSingularities_resolveSlicedUnmatched(threadData, _unmatched_eqns, _slice_map);

    _diffArguments = omc_NBDifferentiate_DifferentiationArguments_default(threadData, 1, _funcMap);

    tmpMeta65 = MMC_TAGPTR(mmc_alloc_words(11));
    memcpy(MMC_UNTAGPTR(tmpMeta65), MMC_UNTAGPTR(_diffArguments), 11*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta65))[4] = mmc_mk_some(omc_NBVariable_VarData_getStateOrder(threadData, _varData));
    _diffArguments = tmpMeta65;

    _diffArguments_ptr = omc_Pointer_create(threadData, _diffArguments);

    if(omc_Flags_isSet(threadData, _OMC_LIT54))
    {
      fputs(MMC_STRINGDATA(omc_StringUtil_headline__3(threadData, _OMC_LIT66)),stdout);
    }

    {
      modelica_metatype _constraint;
      for (tmpMeta66 = omc_NBEquation_EquationPointers_toList(threadData, _constraint_ptrs); !listEmpty(tmpMeta66); tmpMeta66=MMC_CDR(tmpMeta66))
      {
        _constraint = MMC_CAR(tmpMeta66);
        _diffed_eqn = omc_NBDifferentiate_differentiateEquationPointer(threadData, _constraint, _diffArguments_ptr, _OMC_LIT6);

        _diffed_eqn = omc_NBResolveSingularities_removeSlicedDerivatives(threadData, _diffed_eqn, omc_UnorderedMap_getSafe(threadData, omc_NBEquation_Equation_getEqnName(threadData, _constraint), _slice_map, _OMC_LIT67), _dummy_slice_set, omc_NBVariable_VarData_getUniqueIndex(threadData, _varData));

        tmpMeta67 = mmc_mk_cons(_diffed_eqn, _new_eqns);
        _new_eqns = tmpMeta67;

        if(omc_Flags_isSet(threadData, _OMC_LIT54))
        {
          tmpMeta68 = stringAppend(_OMC_LIT68,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, _constraint), _OMC_LIT6));
          tmpMeta69 = stringAppend(tmpMeta68,_OMC_LIT2);
          fputs(MMC_STRINGDATA(tmpMeta69),stdout);

          tmpMeta70 = stringAppend(_OMC_LIT69,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, _diffed_eqn), _OMC_LIT6));
          tmpMeta71 = stringAppend(tmpMeta70,_OMC_LIT45);
          fputs(MMC_STRINGDATA(tmpMeta71),stdout);
        }
      }
    }

    _diffArguments = omc_Pointer_access(threadData, _diffArguments_ptr);

    {
      modelica_metatype _dummy;
      for (tmpMeta73 = _dummy_states; !listEmpty(tmpMeta73); tmpMeta73=MMC_CDR(tmpMeta73))
      {
        _dummy = MMC_CAR(tmpMeta73);
        if(listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dummy), 3)))))
        {
          tmpMeta74 = mmc_mk_cons(omc_NBVariable_makeDummyState(threadData, omc_NBSlice_getT(threadData, _dummy)), _dummy_derivatives);
          _dummy_derivatives = tmpMeta74;
        }
        else
        {
          tmpMeta75 = mmc_mk_cons(_dummy, _sliced_dummies);
          _sliced_dummies = tmpMeta75;
        }
      }
    }

    if((!listEmpty(_sliced_dummies)))
    {
      tmpMeta78 = mmc_mk_box2(0, boxvar_NBVariable_pointerToString, mmc_mk_integer(((modelica_integer) 10)));
      tmpMeta79 = stringAppend(_OMC_LIT70,omc_List_toString(threadData, _sliced_dummies, (modelica_fnptr) mmc_mk_box2(0,closure11_NBSlice_toString,tmpMeta78), _OMC_LIT71, _OMC_LIT72, _OMC_LIT72, _OMC_LIT2, 1 /* true */, ((modelica_integer) 0)));
      tmpMeta77 = mmc_mk_cons(tmpMeta79, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT42, tmpMeta77);

      MMC_THROW_INTERNAL();
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT54))
    {
      tmpMeta80 = stringAppend(_OMC_LIT73,intString(listLength(_states)));
      tmpMeta81 = stringAppend(tmpMeta80,_OMC_LIT74);
      fputs(MMC_STRINGDATA(omc_StringUtil_headline__4(threadData, tmpMeta81)),stdout);

      tmpMeta82 = stringAppend(omc_NBSlice_lstToString(threadData, _states, boxvar_NBVariable_pointerToString, ((modelica_integer) 10)),_OMC_LIT45);
      fputs(MMC_STRINGDATA(tmpMeta82),stdout);
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT80))
    {
      tmpMeta83 = stringAppend(_OMC_LIT75,intString(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 3))))));
      tmpMeta84 = stringAppend(tmpMeta83,_OMC_LIT76);
      fputs(MMC_STRINGDATA(omc_StringUtil_headline__4(threadData, tmpMeta84)),stdout);

      tmpMeta85 = stringAppend(omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 3))), boxvar_NBVariable_pointerToString, _OMC_LIT6, _OMC_LIT31, _OMC_LIT32, _OMC_LIT6, 1 /* true */, ((modelica_integer) 0)),_OMC_LIT45);
      fputs(MMC_STRINGDATA(tmpMeta85),stdout);

      tmpMeta86 = stringAppend(_OMC_LIT75,intString(listLength(_dummy_states)));
      tmpMeta87 = stringAppend(tmpMeta86,_OMC_LIT77);
      fputs(MMC_STRINGDATA(omc_StringUtil_headline__4(threadData, tmpMeta87)),stdout);

      tmpMeta88 = stringAppend(omc_NBSlice_lstToString(threadData, _dummy_states, boxvar_NBVariable_pointerToString, ((modelica_integer) 10)),_OMC_LIT45);
      fputs(MMC_STRINGDATA(tmpMeta88),stdout);
    }

    if(listEmpty(_unmatched_eqns))
    {
      if(omc_Flags_isSet(threadData, _OMC_LIT54))
      {
        tmpMeta89 = stringAppend(omc_StringUtil_headline__2(threadData, _OMC_LIT83),_OMC_LIT2);
        fputs(MMC_STRINGDATA(tmpMeta89),stdout);
      }
    }
    else
    {
      if(omc_Flags_isSet(threadData, _OMC_LIT54))
      {
        fputs(MMC_STRINGDATA(omc_NBResolveSingularities_toStringDynamicSelect(threadData, _dummy_states, _unmatched_eqns)),stdout);
      }

      omc_Error_addMessage(threadData, _OMC_LIT42, _OMC_LIT82);

      MMC_THROW_INTERNAL();
    }

    _state_derivatives = omc_List_extractOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 3))), boxvar_NBVariable_isStateDerivative, NULL);

    {
      modelica_metatype __omcQ_24tmpVar37;
      modelica_metatype* tmp91;
      modelica_metatype tmpMeta92;
      modelica_metatype __omcQ_24tmpVar36;
      modelica_integer tmp93;
      modelica_metatype _slice_loopVar = 0;
      modelica_metatype _slice;
      _slice_loopVar = _states;
      tmpMeta92 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar37 = tmpMeta92; /* defaultValue */
      tmp91 = &__omcQ_24tmpVar37;
      while(1) {
        tmp93 = 1;
        if (!listEmpty(_slice_loopVar)) {
          _slice = MMC_CAR(_slice_loopVar);
          _slice_loopVar = MMC_CDR(_slice_loopVar);
          tmp93--;
        }
        if (tmp93 == 0) {
          __omcQ_24tmpVar36 = omc_NBSlice_getT(threadData, _slice);
          *tmp91 = mmc_mk_cons(__omcQ_24tmpVar36,0);
          tmp91 = &MMC_CDR(*tmp91);
        } else if (tmp93 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp91 = mmc_mk_nil();
      tmpMeta90 = __omcQ_24tmpVar37;
    }
    _sliced_states = tmpMeta90;

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _sliced_states, 1);

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _state_derivatives, 2);

    {
      modelica_metatype __omcQ_24tmpVar39;
      modelica_metatype* tmp95;
      modelica_metatype tmpMeta96;
      modelica_metatype __omcQ_24tmpVar38;
      modelica_integer tmp97;
      modelica_metatype _slice_loopVar = 0;
      modelica_metatype _slice;
      _slice_loopVar = _dummy_states;
      tmpMeta96 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar39 = tmpMeta96; /* defaultValue */
      tmp95 = &__omcQ_24tmpVar39;
      while(1) {
        tmp97 = 1;
        if (!listEmpty(_slice_loopVar)) {
          _slice = MMC_CAR(_slice_loopVar);
          _slice_loopVar = MMC_CDR(_slice_loopVar);
          tmp97--;
        }
        if (tmp97 == 0) {
          __omcQ_24tmpVar38 = omc_NBSlice_getT(threadData, _slice);
          *tmp95 = mmc_mk_cons(__omcQ_24tmpVar38,0);
          tmp95 = &MMC_CDR(*tmp95);
        } else if (tmp97 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp95 = mmc_mk_nil();
      tmpMeta94 = __omcQ_24tmpVar39;
    }
    _sliced_dummy_states = tmpMeta94;

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _sliced_dummy_states, 3);

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _dummy_derivatives, 3);

    _eqData = omc_NBEquation_EqData_addTypedList(threadData, _eqData, _new_eqns, 1, 1 /* true */);

    _variables = omc_NBVariable_VariablePointers_addList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 3))), _variables);

    _variables = omc_NBVariable_VariablePointers_addList(threadData, _sliced_dummy_states, _variables);

    _variables = omc_NBVariable_VariablePointers_removeList(threadData, _sliced_states, _variables);

    _equations = omc_NBEquation_EquationPointers_addList(threadData, _new_eqns, _equations);

    {
      modelica_metatype __omcQ_24tmpVar41;
      modelica_metatype* tmp99;
      modelica_metatype tmpMeta100;
      modelica_metatype __omcQ_24tmpVar40;
      modelica_integer tmp101;
      modelica_metatype _cref_loopVar = 0;
      modelica_metatype _cref;
      _cref_loopVar = omc_UnorderedSet_toList(threadData, _dummy_slice_set);
      tmpMeta100 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar41 = tmpMeta100; /* defaultValue */
      tmp99 = &__omcQ_24tmpVar41;
      while(1) {
        tmp101 = 1;
        if (!listEmpty(_cref_loopVar)) {
          _cref = MMC_CAR(_cref_loopVar);
          _cref_loopVar = MMC_CDR(_cref_loopVar);
          tmp101--;
        }
        if (tmp101 == 0) {
          __omcQ_24tmpVar40 = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT84);
          *tmp99 = mmc_mk_cons(__omcQ_24tmpVar40,0);
          tmp99 = &MMC_CDR(*tmp99);
        } else if (tmp101 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp99 = mmc_mk_nil();
      tmpMeta98 = __omcQ_24tmpVar41;
    }
    _dummy_slice_vars = tmpMeta98;

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _dummy_slice_vars, 3);

    _variables = omc_NBVariable_VariablePointers_addList(threadData, _dummy_slice_vars, _variables);
  }
  else
  {
    _changed = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  if (out_full) { *out_full = _full; }
  if (out_variables) { *out_variables = _variables; }
  if (out_equations) { *out_equations = _equations; }
  if (out_varData) { *out_varData = _varData; }
  if (out_eqData) { *out_eqData = _eqData; }
  if (out_changed) { *out_changed = _changed; }
  return _adj;
}
modelica_metatype boxptr_NBResolveSingularities_indexReduction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _kind, modelica_metatype _funcMap, modelica_metatype _matching, modelica_metatype _mapping_opt, modelica_metatype *out_full, modelica_metatype *out_variables, modelica_metatype *out_equations, modelica_metatype *out_varData, modelica_metatype *out_eqData, modelica_metatype *out_changed)
{
  modelica_integer tmp1;
  modelica_boolean _changed;
  modelica_metatype _adj = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _adj = omc_NBResolveSingularities_indexReduction(threadData, __omcQ_24in_5Fadj, __omcQ_24in_5Ffull, __omcQ_24in_5Fvariables, __omcQ_24in_5Fequations, __omcQ_24in_5FvarData, __omcQ_24in_5FeqData, tmp1, _funcMap, _matching, _mapping_opt, out_full, out_variables, out_equations, out_varData, out_eqData, &_changed);
  /* skip box _adj; NBAdjacency.Matrix */
  /* skip box _full; NBAdjacency.Matrix */
  /* skip box _variables; NBVariable.VariablePointers */
  /* skip box _equations; NBEquation.EquationPointers */
  /* skip box _varData; NBVariable.VarData */
  /* skip box _eqData; NBEquation.EqData */
  if (out_changed) { *out_changed = mmc_mk_icon(_changed); }
  return _adj;
}

