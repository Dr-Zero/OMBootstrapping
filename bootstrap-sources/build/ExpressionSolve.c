#include "omc_simulation_settings.h"
#include "ExpressionSolve.h"
#define _OMC_LIT0_data "abs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,3,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1,2.0);
#define _OMC_LIT1 MMC_REFREALLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT3,3.141592653589793);
#define _OMC_LIT3 MMC_REFREALLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT5,0.5);
#define _OMC_LIT5 MMC_REFREALLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "$_round"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,7,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT8,0.0);
#define _OMC_LIT8 MMC_REFREALLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10,-9.999999999999999e8);
#define _OMC_LIT10 MMC_REFREALLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT12,1.0);
#define _OMC_LIT12 MMC_REFREALLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "log"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,3,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "log10"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,5,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "sqrt"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,4,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,7,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "pre"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,3,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "Model error: Result of "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,23,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data " outside the range "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,19,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data " <= "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,4,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data ". Unable to invert."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,19,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data " < "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,3,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data " should be "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,11,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data " >= "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,4,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data " > "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,3,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "AssertionLevel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,14,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "error"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,5,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,3,3) {&Absyn_Path_QUALIFIED__desc,_OMC_LIT27,_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,3,8) {&DAE_Exp_ENUM__LITERAL__desc,_OMC_LIT30,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,0,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT32,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT8}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT33,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT34,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,1,3) {&DAE_Expand_EXPAND__desc,}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,9) {&BackendDAE_EquationKind_UNKNOWN__EQUATION__KIND__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT37,_OMC_LIT38}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "$TMP$VAR$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,9,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,1,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "\n-ExpressionSolve.solve failed:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,31,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data " with respect to: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,18,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data " not support!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,13,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,1,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,9,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,41,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT47}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT46,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,3,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "a$QE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,4,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "b$QE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,4,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "$_signNoNull"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,12,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "bPow2$QE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,8,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "c$QE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,4,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT56,4.0);
#define _OMC_LIT56 MMC_REFREALLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT56}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "a1$QE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,5,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT59,-0.5);
#define _OMC_LIT59 MMC_REFREALLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT59}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "x1$QE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,5,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "x2$QE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,5,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "prex$QE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,7,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "x$QE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,4,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT65,-1.0);
#define _OMC_LIT65 MMC_REFREALLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT65}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "Y$TANH"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,6,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,0) {_OMC_LIT65,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,1,1) {_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,2,0) {_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,1,1) {_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "Y$SINH"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,6,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "Y$COSH"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,6,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "SIGN$COSH"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,9,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,0) {_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,1,1) {_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "Y$COS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,5,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "acos"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,4,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "INV$COS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,7,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "PREX$COS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,8,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "k1$COS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,6,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "k2$COS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,6,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "x1$COS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,6,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "x2$COS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,6,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,2,0) {_OMC_LIT65,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,1,1) {_OMC_LIT85}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "Y$SIN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,5,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "asin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,4,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "INV$SIN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,7,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "PREX$SIN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,8,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "k1$SIN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,6,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "k2$SIN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,6,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "x1$SIN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,6,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "x2$SIN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,6,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "Y$TAN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,5,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "atan"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,4,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "INV$TAN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,7,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "PREX$TAN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,8,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "SIGN$ABS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,8,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,2,0) {_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,1,1) {_OMC_LIT100}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "sin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,3,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "cos"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,3,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "tan"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,3,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,2,0) {_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT106,1,1) {_OMC_LIT105}};
#define _OMC_LIT106 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "exp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,3,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT108,10.0);
#define _OMC_LIT108 MMC_REFREALLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT109,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT108}};
#define _OMC_LIT109 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "__OMC_DT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,8,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT111,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT111 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "tanh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,4,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "sinh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,4,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "cosh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,4,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "sign"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,4,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "$_DF$DER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,8,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "X$ABS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,5,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,1,3) {&DAE_InlineType_NORM__INLINE__desc,}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT119,1,6) {&DAE_InlineType_DEFAULT__INLINE__desc,}};
#define _OMC_LIT119 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT119)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT120,2,1) {_OMC_LIT119,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT120 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT120)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT121,2,1) {_OMC_LIT118,_OMC_LIT120}};
#define _OMC_LIT121 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "semiLinear"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,10,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "Cpp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,3,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,1,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "Expression for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,15,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data " out of min("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,12,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data ")/max("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,6,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data ") = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,4,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT129,2,3) {&DAE_Type_T__INTEGER__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT129 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT129)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT130,2,31) {&DAE_Operator_GREATEREQ__desc,_OMC_LIT129}};
#define _OMC_LIT130 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT130)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT131,2,6) {&DAE_Type_T__BOOL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT131 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT131)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT132,2,25) {&DAE_Operator_AND__desc,_OMC_LIT131}};
#define _OMC_LIT132 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT132)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT133,2,29) {&DAE_Operator_LESSEQ__desc,_OMC_LIT129}};
#define _OMC_LIT133 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "String"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,6,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,1,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT136,2,5) {&DAE_Exp_SCONST__desc,_OMC_LIT135}};
#define _OMC_LIT136 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT136)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT137,2,5) {&DAE_Type_T__STRING__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT137 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT137)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT138,2,3) {&DAE_Operator_ADD__desc,_OMC_LIT137}};
#define _OMC_LIT138 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "Integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,7,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "\n-ExpressionSolve.preprocessingSolve failed:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,45,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,3,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "Failed to solve \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,17,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "\" w.r.t. \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,10,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,1,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/BackEnd/ExpressionSolve.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,79,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT146_6,1.770032059e9);
#define _OMC_LIT146_6 MMC_REFREALLIT(_OMC_LIT_STRUCT146_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT146,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT145,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(222)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(222)),MMC_IMMEDIATE(MMC_TAGFIXNUM(210)),_OMC_LIT146_6}};
#define _OMC_LIT146 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT146)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT147_6,1.770032059e9);
#define _OMC_LIT147_6 MMC_REFREALLIT(_OMC_LIT_STRUCT147_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT147,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT145,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(186)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(186)),MMC_IMMEDIATE(MMC_TAGFIXNUM(210)),_OMC_LIT147_6}};
#define _OMC_LIT147 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data " tries to solve: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,17,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "\nwith respect to: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,18,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT150,1,5) {&BackendDAE_Jacobian_EMPTY__JACOBIAN__desc,}};
#define _OMC_LIT150 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT150)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT151,1,5) {&BackendDAE_JacobianType_JAC__NONLINEAR__desc,}};
#define _OMC_LIT151 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT151)
#include "util/modelica.h"

#include "ExpressionSolve_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_absDiff(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _tp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_absDiff,2,0) {(void*) boxptr_ExpressionSolve_absDiff,0}};
#define boxvar_ExpressionSolve_absDiff MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_absDiff)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_helpInvCos3(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _x, modelica_metatype _tp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_helpInvCos3,2,0) {(void*) boxptr_ExpressionSolve_helpInvCos3,0}};
#define boxvar_ExpressionSolve_helpInvCos3 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_helpInvCos3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_helpInvSin2(threadData_t *threadData, modelica_metatype _k, modelica_metatype _asiny, modelica_metatype _tp, modelica_boolean _neg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_helpInvSin2(threadData_t *threadData, modelica_metatype _k, modelica_metatype _asiny, modelica_metatype _tp, modelica_metatype _neg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_helpInvSin2,2,0) {(void*) boxptr_ExpressionSolve_helpInvSin2,0}};
#define boxvar_ExpressionSolve_helpInvSin2 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_helpInvSin2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_helpInvCos2(threadData_t *threadData, modelica_metatype _k, modelica_metatype _acosy, modelica_metatype _tp, modelica_boolean _neg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_helpInvCos2(threadData_t *threadData, modelica_metatype _k, modelica_metatype _acosy, modelica_metatype _tp, modelica_metatype _neg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_helpInvCos2,2,0) {(void*) boxptr_ExpressionSolve_helpInvCos2,0}};
#define boxvar_ExpressionSolve_helpInvCos2 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_helpInvCos2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_helpInvSin(threadData_t *threadData, modelica_metatype _asiny, modelica_metatype _x, modelica_metatype _tp, modelica_boolean _neg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_helpInvSin(threadData_t *threadData, modelica_metatype _asiny, modelica_metatype _x, modelica_metatype _tp, modelica_metatype _neg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_helpInvSin,2,0) {(void*) boxptr_ExpressionSolve_helpInvSin,0}};
#define boxvar_ExpressionSolve_helpInvSin MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_helpInvSin)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_helpInvCos(threadData_t *threadData, modelica_metatype _acosy, modelica_metatype _x, modelica_metatype _tp, modelica_boolean _neg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_helpInvCos(threadData_t *threadData, modelica_metatype _acosy, modelica_metatype _x, modelica_metatype _tp, modelica_metatype _neg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_helpInvCos,2,0) {(void*) boxptr_ExpressionSolve_helpInvCos,0}};
#define boxvar_ExpressionSolve_helpInvCos MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_helpInvCos)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeInitialGuess3(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _tp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeInitialGuess3,2,0) {(void*) boxptr_ExpressionSolve_makeInitialGuess3,0}};
#define boxvar_ExpressionSolve_makeInitialGuess3 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeInitialGuess3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeInitialGuess2(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _itpl, modelica_metatype *out_otpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeInitialGuess2,2,0) {(void*) boxptr_ExpressionSolve_makeInitialGuess2,0}};
#define boxvar_ExpressionSolve_makeInitialGuess2 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeInitialGuess2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeInitialGuess(threadData_t *threadData, modelica_metatype _tp, modelica_metatype _iExp1, modelica_metatype _iExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeInitialGuess,2,0) {(void*) boxptr_ExpressionSolve_makeInitialGuess,0}};
#define boxvar_ExpressionSolve_makeInitialGuess MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeInitialGuess)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeDomainAssert(threadData_t *threadData, modelica_string _name, modelica_metatype _rhs, modelica_metatype _lowerBound, modelica_metatype _upperBound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeDomainAssert,2,0) {(void*) boxptr_ExpressionSolve_makeDomainAssert,0}};
#define boxvar_ExpressionSolve_makeDomainAssert MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeDomainAssert)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _tp, modelica_string _name, modelica_integer _index1, modelica_integer _index2, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_boolean _need, modelica_metatype *out_oeqnForNewVars, modelica_metatype *out_onewVarsCrefs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _tp, modelica_metatype _name, modelica_metatype _index1, modelica_metatype _index2, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_metatype _need, modelica_metatype *out_oeqnForNewVars, modelica_metatype *out_onewVarsCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeTmpEqnAndCrefFromExp,2,0) {(void*) boxptr_ExpressionSolve_makeTmpEqnAndCrefFromExp,0}};
#define boxvar_ExpressionSolve_makeTmpEqnAndCrefFromExp MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeTmpEqnAndCrefFromExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeProductLstSort2(threadData_t *threadData, modelica_metatype _inExpLst, modelica_metatype _tp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeProductLstSort2,2,0) {(void*) boxptr_ExpressionSolve_makeProductLstSort2,0}};
#define boxvar_ExpressionSolve_makeProductLstSort2 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeProductLstSort2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeProductLstSort(threadData_t *threadData, modelica_metatype _inExpLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeProductLstSort,2,0) {(void*) boxptr_ExpressionSolve_makeProductLstSort,0}};
#define boxvar_ExpressionSolve_makeProductLstSort MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_makeProductLstSort)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_ExpressionSolve_expHasCref(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_expHasCref(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_expHasCref,2,0) {(void*) boxptr_ExpressionSolve_expHasCref,0}};
#define boxvar_ExpressionSolve_expHasCref MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_expHasCref)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_ExpressionSolve_hasOnlyFactors(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_hasOnlyFactors(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_hasOnlyFactors,2,0) {(void*) boxptr_ExpressionSolve_hasOnlyFactors,0}};
#define boxvar_ExpressionSolve_hasOnlyFactors MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_hasOnlyFactors)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveLinearSystem(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _functions, modelica_integer _idepth, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_odepth);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveLinearSystem(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _functions, modelica_metatype _idepth, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_odepth);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveLinearSystem,2,0) {(void*) boxptr_ExpressionSolve_solveLinearSystem,0}};
#define boxvar_ExpressionSolve_solveLinearSystem MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveLinearSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveIfExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _inCond, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_integer _idepth, modelica_boolean _doInline, modelica_boolean _isContinuousIntegration, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_odepth);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveIfExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _inCond, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_metatype _idepth, modelica_metatype _doInline, modelica_metatype _isContinuousIntegration, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_odepth);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveIfExp,2,0) {(void*) boxptr_ExpressionSolve_solveIfExp,0}};
#define boxvar_ExpressionSolve_solveIfExp MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveIfExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveQE(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype _e3, modelica_metatype _e4, modelica_metatype _e5, modelica_metatype _e6, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_integer _uniqueEqIndex, modelica_integer _idepth, modelica_metatype *out_lhs, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveQE(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype _e3, modelica_metatype _e4, modelica_metatype _e5, modelica_metatype _e6, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_metatype _uniqueEqIndex, modelica_metatype _idepth, modelica_metatype *out_lhs, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveQE,2,0) {(void*) boxptr_ExpressionSolve_solveQE,0}};
#define boxvar_ExpressionSolve_solveQE MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveQE)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_simplifyBinaryMulCoeff(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_exp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_simplifyBinaryMulCoeff,2,0) {(void*) boxptr_ExpressionSolve_simplifyBinaryMulCoeff,0}};
#define boxvar_ExpressionSolve_simplifyBinaryMulCoeff MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_simplifyBinaryMulCoeff)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolveFunctionCall(threadData_t *threadData, modelica_string _name, modelica_metatype _arg, modelica_metatype _rhs, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_integer _uniqueEqIndex, modelica_integer _idepth, modelica_boolean *out_new_x, modelica_metatype *out_newEqns, modelica_metatype *out_newVars, modelica_integer *out_odepth);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolveFunctionCall(threadData_t *threadData, modelica_metatype _name, modelica_metatype _arg, modelica_metatype _rhs, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_metatype _uniqueEqIndex, modelica_metatype _idepth, modelica_metatype *out_new_x, modelica_metatype *out_newEqns, modelica_metatype *out_newVars, modelica_metatype *out_odepth);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolveFunctionCall,2,0) {(void*) boxptr_ExpressionSolve_preprocessingSolveFunctionCall,0}};
#define boxvar_ExpressionSolve_preprocessingSolveFunctionCall MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolveFunctionCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolveTmpVars(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_integer _uniqueEqIndex, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_integer _idepth, modelica_metatype *out_y, modelica_boolean *out_new_x, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_odepth);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolveTmpVars(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_metatype _uniqueEqIndex, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_metatype _idepth, modelica_metatype *out_y, modelica_metatype *out_new_x, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_odepth);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolveTmpVars,2,0) {(void*) boxptr_ExpressionSolve_preprocessingSolveTmpVars,0}};
#define boxvar_ExpressionSolve_preprocessingSolveTmpVars MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolveTmpVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_inlineCallX(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iT, modelica_boolean *out_cont, modelica_metatype *out_oT);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_inlineCallX(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iT, modelica_metatype *out_cont, modelica_metatype *out_oT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_inlineCallX,2,0) {(void*) boxptr_ExpressionSolve_inlineCallX,0}};
#define boxvar_ExpressionSolve_inlineCallX MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_inlineCallX)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_removeSimpleCalls2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_outRhs, modelica_boolean *out_con);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_removeSimpleCalls2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_outRhs, modelica_metatype *out_con);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_removeSimpleCalls2,2,0) {(void*) boxptr_ExpressionSolve_removeSimpleCalls2,0}};
#define boxvar_ExpressionSolve_removeSimpleCalls2 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_removeSimpleCalls2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_removeSimpleCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_outRhs, modelica_boolean *out_con);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_removeSimpleCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_outRhs, modelica_metatype *out_con);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_removeSimpleCalls,2,0) {(void*) boxptr_ExpressionSolve_removeSimpleCalls,0}};
#define boxvar_ExpressionSolve_removeSimpleCalls MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_removeSimpleCalls)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveFunCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_metatype _functions, modelica_boolean *out_con);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveFunCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_metatype _functions, modelica_metatype *out_con);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveFunCalls,2,0) {(void*) boxptr_ExpressionSolve_solveFunCalls,0}};
#define boxvar_ExpressionSolve_solveFunCalls MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveFunCalls)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_unifyFunCallsWork(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iT, modelica_boolean *out_cont, modelica_metatype *out_oT);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_unifyFunCallsWork(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iT, modelica_metatype *out_cont, modelica_metatype *out_oT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_unifyFunCallsWork,2,0) {(void*) boxptr_ExpressionSolve_unifyFunCallsWork,0}};
#define boxvar_ExpressionSolve_unifyFunCallsWork MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_unifyFunCallsWork)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_unifyFunCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_boolean *out_newX);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_unifyFunCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_metatype *out_newX);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_unifyFunCalls,2,0) {(void*) boxptr_ExpressionSolve_unifyFunCalls,0}};
#define boxvar_ExpressionSolve_unifyFunCalls MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_unifyFunCalls)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolve5(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_boolean _expand, modelica_metatype *out_outRhs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolve5(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_metatype _expand, modelica_metatype *out_outRhs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolve5,2,0) {(void*) boxptr_ExpressionSolve_preprocessingSolve5,0}};
#define boxvar_ExpressionSolve_preprocessingSolve5 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolve5)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_expAddX2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_expAddX2,2,0) {(void*) boxptr_ExpressionSolve_expAddX2,0}};
#define boxvar_ExpressionSolve_expAddX2 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_expAddX2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_expAddX(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_expAddX,2,0) {(void*) boxptr_ExpressionSolve_expAddX,0}};
#define boxvar_ExpressionSolve_expAddX MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_expAddX)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolve4(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_oExp2, modelica_boolean *out_newX);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolve4(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_oExp2, modelica_metatype *out_newX);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolve4,2,0) {(void*) boxptr_ExpressionSolve_preprocessingSolve4,0}};
#define boxvar_ExpressionSolve_preprocessingSolve4 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolve4)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolve3(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_orhs, modelica_boolean *out_con);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolve3(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_orhs, modelica_metatype *out_con);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolve3,2,0) {(void*) boxptr_ExpressionSolve_preprocessingSolve3,0}};
#define boxvar_ExpressionSolve_preprocessingSolve3 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolve3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolve2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_orhs, modelica_boolean *out_con);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolve2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_orhs, modelica_metatype *out_con);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolve2,2,0) {(void*) boxptr_ExpressionSolve_preprocessingSolve2,0}};
#define boxvar_ExpressionSolve_preprocessingSolve2 MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_preprocessingSolve2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_generateAssertType(threadData_t *threadData, modelica_metatype _tp, modelica_metatype _cr, modelica_metatype _iExp, modelica_metatype _inAsserts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_generateAssertType,2,0) {(void*) boxptr_ExpressionSolve_generateAssertType,0}};
#define boxvar_ExpressionSolve_generateAssertType MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_generateAssertType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveSimple(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_integer _idepth, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_odepth);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveSimple(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _idepth, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_odepth);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveSimple,2,0) {(void*) boxptr_ExpressionSolve_solveSimple,0}};
#define boxvar_ExpressionSolve_solveSimple MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveSimple)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveWork(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_integer _idepth, modelica_boolean _doInline, modelica_boolean _isContinuousIntegration, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_depth);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveWork(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_metatype _idepth, modelica_metatype _doInline, modelica_metatype _isContinuousIntegration, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_depth);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveWork,2,0) {(void*) boxptr_ExpressionSolve_solveWork,0}};
#define boxvar_ExpressionSolve_solveWork MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveWork)
PROTECTED_FUNCTION_STATIC void omc_ExpressionSolve_printTryToSolve(threadData_t *threadData, modelica_string _instanceName, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_printTryToSolve,2,0) {(void*) boxptr_ExpressionSolve_printTryToSolve,0}};
#define boxvar_ExpressionSolve_printTryToSolve MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_printTryToSolve)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveSimpleEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _var, modelica_metatype _shared, modelica_boolean *out_solved);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveSimpleEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _var, modelica_metatype _shared, modelica_metatype *out_solved);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveSimpleEquation,2,0) {(void*) boxptr_ExpressionSolve_solveSimpleEquation,0}};
#define boxvar_ExpressionSolve_solveSimpleEquation MMC_REFSTRUCTLIT(boxvar_lit_ExpressionSolve_solveSimpleEquation)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_absDiff(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _tp)
{
  modelica_metatype _z = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _z has no default value.
  _z = omc_Expression_expSub(threadData, _x, _y);

  tmpMeta1 = mmc_mk_cons(_z, MMC_REFSTRUCTLIT(mmc_nil));
  _z = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT0, tmpMeta1, _tp);
  _return: OMC_LABEL_UNUSED
  return _z;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_helpInvCos3(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _x, modelica_metatype _tp)
{
  modelica_metatype _y = NULL;
  modelica_metatype _diffx1 = NULL;
  modelica_metatype _diffx2 = NULL;
  modelica_metatype _con = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _diffx1 = omc_ExpressionSolve_absDiff(threadData, _x1, _x, _tp);
  _diffx2 = omc_ExpressionSolve_absDiff(threadData, _x2, _x, _tp);
  tmpMeta1 = mmc_mk_box2(28, &DAE_Operator_LESS__desc, _tp);
  tmpMeta2 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _diffx1, tmpMeta1, _diffx2, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
  _con = tmpMeta2;
  _con = omc_Expression_makeNoEvent(threadData, _con);

  tmpMeta3 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con, _x1, _x2);
  _y = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _y;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_helpInvSin2(threadData_t *threadData, modelica_metatype _k, modelica_metatype _asiny, modelica_metatype _tp, modelica_boolean _neg)
{
  modelica_metatype _x = NULL;
  modelica_metatype _e = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _x has no default value.
  // _e has no default value.
  _x = (_neg?omc_Expression_negate(threadData, _asiny):_asiny);

  _e = omc_Expression_expMul(threadData, _k, omc_Expression_expMul(threadData, _OMC_LIT2, _OMC_LIT4));

  _e = (_neg?omc_Expression_expAdd(threadData, _e, _OMC_LIT4):_e);

  _x = omc_Expression_expAdd(threadData, _x, _e);
  _return: OMC_LABEL_UNUSED
  return _x;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_helpInvSin2(threadData_t *threadData, modelica_metatype _k, modelica_metatype _asiny, modelica_metatype _tp, modelica_metatype _neg)
{
  modelica_integer tmp1;
  modelica_metatype _x = NULL;
  tmp1 = mmc_unbox_integer(_neg);
  _x = omc_ExpressionSolve_helpInvSin2(threadData, _k, _asiny, _tp, tmp1);
  /* skip box _x; DAE.Exp */
  return _x;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_helpInvCos2(threadData_t *threadData, modelica_metatype _k, modelica_metatype _acosy, modelica_metatype _tp, modelica_boolean _neg)
{
  modelica_metatype _x = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _x has no default value.
  _x = (_neg?omc_Expression_negate(threadData, _acosy):_acosy);

  _x = omc_Expression_expAdd(threadData, _x, omc_Expression_expMul(threadData, _k, omc_Expression_expMul(threadData, _OMC_LIT2, _OMC_LIT4)));
  _return: OMC_LABEL_UNUSED
  return _x;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_helpInvCos2(threadData_t *threadData, modelica_metatype _k, modelica_metatype _acosy, modelica_metatype _tp, modelica_metatype _neg)
{
  modelica_integer tmp1;
  modelica_metatype _x = NULL;
  tmp1 = mmc_unbox_integer(_neg);
  _x = omc_ExpressionSolve_helpInvCos2(threadData, _k, _acosy, _tp, tmp1);
  /* skip box _x; DAE.Exp */
  return _x;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_helpInvSin(threadData_t *threadData, modelica_metatype _asiny, modelica_metatype _x, modelica_metatype _tp, modelica_boolean _neg)
{
  modelica_metatype _k = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _k has no default value.
  _k = (_neg?omc_Expression_expAdd(threadData, _x, _asiny):omc_Expression_expSub(threadData, _x, _asiny));

  _k = omc_Expression_makeDiv(threadData, _k, omc_Expression_expMul(threadData, _OMC_LIT2, _OMC_LIT4));

  if(_neg)
  {
    _k = omc_Expression_expSub(threadData, _k, _OMC_LIT6);
  }

  tmpMeta1 = mmc_mk_cons(_k, MMC_REFSTRUCTLIT(mmc_nil));
  _k = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT7, tmpMeta1, _tp);
  _return: OMC_LABEL_UNUSED
  return _k;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_helpInvSin(threadData_t *threadData, modelica_metatype _asiny, modelica_metatype _x, modelica_metatype _tp, modelica_metatype _neg)
{
  modelica_integer tmp1;
  modelica_metatype _k = NULL;
  tmp1 = mmc_unbox_integer(_neg);
  _k = omc_ExpressionSolve_helpInvSin(threadData, _asiny, _x, _tp, tmp1);
  /* skip box _k; DAE.Exp */
  return _k;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_helpInvCos(threadData_t *threadData, modelica_metatype _acosy, modelica_metatype _x, modelica_metatype _tp, modelica_boolean _neg)
{
  modelica_metatype _k = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _k has no default value.
  _k = (_neg?omc_Expression_expAdd(threadData, _x, _acosy):omc_Expression_expSub(threadData, _x, _acosy));

  _k = omc_Expression_makeDiv(threadData, _k, omc_Expression_expMul(threadData, _OMC_LIT2, _OMC_LIT4));

  tmpMeta1 = mmc_mk_cons(_k, MMC_REFSTRUCTLIT(mmc_nil));
  _k = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT7, tmpMeta1, _tp);
  _return: OMC_LABEL_UNUSED
  return _k;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_helpInvCos(threadData_t *threadData, modelica_metatype _acosy, modelica_metatype _x, modelica_metatype _tp, modelica_metatype _neg)
{
  modelica_integer tmp1;
  modelica_metatype _k = NULL;
  tmp1 = mmc_unbox_integer(_neg);
  _k = omc_ExpressionSolve_helpInvCos(threadData, _acosy, _x, _tp, tmp1);
  /* skip box _k; DAE.Exp */
  return _k;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeInitialGuess3(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _tp)
{
  modelica_metatype _oExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iExp;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _con = NULL;
      modelica_metatype _o = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _con has no default value.
      // _o has no default value.
      tmp4 = 0;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _e = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta12 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _e, tmpMeta11, _OMC_LIT9, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _con = tmpMeta12;

          tmpMeta13 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con, _OMC_LIT11, _iExp);
          _o = tmpMeta13;
          tmpMeta1 = mmc_mk_some(_o);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          if (5 != MMC_STRLEN(tmpMeta15) || strcmp(MMC_STRINGDATA(_OMC_LIT15), MMC_STRINGDATA(tmpMeta15)) != 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmpMeta16);
          tmpMeta18 = MMC_CDR(tmpMeta16);
          if (!listEmpty(tmpMeta18)) goto tmp3_end;
          
          _e = tmpMeta17;
          /* Pattern matching succeeded */
          tmpMeta19 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta20 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _e, tmpMeta19, _OMC_LIT9, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _con = tmpMeta20;

          tmpMeta21 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con, _OMC_LIT11, _iExp);
          _o = tmpMeta21;
          tmpMeta1 = mmc_mk_some(_o);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,1,1) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          if (4 != MMC_STRLEN(tmpMeta23) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmpMeta23)) != 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta24)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmpMeta24);
          tmpMeta26 = MMC_CDR(tmpMeta24);
          if (!listEmpty(tmpMeta26)) goto tmp3_end;
          
          _e = tmpMeta25;
          /* Pattern matching succeeded */
          tmpMeta27 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta28 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _e, tmpMeta27, _OMC_LIT9, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _con = tmpMeta28;

          tmpMeta29 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con, _OMC_LIT9, _iExp);
          _o = tmpMeta29;
          tmpMeta1 = mmc_mk_some(_o);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e = tmpMeta30;
          /* Pattern matching succeeded */
          tmpMeta31 = mmc_mk_box2(32, &DAE_Operator_EQUAL__desc, _tp);
          tmpMeta32 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _e, tmpMeta31, _OMC_LIT9, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _con = tmpMeta32;

          tmpMeta33 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con, _OMC_LIT13, _iExp);
          _o = tmpMeta33;
          tmpMeta1 = mmc_mk_some(_o);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
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
  _oExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeInitialGuess2(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _itpl, modelica_metatype *out_otpl)
{
  modelica_metatype _oExp = NULL;
  modelica_metatype _otpl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oExp has no default value.
  _otpl = _itpl;
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iExp;
    tmp4_2 = _itpl;
    {
      modelica_metatype _cr1 = NULL;
      modelica_metatype _cr2 = NULL;
      modelica_metatype _tp = NULL;
      modelica_string _fun = NULL;
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr1 has no default value.
      // _cr2 has no default value.
      // _tp has no default value.
      // _fun has no default value.
      // _e has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _cr1 = tmpMeta6;
          _cr2 = tmpMeta8;
          _fun = tmpMeta9;
          _tp = tmpMeta10;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_ComponentReference_crefEqual(threadData, _cr1, _cr2)) goto tmp3_end;
          tmpMeta11 = mmc_mk_cons(_iExp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_Expression_makePureBuiltinCall(threadData, _fun, tmpMeta11, _tp);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          if (1 /* true */ != tmp14) goto tmp3_end;
          
          _tp = tmpMeta12;
          /* Pattern matching succeeded */
          { /* matchcontinue expression */
            {
              volatile mmc_switch_type tmp17;
              int tmp18;
              tmp17 = 0;
              MMC_TRY_INTERNAL(mmc_jumper)
              tmp16_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp17 < 2; tmp17++) {
                switch (MMC_SWITCH_CAST(tmp17)) {
                case 0: {
                  modelica_metatype tmpMeta19;
                  modelica_metatype tmpMeta20;
                  /* Pattern matching succeeded */
                  /* Pattern-matching assignment */
                  tmpMeta19 = omc_ExpressionSolve_makeInitialGuess3(threadData, _iExp, _tp);
                  if (optionNone(tmpMeta19)) goto goto_15;
                  tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 1));
                  _e = tmpMeta20;
                  goto tmp16_done;
                }
                case 1: {
                  /* Pattern matching succeeded */
                  _e = _iExp;
                  goto tmp16_done;
                }
                }
                goto tmp16_end;
                tmp16_end: ;
              }
              goto goto_15;
              tmp16_done:
              (void)tmp17;
              MMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp16_done2;
              goto_15:;
              MMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp17 < 2) {
                goto tmp16_top;
              }
              goto goto_2;
              tmp16_done2:;
            }
          }
          ;
          tmpMeta1 = _e;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iExp;
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
  _oExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_otpl) { *out_otpl = _otpl; }
  return _oExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeInitialGuess(threadData_t *threadData, modelica_metatype _tp, modelica_metatype _iExp1, modelica_metatype _iExp2)
{
  modelica_metatype _oExp = NULL;
  modelica_metatype _con = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oExp has no default value.
  // _con has no default value.
  // _e has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _con = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT17, tmpMeta1, _tp);

  tmpMeta2 = mmc_mk_box4(0, _iExp1, _OMC_LIT18, _tp, mmc_mk_boolean(1 /* true */));
  _e = omc_Expression_traverseExpBottomUp(threadData, _iExp2, boxvar_ExpressionSolve_makeInitialGuess2, tmpMeta2, NULL);

  tmpMeta3 = mmc_mk_box4(0, _iExp1, _OMC_LIT18, _tp, mmc_mk_boolean(0 /* false */));
  _oExp = omc_Expression_traverseExpBottomUp(threadData, _iExp2, boxvar_ExpressionSolve_makeInitialGuess2, tmpMeta3, NULL);

  tmpMeta4 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con, _e, _oExp);
  _oExp = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _oExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeDomainAssert(threadData_t *threadData, modelica_string _name, modelica_metatype _rhs, modelica_metatype _lowerBound, modelica_metatype _upperBound)
{
  modelica_metatype _assEq = NULL;
  modelica_string _msg = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _algo = NULL;
  modelica_metatype _tp = NULL;
  modelica_string tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta166;
  modelica_metatype tmpMeta167;
  modelica_metatype tmpMeta168;
  modelica_metatype tmpMeta169;
  modelica_metatype tmpMeta170;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _assEq has no default value.
  // _msg has no default value.
  // _cond has no default value.
  // _algo has no default value.
  _tp = omc_Expression_typeof(threadData, _rhs);
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _lowerBound;
    tmp4_2 = _upperBound;
    {
      modelica_real _lower;
      modelica_real _upper;
      modelica_string _str = NULL;
      modelica_metatype _l = NULL;
      modelica_metatype _u = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lower has no default value.
      // _upper has no default value.
      // _str has no default value.
      // _l has no default value.
      // _u has no default value.
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_real tmp8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_real tmp13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
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
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmp8 = mmc_unbox_real(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          if (1 /* true */ != tmp10) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          tmp13 = mmc_unbox_real(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          if (1 /* true */ != tmp15) goto tmp3_end;
          _lower = tmp8  /* pattern as ty=Real */;
          _upper = tmp13  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta16 = stringAppend(_OMC_LIT19,_name);
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT20);
          tmpMeta18 = stringAppend(tmpMeta17,realString(_lower));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT21);
          tmpMeta20 = stringAppend(tmpMeta19,omc_ExpressionDump_printExpStr(threadData, _rhs));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT21);
          tmpMeta22 = stringAppend(tmpMeta21,realString(_upper));
          tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT22);
          _str = tmpMeta23;

          tmpMeta24 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_lower));
          tmpMeta25 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta26 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, tmpMeta24, tmpMeta25, _rhs, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _l = tmpMeta26;

          tmpMeta27 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta28 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_upper));
          tmpMeta29 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _rhs, tmpMeta27, tmpMeta28, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _u = tmpMeta29;
          tmpMeta30 = mmc_mk_box2(25, &DAE_Operator_AND__desc, _tp);
          tmpMeta31 = mmc_mk_box4(12, &DAE_Exp_LBINARY__desc, _l, tmpMeta30, _u);
          tmp1_c0 = _str;
          tmpMeta[0+1] = tmpMeta31;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_real tmp34;
          modelica_metatype tmpMeta35;
          modelica_integer tmp36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_real tmp39;
          modelica_metatype tmpMeta40;
          modelica_integer tmp41;
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
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
          tmp34 = mmc_unbox_real(tmpMeta33);
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          tmp36 = mmc_unbox_integer(tmpMeta35);
          if (1 /* true */ != tmp36) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 1));
          tmp39 = mmc_unbox_real(tmpMeta38);
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
          tmp41 = mmc_unbox_integer(tmpMeta40);
          if (0 /* false */ != tmp41) goto tmp3_end;
          _lower = tmp34  /* pattern as ty=Real */;
          _upper = tmp39  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta42 = stringAppend(_OMC_LIT19,_name);
          tmpMeta43 = stringAppend(tmpMeta42,_OMC_LIT20);
          tmpMeta44 = stringAppend(tmpMeta43,realString(_lower));
          tmpMeta45 = stringAppend(tmpMeta44,_OMC_LIT21);
          tmpMeta46 = stringAppend(tmpMeta45,omc_ExpressionDump_printExpStr(threadData, _rhs));
          tmpMeta47 = stringAppend(tmpMeta46,_OMC_LIT23);
          tmpMeta48 = stringAppend(tmpMeta47,realString(_upper));
          tmpMeta49 = stringAppend(tmpMeta48,_OMC_LIT22);
          _str = tmpMeta49;

          tmpMeta50 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_lower));
          tmpMeta51 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta52 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, tmpMeta50, tmpMeta51, _rhs, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _l = tmpMeta52;

          tmpMeta53 = mmc_mk_box2(28, &DAE_Operator_LESS__desc, _tp);
          tmpMeta54 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_upper));
          tmpMeta55 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _rhs, tmpMeta53, tmpMeta54, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _u = tmpMeta55;
          tmpMeta56 = mmc_mk_box2(25, &DAE_Operator_AND__desc, _tp);
          tmpMeta57 = mmc_mk_box4(12, &DAE_Exp_LBINARY__desc, _l, tmpMeta56, _u);
          tmp1_c0 = _str;
          tmpMeta[0+1] = tmpMeta57;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_real tmp60;
          modelica_metatype tmpMeta61;
          modelica_integer tmp62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_real tmp65;
          modelica_metatype tmpMeta66;
          modelica_integer tmp67;
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
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta58), 1));
          tmp60 = mmc_unbox_real(tmpMeta59);
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta58), 2));
          tmp62 = mmc_unbox_integer(tmpMeta61);
          if (0 /* false */ != tmp62) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 1));
          tmp65 = mmc_unbox_real(tmpMeta64);
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 2));
          tmp67 = mmc_unbox_integer(tmpMeta66);
          if (1 /* true */ != tmp67) goto tmp3_end;
          _lower = tmp60  /* pattern as ty=Real */;
          _upper = tmp65  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta68 = stringAppend(_OMC_LIT19,_name);
          tmpMeta69 = stringAppend(tmpMeta68,_OMC_LIT20);
          tmpMeta70 = stringAppend(tmpMeta69,realString(_lower));
          tmpMeta71 = stringAppend(tmpMeta70,_OMC_LIT23);
          tmpMeta72 = stringAppend(tmpMeta71,omc_ExpressionDump_printExpStr(threadData, _rhs));
          tmpMeta73 = stringAppend(tmpMeta72,_OMC_LIT21);
          tmpMeta74 = stringAppend(tmpMeta73,realString(_upper));
          tmpMeta75 = stringAppend(tmpMeta74,_OMC_LIT22);
          _str = tmpMeta75;

          tmpMeta76 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_lower));
          tmpMeta77 = mmc_mk_box2(28, &DAE_Operator_LESS__desc, _tp);
          tmpMeta78 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, tmpMeta76, tmpMeta77, _rhs, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _l = tmpMeta78;

          tmpMeta79 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta80 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_upper));
          tmpMeta81 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _rhs, tmpMeta79, tmpMeta80, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _u = tmpMeta81;
          tmpMeta82 = mmc_mk_box2(25, &DAE_Operator_AND__desc, _tp);
          tmpMeta83 = mmc_mk_box4(12, &DAE_Exp_LBINARY__desc, _l, tmpMeta82, _u);
          tmp1_c0 = _str;
          tmpMeta[0+1] = tmpMeta83;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_real tmp86;
          modelica_metatype tmpMeta87;
          modelica_integer tmp88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_real tmp91;
          modelica_metatype tmpMeta92;
          modelica_integer tmp93;
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
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 1));
          tmp86 = mmc_unbox_real(tmpMeta85);
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 2));
          tmp88 = mmc_unbox_integer(tmpMeta87);
          if (0 /* false */ != tmp88) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta89), 1));
          tmp91 = mmc_unbox_real(tmpMeta90);
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta89), 2));
          tmp93 = mmc_unbox_integer(tmpMeta92);
          if (0 /* false */ != tmp93) goto tmp3_end;
          _lower = tmp86  /* pattern as ty=Real */;
          _upper = tmp91  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta94 = stringAppend(_OMC_LIT19,_name);
          tmpMeta95 = stringAppend(tmpMeta94,_OMC_LIT20);
          tmpMeta96 = stringAppend(tmpMeta95,realString(_lower));
          tmpMeta97 = stringAppend(tmpMeta96,_OMC_LIT23);
          tmpMeta98 = stringAppend(tmpMeta97,omc_ExpressionDump_printExpStr(threadData, _rhs));
          tmpMeta99 = stringAppend(tmpMeta98,_OMC_LIT23);
          tmpMeta100 = stringAppend(tmpMeta99,realString(_upper));
          tmpMeta101 = stringAppend(tmpMeta100,_OMC_LIT22);
          _str = tmpMeta101;

          tmpMeta102 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_lower));
          tmpMeta103 = mmc_mk_box2(28, &DAE_Operator_LESS__desc, _tp);
          tmpMeta104 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, tmpMeta102, tmpMeta103, _rhs, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _l = tmpMeta104;

          tmpMeta105 = mmc_mk_box2(28, &DAE_Operator_LESS__desc, _tp);
          tmpMeta106 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_upper));
          tmpMeta107 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _rhs, tmpMeta105, tmpMeta106, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _u = tmpMeta107;
          tmpMeta108 = mmc_mk_box2(25, &DAE_Operator_AND__desc, _tp);
          tmpMeta109 = mmc_mk_box4(12, &DAE_Exp_LBINARY__desc, _l, tmpMeta108, _u);
          tmp1_c0 = _str;
          tmpMeta[0+1] = tmpMeta109;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_real tmp112;
          modelica_metatype tmpMeta113;
          modelica_integer tmp114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          modelica_metatype tmpMeta121;
          modelica_metatype tmpMeta122;
          modelica_metatype tmpMeta123;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta110), 1));
          tmp112 = mmc_unbox_real(tmpMeta111);
          tmpMeta113 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta110), 2));
          tmp114 = mmc_unbox_integer(tmpMeta113);
          if (1 /* true */ != tmp114) goto tmp3_end;
          _lower = tmp112  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta115 = stringAppend(_OMC_LIT19,_name);
          tmpMeta116 = stringAppend(tmpMeta115,_OMC_LIT24);
          tmpMeta117 = stringAppend(tmpMeta116,omc_ExpressionDump_printExpStr(threadData, _rhs));
          tmpMeta118 = stringAppend(tmpMeta117,_OMC_LIT25);
          tmpMeta119 = stringAppend(tmpMeta118,realString(_lower));
          tmpMeta120 = stringAppend(tmpMeta119,_OMC_LIT22);
          _str = tmpMeta120;

          tmpMeta121 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_lower));
          tmpMeta122 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta123 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, tmpMeta121, tmpMeta122, _rhs, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _l = tmpMeta123;
          tmp1_c0 = _str;
          tmpMeta[0+1] = _l;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          modelica_real tmp126;
          modelica_metatype tmpMeta127;
          modelica_integer tmp128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          modelica_metatype tmpMeta132;
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          modelica_metatype tmpMeta137;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta124 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta125 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta124), 1));
          tmp126 = mmc_unbox_real(tmpMeta125);
          tmpMeta127 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta124), 2));
          tmp128 = mmc_unbox_integer(tmpMeta127);
          if (1 /* true */ != tmp128) goto tmp3_end;
          _lower = tmp126  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta129 = stringAppend(_OMC_LIT19,_name);
          tmpMeta130 = stringAppend(tmpMeta129,_OMC_LIT24);
          tmpMeta131 = stringAppend(tmpMeta130,omc_ExpressionDump_printExpStr(threadData, _rhs));
          tmpMeta132 = stringAppend(tmpMeta131,_OMC_LIT26);
          tmpMeta133 = stringAppend(tmpMeta132,realString(_lower));
          tmpMeta134 = stringAppend(tmpMeta133,_OMC_LIT22);
          _str = tmpMeta134;

          tmpMeta135 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_lower));
          tmpMeta136 = mmc_mk_box2(28, &DAE_Operator_LESS__desc, _tp);
          tmpMeta137 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, tmpMeta135, tmpMeta136, _rhs, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _l = tmpMeta137;
          tmp1_c0 = _str;
          tmpMeta[0+1] = _l;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          modelica_real tmp140;
          modelica_metatype tmpMeta141;
          modelica_integer tmp142;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          modelica_metatype tmpMeta145;
          modelica_metatype tmpMeta146;
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          modelica_metatype tmpMeta149;
          modelica_metatype tmpMeta150;
          modelica_metatype tmpMeta151;
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta138 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta139 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta138), 1));
          tmp140 = mmc_unbox_real(tmpMeta139);
          tmpMeta141 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta138), 2));
          tmp142 = mmc_unbox_integer(tmpMeta141);
          if (1 /* true */ != tmp142) goto tmp3_end;
          _upper = tmp140  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta143 = stringAppend(_OMC_LIT19,_name);
          tmpMeta144 = stringAppend(tmpMeta143,_OMC_LIT24);
          tmpMeta145 = stringAppend(tmpMeta144,omc_ExpressionDump_printExpStr(threadData, _rhs));
          tmpMeta146 = stringAppend(tmpMeta145,_OMC_LIT21);
          tmpMeta147 = stringAppend(tmpMeta146,realString(_upper));
          tmpMeta148 = stringAppend(tmpMeta147,_OMC_LIT22);
          _str = tmpMeta148;

          tmpMeta149 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta150 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_upper));
          tmpMeta151 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _rhs, tmpMeta149, tmpMeta150, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _u = tmpMeta151;
          tmp1_c0 = _str;
          tmpMeta[0+1] = _u;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta152;
          modelica_metatype tmpMeta153;
          modelica_real tmp154;
          modelica_metatype tmpMeta155;
          modelica_integer tmp156;
          modelica_metatype tmpMeta157;
          modelica_metatype tmpMeta158;
          modelica_metatype tmpMeta159;
          modelica_metatype tmpMeta160;
          modelica_metatype tmpMeta161;
          modelica_metatype tmpMeta162;
          modelica_metatype tmpMeta163;
          modelica_metatype tmpMeta164;
          modelica_metatype tmpMeta165;
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta152 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta153 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta152), 1));
          tmp154 = mmc_unbox_real(tmpMeta153);
          tmpMeta155 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta152), 2));
          tmp156 = mmc_unbox_integer(tmpMeta155);
          if (0 /* false */ != tmp156) goto tmp3_end;
          _upper = tmp154  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta157 = stringAppend(_OMC_LIT19,_name);
          tmpMeta158 = stringAppend(tmpMeta157,_OMC_LIT24);
          tmpMeta159 = stringAppend(tmpMeta158,omc_ExpressionDump_printExpStr(threadData, _rhs));
          tmpMeta160 = stringAppend(tmpMeta159,_OMC_LIT23);
          tmpMeta161 = stringAppend(tmpMeta160,realString(_upper));
          tmpMeta162 = stringAppend(tmpMeta161,_OMC_LIT22);
          _str = tmpMeta162;

          tmpMeta163 = mmc_mk_box2(28, &DAE_Operator_LESS__desc, _tp);
          tmpMeta164 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_upper));
          tmpMeta165 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _rhs, tmpMeta163, tmpMeta164, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          _u = tmpMeta165;
          tmp1_c0 = _str;
          tmpMeta[0+1] = _u;
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
  _msg = tmp1_c0;
  _cond = tmpMeta[0+1];

  tmpMeta167 = mmc_mk_box2(5, &DAE_Exp_SCONST__desc, _msg);
  tmpMeta168 = mmc_mk_box5(11, &DAE_Statement_STMT__ASSERT__desc, _cond, tmpMeta167, _OMC_LIT31, _OMC_LIT35);
  tmpMeta166 = mmc_mk_cons(tmpMeta168, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta169 = mmc_mk_box2(3, &DAE_Algorithm_ALGORITHM__STMTS__desc, tmpMeta166);
  _algo = tmpMeta169;

  tmpMeta170 = mmc_mk_box6(7, &BackendDAE_Equation_ALGORITHM__desc, mmc_mk_integer(((modelica_integer) 0)), _algo, _OMC_LIT35, _OMC_LIT36, _OMC_LIT39);
  _assEq = tmpMeta170;
  _return: OMC_LABEL_UNUSED
  return _assEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _tp, modelica_string _name, modelica_integer _index1, modelica_integer _index2, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_boolean _need, modelica_metatype *out_oeqnForNewVars, modelica_metatype *out_onewVarsCrefs)
{
  modelica_metatype _oExp = NULL;
  modelica_metatype _oeqnForNewVars = NULL;
  modelica_metatype _onewVarsCrefs = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _eqn = NULL;
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
  // _oExp has no default value.
  // _oeqnForNewVars has no default value.
  // _onewVarsCrefs has no default value.
  // _cr has no default value.
  // _eqn has no default value.
  _oExp = omc_ExpressionSimplify_simplify1(threadData, _iExp, NULL);

  if((_need || (!(omc_Expression_isCref(threadData, _oExp) || omc_Expression_isConst(threadData, _oExp)))))
  {
    tmpMeta1 = stringAppend(_OMC_LIT40,intString(_index1));
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT41);
    tmpMeta3 = stringAppend(tmpMeta2,intString(_index2));
    tmpMeta4 = stringAppend(tmpMeta3,_name);
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
    _cr = omc_ComponentReference_makeCrefIdent(threadData, tmpMeta4, _tp, tmpMeta5);

    tmpMeta6 = mmc_mk_box5(5, &BackendDAE_Equation_SOLVED__EQUATION__desc, _cr, _oExp, _OMC_LIT35, _OMC_LIT39);
    _eqn = tmpMeta6;

    _oExp = omc_Expression_crefExp(threadData, _cr);

    tmpMeta7 = mmc_mk_cons(_eqn, _ieqnForNewVars);
    _oeqnForNewVars = tmpMeta7;

    tmpMeta8 = mmc_mk_cons(_cr, _inewVarsCrefs);
    _onewVarsCrefs = tmpMeta8;
  }
  else
  {
    _oeqnForNewVars = _ieqnForNewVars;

    _onewVarsCrefs = _inewVarsCrefs;
  }
  _return: OMC_LABEL_UNUSED
  if (out_oeqnForNewVars) { *out_oeqnForNewVars = _oeqnForNewVars; }
  if (out_onewVarsCrefs) { *out_onewVarsCrefs = _onewVarsCrefs; }
  return _oExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _tp, modelica_metatype _name, modelica_metatype _index1, modelica_metatype _index2, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_metatype _need, modelica_metatype *out_oeqnForNewVars, modelica_metatype *out_onewVarsCrefs)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _oExp = NULL;
  tmp1 = mmc_unbox_integer(_index1);
  tmp2 = mmc_unbox_integer(_index2);
  tmp3 = mmc_unbox_integer(_need);
  _oExp = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _iExp, _tp, _name, tmp1, tmp2, _ieqnForNewVars, _inewVarsCrefs, tmp3, out_oeqnForNewVars, out_onewVarsCrefs);
  /* skip box _oExp; DAE.Exp */
  /* skip box _oeqnForNewVars; list<BackendDAE.Equation> */
  /* skip box _onewVarsCrefs; list<DAE.ComponentRef> */
  return _oExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeProductLstSort2(threadData_t *threadData, modelica_metatype _inExpLst, modelica_metatype _tp)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outExp = omc_Expression_makeConstOne(threadData, _tp);
  // _rest has no default value.
  _rest = omc_ExpressionSimplify_simplifyList(threadData, _inExpLst);

  {
    modelica_metatype _elem;
    for (tmpMeta1 = _rest; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _elem = MMC_CAR(tmpMeta1);
      if((!omc_Expression_isOne(threadData, _elem)))
      {
        { /* match expression */
          modelica_metatype tmp5_1;
          tmp5_1 = _elem;
          {
            modelica_metatype _e1 = NULL;
            modelica_metatype _e2 = NULL;
            modelica_metatype _e3 = NULL;
            volatile mmc_switch_type tmp5;
            int tmp6;
            // _e1 has no default value.
            // _e2 has no default value.
            // _e3 has no default value.
            tmp5 = 0;
            for (; tmp5 < 2; tmp5++) {
              switch (MMC_SWITCH_CAST(tmp5)) {
              case 0: {
                modelica_metatype tmpMeta7;
                modelica_metatype tmpMeta8;
                modelica_metatype tmpMeta9;
                modelica_metatype tmpMeta10;
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,12,3) == 0) goto tmp4_end;
                tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
                tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 3));
                tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 4));
                _e1 = tmpMeta7;
                _e2 = tmpMeta8;
                _e3 = tmpMeta9;
                /* Pattern matching succeeded */
                tmpMeta10 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _e1, omc_Expression_expMul(threadData, _outExp, _e2), omc_Expression_expMul(threadData, _outExp, _e3));
                tmpMeta2 = tmpMeta10;
                goto tmp4_done;
              }
              case 1: {
                
                /* Pattern matching succeeded */
                tmpMeta2 = omc_Expression_expMul(threadData, _outExp, _elem);
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
        _outExp = tmpMeta2;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_makeProductLstSort(threadData_t *threadData, modelica_metatype _inExpLst)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _tp = NULL;
  modelica_metatype _expLstDiv = NULL;
  modelica_metatype _expLst = NULL;
  modelica_metatype _expLst2 = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _op = NULL;
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
  // _outExp has no default value.
  // _tp has no default value.
  // _expLstDiv has no default value.
  // _expLst has no default value.
  // _expLst2 has no default value.
  // _e has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _op has no default value.
  if(listEmpty(_inExpLst))
  {
    _outExp = _OMC_LIT13;

    goto _return;
  }

  _tp = omc_Expression_typeof(threadData, listHead(_inExpLst));

  _expLstDiv = omc_List_splitOnTrue(threadData, _inExpLst, boxvar_Expression_isDivBinary ,&_expLst);

  _outExp = omc_ExpressionSolve_makeProductLstSort2(threadData, _expLst, _tp);

  if((!listEmpty(_expLstDiv)))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _expLst2 = tmpMeta1;

    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    _expLst = tmpMeta2;

    {
      modelica_metatype _elem;
      for (tmpMeta3 = _expLstDiv; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
      {
        _elem = MMC_CAR(tmpMeta3);
        /* Pattern-matching assignment */
        tmpMeta4 = _elem;
        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,7,3) == 0) MMC_THROW_INTERNAL();
        tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
        tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
        tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 4));
        _e1 = tmpMeta5;
        _op = tmpMeta6;
        _e2 = tmpMeta7;

        tmpMeta8 = mmc_mk_cons(_e1, _expLst);
        _expLst = tmpMeta8;

        tmpMeta9 = mmc_mk_cons(_e2, _expLst2);
        _expLst2 = tmpMeta9;
      }
    }

    if((!listEmpty(_expLst2)))
    {
      _e = omc_ExpressionSolve_makeProductLstSort(threadData, _expLst2);

      if((!omc_Expression_isOne(threadData, _e)))
      {
        _outExp = omc_Expression_makeDiv(threadData, _outExp, _e);
      }
    }

    if((!listEmpty(_expLst)))
    {
      _e = omc_ExpressionSolve_makeProductLstSort(threadData, _expLst);

      _outExp = omc_Expression_expMul(threadData, _outExp, _e);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_ExpressionSolve_expHasCref(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp3;
    {
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_Expression_expHasCrefNoPreOrStart(threadData, _inExp1, _cr);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (3 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (!listEmpty(tmpMeta11)) goto tmp3_end;
          
          _cr = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = omc_Expression_expHasDerCref(threadData, _inExp1, _cr);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT49))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT42),stdout);

            fputs(MMC_STRINGDATA(_OMC_LIT43),stdout);

            fputs(MMC_STRINGDATA(omc_ExpressionDump_printExpStr(threadData, _inExp3)),stdout);

            fputs(MMC_STRINGDATA(_OMC_LIT44),stdout);

            fputs(MMC_STRINGDATA(_OMC_LIT45),stdout);
          }
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_expHasCref(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_ExpressionSolve_expHasCref(threadData, _inExp1, _inExp3);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_ExpressionSolve_hasOnlyFactors(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
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
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_Expression_isZero(threadData, _e1);
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta7 = omc_Expression_factors(threadData, _e2);
          if (listEmpty(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (listEmpty(tmpMeta9)) goto goto_2;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);

          /* Pattern-matching assignment */
          tmpMeta12 = omc_Expression_extractCrefsFromExp(threadData, _e2);
          if (listEmpty(tmpMeta12)) goto goto_2;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (listEmpty(tmpMeta14)) goto goto_2;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp17;
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp17 = omc_Expression_isZero(threadData, _e2);
          if (1 /* true */ != tmp17) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta18 = omc_Expression_factors(threadData, _e1);
          if (listEmpty(tmpMeta18)) goto goto_2;
          tmpMeta19 = MMC_CAR(tmpMeta18);
          tmpMeta20 = MMC_CDR(tmpMeta18);
          if (listEmpty(tmpMeta20)) goto goto_2;
          tmpMeta21 = MMC_CAR(tmpMeta20);
          tmpMeta22 = MMC_CDR(tmpMeta20);

          /* Pattern-matching assignment */
          tmpMeta23 = omc_Expression_extractCrefsFromExp(threadData, _e1);
          if (listEmpty(tmpMeta23)) goto goto_2;
          tmpMeta24 = MMC_CAR(tmpMeta23);
          tmpMeta25 = MMC_CDR(tmpMeta23);
          if (listEmpty(tmpMeta25)) goto goto_2;
          tmpMeta26 = MMC_CAR(tmpMeta25);
          tmpMeta27 = MMC_CDR(tmpMeta25);
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_hasOnlyFactors(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_ExpressionSolve_hasOnlyFactors(threadData, _e1, _e2);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveLinearSystem(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _functions, modelica_integer _idepth, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_odepth)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outAsserts = NULL;
  modelica_metatype _eqnForNewVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _newVarsCrefs = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _odepth;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outAsserts has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqnForNewVars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _newVarsCrefs = tmpMeta2;
  _odepth = _idepth;
  
  
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _inExp3;
    {
      modelica_metatype _dere = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _z = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _tp = NULL;
      modelica_integer _i;
      volatile mmc_switch_type tmp6;
      int tmp7;
      // _dere has no default value.
      // _e has no default value.
      // _z has no default value.
      // _cr has no default value.
      // _rhs has no default value.
      // _tp has no default value.
      // _i has no default value.
      tmp6 = 0;
      for (; tmp6 < 1; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          modelica_boolean tmp10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,6,2) == 0) goto tmp5_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          
          _cr = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_ExpressionSolve_hasOnlyFactors(threadData, _inExp1, _inExp2);
          if (0 /* false */ != tmp9) goto goto_4;

          _e = omc_Expression_expSub(threadData, _inExp1, _inExp2);

          _e = omc_ExpressionSimplify_simplify1(threadData, _e, NULL);

          _dere = omc_Differentiate_differentiateExpSolve(threadData, _e, _cr, _functions);

          _dere = omc_ExpressionSimplify_simplify(threadData, _dere, NULL);

          /* Pattern-matching assignment */
          tmp10 = omc_Expression_isZero(threadData, _dere);
          if (0 /* false */ != tmp10) goto goto_4;

          /* Pattern-matching assignment */
          tmp11 = omc_Expression_expHasCrefNoPreOrStart(threadData, _dere, _cr);
          if (0 /* false */ != tmp11) goto goto_4;

          _tp = omc_Expression_typeof(threadData, _inExp3);

          _z = omc_Expression_makeZeroExpression(threadData, omc_Expression_arrayDimension(threadData, _tp), NULL);

          _e = omc_Expression_replaceExp(threadData, _e, _inExp3, _z ,&_i);

          if((_i < ((modelica_integer) 1)))
          {
            goto goto_4;
          }

          _e = omc_ExpressionSimplify_simplify(threadData, _e, NULL);

          _rhs = omc_Expression_negate(threadData, omc_Expression_makeDiv(threadData, _e, _dere));
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _rhs;
          tmpMeta[0+1] = tmpMeta12;
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
  _outExp = tmpMeta[0+0];
  _outAsserts = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outAsserts) { *out_outAsserts = _outAsserts; }
  if (out_eqnForNewVars) { *out_eqnForNewVars = _eqnForNewVars; }
  if (out_newVarsCrefs) { *out_newVarsCrefs = _newVarsCrefs; }
  if (out_odepth) { *out_odepth = _odepth; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveLinearSystem(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _functions, modelica_metatype _idepth, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_odepth)
{
  modelica_integer tmp1;
  modelica_integer _odepth;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_idepth);
  _outExp = omc_ExpressionSolve_solveLinearSystem(threadData, _inExp1, _inExp2, _inExp3, _functions, tmp1, out_outAsserts, out_eqnForNewVars, out_newVarsCrefs, &_odepth);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outAsserts; list<DAE.Statement> */
  /* skip box _eqnForNewVars; list<BackendDAE.Equation> */
  /* skip box _newVarsCrefs; list<DAE.ComponentRef> */
  if (out_odepth) { *out_odepth = mmc_mk_icon(_odepth); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveIfExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _inCond, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_integer _idepth, modelica_boolean _doInline, modelica_boolean _isContinuousIntegration, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_odepth)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outAsserts = NULL;
  modelica_metatype _eqnForNewVars = NULL;
  modelica_metatype _newVarsCrefs = NULL;
  modelica_integer _odepth;
  modelica_integer tmp1_c4 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[7] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outAsserts has no default value.
  // _eqnForNewVars has no default value.
  // _newVarsCrefs has no default value.
  // _odepth has no default value.
  
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp1;
    {
      modelica_metatype _eCond = NULL;
      modelica_metatype _eThen = NULL;
      modelica_metatype _eElse = NULL;
      modelica_metatype _res = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _cond1 = NULL;
      modelica_metatype _cond2 = NULL;
      modelica_metatype _asserts = NULL;
      modelica_metatype _asserts1 = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqns1 = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _var1 = NULL;
      modelica_integer _depth;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eCond has no default value.
      // _eThen has no default value.
      // _eElse has no default value.
      // _res has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _cond1 has no default value.
      // _cond2 has no default value.
      // _asserts has no default value.
      // _asserts1 has no default value.
      // _eqns has no default value.
      // _eqns1 has no default value.
      // _var has no default value.
      // _var1 has no default value.
      // _depth has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _eCond = tmpMeta6;
          _eThen = tmpMeta7;
          _eElse = tmpMeta8;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_isContinuousIntegration || (!omc_ExpressionSolve_expHasCref(threadData, _eCond, _inExp3)))) goto tmp3_end;
          
          
          { /* match expression */
            modelica_metatype tmp12_1;
            tmp12_1 = _inCond;
            {
              modelica_metatype _theCond = NULL;
              volatile mmc_switch_type tmp12;
              int tmp13;
              // _theCond has no default value.
              tmp12 = 0;
              for (; tmp12 < 2; tmp12++) {
                switch (MMC_SWITCH_CAST(tmp12)) {
                case 0: {
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  if (optionNone(tmp12_1)) goto tmp11_end;
                  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp12_1), 1));
                  _theCond = tmpMeta14;
                  /* Pattern matching succeeded */
                  tmpMeta15 = mmc_mk_box2(25, &DAE_Operator_AND__desc, omc_Expression_typeof(threadData, _eCond));
                  tmpMeta16 = mmc_mk_box4(12, &DAE_Exp_LBINARY__desc, _theCond, tmpMeta15, _eCond);
                  tmpMeta17 = mmc_mk_box2(25, &DAE_Operator_AND__desc, omc_Expression_typeof(threadData, _eCond));
                  tmpMeta18 = mmc_mk_box4(12, &DAE_Exp_LBINARY__desc, _theCond, tmpMeta17, omc_Expression_negate(threadData, _eCond));
                  tmpMeta[5+0] = tmpMeta16;
                  tmpMeta[5+1] = tmpMeta18;
                  goto tmp11_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta[5+0] = _eCond;
                  tmpMeta[5+1] = omc_Expression_negate(threadData, _eCond);
                  goto tmp11_done;
                }
                }
                goto tmp11_end;
                tmp11_end: ;
              }
              goto goto_10;
              goto_10:;
              goto goto_2;
              goto tmp11_done;
              tmp11_done:;
            }
          }
          _cond1 = tmpMeta[5+0];
          _cond2 = tmpMeta[5+1];

          _lhs = omc_ExpressionSolve_solveWork(threadData, _eThen, _inExp2, _inExp3, mmc_mk_some(_cond1), _functions, _uniqueEqIndex, _idepth, _doInline, _isContinuousIntegration ,&_asserts1 ,&_eqns ,&_var ,&_depth);

          _rhs = omc_ExpressionSolve_solveWork(threadData, _eElse, _inExp2, _inExp3, mmc_mk_some(_cond2), _functions, _uniqueEqIndex, _depth, _doInline, _isContinuousIntegration ,NULL ,&_eqns1 ,&_var1 ,&_depth);

          tmpMeta19 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _eCond, _lhs, _rhs);
          _res = tmpMeta19;

          _asserts = listAppend(_asserts1, _asserts1);
          tmpMeta[0+0] = _res;
          tmpMeta[0+1] = _asserts;
          tmpMeta[0+2] = listAppend(_eqns1, _eqns);
          tmpMeta[0+3] = listAppend(_var1, _var);
          tmp1_c4 = _depth;
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
  _outAsserts = tmpMeta[0+1];
  _eqnForNewVars = tmpMeta[0+2];
  _newVarsCrefs = tmpMeta[0+3];
  _odepth = tmp1_c4;
  _return: OMC_LABEL_UNUSED
  if (out_outAsserts) { *out_outAsserts = _outAsserts; }
  if (out_eqnForNewVars) { *out_eqnForNewVars = _eqnForNewVars; }
  if (out_newVarsCrefs) { *out_newVarsCrefs = _newVarsCrefs; }
  if (out_odepth) { *out_odepth = _odepth; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveIfExp(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _inCond, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_metatype _idepth, modelica_metatype _doInline, modelica_metatype _isContinuousIntegration, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_odepth)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _odepth;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_idepth);
  tmp2 = mmc_unbox_integer(_doInline);
  tmp3 = mmc_unbox_integer(_isContinuousIntegration);
  _outExp = omc_ExpressionSolve_solveIfExp(threadData, _inExp1, _inExp2, _inExp3, _inCond, _functions, _uniqueEqIndex, tmp1, tmp2, tmp3, out_outAsserts, out_eqnForNewVars, out_newVarsCrefs, &_odepth);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outAsserts; list<DAE.Statement> */
  /* skip box _eqnForNewVars; list<BackendDAE.Equation> */
  /* skip box _newVarsCrefs; list<DAE.ComponentRef> */
  if (out_odepth) { *out_odepth = mmc_mk_icon(_odepth); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveQE(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype _e3, modelica_metatype _e4, modelica_metatype _e5, modelica_metatype _e6, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_integer _uniqueEqIndex, modelica_integer _idepth, modelica_metatype *out_lhs, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs)
{
  modelica_metatype _rhs = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _eqnForNewVars = NULL;
  modelica_metatype _newVarsCrefs = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _e7 = NULL;
  modelica_metatype _con = NULL;
  modelica_metatype _invExp = NULL;
  modelica_metatype _x1 = NULL;
  modelica_metatype _x2 = NULL;
  modelica_metatype _x = NULL;
  modelica_metatype _exP = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype _c = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _sgnb = NULL;
  modelica_metatype _b2 = NULL;
  modelica_metatype _ac = NULL;
  modelica_metatype _sExp1 = NULL;
  modelica_metatype _sExp2 = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _tp = NULL;
  modelica_metatype _eqn = NULL;
  modelica_boolean _b1;
  modelica_boolean _b3;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _rhs has no default value.
  // _lhs has no default value.
  // _eqnForNewVars has no default value.
  // _newVarsCrefs has no default value.
  // _e has no default value.
  // _e7 has no default value.
  // _con has no default value.
  // _invExp has no default value.
  // _x1 has no default value.
  // _x2 has no default value.
  // _x has no default value.
  // _exP has no default value.
  // _a has no default value.
  // _b has no default value.
  // _c has no default value.
  // _n has no default value.
  // _sgnb has no default value.
  // _b2 has no default value.
  // _ac has no default value.
  // _sExp1 has no default value.
  // _sExp2 has no default value.
  // _cr has no default value.
  // _tp has no default value.
  // _eqn has no default value.
  // _b1 has no default value.
  // _b3 has no default value.
  /* Pattern-matching assignment */
  tmp1 = (omc_Expression_isZero(threadData, _e1) && omc_Expression_isZero(threadData, _e2));
  if (0 /* false */ != tmp1) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmp2 = omc_Expression_expEqual(threadData, _e2, _e5);
  if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();

  _b1 = omc_Expression_expEqual(threadData, _e3, omc_Expression_expMul(threadData, _OMC_LIT2, _e6));

  _b3 = omc_Expression_expEqual(threadData, _e6, omc_Expression_expMul(threadData, _OMC_LIT2, _e3));

  /* Pattern-matching assignment */
  tmp3 = (_b1 || _b3);
  if (1 /* true */ != tmp3) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmp4 = omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3);
  if (0 /* false */ != tmp4) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmp5 = omc_ExpressionSolve_expHasCref(threadData, _e2, _inExp3);
  if (1 /* true */ != tmp5) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmp6 = omc_ExpressionSolve_expHasCref(threadData, _e3, _inExp3);
  if (0 /* false */ != tmp6) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmp7 = omc_ExpressionSolve_expHasCref(threadData, _e4, _inExp3);
  if (0 /* false */ != tmp7) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmp8 = omc_ExpressionSolve_expHasCref(threadData, _e5, _inExp3);
  if (1 /* true */ != tmp8) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmp9 = omc_ExpressionSolve_expHasCref(threadData, _e6, _inExp3);
  if (0 /* false */ != tmp9) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmp10 = omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3);
  if (0 /* false */ != tmp10) MMC_THROW_INTERNAL();

  _a = (_b1?_e1:_e4);

  _b = (_b1?_e4:_e1);

  _c = omc_Expression_negate(threadData, _inExp2);

  _n = (_b1?_e6:_e3);

  _tp = omc_Expression_typeof(threadData, _a);

  _a = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _a, _tp, _OMC_LIT51, _uniqueEqIndex, _idepth, _ieqnForNewVars, _inewVarsCrefs, 0 /* false */ ,&_eqnForNewVars ,&_newVarsCrefs);

  tmpMeta11 = mmc_mk_box2(32, &DAE_Operator_EQUAL__desc, _tp);
  tmpMeta12 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _a, tmpMeta11, _OMC_LIT9, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
  _con = tmpMeta12;

  _tp = omc_Expression_typeof(threadData, _b);

  _b = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _b, _tp, _OMC_LIT52, _uniqueEqIndex, _idepth, _eqnForNewVars, _newVarsCrefs, 0 /* false */ ,&_eqnForNewVars ,&_newVarsCrefs);

  tmpMeta13 = mmc_mk_cons(_b, MMC_REFSTRUCTLIT(mmc_nil));
  _sgnb = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT53, tmpMeta13, _tp);

  _b2 = omc_Expression_expPow(threadData, _b, _OMC_LIT2);

  _b2 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _b2, _tp, _OMC_LIT54, _uniqueEqIndex, _idepth, _eqnForNewVars, _newVarsCrefs, 0 /* false */ ,&_eqnForNewVars ,&_newVarsCrefs);

  _tp = omc_Expression_typeof(threadData, _c);

  _c = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _c, _tp, _OMC_LIT55, _uniqueEqIndex, _idepth, _eqnForNewVars, _newVarsCrefs, 0 /* false */ ,&_eqnForNewVars ,&_newVarsCrefs);

  _ac = omc_Expression_expMul(threadData, _a, _c);

  _ac = omc_Expression_expMul(threadData, _OMC_LIT57, _ac);

  _sExp1 = omc_Expression_expSub(threadData, _b2, _ac);

  tmpMeta14 = mmc_mk_cons(_sExp1, MMC_REFSTRUCTLIT(mmc_nil));
  _sExp2 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT16, tmpMeta14, _tp);

  _sExp2 = omc_Expression_expMul(threadData, _sgnb, _sExp2);

  tmpMeta15 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con, omc_Expression_makeConstOne(threadData, _tp), _a);
  _a = tmpMeta15;

  _a = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _a, _tp, _OMC_LIT58, _uniqueEqIndex, _idepth, _eqnForNewVars, _newVarsCrefs, 0 /* false */ ,&_eqnForNewVars ,&_newVarsCrefs);

  _x1 = omc_Expression_expAdd(threadData, _b, _sExp2);

  _x1 = omc_Expression_makeDiv(threadData, _x1, _a);

  _x1 = omc_Expression_expMul(threadData, _OMC_LIT60, _x1);

  _tp = omc_Expression_typeof(threadData, _x1);

  tmpMeta16 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con, omc_Expression_makeConstOne(threadData, _tp), _x1);
  _x1 = tmpMeta16;

  _x1 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _x1, _tp, _OMC_LIT61, _uniqueEqIndex, _idepth, _eqnForNewVars, _newVarsCrefs, 0 /* false */ ,&_eqnForNewVars ,&_newVarsCrefs);

  _x2 = omc_Expression_expMul(threadData, _a, _x1);

  _x2 = omc_Expression_makeDiv(threadData, _c, _x2);

  tmpMeta17 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con, omc_Expression_makeConstOne(threadData, _tp), _x2);
  _x2 = tmpMeta17;

  tmpMeta18 = mmc_mk_box2(32, &DAE_Operator_EQUAL__desc, _tp);
  tmpMeta19 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _x1, tmpMeta18, _OMC_LIT9, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
  tmpMeta20 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, tmpMeta19, _OMC_LIT9, _x2);
  _x2 = tmpMeta20;

  _x2 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _x2, _tp, _OMC_LIT62, _uniqueEqIndex, _idepth, _eqnForNewVars, _newVarsCrefs, 0 /* false */ ,&_eqnForNewVars ,&_newVarsCrefs);

  _tp = omc_Expression_typeof(threadData, _e2);

  _exP = omc_ExpressionSolve_makeInitialGuess(threadData, _tp, _inExp3, _e2);

  _exP = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _exP, _tp, _OMC_LIT63, _uniqueEqIndex, _idepth, _eqnForNewVars, _newVarsCrefs, 0 /* false */ ,&_eqnForNewVars ,&_newVarsCrefs);

  _x = omc_ExpressionSolve_helpInvCos3(threadData, _x1, _x2, _exP, _tp);

  _x = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _x, _tp, _OMC_LIT64, _uniqueEqIndex, _idepth, _eqnForNewVars, _newVarsCrefs, 0 /* false */ ,&_eqnForNewVars ,&_newVarsCrefs);

  _e7 = omc_Expression_makeDiv(threadData, _inExp2, _b);

  _invExp = omc_Expression_inverseFactors(threadData, _n);

  _invExp = omc_ExpressionSimplify_simplify1(threadData, _invExp, NULL);

  _e7 = omc_Expression_expPow(threadData, _e7, _invExp);

  tmpMeta21 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con, _e7, _x);
  _rhs = tmpMeta21;

  _lhs = (_b1?omc_Expression_expPow(threadData, _e2, _e6):omc_Expression_expPow(threadData, _e2, _e3));
  _return: OMC_LABEL_UNUSED
  if (out_lhs) { *out_lhs = _lhs; }
  if (out_eqnForNewVars) { *out_eqnForNewVars = _eqnForNewVars; }
  if (out_newVarsCrefs) { *out_newVarsCrefs = _newVarsCrefs; }
  return _rhs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveQE(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype _e3, modelica_metatype _e4, modelica_metatype _e5, modelica_metatype _e6, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_metatype _uniqueEqIndex, modelica_metatype _idepth, modelica_metatype *out_lhs, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _rhs = NULL;
  tmp1 = mmc_unbox_integer(_uniqueEqIndex);
  tmp2 = mmc_unbox_integer(_idepth);
  _rhs = omc_ExpressionSolve_solveQE(threadData, _e1, _e2, _e3, _e4, _e5, _e6, _inExp2, _inExp3, _ieqnForNewVars, _inewVarsCrefs, tmp1, tmp2, out_lhs, out_eqnForNewVars, out_newVarsCrefs);
  /* skip box _rhs; DAE.Exp */
  /* skip box _lhs; DAE.Exp */
  /* skip box _eqnForNewVars; list<BackendDAE.Equation> */
  /* skip box _newVarsCrefs; list<DAE.ComponentRef> */
  return _rhs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_simplifyBinaryMulCoeff(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_exp2)
{
  modelica_metatype _exp1 = NULL;
  modelica_metatype _exp2 = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp1 has no default value.
  // _exp2 has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _coeff = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _coeff has no default value.
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _OMC_LIT13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,4,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,8,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,5,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          _e1 = tmpMeta6;
          _coeff = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = omc_Expression_negate(threadData, _coeff);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,4,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta11;
          _coeff = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _coeff;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,2,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta14;
          _e2 = tmpMeta16;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_expEqual(threadData, _e1, _e2)) goto tmp3_end;
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _OMC_LIT2;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,3,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta17;
          _e2 = tmpMeta19;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_isOne(threadData, _e1)) goto tmp3_end;
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = _OMC_LIT66;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,1,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (4 != MMC_STRLEN(tmpMeta21) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmpMeta21)) != 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta22)) goto tmp3_end;
          tmpMeta23 = MMC_CAR(tmpMeta22);
          tmpMeta24 = MMC_CDR(tmpMeta22);
          if (!listEmpty(tmpMeta24)) goto tmp3_end;
          
          _e = tmpMeta23;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = _OMC_LIT6;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _OMC_LIT13;
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
  _exp1 = tmpMeta[0+0];
  _exp2 = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_exp2) { *out_exp2 = _exp2; }
  return _exp1;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolveFunctionCall(threadData_t *threadData, modelica_string _name, modelica_metatype _arg, modelica_metatype _rhs, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_integer _uniqueEqIndex, modelica_integer _idepth, modelica_boolean *out_new_x, modelica_metatype *out_newEqns, modelica_metatype *out_newVars, modelica_integer *out_odepth)
{
  modelica_metatype _result = NULL;
  modelica_boolean _new_x;
  modelica_metatype _newEqns = NULL;
  modelica_metatype _newVars = NULL;
  modelica_integer _odepth;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_integer tmp1_c4 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _new_x has no default value.
  // _newEqns has no default value.
  // _newVars has no default value.
  // _odepth has no default value.
  
  
  
  
  
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _name;
    {
      modelica_metatype _y = NULL;
      modelica_metatype _exP = NULL;
      modelica_metatype _sgn = NULL;
      modelica_metatype _inv = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _k1 = NULL;
      modelica_metatype _k2 = NULL;
      modelica_metatype _x1 = NULL;
      modelica_metatype _x2 = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _ass = NULL;
      int tmp4;
      // _y has no default value.
      // _exP has no default value.
      // _sgn has no default value.
      // _inv has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _k1 has no default value.
      // _k2 has no default value.
      // _x1 has no default value.
      // _x2 has no default value.
      // _tp has no default value.
      // _eqns has no default value.
      // _vars has no default value.
      // _ass has no default value.
      {
        switch (MMC_SWITCH_CAST(stringHashDjb2Mod(tmp4_1,8192))) {
        case 5808 /* tanh */: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT112), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _y = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _rhs, _tp, _OMC_LIT67, _uniqueEqIndex, _idepth, tmpMeta5, tmpMeta6, 0 /* false */ ,&_eqns ,&_vars);

          _e1 = omc_Expression_expAdd(threadData, _OMC_LIT13, _y);

          _e2 = omc_Expression_expSub(threadData, _OMC_LIT13, _y);

          _e1 = omc_Expression_makeDiv(threadData, _e1, _e2);

          tmpMeta7 = mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil));
          _e1 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT14, tmpMeta7, _tp);

          _inv = omc_Expression_expMul(threadData, _OMC_LIT6, _e1);

          _ass = omc_ExpressionSolve_makeDomainAssert(threadData, _name, _rhs, _OMC_LIT69, _OMC_LIT71);
          tmpMeta8 = mmc_mk_cons(_ass, _eqns);
          tmpMeta[0+0] = _inv;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta8;
          tmpMeta[0+3] = _vars;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 3159 /* sinh */: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT113), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _y = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _rhs, _tp, _OMC_LIT72, _uniqueEqIndex, _idepth, tmpMeta9, tmpMeta10, 0 /* false */ ,&_eqns ,&_vars);

          _e1 = omc_Expression_expPow(threadData, _y, _OMC_LIT2);

          _e1 = omc_Expression_expAdd(threadData, _e1, _OMC_LIT13);

          tmpMeta11 = mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil));
          _e1 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT16, tmpMeta11, _tp);

          _e1 = omc_Expression_expAdd(threadData, _y, _e1);

          tmpMeta12 = mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil));
          _e1 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT14, tmpMeta12, _tp);
          tmpMeta[0+0] = _e1;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _eqns;
          tmpMeta[0+3] = _vars;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 114 /* cosh */: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT114), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          _y = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _rhs, _tp, _OMC_LIT73, _uniqueEqIndex, _idepth, tmpMeta13, tmpMeta14, 0 /* false */ ,&_eqns ,&_vars);

          _exP = omc_ExpressionSolve_makeInitialGuess(threadData, _tp, _inExp3, _arg);

          _exP = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _exP, _tp, _OMC_LIT74, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          tmpMeta15 = mmc_mk_cons(_exP, MMC_REFSTRUCTLIT(mmc_nil));
          _sgn = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT53, tmpMeta15, _tp);

          _e1 = omc_Expression_expPow(threadData, _y, _OMC_LIT2);

          _e1 = omc_Expression_expSub(threadData, _e1, _OMC_LIT13);

          tmpMeta16 = mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil));
          _e1 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT16, tmpMeta16, _tp);

          _e1 = omc_Expression_expMul(threadData, _sgn, _e1);

          _e1 = omc_Expression_expAdd(threadData, _y, _e1);

          tmpMeta17 = mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil));
          _e1 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT14, tmpMeta17, _tp);

          _ass = omc_ExpressionSolve_makeDomainAssert(threadData, _name, _rhs, _OMC_LIT76, mmc_mk_none());
          tmpMeta18 = mmc_mk_cons(_ass, _eqns);
          tmpMeta[0+0] = _e1;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta18;
          tmpMeta[0+3] = _vars;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 1738 /* cos */: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT103), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          _y = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _rhs, _tp, _OMC_LIT77, _uniqueEqIndex, _idepth, tmpMeta19, tmpMeta20, 0 /* false */ ,&_eqns ,&_vars);

          tmpMeta21 = mmc_mk_cons(_y, MMC_REFSTRUCTLIT(mmc_nil));
          _inv = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT78, tmpMeta21, _tp);

          _inv = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _inv, _tp, _OMC_LIT79, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _exP = omc_ExpressionSolve_makeInitialGuess(threadData, _tp, _inExp3, _arg);

          _exP = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _exP, _tp, _OMC_LIT80, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _k1 = omc_ExpressionSolve_helpInvCos(threadData, _inv, _exP, _tp, 1 /* true */);

          _k2 = omc_ExpressionSolve_helpInvCos(threadData, _inv, _exP, _tp, 0 /* false */);

          _k1 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _k1, _tp, _OMC_LIT81, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _k2 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _k2, _tp, _OMC_LIT82, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _x1 = omc_ExpressionSolve_helpInvCos2(threadData, _k1, _inv, _tp, 1 /* true */);

          _x2 = omc_ExpressionSolve_helpInvCos2(threadData, _k2, _inv, _tp, 0 /* false */);

          _x1 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _x1, _tp, _OMC_LIT83, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _x2 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _x2, _tp, _OMC_LIT84, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _e1 = omc_ExpressionSolve_helpInvCos3(threadData, _x1, _x2, _exP, _tp);

          _ass = omc_ExpressionSolve_makeDomainAssert(threadData, _name, _rhs, _OMC_LIT86, _OMC_LIT76);
          tmpMeta22 = mmc_mk_cons(_ass, _eqns);
          tmpMeta[0+0] = _e1;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta22;
          tmpMeta[0+3] = _vars;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 2575 /* sin */: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT102), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          _y = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _rhs, _tp, _OMC_LIT87, _uniqueEqIndex, _idepth, tmpMeta23, tmpMeta24, 0 /* false */ ,&_eqns ,&_vars);

          tmpMeta25 = mmc_mk_cons(_y, MMC_REFSTRUCTLIT(mmc_nil));
          _inv = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT88, tmpMeta25, _tp);

          _inv = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _inv, _tp, _OMC_LIT89, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _exP = omc_ExpressionSolve_makeInitialGuess(threadData, _tp, _inExp3, _arg);

          _exP = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _exP, _tp, _OMC_LIT90, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _k1 = omc_ExpressionSolve_helpInvSin(threadData, _inv, _arg, _tp, 1 /* true */);

          _k2 = omc_ExpressionSolve_helpInvSin(threadData, _inv, _arg, _tp, 0 /* false */);

          _k1 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _k1, _tp, _OMC_LIT91, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _k2 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _k2, _tp, _OMC_LIT92, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _x1 = omc_ExpressionSolve_helpInvSin2(threadData, _k1, _inv, _tp, 1 /* true */);

          _x2 = omc_ExpressionSolve_helpInvSin2(threadData, _k2, _inv, _tp, 0 /* false */);

          _x1 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _x1, _tp, _OMC_LIT93, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _x2 = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _x2, _tp, _OMC_LIT94, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _e1 = omc_ExpressionSolve_helpInvCos3(threadData, _x1, _x2, _exP, _tp);

          _ass = omc_ExpressionSolve_makeDomainAssert(threadData, _name, _rhs, _OMC_LIT86, _OMC_LIT76);
          tmpMeta26 = mmc_mk_cons(_ass, _eqns);
          tmpMeta[0+0] = _e1;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta26;
          tmpMeta[0+3] = _vars;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 3400 /* tan */: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT104), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          _y = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _rhs, _tp, _OMC_LIT95, _uniqueEqIndex, _idepth, tmpMeta27, tmpMeta28, 0 /* false */ ,&_eqns ,&_vars);

          tmpMeta29 = mmc_mk_cons(_y, MMC_REFSTRUCTLIT(mmc_nil));
          _inv = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT96, tmpMeta29, _tp);

          _inv = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _inv, _tp, _OMC_LIT97, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _exP = omc_ExpressionSolve_makeInitialGuess(threadData, _tp, _inExp3, _arg);

          _exP = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _exP, _tp, _OMC_LIT98, _uniqueEqIndex, _idepth, _eqns, _vars, 0 /* false */ ,&_eqns ,&_vars);

          _k1 = omc_Expression_expSub(threadData, _exP, _inv);

          _k1 = omc_Expression_makeDiv(threadData, _k1, _OMC_LIT4);

          tmpMeta30 = mmc_mk_cons(_k1, MMC_REFSTRUCTLIT(mmc_nil));
          _k1 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT7, tmpMeta30, _tp);

          _e1 = omc_Expression_expMul(threadData, _k1, _OMC_LIT4);

          _e1 = omc_Expression_expAdd(threadData, _inv, _e1);
          tmpMeta[0+0] = _e1;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _eqns;
          tmpMeta[0+3] = _vars;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 7323 /* abs */: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _arg);

          _exP = omc_ExpressionSolve_makeInitialGuess(threadData, _tp, _inExp3, _arg);

          tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
          _exP = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _exP, _tp, _OMC_LIT99, _uniqueEqIndex, _idepth, tmpMeta31, tmpMeta32, 0 /* false */ ,&_eqns ,&_vars);

          tmpMeta33 = mmc_mk_cons(_exP, MMC_REFSTRUCTLIT(mmc_nil));
          _sgn = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT53, tmpMeta33, _tp);

          _e1 = omc_Expression_expMul(threadData, _sgn, _rhs);

          _ass = omc_ExpressionSolve_makeDomainAssert(threadData, _name, _rhs, _OMC_LIT101, mmc_mk_none());
          tmpMeta34 = mmc_mk_cons(_ass, _eqns);
          tmpMeta[0+0] = _e1;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta34;
          tmpMeta[0+3] = _vars;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 3823 /* sqrt */: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _inv = omc_Expression_expPow(threadData, _rhs, _OMC_LIT2);

          _ass = omc_ExpressionSolve_makeDomainAssert(threadData, _name, _rhs, _OMC_LIT101, mmc_mk_none());
          tmpMeta35 = mmc_mk_cons(_ass, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _inv;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta35;
          tmpMeta[0+3] = tmpMeta36;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 6000 /* asin */: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT88), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta37 = mmc_mk_cons(_rhs, MMC_REFSTRUCTLIT(mmc_nil));
          _inv = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT102, tmpMeta37, _tp);

          tmpMeta38 = mmc_mk_box2(0, mmc_mk_real((-0.5) * (omc_Expression_toReal(threadData, _OMC_LIT4))), mmc_mk_boolean(1 /* true */));
          tmpMeta39 = mmc_mk_box2(0, mmc_mk_real((0.5) * (omc_Expression_toReal(threadData, _OMC_LIT4))), mmc_mk_boolean(1 /* true */));
          _ass = omc_ExpressionSolve_makeDomainAssert(threadData, _name, _rhs, mmc_mk_some(tmpMeta38), mmc_mk_some(tmpMeta39));
          tmpMeta40 = mmc_mk_cons(_ass, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _inv;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta40;
          tmpMeta[0+3] = tmpMeta41;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 5163 /* acos */: {
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT78), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta42 = mmc_mk_cons(_rhs, MMC_REFSTRUCTLIT(mmc_nil));
          _inv = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT103, tmpMeta42, _tp);

          tmpMeta43 = mmc_mk_box2(0, mmc_mk_real(omc_Expression_toReal(threadData, _OMC_LIT4)), mmc_mk_boolean(1 /* true */));
          _ass = omc_ExpressionSolve_makeDomainAssert(threadData, _name, _rhs, _OMC_LIT101, mmc_mk_some(tmpMeta43));
          tmpMeta44 = mmc_mk_cons(_ass, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta45 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _inv;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta44;
          tmpMeta[0+3] = tmpMeta45;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 6825 /* atan */: {
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT96), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta46 = mmc_mk_cons(_rhs, MMC_REFSTRUCTLIT(mmc_nil));
          _inv = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT104, tmpMeta46, _tp);

          tmpMeta47 = mmc_mk_box2(0, mmc_mk_real((-0.5) * (omc_Expression_toReal(threadData, _OMC_LIT4))), mmc_mk_boolean(1 /* true */));
          tmpMeta48 = mmc_mk_box2(0, mmc_mk_real((0.5) * (omc_Expression_toReal(threadData, _OMC_LIT4))), mmc_mk_boolean(1 /* true */));
          _ass = omc_ExpressionSolve_makeDomainAssert(threadData, _name, _rhs, mmc_mk_some(tmpMeta47), mmc_mk_some(tmpMeta48));
          tmpMeta49 = mmc_mk_cons(_ass, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _inv;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta49;
          tmpMeta[0+3] = tmpMeta50;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 4210 /* exp */: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT107), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta51 = mmc_mk_cons(_rhs, MMC_REFSTRUCTLIT(mmc_nil));
          _inv = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT14, tmpMeta51, _tp);

          _ass = omc_ExpressionSolve_makeDomainAssert(threadData, _name, _rhs, _OMC_LIT106, mmc_mk_none());
          tmpMeta52 = mmc_mk_cons(_ass, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta53 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _inv;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta52;
          tmpMeta[0+3] = tmpMeta53;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 3335 /* log */: {
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _rhs);

          tmpMeta54 = mmc_mk_cons(_rhs, MMC_REFSTRUCTLIT(mmc_nil));
          _inv = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT107, tmpMeta54, _tp);
          tmpMeta55 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _inv;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta55;
          tmpMeta[0+3] = tmpMeta56;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 4424 /* log10 */: {
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT15), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          _inv = omc_Expression_expPow(threadData, _OMC_LIT109, _rhs);
          tmpMeta57 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta58 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _inv;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta57;
          tmpMeta[0+3] = tmpMeta58;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 2934 /* sign */: {
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT115), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta59 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta60 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _rhs;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = tmpMeta59;
          tmpMeta[0+3] = tmpMeta60;
          tmp1_c4 = _idepth;
          goto tmp3_done;
        }
        case 2929 /* $_DF$DER */: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          if (8 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT116), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta61 = MMC_REFSTRUCTLIT(mmc_nil);
          _e1 = omc_Expression_crefExp(threadData, omc_ComponentReference_makeCrefIdent(threadData, _OMC_LIT110, _OMC_LIT111, tmpMeta61));

          tmpMeta62 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          _exP = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT18, tmpMeta62, omc_Expression_typeof(threadData, _arg));

          _e1 = omc_Expression_expAdd(threadData, omc_Expression_expMul(threadData, _rhs, _e1), _exP);
          tmpMeta63 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta64 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _e1;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta63;
          tmpMeta[0+3] = tmpMeta64;
          tmp1_c4 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          
          /* Pattern matching succeeded */
          tmpMeta65 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta66 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _rhs;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = tmpMeta65;
          tmpMeta[0+3] = tmpMeta66;
          tmp1_c4 = _idepth;
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
  _result = tmpMeta[0+0];
  _new_x = tmp1_c1;
  _newEqns = tmpMeta[0+2];
  _newVars = tmpMeta[0+3];
  _odepth = tmp1_c4;
  _return: OMC_LABEL_UNUSED
  if (out_new_x) { *out_new_x = _new_x; }
  if (out_newEqns) { *out_newEqns = _newEqns; }
  if (out_newVars) { *out_newVars = _newVars; }
  if (out_odepth) { *out_odepth = _odepth; }
  return _result;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolveFunctionCall(threadData_t *threadData, modelica_metatype _name, modelica_metatype _arg, modelica_metatype _rhs, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_metatype _uniqueEqIndex, modelica_metatype _idepth, modelica_metatype *out_new_x, modelica_metatype *out_newEqns, modelica_metatype *out_newVars, modelica_metatype *out_odepth)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _new_x;
  modelica_integer _odepth;
  modelica_metatype _result = NULL;
  tmp1 = mmc_unbox_integer(_uniqueEqIndex);
  tmp2 = mmc_unbox_integer(_idepth);
  _result = omc_ExpressionSolve_preprocessingSolveFunctionCall(threadData, _name, _arg, _rhs, _inExp3, _optCond, tmp1, tmp2, &_new_x, out_newEqns, out_newVars, &_odepth);
  /* skip box _result; DAE.Exp */
  if (out_new_x) { *out_new_x = mmc_mk_icon(_new_x); }
  /* skip box _newEqns; list<BackendDAE.Equation> */
  /* skip box _newVars; list<DAE.ComponentRef> */
  if (out_odepth) { *out_odepth = mmc_mk_icon(_odepth); }
  return _result;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolveTmpVars(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_integer _uniqueEqIndex, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_integer _idepth, modelica_metatype *out_y, modelica_boolean *out_new_x, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_odepth)
{
  modelica_metatype _x = NULL;
  modelica_metatype _y = NULL;
  modelica_boolean _new_x;
  modelica_metatype _eqnForNewVars = NULL;
  modelica_metatype _newVarsCrefs = NULL;
  modelica_integer _odepth;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_integer tmp1_c5 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _x has no default value.
  // _y has no default value.
  // _new_x has no default value.
  // _eqnForNewVars has no default value.
  // _newVarsCrefs has no default value.
  // _odepth has no default value.
  
  
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inExp1;
    {
      modelica_metatype _arg = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e_1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _exP = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _e5 = NULL;
      modelica_metatype _e6 = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _a1 = NULL;
      modelica_metatype _x1 = NULL;
      modelica_metatype _a2 = NULL;
      modelica_metatype _x2 = NULL;
      modelica_metatype _ee1 = NULL;
      modelica_metatype _ee2 = NULL;
      modelica_metatype _z1 = NULL;
      modelica_metatype _z2 = NULL;
      modelica_metatype _z3 = NULL;
      modelica_metatype _z4 = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _eqnForNewVars_ = NULL;
      modelica_metatype _newVarsCrefs_ = NULL;
      modelica_metatype _op1 = NULL;
      modelica_string _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _arg has no default value.
      // _e1 has no default value.
      // _e_1 has no default value.
      // _e2 has no default value.
      // _exP has no default value.
      // _lhs has no default value.
      // _e3 has no default value.
      // _e5 has no default value.
      // _e6 has no default value.
      // _rhs has no default value.
      // _a1 has no default value.
      // _x1 has no default value.
      // _a2 has no default value.
      // _x2 has no default value.
      // _ee1 has no default value.
      // _ee2 has no default value.
      // _z1 has no default value.
      // _z2 has no default value.
      // _z3 has no default value.
      // _z4 has no default value.
      // _tp has no default value.
      // _eqnForNewVars_ has no default value.
      // _newVarsCrefs_ has no default value.
      // _op1 has no default value.
      // _name has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _name = tmpMeta7;
          _arg = tmpMeta9;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!(omc_ExpressionSolve_expHasCref(threadData, _arg, _inExp3) && (!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)))) goto tmp3_end;
          _y = omc_ExpressionSolve_preprocessingSolveFunctionCall(threadData, _name, _arg, _inExp2, _inExp3, _optCond, _uniqueEqIndex, _idepth ,&_new_x ,&_eqnForNewVars_ ,&_newVarsCrefs_ ,&_odepth);

          if(listEmpty(_eqnForNewVars_))
          {
            _eqnForNewVars_ = _ieqnForNewVars;
          }
          else
          {
            { /* match expression */
              modelica_metatype tmp14_1;
              tmp14_1 = _optCond;
              {
                modelica_metatype _cond = NULL;
                volatile mmc_switch_type tmp14;
                int tmp15;
                // _cond has no default value.
                tmp14 = 0;
                for (; tmp14 < 2; tmp14++) {
                  switch (MMC_SWITCH_CAST(tmp14)) {
                  case 0: {
                    modelica_metatype tmpMeta16;
                    modelica_metatype tmpMeta17;
                    modelica_metatype tmpMeta18;
                    modelica_metatype tmpMeta19;
                    modelica_metatype tmpMeta20;
                    modelica_metatype tmpMeta21;
                    if (optionNone(tmp14_1)) goto tmp13_end;
                    tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp14_1), 1));
                    _cond = tmpMeta16;
                    /* Pattern matching succeeded */
                    tmpMeta18 = mmc_mk_cons(_cond, MMC_REFSTRUCTLIT(mmc_nil));
                    tmpMeta19 = mmc_mk_cons(_eqnForNewVars_, MMC_REFSTRUCTLIT(mmc_nil));
                    tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
                    tmpMeta21 = mmc_mk_box6(10, &BackendDAE_Equation_IF__EQUATION__desc, tmpMeta18, tmpMeta19, tmpMeta20, _OMC_LIT35, _OMC_LIT39);
                    tmpMeta17 = mmc_mk_cons(tmpMeta21, _ieqnForNewVars);
                    tmpMeta11 = tmpMeta17;
                    goto tmp13_done;
                  }
                  case 1: {
                    
                    /* Pattern matching succeeded */
                    tmpMeta11 = listAppend(_eqnForNewVars_, _ieqnForNewVars);
                    goto tmp13_done;
                  }
                  }
                  goto tmp13_end;
                  tmp13_end: ;
                }
                goto goto_12;
                goto_12:;
                goto goto_2;
                goto tmp13_done;
                tmp13_done:;
              }
            }
            _eqnForNewVars_ = tmpMeta11;
          }
          tmpMeta[0+0] = (_new_x?_arg:_inExp1);
          tmpMeta[0+1] = _y;
          tmp1_c2 = _new_x;
          tmpMeta[0+3] = _eqnForNewVars_;
          tmpMeta[0+4] = listAppend(_newVarsCrefs_, _inewVarsCrefs);
          tmp1_c5 = _odepth;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,4,1) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta22;
          _tp = tmpMeta24;
          _e2 = tmpMeta25;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3) && (!omc_ExpressionSolve_expHasCref(threadData, _e2, _inExp3)))) goto tmp3_end;
          _tp = omc_Expression_typeof(threadData, _e1);

          _exP = omc_ExpressionSolve_makeInitialGuess(threadData, _tp, _inExp3, _e1);

          _exP = omc_ExpressionSolve_makeTmpEqnAndCrefFromExp(threadData, _exP, _tp, _OMC_LIT117, _uniqueEqIndex, _idepth, _ieqnForNewVars, _inewVarsCrefs, 0 /* false */ ,&_eqnForNewVars_ ,&_newVarsCrefs_);

          tmpMeta26 = mmc_mk_cons(_exP, MMC_REFSTRUCTLIT(mmc_nil));
          _e_1 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT53, tmpMeta26, _tp);

          _lhs = omc_Expression_expPow(threadData, _inExp2, omc_Expression_inverseFactors(threadData, _e2));

          tmpMeta27 = mmc_mk_cons(_lhs, MMC_REFSTRUCTLIT(mmc_nil));
          _lhs = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT0, tmpMeta27, _tp);

          _lhs = omc_Expression_expMul(threadData, _e_1, _lhs);
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _lhs;
          tmp1_c2 = 1 /* true */;
          tmpMeta[0+3] = _eqnForNewVars_;
          tmpMeta[0+4] = _newVarsCrefs_;
          tmp1_c5 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _ee1 = tmpMeta28;
          _op1 = tmpMeta29;
          _ee2 = tmpMeta30;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_isAddOrSub(threadData, _op1)) goto tmp3_end;
          _z1 = omc_List_split1OnTrue(threadData, omc_Expression_factors(threadData, _ee1), boxvar_ExpressionSolve_expHasCref, _inExp3 ,&_z2);

          _z3 = omc_List_split1OnTrue(threadData, omc_Expression_factors(threadData, _ee2), boxvar_ExpressionSolve_expHasCref, _inExp3 ,&_z4);

          _x1 = omc_ExpressionSolve_makeProductLstSort(threadData, _z1);

          _a1 = omc_ExpressionSolve_makeProductLstSort(threadData, _z2);

          _x2 = omc_ExpressionSolve_makeProductLstSort(threadData, _z3);

          _a2 = (omc_Expression_isAdd(threadData, _op1)?omc_ExpressionSolve_makeProductLstSort(threadData, _z4):omc_Expression_negate(threadData, omc_ExpressionSolve_makeProductLstSort(threadData, _z4)));

          _e2 = omc_ExpressionSolve_simplifyBinaryMulCoeff(threadData, _x1 ,&_e3);

          _e5 = omc_ExpressionSolve_simplifyBinaryMulCoeff(threadData, _x2 ,&_e6);

          _lhs = omc_ExpressionSolve_solveQE(threadData, _a1, _e2, _e3, _a2, _e5, _e6, _inExp2, _inExp3, _ieqnForNewVars, _inewVarsCrefs, _uniqueEqIndex, _idepth ,&_rhs ,&_eqnForNewVars_ ,&_newVarsCrefs_);
          tmpMeta[0+0] = _lhs;
          tmpMeta[0+1] = _rhs;
          tmp1_c2 = 1 /* true */;
          tmpMeta[0+3] = _eqnForNewVars_;
          tmpMeta[0+4] = _newVarsCrefs_;
          tmp1_c5 = ((modelica_integer) 1) + _idepth;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 0 /* false */;
          tmpMeta[0+3] = _ieqnForNewVars;
          tmpMeta[0+4] = _inewVarsCrefs;
          tmp1_c5 = _idepth;
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
  _x = tmpMeta[0+0];
  _y = tmpMeta[0+1];
  _new_x = tmp1_c2;
  _eqnForNewVars = tmpMeta[0+3];
  _newVarsCrefs = tmpMeta[0+4];
  _odepth = tmp1_c5;
  _return: OMC_LABEL_UNUSED
  if (out_y) { *out_y = _y; }
  if (out_new_x) { *out_new_x = _new_x; }
  if (out_eqnForNewVars) { *out_eqnForNewVars = _eqnForNewVars; }
  if (out_newVarsCrefs) { *out_newVarsCrefs = _newVarsCrefs; }
  if (out_odepth) { *out_odepth = _odepth; }
  return _x;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolveTmpVars(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_metatype _uniqueEqIndex, modelica_metatype _ieqnForNewVars, modelica_metatype _inewVarsCrefs, modelica_metatype _idepth, modelica_metatype *out_y, modelica_metatype *out_new_x, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_odepth)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _new_x;
  modelica_integer _odepth;
  modelica_metatype _x = NULL;
  tmp1 = mmc_unbox_integer(_uniqueEqIndex);
  tmp2 = mmc_unbox_integer(_idepth);
  _x = omc_ExpressionSolve_preprocessingSolveTmpVars(threadData, _inExp1, _inExp2, _inExp3, _optCond, tmp1, _ieqnForNewVars, _inewVarsCrefs, tmp2, out_y, &_new_x, out_eqnForNewVars, out_newVarsCrefs, &_odepth);
  /* skip box _x; DAE.Exp */
  /* skip box _y; DAE.Exp */
  if (out_new_x) { *out_new_x = mmc_mk_icon(_new_x); }
  /* skip box _eqnForNewVars; list<BackendDAE.Equation> */
  /* skip box _newVarsCrefs; list<DAE.ComponentRef> */
  if (out_odepth) { *out_odepth = mmc_mk_icon(_odepth); }
  return _x;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_inlineCallX(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iT, modelica_boolean *out_cont, modelica_metatype *out_oT)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _oT = NULL;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cont has no default value.
  // _oT has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _iT;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _X = NULL;
      modelica_metatype _functions = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _X has no default value.
      // _functions has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _X = tmpMeta6;
          _functions = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_ExpressionSolve_expHasCref(threadData, _inExp, _X)) goto tmp3_end;
          tmpMeta8 = mmc_mk_box2(0, _functions, _OMC_LIT121);
          _e = omc_Inline_forceInlineExp(threadData, _inExp, tmpMeta8, _OMC_LIT35 ,NULL ,&_b);
          tmpMeta[0+0] = _e;
          tmp1_c1 = (!_b);
          tmpMeta[0+2] = _iT;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _iT;
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
  _oT = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_oT) { *out_oT = _oT; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_inlineCallX(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iT, modelica_metatype *out_cont, modelica_metatype *out_oT)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_ExpressionSolve_inlineCallX(threadData, _inExp, _iT, &_cont, out_oT);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _oT; tuple<DAE.Exp, Option<DAE.AvlTreePathFunction.Tree>> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_removeSimpleCalls2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_outRhs, modelica_boolean *out_con)
{
  modelica_metatype _outLhs = NULL;
  modelica_metatype _outRhs = NULL;
  modelica_boolean _con;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLhs has no default value.
  // _outRhs has no default value.
  // _con has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp1;
    tmp4_2 = _inExp2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
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
          modelica_boolean tmp11;
          modelica_boolean tmp12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (4 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT112), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _e1 = tmpMeta9;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp11 = omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3);
          if (1 /* true */ != tmp11) goto goto_2;

          /* Pattern-matching assignment */
          tmp12 = omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3);
          if (0 /* false */ != tmp12) goto goto_2;

          /* Pattern-matching assignment */
          tmp13 = (!(omc_Expression_isCref(threadData, _inExp2) || omc_Expression_isConst(threadData, _inExp2)));
          if (1 /* true */ != tmp13) goto goto_2;

          _e2 = omc_Expression_expAdd(threadData, _OMC_LIT13, _inExp2);

          _e3 = omc_Expression_expSub(threadData, _OMC_LIT13, _inExp2);

          _e2 = omc_Expression_makeDiv(threadData, _e2, _e3);

          tmpMeta14 = mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil));
          _e2 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT14, tmpMeta14, _OMC_LIT111);

          _e2 = omc_Expression_expMul(threadData, _OMC_LIT6, _e2);
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_boolean tmp20;
          modelica_boolean tmp21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,1,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          if (4 != MMC_STRLEN(tmpMeta16) || strcmp(MMC_STRINGDATA(_OMC_LIT113), MMC_STRINGDATA(tmpMeta16)) != 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta17)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmpMeta17);
          tmpMeta19 = MMC_CDR(tmpMeta17);
          if (!listEmpty(tmpMeta19)) goto tmp3_end;
          
          _e1 = tmpMeta18;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp20 = omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3);
          if (1 /* true */ != tmp20) goto goto_2;

          /* Pattern-matching assignment */
          tmp21 = omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3);
          if (0 /* false */ != tmp21) goto goto_2;

          /* Pattern-matching assignment */
          tmp22 = (!(omc_Expression_isCref(threadData, _inExp2) || omc_Expression_isConst(threadData, _inExp2)));
          if (1 /* true */ != tmp22) goto goto_2;

          _e2 = omc_Expression_expPow(threadData, _inExp2, _OMC_LIT2);

          _e3 = omc_Expression_expAdd(threadData, _e2, _OMC_LIT13);

          tmpMeta23 = mmc_mk_cons(_e3, MMC_REFSTRUCTLIT(mmc_nil));
          _e2 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT16, tmpMeta23, _OMC_LIT111);

          _e3 = omc_Expression_expAdd(threadData, _inExp2, _e2);

          tmpMeta24 = mmc_mk_cons(_e3, MMC_REFSTRUCTLIT(mmc_nil));
          _e2 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT14, tmpMeta24, _OMC_LIT111);
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_boolean tmp30;
          modelica_boolean tmp31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,1,1) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
          if (5 != MMC_STRLEN(tmpMeta26) || strcmp(MMC_STRINGDATA(_OMC_LIT15), MMC_STRINGDATA(tmpMeta26)) != 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta27)) goto tmp3_end;
          tmpMeta28 = MMC_CAR(tmpMeta27);
          tmpMeta29 = MMC_CDR(tmpMeta27);
          if (!listEmpty(tmpMeta29)) goto tmp3_end;
          
          _e1 = tmpMeta28;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp30 = omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3);
          if (1 /* true */ != tmp30) goto goto_2;

          /* Pattern-matching assignment */
          tmp31 = omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3);
          if (0 /* false */ != tmp31) goto goto_2;

          _e2 = omc_Expression_expPow(threadData, _OMC_LIT109, _inExp2);
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_boolean tmp37;
          modelica_boolean tmp38;
          modelica_metatype tmpMeta39;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,1,1) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          if (3 != MMC_STRLEN(tmpMeta33) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmpMeta33)) != 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta34)) goto tmp3_end;
          tmpMeta35 = MMC_CAR(tmpMeta34);
          tmpMeta36 = MMC_CDR(tmpMeta34);
          if (!listEmpty(tmpMeta36)) goto tmp3_end;
          
          _e1 = tmpMeta35;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp37 = omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3);
          if (1 /* true */ != tmp37) goto goto_2;

          /* Pattern-matching assignment */
          tmp38 = omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3);
          if (0 /* false */ != tmp38) goto goto_2;

          tmpMeta39 = mmc_mk_cons(_inExp2, MMC_REFSTRUCTLIT(mmc_nil));
          _e2 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT107, tmpMeta39, _OMC_LIT111);
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_boolean tmp45;
          modelica_boolean tmp46;
          modelica_metatype tmpMeta47;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,1,1) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 2));
          if (3 != MMC_STRLEN(tmpMeta41) || strcmp(MMC_STRINGDATA(_OMC_LIT107), MMC_STRINGDATA(tmpMeta41)) != 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta42)) goto tmp3_end;
          tmpMeta43 = MMC_CAR(tmpMeta42);
          tmpMeta44 = MMC_CDR(tmpMeta42);
          if (!listEmpty(tmpMeta44)) goto tmp3_end;
          
          _e1 = tmpMeta43;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp45 = omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3);
          if (1 /* true */ != tmp45) goto goto_2;

          /* Pattern-matching assignment */
          tmp46 = omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3);
          if (0 /* false */ != tmp46) goto goto_2;

          tmpMeta47 = mmc_mk_cons(_inExp2, MMC_REFSTRUCTLIT(mmc_nil));
          _e2 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT14, tmpMeta47, _OMC_LIT111);
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_boolean tmp53;
          modelica_boolean tmp54;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta48,1,1) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 2));
          if (4 != MMC_STRLEN(tmpMeta49) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmpMeta49)) != 0) goto tmp3_end;
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta50)) goto tmp3_end;
          tmpMeta51 = MMC_CAR(tmpMeta50);
          tmpMeta52 = MMC_CDR(tmpMeta50);
          if (!listEmpty(tmpMeta52)) goto tmp3_end;
          
          _e1 = tmpMeta51;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp53 = omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3);
          if (1 /* true */ != tmp53) goto goto_2;

          /* Pattern-matching assignment */
          tmp54 = omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3);
          if (0 /* false */ != tmp54) goto goto_2;

          _e2 = _OMC_LIT2;

          _e2 = omc_Expression_expPow(threadData, _inExp2, _e2);
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta55;
          modelica_real tmp56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_real tmp63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp56 = mmc_unbox_real(tmpMeta55);
          if (0.0 != tmp56) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta57,1,1) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 2));
          if (10 != MMC_STRLEN(tmpMeta58) || strcmp(MMC_STRINGDATA(_OMC_LIT122), MMC_STRINGDATA(tmpMeta58)) != 0) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta59)) goto tmp3_end;
          tmpMeta60 = MMC_CAR(tmpMeta59);
          tmpMeta61 = MMC_CDR(tmpMeta59);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta60,1,1) == 0) goto tmp3_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 2));
          tmp63 = mmc_unbox_real(tmpMeta62);
          if (0.0 != tmp63) goto tmp3_end;
          if (listEmpty(tmpMeta61)) goto tmp3_end;
          tmpMeta64 = MMC_CAR(tmpMeta61);
          tmpMeta65 = MMC_CDR(tmpMeta61);
          if (listEmpty(tmpMeta65)) goto tmp3_end;
          tmpMeta66 = MMC_CAR(tmpMeta65);
          tmpMeta67 = MMC_CDR(tmpMeta65);
          if (!listEmpty(tmpMeta67)) goto tmp3_end;
          
          _e1 = tmpMeta64;
          _e2 = tmpMeta66;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 0 /* false */;
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
  _outLhs = tmpMeta[0+0];
  _outRhs = tmpMeta[0+1];
  _con = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_outRhs) { *out_outRhs = _outRhs; }
  if (out_con) { *out_con = _con; }
  return _outLhs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_removeSimpleCalls2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_outRhs, modelica_metatype *out_con)
{
  modelica_boolean _con;
  modelica_metatype _outLhs = NULL;
  _outLhs = omc_ExpressionSolve_removeSimpleCalls2(threadData, _inExp1, _inExp2, _inExp3, out_outRhs, &_con);
  /* skip box _outLhs; DAE.Exp */
  /* skip box _outRhs; DAE.Exp */
  if (out_con) { *out_con = mmc_mk_icon(_con); }
  return _outLhs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_removeSimpleCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_outRhs, modelica_boolean *out_con)
{
  modelica_metatype _outLhs = NULL;
  modelica_metatype _outRhs = NULL;
  modelica_boolean _con;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLhs has no default value.
  // _outRhs has no default value.
  // _con has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp1;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_ExpressionSolve_removeSimpleCalls2(threadData, _inExp1, _inExp2, _inExp3, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 0 /* false */;
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
  _outLhs = tmpMeta[0+0];
  _outRhs = tmpMeta[0+1];
  _con = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_outRhs) { *out_outRhs = _outRhs; }
  if (out_con) { *out_con = _con; }
  return _outLhs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_removeSimpleCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_outRhs, modelica_metatype *out_con)
{
  modelica_boolean _con;
  modelica_metatype _outLhs = NULL;
  _outLhs = omc_ExpressionSolve_removeSimpleCalls(threadData, _inExp1, _inExp2, _inExp3, out_outRhs, &_con);
  /* skip box _outLhs; DAE.Exp */
  /* skip box _outRhs; DAE.Exp */
  if (out_con) { *out_con = mmc_mk_icon(_con); }
  return _outLhs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveFunCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_metatype _functions, modelica_boolean *out_con)
{
  modelica_metatype _x = NULL;
  modelica_boolean _con;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _x has no default value.
  // _con has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _funX = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _funX has no default value.
      // _b has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(0, _inExp3, _functions);
          _funX = omc_Expression_traverseExpTopDown(threadData, _inExp1, boxvar_ExpressionSolve_inlineCallX, tmpMeta6, NULL);

          _b = (!omc_Expression_expEqual(threadData, _funX, _inExp1));
          tmpMeta[0+0] = _funX;
          tmp1_c1 = _b;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmp1_c1 = 0 /* false */;
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
  _x = tmpMeta[0+0];
  _con = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_con) { *out_con = _con; }
  return _x;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveFunCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_metatype _functions, modelica_metatype *out_con)
{
  modelica_boolean _con;
  modelica_metatype _x = NULL;
  _x = omc_ExpressionSolve_solveFunCalls(threadData, _inExp1, _inExp3, _functions, &_con);
  /* skip box _x; DAE.Exp */
  if (out_con) { *out_con = mmc_mk_icon(_con); }
  return _x;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_unifyFunCallsWork(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iT, modelica_boolean *out_cont, modelica_metatype *out_oT)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _oT = NULL;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cont has no default value.
  // _oT has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _iT;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _X = NULL;
      modelica_metatype _tp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _X has no default value.
      // _tp has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (10 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT122), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (!listEmpty(tmpMeta14)) goto tmp3_end;
          
          _e1 = tmpMeta9;
          _e2 = tmpMeta11;
          _e3 = tmpMeta13;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_Expression_isZero(threadData, _e1))) goto tmp3_end;
          _tp = omc_Expression_typeof(threadData, _e1);

          tmpMeta15 = mmc_mk_box2(31, &DAE_Operator_GREATEREQ__desc, _tp);
          tmpMeta16 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _e1, tmpMeta15, omc_Expression_makeConstZero(threadData, _tp), mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          tmpMeta17 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, tmpMeta16, omc_Expression_expMul(threadData, _e1, _e2), omc_Expression_expMul(threadData, _e1, _e3));
          _e = tmpMeta17;
          tmpMeta[0+0] = _e;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _iT;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,1,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (8 != MMC_STRLEN(tmpMeta19) || strcmp(MMC_STRINGDATA(_OMC_LIT116), MMC_STRINGDATA(tmpMeta19)) != 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta20)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmpMeta20);
          tmpMeta22 = MMC_CDR(tmpMeta20);
          if (!listEmpty(tmpMeta22)) goto tmp3_end;
          
          _e1 = tmpMeta21;
          _X = tmp4_2;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_ExpressionSolve_expHasCref(threadData, _e1, _X)) goto tmp3_end;
          _tp = omc_Expression_typeof(threadData, _e1);

          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          _e2 = omc_Expression_crefExp(threadData, omc_ComponentReference_makeCrefIdent(threadData, _OMC_LIT110, _OMC_LIT111, tmpMeta23));

          tmpMeta24 = mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil));
          _e3 = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT18, tmpMeta24, _tp);

          _e3 = omc_Expression_expSub(threadData, _e1, _e3);

          _e = omc_Expression_expDiv(threadData, _e3, _e2);
          tmpMeta[0+0] = _e;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _iT;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _iT;
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
  _cont = tmp1_c1;
  _oT = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_oT) { *out_oT = _oT; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_unifyFunCallsWork(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _iT, modelica_metatype *out_cont, modelica_metatype *out_oT)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_ExpressionSolve_unifyFunCallsWork(threadData, _inExp, _iT, &_cont, out_oT);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _oT; DAE.Exp */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_unifyFunCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_boolean *out_newX)
{
  modelica_metatype _oExp = NULL;
  modelica_boolean _newX;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oExp has no default value.
  // _newX has no default value.
  _oExp = omc_Expression_traverseExpTopDown(threadData, _inExp1, boxvar_ExpressionSolve_unifyFunCallsWork, _inExp3, NULL);

  _newX = omc_Expression_expEqual(threadData, _oExp, _inExp1);
  _return: OMC_LABEL_UNUSED
  if (out_newX) { *out_newX = _newX; }
  return _oExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_unifyFunCalls(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_metatype *out_newX)
{
  modelica_boolean _newX;
  modelica_metatype _oExp = NULL;
  _oExp = omc_ExpressionSolve_unifyFunCalls(threadData, _inExp1, _inExp3, &_newX);
  /* skip box _oExp; DAE.Exp */
  if (out_newX) { *out_newX = mmc_mk_icon(_newX); }
  return _oExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolve5(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_boolean _expand, modelica_metatype *out_outRhs)
{
  modelica_metatype _outLhs = NULL;
  modelica_metatype _outRhs = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _tmpLhs = NULL;
  modelica_metatype _e1 = NULL;
  modelica_boolean _b;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLhs has no default value.
  // _outRhs has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  // _tmpLhs has no default value.
  // _e1 has no default value.
  // _b has no default value.
  // _cr has no default value.
  if(omc_ExpressionSolve_expHasCref(threadData, _inExp1, _inExp3))
  {
    if(_expand)
    {
      _cr = omc_Expression_expOrDerCref(threadData, _inExp3 ,&_b);

      if(_b)
      {
        _lhs = omc_Expression_allTermsForCref(threadData, _inExp1, _cr, boxvar_Expression_expHasDerCref ,&_rhs);
      }
      else
      {
        _lhs = omc_Expression_allTermsForCref(threadData, _inExp1, _cr, boxvar_Expression_expHasCrefNoPreOrStart ,&_rhs);
      }
    }
    else
    {
      _lhs = omc_List_split1OnTrue(threadData, omc_Expression_terms(threadData, _inExp1), boxvar_ExpressionSolve_expHasCref, _inExp3 ,&_rhs);
    }

    _outLhs = _OMC_LIT9;

    _tmpLhs = _OMC_LIT9;

    {
      modelica_metatype _e;
      for (tmpMeta1 = _lhs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _e = MMC_CAR(tmpMeta1);
        if(omc_Expression_isNegativeUnary(threadData, _e))
        {
          /* Pattern-matching assignment */
          tmpMeta2 = _e;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,8,2) == 0) MMC_THROW_INTERNAL();
          tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
          _e1 = tmpMeta3;

          _tmpLhs = omc_ExpressionSolve_expAddX(threadData, _e1, _tmpLhs, _inExp3);
        }
        else
        {
          _outLhs = omc_ExpressionSolve_expAddX(threadData, _e, _outLhs, _inExp3);
        }
      }
    }

    _outLhs = omc_ExpressionSolve_expAddX(threadData, _outLhs, omc_Expression_negate(threadData, _tmpLhs), _inExp3);

    _outRhs = omc_Expression_makeSum1(threadData, _rhs, 0 /* false */);

    _outRhs = omc_ExpressionSimplify_simplify1(threadData, _outRhs, NULL);

    _outLhs = omc_ExpressionSimplify_simplify1(threadData, _outLhs, NULL);
  }
  else
  {
    _outLhs = _OMC_LIT9;

    _outRhs = _inExp1;
  }
  _return: OMC_LABEL_UNUSED
  if (out_outRhs) { *out_outRhs = _outRhs; }
  return _outLhs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolve5(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_metatype _expand, modelica_metatype *out_outRhs)
{
  modelica_integer tmp1;
  modelica_metatype _outLhs = NULL;
  tmp1 = mmc_unbox_integer(_expand);
  _outLhs = omc_ExpressionSolve_preprocessingSolve5(threadData, _inExp1, _inExp3, tmp1, out_outRhs);
  /* skip box _outLhs; DAE.Exp */
  /* skip box _outRhs; DAE.Exp */
  return _outLhs;
}

DLLDirection
modelica_metatype omc_ExpressionSolve_collectX(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_boolean _expand, modelica_metatype *out_outRhs)
{
  modelica_metatype _outLhs = NULL;
  modelica_metatype _outRhs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLhs has no default value.
  // _outRhs has no default value.
  _outLhs = omc_ExpressionSolve_preprocessingSolve5(threadData, _inExp1, _inExp3, _expand ,&_outRhs);
  _return: OMC_LABEL_UNUSED
  if (out_outRhs) { *out_outRhs = _outRhs; }
  return _outLhs;
}
modelica_metatype boxptr_ExpressionSolve_collectX(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp3, modelica_metatype _expand, modelica_metatype *out_outRhs)
{
  modelica_integer tmp1;
  modelica_metatype _outLhs = NULL;
  tmp1 = mmc_unbox_integer(_expand);
  _outLhs = omc_ExpressionSolve_collectX(threadData, _inExp1, _inExp3, tmp1, out_outRhs);
  /* skip box _outLhs; DAE.Exp */
  /* skip box _outRhs; DAE.Exp */
  return _outLhs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_expAddX2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3)
{
  modelica_metatype _ores = NULL;
  modelica_metatype _f1 = NULL;
  modelica_metatype _f2 = NULL;
  modelica_metatype _e0 = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_boolean _neg;
  modelica_metatype _factorWithX1 = NULL;
  modelica_metatype _factorWithoutX1 = NULL;
  modelica_metatype _factorWithX2 = NULL;
  modelica_metatype _factorWithoutX2 = NULL;
  modelica_metatype _pWithX1 = NULL;
  modelica_metatype _pWithoutX1 = NULL;
  modelica_metatype _pWithX2 = NULL;
  modelica_metatype _pWithoutX2 = NULL;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ores has no default value.
  // _f1 has no default value.
  // _f2 has no default value.
  // _e0 has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _neg has no default value.
  // _factorWithX1 has no default value.
  // _factorWithoutX1 has no default value.
  // _factorWithX2 has no default value.
  // _factorWithoutX2 has no default value.
  // _pWithX1 has no default value.
  // _pWithoutX1 has no default value.
  // _pWithX2 has no default value.
  // _pWithoutX2 has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp1;
    {
      modelica_metatype _ee1 = NULL;
      modelica_metatype _ee2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ee1 has no default value.
      // _ee2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _ee1 = tmpMeta6;
          _ee2 = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _ee1;
          tmpMeta[0+1] = _ee2;
          tmp1_c2 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _ee1 = tmpMeta9;
          _ee2 = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _ee1;
          tmpMeta[0+1] = _ee2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT9;
          tmpMeta[0+1] = _inExp1;
          tmp1_c2 = 0 /* false */;
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
  _e0 = tmpMeta[0+0];
  _e1 = tmpMeta[0+1];
  _neg = tmp1_c2;

  _f1 = omc_Expression_expandFactors(threadData, _e1);

  _factorWithX1 = omc_List_split1OnTrue(threadData, _f1, boxvar_ExpressionSolve_expHasCref, _inExp3 ,&_factorWithoutX1);

  _pWithX1 = omc_ExpressionSolve_makeProductLstSort(threadData, _factorWithX1);

  _pWithoutX1 = omc_ExpressionSolve_makeProductLstSort(threadData, _factorWithoutX1);

  _f2 = omc_Expression_expandFactors(threadData, _inExp2);

  _factorWithX2 = omc_List_split1OnTrue(threadData, _f2, boxvar_ExpressionSolve_expHasCref, _inExp3 ,&_factorWithoutX2);

  _pWithX2 = omc_ExpressionSimplify_simplify1(threadData, omc_ExpressionSolve_makeProductLstSort(threadData, _factorWithX2), NULL);

  _pWithoutX2 = omc_ExpressionSolve_makeProductLstSort(threadData, _factorWithoutX2);

  if(omc_Expression_expEqual(threadData, _pWithX2, _pWithX1))
  {
    if((!_neg))
    {
      _ores = omc_Expression_expAdd(threadData, _pWithoutX1, _pWithoutX2);
    }
    else
    {
      _ores = omc_Expression_expSub(threadData, _pWithoutX2, _pWithoutX1);
    }

    _ores = omc_Expression_expMul(threadData, _ores, _pWithX2);
  }
  else
  {
    if(omc_Expression_expEqual(threadData, _pWithX2, omc_Expression_negate(threadData, _pWithX1)))
    {
      if((!_neg))
      {
        _ores = omc_Expression_expSub(threadData, _pWithoutX2, _pWithoutX1);
      }
      else
      {
        _ores = omc_Expression_expAdd(threadData, _pWithoutX1, _pWithoutX2);
      }

      _ores = omc_Expression_expMul(threadData, _ores, _pWithX2);
    }
    else
    {
      _e1 = omc_Expression_expMul(threadData, _pWithoutX1, _pWithX1);

      _e2 = omc_Expression_expMul(threadData, _pWithoutX2, _pWithX2);

      _ores = omc_Expression_expAdd(threadData, _e1, _e2);
    }
  }

  _ores = omc_Expression_expAdd(threadData, _e0, _ores);
  _return: OMC_LABEL_UNUSED
  return _ores;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_expAddX(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3)
{
  modelica_metatype _ores = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ores has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp1;
    tmp4_2 = _inExp2;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _e4 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _e4 has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmpMeta6;
          _e1 = tmpMeta7;
          _e2 = tmpMeta8;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3) && omc_ExpressionSolve_expHasCref(threadData, _e2, _inExp3)) && (!omc_ExpressionSolve_expHasCref(threadData, _e, _inExp3)))) goto tmp3_end;
          _e3 = omc_ExpressionSolve_expAddX(threadData, _inExp2, _e1, _inExp3);

          _e4 = omc_ExpressionSolve_expAddX(threadData, _inExp2, _e2, _inExp3);
          tmpMeta9 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _e, _e3, _e4);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,12,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          
          _e = tmpMeta10;
          _e1 = tmpMeta11;
          _e2 = tmpMeta12;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3) && omc_ExpressionSolve_expHasCref(threadData, _e2, _inExp3)) && (!omc_ExpressionSolve_expHasCref(threadData, _e, _inExp3)))) goto tmp3_end;
          _e3 = omc_ExpressionSolve_expAddX(threadData, _inExp1, _e1, _inExp3);

          _e4 = omc_ExpressionSolve_expAddX(threadData, _inExp1, _e2, _inExp3);
          tmpMeta13 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _e, _e3, _e4);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_ExpressionSolve_expAddX2(threadData, _inExp1, _inExp2, _inExp3);
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
  _ores = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ores;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolve4(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_oExp2, modelica_boolean *out_newX)
{
  modelica_metatype _oExp1 = NULL;
  modelica_metatype _oExp2 = NULL;
  modelica_boolean _newX;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oExp1 has no default value.
  // _oExp2 has no default value.
  // _newX has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp1;
    tmp4_2 = _inExp2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _e4 = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e_1 = NULL;
      modelica_metatype _e_2 = NULL;
      modelica_metatype _tp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _e4 has no default value.
      // _e has no default value.
      // _e_1 has no default value.
      // _e_2 has no default value.
      // _tp has no default value.
      tmp4 = 0;
      for (; tmp4 < 14; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_real tmp7;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp7 = mmc_unbox_real(tmpMeta6);
          if (0.0 != tmp7) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,13,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (3 != MMC_STRLEN(tmpMeta10) || strcmp(MMC_STRINGDATA(_OMC_LIT107), MMC_STRINGDATA(tmpMeta10)) != 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          if (listEmpty(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (!listEmpty(tmpMeta13)) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,13,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          if (3 != MMC_STRLEN(tmpMeta17) || strcmp(MMC_STRINGDATA(_OMC_LIT107), MMC_STRINGDATA(tmpMeta17)) != 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 3));
          if (listEmpty(tmpMeta18)) goto tmp3_end;
          tmpMeta19 = MMC_CAR(tmpMeta18);
          tmpMeta20 = MMC_CDR(tmpMeta18);
          if (!listEmpty(tmpMeta20)) goto tmp3_end;
          
          _e1 = tmpMeta12;
          _e2 = tmpMeta19;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta21;
          modelica_real tmp22;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp22 = mmc_unbox_real(tmpMeta21);
          if (0.0 != tmp22) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,13,3) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,1,1) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          if (3 != MMC_STRLEN(tmpMeta25) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmpMeta25)) != 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
          if (listEmpty(tmpMeta26)) goto tmp3_end;
          tmpMeta27 = MMC_CAR(tmpMeta26);
          tmpMeta28 = MMC_CDR(tmpMeta26);
          if (!listEmpty(tmpMeta28)) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,1,1) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,13,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,1,1) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          if (3 != MMC_STRLEN(tmpMeta32) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmpMeta32)) != 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 3));
          if (listEmpty(tmpMeta33)) goto tmp3_end;
          tmpMeta34 = MMC_CAR(tmpMeta33);
          tmpMeta35 = MMC_CDR(tmpMeta33);
          if (!listEmpty(tmpMeta35)) goto tmp3_end;
          
          _e1 = tmpMeta27;
          _e2 = tmpMeta34;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta36;
          modelica_real tmp37;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp37 = mmc_unbox_real(tmpMeta36);
          if (0.0 != tmp37) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,13,3) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta39,1,1) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
          if (5 != MMC_STRLEN(tmpMeta40) || strcmp(MMC_STRINGDATA(_OMC_LIT15), MMC_STRINGDATA(tmpMeta40)) != 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 3));
          if (listEmpty(tmpMeta41)) goto tmp3_end;
          tmpMeta42 = MMC_CAR(tmpMeta41);
          tmpMeta43 = MMC_CDR(tmpMeta41);
          if (!listEmpty(tmpMeta43)) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,1,1) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta45,13,3) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta46,1,1) == 0) goto tmp3_end;
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 2));
          if (5 != MMC_STRLEN(tmpMeta47) || strcmp(MMC_STRINGDATA(_OMC_LIT15), MMC_STRINGDATA(tmpMeta47)) != 0) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 3));
          if (listEmpty(tmpMeta48)) goto tmp3_end;
          tmpMeta49 = MMC_CAR(tmpMeta48);
          tmpMeta50 = MMC_CDR(tmpMeta48);
          if (!listEmpty(tmpMeta50)) goto tmp3_end;
          
          _e1 = tmpMeta42;
          _e2 = tmpMeta49;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta51;
          modelica_real tmp52;
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
          modelica_metatype tmpMeta65;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp52 = mmc_unbox_real(tmpMeta51);
          if (0.0 != tmp52) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta53,13,3) == 0) goto tmp3_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta54,1,1) == 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 2));
          if (4 != MMC_STRLEN(tmpMeta55) || strcmp(MMC_STRINGDATA(_OMC_LIT113), MMC_STRINGDATA(tmpMeta55)) != 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 3));
          if (listEmpty(tmpMeta56)) goto tmp3_end;
          tmpMeta57 = MMC_CAR(tmpMeta56);
          tmpMeta58 = MMC_CDR(tmpMeta56);
          if (!listEmpty(tmpMeta58)) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta59,1,1) == 0) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta60,13,3) == 0) goto tmp3_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta61,1,1) == 0) goto tmp3_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 2));
          if (4 != MMC_STRLEN(tmpMeta62) || strcmp(MMC_STRINGDATA(_OMC_LIT113), MMC_STRINGDATA(tmpMeta62)) != 0) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 3));
          if (listEmpty(tmpMeta63)) goto tmp3_end;
          tmpMeta64 = MMC_CAR(tmpMeta63);
          tmpMeta65 = MMC_CDR(tmpMeta63);
          if (!listEmpty(tmpMeta65)) goto tmp3_end;
          
          _e1 = tmpMeta57;
          _e2 = tmpMeta64;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta66;
          modelica_real tmp67;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp67 = mmc_unbox_real(tmpMeta66);
          if (0.0 != tmp67) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta68,13,3) == 0) goto tmp3_end;
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta68), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta69,1,1) == 0) goto tmp3_end;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta69), 2));
          if (4 != MMC_STRLEN(tmpMeta70) || strcmp(MMC_STRINGDATA(_OMC_LIT112), MMC_STRINGDATA(tmpMeta70)) != 0) goto tmp3_end;
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta68), 3));
          if (listEmpty(tmpMeta71)) goto tmp3_end;
          tmpMeta72 = MMC_CAR(tmpMeta71);
          tmpMeta73 = MMC_CDR(tmpMeta71);
          if (!listEmpty(tmpMeta73)) goto tmp3_end;
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta74,1,1) == 0) goto tmp3_end;
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta75,13,3) == 0) goto tmp3_end;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta75), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta76,1,1) == 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta76), 2));
          if (4 != MMC_STRLEN(tmpMeta77) || strcmp(MMC_STRINGDATA(_OMC_LIT112), MMC_STRINGDATA(tmpMeta77)) != 0) goto tmp3_end;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta75), 3));
          if (listEmpty(tmpMeta78)) goto tmp3_end;
          tmpMeta79 = MMC_CAR(tmpMeta78);
          tmpMeta80 = MMC_CDR(tmpMeta78);
          if (!listEmpty(tmpMeta80)) goto tmp3_end;
          
          _e1 = tmpMeta72;
          _e2 = tmpMeta79;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta81;
          modelica_real tmp82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp82 = mmc_unbox_real(tmpMeta81);
          if (0.0 != tmp82) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta83 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta83,13,3) == 0) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta83), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta84,1,1) == 0) goto tmp3_end;
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 2));
          if (4 != MMC_STRLEN(tmpMeta85) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmpMeta85)) != 0) goto tmp3_end;
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta83), 3));
          if (listEmpty(tmpMeta86)) goto tmp3_end;
          tmpMeta87 = MMC_CAR(tmpMeta86);
          tmpMeta88 = MMC_CDR(tmpMeta86);
          if (!listEmpty(tmpMeta88)) goto tmp3_end;
          tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta89,1,1) == 0) goto tmp3_end;
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta90,13,3) == 0) goto tmp3_end;
          tmpMeta91 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta90), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta91,1,1) == 0) goto tmp3_end;
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta91), 2));
          if (4 != MMC_STRLEN(tmpMeta92) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmpMeta92)) != 0) goto tmp3_end;
          tmpMeta93 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta90), 3));
          if (listEmpty(tmpMeta93)) goto tmp3_end;
          tmpMeta94 = MMC_CAR(tmpMeta93);
          tmpMeta95 = MMC_CDR(tmpMeta93);
          if (!listEmpty(tmpMeta95)) goto tmp3_end;
          
          _e1 = tmpMeta87;
          _e2 = tmpMeta94;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _e2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta96;
          modelica_real tmp97;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta96 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp97 = mmc_unbox_real(tmpMeta96);
          if (0.0 != tmp97) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta98 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta98,13,3) == 0) goto tmp3_end;
          tmpMeta99 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta98), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta99,1,1) == 0) goto tmp3_end;
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta99), 2));
          if (4 != MMC_STRLEN(tmpMeta100) || strcmp(MMC_STRINGDATA(_OMC_LIT113), MMC_STRINGDATA(tmpMeta100)) != 0) goto tmp3_end;
          tmpMeta101 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta98), 3));
          if (listEmpty(tmpMeta101)) goto tmp3_end;
          tmpMeta102 = MMC_CAR(tmpMeta101);
          tmpMeta103 = MMC_CDR(tmpMeta101);
          if (!listEmpty(tmpMeta103)) goto tmp3_end;
          tmpMeta104 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta104,1,1) == 0) goto tmp3_end;
          tmpMeta105 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta105,13,3) == 0) goto tmp3_end;
          tmpMeta106 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta105), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta106,1,1) == 0) goto tmp3_end;
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta106), 2));
          if (4 != MMC_STRLEN(tmpMeta107) || strcmp(MMC_STRINGDATA(_OMC_LIT114), MMC_STRINGDATA(tmpMeta107)) != 0) goto tmp3_end;
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta105), 3));
          if (listEmpty(tmpMeta108)) goto tmp3_end;
          tmpMeta109 = MMC_CAR(tmpMeta108);
          tmpMeta110 = MMC_CDR(tmpMeta108);
          if (!listEmpty(tmpMeta110)) goto tmp3_end;
          
          _e1 = tmpMeta102;
          _e2 = tmpMeta109;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_expEqual(threadData, _e1, _e2)) goto tmp3_end;
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta111;
          modelica_real tmp112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          modelica_metatype tmpMeta121;
          modelica_metatype tmpMeta122;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp112 = mmc_unbox_real(tmpMeta111);
          if (0.0 != tmp112) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta113 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta113,13,3) == 0) goto tmp3_end;
          tmpMeta114 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta114,1,1) == 0) goto tmp3_end;
          tmpMeta115 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta114), 2));
          if (4 != MMC_STRLEN(tmpMeta115) || strcmp(MMC_STRINGDATA(_OMC_LIT114), MMC_STRINGDATA(tmpMeta115)) != 0) goto tmp3_end;
          tmpMeta116 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 3));
          if (listEmpty(tmpMeta116)) goto tmp3_end;
          tmpMeta117 = MMC_CAR(tmpMeta116);
          tmpMeta118 = MMC_CDR(tmpMeta116);
          if (!listEmpty(tmpMeta118)) goto tmp3_end;
          tmpMeta119 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta119,1,1) == 0) goto tmp3_end;
          tmpMeta120 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta120,13,3) == 0) goto tmp3_end;
          tmpMeta121 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta120), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta121,1,1) == 0) goto tmp3_end;
          tmpMeta122 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta121), 2));
          if (4 != MMC_STRLEN(tmpMeta122) || strcmp(MMC_STRINGDATA(_OMC_LIT113), MMC_STRINGDATA(tmpMeta122)) != 0) goto tmp3_end;
          tmpMeta123 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta120), 3));
          if (listEmpty(tmpMeta123)) goto tmp3_end;
          tmpMeta124 = MMC_CAR(tmpMeta123);
          tmpMeta125 = MMC_CDR(tmpMeta123);
          if (!listEmpty(tmpMeta125)) goto tmp3_end;
          
          _e1 = tmpMeta117;
          _e2 = tmpMeta124;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_expEqual(threadData, _e1, _e2)) goto tmp3_end;
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta126;
          modelica_real tmp127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
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
          modelica_metatype tmpMeta141;
          modelica_metatype tmpMeta142;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          modelica_metatype tmpMeta145;
          modelica_metatype tmpMeta146;
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta126 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp127 = mmc_unbox_real(tmpMeta126);
          if (0.0 != tmp127) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta128 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta128,7,3) == 0) goto tmp3_end;
          tmpMeta129 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta128), 2));
          tmpMeta130 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta128), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta130,2,1) == 0) goto tmp3_end;
          tmpMeta131 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta128), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta131,13,3) == 0) goto tmp3_end;
          tmpMeta132 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta131), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta132,1,1) == 0) goto tmp3_end;
          tmpMeta133 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta132), 2));
          if (4 != MMC_STRLEN(tmpMeta133) || strcmp(MMC_STRINGDATA(_OMC_LIT113), MMC_STRINGDATA(tmpMeta133)) != 0) goto tmp3_end;
          tmpMeta134 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta131), 3));
          if (listEmpty(tmpMeta134)) goto tmp3_end;
          tmpMeta135 = MMC_CAR(tmpMeta134);
          tmpMeta136 = MMC_CDR(tmpMeta134);
          if (!listEmpty(tmpMeta136)) goto tmp3_end;
          tmpMeta137 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta137,1,1) == 0) goto tmp3_end;
          tmpMeta138 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta137), 2));
          tmpMeta139 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta139,7,3) == 0) goto tmp3_end;
          tmpMeta140 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta139), 2));
          tmpMeta141 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta139), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta141,2,1) == 0) goto tmp3_end;
          tmpMeta142 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta139), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta142,13,3) == 0) goto tmp3_end;
          tmpMeta143 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta142), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta143,1,1) == 0) goto tmp3_end;
          tmpMeta144 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta143), 2));
          if (4 != MMC_STRLEN(tmpMeta144) || strcmp(MMC_STRINGDATA(_OMC_LIT114), MMC_STRINGDATA(tmpMeta144)) != 0) goto tmp3_end;
          tmpMeta145 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta142), 3));
          if (listEmpty(tmpMeta145)) goto tmp3_end;
          tmpMeta146 = MMC_CAR(tmpMeta145);
          tmpMeta147 = MMC_CDR(tmpMeta145);
          if (!listEmpty(tmpMeta147)) goto tmp3_end;
          
          _e3 = tmpMeta129;
          _e1 = tmpMeta135;
          _tp = tmpMeta138;
          _e4 = tmpMeta140;
          _e2 = tmpMeta146;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_expEqual(threadData, _e1, _e2)) goto tmp3_end;
          tmpMeta148 = mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil));
          _e = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT112, tmpMeta148, _tp);
          tmpMeta[0+0] = omc_Expression_expMul(threadData, _e3, _e);
          tmpMeta[0+1] = _e4;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta149;
          modelica_real tmp150;
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
          modelica_metatype tmpMeta171;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta149 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp150 = mmc_unbox_real(tmpMeta149);
          if (0.0 != tmp150) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta151 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta151,7,3) == 0) goto tmp3_end;
          tmpMeta152 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta151), 2));
          tmpMeta153 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta151), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta153,2,1) == 0) goto tmp3_end;
          tmpMeta154 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta151), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta154,13,3) == 0) goto tmp3_end;
          tmpMeta155 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta154), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta155,1,1) == 0) goto tmp3_end;
          tmpMeta156 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta155), 2));
          if (4 != MMC_STRLEN(tmpMeta156) || strcmp(MMC_STRINGDATA(_OMC_LIT114), MMC_STRINGDATA(tmpMeta156)) != 0) goto tmp3_end;
          tmpMeta157 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta154), 3));
          if (listEmpty(tmpMeta157)) goto tmp3_end;
          tmpMeta158 = MMC_CAR(tmpMeta157);
          tmpMeta159 = MMC_CDR(tmpMeta157);
          if (!listEmpty(tmpMeta159)) goto tmp3_end;
          tmpMeta160 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta160,1,1) == 0) goto tmp3_end;
          tmpMeta161 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta160), 2));
          tmpMeta162 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta162,7,3) == 0) goto tmp3_end;
          tmpMeta163 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta162), 2));
          tmpMeta164 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta162), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta164,2,1) == 0) goto tmp3_end;
          tmpMeta165 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta162), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta165,13,3) == 0) goto tmp3_end;
          tmpMeta166 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta165), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta166,1,1) == 0) goto tmp3_end;
          tmpMeta167 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta166), 2));
          if (4 != MMC_STRLEN(tmpMeta167) || strcmp(MMC_STRINGDATA(_OMC_LIT113), MMC_STRINGDATA(tmpMeta167)) != 0) goto tmp3_end;
          tmpMeta168 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta165), 3));
          if (listEmpty(tmpMeta168)) goto tmp3_end;
          tmpMeta169 = MMC_CAR(tmpMeta168);
          tmpMeta170 = MMC_CDR(tmpMeta168);
          if (!listEmpty(tmpMeta170)) goto tmp3_end;
          
          _e4 = tmpMeta152;
          _e2 = tmpMeta158;
          _tp = tmpMeta161;
          _e3 = tmpMeta163;
          _e1 = tmpMeta169;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_expEqual(threadData, _e1, _e2)) goto tmp3_end;
          tmpMeta171 = mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil));
          _e = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT112, tmpMeta171, _tp);
          tmpMeta[0+0] = omc_Expression_expMul(threadData, _e3, _e);
          tmpMeta[0+1] = _e4;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta172;
          modelica_real tmp173;
          modelica_metatype tmpMeta174;
          modelica_metatype tmpMeta175;
          modelica_metatype tmpMeta176;
          modelica_metatype tmpMeta177;
          modelica_metatype tmpMeta178;
          modelica_metatype tmpMeta179;
          modelica_metatype tmpMeta180;
          modelica_metatype tmpMeta181;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta172 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp173 = mmc_unbox_real(tmpMeta172);
          if (0.0 != tmp173) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta174 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta174,13,3) == 0) goto tmp3_end;
          tmpMeta175 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta174), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta175,1,1) == 0) goto tmp3_end;
          tmpMeta176 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta175), 2));
          if (4 != MMC_STRLEN(tmpMeta176) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmpMeta176)) != 0) goto tmp3_end;
          tmpMeta177 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta174), 3));
          if (listEmpty(tmpMeta177)) goto tmp3_end;
          tmpMeta178 = MMC_CAR(tmpMeta177);
          tmpMeta179 = MMC_CDR(tmpMeta177);
          if (!listEmpty(tmpMeta179)) goto tmp3_end;
          tmpMeta180 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta180,1,1) == 0) goto tmp3_end;
          tmpMeta181 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta178;
          _e2 = tmpMeta181;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = omc_Expression_expPow(threadData, _e2, _OMC_LIT2);
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta182;
          modelica_real tmp183;
          modelica_metatype tmpMeta184;
          modelica_metatype tmpMeta185;
          modelica_metatype tmpMeta186;
          modelica_metatype tmpMeta187;
          modelica_metatype tmpMeta188;
          modelica_metatype tmpMeta189;
          modelica_metatype tmpMeta190;
          modelica_metatype tmpMeta191;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta182 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp183 = mmc_unbox_real(tmpMeta182);
          if (0.0 != tmp183) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta184 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta185 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta185,1,1) == 0) goto tmp3_end;
          tmpMeta186 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta186,13,3) == 0) goto tmp3_end;
          tmpMeta187 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta186), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta187,1,1) == 0) goto tmp3_end;
          tmpMeta188 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta187), 2));
          if (4 != MMC_STRLEN(tmpMeta188) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmpMeta188)) != 0) goto tmp3_end;
          tmpMeta189 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta186), 3));
          if (listEmpty(tmpMeta189)) goto tmp3_end;
          tmpMeta190 = MMC_CAR(tmpMeta189);
          tmpMeta191 = MMC_CDR(tmpMeta189);
          if (!listEmpty(tmpMeta191)) goto tmp3_end;
          
          _e2 = tmpMeta184;
          _e1 = tmpMeta190;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = omc_Expression_expPow(threadData, _e2, _OMC_LIT2);
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta192;
          modelica_real tmp193;
          modelica_metatype tmpMeta194;
          modelica_metatype tmpMeta195;
          modelica_metatype tmpMeta196;
          modelica_metatype tmpMeta197;
          modelica_metatype tmpMeta198;
          modelica_metatype tmpMeta199;
          modelica_metatype tmpMeta200;
          modelica_metatype tmpMeta201;
          modelica_metatype tmpMeta202;
          modelica_metatype tmpMeta203;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta192 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp193 = mmc_unbox_real(tmpMeta192);
          if (0.0 != tmp193) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta194 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta194,7,3) == 0) goto tmp3_end;
          tmpMeta195 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta194), 2));
          tmpMeta196 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta194), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta196,4,1) == 0) goto tmp3_end;
          tmpMeta197 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta194), 4));
          tmpMeta198 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta198,1,1) == 0) goto tmp3_end;
          tmpMeta199 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta198), 2));
          tmpMeta200 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta200,7,3) == 0) goto tmp3_end;
          tmpMeta201 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta200), 2));
          tmpMeta202 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta200), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta202,4,1) == 0) goto tmp3_end;
          tmpMeta203 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta200), 4));
          _e1 = tmpMeta195;
          _e2 = tmpMeta197;
          _tp = tmpMeta199;
          _e3 = tmpMeta201;
          _e4 = tmpMeta203;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_Expression_expEqual(threadData, _e2, _e4) && omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3)) && omc_ExpressionSolve_expHasCref(threadData, _e3, _inExp3))) goto tmp3_end;
          _e = omc_Expression_expPow(threadData, omc_Expression_makeDiv(threadData, _e1, _e3), _e2);

          _e_1 = omc_ExpressionSolve_preprocessingSolve3(threadData, _e, omc_Expression_makeConstOne(threadData, _tp), _inExp3 ,&_e_2 ,NULL);
          tmpMeta[0+0] = _e_1;
          tmpMeta[0+1] = _e_2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 0 /* false */;
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
  _oExp1 = tmpMeta[0+0];
  _oExp2 = tmpMeta[0+1];
  _newX = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_oExp2) { *out_oExp2 = _oExp2; }
  if (out_newX) { *out_newX = _newX; }
  return _oExp1;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolve4(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_oExp2, modelica_metatype *out_newX)
{
  modelica_boolean _newX;
  modelica_metatype _oExp1 = NULL;
  _oExp1 = omc_ExpressionSolve_preprocessingSolve4(threadData, _inExp1, _inExp2, _inExp3, out_oExp2, &_newX);
  /* skip box _oExp1; DAE.Exp */
  /* skip box _oExp2; DAE.Exp */
  if (out_newX) { *out_newX = mmc_mk_icon(_newX); }
  return _oExp1;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolve3(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_orhs, modelica_boolean *out_con)
{
  modelica_metatype _olhs = NULL;
  modelica_metatype _orhs = NULL;
  modelica_boolean _con;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _olhs has no default value.
  // _orhs has no default value.
  // _con has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp1;
    tmp4_2 = _inExp2;
    {
      modelica_real _r;
      modelica_real _r1;
      modelica_real _r2;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _res = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _r1 has no default value.
      // _r2 has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _res has no default value.
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_real tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_real tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_real tmp13;
          modelica_real tmp14;
          modelica_real tmp15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp7 = mmc_unbox_real(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmp10 = mmc_unbox_real(tmpMeta9);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,4,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _r2 = tmp7  /* pattern as ty=Real */;
          _e1 = tmpMeta8;
          _r1 = tmp10  /* pattern as ty=Real */;
          _e2 = tmpMeta12;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((((_r2 > 0.0) && (_r1 > 0.0)) && (!omc_Expression_isConstOne(threadData, _e1))) && omc_ExpressionSolve_expHasCref(threadData, _e2, _inExp3))) goto tmp3_end;
          tmp13 = _r2;
          if(!(tmp13 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert(threadData, info, "Model error: Argument of log(r2) was %g should be > 0", tmp13);
          }tmp14 = _r1;
          if(!(tmp14 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert(threadData, info, "Model error: Argument of log(r1) was %g should be > 0", tmp14);
          }tmp15 = log(tmp14);
          if (tmp15 == 0) {goto goto_2;}
          _r = (log(tmp13)) / tmp15;

          tmpMeta16 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_r));
          _res = tmpMeta16;
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = _res;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_real tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp18 = mmc_unbox_real(tmpMeta17);
          if (0.0 != tmp18) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,4,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta19;
          _e2 = tmpMeta21;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3) && (!omc_ExpressionSolve_expHasCref(threadData, _e2, _inExp3)))) goto tmp3_end;
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_real tmp26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,4,1) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,1,1) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          tmp26 = mmc_unbox_real(tmpMeta25);
          
          _e1 = tmpMeta22;
          _e2 = tmpMeta24;
          _r = tmp26  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(((!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)) && omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3)) && (1.0 == modelica_real_mod(_r, 2.0)))) goto tmp3_end;
          _res = omc_Expression_makeDiv(threadData, _OMC_LIT13, _e2);

          _res = omc_Expression_expPow(threadData, _inExp2, _res);
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _res;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_real tmp31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,4,1) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,1,1) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          tmp31 = mmc_unbox_real(tmpMeta30);
          if (0.5 != tmp31) goto tmp3_end;
          
          _e1 = tmpMeta27;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)) && omc_ExpressionSolve_expHasCref(threadData, _e1, _inExp3))) goto tmp3_end;
          _res = omc_Expression_expPow(threadData, _inExp2, _OMC_LIT2);
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _res;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta32;
          modelica_real tmp33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp33 = mmc_unbox_real(tmpMeta32);
          if (0.0 != tmp33) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,1,1) == 0) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          if (3 != MMC_STRLEN(tmpMeta35) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta35)) != 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta36)) goto tmp3_end;
          tmpMeta37 = MMC_CAR(tmpMeta36);
          tmpMeta38 = MMC_CDR(tmpMeta36);
          if (!listEmpty(tmpMeta38)) goto tmp3_end;
          
          _e1 = tmpMeta37;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta39;
          modelica_real tmp40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp40 = mmc_unbox_real(tmpMeta39);
          if (0.0 != tmp40) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,1,1) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 2));
          if (4 != MMC_STRLEN(tmpMeta42) || strcmp(MMC_STRINGDATA(_OMC_LIT115), MMC_STRINGDATA(tmpMeta42)) != 0) goto tmp3_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta43)) goto tmp3_end;
          tmpMeta44 = MMC_CAR(tmpMeta43);
          tmpMeta45 = MMC_CDR(tmpMeta43);
          if (!listEmpty(tmpMeta45)) goto tmp3_end;
          
          _e1 = tmpMeta44;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 0 /* false */;
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
  _olhs = tmpMeta[0+0];
  _orhs = tmpMeta[0+1];
  _con = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_orhs) { *out_orhs = _orhs; }
  if (out_con) { *out_con = _con; }
  return _olhs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolve3(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_orhs, modelica_metatype *out_con)
{
  modelica_boolean _con;
  modelica_metatype _olhs = NULL;
  _olhs = omc_ExpressionSolve_preprocessingSolve3(threadData, _inExp1, _inExp2, _inExp3, out_orhs, &_con);
  /* skip box _olhs; DAE.Exp */
  /* skip box _orhs; DAE.Exp */
  if (out_con) { *out_con = mmc_mk_icon(_con); }
  return _olhs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_preprocessingSolve2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_orhs, modelica_boolean *out_con)
{
  modelica_metatype _olhs = NULL;
  modelica_metatype _orhs = NULL;
  modelica_boolean _con;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _olhs has no default value.
  // _orhs has no default value.
  // _con has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp1;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _b = NULL;
      modelica_metatype _fa = NULL;
      modelica_metatype _ga = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _eWithX = NULL;
      modelica_metatype _factorWithX = NULL;
      modelica_metatype _factorWithoutX = NULL;
      modelica_metatype _pWithX = NULL;
      modelica_metatype _pWithoutX = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _b has no default value.
      // _fa has no default value.
      // _ga has no default value.
      // _lhs has no default value.
      // _tp has no default value.
      // _eWithX has no default value.
      // _factorWithX has no default value.
      // _factorWithoutX has no default value.
      // _pWithX has no default value.
      // _pWithoutX has no default value.
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _fa = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ExpressionSolve_expHasCref(threadData, _fa, _inExp3) && (!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)))) goto tmp3_end;
          _b = omc_Expression_negate(threadData, _inExp2);
          tmpMeta[0+0] = _fa;
          tmpMeta[0+1] = _b;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _fa = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ExpressionSolve_expHasCref(threadData, _fa, _inExp3) && (!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)))) goto tmp3_end;
          _b = omc_Expression_negate(threadData, _inExp2);
          tmpMeta[0+0] = _fa;
          tmpMeta[0+1] = _b;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _b = tmpMeta10;
          _fa = tmpMeta12;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_ExpressionSolve_expHasCref(threadData, _fa, _inExp3) && (!omc_ExpressionSolve_expHasCref(threadData, _b, _inExp3))) && (!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)))) goto tmp3_end;
          _e = omc_Expression_makeDiv(threadData, _b, _inExp2);
          tmpMeta[0+0] = _fa;
          tmpMeta[0+1] = _e;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,2,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _b = tmpMeta13;
          _fa = tmpMeta15;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_ExpressionSolve_expHasCref(threadData, _fa, _inExp3) && (!omc_ExpressionSolve_expHasCref(threadData, _b, _inExp3))) && (!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)))) goto tmp3_end;
          _eWithX = omc_Expression_expandFactors(threadData, _inExp1);

          _factorWithX = omc_List_split1OnTrue(threadData, _eWithX, boxvar_ExpressionSolve_expHasCref, _inExp3 ,&_factorWithoutX);

          _pWithX = omc_ExpressionSolve_makeProductLstSort(threadData, _factorWithX);

          _pWithoutX = omc_ExpressionSolve_makeProductLstSort(threadData, _factorWithoutX);

          _e = omc_Expression_makeDiv(threadData, _inExp2, _pWithoutX);
          tmpMeta[0+0] = _pWithX;
          tmpMeta[0+1] = _e;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,2,1) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _b = tmpMeta16;
          _fa = tmpMeta18;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_ExpressionSolve_expHasCref(threadData, _fa, _inExp3) && (!omc_ExpressionSolve_expHasCref(threadData, _b, _inExp3))) && (!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)))) goto tmp3_end;
          _e = omc_Expression_makeDiv(threadData, _inExp2, _b);
          tmpMeta[0+0] = _fa;
          tmpMeta[0+1] = _e;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,2,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _fa = tmpMeta19;
          _b = tmpMeta21;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_ExpressionSolve_expHasCref(threadData, _fa, _inExp3) && (!omc_ExpressionSolve_expHasCref(threadData, _b, _inExp3))) && (!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)))) goto tmp3_end;
          _e = omc_Expression_makeDiv(threadData, _inExp2, _b);
          tmpMeta[0+0] = _fa;
          tmpMeta[0+1] = _e;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,3,1) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _fa = tmpMeta22;
          _b = tmpMeta24;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_ExpressionSolve_expHasCref(threadData, _fa, _inExp3) && (!omc_ExpressionSolve_expHasCref(threadData, _b, _inExp3))) && (!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)))) goto tmp3_end;
          _e = omc_Expression_expMul(threadData, _inExp2, _b);
          tmpMeta[0+0] = _fa;
          tmpMeta[0+1] = _e;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,3,1) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _ga = tmpMeta25;
          _tp = tmpMeta27;
          _fa = tmpMeta28;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_ExpressionSolve_expHasCref(threadData, _fa, _inExp3) && omc_ExpressionSolve_expHasCref(threadData, _ga, _inExp3)) && (!omc_ExpressionSolve_expHasCref(threadData, _inExp2, _inExp3)))) goto tmp3_end;
          _e = omc_Expression_expMul(threadData, _inExp2, _fa);

          _lhs = omc_Expression_expSub(threadData, _e, _ga);

          _e = omc_Expression_makeConstZero(threadData, _tp);
          tmpMeta[0+0] = _lhs;
          tmpMeta[0+1] = _e;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          tmp1_c2 = 0 /* false */;
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
  _olhs = tmpMeta[0+0];
  _orhs = tmpMeta[0+1];
  _con = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_orhs) { *out_orhs = _orhs; }
  if (out_con) { *out_con = _con; }
  return _olhs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_preprocessingSolve2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype *out_orhs, modelica_metatype *out_con)
{
  modelica_boolean _con;
  modelica_metatype _olhs = NULL;
  _olhs = omc_ExpressionSolve_preprocessingSolve2(threadData, _inExp1, _inExp2, _inExp3, out_orhs, &_con);
  /* skip box _olhs; DAE.Exp */
  /* skip box _orhs; DAE.Exp */
  if (out_con) { *out_con = mmc_mk_icon(_con); }
  return _olhs;
}

DLLDirection
modelica_metatype omc_ExpressionSolve_preprocessingSolve(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fx, modelica_metatype __omcQ_24in_5Fy, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_integer _idepth, modelica_boolean _doInline, modelica_metatype *out_y, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_depth)
{
  modelica_metatype _x = NULL;
  modelica_metatype _y = NULL;
  modelica_metatype _eqnForNewVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _newVarsCrefs = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _depth;
  modelica_metatype _res = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _lhsWithX = NULL;
  modelica_metatype _rhsWithX = NULL;
  modelica_metatype _lhsWithoutX = NULL;
  modelica_metatype _rhsWithoutX = NULL;
  modelica_metatype _eWithX = NULL;
  modelica_metatype _factorWithX = NULL;
  modelica_metatype _factorWithoutX = NULL;
  modelica_metatype _lhsX = NULL;
  modelica_metatype _rhsX = NULL;
  modelica_metatype _lhsY = NULL;
  modelica_metatype _rhsY = NULL;
  modelica_metatype _N = NULL;
  modelica_metatype _cr = NULL;
  modelica_boolean _con;
  modelica_boolean _new_x;
  modelica_boolean _inlineFun;
  modelica_integer _iter;
  modelica_integer _numSimplifed;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _x = __omcQ_24in_5Fx;
  _y = __omcQ_24in_5Fy;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqnForNewVars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _newVarsCrefs = tmpMeta2;
  _depth = _idepth;
  // _res has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  // _lhsWithX has no default value.
  // _rhsWithX has no default value.
  // _lhsWithoutX has no default value.
  // _rhsWithoutX has no default value.
  // _eWithX has no default value.
  // _factorWithX has no default value.
  // _factorWithoutX has no default value.
  // _lhsX has no default value.
  // _rhsX has no default value.
  // _lhsY has no default value.
  // _rhsY has no default value.
  // _N has no default value.
  // _cr has no default value.
  // _con has no default value.
  // _new_x has no default value.
  _inlineFun = 1 /* true */;
  // _iter has no default value.
  _numSimplifed = ((modelica_integer) 0);
  _lhsX = omc_ExpressionSolve_preprocessingSolve5(threadData, _x, _inExp3, 1 /* true */ ,&_lhsY);

  _rhsX = omc_ExpressionSolve_preprocessingSolve5(threadData, _y, _inExp3, 1 /* true */ ,&_rhsY);

  _x = omc_Expression_expSub(threadData, _lhsX, _rhsX);

  _y = omc_Expression_expSub(threadData, _rhsY, _lhsY);

  _con = (!omc_Expression_isCref(threadData, _x));

  _iter = ((modelica_integer) 0);

  if(_con)
  {
    _x = omc_ExpressionSolve_unifyFunCalls(threadData, _x, _inExp3, NULL);
  }

  while(1)
  {
    if(!((_con && (_iter < ((modelica_integer) 1000))) && (!omc_Expression_isCref(threadData, _x)))) break;
    _x = omc_ExpressionSolve_preprocessingSolve2(threadData, _x, _y, _inExp3 ,&_y ,&_con);

    _x = omc_ExpressionSolve_preprocessingSolve3(threadData, _x, _y, _inExp3 ,&_y ,&_new_x);

    _con = (_con || _new_x);

    while(1)
    {
      if(!_new_x) break;
      _x = omc_ExpressionSolve_preprocessingSolve3(threadData, _x, _y, _inExp3 ,&_y ,&_new_x);
    }

    if(omc_Expression_isCref(threadData, _x))
    {
      break;
    }

    _x = omc_ExpressionSolve_removeSimpleCalls(threadData, _x, _y, _inExp3 ,&_y ,&_new_x);

    _con = (_con || _new_x);

    _x = omc_ExpressionSolve_preprocessingSolve4(threadData, _x, _y, _inExp3 ,&_y ,&_new_x);

    _con = (_new_x || _con);

    if((isSome(_uniqueEqIndex) && (!(stringEqual(omc_Config_simCodeTarget(threadData), _OMC_LIT123)))))
    {
      _x = omc_ExpressionSolve_preprocessingSolveTmpVars(threadData, _x, _y, _inExp3, _optCond, mmc_unbox_integer(omc_Util_getOption(threadData, _uniqueEqIndex)), _eqnForNewVars, _newVarsCrefs, _depth ,&_y ,&_new_x ,&_eqnForNewVars ,&_newVarsCrefs ,&_depth);

      _con = (_new_x || _con);
    }

    if((!_con))
    {
      if((_numSimplifed < ((modelica_integer) 3)))
      {
        _x = omc_ExpressionSimplify_simplify(threadData, _x ,&_con);

        _numSimplifed = ((modelica_integer) 1) + _numSimplifed;
      }

      _x = omc_Expression_makeFraction(threadData, _x ,&_N);

      if((!omc_Expression_isOne(threadData, _N)))
      {
        _new_x = 1 /* true */;

        _y = omc_Expression_expMul(threadData, _y, _N);
      }

      _con = (_new_x || _con);
    }

    if(_con)
    {
      _lhsX = omc_ExpressionSolve_preprocessingSolve5(threadData, _x, _inExp3, 1 /* true */ ,&_lhsY);

      _rhsX = omc_ExpressionSolve_preprocessingSolve5(threadData, _y, _inExp3, 0 /* false */ ,&_rhsY);

      _x = omc_Expression_expSub(threadData, _lhsX, _rhsX);

      _y = omc_Expression_expSub(threadData, _rhsY, _lhsY);
    }
    else
    {
      if((_doInline && _inlineFun))
      {
        _iter = ((modelica_integer) 50) + _iter;

        if(_inlineFun)
        {
          _x = omc_ExpressionSolve_solveFunCalls(threadData, _x, _inExp3, _functions ,&_con);

          _inlineFun = 0 /* false */;

          if(_con)
          {
            _numSimplifed = ((modelica_integer) 0);
          }
        }
      }
    }

    _iter = ((modelica_integer) 1) + _iter;
  }

  _y = omc_ExpressionSimplify_simplify1(threadData, _y, NULL);
  _return: OMC_LABEL_UNUSED
  if (out_y) { *out_y = _y; }
  if (out_eqnForNewVars) { *out_eqnForNewVars = _eqnForNewVars; }
  if (out_newVarsCrefs) { *out_newVarsCrefs = _newVarsCrefs; }
  if (out_depth) { *out_depth = _depth; }
  return _x;
}
modelica_metatype boxptr_ExpressionSolve_preprocessingSolve(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fx, modelica_metatype __omcQ_24in_5Fy, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_metatype _idepth, modelica_metatype _doInline, modelica_metatype *out_y, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_depth)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _depth;
  modelica_metatype _x = NULL;
  tmp1 = mmc_unbox_integer(_idepth);
  tmp2 = mmc_unbox_integer(_doInline);
  _x = omc_ExpressionSolve_preprocessingSolve(threadData, __omcQ_24in_5Fx, __omcQ_24in_5Fy, _inExp3, _optCond, _functions, _uniqueEqIndex, tmp1, tmp2, out_y, out_eqnForNewVars, out_newVarsCrefs, &_depth);
  /* skip box _x; DAE.Exp */
  /* skip box _y; DAE.Exp */
  /* skip box _eqnForNewVars; list<BackendDAE.Equation> */
  /* skip box _newVarsCrefs; list<DAE.ComponentRef> */
  if (out_depth) { *out_depth = mmc_mk_icon(_depth); }
  return _x;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_generateAssertType(threadData_t *threadData, modelica_metatype _tp, modelica_metatype _cr, modelica_metatype _iExp, modelica_metatype _inAsserts)
{
  modelica_metatype _outAsserts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAsserts has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tp;
    {
      modelica_metatype _path = NULL;
      modelica_metatype _p1 = NULL;
      modelica_metatype _pn = NULL;
      modelica_metatype _names = NULL;
      modelica_integer _n;
      modelica_metatype _e1 = NULL;
      modelica_metatype _en = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _es = NULL;
      modelica_string _s1 = NULL;
      modelica_string _sn = NULL;
      modelica_string _estr = NULL;
      modelica_string _crstr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _path has no default value.
      // _p1 has no default value.
      // _pn has no default value.
      // _names has no default value.
      // _n has no default value.
      // _e1 has no default value.
      // _en has no default value.
      // _e has no default value.
      // _es has no default value.
      // _s1 has no default value.
      // _sn has no default value.
      // _estr has no default value.
      // _crstr has no default value.
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
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _path = tmpMeta6;
          _names = tmpMeta7;
          /* Pattern matching succeeded */
          _p1 = omc_AbsynUtil_suffixPath(threadData, _path, listHead(_names));

          tmpMeta8 = mmc_mk_box3(8, &DAE_Exp_ENUM__LITERAL__desc, _p1, mmc_mk_integer(((modelica_integer) 1)));
          _e1 = tmpMeta8;

          _n = listLength(_names);

          _pn = omc_AbsynUtil_suffixPath(threadData, _path, listGet(_names, _n));

          tmpMeta9 = mmc_mk_box3(8, &DAE_Exp_ENUM__LITERAL__desc, _p1, mmc_mk_integer(_n));
          _en = tmpMeta9;

          _s1 = omc_AbsynUtil_pathString(threadData, _p1, _OMC_LIT124, 1 /* true */, 0 /* false */);

          _sn = omc_AbsynUtil_pathString(threadData, _pn, _OMC_LIT124, 1 /* true */, 0 /* false */);

          omc_ExpressionDump_printExpStr(threadData, _iExp);

          _crstr = omc_ComponentReference_printComponentRefStr(threadData, _cr);

          tmpMeta10 = stringAppend(_OMC_LIT125,_crstr);
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT126);
          tmpMeta12 = stringAppend(tmpMeta11,_s1);
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT127);
          tmpMeta14 = stringAppend(tmpMeta13,_sn);
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT128);
          _estr = tmpMeta15;

          tmpMeta16 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _iExp, _OMC_LIT130, _e1, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          tmpMeta17 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _iExp, _OMC_LIT133, _en, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          tmpMeta18 = mmc_mk_box4(12, &DAE_Exp_LBINARY__desc, tmpMeta16, _OMC_LIT132, tmpMeta17);
          _e = tmpMeta18;

          tmpMeta19 = mmc_mk_cons(_iExp, mmc_mk_cons(_OMC_LIT136, MMC_REFSTRUCTLIT(mmc_nil)));
          _es = omc_Expression_makePureBuiltinCall(threadData, _OMC_LIT134, tmpMeta19, _OMC_LIT137);

          tmpMeta20 = mmc_mk_box2(5, &DAE_Exp_SCONST__desc, _estr);
          tmpMeta21 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta20, _OMC_LIT138, _es);
          _es = tmpMeta21;
          tmpMeta23 = mmc_mk_box5(11, &DAE_Statement_STMT__ASSERT__desc, _e, _es, _OMC_LIT31, _OMC_LIT35);
          tmpMeta22 = mmc_mk_cons(tmpMeta23, _inAsserts);
          tmpMeta1 = tmpMeta22;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inAsserts;
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
  _outAsserts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outAsserts;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveSimple(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_integer _idepth, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_odepth)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outAsserts = NULL;
  modelica_metatype _eqnForNewVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _newVarsCrefs = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _odepth;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outAsserts has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqnForNewVars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _newVarsCrefs = tmpMeta2;
  _odepth = _idepth;
  
  
  { /* match expression */
    modelica_metatype tmp6_1;modelica_metatype tmp6_2;
    tmp6_1 = _inExp1;
    tmp6_2 = _inExp3;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _cr1 = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _asserts = NULL;
      volatile mmc_switch_type tmp6;
      int tmp7;
      // _cr has no default value.
      // _cr1 has no default value.
      // _tp has no default value.
      // _asserts has no default value.
      tmp6 = 0;
      for (; tmp6 < 8; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,6,2) == 0) goto tmp5_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,6,2) == 0) goto tmp5_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 2));
          
          _cr1 = tmpMeta8;
          _cr = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ComponentReference_crefEqual(threadData, _cr, _cr1) && (!omc_Expression_expHasCrefNoPreOrStart(threadData, _inExp2, _cr)))) goto tmp5_end;
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _inExp2;
          tmpMeta[0+1] = tmpMeta10;
          goto tmp5_done;
        }
        case 1: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,3) == 0) goto tmp5_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,1) == 0) goto tmp5_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          if (3 != MMC_STRLEN(tmpMeta12) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmpMeta12)) != 0) goto tmp5_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          if (listEmpty(tmpMeta13)) goto tmp5_end;
          tmpMeta14 = MMC_CAR(tmpMeta13);
          tmpMeta15 = MMC_CDR(tmpMeta13);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,6,2) == 0) goto tmp5_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          if (!listEmpty(tmpMeta15)) goto tmp5_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,13,3) == 0) goto tmp5_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,1,1) == 0) goto tmp5_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          if (3 != MMC_STRLEN(tmpMeta18) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmpMeta18)) != 0) goto tmp5_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 3));
          if (listEmpty(tmpMeta19)) goto tmp5_end;
          tmpMeta20 = MMC_CAR(tmpMeta19);
          tmpMeta21 = MMC_CDR(tmpMeta19);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,6,2) == 0) goto tmp5_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (!listEmpty(tmpMeta21)) goto tmp5_end;
          
          _cr1 = tmpMeta16;
          _cr = tmpMeta22;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ComponentReference_crefEqual(threadData, _cr, _cr1) && (!omc_Expression_expHasDerCref(threadData, _inExp2, _cr)))) goto tmp5_end;
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _inExp2;
          tmpMeta[0+1] = tmpMeta23;
          goto tmp5_done;
        }
        case 2: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,6,2) == 0) goto tmp5_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,8,2) == 0) goto tmp5_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,5,1) == 0) goto tmp5_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,6,2) == 0) goto tmp5_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          
          _cr = tmpMeta24;
          _cr1 = tmpMeta27;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ComponentReference_crefEqual(threadData, _cr1, _cr) && (!omc_Expression_expHasCrefNoPreOrStart(threadData, _inExp2, _cr)))) goto tmp5_end;
          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = omc_Expression_negate(threadData, _inExp2);
          tmpMeta[0+1] = tmpMeta28;
          goto tmp5_done;
        }
        case 3: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,6,2) == 0) goto tmp5_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,8,2) == 0) goto tmp5_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,6,1) == 0) goto tmp5_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,6,2) == 0) goto tmp5_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          
          _cr = tmpMeta29;
          _cr1 = tmpMeta32;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ComponentReference_crefEqual(threadData, _cr1, _cr) && (!omc_Expression_expHasCrefNoPreOrStart(threadData, _inExp2, _cr)))) goto tmp5_end;
          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = omc_Expression_negate(threadData, _inExp2);
          tmpMeta[0+1] = tmpMeta33;
          goto tmp5_done;
        }
        case 4: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,13,3) == 0) goto tmp5_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,1,1) == 0) goto tmp5_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          if (3 != MMC_STRLEN(tmpMeta35) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmpMeta35)) != 0) goto tmp5_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 3));
          if (listEmpty(tmpMeta36)) goto tmp5_end;
          tmpMeta37 = MMC_CAR(tmpMeta36);
          tmpMeta38 = MMC_CDR(tmpMeta36);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,6,2) == 0) goto tmp5_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
          if (!listEmpty(tmpMeta38)) goto tmp5_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,8,2) == 0) goto tmp5_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,5,1) == 0) goto tmp5_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,13,3) == 0) goto tmp5_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,1,1) == 0) goto tmp5_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 2));
          if (3 != MMC_STRLEN(tmpMeta43) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmpMeta43)) != 0) goto tmp5_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 3));
          if (listEmpty(tmpMeta44)) goto tmp5_end;
          tmpMeta45 = MMC_CAR(tmpMeta44);
          tmpMeta46 = MMC_CDR(tmpMeta44);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta45,6,2) == 0) goto tmp5_end;
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 2));
          if (!listEmpty(tmpMeta46)) goto tmp5_end;
          
          _cr = tmpMeta39;
          _cr1 = tmpMeta47;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ComponentReference_crefEqual(threadData, _cr1, _cr) && (!omc_Expression_expHasDerCref(threadData, _inExp2, _cr)))) goto tmp5_end;
          tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = omc_Expression_negate(threadData, _inExp2);
          tmpMeta[0+1] = tmpMeta48;
          goto tmp5_done;
        }
        case 5: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,13,3) == 0) goto tmp5_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta49,1,1) == 0) goto tmp5_end;
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta49), 2));
          if (3 != MMC_STRLEN(tmpMeta50) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmpMeta50)) != 0) goto tmp5_end;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 3));
          if (listEmpty(tmpMeta51)) goto tmp5_end;
          tmpMeta52 = MMC_CAR(tmpMeta51);
          tmpMeta53 = MMC_CDR(tmpMeta51);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta52,6,2) == 0) goto tmp5_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 2));
          if (!listEmpty(tmpMeta53)) goto tmp5_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,8,2) == 0) goto tmp5_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta55,6,1) == 0) goto tmp5_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta56,13,3) == 0) goto tmp5_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta56), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta57,1,1) == 0) goto tmp5_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 2));
          if (3 != MMC_STRLEN(tmpMeta58) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmpMeta58)) != 0) goto tmp5_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta56), 3));
          if (listEmpty(tmpMeta59)) goto tmp5_end;
          tmpMeta60 = MMC_CAR(tmpMeta59);
          tmpMeta61 = MMC_CDR(tmpMeta59);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta60,6,2) == 0) goto tmp5_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 2));
          if (!listEmpty(tmpMeta61)) goto tmp5_end;
          
          _cr = tmpMeta54;
          _cr1 = tmpMeta62;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ComponentReference_crefEqual(threadData, _cr1, _cr) && (!omc_Expression_expHasDerCref(threadData, _inExp2, _cr)))) goto tmp5_end;
          tmpMeta63 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = omc_Expression_negate(threadData, _inExp2);
          tmpMeta[0+1] = tmpMeta63;
          goto tmp5_done;
        }
        case 6: {
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,6,2) == 0) goto tmp5_end;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,10,2) == 0) goto tmp5_end;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta65,24,1) == 0) goto tmp5_end;
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta66,6,2) == 0) goto tmp5_end;
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta66), 2));
          
          _cr = tmpMeta64;
          _cr1 = tmpMeta67;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ComponentReference_crefEqual(threadData, _cr1, _cr) && (!omc_Expression_expHasCrefNoPreOrStart(threadData, _inExp2, _cr)))) goto tmp5_end;
          tmpMeta68 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = omc_Expression_negate(threadData, _inExp2);
          tmpMeta[0+1] = tmpMeta68;
          goto tmp5_done;
        }
        case 7: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,6,2) == 0) goto tmp5_end;
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 2));
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,13,3) == 0) goto tmp5_end;
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta71,1,1) == 0) goto tmp5_end;
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta71), 2));
          if (7 != MMC_STRLEN(tmpMeta72) || strcmp(MMC_STRINGDATA(_OMC_LIT139), MMC_STRINGDATA(tmpMeta72)) != 0) goto tmp5_end;
          tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          if (listEmpty(tmpMeta73)) goto tmp5_end;
          tmpMeta74 = MMC_CAR(tmpMeta73);
          tmpMeta75 = MMC_CDR(tmpMeta73);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta74,6,2) == 0) goto tmp5_end;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta74), 2));
          if (!listEmpty(tmpMeta75)) goto tmp5_end;
          
          _cr = tmpMeta69;
          _tp = tmpMeta70;
          _cr1 = tmpMeta76;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_ComponentReference_crefEqual(threadData, _cr, _cr1) && (!omc_Expression_expHasCrefNoPreorDer(threadData, _inExp2, _cr)))) goto tmp5_end;
          tmpMeta77 = MMC_REFSTRUCTLIT(mmc_nil);
          _asserts = omc_ExpressionSolve_generateAssertType(threadData, _tp, _cr, _inExp3, tmpMeta77);
          tmpMeta78 = mmc_mk_box3(23, &DAE_Exp_CAST__desc, _tp, _inExp2);
          tmpMeta[0+0] = tmpMeta78;
          tmpMeta[0+1] = _asserts;
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
  _outExp = tmpMeta[0+0];
  _outAsserts = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outAsserts) { *out_outAsserts = _outAsserts; }
  if (out_eqnForNewVars) { *out_eqnForNewVars = _eqnForNewVars; }
  if (out_newVarsCrefs) { *out_newVarsCrefs = _newVarsCrefs; }
  if (out_odepth) { *out_odepth = _odepth; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveSimple(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _idepth, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_odepth)
{
  modelica_integer tmp1;
  modelica_integer _odepth;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_idepth);
  _outExp = omc_ExpressionSolve_solveSimple(threadData, _inExp1, _inExp2, _inExp3, tmp1, out_outAsserts, out_eqnForNewVars, out_newVarsCrefs, &_odepth);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outAsserts; list<DAE.Statement> */
  /* skip box _eqnForNewVars; list<BackendDAE.Equation> */
  /* skip box _newVarsCrefs; list<DAE.ComponentRef> */
  if (out_odepth) { *out_odepth = mmc_mk_icon(_odepth); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveWork(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_integer _idepth, modelica_boolean _doInline, modelica_boolean _isContinuousIntegration, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_integer *out_depth)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outAsserts = NULL;
  modelica_metatype _eqnForNewVars = NULL;
  modelica_metatype _newVarsCrefs = NULL;
  modelica_integer _depth;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _eqnForNewVars1 = NULL;
  modelica_metatype _eqnForNewVars2 = NULL;
  modelica_metatype _newVarsCrefs1 = NULL;
  modelica_metatype _newVarsCrefs2 = NULL;
  modelica_integer tmp1_c4 __attribute__((unused)) = 0;
  modelica_integer tmp11_c4 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outAsserts has no default value.
  // _eqnForNewVars has no default value.
  // _newVarsCrefs has no default value.
  // _depth has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _eqnForNewVars1 has no default value.
  // _eqnForNewVars2 has no default value.
  // _newVarsCrefs1 has no default value.
  // _newVarsCrefs2 has no default value.
  
  
  
  
  
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
          tmpMeta[0+0] = omc_ExpressionSolve_preprocessingSolve(threadData, _inExp1, _inExp2, _inExp3, _optCond, _functions, _uniqueEqIndex, _idepth, _doInline, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT49))
          {
            omc_Debug_trace(threadData, _OMC_LIT140);

            tmpMeta6 = stringAppend(omc_ExpressionDump_printExpStr(threadData, _inExp1),_OMC_LIT141);
            tmpMeta7 = stringAppend(tmpMeta6,omc_ExpressionDump_printExpStr(threadData, _inExp2));
            omc_Debug_trace(threadData, tmpMeta7);

            tmpMeta8 = stringAppend(_OMC_LIT43,omc_ExpressionDump_printExpStr(threadData, _inExp3));
            omc_Debug_trace(threadData, tmpMeta8);
          }
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          tmpMeta[0+2] = tmpMeta9;
          tmpMeta[0+3] = tmpMeta10;
          tmp1_c4 = _idepth;
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
  _e1 = tmpMeta[0+0];
  _e2 = tmpMeta[0+1];
  _eqnForNewVars1 = tmpMeta[0+2];
  _newVarsCrefs1 = tmpMeta[0+3];
  _depth = tmp1_c4;

  
  
  
  
  
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp14;
      int tmp15;
      tmp14 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp13_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp14 < 3; tmp14++) {
        switch (MMC_SWITCH_CAST(tmp14)) {
        case 0: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_ExpressionSolve_solveIfExp(threadData, _e1, _e2, _inExp3, _optCond, _functions, _uniqueEqIndex, _depth, _doInline, _isContinuousIntegration, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp11_c4);
          goto tmp13_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_ExpressionSolve_solveSimple(threadData, _e1, _e2, _inExp3, _depth, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp11_c4);
          goto tmp13_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_ExpressionSolve_solveLinearSystem(threadData, _e1, _e2, _inExp3, _functions, _depth, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp11_c4);
          goto tmp13_done;
        }
        }
        goto tmp13_end;
        tmp13_end: ;
      }
      goto goto_12;
      tmp13_done:
      (void)tmp14;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp13_done2;
      goto_12:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp14 < 3) {
        goto tmp13_top;
      }
      MMC_THROW_INTERNAL();
      tmp13_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _outAsserts = tmpMeta[0+1];
  _eqnForNewVars2 = tmpMeta[0+2];
  _newVarsCrefs2 = tmpMeta[0+3];
  _depth = tmp11_c4;

  _eqnForNewVars = listAppend(_eqnForNewVars1, _eqnForNewVars2);

  _newVarsCrefs = listAppend(_newVarsCrefs1, _newVarsCrefs2);
  _return: OMC_LABEL_UNUSED
  if (out_outAsserts) { *out_outAsserts = _outAsserts; }
  if (out_eqnForNewVars) { *out_eqnForNewVars = _eqnForNewVars; }
  if (out_newVarsCrefs) { *out_newVarsCrefs = _newVarsCrefs; }
  if (out_depth) { *out_depth = _depth; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveWork(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _optCond, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_metatype _idepth, modelica_metatype _doInline, modelica_metatype _isContinuousIntegration, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs, modelica_metatype *out_depth)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _depth;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_idepth);
  tmp2 = mmc_unbox_integer(_doInline);
  tmp3 = mmc_unbox_integer(_isContinuousIntegration);
  _outExp = omc_ExpressionSolve_solveWork(threadData, _inExp1, _inExp2, _inExp3, _optCond, _functions, _uniqueEqIndex, tmp1, tmp2, tmp3, out_outAsserts, out_eqnForNewVars, out_newVarsCrefs, &_depth);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outAsserts; list<DAE.Statement> */
  /* skip box _eqnForNewVars; list<BackendDAE.Equation> */
  /* skip box _newVarsCrefs; list<DAE.ComponentRef> */
  if (out_depth) { *out_depth = mmc_mk_icon(_depth); }
  return _outExp;
}

DLLDirection
modelica_metatype omc_ExpressionSolve_solve2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_boolean _doInline, modelica_boolean _isContinuousIntegration, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outAsserts = NULL;
  modelica_metatype _eqnForNewVars = NULL;
  modelica_metatype _newVarsCrefs = NULL;
  modelica_integer _dummyI;
  modelica_integer tmp1_c4 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outAsserts has no default value.
  // _eqnForNewVars has no default value.
  // _newVarsCrefs has no default value.
  // _dummyI has no default value.
  
  
  
  
  
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_ExpressionSolve_solveSimple(threadData, _inExp1, _inExp2, _inExp3, ((modelica_integer) 0), &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_ExpressionSolve_solveSimple(threadData, _inExp2, _inExp1, _inExp3, ((modelica_integer) 0), &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_ExpressionSolve_solveWork(threadData, _inExp1, _inExp2, _inExp3, mmc_mk_none(), _functions, _uniqueEqIndex, ((modelica_integer) 0), _doInline, _isContinuousIntegration, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT49))
          {
            tmpMeta6 = stringAppend(_OMC_LIT142,omc_ExpressionDump_printExpStr(threadData, _inExp1));
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT141);
            tmpMeta8 = stringAppend(tmpMeta7,omc_ExpressionDump_printExpStr(threadData, _inExp2));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT143);
            tmpMeta10 = stringAppend(tmpMeta9,omc_ExpressionDump_printExpStr(threadData, _inExp3));
            tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT144);
            omc_Error_addInternalError(threadData, tmpMeta11, _OMC_LIT146);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _outAsserts = tmpMeta[0+1];
  _eqnForNewVars = tmpMeta[0+2];
  _newVarsCrefs = tmpMeta[0+3];
  _dummyI = tmp1_c4;
  _return: OMC_LABEL_UNUSED
  if (out_outAsserts) { *out_outAsserts = _outAsserts; }
  if (out_eqnForNewVars) { *out_eqnForNewVars = _eqnForNewVars; }
  if (out_newVarsCrefs) { *out_newVarsCrefs = _newVarsCrefs; }
  return _outExp;
}
modelica_metatype boxptr_ExpressionSolve_solve2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _functions, modelica_metatype _uniqueEqIndex, modelica_metatype _doInline, modelica_metatype _isContinuousIntegration, modelica_metatype *out_outAsserts, modelica_metatype *out_eqnForNewVars, modelica_metatype *out_newVarsCrefs)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_doInline);
  tmp2 = mmc_unbox_integer(_isContinuousIntegration);
  _outExp = omc_ExpressionSolve_solve2(threadData, _inExp1, _inExp2, _inExp3, _functions, _uniqueEqIndex, tmp1, tmp2, out_outAsserts, out_eqnForNewVars, out_newVarsCrefs);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outAsserts; list<DAE.Statement> */
  /* skip box _eqnForNewVars; list<BackendDAE.Equation> */
  /* skip box _newVarsCrefs; list<DAE.ComponentRef> */
  return _outExp;
}

DLLDirection
modelica_metatype omc_ExpressionSolve_solve(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3, modelica_metatype _functions, modelica_metatype *out_outAsserts)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outAsserts = NULL;
  modelica_metatype _dummy1 = NULL;
  modelica_metatype _dummy2 = NULL;
  modelica_integer _dummyI;
  modelica_integer tmp1_c4 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outAsserts has no default value.
  // _dummy1 has no default value.
  // _dummy2 has no default value.
  // _dummyI has no default value.
  
  
  
  
  
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_ExpressionSolve_solveSimple(threadData, _inExp1, _inExp2, _inExp3, ((modelica_integer) 0), &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_ExpressionSolve_solveSimple(threadData, _inExp2, _inExp1, _inExp3, ((modelica_integer) 0), &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_ExpressionSolve_solveWork(threadData, _inExp1, _inExp2, _inExp3, mmc_mk_none(), _functions, mmc_mk_none(), ((modelica_integer) 0), 0 /* false */, 0 /* false */, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmp1_c4);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT49))
          {
            tmpMeta6 = stringAppend(_OMC_LIT142,omc_ExpressionDump_printExpStr(threadData, _inExp1));
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT141);
            tmpMeta8 = stringAppend(tmpMeta7,omc_ExpressionDump_printExpStr(threadData, _inExp2));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT143);
            tmpMeta10 = stringAppend(tmpMeta9,omc_ExpressionDump_printExpStr(threadData, _inExp3));
            tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT144);
            omc_Error_addInternalError(threadData, tmpMeta11, _OMC_LIT147);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _outAsserts = tmpMeta[0+1];
  _dummy1 = tmpMeta[0+2];
  _dummy2 = tmpMeta[0+3];
  _dummyI = tmp1_c4;

  _outExp = omc_ExpressionSimplify_simplify1(threadData, _outExp, NULL);
  _return: OMC_LABEL_UNUSED
  if (out_outAsserts) { *out_outAsserts = _outAsserts; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC void omc_ExpressionSolve_printTryToSolve(threadData_t *threadData, modelica_string _instanceName, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inExp3)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_instanceName,_OMC_LIT148);
  tmpMeta2 = stringAppend(tmpMeta1,omc_ExpressionDump_printExpStr(threadData, _inExp1));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT141);
  tmpMeta4 = stringAppend(tmpMeta3,omc_ExpressionDump_printExpStr(threadData, _inExp2));
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT149);
  tmpMeta6 = stringAppend(tmpMeta5,omc_ExpressionDump_printExpStr(threadData, _inExp3));
  tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT45);
  fputs(MMC_STRINGDATA(tmpMeta7),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ExpressionSolve_solveSimpleEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _var, modelica_metatype _shared, modelica_boolean *out_solved)
{
  modelica_metatype _eqn = NULL;
  modelica_boolean _solved;
  modelica_metatype _cr = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _varexp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype _source = NULL;
  modelica_boolean _isContinuousIntegration;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  // _solved has no default value.
  // _cr has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _varexp has no default value.
  // _e has no default value.
  // _attr has no default value.
  // _source has no default value.
  _isContinuousIntegration = omc_BackendDAEUtil_isSimulationDAE(threadData, _shared);
  /* Pattern-matching assignment */
  tmpMeta1 = _eqn;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _e1 = tmpMeta2;
  _e2 = tmpMeta3;
  _source = tmpMeta4;
  _attr = tmpMeta5;

  /* Pattern-matching assignment */
  tmpMeta6 = _var;
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  _cr = tmpMeta7;

  _varexp = omc_Expression_crefExp(threadData, _cr);

  if(omc_BackendVariable_isStateVar(threadData, _var))
  {
    _varexp = omc_Expression_expDer(threadData, _varexp);

    _cr = omc_ComponentReference_crefPrefixDer(threadData, _cr);
  }

  if((omc_Types_isIntegerOrRealOrSubTypeOfEither(threadData, omc_Expression_typeof(threadData, _e1)) && omc_Types_isIntegerOrRealOrSubTypeOfEither(threadData, omc_Expression_typeof(threadData, _e2))))
  {
    _e1 = omc_ExpressionSolve_preprocessingSolve(threadData, _e1, _e2, _varexp, mmc_mk_none(), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 12)))), mmc_mk_none(), ((modelica_integer) 0), 0 /* false */ ,&_e2, NULL, NULL, NULL);
  }

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp10;
      int tmp11;
      tmp10 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp9_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp10 < 2; tmp10++) {
        switch (MMC_SWITCH_CAST(tmp10)) {
        case 0: {
          modelica_metatype tmpMeta12;
          /* Pattern matching succeeded */
          _e = omc_ExpressionSolve_solve2(threadData, _e1, _e2, _varexp, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 12)))), mmc_mk_none(), 0 /* false */, _isContinuousIntegration, NULL, NULL, NULL);

          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _source = omc_ElementSource_addSymbolicTransformationSolve(threadData, 1 /* true */, _source, _cr, _e1, _e2, _e, tmpMeta12);

          _eqn = omc_BackendEquation_generateEquation(threadData, _varexp, _e, _source, _attr);

          _solved = 1 /* true */;
          goto tmp9_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _solved = 0 /* false */;
          goto tmp9_done;
        }
        }
        goto tmp9_end;
        tmp9_end: ;
      }
      goto goto_8;
      tmp9_done:
      (void)tmp10;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp9_done2;
      goto_8:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp10 < 2) {
        goto tmp9_top;
      }
      MMC_THROW_INTERNAL();
      tmp9_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_solved) { *out_solved = _solved; }
  return _eqn;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ExpressionSolve_solveSimpleEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _var, modelica_metatype _shared, modelica_metatype *out_solved)
{
  modelica_boolean _solved;
  modelica_metatype _eqn = NULL;
  _eqn = omc_ExpressionSolve_solveSimpleEquation(threadData, __omcQ_24in_5Feqn, _var, _shared, &_solved);
  /* skip box _eqn; BackendDAE.Equation */
  if (out_solved) { *out_solved = mmc_mk_icon(_solved); }
  return _eqn;
}

DLLDirection
modelica_metatype omc_ExpressionSolve_solveSimpleEquations(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdae)
{
  modelica_metatype _dae = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dae = __omcQ_24in_5Fdae;
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype tmpMeta5;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp34;
    modelica_metatype _syst_loopVar = 0;
    modelica_metatype _syst;
    _syst_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dae), 2)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar5;
    while(1) {
      tmp34 = 1;
      if (!listEmpty(_syst_loopVar)) {
        _syst = MMC_CAR(_syst_loopVar);
        _syst_loopVar = MMC_CDR(_syst_loopVar);
        tmp34--;
      }
      if (tmp34 == 0) {
        { /* match expression */
          modelica_metatype tmp8_1;
          tmp8_1 = _syst;
          {
            modelica_metatype _comps = NULL;
            modelica_metatype _ass1 = NULL;
            modelica_metatype _ass2 = NULL;
            volatile mmc_switch_type tmp8;
            int tmp9;
            // _comps has no default value.
            // _ass1 has no default value.
            // _ass2 has no default value.
            tmp8 = 0;
            for (; tmp8 < 2; tmp8++) {
              switch (MMC_SWITCH_CAST(tmp8)) {
              case 0: {
                modelica_metatype tmpMeta10;
                modelica_metatype tmpMeta11;
                modelica_metatype tmpMeta12;
                modelica_metatype tmpMeta13;
                modelica_metatype tmpMeta14;
                modelica_metatype tmpMeta32;
                modelica_metatype tmpMeta33;
                tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 7));
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,3) == 0) goto tmp7_end;
                tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
                tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
                tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
                
                _ass1 = tmpMeta11;
                _ass2 = tmpMeta12;
                _comps = tmpMeta13;
                /* Pattern matching succeeded */
                {
                  modelica_metatype __omcQ_24tmpVar3;
                  modelica_metatype* tmp15;
                  modelica_metatype tmpMeta16;
                  modelica_metatype tmpMeta17;
                  modelica_metatype __omcQ_24tmpVar2;
                  modelica_integer tmp31;
                  modelica_metatype _comp_loopVar = 0;
                  modelica_metatype _comp;
                  _comp_loopVar = _comps;
                  tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar3 = tmpMeta16; /* defaultValue */
                  tmp15 = &__omcQ_24tmpVar3;
                  while(1) {
                    tmp31 = 1;
                    if (!listEmpty(_comp_loopVar)) {
                      _comp = MMC_CAR(_comp_loopVar);
                      _comp_loopVar = MMC_CDR(_comp_loopVar);
                      tmp31--;
                    }
                    if (tmp31 == 0) {
                      { /* match expression */
                        modelica_metatype tmp20_1;
                        tmp20_1 = _comp;
                        {
                          modelica_metatype _eqn = NULL;
                          modelica_metatype _var = NULL;
                          modelica_integer _eindex;
                          modelica_integer _vindx;
                          modelica_boolean _solved;
                          modelica_metatype _tmpComp = NULL;
                          volatile mmc_switch_type tmp20;
                          int tmp21;
                          // _eqn has no default value.
                          // _var has no default value.
                          // _eindex has no default value.
                          // _vindx has no default value.
                          // _solved has no default value.
                          // _tmpComp has no default value.
                          tmp20 = 0;
                          for (; tmp20 < 2; tmp20++) {
                            switch (MMC_SWITCH_CAST(tmp20)) {
                            case 0: {
                              modelica_metatype tmpMeta22;
                              modelica_metatype tmpMeta23;
                              modelica_integer tmp24;
                              modelica_metatype tmpMeta25;
                              modelica_integer tmp26;
                              modelica_metatype tmpMeta27;
                              modelica_metatype tmpMeta28;
                              modelica_metatype tmpMeta29;
                              modelica_metatype tmpMeta30;
                              if (mmc__uniontype__metarecord__typedef__equal(tmp20_1,0,2) == 0) goto tmp19_end;
                              
                              /* Pattern matching succeeded */
                              /* Pattern-matching assignment */
                              tmpMeta22 = _comp;
                              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,0,2) == 0) goto goto_18;
                              tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
                              tmp24 = mmc_unbox_integer(tmpMeta23);
                              tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 3));
                              tmp26 = mmc_unbox_integer(tmpMeta25);
                              _eindex = tmp24  /* pattern as ty=Integer */;
                              _vindx = tmp26  /* pattern as ty=Integer */;

                              _eqn = omc_BackendEquation_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), _eindex);

                              _tmpComp = _comp;

                              if(omc_BackendEquation_isEquation(threadData, _eqn))
                              {
                                _var = omc_BackendVariable_getVarAt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), _vindx);

                                _eqn = omc_ExpressionSolve_solveSimpleEquation(threadData, _eqn, _var, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dae), 3))) ,&_solved);

                                tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(11));
                                memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
                                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[3] = omc_BackendEquation_setAtIndex(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), _eindex, _eqn);
                                _syst = tmpMeta27;

                                if((!_solved))
                                {
                                  tmpMeta28 = mmc_mk_cons(mmc_mk_integer(_eindex), MMC_REFSTRUCTLIT(mmc_nil));
                                  tmpMeta29 = mmc_mk_cons(mmc_mk_integer(_vindx), MMC_REFSTRUCTLIT(mmc_nil));
                                  tmpMeta30 = mmc_mk_box6(4, &BackendDAE_StrongComponent_EQUATIONSYSTEM__desc, tmpMeta28, tmpMeta29, _OMC_LIT150, _OMC_LIT151, mmc_mk_boolean(0 /* false */));
                                  _tmpComp = tmpMeta30;
                                }
                              }
                              tmpMeta17 = _tmpComp;
                              goto tmp19_done;
                            }
                            case 1: {
                              
                              /* Pattern matching succeeded */
                              tmpMeta17 = _comp;
                              goto tmp19_done;
                            }
                            }
                            goto tmp19_end;
                            tmp19_end: ;
                          }
                          goto goto_18;
                          goto_18:;
                          goto goto_6;
                          goto tmp19_done;
                          tmp19_done:;
                        }
                      }__omcQ_24tmpVar2 = tmpMeta17;
                      *tmp15 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                      tmp15 = &MMC_CDR(*tmp15);
                    } else if (tmp31 == 1) {
                      break;
                    } else {
                      goto goto_6;
                    }
                  }
                  *tmp15 = mmc_mk_nil();
                  tmpMeta14 = __omcQ_24tmpVar3;
                }
                _comps = tmpMeta14;

                tmpMeta33 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1, _ass2, _comps);
                tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(11));
                memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[7] = tmpMeta33;
                _syst = tmpMeta32;
                tmpMeta5 = _syst;
                goto tmp7_done;
              }
              case 1: {
                
                /* Pattern matching succeeded */
                tmpMeta5 = _syst;
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
        }__omcQ_24tmpVar4 = tmpMeta5;
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp34 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar5;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_dae), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = tmpMeta2;
  _dae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dae;
}

