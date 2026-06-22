#include "omc_simulation_settings.h"
#include "ReduceDAE.h"
#define _OMC_LIT0_data "_1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,2,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "_2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,10) {&BackendDAE_VarKind_PARAM__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,5) {&DAE_VarDirection_BIDIR__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,5) {&DAE_VarParallelism_NON__PARALLEL__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT6,1.0);
#define _OMC_LIT6 MMC_REFREALLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,1) {_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,0,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10,0.0);
#define _OMC_LIT10 MMC_REFREALLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT11,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT12,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,16,3) {&DAE_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,1) {_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,6) {&DAE_ConnectorType_NON__CONNECTOR__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,6) {&DAE_VarInnerOuter_NOT__INNER__OUTER__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT10}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,1) {_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "label"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,5,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,3) {&SimCodeVar_AliasVariable_NOALIAS__desc,}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,6) {&SimCodeVar_Causality_LOCAL__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,1) {_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "generate label  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,16,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data " for term "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,10,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,1,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "backendReduceDAE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,16,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Prints all Reduce DAE debug information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,40,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(161)),_OMC_LIT27,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "Add label to binary exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,24,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Add label to unary exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,23,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Add label to if exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,20,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Add label to max exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,21,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,3,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Add label to min exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,21,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,3,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "Add label to abs exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,21,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "Add label to sqrt exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,22,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "Add label to sin exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,21,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "Add label to cos exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,21,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "Add label to tan exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,21,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "Add label to asin exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,22,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "Add label to acos exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,22,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "Add label to atan exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,22,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "Add label to exp exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,21,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "Add label to div exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,21,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "div"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,3,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Add label to integer variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,30,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Add label to real variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,27,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "abs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,3,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "sqrt"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,4,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "sin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,3,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "cos"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,3,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "tan"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,3,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "asin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,4,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "acos"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,4,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "atan"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,4,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "exp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,3,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "linVar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,6,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "reduceTerms"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,11,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "Turns on reducing terms for reduction algorithms."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,49,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(33)),_OMC_LIT64,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT65,_OMC_LIT66,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "Add label to pow exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,21,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT55}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT56}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT57}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT58}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT59}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT60}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT61}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "Add label to log exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,21,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "log"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,3,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT78}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT54}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "Add label to add exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,21,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "disableExtraLabeling"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,20,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,1,3) {&Flags_FlagVisibility_INTERNAL__desc,}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "Disable adding extra label into the whole expression with more than one term and +,- operations."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,96,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(111)),_OMC_LIT82,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT83,_OMC_LIT66,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "Add label to sub exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,21,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "Add label to mul exp "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,21,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "Not Implemented: Add label to relation "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,39,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "Add label to if exp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,19,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "add no label to pre arguments\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,30,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "add no label to edge arguments\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,31,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "add no label to change arguments\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,33,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "add no label to sample arguments\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,33,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "add no label for no event arguments\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,36,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT95,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT53}};
#define _OMC_LIT95 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "Add no label to other call function "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,36,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "Add no label to const 0.0\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,26,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "Add label to real const variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,33,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "Add no label to const 0\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,24,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "Add label to integer const variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,36,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "Add no label to string const variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,38,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "Add no label to boolean const variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,39,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "Add no label to string variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,32,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "Add no label to boolean variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,33,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "Add label to variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,22,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "Add label to unknown expression "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,32,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "pre"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,3,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "edge"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,4,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "change"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,6,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "sample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,6,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "noEvent"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,7,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "reductionMethod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,15,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "deletion"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,8,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT115,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT114}};
#define _OMC_LIT115 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "substitution"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,12,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "linearization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,13,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,2,1) {_OMC_LIT117,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT119,2,1) {_OMC_LIT116,_OMC_LIT118}};
#define _OMC_LIT119 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT119)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT120,2,1) {_OMC_LIT114,_OMC_LIT119}};
#define _OMC_LIT120 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT120)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT121,2,3) {&Flags_ValidOptions_STRING__OPTION__desc,_OMC_LIT120}};
#define _OMC_LIT121 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT121)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT122,1,1) {_OMC_LIT121}};
#define _OMC_LIT122 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "Sets the reduction method to be used."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,37,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT124,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(34)),_OMC_LIT113,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT65,_OMC_LIT115,_OMC_LIT122,_OMC_LIT123}};
#define _OMC_LIT124 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "---Replace empty algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,27,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "---Replace assignment algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,32,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "---Replace if algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,24,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "---Replace for algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,25,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "---Replace while algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,27,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "---Replace when algorithm without else statement\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,49,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "---Replace when algorithm with else statement\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,46,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "---Replace other algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,27,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "---Replace residuals\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,21,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "---Replace simple assignments\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,30,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "---Replace algorithms\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,22,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "---Replace linear equation systems\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,35,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "---Replace non-linear equation systems\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,39,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "---Replace mixed equation systems\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,34,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "---Replace when equations without else statement\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,49,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "---Replace when equations with else statement\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,46,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "---Replace unknown equations\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,29,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "time"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,4,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT143,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT142,_OMC_LIT2,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT143 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "Add replacement for time\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,25,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "Add replacement for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,20,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data " by "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,4,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT147,2,8) {&DAE_Operator_UMINUS__desc,_OMC_LIT2}};
#define _OMC_LIT147 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data " by -"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,5,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "Add no replacement\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,19,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,1,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,1,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
#include "util/modelica.h"

#include "ReduceDAE_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_createBackendLabelVars2(threadData_t *threadData, modelica_metatype _inLabels, modelica_integer _inIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_createBackendLabelVars2(threadData_t *threadData, modelica_metatype _inLabels, modelica_metatype _inIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_createBackendLabelVars2,2,0) {(void*) boxptr_ReduceDAE_createBackendLabelVars2,0}};
#define boxvar_ReduceDAE_createBackendLabelVars2 MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_createBackendLabelVars2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_StringDelimit2Int(threadData_t *threadData, modelica_string _inString, modelica_string _inDelim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_StringDelimit2Int,2,0) {(void*) boxptr_ReduceDAE_StringDelimit2Int,0}};
#define boxvar_ReduceDAE_StringDelimit2Int MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_StringDelimit2Int)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_makeReduceList(threadData_t *threadData, modelica_metatype _expLst, modelica_metatype _inList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_makeReduceList,2,0) {(void*) boxptr_ReduceDAE_makeReduceList,0}};
#define boxvar_ReduceDAE_makeReduceList MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_makeReduceList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_createLabelVar(threadData_t *threadData, modelica_metatype _inVariables, modelica_integer _inInteger, modelica_integer _inInteger2, modelica_string *out_outString);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_createLabelVar(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inInteger, modelica_metatype _inInteger2, modelica_metatype *out_outString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_createLabelVar,2,0) {(void*) boxptr_ReduceDAE_createLabelVar,0}};
#define boxvar_ReduceDAE_createLabelVar MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_createLabelVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_multiply(threadData_t *threadData, modelica_metatype _inExp, modelica_string _inString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_multiply,2,0) {(void*) boxptr_ReduceDAE_multiply,0}};
#define boxvar_ReduceDAE_multiply MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_multiply)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_substituteExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVarRepl, modelica_boolean *out_replPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_substituteExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVarRepl, modelica_metatype *out_replPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_substituteExp,2,0) {(void*) boxptr_ReduceDAE_substituteExp,0}};
#define boxvar_ReduceDAE_substituteExp MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_substituteExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToExpForSubstitution(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList, modelica_boolean *out_substitute);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_addLabelToExpForSubstitution(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList, modelica_metatype *out_substitute);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToExpForSubstitution,2,0) {(void*) boxptr_ReduceDAE_addLabelToExpForSubstitution,0}};
#define boxvar_ReduceDAE_addLabelToExpForSubstitution MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToExpForSubstitution)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_linearizeExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _source, modelica_metatype _inVarLst, modelica_metatype _inVarRepl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_linearizeExp,2,0) {(void*) boxptr_ReduceDAE_linearizeExp,0}};
#define boxvar_ReduceDAE_linearizeExp MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_linearizeExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addTwoLabels(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_boolean _label, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_addTwoLabels(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _label, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_addTwoLabels,2,0) {(void*) boxptr_ReduceDAE_addTwoLabels,0}};
#define boxvar_ReduceDAE_addTwoLabels MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_addTwoLabels)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToExpForLinearization(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToExpForLinearization,2,0) {(void*) boxptr_ReduceDAE_addLabelToExpForLinearization,0}};
#define boxvar_ReduceDAE_addLabelToExpForLinearization MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToExpForLinearization)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addOneLabel(threadData_t *threadData, modelica_metatype _inExp1, modelica_boolean _add, modelica_metatype _inIndex, modelica_metatype _inVarLst, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_addOneLabel(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _add, modelica_metatype _inIndex, modelica_metatype _inVarLst, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_addOneLabel,2,0) {(void*) boxptr_ReduceDAE_addOneLabel,0}};
#define boxvar_ReduceDAE_addOneLabel MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_addOneLabel)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToExpForDeletion(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIntdex, modelica_boolean _add, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIntdex, modelica_metatype *out_outStringList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_addLabelToExpForDeletion(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIntdex, modelica_metatype _add, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIntdex, modelica_metatype *out_outStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToExpForDeletion,2,0) {(void*) boxptr_ReduceDAE_addLabelToExpForDeletion,0}};
#define boxvar_ReduceDAE_addLabelToExpForDeletion MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToExpForDeletion)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIntdex, modelica_boolean _add, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIntdex, modelica_metatype *out_outStringList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_addLabelToExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIntdex, modelica_metatype _add, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIntdex, modelica_metatype *out_outStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToExp,2,0) {(void*) boxptr_ReduceDAE_addLabelToExp,0}};
#define boxvar_ReduceDAE_addLabelToExp MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToLinearEquationSystems(threadData_t *threadData, modelica_metatype _inLinear, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToLinearEquationSystems,2,0) {(void*) boxptr_ReduceDAE_addLabelToLinearEquationSystems,0}};
#define boxvar_ReduceDAE_addLabelToLinearEquationSystems MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToLinearEquationSystems)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToAlgorithms(threadData_t *threadData, modelica_metatype _inStatements, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToAlgorithms,2,0) {(void*) boxptr_ReduceDAE_addLabelToAlgorithms,0}};
#define boxvar_ReduceDAE_addLabelToAlgorithms MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToAlgorithms)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToEquations(threadData_t *threadData, modelica_metatype _inEquationLst1, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToEquations,2,0) {(void*) boxptr_ReduceDAE_addLabelToEquations,0}};
#define boxvar_ReduceDAE_addLabelToEquations MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_addLabelToEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_meanValueReplacements2(threadData_t *threadData, modelica_metatype _inVarRepl, modelica_metatype _inVarList, modelica_metatype _inValuesList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_meanValueReplacements2,2,0) {(void*) boxptr_ReduceDAE_meanValueReplacements2,0}};
#define boxvar_ReduceDAE_meanValueReplacements2 MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_meanValueReplacements2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_meanValueReplacements(threadData_t *threadData, modelica_metatype _inVarLst, modelica_metatype _exp_list);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReduceDAE_meanValueReplacements,2,0) {(void*) boxptr_ReduceDAE_meanValueReplacements,0}};
#define boxvar_ReduceDAE_meanValueReplacements MMC_REFSTRUCTLIT(boxvar_lit_ReduceDAE_meanValueReplacements)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_createBackendLabelVars2(threadData_t *threadData, modelica_metatype _inLabels, modelica_integer _inIndex)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;
    tmp4_1 = _inLabels;
    tmp4_2 = _inIndex;
    {
      modelica_string _name = NULL;
      modelica_string _name1 = NULL;
      modelica_string _name2 = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _var1 = NULL;
      modelica_metatype _var2 = NULL;
      modelica_metatype _list1 = NULL;
      modelica_metatype _list2 = NULL;
      modelica_integer _p;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _name1 has no default value.
      // _name2 has no default value.
      // _rest has no default value.
      // _var1 has no default value.
      // _var2 has no default value.
      // _list1 has no default value.
      // _list2 has no default value.
      // _p has no default value.
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
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          
          _name = tmpMeta7;
          _rest = tmpMeta8;
          _p = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_name,_OMC_LIT0);
          _name1 = tmpMeta9;

          tmpMeta10 = stringAppend(_name,_OMC_LIT1);
          _name2 = tmpMeta10;

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name1, _OMC_LIT2, tmpMeta11);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, tmpMeta12, _OMC_LIT3, _OMC_LIT4, _OMC_LIT5, _OMC_LIT2, mmc_mk_none(), _OMC_LIT8, tmpMeta13, _OMC_LIT13, _OMC_LIT15, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT16, _OMC_LIT17, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          _var1 = tmpMeta14;

          _p = ((modelica_integer) 1) + _p;

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name2, _OMC_LIT2, tmpMeta15);
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta18 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, tmpMeta16, _OMC_LIT3, _OMC_LIT4, _OMC_LIT5, _OMC_LIT2, mmc_mk_none(), _OMC_LIT19, tmpMeta17, _OMC_LIT13, _OMC_LIT15, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT16, _OMC_LIT17, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          _var2 = tmpMeta18;

          tmpMeta19 = mmc_mk_cons(_var1, mmc_mk_cons(_var2, MMC_REFSTRUCTLIT(mmc_nil)));
          _list1 = tmpMeta19;

          _p = ((modelica_integer) 1) + _p;

          _list2 = omc_ReduceDAE_createBackendLabelVars2(threadData, _rest, _p);
          tmpMeta1 = listAppend(_list1, _list2);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_createBackendLabelVars2(threadData_t *threadData, modelica_metatype _inLabels, modelica_metatype _inIndex)
{
  modelica_integer tmp1;
  modelica_metatype _outList = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outList = omc_ReduceDAE_createBackendLabelVars2(threadData, _inLabels, tmp1);
  /* skip box _outList; list<BackendDAE.Var> */
  return _outList;
}

DLLDirection
modelica_metatype omc_ReduceDAE_createBackendLabelVars(threadData_t *threadData, modelica_metatype _modelInfo)
{
  modelica_metatype _labelList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _labelList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _modelInfo;
    {
      modelica_integer _numParams;
      modelica_metatype _labels = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _numParams has no default value.
      // _labels has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 14));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          
          _numParams = tmp8  /* pattern as ty=Integer */;
          _labels = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_ReduceDAE_createBackendLabelVars2(threadData, _labels, _numParams);
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
  _labelList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _labelList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_StringDelimit2Int(threadData_t *threadData, modelica_string _inString, modelica_string _inDelim)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  { /* matchcontinue expression */
    volatile modelica_string tmp4_1;volatile modelica_string tmp4_2;
    tmp4_1 = _inString;
    tmp4_2 = _inDelim;
    {
      modelica_metatype _lst = NULL;
      modelica_string _v = NULL;
      modelica_string _delim = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lst has no default value.
      // _v has no default value.
      // _delim has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          
          _v = tmp4_1;
          _delim = tmp4_2;
          /* Pattern matching succeeded */
          _lst = omc_Util_stringSplitAtChar(threadData, _v, _delim);
          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp9;
            modelica_metatype _s_loopVar = 0;
            modelica_metatype _s;
            _s_loopVar = _lst;
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar1;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_s_loopVar)) {
                _s = MMC_CAR(_s_loopVar);
                _s_loopVar = MMC_CDR(_s_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar0 = mmc_mk_integer(stringInt(_s));
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar1;
          }
          tmpMeta1 = tmpMeta6;
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
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_makeReduceList(threadData_t *threadData, modelica_metatype _expLst, modelica_metatype _inList)
{
  modelica_metatype _outList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _expLst;
    tmp4_2 = _inList;
    {
      modelica_metatype _expLstRest = NULL;
      modelica_integer _v;
      modelica_integer _i;
      modelica_metatype _lst = NULL;
      modelica_metatype _lst2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expLstRest has no default value.
      // _v has no default value.
      // _i has no default value.
      // _lst has no default value.
      // _lst2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _lst = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _v = tmp9  /* pattern as ty=Integer */;
          _expLstRest = tmpMeta7;
          _lst = tmp4_2;
          /* Pattern matching succeeded */
          _i = _v;

          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_i), MMC_REFSTRUCTLIT(mmc_nil));
          _lst2 = listAppend(_lst, tmpMeta10);
          /* Tail recursive call */
          _expLst = _expLstRest;
          _inList = _lst2;
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
  _outList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_createLabelVar(threadData_t *threadData, modelica_metatype _inVariables, modelica_integer _inInteger, modelica_integer _inInteger2, modelica_string *out_outString)
{
  modelica_metatype _outVariables = NULL;
  modelica_string _outString = NULL;
  modelica_string tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _outString has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;modelica_integer tmp4_3;
    tmp4_1 = _inVariables;
    tmp4_2 = _inInteger;
    tmp4_3 = _inInteger2;
    {
      modelica_metatype _states = NULL;
      modelica_metatype _derVar = NULL;
      modelica_metatype _alg = NULL;
      modelica_metatype _disAlg = NULL;
      modelica_metatype _intAlg = NULL;
      modelica_metatype _boolAlg = NULL;
      modelica_metatype _inVar = NULL;
      modelica_metatype _outVar = NULL;
      modelica_metatype _algAlias = NULL;
      modelica_metatype _intAlias = NULL;
      modelica_metatype _boolAlias = NULL;
      modelica_metatype _param = NULL;
      modelica_metatype _intParam = NULL;
      modelica_metatype _boolParam = NULL;
      modelica_metatype _stringAlg = NULL;
      modelica_metatype _stringParam = NULL;
      modelica_metatype _stringAlias = NULL;
      modelica_metatype _extObjVar = NULL;
      modelica_metatype _const = NULL;
      modelica_metatype _intConst = NULL;
      modelica_metatype _boolConst = NULL;
      modelica_metatype _stringConst = NULL;
      modelica_metatype _jacobianVar = NULL;
      modelica_metatype _seedVar = NULL;
      modelica_metatype _realOptConst = NULL;
      modelica_metatype _realOptFinalConst = NULL;
      modelica_metatype _sensVar = NULL;
      modelica_metatype _setcVar = NULL;
      modelica_metatype _datareconinputvar = NULL;
      modelica_metatype _setBVar = NULL;
      modelica_metatype _simVar_1 = NULL;
      modelica_metatype _simVar_2 = NULL;
      modelica_metatype _param_1 = NULL;
      modelica_metatype _param_2 = NULL;
      modelica_integer _i;
      modelica_integer _p;
      modelica_string _name = NULL;
      modelica_string _name1 = NULL;
      modelica_string _name2 = NULL;
      modelica_string _indexStr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _states has no default value.
      // _derVar has no default value.
      // _alg has no default value.
      // _disAlg has no default value.
      // _intAlg has no default value.
      // _boolAlg has no default value.
      // _inVar has no default value.
      // _outVar has no default value.
      // _algAlias has no default value.
      // _intAlias has no default value.
      // _boolAlias has no default value.
      // _param has no default value.
      // _intParam has no default value.
      // _boolParam has no default value.
      // _stringAlg has no default value.
      // _stringParam has no default value.
      // _stringAlias has no default value.
      // _extObjVar has no default value.
      // _const has no default value.
      // _intConst has no default value.
      // _boolConst has no default value.
      // _stringConst has no default value.
      // _jacobianVar has no default value.
      // _seedVar has no default value.
      // _realOptConst has no default value.
      // _realOptFinalConst has no default value.
      // _sensVar has no default value.
      // _setcVar has no default value.
      // _datareconinputvar has no default value.
      // _setBVar has no default value.
      // _simVar_1 has no default value.
      // _simVar_2 has no default value.
      // _param_1 has no default value.
      // _param_2 has no default value.
      // _i has no default value.
      // _p has no default value.
      // _name has no default value.
      // _name1 has no default value.
      // _name2 has no default value.
      // _indexStr has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 17));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 18));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 19));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 20));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 21));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 22));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 23));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 24));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 25));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 26));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 27));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 28));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 29));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 30));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 31));
          
          _states = tmpMeta6;
          _derVar = tmpMeta7;
          _alg = tmpMeta8;
          _disAlg = tmpMeta9;
          _intAlg = tmpMeta10;
          _boolAlg = tmpMeta11;
          _inVar = tmpMeta12;
          _outVar = tmpMeta13;
          _algAlias = tmpMeta14;
          _intAlias = tmpMeta15;
          _boolAlias = tmpMeta16;
          _param = tmpMeta17;
          _intParam = tmpMeta18;
          _boolParam = tmpMeta19;
          _stringAlg = tmpMeta20;
          _stringParam = tmpMeta21;
          _stringAlias = tmpMeta22;
          _extObjVar = tmpMeta23;
          _const = tmpMeta24;
          _intConst = tmpMeta25;
          _boolConst = tmpMeta26;
          _stringConst = tmpMeta27;
          _jacobianVar = tmpMeta28;
          _seedVar = tmpMeta29;
          _realOptConst = tmpMeta30;
          _realOptFinalConst = tmpMeta31;
          _sensVar = tmpMeta32;
          _setcVar = tmpMeta33;
          _datareconinputvar = tmpMeta34;
          _setBVar = tmpMeta35;
          _p = tmp4_2;
          _i = tmp4_3;
          /* Pattern matching succeeded */
          _indexStr = intString(_i);

          tmpMeta36 = stringAppend(_OMC_LIT20,_indexStr);
          _name = tmpMeta36;

          tmpMeta37 = stringAppend(_name,_OMC_LIT0);
          _name1 = tmpMeta37;

          tmpMeta38 = stringAppend(_name,_OMC_LIT1);
          _name2 = tmpMeta38;

          tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta40 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name1, _OMC_LIT2, tmpMeta39);
          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta42 = mmc_mk_box(32, 3, &SimCodeVar_SimVar_SIMVAR__desc, tmpMeta40, _OMC_LIT3, _OMC_LIT9, _OMC_LIT9, _OMC_LIT9, mmc_mk_integer(_p), mmc_mk_none(), mmc_mk_none(), _OMC_LIT8, mmc_mk_none(), mmc_mk_boolean(1 /* true */), _OMC_LIT2, mmc_mk_boolean(0 /* false */), mmc_mk_none(), _OMC_LIT21, _OMC_LIT13, _OMC_LIT23, mmc_mk_none(), mmc_mk_none(), tmpMeta41, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_none(), mmc_mk_boolean(0 /* false */), mmc_mk_none(), mmc_mk_boolean(0 /* false */), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_boolean(0 /* false */));
          _simVar_1 = tmpMeta42;

          _param = listReverse(_param);

          tmpMeta43 = mmc_mk_cons(_simVar_1, _param);
          _param_1 = tmpMeta43;

          _p = ((modelica_integer) 1) + _p;

          tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta45 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name2, _OMC_LIT2, tmpMeta44);
          tmpMeta46 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta47 = mmc_mk_box(32, 3, &SimCodeVar_SimVar_SIMVAR__desc, tmpMeta45, _OMC_LIT3, _OMC_LIT9, _OMC_LIT9, _OMC_LIT9, mmc_mk_integer(_p), mmc_mk_none(), mmc_mk_none(), _OMC_LIT19, mmc_mk_none(), mmc_mk_boolean(1 /* true */), _OMC_LIT2, mmc_mk_boolean(0 /* false */), mmc_mk_none(), _OMC_LIT21, _OMC_LIT13, _OMC_LIT23, mmc_mk_none(), mmc_mk_none(), tmpMeta46, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_none(), mmc_mk_boolean(0 /* false */), mmc_mk_none(), mmc_mk_boolean(0 /* false */), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_boolean(0 /* false */));
          _simVar_2 = tmpMeta47;

          tmpMeta48 = mmc_mk_cons(_simVar_2, _param_1);
          _param_2 = tmpMeta48;

          _param_2 = listReverse(_param_2);
          tmpMeta49 = mmc_mk_box(31, 3, &SimCodeVar_SimVars_SIMVARS__desc, _states, _derVar, _alg, _disAlg, _intAlg, _boolAlg, _inVar, _outVar, _algAlias, _intAlias, _boolAlias, _param_2, _intParam, _boolParam, _stringAlg, _stringParam, _stringAlias, _extObjVar, _const, _intConst, _boolConst, _stringConst, _jacobianVar, _seedVar, _realOptConst, _realOptFinalConst, _sensVar, _setcVar, _datareconinputvar, _setBVar);
          tmpMeta[0+0] = tmpMeta49;
          tmp1_c1 = _name;
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
  _outVariables = tmpMeta[0+0];
  _outString = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outString) { *out_outString = _outString; }
  return _outVariables;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_createLabelVar(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inInteger, modelica_metatype _inInteger2, modelica_metatype *out_outString)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outVariables = NULL;
  tmp1 = mmc_unbox_integer(_inInteger);
  tmp2 = mmc_unbox_integer(_inInteger2);
  _outVariables = omc_ReduceDAE_createLabelVar(threadData, _inVariables, tmp1, tmp2, out_outString);
  /* skip box _outVariables; SimCodeVar.SimVars */
  /* skip box _outString; String */
  return _outVariables;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_multiply(threadData_t *threadData, modelica_metatype _inExp, modelica_string _inString)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_string tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inString;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e2 = NULL;
      modelica_string _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e2 has no default value.
      // _name has no default value.
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
          
          _e = tmp4_1;
          _name = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name, _OMC_LIT2, tmpMeta6);
          tmpMeta8 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, tmpMeta7, _OMC_LIT2);
          _e2 = omc_Expression_expMul(threadData, tmpMeta8, _e);

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta9 = stringAppend(_OMC_LIT24,omc_ExpressionBasics_printExpStr(threadData, _e2));
            tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT25);
            tmpMeta11 = stringAppend(tmpMeta10,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta12);
          }
          tmpMeta1 = _e2;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_substituteExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVarRepl, modelica_boolean *out_replPerformed)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _replPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _replPerformed has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inVarRepl;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _repl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _repl has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _e = tmp4_1;
          _repl = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), &tmp1_c1);
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
  _replPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_replPerformed) { *out_replPerformed = _replPerformed; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_substituteExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVarRepl, modelica_metatype *out_replPerformed)
{
  modelica_boolean _replPerformed;
  modelica_metatype _outExp = NULL;
  _outExp = omc_ReduceDAE_substituteExp(threadData, _inExp, _inVarRepl, &_replPerformed);
  /* skip box _outExp; DAE.Exp */
  if (out_replPerformed) { *out_replPerformed = mmc_mk_icon(_replPerformed); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToExpForSubstitution(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList, modelica_boolean *out_substitute)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIndex = NULL;
  modelica_metatype _outStringList = NULL;
  modelica_boolean _substitute;
  modelica_boolean tmp1_c4 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outVarLst has no default value.
  // _outIndex has no default value.
  // _outStringList has no default value.
  // _substitute has no default value.
  
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inExp1;
    tmp4_2 = _inVarLst;
    tmp4_3 = _inIndex;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _ex = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _e4 = NULL;
      modelica_metatype _e5 = NULL;
      modelica_metatype _op = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _vars1 = NULL;
      modelica_metatype _vars2 = NULL;
      modelica_metatype _vars3 = NULL;
      modelica_metatype _idx = NULL;
      modelica_metatype _idx1 = NULL;
      modelica_metatype _idx2 = NULL;
      modelica_metatype _idx3 = NULL;
      modelica_metatype _labels = NULL;
      modelica_metatype _labels1 = NULL;
      modelica_metatype _labels2 = NULL;
      modelica_metatype _labels3 = NULL;
      modelica_metatype _labels4 = NULL;
      modelica_metatype _attr = NULL;
      modelica_boolean _subs;
      modelica_boolean _subs1;
      modelica_boolean _subs2;
      modelica_boolean _subs3;
      modelica_boolean _subs4;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _ex has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _e4 has no default value.
      // _e5 has no default value.
      // _op has no default value.
      // _vars has no default value.
      // _vars1 has no default value.
      // _vars2 has no default value.
      // _vars3 has no default value.
      // _idx has no default value.
      // _idx1 has no default value.
      // _idx2 has no default value.
      // _idx3 has no default value.
      // _labels has no default value.
      // _labels1 has no default value.
      // _labels2 has no default value.
      // _labels3 has no default value.
      // _labels4 has no default value.
      // _attr has no default value.
      // _subs has no default value.
      // _subs1 has no default value.
      // _subs2 has no default value.
      // _subs3 has no default value.
      // _subs4 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 18; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta6;
          _op = tmpMeta7;
          _e2 = tmpMeta8;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 16; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta10 = omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp9);
          _ex = tmpMeta10;
          if (1 /* true */ != tmp9) goto goto_2;

          _e3 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels ,&_subs1);

          _e4 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e2, _vars1, _idx1, _reduceList, _inVarRepl ,&_vars2 ,&_idx2 ,&_labels1 ,&_subs2);

          _subs3 = (_subs1 && _subs2);

          tmpMeta11 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e3, _op, _e4);
          _e5 = omc_ReduceDAE_addTwoLabels(threadData, tmpMeta11, _ex, _subs3, _vars2, _idx2, _reduceList ,&_vars3 ,&_idx3 ,&_labels2);

          _subs4 = (_subs1 || _subs2);

          _labels3 = listAppend(_labels, _labels1);

          _labels4 = listAppend(_labels3, _labels2);

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta12 = stringAppend(_OMC_LIT30,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta13);
          }
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars3;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels4;
          tmp1_c4 = _subs4;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _op = tmpMeta14;
          _e1 = tmpMeta15;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta16 = stringAppend(_OMC_LIT31,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta17);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels ,&_subs);
          tmpMeta18 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, _op, _e2);
          tmpMeta[0+0] = tmpMeta18;
          tmpMeta[0+1] = _vars1;
          tmpMeta[0+2] = _idx1;
          tmpMeta[0+3] = _labels;
          tmp1_c4 = _subs;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta19;
          _e2 = tmpMeta20;
          _e3 = tmpMeta21;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 14; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta22 = stringAppend(_OMC_LIT32,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta23);
          }

          _e4 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e2, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels ,NULL);

          _e5 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e3, _vars1, _idx1, _reduceList, _inVarRepl ,&_vars2 ,&_idx2 ,&_labels1 ,NULL);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta24 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _e1, _e4, _e5);
          tmpMeta[0+0] = tmpMeta24;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          tmp1_c4 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_boolean tmp33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,1,1) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
          if (3 != MMC_STRLEN(tmpMeta26) || strcmp(MMC_STRINGDATA(_OMC_LIT34), MMC_STRINGDATA(tmpMeta26)) != 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta27)) goto tmp3_end;
          tmpMeta28 = MMC_CAR(tmpMeta27);
          tmpMeta29 = MMC_CDR(tmpMeta27);
          if (listEmpty(tmpMeta29)) goto tmp3_end;
          tmpMeta30 = MMC_CAR(tmpMeta29);
          tmpMeta31 = MMC_CDR(tmpMeta29);
          if (!listEmpty(tmpMeta31)) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta28;
          _e2 = tmpMeta30;
          _attr = tmpMeta32;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta34 = omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp33);
          _ex = tmpMeta34;
          if (1 /* true */ != tmp33) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta35 = stringAppend(_OMC_LIT33,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta36);
          }

          _e3 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels ,&_subs1);

          _e4 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e2, _vars1, _idx1, _reduceList, _inVarRepl ,&_vars2 ,&_idx2 ,&_labels1 ,&_subs2);

          _subs3 = (_subs1 && _subs2);

          tmpMeta37 = mmc_mk_cons(_e3, mmc_mk_cons(_e4, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta38 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT35, tmpMeta37, _attr);
          _e5 = omc_ReduceDAE_addTwoLabels(threadData, tmpMeta38, _ex, _subs3, _vars2, _idx2, _reduceList ,&_vars3 ,&_idx3 ,&_labels2);

          _subs4 = (_subs1 || _subs2);

          _labels3 = listAppend(_labels, _labels1);

          _labels4 = listAppend(_labels3, _labels2);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars3;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels4;
          tmp1_c4 = _subs4;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta39,1,1) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
          if (3 != MMC_STRLEN(tmpMeta40) || strcmp(MMC_STRINGDATA(_OMC_LIT37), MMC_STRINGDATA(tmpMeta40)) != 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta41)) goto tmp3_end;
          tmpMeta42 = MMC_CAR(tmpMeta41);
          tmpMeta43 = MMC_CDR(tmpMeta41);
          if (listEmpty(tmpMeta43)) goto tmp3_end;
          tmpMeta44 = MMC_CAR(tmpMeta43);
          tmpMeta45 = MMC_CDR(tmpMeta43);
          if (!listEmpty(tmpMeta45)) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta42;
          _e2 = tmpMeta44;
          _attr = tmpMeta46;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 12; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta48 = omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp47);
          _ex = tmpMeta48;
          if (1 /* true */ != tmp47) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta49 = stringAppend(_OMC_LIT36,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta50 = stringAppend(tmpMeta49,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta50);
          }

          _e3 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels ,&_subs1);

          _e4 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e2, _vars1, _idx1, _reduceList, _inVarRepl ,&_vars2 ,&_idx2 ,&_labels1 ,&_subs2);

          _subs3 = (_subs1 && _subs2);

          tmpMeta51 = mmc_mk_cons(_e3, mmc_mk_cons(_e4, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta52 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT38, tmpMeta51, _attr);
          _e5 = omc_ReduceDAE_addTwoLabels(threadData, tmpMeta52, _ex, _subs3, _vars2, _idx2, _reduceList ,&_vars3 ,&_idx3 ,&_labels2);

          _subs4 = (_subs1 || _subs2);

          _labels3 = listAppend(_labels, _labels1);

          _labels4 = listAppend(_labels3, _labels2);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars3;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels4;
          tmp1_c4 = _subs4;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_boolean tmp58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta53,1,1) == 0) goto tmp3_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 2));
          if (3 != MMC_STRLEN(tmpMeta54) || strcmp(MMC_STRINGDATA(_OMC_LIT53), MMC_STRINGDATA(tmpMeta54)) != 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta55)) goto tmp3_end;
          tmpMeta56 = MMC_CAR(tmpMeta55);
          tmpMeta57 = MMC_CDR(tmpMeta55);
          if (!listEmpty(tmpMeta57)) goto tmp3_end;
          
          _e = tmp4_1;
          _e1 = tmpMeta56;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp58);
          if (1 /* true */ != tmp58) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta59 = stringAppend(_OMC_LIT39,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta60 = stringAppend(tmpMeta59,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta60);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_boolean tmp66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta61,1,1) == 0) goto tmp3_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 2));
          if (4 != MMC_STRLEN(tmpMeta62) || strcmp(MMC_STRINGDATA(_OMC_LIT54), MMC_STRINGDATA(tmpMeta62)) != 0) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta63)) goto tmp3_end;
          tmpMeta64 = MMC_CAR(tmpMeta63);
          tmpMeta65 = MMC_CDR(tmpMeta63);
          if (!listEmpty(tmpMeta65)) goto tmp3_end;
          
          _e = tmp4_1;
          _e1 = tmpMeta64;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp66);
          if (1 /* true */ != tmp66) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta67 = stringAppend(_OMC_LIT40,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta68 = stringAppend(tmpMeta67,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta68);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_boolean tmp74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta69,1,1) == 0) goto tmp3_end;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta69), 2));
          if (3 != MMC_STRLEN(tmpMeta70) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmpMeta70)) != 0) goto tmp3_end;
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta71)) goto tmp3_end;
          tmpMeta72 = MMC_CAR(tmpMeta71);
          tmpMeta73 = MMC_CDR(tmpMeta71);
          if (!listEmpty(tmpMeta73)) goto tmp3_end;
          
          _e = tmp4_1;
          _e1 = tmpMeta72;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp74);
          if (1 /* true */ != tmp74) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta75 = stringAppend(_OMC_LIT41,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta76 = stringAppend(tmpMeta75,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta76);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_boolean tmp82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta77,1,1) == 0) goto tmp3_end;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 2));
          if (3 != MMC_STRLEN(tmpMeta78) || strcmp(MMC_STRINGDATA(_OMC_LIT56), MMC_STRINGDATA(tmpMeta78)) != 0) goto tmp3_end;
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta79)) goto tmp3_end;
          tmpMeta80 = MMC_CAR(tmpMeta79);
          tmpMeta81 = MMC_CDR(tmpMeta79);
          if (!listEmpty(tmpMeta81)) goto tmp3_end;
          
          _e = tmp4_1;
          _e1 = tmpMeta80;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp82);
          if (1 /* true */ != tmp82) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta83 = stringAppend(_OMC_LIT42,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta84 = stringAppend(tmpMeta83,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta84);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_boolean tmp90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta85,1,1) == 0) goto tmp3_end;
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta85), 2));
          if (3 != MMC_STRLEN(tmpMeta86) || strcmp(MMC_STRINGDATA(_OMC_LIT57), MMC_STRINGDATA(tmpMeta86)) != 0) goto tmp3_end;
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta87)) goto tmp3_end;
          tmpMeta88 = MMC_CAR(tmpMeta87);
          tmpMeta89 = MMC_CDR(tmpMeta87);
          if (!listEmpty(tmpMeta89)) goto tmp3_end;
          
          _e = tmp4_1;
          _e1 = tmpMeta88;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp90);
          if (1 /* true */ != tmp90) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta91 = stringAppend(_OMC_LIT43,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta92 = stringAppend(tmpMeta91,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta92);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_boolean tmp98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta93 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta93,1,1) == 0) goto tmp3_end;
          tmpMeta94 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta93), 2));
          if (4 != MMC_STRLEN(tmpMeta94) || strcmp(MMC_STRINGDATA(_OMC_LIT58), MMC_STRINGDATA(tmpMeta94)) != 0) goto tmp3_end;
          tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta95)) goto tmp3_end;
          tmpMeta96 = MMC_CAR(tmpMeta95);
          tmpMeta97 = MMC_CDR(tmpMeta95);
          if (!listEmpty(tmpMeta97)) goto tmp3_end;
          
          _e = tmp4_1;
          _e1 = tmpMeta96;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp98);
          if (1 /* true */ != tmp98) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta99 = stringAppend(_OMC_LIT44,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta100 = stringAppend(tmpMeta99,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta100);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_boolean tmp106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta101 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta101,1,1) == 0) goto tmp3_end;
          tmpMeta102 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta101), 2));
          if (4 != MMC_STRLEN(tmpMeta102) || strcmp(MMC_STRINGDATA(_OMC_LIT59), MMC_STRINGDATA(tmpMeta102)) != 0) goto tmp3_end;
          tmpMeta103 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta103)) goto tmp3_end;
          tmpMeta104 = MMC_CAR(tmpMeta103);
          tmpMeta105 = MMC_CDR(tmpMeta103);
          if (!listEmpty(tmpMeta105)) goto tmp3_end;
          
          _e = tmp4_1;
          _e1 = tmpMeta104;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp106);
          if (1 /* true */ != tmp106) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta107 = stringAppend(_OMC_LIT45,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta108 = stringAppend(tmpMeta107,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta108);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_boolean tmp114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta109 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta109,1,1) == 0) goto tmp3_end;
          tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta109), 2));
          if (4 != MMC_STRLEN(tmpMeta110) || strcmp(MMC_STRINGDATA(_OMC_LIT60), MMC_STRINGDATA(tmpMeta110)) != 0) goto tmp3_end;
          tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta111)) goto tmp3_end;
          tmpMeta112 = MMC_CAR(tmpMeta111);
          tmpMeta113 = MMC_CDR(tmpMeta111);
          if (!listEmpty(tmpMeta113)) goto tmp3_end;
          
          _e = tmp4_1;
          _e1 = tmpMeta112;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp114);
          if (1 /* true */ != tmp114) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta115 = stringAppend(_OMC_LIT46,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta116 = stringAppend(tmpMeta115,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta116);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          modelica_metatype tmpMeta121;
          modelica_boolean tmp122;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta117 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta117,1,1) == 0) goto tmp3_end;
          tmpMeta118 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta117), 2));
          if (3 != MMC_STRLEN(tmpMeta118) || strcmp(MMC_STRINGDATA(_OMC_LIT61), MMC_STRINGDATA(tmpMeta118)) != 0) goto tmp3_end;
          tmpMeta119 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta119)) goto tmp3_end;
          tmpMeta120 = MMC_CAR(tmpMeta119);
          tmpMeta121 = MMC_CDR(tmpMeta119);
          if (!listEmpty(tmpMeta121)) goto tmp3_end;
          
          _e = tmp4_1;
          _e1 = tmpMeta120;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta123 = omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp122);
          _ex = tmpMeta123;
          if (1 /* true */ != tmp122) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta124 = stringAppend(_OMC_LIT47,omc_ExpressionBasics_printExpStr(threadData, _ex));
            tmpMeta125 = stringAppend(tmpMeta124,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta125);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          modelica_metatype tmpMeta132;
          modelica_metatype tmpMeta133;
          modelica_boolean tmp134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          modelica_metatype tmpMeta137;
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta126 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta126,1,1) == 0) goto tmp3_end;
          tmpMeta127 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta126), 2));
          if (3 != MMC_STRLEN(tmpMeta127) || strcmp(MMC_STRINGDATA(_OMC_LIT49), MMC_STRINGDATA(tmpMeta127)) != 0) goto tmp3_end;
          tmpMeta128 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta128)) goto tmp3_end;
          tmpMeta129 = MMC_CAR(tmpMeta128);
          tmpMeta130 = MMC_CDR(tmpMeta128);
          if (listEmpty(tmpMeta130)) goto tmp3_end;
          tmpMeta131 = MMC_CAR(tmpMeta130);
          tmpMeta132 = MMC_CDR(tmpMeta130);
          if (!listEmpty(tmpMeta132)) goto tmp3_end;
          tmpMeta133 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta129;
          _e2 = tmpMeta131;
          _attr = tmpMeta133;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta135 = omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp134);
          _ex = tmpMeta135;
          if (1 /* true */ != tmp134) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta136 = stringAppend(_OMC_LIT48,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta137 = stringAppend(tmpMeta136,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta137);
          }

          _e3 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels ,&_subs1);

          _e4 = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _e2, _vars1, _idx1, _reduceList, _inVarRepl ,&_vars2 ,&_idx2 ,&_labels1 ,&_subs2);

          _subs3 = (_subs1 && _subs2);

          tmpMeta138 = mmc_mk_cons(_e3, mmc_mk_cons(_e4, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta139 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT50, tmpMeta138, _attr);
          _e5 = omc_ReduceDAE_addTwoLabels(threadData, tmpMeta139, _ex, _subs3, _vars2, _idx2, _reduceList ,&_vars3 ,&_idx3 ,&_labels2);

          _subs4 = (_subs1 || _subs2);

          _labels3 = listAppend(_labels, _labels1);

          _labels4 = listAppend(_labels3, _labels2);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars3;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels4;
          tmp1_c4 = _subs4;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta140;
          modelica_boolean tmp141;
          modelica_metatype tmpMeta142;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta140 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta140,0,1) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta142 = omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp141);
          _e1 = tmpMeta142;
          if (1 /* true */ != tmp141) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta143 = stringAppend(_OMC_LIT51,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta144 = stringAppend(tmpMeta143,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta144);
          }

          _e2 = omc_ReduceDAE_addTwoLabels(threadData, _e, _e1, 1 /* true */, _vars, _idx, _reduceList ,&_vars1 ,&_idx1 ,&_labels);
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = _vars1;
          tmpMeta[0+2] = _idx1;
          tmpMeta[0+3] = _labels;
          tmp1_c4 = 1 /* true */;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta145;
          modelica_boolean tmp146;
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          modelica_metatype tmpMeta149;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta145 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta145,1,1) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta147 = omc_ReduceDAE_substituteExp(threadData, _e, _inVarRepl, &tmp146);
          _e1 = tmpMeta147;
          if (1 /* true */ != tmp146) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta148 = stringAppend(_OMC_LIT52,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta149 = stringAppend(tmpMeta148,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta149);
          }

          _e2 = omc_ReduceDAE_addTwoLabels(threadData, _e, _e1, 1 /* true */, _vars, _idx, _reduceList ,&_vars1 ,&_idx1 ,&_labels);
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = _vars1;
          tmpMeta[0+2] = _idx1;
          tmpMeta[0+3] = _labels;
          tmp1_c4 = 1 /* true */;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta150;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta150 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta150;
          tmp1_c4 = 0 /* false */;
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
      if (++tmp4 < 18) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _outVarLst = tmpMeta[0+1];
  _outIndex = tmpMeta[0+2];
  _outStringList = tmpMeta[0+3];
  _substitute = tmp1_c4;
  _return: OMC_LABEL_UNUSED
  if (out_outVarLst) { *out_outVarLst = _outVarLst; }
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outStringList) { *out_outStringList = _outStringList; }
  if (out_substitute) { *out_substitute = _substitute; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_addLabelToExpForSubstitution(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList, modelica_metatype *out_substitute)
{
  modelica_boolean _substitute;
  modelica_metatype _outExp = NULL;
  _outExp = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _inExp1, _inVarLst, _inIndex, _reduceList, _inVarRepl, out_outVarLst, out_outIndex, out_outStringList, &_substitute);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outVarLst; SimCodeVar.SimVars */
  /* skip box _outIndex; tuple<#Integer, #Integer> */
  /* skip box _outStringList; list<String> */
  if (out_substitute) { *out_substitute = mmc_mk_icon(_substitute); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_linearizeExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _source, modelica_metatype _inVarLst, modelica_metatype _inVarRepl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _inExp;
    tmp4_2 = _source;
    tmp4_3 = _inVarRepl;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _e4 = NULL;
      modelica_metatype _e5 = NULL;
      modelica_metatype _tmpExp = NULL;
      modelica_metatype _replExp = NULL;
      modelica_metatype _tmp = NULL;
      modelica_metatype _repl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _e4 has no default value.
      // _e5 has no default value.
      // _tmpExp has no default value.
      // _replExp has no default value.
      // _tmp has no default value.
      // _repl has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          
          _e1 = tmp4_1;
          _e2 = tmp4_2;
          _repl = tmp4_3;
          /* Pattern matching succeeded */
          _replExp = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, mmc_mk_none(), NULL);

          _e = omc_Expression_replaceExp(threadData, _e1, _e2, _replExp, NULL);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _tmp = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _OMC_LIT62, _OMC_LIT63, tmpMeta6);

          _tmpExp = omc_Expression_crefExp(threadData, _tmp);

          _e3 = omc_Expression_replaceExp(threadData, _e1, _e2, _tmpExp, NULL);

          _e4 = omc_Differentiate_differentiateExpSolve(threadData, _e3, _tmp, mmc_mk_none());

          _e5 = omc_Expression_replaceExp(threadData, _e4, _tmpExp, _replExp, NULL);
          tmpMeta1 = omc_Expression_expAdd(threadData, _e, omc_Expression_expMul(threadData, _e5, omc_Expression_expSub(threadData, _e2, _replExp)));
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addTwoLabels(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_boolean _label, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIndex = NULL;
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outVarLst has no default value.
  // _outIndex has no default value.
  // _outStringList has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_boolean tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_metatype tmp4_5;
    tmp4_1 = _inExp1;
    tmp4_2 = _inExp2;
    tmp4_3 = _label;
    tmp4_4 = _inVarLst;
    tmp4_5 = _inIndex;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _e4 = NULL;
      modelica_metatype _e5 = NULL;
      modelica_integer _i;
      modelica_integer _i_1;
      modelica_integer _p;
      modelica_integer _p_1;
      modelica_metatype _vars = NULL;
      modelica_metatype _vars_1 = NULL;
      modelica_string _name = NULL;
      modelica_string _name1 = NULL;
      modelica_string _name2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _e4 has no default value.
      // _e5 has no default value.
      // _i has no default value.
      // _i_1 has no default value.
      // _p has no default value.
      // _p_1 has no default value.
      // _vars has no default value.
      // _vars_1 has no default value.
      // _name has no default value.
      // _name1 has no default value.
      // _name2 has no default value.
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
          modelica_integer tmp9;
          modelica_boolean tmp10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (1 /* true */ != tmp4_3) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _e1 = tmp4_1;
          _e2 = tmp4_2;
          _vars = tmp4_4;
          _i = tmp7  /* pattern as ty=Integer */;
          _p = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = omc_Flags_getConfigBool(threadData, _OMC_LIT68);
          if (1 /* true */ != tmp10) goto goto_2;

          /* Pattern-matching assignment */
          tmp11 = omc_List_contains(threadData, _reduceList, mmc_mk_integer(_i), boxvar_intEq);
          if (1 /* true */ != tmp11) goto goto_2;

          _e3 = omc_Expression_expMul(threadData, _OMC_LIT18, _e1);

          _e4 = omc_Expression_expMul(threadData, _OMC_LIT7, _e2);

          _e5 = omc_Expression_expAdd(threadData, _e3, _e4);

          _i_1 = ((modelica_integer) 1) + _i;
          tmpMeta12 = mmc_mk_box2(0, mmc_mk_integer(_i_1), mmc_mk_integer(_p));
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = tmpMeta12;
          tmpMeta[0+3] = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_boolean tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (1 /* true */ != tmp4_3) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 1));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          _e1 = tmp4_1;
          _e2 = tmp4_2;
          _vars = tmp4_4;
          _i = tmp15  /* pattern as ty=Integer */;
          _p = tmp17  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = omc_Flags_getConfigBool(threadData, _OMC_LIT68);
          if (1 /* true */ != tmp18) goto goto_2;

          _e3 = omc_Expression_expMul(threadData, _OMC_LIT7, _e1);

          _e4 = omc_Expression_expMul(threadData, _OMC_LIT18, _e2);

          _e5 = omc_Expression_expAdd(threadData, _e3, _e4);

          _i_1 = ((modelica_integer) 1) + _i;
          tmpMeta19 = mmc_mk_box2(0, mmc_mk_integer(_i_1), mmc_mk_integer(_p));
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = tmpMeta19;
          tmpMeta[0+3] = tmpMeta20;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (1 /* true */ != tmp4_3) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 1));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          _e1 = tmp4_1;
          _e2 = tmp4_2;
          _vars = tmp4_4;
          _i = tmp22  /* pattern as ty=Integer */;
          _p = tmp24  /* pattern as ty=Integer */;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _vars_1 = omc_ReduceDAE_createLabelVar(threadData, _vars, _p, _i ,&_name);

          tmpMeta25 = stringAppend(_name,_OMC_LIT0);
          _name1 = tmpMeta25;

          tmpMeta26 = stringAppend(_name,_OMC_LIT1);
          _name2 = tmpMeta26;

          _e3 = omc_ReduceDAE_multiply(threadData, _e1, _name1);

          _e4 = omc_ReduceDAE_multiply(threadData, _e2, _name2);

          _e5 = omc_Expression_expAdd(threadData, _e3, _e4);

          _p_1 = ((modelica_integer) 2) + _p;

          _i_1 = ((modelica_integer) 1) + _i;
          tmpMeta27 = mmc_mk_box2(0, mmc_mk_integer(_i_1), mmc_mk_integer(_p_1));
          tmpMeta28 = mmc_mk_cons(_name, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = tmpMeta27;
          tmpMeta[0+3] = tmpMeta28;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (0 /* false */ != tmp4_3) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 1));
          tmp30 = mmc_unbox_integer(tmpMeta29);
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          tmp32 = mmc_unbox_integer(tmpMeta31);
          _e1 = tmp4_1;
          _vars = tmp4_4;
          _i = tmp30  /* pattern as ty=Integer */;
          _p = tmp32  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta33 = mmc_mk_box2(0, mmc_mk_integer(_i), mmc_mk_integer(_p));
          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = tmpMeta33;
          tmpMeta[0+3] = tmpMeta34;
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
  _outVarLst = tmpMeta[0+1];
  _outIndex = tmpMeta[0+2];
  _outStringList = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outVarLst) { *out_outVarLst = _outVarLst; }
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outStringList) { *out_outStringList = _outStringList; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_addTwoLabels(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _label, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_label);
  _outExp = omc_ReduceDAE_addTwoLabels(threadData, _inExp1, _inExp2, tmp1, _inVarLst, _inIndex, _reduceList, out_outVarLst, out_outIndex, out_outStringList);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outVarLst; SimCodeVar.SimVars */
  /* skip box _outIndex; tuple<#Integer, #Integer> */
  /* skip box _outStringList; list<String> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToExpForLinearization(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIndex = NULL;
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outVarLst has no default value.
  // _outIndex has no default value.
  // _outStringList has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inExp1;
    tmp4_2 = _inVarLst;
    tmp4_3 = _inIndex;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _e4 = NULL;
      modelica_metatype _e5 = NULL;
      modelica_metatype _e6 = NULL;
      modelica_metatype _op = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _vars1 = NULL;
      modelica_metatype _vars2 = NULL;
      modelica_metatype _idx = NULL;
      modelica_metatype _idx1 = NULL;
      modelica_metatype _idx2 = NULL;
      modelica_metatype _labels = NULL;
      modelica_metatype _labels1 = NULL;
      modelica_metatype _labels2 = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _tp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _e4 has no default value.
      // _e5 has no default value.
      // _e6 has no default value.
      // _op has no default value.
      // _vars has no default value.
      // _vars1 has no default value.
      // _vars2 has no default value.
      // _idx has no default value.
      // _idx1 has no default value.
      // _idx2 has no default value.
      // _labels has no default value.
      // _labels1 has no default value.
      // _labels2 has no default value.
      // _attr has no default value.
      // _tp has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 15; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,4,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta6;
          _tp = tmpMeta8;
          _e2 = tmpMeta9;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = omc_Expression_expHasCrefs(threadData, _e1);
          if (1 /* true */ != tmp10) goto goto_2;

          /* Pattern-matching assignment */
          tmp11 = omc_Expression_expHasCrefs(threadData, _e2);
          if (0 /* false */ != tmp11) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta12 = stringAppend(_OMC_LIT69,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta13);
          }

          _e3 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);
          tmpMeta14 = mmc_mk_box2(7, &DAE_Operator_POW__desc, _tp);
          tmpMeta15 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e3, tmpMeta14, _e2);
          tmpMeta[0+0] = tmpMeta15;
          tmpMeta[0+1] = _vars1;
          tmpMeta[0+2] = _idx1;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_boolean tmp20;
          modelica_boolean tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,4,1) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta16;
          _tp = tmpMeta18;
          _e2 = tmpMeta19;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp20 = omc_Expression_expHasCrefs(threadData, _e1);
          if (0 /* false */ != tmp20) goto goto_2;

          /* Pattern-matching assignment */
          tmp21 = omc_Expression_expHasCrefs(threadData, _e2);
          if (1 /* true */ != tmp21) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta22 = stringAppend(_OMC_LIT69,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta23);
          }

          _e3 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e2, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          tmpMeta24 = mmc_mk_box2(7, &DAE_Operator_POW__desc, _tp);
          tmpMeta25 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1, tmpMeta24, _e3);
          _e4 = tmpMeta25;

          _e5 = omc_ReduceDAE_linearizeExp(threadData, _e4, _e3, _vars, _inVarRepl);

          _e6 = omc_ReduceDAE_addTwoLabels(threadData, _e4, _e5, 1 /* true */, _vars1, _idx1, _reduceList ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta[0+0] = _e6;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta26;
          _op = tmpMeta27;
          _e2 = tmpMeta28;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta29 = stringAppend(_OMC_LIT30,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta30 = stringAppend(tmpMeta29,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta30);
          }

          _e3 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          _e4 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e2, _vars1, _idx1, _reduceList, _inVarRepl ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta31 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e3, _op, _e4);
          tmpMeta[0+0] = tmpMeta31;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _op = tmpMeta32;
          _e1 = tmpMeta33;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta34 = stringAppend(_OMC_LIT31,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta35);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);
          tmpMeta36 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, _op, _e2);
          tmpMeta[0+0] = tmpMeta36;
          tmpMeta[0+1] = _vars1;
          tmpMeta[0+2] = _idx1;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta37;
          _e2 = tmpMeta38;
          _e3 = tmpMeta39;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta40 = stringAppend(_OMC_LIT32,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta41 = stringAppend(tmpMeta40,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta41);
          }

          _e4 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e2, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          _e5 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e3, _vars1, _idx1, _reduceList, _inVarRepl ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta42 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _e1, _e4, _e5);
          tmpMeta[0+0] = tmpMeta42;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_boolean tmp49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta43,1,1) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 2));
          if (3 != MMC_STRLEN(tmpMeta44) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmpMeta44)) != 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta45)) goto tmp3_end;
          tmpMeta46 = MMC_CAR(tmpMeta45);
          tmpMeta47 = MMC_CDR(tmpMeta45);
          if (!listEmpty(tmpMeta47)) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta46;
          _attr = tmpMeta48;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp49 = omc_Expression_expHasCrefs(threadData, _e);
          if (1 /* true */ != tmp49) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta50 = stringAppend(_OMC_LIT41,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta51 = stringAppend(tmpMeta50,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta51);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          tmpMeta52 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta53 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT70, tmpMeta52, _attr);
          _e3 = tmpMeta53;

          _e4 = omc_ReduceDAE_linearizeExp(threadData, _e3, _e2, _vars, _inVarRepl);

          _e5 = omc_ReduceDAE_addTwoLabels(threadData, _e3, _e4, 1 /* true */, _vars1, _idx1, _reduceList ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_boolean tmp60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta54,1,1) == 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 2));
          if (3 != MMC_STRLEN(tmpMeta55) || strcmp(MMC_STRINGDATA(_OMC_LIT56), MMC_STRINGDATA(tmpMeta55)) != 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta56)) goto tmp3_end;
          tmpMeta57 = MMC_CAR(tmpMeta56);
          tmpMeta58 = MMC_CDR(tmpMeta56);
          if (!listEmpty(tmpMeta58)) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta57;
          _attr = tmpMeta59;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp60 = omc_Expression_expHasCrefs(threadData, _e);
          if (1 /* true */ != tmp60) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta61 = stringAppend(_OMC_LIT42,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta62 = stringAppend(tmpMeta61,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta62);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          tmpMeta63 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta64 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT71, tmpMeta63, _attr);
          _e3 = tmpMeta64;

          _e4 = omc_ReduceDAE_linearizeExp(threadData, _e3, _e2, _vars, _inVarRepl);

          _e5 = omc_ReduceDAE_addTwoLabels(threadData, _e3, _e4, 1 /* true */, _vars1, _idx1, _reduceList ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_boolean tmp71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta65,1,1) == 0) goto tmp3_end;
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta65), 2));
          if (3 != MMC_STRLEN(tmpMeta66) || strcmp(MMC_STRINGDATA(_OMC_LIT57), MMC_STRINGDATA(tmpMeta66)) != 0) goto tmp3_end;
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta67)) goto tmp3_end;
          tmpMeta68 = MMC_CAR(tmpMeta67);
          tmpMeta69 = MMC_CDR(tmpMeta67);
          if (!listEmpty(tmpMeta69)) goto tmp3_end;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta68;
          _attr = tmpMeta70;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp71 = omc_Expression_expHasCrefs(threadData, _e);
          if (1 /* true */ != tmp71) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta72 = stringAppend(_OMC_LIT43,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta73 = stringAppend(tmpMeta72,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta73);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          tmpMeta74 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta75 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT72, tmpMeta74, _attr);
          _e3 = tmpMeta75;

          _e4 = omc_ReduceDAE_linearizeExp(threadData, _e3, _e2, _vars, _inVarRepl);

          _e5 = omc_ReduceDAE_addTwoLabels(threadData, _e3, _e4, 1 /* true */, _vars1, _idx1, _reduceList ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_boolean tmp82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta76,1,1) == 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta76), 2));
          if (4 != MMC_STRLEN(tmpMeta77) || strcmp(MMC_STRINGDATA(_OMC_LIT58), MMC_STRINGDATA(tmpMeta77)) != 0) goto tmp3_end;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta78)) goto tmp3_end;
          tmpMeta79 = MMC_CAR(tmpMeta78);
          tmpMeta80 = MMC_CDR(tmpMeta78);
          if (!listEmpty(tmpMeta80)) goto tmp3_end;
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta79;
          _attr = tmpMeta81;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp82 = omc_Expression_expHasCrefs(threadData, _e);
          if (1 /* true */ != tmp82) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta83 = stringAppend(_OMC_LIT44,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta84 = stringAppend(tmpMeta83,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta84);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          tmpMeta85 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta86 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT73, tmpMeta85, _attr);
          _e3 = tmpMeta86;

          _e4 = omc_ReduceDAE_linearizeExp(threadData, _e3, _e2, _vars, _inVarRepl);

          _e5 = omc_ReduceDAE_addTwoLabels(threadData, _e3, _e4, 1 /* true */, _vars1, _idx1, _reduceList ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_boolean tmp93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta87,1,1) == 0) goto tmp3_end;
          tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta87), 2));
          if (4 != MMC_STRLEN(tmpMeta88) || strcmp(MMC_STRINGDATA(_OMC_LIT59), MMC_STRINGDATA(tmpMeta88)) != 0) goto tmp3_end;
          tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta89)) goto tmp3_end;
          tmpMeta90 = MMC_CAR(tmpMeta89);
          tmpMeta91 = MMC_CDR(tmpMeta89);
          if (!listEmpty(tmpMeta91)) goto tmp3_end;
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta90;
          _attr = tmpMeta92;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp93 = omc_Expression_expHasCrefs(threadData, _e);
          if (1 /* true */ != tmp93) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta94 = stringAppend(_OMC_LIT45,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta95 = stringAppend(tmpMeta94,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta95);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          tmpMeta96 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta97 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT74, tmpMeta96, _attr);
          _e3 = tmpMeta97;

          _e4 = omc_ReduceDAE_linearizeExp(threadData, _e3, _e2, _vars, _inVarRepl);

          _e5 = omc_ReduceDAE_addTwoLabels(threadData, _e3, _e4, 1 /* true */, _vars1, _idx1, _reduceList ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          modelica_boolean tmp104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta98 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta98,1,1) == 0) goto tmp3_end;
          tmpMeta99 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta98), 2));
          if (4 != MMC_STRLEN(tmpMeta99) || strcmp(MMC_STRINGDATA(_OMC_LIT60), MMC_STRINGDATA(tmpMeta99)) != 0) goto tmp3_end;
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta100)) goto tmp3_end;
          tmpMeta101 = MMC_CAR(tmpMeta100);
          tmpMeta102 = MMC_CDR(tmpMeta100);
          if (!listEmpty(tmpMeta102)) goto tmp3_end;
          tmpMeta103 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta101;
          _attr = tmpMeta103;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp104 = omc_Expression_expHasCrefs(threadData, _e);
          if (1 /* true */ != tmp104) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta105 = stringAppend(_OMC_LIT46,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta106 = stringAppend(tmpMeta105,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta106);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          tmpMeta107 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta108 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT75, tmpMeta107, _attr);
          _e3 = tmpMeta108;

          _e4 = omc_ReduceDAE_linearizeExp(threadData, _e3, _e2, _vars, _inVarRepl);

          _e5 = omc_ReduceDAE_addTwoLabels(threadData, _e3, _e4, 1 /* true */, _vars1, _idx1, _reduceList ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_boolean tmp115;
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta109 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta109,1,1) == 0) goto tmp3_end;
          tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta109), 2));
          if (3 != MMC_STRLEN(tmpMeta110) || strcmp(MMC_STRINGDATA(_OMC_LIT61), MMC_STRINGDATA(tmpMeta110)) != 0) goto tmp3_end;
          tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta111)) goto tmp3_end;
          tmpMeta112 = MMC_CAR(tmpMeta111);
          tmpMeta113 = MMC_CDR(tmpMeta111);
          if (!listEmpty(tmpMeta113)) goto tmp3_end;
          tmpMeta114 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta112;
          _attr = tmpMeta114;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp115 = omc_Expression_expHasCrefs(threadData, _e);
          if (1 /* true */ != tmp115) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta116 = stringAppend(_OMC_LIT47,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta117 = stringAppend(tmpMeta116,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta117);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          tmpMeta118 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta119 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT76, tmpMeta118, _attr);
          _e3 = tmpMeta119;

          _e4 = omc_ReduceDAE_linearizeExp(threadData, _e3, _e2, _vars, _inVarRepl);

          _e5 = omc_ReduceDAE_addTwoLabels(threadData, _e3, _e4, 1 /* true */, _vars1, _idx1, _reduceList ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta120;
          modelica_metatype tmpMeta121;
          modelica_metatype tmpMeta122;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          modelica_boolean tmp126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta120 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta120,1,1) == 0) goto tmp3_end;
          tmpMeta121 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta120), 2));
          if (3 != MMC_STRLEN(tmpMeta121) || strcmp(MMC_STRINGDATA(_OMC_LIT78), MMC_STRINGDATA(tmpMeta121)) != 0) goto tmp3_end;
          tmpMeta122 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta122)) goto tmp3_end;
          tmpMeta123 = MMC_CAR(tmpMeta122);
          tmpMeta124 = MMC_CDR(tmpMeta122);
          if (!listEmpty(tmpMeta124)) goto tmp3_end;
          tmpMeta125 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta123;
          _attr = tmpMeta125;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp126 = omc_Expression_expHasCrefs(threadData, _e);
          if (1 /* true */ != tmp126) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta127 = stringAppend(_OMC_LIT77,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta128 = stringAppend(tmpMeta127,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta128);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          tmpMeta129 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta130 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT79, tmpMeta129, _attr);
          _e3 = tmpMeta130;

          _e4 = omc_ReduceDAE_linearizeExp(threadData, _e3, _e2, _vars, _inVarRepl);

          _e5 = omc_ReduceDAE_addTwoLabels(threadData, _e3, _e4, 1 /* true */, _vars1, _idx1, _reduceList ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta131;
          modelica_metatype tmpMeta132;
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          modelica_boolean tmp137;
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          modelica_metatype tmpMeta140;
          modelica_metatype tmpMeta141;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta131 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta131,1,1) == 0) goto tmp3_end;
          tmpMeta132 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta131), 2));
          if (4 != MMC_STRLEN(tmpMeta132) || strcmp(MMC_STRINGDATA(_OMC_LIT54), MMC_STRINGDATA(tmpMeta132)) != 0) goto tmp3_end;
          tmpMeta133 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta133)) goto tmp3_end;
          tmpMeta134 = MMC_CAR(tmpMeta133);
          tmpMeta135 = MMC_CDR(tmpMeta133);
          if (!listEmpty(tmpMeta135)) goto tmp3_end;
          tmpMeta136 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta134;
          _attr = tmpMeta136;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp137 = omc_Expression_expHasCrefs(threadData, _e);
          if (1 /* true */ != tmp137) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta138 = stringAppend(_OMC_LIT40,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta139 = stringAppend(tmpMeta138,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta139);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _e1, _vars, _idx, _reduceList, _inVarRepl ,&_vars1 ,&_idx1 ,&_labels);

          tmpMeta140 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta141 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT80, tmpMeta140, _attr);
          _e3 = tmpMeta141;

          _e4 = omc_ReduceDAE_linearizeExp(threadData, _e3, _e2, _vars, _inVarRepl);

          _e5 = omc_ReduceDAE_addTwoLabels(threadData, _e3, _e4, 1 /* true */, _vars1, _idx1, _reduceList ,&_vars2 ,&_idx2 ,&_labels1);

          _labels2 = listAppend(_labels, _labels1);
          tmpMeta[0+0] = _e5;
          tmpMeta[0+1] = _vars2;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels2;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta142;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta142 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta142;
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
      if (++tmp4 < 15) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _outVarLst = tmpMeta[0+1];
  _outIndex = tmpMeta[0+2];
  _outStringList = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outVarLst) { *out_outVarLst = _outVarLst; }
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outStringList) { *out_outStringList = _outStringList; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addOneLabel(threadData_t *threadData, modelica_metatype _inExp1, modelica_boolean _add, modelica_metatype _inIndex, modelica_metatype _inVarLst, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIndex = NULL;
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outVarLst has no default value.
  // _outIndex has no default value.
  // _outStringList has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_boolean tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;
    tmp4_1 = _inExp1;
    tmp4_2 = _add;
    tmp4_3 = _inIndex;
    tmp4_4 = _inVarLst;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e2 = NULL;
      modelica_string _name = NULL;
      modelica_string _name1 = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _vars_1 = NULL;
      modelica_integer _i;
      modelica_integer _p;
      modelica_integer _p_1;
      modelica_integer _i_1;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e2 has no default value.
      // _name has no default value.
      // _name1 has no default value.
      // _vars has no default value.
      // _vars_1 has no default value.
      // _i has no default value.
      // _p has no default value.
      // _p_1 has no default value.
      // _i_1 has no default value.
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
          modelica_integer tmp9;
          modelica_boolean tmp10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _e = tmp4_1;
          _i = tmp7  /* pattern as ty=Integer */;
          _p = tmp9  /* pattern as ty=Integer */;
          _vars = tmp4_4;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = omc_Flags_getConfigBool(threadData, _OMC_LIT68);
          if (1 /* true */ != tmp10) goto goto_2;

          /* Pattern-matching assignment */
          tmp11 = omc_List_contains(threadData, _reduceList, mmc_mk_integer(_i), boxvar_intEq);
          if (1 /* true */ != tmp11) goto goto_2;

          _e2 = omc_Expression_expMul(threadData, _OMC_LIT18, _e);

          _i_1 = ((modelica_integer) 1) + _i;
          tmpMeta12 = mmc_mk_box2(0, mmc_mk_integer(_i_1), mmc_mk_integer(_p));
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = tmpMeta12;
          tmpMeta[0+3] = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_boolean tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          
          _e = tmp4_1;
          _i = tmp15  /* pattern as ty=Integer */;
          _p = tmp17  /* pattern as ty=Integer */;
          _vars = tmp4_4;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = omc_Flags_getConfigBool(threadData, _OMC_LIT68);
          if (1 /* true */ != tmp18) goto goto_2;

          _e2 = omc_Expression_expMul(threadData, _OMC_LIT7, _e);

          _i_1 = ((modelica_integer) 1) + _i;
          tmpMeta19 = mmc_mk_box2(0, mmc_mk_integer(_i_1), mmc_mk_integer(_p));
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = tmpMeta19;
          tmpMeta[0+3] = tmpMeta20;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          
          _e = tmp4_1;
          _i = tmp22  /* pattern as ty=Integer */;
          _p = tmp24  /* pattern as ty=Integer */;
          _vars = tmp4_4;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _vars_1 = omc_ReduceDAE_createLabelVar(threadData, _vars, _p, _i ,&_name);

          tmpMeta25 = stringAppend(_name,_OMC_LIT0);
          _name1 = tmpMeta25;

          _e2 = omc_ReduceDAE_multiply(threadData, _e, _name1);

          _p_1 = ((modelica_integer) 2) + _p;

          _i_1 = ((modelica_integer) 1) + _i;
          tmpMeta26 = mmc_mk_box2(0, mmc_mk_integer(_i_1), mmc_mk_integer(_p_1));
          tmpMeta27 = mmc_mk_cons(_name, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = tmpMeta26;
          tmpMeta[0+3] = tmpMeta27;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          modelica_metatype tmpMeta30;
          modelica_integer tmp31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmp29 = mmc_unbox_integer(tmpMeta28);
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmp31 = mmc_unbox_integer(tmpMeta30);
          
          _e = tmp4_1;
          _i = tmp29  /* pattern as ty=Integer */;
          _p = tmp31  /* pattern as ty=Integer */;
          _vars = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta32 = mmc_mk_box2(0, mmc_mk_integer(_i), mmc_mk_integer(_p));
          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = tmpMeta32;
          tmpMeta[0+3] = tmpMeta33;
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
  _outVarLst = tmpMeta[0+1];
  _outIndex = tmpMeta[0+2];
  _outStringList = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outVarLst) { *out_outVarLst = _outVarLst; }
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outStringList) { *out_outStringList = _outStringList; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_addOneLabel(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _add, modelica_metatype _inIndex, modelica_metatype _inVarLst, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_add);
  _outExp = omc_ReduceDAE_addOneLabel(threadData, _inExp1, tmp1, _inIndex, _inVarLst, _reduceList, out_outVarLst, out_outIndex, out_outStringList);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outVarLst; SimCodeVar.SimVars */
  /* skip box _outIndex; tuple<#Integer, #Integer> */
  /* skip box _outStringList; list<String> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToExpForDeletion(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIntdex, modelica_boolean _add, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIntdex, modelica_metatype *out_outStringList)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIntdex = NULL;
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outVarLst has no default value.
  // _outIntdex has no default value.
  // _outStringList has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inExp1;
    tmp4_2 = _inVarLst;
    tmp4_3 = _inIntdex;
    {
      modelica_metatype _e1_1 = NULL;
      modelica_metatype _e2_1 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3_1 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _op = NULL;
      modelica_metatype _expl = NULL;
      modelica_metatype _path = NULL;
      modelica_metatype _vars_1 = NULL;
      modelica_metatype _vars_2 = NULL;
      modelica_metatype _vars_3 = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _idx = NULL;
      modelica_metatype _idx2 = NULL;
      modelica_metatype _idx3 = NULL;
      modelica_metatype _idx4 = NULL;
      modelica_metatype _labels = NULL;
      modelica_metatype _labels2 = NULL;
      modelica_metatype _labels3 = NULL;
      modelica_metatype _labels4 = NULL;
      modelica_metatype _labels5 = NULL;
      modelica_real _valueR;
      modelica_integer _valueI;
      modelica_metatype _attr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1_1 has no default value.
      // _e2_1 has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3_1 has no default value.
      // _e3 has no default value.
      // _e has no default value.
      // _op has no default value.
      // _expl has no default value.
      // _path has no default value.
      // _vars_1 has no default value.
      // _vars_2 has no default value.
      // _vars_3 has no default value.
      // _vars has no default value.
      // _idx has no default value.
      // _idx2 has no default value.
      // _idx3 has no default value.
      // _idx4 has no default value.
      // _labels has no default value.
      // _labels2 has no default value.
      // _labels3 has no default value.
      // _labels4 has no default value.
      // _labels5 has no default value.
      // _valueR has no default value.
      // _valueI has no default value.
      // _attr has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 36; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta6;
          _op = tmpMeta7;
          _e2 = tmpMeta8;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 34; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta9 = stringAppend(_OMC_LIT81,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta10);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          _e2_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e2, _vars_1, _idx2, 1 /* true */, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);

          if(omc_Flags_getConfigBool(threadData, _OMC_LIT85))
          {
            tmpMeta11 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1_1, _op, _e2_1);
            _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta11, 0 /* false */, _idx3, _vars_2, _reduceList ,&_vars_3 ,&_idx4 ,&_labels3);
          }
          else
          {
            tmpMeta12 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1_1, _op, _e2_1);
            _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta12, _add, _idx3, _vars_2, _reduceList ,&_vars_3 ,&_idx4 ,&_labels3);
          }

          _labels4 = listAppend(_labels, _labels2);

          _labels5 = listAppend(_labels4, _labels3);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_3;
          tmpMeta[0+2] = _idx4;
          tmpMeta[0+3] = _labels5;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta13;
          _op = tmpMeta14;
          _e2 = tmpMeta15;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 33; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta16 = stringAppend(_OMC_LIT86,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta17);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          _e2_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e2, _vars_1, _idx2, 1 /* true */, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);

          if(omc_Flags_getConfigBool(threadData, _OMC_LIT85))
          {
            tmpMeta18 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1_1, _op, _e2_1);
            _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta18, 0 /* false */, _idx3, _vars_2, _reduceList ,&_vars_3 ,&_idx4 ,&_labels3);
          }
          else
          {
            tmpMeta19 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1_1, _op, _e2_1);
            _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta19, _add, _idx3, _vars_2, _reduceList ,&_vars_3 ,&_idx4 ,&_labels3);
          }

          _labels4 = listAppend(_labels, _labels2);

          _labels5 = listAppend(_labels4, _labels3);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_3;
          tmpMeta[0+2] = _idx4;
          tmpMeta[0+3] = _labels5;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,2,1) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta20;
          _op = tmpMeta21;
          _e2 = tmpMeta22;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 32; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta23 = stringAppend(_OMC_LIT87,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta24);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 0 /* false */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          _e2_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e2, _vars_1, _idx2, 0 /* false */, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);

          tmpMeta25 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1_1, _op, _e2_1);
          _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta25, _add, _idx3, _vars_2, _reduceList ,&_vars_3 ,&_idx4 ,&_labels3);

          _labels4 = listAppend(_labels, _labels2);

          _labels5 = listAppend(_labels4, _labels3);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_3;
          tmpMeta[0+2] = _idx4;
          tmpMeta[0+3] = _labels5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,3,1) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta26;
          _op = tmpMeta27;
          _e2 = tmpMeta28;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 31; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta29 = stringAppend(_OMC_LIT48,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta30 = stringAppend(tmpMeta29,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta30);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);
          tmpMeta31 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1_1, _op, _e2);
          tmpMeta[0+0] = tmpMeta31;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,4,1) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta32;
          _op = tmpMeta33;
          _e2 = tmpMeta34;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 30; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta35 = stringAppend(_OMC_LIT69,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta36);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          _e2_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e2, _vars_1, _idx2, 1 /* true */, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);

          if(omc_Flags_getConfigBool(threadData, _OMC_LIT85))
          {
            tmpMeta37 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1_1, _op, _e2_1);
            _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta37, 0 /* false */, _idx3, _vars_2, _reduceList ,&_vars_3 ,&_idx4 ,&_labels3);
          }
          else
          {
            tmpMeta38 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1_1, _op, _e2_1);
            _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta38, _add, _idx3, _vars_2, _reduceList ,&_vars_3 ,&_idx4 ,&_labels3);
          }

          _labels4 = listAppend(_labels, _labels2);

          _labels5 = listAppend(_labels4, _labels3);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_3;
          tmpMeta[0+2] = _idx4;
          tmpMeta[0+3] = _labels5;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _op = tmpMeta39;
          _e1 = tmpMeta40;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 29; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta41 = stringAppend(_OMC_LIT31,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta42 = stringAppend(tmpMeta41,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta42);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);
          tmpMeta43 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, _op, _e1_1);
          tmpMeta[0+0] = tmpMeta43;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,5) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 28; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta44 = stringAppend(_OMC_LIT88,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta45 = stringAppend(tmpMeta44,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta45);
          }
          tmpMeta46 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta46;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta47;
          _e2 = tmpMeta48;
          _e3 = tmpMeta49;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 27; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta50 = stringAppend(_OMC_LIT89,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta51 = stringAppend(tmpMeta50,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta51);
          }

          _e2_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e2, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          _e3_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e3, _vars_1, _idx2, 1 /* true */, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta52 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _e1, _e2_1, _e3_1);
          tmpMeta[0+0] = tmpMeta52;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta53,1,1) == 0) goto tmp3_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 2));
          if (3 != MMC_STRLEN(tmpMeta54) || strcmp(MMC_STRINGDATA(_OMC_LIT108), MMC_STRINGDATA(tmpMeta54)) != 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 16; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT90);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addOneLabel(threadData, _e, _add, _idx, _vars, _reduceList, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta55,1,1) == 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta55), 2));
          if (4 != MMC_STRLEN(tmpMeta56) || strcmp(MMC_STRINGDATA(_OMC_LIT109), MMC_STRINGDATA(tmpMeta56)) != 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT91);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addOneLabel(threadData, _e, _add, _idx, _vars, _reduceList, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta57,1,1) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 2));
          if (6 != MMC_STRLEN(tmpMeta58) || strcmp(MMC_STRINGDATA(_OMC_LIT110), MMC_STRINGDATA(tmpMeta58)) != 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 14; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT92);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addOneLabel(threadData, _e, _add, _idx, _vars, _reduceList, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta59,1,1) == 0) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta59), 2));
          if (6 != MMC_STRLEN(tmpMeta60) || strcmp(MMC_STRINGDATA(_OMC_LIT111), MMC_STRINGDATA(tmpMeta60)) != 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT93);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addOneLabel(threadData, _e, _add, _idx, _vars, _reduceList, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta61,1,1) == 0) goto tmp3_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 2));
          if (7 != MMC_STRLEN(tmpMeta62) || strcmp(MMC_STRINGDATA(_OMC_LIT112), MMC_STRINGDATA(tmpMeta62)) != 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 12; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT94);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addOneLabel(threadData, _e, _add, _idx, _vars, _reduceList, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 13: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta63,1,1) == 0) goto tmp3_end;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 2));
          if (3 != MMC_STRLEN(tmpMeta64) || strcmp(MMC_STRINGDATA(_OMC_LIT34), MMC_STRINGDATA(tmpMeta64)) != 0) goto tmp3_end;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta65)) goto tmp3_end;
          tmpMeta66 = MMC_CAR(tmpMeta65);
          tmpMeta67 = MMC_CDR(tmpMeta65);
          if (listEmpty(tmpMeta67)) goto tmp3_end;
          tmpMeta68 = MMC_CAR(tmpMeta67);
          tmpMeta69 = MMC_CDR(tmpMeta67);
          if (!listEmpty(tmpMeta69)) goto tmp3_end;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta66;
          _e2 = tmpMeta68;
          _attr = tmpMeta70;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta71 = stringAppend(_OMC_LIT33,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta72 = stringAppend(tmpMeta71,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta72);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          _e2_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e2, _vars_1, _idx2, 1 /* true */, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);

          tmpMeta73 = mmc_mk_cons(_e1_1, mmc_mk_cons(_e2_1, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta74 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT35, tmpMeta73, _attr);
          _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta74, _add, _idx3, _vars_2, _reduceList ,&_vars_3 ,&_idx4 ,&_labels3);

          _labels4 = listAppend(_labels, _labels2);

          _labels5 = listAppend(_labels4, _labels3);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_3;
          tmpMeta[0+2] = _idx4;
          tmpMeta[0+3] = _labels5;
          goto tmp3_done;
        }
        case 14: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta75,1,1) == 0) goto tmp3_end;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta75), 2));
          if (3 != MMC_STRLEN(tmpMeta76) || strcmp(MMC_STRINGDATA(_OMC_LIT37), MMC_STRINGDATA(tmpMeta76)) != 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta77)) goto tmp3_end;
          tmpMeta78 = MMC_CAR(tmpMeta77);
          tmpMeta79 = MMC_CDR(tmpMeta77);
          if (listEmpty(tmpMeta79)) goto tmp3_end;
          tmpMeta80 = MMC_CAR(tmpMeta79);
          tmpMeta81 = MMC_CDR(tmpMeta79);
          if (!listEmpty(tmpMeta81)) goto tmp3_end;
          tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta78;
          _e2 = tmpMeta80;
          _attr = tmpMeta82;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta83 = stringAppend(_OMC_LIT36,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta84 = stringAppend(tmpMeta83,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta84);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          _e2_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e2, _vars_1, _idx2, 1 /* true */, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);

          tmpMeta85 = mmc_mk_cons(_e1_1, mmc_mk_cons(_e2_1, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta86 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT38, tmpMeta85, _attr);
          _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta86, _add, _idx3, _vars_2, _reduceList ,&_vars_3 ,&_idx4 ,&_labels3);

          _labels4 = listAppend(_labels, _labels2);

          _labels5 = listAppend(_labels4, _labels3);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_3;
          tmpMeta[0+2] = _idx4;
          tmpMeta[0+3] = _labels5;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta87,1,1) == 0) goto tmp3_end;
          tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta87), 2));
          if (3 != MMC_STRLEN(tmpMeta88) || strcmp(MMC_STRINGDATA(_OMC_LIT53), MMC_STRINGDATA(tmpMeta88)) != 0) goto tmp3_end;
          tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta89)) goto tmp3_end;
          tmpMeta90 = MMC_CAR(tmpMeta89);
          tmpMeta91 = MMC_CDR(tmpMeta89);
          if (!listEmpty(tmpMeta91)) goto tmp3_end;
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta90;
          _attr = tmpMeta92;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta93 = stringAppend(_OMC_LIT39,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta94 = stringAppend(tmpMeta93,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta94);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          if(omc_Flags_getConfigBool(threadData, _OMC_LIT85))
          {
            tmpMeta95 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta96 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT95, tmpMeta95, _attr);
            _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta96, 0 /* false */, _idx2, _vars_1, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);
          }
          else
          {
            tmpMeta97 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta98 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT95, tmpMeta97, _attr);
            _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta98, _add, _idx2, _vars_1, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);
          }

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 16: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta99 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta99,1,1) == 0) goto tmp3_end;
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta99), 2));
          if (4 != MMC_STRLEN(tmpMeta100) || strcmp(MMC_STRINGDATA(_OMC_LIT54), MMC_STRINGDATA(tmpMeta100)) != 0) goto tmp3_end;
          tmpMeta101 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta101)) goto tmp3_end;
          tmpMeta102 = MMC_CAR(tmpMeta101);
          tmpMeta103 = MMC_CDR(tmpMeta101);
          if (!listEmpty(tmpMeta103)) goto tmp3_end;
          tmpMeta104 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta102;
          _attr = tmpMeta104;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta105 = stringAppend(_OMC_LIT40,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta106 = stringAppend(tmpMeta105,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta106);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          if(omc_Flags_getConfigBool(threadData, _OMC_LIT85))
          {
            tmpMeta107 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta108 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT80, tmpMeta107, _attr);
            _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta108, 0 /* false */, _idx2, _vars_1, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);
          }
          else
          {
            tmpMeta109 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta110 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT80, tmpMeta109, _attr);
            _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta110, _add, _idx2, _vars_1, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);
          }

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta111,1,1) == 0) goto tmp3_end;
          tmpMeta112 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta111), 2));
          if (3 != MMC_STRLEN(tmpMeta112) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmpMeta112)) != 0) goto tmp3_end;
          tmpMeta113 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta113)) goto tmp3_end;
          tmpMeta114 = MMC_CAR(tmpMeta113);
          tmpMeta115 = MMC_CDR(tmpMeta113);
          if (!listEmpty(tmpMeta115)) goto tmp3_end;
          tmpMeta116 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta114;
          _attr = tmpMeta116;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta117 = stringAppend(_OMC_LIT41,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta118 = stringAppend(tmpMeta117,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta118);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);
          tmpMeta119 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta120 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT70, tmpMeta119, _attr);
          tmpMeta[0+0] = tmpMeta120;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta121;
          modelica_metatype tmpMeta122;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta121 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta121,1,1) == 0) goto tmp3_end;
          tmpMeta122 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta121), 2));
          if (3 != MMC_STRLEN(tmpMeta122) || strcmp(MMC_STRINGDATA(_OMC_LIT56), MMC_STRINGDATA(tmpMeta122)) != 0) goto tmp3_end;
          tmpMeta123 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta123)) goto tmp3_end;
          tmpMeta124 = MMC_CAR(tmpMeta123);
          tmpMeta125 = MMC_CDR(tmpMeta123);
          if (!listEmpty(tmpMeta125)) goto tmp3_end;
          tmpMeta126 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta124;
          _attr = tmpMeta126;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta127 = stringAppend(_OMC_LIT42,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta128 = stringAppend(tmpMeta127,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta128);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          tmpMeta129 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta130 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT71, tmpMeta129, _attr);
          _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta130, _add, _idx2, _vars_1, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta131;
          modelica_metatype tmpMeta132;
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          modelica_metatype tmpMeta137;
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          modelica_metatype tmpMeta140;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta131 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta131,1,1) == 0) goto tmp3_end;
          tmpMeta132 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta131), 2));
          if (4 != MMC_STRLEN(tmpMeta132) || strcmp(MMC_STRINGDATA(_OMC_LIT58), MMC_STRINGDATA(tmpMeta132)) != 0) goto tmp3_end;
          tmpMeta133 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta133)) goto tmp3_end;
          tmpMeta134 = MMC_CAR(tmpMeta133);
          tmpMeta135 = MMC_CDR(tmpMeta133);
          if (!listEmpty(tmpMeta135)) goto tmp3_end;
          tmpMeta136 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta134;
          _attr = tmpMeta136;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta137 = stringAppend(_OMC_LIT41,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta138 = stringAppend(tmpMeta137,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta138);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);
          tmpMeta139 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta140 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT73, tmpMeta139, _attr);
          tmpMeta[0+0] = tmpMeta140;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta141;
          modelica_metatype tmpMeta142;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          modelica_metatype tmpMeta145;
          modelica_metatype tmpMeta146;
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          modelica_metatype tmpMeta149;
          modelica_metatype tmpMeta150;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta141 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta141,1,1) == 0) goto tmp3_end;
          tmpMeta142 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta141), 2));
          if (4 != MMC_STRLEN(tmpMeta142) || strcmp(MMC_STRINGDATA(_OMC_LIT59), MMC_STRINGDATA(tmpMeta142)) != 0) goto tmp3_end;
          tmpMeta143 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta143)) goto tmp3_end;
          tmpMeta144 = MMC_CAR(tmpMeta143);
          tmpMeta145 = MMC_CDR(tmpMeta143);
          if (!listEmpty(tmpMeta145)) goto tmp3_end;
          tmpMeta146 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta144;
          _attr = tmpMeta146;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta147 = stringAppend(_OMC_LIT42,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta148 = stringAppend(tmpMeta147,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta148);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          tmpMeta149 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta150 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT74, tmpMeta149, _attr);
          _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta150, _add, _idx2, _vars_1, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta151;
          modelica_metatype tmpMeta152;
          modelica_metatype tmpMeta153;
          modelica_metatype tmpMeta154;
          modelica_metatype tmpMeta155;
          modelica_metatype tmpMeta156;
          modelica_metatype tmpMeta157;
          modelica_metatype tmpMeta158;
          modelica_metatype tmpMeta159;
          modelica_metatype tmpMeta160;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta151 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta151,1,1) == 0) goto tmp3_end;
          tmpMeta152 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta151), 2));
          if (3 != MMC_STRLEN(tmpMeta152) || strcmp(MMC_STRINGDATA(_OMC_LIT57), MMC_STRINGDATA(tmpMeta152)) != 0) goto tmp3_end;
          tmpMeta153 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta153)) goto tmp3_end;
          tmpMeta154 = MMC_CAR(tmpMeta153);
          tmpMeta155 = MMC_CDR(tmpMeta153);
          if (!listEmpty(tmpMeta155)) goto tmp3_end;
          tmpMeta156 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta154;
          _attr = tmpMeta156;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta157 = stringAppend(_OMC_LIT43,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta158 = stringAppend(tmpMeta157,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta158);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);
          tmpMeta159 = mmc_mk_cons(_e1_1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta160 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT72, tmpMeta159, _attr);
          tmpMeta[0+0] = tmpMeta160;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta161;
          modelica_metatype tmpMeta162;
          modelica_metatype tmpMeta163;
          modelica_metatype tmpMeta164;
          modelica_metatype tmpMeta165;
          modelica_metatype tmpMeta166;
          modelica_metatype tmpMeta167;
          modelica_metatype tmpMeta168;
          modelica_metatype tmpMeta169;
          modelica_metatype tmpMeta170;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta161 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta161,1,1) == 0) goto tmp3_end;
          tmpMeta162 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta161), 2));
          if (4 != MMC_STRLEN(tmpMeta162) || strcmp(MMC_STRINGDATA(_OMC_LIT60), MMC_STRINGDATA(tmpMeta162)) != 0) goto tmp3_end;
          tmpMeta163 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta163)) goto tmp3_end;
          tmpMeta164 = MMC_CAR(tmpMeta163);
          tmpMeta165 = MMC_CDR(tmpMeta163);
          if (!listEmpty(tmpMeta165)) goto tmp3_end;
          tmpMeta166 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta164;
          _attr = tmpMeta166;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta167 = stringAppend(_OMC_LIT46,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta168 = stringAppend(tmpMeta167,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta168);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);
          tmpMeta169 = mmc_mk_cons(_e1_1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta170 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT75, tmpMeta169, _attr);
          tmpMeta[0+0] = tmpMeta170;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 23: {
          modelica_metatype tmpMeta171;
          modelica_metatype tmpMeta172;
          modelica_metatype tmpMeta173;
          modelica_metatype tmpMeta174;
          modelica_metatype tmpMeta175;
          modelica_metatype tmpMeta176;
          modelica_metatype tmpMeta177;
          modelica_metatype tmpMeta178;
          modelica_metatype tmpMeta179;
          modelica_metatype tmpMeta180;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta171 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta171,1,1) == 0) goto tmp3_end;
          tmpMeta172 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta171), 2));
          if (3 != MMC_STRLEN(tmpMeta172) || strcmp(MMC_STRINGDATA(_OMC_LIT61), MMC_STRINGDATA(tmpMeta172)) != 0) goto tmp3_end;
          tmpMeta173 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta173)) goto tmp3_end;
          tmpMeta174 = MMC_CAR(tmpMeta173);
          tmpMeta175 = MMC_CDR(tmpMeta173);
          if (!listEmpty(tmpMeta175)) goto tmp3_end;
          tmpMeta176 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta174;
          _attr = tmpMeta176;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta177 = stringAppend(_OMC_LIT47,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta178 = stringAppend(tmpMeta177,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta178);
          }

          _e2 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);

          tmpMeta179 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta180 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT76, tmpMeta179, _attr);
          _e3 = omc_ReduceDAE_addOneLabel(threadData, tmpMeta180, _add, _idx2, _vars_1, _reduceList ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta[0+0] = _e3;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 24: {
          modelica_metatype tmpMeta181;
          modelica_metatype tmpMeta182;
          modelica_metatype tmpMeta183;
          modelica_metatype tmpMeta184;
          modelica_metatype tmpMeta185;
          modelica_metatype tmpMeta186;
          modelica_metatype tmpMeta187;
          modelica_metatype tmpMeta188;
          modelica_metatype tmpMeta189;
          modelica_metatype tmpMeta190;
          modelica_metatype tmpMeta191;
          modelica_metatype tmpMeta192;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta181 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta181,1,1) == 0) goto tmp3_end;
          tmpMeta182 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta181), 2));
          if (3 != MMC_STRLEN(tmpMeta182) || strcmp(MMC_STRINGDATA(_OMC_LIT49), MMC_STRINGDATA(tmpMeta182)) != 0) goto tmp3_end;
          tmpMeta183 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta183)) goto tmp3_end;
          tmpMeta184 = MMC_CAR(tmpMeta183);
          tmpMeta185 = MMC_CDR(tmpMeta183);
          if (listEmpty(tmpMeta185)) goto tmp3_end;
          tmpMeta186 = MMC_CAR(tmpMeta185);
          tmpMeta187 = MMC_CDR(tmpMeta185);
          if (!listEmpty(tmpMeta187)) goto tmp3_end;
          tmpMeta188 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta184;
          _e2 = tmpMeta186;
          _attr = tmpMeta188;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta189 = stringAppend(_OMC_LIT48,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta190 = stringAppend(tmpMeta189,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta190);
          }

          _e1_1 = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _e1, _vars, _idx, 1 /* true */, _reduceList ,&_vars_1 ,&_idx2 ,&_labels);
          tmpMeta191 = mmc_mk_cons(_e1_1, mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta192 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT50, tmpMeta191, _attr);
          tmpMeta[0+0] = tmpMeta192;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 25: {
          modelica_metatype tmpMeta193;
          modelica_metatype tmpMeta194;
          modelica_metatype tmpMeta195;
          modelica_metatype tmpMeta196;
          modelica_metatype tmpMeta197;
          modelica_metatype tmpMeta198;
          modelica_metatype tmpMeta199;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta193 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta194 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta195 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _path = tmpMeta193;
          _expl = tmpMeta194;
          _attr = tmpMeta195;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta196 = stringAppend(_OMC_LIT96,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta197 = stringAppend(tmpMeta196,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta197);
          }
          tmpMeta198 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _path, _expl, _attr);
          tmpMeta199 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta198;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta199;
          goto tmp3_done;
        }
        case 26: {
          modelica_metatype tmpMeta200;
          modelica_real tmp201;
          modelica_metatype tmpMeta202;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta200 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp201 = mmc_unbox_real(tmpMeta200);
          
          _valueR = tmp201  /* pattern as ty=Real */;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_valueR == 0.0)) goto tmp3_end;
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT97);
          }
          tmpMeta202 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _OMC_LIT18;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta202;
          goto tmp3_done;
        }
        case 27: {
          modelica_metatype tmpMeta203;
          modelica_metatype tmpMeta204;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta203 = stringAppend(_OMC_LIT98,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta204 = stringAppend(tmpMeta203,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta204);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addOneLabel(threadData, _e, _add, _idx, _vars, _reduceList, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 28: {
          modelica_metatype tmpMeta205;
          modelica_integer tmp206;
          modelica_metatype tmpMeta207;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta205 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp206 = mmc_unbox_integer(tmpMeta205);
          
          _valueI = tmp206  /* pattern as ty=Integer */;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_valueI == ((modelica_integer) 0))) goto tmp3_end;
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT99);
          }
          tmpMeta207 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _OMC_LIT100;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta207;
          goto tmp3_done;
        }
        case 29: {
          modelica_metatype tmpMeta208;
          modelica_metatype tmpMeta209;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta208 = stringAppend(_OMC_LIT101,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta209 = stringAppend(tmpMeta208,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta209);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addOneLabel(threadData, _e, _add, _idx, _vars, _reduceList, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 30: {
          modelica_metatype tmpMeta210;
          modelica_metatype tmpMeta211;
          modelica_metatype tmpMeta212;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta210 = stringAppend(_OMC_LIT102,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta211 = stringAppend(tmpMeta210,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta211);
          }
          tmpMeta212 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta212;
          goto tmp3_done;
        }
        case 31: {
          modelica_metatype tmpMeta213;
          modelica_metatype tmpMeta214;
          modelica_metatype tmpMeta215;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta213 = stringAppend(_OMC_LIT103,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta214 = stringAppend(tmpMeta213,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta214);
          }
          tmpMeta215 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta215;
          goto tmp3_done;
        }
        case 32: {
          modelica_metatype tmpMeta216;
          modelica_metatype tmpMeta217;
          modelica_metatype tmpMeta218;
          modelica_metatype tmpMeta219;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta216 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta216,2,1) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta217 = stringAppend(_OMC_LIT104,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta218 = stringAppend(tmpMeta217,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta218);
          }
          tmpMeta219 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta219;
          goto tmp3_done;
        }
        case 33: {
          modelica_metatype tmpMeta220;
          modelica_metatype tmpMeta221;
          modelica_metatype tmpMeta222;
          modelica_metatype tmpMeta223;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta220 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta220,3,1) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta221 = stringAppend(_OMC_LIT105,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta222 = stringAppend(tmpMeta221,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta222);
          }
          tmpMeta223 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta223;
          goto tmp3_done;
        }
        case 34: {
          modelica_metatype tmpMeta224;
          modelica_metatype tmpMeta225;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta224 = stringAppend(_OMC_LIT106,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta225 = stringAppend(tmpMeta224,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta225);
          }
          tmpMeta[0+0] = omc_ReduceDAE_addOneLabel(threadData, _e, _add, _idx, _vars, _reduceList, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 35: {
          modelica_metatype tmpMeta226;
          modelica_metatype tmpMeta227;
          modelica_metatype tmpMeta228;
          
          _e = tmp4_1;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta226 = stringAppend(_OMC_LIT107,omc_ExpressionBasics_printExpStr(threadData, _e));
            tmpMeta227 = stringAppend(tmpMeta226,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta227);
          }
          tmpMeta228 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta228;
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
      if (++tmp4 < 36) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _outVarLst = tmpMeta[0+1];
  _outIntdex = tmpMeta[0+2];
  _outStringList = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outVarLst) { *out_outVarLst = _outVarLst; }
  if (out_outIntdex) { *out_outIntdex = _outIntdex; }
  if (out_outStringList) { *out_outStringList = _outStringList; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_addLabelToExpForDeletion(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIntdex, modelica_metatype _add, modelica_metatype _reduceList, modelica_metatype *out_outVarLst, modelica_metatype *out_outIntdex, modelica_metatype *out_outStringList)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_add);
  _outExp = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _inExp1, _inVarLst, _inIntdex, tmp1, _reduceList, out_outVarLst, out_outIntdex, out_outStringList);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outVarLst; SimCodeVar.SimVars */
  /* skip box _outIntdex; tuple<#Integer, #Integer> */
  /* skip box _outStringList; list<String> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIntdex, modelica_boolean _add, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIntdex, modelica_metatype *out_outStringList)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIntdex = NULL;
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outVarLst has no default value.
  // _outIntdex has no default value.
  // _outStringList has no default value.
  
  
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _e = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _idx = NULL;
      modelica_metatype _labels = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _vars has no default value.
      // _idx has no default value.
      // _labels has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_string tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_Flags_getConfigString(threadData, _OMC_LIT124);
          if (8 != MMC_STRLEN(tmp6) || strcmp("deletion", MMC_STRINGDATA(tmp6)) != 0) goto goto_2;
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForDeletion(threadData, _inExp1, _inVarLst, _inIntdex, _add, _reduceList, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 1: {
          modelica_string tmp7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_Flags_getConfigString(threadData, _OMC_LIT124);
          if (12 != MMC_STRLEN(tmp7) || strcmp("substitution", MMC_STRINGDATA(tmp7)) != 0) goto goto_2;

          _e = omc_ReduceDAE_addLabelToExpForSubstitution(threadData, _inExp1, _inVarLst, _inIntdex, _reduceList, _inVarRepl ,&_vars ,&_idx ,&_labels ,NULL);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 2: {
          modelica_string tmp8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = omc_Flags_getConfigString(threadData, _OMC_LIT124);
          if (13 != MMC_STRLEN(tmp8) || strcmp("linearization", MMC_STRINGDATA(tmp8)) != 0) goto goto_2;
          tmpMeta[0+0] = omc_ReduceDAE_addLabelToExpForLinearization(threadData, _inExp1, _inVarLst, _inIntdex, _reduceList, _inVarRepl, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
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
  _outVarLst = tmpMeta[0+1];
  _outIntdex = tmpMeta[0+2];
  _outStringList = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outVarLst) { *out_outVarLst = _outVarLst; }
  if (out_outIntdex) { *out_outIntdex = _outIntdex; }
  if (out_outStringList) { *out_outStringList = _outStringList; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ReduceDAE_addLabelToExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inVarLst, modelica_metatype _inIntdex, modelica_metatype _add, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIntdex, modelica_metatype *out_outStringList)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_add);
  _outExp = omc_ReduceDAE_addLabelToExp(threadData, _inExp1, _inVarLst, _inIntdex, tmp1, _reduceList, _inVarRepl, out_outVarLst, out_outIntdex, out_outStringList);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outVarLst; SimCodeVar.SimVars */
  /* skip box _outIntdex; tuple<#Integer, #Integer> */
  /* skip box _outStringList; list<String> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToLinearEquationSystems(threadData_t *threadData, modelica_metatype _inLinear, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList)
{
  modelica_metatype _outLinear = NULL;
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIndex = NULL;
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLinear has no default value.
  // _outVarLst has no default value.
  // _outIndex has no default value.
  // _outStringList has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _inLinear;
    tmp4_2 = _inVarLst;
    tmp4_3 = _inIndex;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _vars_1 = NULL;
      modelica_metatype _vars_2 = NULL;
      modelica_metatype _idx = NULL;
      modelica_metatype _idx2 = NULL;
      modelica_metatype _idx3 = NULL;
      modelica_metatype _el = NULL;
      modelica_metatype _el2 = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_integer _i;
      modelica_integer _j;
      modelica_metatype _labels = NULL;
      modelica_metatype _labels2 = NULL;
      modelica_metatype _labels3 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _vars_1 has no default value.
      // _vars_2 has no default value.
      // _idx has no default value.
      // _idx2 has no default value.
      // _idx3 has no default value.
      // _el has no default value.
      // _el2 has no default value.
      // _rest has no default value.
      // _rest2 has no default value.
      // _i has no default value.
      // _j has no default value.
      // _labels has no default value.
      // _labels2 has no default value.
      // _labels3 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
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
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          
          _i = tmp11  /* pattern as ty=Integer */;
          _j = tmp13  /* pattern as ty=Integer */;
          _el = tmpMeta14;
          _rest = tmpMeta9;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta18 = mmc_mk_cons(_el, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta19 = omc_ReduceDAE_addLabelToEquations(threadData, tmpMeta18, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta15, &tmpMeta16, &tmpMeta17);
          if (listEmpty(tmpMeta19)) goto goto_2;
          tmpMeta20 = MMC_CAR(tmpMeta19);
          tmpMeta21 = MMC_CDR(tmpMeta19);
          if (!listEmpty(tmpMeta21)) goto goto_2;
          _el2 = tmpMeta20;
          _vars_1 = tmpMeta15;
          _idx2 = tmpMeta16;
          _labels = tmpMeta17;

          _rest2 = omc_ReduceDAE_addLabelToLinearEquationSystems(threadData, _rest, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta23 = mmc_mk_box3(0, mmc_mk_integer(_i), mmc_mk_integer(_j), _el2);
          tmpMeta22 = mmc_mk_cons(tmpMeta23, _rest2);
          tmpMeta[0+0] = tmpMeta22;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
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
  _outLinear = tmpMeta[0+0];
  _outVarLst = tmpMeta[0+1];
  _outIndex = tmpMeta[0+2];
  _outStringList = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outVarLst) { *out_outVarLst = _outVarLst; }
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outStringList) { *out_outStringList = _outStringList; }
  return _outLinear;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToAlgorithms(threadData_t *threadData, modelica_metatype _inStatements, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList)
{
  modelica_metatype _outStatements = NULL;
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIndex = NULL;
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStatements has no default value.
  // _outVarLst has no default value.
  // _outIndex has no default value.
  // _outStringList has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inStatements;
    tmp4_2 = _inVarLst;
    tmp4_3 = _inIndex;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _vars_1 = NULL;
      modelica_metatype _vars_2 = NULL;
      modelica_metatype _vars_3 = NULL;
      modelica_metatype _idx = NULL;
      modelica_metatype _idx2 = NULL;
      modelica_metatype _idx3 = NULL;
      modelica_metatype _idx4 = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _stmtLst = NULL;
      modelica_metatype _stmtLst2 = NULL;
      modelica_metatype _labels = NULL;
      modelica_metatype _labels2 = NULL;
      modelica_metatype _labels3 = NULL;
      modelica_metatype _labels4 = NULL;
      modelica_metatype _labels5 = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _stmt = NULL;
      modelica_metatype _elseWhen = NULL;
      modelica_metatype _elseWhen2 = NULL;
      modelica_metatype _else_ = NULL;
      modelica_boolean _iterIsArray;
      modelica_string _iter = NULL;
      modelica_metatype _conditions = NULL;
      modelica_boolean _initialCall;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _vars_1 has no default value.
      // _vars_2 has no default value.
      // _vars_3 has no default value.
      // _idx has no default value.
      // _idx2 has no default value.
      // _idx3 has no default value.
      // _idx4 has no default value.
      // _rest has no default value.
      // _rest2 has no default value.
      // _stmtLst has no default value.
      // _stmtLst2 has no default value.
      // _labels has no default value.
      // _labels2 has no default value.
      // _labels3 has no default value.
      // _labels4 has no default value.
      // _labels5 has no default value.
      // _ty has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _source has no default value.
      // _stmt has no default value.
      // _elseWhen has no default value.
      // _elseWhen2 has no default value.
      // _else_ has no default value.
      // _iterIsArray has no default value.
      // _iter has no default value.
      // _conditions has no default value.
      // _initialCall has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT125);
          }
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta7;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,4) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 5));
          
          _ty = tmpMeta10;
          _e1 = tmpMeta11;
          _e = tmpMeta12;
          _source = tmpMeta13;
          _rest = tmpMeta9;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT126);
          }

          _e2 = omc_ReduceDAE_addLabelToExp(threadData, _e, _vars, _idx, 1 /* true */, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          _rest2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _rest, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta15 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _ty, _e1, _e2, _source);
          tmpMeta14 = mmc_mk_cons(tmpMeta15, _rest2);
          tmpMeta[0+0] = tmpMeta14;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,3,4) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 4));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 5));
          
          _e = tmpMeta18;
          _stmtLst = tmpMeta19;
          _else_ = tmpMeta20;
          _source = tmpMeta21;
          _rest = tmpMeta17;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT127);
          }

          _stmtLst2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _stmtLst, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          _rest2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _rest, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta23 = mmc_mk_box5(6, &DAE_Statement_STMT__IF__desc, _e, _stmtLst2, _else_, _source);
          tmpMeta22 = mmc_mk_cons(tmpMeta23, _rest2);
          tmpMeta[0+0] = tmpMeta22;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmp4_1);
          tmpMeta25 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,4,6) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 3));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 4));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 5));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 6));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 7));
          
          _ty = tmpMeta26;
          _iterIsArray = tmp28  /* pattern as ty=Boolean */;
          _iter = tmpMeta29;
          _e = tmpMeta30;
          _stmtLst = tmpMeta31;
          _source = tmpMeta32;
          _rest = tmpMeta25;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT128);
          }

          _stmtLst2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _stmtLst, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          _rest2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _rest, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta34 = mmc_mk_box7(7, &DAE_Statement_STMT__FOR__desc, _ty, mmc_mk_boolean(_iterIsArray), _iter, _e, _stmtLst2, _source);
          tmpMeta33 = mmc_mk_cons(tmpMeta34, _rest2);
          tmpMeta[0+0] = tmpMeta33;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta35 = MMC_CAR(tmp4_1);
          tmpMeta36 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,6,3) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 3));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 4));
          
          _e = tmpMeta37;
          _stmtLst = tmpMeta38;
          _source = tmpMeta39;
          _rest = tmpMeta36;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT129);
          }

          _stmtLst2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _stmtLst, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          _rest2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _rest, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta41 = mmc_mk_box4(9, &DAE_Statement_STMT__WHILE__desc, _e, _stmtLst2, _source);
          tmpMeta40 = mmc_mk_cons(tmpMeta41, _rest2);
          tmpMeta[0+0] = tmpMeta40;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_integer tmp47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta42 = MMC_CAR(tmp4_1);
          tmpMeta43 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,7,6) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 2));
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 3));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 4));
          tmp47 = mmc_unbox_integer(tmpMeta46);
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 5));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 6));
          if (!optionNone(tmpMeta49)) goto tmp3_end;
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 7));
          
          _e = tmpMeta44;
          _conditions = tmpMeta45;
          _initialCall = tmp47  /* pattern as ty=Boolean */;
          _stmtLst = tmpMeta48;
          _source = tmpMeta50;
          _rest = tmpMeta43;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT130);
          }

          _stmtLst2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _stmtLst, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          _rest2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _rest, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta52 = mmc_mk_box7(10, &DAE_Statement_STMT__WHEN__desc, _e, _conditions, mmc_mk_boolean(_initialCall), _stmtLst2, mmc_mk_none(), _source);
          tmpMeta51 = mmc_mk_cons(tmpMeta52, _rest2);
          tmpMeta[0+0] = tmpMeta51;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_integer tmp58;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta53 = MMC_CAR(tmp4_1);
          tmpMeta54 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta53,7,6) == 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 2));
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 3));
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 4));
          tmp58 = mmc_unbox_integer(tmpMeta57);
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 5));
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 6));
          if (optionNone(tmpMeta60)) goto tmp3_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 1));
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 7));
          
          _e = tmpMeta55;
          _conditions = tmpMeta56;
          _initialCall = tmp58  /* pattern as ty=Boolean */;
          _stmtLst = tmpMeta59;
          _elseWhen = tmpMeta61;
          _source = tmpMeta62;
          _rest = tmpMeta54;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT131);
          }

          _stmtLst2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _stmtLst, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          /* Pattern-matching tuple assignment */
          tmpMeta66 = mmc_mk_cons(_elseWhen, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta67 = omc_ReduceDAE_addLabelToAlgorithms(threadData, tmpMeta66, _vars_1, _idx2, _reduceList, _inVarRepl, &tmpMeta63, &tmpMeta64, &tmpMeta65);
          if (listEmpty(tmpMeta67)) goto goto_2;
          tmpMeta68 = MMC_CAR(tmpMeta67);
          tmpMeta69 = MMC_CDR(tmpMeta67);
          if (!listEmpty(tmpMeta69)) goto goto_2;
          _elseWhen2 = tmpMeta68;
          _vars_2 = tmpMeta63;
          _idx3 = tmpMeta64;
          _labels2 = tmpMeta65;

          _rest2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _rest, _vars_2, _idx3, _reduceList, _inVarRepl ,&_vars_3 ,&_idx4 ,&_labels3);

          _labels4 = listAppend(_labels, _labels2);

          _labels5 = listAppend(_labels4, _labels3);
          tmpMeta71 = mmc_mk_box7(10, &DAE_Statement_STMT__WHEN__desc, _e, _conditions, mmc_mk_boolean(_initialCall), _stmtLst2, mmc_mk_some(_elseWhen2), _source);
          tmpMeta70 = mmc_mk_cons(tmpMeta71, _rest2);
          tmpMeta[0+0] = tmpMeta70;
          tmpMeta[0+1] = _vars_3;
          tmpMeta[0+2] = _idx4;
          tmpMeta[0+3] = _labels5;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta72 = MMC_CAR(tmp4_1);
          tmpMeta73 = MMC_CDR(tmp4_1);
          
          _stmt = tmpMeta72;
          _rest = tmpMeta73;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT132);
          }

          _rest2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _rest, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);
          tmpMeta74 = mmc_mk_cons(_stmt, _rest2);
          tmpMeta[0+0] = tmpMeta74;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels;
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
  _outStatements = tmpMeta[0+0];
  _outVarLst = tmpMeta[0+1];
  _outIndex = tmpMeta[0+2];
  _outStringList = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outVarLst) { *out_outVarLst = _outVarLst; }
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outStringList) { *out_outStringList = _outStringList; }
  return _outStatements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_addLabelToEquations(threadData_t *threadData, modelica_metatype _inEquationLst1, modelica_metatype _inVarLst, modelica_metatype _inIndex, modelica_metatype _reduceList, modelica_metatype _inVarRepl, modelica_metatype *out_outVarLst, modelica_metatype *out_outIndex, modelica_metatype *out_outStringList)
{
  modelica_metatype _outEquationLst = NULL;
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIndex = NULL;
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquationLst has no default value.
  // _outVarLst has no default value.
  // _outIndex has no default value.
  // _outStringList has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inEquationLst1;
    tmp4_2 = _inVarLst;
    tmp4_3 = _inIndex;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _es_1 = NULL;
      modelica_metatype _es = NULL;
      modelica_metatype _nl = NULL;
      modelica_metatype _nl_1 = NULL;
      modelica_metatype _disc = NULL;
      modelica_metatype _cont = NULL;
      modelica_metatype _cont_1 = NULL;
      modelica_metatype _eq = NULL;
      modelica_metatype _elsePart = NULL;
      modelica_metatype _b = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _sourcelist = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _vars_1 = NULL;
      modelica_metatype _vars_2 = NULL;
      modelica_metatype _labels = NULL;
      modelica_metatype _labels2 = NULL;
      modelica_metatype _labels3 = NULL;
      modelica_metatype _idx = NULL;
      modelica_metatype _idx2 = NULL;
      modelica_metatype _idx3 = NULL;
      modelica_integer _i;
      modelica_integer _res_i;
      modelica_integer _indexSys;
      modelica_integer _idxLS;
      modelica_integer _idxNLS;
      modelica_integer _nUnknownsLS;
      modelica_integer _nUnknownsNLS;
      modelica_metatype _conditions = NULL;
      modelica_boolean _partOfLinear;
      modelica_boolean _tornSystem;
      modelica_boolean _initialCall;
      modelica_metatype _whenStmtLst = NULL;
      modelica_metatype _A = NULL;
      modelica_metatype _A2 = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _varsLin = NULL;
      modelica_metatype _discVars = NULL;
      modelica_metatype _statements = NULL;
      modelica_metatype _statements2 = NULL;
      modelica_metatype _residual = NULL;
      modelica_metatype _jacobianMatrix = NULL;
      modelica_metatype _eqAttr = NULL;
      modelica_boolean _partOfJac;
      modelica_metatype _clockIndex = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e2 has no default value.
      // _es_1 has no default value.
      // _es has no default value.
      // _nl has no default value.
      // _nl_1 has no default value.
      // _disc has no default value.
      // _cont has no default value.
      // _cont_1 has no default value.
      // _eq has no default value.
      // _elsePart has no default value.
      // _b has no default value.
      // _cr has no default value.
      // _source has no default value.
      // _sourcelist has no default value.
      // _vars has no default value.
      // _vars_1 has no default value.
      // _vars_2 has no default value.
      // _labels has no default value.
      // _labels2 has no default value.
      // _labels3 has no default value.
      // _idx has no default value.
      // _idx2 has no default value.
      // _idx3 has no default value.
      // _i has no default value.
      // _res_i has no default value.
      // _indexSys has no default value.
      // _idxLS has no default value.
      // _idxNLS has no default value.
      // _nUnknownsLS has no default value.
      // _nUnknownsNLS has no default value.
      // _conditions has no default value.
      // _partOfLinear has no default value.
      // _tornSystem has no default value.
      // _initialCall has no default value.
      // _whenStmtLst has no default value.
      // _A has no default value.
      // _A2 has no default value.
      // _crefs has no default value.
      // _varsLin has no default value.
      // _discVars has no default value.
      // _statements has no default value.
      // _statements2 has no default value.
      // _residual has no default value.
      // _jacobianMatrix has no default value.
      // _eqAttr has no default value.
      // _partOfJac has no default value.
      // _clockIndex has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = _vars;
          tmpMeta[0+2] = _idx;
          tmpMeta[0+3] = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
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
          modelica_metatype tmpMeta18;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,5) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 5));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 6));
          
          _i = tmp11  /* pattern as ty=Integer */;
          _res_i = tmp13  /* pattern as ty=Integer */;
          _e = tmpMeta14;
          _source = tmpMeta15;
          _eqAttr = tmpMeta16;
          _es = tmpMeta9;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT133);
          }

          _e2 = omc_ReduceDAE_addLabelToExp(threadData, _e, _vars, _idx, 1 /* true */, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          _e2 = omc_ExpressionSimplify_simplify(threadData, _e2, NULL);

          _es_1 = omc_ReduceDAE_addLabelToEquations(threadData, _es, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta18 = mmc_mk_box6(3, &SimCode_SimEqSystem_SES__RESIDUAL__desc, mmc_mk_integer(_i), mmc_mk_integer(_res_i), _e2, _source, _eqAttr);
          tmpMeta17 = mmc_mk_cons(tmpMeta18, _es_1);
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 2: {
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta19 = MMC_CAR(tmp4_1);
          tmpMeta20 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,3,5) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 4));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 5));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 6));
          
          _i = tmp22  /* pattern as ty=Integer */;
          _cr = tmpMeta23;
          _e = tmpMeta24;
          _source = tmpMeta25;
          _eqAttr = tmpMeta26;
          _es = tmpMeta20;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT134);
          }

          _e2 = omc_ReduceDAE_addLabelToExp(threadData, _e, _vars, _idx, 1 /* true */, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          _e2 = omc_ExpressionSimplify_simplify(threadData, _e2, NULL);

          _es_1 = omc_ReduceDAE_addLabelToEquations(threadData, _es, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta28 = mmc_mk_box6(6, &SimCode_SimEqSystem_SES__SIMPLE__ASSIGN__desc, mmc_mk_integer(_i), _cr, _e2, _source, _eqAttr);
          tmpMeta27 = mmc_mk_cons(tmpMeta28, _es_1);
          tmpMeta[0+0] = tmpMeta27;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta29 = MMC_CAR(tmp4_1);
          tmpMeta30 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,10,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          tmp32 = mmc_unbox_integer(tmpMeta31);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 3));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 4));
          
          _i = tmp32  /* pattern as ty=Integer */;
          _statements = tmpMeta33;
          _eqAttr = tmpMeta34;
          _es = tmpMeta30;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT135);
          }

          _statements2 = omc_ReduceDAE_addLabelToAlgorithms(threadData, _statements, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          _es_1 = omc_ReduceDAE_addLabelToEquations(threadData, _es, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta36 = mmc_mk_box4(13, &SimCode_SimEqSystem_SES__ALGORITHM__desc, mmc_mk_integer(_i), _statements2, _eqAttr);
          tmpMeta35 = mmc_mk_cons(tmpMeta36, _es_1);
          tmpMeta[0+0] = tmpMeta35;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_integer tmp41;
          modelica_metatype tmpMeta42;
          modelica_integer tmp43;
          modelica_metatype tmpMeta44;
          modelica_integer tmp45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_integer tmp53;
          modelica_metatype tmpMeta54;
          modelica_integer tmp55;
          modelica_metatype tmpMeta56;
          modelica_integer tmp57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta37 = MMC_CAR(tmp4_1);
          tmpMeta38 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,12,3) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
          tmp41 = mmc_unbox_integer(tmpMeta40);
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 3));
          tmp43 = mmc_unbox_integer(tmpMeta42);
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 4));
          tmp45 = mmc_unbox_integer(tmpMeta44);
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 5));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 6));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 7));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 8));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 9));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 10));
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 11));
          tmp53 = mmc_unbox_integer(tmpMeta52);
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 12));
          tmp55 = mmc_unbox_integer(tmpMeta54);
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 13));
          tmp57 = mmc_unbox_integer(tmpMeta56);
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 3));
          if (!optionNone(tmpMeta58)) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 4));
          
          _i = tmp41  /* pattern as ty=Integer */;
          _partOfLinear = tmp43  /* pattern as ty=Boolean */;
          _tornSystem = tmp45  /* pattern as ty=Boolean */;
          _varsLin = tmpMeta46;
          _b = tmpMeta47;
          _A = tmpMeta48;
          _residual = tmpMeta49;
          _jacobianMatrix = tmpMeta50;
          _sourcelist = tmpMeta51;
          _idxLS = tmp53  /* pattern as ty=Integer */;
          _nUnknownsLS = tmp55  /* pattern as ty=Integer */;
          _partOfJac = tmp57  /* pattern as ty=Boolean */;
          _eqAttr = tmpMeta59;
          _es = tmpMeta38;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT136);
          }

          _A2 = omc_ReduceDAE_addLabelToLinearEquationSystems(threadData, _A, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          _es_1 = omc_ReduceDAE_addLabelToEquations(threadData, _es, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta61 = mmc_mk_box13(3, &SimCode_LinearSystem_LINEARSYSTEM__desc, mmc_mk_integer(_i), mmc_mk_boolean(_partOfLinear), mmc_mk_boolean(_tornSystem), _varsLin, _b, _A2, _residual, _jacobianMatrix, _sourcelist, mmc_mk_integer(_idxLS), mmc_mk_integer(_nUnknownsLS), mmc_mk_boolean(_partOfJac));
          tmpMeta62 = mmc_mk_box4(15, &SimCode_SimEqSystem_SES__LINEAR__desc, tmpMeta61, mmc_mk_none(), _eqAttr);
          tmpMeta60 = mmc_mk_cons(tmpMeta62, _es_1);
          tmpMeta[0+0] = tmpMeta60;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_integer tmp67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_integer tmp71;
          modelica_metatype tmpMeta72;
          modelica_integer tmp73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta63 = MMC_CAR(tmp4_1);
          tmpMeta64 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta63,13,3) == 0) goto tmp3_end;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 2));
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta65), 2));
          tmp67 = mmc_unbox_integer(tmpMeta66);
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta65), 3));
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta65), 4));
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta65), 5));
          tmp71 = mmc_unbox_integer(tmpMeta70);
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta65), 6));
          tmp73 = mmc_unbox_integer(tmpMeta72);
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta65), 7));
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta65), 11));
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 3));
          if (!optionNone(tmpMeta76)) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 4));
          
          _i = tmp67  /* pattern as ty=Integer */;
          _nl = tmpMeta68;
          _crefs = tmpMeta69;
          _idxNLS = tmp71  /* pattern as ty=Integer */;
          _nUnknownsNLS = tmp73  /* pattern as ty=Integer */;
          _jacobianMatrix = tmpMeta74;
          _clockIndex = tmpMeta75;
          _eqAttr = tmpMeta77;
          _es = tmpMeta64;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT137);
          }

          _nl_1 = omc_ReduceDAE_addLabelToEquations(threadData, _nl, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);

          _es_1 = omc_ReduceDAE_addLabelToEquations(threadData, _es, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta79 = mmc_mk_box11(3, &SimCode_NonlinearSystem_NONLINEARSYSTEM__desc, mmc_mk_integer(_i), _nl_1, _crefs, mmc_mk_integer(_idxNLS), mmc_mk_integer(_nUnknownsNLS), _jacobianMatrix, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), _clockIndex);
          tmpMeta80 = mmc_mk_box4(16, &SimCode_SimEqSystem_SES__NONLINEAR__desc, tmpMeta79, mmc_mk_none(), _eqAttr);
          tmpMeta78 = mmc_mk_cons(tmpMeta80, _es_1);
          tmpMeta[0+0] = tmpMeta78;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_integer tmp84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_integer tmp89;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta81 = MMC_CAR(tmp4_1);
          tmpMeta82 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta81,14,6) == 0) goto tmp3_end;
          tmpMeta83 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta81), 2));
          tmp84 = mmc_unbox_integer(tmpMeta83);
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta81), 3));
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta81), 4));
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta81), 5));
          tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta81), 6));
          tmp89 = mmc_unbox_integer(tmpMeta88);
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta81), 7));
          
          _i = tmp84  /* pattern as ty=Integer */;
          _cont = tmpMeta85;
          _discVars = tmpMeta86;
          _disc = tmpMeta87;
          _indexSys = tmp89  /* pattern as ty=Integer */;
          _eqAttr = tmpMeta90;
          _es = tmpMeta82;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT138);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta94 = mmc_mk_cons(_cont, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta95 = omc_ReduceDAE_addLabelToEquations(threadData, tmpMeta94, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta91, &tmpMeta92, &tmpMeta93);
          if (listEmpty(tmpMeta95)) goto goto_2;
          tmpMeta96 = MMC_CAR(tmpMeta95);
          tmpMeta97 = MMC_CDR(tmpMeta95);
          if (!listEmpty(tmpMeta97)) goto goto_2;
          _cont_1 = tmpMeta96;
          _vars_1 = tmpMeta91;
          _idx2 = tmpMeta92;
          _labels = tmpMeta93;

          _es_1 = omc_ReduceDAE_addLabelToEquations(threadData, _es, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta99 = mmc_mk_box7(17, &SimCode_SimEqSystem_SES__MIXED__desc, mmc_mk_integer(_i), _cont_1, _discVars, _disc, mmc_mk_integer(_indexSys), _eqAttr);
          tmpMeta98 = mmc_mk_cons(tmpMeta99, _es_1);
          tmpMeta[0+0] = tmpMeta98;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_integer tmp103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_integer tmp106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta100 = MMC_CAR(tmp4_1);
          tmpMeta101 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta100,15,7) == 0) goto tmp3_end;
          tmpMeta102 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta100), 2));
          tmp103 = mmc_unbox_integer(tmpMeta102);
          tmpMeta104 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta100), 3));
          tmpMeta105 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta100), 4));
          tmp106 = mmc_unbox_integer(tmpMeta105);
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta100), 5));
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta100), 6));
          if (!optionNone(tmpMeta108)) goto tmp3_end;
          tmpMeta109 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta100), 7));
          tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta100), 8));
          
          _i = tmp103  /* pattern as ty=Integer */;
          _conditions = tmpMeta104;
          _initialCall = tmp106  /* pattern as ty=Boolean */;
          _whenStmtLst = tmpMeta107;
          _source = tmpMeta109;
          _eqAttr = tmpMeta110;
          _es = tmpMeta101;
          _vars = tmp4_2;
          _idx = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT139);
          }

          _es_1 = omc_ReduceDAE_addLabelToEquations(threadData, _es, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);
          tmpMeta112 = mmc_mk_box8(18, &SimCode_SimEqSystem_SES__WHEN__desc, mmc_mk_integer(_i), _conditions, mmc_mk_boolean(_initialCall), _whenStmtLst, mmc_mk_none(), _source, _eqAttr);
          tmpMeta111 = mmc_mk_cons(tmpMeta112, _es_1);
          tmpMeta[0+0] = tmpMeta111;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_integer tmp116;
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_integer tmp119;
          modelica_metatype tmpMeta120;
          modelica_metatype tmpMeta121;
          modelica_metatype tmpMeta122;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          modelica_metatype tmpMeta132;
          modelica_metatype tmpMeta133;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta113 = MMC_CAR(tmp4_1);
          tmpMeta114 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta113,15,7) == 0) goto tmp3_end;
          tmpMeta115 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 2));
          tmp116 = mmc_unbox_integer(tmpMeta115);
          tmpMeta117 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 3));
          tmpMeta118 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 4));
          tmp119 = mmc_unbox_integer(tmpMeta118);
          tmpMeta120 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 5));
          tmpMeta121 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 6));
          if (optionNone(tmpMeta121)) goto tmp3_end;
          tmpMeta122 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta121), 1));
          tmpMeta123 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 7));
          tmpMeta124 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 8));
          
          _i = tmp116  /* pattern as ty=Integer */;
          _conditions = tmpMeta117;
          _initialCall = tmp119  /* pattern as ty=Boolean */;
          _whenStmtLst = tmpMeta120;
          _elsePart = tmpMeta122;
          _source = tmpMeta123;
          _eqAttr = tmpMeta124;
          _es = tmpMeta114;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT140);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta128 = mmc_mk_cons(_elsePart, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta129 = omc_ReduceDAE_addLabelToEquations(threadData, tmpMeta128, _vars, _idx, _reduceList, _inVarRepl, &tmpMeta125, &tmpMeta126, &tmpMeta127);
          if (listEmpty(tmpMeta129)) goto goto_2;
          tmpMeta130 = MMC_CAR(tmpMeta129);
          tmpMeta131 = MMC_CDR(tmpMeta129);
          if (!listEmpty(tmpMeta131)) goto goto_2;
          _elsePart = tmpMeta130;
          _vars_1 = tmpMeta125;
          _idx2 = tmpMeta126;
          _labels = tmpMeta127;

          _es_1 = omc_ReduceDAE_addLabelToEquations(threadData, _es, _vars_1, _idx2, _reduceList, _inVarRepl ,&_vars_2 ,&_idx3 ,&_labels2);

          _labels3 = listAppend(_labels, _labels2);
          tmpMeta133 = mmc_mk_box8(18, &SimCode_SimEqSystem_SES__WHEN__desc, mmc_mk_integer(_i), _conditions, mmc_mk_boolean(_initialCall), _whenStmtLst, mmc_mk_some(_elsePart), _source, _eqAttr);
          tmpMeta132 = mmc_mk_cons(tmpMeta133, _es_1);
          tmpMeta[0+0] = tmpMeta132;
          tmpMeta[0+1] = _vars_2;
          tmpMeta[0+2] = _idx3;
          tmpMeta[0+3] = _labels3;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta134 = MMC_CAR(tmp4_1);
          tmpMeta135 = MMC_CDR(tmp4_1);
          
          _eq = tmpMeta134;
          _es = tmpMeta135;
          _vars = tmp4_2;
          _idx = tmp4_3;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT141);
          }

          _es_1 = omc_ReduceDAE_addLabelToEquations(threadData, _es, _vars, _idx, _reduceList, _inVarRepl ,&_vars_1 ,&_idx2 ,&_labels);
          tmpMeta136 = mmc_mk_cons(_eq, _es_1);
          tmpMeta[0+0] = tmpMeta136;
          tmpMeta[0+1] = _vars_1;
          tmpMeta[0+2] = _idx2;
          tmpMeta[0+3] = _labels;
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
      if (++tmp4 < 10) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outEquationLst = tmpMeta[0+0];
  _outVarLst = tmpMeta[0+1];
  _outIndex = tmpMeta[0+2];
  _outStringList = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outVarLst) { *out_outVarLst = _outVarLst; }
  if (out_outIndex) { *out_outIndex = _outIndex; }
  if (out_outStringList) { *out_outStringList = _outStringList; }
  return _outEquationLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_meanValueReplacements2(threadData_t *threadData, modelica_metatype _inVarRepl, modelica_metatype _inVarList, modelica_metatype _inValuesList)
{
  modelica_metatype _outVarRepl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarRepl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inVarRepl;
    tmp4_2 = _inVarList;
    tmp4_3 = _inValuesList;
    {
      modelica_metatype _repl = NULL;
      modelica_metatype _name = NULL;
      modelica_metatype _restVar = NULL;
      modelica_string _value = NULL;
      modelica_integer _value2;
      modelica_metatype _restVal = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _repl has no default value.
      // _name has no default value.
      // _restVar has no default value.
      // _value has no default value.
      // _value2 has no default value.
      // _restVal has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          if (!listEmpty(tmp4_3)) goto tmp3_end;
          
          _repl = tmp4_1;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _repl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_3);
          tmpMeta7 = MMC_CDR(tmp4_3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          
          _value = tmpMeta8;
          _repl = tmp4_1;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta9 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(stringReal(_value)));
          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _OMC_LIT143, tmpMeta9, mmc_mk_none());

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT144);
          }
          tmpMeta1 = _repl;
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
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 13));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,1,1) == 0) goto tmp3_end;
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_3);
          tmpMeta15 = MMC_CDR(tmp4_3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          
          _name = tmpMeta12;
          _restVar = tmpMeta11;
          _value = tmpMeta16;
          _restVal = tmpMeta15;
          _repl = tmp4_1;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta17 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(stringReal(_value)));
          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _name, tmpMeta17, mmc_mk_none());

          _repl = omc_ReduceDAE_meanValueReplacements2(threadData, _repl, _restVar, _restVal);

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta18 = stringAppend(_OMC_LIT145,omc_ComponentReferenceBasics_printComponentRefStr(threadData, _name));
            tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT146);
            tmpMeta20 = stringAppend(tmpMeta19,_value);
            tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta21);
          }
          tmpMeta1 = _repl;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta22 = MMC_CAR(tmp4_2);
          tmpMeta23 = MMC_CDR(tmp4_2);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 13));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,1,1) == 0) goto tmp3_end;
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta26 = MMC_CAR(tmp4_3);
          tmpMeta27 = MMC_CDR(tmp4_3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,1) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          tmp29 = mmc_unbox_integer(tmpMeta28);
          
          _name = tmpMeta24;
          _restVar = tmpMeta23;
          _value2 = tmp29  /* pattern as ty=Integer */;
          _restVal = tmpMeta27;
          _repl = tmp4_1;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _value = intString(_value2);

          tmpMeta30 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(stringReal(_value)));
          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _name, tmpMeta30, mmc_mk_none());

          _repl = omc_ReduceDAE_meanValueReplacements2(threadData, _repl, _restVar, _restVal);

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta31 = stringAppend(_OMC_LIT145,omc_ComponentReferenceBasics_printComponentRefStr(threadData, _name));
            tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT146);
            tmpMeta33 = stringAppend(tmpMeta32,_value);
            tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta34);
          }
          tmpMeta1 = _repl;
          goto tmp3_done;
        }
        case 4: {
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
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta35 = MMC_CAR(tmp4_2);
          tmpMeta36 = MMC_CDR(tmp4_2);
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 13));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,1,1) == 0) goto tmp3_end;
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta39 = MMC_CAR(tmp4_3);
          tmpMeta40 = MMC_CDR(tmp4_3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta39,6,2) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,6,0) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,1,1) == 0) goto tmp3_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 2));
          
          _name = tmpMeta37;
          _restVar = tmpMeta36;
          _value = tmpMeta43;
          _restVal = tmpMeta40;
          _repl = tmp4_1;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta44 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(stringReal(_value)));
          tmpMeta45 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, _OMC_LIT147, tmpMeta44);
          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _name, tmpMeta45, mmc_mk_none());

          _repl = omc_ReduceDAE_meanValueReplacements2(threadData, _repl, _restVar, _restVal);

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta46 = stringAppend(_OMC_LIT145,omc_ComponentReferenceBasics_printComponentRefStr(threadData, _name));
            tmpMeta47 = stringAppend(tmpMeta46,_OMC_LIT148);
            tmpMeta48 = stringAppend(tmpMeta47,_value);
            tmpMeta49 = stringAppend(tmpMeta48,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta49);
          }
          tmpMeta1 = _repl;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_integer tmp59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta50 = MMC_CAR(tmp4_2);
          tmpMeta51 = MMC_CDR(tmp4_2);
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta50), 2));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta50), 13));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta53,1,1) == 0) goto tmp3_end;
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta54 = MMC_CAR(tmp4_3);
          tmpMeta55 = MMC_CDR(tmp4_3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta54,6,2) == 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta56,6,0) == 0) goto tmp3_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta57,0,1) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 2));
          tmp59 = mmc_unbox_integer(tmpMeta58);
          
          _name = tmpMeta52;
          _restVar = tmpMeta51;
          _value2 = tmp59  /* pattern as ty=Integer */;
          _restVal = tmpMeta55;
          _repl = tmp4_1;
          /* Pattern matching succeeded */
          _value = intString(_value2);

          tmpMeta60 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(stringReal(_value)));
          tmpMeta61 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, _OMC_LIT147, tmpMeta60);
          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _name, tmpMeta61, mmc_mk_none());

          _repl = omc_ReduceDAE_meanValueReplacements2(threadData, _repl, _restVar, _restVal);

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta62 = stringAppend(_OMC_LIT145,omc_ComponentReferenceBasics_printComponentRefStr(threadData, _name));
            tmpMeta63 = stringAppend(tmpMeta62,_OMC_LIT148);
            tmpMeta64 = stringAppend(tmpMeta63,_value);
            tmpMeta65 = stringAppend(tmpMeta64,_OMC_LIT26);
            omc_Debug_trace(threadData, tmpMeta65);
          }
          tmpMeta1 = _repl;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta66 = MMC_CAR(tmp4_2);
          tmpMeta67 = MMC_CDR(tmp4_2);
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta68 = MMC_CAR(tmp4_3);
          tmpMeta69 = MMC_CDR(tmp4_3);
          
          _repl = tmp4_1;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            omc_Debug_trace(threadData, _OMC_LIT149);
          }
          tmpMeta1 = _repl;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta70 = MMC_CAR(tmp4_2);
          tmpMeta71 = MMC_CDR(tmp4_2);
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta72 = MMC_CAR(tmp4_3);
          tmpMeta73 = MMC_CDR(tmp4_3);
          
          _restVar = tmpMeta71;
          _restVal = tmpMeta73;
          _repl = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_ReduceDAE_meanValueReplacements2(threadData, _repl, _restVar, _restVal);
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
  _outVarRepl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVarRepl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ReduceDAE_meanValueReplacements(threadData_t *threadData, modelica_metatype _inVarLst, modelica_metatype _exp_list)
{
  modelica_metatype _outVarRepl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarRepl has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVarLst;
    {
      modelica_metatype _alg = NULL;
      modelica_metatype _intAlg = NULL;
      modelica_metatype _boolAlg = NULL;
      modelica_metatype _states = NULL;
      modelica_metatype _listVars = NULL;
      modelica_metatype _listVars1 = NULL;
      modelica_metatype _listVars2 = NULL;
      modelica_metatype _repl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _alg has no default value.
      // _intAlg has no default value.
      // _boolAlg has no default value.
      // _states has no default value.
      // _listVars has no default value.
      // _listVars1 has no default value.
      // _listVars2 has no default value.
      // _repl has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          
          _states = tmpMeta6;
          _alg = tmpMeta7;
          _intAlg = tmpMeta8;
          _boolAlg = tmpMeta9;
          /* Pattern matching succeeded */
          _repl = omc_BackendVarTransform_emptyReplacements(threadData);

          _listVars1 = listAppend(_alg, _intAlg);

          _listVars2 = listAppend(_listVars1, _boolAlg);

          _listVars = listAppend(_listVars2, _states);
          tmpMeta1 = omc_ReduceDAE_meanValueReplacements2(threadData, _repl, _listVars, _exp_list);
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
  _outVarRepl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVarRepl;
}

DLLDirection
modelica_metatype omc_ReduceDAE_reduceTerms(threadData_t *threadData, modelica_metatype _inEquationLst, modelica_metatype _inModelInfo, modelica_metatype _inArgs, modelica_metatype *out_outModelInfo)
{
  modelica_metatype _outEquationLst = NULL;
  modelica_metatype _outModelInfo = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquationLst has no default value.
  // _outModelInfo has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _inEquationLst;
    tmp4_2 = _inModelInfo;
    tmp4_3 = _inArgs;
    {
      modelica_metatype _eqns = NULL;
      modelica_metatype _reduceList = NULL;
      modelica_metatype _inExpArgList = NULL;
      modelica_metatype _inNamedArgList = NULL;
      modelica_metatype _outExpList = NULL;
      modelica_string _reduceListStr = NULL;
      modelica_metatype _modelInfo = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqns has no default value.
      // _reduceList has no default value.
      // _inExpArgList has no default value.
      // _inNamedArgList has no default value.
      // _outExpList has no default value.
      _reduceListStr = (modelica_string) mmc_emptystring;
      // _modelInfo has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          
          _inExpArgList = tmpMeta6;
          _inNamedArgList = tmpMeta7;
          _eqns = tmp4_1;
          _modelInfo = tmp4_2;
          /* Pattern matching succeeded */
          omc_AbsynUtil_getNamedFuncArgNamesAndValues(threadData, _inNamedArgList ,&_outExpList);

          _reduceListStr = omc_System_stringReplace(threadData, omc_ExpressionBasics_printExpStr(threadData, omc_Expression_fromAbsynExp(threadData, listGet(_outExpList, ((modelica_integer) 1)))), _OMC_LIT150, _OMC_LIT9);

          _reduceList = omc_ReduceDAE_StringDelimit2Int(threadData, _reduceListStr, _OMC_LIT151);
          tmpMeta8 = mmc_mk_box3(3, &Absyn_FunctionArgs_FUNCTIONARGS__desc, _inExpArgList, _inNamedArgList);
          tmpMeta[0+0] = omc_ReduceDAE_buildLabels(threadData, _eqns, _modelInfo, _reduceList, tmpMeta8, &tmpMeta[0+1]);
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
  _outEquationLst = tmpMeta[0+0];
  _outModelInfo = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outModelInfo) { *out_outModelInfo = _outModelInfo; }
  return _outEquationLst;
}

DLLDirection
modelica_metatype omc_ReduceDAE_buildLabels(threadData_t *threadData, modelica_metatype _inEquationLst, modelica_metatype _inModelInfo, modelica_metatype _reduceList, modelica_metatype _inArgs, modelica_metatype *out_outModelInfo)
{
  modelica_metatype _outEquationLst = NULL;
  modelica_metatype _outModelInfo = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquationLst has no default value.
  // _outModelInfo has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inEquationLst;
    tmp4_2 = _inModelInfo;
    tmp4_3 = _inArgs;
    {
      modelica_metatype _modelInfo = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqns_1 = NULL;
      modelica_metatype _varInfo = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _vars_1 = NULL;
      modelica_metatype _labels = NULL;
      modelica_metatype _labels_1 = NULL;
      modelica_metatype _labels_2 = NULL;
      modelica_integer _p;
      modelica_metatype _exp_list = NULL;
      modelica_metatype _repl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _modelInfo has no default value.
      // _eqns has no default value.
      // _eqns_1 has no default value.
      // _varInfo has no default value.
      // _vars has no default value.
      // _vars_1 has no default value.
      // _labels has no default value.
      // _labels_1 has no default value.
      // _labels_2 has no default value.
      // _p has no default value.
      // _exp_list has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,1) == 0) goto tmp3_end;
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,13,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          
          _exp_list = tmpMeta11;
          _eqns = tmp4_1;
          _modelInfo = tmp4_2;
          _varInfo = tmpMeta12;
          /* Pattern matching succeeded */
          _repl = omc_ReduceDAE_meanValueReplacements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 11))), _exp_list);

          /* Pattern-matching tuple assignment */
          tmpMeta18 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 0)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 14))));
          tmpMeta19 = omc_ReduceDAE_addLabelToEquations(threadData, _eqns, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 11))), tmpMeta18, _reduceList, _repl, &tmpMeta13, &tmpMeta14, &tmpMeta17);
          _eqns_1 = tmpMeta19;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          _vars_1 = tmpMeta13;
          _p = tmp16  /* pattern as ty=Integer */;
          _labels_1 = tmpMeta17;

          _labels_2 = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 13))), _labels_1);

          if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 14)))) != _p))
          {
            tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(37));
            memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_varInfo), 37*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[14] = mmc_mk_integer(_p);
            _varInfo = tmpMeta20;

            tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(23));
            memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_modelInfo), 23*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[10] = _varInfo;
            _modelInfo = tmpMeta21;
          }

          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(23));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_modelInfo), 23*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[13] = _labels_2;
          _modelInfo = tmpMeta22;

          if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 11))), _vars_1)))
          {
            tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(23));
            memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_modelInfo), 23*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[11] = _vars_1;
            _modelInfo = tmpMeta23;
          }
          tmpMeta[0+0] = _eqns_1;
          tmpMeta[0+1] = _modelInfo;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
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
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          
          _eqns = tmp4_1;
          _modelInfo = tmp4_2;
          _varInfo = tmpMeta24;
          /* Pattern matching succeeded */
          _repl = omc_BackendVarTransform_emptyReplacements(threadData);

          /* Pattern-matching tuple assignment */
          tmpMeta30 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 0)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 14))));
          tmpMeta31 = omc_ReduceDAE_addLabelToEquations(threadData, _eqns, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 11))), tmpMeta30, _reduceList, _repl, &tmpMeta25, &tmpMeta26, &tmpMeta29);
          _eqns_1 = tmpMeta31;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          _vars_1 = tmpMeta25;
          _p = tmp28  /* pattern as ty=Integer */;
          _labels_1 = tmpMeta29;

          _labels_2 = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 13))), _labels_1);

          if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 14)))) != _p))
          {
            tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(37));
            memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_varInfo), 37*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[14] = mmc_mk_integer(_p);
            _varInfo = tmpMeta32;

            tmpMeta33 = MMC_TAGPTR(mmc_alloc_words(23));
            memcpy(MMC_UNTAGPTR(tmpMeta33), MMC_UNTAGPTR(_modelInfo), 23*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta33))[10] = _varInfo;
            _modelInfo = tmpMeta33;
          }

          tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(23));
          memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_modelInfo), 23*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[13] = _labels_2;
          _modelInfo = tmpMeta34;

          if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 11))), _vars_1)))
          {
            tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(23));
            memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_modelInfo), 23*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[11] = _vars_1;
            _modelInfo = tmpMeta35;
          }
          tmpMeta[0+0] = _eqns_1;
          tmpMeta[0+1] = _modelInfo;
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
  _outEquationLst = tmpMeta[0+0];
  _outModelInfo = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outModelInfo) { *out_outModelInfo = _outModelInfo; }
  return _outEquationLst;
}

