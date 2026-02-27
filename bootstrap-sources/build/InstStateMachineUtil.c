#include "omc_simulation_settings.h"
#include "InstStateMachineUtil.h"
#define _OMC_LIT0_data "transition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,10,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "initialState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,12,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Value of nStates needs to be equal to number of modes within state table argument."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,82,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,2,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "i"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,4,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,5,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Value of nStates needs to be equal to number of modes within mode table argument."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,81,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Value of nStates needs to be equal to number of states within state table argument."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,83,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,2,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "( states("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,9,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "))"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,2,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,9,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,41,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT15,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "- InstStateMachineUtil.isInFlatSM failed: Hash table lookup failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,71,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "previous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,8,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,3) {&DAE_TailCall_NO__TAIL__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "activeState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,11,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT24}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,0,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT27,0.0);
#define _OMC_LIT27 MMC_REFREALLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT26,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT28,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT29,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,3,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT27}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "_der$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,5,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT31}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,8,3) {&DAE_CallAttributes_CALL__ATTR__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT22,_OMC_LIT23}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,5) {&DAE_AvlTreePathFunction_Tree_EMPTY__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "ctStateMachines"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,15,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,1,3) {&Flags_FlagVisibility_INTERNAL__desc,}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "Experimental: Enable continuous-time state machine prototype"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,60,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(86)),_OMC_LIT38,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT39,_OMC_LIT40,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "std"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,3,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "1.x"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,3,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,0) {_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(10))}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "2.x"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,3,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,0) {_OMC_LIT48,MMC_IMMEDIATE(MMC_TAGFIXNUM(20))}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "3.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,3,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,0) {_OMC_LIT50,MMC_IMMEDIATE(MMC_TAGFIXNUM(30))}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "3.1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,3,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,0) {_OMC_LIT52,MMC_IMMEDIATE(MMC_TAGFIXNUM(31))}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "3.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,3,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,0) {_OMC_LIT54,MMC_IMMEDIATE(MMC_TAGFIXNUM(32))}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "3.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,3,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,0) {_OMC_LIT56,MMC_IMMEDIATE(MMC_TAGFIXNUM(33))}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "3.4"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,3,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,0) {_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(34))}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "3.5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,3,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,0) {_OMC_LIT60,MMC_IMMEDIATE(MMC_TAGFIXNUM(35))}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "3.6"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,3,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,2,0) {_OMC_LIT62,MMC_IMMEDIATE(MMC_TAGFIXNUM(36))}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "latest"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,6,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,2,0) {_OMC_LIT64,MMC_IMMEDIATE(MMC_TAGFIXNUM(1000))}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "experimental"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,12,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,0) {_OMC_LIT66,MMC_IMMEDIATE(MMC_TAGFIXNUM(9999))}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,1) {_OMC_LIT67,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,2,1) {_OMC_LIT65,_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,2,1) {_OMC_LIT63,_OMC_LIT69}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,1) {_OMC_LIT61,_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,2,1) {_OMC_LIT59,_OMC_LIT71}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,2,1) {_OMC_LIT57,_OMC_LIT72}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,1) {_OMC_LIT55,_OMC_LIT73}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,1) {_OMC_LIT53,_OMC_LIT74}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,2,1) {_OMC_LIT51,_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,2,1) {_OMC_LIT49,_OMC_LIT76}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,2,1) {_OMC_LIT47,_OMC_LIT77}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,3,10) {&Flags_FlagData_ENUM__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1000)),_OMC_LIT78}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,1) {_OMC_LIT66,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,2,1) {_OMC_LIT64,_OMC_LIT80}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,2,1) {_OMC_LIT62,_OMC_LIT81}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,1) {_OMC_LIT60,_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,2,1) {_OMC_LIT58,_OMC_LIT83}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,2,1) {_OMC_LIT56,_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,2,1) {_OMC_LIT54,_OMC_LIT85}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,2,1) {_OMC_LIT52,_OMC_LIT86}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,2,1) {_OMC_LIT48,_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,2,1) {_OMC_LIT46,_OMC_LIT88}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,3) {&Flags_ValidOptions_STRING__OPTION__desc,_OMC_LIT89}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,1,1) {_OMC_LIT90}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "Sets the language standard that should be used."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,47,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT93,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT92}};
#define _OMC_LIT93 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(8)),_OMC_LIT44,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT45,_OMC_LIT79,_OMC_LIT91,_OMC_LIT93}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
#include "util/modelica.h"

#include "InstStateMachineUtil_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_extractSMStates(threadData_t *threadData, modelica_metatype _inElement);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_extractSMStates,2,0) {(void*) boxptr_InstStateMachineUtil_extractSMStates,0}};
#define boxvar_InstStateMachineUtil_extractSMStates MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_extractSMStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_extractInitialSMStates(threadData_t *threadData, modelica_metatype _inElement);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_extractInitialSMStates,2,0) {(void*) boxptr_InstStateMachineUtil_extractInitialSMStates,0}};
#define boxvar_InstStateMachineUtil_extractInitialSMStates MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_extractInitialSMStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_prefixCrefNoContext2(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inPre);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_prefixCrefNoContext2,2,0) {(void*) boxptr_InstStateMachineUtil_prefixCrefNoContext2,0}};
#define boxvar_InstStateMachineUtil_prefixCrefNoContext2 MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_prefixCrefNoContext2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_extractSMStates2(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_extractSMStates2,2,0) {(void*) boxptr_InstStateMachineUtil_extractSMStates2,0}};
#define boxvar_InstStateMachineUtil_extractSMStates2 MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_extractSMStates2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_isSMStatement2(threadData_t *threadData, modelica_metatype _inElement);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_isSMStatement2(threadData_t *threadData, modelica_metatype _inElement);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_isSMStatement2,2,0) {(void*) boxptr_InstStateMachineUtil_isSMStatement2,0}};
#define boxvar_InstStateMachineUtil_isSMStatement2 MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_isSMStatement2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_isSMStatement(threadData_t *threadData, modelica_metatype _inElement);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_isSMStatement(threadData_t *threadData, modelica_metatype _inElement);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_isSMStatement,2,0) {(void*) boxptr_InstStateMachineUtil_isSMStatement,0}};
#define boxvar_InstStateMachineUtil_isSMStatement MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_isSMStatement)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_crefIndexCmp(threadData_t *threadData, modelica_metatype _inElement1, modelica_metatype _inElement2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_crefIndexCmp(threadData_t *threadData, modelica_metatype _inElement1, modelica_metatype _inElement2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_crefIndexCmp,2,0) {(void*) boxptr_InstStateMachineUtil_crefIndexCmp,0}};
#define boxvar_InstStateMachineUtil_crefIndexCmp MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_crefIndexCmp)
PROTECTED_FUNCTION_STATIC void omc_InstStateMachineUtil_printAdjacencyTable(threadData_t *threadData, modelica_metatype _iTable, modelica_integer _nStates);
PROTECTED_FUNCTION_STATIC void boxptr_InstStateMachineUtil_printAdjacencyTable(threadData_t *threadData, modelica_metatype _iTable, modelica_metatype _nStates);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_printAdjacencyTable,2,0) {(void*) boxptr_InstStateMachineUtil_printAdjacencyTable,0}};
#define boxvar_InstStateMachineUtil_printAdjacencyTable MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_printAdjacencyTable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_createAdjacencyTable(threadData_t *threadData, modelica_metatype _smNodes, modelica_integer _nStates);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_createAdjacencyTable(threadData_t *threadData, modelica_metatype _smNodes, modelica_metatype _nStates);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_createAdjacencyTable,2,0) {(void*) boxptr_InstStateMachineUtil_createAdjacencyTable,0}};
#define boxvar_InstStateMachineUtil_createAdjacencyTable MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_createAdjacencyTable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_transitiveClosure(threadData_t *threadData, modelica_metatype _iTable, modelica_integer _nStates);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_transitiveClosure(threadData_t *threadData, modelica_metatype _iTable, modelica_metatype _nStates);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_transitiveClosure,2,0) {(void*) boxptr_InstStateMachineUtil_transitiveClosure,0}};
#define boxvar_InstStateMachineUtil_transitiveClosure MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_transitiveClosure)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_extractInitialStates(threadData_t *threadData, modelica_metatype _smNodeTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_extractInitialStates,2,0) {(void*) boxptr_InstStateMachineUtil_extractInitialStates,0}};
#define boxvar_InstStateMachineUtil_extractInitialStates MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_extractInitialStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_extractFlatSMGroup(threadData_t *threadData, modelica_metatype _initialStates, modelica_metatype _iTable, modelica_integer _nStates);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_extractFlatSMGroup(threadData_t *threadData, modelica_metatype _initialStates, modelica_metatype _iTable, modelica_metatype _nStates);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_extractFlatSMGroup,2,0) {(void*) boxptr_InstStateMachineUtil_extractFlatSMGroup,0}};
#define boxvar_InstStateMachineUtil_extractFlatSMGroup MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_extractFlatSMGroup)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_relateNodesToGroup(threadData_t *threadData, modelica_metatype _flatSMGroup, modelica_metatype _inNodeToGroup);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_relateNodesToGroup,2,0) {(void*) boxptr_InstStateMachineUtil_relateNodesToGroup,0}};
#define boxvar_InstStateMachineUtil_relateNodesToGroup MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_relateNodesToGroup)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_isSMComp(threadData_t *threadData, modelica_metatype _inElement);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_isSMComp(threadData_t *threadData, modelica_metatype _inElement);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_isSMComp,2,0) {(void*) boxptr_InstStateMachineUtil_isSMComp,0}};
#define boxvar_InstStateMachineUtil_isSMComp MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_isSMComp)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_isInFlatSM(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _smInitialCref, modelica_metatype _smNodeToFlatSMGroup);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_isInFlatSM(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _smInitialCref, modelica_metatype _smNodeToFlatSMGroup);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_isInFlatSM,2,0) {(void*) boxptr_InstStateMachineUtil_isInFlatSM,0}};
#define boxvar_InstStateMachineUtil_isInFlatSM MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_isInFlatSM)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_createFlatSM(threadData_t *threadData, modelica_metatype _smInitialCref, modelica_metatype _smElemsLst, modelica_metatype _smNodeToFlatSMGroup);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_createFlatSM,2,0) {(void*) boxptr_InstStateMachineUtil_createFlatSM,0}};
#define boxvar_InstStateMachineUtil_createFlatSM MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_createFlatSM)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_isOuterOutput(threadData_t *threadData, modelica_metatype _inElem);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_isOuterOutput(threadData_t *threadData, modelica_metatype _inElem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_isOuterOutput,2,0) {(void*) boxptr_InstStateMachineUtil_isOuterOutput,0}};
#define boxvar_InstStateMachineUtil_isOuterOutput MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_isOuterOutput)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_collectOuterOutputs(threadData_t *threadData, modelica_metatype _inElem, modelica_metatype _inOuterAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_collectOuterOutputs,2,0) {(void*) boxptr_InstStateMachineUtil_collectOuterOutputs,0}};
#define boxvar_InstStateMachineUtil_collectOuterOutputs MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_collectOuterOutputs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_findInner(threadData_t *threadData, modelica_metatype _inCrefTest, modelica_metatype _inCrefIdent, modelica_metatype _inIH);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_findInner,2,0) {(void*) boxptr_InstStateMachineUtil_findInner,0}};
#define boxvar_InstStateMachineUtil_findInner MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_findInner)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_matchOuterWithInner(threadData_t *threadData, modelica_metatype _inOuterCref, modelica_metatype _inIH, modelica_metatype _inOuterCrefToInnerCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_matchOuterWithInner,2,0) {(void*) boxptr_InstStateMachineUtil_matchOuterWithInner,0}};
#define boxvar_InstStateMachineUtil_matchOuterWithInner MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_matchOuterWithInner)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_traverserHelperSubsOuterByInner(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inOuterToInner, modelica_metatype *out_outOuterToInner);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_traverserHelperSubsOuterByInner,2,0) {(void*) boxptr_InstStateMachineUtil_traverserHelperSubsOuterByInner,0}};
#define boxvar_InstStateMachineUtil_traverserHelperSubsOuterByInner MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_traverserHelperSubsOuterByInner)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_traverserHelperSubsOuterByInnerExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inOuterToInner, modelica_metatype *out_outOuterToInner);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_traverserHelperSubsOuterByInnerExp,2,0) {(void*) boxptr_InstStateMachineUtil_traverserHelperSubsOuterByInnerExp,0}};
#define boxvar_InstStateMachineUtil_traverserHelperSubsOuterByInnerExp MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_traverserHelperSubsOuterByInnerExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_crefEqualTuple22(threadData_t *threadData, modelica_metatype _inHashEntry, modelica_metatype _inCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_crefEqualTuple22,2,0) {(void*) boxptr_InstStateMachineUtil_crefEqualTuple22,0}};
#define boxvar_InstStateMachineUtil_crefEqualTuple22 MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_crefEqualTuple22)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_collectCorrespondingKeys(threadData_t *threadData, modelica_metatype _inInnerCref, modelica_metatype _inHashEntries, modelica_metatype _inInnerCrefToOuterOutputCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_collectCorrespondingKeys,2,0) {(void*) boxptr_InstStateMachineUtil_collectCorrespondingKeys,0}};
#define boxvar_InstStateMachineUtil_collectCorrespondingKeys MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_collectCorrespondingKeys)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_mergingRhs(threadData_t *threadData, modelica_metatype _inOuterCrefs, modelica_metatype _inInnerCref, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_mergingRhs,2,0) {(void*) boxptr_InstStateMachineUtil_mergingRhs,0}};
#define boxvar_InstStateMachineUtil_mergingRhs MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_mergingRhs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_freshMergingEqn(threadData_t *threadData, modelica_metatype _inInnerCrefToOuterOutputCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_freshMergingEqn,2,0) {(void*) boxptr_InstStateMachineUtil_freshMergingEqn,0}};
#define boxvar_InstStateMachineUtil_freshMergingEqn MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_freshMergingEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_traversingCountDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCref_HitCount, modelica_metatype *out_outCref_HitCount);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_traversingCountDer,2,0) {(void*) boxptr_InstStateMachineUtil_traversingCountDer,0}};
#define boxvar_InstStateMachineUtil_traversingCountDer MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_traversingCountDer)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_mergingRhs__der(threadData_t *threadData, modelica_metatype _inOuterCrefs, modelica_metatype _inInnerCref, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_mergingRhs__der,2,0) {(void*) boxptr_InstStateMachineUtil_mergingRhs__der,0}};
#define boxvar_InstStateMachineUtil_mergingRhs__der MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_mergingRhs__der)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_freshMergingEqn__der(threadData_t *threadData, modelica_metatype _inInnerCrefToOuterOutputCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_freshMergingEqn__der,2,0) {(void*) boxptr_InstStateMachineUtil_freshMergingEqn__der,0}};
#define boxvar_InstStateMachineUtil_freshMergingEqn__der MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_freshMergingEqn__der)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_freshAliasEqn__der(threadData_t *threadData, modelica_metatype _inInnerCrefToOuterOutputCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_freshAliasEqn__der,2,0) {(void*) boxptr_InstStateMachineUtil_freshAliasEqn__der,0}};
#define boxvar_InstStateMachineUtil_freshAliasEqn__der MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_freshAliasEqn__der)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_mergeVariableDefinitions(threadData_t *threadData, modelica_metatype _inFlatSM, modelica_metatype _inIH, modelica_metatype _inStartElementLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_mergeVariableDefinitions,2,0) {(void*) boxptr_InstStateMachineUtil_mergeVariableDefinitions,0}};
#define boxvar_InstStateMachineUtil_mergeVariableDefinitions MMC_REFSTRUCTLIT(boxvar_lit_InstStateMachineUtil_mergeVariableDefinitions)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_extractSMStates(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_metatype _cref1 = NULL;
      modelica_metatype _cref2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref1 has no default value.
      // _cref2 has no default value.
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
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,11,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (10 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmpMeta12);
          tmpMeta15 = MMC_CDR(tmpMeta12);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,2,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          if (listEmpty(tmpMeta15)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmpMeta15);
          tmpMeta18 = MMC_CDR(tmpMeta15);
          if (!listEmpty(tmpMeta18)) goto tmp3_end;
          
          _cref1 = tmpMeta13;
          _cref2 = tmpMeta16;
          /* Pattern matching succeeded */
          tmpMeta19 = mmc_mk_cons(_cref1, mmc_mk_cons(_cref2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta19;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,11,3) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,2,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          if (12 != MMC_STRLEN(tmpMeta22) || strcmp(MMC_STRINGDATA(_OMC_LIT1), MMC_STRINGDATA(tmpMeta22)) != 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,0,2) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          if (listEmpty(tmpMeta24)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmpMeta24);
          tmpMeta26 = MMC_CDR(tmpMeta24);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,2,1) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
          if (!listEmpty(tmpMeta26)) goto tmp3_end;
          
          _cref1 = tmpMeta27;
          /* Pattern matching succeeded */
          tmpMeta28 = mmc_mk_cons(_cref1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta29;
          
          /* Pattern matching succeeded */
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta29;
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
  _outElement = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outElement;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_extractInitialSMStates(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_metatype _cref1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref1 has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,11,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (12 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT1), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          if (!listEmpty(tmpMeta12)) goto tmp3_end;
          
          _cref1 = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta1 = _cref1;
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
  _outElement = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outElement;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_prefixCrefNoContext2(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inPre)
{
  modelica_metatype _outCref = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCref has no default value.
  _outCref = omc_PrefixUtil_prefixCrefNoContext(threadData, _inPre, _inCref);
  _return: OMC_LABEL_UNUSED
  return _outCref;
}

static modelica_metatype closure0_PrefixUtil_prefixCrefNoContext(threadData_t *thData, modelica_metatype closure, modelica_metatype inCref)
{
  modelica_metatype inPre = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_PrefixUtil_prefixCrefNoContext(thData, inPre, inCref);
}
DLLDirection
modelica_metatype omc_InstStateMachineUtil_getSMStatesInContext(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _inPrefix, modelica_metatype *out_initialStates)
{
  modelica_metatype _states = NULL;
  modelica_metatype _initialStates = NULL;
  modelica_metatype _eqns1 = NULL;
  modelica_metatype _statesLL = NULL;
  modelica_metatype _initialStatesCR = NULL;
  modelica_metatype _statesCR = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _states has no default value.
  // _initialStates has no default value.
  // _eqns1 has no default value.
  // _statesLL has no default value.
  // _initialStatesCR has no default value.
  // _statesCR has no default value.
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _eq_loopVar = 0;
    modelica_metatype _eq;
    _eq_loopVar = _eqns;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_eq_loopVar)) {
        _eq = MMC_CAR(_eq_loopVar);
        _eq_loopVar = MMC_CDR(_eq_loopVar);
        if (omc_InstStateMachineUtil_isSMStatement(threadData, _eq)) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = _eq;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  _eqns1 = tmpMeta1;

  _initialStatesCR = omc_List_filterMap(threadData, _eqns1, boxvar_InstStateMachineUtil_extractInitialSMStates);

  _initialStates = omc_List_map(threadData, _initialStatesCR, boxvar_ComponentReference_toExpCref);

  _initialStates = omc_List_map1(threadData, _initialStates, boxvar_InstStateMachineUtil_prefixCrefNoContext2, _inPrefix);

  _statesLL = omc_List_map(threadData, _eqns1, boxvar_InstStateMachineUtil_extractSMStates);

  _statesCR = omc_List_flatten(threadData, _statesLL);

  _states = omc_List_map(threadData, _statesCR, boxvar_ComponentReference_toExpCref);

  tmpMeta5 = mmc_mk_box1(0, _inPrefix);
  _states = omc_List_map(threadData, _states, (modelica_fnptr) mmc_mk_box2(0,closure0_PrefixUtil_prefixCrefNoContext,tmpMeta5));
  _return: OMC_LABEL_UNUSED
  if (out_initialStates) { *out_initialStates = _initialStates; }
  return _states;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_extractSMStates2(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inTable)
{
  modelica_metatype _outTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTable = _inTable;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_metatype _smnode1 = NULL;
      modelica_metatype _smnode2 = NULL;
      modelica_metatype _cref1 = NULL;
      modelica_metatype _cref2 = NULL;
      modelica_boolean _isInitial1;
      modelica_boolean _isInitial2;
      modelica_metatype _edges1 = NULL;
      modelica_metatype _edges2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _smnode1 has no default value.
      // _smnode2 has no default value.
      // _cref1 has no default value.
      // _cref2 has no default value.
      // _isInitial1 has no default value.
      // _isInitial2 has no default value.
      // _edges1 has no default value.
      // _edges2 has no default value.
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
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_boolean tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,25,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,13,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (10 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (listEmpty(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (listEmpty(tmpMeta11)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmpMeta11);
          tmpMeta14 = MMC_CDR(tmpMeta11);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,6,2) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          
          _cref1 = tmpMeta12;
          _cref2 = tmpMeta15;
          /* Pattern matching succeeded */
          tmp17 = (modelica_boolean)omc_BaseHashTable_hasKey(threadData, _cref1, _outTable);
          if(tmp17)
          {
            tmpMeta18 = omc_BaseHashTable_get(threadData, _cref1, _outTable);
          }
          else
          {
            tmpMeta16 = mmc_mk_box4(3, &InstStateMachineUtil_SMNode_SMNODE__desc, _cref1, mmc_mk_boolean(0 /* false */), omc_HashSet_emptyHashSet(threadData));
            tmpMeta18 = tmpMeta16;
          }
          _smnode1 = tmpMeta18;

          /* Pattern-matching assignment */
          tmpMeta19 = _smnode1;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 4));
          _isInitial1 = tmp21  /* pattern as ty=Boolean */;
          _edges1 = tmpMeta22;

          _edges1 = omc_BaseHashSet_add(threadData, _cref1, _edges1);

          _edges1 = omc_BaseHashSet_add(threadData, _cref2, _edges1);

          tmpMeta23 = mmc_mk_box4(3, &InstStateMachineUtil_SMNode_SMNODE__desc, _cref1, mmc_mk_boolean(_isInitial1), _edges1);
          _smnode1 = tmpMeta23;

          tmpMeta24 = mmc_mk_box2(0, _cref1, _smnode1);
          _outTable = omc_BaseHashTable_add(threadData, tmpMeta24, _outTable);

          tmp26 = (modelica_boolean)omc_BaseHashTable_hasKey(threadData, _cref2, _outTable);
          if(tmp26)
          {
            tmpMeta27 = omc_BaseHashTable_get(threadData, _cref2, _outTable);
          }
          else
          {
            tmpMeta25 = mmc_mk_box4(3, &InstStateMachineUtil_SMNode_SMNODE__desc, _cref2, mmc_mk_boolean(0 /* false */), omc_HashSet_emptyHashSet(threadData));
            tmpMeta27 = tmpMeta25;
          }
          _smnode2 = tmpMeta27;

          /* Pattern-matching assignment */
          tmpMeta28 = _smnode2;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 3));
          tmp30 = mmc_unbox_integer(tmpMeta29);
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 4));
          _isInitial2 = tmp30  /* pattern as ty=Boolean */;
          _edges2 = tmpMeta31;

          _edges2 = omc_BaseHashSet_add(threadData, _cref1, _edges2);

          _edges2 = omc_BaseHashSet_add(threadData, _cref2, _edges2);

          tmpMeta32 = mmc_mk_box4(3, &InstStateMachineUtil_SMNode_SMNODE__desc, _cref2, mmc_mk_boolean(_isInitial2), _edges2);
          _smnode2 = tmpMeta32;
          tmpMeta33 = mmc_mk_box2(0, _cref2, _smnode2);
          tmpMeta1 = omc_BaseHashTable_add(threadData, tmpMeta33, _outTable);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_boolean tmp42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,25,2) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,13,3) == 0) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,1,1) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          if (12 != MMC_STRLEN(tmpMeta36) || strcmp(MMC_STRINGDATA(_OMC_LIT1), MMC_STRINGDATA(tmpMeta36)) != 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 3));
          if (listEmpty(tmpMeta37)) goto tmp3_end;
          tmpMeta38 = MMC_CAR(tmpMeta37);
          tmpMeta39 = MMC_CDR(tmpMeta37);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,6,2) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
          if (!listEmpty(tmpMeta39)) goto tmp3_end;
          
          _cref1 = tmpMeta40;
          /* Pattern matching succeeded */
          tmp42 = (modelica_boolean)omc_BaseHashTable_hasKey(threadData, _cref1, _outTable);
          if(tmp42)
          {
            tmpMeta43 = omc_BaseHashTable_get(threadData, _cref1, _outTable);
          }
          else
          {
            tmpMeta41 = mmc_mk_box4(3, &InstStateMachineUtil_SMNode_SMNODE__desc, _cref1, mmc_mk_boolean(1 /* true */), omc_HashSet_emptyHashSet(threadData));
            tmpMeta43 = tmpMeta41;
          }
          _smnode1 = tmpMeta43;

          /* Pattern-matching assignment */
          tmpMeta44 = _smnode1;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 4));
          _edges1 = tmpMeta45;

          _edges1 = omc_BaseHashSet_add(threadData, _cref1, _edges1);

          tmpMeta46 = mmc_mk_box4(3, &InstStateMachineUtil_SMNode_SMNODE__desc, _cref1, mmc_mk_boolean(1 /* true */), _edges1);
          _smnode1 = tmpMeta46;
          tmpMeta47 = mmc_mk_box2(0, _cref1, _smnode1);
          tmpMeta1 = omc_BaseHashTable_add(threadData, tmpMeta47, _outTable);
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
  _outTable = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTable;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_isSMStatement2(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_boolean _outIsSMStatement;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsSMStatement has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_string _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,25,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,13,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _name = tmpMeta8;
          /* Pattern matching succeeded */
          tmp1 = (((stringEqual(_name, _OMC_LIT0)) || (stringEqual(_name, _OMC_LIT1))) && omc_Config_synchronousFeaturesAllowed(threadData));
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
  _outIsSMStatement = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsSMStatement;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_isSMStatement2(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_boolean _outIsSMStatement;
  modelica_metatype out_outIsSMStatement;
  _outIsSMStatement = omc_InstStateMachineUtil_isSMStatement2(threadData, _inElement);
  out_outIsSMStatement = mmc_mk_icon(_outIsSMStatement);
  return out_outIsSMStatement;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_isSMStatement(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_boolean _outIsSMStatement;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsSMStatement has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_string _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,11,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _name = tmpMeta8;
          /* Pattern matching succeeded */
          tmp1 = (((stringEqual(_name, _OMC_LIT0)) || (stringEqual(_name, _OMC_LIT1))) && omc_Config_synchronousFeaturesAllowed(threadData));
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
  _outIsSMStatement = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsSMStatement;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_isSMStatement(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_boolean _outIsSMStatement;
  modelica_metatype out_outIsSMStatement;
  _outIsSMStatement = omc_InstStateMachineUtil_isSMStatement(threadData, _inElement);
  out_outIsSMStatement = mmc_mk_icon(_outIsSMStatement);
  return out_outIsSMStatement;
}

DLLDirection
modelica_metatype omc_InstStateMachineUtil_getSMNodeTable(threadData_t *threadData, modelica_metatype _elementLst)
{
  modelica_metatype _smNodeTable = NULL;
  modelica_metatype _elementLst2 = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _smNodeTable has no default value.
  // _elementLst2 has no default value.
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp4;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _elementLst;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar5;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        if (omc_InstStateMachineUtil_isSMStatement2(threadData, _e)) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar4 = _e;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar5;
  }
  _elementLst2 = tmpMeta1;

  if((!listEmpty(_elementLst2)))
  {
    _smNodeTable = omc_List_fold(threadData, _elementLst2, boxvar_InstStateMachineUtil_extractSMStates2, omc_HashTableSM1_emptyHashTable(threadData));
  }
  else
  {
    _smNodeTable = omc_HashTableSM1_emptyHashTableSized(threadData, ((modelica_integer) 1));
  }
  _return: OMC_LABEL_UNUSED
  return _smNodeTable;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_crefIndexCmp(threadData_t *threadData, modelica_metatype _inElement1, modelica_metatype _inElement2)
{
  modelica_boolean _inRes;
  modelica_integer _i1;
  modelica_integer _i2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _inRes has no default value.
  // _i1 has no default value.
  // _i2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inElement1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _i1 = tmp3  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta4 = _inElement2;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _i2 = tmp6  /* pattern as ty=Integer */;

  _inRes = (_i1 > _i2);
  _return: OMC_LABEL_UNUSED
  return _inRes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_crefIndexCmp(threadData_t *threadData, modelica_metatype _inElement1, modelica_metatype _inElement2)
{
  modelica_boolean _inRes;
  modelica_metatype out_inRes;
  _inRes = omc_InstStateMachineUtil_crefIndexCmp(threadData, _inElement1, _inElement2);
  out_inRes = mmc_mk_icon(_inRes);
  return out_inRes;
}

PROTECTED_FUNCTION_STATIC void omc_InstStateMachineUtil_printAdjacencyTable(threadData_t *threadData, modelica_metatype _iTable, modelica_integer _nStates)
{
  modelica_metatype _cref2index = NULL;
  boolean_array _adjacency;
  modelica_metatype _entries = NULL;
  modelica_metatype _entry = NULL;
  modelica_metatype _cref = NULL;
  modelica_integer _n;
  modelica_integer _i;
  modelica_integer _j;
  modelica_integer _padn;
  modelica_metatype _row = NULL;
  modelica_string _str = NULL;
  modelica_string _pads = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta5;
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
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_integer tmp22;
  modelica_integer tmp23;
  modelica_integer tmp24;
  modelica_metatype tmpMeta25;
  modelica_integer tmp26;
  modelica_integer tmp27;
  modelica_integer tmp28;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cref2index has no default value.
  alloc_boolean_array(&(_adjacency), 2, (_index_t)_nStates, (_index_t)_nStates); // _adjacency has no default value.
  // _entries has no default value.
  // _entry has no default value.
  // _cref has no default value.
  // _n has no default value.
  // _i has no default value.
  // _j has no default value.
  // _padn has no default value.
  // _row has no default value.
  // _str has no default value.
  // _pads has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTable;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _cref2index = tmpMeta2;
  _adjacency = *((base_array_t*)tmpMeta3)  /* pattern as ty=Boolean[:, :] */;

  _entries = omc_BaseHashTable_hashTableList(threadData, _cref2index);

  _n = listLength(_entries);

  {
    if(!(_n == _nStates))
    {
      {
        FILE_INFO info = {"/home/per/workspace/OpenModelica/OMCompiler/Compiler/FrontEnd/InstStateMachineUtil.mo",882,3,882,109,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT2));
      }
    }
  }

  _entries = omc_List_sort(threadData, _entries, boxvar_InstStateMachineUtil_crefIndexCmp);

  {
    modelica_metatype _entry;
    for (tmpMeta5 = _entries; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _entry = MMC_CAR(tmpMeta5);
      /* Pattern-matching assignment */
      tmpMeta6 = _entry;
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
      tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
      tmp9 = mmc_unbox_integer(tmpMeta8);
      _cref = tmpMeta7;
      _i = tmp9  /* pattern as ty=Integer */;

      tmpMeta10 = stringAppend(omc_ComponentReference_printComponentRefStr(threadData, _cref),_OMC_LIT3);
      tmpMeta11 = stringAppend(tmpMeta10,intString(_i));
      tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT4);
      fputs(MMC_STRINGDATA(tmpMeta12),stdout);
    }
  }

  _pads = _OMC_LIT5;

  _padn = ((modelica_integer) 8);

  _str = omc_Util_stringPadRight(threadData, _OMC_LIT6, _padn, _pads);

  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = _n;
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp16, tmp18); _i += tmp17)
    {
      tmpMeta14 = stringAppend(intString(_i),_OMC_LIT7);
      tmpMeta15 = stringAppend(_str,omc_Util_stringPadLeft(threadData, tmpMeta14, _padn, _pads));
      _str = tmpMeta15;
    }
  }

  tmpMeta19 = stringAppend(_str,_OMC_LIT4);
  fputs(MMC_STRINGDATA(tmpMeta19),stdout);

  tmp26 = ((modelica_integer) 1); tmp27 = 1; tmp28 = _n;
  if(!(((tmp27 > 0) && (tmp26 > tmp28)) || ((tmp27 < 0) && (tmp26 < tmp28))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp26, tmp28); _i += tmp27)
    {
      _str = omc_Util_stringPadRight(threadData, intString(_i), _padn, _pads);

      tmp22 = ((modelica_integer) 1); tmp23 = 1; tmp24 = _n;
      if(!(((tmp23 > 0) && (tmp22 > tmp24)) || ((tmp23 < 0) && (tmp22 < tmp24))))
      {
        modelica_integer _j;
        for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp22, tmp24); _j += tmp23)
        {
          _b = boolean_array_get(_adjacency, 2, _i, _j);

          tmpMeta20 = stringAppend((_b?_OMC_LIT8:_OMC_LIT9),_OMC_LIT7);
          tmpMeta21 = stringAppend(_str,omc_Util_stringPadLeft(threadData, tmpMeta20, _padn, _pads));
          _str = tmpMeta21;
        }
      }

      tmpMeta25 = stringAppend(_str,_OMC_LIT4);
      fputs(MMC_STRINGDATA(tmpMeta25),stdout);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_InstStateMachineUtil_printAdjacencyTable(threadData_t *threadData, modelica_metatype _iTable, modelica_metatype _nStates)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_nStates);
  omc_InstStateMachineUtil_printAdjacencyTable(threadData, _iTable, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_createAdjacencyTable(threadData_t *threadData, modelica_metatype _smNodes, modelica_integer _nStates)
{
  modelica_metatype _iTable = NULL;
  modelica_metatype _cref2index = NULL;
  boolean_array _adjacency;
  modelica_metatype _iRow = NULL;
  modelica_integer _n;
  modelica_integer _m;
  modelica_integer _i;
  modelica_integer _j;
  modelica_integer _k;
  modelica_metatype _cref = NULL;
  modelica_metatype _edges = NULL;
  modelica_metatype _crefs1 = NULL;
  modelica_metatype _crefs2 = NULL;
  static int tmp1 = 0;
  modelica_boolean tmp2;
  boolean_array tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _iTable has no default value.
  // _cref2index has no default value.
  alloc_boolean_array(&(_adjacency), 2, (_index_t)_nStates, (_index_t)_nStates); // _adjacency has no default value.
  // _iRow has no default value.
  // _n has no default value.
  // _m has no default value.
  // _i has no default value.
  // _j has no default value.
  // _k has no default value.
  // _cref has no default value.
  // _edges has no default value.
  // _crefs1 has no default value.
  // _crefs2 has no default value.
  _crefs1 = listArray(omc_BaseHashTable_hashTableKeyList(threadData, _smNodes));

  _n = arrayLength(_crefs1);

  _cref2index = omc_HashTable_emptyHashTableSized(threadData, _n);

  {
    if(!(_n == _nStates))
    {
      {
        FILE_INFO info = {"/home/per/workspace/OpenModelica/OMCompiler/Compiler/FrontEnd/InstStateMachineUtil.mo",840,3,840,108,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT10));
      }
    }
  }

  tmp2 = 0 /* false */;
  fill_alloc_boolean_array(&tmp3, tmp2, 2, _n, _n);
  boolean_array_copy_data(tmp3, _adjacency);

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = _n;
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
    {
      tmpMeta4 = mmc_mk_box2(0, arrayGet(_crefs1,_i) /* DAE.ASUB */, mmc_mk_integer(_i));
      _cref2index = omc_BaseHashTable_addNoUpdCheck(threadData, tmpMeta4, _cref2index);
    }
  }

  tmp13 = ((modelica_integer) 1); tmp14 = 1; tmp15 = _n;
  if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp13, tmp15); _i += tmp14)
    {
      /* Pattern-matching assignment */
      tmpMeta8 = omc_BaseHashTable_get(threadData, arrayGet(_crefs1,_i) /* DAE.ASUB */, _smNodes);
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
      _edges = tmpMeta9;

      _crefs2 = listArray(omc_BaseHashSet_hashSetList(threadData, _edges));

      _m = arrayLength(_crefs2);

      tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = _m;
      if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
      {
        modelica_integer _j;
        for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp10, tmp12); _j += tmp11)
        {
          _cref = arrayGet(_crefs2,_j) /* DAE.ASUB */;

          _k = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _cref, _cref2index));

          boolean_array_get(_adjacency, 2, _i, _k) = 1 /* true */;
        }
      }
    }
  }

  tmpMeta16 = mmc_mk_box3(3, &InstStateMachineUtil_AdjacencyTable_ADJACENCY__TABLE__desc, _cref2index, mmc_mk_modelica_array(_adjacency));
  _iTable = tmpMeta16;
  _return: OMC_LABEL_UNUSED
  return _iTable;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_createAdjacencyTable(threadData_t *threadData, modelica_metatype _smNodes, modelica_metatype _nStates)
{
  modelica_integer tmp1;
  modelica_metatype _iTable = NULL;
  tmp1 = mmc_unbox_integer(_nStates);
  _iTable = omc_InstStateMachineUtil_createAdjacencyTable(threadData, _smNodes, tmp1);
  /* skip box _iTable; InstStateMachineUtil.AdjacencyTable */
  return _iTable;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_transitiveClosure(threadData_t *threadData, modelica_metatype _iTable, modelica_integer _nStates)
{
  modelica_metatype _transClosure = NULL;
  modelica_metatype _cref2index = NULL;
  boolean_array _adjacency;
  modelica_integer _n;
  modelica_integer _k;
  modelica_integer _i;
  modelica_integer _j;
  modelica_boolean _c;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _transClosure has no default value.
  // _cref2index has no default value.
  alloc_boolean_array(&(_adjacency), 2, (_index_t)_nStates, (_index_t)_nStates); // _adjacency has no default value.
  // _n has no default value.
  // _k has no default value.
  // _i has no default value.
  // _j has no default value.
  // _c has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTable;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _cref2index = tmpMeta2;
  _adjacency = *((base_array_t*)tmpMeta3)  /* pattern as ty=Boolean[:, :] */;

  _n = omc_BaseHashTable_hashTableCurrentSize(threadData, _cref2index);

  {
    if(!(_n == _nStates))
    {
      {
        FILE_INFO info = {"/home/per/workspace/OpenModelica/OMCompiler/Compiler/FrontEnd/InstStateMachineUtil.mo",804,3,804,110,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT11));
      }
    }
  }

  tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = _n;
  if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
  {
    modelica_integer _k;
    for(_k = ((modelica_integer) 1); in_range_integer(_k, tmp11, tmp13); _k += tmp12)
    {
      tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = _n;
      if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
      {
        modelica_integer _i;
        for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
        {
          if(boolean_array_get(_adjacency, 2, _i, _k))
          {
            tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = _n;
            if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
            {
              modelica_integer _j;
              for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp5, tmp7); _j += tmp6)
              {
                if(boolean_array_get(_adjacency, 2, _k, _j))
                {
                  boolean_array_get(_adjacency, 2, _i, _j) = 1 /* true */;
                }
              }
            }
          }
        }
      }
    }
  }

  tmpMeta14 = mmc_mk_box3(3, &InstStateMachineUtil_AdjacencyTable_ADJACENCY__TABLE__desc, _cref2index, mmc_mk_modelica_array(_adjacency));
  _transClosure = tmpMeta14;
  _return: OMC_LABEL_UNUSED
  return _transClosure;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_transitiveClosure(threadData_t *threadData, modelica_metatype _iTable, modelica_metatype _nStates)
{
  modelica_integer tmp1;
  modelica_metatype _transClosure = NULL;
  tmp1 = mmc_unbox_integer(_nStates);
  _transClosure = omc_InstStateMachineUtil_transitiveClosure(threadData, _iTable, tmp1);
  /* skip box _transClosure; InstStateMachineUtil.AdjacencyTable */
  return _transClosure;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_extractInitialStates(threadData_t *threadData, modelica_metatype _smNodeTable)
{
  modelica_metatype _initialStates = NULL;
  modelica_metatype _entries = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _smNode = NULL;
  modelica_boolean _isInitial;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _initialStates has no default value.
  // _entries has no default value.
  // _e has no default value.
  // _cref has no default value.
  // _smNode has no default value.
  // _isInitial has no default value.
  _entries = omc_BaseHashTable_hashTableList(threadData, _smNodeTable);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _initialStates = tmpMeta1;

  {
    modelica_metatype _e;
    for (tmpMeta2 = _entries; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _e = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _e;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _cref = tmpMeta4;
      _smNode = tmpMeta5;

      /* Pattern-matching assignment */
      tmpMeta6 = _smNode;
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
      tmp8 = mmc_unbox_integer(tmpMeta7);
      _isInitial = tmp8  /* pattern as ty=Boolean */;

      if(_isInitial)
      {
        tmpMeta9 = mmc_mk_cons(_cref, _initialStates);
        _initialStates = tmpMeta9;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _initialStates;
}

DLLDirection
modelica_string omc_InstStateMachineUtil_dumpFlatSMGroupStr(threadData_t *threadData, modelica_metatype _flatA)
{
  modelica_string _flatStr = NULL;
  modelica_metatype _crefs = NULL;
  modelica_string _initialStateStr = NULL;
  modelica_string _statesStr = NULL;
  modelica_metatype _statesStrs = NULL;
  modelica_metatype _initState = NULL;
  modelica_metatype _states = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _flatStr has no default value.
  // _crefs has no default value.
  // _initialStateStr has no default value.
  // _statesStr has no default value.
  // _statesStrs has no default value.
  // _initState has no default value.
  // _states has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _flatA;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _initState = tmpMeta2;
  _states = tmpMeta3;

  _initialStateStr = omc_ComponentReference_printComponentRefStr(threadData, _initState);

  _crefs = arrayList(_states);

  _statesStrs = omc_List_map(threadData, _crefs, boxvar_ComponentReference_printComponentRefStr);

  _statesStr = stringDelimitList(_statesStrs, _OMC_LIT12);

  tmpMeta4 = stringAppend(_initialStateStr,_OMC_LIT13);
  tmpMeta5 = stringAppend(tmpMeta4,_statesStr);
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT14);
  _flatStr = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _flatStr;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_extractFlatSMGroup(threadData_t *threadData, modelica_metatype _initialStates, modelica_metatype _iTable, modelica_integer _nStates)
{
  modelica_metatype _flatSMGroup = NULL;
  modelica_metatype _cref2index = NULL;
  boolean_array _adjacency;
  modelica_metatype _entries = NULL;
  modelica_metatype _i2cref = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _members = NULL;
  modelica_metatype _membersArr = NULL;
  modelica_metatype _memberSet = NULL;
  modelica_integer _n;
  modelica_integer _i;
  modelica_integer _j;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _flatSMGroup has no default value.
  // _cref2index has no default value.
  alloc_boolean_array(&(_adjacency), 2, (_index_t)_nStates, (_index_t)_nStates); // _adjacency has no default value.
  // _entries has no default value.
  // _i2cref has no default value.
  // _cref has no default value.
  // _members has no default value.
  // _membersArr has no default value.
  // _memberSet has no default value.
  // _n has no default value.
  // _i has no default value.
  // _j has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTable;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _cref2index = tmpMeta2;
  _adjacency = *((base_array_t*)tmpMeta3)  /* pattern as ty=Boolean[:, :] */;

  _n = omc_BaseHashTable_hashTableCurrentSize(threadData, _cref2index);

  {
    if(!(_n == _nStates))
    {
      {
        FILE_INFO info = {"/home/per/workspace/OpenModelica/OMCompiler/Compiler/FrontEnd/InstStateMachineUtil.mo",706,3,706,109,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT2));
      }
    }
  }

  _entries = omc_BaseHashTable_hashTableList(threadData, _cref2index);

  _entries = omc_List_sort(threadData, _entries, boxvar_InstStateMachineUtil_crefIndexCmp);

  _i2cref = listArray(omc_List_map(threadData, _entries, boxvar_Util_tuple21));

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _flatSMGroup = tmpMeta5;

  {
    modelica_metatype _cref;
    for (tmpMeta6 = _initialStates; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _cref = MMC_CAR(tmpMeta6);
      _i = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _cref, _cref2index));

      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      _members = tmpMeta7;

      tmp9 = ((modelica_integer) 1); tmp10 = 1; tmp11 = _n;
      if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
      {
        modelica_integer _j;
        for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp9, tmp11); _j += tmp10)
        {
          if(boolean_array_get(_adjacency, 2, _i, _j))
          {
            tmpMeta8 = mmc_mk_cons(arrayGet(_i2cref,_j) /* DAE.ASUB */, _members);
            _members = tmpMeta8;
          }
        }
      }

      _memberSet = omc_HashSet_emptyHashSetSized(threadData, listLength(_members));

      _memberSet = omc_List_fold(threadData, _members, boxvar_BaseHashSet_add, _memberSet);

      _memberSet = omc_BaseHashSet_delete(threadData, _cref, _memberSet);

      tmpMeta12 = mmc_mk_cons(_cref, omc_BaseHashSet_hashSetList(threadData, _memberSet));
      _membersArr = listArray(tmpMeta12);

      tmpMeta14 = mmc_mk_box3(3, &InstStateMachineUtil_FlatSMGroup_FLAT__SM__GROUP__desc, _cref, _membersArr);
      tmpMeta13 = mmc_mk_cons(tmpMeta14, _flatSMGroup);
      _flatSMGroup = tmpMeta13;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _flatSMGroup;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_extractFlatSMGroup(threadData_t *threadData, modelica_metatype _initialStates, modelica_metatype _iTable, modelica_metatype _nStates)
{
  modelica_integer tmp1;
  modelica_metatype _flatSMGroup = NULL;
  tmp1 = mmc_unbox_integer(_nStates);
  _flatSMGroup = omc_InstStateMachineUtil_extractFlatSMGroup(threadData, _initialStates, _iTable, tmp1);
  /* skip box _flatSMGroup; list<InstStateMachineUtil.FlatSMGroup> */
  return _flatSMGroup;
}

static modelica_metatype closure1_Util_makeTuple(threadData_t *thData, modelica_metatype closure, modelica_metatype inValue1)
{
  modelica_metatype inValue2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Util_makeTuple(thData, inValue1, inValue2);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_relateNodesToGroup(threadData_t *threadData, modelica_metatype _flatSMGroup, modelica_metatype _inNodeToGroup)
{
  modelica_metatype _outNodeToGroup = NULL;
  modelica_metatype _nodeGroup = NULL;
  modelica_metatype _initState = NULL;
  modelica_metatype _states = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNodeToGroup = _inNodeToGroup;
  // _nodeGroup has no default value.
  // _initState has no default value.
  // _states has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _flatSMGroup;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _initState = tmpMeta2;
  _states = tmpMeta3;

  tmpMeta4 = mmc_mk_box1(0, _initState);
  _nodeGroup = omc_Array_map(threadData, _states, (modelica_fnptr) mmc_mk_box2(0,closure1_Util_makeTuple,tmpMeta4));

  _outNodeToGroup = omc_Array_fold(threadData, _nodeGroup, boxvar_BaseHashTable_add, _outNodeToGroup);
  _return: OMC_LABEL_UNUSED
  return _outNodeToGroup;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_isSMComp(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_boolean _outResult;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,30,2) == 0) goto tmp3_end;
          
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
  _outResult = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_isSMComp(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_boolean _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_InstStateMachineUtil_isSMComp(threadData, _inElement);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_isInFlatSM(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _smInitialCref, modelica_metatype _smNodeToFlatSMGroup)
{
  modelica_boolean _outResult;
  modelica_metatype _crefCorrespondingFlatSMGroup = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  // _crefCorrespondingFlatSMGroup has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_metatype _cref1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,30,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cref1 = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BaseHashTable_hasKey(threadData, _cref1, _smNodeToFlatSMGroup)) goto tmp3_end;
          tmpMeta1 = omc_BaseHashTable_get(threadData, _cref1, _smNodeToFlatSMGroup);
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,25,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,13,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (10 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,6,2) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          
          _cref1 = tmpMeta13;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BaseHashTable_hasKey(threadData, _cref1, _smNodeToFlatSMGroup)) goto tmp3_end;
          tmpMeta1 = omc_BaseHashTable_get(threadData, _cref1, _smNodeToFlatSMGroup);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,25,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,13,3) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,1,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          if (12 != MMC_STRLEN(tmpMeta16) || strcmp(MMC_STRINGDATA(_OMC_LIT1), MMC_STRINGDATA(tmpMeta16)) != 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 3));
          if (listEmpty(tmpMeta17)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmpMeta17);
          tmpMeta19 = MMC_CDR(tmpMeta17);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,6,2) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (!listEmpty(tmpMeta19)) goto tmp3_end;
          
          _cref1 = tmpMeta20;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BaseHashTable_hasKey(threadData, _cref1, _smNodeToFlatSMGroup)) goto tmp3_end;
          tmpMeta1 = omc_BaseHashTable_get(threadData, _cref1, _smNodeToFlatSMGroup);
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp21 = omc_Flags_isSet(threadData, _OMC_LIT18);
          if (1 /* true */ != tmp21) goto goto_2;

          tmpMeta22 = mmc_mk_cons(_inElement, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta23 = stringAppend(_OMC_LIT19,omc_DAEDump_dumpElementsStr(threadData, tmpMeta22));
          omc_Debug_traceln(threadData, tmpMeta23);

          omc_BaseHashTable_dumpHashTableStatistics(threadData, _smNodeToFlatSMGroup);
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
  _crefCorrespondingFlatSMGroup = tmpMeta1;

  _outResult = omc_ComponentReference_crefEqual(threadData, _crefCorrespondingFlatSMGroup, _smInitialCref);
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_isInFlatSM(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _smInitialCref, modelica_metatype _smNodeToFlatSMGroup)
{
  modelica_boolean _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_InstStateMachineUtil_isInFlatSM(threadData, _inElement, _smInitialCref, _smNodeToFlatSMGroup);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_createFlatSM(threadData_t *threadData, modelica_metatype _smInitialCref, modelica_metatype _smElemsLst, modelica_metatype _smNodeToFlatSMGroup)
{
  modelica_metatype _flatSM = NULL;
  modelica_metatype _smElemsInFlatSM = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _flatSM has no default value.
  // _smElemsInFlatSM has no default value.
  _smElemsInFlatSM = omc_List_filter2OnTrue(threadData, _smElemsLst, boxvar_InstStateMachineUtil_isInFlatSM, _smInitialCref, _smNodeToFlatSMGroup);

  tmpMeta1 = mmc_mk_box3(32, &DAE_Element_FLAT__SM__desc, omc_ComponentReference_printComponentRefStr(threadData, _smInitialCref), _smElemsInFlatSM);
  _flatSM = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _flatSM;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_InstStateMachineUtil_isOuterOutput(threadData_t *threadData, modelica_metatype _inElem)
{
  modelica_boolean _outB;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outB has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElem;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,0) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,0) == 0) goto tmp3_end;
          
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
  _outB = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outB;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InstStateMachineUtil_isOuterOutput(threadData_t *threadData, modelica_metatype _inElem)
{
  modelica_boolean _outB;
  modelica_metatype out_outB;
  _outB = omc_InstStateMachineUtil_isOuterOutput(threadData, _inElem);
  out_outB = mmc_mk_icon(_outB);
  return out_outB;
}

static modelica_metatype closure2_Util_makeTuple(threadData_t *thData, modelica_metatype closure, modelica_metatype inValue1)
{
  modelica_metatype inValue2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Util_makeTuple(thData, inValue1, inValue2);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_collectOuterOutputs(threadData_t *threadData, modelica_metatype _inElem, modelica_metatype _inOuterAcc)
{
  modelica_metatype _outOuterAcc = NULL;
  modelica_metatype _outerOutputs = NULL;
  modelica_metatype _outerOutputCrefs = NULL;
  modelica_metatype _outerOutputCrefToSMCompCref = NULL;
  modelica_metatype _componentRef = NULL;
  modelica_metatype _dAElist = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outOuterAcc = _inOuterAcc;
  // _outerOutputs has no default value.
  // _outerOutputCrefs has no default value.
  // _outerOutputCrefToSMCompCref has no default value.
  // _componentRef has no default value.
  // _dAElist has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElem;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,30,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _componentRef = tmpMeta6;
          _dAElist = tmpMeta7;
          /* Pattern matching succeeded */
          _outerOutputs = omc_List_filterOnTrue(threadData, _dAElist, boxvar_InstStateMachineUtil_isOuterOutput);

          _outerOutputCrefs = omc_List_map(threadData, _outerOutputs, boxvar_DAEUtil_varCref);

          tmpMeta8 = mmc_mk_box1(0, _componentRef);
          _outerOutputCrefToSMCompCref = omc_List_map(threadData, _outerOutputCrefs, (modelica_fnptr) mmc_mk_box2(0,closure2_Util_makeTuple,tmpMeta8));
          tmpMeta1 = omc_List_fold(threadData, _outerOutputCrefToSMCompCref, boxvar_BaseHashTable_addUnique, _outOuterAcc);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inOuterAcc;
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
  _outOuterAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outOuterAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_findInner(threadData_t *threadData, modelica_metatype _inCrefTest, modelica_metatype _inCrefIdent, modelica_metatype _inIH)
{
  modelica_metatype _outCrefFound = NULL;
  modelica_metatype _testCref = NULL;
  modelica_metatype _strippedCref1 = NULL;
  modelica_metatype _strippedCref2 = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCrefFound has no default value.
  // _testCref has no default value.
  // _strippedCref1 has no default value.
  // _strippedCref2 has no default value.
  // _ht has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = listHead(_inIH);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _ht = tmpMeta2;

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
          /* Pattern matching succeeded */
          omc_InnerOuter_get(threadData, _inCrefTest, _ht);

          _outCrefFound = _inCrefTest;
          goto tmp4_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _strippedCref1 = omc_ComponentReference_crefStripLastIdent(threadData, _inCrefTest);

          _strippedCref2 = ((omc_ComponentReference_crefDepth(threadData, _strippedCref1) >= ((modelica_integer) 2))?omc_ComponentReference_joinCrefs(threadData, omc_ComponentReference_crefStripLastIdent(threadData, _strippedCref1), _inCrefIdent):_inCrefIdent);

          _outCrefFound = omc_InstStateMachineUtil_findInner(threadData, _strippedCref2, _inCrefIdent, _inIH);
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
  return _outCrefFound;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_matchOuterWithInner(threadData_t *threadData, modelica_metatype _inOuterCref, modelica_metatype _inIH, modelica_metatype _inOuterCrefToInnerCref)
{
  modelica_metatype _outOuterCrefToInnerCref = NULL;
  modelica_metatype _crefIdent = NULL;
  modelica_metatype _crefFound = NULL;
  modelica_metatype _strippedCref1 = NULL;
  modelica_metatype _strippedCref2 = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outOuterCrefToInnerCref = _inOuterCrefToInnerCref;
  // _crefIdent has no default value.
  // _crefFound has no default value.
  // _strippedCref1 has no default value.
  // _strippedCref2 has no default value.
  _crefIdent = omc_ComponentReference_crefLastCref(threadData, _inOuterCref);

  _strippedCref1 = omc_ComponentReference_crefStripLastIdent(threadData, _inOuterCref);

  _strippedCref2 = ((omc_ComponentReference_crefDepth(threadData, _strippedCref1) >= ((modelica_integer) 2))?omc_ComponentReference_joinCrefs(threadData, omc_ComponentReference_crefStripLastIdent(threadData, _strippedCref1), _crefIdent):_crefIdent);

  _crefFound = omc_InstStateMachineUtil_findInner(threadData, _strippedCref2, _crefIdent, _inIH);

  tmpMeta1 = mmc_mk_box2(0, _inOuterCref, _crefFound);
  _outOuterCrefToInnerCref = omc_BaseHashTable_addUnique(threadData, tmpMeta1, _outOuterCrefToInnerCref);
  _return: OMC_LABEL_UNUSED
  return _outOuterCrefToInnerCref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_traverserHelperSubsOuterByInner(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inOuterToInner, modelica_metatype *out_outOuterToInner)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outOuterToInner = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outOuterToInner has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _componentRef = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _attr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _componentRef has no default value.
      // _ty has no default value.
      // _attr has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (8 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT20), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _componentRef = tmpMeta11;
          _ty = tmpMeta12;
          _attr = tmpMeta13;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BaseHashTable_hasKey(threadData, _componentRef, _inOuterToInner)) goto tmp3_end;
          tmpMeta15 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, omc_BaseHashTable_get(threadData, _componentRef, _inOuterToInner), _ty);
          tmpMeta14 = mmc_mk_cons(tmpMeta15, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta16 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT21, tmpMeta14, _attr);
          tmpMeta[0+0] = tmpMeta16;
          tmpMeta[0+1] = _inOuterToInner;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inOuterToInner;
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
  _outOuterToInner = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outOuterToInner) { *out_outOuterToInner = _outOuterToInner; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_traverserHelperSubsOuterByInnerExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inOuterToInner, modelica_metatype *out_outOuterToInner)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outOuterToInner = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outOuterToInner has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_InstStateMachineUtil_traverserHelperSubsOuterByInner, _inOuterToInner ,&_outOuterToInner);
  _return: OMC_LABEL_UNUSED
  if (out_outOuterToInner) { *out_outOuterToInner = _outOuterToInner; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_crefEqualTuple22(threadData_t *threadData, modelica_metatype _inHashEntry, modelica_metatype _inCref)
{
  modelica_metatype _outCref = NULL;
  modelica_boolean _isEqual;
  modelica_metatype _tuple22 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCref has no default value.
  // _isEqual has no default value.
  // _tuple22 has no default value.
  _tuple22 = omc_Util_tuple22(threadData, _inHashEntry);

  _isEqual = omc_ComponentReference_crefEqual(threadData, _tuple22, _inCref);

  if((!_isEqual))
  {
    MMC_THROW_INTERNAL();
  }

  _outCref = omc_Util_tuple21(threadData, _inHashEntry);
  _return: OMC_LABEL_UNUSED
  return _outCref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_collectCorrespondingKeys(threadData_t *threadData, modelica_metatype _inInnerCref, modelica_metatype _inHashEntries, modelica_metatype _inInnerCrefToOuterOutputCrefs)
{
  modelica_metatype _outInnerCrefToOuterOutputCrefs = NULL;
  modelica_metatype _outerRefs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outInnerCrefToOuterOutputCrefs = _inInnerCrefToOuterOutputCrefs;
  // _outerRefs has no default value.
  _outerRefs = omc_List_filterMap1(threadData, _inHashEntries, boxvar_InstStateMachineUtil_crefEqualTuple22, _inInnerCref);

  tmpMeta1 = mmc_mk_box2(0, _inInnerCref, _outerRefs);
  _outInnerCrefToOuterOutputCrefs = omc_BaseHashTable_addUnique(threadData, tmpMeta1, _outInnerCrefToOuterOutputCrefs);
  _return: OMC_LABEL_UNUSED
  return _outInnerCrefToOuterOutputCrefs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_mergingRhs(threadData_t *threadData, modelica_metatype _inOuterCrefs, modelica_metatype _inInnerCref, modelica_metatype _ty)
{
  modelica_metatype _res = NULL;
  modelica_metatype _callAttributes = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  tmpMeta1 = mmc_mk_box8(3, &DAE_CallAttributes_CALL__ATTR__desc, _ty, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), _OMC_LIT22, _OMC_LIT23);
  _callAttributes = tmpMeta1;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _inOuterCrefs;
    {
      modelica_metatype _outerCref = NULL;
      modelica_metatype _crefState = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _outerCrefExp = NULL;
      modelica_metatype _innerCrefExp = NULL;
      modelica_metatype _crefStateExp = NULL;
      modelica_metatype _expCond = NULL;
      modelica_metatype _expElse = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _outerCref has no default value.
      // _crefState has no default value.
      // _rest has no default value.
      // _outerCrefExp has no default value.
      // _innerCrefExp has no default value.
      // _crefStateExp has no default value.
      // _expCond has no default value.
      // _expElse has no default value.
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
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp5_1)) goto tmp4_end;
          tmpMeta7 = MMC_CAR(tmp5_1);
          tmpMeta8 = MMC_CDR(tmp5_1);
          if (!listEmpty(tmpMeta8)) goto tmp4_end;
          _outerCref = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _outerCref, _ty);
          _outerCrefExp = tmpMeta9;

          tmpMeta10 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _inInnerCref, _ty);
          _innerCrefExp = tmpMeta10;

          _crefState = omc_ComponentReference_crefStripLastIdent(threadData, _outerCref);

          tmpMeta11 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _crefState, _ty);
          _crefStateExp = tmpMeta11;

          tmpMeta12 = mmc_mk_cons(_crefStateExp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta13 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT25, tmpMeta12, _callAttributes);
          _expCond = tmpMeta13;

          tmpMeta14 = mmc_mk_cons(_innerCrefExp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta15 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT21, tmpMeta14, _callAttributes);
          _expElse = tmpMeta15;
          tmpMeta16 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _expCond, _outerCrefExp, _expElse);
          tmpMeta2 = tmpMeta16;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp5_1)) goto tmp4_end;
          tmpMeta17 = MMC_CAR(tmp5_1);
          tmpMeta18 = MMC_CDR(tmp5_1);
          _outerCref = tmpMeta17;
          _rest = tmpMeta18;
          /* Pattern matching succeeded */
          tmpMeta19 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _outerCref, _ty);
          _outerCrefExp = tmpMeta19;

          _crefState = omc_ComponentReference_crefStripLastIdent(threadData, _outerCref);

          tmpMeta20 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _crefState, _ty);
          _crefStateExp = tmpMeta20;

          tmpMeta21 = mmc_mk_cons(_crefStateExp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta22 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT25, tmpMeta21, _callAttributes);
          _expCond = tmpMeta22;

          _expElse = omc_InstStateMachineUtil_mergingRhs(threadData, _rest, _inInnerCref, _ty);
          tmpMeta23 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _expCond, _outerCrefExp, _expElse);
          tmpMeta2 = tmpMeta23;
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
  _res = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_freshMergingEqn(threadData_t *threadData, modelica_metatype _inInnerCrefToOuterOutputCrefs)
{
  modelica_metatype _outEqn = NULL;
  modelica_metatype _innerCref = NULL;
  modelica_metatype _outerCrefs = NULL;
  modelica_metatype _outerCrefsStripped = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqn has no default value.
  // _innerCref has no default value.
  // _outerCrefs has no default value.
  // _outerCrefsStripped has no default value.
  // _ty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inInnerCrefToOuterOutputCrefs;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _innerCref = tmpMeta2;
  _outerCrefs = tmpMeta3;

  _ty = omc_ComponentReference_crefLastType(threadData, _innerCref);

  _outerCrefsStripped = omc_List_map(threadData, _outerCrefs, boxvar_ComponentReference_crefStripLastIdent);

  tmpMeta4 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _innerCref, _ty);
  tmpMeta5 = mmc_mk_box4(6, &DAE_Element_EQUATION__desc, tmpMeta4, omc_InstStateMachineUtil_mergingRhs(threadData, _outerCrefs, _innerCref, _ty), _OMC_LIT30);
  _outEqn = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outEqn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_traversingCountDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCref_HitCount, modelica_metatype *out_outCref_HitCount)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outCref_HitCount = NULL;
  modelica_metatype _cref = NULL;
  modelica_integer _hitCount;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outCref_HitCount has no default value.
  // _cref has no default value.
  // _hitCount has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inCref_HitCount;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _cref = tmpMeta2;
  _hitCount = tmp4  /* pattern as ty=Integer */;

  
  
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _inExp;
    {
      modelica_metatype _componentRef = NULL;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _componentRef has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,13,3) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,1) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (3 != MMC_STRLEN(tmpMeta11) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta11)) != 0) goto tmp7_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
          if (listEmpty(tmpMeta12)) goto tmp7_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,6,2) == 0) goto tmp7_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          if (!listEmpty(tmpMeta14)) goto tmp7_end;
          
          _componentRef = tmpMeta15;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_ComponentReference_crefEqual(threadData, _componentRef, _cref)) goto tmp7_end;
          tmpMeta16 = mmc_mk_box2(0, _cref, mmc_mk_integer(((modelica_integer) 1) + _hitCount));
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = tmpMeta16;
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inCref_HitCount;
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
  _outExp = tmpMeta[0+0];
  _outCref_HitCount = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outCref_HitCount) { *out_outCref_HitCount = _outCref_HitCount; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_mergingRhs__der(threadData_t *threadData, modelica_metatype _inOuterCrefs, modelica_metatype _inInnerCref, modelica_metatype _ty)
{
  modelica_metatype _res = NULL;
  modelica_metatype _callAttributes = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  tmpMeta1 = mmc_mk_box8(3, &DAE_CallAttributes_CALL__ATTR__desc, _ty, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), _OMC_LIT22, _OMC_LIT23);
  _callAttributes = tmpMeta1;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _inOuterCrefs;
    {
      modelica_metatype _outerCref = NULL;
      modelica_metatype _crefState = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _outerCrefExp = NULL;
      modelica_metatype _crefStateExp = NULL;
      modelica_metatype _expCond = NULL;
      modelica_metatype _expElse = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _outerCref has no default value.
      // _crefState has no default value.
      // _rest has no default value.
      // _outerCrefExp has no default value.
      // _crefStateExp has no default value.
      // _expCond has no default value.
      // _expElse has no default value.
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
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp5_1)) goto tmp4_end;
          tmpMeta7 = MMC_CAR(tmp5_1);
          tmpMeta8 = MMC_CDR(tmp5_1);
          if (!listEmpty(tmpMeta8)) goto tmp4_end;
          _outerCref = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _outerCref, _ty);
          _outerCrefExp = tmpMeta9;

          _crefState = omc_ComponentReference_crefStripLastIdent(threadData, _outerCref);

          tmpMeta10 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _crefState, _ty);
          _crefStateExp = tmpMeta10;

          tmpMeta11 = mmc_mk_cons(_crefStateExp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta12 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT25, tmpMeta11, _callAttributes);
          _expCond = tmpMeta12;

          _expElse = _OMC_LIT32;
          tmpMeta13 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _expCond, _outerCrefExp, _expElse);
          tmpMeta2 = tmpMeta13;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp5_1)) goto tmp4_end;
          tmpMeta14 = MMC_CAR(tmp5_1);
          tmpMeta15 = MMC_CDR(tmp5_1);
          _outerCref = tmpMeta14;
          _rest = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _outerCref, _ty);
          _outerCrefExp = tmpMeta16;

          _crefState = omc_ComponentReference_crefStripLastIdent(threadData, _outerCref);

          tmpMeta17 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _crefState, _ty);
          _crefStateExp = tmpMeta17;

          tmpMeta18 = mmc_mk_cons(_crefStateExp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta19 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT25, tmpMeta18, _callAttributes);
          _expCond = tmpMeta19;

          _expElse = omc_InstStateMachineUtil_mergingRhs__der(threadData, _rest, _inInnerCref, _ty);
          tmpMeta20 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _expCond, _outerCrefExp, _expElse);
          tmpMeta2 = tmpMeta20;
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
  _res = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _res;
}

static modelica_metatype closure3_ComponentReference_appendStringLastIdent(threadData_t *thData, modelica_metatype closure, modelica_metatype inCref)
{
  modelica_string inString = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_ComponentReference_appendStringLastIdent(thData, inString, inCref);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_freshMergingEqn__der(threadData_t *threadData, modelica_metatype _inInnerCrefToOuterOutputCrefs)
{
  modelica_metatype _outEqn = NULL;
  modelica_metatype _innerCref = NULL;
  modelica_metatype _outerCrefs = NULL;
  modelica_metatype _outerCrefsStripped = NULL;
  modelica_metatype _outerCrefDers = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _exp = NULL;
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
  // _outEqn has no default value.
  // _innerCref has no default value.
  // _outerCrefs has no default value.
  // _outerCrefsStripped has no default value.
  // _outerCrefDers has no default value.
  // _ty has no default value.
  // _exp has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inInnerCrefToOuterOutputCrefs;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _innerCref = tmpMeta2;
  _outerCrefs = tmpMeta3;

  _ty = omc_ComponentReference_crefLastType(threadData, _innerCref);

  _outerCrefsStripped = omc_List_map(threadData, _outerCrefs, boxvar_ComponentReference_crefStripLastIdent);

  tmpMeta4 = mmc_mk_box1(0, _OMC_LIT33);
  _outerCrefDers = omc_List_map(threadData, _outerCrefs, (modelica_fnptr) mmc_mk_box2(0,closure3_ComponentReference_appendStringLastIdent,tmpMeta4));

  tmpMeta6 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _innerCref, _ty);
  tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta7 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT34, tmpMeta5, _OMC_LIT36);
  _exp = tmpMeta7;

  tmpMeta8 = mmc_mk_box4(6, &DAE_Element_EQUATION__desc, _exp, omc_InstStateMachineUtil_mergingRhs__der(threadData, _outerCrefDers, _innerCref, _ty), _OMC_LIT30);
  _outEqn = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _outEqn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_freshAliasEqn__der(threadData_t *threadData, modelica_metatype _inInnerCrefToOuterOutputCrefs)
{
  modelica_metatype _outEqns = NULL;
  modelica_metatype _innerCref = NULL;
  modelica_metatype _outerCrefs = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqns has no default value.
  // _innerCref has no default value.
  // _outerCrefs has no default value.
  // _ty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inInnerCrefToOuterOutputCrefs;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _innerCref = tmpMeta2;
  _outerCrefs = tmpMeta3;

  _ty = omc_ComponentReference_crefLastType(threadData, _innerCref);

  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp5;
    modelica_metatype tmpMeta6;
    modelica_metatype tmpMeta7;
    modelica_metatype tmpMeta8;
    modelica_metatype tmpMeta9;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp10;
    modelica_metatype _outerCref_loopVar = 0;
    modelica_metatype _outerCref;
    _outerCref_loopVar = _outerCrefs;
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta6; /* defaultValue */
    tmp5 = &__omcQ_24tmpVar7;
    while(1) {
      tmp10 = 1;
      if (!listEmpty(_outerCref_loopVar)) {
        _outerCref = MMC_CAR(_outerCref_loopVar);
        _outerCref_loopVar = MMC_CDR(_outerCref_loopVar);
        tmp10--;
      }
      if (tmp10 == 0) {
        tmpMeta7 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _innerCref, _ty);
        tmpMeta8 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _outerCref, _ty);
        tmpMeta9 = mmc_mk_box4(6, &DAE_Element_EQUATION__desc, tmpMeta7, tmpMeta8, _OMC_LIT30);
        __omcQ_24tmpVar6 = tmpMeta9;
        *tmp5 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp5 = &MMC_CDR(*tmp5);
      } else if (tmp10 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp5 = mmc_mk_nil();
    tmpMeta4 = __omcQ_24tmpVar7;
  }
  _outEqns = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _outEqns;
}

static modelica_metatype closure4_BaseHashSet_has(threadData_t *thData, modelica_metatype closure, modelica_metatype key)
{
  modelica_metatype hashSet = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_BaseHashSet_has(thData, key, hashSet);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InstStateMachineUtil_mergeVariableDefinitions(threadData_t *threadData, modelica_metatype _inFlatSM, modelica_metatype _inIH, modelica_metatype _inStartElementLst)
{
  modelica_metatype _outElementLst = NULL;
  modelica_metatype _outerOutputCrefToSMCompCref = NULL;
  modelica_metatype _outerOutputCrefToInnerCref = NULL;
  modelica_metatype _innerCrefToOuterOutputCrefs = NULL;
  modelica_metatype _hashEntries_outerOutputCrefToInnerCref = NULL;
  modelica_metatype _innerCrefToOuterOutputCrefs_der = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _innerCrefToOuterOutputCrefs_nonDer = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _uniqueHashValues = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype _derCrefsAcc = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _outerOutputCrefs = NULL;
  modelica_metatype _derCrefsSet = NULL;
  modelica_metatype _emptyTree = NULL;
  modelica_metatype _dAElistNew = NULL;
  modelica_metatype _mergeEqns = NULL;
  modelica_metatype _mergeEqns_der = NULL;
  modelica_metatype _aliasEqns_der = NULL;
  modelica_integer _nOfHits;
  modelica_boolean _hasDer;
  modelica_string _ident = NULL;
  modelica_metatype _dAElist = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElementLst has no default value.
  // _outerOutputCrefToSMCompCref has no default value.
  // _outerOutputCrefToInnerCref has no default value.
  // _innerCrefToOuterOutputCrefs has no default value.
  // _hashEntries_outerOutputCrefToInnerCref has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _innerCrefToOuterOutputCrefs_der = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _innerCrefToOuterOutputCrefs_nonDer = tmpMeta2;
  // _uniqueHashValues has no default value.
  // _crefs has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _derCrefsAcc = tmpMeta3;
  // _outerOutputCrefs has no default value.
  // _derCrefsSet has no default value.
  // _emptyTree has no default value.
  // _dAElistNew has no default value.
  // _mergeEqns has no default value.
  // _mergeEqns_der has no default value.
  // _aliasEqns_der has no default value.
  // _nOfHits has no default value.
  // _hasDer has no default value.
  // _ident has no default value.
  // _dAElist has no default value.
  /* Pattern-matching assignment */
  tmpMeta4 = _inFlatSM;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,29,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  _ident = tmpMeta5;
  _dAElist = tmpMeta6;

  _outerOutputCrefToSMCompCref = omc_List_fold(threadData, _dAElist, boxvar_InstStateMachineUtil_collectOuterOutputs, omc_HashTableCG_emptyHashTable(threadData));

  _outerOutputCrefToInnerCref = omc_List_fold1(threadData, omc_BaseHashTable_hashTableKeyList(threadData, _outerOutputCrefToSMCompCref), boxvar_InstStateMachineUtil_matchOuterWithInner, _inIH, omc_HashTableCG_emptyHashTable(threadData));

  _hashEntries_outerOutputCrefToInnerCref = omc_BaseHashTable_hashTableList(threadData, _outerOutputCrefToInnerCref);

  _uniqueHashValues = omc_List_unique(threadData, omc_BaseHashTable_hashTableValueList(threadData, _outerOutputCrefToInnerCref));

  _innerCrefToOuterOutputCrefs = omc_List_fold1(threadData, _uniqueHashValues, boxvar_InstStateMachineUtil_collectCorrespondingKeys, _hashEntries_outerOutputCrefToInnerCref, omc_HashTable3_emptyHashTable(threadData));

  _emptyTree = _OMC_LIT37;

  /* Pattern-matching tuple assignment */
  tmpMeta7 = mmc_mk_box2(3, &DAE_DAElist_DAE__desc, _dAElist);
  tmpMeta8 = omc_DAEUtil_traverseDAE(threadData, tmpMeta7, _emptyTree, boxvar_InstStateMachineUtil_traverserHelperSubsOuterByInnerExp, _outerOutputCrefToInnerCref, NULL, NULL);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
  _dAElist = tmpMeta9;

  if(omc_Flags_getConfigBool(threadData, _OMC_LIT43))
  {
    _crefs = omc_BaseHashTable_hashTableKeyList(threadData, _outerOutputCrefToSMCompCref);

    {
      modelica_metatype _cref;
      for (tmpMeta10 = _crefs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
      {
        _cref = MMC_CAR(tmpMeta10);
        _nOfHits = ((modelica_integer) 0);

        /* Pattern-matching tuple assignment, wild first pattern */
        tmpMeta15 = mmc_mk_box2(3, &DAE_DAElist_DAE__desc, _dAElist);
        tmpMeta16 = mmc_mk_box2(0, _cref, mmc_mk_integer(((modelica_integer) 0)));
        tmpMeta17 = mmc_mk_box2(0, boxvar_InstStateMachineUtil_traversingCountDer, tmpMeta16);
        omc_DAEUtil_traverseDAE(threadData, tmpMeta15, _emptyTree, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta17, NULL, &tmpMeta11);
        tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
        tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
        tmp14 = mmc_unbox_integer(tmpMeta13);
        _nOfHits = tmp14  /* pattern as ty=Integer */;

        if((_nOfHits > ((modelica_integer) 0)))
        {
          tmpMeta18 = mmc_mk_cons(_cref, _derCrefsAcc);
          _derCrefsAcc = tmpMeta18;
        }
      }
    }

    _derCrefsSet = omc_HashSet_emptyHashSetSized(threadData, listLength(_derCrefsAcc));

    _derCrefsSet = omc_List_fold(threadData, _derCrefsAcc, boxvar_BaseHashSet_add, _derCrefsSet);

    {
      modelica_metatype _hashEntry;
      for (tmpMeta20 = omc_BaseHashTable_hashTableList(threadData, _innerCrefToOuterOutputCrefs); !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
      {
        _hashEntry = MMC_CAR(tmpMeta20);
        /* Pattern-matching assignment */
        tmpMeta21 = _hashEntry;
        tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
        _outerOutputCrefs = tmpMeta22;

        tmpMeta23 = mmc_mk_box1(0, _derCrefsSet);
        _hasDer = omc_List_any(threadData, _outerOutputCrefs, (modelica_fnptr) mmc_mk_box2(0,closure4_BaseHashSet_has,tmpMeta23));

        if(_hasDer)
        {
          tmpMeta24 = mmc_mk_cons(_hashEntry, _innerCrefToOuterOutputCrefs_der);
          _innerCrefToOuterOutputCrefs_der = tmpMeta24;
        }
        else
        {
          tmpMeta25 = mmc_mk_cons(_hashEntry, _innerCrefToOuterOutputCrefs_nonDer);
          _innerCrefToOuterOutputCrefs_nonDer = tmpMeta25;
        }
      }
    }

    _aliasEqns_der = omc_List_flatten(threadData, omc_List_map(threadData, _innerCrefToOuterOutputCrefs_der, boxvar_InstStateMachineUtil_freshAliasEqn__der));

    _mergeEqns_der = listAppend(omc_List_map(threadData, _innerCrefToOuterOutputCrefs_der, boxvar_InstStateMachineUtil_freshMergingEqn__der), _aliasEqns_der);

    _mergeEqns = listAppend(omc_List_map(threadData, _innerCrefToOuterOutputCrefs_nonDer, boxvar_InstStateMachineUtil_freshMergingEqn), _mergeEqns_der);
  }
  else
  {
    _mergeEqns = omc_List_map(threadData, omc_BaseHashTable_hashTableList(threadData, _innerCrefToOuterOutputCrefs), boxvar_InstStateMachineUtil_freshMergingEqn);
  }

  tmpMeta28 = mmc_mk_box3(32, &DAE_Element_FLAT__SM__desc, _ident, _dAElist);
  tmpMeta27 = mmc_mk_cons(tmpMeta28, _mergeEqns);
  _outElementLst = listAppend(_inStartElementLst, tmpMeta27);
  _return: OMC_LABEL_UNUSED
  return _outElementLst;
}

DLLDirection
modelica_metatype omc_InstStateMachineUtil_wrapSMCompsInFlatSMs(threadData_t *threadData, modelica_metatype _inIH, modelica_metatype _inDae1, modelica_metatype _inDae2, modelica_metatype _smNodeToFlatSMGroup, modelica_metatype _smInitialCrefs, modelica_metatype *out_outDae2)
{
  modelica_metatype _outDae1 = NULL;
  modelica_metatype _outDae2 = NULL;
  modelica_metatype _elementLst1 = NULL;
  modelica_metatype _elementLst2 = NULL;
  modelica_metatype _smCompsLst = NULL;
  modelica_metatype _otherLst1 = NULL;
  modelica_metatype _otherLst2 = NULL;
  modelica_metatype _smTransitionsLst = NULL;
  modelica_metatype _flatSmLst = NULL;
  modelica_metatype _flatSMsAndMergingEqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDae1 has no default value.
  // _outDae2 has no default value.
  // _elementLst1 has no default value.
  // _elementLst2 has no default value.
  // _smCompsLst has no default value.
  // _otherLst1 has no default value.
  // _otherLst2 has no default value.
  // _smTransitionsLst has no default value.
  // _flatSmLst has no default value.
  // _flatSMsAndMergingEqns has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inDae1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _elementLst1 = tmpMeta2;

  _smCompsLst = omc_List_extractOnTrue(threadData, _elementLst1, boxvar_InstStateMachineUtil_isSMComp ,&_otherLst1);

  /* Pattern-matching assignment */
  tmpMeta3 = _inDae2;
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  _elementLst2 = tmpMeta4;

  _smTransitionsLst = omc_List_extractOnTrue(threadData, _elementLst2, boxvar_InstStateMachineUtil_isSMStatement2 ,&_otherLst2);

  _flatSmLst = omc_List_map2(threadData, _smInitialCrefs, boxvar_InstStateMachineUtil_createFlatSM, listAppend(_smCompsLst, _smTransitionsLst), _smNodeToFlatSMGroup);

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _flatSMsAndMergingEqns = omc_List_fold1(threadData, _flatSmLst, boxvar_InstStateMachineUtil_mergeVariableDefinitions, _inIH, tmpMeta5);

  tmpMeta6 = mmc_mk_box2(3, &DAE_DAElist_DAE__desc, listAppend(_flatSMsAndMergingEqns, _otherLst1));
  _outDae1 = tmpMeta6;

  tmpMeta7 = mmc_mk_box2(3, &DAE_DAElist_DAE__desc, _otherLst2);
  _outDae2 = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  if (out_outDae2) { *out_outDae2 = _outDae2; }
  return _outDae1;
}

DLLDirection
modelica_metatype omc_InstStateMachineUtil_createSMNodeToFlatSMGroupTable(threadData_t *threadData, modelica_metatype _inDae)
{
  modelica_metatype _smNodeToFlatSMGroup = NULL;
  modelica_metatype _elementLst = NULL;
  modelica_metatype _smNodeTable = NULL;
  modelica_integer _nStates;
  modelica_metatype _iTable = NULL;
  modelica_metatype _transClosure = NULL;
  modelica_metatype _initialStates = NULL;
  modelica_metatype _flatSMGroup = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _smNodeToFlatSMGroup has no default value.
  // _elementLst has no default value.
  // _smNodeTable has no default value.
  // _nStates has no default value.
  // _iTable has no default value.
  // _transClosure has no default value.
  // _initialStates has no default value.
  // _flatSMGroup has no default value.
  if((omc_Flags_getConfigEnum(threadData, _OMC_LIT94) < ((modelica_integer) 33)))
  {
    _smNodeToFlatSMGroup = omc_HashTableCG_emptyHashTableSized(threadData, ((modelica_integer) 1));

    goto _return;
  }

  /* Pattern-matching assignment */
  tmpMeta1 = _inDae;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _elementLst = tmpMeta2;

  _smNodeTable = omc_InstStateMachineUtil_getSMNodeTable(threadData, _elementLst);

  _nStates = omc_BaseHashTable_hashTableCurrentSize(threadData, _smNodeTable);

  if((_nStates > ((modelica_integer) 0)))
  {
    _smNodeToFlatSMGroup = omc_HashTableCG_emptyHashTable(threadData);

    _iTable = omc_InstStateMachineUtil_createAdjacencyTable(threadData, _smNodeTable, _nStates);

    _transClosure = omc_InstStateMachineUtil_transitiveClosure(threadData, _iTable, _nStates);

    _initialStates = omc_InstStateMachineUtil_extractInitialStates(threadData, _smNodeTable);

    _flatSMGroup = omc_InstStateMachineUtil_extractFlatSMGroup(threadData, _initialStates, _transClosure, _nStates);

    _smNodeToFlatSMGroup = omc_List_fold(threadData, _flatSMGroup, boxvar_InstStateMachineUtil_relateNodesToGroup, _smNodeToFlatSMGroup);
  }
  else
  {
    _smNodeToFlatSMGroup = omc_HashTableCG_emptyHashTableSized(threadData, ((modelica_integer) 1));
  }
  _return: OMC_LABEL_UNUSED
  return _smNodeToFlatSMGroup;
}

