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
#define _OMC_LIT16_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NBackEnd/Modules/1_Main/NBResolveSingularities.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,102,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT17_6,1.772102377e9);
#define _OMC_LIT17_6 MMC_REFREALLIT(_OMC_LIT_STRUCT17_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT16,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(557)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(557)),MMC_IMMEDIATE(MMC_TAGFIXNUM(55)),_OMC_LIT17_6}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT18_6,1.772102377e9);
#define _OMC_LIT18_6 MMC_REFREALLIT(_OMC_LIT_STRUCT18_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT16,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(538)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(538)),MMC_IMMEDIATE(MMC_TAGFIXNUM(66)),_OMC_LIT18_6}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "initialization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,14,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "Shows additional information from the initialization process."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,61,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(86)),_OMC_LIT19,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,2,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,4) {&Gettext_TranslatableContent_notrans__desc,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6000)),_OMC_LIT23,_OMC_LIT24,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "NBResolveSingularities.balanceInitialization reports an overdetermined initialization!\nChecking for consistency is not yet supported, following equations had to be removed:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,173,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "NBResolveSingularities.balanceInitialization failed because following non-fixable variables could not be solved:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,113,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,1,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,2,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "\nUse -d=initialization for more debug output."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,45,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "\nFollowing equations were created by fixing variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,55,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "\nUse -d=bltdump for more verbose debug output."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,46,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "All"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,3,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "bltdump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,7,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "Dumps information from index reduction."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,39,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(51)),_OMC_LIT36,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT38}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,17,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT23,_OMC_LIT40,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "Created Start Equations for balancing the Initialization ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,58,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "):"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,2,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,2,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "NBResolveSingularities.indexReduction failed because no mapping was provided."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,77,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,1) {_OMC_LIT47,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "NBResolveSingularities.indexReduction expected final matrix as adj input but got :\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,83,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "NBResolveSingularities.indexReduction failed because there was not enough state candidates to balance out the constraint equations.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,132,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Constraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,10,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "State Candidate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,15,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "dummyselect"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,11,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "Dumps information from dummy state selection heuristic."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,55,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(52)),_OMC_LIT53,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "[dummyselect] 1. Differentiate the constraint equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,55,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "[dummyselect] constraint eqn:		"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,31,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "[dummyselect] differentiated eqn:	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,34,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,2,3) {&NBAdjacency_Matrix_EMPTY__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "1. StateSelect.NEVER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,20,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "2. StateSelect.AVOID"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,20,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "3. Artificial Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,23,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "4. StateSelect.DEFAULT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,22,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "5. StateSelect.PREFER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,21,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT66_6,1.772102377e9);
#define _OMC_LIT66_6 MMC_REFREALLIT(_OMC_LIT_STRUCT66_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT16,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(226)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(226)),MMC_IMMEDIATE(MMC_TAGFIXNUM(76)),_OMC_LIT66_6}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data ") Index Reduction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,17,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "Nothing done for ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,18,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "NBResolveSingularities.indexReduction failed because slicing during index reduction is not yet supported.\n  needed sliced dummy:		"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,130,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "[dummyselect] ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,15,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data ") Selected States"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,17,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "[stateselection] ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,18,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data ") State Derivatives Created by Differentiation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,46,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data ") Selected Dummy States"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,23,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "stateselection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,14,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "Enables dumping of selected states. Extends -d=backenddaeinfo."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,62,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT76}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(70)),_OMC_LIT75,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT77}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "NBResolveSingularities.indexReduction failed because dynamic index reduction is not yet supported."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,98,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,1) {_OMC_LIT79,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "	 STATIC STATE SELECTION\n	(no unmatched equations)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,50,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
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
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_integer _var, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mapping);
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorVar,2,0) {(void*) boxptr_NBResolveSingularities_fillColorVar,0}};
#define boxvar_NBResolveSingularities_fillColorVar MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorVar)
PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_integer _eqn, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mapping);
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorEqn,2,0) {(void*) boxptr_NBResolveSingularities_fillColorEqn,0}};
#define boxvar_NBResolveSingularities_fillColorEqn MMC_REFSTRUCTLIT(boxvar_lit_NBResolveSingularities_fillColorEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getMSSS(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _discrete_eqns, modelica_metatype _mapping);
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
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,7) == 0) goto tmp3_end;
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
  if((omc_NBVariable_isContinuous(threadData, _var, 0 /* false */) && (!(omc_NBVariable_isTime(threadData, _var) || omc_NBVariable_isDummyVariable(threadData, _var)))))
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
  _var = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT17);

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
      _var_ptr = omc_NBVariable_getVarPointer(threadData, _candidate, _OMC_LIT18);

      _states = omc_NBVariable_VariablePointers_add(threadData, _var_ptr, _states);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_states) { *out_states = _states; }
  if (out_sliced_constr) { *out_sliced_constr = _sliced_constr; }
  return _constr;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_integer _var, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mapping)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  arrayUpdate(_var_coloring, _var, mmc_mk_integer(_color));

  {
    modelica_metatype _eqn;
    for (tmpMeta1 = arrayGet(_mT,_var) /* DAE.ASUB */; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eqn = MMC_CAR(tmpMeta1);
      if((mmc_unbox_integer(arrayGet(_eqn_coloring,mmc_unbox_integer(_eqn)) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        omc_NBResolveSingularities_fillColorEqn(threadData, mmc_unbox_integer(_eqn), _color, _eqn_coloring, _var_coloring, _m, _mT, _mapping);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mapping)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_var);
  tmp2 = mmc_unbox_integer(_color);
  omc_NBResolveSingularities_fillColorVar(threadData, tmp1, tmp2, _eqn_coloring, _var_coloring, _m, _mT, _mapping);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_integer _eqn, modelica_integer _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mapping)
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
      if((mmc_unbox_integer(arrayGet(_var_coloring,mmc_unbox_integer(_var)) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        omc_NBResolveSingularities_fillColorVar(threadData, mmc_unbox_integer(_var), _color, _eqn_coloring, _var_coloring, _m, _mT, _mapping);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBResolveSingularities_fillColorEqn(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _color, modelica_metatype _eqn_coloring, modelica_metatype _var_coloring, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mapping)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_eqn);
  tmp2 = mmc_unbox_integer(_color);
  omc_NBResolveSingularities_fillColorEqn(threadData, tmp1, tmp2, _eqn_coloring, _var_coloring, _m, _mT, _mapping);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBResolveSingularities_getMSSS(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _matching, modelica_metatype _discrete_eqns, modelica_metatype _mapping)
{
  modelica_metatype _msss = NULL;
  modelica_metatype _eqn_candidates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _eqn_coloring = NULL;
  modelica_metatype _var_coloring = NULL;
  modelica_integer _color;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _msss has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqn_candidates = tmpMeta1;
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
    modelica_metatype _eqn;
    for (tmpMeta6 = _eqn_candidates; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _eqn = MMC_CAR(tmpMeta6);
      if((mmc_unbox_integer(arrayGet(_eqn_coloring,mmc_unbox_integer(_eqn)) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        _color = ((modelica_integer) 1) + _color;

        omc_NBResolveSingularities_fillColorEqn(threadData, mmc_unbox_integer(_eqn), _color, _eqn_coloring, _var_coloring, _m, _mT, _mapping);
      }
    }
  }

  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _msss = arrayCreate(_color, tmpMeta8);

  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = arrayLength(_eqn_coloring);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _eqn;
    for(_eqn = ((modelica_integer) 1); in_range_integer(_eqn, tmp10, tmp12); _eqn += tmp11)
    {
      if(((mmc_unbox_integer(arrayGet(_eqn_coloring,_eqn) /* DAE.ASUB */) != ((modelica_integer) -1)) && (!mmc_unbox_boolean(arrayGet(_discrete_eqns,_eqn) /* DAE.ASUB */))))
      {
        tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_eqn), arrayGet(_msss,mmc_unbox_integer(arrayGet(_eqn_coloring,_eqn) /* DAE.ASUB */)) /* DAE.ASUB */);
        arrayUpdate(_msss,mmc_unbox_integer(arrayGet(_eqn_coloring,_eqn) /* DAE.ASUB */),tmpMeta9);
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar15;
    modelica_metatype* tmp14;
    modelica_metatype tmpMeta15;
    modelica_metatype __omcQ_24tmpVar14;
    modelica_integer tmp16;
    modelica_metatype _ms_loopVar = 0;
    modelica_metatype _ms;
    _ms_loopVar = arrayList(_msss);
    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar15 = tmpMeta15; /* defaultValue */
    tmp14 = &__omcQ_24tmpVar15;
    while(1) {
      tmp16 = 1;
      while (!listEmpty(_ms_loopVar)) {
        _ms = MMC_CAR(_ms_loopVar);
        _ms_loopVar = MMC_CDR(_ms_loopVar);
        if ((!listEmpty(_ms))) {
          tmp16--;
          break;
        }
      }
      if (tmp16 == 0) {
        __omcQ_24tmpVar14 = _ms;
        *tmp14 = mmc_mk_cons(__omcQ_24tmpVar14,0);
        tmp14 = &MMC_CDR(*tmp14);
      } else if (tmp16 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp14 = mmc_mk_nil();
    tmpMeta13 = __omcQ_24tmpVar15;
  }
  _msss = listArray(tmpMeta13);
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

  if(omc_Flags_isSet(threadData, _OMC_LIT22))
  {
    fputs(MMC_STRINGDATA(omc_NBResolveSingularities_toStringUnmatched(threadData, _unmatched_vars, _unmatched_eqns)),stdout);
  }

  if((!(listEmpty(_unmatched_vars) && listEmpty(_unmatched_eqns))))
  {
    _changed = 1 /* true */;

    if((!listEmpty(_unmatched_eqns)))
    {
      tmpMeta5 = mmc_mk_box1(0, _OMC_LIT6);
      tmpMeta6 = stringAppend(_OMC_LIT28,omc_NBSlice_lstToString(threadData, _unmatched_eqns, (modelica_fnptr) mmc_mk_box2(0,closure3_NBEquation_Equation_pointerToString,tmpMeta5), ((modelica_integer) 10)));
      tmpMeta4 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT27, tmpMeta4);

      _eo = omc_UnorderedMap_copy(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2))));

      {
        modelica_metatype __omcQ_24tmpVar17;
        modelica_metatype* tmp8;
        modelica_metatype tmpMeta9;
        modelica_metatype __omcQ_24tmpVar16;
        modelica_integer tmp10;
        modelica_metatype _eqn_loopVar = 0;
        modelica_metatype _eqn;
        _eqn_loopVar = _unmatched_eqns;
        tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar17 = tmpMeta9; /* defaultValue */
        tmp8 = &__omcQ_24tmpVar17;
        while(1) {
          tmp10 = 1;
          if (!listEmpty(_eqn_loopVar)) {
            _eqn = MMC_CAR(_eqn_loopVar);
            _eqn_loopVar = MMC_CDR(_eqn_loopVar);
            tmp10--;
          }
          if (tmp10 == 0) {
            __omcQ_24tmpVar16 = omc_NBSlice_getT(threadData, _eqn);
            *tmp8 = mmc_mk_cons(__omcQ_24tmpVar16,0);
            tmp8 = &MMC_CDR(*tmp8);
          } else if (tmp10 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp8 = mmc_mk_nil();
        tmpMeta7 = __omcQ_24tmpVar17;
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
          omc_NBInitialization_createStartEquationSlice(threadData, _var, _ptr_start_vars, _ptr_start_eqns, _idx);
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
        modelica_metatype __omcQ_24tmpVar19;
        modelica_metatype* tmp15;
        modelica_metatype tmpMeta16;
        modelica_metatype __omcQ_24tmpVar18;
        modelica_integer tmp17;
        modelica_metatype _eqn_loopVar = 0;
        modelica_metatype _eqn;
        _eqn_loopVar = _start_eqns;
        tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar19 = tmpMeta16; /* defaultValue */
        tmp15 = &__omcQ_24tmpVar19;
        while(1) {
          tmp17 = 1;
          if (!listEmpty(_eqn_loopVar)) {
            _eqn = MMC_CAR(_eqn_loopVar);
            _eqn_loopVar = MMC_CDR(_eqn_loopVar);
            tmp17--;
          }
          if (tmp17 == 0) {
            __omcQ_24tmpVar18 = omc_NBEquation_Equation_getEqnName(threadData, _eqn);
            *tmp15 = mmc_mk_cons(__omcQ_24tmpVar18,0);
            tmp15 = &MMC_CDR(*tmp15);
          } else if (tmp17 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp15 = mmc_mk_nil();
        tmpMeta14 = __omcQ_24tmpVar19;
      }
      _en = omc_UnorderedMap_subMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2))), tmpMeta14);

      _adj = omc_NBAdjacency_Matrix_expand(threadData, _adj, _full, _vo, _vn, _eo, _en, _variables, _equations, (modelica_integer)_kind ,&_full);

      if(omc_Flags_isSet(threadData, _OMC_LIT22))
      {
        tmpMeta18 = mmc_mk_box1(0, _OMC_LIT6);
        tmpMeta19 = stringAppend(_OMC_LIT44,intString(listLength(_start_eqns)));
        tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT45);
        tmpMeta21 = stringAppend(omc_List_toString(threadData, _start_eqns, (modelica_fnptr) mmc_mk_box2(0,closure4_NBEquation_Equation_pointerToString,tmpMeta18), omc_StringUtil_headline__4(threadData, tmpMeta20), _OMC_LIT30, _OMC_LIT31, _OMC_LIT6, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT46);
        fputs(MMC_STRINGDATA(tmpMeta21),stdout);
      }
    }
    else
    {
      tmpMeta22 = stringAppend(_OMC_LIT29,omc_List_toString(threadData, _failed_vars, boxvar_NBVariable_pointerToString, _OMC_LIT6, _OMC_LIT30, _OMC_LIT31, _OMC_LIT2, 1 /* true */, ((modelica_integer) 0)));
      _error_msg = tmpMeta22;

      if(omc_Flags_isSet(threadData, _OMC_LIT22))
      {
        tmpMeta23 = stringAppend(_error_msg,_OMC_LIT33);
        tmpMeta24 = mmc_mk_box1(0, _OMC_LIT30);
        tmpMeta25 = stringAppend(tmpMeta23,omc_List_toString(threadData, omc_Pointer_access(threadData, _ptr_start_eqns), (modelica_fnptr) mmc_mk_box2(0,closure5_NBEquation_Equation_pointerToString,tmpMeta24), _OMC_LIT6, _OMC_LIT6, _OMC_LIT2, _OMC_LIT2, 1 /* true */, ((modelica_integer) 0)));
        _error_msg = tmpMeta25;
      }
      else
      {
        tmpMeta26 = stringAppend(_error_msg,_OMC_LIT32);
        _error_msg = tmpMeta26;
      }

      if(omc_Flags_isSet(threadData, _OMC_LIT39))
      {
        tmpMeta27 = stringAppend(_error_msg,_OMC_LIT2);
        tmpMeta28 = stringAppend(tmpMeta27,omc_NBVariable_VariablePointers_toString(threadData, _variables, _OMC_LIT35, mmc_mk_none(), 1 /* true */));
        tmpMeta29 = stringAppend(tmpMeta28,omc_NBEquation_EquationPointers_toString(threadData, _equations, _OMC_LIT35, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
        tmpMeta30 = stringAppend(tmpMeta29,omc_NBAdjacency_Mapping_toString(threadData, omc_Util_getOptionOrDefault(threadData, _mapping_opt, omc_NBAdjacency_Mapping_empty(threadData))));
        tmpMeta31 = stringAppend(tmpMeta30,omc_NBAdjacency_Matrix_toString(threadData, _adj, _OMC_LIT6));
        tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT2);
        tmpMeta33 = stringAppend(tmpMeta32,omc_NBMatching_toString(threadData, _matching, _OMC_LIT6));
        _error_msg = tmpMeta33;
      }
      else
      {
        tmpMeta34 = stringAppend(_error_msg,_OMC_LIT34);
        _error_msg = tmpMeta34;
      }

      tmpMeta35 = mmc_mk_cons(_error_msg, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT43, tmpMeta35);

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

static modelica_metatype closure6_NBVariable_isStateSelect(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype stateSelect = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isStateSelect(thData, var_ptr, stateSelect);
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
  modelica_metatype _discrete_eqns = NULL;
  modelica_metatype _msss = NULL;
  modelica_metatype _marked_eqns = NULL;
  modelica_metatype _state_adj = NULL;
  modelica_metatype _constraint = NULL;
  modelica_metatype _sliced_eqn = NULL;
  modelica_metatype _diffed_eqn = NULL;
  modelica_metatype _state_candidates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _states = NULL;
  modelica_metatype _dummy_states = NULL;
  modelica_metatype _sliced_candidates = NULL;
  modelica_metatype _sliced_states = NULL;
  modelica_metatype _sliced_dummy_states = NULL;
  modelica_metatype _state_derivatives = NULL;
  modelica_metatype _dummy_derivatives = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _current_candidates = NULL;
  modelica_metatype _rest_candidates = NULL;
  modelica_metatype _constraint_eqns = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _matched_eqns = NULL;
  modelica_metatype _unmatched_eqns = NULL;
  modelica_metatype _sliced_constraints = NULL;
  modelica_metatype _new_eqns = NULL;
  modelica_metatype tmpMeta4;
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
  modelica_boolean _debug;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta15;
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
  modelica_metatype tmpMeta55;
  modelica_metatype tmpMeta56;
  modelica_metatype tmpMeta57;
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
  modelica_metatype tmpMeta86;
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
  // _discrete_eqns has no default value.
  // _msss has no default value.
  // _marked_eqns has no default value.
  // _state_adj has no default value.
  // _constraint has no default value.
  // _sliced_eqn has no default value.
  // _diffed_eqn has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _state_candidates = tmpMeta1;
  // _states has no default value.
  // _dummy_states has no default value.
  // _sliced_candidates has no default value.
  // _sliced_states has no default value.
  // _sliced_dummy_states has no default value.
  // _state_derivatives has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _dummy_derivatives = tmpMeta2;
  // _current_candidates has no default value.
  // _rest_candidates has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _constraint_eqns = tmpMeta3;
  // _matched_eqns has no default value.
  // _unmatched_eqns has no default value.
  // _sliced_constraints has no default value.
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_eqns = tmpMeta4;
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
  _debug = 0 /* false */;
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _mapping_opt;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          if (optionNone(tmp8_1)) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 1));
          _mapping = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta5 = _mapping;
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT43, _OMC_LIT48);
          goto goto_6;
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
  _mapping = tmpMeta5;

  {
    modelica_metatype __omcQ_24tmpVar21;
    modelica_metatype* tmp12;
    modelica_metatype tmpMeta13;
    modelica_metatype __omcQ_24tmpVar20;
    modelica_integer tmp14;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = omc_NBEquation_EquationPointers_toList(threadData, _equations);
    tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar21 = tmpMeta13; /* defaultValue */
    tmp12 = &__omcQ_24tmpVar21;
    while(1) {
      tmp14 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp14--;
      }
      if (tmp14 == 0) {
        __omcQ_24tmpVar20 = mmc_mk_boolean(omc_NBEquation_Equation_isDiscrete(threadData, _eqn));
        *tmp12 = mmc_mk_cons(__omcQ_24tmpVar20,0);
        tmp12 = &MMC_CDR(*tmp12);
      } else if (tmp14 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp12 = mmc_mk_nil();
    tmpMeta11 = __omcQ_24tmpVar21;
  }
  _discrete_eqns = listArray(tmpMeta11);

  { /* match expression */
    modelica_metatype tmp18_1;
    tmp18_1 = _adj;
    {
      volatile mmc_switch_type tmp18;
      int tmp19;
      tmp18 = 0;
      for (; tmp18 < 2; tmp18++) {
        switch (MMC_SWITCH_CAST(tmp18)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp18_1,2,5) == 0) goto tmp17_end;
          
          /* Pattern matching succeeded */
          tmpMeta15 = omc_NBResolveSingularities_getMSSS(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 3))), _matching, _discrete_eqns, _mapping);
          goto tmp17_done;
        }
        case 1: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta21 = stringAppend(_OMC_LIT49,omc_NBAdjacency_Matrix_toString(threadData, _adj, _OMC_LIT6));
          tmpMeta20 = mmc_mk_cons(tmpMeta21, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT43, tmpMeta20);
          goto goto_16;
          goto tmp17_done;
        }
        }
        goto tmp17_end;
        tmp17_end: ;
      }
      goto goto_16;
      goto_16:;
      MMC_THROW_INTERNAL();
      goto tmp17_done;
      tmp17_done:;
    }
  }
  _msss = tmpMeta15;

  if((!(arrayLength(_msss) == ((modelica_integer) 0))))
  {
    _changed = 1 /* true */;

    _marked_eqns = omc_UnorderedSet_unique__list(threadData, omc_List_flatten(threadData, arrayList(_msss)), boxvar_Util_id, boxvar_intEq);

    _constraint_ptrs = omc_NBResolveSingularities_getConstraintsAndCandidates(threadData, _equations, _marked_eqns, _mapping ,&_candidate_ptrs ,&_constraint_eqns);

    if((omc_NBVariable_VariablePointers_scalarSize(threadData, _candidate_ptrs, 0 /* false */) < omc_NBEquation_EquationPointers_scalarSize(threadData, _constraint_ptrs, 0 /* false */)))
    {
      tmpMeta23 = stringAppend(_OMC_LIT50,omc_NBEquation_EquationPointers_toString(threadData, _constraint_ptrs, _OMC_LIT51, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
      tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT2);
      tmpMeta25 = stringAppend(tmpMeta24,omc_NBVariable_VariablePointers_toString(threadData, _candidate_ptrs, _OMC_LIT52, mmc_mk_none(), 1 /* true */));
      tmpMeta22 = mmc_mk_cons(tmpMeta25, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT43, tmpMeta22);

      MMC_THROW_INTERNAL();
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT56))
    {
      tmpMeta26 = stringAppend(omc_StringUtil_headline__1(threadData, _OMC_LIT13),_OMC_LIT2);
      tmpMeta27 = stringAppend(tmpMeta26,omc_NBVariable_VariablePointers_toString(threadData, _candidate_ptrs, _OMC_LIT52, mmc_mk_none(), 1 /* true */));
      tmpMeta28 = stringAppend(tmpMeta27,omc_NBEquation_EquationPointers_toString(threadData, _constraint_ptrs, _OMC_LIT51, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
      fputs(MMC_STRINGDATA(tmpMeta28),stdout);
    }

    _diffArguments = omc_NBDifferentiate_DifferentiationArguments_default(threadData, 1, _funcMap);

    tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(11));
    memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_diffArguments), 11*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[4] = mmc_mk_some(omc_NBVariable_VarData_getStateOrder(threadData, _varData));
    _diffArguments = tmpMeta29;

    _diffArguments_ptr = omc_Pointer_create(threadData, _diffArguments);

    if(omc_Flags_isSet(threadData, _OMC_LIT56))
    {
      fputs(MMC_STRINGDATA(omc_StringUtil_headline__3(threadData, _OMC_LIT57)),stdout);
    }

    {
      modelica_metatype _constraint;
      for (tmpMeta30 = omc_NBEquation_EquationPointers_toList(threadData, _constraint_ptrs); !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
      {
        _constraint = MMC_CAR(tmpMeta30);
        _diffed_eqn = omc_NBDifferentiate_differentiateEquationPointer(threadData, _constraint, _diffArguments_ptr, _OMC_LIT6);

        tmpMeta31 = mmc_mk_cons(_diffed_eqn, _new_eqns);
        _new_eqns = tmpMeta31;

        if(omc_Flags_isSet(threadData, _OMC_LIT56))
        {
          tmpMeta32 = stringAppend(_OMC_LIT58,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, _constraint), _OMC_LIT6));
          tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT2);
          fputs(MMC_STRINGDATA(tmpMeta33),stdout);

          tmpMeta34 = stringAppend(_OMC_LIT59,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, _diffed_eqn), _OMC_LIT6));
          tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT46);
          fputs(MMC_STRINGDATA(tmpMeta35),stdout);
        }
      }
    }

    _diffArguments = omc_Pointer_access(threadData, _diffArguments_ptr);

    _full_local = omc_NBAdjacency_Matrix_createFull(threadData, _candidate_ptrs, _constraint_ptrs, (modelica_integer)_kind);

    _set_adj = _OMC_LIT60;

    _rest_candidates = omc_NBVariable_VariablePointers_toList(threadData, _candidate_ptrs);

    _eo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_constraint_ptrs), 2)));

    _en = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

    _vo = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

    _vn = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

    tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta39 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, listArray(tmpMeta37), listArray(tmpMeta38));
    _set_matching = tmpMeta39;

    tmpMeta41 = mmc_mk_box1(0, mmc_mk_integer(1));
    tmpMeta42 = mmc_mk_box2(0, _OMC_LIT61, (modelica_fnptr) mmc_mk_box2(0,closure6_NBVariable_isStateSelect,tmpMeta41));
    tmpMeta43 = mmc_mk_box1(0, mmc_mk_integer(2));
    tmpMeta44 = mmc_mk_box2(0, _OMC_LIT62, (modelica_fnptr) mmc_mk_box2(0,closure7_NBVariable_isStateSelect,tmpMeta43));
    tmpMeta45 = mmc_mk_box2(0, _OMC_LIT63, boxvar_NBVariable_isArtificial);
    tmpMeta46 = mmc_mk_box1(0, mmc_mk_integer(3));
    tmpMeta47 = mmc_mk_box2(0, _OMC_LIT64, (modelica_fnptr) mmc_mk_box2(0,closure8_NBVariable_isStateSelect,tmpMeta46));
    tmpMeta48 = mmc_mk_box1(0, mmc_mk_integer(4));
    tmpMeta49 = mmc_mk_box2(0, _OMC_LIT65, (modelica_fnptr) mmc_mk_box2(0,closure9_NBVariable_isStateSelect,tmpMeta48));
    tmpMeta40 = mmc_mk_cons(tmpMeta42, mmc_mk_cons(tmpMeta44, mmc_mk_cons(tmpMeta45, mmc_mk_cons(tmpMeta47, mmc_mk_cons(tmpMeta49, MMC_REFSTRUCTLIT(mmc_nil))))));
    _stages = tmpMeta40;

    {
      modelica_metatype _stage;
      for (tmpMeta50 = _stages; !listEmpty(tmpMeta50); tmpMeta50=MMC_CDR(tmpMeta50))
      {
        _stage = MMC_CAR(tmpMeta50);
        /* Pattern-matching assignment */
        tmpMeta51 = _stage;
        tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 1));
        tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 2));
        _stageStr = tmpMeta52;
        _stageFunc = tmpMeta53;

        _current_candidates = omc_List_splitOnTrue(threadData, _rest_candidates, ((modelica_fnptr) _stageFunc) ,&_rest_candidates);

        if((listEmpty(_current_candidates) || ((!omc_NBMatching_isEmpty(threadData, _set_matching)) && omc_NBMatching_isPerfect(threadData, _set_matching))))
        {
          if(_debug)
          {
            tmpMeta54 = stringAppend(_OMC_LIT68,_stageStr);
            tmpMeta55 = stringAppend(tmpMeta54,_OMC_LIT67);
            tmpMeta56 = stringAppend(omc_StringUtil_headline__2(threadData, tmpMeta55),_OMC_LIT2);
            fputs(MMC_STRINGDATA(tmpMeta56),stdout);
          }
        }
        else
        {
          _vo = omc_UnorderedMap_merge(threadData, _vo, omc_UnorderedMap_copy(threadData, _vn), _OMC_LIT66);

          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp58;
            modelica_metatype tmpMeta59;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp60;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = _current_candidates;
            tmpMeta59 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta59; /* defaultValue */
            tmp58 = &__omcQ_24tmpVar23;
            while(1) {
              tmp60 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp60--;
              }
              if (tmp60 == 0) {
                __omcQ_24tmpVar22 = omc_NBVariable_getVarName(threadData, _var);
                *tmp58 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp58 = &MMC_CDR(*tmp58);
              } else if (tmp60 == 1) {
                break;
              } else {
                MMC_THROW_INTERNAL();
              }
            }
            *tmp58 = mmc_mk_nil();
            tmpMeta57 = __omcQ_24tmpVar23;
          }
          _vn = omc_UnorderedMap_subMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_candidate_ptrs), 2))), tmpMeta57);

          _set_adj = omc_NBAdjacency_Matrix_expand(threadData, _set_adj, _full_local, _vo, _vn, _eo, _en, _candidate_ptrs, _constraint_ptrs, (modelica_integer)_kind ,&_full_local);

          _set_matching = omc_NBMatching_regular(threadData, _set_matching, _set_adj, 0 /* false */, 1 /* true */, 0 /* false */);

          if(_debug)
          {
            tmpMeta61 = stringAppend(_OMC_LIT3,_stageStr);
            tmpMeta62 = stringAppend(tmpMeta61,_OMC_LIT67);
            fputs(MMC_STRINGDATA(omc_NBAdjacency_Matrix_toString(threadData, _set_adj, tmpMeta62)),stdout);

            tmpMeta63 = stringAppend(_OMC_LIT3,_stageStr);
            tmpMeta64 = stringAppend(tmpMeta63,_OMC_LIT67);
            fputs(MMC_STRINGDATA(omc_NBMatching_toString(threadData, _set_matching, tmpMeta64)),stdout);
          }
        }
      }
    }

    _dummy_states = omc_NBMatching_getMatches(threadData, _set_matching, omc_NBAdjacency_Matrix_getMappingOpt(threadData, _set_adj), _candidate_ptrs, _constraint_ptrs ,&_states ,&_matched_eqns ,&_unmatched_eqns);

    {
      modelica_metatype _dummy;
      for (tmpMeta66 = _dummy_states; !listEmpty(tmpMeta66); tmpMeta66=MMC_CDR(tmpMeta66))
      {
        _dummy = MMC_CAR(tmpMeta66);
        if(listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dummy), 3)))))
        {
          tmpMeta67 = mmc_mk_cons(omc_NBVariable_makeDummyState(threadData, omc_NBSlice_getT(threadData, _dummy)), _dummy_derivatives);
          _dummy_derivatives = tmpMeta67;
        }
        else
        {
          tmpMeta69 = stringAppend(_OMC_LIT69,omc_NBSlice_toString(threadData, _dummy, boxvar_NBVariable_pointerToString, ((modelica_integer) 10)));
          tmpMeta70 = stringAppend(tmpMeta69,_OMC_LIT2);
          tmpMeta68 = mmc_mk_cons(tmpMeta70, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT43, tmpMeta68);

          MMC_THROW_INTERNAL();
        }
      }
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT56))
    {
      tmpMeta72 = stringAppend(_OMC_LIT70,intString(listLength(_states)));
      tmpMeta73 = stringAppend(tmpMeta72,_OMC_LIT71);
      fputs(MMC_STRINGDATA(omc_StringUtil_headline__4(threadData, tmpMeta73)),stdout);

      tmpMeta74 = stringAppend(omc_NBSlice_lstToString(threadData, _states, boxvar_NBVariable_pointerToString, ((modelica_integer) 10)),_OMC_LIT46);
      fputs(MMC_STRINGDATA(tmpMeta74),stdout);
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT78))
    {
      tmpMeta75 = stringAppend(_OMC_LIT72,intString(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 3))))));
      tmpMeta76 = stringAppend(tmpMeta75,_OMC_LIT73);
      fputs(MMC_STRINGDATA(omc_StringUtil_headline__4(threadData, tmpMeta76)),stdout);

      tmpMeta77 = stringAppend(omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 3))), boxvar_NBVariable_pointerToString, _OMC_LIT6, _OMC_LIT30, _OMC_LIT31, _OMC_LIT6, 1 /* true */, ((modelica_integer) 0)),_OMC_LIT46);
      fputs(MMC_STRINGDATA(tmpMeta77),stdout);

      tmpMeta78 = stringAppend(_OMC_LIT72,intString(listLength(_dummy_states)));
      tmpMeta79 = stringAppend(tmpMeta78,_OMC_LIT74);
      fputs(MMC_STRINGDATA(omc_StringUtil_headline__4(threadData, tmpMeta79)),stdout);

      tmpMeta80 = stringAppend(omc_NBSlice_lstToString(threadData, _dummy_states, boxvar_NBVariable_pointerToString, ((modelica_integer) 10)),_OMC_LIT46);
      fputs(MMC_STRINGDATA(tmpMeta80),stdout);
    }

    if(listEmpty(_unmatched_eqns))
    {
      if(omc_Flags_isSet(threadData, _OMC_LIT56))
      {
        tmpMeta81 = stringAppend(omc_StringUtil_headline__2(threadData, _OMC_LIT81),_OMC_LIT2);
        fputs(MMC_STRINGDATA(tmpMeta81),stdout);
      }
    }
    else
    {
      if(omc_Flags_isSet(threadData, _OMC_LIT56))
      {
        fputs(MMC_STRINGDATA(omc_NBResolveSingularities_toStringDynamicSelect(threadData, _dummy_states, _unmatched_eqns)),stdout);
      }

      omc_Error_addMessage(threadData, _OMC_LIT43, _OMC_LIT80);

      MMC_THROW_INTERNAL();
    }

    _state_derivatives = omc_List_extractOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 3))), boxvar_NBVariable_isStateDerivative, NULL);

    {
      modelica_metatype __omcQ_24tmpVar25;
      modelica_metatype* tmp83;
      modelica_metatype tmpMeta84;
      modelica_metatype __omcQ_24tmpVar24;
      modelica_integer tmp85;
      modelica_metatype _slice_loopVar = 0;
      modelica_metatype _slice;
      _slice_loopVar = _states;
      tmpMeta84 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar25 = tmpMeta84; /* defaultValue */
      tmp83 = &__omcQ_24tmpVar25;
      while(1) {
        tmp85 = 1;
        if (!listEmpty(_slice_loopVar)) {
          _slice = MMC_CAR(_slice_loopVar);
          _slice_loopVar = MMC_CDR(_slice_loopVar);
          tmp85--;
        }
        if (tmp85 == 0) {
          __omcQ_24tmpVar24 = omc_NBSlice_getT(threadData, _slice);
          *tmp83 = mmc_mk_cons(__omcQ_24tmpVar24,0);
          tmp83 = &MMC_CDR(*tmp83);
        } else if (tmp85 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp83 = mmc_mk_nil();
      tmpMeta82 = __omcQ_24tmpVar25;
    }
    _sliced_states = tmpMeta82;

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _sliced_states, 1);

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _state_derivatives, 2);

    {
      modelica_metatype __omcQ_24tmpVar27;
      modelica_metatype* tmp87;
      modelica_metatype tmpMeta88;
      modelica_metatype __omcQ_24tmpVar26;
      modelica_integer tmp89;
      modelica_metatype _slice_loopVar = 0;
      modelica_metatype _slice;
      _slice_loopVar = _dummy_states;
      tmpMeta88 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar27 = tmpMeta88; /* defaultValue */
      tmp87 = &__omcQ_24tmpVar27;
      while(1) {
        tmp89 = 1;
        if (!listEmpty(_slice_loopVar)) {
          _slice = MMC_CAR(_slice_loopVar);
          _slice_loopVar = MMC_CDR(_slice_loopVar);
          tmp89--;
        }
        if (tmp89 == 0) {
          __omcQ_24tmpVar26 = omc_NBSlice_getT(threadData, _slice);
          *tmp87 = mmc_mk_cons(__omcQ_24tmpVar26,0);
          tmp87 = &MMC_CDR(*tmp87);
        } else if (tmp89 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp87 = mmc_mk_nil();
      tmpMeta86 = __omcQ_24tmpVar27;
    }
    _sliced_dummy_states = tmpMeta86;

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _sliced_dummy_states, 3);

    _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, _dummy_derivatives, 3);

    _eqData = omc_NBEquation_EqData_addTypedList(threadData, _eqData, _new_eqns, 1, 1 /* true */);

    _variables = omc_NBVariable_VariablePointers_addList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 3))), _variables);

    _variables = omc_NBVariable_VariablePointers_addList(threadData, _sliced_dummy_states, _variables);

    _variables = omc_NBVariable_VariablePointers_removeList(threadData, _sliced_states, _variables);

    _equations = omc_NBEquation_EquationPointers_addList(threadData, _new_eqns, _equations);
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

