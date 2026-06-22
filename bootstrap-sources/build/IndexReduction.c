#include "omc_simulation_settings.h"
#include "IndexReduction.h"
#define _OMC_LIT0_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "IndexReduction.addStateOrderFinder failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,46,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " with derivative "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,17,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT4,_OMC_LIT5,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "IndexReduction.addStateOrderFinder failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,42,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,1) {_OMC_LIT8,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "$STATESET"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,9,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,0,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,3) {&ClassInf_State_UNKNOWN__desc,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,5,12) {&DAE_Type_T__COMPLEX__desc,_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "x"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,1,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,4,4) {&BackendDAE_VarKind_STATE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,3) {&DAE_Type_T__INTEGER__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "A"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,1,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,1,3) {&BackendDAE_VarKind_VARIABLE__desc,}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "J"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,1,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "------------------"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,18,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "------------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,19,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Constraint equation to be differentiated:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,42,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "Differentiated equation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,25,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,2,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,3,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "IndexReduction.increaseDifferentiation failt because of wrong input:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,69,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,1,3) {&DAE_StateSelect_NEVER__desc,}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,3,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,1,3) {&DAE_TailCall_NO__TAIL__desc,}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,9,3) {&DAE_CallAttributes_CALL__ATTR__desc,_OMC_LIT15,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT34,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,3) {&BackendDAE_BaseClockPartitionKind_UNKNOWN__PARTITION__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "IndexReduction.replaceDummyDerivativesExp failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,53,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,1,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,2,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6000)),_OMC_LIT4,_OMC_LIT40,_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,6) {&DAE_Exp_BCONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,1,1) {_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,1,6) {&BackendDAE_VarKind_DUMMY__DER__desc,}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,1,5) {&DAE_VarDirection_BIDIR__desc,}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,1,7) {&BackendDAE_VarKind_DUMMY__STATE__desc,}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "IndexReduction.makeDummyVarandDummyDerivative failed "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,53,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "IndexReduction.makeAllDummyVarandDummyDerivativeRepl1 failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,61,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,1) {_OMC_LIT49,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Select as States(1):\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,21,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Select as dummyStates(1):\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,26,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "bltdump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,7,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "Dumps information from index reduction."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,39,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(51)),_OMC_LIT53,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "Select "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,7,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data " from "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,6,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data " States\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,8,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "Select as dummyStates(2):\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,26,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "Selection of DummyDerivatives failed due to negative system rank of "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,68,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "!\n           There are "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,23,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data " unassigned equations and "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,26,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data " potential states.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,19,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "Select as dummyStates(3):\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,26,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "- IndexReduction.selectDummyDerivatives2new failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,51,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,2,1) {_OMC_LIT65,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "$DER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,4,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "Prio 1 : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,9,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "Prio 2 : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,9,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "Prio 3 : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,9,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "Prio 4 : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,9,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "Prio 5 : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,9,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "dummyselect"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,11,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "Dumps information from dummy state selection heuristic."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,55,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(52)),_OMC_LIT73,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT74}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT76,-1.0);
#define _OMC_LIT76 MMC_REFREALLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "Calc Prio for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,14,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "\n Prio StateSelect : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,21,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "\n Prio Heuristik : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,19,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "\n ### Prio Result : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,20,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,1,3) {&DAE_InlineType_NORM__INLINE__desc,}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,1,6) {&DAE_InlineType_DEFAULT__INLINE__desc,}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,1) {_OMC_LIT82,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,2,1) {_OMC_LIT81,_OMC_LIT83}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT85,0.0);
#define _OMC_LIT85 MMC_REFREALLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT11,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT85}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT86,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT87,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,2,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "- IndexReduction.processComps4New failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,41,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,2,1) {_OMC_LIT90,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,1,5) {&BackendDAE_IndexType_SOLVABLE__desc,}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT93,1,5) {&AvlSetInt_Tree_EMPTY__desc,}};
#define _OMC_LIT93 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "##########################\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,27,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "StateSelect.never variables that will tried to be forced as dummys"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,66,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "They could not be forced to be statically selected as dummys, this could lead to errors during simulation, please use -d=bltdump for more information.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,151,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "Following variables have attribute stateSelect=StateSelect.never, but cant be statically chosen. %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,99,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT98,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(599)),_OMC_LIT4,_OMC_LIT40,_OMC_LIT97}};
#define _OMC_LIT98 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "\n###################################\nINCLUDES FORCED STATESELECT.NEVER()\n###################################\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,109,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "########## Try static state selection ##########\nTry to select dummy vars with natural matching (newer)\nSelect "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,111,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data " dummy states from "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,19,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data " candidates.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,13,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "Highest order derivatives (state candidates):"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,45,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "Constraint equations:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,21,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "No perfect matching possible, dynamic index reduction needed.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,62,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "Unassigned equations:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,21,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "Statically selected dummy states:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,33,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "Perfect Matching, no dynamic index reduction needed! There are no unassigned equations.\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,89,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "Selected dummy states:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,22,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "Selected continuous states:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,27,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT111,1,3) {&BackendDAE_IndexType_ABSOLUTE__desc,}};
#define _OMC_LIT111 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data " andidates.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,12,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "It is not possible to select continuous time states because Number of Equations "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,80,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data " greater than number of States "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,31,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data " to select from."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,16,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "indexReductionMethod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,20,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT117,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT117 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "dynamicStateSelection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,21,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT119,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT118}};
#define _OMC_LIT119 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,4,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "Skip index reduction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,20,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT122,2,0) {_OMC_LIT120,_OMC_LIT121}};
#define _OMC_LIT122 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "uode"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,4,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "Use the underlying ODE without the constraints."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,47,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT125,2,0) {_OMC_LIT123,_OMC_LIT124}};
#define _OMC_LIT125 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "Simple index reduction method, select (dynamic) dummy states based on analysis of the system."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,93,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT127,2,0) {_OMC_LIT118,_OMC_LIT126}};
#define _OMC_LIT127 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "dummyDerivatives"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,16,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "Simple index reduction method, select (static) dummy states based on heuristic."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,79,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT130,2,0) {_OMC_LIT128,_OMC_LIT129}};
#define _OMC_LIT130 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT130)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT131,2,1) {_OMC_LIT130,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT131 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT131)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT132,2,1) {_OMC_LIT127,_OMC_LIT131}};
#define _OMC_LIT132 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT132)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT133,2,1) {_OMC_LIT125,_OMC_LIT132}};
#define _OMC_LIT133 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT133)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT134,2,1) {_OMC_LIT122,_OMC_LIT133}};
#define _OMC_LIT134 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT134)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT135,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT134}};
#define _OMC_LIT135 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT135)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT136,1,1) {_OMC_LIT135}};
#define _OMC_LIT136 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "Sets the index reduction method to use. See --help=optmodules for more info."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,76,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT138,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(15)),_OMC_LIT116,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT117,_OMC_LIT119,_OMC_LIT136,_OMC_LIT137}};
#define _OMC_LIT138 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "No state selection needed for following equations:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,50,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "DynamicStateSelection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,21,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT141,2,17) {&DAE_Operator_MUL__SCALAR__PRODUCT__desc,_OMC_LIT15}};
#define _OMC_LIT141 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "stateselection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,14,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT143,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT142,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT85}};
#define _OMC_LIT143 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT143)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT144,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT143,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT87,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT144 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT144)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT145,1,4) {&BackendDAE_EquationKind_DYNAMIC__EQUATION__desc,}};
#define _OMC_LIT145 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT145)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT146,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT146 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT146)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT147,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT145,_OMC_LIT146}};
#define _OMC_LIT147 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT147)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT148,1,5) {&BackendDAE_Jacobian_EMPTY__JACOBIAN__desc,}};
#define _OMC_LIT148 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "Generated StateSets:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,20,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT150,1,8) {&DAE_InlineType_AFTER__INDEX__RED__INLINE__desc,}};
#define _OMC_LIT150 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT150)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT151,2,1) {_OMC_LIT150,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT151 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT151)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT152,2,1) {_OMC_LIT81,_OMC_LIT151}};
#define _OMC_LIT152 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "########################### STATE SELECTION ###########################\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,72,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "- IndexReduction.dynamicStateSelectionWork failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,50,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT155,2,1) {_OMC_LIT154,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT155 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT155)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT156,1,4) {&BackendDAE_StateOrder_NOSTATEORDER__desc,}};
#define _OMC_LIT156 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT156)
#define _OMC_LIT157_data "Replaced final Parameter in Eqns\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT157,33,_OMC_LIT157_data);
#define _OMC_LIT157 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT157)
#define _OMC_LIT158_data "Update Adjacency Matrix: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT158,25,_OMC_LIT158_data);
#define _OMC_LIT158 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data "Change varKind to algebraic for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,32,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
#define _OMC_LIT160_data "Other Candidates are\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT160,21,_OMC_LIT160_data);
#define _OMC_LIT160 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data "All unassignedStates without Derivative: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,41,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
#define _OMC_LIT162_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT162,2,_OMC_LIT162_data);
#define _OMC_LIT162 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data "unassignedStates\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,17,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#define _OMC_LIT164_data "not differentiable minimal singular subset:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT164,44,_OMC_LIT164_data);
#define _OMC_LIT164 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT164)
#define _OMC_LIT165_data "unassignedEqns:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT165,16,_OMC_LIT165_data);
#define _OMC_LIT165 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT165)
#define _OMC_LIT166_data "unassignedStates:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT166,18,_OMC_LIT166_data);
#define _OMC_LIT166 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT166)
#define _OMC_LIT167_data "states without used derivative:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT167,32,_OMC_LIT167_data);
#define _OMC_LIT167 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT167)
#define _OMC_LIT168_data "Skip already differentiated equation\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT168,37,_OMC_LIT168_data);
#define _OMC_LIT168 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT168)
#define _OMC_LIT169_data "Reduce Index failed! Found empty set of continuous equations.\nmarked equations:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT169,80,_OMC_LIT169_data);
#define _OMC_LIT169 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT169)
#define _OMC_LIT170_data "IndexReduction.pantelidesIndexReduction failed! Found empty set of continuous equations. Use -d=bltdump to get more information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT170,128,_OMC_LIT170_data);
#define _OMC_LIT170 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT170)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT171,2,1) {_OMC_LIT170,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT171 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT171)
#define _OMC_LIT172_data "Reduce Index failed! System is structurally singular and cannot be handled because the number of unassigned continuous equations is larger than the number of states.\nmarked equations:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT172,184,_OMC_LIT172_data);
#define _OMC_LIT172 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT172)
#define _OMC_LIT173_data "\n\nunassigned states:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT173,21,_OMC_LIT173_data);
#define _OMC_LIT173 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT173)
#define _OMC_LIT174_data "IndexReduction.pantelidesIndexReduction failed! System is structurally singular and cannot be handled because the number of unassigned equations is larger than the number of states. Use -d=bltdump to get more information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT174,221,_OMC_LIT174_data);
#define _OMC_LIT174 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT174)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT175,2,1) {_OMC_LIT174,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT175 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT175)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT176,3,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT176 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT176)
#define _OMC_LIT177_data "Original Eq "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT177,12,_OMC_LIT177_data);
#define _OMC_LIT177 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT177)
#define _OMC_LIT178_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT178,2,_OMC_LIT178_data);
#define _OMC_LIT178 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT178)
#define _OMC_LIT179_data "\n	-->"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT179,5,_OMC_LIT179_data);
#define _OMC_LIT179 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT179)
#define _OMC_LIT180_data "##############--MSSS--##############\nIndices of constraint equations: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT180,70,_OMC_LIT180_data);
#define _OMC_LIT180 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT180)
#define _OMC_LIT181_data "- IndexReduction.pantelidesIndexReductionMSS failed! Use -d=bltdump to get more information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT181,92,_OMC_LIT181_data);
#define _OMC_LIT181 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT181)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT182,2,1) {_OMC_LIT181,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT182 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT182)
#define _OMC_LIT183_data "- IndexReduction.pantelidesIndexReduction1 failed! Use -d=bltdump to get more information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT183,90,_OMC_LIT183_data);
#define _OMC_LIT183 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT183)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT184,2,1) {_OMC_LIT183,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT184 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT184)
#define _OMC_LIT185_data "Structurally singular system detected, but no index reduction method has been selected."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT185,87,_OMC_LIT185_data);
#define _OMC_LIT185 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT185)
#define _OMC_LIT186_data "- IndexReduction.pantelidesIndexReduction called with empty list of equations!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT186,78,_OMC_LIT186_data);
#define _OMC_LIT186 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT186)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT187,2,1) {_OMC_LIT186,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT187 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT187)
#define _OMC_LIT188_data "Index reduction done.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT188,22,_OMC_LIT188_data);
#define _OMC_LIT188 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT188)
#define _OMC_LIT189_data "optdaedump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT189,10,_OMC_LIT189_data);
#define _OMC_LIT189 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT189)
#define _OMC_LIT190_data "Dumps information from the optimization modules."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT190,48,_OMC_LIT190_data);
#define _OMC_LIT190 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT190)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT191,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(55)),_OMC_LIT189,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT190}};
#define _OMC_LIT191 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT191)
#define _OMC_LIT192_data "\n\nIndex reduction:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT192,19,_OMC_LIT192_data);
#define _OMC_LIT192 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT192)
#define _OMC_LIT193_data "Pantelides"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT193,10,_OMC_LIT193_data);
#define _OMC_LIT193 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT193)
#define _OMC_LIT194_data "pantelidesIndexReduction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT194,24,_OMC_LIT194_data);
#define _OMC_LIT194 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT194)
#define _OMC_LIT195_data "- IndexReduction.pantelidesIndexReduction failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT195,49,_OMC_LIT195_data);
#define _OMC_LIT195 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT195)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT196,2,1) {_OMC_LIT195,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT196 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT196)
#include "util/modelica.h"

#include "IndexReduction_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_addOrgEqn(threadData_t *threadData, modelica_integer _e, modelica_metatype _inEqn, modelica_metatype _inOrgEqns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_addOrgEqn(threadData_t *threadData, modelica_metatype _e, modelica_metatype _inEqn, modelica_metatype _inOrgEqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_addOrgEqn,2,0) {(void*) boxptr_IndexReduction_addOrgEqn,0}};
#define boxvar_IndexReduction_addOrgEqn MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_addOrgEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getDerStateOrder(threadData_t *threadData, modelica_metatype _dcr, modelica_metatype _inStateOrder);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getDerStateOrder,2,0) {(void*) boxptr_IndexReduction_getDerStateOrder,0}};
#define boxvar_IndexReduction_getDerStateOrder MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getDerStateOrder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getStateOrder(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _inStateOrder);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getStateOrder,2,0) {(void*) boxptr_IndexReduction_getStateOrder,0}};
#define boxvar_IndexReduction_getStateOrder MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getStateOrder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_addStateOrder(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _dcr, modelica_metatype _inStateOrder);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_addStateOrder,2,0) {(void*) boxptr_IndexReduction_addStateOrder,0}};
#define boxvar_IndexReduction_addStateOrder MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_addStateOrder)
PROTECTED_FUNCTION_STATIC modelica_string omc_IndexReduction_dumpStates(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_dumpStates,2,0) {(void*) boxptr_IndexReduction_dumpStates,0}};
#define boxvar_IndexReduction_dumpStates MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_dumpStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_addStateOrderFinder(threadData_t *threadData, modelica_metatype _iVlst, modelica_metatype _iDerVlst, modelica_metatype _inVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_addStateOrderFinder,2,0) {(void*) boxptr_IndexReduction_addStateOrderFinder,0}};
#define boxvar_IndexReduction_addStateOrderFinder MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_addStateOrderFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_traverseFindStateOrder(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inVars, modelica_metatype *out_outVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_traverseFindStateOrder,2,0) {(void*) boxptr_IndexReduction_traverseFindStateOrder,0}};
#define boxvar_IndexReduction_traverseFindStateOrder MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_traverseFindStateOrder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_findStateOrderWork(threadData_t *threadData, modelica_metatype _inSystem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_findStateOrderWork,2,0) {(void*) boxptr_IndexReduction_findStateOrderWork,0}};
#define boxvar_IndexReduction_findStateOrderWork MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_findStateOrderWork)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_setSetAStart(threadData_t *threadData, modelica_metatype _iVars, modelica_integer _n, modelica_integer _r, modelica_integer _nCandidates, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_setSetAStart(threadData_t *threadData, modelica_metatype _iVars, modelica_metatype _n, modelica_metatype _r, modelica_metatype _nCandidates, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_setSetAStart,2,0) {(void*) boxptr_IndexReduction_setSetAStart,0}};
#define boxvar_IndexReduction_setSetAStart MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_setSetAStart)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getSetVars(threadData_t *threadData, modelica_integer _index, modelica_integer _setsize, modelica_integer _nCandidates, modelica_integer _nCEqns, modelica_integer _level, modelica_metatype *out_crset, modelica_metatype *out_oSetVars, modelica_metatype *out_ocrA, modelica_metatype *out_oAVars, modelica_metatype *out_realtp, modelica_metatype *out_ocrJ, modelica_metatype *out_oJVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getSetVars(threadData_t *threadData, modelica_metatype _index, modelica_metatype _setsize, modelica_metatype _nCandidates, modelica_metatype _nCEqns, modelica_metatype _level, modelica_metatype *out_crset, modelica_metatype *out_oSetVars, modelica_metatype *out_ocrA, modelica_metatype *out_oAVars, modelica_metatype *out_realtp, modelica_metatype *out_ocrJ, modelica_metatype *out_oJVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getSetVars,2,0) {(void*) boxptr_IndexReduction_getSetVars,0}};
#define boxvar_IndexReduction_getSetVars MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getSetVars)
PROTECTED_FUNCTION_STATIC void omc_IndexReduction_debugdifferentiateEqns(threadData_t *threadData, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_debugdifferentiateEqns,2,0) {(void*) boxptr_IndexReduction_debugdifferentiateEqns,0}};
#define boxvar_IndexReduction_debugdifferentiateEqns MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_debugdifferentiateEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_increaseDifferentiation(threadData_t *threadData, modelica_metatype _inVarLst, modelica_metatype _iVarIndxs, modelica_integer _counter, modelica_metatype _inVars, modelica_metatype _iChangedVars, modelica_metatype *out_oChangedVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_increaseDifferentiation(threadData_t *threadData, modelica_metatype _inVarLst, modelica_metatype _iVarIndxs, modelica_metatype _counter, modelica_metatype _inVars, modelica_metatype _iChangedVars, modelica_metatype *out_oChangedVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_increaseDifferentiation,2,0) {(void*) boxptr_IndexReduction_increaseDifferentiation,0}};
#define boxvar_IndexReduction_increaseDifferentiation MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_increaseDifferentiation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_algebraicState(threadData_t *threadData, modelica_metatype _inVarLst, modelica_metatype _inIndxLst, modelica_metatype _inVars, modelica_metatype _iChangedVars, modelica_metatype *out_oChangedVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_algebraicState,2,0) {(void*) boxptr_IndexReduction_algebraicState,0}};
#define boxvar_IndexReduction_algebraicState MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_algebraicState)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_changeDerVariablesToStatesFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_changeDerVariablesToStatesFinder,2,0) {(void*) boxptr_IndexReduction_changeDerVariablesToStatesFinder,0}};
#define boxvar_IndexReduction_changeDerVariablesToStatesFinder MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_changeDerVariablesToStatesFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceDummyDerivativesVar(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inHt, modelica_metatype *out_outHt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceDummyDerivativesVar,2,0) {(void*) boxptr_IndexReduction_replaceDummyDerivativesVar,0}};
#define boxvar_IndexReduction_replaceDummyDerivativesVar MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceDummyDerivativesVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceDummyDerivatives(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _ht, modelica_metatype _inShared, modelica_metatype *out_outShared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceDummyDerivatives,2,0) {(void*) boxptr_IndexReduction_replaceDummyDerivatives,0}};
#define boxvar_IndexReduction_replaceDummyDerivatives MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceDummyDerivatives)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceDummyDerivativesExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iht, modelica_metatype *out_ht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceDummyDerivativesExp,2,0) {(void*) boxptr_IndexReduction_replaceDummyDerivativesExp,0}};
#define boxvar_IndexReduction_replaceDummyDerivativesExp MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceDummyDerivativesExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceFirstOrderDerivativesExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iht, modelica_metatype *out_ht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceFirstOrderDerivativesExp,2,0) {(void*) boxptr_IndexReduction_replaceFirstOrderDerivativesExp,0}};
#define boxvar_IndexReduction_replaceFirstOrderDerivativesExp MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceFirstOrderDerivativesExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_crefPrefixDerN(threadData_t *threadData, modelica_integer _n, modelica_metatype _iName, modelica_metatype *out_oDerName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_crefPrefixDerN(threadData_t *threadData, modelica_metatype _n, modelica_metatype _iName, modelica_metatype *out_oDerName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_crefPrefixDerN,2,0) {(void*) boxptr_IndexReduction_crefPrefixDerN,0}};
#define boxvar_IndexReduction_crefPrefixDerN MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_crefPrefixDerN)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_makeDummyVarandDummyDerivative(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _level, modelica_metatype _inTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_makeDummyVarandDummyDerivative(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _level, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_makeDummyVarandDummyDerivative,2,0) {(void*) boxptr_IndexReduction_makeDummyVarandDummyDerivative,0}};
#define boxvar_IndexReduction_makeDummyVarandDummyDerivative MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_makeDummyVarandDummyDerivative)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_addDummyStates(threadData_t *threadData, modelica_metatype _dummyStates, modelica_integer _level, modelica_metatype _repl, modelica_metatype _inSystem, modelica_metatype _iHt, modelica_metatype *out_oHt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_addDummyStates(threadData_t *threadData, modelica_metatype _dummyStates, modelica_metatype _level, modelica_metatype _repl, modelica_metatype _inSystem, modelica_metatype _iHt, modelica_metatype *out_oHt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_addDummyStates,2,0) {(void*) boxptr_IndexReduction_addDummyStates,0}};
#define boxvar_IndexReduction_addDummyStates MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_addDummyStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1(threadData_t *threadData, modelica_integer _diffCount, modelica_integer _diffedCount, modelica_metatype _iOrigName, modelica_metatype _iName, modelica_metatype _inVar, modelica_metatype _vars, modelica_metatype _so, modelica_metatype _iVarLst, modelica_metatype _iHt, modelica_metatype *out_oHt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1(threadData_t *threadData, modelica_metatype _diffCount, modelica_metatype _diffedCount, modelica_metatype _iOrigName, modelica_metatype _iName, modelica_metatype _inVar, modelica_metatype _vars, modelica_metatype _so, modelica_metatype _iVarLst, modelica_metatype _iHt, modelica_metatype *out_oHt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1,2,0) {(void*) boxptr_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1,0}};
#define boxvar_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_makeAllDummyVarandDummyDerivativeRepl(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_oTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_makeAllDummyVarandDummyDerivativeRepl,2,0) {(void*) boxptr_IndexReduction_makeAllDummyVarandDummyDerivativeRepl,0}};
#define boxvar_IndexReduction_makeAllDummyVarandDummyDerivativeRepl MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_makeAllDummyVarandDummyDerivativeRepl)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_addAllDummyStates(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _so, modelica_metatype _iHt, modelica_metatype *out_oHt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_addAllDummyStates,2,0) {(void*) boxptr_IndexReduction_addAllDummyStates,0}};
#define boxvar_IndexReduction_addAllDummyStates MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_addAllDummyStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_makeHigherStatesRepl1(threadData_t *threadData, modelica_integer _diffCount, modelica_integer _diffedCount, modelica_metatype _iOrigName, modelica_metatype _iName, modelica_metatype _inVar, modelica_metatype _vars, modelica_metatype _iVarLst, modelica_metatype _iHt, modelica_integer _iN, modelica_metatype *out_oHt, modelica_integer *out_oN);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_makeHigherStatesRepl1(threadData_t *threadData, modelica_metatype _diffCount, modelica_metatype _diffedCount, modelica_metatype _iOrigName, modelica_metatype _iName, modelica_metatype _inVar, modelica_metatype _vars, modelica_metatype _iVarLst, modelica_metatype _iHt, modelica_metatype _iN, modelica_metatype *out_oHt, modelica_metatype *out_oN);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_makeHigherStatesRepl1,2,0) {(void*) boxptr_IndexReduction_makeHigherStatesRepl1,0}};
#define boxvar_IndexReduction_makeHigherStatesRepl1 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_makeHigherStatesRepl1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_makeHigherStatesRepl(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_oTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_makeHigherStatesRepl,2,0) {(void*) boxptr_IndexReduction_makeHigherStatesRepl,0}};
#define boxvar_IndexReduction_makeHigherStatesRepl MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_makeHigherStatesRepl)
PROTECTED_FUNCTION_STATIC void omc_IndexReduction_setHigerDerivativeAssignment(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _ass1, modelica_metatype _ass2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_setHigerDerivativeAssignment,2,0) {(void*) boxptr_IndexReduction_setHigerDerivativeAssignment,0}};
#define boxvar_IndexReduction_setHigerDerivativeAssignment MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_setHigerDerivativeAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceHigherDerivatives(threadData_t *threadData, modelica_metatype _inSystem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceHigherDerivatives,2,0) {(void*) boxptr_IndexReduction_replaceHigherDerivatives,0}};
#define boxvar_IndexReduction_replaceHigherDerivatives MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceHigherDerivatives)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getLevelStates(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _level, modelica_metatype _iHt, modelica_metatype *out_oHt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getLevelStates(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _level, modelica_metatype _iHt, modelica_metatype *out_oHt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getLevelStates,2,0) {(void*) boxptr_IndexReduction_getLevelStates,0}};
#define boxvar_IndexReduction_getLevelStates MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getLevelStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_checkAssignment(threadData_t *threadData, modelica_integer _index, modelica_integer _len, modelica_metatype _ass, modelica_metatype _vars, modelica_metatype *out_outUnassigned);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_checkAssignment(threadData_t *threadData, modelica_metatype _index, modelica_metatype _len, modelica_metatype _ass, modelica_metatype _vars, modelica_metatype *out_outUnassigned);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_checkAssignment,2,0) {(void*) boxptr_IndexReduction_checkAssignment,0}};
#define boxvar_IndexReduction_checkAssignment MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_checkAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1(threadData_t *threadData, modelica_integer _i, modelica_metatype _tpl, modelica_metatype _iRow);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1(threadData_t *threadData, modelica_metatype _i, modelica_metatype _tpl, modelica_metatype _iRow);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1,2,0) {(void*) boxptr_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1,0}};
#define boxvar_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementElementfromEnhanced(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _tpl, modelica_metatype _iRow);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementElementfromEnhanced,2,0) {(void*) boxptr_IndexReduction_adjacencyMatrixElementElementfromEnhanced,0}};
#define boxvar_IndexReduction_adjacencyMatrixElementElementfromEnhanced MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementElementfromEnhanced)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementfromEnhancedPartial(threadData_t *threadData, modelica_metatype _iRow, modelica_integer _index, modelica_metatype _varsAssTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_adjacencyMatrixElementfromEnhancedPartial(threadData_t *threadData, modelica_metatype _iRow, modelica_metatype _index, modelica_metatype _varsAssTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementfromEnhancedPartial,2,0) {(void*) boxptr_IndexReduction_adjacencyMatrixElementfromEnhancedPartial,0}};
#define boxvar_IndexReduction_adjacencyMatrixElementfromEnhancedPartial MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementfromEnhancedPartial)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixfromEnhancedPartial(threadData_t *threadData, modelica_metatype _me, modelica_metatype _vars, modelica_metatype _neverVars, modelica_metatype _ass, modelica_metatype _so);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixfromEnhancedPartial,2,0) {(void*) boxptr_IndexReduction_adjacencyMatrixfromEnhancedPartial,0}};
#define boxvar_IndexReduction_adjacencyMatrixfromEnhancedPartial MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixfromEnhancedPartial)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementfromEnhanced(threadData_t *threadData, modelica_metatype _iRow, modelica_metatype _tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementfromEnhanced,2,0) {(void*) boxptr_IndexReduction_adjacencyMatrixElementfromEnhanced,0}};
#define boxvar_IndexReduction_adjacencyMatrixElementfromEnhanced MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementfromEnhanced)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixfromEnhanced(threadData_t *threadData, modelica_metatype _me, modelica_metatype _vars, modelica_metatype _so);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixfromEnhanced,2,0) {(void*) boxptr_IndexReduction_adjacencyMatrixfromEnhanced,0}};
#define boxvar_IndexReduction_adjacencyMatrixfromEnhanced MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixfromEnhanced)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementElementfromEnhancedStrict(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _vars, modelica_metatype _iRow);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementElementfromEnhancedStrict,2,0) {(void*) boxptr_IndexReduction_adjacencyMatrixElementElementfromEnhancedStrict,0}};
#define boxvar_IndexReduction_adjacencyMatrixElementElementfromEnhancedStrict MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementElementfromEnhancedStrict)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementfromEnhancedStrict(threadData_t *threadData, modelica_metatype _iRow, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementfromEnhancedStrict,2,0) {(void*) boxptr_IndexReduction_adjacencyMatrixElementfromEnhancedStrict,0}};
#define boxvar_IndexReduction_adjacencyMatrixElementfromEnhancedStrict MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixElementfromEnhancedStrict)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixfromEnhancedStrict(threadData_t *threadData, modelica_metatype _me, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixfromEnhancedStrict,2,0) {(void*) boxptr_IndexReduction_adjacencyMatrixfromEnhancedStrict,0}};
#define boxvar_IndexReduction_adjacencyMatrixfromEnhancedStrict MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_adjacencyMatrixfromEnhancedStrict)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_selectDummyDerivatives2new(threadData_t *threadData, modelica_metatype _dstates, modelica_metatype _states, modelica_metatype _unassignedEqns, modelica_metatype _assignedEqns, modelica_metatype _vars, modelica_integer _varSize, modelica_metatype _eqns, modelica_integer _eqnsSize, modelica_metatype _mapIncRowEqn, modelica_integer _level, modelica_metatype _iStateSets, modelica_metatype *out_oStateSets);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_selectDummyDerivatives2new(threadData_t *threadData, modelica_metatype _dstates, modelica_metatype _states, modelica_metatype _unassignedEqns, modelica_metatype _assignedEqns, modelica_metatype _vars, modelica_metatype _varSize, modelica_metatype _eqns, modelica_metatype _eqnsSize, modelica_metatype _mapIncRowEqn, modelica_metatype _level, modelica_metatype _iStateSets, modelica_metatype *out_oStateSets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_selectDummyDerivatives2new,2,0) {(void*) boxptr_IndexReduction_selectDummyDerivatives2new,0}};
#define boxvar_IndexReduction_selectDummyDerivatives2new MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_selectDummyDerivatives2new)
PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectPrioAttribute(threadData_t *threadData, modelica_metatype _v);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectPrioAttribute(threadData_t *threadData, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectPrioAttribute,2,0) {(void*) boxptr_IndexReduction_varStateSelectPrioAttribute,0}};
#define boxvar_IndexReduction_varStateSelectPrioAttribute MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectPrioAttribute)
PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectHeuristicPrio3(threadData_t *threadData, modelica_metatype _v);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectHeuristicPrio3(threadData_t *threadData, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectHeuristicPrio3,2,0) {(void*) boxptr_IndexReduction_varStateSelectHeuristicPrio3,0}};
#define boxvar_IndexReduction_varStateSelectHeuristicPrio3 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectHeuristicPrio3)
PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectHeuristicPrio4(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectHeuristicPrio4(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectHeuristicPrio4,2,0) {(void*) boxptr_IndexReduction_varStateSelectHeuristicPrio4,0}};
#define boxvar_IndexReduction_varStateSelectHeuristicPrio4 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectHeuristicPrio4)
PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectHeuristicPrio5(threadData_t *threadData, modelica_metatype _v, modelica_integer _index, modelica_metatype _om);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectHeuristicPrio5(threadData_t *threadData, modelica_metatype _v, modelica_metatype _index, modelica_metatype _om);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectHeuristicPrio5,2,0) {(void*) boxptr_IndexReduction_varStateSelectHeuristicPrio5,0}};
#define boxvar_IndexReduction_varStateSelectHeuristicPrio5 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectHeuristicPrio5)
PROTECTED_FUNCTION_STATIC void omc_IndexReduction_printVarListtateSelectHeuristicPrio(threadData_t *threadData, modelica_real _Prio1, modelica_real _Prio2, modelica_real _Prio3, modelica_real _Prio4, modelica_real _Prio5);
PROTECTED_FUNCTION_STATIC void boxptr_IndexReduction_printVarListtateSelectHeuristicPrio(threadData_t *threadData, modelica_metatype _Prio1, modelica_metatype _Prio2, modelica_metatype _Prio3, modelica_metatype _Prio4, modelica_metatype _Prio5);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_printVarListtateSelectHeuristicPrio,2,0) {(void*) boxptr_IndexReduction_printVarListtateSelectHeuristicPrio,0}};
#define boxvar_IndexReduction_printVarListtateSelectHeuristicPrio MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_printVarListtateSelectHeuristicPrio)
PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectHeuristicPrio(threadData_t *threadData, modelica_metatype _v, modelica_metatype _vars, modelica_integer _index, modelica_metatype _m);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectHeuristicPrio(threadData_t *threadData, modelica_metatype _v, modelica_metatype _vars, modelica_metatype _index, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectHeuristicPrio,2,0) {(void*) boxptr_IndexReduction_varStateSelectHeuristicPrio,0}};
#define boxvar_IndexReduction_varStateSelectHeuristicPrio MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectHeuristicPrio)
PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectPrio(threadData_t *threadData, modelica_metatype _v, modelica_metatype _vars, modelica_integer _index, modelica_metatype _m, modelica_real *out_prio_heu);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectPrio(threadData_t *threadData, modelica_metatype _v, modelica_metatype _vars, modelica_metatype _index, modelica_metatype _m, modelica_metatype *out_prio_heu);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectPrio,2,0) {(void*) boxptr_IndexReduction_varStateSelectPrio,0}};
#define boxvar_IndexReduction_varStateSelectPrio MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_varStateSelectPrio)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_IndexReduction_sortprioTuples(threadData_t *threadData, modelica_metatype _inTpl1, modelica_metatype _inTpl2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_sortprioTuples(threadData_t *threadData, modelica_metatype _inTpl1, modelica_metatype _inTpl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_sortprioTuples,2,0) {(void*) boxptr_IndexReduction_sortprioTuples,0}};
#define boxvar_IndexReduction_sortprioTuples MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_sortprioTuples)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_sortStateCandidatesVars(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype _allVars, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_sortStateCandidatesVars,2,0) {(void*) boxptr_IndexReduction_sortStateCandidatesVars,0}};
#define boxvar_IndexReduction_sortStateCandidatesVars MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_sortStateCandidatesVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_removeFirstOrgEqns(threadData_t *threadData, modelica_metatype _inOrgEqns, modelica_metatype *out_outOrgEqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_removeFirstOrgEqns,2,0) {(void*) boxptr_IndexReduction_removeFirstOrgEqns,0}};
#define boxvar_IndexReduction_removeFirstOrgEqns MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_removeFirstOrgEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getEqnsforDynamicStateSelectionRows(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _m, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset, modelica_boolean _iFound, modelica_boolean *out_oFound);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getEqnsforDynamicStateSelectionRows(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset, modelica_metatype _iFound, modelica_metatype *out_oFound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getEqnsforDynamicStateSelectionRows,2,0) {(void*) boxptr_IndexReduction_getEqnsforDynamicStateSelectionRows,0}};
#define boxvar_IndexReduction_getEqnsforDynamicStateSelectionRows MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getEqnsforDynamicStateSelectionRows)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getEqnsforDynamicStateSelectionPhase(threadData_t *threadData, modelica_metatype _elst, modelica_metatype _m, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset, modelica_boolean _iFound, modelica_boolean *out_oFound);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getEqnsforDynamicStateSelectionPhase(threadData_t *threadData, modelica_metatype _elst, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset, modelica_metatype _iFound, modelica_metatype *out_oFound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getEqnsforDynamicStateSelectionPhase,2,0) {(void*) boxptr_IndexReduction_getEqnsforDynamicStateSelectionPhase,0}};
#define boxvar_IndexReduction_getEqnsforDynamicStateSelectionPhase MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getEqnsforDynamicStateSelectionPhase)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getEqnsforDynamicStateSelection1(threadData_t *threadData, modelica_metatype _U, modelica_metatype _m, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getEqnsforDynamicStateSelection1(threadData_t *threadData, modelica_metatype _U, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getEqnsforDynamicStateSelection1,2,0) {(void*) boxptr_IndexReduction_getEqnsforDynamicStateSelection1,0}};
#define boxvar_IndexReduction_getEqnsforDynamicStateSelection1 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getEqnsforDynamicStateSelection1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getEqnsforDynamicStateSelection(threadData_t *threadData, modelica_metatype _U, modelica_integer _neqns, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getEqnsforDynamicStateSelection(threadData_t *threadData, modelica_metatype _U, modelica_metatype _neqns, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getEqnsforDynamicStateSelection,2,0) {(void*) boxptr_IndexReduction_getEqnsforDynamicStateSelection,0}};
#define boxvar_IndexReduction_getEqnsforDynamicStateSelection MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getEqnsforDynamicStateSelection)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getSetEqnStates(threadData_t *threadData, modelica_integer _v, modelica_metatype _flag, modelica_metatype _inM, modelica_metatype _vec2, modelica_metatype _iStates);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getSetEqnStates(threadData_t *threadData, modelica_metatype _v, modelica_metatype _flag, modelica_metatype _inM, modelica_metatype _vec2, modelica_metatype _iStates);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getSetEqnStates,2,0) {(void*) boxptr_IndexReduction_getSetEqnStates,0}};
#define boxvar_IndexReduction_getSetEqnStates MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getSetEqnStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getSetStates(threadData_t *threadData, modelica_integer _e, modelica_metatype _flag, modelica_metatype _inM, modelica_metatype _vec2, modelica_metatype _iStates);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getSetStates(threadData_t *threadData, modelica_metatype _e, modelica_metatype _flag, modelica_metatype _inM, modelica_metatype _vec2, modelica_metatype _iStates);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getSetStates,2,0) {(void*) boxptr_IndexReduction_getSetStates,0}};
#define boxvar_IndexReduction_getSetStates MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getSetStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getSetSystem(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _inMapEqnIncRow, modelica_metatype _inMapIncRowEqn, modelica_metatype _vec1, modelica_metatype _iVars, modelica_metatype _iEqnsArr, modelica_metatype _flag, modelica_integer _n, modelica_metatype _iEqnsLst, modelica_metatype _iVarsLst, modelica_metatype _iAss1, modelica_metatype _iAss2, modelica_metatype *out_oVarsLst, modelica_metatype *out_oAss1, modelica_metatype *out_oAss2, modelica_metatype *out_oEqnsArr);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getSetSystem(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _inMapEqnIncRow, modelica_metatype _inMapIncRowEqn, modelica_metatype _vec1, modelica_metatype _iVars, modelica_metatype _iEqnsArr, modelica_metatype _flag, modelica_metatype _n, modelica_metatype _iEqnsLst, modelica_metatype _iVarsLst, modelica_metatype _iAss1, modelica_metatype _iAss2, modelica_metatype *out_oVarsLst, modelica_metatype *out_oAss1, modelica_metatype *out_oAss2, modelica_metatype *out_oEqnsArr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getSetSystem,2,0) {(void*) boxptr_IndexReduction_getSetSystem,0}};
#define boxvar_IndexReduction_getSetSystem MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getSetSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_forceInlinEqn(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inFuncs, modelica_metatype *out_funcs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_forceInlinEqn,2,0) {(void*) boxptr_IndexReduction_forceInlinEqn,0}};
#define boxvar_IndexReduction_forceInlinEqn MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_forceInlinEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_processComps4New(threadData_t *threadData, modelica_metatype _iSets, modelica_integer _inVarSize, modelica_integer _inEqnsSize, modelica_metatype _iVars, modelica_metatype _iEqns, modelica_metatype _inM, modelica_metatype _inMT, modelica_metatype _inMapEqnIncRow, modelica_metatype _inMapIncRowEqn, modelica_metatype _vec1, modelica_metatype _vec2, modelica_integer _level, modelica_metatype _iShared, modelica_metatype _iStateSets, modelica_metatype *out_outDummyStates, modelica_metatype *out_oStateSets);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_processComps4New(threadData_t *threadData, modelica_metatype _iSets, modelica_metatype _inVarSize, modelica_metatype _inEqnsSize, modelica_metatype _iVars, modelica_metatype _iEqns, modelica_metatype _inM, modelica_metatype _inMT, modelica_metatype _inMapEqnIncRow, modelica_metatype _inMapIncRowEqn, modelica_metatype _vec1, modelica_metatype _vec2, modelica_metatype _level, modelica_metatype _iShared, modelica_metatype _iStateSets, modelica_metatype *out_outDummyStates, modelica_metatype *out_oStateSets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_processComps4New,2,0) {(void*) boxptr_IndexReduction_processComps4New,0}};
#define boxvar_IndexReduction_processComps4New MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_processComps4New)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_partitionSystemSplitt(threadData_t *threadData, modelica_integer _index, modelica_metatype _rowmarkarr, modelica_metatype _systsarr);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_partitionSystemSplitt(threadData_t *threadData, modelica_metatype _index, modelica_metatype _rowmarkarr, modelica_metatype _systsarr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_partitionSystemSplitt,2,0) {(void*) boxptr_IndexReduction_partitionSystemSplitt,0}};
#define boxvar_IndexReduction_partitionSystemSplitt MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_partitionSystemSplitt)
PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_partitionSystemstraverseRows(threadData_t *threadData, modelica_metatype _iRows, modelica_metatype _iQueue, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rowmarkarr, modelica_metatype _collmarkarr, modelica_integer _iNSystems);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_partitionSystemstraverseRows(threadData_t *threadData, modelica_metatype _iRows, modelica_metatype _iQueue, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rowmarkarr, modelica_metatype _collmarkarr, modelica_metatype _iNSystems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_partitionSystemstraverseRows,2,0) {(void*) boxptr_IndexReduction_partitionSystemstraverseRows,0}};
#define boxvar_IndexReduction_partitionSystemstraverseRows MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_partitionSystemstraverseRows)
PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_partitionSystem1(threadData_t *threadData, modelica_integer _index, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rowmarkarr, modelica_metatype _collmarkarr, modelica_integer _iNSystems);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_partitionSystem1(threadData_t *threadData, modelica_metatype _index, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rowmarkarr, modelica_metatype _collmarkarr, modelica_metatype _iNSystems);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_partitionSystem1,2,0) {(void*) boxptr_IndexReduction_partitionSystem1,0}};
#define boxvar_IndexReduction_partitionSystem1 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_partitionSystem1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_partitionSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_partitionSystem,2,0) {(void*) boxptr_IndexReduction_partitionSystem,0}};
#define boxvar_IndexReduction_partitionSystem MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_partitionSystem)
PROTECTED_FUNCTION_STATIC void omc_IndexReduction_getAdjacencyMatrixLevelEquations(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _vars, modelica_integer _index, modelica_integer _sindex, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _om, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _stateindexs, modelica_metatype _functionTree, modelica_boolean _isInitial);
PROTECTED_FUNCTION_STATIC void boxptr_IndexReduction_getAdjacencyMatrixLevelEquations(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _vars, modelica_metatype _index, modelica_metatype _sindex, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _om, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _stateindexs, modelica_metatype _functionTree, modelica_metatype _isInitial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getAdjacencyMatrixLevelEquations,2,0) {(void*) boxptr_IndexReduction_getAdjacencyMatrixLevelEquations,0}};
#define boxvar_IndexReduction_getAdjacencyMatrixLevelEquations MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getAdjacencyMatrixLevelEquations)
PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_replaceStateIndex(threadData_t *threadData, modelica_integer _iR, modelica_metatype _stateindexs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_replaceStateIndex(threadData_t *threadData, modelica_metatype _iR, modelica_metatype _stateindexs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceStateIndex,2,0) {(void*) boxptr_IndexReduction_replaceStateIndex,0}};
#define boxvar_IndexReduction_replaceStateIndex MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceStateIndex)
PROTECTED_FUNCTION_STATIC void omc_IndexReduction_getAdjacencyMatrixSelectStates(threadData_t *threadData, modelica_integer _nEqns, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mo, modelica_metatype _stateindexs);
PROTECTED_FUNCTION_STATIC void boxptr_IndexReduction_getAdjacencyMatrixSelectStates(threadData_t *threadData, modelica_metatype _nEqns, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mo, modelica_metatype _stateindexs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getAdjacencyMatrixSelectStates,2,0) {(void*) boxptr_IndexReduction_getAdjacencyMatrixSelectStates,0}};
#define boxvar_IndexReduction_getAdjacencyMatrixSelectStates MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getAdjacencyMatrixSelectStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getStateIndexes(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getStateIndexes,2,0) {(void*) boxptr_IndexReduction_getStateIndexes,0}};
#define boxvar_IndexReduction_getStateIndexes MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getStateIndexes)
PROTECTED_FUNCTION_STATIC void omc_IndexReduction_dumpBlock(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _iMapIncRowEqn, modelica_integer _nvars, modelica_metatype _syst);
PROTECTED_FUNCTION_STATIC void boxptr_IndexReduction_dumpBlock(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _iMapIncRowEqn, modelica_metatype _nvars, modelica_metatype _syst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_dumpBlock,2,0) {(void*) boxptr_IndexReduction_dumpBlock,0}};
#define boxvar_IndexReduction_dumpBlock MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_dumpBlock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getCompsExtraVars(threadData_t *threadData, modelica_metatype _comp, modelica_integer _nvars, modelica_metatype _ass2, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getCompsExtraVars(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _nvars, modelica_metatype _ass2, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getCompsExtraVars,2,0) {(void*) boxptr_IndexReduction_getCompsExtraVars,0}};
#define boxvar_IndexReduction_getCompsExtraVars MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getCompsExtraVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getCompsExtraEquations(threadData_t *threadData, modelica_metatype _comp, modelica_integer _neqns, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getCompsExtraEquations(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _neqns, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getCompsExtraEquations,2,0) {(void*) boxptr_IndexReduction_getCompsExtraEquations,0}};
#define boxvar_IndexReduction_getCompsExtraEquations MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getCompsExtraEquations)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_IndexReduction_selectBlock(threadData_t *threadData, modelica_metatype _comp, modelica_integer _ne);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_selectBlock(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _ne);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_selectBlock,2,0) {(void*) boxptr_IndexReduction_selectBlock,0}};
#define boxvar_IndexReduction_selectBlock MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_selectBlock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_forceStateSelectNever(threadData_t *threadData, modelica_metatype _vec_old1, modelica_metatype _vec_old2, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _me, modelica_metatype _inShared, modelica_metatype _so, modelica_metatype *out_states, modelica_metatype *out_vec1, modelica_metatype *out_vec2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_forceStateSelectNever,2,0) {(void*) boxptr_IndexReduction_forceStateSelectNever,0}};
#define boxvar_IndexReduction_forceStateSelectNever MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_forceStateSelectNever)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_selectStatesWork1(threadData_t *threadData, modelica_integer _nfreeStates, modelica_metatype _statecandidates, modelica_integer _neqns, modelica_metatype _eqnslst, modelica_integer _level, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _so, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHov, modelica_metatype _inDummyVars, modelica_metatype _iStateSets, modelica_metatype *out_oStateSets);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_selectStatesWork1(threadData_t *threadData, modelica_metatype _nfreeStates, modelica_metatype _statecandidates, modelica_metatype _neqns, modelica_metatype _eqnslst, modelica_metatype _level, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _so, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHov, modelica_metatype _inDummyVars, modelica_metatype _iStateSets, modelica_metatype *out_oStateSets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_selectStatesWork1,2,0) {(void*) boxptr_IndexReduction_selectStatesWork1,0}};
#define boxvar_IndexReduction_selectStatesWork1 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_selectStatesWork1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_fixDerivativeIndex(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _level, modelica_metatype _iVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_fixDerivativeIndex(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _level, modelica_metatype _iVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_fixDerivativeIndex,2,0) {(void*) boxptr_IndexReduction_fixDerivativeIndex,0}};
#define boxvar_IndexReduction_fixDerivativeIndex MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_fixDerivativeIndex)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getlowerOrderDerivatives(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _level, modelica_metatype _so, modelica_metatype _vars, modelica_metatype _iVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getlowerOrderDerivatives(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _level, modelica_metatype _so, modelica_metatype _vars, modelica_metatype _iVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getlowerOrderDerivatives,2,0) {(void*) boxptr_IndexReduction_getlowerOrderDerivatives,0}};
#define boxvar_IndexReduction_getlowerOrderDerivatives MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getlowerOrderDerivatives)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_removeFirstOrderDerivatives(threadData_t *threadData, modelica_metatype _iDummyVars, modelica_metatype _iVars, modelica_metatype _so, modelica_metatype _iRepl, modelica_metatype *out_oRepl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_removeFirstOrderDerivatives,2,0) {(void*) boxptr_IndexReduction_removeFirstOrderDerivatives,0}};
#define boxvar_IndexReduction_removeFirstOrderDerivatives MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_removeFirstOrderDerivatives)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_selectStatesWork(threadData_t *threadData, modelica_integer _level, modelica_metatype _iHov, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _so, modelica_metatype _iOrgEqnsLst, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHt, modelica_integer _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_integer *out_oSetIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_selectStatesWork(threadData_t *threadData, modelica_metatype _level, modelica_metatype _iHov, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _so, modelica_metatype _iOrgEqnsLst, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHt, modelica_metatype _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_metatype *out_oSetIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_selectStatesWork,2,0) {(void*) boxptr_IndexReduction_selectStatesWork,0}};
#define boxvar_IndexReduction_selectStatesWork MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_selectStatesWork)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_selectStates(threadData_t *threadData, modelica_integer _nfreeStates, modelica_integer _nOrgEqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _iSo, modelica_metatype _orgEqnsLst, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHt, modelica_integer _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_integer *out_oSetIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_selectStates(threadData_t *threadData, modelica_metatype _nfreeStates, modelica_metatype _nOrgEqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _iSo, modelica_metatype _orgEqnsLst, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHt, modelica_metatype _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_metatype *out_oSetIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_selectStates,2,0) {(void*) boxptr_IndexReduction_selectStates,0}};
#define boxvar_IndexReduction_selectStates MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_selectStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_setStartExp(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _startExp, modelica_integer _size, modelica_integer _iIndex, modelica_integer *out_oIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_setStartExp(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _startExp, modelica_metatype _size, modelica_metatype _iIndex, modelica_metatype *out_oIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_setStartExp,2,0) {(void*) boxptr_IndexReduction_setStartExp,0}};
#define boxvar_IndexReduction_setStartExp MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_setStartExp)
PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_generateStateSets(threadData_t *threadData, modelica_metatype _iTplLst, modelica_integer _iSetIndex, modelica_metatype _iVars, modelica_metatype _iEqns, modelica_metatype _iStateSets, modelica_metatype *out_oVars, modelica_metatype *out_oEqns, modelica_metatype *out_oStateSets);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_generateStateSets(threadData_t *threadData, modelica_metatype _iTplLst, modelica_metatype _iSetIndex, modelica_metatype _iVars, modelica_metatype _iEqns, modelica_metatype _iStateSets, modelica_metatype *out_oVars, modelica_metatype *out_oEqns, modelica_metatype *out_oStateSets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_generateStateSets,2,0) {(void*) boxptr_IndexReduction_generateStateSets,0}};
#define boxvar_IndexReduction_generateStateSets MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_generateStateSets)
PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_addStateSets(threadData_t *threadData, modelica_metatype _iTplLst, modelica_integer _iSetIndex, modelica_metatype _inSystem, modelica_metatype *out_oSystem);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_addStateSets(threadData_t *threadData, modelica_metatype _iTplLst, modelica_metatype _iSetIndex, modelica_metatype _inSystem, modelica_metatype *out_oSystem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_addStateSets,2,0) {(void*) boxptr_IndexReduction_addStateSets,0}};
#define boxvar_IndexReduction_addStateSets MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_addStateSets)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_reduceStateSets2(threadData_t *threadData, modelica_metatype _iTplLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_reduceStateSets2,2,0) {(void*) boxptr_IndexReduction_reduceStateSets2,0}};
#define boxvar_IndexReduction_reduceStateSets2 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_reduceStateSets2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_reduceStateSets(threadData_t *threadData, modelica_metatype _iTplLst, modelica_metatype _idummyStates);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_reduceStateSets,2,0) {(void*) boxptr_IndexReduction_reduceStateSets,0}};
#define boxvar_IndexReduction_reduceStateSets MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_reduceStateSets)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getVar(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getVar,2,0) {(void*) boxptr_IndexReduction_getVar,0}};
#define boxvar_IndexReduction_getVar MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_traversinghighestOrderDerivativesFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_traversinghighestOrderDerivativesFinder,2,0) {(void*) boxptr_IndexReduction_traversinghighestOrderDerivativesFinder,0}};
#define boxvar_IndexReduction_traversinghighestOrderDerivativesFinder MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_traversinghighestOrderDerivativesFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_highestOrderDerivatives(threadData_t *threadData, modelica_metatype _v, modelica_metatype _iSo, modelica_metatype *out_oSo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_highestOrderDerivatives,2,0) {(void*) boxptr_IndexReduction_highestOrderDerivatives,0}};
#define boxvar_IndexReduction_highestOrderDerivatives MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_highestOrderDerivatives)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceDerStatesStatesExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inOrder, modelica_metatype *out_outOrder);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceDerStatesStatesExp,2,0) {(void*) boxptr_IndexReduction_replaceDerStatesStatesExp,0}};
#define boxvar_IndexReduction_replaceDerStatesStatesExp MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceDerStatesStatesExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_inlineOrgEqns(threadData_t *threadData, modelica_metatype _inOrgEqns, modelica_metatype _inA);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_inlineOrgEqns,2,0) {(void*) boxptr_IndexReduction_inlineOrgEqns,0}};
#define boxvar_IndexReduction_inlineOrgEqns MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_inlineOrgEqns)
PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_countOrgEqns(threadData_t *threadData, modelica_metatype _inOrgEqns, modelica_integer _iCount);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_countOrgEqns(threadData_t *threadData, modelica_metatype _inOrgEqns, modelica_metatype _iCount);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_countOrgEqns,2,0) {(void*) boxptr_IndexReduction_countOrgEqns,0}};
#define boxvar_IndexReduction_countOrgEqns MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_countOrgEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_countStateCandidatesWithNever(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _inCount, modelica_integer *out_outCount);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_countStateCandidatesWithNever(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inCount, modelica_metatype *out_outCount);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_countStateCandidatesWithNever,2,0) {(void*) boxptr_IndexReduction_countStateCandidatesWithNever,0}};
#define boxvar_IndexReduction_countStateCandidatesWithNever MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_countStateCandidatesWithNever)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_countStateCandidates(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _inCount, modelica_integer *out_outCount);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_countStateCandidates(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inCount, modelica_metatype *out_outCount);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_countStateCandidates,2,0) {(void*) boxptr_IndexReduction_countStateCandidates,0}};
#define boxvar_IndexReduction_countStateCandidates MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_countStateCandidates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_dynamicStateSelectionWork(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inArg, modelica_metatype _iHt, modelica_integer _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_integer *out_oSetIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_dynamicStateSelectionWork(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inArg, modelica_metatype _iHt, modelica_metatype _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_metatype *out_oSetIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_dynamicStateSelectionWork,2,0) {(void*) boxptr_IndexReduction_dynamicStateSelectionWork,0}};
#define boxvar_IndexReduction_dynamicStateSelectionWork MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_dynamicStateSelectionWork)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_dynamicStateSelection__mapEqsystem(threadData_t *threadData, modelica_metatype _isysts, modelica_metatype _inShared, modelica_metatype _iargs, modelica_integer _setIndex, modelica_metatype _iHt, modelica_metatype *out_oshared, modelica_metatype *out_oHt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_dynamicStateSelection__mapEqsystem(threadData_t *threadData, modelica_metatype _isysts, modelica_metatype _inShared, modelica_metatype _iargs, modelica_metatype _setIndex, modelica_metatype _iHt, modelica_metatype *out_oshared, modelica_metatype *out_oHt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_dynamicStateSelection__mapEqsystem,2,0) {(void*) boxptr_IndexReduction_dynamicStateSelection__mapEqsystem,0}};
#define boxvar_IndexReduction_dynamicStateSelection__mapEqsystem MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_dynamicStateSelection__mapEqsystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceFinalVarsGetExp(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype __omcQ_24in_5Frepl, modelica_boolean __omcQ_24in_5Fb, modelica_boolean *out_b);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_replaceFinalVarsGetExp(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5Fb, modelica_metatype *out_b);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceFinalVarsGetExp,2,0) {(void*) boxptr_IndexReduction_replaceFinalVarsGetExp,0}};
#define boxvar_IndexReduction_replaceFinalVarsGetExp MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceFinalVarsGetExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceFinalVarsExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceFinalVarsExp,2,0) {(void*) boxptr_IndexReduction_replaceFinalVarsExp,0}};
#define boxvar_IndexReduction_replaceFinalVarsExp MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceFinalVarsExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceFinalVarsEqn(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceFinalVarsEqn,2,0) {(void*) boxptr_IndexReduction_replaceFinalVarsEqn,0}};
#define boxvar_IndexReduction_replaceFinalVarsEqn MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceFinalVarsEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceFinalVars(threadData_t *threadData, modelica_integer _e, modelica_metatype _vars, modelica_metatype _inTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_replaceFinalVars(threadData_t *threadData, modelica_metatype _e, modelica_metatype _vars, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceFinalVars,2,0) {(void*) boxptr_IndexReduction_replaceFinalVars,0}};
#define boxvar_IndexReduction_replaceFinalVars MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceFinalVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_handleundifferntiableMSS(threadData_t *threadData, modelica_boolean _b, modelica_metatype _statesWithUnusedDer, modelica_metatype _inEqns, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _inStateOrd, modelica_metatype _inOrgEqnsLst, modelica_metatype _imapEqnIncRow, modelica_metatype _imapIncRowEqn, modelica_metatype *out_oshared, modelica_metatype *out_outAss1, modelica_metatype *out_outAss2, modelica_metatype *out_outStateOrd, modelica_metatype *out_outOrgEqnsLst, modelica_metatype *out_omapEqnIncRow, modelica_metatype *out_omapIncRowEqn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_handleundifferntiableMSS(threadData_t *threadData, modelica_metatype _b, modelica_metatype _statesWithUnusedDer, modelica_metatype _inEqns, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _inStateOrd, modelica_metatype _inOrgEqnsLst, modelica_metatype _imapEqnIncRow, modelica_metatype _imapIncRowEqn, modelica_metatype *out_oshared, modelica_metatype *out_outAss1, modelica_metatype *out_outAss2, modelica_metatype *out_outStateOrd, modelica_metatype *out_outOrgEqnsLst, modelica_metatype *out_omapEqnIncRow, modelica_metatype *out_omapIncRowEqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_handleundifferntiableMSS,2,0) {(void*) boxptr_IndexReduction_handleundifferntiableMSS,0}};
#define boxvar_IndexReduction_handleundifferntiableMSS MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_handleundifferntiableMSS)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_handleundifferntiableMSSLst(threadData_t *threadData, modelica_metatype _iNotDiffableMSS, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _iArg, modelica_metatype *out_oshared, modelica_metatype *out_outAss1, modelica_metatype *out_outAss2, modelica_metatype *out_oArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_handleundifferntiableMSSLst,2,0) {(void*) boxptr_IndexReduction_handleundifferntiableMSSLst,0}};
#define boxvar_IndexReduction_handleundifferntiableMSSLst MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_handleundifferntiableMSSLst)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_IndexReduction_isStateonIndex(threadData_t *threadData, modelica_integer _index, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_isStateonIndex(threadData_t *threadData, modelica_metatype _index, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_isStateonIndex,2,0) {(void*) boxptr_IndexReduction_isStateonIndex,0}};
#define boxvar_IndexReduction_isStateonIndex MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_isStateonIndex)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_statesWithUnusedDerivative(threadData_t *threadData, modelica_integer _state, modelica_metatype _mt, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_statesWithUnusedDerivative(threadData_t *threadData, modelica_metatype _state, modelica_metatype _mt, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_statesWithUnusedDerivative,2,0) {(void*) boxptr_IndexReduction_statesWithUnusedDerivative,0}};
#define boxvar_IndexReduction_statesWithUnusedDerivative MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_statesWithUnusedDerivative)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceStateOrderExpFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVars, modelica_boolean *out_cont, modelica_metatype *out_outVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_replaceStateOrderExpFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVars, modelica_metatype *out_cont, modelica_metatype *out_outVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceStateOrderExpFinder,2,0) {(void*) boxptr_IndexReduction_replaceStateOrderExpFinder,0}};
#define boxvar_IndexReduction_replaceStateOrderExpFinder MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceStateOrderExpFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceStateOrderExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVars, modelica_metatype *out_vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceStateOrderExp,2,0) {(void*) boxptr_IndexReduction_replaceStateOrderExp,0}};
#define boxvar_IndexReduction_replaceStateOrderExp MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceStateOrderExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceDifferentiatedEqns(threadData_t *threadData, modelica_metatype _inEqnTplLst, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _mt, modelica_metatype _imapIncRowEqn, modelica_metatype _inChangedVars, modelica_metatype _inOrgEqns, modelica_metatype *out_outEqns, modelica_metatype *out_outChangedVars, modelica_metatype *out_outOrgEqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_replaceDifferentiatedEqns,2,0) {(void*) boxptr_IndexReduction_replaceDifferentiatedEqns,0}};
#define boxvar_IndexReduction_replaceDifferentiatedEqns MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_replaceDifferentiatedEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_differentiateEqnsLst1(threadData_t *threadData, modelica_integer _eqIdx, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _inShared, modelica_metatype *out_oshared);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_differentiateEqnsLst1(threadData_t *threadData, modelica_metatype _eqIdx, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _inShared, modelica_metatype *out_oshared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_differentiateEqnsLst1,2,0) {(void*) boxptr_IndexReduction_differentiateEqnsLst1,0}};
#define boxvar_IndexReduction_differentiateEqnsLst1 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_differentiateEqnsLst1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_differentiateEqnsLst(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _inShared, modelica_metatype *out_oShared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_differentiateEqnsLst,2,0) {(void*) boxptr_IndexReduction_differentiateEqnsLst,0}};
#define boxvar_IndexReduction_differentiateEqnsLst MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_differentiateEqnsLst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_searchDerivativesExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_searchDerivativesExp,2,0) {(void*) boxptr_IndexReduction_searchDerivativesExp,0}};
#define boxvar_IndexReduction_searchDerivativesExp MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_searchDerivativesExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_collectVarEqns(threadData_t *threadData, modelica_metatype _varIdcsIn, modelica_metatype _mT, modelica_integer _numVars, modelica_integer _numEqs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_collectVarEqns(threadData_t *threadData, modelica_metatype _varIdcsIn, modelica_metatype _mT, modelica_metatype _numVars, modelica_metatype _numEqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_collectVarEqns,2,0) {(void*) boxptr_IndexReduction_collectVarEqns,0}};
#define boxvar_IndexReduction_collectVarEqns MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_collectVarEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_differentiateEqns(threadData_t *threadData, modelica_metatype _inEqnsTpl, modelica_metatype _MSSSeqs, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _inOrgEqnsLst, modelica_metatype _imapEqnIncRow, modelica_metatype _imapIncRowEqn, modelica_metatype _iNotDiffableMSS, modelica_metatype *out_oshared, modelica_metatype *out_outAss1, modelica_metatype *out_outAss2, modelica_metatype *out_outOrgEqnsLst, modelica_metatype *out_omapEqnIncRow, modelica_metatype *out_omapIncRowEqn, modelica_metatype *out_oNotDiffableMSS);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_differentiateEqns,2,0) {(void*) boxptr_IndexReduction_differentiateEqns,0}};
#define boxvar_IndexReduction_differentiateEqns MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_differentiateEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_markTrue(threadData_t *threadData, modelica_integer _indx, modelica_integer _mark, modelica_metatype __omcQ_24in_5Farr);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_markTrue(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _mark, modelica_metatype __omcQ_24in_5Farr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_markTrue,2,0) {(void*) boxptr_IndexReduction_markTrue,0}};
#define boxvar_IndexReduction_markTrue MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_markTrue)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_IndexReduction_isMarked(threadData_t *threadData, modelica_metatype _ass, modelica_integer _indx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_isMarked(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _indx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_isMarked,2,0) {(void*) boxptr_IndexReduction_isMarked,0}};
#define boxvar_IndexReduction_isMarked MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_isMarked)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_statesInEquations(threadData_t *threadData, modelica_integer _eindx, modelica_metatype _inTpl, modelica_metatype _ass1, modelica_metatype _inStateLst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_statesInEquations(threadData_t *threadData, modelica_metatype _eindx, modelica_metatype _inTpl, modelica_metatype _ass1, modelica_metatype _inStateLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_statesInEquations,2,0) {(void*) boxptr_IndexReduction_statesInEquations,0}};
#define boxvar_IndexReduction_statesInEquations MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_statesInEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_unassignedContinuesEqns(threadData_t *threadData, modelica_integer _eindx, modelica_metatype _vars, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _inFold);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_unassignedContinuesEqns(threadData_t *threadData, modelica_metatype _eindx, modelica_metatype _vars, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _inFold);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_unassignedContinuesEqns,2,0) {(void*) boxptr_IndexReduction_unassignedContinuesEqns,0}};
#define boxvar_IndexReduction_unassignedContinuesEqns MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_unassignedContinuesEqns)
PROTECTED_FUNCTION_STATIC void omc_IndexReduction_singularSystemError(threadData_t *threadData, modelica_boolean _b, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _eqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg);
PROTECTED_FUNCTION_STATIC void boxptr_IndexReduction_singularSystemError(threadData_t *threadData, modelica_metatype _b, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _eqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_singularSystemError,2,0) {(void*) boxptr_IndexReduction_singularSystemError,0}};
#define boxvar_IndexReduction_singularSystemError MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_singularSystemError)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_minimalStructurallySingularSystemMSS(threadData_t *threadData, modelica_metatype _inEqnsLst, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg, modelica_metatype _statemark, modelica_integer _mark, modelica_metatype _m, modelica_metatype _vars, modelica_metatype _inEqnsLstAcc, modelica_metatype _inStateIndxsAcc, modelica_metatype _inUnassEqnsAcc, modelica_metatype _inDiscEqnsAcc, modelica_metatype *out_outStateIndxs, modelica_metatype *out_outUnassEqnsAcc, modelica_metatype *out_outDiscEqns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_minimalStructurallySingularSystemMSS(threadData_t *threadData, modelica_metatype _inEqnsLst, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg, modelica_metatype _statemark, modelica_metatype _mark, modelica_metatype _m, modelica_metatype _vars, modelica_metatype _inEqnsLstAcc, modelica_metatype _inStateIndxsAcc, modelica_metatype _inUnassEqnsAcc, modelica_metatype _inDiscEqnsAcc, modelica_metatype *out_outStateIndxs, modelica_metatype *out_outUnassEqnsAcc, modelica_metatype *out_outDiscEqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_minimalStructurallySingularSystemMSS,2,0) {(void*) boxptr_IndexReduction_minimalStructurallySingularSystemMSS,0}};
#define boxvar_IndexReduction_minimalStructurallySingularSystemMSS MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_minimalStructurallySingularSystemMSS)
PROTECTED_FUNCTION_STATIC modelica_string omc_IndexReduction_eqnstplDebugString(threadData_t *threadData, modelica_metatype _tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_eqnstplDebugString,2,0) {(void*) boxptr_IndexReduction_eqnstplDebugString,0}};
#define boxvar_IndexReduction_eqnstplDebugString MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_eqnstplDebugString)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_pantelidesIndexReductionMSS(threadData_t *threadData, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _alleqns, modelica_metatype _MSSSeqs, modelica_integer _actualEqn, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_integer _mark, modelica_metatype _markarr, modelica_metatype _inArg, modelica_metatype _iNotDiffableMSS, modelica_metatype *out_oshared, modelica_metatype *out_outAssignments1, modelica_metatype *out_outAssignments2, modelica_metatype *out_outArg, modelica_metatype *out_oNotDiffableMSS);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_pantelidesIndexReductionMSS(threadData_t *threadData, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _alleqns, modelica_metatype _MSSSeqs, modelica_metatype _actualEqn, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _mark, modelica_metatype _markarr, modelica_metatype _inArg, modelica_metatype _iNotDiffableMSS, modelica_metatype *out_oshared, modelica_metatype *out_outAssignments1, modelica_metatype *out_outAssignments2, modelica_metatype *out_outArg, modelica_metatype *out_oNotDiffableMSS);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_pantelidesIndexReductionMSS,2,0) {(void*) boxptr_IndexReduction_pantelidesIndexReductionMSS,0}};
#define boxvar_IndexReduction_pantelidesIndexReductionMSS MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_pantelidesIndexReductionMSS)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_pantelidesIndexReduction1(threadData_t *threadData, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _alleqns, modelica_metatype _iEqns, modelica_integer _actualEqn, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_integer _mark, modelica_metatype _markarr, modelica_metatype _inArg, modelica_metatype _iNotDiffableMSS, modelica_metatype *out_oshared, modelica_metatype *out_outAssignments1, modelica_metatype *out_outAssignments2, modelica_metatype *out_outArg, modelica_metatype *out_oNotDiffableMSS);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_pantelidesIndexReduction1(threadData_t *threadData, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _alleqns, modelica_metatype _iEqns, modelica_metatype _actualEqn, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _mark, modelica_metatype _markarr, modelica_metatype _inArg, modelica_metatype _iNotDiffableMSS, modelica_metatype *out_oshared, modelica_metatype *out_outAssignments1, modelica_metatype *out_outAssignments2, modelica_metatype *out_outArg, modelica_metatype *out_oNotDiffableMSS);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_pantelidesIndexReduction1,2,0) {(void*) boxptr_IndexReduction_pantelidesIndexReduction1,0}};
#define boxvar_IndexReduction_pantelidesIndexReduction1 MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_pantelidesIndexReduction1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getChangedEqnsAndLowest(threadData_t *threadData, modelica_integer _index, modelica_metatype _ass2, modelica_metatype _iAcc, modelica_integer _iLowest, modelica_integer *out_oLowest);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getChangedEqnsAndLowest(threadData_t *threadData, modelica_metatype _index, modelica_metatype _ass2, modelica_metatype _iAcc, modelica_metatype _iLowest, modelica_metatype *out_oLowest);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IndexReduction_getChangedEqnsAndLowest,2,0) {(void*) boxptr_IndexReduction_getChangedEqnsAndLowest,0}};
#define boxvar_IndexReduction_getChangedEqnsAndLowest MMC_REFSTRUCTLIT(boxvar_lit_IndexReduction_getChangedEqnsAndLowest)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_addOrgEqn(threadData_t *threadData, modelica_integer _e, modelica_metatype _inEqn, modelica_metatype _inOrgEqns)
{
  modelica_metatype _outOrgEqns = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOrgEqns has no default value.
  // _eqs has no default value.
  _outOrgEqns = _inOrgEqns;

  _eqs = arrayGet(_inOrgEqns, _e);

  tmpMeta1 = mmc_mk_cons(_inEqn, _eqs);
  _eqs = tmpMeta1;

  arrayUpdate(_outOrgEqns, _e, _eqs);
  _return: OMC_LABEL_UNUSED
  return _outOrgEqns;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_addOrgEqn(threadData_t *threadData, modelica_metatype _e, modelica_metatype _inEqn, modelica_metatype _inOrgEqns)
{
  modelica_integer tmp1;
  modelica_metatype _outOrgEqns = NULL;
  tmp1 = mmc_unbox_integer(_e);
  _outOrgEqns = omc_IndexReduction_addOrgEqn(threadData, tmp1, _inEqn, _inOrgEqns);
  /* skip box _outOrgEqns; array<list<BackendDAE.Equation>> */
  return _outOrgEqns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getDerStateOrder(threadData_t *threadData, modelica_metatype _dcr, modelica_metatype _inStateOrder)
{
  modelica_metatype _crlst = NULL;
  modelica_metatype _dht = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crlst has no default value.
  // _dht has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inStateOrder;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _dht = tmpMeta2;

  _crlst = omc_BaseHashTable_get(threadData, _dcr, _dht);
  _return: OMC_LABEL_UNUSED
  return _crlst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getStateOrder(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _inStateOrder)
{
  modelica_metatype _dcr = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dcr has no default value.
  // _ht has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inStateOrder;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _ht = tmpMeta2;

  _dcr = omc_BaseHashTable_get(threadData, _cr, _ht);
  _return: OMC_LABEL_UNUSED
  return _dcr;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_addStateOrder(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _dcr, modelica_metatype _inStateOrder)
{
  modelica_metatype _outStateOrder = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStateOrder has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inStateOrder;
    {
      modelica_metatype _ht = NULL;
      modelica_metatype _ht1 = NULL;
      modelica_metatype _dht = NULL;
      modelica_metatype _dht1 = NULL;
      modelica_metatype _crlst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ht has no default value.
      // _ht1 has no default value.
      // _dht has no default value.
      // _dht1 has no default value.
      // _crlst has no default value.
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
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _ht = tmpMeta6;
          _dht = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(0, _cr, _dcr);
          _ht1 = omc_BaseHashTable_add(threadData, tmpMeta8, _ht);

          tmp9 = 0; /* begin failure */
          MMC_TRY_INTERNAL(mmc_jumper)
            omc_IndexReduction_getDerStateOrder(threadData, _dcr, _inStateOrder);
            tmp9 = 1;
          goto goto_10;
          goto_10:;
          MMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp9) {goto goto_2;} /* end failure */

          tmpMeta11 = mmc_mk_cons(_cr, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta12 = mmc_mk_box2(0, _dcr, tmpMeta11);
          _dht1 = omc_BaseHashTable_add(threadData, tmpMeta12, _dht);
          tmpMeta13 = mmc_mk_box3(3, &BackendDAE_StateOrder_STATEORDER__desc, _ht1, _dht1);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _ht = tmpMeta14;
          _dht = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_box2(0, _cr, _dcr);
          _ht1 = omc_BaseHashTable_add(threadData, tmpMeta16, _ht);

          _crlst = omc_IndexReduction_getDerStateOrder(threadData, _dcr, _inStateOrder);

          tmpMeta17 = mmc_mk_cons(_cr, _crlst);
          tmpMeta18 = mmc_mk_box2(0, _dcr, tmpMeta17);
          _dht1 = omc_BaseHashTable_add(threadData, tmpMeta18, _dht);
          tmpMeta19 = mmc_mk_box3(3, &BackendDAE_StateOrder_STATEORDER__desc, _ht1, _dht1);
          tmpMeta1 = tmpMeta19;
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
  _outStateOrder = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outStateOrder;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_IndexReduction_dumpStates(threadData_t *threadData, modelica_metatype _state)
{
  modelica_string _outStr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStr has no default value.
  tmpMeta1 = stringAppend(intString(mmc_unbox_integer(omc_Util_tuple22(threadData, _state))),_OMC_LIT0);
  tmpMeta2 = stringAppend(tmpMeta1,omc_ComponentReferenceBasics_printComponentRefStr(threadData, omc_Util_tuple21(threadData, _state)));
  _outStr = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outStr;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_addStateOrderFinder(threadData_t *threadData, modelica_metatype _iVlst, modelica_metatype _iDerVlst, modelica_metatype _inVars)
{
  modelica_metatype _oVars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVars has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iVlst;
    tmp4_2 = _iDerVlst;
    {
      modelica_metatype _dcr = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _dvar = NULL;
      modelica_metatype _vlst = NULL;
      modelica_metatype _dvlst = NULL;
      modelica_metatype _vars = NULL;
      modelica_string _msg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dcr has no default value.
      // _var has no default value.
      // _dvar has no default value.
      // _vlst has no default value.
      // _dvlst has no default value.
      // _vars has no default value.
      // _msg has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inVars;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,3) == 0) goto tmp3_end;
          
          _dcr = tmpMeta8;
          _dvlst = tmpMeta7;
          _var = tmpMeta9;
          _vlst = tmpMeta10;
          /* Pattern matching succeeded */
          _var = omc_BackendVariable_setStateDerivative(threadData, _var, mmc_mk_some(_dcr));

          _vars = omc_BackendVariable_addVar(threadData, _var, _inVars);
          /* Tail recursive call */
          _iVlst = _vlst;
          _iDerVlst = _dvlst;
          _inVars = _vars;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_2);
          tmpMeta15 = MMC_CDR(tmp4_2);
          _var = tmpMeta12;
          _dvar = tmpMeta14;
          /* Pattern matching succeeded */
          tmpMeta16 = stringAppend(_OMC_LIT1,omc_BackendDump_varString(threadData, _var));
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT2);
          tmpMeta18 = stringAppend(tmpMeta17,omc_BackendDump_varString(threadData, _dvar));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT3);
          _msg = tmpMeta19;

          tmpMeta20 = mmc_mk_cons(_msg, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta20);
          goto goto_2;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT9);
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
  _oVars = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_traverseFindStateOrder(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inVars, modelica_metatype *out_outVars)
{
  modelica_metatype _outEq = NULL;
  modelica_metatype _outVars = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEq has no default value.
  // _outVars has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inEq;
    tmp4_2 = _inVars;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _dcr = NULL;
      modelica_metatype _vlst = NULL;
      modelica_metatype _dvlst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _v has no default value.
      // _cr has no default value.
      // _dcr has no default value.
      // _vlst has no default value.
      // _dvlst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          
          _e = tmp4_1;
          _v = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta8 = omc_BackendEquation_derivativeEquation(threadData, _e, &tmpMeta6, NULL, NULL, &tmp7);
          _cr = tmpMeta8;
          if (0 /* false */ != tmp7) goto goto_2;
          _dcr = tmpMeta6;

          _vlst = omc_BackendVariable_getVar(threadData, _cr, _v, NULL);

          _dvlst = omc_BackendVariable_getVar(threadData, _dcr, _v, NULL);

          _v = omc_IndexReduction_addStateOrderFinder(threadData, _vlst, _dvlst, _v);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _v;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEq;
          tmpMeta[0+1] = _inVars;
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
  _outEq = tmpMeta[0+0];
  _outVars = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outVars) { *out_outVars = _outVars; }
  return _outEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_findStateOrderWork(threadData_t *threadData, modelica_metatype _inSystem)
{
  modelica_metatype _outSystem = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outSystem = _inSystem;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outSystem), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_BackendEquation_traverseEquationArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSystem), 3))), boxvar_IndexReduction_traverseFindStateOrder, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSystem), 2))));
  _outSystem = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outSystem;
}

DLLDirection
modelica_metatype omc_IndexReduction_findStateOrder(threadData_t *threadData, modelica_metatype _inDAE)
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

  _systs = omc_List_map(threadData, _systs, boxvar_IndexReduction_findStateOrderWork);

  tmpMeta4 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systs, _shared);
  _outDAE = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_setSetAStart(threadData_t *threadData, modelica_metatype _iVars, modelica_integer _n, modelica_integer _r, modelica_integer _nCandidates, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iVars;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _rest = NULL;
      modelica_integer _n1;
      modelica_integer _r1;
      modelica_integer _start;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _rest has no default value.
      // _n1 has no default value.
      // _r1 has no default value.
      // _start has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = listReverse(_iAcc);
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
          _v = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _start = ((_n == _r)?((modelica_integer) 1):((modelica_integer) 0));

          tmpMeta8 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_start));
          _v = omc_BackendVariable_setVarStartValue(threadData, _v, tmpMeta8);

          _n1 = ((_n == _nCandidates)?((modelica_integer) 1):((modelica_integer) 1) + _n);

          _r1 = ((_n == _nCandidates)?((modelica_integer) 1) + _r:_r);
          tmpMeta9 = mmc_mk_cons(_v, _iAcc);
          /* Tail recursive call */
          _iVars = _rest;
          _n = _n1;
          _r = _r1;
          _iAcc = tmpMeta9;
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
  _oAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_setSetAStart(threadData_t *threadData, modelica_metatype _iVars, modelica_metatype _n, modelica_metatype _r, modelica_metatype _nCandidates, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _oAcc = NULL;
  tmp1 = mmc_unbox_integer(_n);
  tmp2 = mmc_unbox_integer(_r);
  tmp3 = mmc_unbox_integer(_nCandidates);
  _oAcc = omc_IndexReduction_setSetAStart(threadData, _iVars, tmp1, tmp2, tmp3, _iAcc);
  /* skip box _oAcc; list<BackendDAE.Var> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getSetVars(threadData_t *threadData, modelica_integer _index, modelica_integer _setsize, modelica_integer _nCandidates, modelica_integer _nCEqns, modelica_integer _level, modelica_metatype *out_crset, modelica_metatype *out_oSetVars, modelica_metatype *out_ocrA, modelica_metatype *out_oAVars, modelica_metatype *out_realtp, modelica_metatype *out_ocrJ, modelica_metatype *out_oJVars)
{
  modelica_metatype _crstates = NULL;
  modelica_metatype _crset = NULL;
  modelica_metatype _oSetVars = NULL;
  modelica_metatype _ocrA = NULL;
  modelica_metatype _oAVars = NULL;
  modelica_metatype _realtp = NULL;
  modelica_metatype _ocrJ = NULL;
  modelica_metatype _oJVars = NULL;
  modelica_metatype _set = NULL;
  modelica_metatype _tp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_boolean tmp6;
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
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_boolean tmp25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_boolean tmp32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crstates has no default value.
  // _crset has no default value.
  // _oSetVars has no default value.
  // _ocrA has no default value.
  // _oAVars has no default value.
  // _realtp has no default value.
  // _ocrJ has no default value.
  // _oJVars has no default value.
  // _set has no default value.
  // _tp has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT10,intString(_index));
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _set = omc_ComponentReferenceBasics_makeCrefIdent(threadData, tmpMeta1, _OMC_LIT14, tmpMeta2);

  tmp6 = (modelica_boolean)(_setsize > ((modelica_integer) 1));
  if(tmp6)
  {
    tmpMeta4 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_setsize));
    tmpMeta3 = mmc_mk_cons(tmpMeta4, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta5 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta3);
    tmpMeta7 = tmpMeta5;
  }
  else
  {
    tmpMeta7 = _OMC_LIT15;
  }
  _tp = tmpMeta7;

  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _crstates = omc_ComponentReference_joinCrefs(threadData, _set, omc_ComponentReferenceBasics_makeCrefIdent(threadData, _OMC_LIT16, _tp, tmpMeta8));

  _oSetVars = omc_BackendVariable_generateArrayVar(threadData, _crstates, _OMC_LIT17, _tp, mmc_mk_none());

  _oSetVars = omc_List_map1(threadData, _oSetVars, boxvar_BackendVariable_setVarFixed, mmc_mk_boolean(0 /* false */));

  _crset = omc_List_map(threadData, _oSetVars, boxvar_BackendVariable_varCref);

  tmp16 = (modelica_boolean)(_setsize > ((modelica_integer) 1));
  if(tmp16)
  {
    tmpMeta10 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_setsize));
    tmpMeta11 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_nCandidates));
    tmpMeta9 = mmc_mk_cons(tmpMeta10, mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil)));
    tmpMeta12 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT18, tmpMeta9);
    tmpMeta17 = tmpMeta12;
  }
  else
  {
    tmpMeta14 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_nCandidates));
    tmpMeta13 = mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta15 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT18, tmpMeta13);
    tmpMeta17 = tmpMeta15;
  }
  _tp = tmpMeta17;

  tmp25 = (modelica_boolean)(_setsize > ((modelica_integer) 1));
  if(tmp25)
  {
    tmpMeta19 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_setsize));
    tmpMeta20 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_nCandidates));
    tmpMeta18 = mmc_mk_cons(tmpMeta19, mmc_mk_cons(tmpMeta20, MMC_REFSTRUCTLIT(mmc_nil)));
    tmpMeta21 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta18);
    tmpMeta26 = tmpMeta21;
  }
  else
  {
    tmpMeta23 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_nCandidates));
    tmpMeta22 = mmc_mk_cons(tmpMeta23, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta24 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta22);
    tmpMeta26 = tmpMeta24;
  }
  _realtp = tmpMeta26;

  tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
  _ocrA = omc_ComponentReference_joinCrefs(threadData, _set, omc_ComponentReferenceBasics_makeCrefIdent(threadData, _OMC_LIT19, _tp, tmpMeta27));

  _oAVars = omc_BackendVariable_generateArrayVar(threadData, _ocrA, _OMC_LIT20, _tp, mmc_mk_none());

  _oAVars = omc_List_map1(threadData, _oAVars, boxvar_BackendVariable_setVarFixed, mmc_mk_boolean(1 /* true */));

  _oAVars = omc_List_map1(threadData, _oAVars, boxvar_BackendVariable_setVarStartValue, _OMC_LIT21);

  tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
  _oAVars = omc_IndexReduction_setSetAStart(threadData, _oAVars, ((modelica_integer) 1), ((modelica_integer) 1), _nCandidates, tmpMeta28);

  tmp32 = (modelica_boolean)(_nCEqns > ((modelica_integer) 1));
  if(tmp32)
  {
    tmpMeta30 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_nCEqns));
    tmpMeta29 = mmc_mk_cons(tmpMeta30, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta31 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta29);
    tmpMeta33 = tmpMeta31;
  }
  else
  {
    tmpMeta33 = _OMC_LIT15;
  }
  _tp = tmpMeta33;

  tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
  _ocrJ = omc_ComponentReference_joinCrefs(threadData, _set, omc_ComponentReferenceBasics_makeCrefIdent(threadData, _OMC_LIT22, _tp, tmpMeta34));

  _oJVars = omc_BackendVariable_generateArrayVar(threadData, _ocrJ, _OMC_LIT20, _tp, mmc_mk_none());

  _oJVars = omc_List_map1(threadData, _oJVars, boxvar_BackendVariable_setVarFixed, mmc_mk_boolean(0 /* false */));
  _return: OMC_LABEL_UNUSED
  if (out_crset) { *out_crset = _crset; }
  if (out_oSetVars) { *out_oSetVars = _oSetVars; }
  if (out_ocrA) { *out_ocrA = _ocrA; }
  if (out_oAVars) { *out_oAVars = _oAVars; }
  if (out_realtp) { *out_realtp = _realtp; }
  if (out_ocrJ) { *out_ocrJ = _ocrJ; }
  if (out_oJVars) { *out_oJVars = _oJVars; }
  return _crstates;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getSetVars(threadData_t *threadData, modelica_metatype _index, modelica_metatype _setsize, modelica_metatype _nCandidates, modelica_metatype _nCEqns, modelica_metatype _level, modelica_metatype *out_crset, modelica_metatype *out_oSetVars, modelica_metatype *out_ocrA, modelica_metatype *out_oAVars, modelica_metatype *out_realtp, modelica_metatype *out_ocrJ, modelica_metatype *out_oJVars)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype _crstates = NULL;
  tmp1 = mmc_unbox_integer(_index);
  tmp2 = mmc_unbox_integer(_setsize);
  tmp3 = mmc_unbox_integer(_nCandidates);
  tmp4 = mmc_unbox_integer(_nCEqns);
  tmp5 = mmc_unbox_integer(_level);
  _crstates = omc_IndexReduction_getSetVars(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, out_crset, out_oSetVars, out_ocrA, out_oAVars, out_realtp, out_ocrJ, out_oJVars);
  /* skip box _crstates; DAE.ComponentRef */
  /* skip box _crset; list<DAE.ComponentRef> */
  /* skip box _oSetVars; list<BackendDAE.Var> */
  /* skip box _ocrA; DAE.ComponentRef */
  /* skip box _oAVars; list<BackendDAE.Var> */
  /* skip box _realtp; DAE.Type */
  /* skip box _ocrJ; DAE.ComponentRef */
  /* skip box _oJVars; list<BackendDAE.Var> */
  return _crstates;
}

PROTECTED_FUNCTION_STATIC void omc_IndexReduction_debugdifferentiateEqns(threadData_t *threadData, modelica_metatype _inTpl)
{
  modelica_metatype _a = NULL;
  modelica_metatype _b = NULL;
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
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _a has no default value.
  // _b has no default value.
  // _idx has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _a = tmpMeta2;
  _b = tmpMeta3;
  _idx = tmp5  /* pattern as ty=Integer */;

  tmpMeta6 = stringAppend(_OMC_LIT23,intString(_idx));
  tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT24);
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT25);
  tmpMeta9 = stringAppend(tmpMeta8,omc_BackendDump_equationString(threadData, _a));
  tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT3);
  tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT26);
  tmpMeta12 = stringAppend(tmpMeta11,omc_BackendDump_equationString(threadData, _b));
  tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT27);
  fputs(MMC_STRINGDATA(tmpMeta13),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_increaseDifferentiation(threadData_t *threadData, modelica_metatype _inVarLst, modelica_metatype _iVarIndxs, modelica_integer _counter, modelica_metatype _inVars, modelica_metatype _iChangedVars, modelica_metatype *out_oChangedVars)
{
  modelica_metatype _oVars = NULL;
  modelica_metatype _oChangedVars = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVars has no default value.
  // _oChangedVars has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inVarLst;
    tmp4_2 = _iVarIndxs;
    {
      modelica_metatype _dcr = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _vars = NULL;
      modelica_integer _diffcounter;
      modelica_boolean _b;
      modelica_boolean _natural;
      modelica_integer _i;
      modelica_metatype _ilst = NULL;
      modelica_metatype _changedVars = NULL;
      modelica_metatype _vlst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dcr has no default value.
      // _var has no default value.
      // _vars has no default value.
      // _diffcounter has no default value.
      // _b has no default value.
      // _natural has no default value.
      // _i has no default value.
      // _ilst has no default value.
      // _changedVars has no default value.
      // _vlst has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inVars;
          tmpMeta[0+1] = _iChangedVars;
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
          modelica_integer tmp13;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          tmp10 = mmc_unbox_integer(tmpMeta8);
          _var = tmpMeta6;
          _vlst = tmpMeta7;
          _i = tmp10  /* pattern as ty=Integer */;
          _ilst = tmpMeta9;
          /* Pattern matching succeeded */
          if(omc_BackendVariable_isStateVar(threadData, _var))
          {
            /* Pattern-matching assignment */
            tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3)));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,3) == 0) goto goto_2;
            tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
            tmp13 = mmc_unbox_integer(tmpMeta12);
            tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
            tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 4));
            tmp16 = mmc_unbox_integer(tmpMeta15);
            _diffcounter = tmp13  /* pattern as ty=Integer */;
            _dcr = tmpMeta14;
            _natural = tmp16  /* pattern as ty=Boolean */;
          }
          else
          {
            /* Pattern-matching assignment */
            tmpMeta17 = _OMC_LIT28;
            tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 1));
            tmp19 = mmc_unbox_integer(tmpMeta18);
            tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
            tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 3));
            tmp22 = mmc_unbox_integer(tmpMeta21);
            _diffcounter = tmp19  /* pattern as ty=Integer */;
            _dcr = tmpMeta20;
            _natural = tmp22  /* pattern as ty=Boolean */;
          }

          _b = (_counter > _diffcounter);

          _diffcounter = (_b?_counter:_diffcounter);

          tmpMeta23 = mmc_mk_box4(4, &BackendDAE_VarKind_STATE__desc, mmc_mk_integer(_diffcounter), _dcr, mmc_mk_boolean(_natural));
          _var = omc_BackendVariable_setVarKind(threadData, _var, tmpMeta23);

          _vars = (_b?omc_BackendVariable_addVar(threadData, _var, _inVars):_inVars);

          _changedVars = omc_List_consOnTrue(threadData, _b, mmc_mk_integer(_i), _iChangedVars);
          /* Tail recursive call */
          _inVarLst = _vlst;
          _iVarIndxs = _ilst;
          _inVars = _vars;
          _iChangedVars = _changedVars;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT29),stdout);

          omc_BackendDump_printVar(threadData, listHead(_inVarLst));
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
  _oVars = tmpMeta[0+0];
  _oChangedVars = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oChangedVars) { *out_oChangedVars = _oChangedVars; }
  return _oVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_increaseDifferentiation(threadData_t *threadData, modelica_metatype _inVarLst, modelica_metatype _iVarIndxs, modelica_metatype _counter, modelica_metatype _inVars, modelica_metatype _iChangedVars, modelica_metatype *out_oChangedVars)
{
  modelica_integer tmp1;
  modelica_metatype _oVars = NULL;
  tmp1 = mmc_unbox_integer(_counter);
  _oVars = omc_IndexReduction_increaseDifferentiation(threadData, _inVarLst, _iVarIndxs, tmp1, _inVars, _iChangedVars, out_oChangedVars);
  /* skip box _oVars; BackendDAE.Variables */
  /* skip box _oChangedVars; list<#Integer> */
  return _oVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_algebraicState(threadData_t *threadData, modelica_metatype _inVarLst, modelica_metatype _inIndxLst, modelica_metatype _inVars, modelica_metatype _iChangedVars, modelica_metatype *out_oChangedVars)
{
  modelica_metatype _oVars = NULL;
  modelica_metatype _oChangedVars = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVars has no default value.
  // _oChangedVars has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inVarLst;
    tmp4_2 = _inIndxLst;
    {
      modelica_metatype _v = NULL;
      modelica_integer _index;
      modelica_metatype _vlst = NULL;
      modelica_metatype _ilst = NULL;
      modelica_metatype _vars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _index has no default value.
      // _vlst has no default value.
      // _ilst has no default value.
      // _vars has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inVars;
          tmpMeta[0+1] = _iChangedVars;
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
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,3) == 0) goto tmp3_end;
          
          _ilst = tmpMeta7;
          _vlst = tmpMeta9;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inVarLst = _vlst;
          _inIndxLst = _ilst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_2);
          tmpMeta14 = MMC_CDR(tmp4_2);
          tmp15 = mmc_unbox_integer(tmpMeta13);
          _v = tmpMeta11;
          _vlst = tmpMeta12;
          _index = tmp15  /* pattern as ty=Integer */;
          _ilst = tmpMeta14;
          /* Pattern matching succeeded */
          _v = omc_BackendVariable_setVarKind(threadData, _v, _OMC_LIT17);

          if((!omc_BackendVariable_varHasStateSelect(threadData, _v)))
          {
            _v = omc_BackendVariable_setVarStateSelect(threadData, _v, _OMC_LIT30);
          }

          _vars = omc_BackendVariable_addVar(threadData, _v, _inVars);
          tmpMeta16 = mmc_mk_cons(mmc_mk_integer(_index), _iChangedVars);
          /* Tail recursive call */
          _inVarLst = _vlst;
          _inIndxLst = _ilst;
          _inVars = _vars;
          _iChangedVars = tmpMeta16;
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
  _oVars = tmpMeta[0+0];
  _oChangedVars = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oChangedVars) { *out_oChangedVars = _oChangedVars; }
  return _oVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_changeDerVariablesToStatesFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _ilst = NULL;
      modelica_metatype _changedVars = NULL;
      modelica_metatype _varlst = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_metatype _mt = NULL;
      modelica_metatype _eqns = NULL;
      modelica_integer _index;
      modelica_integer _eindx;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _cr has no default value.
      // _vars has no default value.
      // _ilst has no default value.
      // _changedVars has no default value.
      // _varlst has no default value.
      // _mapIncRowEqn has no default value.
      // _mt has no default value.
      // _eqns has no default value.
      // _index has no default value.
      // _eindx has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          _e = tmp4_1;
          _cr = tmpMeta11;
          _vars = tmpMeta12;
          _eqns = tmpMeta13;
          _ilst = tmpMeta14;
          _eindx = tmp16  /* pattern as ty=Integer */;
          _mapIncRowEqn = tmpMeta17;
          _mt = tmpMeta18;
          /* Pattern matching succeeded */
          _varlst = omc_BackendVariable_getVar(threadData, _cr, _vars ,&_changedVars);

          _vars = omc_IndexReduction_algebraicState(threadData, _varlst, _changedVars, _vars, _ilst ,&_ilst);
          tmpMeta19 = mmc_mk_box6(0, _vars, _eqns, _ilst, mmc_mk_integer(_eindx), _mapIncRowEqn, _mt);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta19;
          goto tmp3_done;
        }
        case 1: {
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
          modelica_integer tmp35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,1,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (3 != MMC_STRLEN(tmpMeta21) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta21)) != 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta22)) goto tmp3_end;
          tmpMeta23 = MMC_CAR(tmpMeta22);
          tmpMeta24 = MMC_CDR(tmpMeta22);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,13,3) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,1,1) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
          if (3 != MMC_STRLEN(tmpMeta26) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta26)) != 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
          if (listEmpty(tmpMeta27)) goto tmp3_end;
          tmpMeta28 = MMC_CAR(tmpMeta27);
          tmpMeta29 = MMC_CDR(tmpMeta27);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,6,2) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
          if (!listEmpty(tmpMeta29)) goto tmp3_end;
          if (!listEmpty(tmpMeta24)) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp35 = mmc_unbox_integer(tmpMeta34);
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          _e = tmpMeta28;
          _cr = tmpMeta30;
          _vars = tmpMeta31;
          _eqns = tmpMeta32;
          _ilst = tmpMeta33;
          _eindx = tmp35  /* pattern as ty=Integer */;
          _mapIncRowEqn = tmpMeta36;
          _mt = tmpMeta37;
          /* Pattern matching succeeded */
          _varlst = omc_BackendVariable_getVar(threadData, _cr, _vars ,&_changedVars);

          _vars = omc_IndexReduction_increaseDifferentiation(threadData, _varlst, _changedVars, ((modelica_integer) 2), _vars, _ilst ,&_ilst);
          tmpMeta38 = mmc_mk_cons(_e, mmc_mk_cons(_OMC_LIT33, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta39 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT32, tmpMeta38, _OMC_LIT36);
          tmpMeta40 = mmc_mk_box6(0, _vars, _eqns, _ilst, mmc_mk_integer(_eindx), _mapIncRowEqn, _mt);
          tmpMeta[0+0] = tmpMeta39;
          tmpMeta[0+1] = tmpMeta40;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_integer tmp50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_integer tmp55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,1,1) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 2));
          if (3 != MMC_STRLEN(tmpMeta42) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta42)) != 0) goto tmp3_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta43)) goto tmp3_end;
          tmpMeta44 = MMC_CAR(tmpMeta43);
          tmpMeta45 = MMC_CDR(tmpMeta43);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,6,2) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 2));
          if (listEmpty(tmpMeta45)) goto tmp3_end;
          tmpMeta47 = MMC_CAR(tmpMeta45);
          tmpMeta48 = MMC_CDR(tmpMeta45);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,0,1) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 2));
          tmp50 = mmc_unbox_integer(tmpMeta49);
          if (!listEmpty(tmpMeta48)) goto tmp3_end;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp55 = mmc_unbox_integer(tmpMeta54);
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          _e = tmp4_1;
          _cr = tmpMeta46;
          _index = tmp50  /* pattern as ty=Integer */;
          _vars = tmpMeta51;
          _eqns = tmpMeta52;
          _ilst = tmpMeta53;
          _eindx = tmp55  /* pattern as ty=Integer */;
          _mapIncRowEqn = tmpMeta56;
          _mt = tmpMeta57;
          /* Pattern matching succeeded */
          _varlst = omc_BackendVariable_getVar(threadData, _cr, _vars ,&_changedVars);

          _vars = omc_IndexReduction_increaseDifferentiation(threadData, _varlst, _changedVars, _index, _vars, _ilst ,&_ilst);
          tmpMeta58 = mmc_mk_box6(0, _vars, _eqns, _ilst, mmc_mk_integer(_eindx), _mapIncRowEqn, _mt);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta58;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTpl;
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
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

DLLDirection
modelica_metatype omc_IndexReduction_splitEqnsinConstraintAndOther(threadData_t *threadData, modelica_metatype _inVarLst, modelica_metatype _inEqnsLst, modelica_metatype _shared, modelica_metatype *out_outOEqnsLst)
{
  modelica_metatype _outCEqnsLst = NULL;
  modelica_metatype _outOEqnsLst = NULL;
  modelica_metatype _eqnslst = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _syst = NULL;
  modelica_metatype _me = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype _m = NULL;
  modelica_integer _ne;
  modelica_integer _nv;
  modelica_metatype _vec1 = NULL;
  modelica_metatype _vec2 = NULL;
  modelica_metatype _unassigned = NULL;
  modelica_metatype _assigned = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCEqnsLst has no default value.
  // _outOEqnsLst has no default value.
  // _eqnslst has no default value.
  // _vars has no default value.
  // _eqns has no default value.
  // _syst has no default value.
  // _me has no default value.
  // _mapEqnIncRow has no default value.
  // _mapIncRowEqn has no default value.
  // _m has no default value.
  // _ne has no default value.
  // _nv has no default value.
  // _vec1 has no default value.
  // _vec2 has no default value.
  // _unassigned has no default value.
  // _assigned has no default value.
  _vars = omc_BackendVariable_listVar1(threadData, _inVarLst);

  _eqnslst = omc_InlineArrayEquations_getScalarArrayEqns(threadData, _inEqnsLst, NULL);

  _eqns = omc_BackendEquation_listEquation(threadData, _eqnslst);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _syst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta1, _OMC_LIT37, omc_BackendEquation_emptyEqns(threadData));

  _me = omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _syst, _shared, 0 /* false */ ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

  _m = omc_IndexReduction_adjacencyMatrixfromEnhancedStrict(threadData, _me, _vars);

  _nv = omc_BackendVariable_varsSize(threadData, _vars);

  _ne = omc_BackendEquation_equationArraySize(threadData, _eqns);

  _vec1 = arrayCreate(_nv, mmc_mk_integer(((modelica_integer) -1)));

  _vec2 = arrayCreate(_ne, mmc_mk_integer(((modelica_integer) -1)));

  omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _nv, _ne, _m);

  omc_BackendDAEEXT_matching(threadData, _nv, _ne, ((modelica_integer) 5), ((modelica_integer) -1), 1.0, ((modelica_integer) 1));

  omc_BackendDAEEXT_getAssignment(threadData, _vec2, _vec1);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _unassigned = omc_Matching_getUnassigned(threadData, _ne, _vec2, tmpMeta2);

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _assigned = omc_Matching_getAssigned(threadData, _ne, _vec2, tmpMeta3);

  _unassigned = omc_List_map1r(threadData, _unassigned, boxvar_arrayGet, _mapIncRowEqn);

  _unassigned = omc_List_uniqueIntN(threadData, _unassigned, _ne);

  _outCEqnsLst = omc_BackendEquation_getList(threadData, _unassigned, _eqns);

  _assigned = omc_List_map1r(threadData, _assigned, boxvar_arrayGet, _mapIncRowEqn);

  _assigned = omc_List_uniqueIntN(threadData, _assigned, _ne);

  _outOEqnsLst = omc_BackendEquation_getList(threadData, _assigned, _eqns);
  _return: OMC_LABEL_UNUSED
  if (out_outOEqnsLst) { *out_outOEqnsLst = _outOEqnsLst; }
  return _outCEqnsLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceDummyDerivativesVar(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inHt, modelica_metatype *out_outHt)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outHt = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outHt has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inHt;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _v1 = NULL;
      modelica_metatype _ht = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _attr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _v1 has no default value.
      // _ht has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _attr has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          
          _v = tmp4_1;
          _e = tmpMeta7;
          _attr = tmpMeta8;
          _ht = tmp4_2;
          /* Pattern matching succeeded */
          _e1 = omc_Expression_traverseExpBottomUp(threadData, _e, boxvar_IndexReduction_replaceDummyDerivativesExp, _ht, NULL);

          _v1 = omc_BackendVariable_setBindExp(threadData, _v, mmc_mk_some(_e1));

          tmpMeta9 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDummyDerivativesExp, _ht);
          _attr = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, _attr, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta9, NULL);

          _v1 = omc_BackendVariable_setVarAttributes(threadData, _v1, _attr);
          tmpMeta[0+0] = _v1;
          tmpMeta[0+1] = _ht;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          
          _v = tmp4_1;
          _attr = tmpMeta10;
          _ht = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDummyDerivativesExp, _ht);
          _attr = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, _attr, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta11, NULL);

          _v1 = omc_BackendVariable_setVarAttributes(threadData, _v, _attr);
          tmpMeta[0+0] = _v1;
          tmpMeta[0+1] = _ht;
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
  _outHt = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outHt) { *out_outHt = _outHt; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceDummyDerivatives(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _ht, modelica_metatype _inShared, modelica_metatype *out_outShared)
{
  modelica_metatype _outSyst = NULL;
  modelica_metatype _outShared = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outSyst = _inSyst;
  _outShared = _inShared;
  omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outShared), 5))), boxvar_IndexReduction_replaceDummyDerivativesVar, _ht, NULL);

  omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outShared), 2))), boxvar_IndexReduction_replaceDummyDerivativesVar, _ht, NULL);

  tmpMeta1 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDummyDerivativesExp, _ht);
  omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outShared), 6))), boxvar_Expression_traverseSubexpressionsHelper, tmpMeta1);

  tmpMeta2 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDummyDerivativesExp, _ht);
  omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSyst), 10))), boxvar_Expression_traverseSubexpressionsHelper, tmpMeta2);

  tmpMeta3 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDummyDerivativesExp, _ht);
  omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outShared), 7))), boxvar_Expression_traverseSubexpressionsHelper, tmpMeta3);
  _return: OMC_LABEL_UNUSED
  if (out_outShared) { *out_outShared = _outShared; }
  return _outSyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceDummyDerivativesExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iht, modelica_metatype *out_ht)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _ht has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _iht;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _cr = NULL;
      modelica_integer _i;
      modelica_string _msg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _cr has no default value.
      // _i has no default value.
      // _msg has no default value.
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
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta10);
          tmpMeta13 = MMC_CDR(tmpMeta10);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,0,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          if (!listEmpty(tmpMeta13)) goto tmp3_end;
          
          _cr = tmpMeta11;
          _i = tmp15  /* pattern as ty=Integer */;
          _ht = tmp4_2;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta16 = mmc_mk_box2(0, _cr, mmc_mk_integer(_i));
          _e = omc_BaseHashTable_get(threadData, tmpMeta16, _ht);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _ht;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,1,1) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          if (3 != MMC_STRLEN(tmpMeta18) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta18)) != 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta19)) goto tmp3_end;
          tmpMeta20 = MMC_CAR(tmpMeta19);
          tmpMeta21 = MMC_CDR(tmpMeta19);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,6,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (!listEmpty(tmpMeta21)) goto tmp3_end;
          
          _cr = tmpMeta22;
          _ht = tmp4_2;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta23 = mmc_mk_box2(0, _cr, mmc_mk_integer(((modelica_integer) 1)));
          _e = omc_BaseHashTable_get(threadData, tmpMeta23, _ht);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _ht;
          goto tmp3_done;
        }
        case 2: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,1,1) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          if (3 != MMC_STRLEN(tmpMeta25) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta25)) != 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta26)) goto tmp3_end;
          tmpMeta27 = MMC_CAR(tmpMeta26);
          tmpMeta28 = MMC_CDR(tmpMeta26);
          if (listEmpty(tmpMeta28)) goto tmp3_end;
          tmpMeta29 = MMC_CAR(tmpMeta28);
          tmpMeta30 = MMC_CDR(tmpMeta28);
          
          _e = tmp4_1;
          _ht = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta31 = stringAppend(_OMC_LIT38,omc_ExpressionBasics_printExpStr(threadData, _e));
          tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT39);
          _msg = tmpMeta32;

          tmpMeta33 = mmc_mk_cons(_msg, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT42, tmpMeta33);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _ht;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _iht;
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
  _outExp = tmpMeta[0+0];
  _ht = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_ht) { *out_ht = _ht; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceFirstOrderDerivativesExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iht, modelica_metatype *out_ht)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _ht has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _iht;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _cr has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta6;
          _ht = tmp4_2;
          /* Pattern matching succeeded */
          _e = omc_BaseHashTable_get(threadData, _cr, _ht);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _ht;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _iht;
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
  _ht = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_ht) { *out_ht = _ht; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_crefPrefixDerN(threadData_t *threadData, modelica_integer _n, modelica_metatype _iName, modelica_metatype *out_oDerName)
{
  modelica_metatype _oName = NULL;
  modelica_metatype _oDerName = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oName has no default value.
  // _oDerName has no default value.
  
  
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = _n;
    {
      modelica_metatype _dername = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dername has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!(_n > ((modelica_integer) 0)))) goto tmp3_end;
          _dername = omc_ComponentReference_crefPrefixDer(threadData, _iName);
          tmpMeta[0+0] = _iName;
          tmpMeta[0+1] = _dername;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          _dername = omc_ComponentReference_crefPrefixDer(threadData, _iName);
          /* Tail recursive call */
          _n = ((modelica_integer) -1) + _n;
          _iName = _dername;
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
  _oName = tmpMeta[0+0];
  _oDerName = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oDerName) { *out_oDerName = _oDerName; }
  return _oName;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_crefPrefixDerN(threadData_t *threadData, modelica_metatype _n, modelica_metatype _iName, modelica_metatype *out_oDerName)
{
  modelica_integer tmp1;
  modelica_metatype _oName = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _oName = omc_IndexReduction_crefPrefixDerN(threadData, tmp1, _iName, out_oDerName);
  /* skip box _oName; DAE.ComponentRef */
  /* skip box _oDerName; DAE.ComponentRef */
  return _oName;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_makeDummyVarandDummyDerivative(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _level, modelica_metatype _inTpl)
{
  modelica_metatype _oTpl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTpl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _ht = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _name = NULL;
      modelica_metatype _dummyderName = NULL;
      modelica_metatype _dir = NULL;
      modelica_metatype _prl = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _dim = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _odattr = NULL;
      modelica_metatype _ts = NULL;
      modelica_metatype _hideResult = NULL;
      modelica_metatype _dattr = NULL;
      modelica_metatype _comment = NULL;
      modelica_metatype _ct = NULL;
      modelica_metatype _dummy_state = NULL;
      modelica_metatype _dummy_derstate = NULL;
      modelica_integer _diffindex;
      modelica_integer _dn;
      modelica_metatype _kind = NULL;
      modelica_string _msg = NULL;
      modelica_metatype _io = NULL;
      modelica_boolean _e;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ht has no default value.
      // _vars has no default value.
      // _name has no default value.
      // _dummyderName has no default value.
      // _dir has no default value.
      // _prl has no default value.
      // _tp has no default value.
      // _dim has no default value.
      // _source has no default value.
      // _odattr has no default value.
      // _ts has no default value.
      // _hideResult has no default value.
      // _dattr has no default value.
      // _comment has no default value.
      // _ct has no default value.
      // _dummy_state has no default value.
      // _dummy_derstate has no default value.
      // _diffindex has no default value.
      // _dn has no default value.
      // _kind has no default value.
      // _msg has no default value.
      // _io has no default value.
      // _e has no default value.
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
          modelica_integer tmp9;
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
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 19));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _name = tmpMeta6;
          _diffindex = tmp9  /* pattern as ty=Integer */;
          _dir = tmpMeta10;
          _prl = tmpMeta11;
          _tp = tmpMeta12;
          _dim = tmpMeta13;
          _source = tmpMeta14;
          _ts = tmpMeta15;
          _hideResult = tmpMeta16;
          _comment = tmpMeta17;
          _ct = tmpMeta18;
          _io = tmpMeta19;
          _e = tmp21  /* pattern as ty=Boolean */;
          _vars = tmpMeta22;
          _ht = tmpMeta23;
          /* Pattern matching succeeded */
          _dn = modelica_integer_max((modelica_integer)(_diffindex - _level),(modelica_integer)(((modelica_integer) 0)));

          _name = omc_IndexReduction_crefPrefixDerN(threadData, _dn, _name ,&_dummyderName);

          _dattr = omc_BackendVariable_getVariableAttributefromType(threadData, _tp);

          _odattr = omc_DAEUtil_setFixedAttr(threadData, mmc_mk_some(_dattr), _OMC_LIT44);

          _odattr = omc_DAEUtil_setProtectedAttr(threadData, _odattr, omc_DAEUtil_getProtectedAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11)))));

          tmpMeta24 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _dummyderName, _OMC_LIT45, _OMC_LIT46, _prl, _tp, mmc_mk_none(), mmc_mk_none(), _dim, _source, _odattr, _ts, _hideResult, _comment, _ct, _io, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(_e));
          _dummy_derstate = tmpMeta24;

          _kind = ((_dn == ((modelica_integer) 0))?_OMC_LIT47:_OMC_LIT45);

          tmpMeta25 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _name, _kind, _dir, _prl, _tp, mmc_mk_none(), mmc_mk_none(), _dim, _source, _odattr, _ts, _hideResult, _comment, _ct, _io, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(_e));
          _dummy_state = tmpMeta25;

          _dummy_state = ((_dn == ((modelica_integer) 0))?_inVar:_dummy_state);

          _dummy_state = omc_BackendVariable_setVarKind(threadData, _dummy_state, _kind);

          _vars = omc_BackendVariable_addVar(threadData, _dummy_derstate, _vars);

          _vars = omc_BackendVariable_addVar(threadData, _dummy_state, _vars);

          _diffindex = ((modelica_integer) 1) + _dn;

          tmpMeta26 = mmc_mk_box2(0, _name, mmc_mk_integer(_diffindex));
          tmpMeta27 = mmc_mk_box2(0, tmpMeta26, omc_Expression_crefExp(threadData, _dummyderName));
          _ht = omc_BaseHashTable_add(threadData, tmpMeta27, _ht);
          tmpMeta28 = mmc_mk_box2(0, _vars, _ht);
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          
          /* Pattern matching succeeded */
          tmpMeta29 = stringAppend(_OMC_LIT48,omc_BackendDump_varString(threadData, _inVar));
          tmpMeta30 = stringAppend(tmpMeta29,_OMC_LIT39);
          _msg = tmpMeta30;

          tmpMeta31 = mmc_mk_cons(_msg, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta31);
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
  _oTpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oTpl;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_makeDummyVarandDummyDerivative(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _level, modelica_metatype _inTpl)
{
  modelica_integer tmp1;
  modelica_metatype _oTpl = NULL;
  tmp1 = mmc_unbox_integer(_level);
  _oTpl = omc_IndexReduction_makeDummyVarandDummyDerivative(threadData, _inVar, tmp1, _inTpl);
  /* skip box _oTpl; tuple<BackendDAE.Variables, tuple<array<list<tuple<tuple<DAE.ComponentRef, #Integer>, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<tuple<DAE.ComponentRef, #Integer>, DAE.Exp>>>>, #Integer, tuple<.HashTableCrIntToExp.FuncHashCref<function>(tuple<DAE.ComponentRef, #Integer> cr) => #Integer, .HashTableCrIntToExp.FuncCrefEqual<function>(tuple<DAE.ComponentRef, #Integer> cr1, tuple<DAE.ComponentRef, #Integer> cr2) => #Boolean, .HashTableCrIntToExp.FuncCrefStr<function>(tuple<DAE.ComponentRef, #Integer> cr) => String, .HashTableCrIntToExp.FuncExpStr<function>(DAE.Exp exp) => String>>> */
  return _oTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_addDummyStates(threadData_t *threadData, modelica_metatype _dummyStates, modelica_integer _level, modelica_metatype _repl, modelica_metatype _inSystem, modelica_metatype _iHt, modelica_metatype *out_oHt)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oHt = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _oHt has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _dummyStates;
    tmp4_2 = _inSystem;
    {
      modelica_metatype _ht = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _syst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ht has no default value.
      // _vars has no default value.
      // _syst has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inSystem;
          tmpMeta[0+1] = _iHt;
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
          
          _syst = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), _iHt);
          tmpMeta7 = omc_List_fold1(threadData, _dummyStates, boxvar_IndexReduction_makeDummyVarandDummyDerivative, mmc_mk_integer(_level), tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _vars = tmpMeta8;
          _ht = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _vars, boxvar_IndexReduction_replaceDummyDerivativesVar, _ht, NULL);
          _syst = tmpMeta10;

          tmpMeta11 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDummyDerivativesExp, _ht);
          omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), boxvar_Expression_traverseSubexpressionsHelper, tmpMeta11);

          tmpMeta12 = mmc_mk_box2(0, boxvar_IndexReduction_replaceFirstOrderDerivativesExp, _repl);
          omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), boxvar_Expression_traverseSubexpressionsHelper, tmpMeta12);
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _ht;
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
  _osyst = tmpMeta[0+0];
  _oHt = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oHt) { *out_oHt = _oHt; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_addDummyStates(threadData_t *threadData, modelica_metatype _dummyStates, modelica_metatype _level, modelica_metatype _repl, modelica_metatype _inSystem, modelica_metatype _iHt, modelica_metatype *out_oHt)
{
  modelica_integer tmp1;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_level);
  _osyst = omc_IndexReduction_addDummyStates(threadData, _dummyStates, tmp1, _repl, _inSystem, _iHt, out_oHt);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oHt; tuple<array<list<tuple<tuple<DAE.ComponentRef, #Integer>, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<tuple<DAE.ComponentRef, #Integer>, DAE.Exp>>>>, #Integer, tuple<.HashTableCrIntToExp.FuncHashCref<function>(tuple<DAE.ComponentRef, #Integer> cr) => #Integer, .HashTableCrIntToExp.FuncCrefEqual<function>(tuple<DAE.ComponentRef, #Integer> cr1, tuple<DAE.ComponentRef, #Integer> cr2) => #Boolean, .HashTableCrIntToExp.FuncCrefStr<function>(tuple<DAE.ComponentRef, #Integer> cr) => String, .HashTableCrIntToExp.FuncExpStr<function>(DAE.Exp exp) => String>> */
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1(threadData_t *threadData, modelica_integer _diffCount, modelica_integer _diffedCount, modelica_metatype _iOrigName, modelica_metatype _iName, modelica_metatype _inVar, modelica_metatype _vars, modelica_metatype _so, modelica_metatype _iVarLst, modelica_metatype _iHt, modelica_metatype *out_oHt)
{
  modelica_metatype _oVarLst = NULL;
  modelica_metatype _oHt = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVarLst has no default value.
  // _oHt has no default value.
  
  
  { /* match expression */
    modelica_integer tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _diffCount;
    tmp4_2 = _inVar;
    {
      modelica_metatype _ht = NULL;
      modelica_metatype _name = NULL;
      modelica_metatype _dir = NULL;
      modelica_metatype _prl = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _dim = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _odattr = NULL;
      modelica_metatype _ts = NULL;
      modelica_metatype _hideResult = NULL;
      modelica_metatype _dattr = NULL;
      modelica_metatype _comment = NULL;
      modelica_metatype _ct = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _io = NULL;
      modelica_boolean _encrypted;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ht has no default value.
      // _name has no default value.
      // _dir has no default value.
      // _prl has no default value.
      // _tp has no default value.
      // _dim has no default value.
      // _source has no default value.
      // _odattr has no default value.
      // _ts has no default value.
      // _hideResult has no default value.
      // _dattr has no default value.
      // _comment has no default value.
      // _ct has no default value.
      // _var has no default value.
      // _e has no default value.
      // _io has no default value.
      // _encrypted has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 != tmp4_1) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _iVarLst;
          tmpMeta[0+1] = _iHt;
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
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 9));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 12));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 13));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 14));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 15));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 16));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 19));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          _name = tmpMeta6;
          _dir = tmpMeta7;
          _prl = tmpMeta8;
          _tp = tmpMeta9;
          _dim = tmpMeta10;
          _source = tmpMeta11;
          _ts = tmpMeta12;
          _hideResult = tmpMeta13;
          _comment = tmpMeta14;
          _ct = tmpMeta15;
          _io = tmpMeta16;
          _encrypted = tmp18  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _name = omc_ComponentReference_crefPrefixDer(threadData, _iName);

          _e = omc_Expression_crefExp(threadData, _name);

          tmpMeta19 = mmc_mk_box2(0, _iOrigName, mmc_mk_integer(_diffedCount));
          tmpMeta20 = mmc_mk_box2(0, tmpMeta19, _e);
          _ht = omc_BaseHashTable_add(threadData, tmpMeta20, _iHt);

          _dattr = omc_BackendVariable_getVariableAttributefromType(threadData, _tp);

          _odattr = omc_DAEUtil_setFixedAttr(threadData, mmc_mk_some(_dattr), _OMC_LIT44);

          _odattr = omc_DAEUtil_setProtectedAttr(threadData, _odattr, omc_DAEUtil_getProtectedAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11)))));

          tmpMeta21 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _name, _OMC_LIT45, _dir, _prl, _tp, mmc_mk_none(), mmc_mk_none(), _dim, _source, _odattr, _ts, _hideResult, _comment, _ct, _io, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(_encrypted));
          _var = tmpMeta21;
          tmpMeta22 = mmc_mk_cons(_var, _iVarLst);
          /* Tail recursive call */
          _diffCount = ((modelica_integer) -1) + _diffCount;
          _diffedCount = ((modelica_integer) 1) + _diffedCount;
          _iName = _name;
          _iVarLst = tmpMeta22;
          _iHt = _ht;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT50);
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
  _oVarLst = tmpMeta[0+0];
  _oHt = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oHt) { *out_oHt = _oHt; }
  return _oVarLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1(threadData_t *threadData, modelica_metatype _diffCount, modelica_metatype _diffedCount, modelica_metatype _iOrigName, modelica_metatype _iName, modelica_metatype _inVar, modelica_metatype _vars, modelica_metatype _so, modelica_metatype _iVarLst, modelica_metatype _iHt, modelica_metatype *out_oHt)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oVarLst = NULL;
  tmp1 = mmc_unbox_integer(_diffCount);
  tmp2 = mmc_unbox_integer(_diffedCount);
  _oVarLst = omc_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1(threadData, tmp1, tmp2, _iOrigName, _iName, _inVar, _vars, _so, _iVarLst, _iHt, out_oHt);
  /* skip box _oVarLst; list<BackendDAE.Var> */
  /* skip box _oHt; tuple<array<list<tuple<tuple<DAE.ComponentRef, #Integer>, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<tuple<DAE.ComponentRef, #Integer>, DAE.Exp>>>>, #Integer, tuple<.HashTableCrIntToExp.FuncHashCref<function>(tuple<DAE.ComponentRef, #Integer> cr) => #Integer, .HashTableCrIntToExp.FuncCrefEqual<function>(tuple<DAE.ComponentRef, #Integer> cr1, tuple<DAE.ComponentRef, #Integer> cr2) => #Boolean, .HashTableCrIntToExp.FuncCrefStr<function>(tuple<DAE.ComponentRef, #Integer> cr) => String, .HashTableCrIntToExp.FuncExpStr<function>(DAE.Exp exp) => String>> */
  return _oVarLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_makeAllDummyVarandDummyDerivativeRepl(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_oTpl)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _oTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _so = NULL;
      modelica_metatype _ht = NULL;
      modelica_metatype _name = NULL;
      modelica_metatype _cr = NULL;
      modelica_boolean _natural;
      modelica_metatype _dir = NULL;
      modelica_metatype _prl = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _bind = NULL;
      modelica_metatype _tplExp = NULL;
      modelica_metatype _dim = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _ts = NULL;
      modelica_metatype _hideResult = NULL;
      modelica_metatype _comment = NULL;
      modelica_metatype _ct = NULL;
      modelica_metatype _var = NULL;
      modelica_integer _diffcount;
      modelica_metatype _varlst = NULL;
      modelica_metatype _io = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _so has no default value.
      // _ht has no default value.
      // _name has no default value.
      // _cr has no default value.
      // _natural has no default value.
      // _dir has no default value.
      // _prl has no default value.
      // _tp has no default value.
      // _bind has no default value.
      // _tplExp has no default value.
      // _dim has no default value.
      // _source has no default value.
      // _attr has no default value.
      // _ts has no default value.
      // _hideResult has no default value.
      // _comment has no default value.
      // _ct has no default value.
      // _var has no default value.
      // _diffcount has no default value.
      // _varlst has no default value.
      // _io has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,15) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 10));
          if (optionNone(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,4,0) == 0) goto tmp3_end;
          
          _var = tmp4_1;
          _diffcount = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_diffcount == ((modelica_integer) 1))) goto tmp3_end;
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _inTpl;
          goto tmp3_done;
        }
        case 1: {
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
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,1,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
          if (optionNone(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 4));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta18)) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,0,15) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 10));
          if (optionNone(tmpMeta20)) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,4,0) == 0) goto tmp3_end;
          
          _var = tmp4_1;
          _cr = tmpMeta15;
          _natural = tmp17  /* pattern as ty=Boolean */;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta22 = mmc_mk_box4(4, &BackendDAE_VarKind_STATE__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_some(_cr), mmc_mk_boolean(_natural));
          _var = omc_BackendVariable_setVarKind(threadData, _var, tmpMeta22);
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _inTpl;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
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
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,1,3) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 3));
          if (!optionNone(tmpMeta27)) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 4));
          tmp29 = mmc_unbox_integer(tmpMeta28);
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta30)) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,0,15) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 10));
          if (optionNone(tmpMeta32)) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,4,0) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _var = tmp4_1;
          _name = tmpMeta23;
          _diffcount = tmp26  /* pattern as ty=Integer */;
          _natural = tmp29  /* pattern as ty=Boolean */;
          _vars = tmpMeta34;
          _so = tmpMeta35;
          _varlst = tmpMeta36;
          _ht = tmpMeta37;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cr = omc_ComponentReference_crefPrefixDer(threadData, _name);

          _varlst = omc_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1(threadData, ((modelica_integer) -1) + _diffcount, ((modelica_integer) 2), _name, _cr, _var, _vars, _so, _varlst, _ht ,&_ht);

          tmpMeta38 = mmc_mk_box4(4, &BackendDAE_VarKind_STATE__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_none(), mmc_mk_boolean(_natural));
          _var = omc_BackendVariable_setVarKind(threadData, _var, tmpMeta38);
          tmpMeta39 = mmc_mk_box4(0, _vars, _so, _varlst, _ht);
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = tmpMeta39;
          goto tmp3_done;
        }
        case 3: {
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
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,1,3) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 3));
          if (optionNone(tmpMeta42)) goto tmp3_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 1));
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _var = tmp4_1;
          _name = tmpMeta40;
          _dir = tmpMeta44;
          _prl = tmpMeta45;
          _tp = tmpMeta46;
          _bind = tmpMeta47;
          _tplExp = tmpMeta48;
          _dim = tmpMeta49;
          _source = tmpMeta50;
          _attr = tmpMeta51;
          _ts = tmpMeta52;
          _hideResult = tmpMeta53;
          _comment = tmpMeta54;
          _ct = tmpMeta55;
          _io = tmpMeta56;
          _vars = tmpMeta57;
          _so = tmpMeta58;
          _varlst = tmpMeta59;
          _ht = tmpMeta60;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _varlst = omc_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1(threadData, ((modelica_integer) 1), ((modelica_integer) 1), _name, _name, _var, _vars, _so, _varlst, _ht ,&_ht);

          _cr = omc_ComponentReference_crefPrefixDer(threadData, _name);

          tmpMeta61 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta62 = mmc_mk_box3(12, &DAE_SymbolicOperation_NEW__DUMMY__DER__desc, _cr, tmpMeta61);
          _source = omc_ElementSource_addSymbolicTransformation(threadData, _source, tmpMeta62);
          tmpMeta63 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _name, _OMC_LIT47, _dir, _prl, _tp, _bind, _tplExp, _dim, _source, _attr, _ts, _hideResult, _comment, _ct, _io, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 19))));
          tmpMeta64 = mmc_mk_box4(0, _vars, _so, _varlst, _ht);
          tmpMeta[0+0] = tmpMeta63;
          tmpMeta[0+1] = tmpMeta64;
          goto tmp3_done;
        }
        case 4: {
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
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta66,1,3) == 0) goto tmp3_end;
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta66), 2));
          tmp68 = mmc_unbox_integer(tmpMeta67);
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta66), 3));
          if (!optionNone(tmpMeta69)) goto tmp3_end;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          tmpMeta83 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _var = tmp4_1;
          _name = tmpMeta65;
          _diffcount = tmp68  /* pattern as ty=Integer */;
          _dir = tmpMeta70;
          _prl = tmpMeta71;
          _tp = tmpMeta72;
          _bind = tmpMeta73;
          _tplExp = tmpMeta74;
          _dim = tmpMeta75;
          _source = tmpMeta76;
          _attr = tmpMeta77;
          _ts = tmpMeta78;
          _hideResult = tmpMeta79;
          _comment = tmpMeta80;
          _ct = tmpMeta81;
          _io = tmpMeta82;
          _vars = tmpMeta83;
          _so = tmpMeta84;
          _varlst = tmpMeta85;
          _ht = tmpMeta86;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _varlst = omc_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1(threadData, _diffcount, ((modelica_integer) 1), _name, _name, _var, _vars, _so, _varlst, _ht ,&_ht);

          _cr = omc_ComponentReference_crefPrefixDer(threadData, _name);

          tmpMeta87 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta88 = mmc_mk_box3(12, &DAE_SymbolicOperation_NEW__DUMMY__DER__desc, _cr, tmpMeta87);
          _source = omc_ElementSource_addSymbolicTransformation(threadData, _source, tmpMeta88);
          tmpMeta89 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _name, _OMC_LIT47, _dir, _prl, _tp, _bind, _tplExp, _dim, _source, _attr, _ts, _hideResult, _comment, _ct, _io, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 19))));
          tmpMeta90 = mmc_mk_box4(0, _vars, _so, _varlst, _ht);
          tmpMeta[0+0] = tmpMeta89;
          tmpMeta[0+1] = tmpMeta90;
          goto tmp3_done;
        }
        case 5: {
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
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          tmpMeta91 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta92,0,0) == 0) goto tmp3_end;
          tmpMeta93 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta94 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta96 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta97 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta98 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta99 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta101 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          tmpMeta102 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          tmpMeta103 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          tmpMeta104 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          tmpMeta105 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          tmpMeta106 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta109 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _var = tmp4_1;
          _name = tmpMeta91;
          _dir = tmpMeta93;
          _prl = tmpMeta94;
          _tp = tmpMeta95;
          _bind = tmpMeta96;
          _tplExp = tmpMeta97;
          _dim = tmpMeta98;
          _source = tmpMeta99;
          _attr = tmpMeta100;
          _ts = tmpMeta101;
          _hideResult = tmpMeta102;
          _comment = tmpMeta103;
          _ct = tmpMeta104;
          _io = tmpMeta105;
          _vars = tmpMeta106;
          _so = tmpMeta107;
          _varlst = tmpMeta108;
          _ht = tmpMeta109;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_varStateSelectPrefer(threadData, _var)) goto tmp3_end;
          _varlst = omc_IndexReduction_makeAllDummyVarandDummyDerivativeRepl1(threadData, ((modelica_integer) 1), ((modelica_integer) 1), _name, _name, _var, _vars, _so, _varlst, _ht ,&_ht);

          _cr = omc_ComponentReference_crefPrefixDer(threadData, _name);

          tmpMeta110 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta111 = mmc_mk_box3(12, &DAE_SymbolicOperation_NEW__DUMMY__DER__desc, _cr, tmpMeta110);
          _source = omc_ElementSource_addSymbolicTransformation(threadData, _source, tmpMeta111);
          tmpMeta112 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _name, _OMC_LIT47, _dir, _prl, _tp, _bind, _tplExp, _dim, _source, _attr, _ts, _hideResult, _comment, _ct, _io, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 19))));
          tmpMeta113 = mmc_mk_box4(0, _vars, _so, _varlst, _ht);
          tmpMeta[0+0] = tmpMeta112;
          tmpMeta[0+1] = tmpMeta113;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inVar;
          tmpMeta[0+1] = _inTpl;
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
  _outVar = tmpMeta[0+0];
  _oTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oTpl) { *out_oTpl = _oTpl; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_addAllDummyStates(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _so, modelica_metatype _iHt, modelica_metatype *out_oHt)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oHt = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _dummvars = NULL;
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
  _osyst = _inSystem;
  // _oHt has no default value.
  // _vars has no default value.
  // _dummvars has no default value.
  /* Pattern-matching tuple assignment */
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box4(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_osyst), 2))), _so, tmpMeta4, _iHt);
  tmpMeta6 = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_osyst), 2))), boxvar_IndexReduction_makeAllDummyVarandDummyDerivativeRepl, tmpMeta5, &tmpMeta1);
  _vars = tmpMeta6;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _dummvars = tmpMeta2;
  _oHt = tmpMeta3;

  _vars = omc_BackendVariable_addVars(threadData, _dummvars, _vars);

  tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_osyst), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _vars, boxvar_IndexReduction_replaceDummyDerivativesVar, _oHt, NULL);
  _osyst = tmpMeta7;

  tmpMeta8 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDummyDerivativesExp, _oHt);
  omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_osyst), 3))), boxvar_Expression_traverseSubexpressionsHelper, tmpMeta8);
  _return: OMC_LABEL_UNUSED
  if (out_oHt) { *out_oHt = _oHt; }
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_makeHigherStatesRepl1(threadData_t *threadData, modelica_integer _diffCount, modelica_integer _diffedCount, modelica_metatype _iOrigName, modelica_metatype _iName, modelica_metatype _inVar, modelica_metatype _vars, modelica_metatype _iVarLst, modelica_metatype _iHt, modelica_integer _iN, modelica_metatype *out_oHt, modelica_integer *out_oN)
{
  modelica_metatype _oVarLst = NULL;
  modelica_metatype _oHt = NULL;
  modelica_integer _oN;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVarLst has no default value.
  // _oHt has no default value.
  // _oN has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _ht = NULL;
      modelica_metatype _name = NULL;
      modelica_metatype _dir = NULL;
      modelica_metatype _prl = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _dim = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _kind = NULL;
      modelica_metatype _odattr = NULL;
      modelica_metatype _ts = NULL;
      modelica_metatype _hideResult = NULL;
      modelica_metatype _dattr = NULL;
      modelica_metatype _comment = NULL;
      modelica_metatype _ct = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _io = NULL;
      modelica_boolean _encrypted;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ht has no default value.
      // _name has no default value.
      // _dir has no default value.
      // _prl has no default value.
      // _tp has no default value.
      // _dim has no default value.
      // _source has no default value.
      // _kind has no default value.
      // _odattr has no default value.
      // _ts has no default value.
      // _hideResult has no default value.
      // _dattr has no default value.
      // _comment has no default value.
      // _ct has no default value.
      // _var has no default value.
      // _e has no default value.
      // _io has no default value.
      // _encrypted has no default value.
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
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 19));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          _name = tmpMeta6;
          _dir = tmpMeta7;
          _prl = tmpMeta8;
          _tp = tmpMeta9;
          _dim = tmpMeta10;
          _source = tmpMeta11;
          _ts = tmpMeta12;
          _hideResult = tmpMeta13;
          _comment = tmpMeta14;
          _ct = tmpMeta15;
          _io = tmpMeta16;
          _encrypted = tmp18  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_diffCount > ((modelica_integer) -1))) goto tmp3_end;
          _name = omc_ComponentReference_crefPrefixDer(threadData, _iName);

          _e = omc_Expression_crefExp(threadData, _name);

          tmpMeta19 = mmc_mk_box2(0, _iOrigName, mmc_mk_integer(_diffedCount));
          tmpMeta20 = mmc_mk_box2(0, tmpMeta19, _e);
          _ht = omc_BaseHashTable_add(threadData, tmpMeta20, _iHt);

          _dattr = omc_BackendVariable_getVariableAttributefromType(threadData, _tp);

          _odattr = omc_DAEUtil_setFixedAttr(threadData, mmc_mk_some(_dattr), _OMC_LIT44);

          _odattr = omc_DAEUtil_setProtectedAttr(threadData, _odattr, omc_DAEUtil_getProtectedAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11)))));

          tmp22 = (modelica_boolean)(_diffCount > ((modelica_integer) 0));
          if(tmp22)
          {
            tmpMeta21 = mmc_mk_box4(4, &BackendDAE_VarKind_STATE__desc, mmc_mk_integer(_diffCount), mmc_mk_none(), mmc_mk_boolean(1 /* true */));
            tmpMeta23 = tmpMeta21;
          }
          else
          {
            tmpMeta23 = _OMC_LIT45;
          }
          _kind = tmpMeta23;

          tmpMeta24 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _name, _kind, _dir, _prl, _tp, mmc_mk_none(), mmc_mk_none(), _dim, _source, _odattr, _ts, _hideResult, _comment, _ct, _io, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(_encrypted));
          _var = tmpMeta24;
          tmpMeta25 = mmc_mk_cons(_var, _iVarLst);
          /* Tail recursive call */
          _diffCount = ((modelica_integer) -1) + _diffCount;
          _diffedCount = ((modelica_integer) 1) + _diffedCount;
          _iName = _name;
          _iVarLst = tmpMeta25;
          _iHt = _ht;
          _iN = ((modelica_integer) 1) + _iN;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _iVarLst;
          tmpMeta[0+1] = _iHt;
          tmp1_c2 = _iN;
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
  _oVarLst = tmpMeta[0+0];
  _oHt = tmpMeta[0+1];
  _oN = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_oHt) { *out_oHt = _oHt; }
  if (out_oN) { *out_oN = _oN; }
  return _oVarLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_makeHigherStatesRepl1(threadData_t *threadData, modelica_metatype _diffCount, modelica_metatype _diffedCount, modelica_metatype _iOrigName, modelica_metatype _iName, modelica_metatype _inVar, modelica_metatype _vars, modelica_metatype _iVarLst, modelica_metatype _iHt, modelica_metatype _iN, modelica_metatype *out_oHt, modelica_metatype *out_oN)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _oN;
  modelica_metatype _oVarLst = NULL;
  tmp1 = mmc_unbox_integer(_diffCount);
  tmp2 = mmc_unbox_integer(_diffedCount);
  tmp3 = mmc_unbox_integer(_iN);
  _oVarLst = omc_IndexReduction_makeHigherStatesRepl1(threadData, tmp1, tmp2, _iOrigName, _iName, _inVar, _vars, _iVarLst, _iHt, tmp3, out_oHt, &_oN);
  /* skip box _oVarLst; list<BackendDAE.Var> */
  /* skip box _oHt; tuple<array<list<tuple<tuple<DAE.ComponentRef, #Integer>, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<tuple<DAE.ComponentRef, #Integer>, DAE.Exp>>>>, #Integer, tuple<.HashTableCrIntToExp.FuncHashCref<function>(tuple<DAE.ComponentRef, #Integer> cr) => #Integer, .HashTableCrIntToExp.FuncCrefEqual<function>(tuple<DAE.ComponentRef, #Integer> cr1, tuple<DAE.ComponentRef, #Integer> cr2) => #Boolean, .HashTableCrIntToExp.FuncCrefStr<function>(tuple<DAE.ComponentRef, #Integer> cr) => String, .HashTableCrIntToExp.FuncExpStr<function>(DAE.Exp exp) => String>> */
  if (out_oN) { *out_oN = mmc_mk_icon(_oN); }
  return _oVarLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_makeHigherStatesRepl(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_oTpl)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _oTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _ht = NULL;
      modelica_metatype _name = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _var = NULL;
      modelica_integer _diffcount;
      modelica_integer _i;
      modelica_integer _j;
      modelica_metatype _varlst = NULL;
      modelica_metatype _addassign = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _ht has no default value.
      // _name has no default value.
      // _cr has no default value.
      // _var has no default value.
      // _diffcount has no default value.
      // _i has no default value.
      // _j has no default value.
      // _varlst has no default value.
      // _addassign has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_boolean tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (!optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          _var = tmp4_1;
          _name = tmpMeta6;
          _diffcount = tmp9  /* pattern as ty=Integer */;
          _vars = tmpMeta11;
          _i = tmp13  /* pattern as ty=Integer */;
          _j = tmp15  /* pattern as ty=Integer */;
          _addassign = tmpMeta16;
          _varlst = tmpMeta17;
          _ht = tmpMeta18;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp19 = (_diffcount > ((modelica_integer) 1));
          if (1 /* true */ != tmp19) goto goto_2;

          _cr = omc_ComponentReference_crefPrefixDer(threadData, _name);

          _varlst = omc_IndexReduction_makeHigherStatesRepl1(threadData, ((modelica_integer) -2) + _diffcount, ((modelica_integer) 2), _name, _cr, _var, _vars, _varlst, _ht, _j ,&_ht ,&_j);
          tmpMeta21 = mmc_mk_box2(0, mmc_mk_integer(_i), mmc_mk_integer(_j));
          tmpMeta20 = mmc_mk_cons(tmpMeta21, _addassign);
          tmpMeta22 = mmc_mk_box6(0, _vars, mmc_mk_integer(((modelica_integer) 1) + _i), mmc_mk_integer(_j), tmpMeta20, _varlst, _ht);
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = tmpMeta22;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          _var = tmp4_1;
          _vars = tmpMeta23;
          _i = tmp25  /* pattern as ty=Integer */;
          _j = tmp27  /* pattern as ty=Integer */;
          _addassign = tmpMeta28;
          _varlst = tmpMeta29;
          _ht = tmpMeta30;
          /* Pattern matching succeeded */
          tmpMeta31 = mmc_mk_box6(0, _vars, mmc_mk_integer(((modelica_integer) 1) + _i), mmc_mk_integer(_j), _addassign, _varlst, _ht);
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = tmpMeta31;
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
  _oTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oTpl) { *out_oTpl = _oTpl; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC void omc_IndexReduction_setHigerDerivativeAssignment(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _ass1, modelica_metatype _ass2)
{
  modelica_integer _i;
  modelica_integer _j;
  modelica_integer _e;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  // _j has no default value.
  // _e has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _i = tmp3  /* pattern as ty=Integer */;
  _j = tmp5  /* pattern as ty=Integer */;

  _e = mmc_unbox_integer(arrayGet(_ass1,_i) /* DAE.ASUB */);

  arrayUpdate(_ass1, _i, mmc_mk_integer(((modelica_integer) -1)));

  arrayUpdate(_ass1, _j, mmc_mk_integer(_e));

  arrayUpdate(_ass2, _e, mmc_mk_integer(_j));
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceHigherDerivatives(threadData_t *threadData, modelica_metatype _inSystem)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype _dummyvars = NULL;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _addassign = NULL;
  modelica_integer _nv1;
  modelica_integer _nv;
  modelica_metatype tmpMeta1;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _osyst = _inSystem;
  // _vars has no default value.
  // _ht has no default value.
  // _dummyvars has no default value.
  // _ass1 has no default value.
  // _ass2 has no default value.
  // _addassign has no default value.
  // _nv1 has no default value.
  // _nv has no default value.
  _ht = omc_HashTableCrIntToExp_emptyHashTable(threadData);

  _nv = omc_BackendVariable_varsSize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_osyst), 2))));

  /* Pattern-matching assignment */
  tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_osyst), 7)));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _ass1 = tmpMeta2;
  _ass2 = tmpMeta3;

  /* Pattern-matching tuple assignment */
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta12 = mmc_mk_box6(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_osyst), 2))), mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_nv), tmpMeta10, tmpMeta11, _ht);
  tmpMeta13 = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_osyst), 2))), boxvar_IndexReduction_makeHigherStatesRepl, tmpMeta12, &tmpMeta4);
  _vars = tmpMeta13;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 4));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 5));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 6));
  _nv1 = tmp6  /* pattern as ty=Integer */;
  _addassign = tmpMeta7;
  _dummyvars = tmpMeta8;
  _ht = tmpMeta9;

  _dummyvars = listReverse(_dummyvars);

  _vars = omc_BackendVariable_addVars(threadData, _dummyvars, _vars);

  tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_osyst), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _vars, boxvar_IndexReduction_replaceDummyDerivativesVar, _ht, NULL);
  _osyst = tmpMeta14;

  tmpMeta15 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDummyDerivativesExp, _ht);
  omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_osyst), 3))), boxvar_Expression_traverseSubexpressionsHelper, tmpMeta15);

  _ass1 = omc_Array_expand(threadData, _nv1 - _nv, _ass1, mmc_mk_integer(((modelica_integer) -1)));

  omc_List_map2__0(threadData, _addassign, boxvar_IndexReduction_setHigerDerivativeAssignment, _ass1, _ass2);

  tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta18 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1, _ass2, tmpMeta17);
  tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_osyst), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[7] = tmpMeta18;
  _osyst = tmpMeta16;
  _return: OMC_LABEL_UNUSED
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getLevelStates(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _level, modelica_metatype _iHt, modelica_metatype *out_oHt)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oHt = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _oHt has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _ht = NULL;
      modelica_metatype _name = NULL;
      modelica_metatype _cr = NULL;
      modelica_boolean _natural;
      modelica_metatype _dir = NULL;
      modelica_metatype _prl = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _dim = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _odattr = NULL;
      modelica_metatype _ts = NULL;
      modelica_metatype _hideResult = NULL;
      modelica_metatype _dattr = NULL;
      modelica_metatype _comment = NULL;
      modelica_metatype _ct = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _e = NULL;
      modelica_integer _diffcount;
      modelica_integer _n;
      modelica_metatype _derName = NULL;
      modelica_metatype _io = NULL;
      modelica_boolean _encrypted;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ht has no default value.
      // _name has no default value.
      // _cr has no default value.
      // _natural has no default value.
      // _dir has no default value.
      // _prl has no default value.
      // _tp has no default value.
      // _dim has no default value.
      // _source has no default value.
      // _odattr has no default value.
      // _ts has no default value.
      // _hideResult has no default value.
      // _dattr has no default value.
      // _comment has no default value.
      // _ct has no default value.
      // _var has no default value.
      // _e has no default value.
      // _diffcount has no default value.
      // _n has no default value.
      // _derName has no default value.
      // _io has no default value.
      // _encrypted has no default value.
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
          modelica_integer tmp24;
          modelica_boolean tmp25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (!optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 19));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          _name = tmpMeta6;
          _diffcount = tmp9  /* pattern as ty=Integer */;
          _natural = tmp12  /* pattern as ty=Boolean */;
          _dir = tmpMeta13;
          _prl = tmpMeta14;
          _tp = tmpMeta15;
          _dim = tmpMeta16;
          _source = tmpMeta17;
          _ts = tmpMeta18;
          _hideResult = tmpMeta19;
          _comment = tmpMeta20;
          _ct = tmpMeta21;
          _io = tmpMeta22;
          _encrypted = tmp24  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_diffcount > ((modelica_integer) 1))) goto tmp3_end;
          _n = _diffcount - _level;

          /* Pattern-matching assignment */
          tmp25 = (_n > ((modelica_integer) 0));
          if (1 /* true */ != tmp25) goto goto_2;

          _cr = omc_Util_foldcallN(threadData, _n, boxvar_ComponentReference_crefPrefixDer, _name);

          _e = omc_Expression_crefExp(threadData, _cr);

          tmpMeta26 = mmc_mk_box2(0, _name, mmc_mk_integer(_n));
          tmpMeta27 = mmc_mk_box2(0, tmpMeta26, _e);
          _ht = omc_BaseHashTable_add(threadData, tmpMeta27, _iHt);

          _dattr = omc_BackendVariable_getVariableAttributefromType(threadData, _tp);

          _odattr = omc_DAEUtil_setFixedAttr(threadData, mmc_mk_some(_dattr), _OMC_LIT44);

          tmpMeta28 = mmc_mk_box4(4, &BackendDAE_VarKind_STATE__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_none(), mmc_mk_boolean(_natural));
          tmpMeta29 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _cr, tmpMeta28, _dir, _prl, _tp, mmc_mk_none(), mmc_mk_none(), _dim, _source, _odattr, _ts, _hideResult, _comment, _ct, _io, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(_encrypted));
          _var = tmpMeta29;
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _ht;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_integer tmp35;
          modelica_metatype tmpMeta36;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,1,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          tmp32 = mmc_unbox_integer(tmpMeta31);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 3));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 4));
          tmp35 = mmc_unbox_integer(tmpMeta34);
          
          _diffcount = tmp32  /* pattern as ty=Integer */;
          _derName = tmpMeta33;
          _natural = tmp35  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_diffcount > ((modelica_integer) 1))) goto tmp3_end;
          tmpMeta36 = mmc_mk_box4(4, &BackendDAE_VarKind_STATE__desc, mmc_mk_integer(((modelica_integer) 1)), _derName, mmc_mk_boolean(_natural));
          _var = omc_BackendVariable_setVarKind(threadData, _inVar, tmpMeta36);
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _iHt;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inVar;
          tmpMeta[0+1] = _iHt;
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
  _outVar = tmpMeta[0+0];
  _oHt = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oHt) { *out_oHt = _oHt; }
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getLevelStates(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _level, modelica_metatype _iHt, modelica_metatype *out_oHt)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_level);
  _outVar = omc_IndexReduction_getLevelStates(threadData, _inVar, tmp1, _iHt, out_oHt);
  /* skip box _outVar; BackendDAE.Var */
  /* skip box _oHt; tuple<array<list<tuple<tuple<DAE.ComponentRef, #Integer>, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<tuple<DAE.ComponentRef, #Integer>, DAE.Exp>>>>, #Integer, tuple<.HashTableCrIntToExp.FuncHashCref<function>(tuple<DAE.ComponentRef, #Integer> cr) => #Integer, .HashTableCrIntToExp.FuncCrefEqual<function>(tuple<DAE.ComponentRef, #Integer> cr1, tuple<DAE.ComponentRef, #Integer> cr2) => #Boolean, .HashTableCrIntToExp.FuncCrefStr<function>(tuple<DAE.ComponentRef, #Integer> cr) => String, .HashTableCrIntToExp.FuncExpStr<function>(DAE.Exp exp) => String>> */
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_checkAssignment(threadData_t *threadData, modelica_integer _index, modelica_integer _len, modelica_metatype _ass, modelica_metatype _vars, modelica_metatype *out_outUnassigned)
{
  modelica_metatype _outAssigned = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outUnassigned = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outAssigned = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outUnassigned = tmpMeta2;
  // _cr has no default value.
  tmp9 = _index; tmp10 = 1; tmp11 = _len;
  if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
  {
    modelica_integer _indx;
    for(_indx = _index; in_range_integer(_indx, tmp9, tmp11); _indx += tmp10)
    {
      /* Pattern-matching assignment */
      tmpMeta3 = omc_BackendVariable_getVarAt(threadData, _vars, _indx);
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _cr = tmpMeta4;

      if((mmc_unbox_integer(arrayGet(_ass,_indx) /* DAE.ASUB */) > ((modelica_integer) 0)))
      {
        tmpMeta6 = mmc_mk_box2(0, _cr, mmc_mk_integer(_indx));
        tmpMeta5 = mmc_mk_cons(tmpMeta6, _outAssigned);
        _outAssigned = tmpMeta5;
      }
      else
      {
        tmpMeta8 = mmc_mk_box2(0, _cr, mmc_mk_integer(_indx));
        tmpMeta7 = mmc_mk_cons(tmpMeta8, _outUnassigned);
        _outUnassigned = tmpMeta7;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outUnassigned) { *out_outUnassigned = _outUnassigned; }
  return _outAssigned;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_checkAssignment(threadData_t *threadData, modelica_metatype _index, modelica_metatype _len, modelica_metatype _ass, modelica_metatype _vars, modelica_metatype *out_outUnassigned)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outAssigned = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_index);
  tmp2 = mmc_unbox_integer(_len);
  _outAssigned = omc_IndexReduction_checkAssignment(threadData, tmp1, tmp2, _ass, _vars, out_outUnassigned);
  /* skip box _outAssigned; list<tuple<DAE.ComponentRef, #Integer>> */
  /* skip box _outUnassigned; list<tuple<DAE.ComponentRef, #Integer>> */
  return _outAssigned;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1(threadData_t *threadData, modelica_integer _i, modelica_metatype _tpl, modelica_metatype _iRow)
{
  modelica_metatype _oRow = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _so = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype _v = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oRow has no default value.
  // _vars has no default value.
  // _so has no default value.
  // _ht has no default value.
  // _v has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,0,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
  _vars = tmpMeta2;
  _so = tmpMeta3;
  _ht = tmpMeta4;

  _v = omc_BackendVariable_getVarAt(threadData, _vars, labs(_i));

  _b = (omc_BackendVariable_varStateSelectNever(threadData, _v) && (!omc_BaseHashTable_hasKey(threadData, omc_BackendVariable_varCref(threadData, _v), _ht)));

  _oRow = omc_List_consOnTrue(threadData, _b, mmc_mk_integer(_i), _iRow);
  _return: OMC_LABEL_UNUSED
  return _oRow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1(threadData_t *threadData, modelica_metatype _i, modelica_metatype _tpl, modelica_metatype _iRow)
{
  modelica_integer tmp1;
  modelica_metatype _oRow = NULL;
  tmp1 = mmc_unbox_integer(_i);
  _oRow = omc_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1(threadData, tmp1, _tpl, _iRow);
  /* skip box _oRow; list<#Integer> */
  return _oRow;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementElementfromEnhanced(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _tpl, modelica_metatype _iRow)
{
  modelica_metatype _oRow = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oRow has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTpl;
    {
      modelica_integer _i;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,0) == 0) goto tmp3_end;
          
          _i = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_i), _iRow);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,0) == 0) goto tmp3_end;
          
          _i = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_cons(mmc_mk_integer(_i), _iRow);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,2,1) == 0) goto tmp3_end;
          
          _i = tmp15  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_cons(mmc_mk_integer(_i), _iRow);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,3,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          if (1 /* true */ != tmp22) goto tmp3_end;
          
          _i = tmp19  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta23 = mmc_mk_cons(mmc_mk_integer(_i), _iRow);
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,3,1) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          if (0 /* false */ != tmp28) goto tmp3_end;
          
          _i = tmp25  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1(threadData, _i, _tpl, _iRow);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_integer tmp33;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp30 = mmc_unbox_integer(tmpMeta29);
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,4,1) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          tmp33 = mmc_unbox_integer(tmpMeta32);
          if (1 /* true */ != tmp33) goto tmp3_end;
          
          _i = tmp30  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1(threadData, _i, _tpl, _iRow);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta34;
          modelica_integer tmp35;
          modelica_metatype tmpMeta36;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp35 = mmc_unbox_integer(tmpMeta34);
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta36,5,0) == 0) goto tmp3_end;
          
          _i = tmp35  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IndexReduction_adjacencyMatrixElementElementfromEnhanced__1(threadData, _i, _tpl, _iRow);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iRow;
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
  _oRow = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oRow;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementfromEnhancedPartial(threadData_t *threadData, modelica_metatype _iRow, modelica_integer _index, modelica_metatype _varsAssTpl)
{
  modelica_metatype _oRow = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _neverVars = NULL;
  modelica_metatype _ass = NULL;
  modelica_metatype _so = NULL;
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
  // _oRow has no default value.
  // _vars has no default value.
  // _neverVars has no default value.
  // _ass has no default value.
  // _so has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _varsAssTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _vars = tmpMeta2;
  _neverVars = tmpMeta3;
  _ass = tmpMeta4;
  _so = tmpMeta5;

  if(((mmc_unbox_integer(arrayGet(_ass,_index) /* DAE.ASUB */) == ((modelica_integer) -1)) || (!omc_BackendVariable_varStateSelectNever(threadData, omc_BackendVariable_getVarAt(threadData, _vars, mmc_unbox_integer(arrayGet(_ass,_index) /* DAE.ASUB */))))))
  {
    tmpMeta6 = mmc_mk_box2(0, _neverVars, _so);
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    _oRow = omc_List_fold1(threadData, _iRow, boxvar_IndexReduction_adjacencyMatrixElementElementfromEnhanced, tmpMeta6, tmpMeta7);

    _oRow = omc_List_map(threadData, _oRow, boxvar_intAbs);

    _oRow = listReverse(_oRow);
  }
  else
  {
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    _oRow = tmpMeta8;
  }
  _return: OMC_LABEL_UNUSED
  return _oRow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_adjacencyMatrixElementfromEnhancedPartial(threadData_t *threadData, modelica_metatype _iRow, modelica_metatype _index, modelica_metatype _varsAssTpl)
{
  modelica_integer tmp1;
  modelica_metatype _oRow = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _oRow = omc_IndexReduction_adjacencyMatrixElementfromEnhancedPartial(threadData, _iRow, tmp1, _varsAssTpl);
  /* skip box _oRow; list<#Integer> */
  return _oRow;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixfromEnhancedPartial(threadData_t *threadData, modelica_metatype _me, modelica_metatype _vars, modelica_metatype _neverVars, modelica_metatype _ass, modelica_metatype _so)
{
  modelica_metatype _m = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m has no default value.
  tmpMeta1 = mmc_mk_box4(0, _vars, _neverVars, _ass, _so);
  _m = omc_Array_map1Ind(threadData, _me, boxvar_IndexReduction_adjacencyMatrixElementfromEnhancedPartial, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _m;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementfromEnhanced(threadData_t *threadData, modelica_metatype _iRow, modelica_metatype _tpl)
{
  modelica_metatype _oRow = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oRow has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _oRow = omc_List_fold1(threadData, _iRow, boxvar_IndexReduction_adjacencyMatrixElementElementfromEnhanced, _tpl, tmpMeta1);

  _oRow = omc_List_map(threadData, _oRow, boxvar_intAbs);

  _oRow = listReverse(_oRow);
  _return: OMC_LABEL_UNUSED
  return _oRow;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixfromEnhanced(threadData_t *threadData, modelica_metatype _me, modelica_metatype _vars, modelica_metatype _so)
{
  modelica_metatype _m = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m has no default value.
  tmpMeta1 = mmc_mk_box2(0, _vars, _so);
  _m = omc_Array_map1(threadData, _me, boxvar_IndexReduction_adjacencyMatrixElementfromEnhanced, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _m;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementElementfromEnhancedStrict(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _vars, modelica_metatype _iRow)
{
  modelica_metatype _oRow = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oRow has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTpl;
    {
      modelica_integer _i;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,0) == 0) goto tmp3_end;
          
          _i = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_i), _iRow);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,0) == 0) goto tmp3_end;
          
          _i = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_cons(mmc_mk_integer(_i), _iRow);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,2,1) == 0) goto tmp3_end;
          
          _i = tmp15  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_cons(mmc_mk_integer(_i), _iRow);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,3,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          if (1 /* true */ != tmp22) goto tmp3_end;
          
          _i = tmp19  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta23 = mmc_mk_cons(mmc_mk_integer(_i), _iRow);
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iRow;
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
  _oRow = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oRow;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixElementfromEnhancedStrict(threadData_t *threadData, modelica_metatype _iRow, modelica_metatype _vars)
{
  modelica_metatype _oRow = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oRow has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _oRow = omc_List_fold1(threadData, _iRow, boxvar_IndexReduction_adjacencyMatrixElementElementfromEnhancedStrict, _vars, tmpMeta1);

  _oRow = omc_List_map(threadData, _oRow, boxvar_intAbs);

  _oRow = listReverse(_oRow);
  _return: OMC_LABEL_UNUSED
  return _oRow;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_adjacencyMatrixfromEnhancedStrict(threadData_t *threadData, modelica_metatype _me, modelica_metatype _vars)
{
  modelica_metatype _m = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m has no default value.
  _m = omc_Array_map1(threadData, _me, boxvar_IndexReduction_adjacencyMatrixElementfromEnhancedStrict, _vars);
  _return: OMC_LABEL_UNUSED
  return _m;
}

DLLDirection
modelica_metatype omc_IndexReduction_makeder(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _tp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _tp has no default value.
  _tp = omc_Expression_typeof(threadData, _inExp);

  tmpMeta1 = mmc_mk_cons(_inExp, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta2 = mmc_mk_box9(3, &DAE_CallAttributes_CALL__ATTR__desc, _tp, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), _OMC_LIT34, _OMC_LIT35, mmc_mk_integer(1));
  tmpMeta3 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT32, tmpMeta1, tmpMeta2);
  _outExp = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_selectDummyDerivatives2new(threadData_t *threadData, modelica_metatype _dstates, modelica_metatype _states, modelica_metatype _unassignedEqns, modelica_metatype _assignedEqns, modelica_metatype _vars, modelica_integer _varSize, modelica_metatype _eqns, modelica_integer _eqnsSize, modelica_metatype _mapIncRowEqn, modelica_integer _level, modelica_metatype _iStateSets, modelica_metatype *out_oStateSets)
{
  modelica_metatype _outDummyVars = NULL;
  modelica_metatype _oStateSets = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDummyVars has no default value.
  // _oStateSets has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _varlst = NULL;
      modelica_metatype _statecandidates = NULL;
      modelica_metatype _ovarlst = NULL;
      modelica_integer _unassignedEqnsSize;
      modelica_integer _size;
      modelica_integer _rang;
      modelica_metatype _eqnlst = NULL;
      modelica_metatype _oeqnlst = NULL;
      modelica_metatype _unassignedEqns1 = NULL;
      modelica_metatype _assignedEqns1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _varlst has no default value.
      // _statecandidates has no default value.
      // _ovarlst has no default value.
      // _unassignedEqnsSize has no default value.
      // _size has no default value.
      // _rang has no default value.
      // _eqnlst has no default value.
      // _oeqnlst has no default value.
      // _unassignedEqns1 has no default value.
      // _assignedEqns1 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(listLength(_dstates) == _eqnsSize)) goto tmp3_end;
          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT51),stdout);

            omc_BackendDump_debuglst(threadData, _states, boxvar_IndexReduction_dumpStates, _OMC_LIT3, _OMC_LIT3);

            fputs(MMC_STRINGDATA(_OMC_LIT52),stdout);

            omc_BackendDump_debuglst(threadData, _dstates, boxvar_IndexReduction_dumpStates, _OMC_LIT3, _OMC_LIT3);
          }
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = _iStateSets;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          _unassignedEqnsSize = listLength(_unassignedEqns);

          _size = listLength(_states);

          _rang = _size - _unassignedEqnsSize;

          /* Pattern-matching assignment */
          tmp7 = (_rang > ((modelica_integer) 0));
          if (1 /* true */ != tmp7) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            omc_BackendDump_debugStrIntStrIntStr(threadData, _OMC_LIT56, _rang, _OMC_LIT57, _size, _OMC_LIT58);

            omc_BackendDump_debuglst(threadData, _states, boxvar_IndexReduction_dumpStates, _OMC_LIT3, _OMC_LIT3);

            fputs(MMC_STRINGDATA(_OMC_LIT59),stdout);

            omc_BackendDump_debuglst(threadData, _dstates, boxvar_IndexReduction_dumpStates, _OMC_LIT3, _OMC_LIT3);
          }

          _statecandidates = omc_List_map1r(threadData, omc_List_map(threadData, _states, boxvar_Util_tuple22), boxvar_BackendVariable_getVarAt, _vars);

          _unassignedEqns1 = omc_List_uniqueIntN(threadData, omc_List_map1r(threadData, _unassignedEqns, boxvar_arrayGet, _mapIncRowEqn), _eqnsSize);

          _eqnlst = omc_BackendEquation_getList(threadData, _unassignedEqns1, _eqns);

          _ovarlst = omc_List_map1r(threadData, omc_List_map(threadData, _dstates, boxvar_Util_tuple22), boxvar_BackendVariable_getVarAt, _vars);

          _assignedEqns1 = omc_List_uniqueIntN(threadData, omc_List_map1r(threadData, _assignedEqns, boxvar_arrayGet, _mapIncRowEqn), _eqnsSize);

          _oeqnlst = omc_BackendEquation_getList(threadData, _assignedEqns1, _eqns);

          _varlst = omc_List_map1r(threadData, omc_List_map(threadData, _states, boxvar_Util_tuple22), boxvar_BackendVariable_getVarAt, _vars);
          tmpMeta9 = mmc_mk_box8(0, mmc_mk_integer(_level), mmc_mk_integer(_rang), mmc_mk_integer(_size), mmc_mk_integer(_unassignedEqnsSize), _statecandidates, _eqnlst, _ovarlst, _oeqnlst);
          tmpMeta8 = mmc_mk_cons(tmpMeta9, _iStateSets);
          tmpMeta[0+0] = _varlst;
          tmpMeta[0+1] = tmpMeta8;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          /* Pattern matching succeeded */
          _unassignedEqnsSize = listLength(_unassignedEqns);

          _size = listLength(_states);

          _rang = _size - _unassignedEqnsSize;

          if((_rang < ((modelica_integer) 0)))
          {
            tmpMeta11 = stringAppend(_OMC_LIT60,intString(_rang));
            tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT61);
            tmpMeta13 = stringAppend(tmpMeta12,intString(_unassignedEqnsSize));
            tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT62);
            tmpMeta15 = stringAppend(tmpMeta14,intString(_size));
            tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT63);
            tmpMeta10 = mmc_mk_cons(tmpMeta16, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta10);
          }

          /* Pattern-matching assignment */
          tmp17 = (_rang == ((modelica_integer) 0));
          if (1 /* true */ != tmp17) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT64),stdout);

            omc_BackendDump_debuglst(threadData, _states, boxvar_IndexReduction_dumpStates, _OMC_LIT3, _OMC_LIT3);
          }

          _varlst = omc_List_map1r(threadData, omc_List_map(threadData, _states, boxvar_Util_tuple22), boxvar_BackendVariable_getVarAt, _vars);
          tmpMeta[0+0] = _varlst;
          tmpMeta[0+1] = _iStateSets;
          goto tmp3_done;
        }
        case 3: {
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT66);
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
  _outDummyVars = tmpMeta[0+0];
  _oStateSets = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oStateSets) { *out_oStateSets = _oStateSets; }
  return _outDummyVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_selectDummyDerivatives2new(threadData_t *threadData, modelica_metatype _dstates, modelica_metatype _states, modelica_metatype _unassignedEqns, modelica_metatype _assignedEqns, modelica_metatype _vars, modelica_metatype _varSize, modelica_metatype _eqns, modelica_metatype _eqnsSize, modelica_metatype _mapIncRowEqn, modelica_metatype _level, modelica_metatype _iStateSets, modelica_metatype *out_oStateSets)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outDummyVars = NULL;
  tmp1 = mmc_unbox_integer(_varSize);
  tmp2 = mmc_unbox_integer(_eqnsSize);
  tmp3 = mmc_unbox_integer(_level);
  _outDummyVars = omc_IndexReduction_selectDummyDerivatives2new(threadData, _dstates, _states, _unassignedEqns, _assignedEqns, _vars, tmp1, _eqns, tmp2, _mapIncRowEqn, tmp3, _iStateSets, out_oStateSets);
  /* skip box _outDummyVars; list<BackendDAE.Var> */
  /* skip box _oStateSets; list<tuple<#Integer, #Integer, #Integer, #Integer, list<BackendDAE.Var>, list<BackendDAE.Equation>, list<BackendDAE.Var>, list<BackendDAE.Equation>>> */
  return _outDummyVars;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectPrioAttribute(threadData_t *threadData, modelica_metatype _v)
{
  modelica_real _prio;
  modelica_metatype _ss = NULL;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prio has no default value.
  // _ss has no default value.
  _ss = omc_BackendVariable_varStateSelect(threadData, _v);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ss;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_BackendVariable_isArtificialState(threadData, _v)?-15.0:-20.0);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = -1.5;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = 0.0;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = 1.5;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 20.0;
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectPrioAttribute(threadData_t *threadData, modelica_metatype _v)
{
  modelica_real _prio;
  modelica_metatype out_prio;
  _prio = omc_IndexReduction_varStateSelectPrioAttribute(threadData, _v);
  out_prio = mmc_mk_rcon(_prio);
  return out_prio;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectHeuristicPrio3(threadData_t *threadData, modelica_metatype _v)
{
  modelica_real _prio;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prio has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _v;
    {
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(omc_ComponentReferenceBasics_crefFirstIdent(threadData, _cr), _OMC_LIT67))) goto tmp3_end;
          tmp1 = -5.0;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0.0;
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
  _prio = tmp1;
  _return: OMC_LABEL_UNUSED
  return _prio;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectHeuristicPrio3(threadData_t *threadData, modelica_metatype _v)
{
  modelica_real _prio;
  modelica_metatype out_prio;
  _prio = omc_IndexReduction_varStateSelectHeuristicPrio3(threadData, _v);
  out_prio = mmc_mk_rcon(_prio);
  return out_prio;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectHeuristicPrio4(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _vars)
{
  modelica_real _prio;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prio has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _v = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _v has no default value.
      // _b has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          
          _cr = tmpMeta8;
          /* Pattern matching succeeded */
          _v = omc_BackendVariable_getVarSingle(threadData, _cr, _vars, NULL);

          _b = omc_BackendVariable_isDummyStateVar(threadData, _v);
          tmp1 = (_b?0.0:0.55);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0.0;
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
  _prio = tmp1;
  _return: OMC_LABEL_UNUSED
  return _prio;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectHeuristicPrio4(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _vars)
{
  modelica_real _prio;
  modelica_metatype out_prio;
  _prio = omc_IndexReduction_varStateSelectHeuristicPrio4(threadData, _inVar, _vars);
  out_prio = mmc_mk_rcon(_prio);
  return out_prio;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectHeuristicPrio5(threadData_t *threadData, modelica_metatype _v, modelica_integer _index, modelica_metatype _om)
{
  modelica_real _prio;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prio has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _om;
    {
      modelica_metatype _row = NULL;
      modelica_metatype _m = NULL;
      modelica_real _n;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _row has no default value.
      // _m has no default value.
      // _n has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0.0;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_real tmp7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _m = tmpMeta6;
          /* Pattern matching succeeded */
          _row = arrayGet(_m,_index) /* DAE.ASUB */;

          _n = 1.0 + ((modelica_real)arrayLength(_m));

          tmp7 = _n;
          if (tmp7 == 0) {goto goto_2;}
          _n = (((modelica_real)listLength(_row))) / tmp7;
          tmp1 = (0.3) * (_n);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectHeuristicPrio5(threadData_t *threadData, modelica_metatype _v, modelica_metatype _index, modelica_metatype _om)
{
  modelica_integer tmp1;
  modelica_real _prio;
  modelica_metatype out_prio;
  tmp1 = mmc_unbox_integer(_index);
  _prio = omc_IndexReduction_varStateSelectHeuristicPrio5(threadData, _v, tmp1, _om);
  out_prio = mmc_mk_rcon(_prio);
  return out_prio;
}

PROTECTED_FUNCTION_STATIC void omc_IndexReduction_printVarListtateSelectHeuristicPrio(threadData_t *threadData, modelica_real _Prio1, modelica_real _Prio2, modelica_real _Prio3, modelica_real _Prio4, modelica_real _Prio5)
{
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
  if(omc_Flags_isSet(threadData, _OMC_LIT75))
  {
    tmpMeta1 = stringAppend(_OMC_LIT68,realString(_Prio1));
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT3);
    fputs(MMC_STRINGDATA(tmpMeta2),stdout);

    tmpMeta3 = stringAppend(_OMC_LIT69,realString(_Prio2));
    tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT3);
    fputs(MMC_STRINGDATA(tmpMeta4),stdout);

    tmpMeta5 = stringAppend(_OMC_LIT70,realString(_Prio3));
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT3);
    fputs(MMC_STRINGDATA(tmpMeta6),stdout);

    tmpMeta7 = stringAppend(_OMC_LIT71,realString(_Prio4));
    tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT3);
    fputs(MMC_STRINGDATA(tmpMeta8),stdout);

    tmpMeta9 = stringAppend(_OMC_LIT72,realString(_Prio5));
    tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT3);
    fputs(MMC_STRINGDATA(tmpMeta10),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_IndexReduction_printVarListtateSelectHeuristicPrio(threadData_t *threadData, modelica_metatype _Prio1, modelica_metatype _Prio2, modelica_metatype _Prio3, modelica_metatype _Prio4, modelica_metatype _Prio5)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  tmp1 = mmc_unbox_real(_Prio1);
  tmp2 = mmc_unbox_real(_Prio2);
  tmp3 = mmc_unbox_real(_Prio3);
  tmp4 = mmc_unbox_real(_Prio4);
  tmp5 = mmc_unbox_real(_Prio5);
  omc_IndexReduction_printVarListtateSelectHeuristicPrio(threadData, tmp1, tmp2, tmp3, tmp4, tmp5);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectHeuristicPrio(threadData_t *threadData, modelica_metatype _v, modelica_metatype _vars, modelica_integer _index, modelica_metatype _m)
{
  modelica_real _prio;
  modelica_real _prio1;
  modelica_real _prio2;
  modelica_real _prio3;
  modelica_real _prio4;
  modelica_real _prio5;
  modelica_boolean _bstart;
  modelica_boolean _bfixed;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prio has no default value.
  // _prio1 has no default value.
  // _prio2 has no default value.
  // _prio3 has no default value.
  // _prio4 has no default value.
  // _prio5 has no default value.
  // _bstart has no default value.
  // _bfixed has no default value.
  _bstart = isSome(omc_BackendVariable_varStartValueOption(threadData, _v));

  _bfixed = omc_BackendVariable_varFixed(threadData, _v);

  if((_bstart && _bfixed))
  {
    _prio1 = 0.5;

    _prio2 = 0.5;
  }
  else
  {
    if(_bfixed)
    {
      _prio1 = 0.1;

      _prio2 = 0.5;
    }
    else
    {
      if(_bstart)
      {
        _prio1 = 0.1;

        _prio2 = 0.0;
      }
      else
      {
        _prio1 = 0.0;

        _prio2 = 0.0;
      }
    }
  }

  _prio3 = omc_IndexReduction_varStateSelectHeuristicPrio3(threadData, _v);

  _prio4 = omc_IndexReduction_varStateSelectHeuristicPrio4(threadData, _v, _vars);

  _prio5 = omc_IndexReduction_varStateSelectHeuristicPrio5(threadData, _v, _index, _m);

  _prio = _prio1 + _prio2 + _prio3 + _prio4 + _prio5;

  omc_IndexReduction_printVarListtateSelectHeuristicPrio(threadData, _prio1, _prio2, _prio3, _prio4, _prio5);
  _return: OMC_LABEL_UNUSED
  return _prio;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectHeuristicPrio(threadData_t *threadData, modelica_metatype _v, modelica_metatype _vars, modelica_metatype _index, modelica_metatype _m)
{
  modelica_integer tmp1;
  modelica_real _prio;
  modelica_metatype out_prio;
  tmp1 = mmc_unbox_integer(_index);
  _prio = omc_IndexReduction_varStateSelectHeuristicPrio(threadData, _v, _vars, tmp1, _m);
  out_prio = mmc_mk_rcon(_prio);
  return out_prio;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_IndexReduction_varStateSelectPrio(threadData_t *threadData, modelica_metatype _v, modelica_metatype _vars, modelica_integer _index, modelica_metatype _m, modelica_real *out_prio_heu)
{
  modelica_real _prio_att;
  modelica_real _prio_heu;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prio_att has no default value.
  // _prio_heu has no default value.
  _prio_att = omc_IndexReduction_varStateSelectPrioAttribute(threadData, _v);

  _prio_heu = omc_IndexReduction_varStateSelectHeuristicPrio(threadData, _v, _vars, _index, _m);
  _return: OMC_LABEL_UNUSED
  if (out_prio_heu) { *out_prio_heu = _prio_heu; }
  return _prio_att;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_varStateSelectPrio(threadData_t *threadData, modelica_metatype _v, modelica_metatype _vars, modelica_metatype _index, modelica_metatype _m, modelica_metatype *out_prio_heu)
{
  modelica_integer tmp1;
  modelica_real _prio_heu;
  modelica_real _prio_att;
  modelica_metatype out_prio_att;
  tmp1 = mmc_unbox_integer(_index);
  _prio_att = omc_IndexReduction_varStateSelectPrio(threadData, _v, _vars, tmp1, _m, &_prio_heu);
  out_prio_att = mmc_mk_rcon(_prio_att);
  if (out_prio_heu) { *out_prio_heu = mmc_mk_rcon(_prio_heu); }
  return out_prio_att;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_IndexReduction_sortprioTuples(threadData_t *threadData, modelica_metatype _inTpl1, modelica_metatype _inTpl2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = (mmc_unbox_real(omc_Util_tuple22(threadData, _inTpl1)) > mmc_unbox_real(omc_Util_tuple22(threadData, _inTpl2)));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_sortprioTuples(threadData_t *threadData, modelica_metatype _inTpl1, modelica_metatype _inTpl2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_IndexReduction_sortprioTuples(threadData, _inTpl1, _inTpl2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_sortStateCandidatesVars(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype _allVars, modelica_metatype _m)
{
  modelica_metatype _outStates = NULL;
  modelica_integer _varsize;
  modelica_metatype _varIndices = NULL;
  modelica_metatype _prioTuples = NULL;
  modelica_metatype _v = NULL;
  modelica_metatype _varCref = NULL;
  modelica_real _prio1;
  modelica_real _prio2;
  modelica_metatype _prio = NULL;
  modelica_metatype _index = NULL;
  modelica_integer _idx;
  modelica_metatype _vlst = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStates has no default value.
  // _varsize has no default value.
  // _varIndices has no default value.
  // _prioTuples has no default value.
  // _v has no default value.
  // _varCref has no default value.
  // _prio1 has no default value.
  // _prio2 has no default value.
  // _prio has no default value.
  // _index has no default value.
  // _idx has no default value.
  // _vlst has no default value.
  _varsize = omc_BackendVariable_varsSize(threadData, _inVars);

  _index = arrayCreate(_varsize, mmc_mk_integer(((modelica_integer) -1)));

  _prio = arrayCreate(_varsize, _OMC_LIT76);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _varsize;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _idx;
    for(_idx = ((modelica_integer) 1); in_range_integer(_idx, tmp1, tmp3); _idx += tmp2)
    {
      _v = omc_BackendVariable_getVarAt(threadData, _inVars, _idx);

      _prio1 = omc_IndexReduction_varStateSelectPrio(threadData, _v, _allVars, _idx, _m ,&_prio2);

      arrayUpdate(_prio,_idx,mmc_mk_real(_prio1 + _prio2));

      arrayUpdate(_index,_idx,mmc_mk_integer(_idx));

      if(omc_Flags_isSet(threadData, _OMC_LIT75))
      {
        _varCref = omc_BackendVariable_varCref(threadData, _v);

        omc_BackendDump_debugStrCrefStrRealStrRealStrRealStr(threadData, _OMC_LIT77, _varCref, _OMC_LIT78, _prio1, _OMC_LIT79, _prio2, _OMC_LIT80, mmc_unbox_real(arrayGet(_prio,_idx) /* DAE.ASUB */), _OMC_LIT3);
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp5;
    modelica_metatype tmpMeta6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar0;
    modelica_integer tmp8;
    modelica_integer tmp9;
    modelica_integer tmp10;
    modelica_integer _idx;
    tmp9 = ((modelica_integer) -1) /* Range step-value */;
    tmp10 = ((modelica_integer) 1) /* Range stop-value */;
    _idx = _varsize /* Range start-value */;
    _idx = (_varsize /* Range start-value */)-tmp9;
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta6; /* defaultValue */
    tmp5 = &__omcQ_24tmpVar1;
    while(1) {
      tmp8 = 1;
      if (tmp9 > 0 ? _idx+tmp9 <= tmp10 : _idx+tmp9 >= tmp10) {
        _idx += tmp9;
        tmp8--;
      }
      if (tmp8 == 0) {
        tmpMeta7 = mmc_mk_box2(0, arrayGet(_index,_idx) /* DAE.ASUB */, arrayGet(_prio,_idx) /* DAE.ASUB */);
        __omcQ_24tmpVar0 = tmpMeta7;
        *tmp5 = mmc_mk_cons(__omcQ_24tmpVar0,0);
        tmp5 = &MMC_CDR(*tmp5);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp5 = mmc_mk_nil();
    tmpMeta4 = __omcQ_24tmpVar1;
  }
  _prioTuples = tmpMeta4;

  _prioTuples = omc_List_sort(threadData, _prioTuples, boxvar_IndexReduction_sortprioTuples);

  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp12;
    modelica_metatype tmpMeta13;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp14;
    modelica_metatype _elem_loopVar = 0;
    modelica_metatype _elem;
    _elem_loopVar = _prioTuples;
    tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta13; /* defaultValue */
    tmp12 = &__omcQ_24tmpVar3;
    while(1) {
      tmp14 = 1;
      if (!listEmpty(_elem_loopVar)) {
        _elem = MMC_CAR(_elem_loopVar);
        _elem_loopVar = MMC_CDR(_elem_loopVar);
        tmp14--;
      }
      if (tmp14 == 0) {
        __omcQ_24tmpVar2 = omc_Util_tuple21(threadData, _elem);
        *tmp12 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp12 = &MMC_CDR(*tmp12);
      } else if (tmp14 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp12 = mmc_mk_nil();
    tmpMeta11 = __omcQ_24tmpVar3;
  }
  _varIndices = tmpMeta11;

  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp16;
    modelica_metatype tmpMeta17;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp18;
    modelica_metatype _idx_loopVar = 0;
    modelica_metatype _idx;
    _idx_loopVar = _varIndices;
    tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta17; /* defaultValue */
    tmp16 = &__omcQ_24tmpVar5;
    while(1) {
      tmp18 = 1;
      if (!listEmpty(_idx_loopVar)) {
        _idx = MMC_CAR(_idx_loopVar);
        _idx_loopVar = MMC_CDR(_idx_loopVar);
        tmp18--;
      }
      if (tmp18 == 0) {
        __omcQ_24tmpVar4 = omc_BackendVariable_getVarAt(threadData, _inVars, mmc_unbox_integer(_idx));
        *tmp16 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp16 = &MMC_CDR(*tmp16);
      } else if (tmp18 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp16 = mmc_mk_nil();
    tmpMeta15 = __omcQ_24tmpVar5;
  }
  _vlst = tmpMeta15;

  _outStates = omc_BackendVariable_listVar1(threadData, _vlst);
  _return: OMC_LABEL_UNUSED
  return _outStates;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_removeFirstOrgEqns(threadData_t *threadData, modelica_metatype _inOrgEqns, modelica_metatype *out_outOrgEqns)
{
  modelica_metatype _outEqnsLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outOrgEqns = NULL;
  modelica_metatype _orgeqns = NULL;
  modelica_integer _e;
  modelica_integer _numEqs;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEqnsLst = tmpMeta1;
  // _outOrgEqns has no default value.
  // _orgeqns has no default value.
  // _e has no default value.
  // _numEqs has no default value.
  _outOrgEqns = _inOrgEqns;

  _numEqs = arrayLength(_inOrgEqns);

  tmp14 = ((modelica_integer) 1); tmp15 = 1; tmp16 = _numEqs;
  if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
  {
    modelica_integer _e;
    for(_e = ((modelica_integer) 1); in_range_integer(_e, tmp14, tmp16); _e += tmp15)
    {
      _orgeqns = arrayGet(_outOrgEqns, _e);

      if((!listEmpty(_orgeqns)))
      {
        
        
        { /* match expression */
          modelica_metatype tmp5_1;
          tmp5_1 = _orgeqns;
          {
            modelica_metatype _eqn = NULL;
            modelica_metatype _eqns = NULL;
            volatile mmc_switch_type tmp5;
            int tmp6;
            // _eqn has no default value.
            // _eqns has no default value.
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
                if (!listEmpty(tmpMeta8)) goto tmp4_end;
                _eqn = tmpMeta7;
                /* Pattern matching succeeded */
                tmpMeta9 = mmc_mk_cons(_eqn, _outEqnsLst);
                tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
                tmpMeta[0+0] = tmpMeta9;
                tmpMeta[0+1] = tmpMeta10;
                goto tmp4_done;
              }
              case 1: {
                modelica_metatype tmpMeta11;
                modelica_metatype tmpMeta12;
                modelica_metatype tmpMeta13;
                if (listEmpty(tmp5_1)) goto tmp4_end;
                tmpMeta11 = MMC_CAR(tmp5_1);
                tmpMeta12 = MMC_CDR(tmp5_1);
                _eqn = tmpMeta11;
                _eqns = tmpMeta12;
                /* Pattern matching succeeded */
                tmpMeta13 = mmc_mk_cons(_eqn, _outEqnsLst);
                tmpMeta[0+0] = tmpMeta13;
                tmpMeta[0+1] = _eqns;
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
        _outEqnsLst = tmpMeta[0+0];
        _orgeqns = tmpMeta[0+1];

        arrayUpdate(_outOrgEqns, _e, _orgeqns);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outOrgEqns) { *out_outOrgEqns = _outOrgEqns; }
  return _outEqnsLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getEqnsforDynamicStateSelectionRows(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _m, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset, modelica_boolean _iFound, modelica_boolean *out_oFound)
{
  modelica_metatype _outSubset = NULL;
  modelica_boolean _oFound;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSubset has no default value.
  // _oFound has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _rows;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _set = NULL;
      modelica_metatype _eqns = NULL;
      modelica_integer _rc;
      modelica_integer _r;
      modelica_integer _e;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _set has no default value.
      // _eqns has no default value.
      // _rc has no default value.
      // _r has no default value.
      // _e has no default value.
      // _b has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inSubset;
          tmp1_c1 = _iFound;
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
          _r = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!(mmc_unbox_integer(arrayGet(_ass2,_r) /* DAE.ASUB */) > ((modelica_integer) 0)))) goto tmp3_end;
          /* Tail recursive call */
          _rows = _rest;
          _iFound = 1 /* true */;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          tmp11 = mmc_unbox_integer(tmpMeta9);
          _r = tmp11  /* pattern as ty=Integer */;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((mmc_unbox_integer(arrayGet(_ass2,_r) /* DAE.ASUB */) > ((modelica_integer) 0)) && (mmc_unbox_integer(arrayGet(_colummarks,mmc_unbox_integer(arrayGet(_ass2,_r) /* DAE.ASUB */)) /* DAE.ASUB */) == ((modelica_integer) 0)))) goto tmp3_end;
          _rc = mmc_unbox_integer(arrayGet(_ass2,_r) /* DAE.ASUB */);

          _e = mmc_unbox_integer(arrayGet(_mapIncRowEqn,_rc) /* DAE.ASUB */);

          _eqns = arrayGet(_mapEqnIncRow,_e) /* DAE.ASUB */;

          omc_List_fold1r(threadData, _eqns, boxvar_arrayUpdate, mmc_mk_integer((_iFound?_mark:(-_mark))), _colummarks);

          _set = omc_IndexReduction_getEqnsforDynamicStateSelectionPhase(threadData, _eqns, _m, _mT, _mark, _colummarks, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, _inSubset, 0 /* false */ ,&_b);

          tmp13 = (modelica_boolean)(_b && (!_iFound));
          if(tmp13)
          {
            tmpMeta14 = _eqns;
          }
          else
          {
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta14 = tmpMeta12;
          }
          _eqns = tmpMeta14;

          omc_List_fold1r(threadData, _eqns, boxvar_arrayUpdate, mmc_mk_integer(_mark), _colummarks);
          /* Tail recursive call */
          _rows = _rest;
          _inSubset = _set;
          _iFound = (_b || _iFound);
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          tmp17 = mmc_unbox_integer(tmpMeta15);
          _r = tmp17  /* pattern as ty=Integer */;
          _rest = tmpMeta16;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(mmc_unbox_integer(arrayGet(_ass2,_r) /* DAE.ASUB */) > ((modelica_integer) 0))) goto tmp3_end;
          _rc = mmc_unbox_integer(arrayGet(_ass2,_r) /* DAE.ASUB */);

          _b = (mmc_unbox_integer(arrayGet(_colummarks,_rc) /* DAE.ASUB */) > ((modelica_integer) 0));
          /* Tail recursive call */
          _rows = _rest;
          _iFound = (_b || _iFound);
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
  _outSubset = tmpMeta[0+0];
  _oFound = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_oFound) { *out_oFound = _oFound; }
  return _outSubset;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getEqnsforDynamicStateSelectionRows(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset, modelica_metatype _iFound, modelica_metatype *out_oFound)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _oFound;
  modelica_metatype _outSubset = NULL;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_iFound);
  _outSubset = omc_IndexReduction_getEqnsforDynamicStateSelectionRows(threadData, _rows, _m, _mT, tmp1, _colummarks, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, _inSubset, tmp2, &_oFound);
  /* skip box _outSubset; list<#Integer> */
  if (out_oFound) { *out_oFound = mmc_mk_icon(_oFound); }
  return _outSubset;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getEqnsforDynamicStateSelectionPhase(threadData_t *threadData, modelica_metatype _elst, modelica_metatype _m, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset, modelica_boolean _iFound, modelica_boolean *out_oFound)
{
  modelica_metatype _outSubset = NULL;
  modelica_boolean _oFound;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSubset has no default value.
  // _oFound has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _elst;
    {
      modelica_integer _e;
      modelica_metatype _rows = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _set = NULL;
      modelica_boolean _found;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _rows has no default value.
      // _rest has no default value.
      // _set has no default value.
      // _found has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inSubset;
          tmp1_c1 = _iFound;
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
          _e = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _rows = omc_List_select(threadData, arrayGet(_m,_e) /* DAE.ASUB */, boxvar_Util_intPositive);

          _rows = omc_List_removeOnTrue(threadData, arrayGet(_ass1,_e) /* DAE.ASUB */, boxvar_intEq, _rows);

          _set = omc_IndexReduction_getEqnsforDynamicStateSelectionRows(threadData, _rows, _m, _mT, _mark, _colummarks, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, _inSubset, 0 /* false */ ,&_found);

          _set = omc_List_consOnTrue(threadData, _found, mmc_mk_integer(_e), _set);

          arrayUpdate(_colummarks, _e, mmc_mk_integer((_found?_mark:mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */))));
          /* Tail recursive call */
          _elst = _rest;
          _inSubset = _set;
          _iFound = (_found || _iFound);
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
  _outSubset = tmpMeta[0+0];
  _oFound = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_oFound) { *out_oFound = _oFound; }
  return _outSubset;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getEqnsforDynamicStateSelectionPhase(threadData_t *threadData, modelica_metatype _elst, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset, modelica_metatype _iFound, modelica_metatype *out_oFound)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _oFound;
  modelica_metatype _outSubset = NULL;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_iFound);
  _outSubset = omc_IndexReduction_getEqnsforDynamicStateSelectionPhase(threadData, _elst, _m, _mT, tmp1, _colummarks, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, _inSubset, tmp2, &_oFound);
  /* skip box _outSubset; list<#Integer> */
  if (out_oFound) { *out_oFound = mmc_mk_icon(_oFound); }
  return _outSubset;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getEqnsforDynamicStateSelection1(threadData_t *threadData, modelica_metatype _U, modelica_metatype _m, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset)
{
  modelica_metatype _outSubset = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSubset has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _U;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _set = NULL;
      modelica_integer _e;
      modelica_integer _e1;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _eqns has no default value.
      // _set has no default value.
      // _e has no default value.
      // _e1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inSubset;
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
          _e = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */) == ((modelica_integer) 0))) goto tmp3_end;
          _e1 = mmc_unbox_integer(arrayGet(_mapIncRowEqn,_e) /* DAE.ASUB */);

          _eqns = arrayGet(_mapEqnIncRow,_e1) /* DAE.ASUB */;

          omc_List_fold1r(threadData, _eqns, boxvar_arrayUpdate, mmc_mk_integer(_mark), _colummarks);

          _set = omc_IndexReduction_getEqnsforDynamicStateSelectionPhase(threadData, _eqns, _m, _mT, _mark, _colummarks, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, _inSubset, 0 /* false */, NULL);
          /* Tail recursive call */
          _U = _rest;
          _mark = ((modelica_integer) 1) + _mark;
          _inSubset = _set;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _U = _rest;
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
  _outSubset = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outSubset;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getEqnsforDynamicStateSelection1(threadData_t *threadData, modelica_metatype _U, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _inSubset)
{
  modelica_integer tmp1;
  modelica_metatype _outSubset = NULL;
  tmp1 = mmc_unbox_integer(_mark);
  _outSubset = omc_IndexReduction_getEqnsforDynamicStateSelection1(threadData, _U, _m, _mT, tmp1, _colummarks, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, _inSubset);
  /* skip box _outSubset; list<#Integer> */
  return _outSubset;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getEqnsforDynamicStateSelection(threadData_t *threadData, modelica_metatype _U, modelica_integer _neqns, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _eqns = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqns has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _U;
    {
      modelica_metatype _colummarks = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _colummarks has no default value.
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
          
          /* Pattern matching succeeded */
          _colummarks = arrayCreate(_neqns, mmc_mk_integer(((modelica_integer) 0)));
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_IndexReduction_getEqnsforDynamicStateSelection1(threadData, _U, _m, _mT, ((modelica_integer) 1), _colummarks, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, tmpMeta7);
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
  _eqns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqns;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getEqnsforDynamicStateSelection(threadData_t *threadData, modelica_metatype _U, modelica_metatype _neqns, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_integer tmp1;
  modelica_metatype _eqns = NULL;
  tmp1 = mmc_unbox_integer(_neqns);
  _eqns = omc_IndexReduction_getEqnsforDynamicStateSelection(threadData, _U, tmp1, _m, _mT, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn);
  /* skip box _eqns; list<#Integer> */
  return _eqns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getSetEqnStates(threadData_t *threadData, modelica_integer _v, modelica_metatype _flag, modelica_metatype _inM, modelica_metatype _vec2, modelica_metatype _iStates)
{
  modelica_metatype _oStates = NULL;
  modelica_metatype _states = NULL;
  modelica_metatype _dstates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oStates has no default value.
  // _states has no default value.
  // _dstates has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iStates;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _states = tmpMeta2;
  _dstates = tmpMeta3;

  _states = omc_List_consOnTrue(threadData, ((mmc_unbox_integer(arrayGet(_vec2,_v) /* DAE.ASUB */) < ((modelica_integer) 1)) && mmc_unbox_boolean(arrayGet(_flag,_v) /* DAE.ASUB */)), mmc_mk_integer(_v), _states);

  _dstates = omc_List_consOnTrue(threadData, ((mmc_unbox_integer(arrayGet(_vec2,_v) /* DAE.ASUB */) > ((modelica_integer) 0)) && mmc_unbox_boolean(arrayGet(_flag,_v) /* DAE.ASUB */)), mmc_mk_integer(_v), _dstates);

  arrayUpdate(_flag, _v, mmc_mk_boolean(0 /* false */));

  tmpMeta4 = mmc_mk_box2(0, _states, _dstates);
  _oStates = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _oStates;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getSetEqnStates(threadData_t *threadData, modelica_metatype _v, modelica_metatype _flag, modelica_metatype _inM, modelica_metatype _vec2, modelica_metatype _iStates)
{
  modelica_integer tmp1;
  modelica_metatype _oStates = NULL;
  tmp1 = mmc_unbox_integer(_v);
  _oStates = omc_IndexReduction_getSetEqnStates(threadData, tmp1, _flag, _inM, _vec2, _iStates);
  /* skip box _oStates; tuple<list<#Integer>, list<#Integer>> */
  return _oStates;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getSetStates(threadData_t *threadData, modelica_integer _e, modelica_metatype _flag, modelica_metatype _inM, modelica_metatype _vec2, modelica_metatype _iStates)
{
  modelica_metatype _oStates = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oStates has no default value.
  _oStates = omc_List_fold3(threadData, arrayGet(_inM,_e) /* DAE.ASUB */, boxvar_IndexReduction_getSetEqnStates, _flag, _inM, _vec2, _iStates);
  _return: OMC_LABEL_UNUSED
  return _oStates;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getSetStates(threadData_t *threadData, modelica_metatype _e, modelica_metatype _flag, modelica_metatype _inM, modelica_metatype _vec2, modelica_metatype _iStates)
{
  modelica_integer tmp1;
  modelica_metatype _oStates = NULL;
  tmp1 = mmc_unbox_integer(_e);
  _oStates = omc_IndexReduction_getSetStates(threadData, tmp1, _flag, _inM, _vec2, _iStates);
  /* skip box _oStates; tuple<list<#Integer>, list<#Integer>> */
  return _oStates;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getSetSystem(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _inMapEqnIncRow, modelica_metatype _inMapIncRowEqn, modelica_metatype _vec1, modelica_metatype _iVars, modelica_metatype _iEqnsArr, modelica_metatype _flag, modelica_integer _n, modelica_metatype _iEqnsLst, modelica_metatype _iVarsLst, modelica_metatype _iAss1, modelica_metatype _iAss2, modelica_metatype *out_oVarsLst, modelica_metatype *out_oAss1, modelica_metatype *out_oAss2, modelica_metatype *out_oEqnsArr)
{
  modelica_metatype _oEqnsLst = NULL;
  modelica_metatype _oVarsLst = NULL;
  modelica_metatype _oAss1 = NULL;
  modelica_metatype _oAss2 = NULL;
  modelica_metatype _oEqnsArr = NULL;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oEqnsLst has no default value.
  // _oVarsLst has no default value.
  // _oAss1 has no default value.
  // _oAss2 has no default value.
  // _oEqnsArr has no default value.
  
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iEqns;
    {
      modelica_integer _e;
      modelica_integer _e1;
      modelica_metatype _rest = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _vindx = NULL;
      modelica_metatype _ass = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _varlst = NULL;
      modelica_metatype _eqnarr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e1 has no default value.
      // _rest has no default value.
      // _eqns has no default value.
      // _vindx has no default value.
      // _ass has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _eqn has no default value.
      // _varlst has no default value.
      // _eqnarr has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _iEqnsLst;
          tmpMeta[0+1] = _iVarsLst;
          tmpMeta[0+2] = _iAss1;
          tmpMeta[0+3] = _iAss2;
          tmpMeta[0+4] = _iEqnsArr;
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
          _e = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(mmc_unbox_boolean(arrayGet(_flag,_e) /* DAE.ASUB */) && (mmc_unbox_integer(arrayGet(_vec1,_e) /* DAE.ASUB */) > ((modelica_integer) 0)))) goto tmp3_end;
          _e1 = mmc_unbox_integer(arrayGet(_inMapIncRowEqn,_e) /* DAE.ASUB */);

          _eqn = omc_BackendEquation_get(threadData, _iEqnsArr, _e1);

          _eqnarr = omc_BackendEquation_delete(threadData, _e1, _iEqnsArr);

          _eqns = arrayGet(_inMapEqnIncRow,_e1) /* DAE.ASUB */;

          omc_List_fold1r(threadData, _eqns, boxvar_arrayUpdate, mmc_mk_boolean(0 /* false */), _flag);

          _vindx = omc_List_map1r(threadData, _eqns, boxvar_arrayGet, _vec1);

          _varlst = listAppend(omc_List_map1r(threadData, _vindx, boxvar_BackendVariable_getVarAt, _iVars), _iVarsLst);

          _ass = omc_List_intRange2(threadData, ((modelica_integer) 1) + _n - listLength(_eqns), _n);

          _ass1 = listAppend(_ass, _iAss1);

          _ass2 = listAppend(_ass, _iAss2);
          tmpMeta9 = mmc_mk_cons(_eqn, _iEqnsLst);
          /* Tail recursive call */
          _iEqns = _rest;
          _iEqnsArr = _eqnarr;
          _n = _n - listLength(_eqns);
          _iEqnsLst = tmpMeta9;
          _iVarsLst = _varlst;
          _iAss1 = _ass1;
          _iAss2 = _ass2;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _iEqns = _rest;
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
  _oEqnsLst = tmpMeta[0+0];
  _oVarsLst = tmpMeta[0+1];
  _oAss1 = tmpMeta[0+2];
  _oAss2 = tmpMeta[0+3];
  _oEqnsArr = tmpMeta[0+4];
  _return: OMC_LABEL_UNUSED
  if (out_oVarsLst) { *out_oVarsLst = _oVarsLst; }
  if (out_oAss1) { *out_oAss1 = _oAss1; }
  if (out_oAss2) { *out_oAss2 = _oAss2; }
  if (out_oEqnsArr) { *out_oEqnsArr = _oEqnsArr; }
  return _oEqnsLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getSetSystem(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _inMapEqnIncRow, modelica_metatype _inMapIncRowEqn, modelica_metatype _vec1, modelica_metatype _iVars, modelica_metatype _iEqnsArr, modelica_metatype _flag, modelica_metatype _n, modelica_metatype _iEqnsLst, modelica_metatype _iVarsLst, modelica_metatype _iAss1, modelica_metatype _iAss2, modelica_metatype *out_oVarsLst, modelica_metatype *out_oAss1, modelica_metatype *out_oAss2, modelica_metatype *out_oEqnsArr)
{
  modelica_integer tmp1;
  modelica_metatype _oEqnsLst = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _oEqnsLst = omc_IndexReduction_getSetSystem(threadData, _iEqns, _inMapEqnIncRow, _inMapIncRowEqn, _vec1, _iVars, _iEqnsArr, _flag, tmp1, _iEqnsLst, _iVarsLst, _iAss1, _iAss2, out_oVarsLst, out_oAss1, out_oAss2, out_oEqnsArr);
  /* skip box _oEqnsLst; list<BackendDAE.Equation> */
  /* skip box _oVarsLst; list<BackendDAE.Var> */
  /* skip box _oAss1; list<#Integer> */
  /* skip box _oAss2; list<#Integer> */
  /* skip box _oEqnsArr; ExpandableArray<BackendDAE.Equation> */
  return _oEqnsLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_forceInlinEqn(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inFuncs, modelica_metatype *out_funcs)
{
  modelica_metatype _e = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _e has no default value.
  // _funcs has no default value.
  _funcs = _inFuncs;

  tmpMeta1 = mmc_mk_box2(0, mmc_mk_some(_funcs), _OMC_LIT84);
  _e = omc_Inline_forceInlineExp(threadData, _inExp, tmpMeta1, _OMC_LIT88, boxvar_Ceval_cevalSimpleWithFunctionTreeReturnExp, NULL, NULL);
  _return: OMC_LABEL_UNUSED
  if (out_funcs) { *out_funcs = _funcs; }
  return _e;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_processComps4New(threadData_t *threadData, modelica_metatype _iSets, modelica_integer _inVarSize, modelica_integer _inEqnsSize, modelica_metatype _iVars, modelica_metatype _iEqns, modelica_metatype _inM, modelica_metatype _inMT, modelica_metatype _inMapEqnIncRow, modelica_metatype _inMapIncRowEqn, modelica_metatype _vec1, modelica_metatype _vec2, modelica_integer _level, modelica_metatype _iShared, modelica_metatype _iStateSets, modelica_metatype *out_outDummyStates, modelica_metatype *out_oStateSets)
{
  modelica_metatype _outDummyVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outDummyStates = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _oStateSets = NULL;
  modelica_metatype _mapIncRowEqn1 = NULL;
  modelica_metatype _ass1arr = NULL;
  modelica_metatype _dummyStates = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _eqns1 = NULL;
  modelica_metatype _syst = NULL;
  modelica_metatype _seteqns = NULL;
  modelica_metatype _unassigned = NULL;
  modelica_metatype _assigned = NULL;
  modelica_metatype _set = NULL;
  modelica_metatype _statevars = NULL;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _assigend1 = NULL;
  modelica_metatype _range = NULL;
  modelica_metatype _varlst = NULL;
  modelica_metatype _flag = NULL;
  modelica_metatype _eqnlst = NULL;
  modelica_metatype _states1 = NULL;
  modelica_metatype _dstates1 = NULL;
  modelica_integer _nstatevars;
  modelica_integer _nassigned;
  modelica_integer _nunassigned;
  modelica_integer _nass1arr;
  modelica_integer _n;
  modelica_integer _nv;
  modelica_integer _ne;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outDummyVars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outDummyStates = tmpMeta2;
  _oStateSets = _iStateSets;
  // _mapIncRowEqn1 has no default value.
  // _ass1arr has no default value.
  // _dummyStates has no default value.
  // _vars has no default value.
  // _eqns has no default value.
  _eqns1 = _iEqns;
  // _syst has no default value.
  // _seteqns has no default value.
  // _unassigned has no default value.
  // _assigned has no default value.
  // _set has no default value.
  // _statevars has no default value.
  // _ass1 has no default value.
  // _ass2 has no default value.
  // _assigend1 has no default value.
  // _range has no default value.
  // _varlst has no default value.
  // _flag has no default value.
  // _eqnlst has no default value.
  // _states1 has no default value.
  // _dstates1 has no default value.
  // _nstatevars has no default value.
  // _nassigned has no default value.
  // _nunassigned has no default value.
  // _nass1arr has no default value.
  // _n has no default value.
  // _nv has no default value.
  // _ne has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp4_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          /* Pattern matching succeeded */
          {
            modelica_metatype _seteqns;
            for (tmpMeta7 = _iSets; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _seteqns = MMC_CAR(tmpMeta7);
              if((!listEmpty(omc_List_select1r(threadData, _seteqns, boxvar_Matching_isUnAssigned, _vec1))))
              {
                _unassigned = omc_List_select1r(threadData, _seteqns, boxvar_Matching_isUnAssigned, _vec1);

                _n = arrayLength(_inM);

                _set = omc_IndexReduction_getEqnsforDynamicStateSelection(threadData, _unassigned, _n, _inM, _inMT, _vec1, _vec2, _inMapEqnIncRow, _inMapIncRowEqn);

                _assigned = omc_List_select1r(threadData, _set, boxvar_Matching_isAssigned, _vec1);

                _flag = arrayCreate(_inVarSize, mmc_mk_boolean(1 /* true */));

                /* Pattern-matching assignment */
                tmpMeta8 = omc_List_fold3(threadData, _set, boxvar_IndexReduction_getSetStates, _flag, _inM, _vec2, _OMC_LIT89);
                tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
                _statevars = tmpMeta9;

                _nstatevars = listLength(_statevars);

                tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
                _ass1 = omc_List_consN(threadData, _nstatevars, mmc_mk_integer(((modelica_integer) -1)), tmpMeta10);

                _nunassigned = listLength(_unassigned);

                tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
                _ass2 = omc_List_consN(threadData, _nunassigned, mmc_mk_integer(((modelica_integer) -1)), tmpMeta11);

                _varlst = omc_List_map1r(threadData, _statevars, boxvar_BackendVariable_getVarAt, _iVars);

                _assigend1 = omc_List_map1r(threadData, _unassigned, boxvar_arrayGet, _inMapIncRowEqn);

                _n = arrayLength(_inMapIncRowEqn);

                _assigend1 = omc_List_uniqueIntN(threadData, _assigend1, _n);

                _eqnlst = omc_BackendEquation_getList(threadData, _assigend1, _eqns1);

                _eqns1 = omc_List_fold(threadData, _assigend1, boxvar_BackendEquation_delete, _eqns1);

                _nassigned = listLength(_assigned);

                _flag = arrayCreate(_inEqnsSize, mmc_mk_boolean(1 /* true */));

                _eqnlst = omc_IndexReduction_getSetSystem(threadData, _assigned, _inMapEqnIncRow, _inMapIncRowEqn, _vec1, _iVars, _eqns1, _flag, _nassigned, _eqnlst, _varlst, _ass1, _ass2 ,&_varlst ,&_ass1 ,&_ass2 ,&_eqns1);

                _eqns = omc_BackendEquation_listEquation(threadData, _eqnlst);

                _vars = omc_BackendVariable_listVar1(threadData, _varlst);

                tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
                _syst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta12, _OMC_LIT37, omc_BackendEquation_emptyEqns(threadData));

                omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _syst, _iShared, 0 /* false */ ,NULL ,NULL ,&_mapIncRowEqn1);

                _ass1arr = listArray(_ass1);

                _nass1arr = arrayLength(_ass1arr);

                _dstates1 = omc_IndexReduction_checkAssignment(threadData, ((modelica_integer) 1), _nass1arr, _ass1arr, _vars ,&_states1);

                tmp14 = (modelica_boolean)(!listEmpty(_assigned));
                if(tmp14)
                {
                  tmpMeta15 = omc_List_intRange2(threadData, ((modelica_integer) 1), _nassigned);
                }
                else
                {
                  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta15 = tmpMeta13;
                }
                _assigend1 = tmpMeta15;

                _nunassigned = _nassigned + _nunassigned;

                _nassigned = ((modelica_integer) 1) + _nassigned;

                _range = omc_List_intRange2(threadData, _nassigned, _nunassigned);

                _nv = omc_BackendVariable_varsSize(threadData, _vars);

                _ne = omc_BackendEquation_equationArraySize(threadData, _eqns);

                _varlst = omc_IndexReduction_selectDummyDerivatives2new(threadData, _dstates1, _states1, _range, _assigend1, _vars, _nv, _eqns, _ne, _mapIncRowEqn1, _level, _oStateSets ,&_oStateSets);

                _dummyStates = omc_List_map(threadData, _varlst, boxvar_BackendVariable_varCref);

                _outDummyStates = omc_List_append__reverse(threadData, _dummyStates, _outDummyStates);

                _outDummyVars = listAppend(_varlst, _outDummyVars);
              }
            }
          }

          _outDummyStates = listReverseInPlace(_outDummyStates);
          goto tmp4_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT91);

          goto goto_3;
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
      if (++tmp5 < 2) {
        goto tmp4_top;
      }
      MMC_THROW_INTERNAL();
      tmp4_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_outDummyStates) { *out_outDummyStates = _outDummyStates; }
  if (out_oStateSets) { *out_oStateSets = _oStateSets; }
  return _outDummyVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_processComps4New(threadData_t *threadData, modelica_metatype _iSets, modelica_metatype _inVarSize, modelica_metatype _inEqnsSize, modelica_metatype _iVars, modelica_metatype _iEqns, modelica_metatype _inM, modelica_metatype _inMT, modelica_metatype _inMapEqnIncRow, modelica_metatype _inMapIncRowEqn, modelica_metatype _vec1, modelica_metatype _vec2, modelica_metatype _level, modelica_metatype _iShared, modelica_metatype _iStateSets, modelica_metatype *out_outDummyStates, modelica_metatype *out_oStateSets)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outDummyVars = NULL;
  modelica_metatype tmpMeta4;
  tmp1 = mmc_unbox_integer(_inVarSize);
  tmp2 = mmc_unbox_integer(_inEqnsSize);
  tmp3 = mmc_unbox_integer(_level);
  _outDummyVars = omc_IndexReduction_processComps4New(threadData, _iSets, tmp1, tmp2, _iVars, _iEqns, _inM, _inMT, _inMapEqnIncRow, _inMapIncRowEqn, _vec1, _vec2, tmp3, _iShared, _iStateSets, out_outDummyStates, out_oStateSets);
  /* skip box _outDummyVars; list<BackendDAE.Var> */
  /* skip box _outDummyStates; list<DAE.ComponentRef> */
  /* skip box _oStateSets; list<tuple<#Integer, #Integer, #Integer, #Integer, list<BackendDAE.Var>, list<BackendDAE.Equation>, list<BackendDAE.Var>, list<BackendDAE.Equation>>> */
  return _outDummyVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_partitionSystemSplitt(threadData_t *threadData, modelica_integer _index, modelica_metatype _rowmarkarr, modelica_metatype _systsarr)
{
  modelica_metatype _osystsarr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osystsarr has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = _index;
    {
      modelica_integer _i;
      modelica_metatype _arr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _arr has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _systsarr;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          _i = mmc_unbox_integer(arrayGet(_rowmarkarr,_index) /* DAE.ASUB */);

          _arr = omc_Array_consToElement(threadData, _i, mmc_mk_integer(_index), _systsarr);
          /* Tail recursive call */
          _index = ((modelica_integer) -1) + _index;
          _systsarr = _arr;
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
  _osystsarr = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _osystsarr;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_partitionSystemSplitt(threadData_t *threadData, modelica_metatype _index, modelica_metatype _rowmarkarr, modelica_metatype _systsarr)
{
  modelica_integer tmp1;
  modelica_metatype _osystsarr = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _osystsarr = omc_IndexReduction_partitionSystemSplitt(threadData, tmp1, _rowmarkarr, _systsarr);
  /* skip box _osystsarr; array<list<#Integer>> */
  return _osystsarr;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_partitionSystemstraverseRows(threadData_t *threadData, modelica_metatype _iRows, modelica_metatype _iQueue, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rowmarkarr, modelica_metatype _collmarkarr, modelica_integer _iNSystems)
{
  modelica_integer _oNSystems;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oNSystems has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iRows;
    tmp4_2 = _iQueue;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _colls = NULL;
      modelica_metatype _rows = NULL;
      modelica_integer _r;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _colls has no default value.
      // _rows has no default value.
      // _r has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1) + _iNSystems;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          /* Tail recursive call */
          _iRows = _iQueue;
          _iQueue = tmpMeta6;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmp9 = mmc_unbox_integer(tmpMeta7);
          
          _r = tmp9  /* pattern as ty=Integer */;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!(mmc_unbox_integer(arrayGet(_collmarkarr,_r) /* DAE.ASUB */) > ((modelica_integer) 0)))) goto tmp3_end;
          arrayUpdate(_collmarkarr, _r, mmc_mk_integer(_iNSystems));

          _colls = omc_List_select(threadData, arrayGet(_mT,_r) /* DAE.ASUB */, boxvar_Util_intPositive);

          _colls = omc_List_select1r(threadData, _colls, boxvar_Matching_isUnAssigned, _rowmarkarr);

          omc_List_fold1(threadData, _colls, boxvar_IndexReduction_markTrue, mmc_mk_integer(_iNSystems), _rowmarkarr);

          _rows = omc_List_flatten(threadData, omc_List_map1r(threadData, _colls, boxvar_arrayGet, _m));

          _rows = listAppend(omc_List_select1r(threadData, _rows, boxvar_Matching_isUnAssigned, _collmarkarr), _iQueue);
          /* Tail recursive call */
          _iRows = _rest;
          _iQueue = _rows;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _iRows = _rest;
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
  _oNSystems = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oNSystems;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_partitionSystemstraverseRows(threadData_t *threadData, modelica_metatype _iRows, modelica_metatype _iQueue, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rowmarkarr, modelica_metatype _collmarkarr, modelica_metatype _iNSystems)
{
  modelica_integer tmp1;
  modelica_integer _oNSystems;
  modelica_metatype out_oNSystems;
  tmp1 = mmc_unbox_integer(_iNSystems);
  _oNSystems = omc_IndexReduction_partitionSystemstraverseRows(threadData, _iRows, _iQueue, _m, _mT, _rowmarkarr, _collmarkarr, tmp1);
  out_oNSystems = mmc_mk_icon(_oNSystems);
  return out_oNSystems;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_partitionSystem1(threadData_t *threadData, modelica_integer _index, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rowmarkarr, modelica_metatype _collmarkarr, modelica_integer _iNSystems)
{
  modelica_integer _oNSystems;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oNSystems has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = _index;
    {
      modelica_metatype _rows = NULL;
      modelica_integer _nsystems;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rows has no default value.
      // _nsystems has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) -1) + _iNSystems;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!(mmc_unbox_integer(arrayGet(_rowmarkarr,_index) /* DAE.ASUB */) > ((modelica_integer) 0)))) goto tmp3_end;
          arrayUpdate(_rowmarkarr, _index, mmc_mk_integer(_iNSystems));

          _rows = omc_List_select(threadData, arrayGet(_m,_index) /* DAE.ASUB */, boxvar_Util_intPositive);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _nsystems = omc_IndexReduction_partitionSystemstraverseRows(threadData, _rows, tmpMeta6, _m, _mT, _rowmarkarr, _collmarkarr, _iNSystems);
          /* Tail recursive call */
          _index = ((modelica_integer) -1) + _index;
          _iNSystems = _nsystems;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _index = ((modelica_integer) -1) + _index;
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
  _oNSystems = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oNSystems;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_partitionSystem1(threadData_t *threadData, modelica_metatype _index, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rowmarkarr, modelica_metatype _collmarkarr, modelica_metatype _iNSystems)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oNSystems;
  modelica_metatype out_oNSystems;
  tmp1 = mmc_unbox_integer(_index);
  tmp2 = mmc_unbox_integer(_iNSystems);
  _oNSystems = omc_IndexReduction_partitionSystem1(threadData, tmp1, _m, _mT, _rowmarkarr, _collmarkarr, tmp2);
  out_oNSystems = mmc_mk_icon(_oNSystems);
  return out_oNSystems;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_partitionSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT)
{
  modelica_metatype _systs = NULL;
  modelica_metatype _rowmarkarr = NULL;
  modelica_metatype _collmarkarr = NULL;
  modelica_integer _nsystems;
  modelica_integer _neqns;
  modelica_metatype _systsarr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _systs has no default value.
  // _rowmarkarr has no default value.
  // _collmarkarr has no default value.
  // _nsystems has no default value.
  // _neqns has no default value.
  // _systsarr has no default value.
  _neqns = arrayLength(_m);

  _rowmarkarr = arrayCreate(_neqns, mmc_mk_integer(((modelica_integer) 0)));

  _collmarkarr = arrayCreate(arrayLength(_mT), mmc_mk_integer(((modelica_integer) 0)));

  _nsystems = omc_IndexReduction_partitionSystem1(threadData, _neqns, _m, _mT, _rowmarkarr, _collmarkarr, ((modelica_integer) 1));

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _systsarr = arrayCreate(_nsystems, tmpMeta1);

  _systsarr = omc_IndexReduction_partitionSystemSplitt(threadData, _neqns, _rowmarkarr, _systsarr);

  _systs = arrayList(_systsarr);
  _return: OMC_LABEL_UNUSED
  return _systs;
}

PROTECTED_FUNCTION_STATIC void omc_IndexReduction_getAdjacencyMatrixLevelEquations(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _vars, modelica_integer _index, modelica_integer _sindex, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _om, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _stateindexs, modelica_metatype _functionTree, modelica_boolean _isInitial)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _iEqns;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _rowTree = NULL;
      modelica_metatype _row = NULL;
      modelica_metatype _rowindxs = NULL;
      modelica_metatype _negrow = NULL;
      modelica_metatype _e = NULL;
      modelica_integer _i1;
      modelica_integer _rowSize;
      modelica_integer _size;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _rest has no default value.
      // _rowTree has no default value.
      // _row has no default value.
      // _rowindxs has no default value.
      // _negrow has no default value.
      // _e has no default value.
      // _i1 has no default value.
      // _rowSize has no default value.
      // _size has no default value.
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
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          _e = tmpMeta5;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          _rowTree = omc_BackendDAEUtil_adjacencyRow(threadData, _e, _vars, _OMC_LIT92, mmc_mk_some(_functionTree), _OMC_LIT93, _isInitial ,&_size);

          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          _row = omc_AvlSetInt_listKeys(threadData, _rowTree, tmpMeta7);

          _rowSize = _sindex + _size;

          _i1 = ((modelica_integer) 1) + _index;

          _rowindxs = omc_List_intRange2(threadData, ((modelica_integer) 1) + _sindex, _rowSize);

          omc_List_fold1r(threadData, _rowindxs, boxvar_arrayUpdate, mmc_mk_integer(_i1), _mapIncRowEqn);

          arrayUpdate(_mapEqnIncRow, _i1, _rowindxs);

          _row = omc_List_map1(threadData, _row, boxvar_IndexReduction_replaceStateIndex, _stateindexs);

          omc_List_fold1r(threadData, _rowindxs, boxvar_arrayUpdate, _row, _m);

          _row = omc_List_split1OnTrue(threadData, _row, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)) ,&_negrow);

          omc_List_fold1(threadData, _row, boxvar_Array_appendToElement, _rowindxs, _mT);

          _row = omc_List_map(threadData, _negrow, boxvar_intAbs);

          _rowindxs = omc_List_map(threadData, _rowindxs, boxvar_intNeg);

          omc_List_fold1(threadData, _row, boxvar_Array_appendToElement, _rowindxs, _mT);

          /* Tail recursive call */
          _iEqns = _rest;
          _index = _i1;
          _sindex = _rowSize;
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
PROTECTED_FUNCTION_STATIC void boxptr_IndexReduction_getAdjacencyMatrixLevelEquations(threadData_t *threadData, modelica_metatype _iEqns, modelica_metatype _vars, modelica_metatype _index, modelica_metatype _sindex, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _om, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _stateindexs, modelica_metatype _functionTree, modelica_metatype _isInitial)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  tmp1 = mmc_unbox_integer(_index);
  tmp2 = mmc_unbox_integer(_sindex);
  tmp3 = mmc_unbox_integer(_isInitial);
  omc_IndexReduction_getAdjacencyMatrixLevelEquations(threadData, _iEqns, _vars, tmp1, tmp2, _m, _mT, _om, _mapEqnIncRow, _mapIncRowEqn, _stateindexs, _functionTree, tmp3);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_replaceStateIndex(threadData_t *threadData, modelica_integer _iR, modelica_metatype _stateindexs)
{
  modelica_integer _oR;
  modelica_integer _s;
  modelica_integer _r;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oR has no default value.
  // _s has no default value.
  // _r has no default value.
  _oR = _iR;

  if((!(_iR > ((modelica_integer) 0))))
  {
    _r = labs(_iR);

    _s = mmc_unbox_integer(arrayGet(_stateindexs,_r) /* DAE.ASUB */);

    if((_s > ((modelica_integer) 0)))
    {
      _oR = _s;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _oR;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_replaceStateIndex(threadData_t *threadData, modelica_metatype _iR, modelica_metatype _stateindexs)
{
  modelica_integer tmp1;
  modelica_integer _oR;
  modelica_metatype out_oR;
  tmp1 = mmc_unbox_integer(_iR);
  _oR = omc_IndexReduction_replaceStateIndex(threadData, tmp1, _stateindexs);
  out_oR = mmc_mk_icon(_oR);
  return out_oR;
}

PROTECTED_FUNCTION_STATIC void omc_IndexReduction_getAdjacencyMatrixSelectStates(threadData_t *threadData, modelica_integer _nEqns, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mo, modelica_metatype _stateindexs)
{
  modelica_metatype _row = NULL;
  modelica_metatype _negrow = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _row has no default value.
  // _negrow has no default value.
  tmp1 = _nEqns; tmp2 = ((modelica_integer) -1); tmp3 = ((modelica_integer) 1);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = _nEqns; in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _row = arrayGet(_mo,_i) /* DAE.ASUB */;

      _row = omc_List_map1(threadData, _row, boxvar_IndexReduction_replaceStateIndex, _stateindexs);

      arrayUpdate(_m, _i, _row);

      _row = omc_List_split1OnTrue(threadData, _row, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)) ,&_negrow);

      omc_List_fold1(threadData, _row, boxvar_Array_consToElement, mmc_mk_integer(_i), _mT);

      _row = omc_List_map(threadData, _negrow, boxvar_intAbs);

      omc_List_fold1(threadData, _row, boxvar_Array_consToElement, mmc_mk_integer((-_i)), _mT);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_IndexReduction_getAdjacencyMatrixSelectStates(threadData_t *threadData, modelica_metatype _nEqns, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mo, modelica_metatype _stateindexs)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_nEqns);
  omc_IndexReduction_getAdjacencyMatrixSelectStates(threadData, tmp1, _m, _mT, _mo, _stateindexs);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getStateIndexes(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _stateindexs = NULL;
      modelica_metatype _invmap = NULL;
      modelica_integer _indx;
      modelica_integer _s;
      modelica_integer _nv;
      modelica_integer _newindx;
      modelica_metatype _hov = NULL;
      modelica_metatype _derstatesindexs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _stateindexs has no default value.
      // _invmap has no default value.
      // _indx has no default value.
      // _s has no default value.
      // _nv has no default value.
      // _newindx has no default value.
      // _hov has no default value.
      // _derstatesindexs has no default value.
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
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          _cr = tmpMeta6;
          _stateindexs = tmpMeta8;
          _invmap = tmpMeta9;
          _indx = tmp11  /* pattern as ty=Integer */;
          _nv = tmp13  /* pattern as ty=Integer */;
          _hov = tmpMeta14;
          _derstatesindexs = tmpMeta15;
          /* Pattern matching succeeded */
          omc_BackendVariable_getVarSingle(threadData, _cr, _hov ,&_s);

          _newindx = _nv + _s;

          arrayUpdate(_stateindexs, _indx, mmc_mk_integer(_newindx));

          arrayUpdate(_invmap, _s, mmc_mk_integer(_indx));
          tmpMeta16 = mmc_mk_cons(mmc_mk_integer(_indx), _derstatesindexs);
          tmpMeta17 = mmc_mk_box6(0, _stateindexs, _invmap, mmc_mk_integer(((modelica_integer) 1) + _indx), mmc_mk_integer(_nv), _hov, tmpMeta16);
          tmpMeta[0+0] = _inVar;
          tmpMeta[0+1] = tmpMeta17;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          _stateindexs = tmpMeta18;
          _invmap = tmpMeta19;
          _indx = tmp21  /* pattern as ty=Integer */;
          _nv = tmp23  /* pattern as ty=Integer */;
          _hov = tmpMeta24;
          _derstatesindexs = tmpMeta25;
          /* Pattern matching succeeded */
          tmpMeta26 = mmc_mk_box6(0, _stateindexs, _invmap, mmc_mk_integer(((modelica_integer) 1) + _indx), mmc_mk_integer(_nv), _hov, _derstatesindexs);
          tmpMeta[0+0] = _inVar;
          tmpMeta[0+1] = tmpMeta26;
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
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC void omc_IndexReduction_dumpBlock(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _iMapIncRowEqn, modelica_integer _nvars, modelica_metatype _syst)
{
  modelica_metatype _eqns = NULL;
  modelica_metatype _ilst = NULL;
  modelica_metatype _ilst1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _invindexmap = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqns has no default value.
  // _ilst has no default value.
  // _ilst1 has no default value.
  // _ass2 has no default value.
  // _invindexmap has no default value.
  // _m has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _syst;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  _m = tmpMeta3;
  _invindexmap = tmpMeta5;
  _ass2 = tmpMeta6;

  _eqns = omc_List_map1r(threadData, _comp, boxvar_arrayGet, _iMapIncRowEqn);

  _eqns = omc_List_uniqueIntN(threadData, _eqns, omc_BackendDAEUtil_equationArraySizeDAE(threadData, _syst));

  _ilst = omc_List_map1r(threadData, _comp, boxvar_arrayGet, _ass2);

  _ilst1 = omc_List_split1OnTrue(threadData, _ilst, boxvar_intGt, mmc_mk_integer(_nvars) ,&_ilst);

  _ilst1 = omc_List_map1(threadData, _ilst1, boxvar_intSub, mmc_mk_integer(_nvars));

  _ilst1 = omc_List_map1r(threadData, _ilst1, boxvar_arrayGet, _invindexmap);

  _ilst1 = listAppend(_ilst, _ilst1);

  fputs(MMC_STRINGDATA(_OMC_LIT94),stdout);

  tmpMeta7 = stringAppend(omc_BackendDump_dumpMarkedVars(threadData, _syst, _ilst1),_OMC_LIT3);
  fputs(MMC_STRINGDATA(tmpMeta7),stdout);

  fputs(MMC_STRINGDATA(omc_BackendDump_dumpMarkedEqns(threadData, _syst, _eqns)),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_IndexReduction_dumpBlock(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _iMapIncRowEqn, modelica_metatype _nvars, modelica_metatype _syst)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_nvars);
  omc_IndexReduction_dumpBlock(threadData, _comp, _iMapIncRowEqn, tmp1, _syst);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getCompsExtraVars(threadData_t *threadData, modelica_metatype _comp, modelica_integer _nvars, modelica_metatype _ass2, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype _vars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  // _vars has no default value.
  _vars = omc_List_map1r(threadData, _comp, boxvar_arrayGet, _ass2);

  _vars = omc_List_select1(threadData, _vars, boxvar_intLe, mmc_mk_integer(_nvars));

  _vars = omc_List_select1(threadData, _vars, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

  _oAcc = listAppend(_vars, _iAcc);
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getCompsExtraVars(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _nvars, modelica_metatype _ass2, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_metatype _oAcc = NULL;
  tmp1 = mmc_unbox_integer(_nvars);
  _oAcc = omc_IndexReduction_getCompsExtraVars(threadData, _comp, tmp1, _ass2, _iAcc);
  /* skip box _oAcc; list<#Integer> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getCompsExtraEquations(threadData_t *threadData, modelica_metatype _comp, modelica_integer _neqns, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype _eqns = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  // _eqns has no default value.
  _eqns = omc_List_select1(threadData, _comp, boxvar_intLe, mmc_mk_integer(_neqns));

  _oAcc = listAppend(_eqns, _iAcc);
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getCompsExtraEquations(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _neqns, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_metatype _oAcc = NULL;
  tmp1 = mmc_unbox_integer(_neqns);
  _oAcc = omc_IndexReduction_getCompsExtraEquations(threadData, _comp, tmp1, _iAcc);
  /* skip box _oAcc; list<#Integer> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_IndexReduction_selectBlock(threadData_t *threadData, modelica_metatype _comp, modelica_integer _ne)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      modelica_integer _c;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _c has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_boolean tmp10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _c = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmp9 = (modelica_boolean)(_c <= _ne);
          if(tmp9)
          {
            /* Tail recursive call */
            _comp = _rest;
            goto _tailrecursive;
            /* TODO: Make sure any eventual dead code below is never generated */
          }
          else
          {
            tmp10 = 1 /* true */;
          }
          tmp1 = tmp10;
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_selectBlock(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _ne)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_ne);
  _b = omc_IndexReduction_selectBlock(threadData, _comp, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_forceStateSelectNever(threadData_t *threadData, modelica_metatype _vec_old1, modelica_metatype _vec_old2, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _me, modelica_metatype _inShared, modelica_metatype _so, modelica_metatype *out_states, modelica_metatype *out_vec1, modelica_metatype *out_vec2)
{
  modelica_metatype _dummyStates = NULL;
  modelica_metatype _states = NULL;
  modelica_metatype _vec1 = NULL;
  modelica_metatype _vec2 = NULL;
  modelica_integer _nv;
  modelica_integer _nv2;
  modelica_integer _ne;
  modelica_integer _never_i;
  modelica_integer _eq_i;
  modelica_integer _old_i;
  modelica_metatype _var = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype _vec_res1 = NULL;
  modelica_metatype _vec_res2 = NULL;
  modelica_metatype _neverVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _neverVarsArray = NULL;
  modelica_metatype _neverIdx = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _syst2 = NULL;
  modelica_metatype _me2 = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mT = NULL;
  modelica_metatype _tplLst = NULL;
  modelica_string _msg = NULL;
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
  modelica_integer tmp19;
  modelica_metatype tmpMeta20;
  modelica_integer tmp21;
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
  // _dummyStates has no default value.
  // _states has no default value.
  _vec1 = _vec_old1;
  _vec2 = _vec_old2;
  // _nv has no default value.
  // _nv2 has no default value.
  // _ne has no default value.
  // _never_i has no default value.
  // _eq_i has no default value.
  // _old_i has no default value.
  // _var has no default value.
  // _ht has no default value.
  // _vec_res1 has no default value.
  // _vec_res2 has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _neverVars = tmpMeta1;
  // _neverVarsArray has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _neverIdx = tmpMeta2;
  // _syst2 has no default value.
  // _me2 has no default value.
  // _m has no default value.
  // _mT has no default value.
  // _tplLst has no default value.
  // _msg has no default value.
  _nv = omc_BackendVariable_varsSize(threadData, _vars);

  _ne = omc_BackendEquation_equationArraySize(threadData, _eqns);

  /* Pattern-matching assignment */
  tmpMeta3 = _so;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,0,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
  _ht = tmpMeta4;

  _dummyStates = omc_IndexReduction_checkAssignment(threadData, ((modelica_integer) 1), _nv, _vec_old1, _vars ,&_states);

  {
    modelica_metatype _state;
    for (tmpMeta5 = _states; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _state = MMC_CAR(tmpMeta5);
      _var = omc_BackendVariable_getVarAt(threadData, _vars, mmc_unbox_integer(omc_Util_tuple22(threadData, _state)));

      if((omc_BackendVariable_varStateSelectNever(threadData, _var) && (!omc_BaseHashTable_hasKey(threadData, omc_BackendVariable_varCref(threadData, _var), _ht))))
      {
        tmpMeta6 = mmc_mk_cons(_var, _neverVars);
        _neverVars = tmpMeta6;

        tmpMeta7 = mmc_mk_cons(omc_Util_tuple22(threadData, _state), _neverIdx);
        _neverIdx = tmpMeta7;
      }
    }
  }

  if((!listEmpty(_neverVars)))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT55))
    {
      omc_BackendDump_dumpVarList(threadData, _neverVars, _OMC_LIT95);
    }

    if(omc_Matching_anyUnassigned(threadData, _ne, _vec2))
    {
      _m = omc_IndexReduction_adjacencyMatrixfromEnhanced(threadData, _me, _vars, _so);

      _mT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _m, _nv);

      omc_BackendDAEEXT_setAssignment(threadData, _ne, _nv, _vec2, _vec1);

      omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _ne, _nv, _mT);

      omc_BackendDAEEXT_matching(threadData, _ne, _nv, ((modelica_integer) 3), ((modelica_integer) -1), 1.0, ((modelica_integer) 1));

      omc_BackendDAEEXT_getAssignment(threadData, _vec1, _vec2);

      _dummyStates = omc_IndexReduction_checkAssignment(threadData, ((modelica_integer) 1), _nv, _vec1, _vars ,&_states);

      tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
      _neverVars = tmpMeta9;

      tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
      _neverIdx = tmpMeta10;

      {
        modelica_metatype _state;
        for (tmpMeta11 = _states; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
        {
          _state = MMC_CAR(tmpMeta11);
          _var = omc_BackendVariable_getVarAt(threadData, _vars, mmc_unbox_integer(omc_Util_tuple22(threadData, _state)));

          if((omc_BackendVariable_varStateSelectNever(threadData, _var) && (!omc_BaseHashTable_hasKey(threadData, omc_BackendVariable_varCref(threadData, _var), _ht))))
          {
            tmpMeta12 = mmc_mk_cons(_var, _neverVars);
            _neverVars = tmpMeta12;

            tmpMeta13 = mmc_mk_cons(omc_Util_tuple22(threadData, _state), _neverIdx);
            _neverIdx = tmpMeta13;
          }
        }
      }
    }

    if((!listEmpty(_neverVars)))
    {
      _neverVarsArray = omc_BackendVariable_listVar1(threadData, _neverVars);

      _nv2 = omc_BackendVariable_varsSize(threadData, _neverVarsArray);

      tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
      _syst2 = omc_BackendDAEUtil_createEqSystem(threadData, _neverVarsArray, _eqns, tmpMeta15, _OMC_LIT37, omc_BackendEquation_emptyEqns(threadData));

      _me2 = omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _syst2, _inShared, 0 /* false */, NULL, NULL, NULL);

      _m = omc_IndexReduction_adjacencyMatrixfromEnhancedPartial(threadData, _me2, _vars, _neverVarsArray, _vec2, _so);

      if((!omc_AdjacencyMatrix_isEmpty(threadData, _m)))
      {
        _mT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _m, _nv2);

        _vec_res1 = arrayCreate(_nv2, mmc_mk_integer(((modelica_integer) -1)));

        _vec_res2 = arrayCreate(_ne, mmc_mk_integer(((modelica_integer) -1)));

        omc_BackendDAEEXT_setAssignment(threadData, _ne, _nv2, _vec_res2, _vec_res1);

        omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _ne, _nv2, _mT);

        omc_BackendDAEEXT_matching(threadData, _ne, _nv2, ((modelica_integer) 3), ((modelica_integer) -1), 1.0, ((modelica_integer) 1));

        omc_BackendDAEEXT_getAssignment(threadData, _vec_res1, _vec_res2);

        _tplLst = omc_List_zip(threadData, _neverIdx, omc_List_intRange(threadData, listLength(_neverIdx)));

        {
          modelica_metatype _tpl;
          for (tmpMeta16 = _tplLst; !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
          {
            _tpl = MMC_CAR(tmpMeta16);
            /* Pattern-matching assignment */
            tmpMeta17 = _tpl;
            tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 1));
            tmp19 = mmc_unbox_integer(tmpMeta18);
            tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
            tmp21 = mmc_unbox_integer(tmpMeta20);
            _never_i = tmp19  /* pattern as ty=Integer */;
            _eq_i = tmp21  /* pattern as ty=Integer */;

            arrayUpdate(_vec1,_never_i,arrayGet(_vec_res1,_eq_i) /* DAE.ASUB */);

            _old_i = mmc_unbox_integer(arrayGet(_vec2,mmc_unbox_integer(arrayGet(_vec_res1,_eq_i) /* DAE.ASUB */)) /* DAE.ASUB */);

            arrayUpdate(_vec2,mmc_unbox_integer(arrayGet(_vec_res1,_eq_i) /* DAE.ASUB */),mmc_mk_integer(_never_i));

            if((!(_old_i == ((modelica_integer) -1))))
            {
              arrayUpdate(_vec1,_old_i,mmc_mk_integer(((modelica_integer) -1)));
            }
          }
        }
      }

      tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
      _neverVars = tmpMeta23;

      tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
      _neverIdx = tmpMeta24;

      {
        modelica_metatype _state;
        for (tmpMeta25 = _states; !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
        {
          _state = MMC_CAR(tmpMeta25);
          _var = omc_BackendVariable_getVarAt(threadData, _vars, mmc_unbox_integer(omc_Util_tuple22(threadData, _state)));

          if(((omc_BackendVariable_varStateSelectNever(threadData, _var) && omc_BackendVariable_isNaturalState(threadData, _var)) && (!omc_BaseHashTable_hasKey(threadData, omc_BackendVariable_varCref(threadData, _var), _ht))))
          {
            tmpMeta26 = mmc_mk_cons(_var, _neverVars);
            _neverVars = tmpMeta26;

            tmpMeta27 = mmc_mk_cons(omc_Util_tuple22(threadData, _state), _neverIdx);
            _neverIdx = tmpMeta27;
          }
        }
      }

      if((!listEmpty(_neverVars)))
      {
        tmpMeta29 = stringAppend(omc_BackendDump_varListStringShort(threadData, _neverVars, _OMC_LIT11),_OMC_LIT96);
        _msg = tmpMeta29;

        tmpMeta30 = mmc_mk_cons(_msg, MMC_REFSTRUCTLIT(mmc_nil));
        omc_Error_addMessage(threadData, _OMC_LIT98, tmpMeta30);
      }
    }

    if(omc_Flags_isSet(threadData, _OMC_LIT55))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT99),stdout);
    }

    _dummyStates = omc_IndexReduction_checkAssignment(threadData, ((modelica_integer) 1), _nv, _vec1, _vars ,&_states);
  }
  _return: OMC_LABEL_UNUSED
  if (out_states) { *out_states = _states; }
  if (out_vec1) { *out_vec1 = _vec1; }
  if (out_vec2) { *out_vec2 = _vec2; }
  return _dummyStates;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_selectStatesWork1(threadData_t *threadData, modelica_integer _nfreeStates, modelica_metatype _statecandidates, modelica_integer _neqns, modelica_metatype _eqnslst, modelica_integer _level, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _so, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHov, modelica_metatype _inDummyVars, modelica_metatype _iStateSets, modelica_metatype *out_oStateSets)
{
  modelica_metatype _outDummyVars = NULL;
  modelica_metatype _oStateSets = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDummyVars has no default value.
  // _oStateSets has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inSystem;
    {
      modelica_metatype _dummyVars = NULL;
      modelica_metatype _stateVars = NULL;
      modelica_metatype _vlst = NULL;
      modelica_metatype _mapEqnIncRow = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_integer _nv;
      modelica_integer _nv1;
      modelica_integer _ne;
      modelica_integer _ne1;
      modelica_integer _neqnarr;
      modelica_metatype _vars = NULL;
      modelica_metatype _hovvars = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqns1 = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _me = NULL;
      modelica_metatype _meT = NULL;
      modelica_metatype _stateSets = NULL;
      modelica_string _msg = NULL;
      modelica_metatype _indexmap = NULL;
      modelica_metatype _invindexmap = NULL;
      modelica_metatype _vec1 = NULL;
      modelica_metatype _vec2 = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _ilst = NULL;
      modelica_metatype _unassigned = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _m1 = NULL;
      modelica_metatype _mT = NULL;
      modelica_metatype _mT1 = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _eqnslst1 = NULL;
      modelica_metatype _states = NULL;
      modelica_metatype _dstates = NULL;
      modelica_metatype _funcs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dummyVars has no default value.
      // _stateVars has no default value.
      // _vlst has no default value.
      // _mapEqnIncRow has no default value.
      // _mapIncRowEqn has no default value.
      // _nv has no default value.
      // _nv1 has no default value.
      // _ne has no default value.
      // _ne1 has no default value.
      // _neqnarr has no default value.
      // _vars has no default value.
      // _hovvars has no default value.
      // _eqns has no default value.
      // _eqns1 has no default value.
      // _syst has no default value.
      // _me has no default value.
      // _meT has no default value.
      // _stateSets has no default value.
      // _msg has no default value.
      // _indexmap has no default value.
      // _invindexmap has no default value.
      // _vec1 has no default value.
      // _vec2 has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _ilst has no default value.
      // _unassigned has no default value.
      // _m has no default value.
      // _m1 has no default value.
      // _mT has no default value.
      // _mT1 has no default value.
      // _comps has no default value.
      // _eqnslst1 has no default value.
      // _states has no default value.
      // _dstates has no default value.
      // _funcs has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_nfreeStates == _neqns)) goto tmp3_end;
          tmpMeta[0+0] = _statecandidates;
          tmpMeta[0+1] = _iStateSets;
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
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_boolean tmp29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          
          _vars = tmpMeta6;
          _eqns = tmpMeta7;
          _m = tmpMeta9;
          _mT = tmpMeta11;
          _ass1 = tmpMeta13;
          _ass2 = tmpMeta14;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((_nfreeStates > ((modelica_integer) 1)) && (!(_neqns > _nfreeStates)))) goto tmp3_end;
          _hovvars = omc_BackendVariable_listVar1(threadData, _statecandidates);

          _eqns1 = omc_BackendEquation_listEquation(threadData, _eqnslst);

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          _syst = omc_BackendDAEUtil_createEqSystem(threadData, _hovvars, _eqns1, tmpMeta15, _OMC_LIT37, omc_BackendEquation_emptyEqns(threadData));

          _me = omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _syst, _inShared, 0 /* false */ ,&_meT ,NULL ,NULL);

          _m1 = omc_IndexReduction_adjacencyMatrixfromEnhancedStrict(threadData, _me, _hovvars);

          _mT1 = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _m1, _nfreeStates);

          _hovvars = omc_IndexReduction_sortStateCandidatesVars(threadData, _hovvars, omc_BackendVariable_daeVars(threadData, _inSystem), mmc_mk_some(_mT1));

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            tmpMeta16 = stringAppend(_OMC_LIT100,intString(listLength(_eqnslst)));
            tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT101);
            tmpMeta18 = stringAppend(tmpMeta17,intString(omc_BackendVariable_varsSize(threadData, _hovvars)));
            tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT102);
            fputs(MMC_STRINGDATA(tmpMeta19),stdout);

            omc_BackendDump_dumpVariables(threadData, _hovvars, _OMC_LIT103);

            omc_BackendDump_dumpEquationList(threadData, _eqnslst, _OMC_LIT104);
          }

          _nv = omc_BackendVariable_varsSize(threadData, _vars);

          _ne = omc_BackendEquation_equationArraySize(threadData, _eqns);

          _neqnarr = omc_BackendEquation_getNumberOfEquations(threadData, _eqns);

          _ne1 = _ne + _neqns;

          _indexmap = arrayCreate(_nfreeStates + _nv, mmc_mk_integer(((modelica_integer) -1)));

          _invindexmap = arrayCreate(_nfreeStates, mmc_mk_integer(((modelica_integer) -1)));

          _nv1 = _nv + _nfreeStates;

          /* Pattern-matching tuple assignment */
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = mmc_mk_box6(0, _indexmap, _invindexmap, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_nv), _hovvars, tmpMeta23);
          tmpMeta25 = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _vars, boxvar_IndexReduction_getStateIndexes, tmpMeta24, &tmpMeta20);
          _vars = tmpMeta25;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          _indexmap = tmpMeta21;
          _invindexmap = tmpMeta22;

          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          _m1 = arrayCreate(_ne1, tmpMeta26);

          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          _mT1 = arrayCreate(_nv1, tmpMeta27);

          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          _mapEqnIncRow = omc_Array_expand(threadData, _neqns, _iMapEqnIncRow, tmpMeta28);

          _mapIncRowEqn = omc_Array_expand(threadData, _neqns, _iMapIncRowEqn, mmc_mk_integer(((modelica_integer) -1)));

          omc_IndexReduction_getAdjacencyMatrixSelectStates(threadData, _ne, _m1, _mT1, _m, _indexmap);

          _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

          omc_IndexReduction_getAdjacencyMatrixLevelEquations(threadData, _eqnslst, _vars, _neqnarr, _ne, _m1, _mT1, _m, _mapEqnIncRow, _mapIncRowEqn, _indexmap, _funcs, omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared));

          _vec1 = omc_Array_expand(threadData, _nfreeStates, _ass1, mmc_mk_integer(((modelica_integer) -1)));

          _vec2 = omc_Array_expand(threadData, _neqns, _ass2, mmc_mk_integer(((modelica_integer) -1)));

          /* Pattern-matching assignment */
          tmp29 = omc_BackendDAEEXT_setAssignment(threadData, _nv1, _ne1, _vec1, _vec2);
          if (1 /* true */ != tmp29) goto goto_2;

          omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _ne1, _nv1, _mT1);

          omc_BackendDAEEXT_matching(threadData, _ne1, _nv1, ((modelica_integer) 3), ((modelica_integer) -1), 0.0, ((modelica_integer) 0));

          omc_BackendDAEEXT_getAssignment(threadData, _vec1, _vec2);

          _comps = omc_Sorting_TarjanTransposed(threadData, _mT1, _vec2);

          _comps = omc_List_select1(threadData, _comps, boxvar_IndexReduction_selectBlock, mmc_mk_integer(_ne));

          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          _ilst = omc_List_fold1(threadData, _comps, boxvar_IndexReduction_getCompsExtraEquations, mmc_mk_integer(_ne), tmpMeta30);

          _ilst = omc_List_map1r(threadData, _ilst, boxvar_arrayGet, _iMapIncRowEqn);

          _ilst = omc_List_uniqueIntN(threadData, _ilst, _ne);

          _eqnslst1 = omc_BackendEquation_getList(threadData, _ilst, _eqns);

          tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
          _ilst = omc_List_fold2(threadData, _comps, boxvar_IndexReduction_getCompsExtraVars, mmc_mk_integer(_nv), _vec2, tmpMeta31);

          _vlst = omc_List_map1r(threadData, _ilst, boxvar_BackendVariable_getVarAt, _vars);

          _eqns = omc_BackendEquation_listEquation(threadData, _eqnslst);

          _eqns = omc_BackendEquation_addList(threadData, _eqnslst1, _eqns);

          _vars = omc_BackendVariable_listVar1(threadData, _vlst);

          _vars = omc_BackendVariable_addVars(threadData, omc_BackendVariable_varList(threadData, _hovvars), _vars);

          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
          _syst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta32, _OMC_LIT37, omc_BackendEquation_emptyEqns(threadData));

          _me = omc_BackendDAEUtil_getAdjacencyMatrixEnhancedScalar(threadData, _syst, _inShared, 0 /* false */ ,&_meT ,&_mapEqnIncRow ,&_mapIncRowEqn);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            omc_BackendDump_dumpAdjacencyMatrixEnhanced(threadData, _me);

            fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);

            omc_BackendDump_dumpAdjacencyMatrixTEnhanced(threadData, _meT);
          }

          _m = omc_IndexReduction_adjacencyMatrixfromEnhancedStrict(threadData, _me, _vars);

          _nv = omc_BackendVariable_varsSize(threadData, _vars);

          _ne = omc_BackendEquation_equationArraySize(threadData, _eqns);

          _mT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _m, _nv);

          omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _ne, _nv, _mT);

          omc_BackendDAEEXT_matching(threadData, _ne, _nv, ((modelica_integer) 3), ((modelica_integer) -1), 1.0, ((modelica_integer) 1));

          _vec1 = arrayCreate(_nv, mmc_mk_integer(((modelica_integer) -1)));

          _vec2 = arrayCreate(_ne, mmc_mk_integer(((modelica_integer) -1)));

          omc_BackendDAEEXT_getAssignment(threadData, _vec1, _vec2);

          _dstates = omc_IndexReduction_forceStateSelectNever(threadData, _vec1, _vec2, _vars, _eqns, _me, _inShared, _so ,&_states ,&_vec1 ,&_vec2);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);

            omc_BackendDump_dumpMatchingVars(threadData, _vec1);

            fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);

            omc_BackendDump_dumpMatchingEqns(threadData, _vec2);
          }

          _dstates = omc_IndexReduction_checkAssignment(threadData, ((modelica_integer) 1), _nv, _vec1, _vars, NULL);

          _dummyVars = omc_List_map1r(threadData, omc_List_map(threadData, _dstates, boxvar_Util_tuple22), boxvar_BackendVariable_getVarAt, _vars);

          _stateVars = omc_List_map1r(threadData, omc_List_map(threadData, _states, boxvar_Util_tuple22), boxvar_BackendVariable_getVarAt, _vars);

          _dummyVars = omc_List_select(threadData, _dummyVars, boxvar_BackendVariable_isStateVar);

          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          _unassigned = omc_Matching_getUnassigned(threadData, _ne, _vec2, tmpMeta33);

          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Matching_getAssigned(threadData, _ne, _vec2, tmpMeta34);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            if(listEmpty(_unassigned))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT108),stdout);

              if(omc_Flags_isSet(threadData, _OMC_LIT55))
              {
                omc_BackendDump_dumpVarList(threadData, _dummyVars, _OMC_LIT109);

                omc_BackendDump_dumpVarList(threadData, _stateVars, _OMC_LIT110);
              }
            }
            else
            {
              fputs(MMC_STRINGDATA(_OMC_LIT105),stdout);

              {
                modelica_metatype __omcQ_24tmpVar7;
                modelica_metatype* tmp36;
                modelica_metatype tmpMeta37;
                modelica_metatype __omcQ_24tmpVar6;
                modelica_integer tmp38;
                modelica_metatype _unassigned_eq_loopVar = 0;
                modelica_metatype _unassigned_eq;
                _unassigned_eq_loopVar = _unassigned;
                tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar7 = tmpMeta37; /* defaultValue */
                tmp36 = &__omcQ_24tmpVar7;
                while(1) {
                  tmp38 = 1;
                  if (!listEmpty(_unassigned_eq_loopVar)) {
                    _unassigned_eq = MMC_CAR(_unassigned_eq_loopVar);
                    _unassigned_eq_loopVar = MMC_CDR(_unassigned_eq_loopVar);
                    tmp38--;
                  }
                  if (tmp38 == 0) {
                    __omcQ_24tmpVar6 = arrayGet(_mapIncRowEqn,mmc_unbox_integer(_unassigned_eq)) /* DAE.ASUB */;
                    *tmp36 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                    tmp36 = &MMC_CDR(*tmp36);
                  } else if (tmp38 == 1) {
                    break;
                  } else {
                    goto goto_2;
                  }
                }
                *tmp36 = mmc_mk_nil();
                tmpMeta35 = __omcQ_24tmpVar7;
              }
              _unassigned = tmpMeta35;

              omc_BackendDump_dumpEquationList(threadData, omc_BackendEquation_getEquationArraySubsetLst(threadData, _eqns, _unassigned), _OMC_LIT106);

              omc_BackendDump_dumpVarList(threadData, _dummyVars, _OMC_LIT107);

              fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);
            }
          }

          tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta40 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _vec1, _vec2, tmpMeta39);
          _syst = omc_BackendDAEUtil_setEqSystMatching(threadData, _syst, tmpMeta40);

          _syst = omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _syst, _OMC_LIT111, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_m ,&_mT ,&_mapEqnIncRow ,&_mapIncRowEqn);

          _comps = omc_IndexReduction_partitionSystem(threadData, _m, _mT);

          _vlst = omc_IndexReduction_processComps4New(threadData, _comps, _nv, _ne, _vars, _eqns, _m, _mT, _mapEqnIncRow, _mapIncRowEqn, _vec2, _vec1, _level, _inShared, _iStateSets ,NULL ,&_stateSets);

          _vlst = omc_List_select(threadData, _vlst, boxvar_BackendVariable_isStateVar);
          tmpMeta[0+0] = listAppend(_dummyVars, _vlst);
          tmpMeta[0+1] = _stateSets;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_neqns > _nfreeStates)) goto tmp3_end;
          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            _hovvars = omc_BackendVariable_listVar1(threadData, _statecandidates);

            tmpMeta41 = stringAppend(_OMC_LIT100,intString(listLength(_eqnslst)));
            tmpMeta42 = stringAppend(tmpMeta41,_OMC_LIT101);
            tmpMeta43 = stringAppend(tmpMeta42,intString(omc_BackendVariable_varsSize(threadData, _hovvars)));
            tmpMeta44 = stringAppend(tmpMeta43,_OMC_LIT112);
            fputs(MMC_STRINGDATA(tmpMeta44),stdout);

            omc_BackendDump_dumpVariables(threadData, _hovvars, _OMC_LIT103);

            omc_BackendDump_dumpEquationList(threadData, _eqnslst, _OMC_LIT104);
          }

          tmpMeta45 = stringAppend(_OMC_LIT113,intString(_neqns));
          tmpMeta46 = stringAppend(tmpMeta45,_OMC_LIT114);
          tmpMeta47 = stringAppend(tmpMeta46,intString(_nfreeStates));
          tmpMeta48 = stringAppend(tmpMeta47,_OMC_LIT115);
          _msg = tmpMeta48;

          tmpMeta49 = mmc_mk_cons(_msg, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta49);

          _nv = listLength(_iHov);

          if((!(_nv >= _neqns)))
          {
            goto goto_2;
          }
          /* Tail recursive call */
          _nfreeStates = _nv;
          _statecandidates = _iHov;
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
  _outDummyVars = tmpMeta[0+0];
  _oStateSets = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oStateSets) { *out_oStateSets = _oStateSets; }
  return _outDummyVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_selectStatesWork1(threadData_t *threadData, modelica_metatype _nfreeStates, modelica_metatype _statecandidates, modelica_metatype _neqns, modelica_metatype _eqnslst, modelica_metatype _level, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _so, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHov, modelica_metatype _inDummyVars, modelica_metatype _iStateSets, modelica_metatype *out_oStateSets)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outDummyVars = NULL;
  tmp1 = mmc_unbox_integer(_nfreeStates);
  tmp2 = mmc_unbox_integer(_neqns);
  tmp3 = mmc_unbox_integer(_level);
  _outDummyVars = omc_IndexReduction_selectStatesWork1(threadData, tmp1, _statecandidates, tmp2, _eqnslst, tmp3, _inSystem, _inShared, _so, _iMapEqnIncRow, _iMapIncRowEqn, _iHov, _inDummyVars, _iStateSets, out_oStateSets);
  /* skip box _outDummyVars; list<BackendDAE.Var> */
  /* skip box _oStateSets; list<tuple<#Integer, #Integer, #Integer, #Integer, list<BackendDAE.Var>, list<BackendDAE.Equation>, list<BackendDAE.Var>, list<BackendDAE.Equation>>> */
  return _outDummyVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_fixDerivativeIndex(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _level, modelica_metatype _iVars)
{
  modelica_metatype _oVars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVars has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_integer _diffindx;
      modelica_metatype _v = NULL;
      modelica_metatype _derName = NULL;
      modelica_boolean _natural;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _diffindx has no default value.
      // _v has no default value.
      // _derName has no default value.
      // _natural has no default value.
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
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          
          _diffindx = tmp8  /* pattern as ty=Integer */;
          _derName = tmpMeta9;
          _natural = tmp11  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = (_diffindx > _level);
          if (1 /* true */ != tmp12) goto goto_2;

          _diffindx = _diffindx - _level;

          tmpMeta13 = mmc_mk_box4(4, &BackendDAE_VarKind_STATE__desc, mmc_mk_integer(_diffindx), _derName, mmc_mk_boolean(_natural));
          _v = omc_BackendVariable_setVarKind(threadData, _inVar, tmpMeta13);
          tmpMeta1 = omc_BackendVariable_addVar(threadData, _v, _iVars);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iVars;
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
  _oVars = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_fixDerivativeIndex(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _level, modelica_metatype _iVars)
{
  modelica_integer tmp1;
  modelica_metatype _oVars = NULL;
  tmp1 = mmc_unbox_integer(_level);
  _oVars = omc_IndexReduction_fixDerivativeIndex(threadData, _inVar, tmp1, _iVars);
  /* skip box _oVars; BackendDAE.Variables */
  return _oVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getlowerOrderDerivatives(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _level, modelica_metatype _so, modelica_metatype _vars, modelica_metatype _iVars)
{
  modelica_metatype _oVars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVars has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_integer _diffindx;
      modelica_metatype _dcr = NULL;
      modelica_metatype _crlst = NULL;
      modelica_metatype _vlst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _diffindx has no default value.
      // _dcr has no default value.
      // _crlst has no default value.
      // _vlst has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _dcr = tmpMeta6;
          _diffindx = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_diffindx == ((modelica_integer) 1))) goto tmp3_end;
          _crlst = omc_IndexReduction_getDerStateOrder(threadData, _dcr, _so);

          _vlst = omc_List_map1(threadData, _crlst, boxvar_IndexReduction_getVar, _vars);
          tmpMeta1 = listAppend(_vlst, _iVars);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,3) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          
          _diffindx = tmp12  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_consOnTrue(threadData, (_diffindx > _level), _inVar, _iVars);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iVars;
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
  _oVars = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getlowerOrderDerivatives(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _level, modelica_metatype _so, modelica_metatype _vars, modelica_metatype _iVars)
{
  modelica_integer tmp1;
  modelica_metatype _oVars = NULL;
  tmp1 = mmc_unbox_integer(_level);
  _oVars = omc_IndexReduction_getlowerOrderDerivatives(threadData, _inVar, tmp1, _so, _vars, _iVars);
  /* skip box _oVars; list<BackendDAE.Var> */
  return _oVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_removeFirstOrderDerivatives(threadData_t *threadData, modelica_metatype _iDummyVars, modelica_metatype _iVars, modelica_metatype _so, modelica_metatype _iRepl, modelica_metatype *out_oRepl)
{
  modelica_metatype _oDummyVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _oRepl = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _oDummyVars = tmpMeta1;
  _oRepl = _iRepl;
  {
    modelica_metatype _var;
    for (tmpMeta2 = _iDummyVars; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var = MMC_CAR(tmpMeta2);
      
      
      { /* match expression */
        modelica_metatype tmp6_1;
        tmp6_1 = _var;
        {
          modelica_metatype _cr = NULL;
          modelica_metatype _dcr = NULL;
          modelica_metatype _exp = NULL;
          volatile mmc_switch_type tmp6;
          int tmp7;
          // _cr has no default value.
          // _dcr has no default value.
          // _exp has no default value.
          tmp6 = 0;
          for (; tmp6 < 2; tmp6++) {
            switch (MMC_SWITCH_CAST(tmp6)) {
            case 0: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              modelica_metatype tmpMeta11;
              modelica_metatype tmpMeta12;
              modelica_integer tmp13;
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,4) == 0) goto tmp5_end;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
              if (4 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT67), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp5_end;
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 5));
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,3) == 0) goto tmp5_end;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
              tmp13 = mmc_unbox_integer(tmpMeta12);
              if (1 != tmp13) goto tmp5_end;
              
              _dcr = tmpMeta8;
              _cr = tmpMeta10;
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!(!(omc_System_strncmp(threadData, omc_ComponentReferenceBasics_crefFirstIdent(threadData, _cr), _OMC_LIT67, ((modelica_integer) 4)) == ((modelica_integer) 0)))) goto tmp5_end;
              _exp = omc_Expression_crefExp(threadData, _cr);

              tmpMeta14 = mmc_mk_cons(_exp, MMC_REFSTRUCTLIT(mmc_nil));
              _exp = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT31, tmpMeta14, omc_Expression_typeof(threadData, _exp));

              tmpMeta15 = mmc_mk_box2(0, _dcr, _exp);
              _oRepl = omc_BaseHashTable_add(threadData, tmpMeta15, _oRepl);
              tmpMeta[0+0] = _oDummyVars;
              tmpMeta[0+1] = _oRepl;
              goto tmp5_done;
            }
            case 1: {
              modelica_metatype tmpMeta16;
              
              /* Pattern matching succeeded */
              tmpMeta16 = mmc_mk_cons(_var, _oDummyVars);
              tmpMeta[0+0] = tmpMeta16;
              tmpMeta[0+1] = _oRepl;
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
      _oDummyVars = tmpMeta[0+0];
      _oRepl = tmpMeta[0+1];
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oRepl) { *out_oRepl = _oRepl; }
  return _oDummyVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_selectStatesWork(threadData_t *threadData, modelica_integer _level, modelica_metatype _iHov, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _so, modelica_metatype _iOrgEqnsLst, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHt, modelica_integer _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_integer *out_oSetIndex)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _oHt = NULL;
  modelica_integer _oSetIndex;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _oshared has no default value.
  // _oHt has no default value.
  _oSetIndex = _iSetIndex;
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inSystem;
    {
      modelica_metatype _syst = NULL;
      modelica_metatype _eqnslst = NULL;
      modelica_metatype _eqnslst1 = NULL;
      modelica_metatype _varlst = NULL;
      modelica_metatype _dummyVars = NULL;
      modelica_metatype _lov = NULL;
      modelica_metatype _hov = NULL;
      modelica_metatype _mapEqnIncRow = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_integer _nfreeStates;
      modelica_integer _neqns;
      modelica_integer _setIndex;
      modelica_integer _ne;
      modelica_integer _ne1;
      modelica_integer _nv;
      modelica_integer _nv1;
      modelica_metatype _stateSets = NULL;
      modelica_metatype _funcs = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _orgEqnsLst = NULL;
      modelica_metatype _ht = NULL;
      modelica_metatype _repl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _syst has no default value.
      // _eqnslst has no default value.
      // _eqnslst1 has no default value.
      // _varlst has no default value.
      // _dummyVars has no default value.
      // _lov has no default value.
      // _hov has no default value.
      // _mapEqnIncRow has no default value.
      // _mapIncRowEqn has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _nfreeStates has no default value.
      // _neqns has no default value.
      // _setIndex has no default value.
      // _ne has no default value.
      // _ne1 has no default value.
      // _nv has no default value.
      // _nv1 has no default value.
      // _stateSets has no default value.
      // _funcs has no default value.
      // _vars has no default value.
      // _m has no default value.
      // _orgEqnsLst has no default value.
      // _ht has no default value.
      // _repl has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Array_all(threadData, _iOrgEqnsLst, boxvar_listEmpty)) goto tmp3_end;
          tmpMeta[0+0] = _inSystem;
          tmpMeta[0+1] = _inShared;
          tmpMeta[0+2] = _iHt;
          tmp1_c3 = _iSetIndex;
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
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          
          _vars = tmpMeta6;
          _ass1 = tmpMeta8;
          _ass2 = tmpMeta9;
          /* Pattern matching succeeded */
          _eqnslst1 = omc_IndexReduction_removeFirstOrgEqns(threadData, _iOrgEqnsLst ,&_orgEqnsLst);

          tmpMeta10 = mmc_mk_box3(0, omc_BackendVariable_daeGlobalKnownVars(threadData, _inShared), mmc_mk_boolean(0 /* false */), omc_BackendVarTransform_emptyReplacements(threadData));
          _eqnslst = omc_BackendEquation_traverseExpsOfEquationList(threadData, _eqnslst1, boxvar_IndexReduction_replaceFinalVarsEqn, tmpMeta10, NULL);

          tmpMeta11 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDerStatesStatesExp, _so);
          _eqnslst = omc_BackendEquation_traverseExpsOfEquationList(threadData, _eqnslst, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta11, NULL);

          _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

          _eqnslst = omc_BackendEquation_traverseExpsOfEquationList(threadData, _eqnslst, boxvar_IndexReduction_forceInlinEqn, _funcs, NULL);

          _eqnslst = omc_InlineArrayEquations_getScalarArrayEqns(threadData, _eqnslst, NULL);

          _hov = omc_List_map1Fold(threadData, _iHov, boxvar_IndexReduction_getLevelStates, mmc_mk_integer(_level), omc_HashTableCrIntToExp_emptyHashTable(threadData) ,&_ht);

          tmpMeta12 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDummyDerivativesExp, _ht);
          _eqnslst = omc_BackendEquation_traverseExpsOfEquationList(threadData, _eqnslst, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta12, NULL);

          tmpMeta13 = mmc_mk_box2(0, boxvar_IndexReduction_replaceDummyDerivativesExp, _ht);
          _eqnslst1 = omc_BackendEquation_traverseExpsOfEquationList(threadData, _eqnslst1, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta13, NULL);

          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp17;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = _hov;
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar9;
            while(1) {
              tmp17 = 1;
              while (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                if (omc_BackendVariable_notVarStateSelectAlways(threadData, _var, _level)) {
                  tmp17--;
                  break;
                }
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar8 = _var;
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar9;
          }
          _varlst = tmpMeta14;

          _neqns = omc_BackendEquation_equationLstSizeKeepAlgorithmAsOne(threadData, _eqnslst);

          _nfreeStates = listLength(_varlst);

          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          _dummyVars = omc_IndexReduction_selectStatesWork1(threadData, _nfreeStates, _varlst, _neqns, _eqnslst, _level, _inSystem, _inShared, _so, _iMapEqnIncRow, _iMapIncRowEqn, _hov, tmpMeta18, tmpMeta19 ,&_stateSets);

          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          _lov = omc_List_fold3(threadData, _iHov, boxvar_IndexReduction_getlowerOrderDerivatives, mmc_mk_integer(_level), _so, _vars, tmpMeta20);

          _repl = omc_HashTable2_emptyHashTable(threadData);

          _dummyVars = omc_IndexReduction_removeFirstOrderDerivatives(threadData, _dummyVars, _vars, _so, _repl ,&_repl);

          _nv = omc_BackendVariable_varsSize(threadData, _vars);

          _ne = omc_BackendDAEUtil_systemSize(threadData, _inSystem);

          _syst = omc_BackendEquation_equationsAddDAE(threadData, _eqnslst1, _inSystem);

          if(((stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT138), _OMC_LIT128)) && (_neqns < _nfreeStates)))
          {
            _dummyVars = omc_IndexReduction_reduceStateSets(threadData, _stateSets, _dummyVars);

            tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
            _stateSets = tmpMeta21;
          }

          _setIndex = omc_IndexReduction_addStateSets(threadData, _stateSets, _iSetIndex, _syst ,&_syst);

          _syst = omc_IndexReduction_addDummyStates(threadData, _dummyVars, _level, _repl, _syst, _iHt ,&_ht);

          omc_List_fold1(threadData, _iHov, boxvar_IndexReduction_fixDerivativeIndex, mmc_mk_integer(_level), omc_BackendVariable_daeVars(threadData, _syst));

          _syst = omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _syst, _OMC_LIT92, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_m ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

          _nv1 = omc_BackendVariable_varsSize(threadData, omc_BackendVariable_daeVars(threadData, _syst));

          _ne1 = omc_BackendDAEUtil_systemSize(threadData, _syst);

          _ass1 = omc_Array_expand(threadData, _nv1 - _nv, _ass1, mmc_mk_integer(((modelica_integer) -1)));

          _ass2 = omc_Array_expand(threadData, _ne1 - _ne, _ass2, mmc_mk_integer(((modelica_integer) -1)));

          /* Pattern-matching assignment */
          tmp22 = omc_BackendDAEEXT_setAssignment(threadData, _ne1, _nv1, _ass2, _ass1);
          if (1 /* true */ != tmp22) goto goto_2;

          omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _nv1, _ne1, _m);

          omc_BackendDAEEXT_matching(threadData, _nv1, _ne1, ((modelica_integer) 5), ((modelica_integer) -1), 0.0, ((modelica_integer) 0));

          omc_BackendDAEEXT_getAssignment(threadData, _ass2, _ass1);

          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1, _ass2, tmpMeta23);
          _syst = omc_BackendDAEUtil_setEqSystMatching(threadData, _syst, tmpMeta24);
          /* Tail recursive call */
          _level = ((modelica_integer) 1) + _level;
          _iHov = _lov;
          _inSystem = _syst;
          _iOrgEqnsLst = _orgEqnsLst;
          _iMapEqnIncRow = _mapEqnIncRow;
          _iMapIncRowEqn = _mapIncRowEqn;
          _iHt = _ht;
          _iSetIndex = _setIndex;
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
  _osyst = tmpMeta[0+0];
  _oshared = tmpMeta[0+1];
  _oHt = tmpMeta[0+2];
  _oSetIndex = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_oHt) { *out_oHt = _oHt; }
  if (out_oSetIndex) { *out_oSetIndex = _oSetIndex; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_selectStatesWork(threadData_t *threadData, modelica_metatype _level, modelica_metatype _iHov, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _so, modelica_metatype _iOrgEqnsLst, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHt, modelica_metatype _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_metatype *out_oSetIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oSetIndex;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_level);
  tmp2 = mmc_unbox_integer(_iSetIndex);
  _osyst = omc_IndexReduction_selectStatesWork(threadData, tmp1, _iHov, _inSystem, _inShared, _so, _iOrgEqnsLst, _iMapEqnIncRow, _iMapIncRowEqn, _iHt, tmp2, out_oshared, out_oHt, &_oSetIndex);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oshared; BackendDAE.Shared */
  /* skip box _oHt; tuple<array<list<tuple<tuple<DAE.ComponentRef, #Integer>, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<tuple<DAE.ComponentRef, #Integer>, DAE.Exp>>>>, #Integer, tuple<.HashTableCrIntToExp.FuncHashCref<function>(tuple<DAE.ComponentRef, #Integer> cr) => #Integer, .HashTableCrIntToExp.FuncCrefEqual<function>(tuple<DAE.ComponentRef, #Integer> cr1, tuple<DAE.ComponentRef, #Integer> cr2) => #Boolean, .HashTableCrIntToExp.FuncCrefStr<function>(tuple<DAE.ComponentRef, #Integer> cr) => String, .HashTableCrIntToExp.FuncExpStr<function>(DAE.Exp exp) => String>> */
  if (out_oSetIndex) { *out_oSetIndex = mmc_mk_icon(_oSetIndex); }
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_selectStates(threadData_t *threadData, modelica_integer _nfreeStates, modelica_integer _nOrgEqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _iSo, modelica_metatype _orgEqnsLst, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHt, modelica_integer _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_integer *out_oSetIndex)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _oHt = NULL;
  modelica_integer _oSetIndex;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _oshared has no default value.
  // _oHt has no default value.
  _oSetIndex = _iSetIndex;
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inSystem;
    {
      modelica_metatype _eqnslst = NULL;
      modelica_metatype _ht = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _funcs = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_integer _ne;
      modelica_integer _nv;
      modelica_integer _setIndex;
      modelica_metatype _shared = NULL;
      modelica_metatype _hov = NULL;
      modelica_metatype _mapEqnIncRow = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_metatype _so = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqnslst has no default value.
      // _ht has no default value.
      // _syst has no default value.
      // _funcs has no default value.
      // _m has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _ne has no default value.
      // _nv has no default value.
      // _setIndex has no default value.
      // _shared has no default value.
      // _hov has no default value.
      // _mapEqnIncRow has no default value.
      // _mapIncRowEqn has no default value.
      // _so has no default value.
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
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          
          _ass1 = tmpMeta7;
          _ass2 = tmpMeta8;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_nfreeStates == _nOrgEqns)) goto tmp3_end;
          _eqnslst = omc_List_flatten(threadData, arrayList(_orgEqnsLst));

          _syst = omc_BackendEquation_equationsAddDAE(threadData, _eqnslst, _inSystem);

          _syst = omc_IndexReduction_addAllDummyStates(threadData, _syst, _iSo, _iHt ,&_ht);

          _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

          _syst = omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _syst, _OMC_LIT92, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_m ,NULL ,NULL ,NULL);

          _ass1 = omc_Array_expand(threadData, _nfreeStates, _ass1, mmc_mk_integer(((modelica_integer) -1)));

          _ass2 = omc_Array_expand(threadData, _nOrgEqns, _ass2, mmc_mk_integer(((modelica_integer) -1)));

          _nv = omc_BackendVariable_varsSize(threadData, omc_BackendVariable_daeVars(threadData, _syst));

          _ne = omc_BackendDAEUtil_systemSize(threadData, _syst);

          /* Pattern-matching assignment */
          tmp9 = omc_BackendDAEEXT_setAssignment(threadData, _ne, _nv, _ass2, _ass1);
          if (1 /* true */ != tmp9) goto goto_2;

          omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _nv, _ne, _m);

          omc_BackendDAEEXT_matching(threadData, _nv, _ne, ((modelica_integer) 5), ((modelica_integer) -1), 0.0, ((modelica_integer) 0));

          omc_BackendDAEEXT_getAssignment(threadData, _ass2, _ass1);

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1, _ass2, tmpMeta10);
          _syst = omc_BackendDAEUtil_setEqSystMatching(threadData, _syst, tmpMeta11);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            omc_BackendDump_dumpEquationList(threadData, _eqnslst, _OMC_LIT139);
          }
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _inShared;
          tmpMeta[0+2] = _ht;
          tmp1_c3 = _iSetIndex;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT140);

          _hov = omc_IndexReduction_highestOrderDerivatives(threadData, omc_BackendVariable_daeVars(threadData, _inSystem), _iSo ,&_so);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            omc_BackendDump_dumpStateOrder(threadData, _so);
          }

          _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

          _syst = omc_IndexReduction_replaceHigherDerivatives(threadData, _inSystem);

          _syst = omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _syst, _OMC_LIT92, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,NULL ,NULL ,&_mapEqnIncRow ,&_mapIncRowEqn);

          _syst = omc_IndexReduction_selectStatesWork(threadData, ((modelica_integer) 1), _hov, _syst, _inShared, _so, _orgEqnsLst, _mapEqnIncRow, _mapIncRowEqn, _iHt, _iSetIndex ,&_shared ,&_ht ,&_setIndex);

          omc_ErrorExt_rollBack(threadData, _OMC_LIT140);
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _shared;
          tmpMeta[0+2] = _ht;
          tmp1_c3 = _setIndex;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT140);
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
  _osyst = tmpMeta[0+0];
  _oshared = tmpMeta[0+1];
  _oHt = tmpMeta[0+2];
  _oSetIndex = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_oHt) { *out_oHt = _oHt; }
  if (out_oSetIndex) { *out_oSetIndex = _oSetIndex; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_selectStates(threadData_t *threadData, modelica_metatype _nfreeStates, modelica_metatype _nOrgEqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _iSo, modelica_metatype _orgEqnsLst, modelica_metatype _iMapEqnIncRow, modelica_metatype _iMapIncRowEqn, modelica_metatype _iHt, modelica_metatype _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_metatype *out_oSetIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _oSetIndex;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_nfreeStates);
  tmp2 = mmc_unbox_integer(_nOrgEqns);
  tmp3 = mmc_unbox_integer(_iSetIndex);
  _osyst = omc_IndexReduction_selectStates(threadData, tmp1, tmp2, _inSystem, _inShared, _iSo, _orgEqnsLst, _iMapEqnIncRow, _iMapIncRowEqn, _iHt, tmp3, out_oshared, out_oHt, &_oSetIndex);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oshared; BackendDAE.Shared */
  /* skip box _oHt; tuple<array<list<tuple<tuple<DAE.ComponentRef, #Integer>, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<tuple<DAE.ComponentRef, #Integer>, DAE.Exp>>>>, #Integer, tuple<.HashTableCrIntToExp.FuncHashCref<function>(tuple<DAE.ComponentRef, #Integer> cr) => #Integer, .HashTableCrIntToExp.FuncCrefEqual<function>(tuple<DAE.ComponentRef, #Integer> cr1, tuple<DAE.ComponentRef, #Integer> cr2) => #Boolean, .HashTableCrIntToExp.FuncCrefStr<function>(tuple<DAE.ComponentRef, #Integer> cr) => String, .HashTableCrIntToExp.FuncExpStr<function>(DAE.Exp exp) => String>> */
  if (out_oSetIndex) { *out_oSetIndex = mmc_mk_icon(_oSetIndex); }
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_setStartExp(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _startExp, modelica_integer _size, modelica_integer _iIndex, modelica_integer *out_oIndex)
{
  modelica_metatype _outVar = NULL;
  modelica_integer _oIndex;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean tmp3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  _oIndex = _iIndex;
  // _e has no default value.
  tmp3 = (modelica_boolean)(_size > ((modelica_integer) 1));
  if(tmp3)
  {
    tmpMeta2 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_iIndex));
    tmpMeta1 = mmc_mk_cons(tmpMeta2, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta4 = omc_Expression_makeASUB(threadData, _startExp, tmpMeta1);
  }
  else
  {
    tmpMeta4 = _startExp;
  }
  _e = tmpMeta4;

  _e = omc_ExpressionSimplify_simplify(threadData, _e, NULL);

  _outVar = omc_BackendVariable_setVarStartValue(threadData, _inVar, _e);

  _oIndex = ((modelica_integer) 1) + _iIndex;
  _return: OMC_LABEL_UNUSED
  if (out_oIndex) { *out_oIndex = _oIndex; }
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_setStartExp(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _startExp, modelica_metatype _size, modelica_metatype _iIndex, modelica_metatype *out_oIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oIndex;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_size);
  tmp2 = mmc_unbox_integer(_iIndex);
  _outVar = omc_IndexReduction_setStartExp(threadData, _inVar, _startExp, tmp1, tmp2, &_oIndex);
  /* skip box _outVar; BackendDAE.Var */
  if (out_oIndex) { *out_oIndex = mmc_mk_icon(_oIndex); }
  return _outVar;
}

DLLDirection
modelica_metatype omc_IndexReduction_makeStartExp(threadData_t *threadData, modelica_metatype _inCref)
{
  modelica_metatype _outExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outExp = omc_Expression_crefExp(threadData, omc_ComponentReference_crefPrefixStart(threadData, _inCref));
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_generateStateSets(threadData_t *threadData, modelica_metatype _iTplLst, modelica_integer _iSetIndex, modelica_metatype _iVars, modelica_metatype _iEqns, modelica_metatype _iStateSets, modelica_metatype *out_oVars, modelica_metatype *out_oEqns, modelica_metatype *out_oStateSets)
{
  modelica_integer _oSetIndex;
  modelica_metatype _oVars = NULL;
  modelica_metatype _oEqns = NULL;
  modelica_metatype _oStateSets = NULL;
  modelica_metatype _tpl = NULL;
  modelica_metatype _setVars = NULL;
  modelica_metatype _aVars = NULL;
  modelica_metatype _varJ = NULL;
  modelica_metatype _otherVars = NULL;
  modelica_metatype _stateCandidates = NULL;
  modelica_metatype _crset = NULL;
  modelica_metatype _crA = NULL;
  modelica_metatype _crJ = NULL;
  modelica_metatype _tp = NULL;
  modelica_metatype _tyExpCrStates = NULL;
  modelica_integer _rang;
  modelica_integer _nStateCandidates;
  modelica_integer _nUnassignedEquations;
  modelica_integer _level;
  modelica_metatype _recordSize = NULL;
  modelica_metatype _expcrA = NULL;
  modelica_metatype _mulAstates = NULL;
  modelica_metatype _mulAdstates = NULL;
  modelica_metatype _expset = NULL;
  modelica_metatype _expderset = NULL;
  modelica_metatype _expsetstart = NULL;
  modelica_metatype _expcrstates = NULL;
  modelica_metatype _expcrdstates = NULL;
  modelica_metatype _expcrset = NULL;
  modelica_metatype _expcrdset = NULL;
  modelica_metatype _expcrstatesstart = NULL;
  modelica_metatype _crstates = NULL;
  modelica_metatype _op = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _deqn = NULL;
  modelica_metatype _cEqnsLst = NULL;
  modelica_metatype _oEqnLst = NULL;
  modelica_metatype _source = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
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
  modelica_metatype tmpMeta20;
  modelica_boolean tmp21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_boolean tmp31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_boolean tmp37;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  modelica_boolean tmp42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_boolean tmp47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta51;
  modelica_metatype tmpMeta52;
  modelica_metatype tmpMeta53;
  modelica_metatype tmpMeta54;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oSetIndex = _iSetIndex;
  _oVars = _iVars;
  _oEqns = _iEqns;
  _oStateSets = _iStateSets;
  // _tpl has no default value.
  // _setVars has no default value.
  // _aVars has no default value.
  // _varJ has no default value.
  // _otherVars has no default value.
  // _stateCandidates has no default value.
  // _crset has no default value.
  // _crA has no default value.
  // _crJ has no default value.
  // _tp has no default value.
  // _tyExpCrStates has no default value.
  // _rang has no default value.
  // _nStateCandidates has no default value.
  // _nUnassignedEquations has no default value.
  // _level has no default value.
  // _recordSize has no default value.
  // _expcrA has no default value.
  // _mulAstates has no default value.
  // _mulAdstates has no default value.
  // _expset has no default value.
  // _expderset has no default value.
  // _expsetstart has no default value.
  // _expcrstates has no default value.
  // _expcrdstates has no default value.
  // _expcrset has no default value.
  // _expcrdset has no default value.
  // _expcrstatesstart has no default value.
  // _crstates has no default value.
  // _op has no default value.
  // _eqn has no default value.
  // _deqn has no default value.
  // _cEqnsLst has no default value.
  // _oEqnLst has no default value.
  // _source has no default value.
  // _b has no default value.
  {
    modelica_metatype _tpl;
    for (tmpMeta1 = _iTplLst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _tpl = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _tpl;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmp4 = mmc_unbox_integer(tmpMeta3);
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
      tmp8 = mmc_unbox_integer(tmpMeta7);
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
      tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 6));
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 7));
      tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 8));
      _level = tmp4  /* pattern as ty=Integer */;
      _nStateCandidates = tmp6  /* pattern as ty=Integer */;
      _nUnassignedEquations = tmp8  /* pattern as ty=Integer */;
      _stateCandidates = tmpMeta9;
      _cEqnsLst = tmpMeta10;
      _otherVars = tmpMeta11;
      _oEqnLst = tmpMeta12;

      _rang = _nStateCandidates - _nUnassignedEquations;

      _b = (_rang > ((modelica_integer) 1));

      omc_IndexReduction_getSetVars(threadData, _oSetIndex, _rang, _nStateCandidates, _nUnassignedEquations, _level ,&_crset ,&_setVars ,&_crA ,&_aVars ,&_tp ,&_crJ ,&_varJ);

      _expcrstates = omc_List_map(threadData, _stateCandidates, boxvar_BackendVariable_varExp);

      _crstates = omc_List_map(threadData, _stateCandidates, boxvar_BackendVariable_varCref);

      _expcrstatesstart = omc_List_map(threadData, _crstates, boxvar_IndexReduction_makeStartExp);

      _expcrdstates = omc_List_map(threadData, _expcrstates, boxvar_IndexReduction_makeder);

      _expcrset = omc_List_map(threadData, _crset, boxvar_Expression_crefExp);

      _expcrdset = omc_List_map(threadData, _expcrset, boxvar_IndexReduction_makeder);

      _expcrA = omc_Expression_crefExp(threadData, _crA);

      tmpMeta13 = mmc_mk_box3(23, &DAE_Exp_CAST__desc, _tp, _expcrA);
      _expcrA = tmpMeta13;

      tmpMeta15 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_nStateCandidates));
      tmpMeta14 = mmc_mk_cons(tmpMeta15, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta16 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta14);
      _tyExpCrStates = tmpMeta16;

      tmp21 = (modelica_boolean)_b;
      if(tmp21)
      {
        tmpMeta18 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_rang));
        tmpMeta17 = mmc_mk_cons(tmpMeta18, MMC_REFSTRUCTLIT(mmc_nil));
        tmpMeta19 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta17);
        tmpMeta20 = mmc_mk_box2(18, &DAE_Operator_MUL__MATRIX__PRODUCT__desc, tmpMeta19);
        tmpMeta22 = tmpMeta20;
      }
      else
      {
        tmpMeta22 = _OMC_LIT141;
      }
      _op = tmpMeta22;

      tmpMeta23 = mmc_mk_box4(19, &DAE_Exp_ARRAY__desc, _tyExpCrStates, mmc_mk_boolean(1 /* true */), _expcrstates);
      tmpMeta24 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _expcrA, _op, tmpMeta23);
      _mulAstates = tmpMeta24;

      _mulAstates = omc_Expression_extendArrExp(threadData, _mulAstates, 0 /* false */, NULL);

      tmpMeta25 = mmc_mk_box4(19, &DAE_Exp_ARRAY__desc, _tyExpCrStates, mmc_mk_boolean(1 /* true */), _expcrdstates);
      tmpMeta26 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _expcrA, _op, tmpMeta25);
      _mulAdstates = tmpMeta26;

      _mulAdstates = omc_Expression_extendArrExp(threadData, _mulAdstates, 0 /* false */, NULL);

      tmp31 = (modelica_boolean)_b;
      if(tmp31)
      {
        tmpMeta28 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_rang));
        tmpMeta27 = mmc_mk_cons(tmpMeta28, MMC_REFSTRUCTLIT(mmc_nil));
        tmpMeta29 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta27);
        tmpMeta30 = mmc_mk_box4(19, &DAE_Exp_ARRAY__desc, tmpMeta29, mmc_mk_boolean(1 /* true */), _expcrset);
        tmpMeta32 = tmpMeta30;
      }
      else
      {
        tmpMeta32 = listHead(_expcrset);
      }
      _expset = tmpMeta32;

      tmp37 = (modelica_boolean)_b;
      if(tmp37)
      {
        tmpMeta34 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_rang));
        tmpMeta33 = mmc_mk_cons(tmpMeta34, MMC_REFSTRUCTLIT(mmc_nil));
        tmpMeta35 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT15, tmpMeta33);
        tmpMeta36 = mmc_mk_box4(19, &DAE_Exp_ARRAY__desc, tmpMeta35, mmc_mk_boolean(1 /* true */), _expcrdset);
        tmpMeta38 = tmpMeta36;
      }
      else
      {
        tmpMeta38 = listHead(_expcrdset);
      }
      _expderset = tmpMeta38;

      _source = _OMC_LIT144;

      _tp = omc_ComponentReference_crefTypeFull(threadData, _crA);

      _tp = omc_DAEUtil_expTypeElementType(threadData, _tp);

      if(omc_DAEUtil_expTypeComplex(threadData, _tp))
      {
        _recordSize = mmc_mk_some(mmc_mk_integer(omc_Expression_sizeOf(threadData, _tp)));
      }
      else
      {
        _recordSize = mmc_mk_none();
      }

      tmp42 = (modelica_boolean)_b;
      if(tmp42)
      {
        tmpMeta39 = mmc_mk_cons(mmc_mk_integer(_rang), MMC_REFSTRUCTLIT(mmc_nil));
        tmpMeta40 = mmc_mk_box7(4, &BackendDAE_Equation_ARRAY__EQUATION__desc, tmpMeta39, _expset, _mulAstates, _source, _OMC_LIT147, _recordSize);
        tmpMeta43 = tmpMeta40;
      }
      else
      {
        tmpMeta41 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _expset, _mulAstates, _source, _OMC_LIT147);
        tmpMeta43 = tmpMeta41;
      }
      _eqn = tmpMeta43;

      tmp47 = (modelica_boolean)_b;
      if(tmp47)
      {
        tmpMeta44 = mmc_mk_cons(mmc_mk_integer(_rang), MMC_REFSTRUCTLIT(mmc_nil));
        tmpMeta45 = mmc_mk_box7(4, &BackendDAE_Equation_ARRAY__EQUATION__desc, tmpMeta44, _expderset, _mulAdstates, _OMC_LIT88, _OMC_LIT147, _recordSize);
        tmpMeta48 = tmpMeta45;
      }
      else
      {
        tmpMeta46 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _expderset, _mulAdstates, _OMC_LIT88, _OMC_LIT147);
        tmpMeta48 = tmpMeta46;
      }
      _deqn = tmpMeta48;

      tmpMeta49 = mmc_mk_box4(19, &DAE_Exp_ARRAY__desc, _tyExpCrStates, mmc_mk_boolean(1 /* true */), _expcrstatesstart);
      tmpMeta50 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _expcrA, _op, tmpMeta49);
      _expsetstart = tmpMeta50;

      _expsetstart = omc_Expression_extendArrExp(threadData, _expsetstart, 0 /* false */, NULL);

      tmpMeta51 = MMC_REFSTRUCTLIT(mmc_nil);
      _setVars = omc_List_map2Fold(threadData, _setVars, boxvar_IndexReduction_setStartExp, _expsetstart, mmc_mk_integer(_rang), mmc_mk_integer(((modelica_integer) 1)), tmpMeta51, NULL);

      _oVars = omc_BackendVariable_addVars(threadData, _setVars, _oVars);

      _oEqns = omc_BackendEquation_add(threadData, _eqn, _oEqns);

      _oEqns = omc_BackendEquation_add(threadData, _deqn, _oEqns);

      _stateCandidates = omc_List_map1(threadData, _stateCandidates, boxvar_BackendVariable_setVarKind, _OMC_LIT47);

      _otherVars = omc_List_map1(threadData, _otherVars, boxvar_BackendVariable_setVarKind, _OMC_LIT47);

      tmpMeta53 = mmc_mk_box13(3, &BackendDAE_StateSet_STATESET__desc, mmc_mk_integer(_oSetIndex), mmc_mk_integer(_rang), _crset, _crA, _aVars, _stateCandidates, _otherVars, _cEqnsLst, _oEqnLst, _crJ, _varJ, _OMC_LIT148);
      tmpMeta52 = mmc_mk_cons(tmpMeta53, _oStateSets);
      _oStateSets = tmpMeta52;

      _oSetIndex = ((modelica_integer) 1) + _oSetIndex;
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT55))
  {
    omc_BackendDump_dumpStateSets(threadData, _oStateSets, _OMC_LIT149);
  }
  _return: OMC_LABEL_UNUSED
  if (out_oVars) { *out_oVars = _oVars; }
  if (out_oEqns) { *out_oEqns = _oEqns; }
  if (out_oStateSets) { *out_oStateSets = _oStateSets; }
  return _oSetIndex;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_generateStateSets(threadData_t *threadData, modelica_metatype _iTplLst, modelica_metatype _iSetIndex, modelica_metatype _iVars, modelica_metatype _iEqns, modelica_metatype _iStateSets, modelica_metatype *out_oVars, modelica_metatype *out_oEqns, modelica_metatype *out_oStateSets)
{
  modelica_integer tmp1;
  modelica_integer _oSetIndex;
  modelica_metatype out_oSetIndex;
  tmp1 = mmc_unbox_integer(_iSetIndex);
  _oSetIndex = omc_IndexReduction_generateStateSets(threadData, _iTplLst, tmp1, _iVars, _iEqns, _iStateSets, out_oVars, out_oEqns, out_oStateSets);
  out_oSetIndex = mmc_mk_icon(_oSetIndex);
  /* skip box _oVars; BackendDAE.Variables */
  /* skip box _oEqns; ExpandableArray<BackendDAE.Equation> */
  /* skip box _oStateSets; list<BackendDAE.StateSet> */
  return out_oSetIndex;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_addStateSets(threadData_t *threadData, modelica_metatype _iTplLst, modelica_integer _iSetIndex, modelica_metatype _inSystem, modelica_metatype *out_oSystem)
{
  modelica_integer _oSetIndex;
  modelica_metatype _oSystem = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oSetIndex = _iSetIndex;
  // _oSystem has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iTplLst;
    tmp4_2 = _inSystem;
    {
      modelica_metatype _syst = NULL;
      modelica_integer _setIndex;
      modelica_metatype _eqs = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _stateSets = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _syst has no default value.
      // _setIndex has no default value.
      // _eqs has no default value.
      // _vars has no default value.
      // _stateSets has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1_c0 = _iSetIndex;
          tmpMeta[0+1] = _inSystem;
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
          
          _syst = tmp4_2;
          /* Pattern matching succeeded */
          _setIndex = omc_IndexReduction_generateStateSets(threadData, _iTplLst, _iSetIndex, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 8))) ,&_vars ,&_eqs ,&_stateSets);

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = _vars;
          _syst = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _eqs;
          _syst = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[8] = _stateSets;
          _syst = tmpMeta10;
          tmp1_c0 = _setIndex;
          tmpMeta[0+1] = _syst;
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
  _oSetIndex = tmp1_c0;
  _oSystem = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oSystem) { *out_oSystem = _oSystem; }
  return _oSetIndex;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_addStateSets(threadData_t *threadData, modelica_metatype _iTplLst, modelica_metatype _iSetIndex, modelica_metatype _inSystem, modelica_metatype *out_oSystem)
{
  modelica_integer tmp1;
  modelica_integer _oSetIndex;
  modelica_metatype out_oSetIndex;
  tmp1 = mmc_unbox_integer(_iSetIndex);
  _oSetIndex = omc_IndexReduction_addStateSets(threadData, _iTplLst, tmp1, _inSystem, out_oSystem);
  out_oSetIndex = mmc_mk_icon(_oSetIndex);
  /* skip box _oSystem; BackendDAE.EqSystem */
  return out_oSetIndex;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_reduceStateSets2(threadData_t *threadData, modelica_metatype _iTplLst)
{
  modelica_metatype _dummyStates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _tpl = NULL;
  modelica_integer _rang;
  modelica_integer _nStateCandidates;
  modelica_integer _nUnassignedEquations;
  modelica_metatype _stateCandidates = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _dummyStates = tmpMeta1;
  // _tpl has no default value.
  // _rang has no default value.
  // _nStateCandidates has no default value.
  // _nUnassignedEquations has no default value.
  // _stateCandidates has no default value.
  {
    modelica_metatype _tpl;
    for (tmpMeta2 = _iTplLst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _tpl = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _tpl;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
      tmp5 = mmc_unbox_integer(tmpMeta4);
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 4));
      tmp7 = mmc_unbox_integer(tmpMeta6);
      tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 5));
      _nStateCandidates = tmp5  /* pattern as ty=Integer */;
      _nUnassignedEquations = tmp7  /* pattern as ty=Integer */;
      _stateCandidates = tmpMeta8;

      _rang = _nStateCandidates - _nUnassignedEquations;

      omc_List_split(threadData, _stateCandidates, _rang ,&_stateCandidates);

      _dummyStates = listAppend(_stateCandidates, _dummyStates);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _dummyStates;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_reduceStateSets(threadData_t *threadData, modelica_metatype _iTplLst, modelica_metatype _idummyStates)
{
  modelica_metatype _odummyStates = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _odummyStates has no default value.
  if((!listEmpty(_iTplLst)))
  {
    _odummyStates = omc_IndexReduction_reduceStateSets2(threadData, _iTplLst);
  }
  else
  {
    _odummyStates = _idummyStates;
  }
  _return: OMC_LABEL_UNUSED
  return _odummyStates;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getVar(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars)
{
  modelica_metatype _v = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  _v = omc_BackendVariable_getVarSingle(threadData, _cr, _vars, NULL);
  _return: OMC_LABEL_UNUSED
  return _v;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_traversinghighestOrderDerivativesFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _dcr = NULL;
      modelica_metatype _so = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _varlst = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _cr has no default value.
      // _dcr has no default value.
      // _so has no default value.
      // _vars has no default value.
      // _varlst has no default value.
      // _b has no default value.
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
          modelica_metatype tmpMeta12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (!optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _v = tmp4_1;
          _so = tmpMeta8;
          _vars = tmpMeta9;
          _varlst = tmpMeta10;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta11 = mmc_mk_cons(_v, _varlst);
          tmpMeta12 = mmc_mk_box3(0, _so, _vars, tmpMeta11);
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,3) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 3));
          if (optionNone(tmpMeta15)) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _v = tmp4_1;
          _cr = tmpMeta13;
          _dcr = tmpMeta16;
          _so = tmpMeta17;
          _vars = tmpMeta18;
          _varlst = tmpMeta19;
          /* Pattern matching succeeded */
          _b = omc_BackendVariable_isState(threadData, _dcr, _vars);

          _varlst = omc_List_consOnTrue(threadData, (!_b), _v, _varlst);

          _so = omc_IndexReduction_addStateOrder(threadData, _cr, _dcr, _so);
          tmpMeta20 = mmc_mk_box3(0, _so, _vars, _varlst);
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta20;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inVar;
          tmpMeta[0+1] = _inTpl;
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
  _outVar = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_highestOrderDerivatives(threadData_t *threadData, modelica_metatype _v, modelica_metatype _iSo, modelica_metatype *out_oSo)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype _oSo = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVars has no default value.
  // _oSo has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box3(0, _iSo, _v, tmpMeta1);
  tmpMeta3 = omc_BackendVariable_traverseBackendDAEVars(threadData, _v, boxvar_IndexReduction_traversinghighestOrderDerivativesFinder, tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
  _oSo = tmpMeta4;
  _outVars = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  if (out_oSo) { *out_oSo = _oSo; }
  return _outVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceDerStatesStatesExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inOrder, modelica_metatype *out_outOrder)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outOrder = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outOrder has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inOrder;
    {
      modelica_metatype _so = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _dcr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _so has no default value.
      // _e has no default value.
      // _cr has no default value.
      // _dcr has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _cr = tmpMeta11;
          _so = tmp4_2;
          /* Pattern matching succeeded */
          _dcr = omc_IndexReduction_getStateOrder(threadData, _cr, _so);

          _e = omc_Expression_crefExp(threadData, _dcr);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _so;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inOrder;
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
  _outOrder = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outOrder) { *out_outOrder = _outOrder; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_inlineOrgEqns(threadData_t *threadData, modelica_metatype _inOrgEqns, modelica_metatype _inA)
{
  modelica_metatype _outOrgEqns = NULL;
  modelica_metatype _orgeqns = NULL;
  modelica_integer _e;
  modelica_integer _numEqs;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOrgEqns has no default value.
  // _orgeqns has no default value.
  // _e has no default value.
  // _numEqs has no default value.
  _outOrgEqns = _inOrgEqns;

  _numEqs = arrayLength(_inOrgEqns);

  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _numEqs;
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _e;
    for(_e = ((modelica_integer) 1); in_range_integer(_e, tmp2, tmp4); _e += tmp3)
    {
      _orgeqns = arrayGet(_inOrgEqns, _e);

      tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
      _orgeqns = omc_BackendInline_inlineEqs(threadData, _orgeqns, _inA, tmpMeta1, 0 /* false */, NULL);

      arrayUpdate(_outOrgEqns, _e, _orgeqns);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outOrgEqns;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_IndexReduction_countOrgEqns(threadData_t *threadData, modelica_metatype _inOrgEqns, modelica_integer _iCount)
{
  modelica_integer _oCount;
  modelica_metatype _orgeqns = NULL;
  modelica_integer _size;
  modelica_integer _numEqs;
  modelica_integer _e;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oCount = _iCount;
  // _orgeqns has no default value.
  // _size has no default value.
  // _numEqs has no default value.
  // _e has no default value.
  _numEqs = arrayLength(_inOrgEqns);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _numEqs;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _e;
    for(_e = ((modelica_integer) 1); in_range_integer(_e, tmp1, tmp3); _e += tmp2)
    {
      _orgeqns = arrayGet(_inOrgEqns, _e);

      _size = omc_BackendEquation_equationLstSize(threadData, _orgeqns);

      _oCount = _oCount + _size;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _oCount;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_countOrgEqns(threadData_t *threadData, modelica_metatype _inOrgEqns, modelica_metatype _iCount)
{
  modelica_integer tmp1;
  modelica_integer _oCount;
  modelica_metatype out_oCount;
  tmp1 = mmc_unbox_integer(_iCount);
  _oCount = omc_IndexReduction_countOrgEqns(threadData, _inOrgEqns, tmp1);
  out_oCount = mmc_mk_icon(_oCount);
  return out_oCount;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_countStateCandidatesWithNever(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _inCount, modelica_integer *out_outCount)
{
  modelica_metatype _outVar = NULL;
  modelica_integer _outCount;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _outCount has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_integer _diffcount;
      modelica_integer _statecount;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _diffcount has no default value.
      // _statecount has no default value.
      // _b has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (1 != tmp8) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _b = omc_BackendVariable_varStateSelectNever(threadData, _inVar);
          tmp1 = (_b?((modelica_integer) 1) + _inCount:_inCount);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          
          /* Pattern matching succeeded */
          _b = omc_BackendVariable_varStateSelectNever(threadData, _inVar);
          tmp1 = ((!_b)?((modelica_integer) 1) + _inCount:_inCount);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          if (!optionNone(tmpMeta15)) goto tmp3_end;
          
          _diffcount = tmp14  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _statecount = _diffcount + _inCount;

          _b = omc_BackendVariable_varStateSelectNever(threadData, _inVar);
          tmp1 = ((!_b)?((modelica_integer) -1) + _statecount:_statecount);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _inCount;
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
  _outCount = tmp1;
  _return: OMC_LABEL_UNUSED
  if (out_outCount) { *out_outCount = _outCount; }
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_countStateCandidatesWithNever(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inCount, modelica_metatype *out_outCount)
{
  modelica_integer tmp1;
  modelica_integer _outCount;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_inCount);
  _outVar = omc_IndexReduction_countStateCandidatesWithNever(threadData, _inVar, tmp1, &_outCount);
  /* skip box _outVar; BackendDAE.Var */
  if (out_outCount) { *out_outCount = mmc_mk_icon(_outCount); }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_countStateCandidates(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _inCount, modelica_integer *out_outCount)
{
  modelica_metatype _outVar = NULL;
  modelica_integer _outCount;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _outCount has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_integer _diffcount;
      modelica_integer _statecount;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _diffcount has no default value.
      // _statecount has no default value.
      // _b has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (1 != tmp8) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _b = omc_BackendVariable_varStateSelectAlways(threadData, _inVar);
          tmp1 = ((!_b)?((modelica_integer) 1) + _inCount:_inCount);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          
          /* Pattern matching succeeded */
          _b = omc_BackendVariable_varStateSelectAlways(threadData, _inVar);
          tmp1 = (_b?((modelica_integer) 1) + _inCount:_inCount);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          if (!optionNone(tmpMeta15)) goto tmp3_end;
          
          _diffcount = tmp14  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _statecount = _diffcount + _inCount;

          _b = omc_BackendVariable_varStateSelectAlways(threadData, _inVar);
          tmp1 = (_b?((modelica_integer) -1) + _statecount:_statecount);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _inCount;
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
  _outCount = tmp1;
  _return: OMC_LABEL_UNUSED
  if (out_outCount) { *out_outCount = _outCount; }
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_countStateCandidates(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inCount, modelica_metatype *out_outCount)
{
  modelica_integer tmp1;
  modelica_integer _outCount;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_inCount);
  _outVar = omc_IndexReduction_countStateCandidates(threadData, _inVar, tmp1, &_outCount);
  /* skip box _outVar; BackendDAE.Var */
  if (out_outCount) { *out_outCount = mmc_mk_icon(_outCount); }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_dynamicStateSelectionWork(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inArg, modelica_metatype _iHt, modelica_integer _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_integer *out_oSetIndex)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _oHt = NULL;
  modelica_integer _oSetIndex;
  modelica_metatype _so = NULL;
  modelica_metatype _orgEqnsLst = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _funcs = NULL;
  modelica_integer _numFreeStates;
  modelica_integer _numOrgEqs;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _oshared has no default value.
  // _oHt has no default value.
  _oSetIndex = _iSetIndex;
  // _so has no default value.
  // _orgEqnsLst has no default value.
  // _mapEqnIncRow has no default value.
  // _mapIncRowEqn has no default value.
  // _vars has no default value.
  // _funcs has no default value.
  // _numFreeStates has no default value.
  // _numOrgEqs has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inArg;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _so = tmpMeta2;
  _orgEqnsLst = tmpMeta3;
  _mapEqnIncRow = tmpMeta4;
  _mapIncRowEqn = tmpMeta5;

  if(omc_Array_all(threadData, _orgEqnsLst, boxvar_listEmpty))
  {
    _osyst = _inSystem;

    _oshared = _inShared;

    _oHt = _iHt;
  }
  else
  {
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
            modelica_metatype tmpMeta10;
            modelica_metatype tmpMeta11;
            modelica_metatype tmpMeta12;
            modelica_metatype tmpMeta13;
            modelica_metatype tmpMeta14;
            /* Pattern matching succeeded */
            /* Pattern-matching assignment */
            tmpMeta10 = _inSystem;
            tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
            _vars = tmpMeta11;

            /* Pattern-matching assignment */
            tmpMeta12 = _inShared;
            tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 12));
            _funcs = tmpMeta13;

            tmpMeta14 = mmc_mk_box2(0, mmc_mk_some(_funcs), _OMC_LIT152);
            _orgEqnsLst = omc_IndexReduction_inlineOrgEqns(threadData, _orgEqnsLst, tmpMeta14);

            if(omc_Flags_isSet(threadData, _OMC_LIT55))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT153),stdout);
            }

            _numFreeStates = mmc_unbox_integer(omc_BackendVariable_traverseBackendDAEVars(threadData, _vars, boxvar_IndexReduction_countStateCandidates, mmc_mk_integer(((modelica_integer) 0))));

            _numOrgEqs = omc_IndexReduction_countOrgEqns(threadData, _orgEqnsLst, ((modelica_integer) 0));

            _osyst = omc_IndexReduction_selectStates(threadData, _numFreeStates, _numOrgEqs, _inSystem, _inShared, _so, _orgEqnsLst, _mapEqnIncRow, _mapIncRowEqn, _iHt, _iSetIndex ,&_oshared ,&_oHt ,&_oSetIndex);
            goto tmp7_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT155);

            goto goto_6;
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
  }
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_oHt) { *out_oHt = _oHt; }
  if (out_oSetIndex) { *out_oSetIndex = _oSetIndex; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_dynamicStateSelectionWork(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inArg, modelica_metatype _iHt, modelica_metatype _iSetIndex, modelica_metatype *out_oshared, modelica_metatype *out_oHt, modelica_metatype *out_oSetIndex)
{
  modelica_integer tmp1;
  modelica_integer _oSetIndex;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_iSetIndex);
  _osyst = omc_IndexReduction_dynamicStateSelectionWork(threadData, _inSystem, _inShared, _inArg, _iHt, tmp1, out_oshared, out_oHt, &_oSetIndex);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oshared; BackendDAE.Shared */
  /* skip box _oHt; tuple<array<list<tuple<tuple<DAE.ComponentRef, #Integer>, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<tuple<DAE.ComponentRef, #Integer>, DAE.Exp>>>>, #Integer, tuple<.HashTableCrIntToExp.FuncHashCref<function>(tuple<DAE.ComponentRef, #Integer> cr) => #Integer, .HashTableCrIntToExp.FuncCrefEqual<function>(tuple<DAE.ComponentRef, #Integer> cr1, tuple<DAE.ComponentRef, #Integer> cr2) => #Boolean, .HashTableCrIntToExp.FuncCrefStr<function>(tuple<DAE.ComponentRef, #Integer> cr) => String, .HashTableCrIntToExp.FuncExpStr<function>(DAE.Exp exp) => String>> */
  if (out_oSetIndex) { *out_oSetIndex = mmc_mk_icon(_oSetIndex); }
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_dynamicStateSelection__mapEqsystem(threadData_t *threadData, modelica_metatype _isysts, modelica_metatype _inShared, modelica_metatype _iargs, modelica_integer _setIndex, modelica_metatype _iHt, modelica_metatype *out_oshared, modelica_metatype *out_oHt)
{
  modelica_metatype _osysts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _oshared = NULL;
  modelica_metatype _oHt = NULL;
  modelica_metatype _syst_ = NULL;
  modelica_metatype _oarg = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _args = NULL;
  modelica_integer _index;
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
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _osysts = tmpMeta1;
  _oshared = _inShared;
  _oHt = _iHt;
  // _syst_ has no default value.
  // _oarg has no default value.
  // _arg has no default value.
  _args = _iargs;
  _index = _setIndex;
  {
    modelica_metatype _syst;
    for (tmpMeta2 = _isysts; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _syst = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _args;
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
      tmpMeta4 = MMC_CAR(tmpMeta3);
      tmpMeta5 = MMC_CDR(tmpMeta3);
      _oarg = tmpMeta4;
      _args = tmpMeta5;

      if(isSome(_oarg))
      {
        /* Pattern-matching assignment */
        tmpMeta6 = _oarg;
        if (optionNone(tmpMeta6)) MMC_THROW_INTERNAL();
        tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
        _arg = tmpMeta7;

        _syst_ = omc_IndexReduction_dynamicStateSelectionWork(threadData, _syst, _oshared, _arg, _oHt, _index ,&_oshared ,&_oHt ,&_index);

        tmpMeta8 = mmc_mk_cons(_syst_, _osysts);
        _osysts = tmpMeta8;
      }
      else
      {
        tmpMeta9 = mmc_mk_cons(_syst, _osysts);
        _osysts = tmpMeta9;
      }
    }
  }

  _osysts = listReverseInPlace(_osysts);
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_oHt) { *out_oHt = _oHt; }
  return _osysts;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_dynamicStateSelection__mapEqsystem(threadData_t *threadData, modelica_metatype _isysts, modelica_metatype _inShared, modelica_metatype _iargs, modelica_metatype _setIndex, modelica_metatype _iHt, modelica_metatype *out_oshared, modelica_metatype *out_oHt)
{
  modelica_integer tmp1;
  modelica_metatype _osysts = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_setIndex);
  _osysts = omc_IndexReduction_dynamicStateSelection__mapEqsystem(threadData, _isysts, _inShared, _iargs, tmp1, _iHt, out_oshared, out_oHt);
  /* skip box _osysts; list<BackendDAE.EqSystem> */
  /* skip box _oshared; BackendDAE.Shared */
  /* skip box _oHt; tuple<array<list<tuple<tuple<DAE.ComponentRef, #Integer>, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<tuple<DAE.ComponentRef, #Integer>, DAE.Exp>>>>, #Integer, tuple<.HashTableCrIntToExp.FuncHashCref<function>(tuple<DAE.ComponentRef, #Integer> cr) => #Integer, .HashTableCrIntToExp.FuncCrefEqual<function>(tuple<DAE.ComponentRef, #Integer> cr1, tuple<DAE.ComponentRef, #Integer> cr2) => #Boolean, .HashTableCrIntToExp.FuncCrefStr<function>(tuple<DAE.ComponentRef, #Integer> cr) => String, .HashTableCrIntToExp.FuncExpStr<function>(DAE.Exp exp) => String>> */
  return _osysts;
}

DLLDirection
modelica_metatype omc_IndexReduction_dynamicStateSelection(threadData_t *threadData, modelica_metatype _inDAE, modelica_metatype _inArgs)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _systs = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _systs has no default value.
  // _shared has no default value.
  // _ht has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inDAE;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _systs = tmpMeta2;
  _shared = tmpMeta3;

  _ht = omc_HashTableCrIntToExp_emptyHashTable(threadData);

  _systs = omc_IndexReduction_dynamicStateSelection__mapEqsystem(threadData, _systs, _shared, _inArgs, ((modelica_integer) 1), _ht ,&_shared ,&_ht);

  if((omc_BaseHashTable_hashTableCurrentSize(threadData, _ht) > ((modelica_integer) 0)))
  {
    _systs = omc_List_map1Fold(threadData, _systs, boxvar_IndexReduction_replaceDummyDerivatives, _ht, _shared ,&_shared);
  }

  tmpMeta4 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systs, _shared);
  _outDAE = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

DLLDirection
modelica_metatype omc_IndexReduction_noStateDeselection(threadData_t *threadData, modelica_metatype _inDAE, modelica_metatype _inArgs)
{
  modelica_metatype _outDAE = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  _outDAE = _inDAE;
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

DLLDirection
modelica_metatype omc_IndexReduction_getStructurallySingularSystemHandlerArg(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _outArg = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype _dht = NULL;
  modelica_metatype _so = NULL;
  modelica_metatype _eqns = NULL;
  modelica_integer _count;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outArg has no default value.
  // _ht has no default value.
  // _dht has no default value.
  // _so has no default value.
  // _eqns has no default value.
  // _count has no default value.
  if((stringEqual(omc_Config_getIndexReductionMethod(threadData), _OMC_LIT123)))
  {
    _so = _OMC_LIT156;
  }
  else
  {
    _count = ((modelica_integer)floor((2.6666666666666665) * (((modelica_real)omc_BackendVariable_getNumStateVarFromVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSystem), 2))))))));

    if((_count == ((modelica_integer) 0)))
    {
      _so = _OMC_LIT156;
    }
    else
    {
      _ht = omc_HashTableCG_emptyHashTableSized(threadData, _count);

      _dht = omc_HashTable3_emptyHashTableSized(threadData, _count);

      tmpMeta1 = mmc_mk_box3(3, &BackendDAE_StateOrder_STATEORDER__desc, _ht, _dht);
      _so = tmpMeta1;
    }
  }

  _eqns = omc_BackendEquation_getEqnsFromEqSystem(threadData, _inSystem);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = mmc_mk_box5(0, _so, arrayCreate(omc_BackendEquation_getNumberOfEquations(threadData, _eqns), tmpMeta2), _mapEqnIncRow, _mapIncRowEqn, mmc_mk_integer(omc_BackendEquation_getNumberOfEquations(threadData, _eqns)));
  _outArg = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _outArg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceFinalVarsGetExp(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype __omcQ_24in_5Frepl, modelica_boolean __omcQ_24in_5Fb, modelica_boolean *out_b)
{
  modelica_metatype _repl = NULL;
  modelica_boolean _b;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _repl = __omcQ_24in_5Frepl;
  _b = __omcQ_24in_5Fb;
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _repl1 = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _values = NULL;
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _repl1 has no default value.
      // _cr has no default value.
      // _values has no default value.
      // _exp has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          
          _cr = tmpMeta6;
          _exp = tmpMeta8;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isFinalVar(threadData, _inVar)) goto tmp3_end;
          _repl1 = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _exp, mmc_mk_none());
          tmpMeta[0+0] = _repl1;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (!optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          
          _cr = tmpMeta9;
          _values = tmpMeta11;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isFinalVar(threadData, _inVar)) goto tmp3_end;
          _exp = omc_DAEUtil_getStartAttrFail(threadData, _values);

          _repl1 = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _exp, mmc_mk_none());
          tmpMeta[0+0] = _repl1;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _repl;
          tmp1_c1 = _b;
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
  _repl = tmpMeta[0+0];
  _b = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_b) { *out_b = _b; }
  return _repl;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_replaceFinalVarsGetExp(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5Fb, modelica_metatype *out_b)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype _repl = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fb);
  _repl = omc_IndexReduction_replaceFinalVarsGetExp(threadData, _inVar, __omcQ_24in_5Frepl, tmp1, &_b);
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  if (out_b) { *out_b = mmc_mk_icon(_b); }
  return _repl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceFinalVarsExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _vlst = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _repl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _cr has no default value.
      // _vlst has no default value.
      // _e has no default value.
      // _e2 has no default value.
      // _repl has no default value.
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
          modelica_boolean tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _e = tmp4_1;
          _cr = tmpMeta6;
          _vars = tmpMeta7;
          _repl = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta9 = omc_BackendVariable_getVar(threadData, _cr, _vars, NULL);
          if (listEmpty(tmpMeta9)) goto goto_2;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          _vlst = tmpMeta9;

          /* Pattern-matching tuple assignment */
          tmpMeta14 = omc_List_fold20(threadData, _vlst, boxvar_IndexReduction_replaceFinalVarsGetExp, _repl, mmc_mk_boolean(0 /* false */), &tmpMeta12);
          _repl = tmpMeta14;
          tmp13 = mmc_unbox_integer(tmpMeta12);
          if (1 /* true */ != tmp13) goto goto_2;

          /* Pattern-matching tuple assignment */
          tmpMeta16 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), &tmp15);
          _e2 = tmpMeta16;
          if (1 /* true */ != tmp15) goto goto_2;
          tmpMeta17 = mmc_mk_box3(0, _vars, mmc_mk_boolean(1 /* true */), _repl);
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = tmpMeta17;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTpl;
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
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceFinalVarsEqn(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_tpl)
{
  modelica_metatype _e = NULL;
  modelica_metatype _tpl = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _e has no default value.
  // _tpl has no default value.
  // _b has no default value.
  /* Pattern-matching tuple assignment */
  tmpMeta4 = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_IndexReduction_replaceFinalVarsExp, _inTpl, &tmpMeta1);
  _e = tmpMeta4;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _tpl = tmpMeta1;
  _b = tmp3  /* pattern as ty=Boolean */;

  _e = omc_ExpressionSimplify_condsimplify(threadData, _b, _e, NULL);
  _return: OMC_LABEL_UNUSED
  if (out_tpl) { *out_tpl = _tpl; }
  return _e;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceFinalVars(threadData_t *threadData, modelica_integer _e, modelica_metatype _vars, modelica_metatype _inTpl)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _changedEqns = NULL;
  modelica_metatype _eqn = NULL;
  modelica_boolean _b;
  modelica_metatype _repl = NULL;
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
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  // _eqns has no default value.
  // _changedEqns has no default value.
  // _eqn has no default value.
  // _b has no default value.
  // _repl has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _eqns = tmpMeta2;
  _changedEqns = tmpMeta3;
  _repl = tmpMeta4;

  _eqn = omc_BackendEquation_get(threadData, _eqns, _e);

  /* Pattern-matching tuple assignment */
  tmpMeta9 = mmc_mk_box3(0, _vars, mmc_mk_boolean(0 /* false */), _repl);
  tmpMeta10 = omc_BackendEquation_traverseExpsOfEquation(threadData, _eqn, boxvar_IndexReduction_replaceFinalVarsEqn, tmpMeta9, &tmpMeta5);
  _eqn = tmpMeta10;
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
  _b = tmp7  /* pattern as ty=Boolean */;
  _repl = tmpMeta8;

  _eqns = (_b?omc_BackendEquation_setAtIndex(threadData, _eqns, _e, _eqn):_eqns);

  _changedEqns = omc_List_consOnTrue(threadData, _b, mmc_mk_integer(_e), _changedEqns);

  tmpMeta11 = mmc_mk_box3(0, _eqns, _changedEqns, _repl);
  _outTpl = tmpMeta11;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_replaceFinalVars(threadData_t *threadData, modelica_metatype _e, modelica_metatype _vars, modelica_metatype _inTpl)
{
  modelica_integer tmp1;
  modelica_metatype _outTpl = NULL;
  tmp1 = mmc_unbox_integer(_e);
  _outTpl = omc_IndexReduction_replaceFinalVars(threadData, tmp1, _vars, _inTpl);
  /* skip box _outTpl; tuple<ExpandableArray<BackendDAE.Equation>, list<#Integer>, BackendVarTransform.VariableReplacements> */
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_handleundifferntiableMSS(threadData_t *threadData, modelica_boolean _b, modelica_metatype _statesWithUnusedDer, modelica_metatype _inEqns, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _inStateOrd, modelica_metatype _inOrgEqnsLst, modelica_metatype _imapEqnIncRow, modelica_metatype _imapIncRowEqn, modelica_metatype *out_oshared, modelica_metatype *out_outAss1, modelica_metatype *out_outAss2, modelica_metatype *out_outStateOrd, modelica_metatype *out_outOrgEqnsLst, modelica_metatype *out_omapEqnIncRow, modelica_metatype *out_omapIncRowEqn)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _outAss1 = NULL;
  modelica_metatype _outAss2 = NULL;
  modelica_metatype _outStateOrd = NULL;
  modelica_metatype _outOrgEqnsLst = NULL;
  modelica_metatype _omapEqnIncRow = NULL;
  modelica_metatype _omapIncRowEqn = NULL;
  modelica_metatype tmpMeta[8] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _oshared has no default value.
  // _outAss1 has no default value.
  // _outAss2 has no default value.
  // _outStateOrd has no default value.
  // _outOrgEqnsLst has no default value.
  // _omapEqnIncRow has no default value.
  // _omapIncRowEqn has no default value.
  
  
  
  
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_boolean tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _b;
    tmp4_2 = _statesWithUnusedDer;
    tmp4_3 = _inSystem;
    {
      modelica_integer _i;
      modelica_metatype _eqns = NULL;
      modelica_metatype _ilst = NULL;
      modelica_metatype _eqnslst = NULL;
      modelica_metatype _eqnslst1 = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _mt = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_metatype _mapEqnIncRow = NULL;
      modelica_metatype _varlst = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _funcs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _eqns has no default value.
      // _ilst has no default value.
      // _eqnslst has no default value.
      // _eqnslst1 has no default value.
      // _v has no default value.
      // _m has no default value.
      // _mt has no default value.
      // _syst has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _mapIncRowEqn has no default value.
      // _mapEqnIncRow has no default value.
      // _varlst has no default value.
      // _var has no default value.
      // _funcs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 5));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          _syst = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_box3(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), tmpMeta10, omc_BackendVarTransform_emptyReplacements(threadData));
          tmpMeta12 = omc_List_fold1(threadData, _inEqns, boxvar_IndexReduction_replaceFinalVars, omc_BackendVariable_daeGlobalKnownVars(threadData, _inShared), tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          if (listEmpty(tmpMeta14)) goto goto_2;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          _eqns = tmpMeta13;
          _eqnslst = tmpMeta14;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[3] = _eqns;
          _syst = tmpMeta17;

          _eqnslst1 = omc_List_flatten(threadData, omc_List_map1r(threadData, _eqnslst, boxvar_arrayGet, _imapEqnIncRow));

          _ilst = omc_List_map1r(threadData, _eqnslst1, boxvar_arrayGet, _inAss2);

          _ilst = omc_List_select1(threadData, _ilst, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _ass2 = omc_List_fold1r(threadData, _eqnslst1, boxvar_arrayUpdate, mmc_mk_integer(((modelica_integer) -1)), _inAss2);

          _ass1 = omc_List_fold1r(threadData, _ilst, boxvar_arrayUpdate, mmc_mk_integer(((modelica_integer) -1)), _inAss1);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT157),stdout);

            fputs(MMC_STRINGDATA(_OMC_LIT158),stdout);

            omc_BackendDump_debuglst(threadData, _eqnslst, boxvar_intString, _OMC_LIT0, _OMC_LIT3);
          }

          _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

          _syst = omc_BackendDAEUtil_updateAdjacencyMatrixScalar(threadData, _syst, _OMC_LIT92, mmc_mk_some(_funcs), _eqnslst, _imapEqnIncRow, _imapIncRowEqn, omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_mapEqnIncRow ,&_mapIncRowEqn);
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _inShared;
          tmpMeta[0+2] = _ass1;
          tmpMeta[0+3] = _ass2;
          tmpMeta[0+4] = _inStateOrd;
          tmpMeta[0+5] = _inOrgEqnsLst;
          tmpMeta[0+6] = _mapEqnIncRow;
          tmpMeta[0+7] = _mapIncRowEqn;
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
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_2);
          tmpMeta19 = MMC_CDR(tmp4_2);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          if (optionNone(tmpMeta21)) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 1));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 5));
          if (optionNone(tmpMeta23)) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
          
          _syst = tmp4_3;
          _v = tmpMeta20;
          _m = tmpMeta22;
          _mt = tmpMeta24;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _varlst = omc_List_map1r(threadData, _statesWithUnusedDer, boxvar_BackendVariable_getVarAt, _v);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT159),stdout);

            omc_BackendDump_printVarList(threadData, _varlst);
          }

          _varlst = omc_BackendVariable_setVarsKind(threadData, _varlst, _OMC_LIT20);

          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[2] = omc_BackendVariable_addVars(threadData, _varlst, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))));
          _syst = tmpMeta25;

          _eqnslst1 = omc_IndexReduction_collectVarEqns(threadData, _statesWithUnusedDer, _mt, arrayLength(_mt), arrayLength(_m));

          _eqnslst1 = omc_List_map1r(threadData, _eqnslst1, boxvar_arrayGet, _imapIncRowEqn);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT158),stdout);

            omc_BackendDump_debuglst(threadData, _eqnslst1, boxvar_intString, _OMC_LIT0, _OMC_LIT3);
          }

          _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

          _syst = omc_BackendDAEUtil_updateAdjacencyMatrixScalar(threadData, _syst, _OMC_LIT92, mmc_mk_some(_funcs), _eqnslst1, _imapEqnIncRow, _imapIncRowEqn, omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_mapEqnIncRow ,&_mapIncRowEqn);
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _inShared;
          tmpMeta[0+2] = _inAss1;
          tmpMeta[0+3] = _inAss2;
          tmpMeta[0+4] = _inStateOrd;
          tmpMeta[0+5] = _inOrgEqnsLst;
          tmpMeta[0+6] = _mapEqnIncRow;
          tmpMeta[0+7] = _mapIncRowEqn;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta26 = MMC_CAR(tmp4_2);
          tmpMeta27 = MMC_CDR(tmp4_2);
          tmp28 = mmc_unbox_integer(tmpMeta26);
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          if (optionNone(tmpMeta30)) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 1));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 5));
          if (optionNone(tmpMeta32)) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
          
          _i = tmp28  /* pattern as ty=Integer */;
          _ilst = tmpMeta27;
          _syst = tmp4_3;
          _v = tmpMeta29;
          _m = tmpMeta31;
          _mt = tmpMeta33;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _var = omc_BackendVariable_getVarAt(threadData, _v, _i);

          tmpMeta34 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
          _varlst = tmpMeta34;

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT159),stdout);

            omc_BackendDump_printVarList(threadData, _varlst);
          }

          _varlst = omc_BackendVariable_setVarsKind(threadData, _varlst, _OMC_LIT20);

          tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[2] = omc_BackendVariable_addVars(threadData, _varlst, _v);
          _syst = tmpMeta35;

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            _varlst = omc_List_map1r(threadData, _ilst, boxvar_BackendVariable_getVarAt, _v);

            fputs(MMC_STRINGDATA(_OMC_LIT160),stdout);

            omc_BackendDump_printVarList(threadData, _varlst);
          }

          tmpMeta36 = mmc_mk_cons(mmc_mk_integer(_i), MMC_REFSTRUCTLIT(mmc_nil));
          _eqnslst1 = omc_IndexReduction_collectVarEqns(threadData, tmpMeta36, _mt, arrayLength(_mt), arrayLength(_m));

          _eqnslst1 = omc_List_map1r(threadData, _eqnslst1, boxvar_arrayGet, _imapIncRowEqn);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT158),stdout);

            omc_BackendDump_debuglst(threadData, _eqnslst1, boxvar_intString, _OMC_LIT0, _OMC_LIT3);
          }

          _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

          _syst = omc_BackendDAEUtil_updateAdjacencyMatrixScalar(threadData, _syst, _OMC_LIT92, mmc_mk_some(_funcs), _eqnslst1, _imapEqnIncRow, _imapIncRowEqn, omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_mapEqnIncRow ,&_mapIncRowEqn);
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _inShared;
          tmpMeta[0+2] = _inAss1;
          tmpMeta[0+3] = _inAss2;
          tmpMeta[0+4] = _inStateOrd;
          tmpMeta[0+5] = _inOrgEqnsLst;
          tmpMeta[0+6] = _mapEqnIncRow;
          tmpMeta[0+7] = _mapIncRowEqn;
          goto tmp3_done;
        }
        case 3: {
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
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          if (optionNone(tmpMeta38)) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 1));
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 5));
          if (optionNone(tmpMeta40)) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 1));
          
          _v = tmpMeta37;
          _mt = tmpMeta41;
          /* Pattern matching succeeded */
          tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
          _ilst = omc_Matching_getUnassigned(threadData, omc_BackendVariable_varsSize(threadData, _v), _inAss1, tmpMeta42);

          tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
          _ilst = omc_List_fold1(threadData, _ilst, boxvar_IndexReduction_statesWithUnusedDerivative, _mt, tmpMeta43);

          _varlst = omc_List_map1r(threadData, _ilst, boxvar_BackendVariable_getVarAt, _v);

          /* Pattern-matching assignment */
          tmpMeta44 = mmc_mk_box2(0, _ilst, _v);
          tmpMeta45 = mmc_mk_box2(0, boxvar_IndexReduction_searchDerivativesExp, tmpMeta44);
          tmpMeta46 = omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, omc_BackendEquation_getInitialEqnsFromShared(threadData, _inShared), boxvar_Expression_traverseSubexpressionsHelper, tmpMeta45);
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 2));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 1));
          _ilst = tmpMeta48;

          /* Pattern-matching assignment */
          tmpMeta49 = _ilst;
          if (listEmpty(tmpMeta49)) goto goto_2;
          tmpMeta50 = MMC_CAR(tmpMeta49);
          tmpMeta51 = MMC_CDR(tmpMeta49);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            tmpMeta52 = stringAppend(_OMC_LIT161,stringDelimitList(omc_List_map(threadData, _ilst, boxvar_intString), _OMC_LIT162));
            tmpMeta53 = stringAppend(tmpMeta52,_OMC_LIT3);
            fputs(MMC_STRINGDATA(tmpMeta53),stdout);

            omc_BackendDump_printVarList(threadData, _varlst);
          }
          tmpMeta[0+0] = omc_IndexReduction_handleundifferntiableMSS(threadData, (listLength(_ilst) <= listLength(_unassignedEqns)), _ilst, _inEqns, _unassignedStates, _unassignedEqns, _inSystem, _inShared, _inAss1, _inAss2, _inStateOrd, _inOrgEqnsLst, _imapEqnIncRow, _imapIncRowEqn, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmpMeta[0+4], &tmpMeta[0+5], &tmpMeta[0+6], &tmpMeta[0+7]);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          if (optionNone(tmpMeta55)) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta55), 1));
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 5));
          if (optionNone(tmpMeta57)) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 1));
          
          _v = tmpMeta54;
          /* Pattern matching succeeded */
          _varlst = omc_List_map1r(threadData, _unassignedStates, boxvar_BackendVariable_getVarAt, _v);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT163),stdout);

            omc_BackendDump_printVarList(threadData, _varlst);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _osyst = tmpMeta[0+0];
  _oshared = tmpMeta[0+1];
  _outAss1 = tmpMeta[0+2];
  _outAss2 = tmpMeta[0+3];
  _outStateOrd = tmpMeta[0+4];
  _outOrgEqnsLst = tmpMeta[0+5];
  _omapEqnIncRow = tmpMeta[0+6];
  _omapIncRowEqn = tmpMeta[0+7];
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_outAss1) { *out_outAss1 = _outAss1; }
  if (out_outAss2) { *out_outAss2 = _outAss2; }
  if (out_outStateOrd) { *out_outStateOrd = _outStateOrd; }
  if (out_outOrgEqnsLst) { *out_outOrgEqnsLst = _outOrgEqnsLst; }
  if (out_omapEqnIncRow) { *out_omapEqnIncRow = _omapEqnIncRow; }
  if (out_omapIncRowEqn) { *out_omapIncRowEqn = _omapIncRowEqn; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_handleundifferntiableMSS(threadData_t *threadData, modelica_metatype _b, modelica_metatype _statesWithUnusedDer, modelica_metatype _inEqns, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _inStateOrd, modelica_metatype _inOrgEqnsLst, modelica_metatype _imapEqnIncRow, modelica_metatype _imapIncRowEqn, modelica_metatype *out_oshared, modelica_metatype *out_outAss1, modelica_metatype *out_outAss2, modelica_metatype *out_outStateOrd, modelica_metatype *out_outOrgEqnsLst, modelica_metatype *out_omapEqnIncRow, modelica_metatype *out_omapIncRowEqn)
{
  modelica_integer tmp1;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_b);
  _osyst = omc_IndexReduction_handleundifferntiableMSS(threadData, tmp1, _statesWithUnusedDer, _inEqns, _unassignedStates, _unassignedEqns, _inSystem, _inShared, _inAss1, _inAss2, _inStateOrd, _inOrgEqnsLst, _imapEqnIncRow, _imapIncRowEqn, out_oshared, out_outAss1, out_outAss2, out_outStateOrd, out_outOrgEqnsLst, out_omapEqnIncRow, out_omapIncRowEqn);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oshared; BackendDAE.Shared */
  /* skip box _outAss1; array<#Integer> */
  /* skip box _outAss2; array<#Integer> */
  /* skip box _outStateOrd; BackendDAE.StateOrder */
  /* skip box _outOrgEqnsLst; array<list<BackendDAE.Equation>> */
  /* skip box _omapEqnIncRow; array<list<#Integer>> */
  /* skip box _omapIncRowEqn; array<#Integer> */
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_handleundifferntiableMSSLst(threadData_t *threadData, modelica_metatype _iNotDiffableMSS, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _iArg, modelica_metatype *out_oshared, modelica_metatype *out_outAss1, modelica_metatype *out_outAss2, modelica_metatype *out_oArg)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _outAss1 = NULL;
  modelica_metatype _outAss2 = NULL;
  modelica_metatype _oArg = NULL;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _oshared has no default value.
  // _outAss1 has no default value.
  // _outAss2 has no default value.
  // _oArg has no default value.
  
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _iNotDiffableMSS;
    tmp4_2 = _inSystem;
    tmp4_3 = _iArg;
    {
      modelica_metatype _notDiffableMSS = NULL;
      modelica_metatype _unassignedEqns = NULL;
      modelica_metatype _unassignedStates = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _ilst = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _shared = NULL;
      modelica_metatype _so = NULL;
      modelica_metatype _orgEqnsLst = NULL;
      modelica_metatype _mapEqnIncRow = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_integer _noofeqns;
      modelica_metatype _mt = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _notDiffableMSS has no default value.
      // _unassignedEqns has no default value.
      // _unassignedStates has no default value.
      // _eqns has no default value.
      // _ilst has no default value.
      // _v has no default value.
      // _syst has no default value.
      // _shared has no default value.
      // _so has no default value.
      // _orgEqnsLst has no default value.
      // _mapEqnIncRow has no default value.
      // _mapIncRowEqn has no default value.
      // _noofeqns has no default value.
      // _mt has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inSystem;
          tmpMeta[0+1] = _inShared;
          tmpMeta[0+2] = _inAss1;
          tmpMeta[0+3] = _inAss2;
          tmpMeta[0+4] = _iArg;
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
          modelica_integer tmp19;
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
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 5));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          _eqns = tmpMeta8;
          _unassignedStates = tmpMeta9;
          _unassignedEqns = tmpMeta10;
          _notDiffableMSS = tmpMeta7;
          _v = tmpMeta11;
          _mt = tmpMeta13;
          _so = tmpMeta14;
          _orgEqnsLst = tmpMeta15;
          _mapEqnIncRow = tmpMeta16;
          _mapIncRowEqn = tmpMeta17;
          _noofeqns = tmp19  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT164),stdout);

            fputs(MMC_STRINGDATA(_OMC_LIT165),stdout);

            omc_BackendDump_debuglst(threadData, _unassignedEqns, boxvar_intString, _OMC_LIT162, _OMC_LIT3);

            fputs(MMC_STRINGDATA(_OMC_LIT166),stdout);

            omc_BackendDump_debuglst(threadData, _unassignedStates, boxvar_intString, _OMC_LIT162, _OMC_LIT3);
          }

          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          _ilst = omc_List_fold1(threadData, _unassignedStates, boxvar_IndexReduction_statesWithUnusedDerivative, _mt, tmpMeta20);

          _ilst = omc_List_select1(threadData, _ilst, boxvar_IndexReduction_isStateonIndex, _v);

          /* Pattern-matching assignment */
          tmpMeta21 = mmc_mk_box2(0, _ilst, _v);
          tmpMeta22 = mmc_mk_box2(0, boxvar_IndexReduction_searchDerivativesExp, tmpMeta21);
          tmpMeta23 = omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, omc_BackendEquation_getInitialEqnsFromShared(threadData, _inShared), boxvar_Expression_traverseSubexpressionsHelper, tmpMeta22);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 1));
          _ilst = tmpMeta25;

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT167),stdout);

            omc_BackendDump_debuglst(threadData, _ilst, boxvar_intString, _OMC_LIT162, _OMC_LIT3);
          }

          _syst = omc_IndexReduction_handleundifferntiableMSS(threadData, (listLength(_ilst) <= listLength(_unassignedEqns)), _ilst, _eqns, _unassignedStates, _unassignedEqns, _inSystem, _inShared, _inAss1, _inAss2, _so, _orgEqnsLst, _mapEqnIncRow, _mapIncRowEqn ,&_shared ,&_ass1 ,&_ass2 ,&_so ,&_orgEqnsLst ,&_mapEqnIncRow ,&_mapIncRowEqn);
          tmpMeta26 = mmc_mk_box5(0, _so, _orgEqnsLst, _mapEqnIncRow, _mapIncRowEqn, mmc_mk_integer(_noofeqns));
          /* Tail recursive call */
          _iNotDiffableMSS = _notDiffableMSS;
          _inSystem = _syst;
          _inShared = _shared;
          _inAss1 = _ass1;
          _inAss2 = _ass2;
          _iArg = tmpMeta26;
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
  _osyst = tmpMeta[0+0];
  _oshared = tmpMeta[0+1];
  _outAss1 = tmpMeta[0+2];
  _outAss2 = tmpMeta[0+3];
  _oArg = tmpMeta[0+4];
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_outAss1) { *out_outAss1 = _outAss1; }
  if (out_outAss2) { *out_outAss2 = _outAss2; }
  if (out_oArg) { *out_oArg = _oArg; }
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_IndexReduction_isStateonIndex(threadData_t *threadData, modelica_integer _index, modelica_metatype _vars)
{
  modelica_boolean _b;
  modelica_metatype _v = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _v has no default value.
  _v = omc_BackendVariable_getVarAt(threadData, _vars, _index);

  _b = omc_BackendVariable_isStateVar(threadData, _v);
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_isStateonIndex(threadData_t *threadData, modelica_metatype _index, modelica_metatype _vars)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_index);
  _b = omc_IndexReduction_isStateonIndex(threadData, tmp1, _vars);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

static modelica_metatype closure0_intLt(threadData_t *thData, modelica_metatype closure, modelica_metatype i1)
{
  modelica_metatype i2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_intLt(thData, i1, i2);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_statesWithUnusedDerivative(threadData_t *threadData, modelica_integer _state, modelica_metatype _mt, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = mmc_mk_box1(0, mmc_mk_integer(((modelica_integer) 0)));
          tmp7 = omc_List_all(threadData, arrayGet(_mt,_state) /* DAE.ASUB */, (modelica_fnptr) mmc_mk_box2(0,closure0_intLt,tmpMeta6));
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_state), _iAcc);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _iAcc;
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
  _oAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_statesWithUnusedDerivative(threadData_t *threadData, modelica_metatype _state, modelica_metatype _mt, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_metatype _oAcc = NULL;
  tmp1 = mmc_unbox_integer(_state);
  _oAcc = omc_IndexReduction_statesWithUnusedDerivative(threadData, tmp1, _mt, _iAcc);
  /* skip box _oAcc; list<#Integer> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceStateOrderExpFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVars, modelica_boolean *out_cont, modelica_metatype *out_outVars)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outVars = NULL;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cont has no default value.
  // _outVars has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inVars;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _dcr = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _attr = NULL;
      modelica_integer _index;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _vars has no default value.
      // _dcr has no default value.
      // _cr has no default value.
      // _attr has no default value.
      // _index has no default value.
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
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _cr = tmpMeta11;
          _vars = tmp4_2;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta12 = omc_BackendVariable_getVarSingle(threadData, _cr, _vars, NULL);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,1,3) == 0) goto goto_2;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
          if (optionNone(tmpMeta14)) goto goto_2;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          _dcr = tmpMeta15;

          _e = omc_Expression_crefExp(threadData, _dcr);
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _vars;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_metatype tmpMeta26;
          modelica_boolean tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          if (3 != MMC_STRLEN(tmpMeta17) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta17)) != 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta18)) goto tmp3_end;
          tmpMeta19 = MMC_CAR(tmpMeta18);
          tmpMeta20 = MMC_CDR(tmpMeta18);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,6,2) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          if (listEmpty(tmpMeta20)) goto tmp3_end;
          tmpMeta22 = MMC_CAR(tmpMeta20);
          tmpMeta23 = MMC_CDR(tmpMeta20);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,0,1) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          if (!listEmpty(tmpMeta23)) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _cr = tmpMeta21;
          _index = tmp25  /* pattern as ty=Integer */;
          _attr = tmpMeta26;
          _vars = tmp4_2;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp27 = (_index == ((modelica_integer) 2));
          if (1 /* true */ != tmp27) goto goto_2;

          /* Pattern-matching tuple assignment */
          tmpMeta28 = omc_BackendVariable_getVarSingle(threadData, _cr, _vars, NULL);
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,1,3) == 0) goto goto_2;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 3));
          if (optionNone(tmpMeta30)) goto goto_2;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 1));
          _dcr = tmpMeta31;

          _e = omc_Expression_crefExp(threadData, _dcr);
          tmpMeta32 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta33 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT32, tmpMeta32, _attr);
          tmpMeta[0+0] = tmpMeta33;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _vars;
          goto tmp3_done;
        }
        case 2: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,1,1) == 0) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          if (3 != MMC_STRLEN(tmpMeta35) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta35)) != 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta36)) goto tmp3_end;
          tmpMeta37 = MMC_CAR(tmpMeta36);
          tmpMeta38 = MMC_CDR(tmpMeta36);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,13,3) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta39,1,1) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
          if (3 != MMC_STRLEN(tmpMeta40) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta40)) != 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 3));
          if (listEmpty(tmpMeta41)) goto tmp3_end;
          tmpMeta42 = MMC_CAR(tmpMeta41);
          tmpMeta43 = MMC_CDR(tmpMeta41);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,6,2) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 2));
          if (!listEmpty(tmpMeta43)) goto tmp3_end;
          if (!listEmpty(tmpMeta38)) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _cr = tmpMeta44;
          _attr = tmpMeta45;
          _vars = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta46 = omc_BackendVariable_getVarSingle(threadData, _cr, _vars, NULL);
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,1,3) == 0) goto goto_2;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 3));
          if (optionNone(tmpMeta48)) goto goto_2;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 1));
          _dcr = tmpMeta49;

          _e = omc_Expression_crefExp(threadData, _dcr);
          tmpMeta50 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta51 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT32, tmpMeta50, _attr);
          tmpMeta[0+0] = tmpMeta51;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _vars;
          goto tmp3_done;
        }
        case 3: {
          
          _e = tmp4_1;
          _vars = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _vars;
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
  _outExp = tmpMeta[0+0];
  _cont = tmp1_c1;
  _outVars = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outVars) { *out_outVars = _outVars; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_replaceStateOrderExpFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVars, modelica_metatype *out_cont, modelica_metatype *out_outVars)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_IndexReduction_replaceStateOrderExpFinder(threadData, _inExp, _inVars, &_cont, out_outVars);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outVars; BackendDAE.Variables */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceStateOrderExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVars, modelica_metatype *out_vars)
{
  modelica_metatype _e = NULL;
  modelica_metatype _vars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _e has no default value.
  // _vars has no default value.
  _e = omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_IndexReduction_replaceStateOrderExpFinder, _inVars ,&_vars);
  _return: OMC_LABEL_UNUSED
  if (out_vars) { *out_vars = _vars; }
  return _e;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_replaceDifferentiatedEqns(threadData_t *threadData, modelica_metatype _inEqnTplLst, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _mt, modelica_metatype _imapIncRowEqn, modelica_metatype _inChangedVars, modelica_metatype _inOrgEqns, modelica_metatype *out_outEqns, modelica_metatype *out_outChangedVars, modelica_metatype *out_outOrgEqns)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype _outEqns = NULL;
  modelica_metatype _outChangedVars = NULL;
  modelica_metatype _outOrgEqns = NULL;
  modelica_integer _eqIdx;
  modelica_metatype _eqOrig = NULL;
  modelica_metatype _eqDiff = NULL;
  modelica_metatype _eqTpl = NULL;
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
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVars has no default value.
  // _outEqns has no default value.
  // _outChangedVars has no default value.
  // _outOrgEqns has no default value.
  // _eqIdx has no default value.
  // _eqOrig has no default value.
  // _eqDiff has no default value.
  // _eqTpl has no default value.
  _outVars = _vars;

  _outEqns = _eqns;

  _outChangedVars = _inChangedVars;

  _outOrgEqns = _inOrgEqns;

  {
    modelica_metatype _eqTpl;
    for (tmpMeta1 = _inEqnTplLst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eqTpl = MMC_CAR(tmpMeta1);
      if(isSome(omc_Util_tuple32(threadData, _eqTpl)))
      {
        /* Pattern-matching assignment */
        tmpMeta2 = _eqTpl;
        tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
        tmp4 = mmc_unbox_integer(tmpMeta3);
        tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
        if (optionNone(tmpMeta5)) MMC_THROW_INTERNAL();
        tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
        tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
        _eqIdx = tmp4  /* pattern as ty=Integer */;
        _eqDiff = tmpMeta6;
        _eqOrig = tmpMeta7;

        _eqDiff = omc_BackendEquation_traverseExpsOfEquation(threadData, _eqDiff, boxvar_IndexReduction_replaceStateOrderExp, _outVars, NULL);

        /* Pattern-matching tuple assignment */
        tmpMeta13 = mmc_mk_box6(0, _outVars, _outEqns, _outChangedVars, mmc_mk_integer(_eqIdx), _imapIncRowEqn, _mt);
        tmpMeta14 = mmc_mk_box2(0, boxvar_IndexReduction_changeDerVariablesToStatesFinder, tmpMeta13);
        tmpMeta15 = omc_BackendEquation_traverseExpsOfEquation(threadData, _eqDiff, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta14, &tmpMeta8);
        _eqDiff = tmpMeta15;
        tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
        tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
        tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
        tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
        _outVars = tmpMeta10;
        _outEqns = tmpMeta11;
        _outChangedVars = tmpMeta12;

        if(omc_Flags_isSet(threadData, _OMC_LIT55))
        {
          tmpMeta16 = mmc_mk_box3(0, _eqOrig, _eqDiff, mmc_mk_integer(_eqIdx));
          omc_IndexReduction_debugdifferentiateEqns(threadData, tmpMeta16);
        }

        _outEqns = omc_BackendEquation_setAtIndex(threadData, _outEqns, _eqIdx, _eqDiff);

        _outOrgEqns = omc_IndexReduction_addOrgEqn(threadData, _eqIdx, _eqOrig, _outOrgEqns);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outEqns) { *out_outEqns = _outEqns; }
  if (out_outChangedVars) { *out_outChangedVars = _outChangedVars; }
  if (out_outOrgEqns) { *out_outOrgEqns = _outOrgEqns; }
  return _outVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_differentiateEqnsLst1(threadData_t *threadData, modelica_integer _eqIdx, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _inShared, modelica_metatype *out_oshared)
{
  modelica_metatype _oEqTpl = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _diffEqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oEqTpl has no default value.
  // _oshared has no default value.
  // _eqn has no default value.
  // _diffEqn has no default value.
  _eqn = omc_BackendEquation_get(threadData, _eqns, _eqIdx);

  if(omc_BackendEquation_isDifferentiated(threadData, _eqn))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT55))
    {
      omc_BackendDump_debugStrEqnStr(threadData, _OMC_LIT168, _eqn, _OMC_LIT3);
    }

    tmpMeta1 = mmc_mk_box3(0, mmc_mk_integer(_eqIdx), mmc_mk_none(), _eqn);
    _oEqTpl = mmc_mk_some(tmpMeta1);

    _oshared = _inShared;
  }
  else
  {
    _diffEqn = omc_Differentiate_differentiateEquationTime(threadData, _eqn, _vars, _inShared ,&_oshared);

    _eqn = omc_BackendEquation_markDifferentiated(threadData, _eqn);

    if(isSome(_diffEqn))
    {
      tmpMeta2 = mmc_mk_box3(0, mmc_mk_integer(_eqIdx), _diffEqn, _eqn);
      _oEqTpl = mmc_mk_some(tmpMeta2);
    }
    else
    {
      _oEqTpl = mmc_mk_none();

      _oshared = _inShared;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  return _oEqTpl;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_differentiateEqnsLst1(threadData_t *threadData, modelica_metatype _eqIdx, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _inShared, modelica_metatype *out_oshared)
{
  modelica_integer tmp1;
  modelica_metatype _oEqTpl = NULL;
  tmp1 = mmc_unbox_integer(_eqIdx);
  _oEqTpl = omc_IndexReduction_differentiateEqnsLst1(threadData, tmp1, _vars, _eqns, _inShared, out_oshared);
  /* skip box _oEqTpl; Option<tuple<#Integer, Option<BackendDAE.Equation>, BackendDAE.Equation>> */
  /* skip box _oshared; BackendDAE.Shared */
  return _oEqTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_differentiateEqnsLst(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _inShared, modelica_metatype *out_oShared)
{
  modelica_metatype _outEqnTpl = NULL;
  modelica_metatype _oShared = NULL;
  modelica_integer _e;
  modelica_metatype _eqs = NULL;
  modelica_metatype _eqTplOpt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqnTpl has no default value.
  // _oShared has no default value.
  // _e has no default value.
  // _eqs has no default value.
  // _eqTplOpt has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEqnTpl = tmpMeta1;

  _oShared = _inShared;

  _eqs = _inEqns;

  while(1)
  {
    if(!(!listEmpty(_eqs))) break;
    /* Pattern-matching assignment */
    tmpMeta2 = _eqs;
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
    tmpMeta3 = MMC_CAR(tmpMeta2);
    tmpMeta4 = MMC_CDR(tmpMeta2);
    tmp5 = mmc_unbox_integer(tmpMeta3);
    _e = tmp5  /* pattern as ty=Integer */;
    _eqs = tmpMeta4;

    _eqTplOpt = omc_IndexReduction_differentiateEqnsLst1(threadData, _e, _vars, _eqns, _oShared ,&_oShared);

    if(isSome(_eqTplOpt))
    {
      tmpMeta6 = mmc_mk_cons(omc_Util_getOption(threadData, _eqTplOpt), _outEqnTpl);
      _outEqnTpl = tmpMeta6;
    }
    else
    {
      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      _outEqnTpl = tmpMeta7;

      _oShared = _inShared;

      goto _return;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oShared) { *out_oShared = _oShared; }
  return _outEqnTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_searchDerivativesExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _tpl;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _ilst = NULL;
      modelica_metatype _i1lst = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _ilst has no default value.
      // _i1lst has no default value.
      // _e has no default value.
      // _cr has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _e = tmp4_1;
          _cr = tmpMeta11;
          _ilst = tmpMeta12;
          _vars = tmpMeta13;
          /* Pattern matching succeeded */
          omc_BackendVariable_getVar(threadData, _cr, _vars ,&_i1lst);

          _ilst = omc_List_fold1(threadData, _i1lst, boxvar_List_removeOnTrue, boxvar_intEq, _ilst);
          tmpMeta14 = mmc_mk_box2(0, _ilst, _vars);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta14;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _tpl;
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
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_collectVarEqns(threadData_t *threadData, modelica_metatype _varIdcsIn, modelica_metatype _mT, modelica_integer _numVars, modelica_integer _numEqs)
{
  modelica_metatype _eqIdcsOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _varIdx;
  modelica_metatype _eqIdcs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqIdcsOut = tmpMeta1;
  // _varIdx has no default value.
  // _eqIdcs has no default value.
  {
    modelica_metatype _varIdx;
    for (tmpMeta2 = _varIdcsIn; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _varIdx = MMC_CAR(tmpMeta2);
      if((mmc_unbox_integer(_varIdx) < _numVars))
      {
        _eqIdcs = omc_List_map(threadData, arrayGet(_mT,mmc_unbox_integer(_varIdx)) /* DAE.ASUB */, boxvar_intAbs);

        _eqIdcsOut = listAppend(_eqIdcs, _eqIdcsOut);
      }
    }
  }

  _eqIdcsOut = omc_List_uniqueIntN(threadData, _eqIdcsOut, _numEqs);
  _return: OMC_LABEL_UNUSED
  return _eqIdcsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_collectVarEqns(threadData_t *threadData, modelica_metatype _varIdcsIn, modelica_metatype _mT, modelica_metatype _numVars, modelica_metatype _numEqs)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _eqIdcsOut = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_numVars);
  tmp2 = mmc_unbox_integer(_numEqs);
  _eqIdcsOut = omc_IndexReduction_collectVarEqns(threadData, _varIdcsIn, _mT, tmp1, tmp2);
  /* skip box _eqIdcsOut; list<#Integer> */
  return _eqIdcsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_differentiateEqns(threadData_t *threadData, modelica_metatype _inEqnsTpl, modelica_metatype _MSSSeqs, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _inOrgEqnsLst, modelica_metatype _imapEqnIncRow, modelica_metatype _imapIncRowEqn, modelica_metatype _iNotDiffableMSS, modelica_metatype *out_oshared, modelica_metatype *out_outAss1, modelica_metatype *out_outAss2, modelica_metatype *out_outOrgEqnsLst, modelica_metatype *out_omapEqnIncRow, modelica_metatype *out_omapIncRowEqn, modelica_metatype *out_oNotDiffableMSS)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _outAss1 = NULL;
  modelica_metatype _outAss2 = NULL;
  modelica_metatype _outOrgEqnsLst = NULL;
  modelica_metatype _omapEqnIncRow = NULL;
  modelica_metatype _omapIncRowEqn = NULL;
  modelica_metatype _oNotDiffableMSS = NULL;
  modelica_metatype _syst = NULL;
  modelica_metatype _eqns_1 = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mt = NULL;
  modelica_metatype _v = NULL;
  modelica_metatype _v1 = NULL;
  modelica_metatype _funcs = NULL;
  modelica_integer _numEqs;
  modelica_integer _numEqs1;
  modelica_metatype _changedVars = NULL;
  modelica_metatype _eqnslst = NULL;
  modelica_metatype _eqnslst1 = NULL;
  modelica_metatype _assEqs = NULL;
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
  modelica_boolean tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // _osyst has no default value.
  // _oshared has no default value.
  // _outAss1 has no default value.
  // _outAss2 has no default value.
  // _outOrgEqnsLst has no default value.
  // _omapEqnIncRow has no default value.
  // _omapIncRowEqn has no default value.
  // _oNotDiffableMSS has no default value.
  // _syst has no default value.
  // _eqns_1 has no default value.
  // _eqns has no default value.
  // _m has no default value.
  // _mt has no default value.
  // _v has no default value.
  // _v1 has no default value.
  // _funcs has no default value.
  // _numEqs has no default value.
  // _numEqs1 has no default value.
  // _changedVars has no default value.
  // _eqnslst has no default value.
  // _eqnslst1 has no default value.
  // _assEqs has no default value.
  if(listEmpty(_inEqnsTpl))
  {
    _osyst = _inSystem;

    _oshared = _inShared;

    _outAss1 = _inAss1;

    _outAss2 = _inAss2;

    _outOrgEqnsLst = _inOrgEqnsLst;

    _omapEqnIncRow = _imapEqnIncRow;

    _omapIncRowEqn = _imapIncRowEqn;

    tmpMeta2 = mmc_mk_box3(0, _MSSSeqs, _unassignedStates, _unassignedEqns);
    tmpMeta1 = mmc_mk_cons(tmpMeta2, _iNotDiffableMSS);
    _oNotDiffableMSS = tmpMeta1;
  }
  else
  {
    _syst = _inSystem;

    /* Pattern-matching assignment */
    tmpMeta3 = _syst;
    tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
    tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
    tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 4));
    if (optionNone(tmpMeta6)) MMC_THROW_INTERNAL();
    tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
    tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 5));
    if (optionNone(tmpMeta8)) MMC_THROW_INTERNAL();
    tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
    _v = tmpMeta4;
    _eqns = tmpMeta5;
    _m = tmpMeta7;
    _mt = tmpMeta9;

    _numEqs = omc_BackendEquation_getNumberOfEquations(threadData, _eqns);

    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    _v1 = omc_IndexReduction_replaceDifferentiatedEqns(threadData, _inEqnsTpl, _v, _eqns, _mt, _imapIncRowEqn, tmpMeta10, _inOrgEqnsLst ,&_eqns_1 ,&_changedVars ,&_outOrgEqnsLst);

    _numEqs1 = omc_BackendEquation_getNumberOfEquations(threadData, _eqns_1);

    tmp12 = (modelica_boolean)(_numEqs1 > _numEqs);
    if(tmp12)
    {
      tmpMeta13 = omc_List_intRange2(threadData, ((modelica_integer) 1) + _numEqs, _numEqs1);
    }
    else
    {
      tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta13 = tmpMeta11;
    }
    _eqnslst = tmpMeta13;

    _assEqs = omc_List_map1r(threadData, _changedVars, boxvar_arrayGet, _inAss1);

    _assEqs = omc_List_select1(threadData, _assEqs, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

    _outAss2 = omc_List_fold1r(threadData, _assEqs, boxvar_arrayUpdate, mmc_mk_integer(((modelica_integer) -1)), _inAss2);

    _outAss1 = omc_List_fold1r(threadData, _changedVars, boxvar_arrayUpdate, mmc_mk_integer(((modelica_integer) -1)), _inAss1);

    _eqnslst1 = omc_IndexReduction_collectVarEqns(threadData, _changedVars, _mt, arrayLength(_mt), arrayLength(_m));

    __omcQ_24mrfa_5F0 = _v1;

    __omcQ_24mrfa_5F1 = _eqns_1;

    tmpMeta14 = mmc_mk_box10(3, &BackendDAE_EqSystem_EQSYSTEM__desc, __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 10))));
    _syst = tmpMeta14;

    _eqnslst1 = omc_List_map1r(threadData, _eqnslst1, boxvar_arrayGet, _imapIncRowEqn);

    _eqnslst1 = omc_List_uniqueIntN(threadData, listAppend(_MSSSeqs, _eqnslst1), _numEqs1);

    _eqnslst = listAppend(_eqnslst1, _eqnslst);

    if(omc_Flags_isSet(threadData, _OMC_LIT55))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT158),stdout);

      omc_BackendDump_debuglst(threadData, _eqnslst, boxvar_intString, _OMC_LIT0, _OMC_LIT3);

      fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);
    }

    _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

    _syst = omc_BackendDAEUtil_updateAdjacencyMatrixScalar(threadData, _syst, _OMC_LIT92, mmc_mk_some(_funcs), _eqnslst, _imapEqnIncRow, _imapIncRowEqn, omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_omapEqnIncRow ,&_omapIncRowEqn);

    _osyst = _syst;

    _oshared = _inShared;

    _oNotDiffableMSS = _iNotDiffableMSS;
  }
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_outAss1) { *out_outAss1 = _outAss1; }
  if (out_outAss2) { *out_outAss2 = _outAss2; }
  if (out_outOrgEqnsLst) { *out_outOrgEqnsLst = _outOrgEqnsLst; }
  if (out_omapEqnIncRow) { *out_omapEqnIncRow = _omapEqnIncRow; }
  if (out_omapIncRowEqn) { *out_omapIncRowEqn = _omapIncRowEqn; }
  if (out_oNotDiffableMSS) { *out_oNotDiffableMSS = _oNotDiffableMSS; }
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_markTrue(threadData_t *threadData, modelica_integer _indx, modelica_integer _mark, modelica_metatype __omcQ_24in_5Farr)
{
  modelica_metatype _arr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arr = __omcQ_24in_5Farr;
  arrayUpdate(_arr, labs(_indx), mmc_mk_integer(_mark));
  _return: OMC_LABEL_UNUSED
  return _arr;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_markTrue(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _mark, modelica_metatype __omcQ_24in_5Farr)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _arr = NULL;
  tmp1 = mmc_unbox_integer(_indx);
  tmp2 = mmc_unbox_integer(_mark);
  _arr = omc_IndexReduction_markTrue(threadData, tmp1, tmp2, __omcQ_24in_5Farr);
  /* skip box _arr; array<#Integer> */
  return _arr;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_IndexReduction_isMarked(threadData_t *threadData, modelica_metatype _ass, modelica_integer _indx)
{
  modelica_boolean _b;
  modelica_metatype _arr = NULL;
  modelica_integer _mark;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _arr has no default value.
  // _mark has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _ass;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _arr = tmpMeta2;
  _mark = tmp4  /* pattern as ty=Integer */;

  _b = (mmc_unbox_integer(arrayGet(_arr,labs(_indx)) /* DAE.ASUB */) == _mark);
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_isMarked(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _indx)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_indx);
  _b = omc_IndexReduction_isMarked(threadData, _ass, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_statesInEquations(threadData_t *threadData, modelica_integer _eindx, modelica_metatype _inTpl, modelica_metatype _ass1, modelica_metatype _inStateLst)
{
  modelica_metatype _outStateLst = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _statemark = NULL;
  modelica_integer _mark;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStateLst has no default value.
  // _vars has no default value.
  // _m has no default value.
  // _statemark has no default value.
  // _mark has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _m = tmpMeta2;
  _statemark = tmpMeta3;
  _mark = tmp5  /* pattern as ty=Integer */;

  _vars = omc_List_removeOnTrue(threadData, mmc_mk_integer(((modelica_integer) 0)), boxvar_intLt, arrayGet(_m,_eindx) /* DAE.ASUB */);

  _vars = omc_List_map(threadData, _vars, boxvar_intAbs);

  tmpMeta6 = mmc_mk_box2(0, _statemark, mmc_mk_integer(_mark));
  _vars = omc_List_removeOnTrue(threadData, tmpMeta6, boxvar_IndexReduction_isMarked, _vars);

  omc_List_fold1(threadData, _vars, boxvar_IndexReduction_markTrue, mmc_mk_integer(_mark), _statemark);

  _outStateLst = listAppend(_inStateLst, _vars);
  _return: OMC_LABEL_UNUSED
  return _outStateLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_statesInEquations(threadData_t *threadData, modelica_metatype _eindx, modelica_metatype _inTpl, modelica_metatype _ass1, modelica_metatype _inStateLst)
{
  modelica_integer tmp1;
  modelica_metatype _outStateLst = NULL;
  tmp1 = mmc_unbox_integer(_eindx);
  _outStateLst = omc_IndexReduction_statesInEquations(threadData, tmp1, _inTpl, _ass1, _inStateLst);
  /* skip box _outStateLst; list<#Integer> */
  return _outStateLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_unassignedContinuesEqns(threadData_t *threadData, modelica_integer _eindx, modelica_metatype _vars, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _inFold)
{
  modelica_metatype _outFold = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFold has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inFold;
    {
      modelica_integer _vindx;
      modelica_metatype _unassignedEqns = NULL;
      modelica_metatype _eqnsLst = NULL;
      modelica_metatype _varlst = NULL;
      modelica_metatype _discEqns = NULL;
      modelica_metatype _vlst = NULL;
      modelica_boolean _b;
      modelica_boolean _ba;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vindx has no default value.
      // _unassignedEqns has no default value.
      // _eqnsLst has no default value.
      // _varlst has no default value.
      // _discEqns has no default value.
      // _vlst has no default value.
      // _b has no default value.
      // _ba has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _unassignedEqns = tmpMeta6;
          _eqnsLst = tmpMeta7;
          _discEqns = tmpMeta8;
          /* Pattern matching succeeded */
          _vindx = mmc_unbox_integer(arrayGet(_ass2,_eindx) /* DAE.ASUB */);

          _ba = (_vindx < ((modelica_integer) 1));

          _varlst = arrayGet(_m,_eindx) /* DAE.ASUB */;

          _varlst = omc_List_map(threadData, _varlst, boxvar_intAbs);

          _vlst = omc_List_map1r(threadData, _varlst, boxvar_BackendVariable_getVarAt, _vars);

          _b = omc_List_all(threadData, _vlst, boxvar_BackendVariable_isVarDiscrete);

          _eqnsLst = omc_List_consOnTrue(threadData, (!_b), mmc_mk_integer(_eindx), _eqnsLst);

          _unassignedEqns = omc_List_consOnTrue(threadData, (_ba && (!_b)), mmc_mk_integer(_eindx), _unassignedEqns);

          _discEqns = omc_List_consOnTrue(threadData, _b, mmc_mk_integer(_eindx), _discEqns);
          tmpMeta9 = mmc_mk_box3(0, _unassignedEqns, _eqnsLst, _discEqns);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _unassignedEqns = tmpMeta10;
          _eqnsLst = tmpMeta11;
          _discEqns = tmpMeta12;
          /* Pattern matching succeeded */
          _vindx = mmc_unbox_integer(arrayGet(_ass2,_eindx) /* DAE.ASUB */);

          /* Pattern-matching assignment */
          tmp13 = (_vindx > ((modelica_integer) 0));
          if (0 /* false */ != tmp13) goto goto_2;
          tmpMeta14 = mmc_mk_cons(mmc_mk_integer(_eindx), _unassignedEqns);
          tmpMeta15 = mmc_mk_cons(mmc_mk_integer(_eindx), _eqnsLst);
          tmpMeta16 = mmc_mk_box3(0, tmpMeta14, tmpMeta15, _discEqns);
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
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outFold = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFold;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_unassignedContinuesEqns(threadData_t *threadData, modelica_metatype _eindx, modelica_metatype _vars, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _inFold)
{
  modelica_integer tmp1;
  modelica_metatype _outFold = NULL;
  tmp1 = mmc_unbox_integer(_eindx);
  _outFold = omc_IndexReduction_unassignedContinuesEqns(threadData, tmp1, _vars, _ass2, _m, _inFold);
  /* skip box _outFold; tuple<list<#Integer>, list<#Integer>, list<#Integer>> */
  return _outFold;
}

PROTECTED_FUNCTION_STATIC void omc_IndexReduction_singularSystemError(threadData_t *threadData, modelica_boolean _b, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _eqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_boolean tmp3_1;modelica_metatype tmp3_2;modelica_metatype tmp3_3;
    tmp3_1 = _b;
    tmp3_2 = _eqns;
    tmp3_3 = _inArg;
    {
      modelica_metatype _varlst = NULL;
      modelica_metatype _eqns1 = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _varlst has no default value.
      // _eqns1 has no default value.
      // _syst has no default value.
      // _mapIncRowEqn has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (1 /* true */ != tmp3_1) goto tmp2_end;
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_2);
          tmpMeta6 = MMC_CDR(tmp3_2);
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (!listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_3), 4));
          
          _mapIncRowEqn = tmpMeta7;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT169),stdout);
          }

          _eqns1 = omc_List_map1r(threadData, _eqns, boxvar_arrayGet, _mapIncRowEqn);

          _eqns1 = omc_List_uniqueIntN(threadData, _eqns1, arrayLength(_mapIncRowEqn));

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(omc_BackendDump_dumpMarkedEqns(threadData, _inSystem, _eqns1)),stdout);
          }

          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _inAssignments1, _inAssignments2, tmpMeta8);
          _syst = omc_BackendDAEUtil_setEqSystMatching(threadData, _inSystem, tmpMeta9);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            tmpMeta10 = mmc_mk_cons(_syst, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta11 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, tmpMeta10, _inShared);
            omc_BackendDump_printBackendDAE(threadData, tmpMeta11);
          }

          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT171);
          goto goto_1;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (0 /* false */ != tmp3_1) goto tmp2_end;
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta12 = MMC_CAR(tmp3_2);
          tmpMeta13 = MMC_CDR(tmp3_2);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_3), 4));
          
          _mapIncRowEqn = tmpMeta14;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT172),stdout);

            omc_BackendDump_debuglst(threadData, _eqns, boxvar_intString, _OMC_LIT0, _OMC_LIT3);
          }

          _eqns1 = omc_List_map1r(threadData, _eqns, boxvar_arrayGet, _mapIncRowEqn);

          _eqns1 = omc_List_uniqueIntN(threadData, _eqns1, arrayLength(_mapIncRowEqn));

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(omc_BackendDump_dumpMarkedEqns(threadData, _inSystem, _eqns1)),stdout);

            fputs(MMC_STRINGDATA(_OMC_LIT173),stdout);
          }

          _varlst = omc_List_map1r(threadData, _unassignedStates, boxvar_BackendVariable_getVarAt, omc_BackendVariable_daeVars(threadData, _inSystem));

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            omc_BackendDump_printVarList(threadData, _varlst);
          }

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _inAssignments1, _inAssignments2, tmpMeta15);
          _syst = omc_BackendDAEUtil_setEqSystMatching(threadData, _inSystem, tmpMeta16);

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            tmpMeta17 = mmc_mk_cons(_syst, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta18 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, tmpMeta17, _inShared);
            omc_BackendDump_printBackendDAE(threadData, tmpMeta18);
          }

          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT175);
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
PROTECTED_FUNCTION_STATIC void boxptr_IndexReduction_singularSystemError(threadData_t *threadData, modelica_metatype _b, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _eqns, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_b);
  omc_IndexReduction_singularSystemError(threadData, tmp1, _unassignedStates, _unassignedEqns, _eqns, _inSystem, _inShared, _inAssignments1, _inAssignments2, _inArg);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_minimalStructurallySingularSystemMSS(threadData_t *threadData, modelica_metatype _inEqnsLst, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg, modelica_metatype _statemark, modelica_integer _mark, modelica_metatype _m, modelica_metatype _vars, modelica_metatype _inEqnsLstAcc, modelica_metatype _inStateIndxsAcc, modelica_metatype _inUnassEqnsAcc, modelica_metatype _inDiscEqnsAcc, modelica_metatype *out_outStateIndxs, modelica_metatype *out_outUnassEqnsAcc, modelica_metatype *out_outDiscEqns)
{
  modelica_metatype _outEqnsLst = NULL;
  modelica_metatype _outStateIndxs = NULL;
  modelica_metatype _outUnassEqnsAcc = NULL;
  modelica_metatype _outDiscEqns = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqnsLst has no default value.
  // _outStateIndxs has no default value.
  // _outUnassEqnsAcc has no default value.
  // _outDiscEqns has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEqnsLst;
    {
      modelica_metatype _ilst = NULL;
      modelica_metatype _unassignedEqns = NULL;
      modelica_metatype _eqnsLst = NULL;
      modelica_metatype _discEqns = NULL;
      modelica_metatype _stateIndxs = NULL;
      modelica_metatype _rest = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ilst has no default value.
      // _unassignedEqns has no default value.
      // _eqnsLst has no default value.
      // _discEqns has no default value.
      // _stateIndxs has no default value.
      // _rest has no default value.
      // _b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEqnsLstAcc;
          tmpMeta[0+1] = _inStateIndxsAcc;
          tmpMeta[0+2] = _inUnassEqnsAcc;
          tmpMeta[0+3] = _inDiscEqnsAcc;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _ilst = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = mmc_mk_box3(0, tmpMeta8, tmpMeta9, _inDiscEqnsAcc);
          tmpMeta11 = omc_List_fold3(threadData, _ilst, boxvar_IndexReduction_unassignedContinuesEqns, _vars, _inAssignments2, _m, tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          _unassignedEqns = tmpMeta12;
          _eqnsLst = tmpMeta13;
          _discEqns = tmpMeta14;

          tmpMeta15 = mmc_mk_box3(0, _m, _statemark, mmc_mk_integer(_mark));
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          _stateIndxs = omc_List_fold2(threadData, _ilst, boxvar_IndexReduction_statesInEquations, tmpMeta15, _inAssignments1, tmpMeta16);

          _b = (listLength(_stateIndxs) >= listLength(_unassignedEqns));

          omc_IndexReduction_singularSystemError(threadData, _b, _stateIndxs, _unassignedEqns, _eqnsLst, _inSystem, _inShared, _inAssignments1, _inAssignments2, _inArg);
          tmpMeta17 = mmc_mk_cons(_eqnsLst, _inEqnsLstAcc);
          tmpMeta18 = mmc_mk_cons(_stateIndxs, _inStateIndxsAcc);
          tmpMeta19 = mmc_mk_cons(_unassignedEqns, _inUnassEqnsAcc);
          /* Tail recursive call */
          _inEqnsLst = _rest;
          _mark = ((modelica_integer) 1) + _mark;
          _inEqnsLstAcc = tmpMeta17;
          _inStateIndxsAcc = tmpMeta18;
          _inUnassEqnsAcc = tmpMeta19;
          _inDiscEqnsAcc = _discEqns;
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
  _outEqnsLst = tmpMeta[0+0];
  _outStateIndxs = tmpMeta[0+1];
  _outUnassEqnsAcc = tmpMeta[0+2];
  _outDiscEqns = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outStateIndxs) { *out_outStateIndxs = _outStateIndxs; }
  if (out_outUnassEqnsAcc) { *out_outUnassEqnsAcc = _outUnassEqnsAcc; }
  if (out_outDiscEqns) { *out_outDiscEqns = _outDiscEqns; }
  return _outEqnsLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_minimalStructurallySingularSystemMSS(threadData_t *threadData, modelica_metatype _inEqnsLst, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg, modelica_metatype _statemark, modelica_metatype _mark, modelica_metatype _m, modelica_metatype _vars, modelica_metatype _inEqnsLstAcc, modelica_metatype _inStateIndxsAcc, modelica_metatype _inUnassEqnsAcc, modelica_metatype _inDiscEqnsAcc, modelica_metatype *out_outStateIndxs, modelica_metatype *out_outUnassEqnsAcc, modelica_metatype *out_outDiscEqns)
{
  modelica_integer tmp1;
  modelica_metatype _outEqnsLst = NULL;
  tmp1 = mmc_unbox_integer(_mark);
  _outEqnsLst = omc_IndexReduction_minimalStructurallySingularSystemMSS(threadData, _inEqnsLst, _inSystem, _inShared, _inAssignments1, _inAssignments2, _inArg, _statemark, tmp1, _m, _vars, _inEqnsLstAcc, _inStateIndxsAcc, _inUnassEqnsAcc, _inDiscEqnsAcc, out_outStateIndxs, out_outUnassEqnsAcc, out_outDiscEqns);
  /* skip box _outEqnsLst; list<list<#Integer>> */
  /* skip box _outStateIndxs; list<list<#Integer>> */
  /* skip box _outUnassEqnsAcc; list<list<#Integer>> */
  /* skip box _outDiscEqns; list<#Integer> */
  return _outEqnsLst;
}

DLLDirection
modelica_metatype omc_IndexReduction_minimalStructurallySingularSystem(threadData_t *threadData, modelica_metatype _inEqnsLst, modelica_metatype _syst, modelica_metatype _shared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg, modelica_metatype *out_outStateIndxs, modelica_metatype *out_outunassignedEqns, modelica_metatype *out_discEqns)
{
  modelica_metatype _outEqnsLst = NULL;
  modelica_metatype _outStateIndxs = NULL;
  modelica_metatype _outunassignedEqns = NULL;
  modelica_metatype _discEqns = NULL;
  modelica_metatype _unassignedEqns = NULL;
  modelica_metatype _eqnslst = NULL;
  modelica_metatype _stateindxs = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _statemark = NULL;
  modelica_integer _size;
  modelica_boolean _b;
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
  // _outEqnsLst has no default value.
  // _outStateIndxs has no default value.
  // _outunassignedEqns has no default value.
  // _discEqns has no default value.
  // _unassignedEqns has no default value.
  // _eqnslst has no default value.
  // _stateindxs has no default value.
  // _m has no default value.
  // _vars has no default value.
  // _eqns has no default value.
  // _statemark has no default value.
  // _size has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _syst;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  if (optionNone(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  _vars = tmpMeta2;
  _eqns = tmpMeta3;
  _m = tmpMeta5;

  _size = omc_BackendVariable_varsSize(threadData, _vars);

  _statemark = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

  _unassignedEqns = omc_List_flatten(threadData, _inEqnsLst);

  tmpMeta6 = mmc_mk_box3(0, _m, _statemark, mmc_mk_integer(((modelica_integer) 0)));
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _stateindxs = omc_List_fold2(threadData, _unassignedEqns, boxvar_IndexReduction_statesInEquations, tmpMeta6, _inAssignments1, tmpMeta7);

  /* Pattern-matching assignment */
  tmpMeta8 = omc_List_fold3(threadData, _unassignedEqns, boxvar_IndexReduction_unassignedContinuesEqns, _vars, _inAssignments2, _m, _OMC_LIT176);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
  _unassignedEqns = tmpMeta9;
  _eqnslst = tmpMeta10;
  _discEqns = tmpMeta11;

  _b = (listLength(_stateindxs) >= listLength(_unassignedEqns));

  omc_IndexReduction_singularSystemError(threadData, _b, _stateindxs, _unassignedEqns, _eqnslst, _syst, _shared, _inAssignments1, _inAssignments2, _inArg);

  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEqnsLst = omc_IndexReduction_minimalStructurallySingularSystemMSS(threadData, _inEqnsLst, _syst, _shared, _inAssignments1, _inAssignments2, _inArg, _statemark, ((modelica_integer) 1), _m, _vars, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15 ,&_outStateIndxs ,&_outunassignedEqns ,&_discEqns);
  _return: OMC_LABEL_UNUSED
  if (out_outStateIndxs) { *out_outStateIndxs = _outStateIndxs; }
  if (out_outunassignedEqns) { *out_outunassignedEqns = _outunassignedEqns; }
  if (out_discEqns) { *out_discEqns = _discEqns; }
  return _outEqnsLst;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_IndexReduction_eqnstplDebugString(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_string _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  if(isSome(omc_Util_tuple32(threadData, _tpl)))
  {
    _s = _OMC_LIT11;
  }
  else
  {
    _s = omc_BackendDump_equationString(threadData, omc_Util_getOption(threadData, omc_Util_tuple32(threadData, _tpl)));
  }

  tmpMeta1 = stringAppend(_OMC_LIT177,intString(mmc_unbox_integer(omc_Util_tuple31(threadData, _tpl))));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT178);
  tmpMeta3 = stringAppend(tmpMeta2,_s);
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT179);
  tmpMeta5 = stringAppend(tmpMeta4,omc_BackendDump_equationString(threadData, omc_Util_tuple33(threadData, _tpl)));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT11);
  _s = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _s;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_pantelidesIndexReductionMSS(threadData_t *threadData, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _alleqns, modelica_metatype _MSSSeqs, modelica_integer _actualEqn, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_integer _mark, modelica_metatype _markarr, modelica_metatype _inArg, modelica_metatype _iNotDiffableMSS, modelica_metatype *out_oshared, modelica_metatype *out_outAssignments1, modelica_metatype *out_outAssignments2, modelica_metatype *out_outArg, modelica_metatype *out_oNotDiffableMSS)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _outAssignments1 = NULL;
  modelica_metatype _outAssignments2 = NULL;
  modelica_metatype _outArg = NULL;
  modelica_metatype _oNotDiffableMSS = NULL;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _oshared has no default value.
  // _outAssignments1 has no default value.
  // _outAssignments2 has no default value.
  // _outArg has no default value.
  // _oNotDiffableMSS has no default value.
  
  
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _MSSSeqs;
    tmp4_2 = _inSystem;
    tmp4_3 = _inArg;
    {
      modelica_metatype _MSSSeqs1 = NULL;
      modelica_metatype _so = NULL;
      modelica_metatype _orgEqnsLst = NULL;
      modelica_metatype _orgEqnsLst1 = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _shared = NULL;
      modelica_metatype _mapEqnIncRow = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_integer _noofeqns;
      modelica_metatype _eqnsarray = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _eqnstpl = NULL;
      modelica_metatype _notDiffableMSS = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _MSSSeqs1 has no default value.
      // _so has no default value.
      // _orgEqnsLst has no default value.
      // _orgEqnsLst1 has no default value.
      // _syst has no default value.
      // _shared has no default value.
      // _mapEqnIncRow has no default value.
      // _mapIncRowEqn has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _noofeqns has no default value.
      // _eqnsarray has no default value.
      // _vars has no default value.
      // _eqnstpl has no default value.
      // _notDiffableMSS has no default value.
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
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 5));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          _vars = tmpMeta8;
          _eqnsarray = tmpMeta9;
          _so = tmpMeta10;
          _orgEqnsLst = tmpMeta11;
          _mapEqnIncRow = tmpMeta12;
          _mapIncRowEqn = tmpMeta13;
          _noofeqns = tmp15  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _MSSSeqs1 = omc_List_map1r(threadData, _MSSSeqs, boxvar_arrayGet, _mapIncRowEqn);

          _MSSSeqs1 = omc_List_uniqueIntN(threadData, _MSSSeqs1, arrayLength(_mapIncRowEqn));

          _MSSSeqs1 = omc_List_select1(threadData, _MSSSeqs1, boxvar_intLe, mmc_mk_integer(_noofeqns));

          if(omc_Flags_isSet(threadData, _OMC_LIT55))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT180),stdout);

            omc_BackendDump_debuglst(threadData, _MSSSeqs1, boxvar_intString, _OMC_LIT0, _OMC_LIT3);

            fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);
          }

          _eqnstpl = omc_IndexReduction_differentiateEqnsLst(threadData, _MSSSeqs1, _vars, _eqnsarray, _inShared ,&_shared);

          _syst = omc_IndexReduction_differentiateEqns(threadData, _eqnstpl, _MSSSeqs1, _unassignedStates, _unassignedEqns, _inSystem, _shared, _inAssignments1, _inAssignments2, _orgEqnsLst, _mapEqnIncRow, _mapIncRowEqn, _iNotDiffableMSS ,&_shared ,&_ass1 ,&_ass2 ,&_orgEqnsLst1 ,&_mapEqnIncRow ,&_mapIncRowEqn ,&_notDiffableMSS);
          tmpMeta16 = mmc_mk_box5(0, _so, _orgEqnsLst1, _mapEqnIncRow, _mapIncRowEqn, mmc_mk_integer(_noofeqns));
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _shared;
          tmpMeta[0+2] = _ass1;
          tmpMeta[0+3] = _ass2;
          tmpMeta[0+4] = tmpMeta16;
          tmpMeta[0+5] = _notDiffableMSS;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT182);
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
  _osyst = tmpMeta[0+0];
  _oshared = tmpMeta[0+1];
  _outAssignments1 = tmpMeta[0+2];
  _outAssignments2 = tmpMeta[0+3];
  _outArg = tmpMeta[0+4];
  _oNotDiffableMSS = tmpMeta[0+5];
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_outAssignments1) { *out_outAssignments1 = _outAssignments1; }
  if (out_outAssignments2) { *out_outAssignments2 = _outAssignments2; }
  if (out_outArg) { *out_outArg = _outArg; }
  if (out_oNotDiffableMSS) { *out_oNotDiffableMSS = _oNotDiffableMSS; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_pantelidesIndexReductionMSS(threadData_t *threadData, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _alleqns, modelica_metatype _MSSSeqs, modelica_metatype _actualEqn, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _mark, modelica_metatype _markarr, modelica_metatype _inArg, modelica_metatype _iNotDiffableMSS, modelica_metatype *out_oshared, modelica_metatype *out_outAssignments1, modelica_metatype *out_outAssignments2, modelica_metatype *out_outArg, modelica_metatype *out_oNotDiffableMSS)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_actualEqn);
  tmp2 = mmc_unbox_integer(_mark);
  _osyst = omc_IndexReduction_pantelidesIndexReductionMSS(threadData, _unassignedStates, _unassignedEqns, _alleqns, _MSSSeqs, tmp1, _inSystem, _inShared, _inAssignments1, _inAssignments2, tmp2, _markarr, _inArg, _iNotDiffableMSS, out_oshared, out_outAssignments1, out_outAssignments2, out_outArg, out_oNotDiffableMSS);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oshared; BackendDAE.Shared */
  /* skip box _outAssignments1; array<#Integer> */
  /* skip box _outAssignments2; array<#Integer> */
  /* skip box _outArg; tuple<BackendDAE.StateOrder, array<list<BackendDAE.Equation>>, array<list<#Integer>>, array<#Integer>, #Integer> */
  /* skip box _oNotDiffableMSS; list<tuple<list<#Integer>, list<#Integer>, list<#Integer>>> */
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_pantelidesIndexReduction1(threadData_t *threadData, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _alleqns, modelica_metatype _iEqns, modelica_integer _actualEqn, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_integer _mark, modelica_metatype _markarr, modelica_metatype _inArg, modelica_metatype _iNotDiffableMSS, modelica_metatype *out_oshared, modelica_metatype *out_outAssignments1, modelica_metatype *out_outAssignments2, modelica_metatype *out_outArg, modelica_metatype *out_oNotDiffableMSS)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _outAssignments1 = NULL;
  modelica_metatype _outAssignments2 = NULL;
  modelica_metatype _outArg = NULL;
  modelica_metatype _oNotDiffableMSS = NULL;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _oshared has no default value.
  // _outAssignments1 has no default value.
  // _outAssignments2 has no default value.
  // _outArg has no default value.
  // _oNotDiffableMSS has no default value.
  
  
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _unassignedStates;
    tmp4_2 = _unassignedEqns;
    tmp4_3 = _alleqns;
    tmp4_4 = _iEqns;
    {
      modelica_metatype _states = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqns_1 = NULL;
      modelica_metatype _ueqns = NULL;
      modelica_metatype _statelst = NULL;
      modelica_metatype _ueqnsrest = NULL;
      modelica_metatype _eqnsrest = NULL;
      modelica_metatype _eqnsrest_1 = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _shared = NULL;
      modelica_metatype _arg = NULL;
      modelica_metatype _notDiffableMSS = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _states has no default value.
      // _eqns has no default value.
      // _eqns_1 has no default value.
      // _ueqns has no default value.
      // _statelst has no default value.
      // _ueqnsrest has no default value.
      // _eqnsrest has no default value.
      // _eqnsrest_1 has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _syst has no default value.
      // _shared has no default value.
      // _arg has no default value.
      // _notDiffableMSS has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_4)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _syst = omc_IndexReduction_handleundifferntiableMSSLst(threadData, _iNotDiffableMSS, _inSystem, _inShared, _inAssignments1, _inAssignments2, _inArg ,&_shared ,&_ass1 ,&_ass2 ,&_arg);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _shared;
          tmpMeta[0+2] = _ass1;
          tmpMeta[0+3] = _ass2;
          tmpMeta[0+4] = _arg;
          tmpMeta[0+5] = tmpMeta6;
          goto tmp3_done;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_2);
          tmpMeta10 = MMC_CDR(tmp4_2);
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_3);
          tmpMeta12 = MMC_CDR(tmp4_3);
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_4);
          tmpMeta14 = MMC_CDR(tmp4_4);
          _states = tmpMeta7;
          _statelst = tmpMeta8;
          _ueqns = tmpMeta9;
          _ueqnsrest = tmpMeta10;
          _eqns = tmpMeta11;
          _eqnsrest = tmpMeta12;
          _eqns_1 = tmpMeta13;
          _eqnsrest_1 = tmpMeta14;
          /* Pattern matching succeeded */
          _syst = omc_IndexReduction_pantelidesIndexReductionMSS(threadData, _states, _ueqns, _eqns, _eqns_1, _actualEqn, _inSystem, _inShared, _inAssignments1, _inAssignments2, _mark, _markarr, _inArg, _iNotDiffableMSS ,&_shared ,&_ass1 ,&_ass2 ,&_arg ,&_notDiffableMSS);
          /* Tail recursive call */
          _unassignedStates = _statelst;
          _unassignedEqns = _ueqnsrest;
          _alleqns = _eqnsrest;
          _iEqns = _eqnsrest_1;
          _inSystem = _syst;
          _inShared = _shared;
          _inAssignments1 = _ass1;
          _inAssignments2 = _ass2;
          _inArg = _arg;
          _iNotDiffableMSS = _notDiffableMSS;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT184);
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
  _osyst = tmpMeta[0+0];
  _oshared = tmpMeta[0+1];
  _outAssignments1 = tmpMeta[0+2];
  _outAssignments2 = tmpMeta[0+3];
  _outArg = tmpMeta[0+4];
  _oNotDiffableMSS = tmpMeta[0+5];
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_outAssignments1) { *out_outAssignments1 = _outAssignments1; }
  if (out_outAssignments2) { *out_outAssignments2 = _outAssignments2; }
  if (out_outArg) { *out_outArg = _outArg; }
  if (out_oNotDiffableMSS) { *out_oNotDiffableMSS = _oNotDiffableMSS; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_pantelidesIndexReduction1(threadData_t *threadData, modelica_metatype _unassignedStates, modelica_metatype _unassignedEqns, modelica_metatype _alleqns, modelica_metatype _iEqns, modelica_metatype _actualEqn, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _mark, modelica_metatype _markarr, modelica_metatype _inArg, modelica_metatype _iNotDiffableMSS, modelica_metatype *out_oshared, modelica_metatype *out_outAssignments1, modelica_metatype *out_outAssignments2, modelica_metatype *out_outArg, modelica_metatype *out_oNotDiffableMSS)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_actualEqn);
  tmp2 = mmc_unbox_integer(_mark);
  _osyst = omc_IndexReduction_pantelidesIndexReduction1(threadData, _unassignedStates, _unassignedEqns, _alleqns, _iEqns, tmp1, _inSystem, _inShared, _inAssignments1, _inAssignments2, tmp2, _markarr, _inArg, _iNotDiffableMSS, out_oshared, out_outAssignments1, out_outAssignments2, out_outArg, out_oNotDiffableMSS);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oshared; BackendDAE.Shared */
  /* skip box _outAssignments1; array<#Integer> */
  /* skip box _outAssignments2; array<#Integer> */
  /* skip box _outArg; tuple<BackendDAE.StateOrder, array<list<BackendDAE.Equation>>, array<list<#Integer>>, array<#Integer>, #Integer> */
  /* skip box _oNotDiffableMSS; list<tuple<list<#Integer>, list<#Integer>, list<#Integer>>> */
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_IndexReduction_getChangedEqnsAndLowest(threadData_t *threadData, modelica_integer _index, modelica_metatype _ass2, modelica_metatype _iAcc, modelica_integer _iLowest, modelica_integer *out_oLowest)
{
  modelica_metatype _oAcc = NULL;
  modelica_integer _oLowest;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oAcc = _iAcc;
  _oLowest = _iLowest;
  tmp1 = _index; tmp2 = ((modelica_integer) -1); tmp3 = ((modelica_integer) 1);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = _index; in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _oAcc = omc_List_consOnTrue(threadData, (mmc_unbox_integer(arrayGet(_ass2,_i) /* DAE.ASUB */) < ((modelica_integer) 1)), mmc_mk_integer(_i), _oAcc);

      _oLowest = _i;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oLowest) { *out_oLowest = _oLowest; }
  return _oAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_IndexReduction_getChangedEqnsAndLowest(threadData_t *threadData, modelica_metatype _index, modelica_metatype _ass2, modelica_metatype _iAcc, modelica_metatype _iLowest, modelica_metatype *out_oLowest)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oLowest;
  modelica_metatype _oAcc = NULL;
  tmp1 = mmc_unbox_integer(_index);
  tmp2 = mmc_unbox_integer(_iLowest);
  _oAcc = omc_IndexReduction_getChangedEqnsAndLowest(threadData, tmp1, _ass2, _iAcc, tmp2, &_oLowest);
  /* skip box _oAcc; list<#Integer> */
  if (out_oLowest) { *out_oLowest = mmc_mk_icon(_oLowest); }
  return _oAcc;
}

DLLDirection
modelica_metatype omc_IndexReduction_failIfIndexReduction(threadData_t *threadData, modelica_metatype _inEqns, modelica_integer __omcQ_24in_5FinActualEqn, modelica_metatype __omcQ_24in_5FinSystem, modelica_metatype __omcQ_24in_5FinShared, modelica_metatype __omcQ_24in_5FinAssignments1, modelica_metatype __omcQ_24in_5FinAssignments2, modelica_metatype __omcQ_24in_5FinArg, modelica_integer *out_inActualEqn, modelica_metatype *out_inSystem, modelica_metatype *out_inShared, modelica_metatype *out_inAssignments1, modelica_metatype *out_inAssignments2, modelica_metatype *out_inArg)
{
  modelica_metatype _changedEqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _inActualEqn;
  modelica_metatype _inSystem = NULL;
  modelica_metatype _inShared = NULL;
  modelica_metatype _inAssignments1 = NULL;
  modelica_metatype _inAssignments2 = NULL;
  modelica_metatype _inArg = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _changedEqns = tmpMeta1;
  _inActualEqn = __omcQ_24in_5FinActualEqn;
  _inSystem = __omcQ_24in_5FinSystem;
  _inShared = __omcQ_24in_5FinShared;
  _inAssignments1 = __omcQ_24in_5FinAssignments1;
  _inAssignments2 = __omcQ_24in_5FinAssignments2;
  _inArg = __omcQ_24in_5FinArg;
  omc_Error_addCompilerError(threadData, _OMC_LIT185);

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  if (out_inActualEqn) { *out_inActualEqn = _inActualEqn; }
  if (out_inSystem) { *out_inSystem = _inSystem; }
  if (out_inShared) { *out_inShared = _inShared; }
  if (out_inAssignments1) { *out_inAssignments1 = _inAssignments1; }
  if (out_inAssignments2) { *out_inAssignments2 = _inAssignments2; }
  if (out_inArg) { *out_inArg = _inArg; }
  return _changedEqns;
}
modelica_metatype boxptr_IndexReduction_failIfIndexReduction(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype __omcQ_24in_5FinActualEqn, modelica_metatype __omcQ_24in_5FinSystem, modelica_metatype __omcQ_24in_5FinShared, modelica_metatype __omcQ_24in_5FinAssignments1, modelica_metatype __omcQ_24in_5FinAssignments2, modelica_metatype __omcQ_24in_5FinArg, modelica_metatype *out_inActualEqn, modelica_metatype *out_inSystem, modelica_metatype *out_inShared, modelica_metatype *out_inAssignments1, modelica_metatype *out_inAssignments2, modelica_metatype *out_inArg)
{
  modelica_integer tmp1;
  modelica_integer _inActualEqn;
  modelica_metatype _changedEqns = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5FinActualEqn);
  _changedEqns = omc_IndexReduction_failIfIndexReduction(threadData, _inEqns, tmp1, __omcQ_24in_5FinSystem, __omcQ_24in_5FinShared, __omcQ_24in_5FinAssignments1, __omcQ_24in_5FinAssignments2, __omcQ_24in_5FinArg, &_inActualEqn, out_inSystem, out_inShared, out_inAssignments1, out_inAssignments2, out_inArg);
  /* skip box _changedEqns; list<#Integer> */
  if (out_inActualEqn) { *out_inActualEqn = mmc_mk_icon(_inActualEqn); }
  /* skip box _inSystem; BackendDAE.EqSystem */
  /* skip box _inShared; BackendDAE.Shared */
  /* skip box _inAssignments1; array<#Integer> */
  /* skip box _inAssignments2; array<#Integer> */
  /* skip box _inArg; tuple<BackendDAE.StateOrder, array<list<BackendDAE.Equation>>, array<list<#Integer>>, array<#Integer>, #Integer> */
  return _changedEqns;
}

DLLDirection
modelica_metatype omc_IndexReduction_pantelidesIndexReduction(threadData_t *threadData, modelica_metatype _inEqns, modelica_integer _inActualEqn, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg, modelica_integer *out_continueEqn, modelica_metatype *out_osyst, modelica_metatype *out_oshared, modelica_metatype *out_oass1, modelica_metatype *out_oass2, modelica_metatype *out_outArg)
{
  modelica_metatype _changedEqns = NULL;
  modelica_integer _continueEqn;
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _oass1 = NULL;
  modelica_metatype _oass2 = NULL;
  modelica_metatype _outArg = NULL;
  modelica_metatype _markarr = NULL;
  modelica_integer _size;
  modelica_integer _newsize;
  modelica_metatype _eqns_1 = NULL;
  modelica_metatype _unassignedStates = NULL;
  modelica_metatype _unassignedEqns = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _changedEqns has no default value.
  // _continueEqn has no default value.
  // _osyst has no default value.
  // _oshared has no default value.
  // _oass1 has no default value.
  // _oass2 has no default value.
  // _outArg has no default value.
  // _markarr has no default value.
  // _size has no default value.
  // _newsize has no default value.
  // _eqns_1 has no default value.
  // _unassignedStates has no default value.
  // _unassignedEqns has no default value.
  if(listEmpty(_inEqns))
  {
    omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT187);

    if(omc_Flags_isSet(threadData, _OMC_LIT191))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT188),stdout);
    }

    MMC_THROW_INTERNAL();
  }

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
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT191))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT192),stdout);
          }

          omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT193);

          _eqns_1 = omc_IndexReduction_minimalStructurallySingularSystem(threadData, _inEqns, _inSystem, _inShared, _inAssignments1, _inAssignments2, _inArg ,&_unassignedStates ,&_unassignedEqns ,NULL);

          _size = omc_BackendDAEUtil_systemSize(threadData, _inSystem);

          omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT193);

          omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT193);

          _markarr = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _osyst = omc_IndexReduction_pantelidesIndexReduction1(threadData, _unassignedStates, _unassignedEqns, _inEqns, _eqns_1, _inActualEqn, _inSystem, _inShared, _inAssignments1, _inAssignments2, ((modelica_integer) 1), _markarr, _inArg, tmpMeta5 ,&_oshared ,&_oass1 ,&_oass2 ,&_outArg ,NULL);

          omc_ErrorExt_rollBack(threadData, _OMC_LIT193);

          omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT193);

          _newsize = omc_BackendDAEUtil_systemSize(threadData, _osyst);

          tmp7 = (modelica_boolean)(_newsize > _size);
          if(tmp7)
          {
            tmpMeta8 = omc_List_intRange2(threadData, ((modelica_integer) 1) + _size, _newsize);
          }
          else
          {
            tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta8 = tmpMeta6;
          }
          _changedEqns = tmpMeta8;

          _changedEqns = omc_IndexReduction_getChangedEqnsAndLowest(threadData, _newsize, _oass2, _changedEqns, _size ,&_continueEqn);

          omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT193);

          if(omc_Flags_isSet(threadData, _OMC_LIT191))
          {
            omc_BackendDump_dumpEqSystemShort(threadData, _osyst, _OMC_LIT194);

            fputs(MMC_STRINGDATA(_OMC_LIT188),stdout);
          }
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT193);

          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT196);

          if(omc_Flags_isSet(threadData, _OMC_LIT191))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT188),stdout);
          }

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
  if (out_continueEqn) { *out_continueEqn = _continueEqn; }
  if (out_osyst) { *out_osyst = _osyst; }
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_oass1) { *out_oass1 = _oass1; }
  if (out_oass2) { *out_oass2 = _oass2; }
  if (out_outArg) { *out_outArg = _outArg; }
  return _changedEqns;
}
modelica_metatype boxptr_IndexReduction_pantelidesIndexReduction(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _inActualEqn, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inAssignments1, modelica_metatype _inAssignments2, modelica_metatype _inArg, modelica_metatype *out_continueEqn, modelica_metatype *out_osyst, modelica_metatype *out_oshared, modelica_metatype *out_oass1, modelica_metatype *out_oass2, modelica_metatype *out_outArg)
{
  modelica_integer tmp1;
  modelica_integer _continueEqn;
  modelica_metatype _changedEqns = NULL;
  tmp1 = mmc_unbox_integer(_inActualEqn);
  _changedEqns = omc_IndexReduction_pantelidesIndexReduction(threadData, _inEqns, tmp1, _inSystem, _inShared, _inAssignments1, _inAssignments2, _inArg, &_continueEqn, out_osyst, out_oshared, out_oass1, out_oass2, out_outArg);
  /* skip box _changedEqns; list<#Integer> */
  if (out_continueEqn) { *out_continueEqn = mmc_mk_icon(_continueEqn); }
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oshared; BackendDAE.Shared */
  /* skip box _oass1; array<#Integer> */
  /* skip box _oass2; array<#Integer> */
  /* skip box _outArg; tuple<BackendDAE.StateOrder, array<list<BackendDAE.Equation>>, array<list<#Integer>>, array<#Integer>, #Integer> */
  return _changedEqns;
}

