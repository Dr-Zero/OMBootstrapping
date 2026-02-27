#include "omc_simulation_settings.h"
#include "NSimVar.h"
#define _OMC_LIT0_data "External Objects"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,16,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NSimCode/NSimVar.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,72,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2_6,1.770631566e9);
#define _OMC_LIT2_6 MMC_REFREALLIT(_OMC_LIT_STRUCT2_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1209)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1209)),MMC_IMMEDIATE(MMC_TAGFIXNUM(93)),_OMC_LIT2_6}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT3_6,1.770631566e9);
#define _OMC_LIT3_6 MMC_REFREALLIT(_OMC_LIT_STRUCT3_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1207)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1207)),MMC_IMMEDIATE(MMC_TAGFIXNUM(142)),_OMC_LIT3_6}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "simCodeScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,16,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "Scalarizes variables during simcode phase."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,42,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(161)),_OMC_LIT4,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT5,_OMC_LIT6,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10_6,1.770631566e9);
#define _OMC_LIT10_6 MMC_REFREALLIT(_OMC_LIT_STRUCT10_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1190)),MMC_IMMEDIATE(MMC_TAGFIXNUM(53)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1191)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),_OMC_LIT10_6}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,17,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT11,_OMC_LIT12,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "NSimVar.SimVars.getStrongComponentVars failed with unknown reason for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,70,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "NSimVar.SimVars.getPartitionVars failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,44,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,1,3) {&NSimVar_Alias_NO__ALIAS__desc,}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "NSimVar.SimVars.splitByType failed because of unhandled Variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,65,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,1,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "NSimVar.SimVars.createSimVarLists failed because of invalid splitType."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,70,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,2,1) {_OMC_LIT21,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT23_6,1.770631566e9);
#define _OMC_LIT23_6 MMC_REFREALLIT(_OMC_LIT_STRUCT23_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(893)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(897)),MMC_IMMEDIATE(MMC_TAGFIXNUM(15)),_OMC_LIT23_6}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "NSimVar.SimVars.create failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,30,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,2,1) {_OMC_LIT24,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,0,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "SimVars "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,8,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "States"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,6,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "Derivatives"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,11,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "Algebraic Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,19,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Discrete Algebraic Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,28,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Integer Algebraic Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,27,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Boolean Algebraic Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,27,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Real Parameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,15,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "Integer Parameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,18,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Boolean Parameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,18,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "Residual Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,18,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "Real Alias"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,10,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "NSimVar.Alias.getOffsetAlias cannot generate offset alias from Expressions: {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,77,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,2,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,1,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT42_6,1.770631566e9);
#define _OMC_LIT42_6 MMC_REFREALLIT(_OMC_LIT_STRUCT42_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(713)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(714)),MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT42_6}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "NSimVar.Alias.getGainAlias cannot generate gain alias from Expressions: {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,73,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT44_6,1.770631566e9);
#define _OMC_LIT44_6 MMC_REFREALLIT(_OMC_LIT_STRUCT44_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(671)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(672)),MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT44_6}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT45,1.0);
#define _OMC_LIT45 MMC_REFREALLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT46,0.0);
#define _OMC_LIT46 MMC_REFREALLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT47,-1.0);
#define _OMC_LIT47 MMC_REFREALLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,1,3) {&SimCodeVar_AliasVariable_NOALIAS__desc,}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "NSimVar.Alias.convert failed because of unknown Alias type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,59,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,1) {_OMC_LIT49,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "(no alias)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,10,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "*"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,1,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "+"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,1,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "(bound alias: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,14,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,1,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,1,3) {&BackendDAE_VarKind_VARIABLE__desc,}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,1,5) {&BackendDAE_VarKind_STATE__DER__desc,}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,1,6) {&BackendDAE_VarKind_DUMMY__DER__desc,}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,1,7) {&BackendDAE_VarKind_DUMMY__STATE__desc,}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,1,9) {&BackendDAE_VarKind_DISCRETE__desc,}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,1,10) {&BackendDAE_VarKind_PARAM__desc,}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,1,11) {&BackendDAE_VarKind_CONST__desc,}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,1,13) {&BackendDAE_VarKind_JAC__VAR__desc,}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,1,14) {&BackendDAE_VarKind_JAC__TMP__VAR__desc,}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,1,15) {&BackendDAE_VarKind_SEED__VAR__desc,}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,1,16) {&BackendDAE_VarKind_OPT__CONSTR__desc,}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,1,17) {&BackendDAE_VarKind_OPT__FCONSTR__desc,}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,1,18) {&BackendDAE_VarKind_OPT__INPUT__WITH__DER__desc,}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,1,19) {&BackendDAE_VarKind_OPT__INPUT__DER__desc,}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,1,20) {&BackendDAE_VarKind_OPT__TGRID__desc,}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,1,22) {&BackendDAE_VarKind_ALG__STATE__desc,}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,1,23) {&BackendDAE_VarKind_ALG__STATE__OLD__desc,}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,1,24) {&BackendDAE_VarKind_DAE__RESIDUAL__VAR__desc,}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,1,25) {&BackendDAE_VarKind_DAE__AUX__VAR__desc,}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,1,26) {&BackendDAE_VarKind_LOOP__ITERATION__desc,}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,1,27) {&BackendDAE_VarKind_LOOP__SOLVED__desc,}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "NSimVar.SimVar.convertVarKind failed because of wrong VariableKind FRONTEND_DUMMY(). This should not exist after frontend."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,122,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,2,1) {_OMC_LIT77,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "NSimVar.SimVar.convertVarKind failed because of unhandled VariableKind "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,71,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "NSimVar.SimVar.parseAttributes failed because the BackendInfo could not be parsed:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,83,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT26,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT46}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT81,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT82,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT84_6,1.770631566e9);
#define _OMC_LIT84_6 MMC_REFREALLIT(_OMC_LIT_STRUCT84_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(288)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(288)),MMC_IMMEDIATE(MMC_TAGFIXNUM(65)),_OMC_LIT84_6}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "NSimVar.SimVar.getIndex failed to get index for cref: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,54,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "NSimVar.SimVar.traverseCreate failed for variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,50,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "NSimVar.SimVar.create failed for variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,42,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data " ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,2,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,2,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,1,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,1,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,1,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data ") "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,2,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,3,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#include "util/modelica.h"

#include "NSimVar_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_SimVars_getVars(threadData_t *threadData, modelica_metatype _var, modelica_metatype _simcode_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimVar_SimVars_getVars,2,0) {(void*) boxptr_NSimVar_SimVars_getVars,0}};
#define boxvar_NSimVar_SimVars_getVars MMC_REFSTRUCTLIT(boxvar_lit_NSimVar_SimVars_getVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_Alias_getOffsetAlias(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_real *out_gain, modelica_real *out_offset);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimVar_Alias_getOffsetAlias(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype *out_gain, modelica_metatype *out_offset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimVar_Alias_getOffsetAlias,2,0) {(void*) boxptr_NSimVar_Alias_getOffsetAlias,0}};
#define boxvar_NSimVar_Alias_getOffsetAlias MMC_REFSTRUCTLIT(boxvar_lit_NSimVar_Alias_getOffsetAlias)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_Alias_getGainAlias(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_real *out_gain);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimVar_Alias_getGainAlias(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype *out_gain);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimVar_Alias_getGainAlias,2,0) {(void*) boxptr_NSimVar_Alias_getGainAlias,0}};
#define boxvar_NSimVar_Alias_getGainAlias MMC_REFSTRUCTLIT(boxvar_lit_NSimVar_Alias_getGainAlias)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_Alias_getAlias(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimVar_Alias_getAlias,2,0) {(void*) boxptr_NSimVar_Alias_getAlias,0}};
#define boxvar_NSimVar_Alias_getAlias MMC_REFSTRUCTLIT(boxvar_lit_NSimVar_Alias_getAlias)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_SimVar_convertVarKind(threadData_t *threadData, modelica_metatype _varKind);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimVar_SimVar_convertVarKind,2,0) {(void*) boxptr_NSimVar_SimVar_convertVarKind,0}};
#define boxvar_NSimVar_SimVar_convertVarKind MMC_REFSTRUCTLIT(boxvar_lit_NSimVar_SimVar_convertVarKind)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_SimVar_parseBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstart, modelica_metatype _var, modelica_boolean *out_isValueChangeable, modelica_integer *out_causality);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimVar_SimVar_parseBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstart, modelica_metatype _var, modelica_metatype *out_isValueChangeable, modelica_metatype *out_causality);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimVar_SimVar_parseBinding,2,0) {(void*) boxptr_NSimVar_SimVar_parseBinding,0}};
#define boxvar_NSimVar_SimVar_parseBinding MMC_REFSTRUCTLIT(boxvar_lit_NSimVar_SimVar_parseBinding)
PROTECTED_FUNCTION_STATIC modelica_string omc_NSimVar_SimVar_parseComment(threadData_t *threadData, modelica_metatype _absynComment);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimVar_SimVar_parseComment,2,0) {(void*) boxptr_NSimVar_SimVar_parseComment,0}};
#define boxvar_NSimVar_SimVar_parseComment MMC_REFSTRUCTLIT(boxvar_lit_NSimVar_SimVar_parseComment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_SimVar_parseAttributes(threadData_t *threadData, modelica_metatype _backendInfo, modelica_string *out_unit, modelica_string *out_displayUnit, modelica_metatype *out_min, modelica_metatype *out_max, modelica_metatype *out_start, modelica_metatype *out_nominal, modelica_boolean *out_isFixed, modelica_boolean *out_isDiscrete, modelica_boolean *out_isProtected);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimVar_SimVar_parseAttributes(threadData_t *threadData, modelica_metatype _backendInfo, modelica_metatype *out_unit, modelica_metatype *out_displayUnit, modelica_metatype *out_min, modelica_metatype *out_max, modelica_metatype *out_start, modelica_metatype *out_nominal, modelica_metatype *out_isFixed, modelica_metatype *out_isDiscrete, modelica_metatype *out_isProtected);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimVar_SimVar_parseAttributes,2,0) {(void*) boxptr_NSimVar_SimVar_parseAttributes,0}};
#define boxvar_NSimVar_SimVar_parseAttributes MMC_REFSTRUCTLIT(boxvar_lit_NSimVar_SimVar_parseAttributes)

DLLDirection
modelica_metatype omc_NSimVar_ExtObjInfo_convert(threadData_t *threadData, modelica_metatype _info)
{
  modelica_metatype _oldInfo = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldInfo has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box3(3, &SimCode_ExtObjInfo_EXTOBJINFO__desc, omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2)))), tmpMeta1);
  _oldInfo = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _oldInfo;
}

static modelica_metatype closure0_NSimVar_SimVar_traverseCreate(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype acc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype indices_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype varType = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NSimVar_SimVar_traverseCreate(thData, $in_var, acc, indices_ptr, varType);
}
DLLDirection
modelica_metatype omc_NSimVar_ExtObjInfo_create(threadData_t *threadData, modelica_metatype _external_objects, modelica_metatype __omcQ_24in_5Fvars, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype *out_vars, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _info = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _indices_ptr = NULL;
  modelica_metatype _acc = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _varType;
  modelica_metatype _var_lst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  _vars = __omcQ_24in_5Fvars;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  _indices_ptr = omc_Pointer_create(threadData, _simCodeIndices);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc = omc_Pointer_create(threadData, tmpMeta1);
  _varType = 5;
  // _var_lst has no default value.
  tmpMeta2 = mmc_mk_box3(0, _acc, _indices_ptr, mmc_mk_integer((modelica_integer)_varType));
  omc_NBVariable_VariablePointers_map(threadData, _external_objects, (modelica_fnptr) mmc_mk_box2(0,closure0_NSimVar_SimVar_traverseCreate,tmpMeta2));

  _simCodeIndices = omc_Pointer_access(threadData, _indices_ptr);

  _var_lst = listReverse(omc_Pointer_access(threadData, _acc));

  tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(37));
  memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_vars), 37*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[22] = _var_lst;
  _vars = tmpMeta3;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box3(3, &NSimVar_ExtObjInfo_EXT__OBJ__INFO__desc, _var_lst, tmpMeta4);
  _info = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  if (out_vars) { *out_vars = _vars; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _info;
}

DLLDirection
modelica_string omc_NSimVar_ExtObjInfo_toString(threadData_t *threadData, modelica_metatype _info)
{
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))), _OMC_LIT0, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NSimVar_VarInfo_convert(threadData_t *threadData, modelica_metatype _varInfo)
{
  modelica_metatype _oldVarInfo = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldVarInfo has no default value.
  tmpMeta1 = mmc_mk_box(36, 3, &SimCode_VarInfo_VARINFO__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 10))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 11))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 12))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 13))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 14))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 15))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 16))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 17))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 19))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 20))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 21))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 22))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 23))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 24))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 25))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 26))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 27))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 28))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 29))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 30))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 31))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 32))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 33))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 34))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 35))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 36))));
  _oldVarInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldVarInfo;
}

DLLDirection
modelica_metatype omc_NSimVar_VarInfo_create(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _eventInfo, modelica_metatype _simCodeIndices)
{
  modelica_metatype _varInfo = NULL;
  modelica_integer tmp1;
  modelica_integer tmp3;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varInfo has no default value.
  {
    modelica_integer __omcQ_24tmpVar5;
    modelica_integer __omcQ_24tmpVar4;
    modelica_integer tmp2;
    modelica_metatype _cond_loopVar = 0;
    modelica_metatype _cond;
    _cond_loopVar = omc_UnorderedMap_keyList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eventInfo), 4))));
    __omcQ_24tmpVar5 = ((modelica_integer) 0); /* defaultValue */
    while(1) {
      tmp2 = 1;
      if (!listEmpty(_cond_loopVar)) {
        _cond = MMC_CAR(_cond_loopVar);
        _cond_loopVar = MMC_CDR(_cond_loopVar);
        tmp2--;
      }
      if (tmp2 == 0) {
        __omcQ_24tmpVar4 = omc_NBEvents_Condition_size(threadData, _cond);
        __omcQ_24tmpVar5 = __omcQ_24tmpVar5 + __omcQ_24tmpVar4;
      } else if (tmp2 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmp1 = __omcQ_24tmpVar5;
  }
  {
    modelica_integer __omcQ_24tmpVar7;
    modelica_integer __omcQ_24tmpVar6;
    modelica_integer tmp4;
    modelica_metatype _cond_loopVar = 0;
    modelica_metatype _cond;
    _cond_loopVar = omc_UnorderedMap_keyList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eventInfo), 4))));
    __omcQ_24tmpVar7 = ((modelica_integer) 0); /* defaultValue */
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_cond_loopVar)) {
        _cond = MMC_CAR(_cond_loopVar);
        _cond_loopVar = MMC_CDR(_cond_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar6 = omc_NBEvents_Condition_size(threadData, _cond);
        __omcQ_24tmpVar7 = __omcQ_24tmpVar7 + __omcQ_24tmpVar6;
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmp3 = __omcQ_24tmpVar7;
  }
  tmpMeta5 = mmc_mk_box(36, 3, &NSimVar_VarInfo_VAR__INFO__desc, mmc_mk_integer(tmp1), mmc_mk_integer(omc_UnorderedSet_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eventInfo), 2))))), mmc_mk_integer(tmp3), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eventInfo), 5))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 2))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 4))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 5))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 6))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 7))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 12))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 13))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 14))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 17))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 18))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 19))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 11))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 10))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 22))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 8))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 20))))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 15))))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 19))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 20))), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 5) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 20))))), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)));
  _varInfo = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _varInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_SimVars_getVars(threadData_t *threadData, modelica_metatype _var, modelica_metatype _simcode_map)
{
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _vars = tmpMeta1;
  if(omc_Flags_getConfigBool(threadData, _OMC_LIT9))
  {
    {
      modelica_metatype __omcQ_24tmpVar9;
      modelica_metatype* tmp3;
      modelica_metatype tmpMeta4;
      modelica_metatype __omcQ_24tmpVar8;
      modelica_integer tmp5;
      modelica_metatype _v_loopVar = 0;
      modelica_metatype tmpMeta6;
      modelica_metatype _v;
      tmpMeta6 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
      _v_loopVar = omc_NBVariable_VariablePointers_scalarizeList(threadData, tmpMeta6, NULL);
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar9 = tmpMeta4; /* defaultValue */
      tmp3 = &__omcQ_24tmpVar9;
      while(1) {
        tmp5 = 1;
        if (!listEmpty(_v_loopVar)) {
          _v = MMC_CAR(_v_loopVar);
          _v_loopVar = MMC_CDR(_v_loopVar);
          tmp5--;
        }
        if (tmp5 == 0) {
          __omcQ_24tmpVar8 = omc_UnorderedMap_getSafe(threadData, omc_NBVariable_getVarName(threadData, _v), _simcode_map, _OMC_LIT3);
          *tmp3 = mmc_mk_cons(__omcQ_24tmpVar8,0);
          tmp3 = &MMC_CDR(*tmp3);
        } else if (tmp5 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp3 = mmc_mk_nil();
      tmpMeta2 = __omcQ_24tmpVar9;
    }
    _vars = tmpMeta2;
  }
  else
  {
    tmpMeta7 = mmc_mk_cons(omc_UnorderedMap_getSafe(threadData, omc_NBVariable_getVarName(threadData, _var), _simcode_map, _OMC_LIT2), MMC_REFSTRUCTLIT(mmc_nil));
    _vars = tmpMeta7;
  }
  _return: OMC_LABEL_UNUSED
  return _vars;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVars_getStrongComponentVars(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _simcode_map)
{
  modelica_metatype _part_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _part_vars = tmpMeta1;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _comp;
    {
      int tmp5;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp5_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta2 = omc_NSimVar_SimVars_getVars(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), _simcode_map);
          goto tmp4_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp9;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar11;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar10 = omc_NSimVar_SimVars_getVars(threadData, omc_NBSlice_getT(threadData, _v), _simcode_map);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_3;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar11;
          }
          tmpMeta2 = omc_List_flatten(threadData, tmpMeta6);
          goto tmp4_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta2 = omc_NSimVar_SimVars_getVars(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), _simcode_map);
          goto tmp4_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta2 = omc_NSimVar_SimVars_getVars(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), _simcode_map);
          goto tmp4_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta2 = omc_NSimVar_SimVars_getVars(threadData, omc_NBVariable_getVarPointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), _OMC_LIT10), _simcode_map);
          goto tmp4_done;
        }
        case 8: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp13;
            modelica_metatype _c_loopVar = 0;
            modelica_metatype _c;
            _c_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar13;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_c_loopVar)) {
                _c = MMC_CAR(_c_loopVar);
                _c_loopVar = MMC_CDR(_c_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar12 = omc_NSimVar_SimVars_getStrongComponentVars(threadData, _c, _simcode_map);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_3;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar13;
          }
          tmpMeta2 = omc_List_flatten(threadData, tmpMeta10);
          goto tmp4_done;
        }
        case 9: {
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp17;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), 2)));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar15;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar14 = omc_NSimVar_SimVars_getVars(threadData, omc_NBSlice_getT(threadData, _v), _simcode_map);
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_3;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar15;
          }
          tmpMeta2 = omc_List_flatten(threadData, tmpMeta14);
          goto tmp4_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp4_done;
        }
        default:
        tmp4_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          tmpMeta19 = stringAppend(_OMC_LIT16,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta18 = mmc_mk_cons(tmpMeta19, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT15, tmpMeta18);
          goto goto_3;
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
  _part_vars = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _part_vars;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVars_getPartitionVars(threadData_t *threadData, modelica_metatype _partition, modelica_metatype _simcode_map)
{
  modelica_metatype _part_vars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _part_vars has no default value.
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 9)));
    {
      modelica_metatype _comps = NULL;
      modelica_metatype _result = NULL;
      modelica_metatype tmpMeta3;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _comps has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _result = tmpMeta3;
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_integer tmp10;
          modelica_integer tmp11;
          if (optionNone(tmp5_1)) goto tmp4_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
          _comps = tmpMeta7;
          /* Pattern matching succeeded */
          tmp9 = ((modelica_integer) 1); tmp10 = 1; tmp11 = arrayLength(_comps);
          if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp9, tmp11); _i += tmp10)
            {
              tmpMeta8 = mmc_mk_cons(omc_NSimVar_SimVars_getStrongComponentVars(threadData, arrayGet(_comps,_i) /* DAE.ASUB */, _simcode_map), _result);
              _result = tmpMeta8;
            }
          }
          tmpMeta1 = omc_List_flatten(threadData, _result);
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_OMC_LIT17,omc_NBPartition_Partition_toString(threadData, _partition, ((modelica_integer) 0)));
          tmpMeta12 = mmc_mk_cons(tmpMeta13, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT15, tmpMeta12);
          goto goto_2;
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
  _part_vars = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _part_vars;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVars_splitByType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _real_lst, modelica_metatype _int_lst, modelica_metatype _bool_lst, modelica_metatype _string_lst, modelica_metatype _enum_lst, modelica_metatype _indices_ptr, modelica_integer _varType)
{
  modelica_metatype _var = NULL;
  modelica_metatype _simCodeIndices = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  _simCodeIndices = omc_Pointer_access(threadData, _indices_ptr);
  { /* match expression */
    modelica_metatype tmp3_1;modelica_integer tmp3_2;
    tmp3_1 = omc_NFType_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))));
    tmp3_2 = (modelica_integer)_varType;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 17; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,0) == 0) goto tmp2_end;
          if (1 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 3)))), _OMC_LIT18), omc_Pointer_access(threadData, _real_lst));
          omc_Pointer_update(threadData, _real_lst, tmpMeta5);

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 3)))));
          _simCodeIndices = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta7;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,0) == 0) goto tmp2_end;
          if (1 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 4)))), _OMC_LIT18), omc_Pointer_access(threadData, _int_lst));
          omc_Pointer_update(threadData, _int_lst, tmpMeta8);

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[4] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 4)))));
          _simCodeIndices = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta10;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,0) == 0) goto tmp2_end;
          if (1 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 5)))), _OMC_LIT18), omc_Pointer_access(threadData, _bool_lst));
          omc_Pointer_update(threadData, _bool_lst, tmpMeta11);

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[5] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 5)))));
          _simCodeIndices = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta13;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,0) == 0) goto tmp2_end;
          if (1 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 6)))), _OMC_LIT18), omc_Pointer_access(threadData, _string_lst));
          omc_Pointer_update(threadData, _string_lst, tmpMeta14);

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[6] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 6)))));
          _simCodeIndices = tmpMeta15;

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta16;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,2) == 0) goto tmp2_end;
          if (1 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 7)))), _OMC_LIT18), omc_Pointer_access(threadData, _enum_lst));
          omc_Pointer_update(threadData, _enum_lst, tmpMeta17);

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[7] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 7)))));
          _simCodeIndices = tmpMeta18;

          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta19;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,0) == 0) goto tmp2_end;
          if (2 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta20 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 8)))), _OMC_LIT18), omc_Pointer_access(threadData, _real_lst));
          omc_Pointer_update(threadData, _real_lst, tmpMeta20);

          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[8] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 8)))));
          _simCodeIndices = tmpMeta21;

          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta22;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,0) == 0) goto tmp2_end;
          if (2 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta23 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 9)))), _OMC_LIT18), omc_Pointer_access(threadData, _int_lst));
          omc_Pointer_update(threadData, _int_lst, tmpMeta23);

          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[9] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 9)))));
          _simCodeIndices = tmpMeta24;

          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta25;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,0) == 0) goto tmp2_end;
          if (2 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta26 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 10)))), _OMC_LIT18), omc_Pointer_access(threadData, _bool_lst));
          omc_Pointer_update(threadData, _bool_lst, tmpMeta26);

          tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[10] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 10)))));
          _simCodeIndices = tmpMeta27;

          tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta28;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,0) == 0) goto tmp2_end;
          if (2 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta29 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 11)))), _OMC_LIT18), omc_Pointer_access(threadData, _string_lst));
          omc_Pointer_update(threadData, _string_lst, tmpMeta29);

          tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[11] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 11)))));
          _simCodeIndices = tmpMeta30;

          tmpMeta31 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta31), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta31))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta31;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,2) == 0) goto tmp2_end;
          if (2 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta32 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 12)))), _OMC_LIT18), omc_Pointer_access(threadData, _enum_lst));
          omc_Pointer_update(threadData, _enum_lst, tmpMeta32);

          tmpMeta33 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta33), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta33))[12] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 12)))));
          _simCodeIndices = tmpMeta33;

          tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta34;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 10: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,0) == 0) goto tmp2_end;
          if (3 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta35 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 13)))), omc_NSimVar_Alias_fromBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))))), omc_Pointer_access(threadData, _real_lst));
          omc_Pointer_update(threadData, _real_lst, tmpMeta35);

          tmpMeta36 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta36), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta36))[13] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 13)))));
          _simCodeIndices = tmpMeta36;

          tmpMeta37 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta37), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta37))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta37;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 11: {
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,0) == 0) goto tmp2_end;
          if (3 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta38 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 14)))), omc_NSimVar_Alias_fromBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))))), omc_Pointer_access(threadData, _int_lst));
          omc_Pointer_update(threadData, _int_lst, tmpMeta38);

          tmpMeta39 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta39), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta39))[14] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 14)))));
          _simCodeIndices = tmpMeta39;

          tmpMeta40 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta40), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta40))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta40;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,0) == 0) goto tmp2_end;
          if (3 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta41 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 15)))), omc_NSimVar_Alias_fromBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))))), omc_Pointer_access(threadData, _bool_lst));
          omc_Pointer_update(threadData, _bool_lst, tmpMeta41);

          tmpMeta42 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta42), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta42))[15] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 15)))));
          _simCodeIndices = tmpMeta42;

          tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta43;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 13: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,0) == 0) goto tmp2_end;
          if (3 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta44 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 16)))), omc_NSimVar_Alias_fromBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))))), omc_Pointer_access(threadData, _string_lst));
          omc_Pointer_update(threadData, _string_lst, tmpMeta44);

          tmpMeta45 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta45), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta45))[16] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 16)))));
          _simCodeIndices = tmpMeta45;

          tmpMeta46 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta46), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta46))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta46;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 14: {
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,2) == 0) goto tmp2_end;
          if (3 != tmp3_2) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta47 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 17)))), omc_NSimVar_Alias_fromBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))))), omc_Pointer_access(threadData, _enum_lst));
          omc_Pointer_update(threadData, _enum_lst, tmpMeta47);

          tmpMeta48 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta48), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta48))[17] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 17)))));
          _simCodeIndices = tmpMeta48;

          tmpMeta49 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta49), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta49))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta49;

          omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
          goto tmp2_done;
        }
        case 15: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,0) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 16: {
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          
          /* Pattern matching succeeded */
          tmpMeta51 = stringAppend(_OMC_LIT19,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))));
          tmpMeta52 = stringAppend(tmpMeta51,_OMC_LIT20);
          tmpMeta50 = mmc_mk_cons(tmpMeta52, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT15, tmpMeta50);
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
  return _var;
}
modelica_metatype boxptr_NSimVar_SimVars_splitByType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _real_lst, modelica_metatype _int_lst, modelica_metatype _bool_lst, modelica_metatype _string_lst, modelica_metatype _enum_lst, modelica_metatype _indices_ptr, modelica_metatype _varType)
{
  modelica_integer tmp1;
  modelica_metatype _var = NULL;
  tmp1 = mmc_unbox_integer(_varType);
  _var = omc_NSimVar_SimVars_splitByType(threadData, __omcQ_24in_5Fvar, _real_lst, _int_lst, _bool_lst, _string_lst, _enum_lst, _indices_ptr, tmp1);
  /* skip box _var; NFVariable */
  return _var;
}

static modelica_metatype closure1_NSimVar_SimVar_traverseCreate(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype acc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype indices_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype varType = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NSimVar_SimVar_traverseCreate(thData, $in_var, acc, indices_ptr, varType);
}static modelica_metatype closure2_NSimVar_SimVars_splitByType(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype real_lst = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype int_lst = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype bool_lst = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype string_lst = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype enum_lst = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype indices_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  modelica_metatype varType = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),7));
  return boxptr_NSimVar_SimVars_splitByType(thData, $in_var, real_lst, int_lst, bool_lst, string_lst, enum_lst, indices_ptr, varType);
}
DLLDirection
modelica_metatype omc_NSimVar_SimVars_createSimVarLists(threadData_t *threadData, modelica_metatype _vars, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _splitType, modelica_integer _varType, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _simVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _sim_vars = NULL;
  modelica_metatype _acc = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _real_lst = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _int_lst = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _bool_lst = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _string_lst = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype _enum_lst = NULL;
  modelica_metatype tmpMeta7;
  modelica_metatype _indices_ptr = NULL;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _simVars = tmpMeta1;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  _sim_vars = (omc_Flags_getConfigBool(threadData, _OMC_LIT9)?omc_NBVariable_VariablePointers_scalarize(threadData, _vars):_vars);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc = omc_Pointer_create(threadData, tmpMeta2);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _real_lst = omc_Pointer_create(threadData, tmpMeta3);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _int_lst = omc_Pointer_create(threadData, tmpMeta4);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _bool_lst = omc_Pointer_create(threadData, tmpMeta5);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _string_lst = omc_Pointer_create(threadData, tmpMeta6);
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _enum_lst = omc_Pointer_create(threadData, tmpMeta7);
  _indices_ptr = omc_Pointer_create(threadData, _simCodeIndices);
  if(((modelica_integer)_splitType == 1))
  {
    tmpMeta8 = mmc_mk_box3(0, _acc, _indices_ptr, mmc_mk_integer((modelica_integer)_varType));
    omc_NBVariable_VariablePointers_map(threadData, _sim_vars, (modelica_fnptr) mmc_mk_box2(0,closure1_NSimVar_SimVar_traverseCreate,tmpMeta8));

    tmpMeta9 = mmc_mk_cons(listReverse(omc_Pointer_access(threadData, _acc)), MMC_REFSTRUCTLIT(mmc_nil));
    _simVars = tmpMeta9;

    _simCodeIndices = omc_Pointer_access(threadData, _indices_ptr);
  }
  else
  {
    if(((modelica_integer)_splitType == 2))
    {
      tmpMeta10 = mmc_mk_box7(0, _real_lst, _int_lst, _bool_lst, _string_lst, _enum_lst, _indices_ptr, mmc_mk_integer((modelica_integer)_varType));
      omc_NBVariable_VariablePointers_map(threadData, _sim_vars, (modelica_fnptr) mmc_mk_box2(0,closure2_NSimVar_SimVars_splitByType,tmpMeta10));

      tmpMeta11 = mmc_mk_cons(listReverse(omc_Pointer_access(threadData, _real_lst)), mmc_mk_cons(listReverse(omc_Pointer_access(threadData, _int_lst)), mmc_mk_cons(listReverse(omc_Pointer_access(threadData, _bool_lst)), mmc_mk_cons(listReverse(omc_Pointer_access(threadData, _string_lst)), mmc_mk_cons(listReverse(omc_Pointer_access(threadData, _enum_lst)), MMC_REFSTRUCTLIT(mmc_nil))))));
      _simVars = tmpMeta11;

      _simCodeIndices = omc_Pointer_access(threadData, _indices_ptr);
    }
    else
    {
      omc_Error_addMessage(threadData, _OMC_LIT15, _OMC_LIT22);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _simVars;
}
modelica_metatype boxptr_NSimVar_SimVars_createSimVarLists(threadData_t *threadData, modelica_metatype _vars, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _splitType, modelica_metatype _varType, modelica_metatype *out_simCodeIndices)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _simVars = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_splitType);
  tmp2 = mmc_unbox_integer(_varType);
  _simVars = omc_NSimVar_SimVars_createSimVarLists(threadData, _vars, __omcQ_24in_5FsimCodeIndices, tmp1, tmp2, out_simCodeIndices);
  /* skip box _simVars; list<list<NSimVar.SimVar>> */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  return _simVars;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVars_convert(threadData_t *threadData, modelica_metatype _simVars)
{
  modelica_metatype _oldSimVars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldSimVars has no default value.
  tmpMeta1 = mmc_mk_box(31, 3, &SimCodeVar_SimVars_SIMVARS__desc, omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 2)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 3)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 4)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 5)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 6)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 7)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 10)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 11)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 12)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 13)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 14)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 17)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 18)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 19)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 8)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 20)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 15)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 22)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 23)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 24)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 25)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 26)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 29)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 30)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 31)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 32)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 33)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 34)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 35)))), omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 36)))));
  _oldSimVars = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldSimVars;
}

DLLDirection
modelica_integer omc_NSimVar_SimVars_size(threadData_t *threadData, modelica_metatype _simVars)
{
  modelica_integer _size;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _size = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 2)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 3)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 4)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 5)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 6)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 7)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 10)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 11)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 12)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 13)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 14)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 17)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 18)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 19)))) + (((modelica_integer) 2)) * (listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 8))))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 20)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 15)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 22)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 23)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 24)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 25)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 26)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 29)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 30)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 31)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 32)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 33)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 34)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 35)))) + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 36))));
  _return: OMC_LABEL_UNUSED
  return _size;
}
modelica_metatype boxptr_NSimVar_SimVars_size(threadData_t *threadData, modelica_metatype _simVars)
{
  modelica_integer _size;
  modelica_metatype out_size;
  _size = omc_NSimVar_SimVars_size(threadData, _simVars);
  out_size = mmc_mk_icon(_size);
  return out_size;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVars_addSeedAndJacobianVars(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvars, modelica_metatype _hash_tpl)
{
  modelica_metatype _vars = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _seed_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _jacobian_vars = NULL;
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
  _vars = __omcQ_24in_5Fvars;
  // _cref has no default value.
  // _var has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _seed_vars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _jacobian_vars = tmpMeta2;
  {
    modelica_metatype _tpl;
    for (tmpMeta3 = _hash_tpl; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _tpl = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _tpl;
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      _cref = tmpMeta5;
      _var = tmpMeta6;

      if(omc_NBVariable_checkCref(threadData, _cref, boxvar_NBVariable_isSeed, _OMC_LIT23))
      {
        tmpMeta7 = mmc_mk_cons(_var, _seed_vars);
        _seed_vars = tmpMeta7;
      }
      else
      {
        tmpMeta8 = mmc_mk_cons(_var, _jacobian_vars);
        _jacobian_vars = tmpMeta8;
      }
    }
  }

  tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(37));
  memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_vars), 37*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[30] = listAppend(_seed_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 30))));
  _vars = tmpMeta10;

  tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(37));
  memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_vars), 37*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[29] = listAppend(_jacobian_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 29))));
  _vars = tmpMeta11;
  _return: OMC_LABEL_UNUSED
  return _vars;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVars_create(threadData_t *threadData, modelica_metatype _varData, modelica_metatype _residual_vars, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _simVars = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _stateVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _derivativeVars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _algVars = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _nonTrivialAlias = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _discreteAlgVars = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _intAlgVars = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype _boolAlgVars = NULL;
  modelica_metatype tmpMeta7;
  modelica_metatype _stringAlgVars = NULL;
  modelica_metatype tmpMeta8;
  modelica_metatype _enumAlgVars = NULL;
  modelica_metatype tmpMeta9;
  modelica_metatype _discreteAlgVars2 = NULL;
  modelica_metatype tmpMeta10;
  modelica_metatype _intAlgVars2 = NULL;
  modelica_metatype tmpMeta11;
  modelica_metatype _boolAlgVars2 = NULL;
  modelica_metatype tmpMeta12;
  modelica_metatype _stringAlgVars2 = NULL;
  modelica_metatype tmpMeta13;
  modelica_metatype _enumAlgVars2 = NULL;
  modelica_metatype tmpMeta14;
  modelica_metatype _discreteAlgVars3 = NULL;
  modelica_metatype tmpMeta15;
  modelica_metatype _intAlgVars3 = NULL;
  modelica_metatype tmpMeta16;
  modelica_metatype _boolAlgVars3 = NULL;
  modelica_metatype tmpMeta17;
  modelica_metatype _stringAlgVars3 = NULL;
  modelica_metatype tmpMeta18;
  modelica_metatype _enumAlgVars3 = NULL;
  modelica_metatype tmpMeta19;
  modelica_metatype _inputVars = NULL;
  modelica_metatype tmpMeta20;
  modelica_metatype _outputVars = NULL;
  modelica_metatype tmpMeta21;
  modelica_metatype _aliasVars = NULL;
  modelica_metatype tmpMeta22;
  modelica_metatype _intAliasVars = NULL;
  modelica_metatype tmpMeta23;
  modelica_metatype _boolAliasVars = NULL;
  modelica_metatype tmpMeta24;
  modelica_metatype _stringAliasVars = NULL;
  modelica_metatype tmpMeta25;
  modelica_metatype _enumAliasVars = NULL;
  modelica_metatype tmpMeta26;
  modelica_metatype _paramVars = NULL;
  modelica_metatype tmpMeta27;
  modelica_metatype _intParamVars = NULL;
  modelica_metatype tmpMeta28;
  modelica_metatype _boolParamVars = NULL;
  modelica_metatype tmpMeta29;
  modelica_metatype _stringParamVars = NULL;
  modelica_metatype tmpMeta30;
  modelica_metatype _enumParamVars = NULL;
  modelica_metatype tmpMeta31;
  modelica_metatype _paramVarsR = NULL;
  modelica_metatype tmpMeta32;
  modelica_metatype _intParamVarsR = NULL;
  modelica_metatype tmpMeta33;
  modelica_metatype _boolParamVarsR = NULL;
  modelica_metatype tmpMeta34;
  modelica_metatype _stringParamVarsR = NULL;
  modelica_metatype tmpMeta35;
  modelica_metatype _enumParamVarsR = NULL;
  modelica_metatype tmpMeta36;
  modelica_metatype _constVars = NULL;
  modelica_metatype tmpMeta37;
  modelica_metatype _intConstVars = NULL;
  modelica_metatype tmpMeta38;
  modelica_metatype _boolConstVars = NULL;
  modelica_metatype tmpMeta39;
  modelica_metatype _stringConstVars = NULL;
  modelica_metatype tmpMeta40;
  modelica_metatype _enumConstVars = NULL;
  modelica_metatype tmpMeta41;
  modelica_metatype _extObjVars = NULL;
  modelica_metatype tmpMeta42;
  modelica_metatype _residualVars = NULL;
  modelica_metatype tmpMeta43;
  modelica_metatype _jacobianVars = NULL;
  modelica_metatype tmpMeta44;
  modelica_metatype _seedVars = NULL;
  modelica_metatype tmpMeta45;
  modelica_metatype _realOptimizeConstraintsVars = NULL;
  modelica_metatype tmpMeta46;
  modelica_metatype _realOptimizeFinalConstraintsVars = NULL;
  modelica_metatype tmpMeta47;
  modelica_metatype _sensitivityVars = NULL;
  modelica_metatype tmpMeta48;
  modelica_metatype _dataReconSetcVars = NULL;
  modelica_metatype tmpMeta49;
  modelica_metatype _dataReconinputVars = NULL;
  modelica_metatype tmpMeta50;
  modelica_metatype _dataReconSetBVars = NULL;
  modelica_metatype tmpMeta51;
  modelica_metatype tmpMeta163;
  modelica_metatype tmpMeta164;
  modelica_metatype tmpMeta165;
  modelica_metatype tmpMeta166;
  modelica_metatype tmpMeta167;
  modelica_metatype tmpMeta168;
  modelica_metatype tmpMeta169;
  modelica_metatype tmpMeta170;
  modelica_metatype tmpMeta171;
  modelica_metatype tmpMeta172;
  modelica_metatype tmpMeta173;
  modelica_metatype tmpMeta174;
  modelica_metatype tmpMeta175;
  modelica_metatype tmpMeta176;
  modelica_metatype tmpMeta180;
  modelica_metatype tmpMeta181;
  modelica_metatype tmpMeta185;
  modelica_metatype tmpMeta186;
  modelica_metatype tmpMeta190;
  modelica_metatype tmpMeta191;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simVars has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _stateVars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _derivativeVars = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _algVars = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _nonTrivialAlias = tmpMeta4;
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _discreteAlgVars = tmpMeta5;
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _intAlgVars = tmpMeta6;
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _boolAlgVars = tmpMeta7;
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringAlgVars = tmpMeta8;
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  _enumAlgVars = tmpMeta9;
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _discreteAlgVars2 = tmpMeta10;
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  _intAlgVars2 = tmpMeta11;
  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  _boolAlgVars2 = tmpMeta12;
  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringAlgVars2 = tmpMeta13;
  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  _enumAlgVars2 = tmpMeta14;
  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
  _discreteAlgVars3 = tmpMeta15;
  tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
  _intAlgVars3 = tmpMeta16;
  tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
  _boolAlgVars3 = tmpMeta17;
  tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringAlgVars3 = tmpMeta18;
  tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
  _enumAlgVars3 = tmpMeta19;
  tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
  _inputVars = tmpMeta20;
  tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
  _outputVars = tmpMeta21;
  tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
  _aliasVars = tmpMeta22;
  tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
  _intAliasVars = tmpMeta23;
  tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
  _boolAliasVars = tmpMeta24;
  tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringAliasVars = tmpMeta25;
  tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
  _enumAliasVars = tmpMeta26;
  tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
  _paramVars = tmpMeta27;
  tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
  _intParamVars = tmpMeta28;
  tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
  _boolParamVars = tmpMeta29;
  tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringParamVars = tmpMeta30;
  tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
  _enumParamVars = tmpMeta31;
  tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
  _paramVarsR = tmpMeta32;
  tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
  _intParamVarsR = tmpMeta33;
  tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
  _boolParamVarsR = tmpMeta34;
  tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringParamVarsR = tmpMeta35;
  tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
  _enumParamVarsR = tmpMeta36;
  tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
  _constVars = tmpMeta37;
  tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
  _intConstVars = tmpMeta38;
  tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
  _boolConstVars = tmpMeta39;
  tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringConstVars = tmpMeta40;
  tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
  _enumConstVars = tmpMeta41;
  tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
  _extObjVars = tmpMeta42;
  tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
  _residualVars = tmpMeta43;
  tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
  _jacobianVars = tmpMeta44;
  tmpMeta45 = MMC_REFSTRUCTLIT(mmc_nil);
  _seedVars = tmpMeta45;
  tmpMeta46 = MMC_REFSTRUCTLIT(mmc_nil);
  _realOptimizeConstraintsVars = tmpMeta46;
  tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
  _realOptimizeFinalConstraintsVars = tmpMeta47;
  tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
  _sensitivityVars = tmpMeta48;
  tmpMeta49 = MMC_REFSTRUCTLIT(mmc_nil);
  _dataReconSetcVars = tmpMeta49;
  tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
  _dataReconinputVars = tmpMeta50;
  tmpMeta51 = MMC_REFSTRUCTLIT(mmc_nil);
  _dataReconSetBVars = tmpMeta51;
  { /* match expression */
    modelica_metatype tmp54_1;
    tmp54_1 = _varData;
    {
      int tmp54;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp54_1))) {
        case 3: {
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
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
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
          modelica_metatype tmpMeta149;
          modelica_metatype tmpMeta150;
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
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta56 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 16))), _simCodeIndices, 1, 1, &tmpMeta55);
          if (listEmpty(tmpMeta56)) goto goto_52;
          tmpMeta57 = MMC_CAR(tmpMeta56);
          tmpMeta58 = MMC_CDR(tmpMeta56);
          if (!listEmpty(tmpMeta58)) goto goto_52;
          _stateVars = tmpMeta57;
          _simCodeIndices = tmpMeta55;

          /* Pattern-matching tuple assignment */
          tmpMeta60 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 9))), _simCodeIndices, 1, 1, &tmpMeta59);
          if (listEmpty(tmpMeta60)) goto goto_52;
          tmpMeta61 = MMC_CAR(tmpMeta60);
          tmpMeta62 = MMC_CDR(tmpMeta60);
          if (!listEmpty(tmpMeta62)) goto goto_52;
          _derivativeVars = tmpMeta61;
          _simCodeIndices = tmpMeta59;

          /* Pattern-matching tuple assignment */
          tmpMeta64 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 10))), _simCodeIndices, 1, 1, &tmpMeta63);
          if (listEmpty(tmpMeta64)) goto goto_52;
          tmpMeta65 = MMC_CAR(tmpMeta64);
          tmpMeta66 = MMC_CDR(tmpMeta64);
          if (!listEmpty(tmpMeta66)) goto goto_52;
          _algVars = tmpMeta65;
          _simCodeIndices = tmpMeta63;

          /* Pattern-matching tuple assignment */
          tmpMeta68 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 8))), _simCodeIndices, 1, 1, &tmpMeta67);
          if (listEmpty(tmpMeta68)) goto goto_52;
          tmpMeta69 = MMC_CAR(tmpMeta68);
          tmpMeta70 = MMC_CDR(tmpMeta68);
          if (!listEmpty(tmpMeta70)) goto goto_52;
          _nonTrivialAlias = tmpMeta69;
          _simCodeIndices = tmpMeta67;

          /* Pattern-matching tuple assignment */
          tmpMeta72 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 11))), _simCodeIndices, 2, 1, &tmpMeta71);
          if (listEmpty(tmpMeta72)) goto goto_52;
          tmpMeta73 = MMC_CAR(tmpMeta72);
          tmpMeta74 = MMC_CDR(tmpMeta72);
          if (listEmpty(tmpMeta74)) goto goto_52;
          tmpMeta75 = MMC_CAR(tmpMeta74);
          tmpMeta76 = MMC_CDR(tmpMeta74);
          if (listEmpty(tmpMeta76)) goto goto_52;
          tmpMeta77 = MMC_CAR(tmpMeta76);
          tmpMeta78 = MMC_CDR(tmpMeta76);
          if (listEmpty(tmpMeta78)) goto goto_52;
          tmpMeta79 = MMC_CAR(tmpMeta78);
          tmpMeta80 = MMC_CDR(tmpMeta78);
          if (listEmpty(tmpMeta80)) goto goto_52;
          tmpMeta81 = MMC_CAR(tmpMeta80);
          tmpMeta82 = MMC_CDR(tmpMeta80);
          if (!listEmpty(tmpMeta82)) goto goto_52;
          _discreteAlgVars = tmpMeta73;
          _intAlgVars = tmpMeta75;
          _boolAlgVars = tmpMeta77;
          _stringAlgVars = tmpMeta79;
          _enumAlgVars = tmpMeta81;
          _simCodeIndices = tmpMeta71;

          /* Pattern-matching tuple assignment */
          tmpMeta84 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 12))), _simCodeIndices, 2, 1, &tmpMeta83);
          if (listEmpty(tmpMeta84)) goto goto_52;
          tmpMeta85 = MMC_CAR(tmpMeta84);
          tmpMeta86 = MMC_CDR(tmpMeta84);
          if (listEmpty(tmpMeta86)) goto goto_52;
          tmpMeta87 = MMC_CAR(tmpMeta86);
          tmpMeta88 = MMC_CDR(tmpMeta86);
          if (listEmpty(tmpMeta88)) goto goto_52;
          tmpMeta89 = MMC_CAR(tmpMeta88);
          tmpMeta90 = MMC_CDR(tmpMeta88);
          if (listEmpty(tmpMeta90)) goto goto_52;
          tmpMeta91 = MMC_CAR(tmpMeta90);
          tmpMeta92 = MMC_CDR(tmpMeta90);
          if (listEmpty(tmpMeta92)) goto goto_52;
          tmpMeta93 = MMC_CAR(tmpMeta92);
          tmpMeta94 = MMC_CDR(tmpMeta92);
          if (!listEmpty(tmpMeta94)) goto goto_52;
          _discreteAlgVars2 = tmpMeta85;
          _intAlgVars2 = tmpMeta87;
          _boolAlgVars2 = tmpMeta89;
          _stringAlgVars2 = tmpMeta91;
          _enumAlgVars2 = tmpMeta93;
          _simCodeIndices = tmpMeta83;

          /* Pattern-matching tuple assignment */
          tmpMeta96 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 13))), _simCodeIndices, 2, 1, &tmpMeta95);
          if (listEmpty(tmpMeta96)) goto goto_52;
          tmpMeta97 = MMC_CAR(tmpMeta96);
          tmpMeta98 = MMC_CDR(tmpMeta96);
          if (listEmpty(tmpMeta98)) goto goto_52;
          tmpMeta99 = MMC_CAR(tmpMeta98);
          tmpMeta100 = MMC_CDR(tmpMeta98);
          if (listEmpty(tmpMeta100)) goto goto_52;
          tmpMeta101 = MMC_CAR(tmpMeta100);
          tmpMeta102 = MMC_CDR(tmpMeta100);
          if (listEmpty(tmpMeta102)) goto goto_52;
          tmpMeta103 = MMC_CAR(tmpMeta102);
          tmpMeta104 = MMC_CDR(tmpMeta102);
          if (listEmpty(tmpMeta104)) goto goto_52;
          tmpMeta105 = MMC_CAR(tmpMeta104);
          tmpMeta106 = MMC_CDR(tmpMeta104);
          if (!listEmpty(tmpMeta106)) goto goto_52;
          _discreteAlgVars3 = tmpMeta97;
          _intAlgVars3 = tmpMeta99;
          _boolAlgVars3 = tmpMeta101;
          _stringAlgVars3 = tmpMeta103;
          _enumAlgVars3 = tmpMeta105;
          _simCodeIndices = tmpMeta95;

          /* Pattern-matching tuple assignment */
          tmpMeta108 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 7))), _simCodeIndices, 2, 3, &tmpMeta107);
          if (listEmpty(tmpMeta108)) goto goto_52;
          tmpMeta109 = MMC_CAR(tmpMeta108);
          tmpMeta110 = MMC_CDR(tmpMeta108);
          if (listEmpty(tmpMeta110)) goto goto_52;
          tmpMeta111 = MMC_CAR(tmpMeta110);
          tmpMeta112 = MMC_CDR(tmpMeta110);
          if (listEmpty(tmpMeta112)) goto goto_52;
          tmpMeta113 = MMC_CAR(tmpMeta112);
          tmpMeta114 = MMC_CDR(tmpMeta112);
          if (listEmpty(tmpMeta114)) goto goto_52;
          tmpMeta115 = MMC_CAR(tmpMeta114);
          tmpMeta116 = MMC_CDR(tmpMeta114);
          if (listEmpty(tmpMeta116)) goto goto_52;
          tmpMeta117 = MMC_CAR(tmpMeta116);
          tmpMeta118 = MMC_CDR(tmpMeta116);
          if (!listEmpty(tmpMeta118)) goto goto_52;
          _aliasVars = tmpMeta109;
          _intAliasVars = tmpMeta111;
          _boolAliasVars = tmpMeta113;
          _stringAliasVars = tmpMeta115;
          _enumAliasVars = tmpMeta117;
          _simCodeIndices = tmpMeta107;

          /* Pattern-matching tuple assignment */
          tmpMeta120 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 19))), _simCodeIndices, 2, 2, &tmpMeta119);
          if (listEmpty(tmpMeta120)) goto goto_52;
          tmpMeta121 = MMC_CAR(tmpMeta120);
          tmpMeta122 = MMC_CDR(tmpMeta120);
          if (listEmpty(tmpMeta122)) goto goto_52;
          tmpMeta123 = MMC_CAR(tmpMeta122);
          tmpMeta124 = MMC_CDR(tmpMeta122);
          if (listEmpty(tmpMeta124)) goto goto_52;
          tmpMeta125 = MMC_CAR(tmpMeta124);
          tmpMeta126 = MMC_CDR(tmpMeta124);
          if (listEmpty(tmpMeta126)) goto goto_52;
          tmpMeta127 = MMC_CAR(tmpMeta126);
          tmpMeta128 = MMC_CDR(tmpMeta126);
          if (listEmpty(tmpMeta128)) goto goto_52;
          tmpMeta129 = MMC_CAR(tmpMeta128);
          tmpMeta130 = MMC_CDR(tmpMeta128);
          if (!listEmpty(tmpMeta130)) goto goto_52;
          _paramVars = tmpMeta121;
          _intParamVars = tmpMeta123;
          _boolParamVars = tmpMeta125;
          _stringParamVars = tmpMeta127;
          _enumParamVars = tmpMeta129;
          _simCodeIndices = tmpMeta119;

          /* Pattern-matching tuple assignment */
          tmpMeta132 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 18))), _simCodeIndices, 2, 2, &tmpMeta131);
          if (listEmpty(tmpMeta132)) goto goto_52;
          tmpMeta133 = MMC_CAR(tmpMeta132);
          tmpMeta134 = MMC_CDR(tmpMeta132);
          if (listEmpty(tmpMeta134)) goto goto_52;
          tmpMeta135 = MMC_CAR(tmpMeta134);
          tmpMeta136 = MMC_CDR(tmpMeta134);
          if (listEmpty(tmpMeta136)) goto goto_52;
          tmpMeta137 = MMC_CAR(tmpMeta136);
          tmpMeta138 = MMC_CDR(tmpMeta136);
          if (listEmpty(tmpMeta138)) goto goto_52;
          tmpMeta139 = MMC_CAR(tmpMeta138);
          tmpMeta140 = MMC_CDR(tmpMeta138);
          if (listEmpty(tmpMeta140)) goto goto_52;
          tmpMeta141 = MMC_CAR(tmpMeta140);
          tmpMeta142 = MMC_CDR(tmpMeta140);
          if (!listEmpty(tmpMeta142)) goto goto_52;
          _paramVarsR = tmpMeta133;
          _intParamVarsR = tmpMeta135;
          _boolParamVarsR = tmpMeta137;
          _stringParamVarsR = tmpMeta139;
          _enumParamVarsR = tmpMeta141;
          _simCodeIndices = tmpMeta131;

          /* Pattern-matching tuple assignment */
          tmpMeta144 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 20))), _simCodeIndices, 2, 1, &tmpMeta143);
          if (listEmpty(tmpMeta144)) goto goto_52;
          tmpMeta145 = MMC_CAR(tmpMeta144);
          tmpMeta146 = MMC_CDR(tmpMeta144);
          if (listEmpty(tmpMeta146)) goto goto_52;
          tmpMeta147 = MMC_CAR(tmpMeta146);
          tmpMeta148 = MMC_CDR(tmpMeta146);
          if (listEmpty(tmpMeta148)) goto goto_52;
          tmpMeta149 = MMC_CAR(tmpMeta148);
          tmpMeta150 = MMC_CDR(tmpMeta148);
          if (listEmpty(tmpMeta150)) goto goto_52;
          tmpMeta151 = MMC_CAR(tmpMeta150);
          tmpMeta152 = MMC_CDR(tmpMeta150);
          if (listEmpty(tmpMeta152)) goto goto_52;
          tmpMeta153 = MMC_CAR(tmpMeta152);
          tmpMeta154 = MMC_CDR(tmpMeta152);
          if (!listEmpty(tmpMeta154)) goto goto_52;
          _constVars = tmpMeta145;
          _intConstVars = tmpMeta147;
          _boolConstVars = tmpMeta149;
          _stringConstVars = tmpMeta151;
          _enumConstVars = tmpMeta153;
          _simCodeIndices = tmpMeta143;

          /* Pattern-matching tuple assignment */
          tmpMeta156 = omc_NSimVar_SimVars_createSimVarLists(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 17))), _simCodeIndices, 1, 1, &tmpMeta155);
          if (listEmpty(tmpMeta156)) goto goto_52;
          tmpMeta157 = MMC_CAR(tmpMeta156);
          tmpMeta158 = MMC_CDR(tmpMeta156);
          if (!listEmpty(tmpMeta158)) goto goto_52;
          _inputVars = tmpMeta157;
          _simCodeIndices = tmpMeta155;

          /* Pattern-matching tuple assignment */
          tmpMeta160 = omc_NSimVar_SimVars_createSimVarLists(threadData, _residual_vars, _simCodeIndices, 1, 4, &tmpMeta159);
          if (listEmpty(tmpMeta160)) goto goto_52;
          tmpMeta161 = MMC_CAR(tmpMeta160);
          tmpMeta162 = MMC_CDR(tmpMeta160);
          if (!listEmpty(tmpMeta162)) goto goto_52;
          _residualVars = tmpMeta161;
          _simCodeIndices = tmpMeta159;
          goto tmp53_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          goto tmp53_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          goto tmp53_done;
        }
        default:
        tmp53_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT15, _OMC_LIT25);
          goto goto_52;
          goto tmp53_done;
        }
        }
        goto tmp53_end;
        tmp53_end: ;
      }
      goto goto_52;
      goto_52:;
      MMC_THROW_INTERNAL();
      goto tmp53_done;
      tmp53_done:;
    }
  }
  ;

  tmpMeta163 = mmc_mk_cons(_algVars, mmc_mk_cons(_inputVars, mmc_mk_cons(_nonTrivialAlias, MMC_REFSTRUCTLIT(mmc_nil))));
  tmpMeta164 = mmc_mk_cons(_discreteAlgVars, mmc_mk_cons(_discreteAlgVars2, mmc_mk_cons(_discreteAlgVars3, MMC_REFSTRUCTLIT(mmc_nil))));
  tmpMeta165 = mmc_mk_cons(_intAlgVars, mmc_mk_cons(_intAlgVars2, mmc_mk_cons(_intAlgVars3, MMC_REFSTRUCTLIT(mmc_nil))));
  tmpMeta166 = mmc_mk_cons(_boolAlgVars, mmc_mk_cons(_boolAlgVars2, mmc_mk_cons(_boolAlgVars3, MMC_REFSTRUCTLIT(mmc_nil))));
  tmpMeta167 = mmc_mk_cons(_stringAlgVars, mmc_mk_cons(_stringAlgVars2, mmc_mk_cons(_stringAlgVars3, MMC_REFSTRUCTLIT(mmc_nil))));
  tmpMeta168 = mmc_mk_cons(_enumAlgVars, mmc_mk_cons(_enumAlgVars2, mmc_mk_cons(_enumAlgVars3, MMC_REFSTRUCTLIT(mmc_nil))));
  tmpMeta169 = mmc_mk_cons(_paramVars, mmc_mk_cons(_paramVarsR, MMC_REFSTRUCTLIT(mmc_nil)));
  tmpMeta170 = mmc_mk_cons(_intParamVars, mmc_mk_cons(_intParamVarsR, MMC_REFSTRUCTLIT(mmc_nil)));
  tmpMeta171 = mmc_mk_cons(_boolParamVars, mmc_mk_cons(_boolParamVarsR, MMC_REFSTRUCTLIT(mmc_nil)));
  tmpMeta172 = mmc_mk_cons(_stringParamVars, mmc_mk_cons(_stringParamVarsR, MMC_REFSTRUCTLIT(mmc_nil)));
  tmpMeta173 = mmc_mk_cons(_enumParamVars, mmc_mk_cons(_enumParamVarsR, MMC_REFSTRUCTLIT(mmc_nil)));
  tmpMeta174 = mmc_mk_box(36, 3, &NSimVar_SimVars_SIMVARS__desc, _stateVars, _derivativeVars, omc_List_flatten(threadData, tmpMeta163), omc_List_flatten(threadData, tmpMeta164), omc_List_flatten(threadData, tmpMeta165), omc_List_flatten(threadData, tmpMeta166), omc_List_flatten(threadData, tmpMeta167), omc_List_flatten(threadData, tmpMeta168), _inputVars, _outputVars, _aliasVars, _intAliasVars, _boolAliasVars, _stringAliasVars, _enumAliasVars, omc_List_flatten(threadData, tmpMeta169), omc_List_flatten(threadData, tmpMeta170), omc_List_flatten(threadData, tmpMeta171), omc_List_flatten(threadData, tmpMeta172), omc_List_flatten(threadData, tmpMeta173), _extObjVars, _constVars, _intConstVars, _boolConstVars, _stringConstVars, _enumConstVars, _residualVars, _jacobianVars, _seedVars, _realOptimizeConstraintsVars, _realOptimizeFinalConstraintsVars, _sensitivityVars, _dataReconSetcVars, _dataReconinputVars, _dataReconSetBVars);
  _simVars = tmpMeta174;

  {
    modelica_metatype __omcQ_24tmpVar17;
    modelica_metatype* tmp177;
    modelica_metatype tmpMeta178;
    modelica_metatype __omcQ_24tmpVar16;
    modelica_integer tmp179;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 9)));
    tmpMeta178 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar17 = tmpMeta178; /* defaultValue */
    tmp177 = &__omcQ_24tmpVar17;
    while(1) {
      tmp179 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp179--;
      }
      if (tmp179 == 0) {
        __omcQ_24tmpVar16 = omc_NSimVar_SimVar_shiftIndex(threadData, _v, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 4)))));
        *tmp177 = mmc_mk_cons(__omcQ_24tmpVar16,0);
        tmp177 = &MMC_CDR(*tmp177);
      } else if (tmp179 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp177 = mmc_mk_nil();
    tmpMeta176 = __omcQ_24tmpVar17;
  }
  tmpMeta175 = MMC_TAGPTR(mmc_alloc_words(37));
  memcpy(MMC_UNTAGPTR(tmpMeta175), MMC_UNTAGPTR(_simVars), 37*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta175))[6] = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 6))), tmpMeta176);
  _simVars = tmpMeta175;

  {
    modelica_metatype __omcQ_24tmpVar19;
    modelica_metatype* tmp182;
    modelica_metatype tmpMeta183;
    modelica_metatype __omcQ_24tmpVar18;
    modelica_integer tmp184;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 16)));
    tmpMeta183 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar19 = tmpMeta183; /* defaultValue */
    tmp182 = &__omcQ_24tmpVar19;
    while(1) {
      tmp184 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp184--;
      }
      if (tmp184 == 0) {
        __omcQ_24tmpVar18 = omc_NSimVar_SimVar_shiftIndex(threadData, _v, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 14)))));
        *tmp182 = mmc_mk_cons(__omcQ_24tmpVar18,0);
        tmp182 = &MMC_CDR(*tmp182);
      } else if (tmp184 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp182 = mmc_mk_nil();
    tmpMeta181 = __omcQ_24tmpVar19;
  }
  tmpMeta180 = MMC_TAGPTR(mmc_alloc_words(37));
  memcpy(MMC_UNTAGPTR(tmpMeta180), MMC_UNTAGPTR(_simVars), 37*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta180))[13] = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 13))), tmpMeta181);
  _simVars = tmpMeta180;

  {
    modelica_metatype __omcQ_24tmpVar21;
    modelica_metatype* tmp187;
    modelica_metatype tmpMeta188;
    modelica_metatype __omcQ_24tmpVar20;
    modelica_integer tmp189;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 21)));
    tmpMeta188 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar21 = tmpMeta188; /* defaultValue */
    tmp187 = &__omcQ_24tmpVar21;
    while(1) {
      tmp189 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp189--;
      }
      if (tmp189 == 0) {
        __omcQ_24tmpVar20 = omc_NSimVar_SimVar_shiftIndex(threadData, _v, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 9)))));
        *tmp187 = mmc_mk_cons(__omcQ_24tmpVar20,0);
        tmp187 = &MMC_CDR(*tmp187);
      } else if (tmp189 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp187 = mmc_mk_nil();
    tmpMeta186 = __omcQ_24tmpVar21;
  }
  tmpMeta185 = MMC_TAGPTR(mmc_alloc_words(37));
  memcpy(MMC_UNTAGPTR(tmpMeta185), MMC_UNTAGPTR(_simVars), 37*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta185))[18] = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 18))), tmpMeta186);
  _simVars = tmpMeta185;

  {
    modelica_metatype __omcQ_24tmpVar23;
    modelica_metatype* tmp192;
    modelica_metatype tmpMeta193;
    modelica_metatype __omcQ_24tmpVar22;
    modelica_integer tmp194;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 27)));
    tmpMeta193 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar23 = tmpMeta193; /* defaultValue */
    tmp192 = &__omcQ_24tmpVar23;
    while(1) {
      tmp194 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp194--;
      }
      if (tmp194 == 0) {
        __omcQ_24tmpVar22 = omc_NSimVar_SimVar_shiftIndex(threadData, _v, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 4)))));
        *tmp192 = mmc_mk_cons(__omcQ_24tmpVar22,0);
        tmp192 = &MMC_CDR(*tmp192);
      } else if (tmp194 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp192 = mmc_mk_nil();
    tmpMeta191 = __omcQ_24tmpVar23;
  }
  tmpMeta190 = MMC_TAGPTR(mmc_alloc_words(37));
  memcpy(MMC_UNTAGPTR(tmpMeta190), MMC_UNTAGPTR(_simVars), 37*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta190))[24] = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVars), 24))), tmpMeta191);
  _simVars = tmpMeta190;
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _simVars;
}

DLLDirection
modelica_string omc_NSimVar_SimVars_toString(threadData_t *threadData, modelica_metatype _vars, modelica_string __omcQ_24in_5Fstr)
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
  _str = __omcQ_24in_5Fstr;
  tmpMeta1 = stringAppend(_OMC_LIT27,_str);
  _str = omc_StringUtil_headline__2(threadData, tmpMeta1);

  tmpMeta2 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 2))), _OMC_LIT28, 0 /* false */));
  _str = tmpMeta2;

  tmpMeta3 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 3))), _OMC_LIT29, 0 /* false */));
  _str = tmpMeta3;

  tmpMeta4 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 4))), _OMC_LIT30, 0 /* false */));
  _str = tmpMeta4;

  tmpMeta5 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 5))), _OMC_LIT31, 0 /* false */));
  _str = tmpMeta5;

  tmpMeta6 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 6))), _OMC_LIT32, 0 /* false */));
  _str = tmpMeta6;

  tmpMeta7 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 7))), _OMC_LIT33, 0 /* false */));
  _str = tmpMeta7;

  tmpMeta8 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 17))), _OMC_LIT34, 0 /* false */));
  _str = tmpMeta8;

  tmpMeta9 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 18))), _OMC_LIT35, 0 /* false */));
  _str = tmpMeta9;

  tmpMeta10 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 19))), _OMC_LIT36, 0 /* false */));
  _str = tmpMeta10;

  tmpMeta11 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 28))), _OMC_LIT37, 0 /* false */));
  _str = tmpMeta11;

  tmpMeta12 = stringAppend(_str,omc_NSimVar_SimVar_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 12))), _OMC_LIT38, 1 /* true */));
  _str = tmpMeta12;
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_Alias_getOffsetAlias(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_real *out_gain, modelica_real *out_offset)
{
  modelica_metatype _cref = NULL;
  modelica_real _gain;
  modelica_real _offset;
  modelica_real tmp1_c1 __attribute__((unused)) = 0;
  modelica_real tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cref has no default value.
  // _gain has no default value.
  // _offset has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _e1;
    tmp4_2 = _e2;
    {
      modelica_metatype _arg1 = NULL;
      modelica_metatype _arg2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _arg1 has no default value.
      // _arg2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isConstNumber(threadData, _e2)) goto tmp3_end;
          tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e1), 3)));
          tmp1_c1 = 0.0;
          tmp1_c2 = omc_NFExpression_realValue(threadData, _e2);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isConstNumber(threadData, _e1)) goto tmp3_end;
          tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e2), 3)));
          tmp1_c1 = 0.0;
          tmp1_c2 = omc_NFExpression_realValue(threadData, _e1);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!listEmpty(tmpMeta11)) goto tmp3_end;
          
          _arg1 = tmpMeta7;
          _arg2 = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_NFOperator_getMathClassification(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e1), 4)))) == 3) && omc_NFExpression_isConstNumber(threadData, _e2))) goto tmp3_end;
          _cref = omc_NSimVar_Alias_getGainAlias(threadData, _arg1, _arg2 ,&_gain);
          tmpMeta[0+0] = _cref;
          tmp1_c1 = _gain;
          tmp1_c2 = omc_NFExpression_realValue(threadData, _e2);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,21,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (listEmpty(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          if (!listEmpty(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (!listEmpty(tmpMeta17)) goto tmp3_end;
          
          _arg1 = tmpMeta13;
          _arg2 = tmpMeta15;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_NFOperator_getMathClassification(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e2), 4)))) == 3) && omc_NFExpression_isConstNumber(threadData, _e1))) goto tmp3_end;
          _cref = omc_NSimVar_Alias_getGainAlias(threadData, _arg1, _arg2 ,&_gain);
          tmpMeta[0+0] = _cref;
          tmp1_c1 = _gain;
          tmp1_c2 = omc_NFExpression_realValue(threadData, _e1);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta18 = stringAppend(_OMC_LIT39,omc_NFExpression_toString(threadData, _e1));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT40);
          tmpMeta20 = stringAppend(tmpMeta19,omc_NFExpression_toString(threadData, _e2));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT41);
          omc_Error_addInternalError(threadData, tmpMeta21, _OMC_LIT42);
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
  _cref = tmpMeta[0+0];
  _gain = tmp1_c1;
  _offset = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_gain) { *out_gain = _gain; }
  if (out_offset) { *out_offset = _offset; }
  return _cref;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimVar_Alias_getOffsetAlias(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype *out_gain, modelica_metatype *out_offset)
{
  modelica_real _gain;
  modelica_real _offset;
  modelica_metatype _cref = NULL;
  _cref = omc_NSimVar_Alias_getOffsetAlias(threadData, _e1, _e2, &_gain, &_offset);
  /* skip box _cref; NFComponentRef */
  if (out_gain) { *out_gain = mmc_mk_rcon(_gain); }
  if (out_offset) { *out_offset = mmc_mk_rcon(_offset); }
  return _cref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_Alias_getGainAlias(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_real *out_gain)
{
  modelica_metatype _cref = NULL;
  modelica_real _gain;
  modelica_real tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cref has no default value.
  // _gain has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _e1;
    tmp4_2 = _e2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isConstNumber(threadData, _e2)) goto tmp3_end;
          tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e1), 3)));
          tmp1_c1 = omc_NFExpression_realValue(threadData, _e2);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isConstNumber(threadData, _e1)) goto tmp3_end;
          tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e2), 3)));
          tmp1_c1 = omc_NFExpression_realValue(threadData, _e1);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT43,omc_NFExpression_toString(threadData, _e1));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT40);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFExpression_toString(threadData, _e2));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT41);
          omc_Error_addInternalError(threadData, tmpMeta9, _OMC_LIT44);
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
  _cref = tmpMeta[0+0];
  _gain = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_gain) { *out_gain = _gain; }
  return _cref;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimVar_Alias_getGainAlias(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype *out_gain)
{
  modelica_real _gain;
  modelica_metatype _cref = NULL;
  _cref = omc_NSimVar_Alias_getGainAlias(threadData, _e1, _e2, &_gain);
  /* skip box _cref; NFComponentRef */
  if (out_gain) { *out_gain = mmc_mk_rcon(_gain); }
  return _cref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_Alias_getAlias(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_metatype _alias = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _alias has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box4(4, &NSimVar_Alias_ALIAS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))), _OMC_LIT45, _OMC_LIT46);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto tmp3_end;
          
          _e = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box4(4, &NSimVar_Alias_ALIAS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))), _OMC_LIT47, _OMC_LIT46);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          
          _e = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box4(4, &NSimVar_Alias_ALIAS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))), _OMC_LIT47, _OMC_LIT46);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT18;
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
  _alias = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _alias;
}

DLLDirection
modelica_metatype omc_NSimVar_Alias_convert(threadData_t *threadData, modelica_metatype _alias)
{
  modelica_metatype _oldAlias = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldAlias has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _alias;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT48;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 3)))) == 1.0) && (mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 4)))) == 0.0))) goto tmp3_end;
          tmpMeta6 = mmc_mk_box2(4, &SimCodeVar_AliasVariable_ALIAS__desc, omc_NFComponentRef_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 2)))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 3)))) == -1.0) && (mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 4)))) == 0.0))) goto tmp3_end;
          tmpMeta7 = mmc_mk_box2(5, &SimCodeVar_AliasVariable_NEGATEDALIAS__desc, omc_NFComponentRef_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 2)))));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT15, _OMC_LIT50);
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
  _oldAlias = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldAlias;
}

DLLDirection
modelica_string omc_NSimVar_Alias_toString(threadData_t *threadData, modelica_metatype _alias)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _alias;
    {
      modelica_string _gainStr = NULL;
      modelica_string _offsetStr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _gainStr has no default value.
      // _offsetStr has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT51;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7;
          modelica_string tmp8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_string tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp7 = (modelica_boolean)(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 3)))) == 1.0);
          if(tmp7)
          {
            tmp8 = _OMC_LIT26;
          }
          else
          {
            tmpMeta6 = stringAppend(realString(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 3))))),_OMC_LIT52);
            tmp8 = tmpMeta6;
          }
          _gainStr = tmp8;

          tmp10 = (modelica_boolean)(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 4)))) == 0.0);
          if(tmp10)
          {
            tmp11 = _OMC_LIT26;
          }
          else
          {
            tmpMeta9 = stringAppend(_OMC_LIT53,realString(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 4))))));
            tmp11 = tmpMeta9;
          }
          _offsetStr = tmp11;
          tmpMeta12 = stringAppend(_OMC_LIT54,_gainStr);
          tmpMeta13 = stringAppend(tmpMeta12,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alias), 2)))));
          tmpMeta14 = stringAppend(tmpMeta13,_offsetStr);
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT55);
          tmp1 = tmpMeta15;
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

DLLDirection
modelica_metatype omc_NSimVar_Alias_fromBinding(threadData_t *threadData, modelica_metatype _binding)
{
  modelica_metatype _alias = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _alias has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _binding;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NSimVar_Alias_getAlias(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 2))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NSimVar_Alias_getAlias(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 2))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT18;
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
  _alias = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _alias;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_SimVar_convertVarKind(threadData_t *threadData, modelica_metatype _varKind)
{
  modelica_metatype _oldVarKind = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldVarKind has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _varKind;
    {
      modelica_metatype _var = NULL;
      modelica_metatype _oldCrefOpt = NULL;
      int tmp4;
      // _var has no default value.
      // _oldCrefOpt has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT56;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varKind), 3)))))
          {
            _var = omc_Pointer_access(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varKind), 3)))));

            _oldCrefOpt = mmc_mk_some(omc_NFComponentRef_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))));
          }
          else
          {
            _oldCrefOpt = mmc_mk_none();
          }
          tmpMeta5 = mmc_mk_box4(4, &BackendDAE_VarKind_STATE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varKind), 2))), _oldCrefOpt, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varKind), 4))));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT57;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT58;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT59;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT60;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT60;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT60;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT60;
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT61;
          goto tmp3_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT62;
          goto tmp3_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT56;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(12, &BackendDAE_VarKind_EXTOBJ__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varKind), 2))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 20: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT63;
          goto tmp3_done;
        }
        case 21: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT64;
          goto tmp3_done;
        }
        case 22: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT65;
          goto tmp3_done;
        }
        case 23: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT66;
          goto tmp3_done;
        }
        case 24: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT67;
          goto tmp3_done;
        }
        case 25: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT68;
          goto tmp3_done;
        }
        case 26: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT69;
          goto tmp3_done;
        }
        case 27: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT70;
          goto tmp3_done;
        }
        case 28: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(21, &BackendDAE_VarKind_OPT__LOOP__INPUT__desc, omc_NFComponentRef_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varKind), 2)))));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 29: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT71;
          goto tmp3_done;
        }
        case 30: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT72;
          goto tmp3_done;
        }
        case 31: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT73;
          goto tmp3_done;
        }
        case 32: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT74;
          goto tmp3_done;
        }
        case 33: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT75;
          goto tmp3_done;
        }
        case 34: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT76;
          goto tmp3_done;
        }
        case 35: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT15, _OMC_LIT78);
          goto goto_2;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT79,omc_NFBackendExtension_VariableKind_toString(threadData, _varKind));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT20);
          tmpMeta8 = mmc_mk_cons(tmpMeta10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT15, tmpMeta8);
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
  _oldVarKind = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldVarKind;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_SimVar_parseBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstart, modelica_metatype _var, modelica_boolean *out_isValueChangeable, modelica_integer *out_causality)
{
  modelica_metatype _start = NULL;
  modelica_boolean _isValueChangeable;
  modelica_integer _causality;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _start = __omcQ_24in_5Fstart;
  // _isValueChangeable has no default value.
  // _causality has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      modelica_metatype _bindingExp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _bindingExp has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,10) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,9) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (1 != tmp9) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,7) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,11,1) == 0) goto tmp3_end;
          
          _bindingExp = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = mmc_mk_some(_bindingExp);
          tmp1_c1 = 1 /* true */;
          tmp1_c2 = 5;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,10) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,4,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          if (1 != tmp15) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,0,7) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,11,1) == 0) goto tmp3_end;
          
          _bindingExp = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = mmc_mk_some(_bindingExp);
          tmp1_c1 = 1 /* true */;
          tmp1_c2 = 5;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,10) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,7) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,11,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _start;
          tmp1_c1 = 0 /* false */;
          tmp1_c2 = 6;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _start;
          tmp1_c1 = 0 /* false */;
          tmp1_c2 = 4;
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
  _start = tmpMeta[0+0];
  _isValueChangeable = tmp1_c1;
  _causality = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_isValueChangeable) { *out_isValueChangeable = _isValueChangeable; }
  if (out_causality) { *out_causality = _causality; }
  return _start;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimVar_SimVar_parseBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstart, modelica_metatype _var, modelica_metatype *out_isValueChangeable, modelica_metatype *out_causality)
{
  modelica_boolean _isValueChangeable;
  modelica_integer _causality;
  modelica_metatype _start = NULL;
  _start = omc_NSimVar_SimVar_parseBinding(threadData, __omcQ_24in_5Fstart, _var, &_isValueChangeable, &_causality);
  /* skip box _start; Option<NFExpression> */
  if (out_isValueChangeable) { *out_isValueChangeable = mmc_mk_icon(_isValueChangeable); }
  if (out_causality) { *out_causality = mmc_mk_icon(_causality); }
  return _start;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NSimVar_SimVar_parseComment(threadData_t *threadData, modelica_metatype _absynComment)
{
  modelica_string _commentStr = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _commentStr has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _absynComment;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          _commentStr = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = _commentStr;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT26;
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
  _commentStr = tmp1;
  _return: OMC_LABEL_UNUSED
  return _commentStr;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimVar_SimVar_parseAttributes(threadData_t *threadData, modelica_metatype _backendInfo, modelica_string *out_unit, modelica_string *out_displayUnit, modelica_metatype *out_min, modelica_metatype *out_max, modelica_metatype *out_start, modelica_metatype *out_nominal, modelica_boolean *out_isFixed, modelica_boolean *out_isDiscrete, modelica_boolean *out_isProtected)
{
  modelica_metatype _varKind = NULL;
  modelica_string _unit = NULL;
  modelica_string _displayUnit = NULL;
  modelica_metatype _min = NULL;
  modelica_metatype _max = NULL;
  modelica_metatype _start = NULL;
  modelica_metatype _nominal = NULL;
  modelica_boolean _isFixed;
  modelica_boolean _isDiscrete;
  modelica_boolean _isProtected;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varKind has no default value.
  _unit = _OMC_LIT26;
  _displayUnit = _OMC_LIT26;
  _min = mmc_mk_none();
  _max = mmc_mk_none();
  _start = mmc_mk_none();
  _nominal = mmc_mk_none();
  _isFixed = 0 /* false */;
  // _isDiscrete has no default value.
  // _isProtected has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _backendInfo;
    {
      modelica_metatype _varAttr = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _varAttr has no default value.
      tmp3 = 0;
      for (; tmp3 < 7; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,7) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,16) == 0) goto tmp2_end;
          
          _varKind = tmpMeta5;
          _varAttr = tmpMeta6;
          /* Pattern matching succeeded */
          _unit = omc_Util_applyOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 3))), boxvar_NFExpression_stringValue, _OMC_LIT26);

          _displayUnit = omc_Util_applyOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 4))), boxvar_NFExpression_stringValue, _OMC_LIT26);

          _min = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 5)));

          _max = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 6)));

          _start = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 7)));

          _nominal = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 9)));

          _isFixed = mmc_unbox_boolean(omc_Util_applyOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 8))), boxvar_NFExpression_booleanValue, mmc_mk_boolean(0 /* false */)));

          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = _varKind;
            {
              int tmp10;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp10_1))) {
                case 9: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 10: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 11: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 14: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 15: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 18: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                default:
                tmp9_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmp7 = 0 /* false */;
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_1;
              goto tmp9_done;
              tmp9_done:;
            }
          }
          _isDiscrete = tmp7;

          _isProtected = mmc_unbox_boolean(omc_Util_getOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 15))), mmc_mk_boolean(0 /* false */)));
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,7) == 0) goto tmp2_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,11) == 0) goto tmp2_end;
          
          _varKind = tmpMeta11;
          _varAttr = tmpMeta12;
          /* Pattern matching succeeded */
          _min = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 3)));

          _max = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 4)));

          _start = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 5)));

          _isFixed = mmc_unbox_boolean(omc_Util_applyOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 6))), boxvar_NFExpression_booleanValue, mmc_mk_boolean(0 /* false */)));

          _isDiscrete = 1 /* true */;

          _isProtected = mmc_unbox_boolean(omc_Util_getOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 10))), mmc_mk_boolean(0 /* false */)));
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,7) == 0) goto tmp2_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,2,7) == 0) goto tmp2_end;
          
          _varKind = tmpMeta13;
          _varAttr = tmpMeta14;
          /* Pattern matching succeeded */
          _start = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 3)));

          _isFixed = mmc_unbox_boolean(omc_Util_applyOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 4))), boxvar_NFExpression_booleanValue, mmc_mk_boolean(0 /* false */)));

          _isDiscrete = 1 /* true */;

          _isProtected = mmc_unbox_boolean(omc_Util_getOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 6))), mmc_mk_boolean(0 /* false */)));
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,7) == 0) goto tmp2_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,3,2) == 0) goto tmp2_end;
          
          _varKind = tmpMeta15;
          _varAttr = tmpMeta16;
          /* Pattern matching succeeded */
          _isDiscrete = 1 /* true */;

          _isProtected = mmc_unbox_boolean(omc_Util_getOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 2))), mmc_mk_boolean(0 /* false */)));
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,7) == 0) goto tmp2_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,4,7) == 0) goto tmp2_end;
          
          _varKind = tmpMeta17;
          _varAttr = tmpMeta18;
          /* Pattern matching succeeded */
          _start = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 3)));

          _isFixed = mmc_unbox_boolean(omc_Util_applyOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 4))), boxvar_NFExpression_booleanValue, mmc_mk_boolean(0 /* false */)));

          _isDiscrete = 1 /* true */;

          _isProtected = mmc_unbox_boolean(omc_Util_getOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 6))), mmc_mk_boolean(0 /* false */)));
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,7) == 0) goto tmp2_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,5,9) == 0) goto tmp2_end;
          
          _varKind = tmpMeta19;
          _varAttr = tmpMeta20;
          /* Pattern matching succeeded */
          _min = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 3)));

          _max = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 4)));

          _start = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 5)));

          _isFixed = mmc_unbox_boolean(omc_Util_applyOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 6))), boxvar_NFExpression_booleanValue, mmc_mk_boolean(0 /* false */)));

          _isDiscrete = 1 /* true */;

          _isProtected = mmc_unbox_boolean(omc_Util_getOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varAttr), 8))), mmc_mk_boolean(0 /* false */)));
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta22 = stringAppend(_OMC_LIT80,omc_NFBackendExtension_BackendInfo_toString(threadData, _backendInfo));
          tmpMeta21 = mmc_mk_cons(tmpMeta22, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT15, tmpMeta21);
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
  if (out_unit) { *out_unit = _unit; }
  if (out_displayUnit) { *out_displayUnit = _displayUnit; }
  if (out_min) { *out_min = _min; }
  if (out_max) { *out_max = _max; }
  if (out_start) { *out_start = _start; }
  if (out_nominal) { *out_nominal = _nominal; }
  if (out_isFixed) { *out_isFixed = _isFixed; }
  if (out_isDiscrete) { *out_isDiscrete = _isDiscrete; }
  if (out_isProtected) { *out_isProtected = _isProtected; }
  return _varKind;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimVar_SimVar_parseAttributes(threadData_t *threadData, modelica_metatype _backendInfo, modelica_metatype *out_unit, modelica_metatype *out_displayUnit, modelica_metatype *out_min, modelica_metatype *out_max, modelica_metatype *out_start, modelica_metatype *out_nominal, modelica_metatype *out_isFixed, modelica_metatype *out_isDiscrete, modelica_metatype *out_isProtected)
{
  modelica_boolean _isFixed;
  modelica_boolean _isDiscrete;
  modelica_boolean _isProtected;
  modelica_metatype _varKind = NULL;
  _varKind = omc_NSimVar_SimVar_parseAttributes(threadData, _backendInfo, out_unit, out_displayUnit, out_min, out_max, out_start, out_nominal, &_isFixed, &_isDiscrete, &_isProtected);
  /* skip box _varKind; NFBackendExtension.VariableKind */
  /* skip box _unit; String */
  /* skip box _displayUnit; String */
  /* skip box _min; Option<NFExpression> */
  /* skip box _max; Option<NFExpression> */
  /* skip box _start; Option<NFExpression> */
  /* skip box _nominal; Option<NFExpression> */
  if (out_isFixed) { *out_isFixed = mmc_mk_icon(_isFixed); }
  if (out_isDiscrete) { *out_isDiscrete = mmc_mk_icon(_isDiscrete); }
  if (out_isProtected) { *out_isProtected = mmc_mk_icon(_isProtected); }
  return _varKind;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVar_convertTpl(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_metatype _oldTpl = NULL;
  modelica_metatype _var = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldTpl has no default value.
  // _var has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _var = tmpMeta2;
  _b = tmp4  /* pattern as ty=Boolean */;

  tmpMeta5 = mmc_mk_box2(0, omc_NSimVar_SimVar_convert(threadData, _var), mmc_mk_boolean(_b));
  _oldTpl = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _oldTpl;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVar_convertList(threadData_t *threadData, modelica_metatype _simVar_lst)
{
  modelica_metatype _oldSimVar_lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar25;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar24;
    modelica_integer tmp4;
    modelica_metatype _simVar_loopVar = 0;
    modelica_metatype _simVar;
    _simVar_loopVar = _simVar_lst;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar25 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar25;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_simVar_loopVar)) {
        _simVar = MMC_CAR(_simVar_loopVar);
        _simVar_loopVar = MMC_CDR(_simVar_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar24 = omc_NSimVar_SimVar_convert(threadData, _simVar);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar24,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar25;
  }
  _oldSimVar_lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldSimVar_lst;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVar_convert(threadData_t *threadData, modelica_metatype _simVar)
{
  modelica_metatype _oldSimVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldSimVar has no default value.
  tmpMeta1 = mmc_mk_box(32, 3, &SimCodeVar_SimVar_SIMVAR__desc, omc_NFComponentRef_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 2)))), omc_NSimVar_SimVar_convertVarKind(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 3)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 7))), omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 8))), boxvar_NFExpression_toDAE), omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 9))), boxvar_NFExpression_toDAE), omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 10))), boxvar_NFExpression_toDAE), omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 11))), boxvar_NFExpression_toDAE), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 12))), omc_NFType_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 13))), 1 /* true */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 14))), omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 15))), boxvar_NFComponentRef_toDAE), omc_NSimVar_Alias_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 16)))), _OMC_LIT83, mmc_mk_none(), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 19))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 20))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 21))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 22))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 23))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 24)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 25))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 26))), mmc_mk_boolean(0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 27))), mmc_mk_none(), mmc_mk_none(), omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 30))), boxvar_NFComponentRef_toDAE), mmc_mk_boolean(0 /* false */));
  _oldSimVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldSimVar;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVar_shiftIndex(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_integer _shift)
{
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(31));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 31*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[7] = mmc_mk_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7)))) + _shift);
  _var = tmpMeta1;

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 20)))))
  {
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(31));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_var), 31*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[20] = mmc_mk_some(mmc_mk_integer(mmc_unbox_integer(omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 20))))) + _shift));
    _var = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  return _var;
}
modelica_metatype boxptr_NSimVar_SimVar_shiftIndex(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _shift)
{
  modelica_integer tmp1;
  modelica_metatype _var = NULL;
  tmp1 = mmc_unbox_integer(_shift);
  _var = omc_NSimVar_SimVar_shiftIndex(threadData, __omcQ_24in_5Fvar, tmp1);
  /* skip box _var; NSimVar.SimVar */
  return _var;
}

DLLDirection
modelica_integer omc_NSimVar_SimVar_getIndex(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _sim_map)
{
  modelica_integer _index;
  modelica_metatype _var = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  // _var has no default value.
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
          _var = omc_UnorderedMap_getSafe(threadData, _cref, _sim_map, _OMC_LIT84);

          _index = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))));
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT85,omc_NFComponentRef_toString(threadData, _cref));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT15, tmpMeta5);

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
  return _index;
}
modelica_metatype boxptr_NSimVar_SimVar_getIndex(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _sim_map)
{
  modelica_integer _index;
  modelica_metatype out_index;
  _index = omc_NSimVar_SimVar_getIndex(threadData, _cref, _sim_map);
  out_index = mmc_mk_icon(_index);
  return out_index;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVar_getName(threadData_t *threadData, modelica_metatype _var)
{
  modelica_metatype _name = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _name = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)));
  _return: OMC_LABEL_UNUSED
  return _name;
}

DLLDirection
modelica_integer omc_NSimVar_SimVar_size(threadData_t *threadData, modelica_metatype _var)
{
  modelica_integer _s;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = omc_NFType_sizeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 13))), 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_NSimVar_SimVar_size(threadData_t *threadData, modelica_metatype _var)
{
  modelica_integer _s;
  modelica_metatype out_s;
  _s = omc_NSimVar_SimVar_size(threadData, _var);
  out_s = mmc_mk_icon(_s);
  return out_s;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVar_createFromResidualComponent(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _acc, modelica_metatype _indices_ptr, modelica_integer _varType)
{
  modelica_metatype _comp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _comp;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isResidual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))))) goto tmp2_end;
          omc_NSimVar_SimVar_traverseCreate(threadData, omc_Pointer_access(threadData, omc_NBEquation_Equation_getResidualVar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))))), _acc, _indices_ptr, (modelica_integer)_varType);
          goto tmp2_done;
        }
        case 1: {
          
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
  return _comp;
}
modelica_metatype boxptr_NSimVar_SimVar_createFromResidualComponent(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _acc, modelica_metatype _indices_ptr, modelica_metatype _varType)
{
  modelica_integer tmp1;
  modelica_metatype _comp = NULL;
  tmp1 = mmc_unbox_integer(_varType);
  _comp = omc_NSimVar_SimVar_createFromResidualComponent(threadData, __omcQ_24in_5Fcomp, _acc, _indices_ptr, tmp1);
  /* skip box _comp; NBStrongComponent */
  return _comp;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVar_traverseCreate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _acc, modelica_metatype _indices_ptr, modelica_integer _varType)
{
  modelica_metatype _var = NULL;
  modelica_metatype _simCodeIndices = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  _simCodeIndices = omc_Pointer_access(threadData, _indices_ptr);
  { /* match expression */
    modelica_integer tmp3_1;
    tmp3_1 = (modelica_integer)_varType;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(tmp3_1)) {
        case 1: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (1 != tmp3_1) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta4 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 3)))), _OMC_LIT18), omc_Pointer_access(threadData, _acc));
          omc_Pointer_update(threadData, _acc, tmpMeta4);

          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta5;

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 3)))));
          _simCodeIndices = tmpMeta6;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (2 != tmp3_1) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 8)))), _OMC_LIT18), omc_Pointer_access(threadData, _acc));
          omc_Pointer_update(threadData, _acc, tmpMeta7);

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[8] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 8)))));
          _simCodeIndices = tmpMeta9;
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (3 != tmp3_1) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 13)))), omc_NSimVar_Alias_fromBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))))), omc_Pointer_access(threadData, _acc));
          omc_Pointer_update(threadData, _acc, tmpMeta10);

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[13] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 13)))));
          _simCodeIndices = tmpMeta12;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (4 != tmp3_1) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 22)))), _OMC_LIT18), omc_Pointer_access(threadData, _acc));
          omc_Pointer_update(threadData, _acc, tmpMeta13);

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta14;

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[22] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 22)))));
          _simCodeIndices = tmpMeta15;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (5 != tmp3_1) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_cons(omc_NSimVar_SimVar_create(threadData, _var, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 24)))), _OMC_LIT18), omc_Pointer_access(threadData, _acc));
          omc_Pointer_update(threadData, _acc, tmpMeta16);

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 2)))));
          _simCodeIndices = tmpMeta17;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[24] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 24)))));
          _simCodeIndices = tmpMeta18;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta20 = stringAppend(_OMC_LIT86,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT20);
          tmpMeta19 = mmc_mk_cons(tmpMeta21, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT15, tmpMeta19);
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

  omc_Pointer_update(threadData, _indices_ptr, _simCodeIndices);
  _return: OMC_LABEL_UNUSED
  return _var;
}
modelica_metatype boxptr_NSimVar_SimVar_traverseCreate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _acc, modelica_metatype _indices_ptr, modelica_metatype _varType)
{
  modelica_integer tmp1;
  modelica_metatype _var = NULL;
  tmp1 = mmc_unbox_integer(_varType);
  _var = omc_NSimVar_SimVar_traverseCreate(threadData, __omcQ_24in_5Fvar, _acc, _indices_ptr, tmp1);
  /* skip box _var; NFVariable */
  return _var;
}

DLLDirection
modelica_metatype omc_NSimVar_SimVar_create(threadData_t *threadData, modelica_metatype _var, modelica_integer _uniqueIndex, modelica_integer _typeIndex, modelica_metatype _alias)
{
  modelica_metatype _simVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simVar has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      modelica_metatype _varKind = NULL;
      modelica_string _comment = NULL;
      modelica_string _unit = NULL;
      modelica_string _displayUnit = NULL;
      modelica_metatype _min = NULL;
      modelica_metatype _max = NULL;
      modelica_metatype _start = NULL;
      modelica_metatype _nominal = NULL;
      modelica_boolean _isFixed;
      modelica_boolean _isDiscrete;
      modelica_boolean _isProtected;
      modelica_boolean _isValueChangeable;
      modelica_integer _causality;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _varKind has no default value.
      // _comment has no default value.
      // _unit has no default value.
      // _displayUnit has no default value.
      // _min has no default value.
      // _max has no default value.
      // _start has no default value.
      // _nominal has no default value.
      // _isFixed has no default value.
      // _isDiscrete has no default value.
      // _isProtected has no default value.
      // _isValueChangeable has no default value.
      // _causality has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,10) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _comment = omc_NSimVar_SimVar_parseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 9))));

          _varKind = omc_NSimVar_SimVar_parseAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11))) ,&_unit ,&_displayUnit ,&_min ,&_max ,&_start ,&_nominal ,&_isFixed ,&_isDiscrete ,&_isProtected);

          _start = omc_NSimVar_SimVar_parseBinding(threadData, _start, _var ,&_isValueChangeable ,&_causality);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = mmc_mk_box(30, 3, &NSimVar_SimVar_SIMVAR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _varKind, _comment, _unit, _displayUnit, mmc_mk_integer(_typeIndex), _min, _max, _start, _nominal, mmc_mk_boolean(_isFixed), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))), mmc_mk_boolean(_isDiscrete), omc_NFComponentRef_getArrayCrefOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))), _alias, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))), mmc_mk_some(mmc_mk_integer((modelica_integer)_causality)), mmc_mk_some(mmc_mk_integer(_uniqueIndex)), mmc_mk_some(mmc_mk_integer(_typeIndex)), tmpMeta6, mmc_mk_boolean(_isValueChangeable), mmc_mk_boolean(_isProtected), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11)))), 4)))), 2))), mmc_mk_boolean(omc_NFVariable_isEncrypted(threadData, _var)), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT87,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT20);
          tmpMeta8 = mmc_mk_cons(tmpMeta10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT15, tmpMeta8);
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
  _simVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _simVar;
}
modelica_metatype boxptr_NSimVar_SimVar_create(threadData_t *threadData, modelica_metatype _var, modelica_metatype _uniqueIndex, modelica_metatype _typeIndex, modelica_metatype _alias)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _simVar = NULL;
  tmp1 = mmc_unbox_integer(_uniqueIndex);
  tmp2 = mmc_unbox_integer(_typeIndex);
  _simVar = omc_NSimVar_SimVar_create(threadData, _var, tmp1, tmp2, _alias);
  /* skip box _simVar; NSimVar.SimVar */
  return _simVar;
}

DLLDirection
modelica_string omc_NSimVar_SimVar_listToString(threadData_t *threadData, modelica_metatype _var_lst, modelica_string __omcQ_24in_5Fstr, modelica_boolean _printAlias)
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
  modelica_boolean tmp10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  if((!listEmpty(_var_lst)))
  {
    tmpMeta1 = stringAppend(_str,_OMC_LIT88);
    tmpMeta2 = stringAppend(tmpMeta1,intString(listLength(_var_lst)));
    tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT55);
    _str = omc_StringUtil_headline__4(threadData, tmpMeta3);

    {
      modelica_metatype _var;
      for (tmpMeta4 = _var_lst; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
      {
        _var = MMC_CAR(tmpMeta4);
        tmpMeta5 = stringAppend(_str,omc_NSimVar_SimVar_toString(threadData, _var, _OMC_LIT89));
        _str = tmpMeta5;

        tmp10 = (modelica_boolean)_printAlias;
        if(tmp10)
        {
          tmpMeta6 = stringAppend(_str,_OMC_LIT90);
          tmpMeta7 = stringAppend(tmpMeta6,omc_NSimVar_Alias_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 16)))));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT91);
          tmp11 = tmpMeta8;
        }
        else
        {
          tmpMeta9 = stringAppend(_str,_OMC_LIT91);
          tmp11 = tmpMeta9;
        }
        _str = tmp11;
      }
    }

    tmpMeta13 = stringAppend(_str,_OMC_LIT91);
    _str = tmpMeta13;
  }
  else
  {
    _str = _OMC_LIT26;
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NSimVar_SimVar_listToString(threadData_t *threadData, modelica_metatype _var_lst, modelica_metatype __omcQ_24in_5Fstr, modelica_metatype _printAlias)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_printAlias);
  _str = omc_NSimVar_SimVar_listToString(threadData, _var_lst, __omcQ_24in_5Fstr, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_string omc_NSimVar_SimVar_toString(threadData_t *threadData, modelica_metatype _var, modelica_string __omcQ_24in_5Fstr)
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
  _str = __omcQ_24in_5Fstr;
  tmpMeta1 = stringAppend(_str,_OMC_LIT92);
  tmpMeta2 = stringAppend(tmpMeta1,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))))));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT55);
  tmpMeta4 = stringAppend(tmpMeta3,omc_NFBackendExtension_VariableKind_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3)))));
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT88);
  tmpMeta6 = stringAppend(tmpMeta5,intString(omc_NSimVar_SimVar_size(threadData, _var)));
  tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT93);
  tmpMeta8 = stringAppend(tmpMeta7,omc_NFType_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 13)))));
  tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT90);
  tmpMeta10 = stringAppend(tmpMeta9,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))));
  _str = tmpMeta10;

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10)))))
  {
    tmpMeta11 = stringAppend(_str,_OMC_LIT94);
    tmpMeta12 = stringAppend(tmpMeta11,omc_NFExpression_toString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))))));
    _str = tmpMeta12;
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

