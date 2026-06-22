#include "omc_simulation_settings.h"
#include "BackendVariable.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&BackendDAE_VarKind_STATE__DER__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " = -"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,3,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Alias variables "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,16,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data " with invalid limits min "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,25,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data " > max "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,7,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,2,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6000)),_OMC_LIT7,_OMC_LIT8,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT11,2.0);
#define _OMC_LIT11 MMC_REFREALLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "undefined"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,9,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "type"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,4,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "binding"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,7,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data " != "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,4,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data ". Use value from "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,17,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT19,0.0);
#define _OMC_LIT19 MMC_REFREALLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,2,6) {&DAE_Exp_BCONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,0,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,2,5) {&DAE_Exp_SCONST__desc,_OMC_LIT23}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data " have start values "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,19,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data " both fixed and have start values "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,34,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "function traverseBackendDAEVarsWithUpdate failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,48,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "/projects/OpenModelica-session2/OMCompiler/Compiler/BackEnd/BackendVariable.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,78,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT29_6,1.781983298e9);
#define _OMC_LIT29_6 MMC_REFREALLIT(_OMC_LIT_STRUCT29_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT28,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3768)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3768)),MMC_IMMEDIATE(MMC_TAGFIXNUM(93)),_OMC_LIT29_6}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,1,3) {&DAE_Subscript_WHOLEDIM__desc,}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,17,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT7,_OMC_LIT32,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "BackendVariable.replaceVarWithWholeDim: Unknown cref"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,52,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,2,1) {_OMC_LIT35,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,3) {&BackendDAE_VarKind_VARIABLE__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,5) {&DAE_VarDirection_BIDIR__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,1,5) {&DAE_VarParallelism_NON__PARALLEL__desc,}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT19}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT40,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT41,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,1,6) {&DAE_ConnectorType_NON__CONNECTOR__desc,}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,1,6) {&DAE_VarInnerOuter_NOT__INNER__OUTER__desc,}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,3,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "Variable violating min/max constraint: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,39,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data " <= "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,4,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data ", has value: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,13,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "Variable violating min constraint: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,35,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "Variable violating max constraint: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,35,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,6) {&DAE_Type_T__BOOL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,2,25) {&DAE_Operator_AND__desc,_OMC_LIT51}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "AssertionLevel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,14,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "error"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,5,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,3,3) {&Absyn_Path_QUALIFIED__desc,_OMC_LIT53,_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,3,8) {&DAE_Exp_ENUM__LITERAL__desc,_OMC_LIT56,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "warning"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,7,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,3,3) {&Absyn_Path_QUALIFIED__desc,_OMC_LIT53,_OMC_LIT59}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,3,8) {&DAE_Exp_ENUM__LITERAL__desc,_OMC_LIT60,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "warnMinMax"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,10,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "Makes a warning assert from min/max variable attributes instead of error."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,73,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(175)),_OMC_LIT62,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT63}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "g"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,1,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,1,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,5) {&DAE_Type_T__STRING__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,3) {&DAE_Operator_ADD__desc,_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "String"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,6,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT69}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,1,3) {&DAE_TailCall_NO__TAIL__desc,}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,9,3) {&DAE_CallAttributes_CALL__ATTR__desc,_OMC_LIT67,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT71,_OMC_LIT72,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,1,6) {&ErrorTypes_MessageType_SYMBOLIC__desc,}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "Variable %s has attribute stateSelect=StateSelect.always, but can't be selected as a state."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,91,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(592)),_OMC_LIT74,_OMC_LIT8,_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,1,9) {&BackendDAE_VarKind_DISCRETE__desc,}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,1,3) {&BackendDAE_TearingSelect_NEVER__desc,}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,1,1) {_OMC_LIT78}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,6) {&DAE_Exp_BCONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,1,1) {_OMC_LIT80}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "$DERAlias"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,9,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "$CLKPRE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,7,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,1,14) {&BackendDAE_VarKind_JAC__TMP__VAR__desc,}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "$pDER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,5,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "Evaluate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,8,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,5,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,4,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "$outputAlias"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,12,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "isTimeGrid"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,10,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "isFinalConstraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,17,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "isConstraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,12,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "isLagrange"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,10,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "__OpenModelica_BoundaryCondition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,32,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "isMayer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,7,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "$res"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,4,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT98,1,10) {&BackendDAE_VarKind_PARAM__desc,}};
#define _OMC_LIT98 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,16,3) {&DAE_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,12,4) {&DAE_VariableAttributes_VAR__ATTR__INT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,8,5) {&DAE_VariableAttributes_VAR__ATTR__BOOL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,8,7) {&DAE_VariableAttributes_VAR__ATTR__STRING__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,10,8) {&DAE_VariableAttributes_VAR__ATTR__ENUMERATION__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "getVariableAttributefromType called with unsopported Type!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,59,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,9,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,41,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT105,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT106}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,1,5) {&DAE_StateSelect_DEFAULT__desc,}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
#include "util/modelica.h"

#include "BackendVariable_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_mergeMax(threadData_t *threadData, modelica_metatype _inMax1, modelica_metatype _inMax2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_mergeMax,2,0) {(void*) boxptr_BackendVariable_mergeMax,0}};
#define boxvar_BackendVariable_mergeMax MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_mergeMax)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_mergeMin(threadData_t *threadData, modelica_metatype _inMin1, modelica_metatype _inMin2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_mergeMin,2,0) {(void*) boxptr_BackendVariable_mergeMin,0}};
#define boxvar_BackendVariable_mergeMin MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_mergeMin)
PROTECTED_FUNCTION_STATIC void omc_BackendVariable_checkMinMax(threadData_t *threadData, modelica_metatype _inMin, modelica_metatype _inMax, modelica_metatype _cr1, modelica_metatype _cr2, modelica_boolean _negate);
PROTECTED_FUNCTION_STATIC void boxptr_BackendVariable_checkMinMax(threadData_t *threadData, modelica_metatype _inMin, modelica_metatype _inMax, modelica_metatype _cr1, modelica_metatype _cr2, modelica_metatype _negate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_checkMinMax,2,0) {(void*) boxptr_BackendVariable_checkMinMax,0}};
#define boxvar_BackendVariable_checkMinMax MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_checkMinMax)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_mergeMinMax(threadData_t *threadData, modelica_boolean _negate, modelica_metatype _inMin1, modelica_metatype _inMin2, modelica_metatype _inMax1, modelica_metatype _inMax2, modelica_metatype _cr, modelica_metatype _cr1, modelica_metatype *out_outMax);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_mergeMinMax(threadData_t *threadData, modelica_metatype _negate, modelica_metatype _inMin1, modelica_metatype _inMin2, modelica_metatype _inMax1, modelica_metatype _inMax2, modelica_metatype _cr, modelica_metatype _cr1, modelica_metatype *out_outMax);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_mergeMinMax,2,0) {(void*) boxptr_BackendVariable_mergeMinMax,0}};
#define boxvar_BackendVariable_mergeMinMax MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_mergeMinMax)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_getNonZeroStart(threadData_t *threadData, modelica_boolean _mustBeEqual, modelica_metatype _exp1, modelica_metatype _so, modelica_metatype _exp2, modelica_metatype _sao, modelica_metatype _globalKnownVars, modelica_metatype *out_outStartOrigin);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_getNonZeroStart(threadData_t *threadData, modelica_metatype _mustBeEqual, modelica_metatype _exp1, modelica_metatype _so, modelica_metatype _exp2, modelica_metatype _sao, modelica_metatype _globalKnownVars, modelica_metatype *out_outStartOrigin);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_getNonZeroStart,2,0) {(void*) boxptr_BackendVariable_getNonZeroStart,0}};
#define boxvar_BackendVariable_getNonZeroStart MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_getNonZeroStart)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_replaceCrefWithBindExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_replaceCrefWithBindExp,2,0) {(void*) boxptr_BackendVariable_replaceCrefWithBindExp,0}};
#define boxvar_BackendVariable_replaceCrefWithBindExp MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_replaceCrefWithBindExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_mergeStartFixed1(threadData_t *threadData, modelica_boolean _b, modelica_metatype _inVar, modelica_metatype _cr, modelica_metatype _sv, modelica_metatype _cra, modelica_metatype _sva, modelica_metatype _soa, modelica_boolean _negate, modelica_string _s4);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_mergeStartFixed1(threadData_t *threadData, modelica_metatype _b, modelica_metatype _inVar, modelica_metatype _cr, modelica_metatype _sv, modelica_metatype _cra, modelica_metatype _sva, modelica_metatype _soa, modelica_metatype _negate, modelica_metatype _s4);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_mergeStartFixed1,2,0) {(void*) boxptr_BackendVariable_mergeStartFixed1,0}};
#define boxvar_BackendVariable_mergeStartFixed1 MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_mergeStartFixed1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_startValueType(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _iTy);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_startValueType,2,0) {(void*) boxptr_BackendVariable_startValueType,0}};
#define boxvar_BackendVariable_startValueType MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_startValueType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_mergeStartFixed(threadData_t *threadData, modelica_metatype _inVar, modelica_boolean _fixed, modelica_metatype _sv, modelica_metatype _so, modelica_metatype _inAVar, modelica_boolean _fixeda, modelica_metatype _sva, modelica_metatype _soa, modelica_boolean _negate, modelica_metatype _globalKnownVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_mergeStartFixed(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _fixed, modelica_metatype _sv, modelica_metatype _so, modelica_metatype _inAVar, modelica_metatype _fixeda, modelica_metatype _sva, modelica_metatype _soa, modelica_metatype _negate, modelica_metatype _globalKnownVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_mergeStartFixed,2,0) {(void*) boxptr_BackendVariable_mergeStartFixed,0}};
#define boxvar_BackendVariable_mergeStartFixed MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_mergeStartFixed)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingisXXXFinder(threadData_t *threadData, modelica_metatype __omcQ_24in_5FinVar, modelica_metatype _v_lst, modelica_metatype _i_lst, modelica_fnptr _isFunc, modelica_metatype __omcQ_24in_5Fi, modelica_metatype *out_i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traversingisXXXFinder,2,0) {(void*) boxptr_BackendVariable_traversingisXXXFinder,0}};
#define boxvar_BackendVariable_traversingisXXXFinder MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traversingisXXXFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingisStateCount(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fv, modelica_integer __omcQ_24in_5Fcount, modelica_integer *out_count);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_traversingisStateCount(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fv, modelica_metatype __omcQ_24in_5Fcount, modelica_metatype *out_count);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traversingisStateCount,2,0) {(void*) boxptr_BackendVariable_traversingisStateCount,0}};
#define boxvar_BackendVariable_traversingisStateCount MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traversingisStateCount)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingisClockedStateVarFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVars, modelica_metatype *out_v_lst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traversingisClockedStateVarFinder,2,0) {(void*) boxptr_BackendVariable_traversingisClockedStateVarFinder,0}};
#define boxvar_BackendVariable_traversingisClockedStateVarFinder MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traversingisClockedStateVarFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingisStateVarFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVars, modelica_metatype *out_v_lst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traversingisStateVarFinder,2,0) {(void*) boxptr_BackendVariable_traversingisStateVarFinder,0}};
#define boxvar_BackendVariable_traversingisStateVarFinder MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traversingisStateVarFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingisisVarDiscreteFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVars, modelica_metatype *out_v_lst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traversingisisVarDiscreteFinder,2,0) {(void*) boxptr_BackendVariable_traversingisisVarDiscreteFinder,0}};
#define boxvar_BackendVariable_traversingisisVarDiscreteFinder MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traversingisisVarDiscreteFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingVarCrefFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inCrefs, modelica_metatype *out_outCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traversingVarCrefFinder,2,0) {(void*) boxptr_BackendVariable_traversingVarCrefFinder,0}};
#define boxvar_BackendVariable_traversingVarCrefFinder MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traversingVarCrefFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traverseBackendDAEVarsWithUpdate2(threadData_t *threadData, modelica_metatype _inVar, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traverseBackendDAEVarsWithUpdate2,2,0) {(void*) boxptr_BackendVariable_traverseBackendDAEVarsWithUpdate2,0}};
#define boxvar_BackendVariable_traverseBackendDAEVarsWithUpdate2 MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traverseBackendDAEVarsWithUpdate2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVariable_traverseBackendDAEVarsWithStop2(threadData_t *threadData, modelica_metatype _inVar, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_traverseBackendDAEVarsWithStop2(threadData_t *threadData, modelica_metatype _inVar, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traverseBackendDAEVarsWithStop2,2,0) {(void*) boxptr_BackendVariable_traverseBackendDAEVarsWithStop2,0}};
#define boxvar_BackendVariable_traverseBackendDAEVarsWithStop2 MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traverseBackendDAEVarsWithStop2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traverseBackendDAEVars2(threadData_t *threadData, modelica_metatype _inVar, modelica_fnptr _inFunc, modelica_metatype _inArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traverseBackendDAEVars2,2,0) {(void*) boxptr_BackendVariable_traverseBackendDAEVars2,0}};
#define boxvar_BackendVariable_traverseBackendDAEVars2 MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traverseBackendDAEVars2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_filterTraverse(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Facc, modelica_metatype *out_acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_filterTraverse,2,0) {(void*) boxptr_BackendVariable_filterTraverse,0}};
#define boxvar_BackendVariable_filterTraverse MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_filterTraverse)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingVarIndexInFirstSetFinder(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype __omcQ_24in_5Fdata, modelica_metatype *out_data);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traversingVarIndexInFirstSetFinder,2,0) {(void*) boxptr_BackendVariable_traversingVarIndexInFirstSetFinder,0}};
#define boxvar_BackendVariable_traversingVarIndexInFirstSetFinder MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traversingVarIndexInFirstSetFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingVarIndexFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVars, modelica_metatype _inIndices, modelica_metatype *out_outIndices);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_traversingVarIndexFinder,2,0) {(void*) boxptr_BackendVariable_traversingVarIndexFinder,0}};
#define boxvar_BackendVariable_traversingVarIndexFinder MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_traversingVarIndexFinder)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVariable_crefIndexEqualCref(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_crefIndexEqualCref(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_crefIndexEqualCref,2,0) {(void*) boxptr_BackendVariable_crefIndexEqualCref,0}};
#define boxvar_BackendVariable_crefIndexEqualCref MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_crefIndexEqualCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_computeRangeExps(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_isCalculated);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_computeRangeExps(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_isCalculated);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_computeRangeExps,2,0) {(void*) boxptr_BackendVariable_computeRangeExps,0}};
#define boxvar_BackendVariable_computeRangeExps MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_computeRangeExps)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_replaceVarWithWholeDimSubs(threadData_t *threadData, modelica_metatype _inSubscript, modelica_boolean _iPerformed, modelica_boolean *out_oPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_replaceVarWithWholeDimSubs(threadData_t *threadData, modelica_metatype _inSubscript, modelica_metatype _iPerformed, modelica_metatype *out_oPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_replaceVarWithWholeDimSubs,2,0) {(void*) boxptr_BackendVariable_replaceVarWithWholeDimSubs,0}};
#define boxvar_BackendVariable_replaceVarWithWholeDimSubs MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_replaceVarWithWholeDimSubs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_replaceVarWithWholeDim(threadData_t *threadData, modelica_metatype _inCref, modelica_boolean _iPerformed, modelica_boolean *out_oPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_replaceVarWithWholeDim(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _iPerformed, modelica_metatype *out_oPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_replaceVarWithWholeDim,2,0) {(void*) boxptr_BackendVariable_replaceVarWithWholeDim,0}};
#define boxvar_BackendVariable_replaceVarWithWholeDim MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_replaceVarWithWholeDim)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_isKnownAndParamWork(threadData_t *threadData, modelica_metatype __omcQ_24in_5FinExp, modelica_metatype __omcQ_24in_5Ftpl, modelica_metatype *out_tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_isKnownAndParamWork,2,0) {(void*) boxptr_BackendVariable_isKnownAndParamWork,0}};
#define boxvar_BackendVariable_isKnownAndParamWork MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_isKnownAndParamWork)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVariable_removeVar2(threadData_t *threadData, modelica_metatype _inCrefIndex1, modelica_metatype _inCrefIndex2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_removeVar2(threadData_t *threadData, modelica_metatype _inCrefIndex1, modelica_metatype _inCrefIndex2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_removeVar2,2,0) {(void*) boxptr_BackendVariable_removeVar2,0}};
#define boxvar_BackendVariable_removeVar2 MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_removeVar2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_deleteVars1(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVars, modelica_metatype *out_outVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_deleteVars1,2,0) {(void*) boxptr_BackendVariable_deleteVars1,0}};
#define boxvar_BackendVariable_deleteVars1 MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_deleteVars1)
PROTECTED_FUNCTION_STATIC modelica_real omc_BackendVariable_varsLoadFactor(threadData_t *threadData, modelica_metatype _inVariables, modelica_integer _inIncrease);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_varsLoadFactor(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inIncrease);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_varsLoadFactor,2,0) {(void*) boxptr_BackendVariable_varsLoadFactor,0}};
#define boxvar_BackendVariable_varsLoadFactor MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_varsLoadFactor)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararrayList(threadData_t *threadData, modelica_metatype _inArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_vararrayList,2,0) {(void*) boxptr_BackendVariable_vararrayList,0}};
#define boxvar_BackendVariable_vararrayList MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_vararrayList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararrayDelete(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_integer _inIndex, modelica_metatype *out_outVar);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_vararrayDelete(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_metatype _inIndex, modelica_metatype *out_outVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_vararrayDelete,2,0) {(void*) boxptr_BackendVariable_vararrayDelete,0}};
#define boxvar_BackendVariable_vararrayDelete MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_vararrayDelete)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararrayNth(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_integer _inIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_vararrayNth(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_metatype _inIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_vararrayNth,2,0) {(void*) boxptr_BackendVariable_vararrayNth,0}};
#define boxvar_BackendVariable_vararrayNth MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_vararrayNth)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararraySetnth(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_integer _inIndex, modelica_metatype _inVar);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_vararraySetnth(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_metatype _inIndex, modelica_metatype _inVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_vararraySetnth,2,0) {(void*) boxptr_BackendVariable_vararraySetnth,0}};
#define boxvar_BackendVariable_vararraySetnth MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_vararraySetnth)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararrayAdd(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_metatype _inVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_vararrayAdd,2,0) {(void*) boxptr_BackendVariable_vararrayAdd,0}};
#define boxvar_BackendVariable_vararrayAdd MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_vararrayAdd)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararrayEmpty(threadData_t *threadData, modelica_integer _inSize);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_vararrayEmpty(threadData_t *threadData, modelica_metatype _inSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_vararrayEmpty,2,0) {(void*) boxptr_BackendVariable_vararrayEmpty,0}};
#define boxvar_BackendVariable_vararrayEmpty MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_vararrayEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_copyArray(threadData_t *threadData, modelica_metatype _inVariableArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_copyArray,2,0) {(void*) boxptr_BackendVariable_copyArray,0}};
#define boxvar_BackendVariable_copyArray MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_copyArray)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_getAlias1(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_negated);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_getAlias1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_negated);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_getAlias1,2,0) {(void*) boxptr_BackendVariable_getAlias1,0}};
#define boxvar_BackendVariable_getAlias1 MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_getAlias1)
PROTECTED_FUNCTION_STATIC modelica_string omc_BackendVariable_getMinMaxAsserts1Str(threadData_t *threadData, modelica_metatype _omin, modelica_metatype _omax, modelica_string _varStr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_getMinMaxAsserts1Str,2,0) {(void*) boxptr_BackendVariable_getMinMaxAsserts1Str,0}};
#define boxvar_BackendVariable_getMinMaxAsserts1Str MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_getMinMaxAsserts1Str)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_getMinMaxAsserts1(threadData_t *threadData, modelica_metatype _omin, modelica_metatype _omax, modelica_metatype _e, modelica_metatype _tp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVariable_getMinMaxAsserts1,2,0) {(void*) boxptr_BackendVariable_getMinMaxAsserts1,0}};
#define boxvar_BackendVariable_getMinMaxAsserts1 MMC_REFSTRUCTLIT(boxvar_lit_BackendVariable_getMinMaxAsserts1)

DLLDirection
modelica_metatype omc_BackendVariable_scalarizeVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype __omcQ_24in_5Fscalar_5Fvars)
{
  modelica_metatype _scalar_vars = NULL;
  modelica_metatype _scalar_crefs = NULL;
  modelica_metatype _scalar_var = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _scalar_vars = __omcQ_24in_5Fscalar_5Fvars;
  // _scalar_crefs has no default value.
  // _scalar_var has no default value.
  if(omc_Types_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6)))))
  {
    _scalar_crefs = omc_ComponentReference_expandCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), 0 /* false */);

    {
      modelica_metatype _cref;
      for (tmpMeta1 = _scalar_crefs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _cref = MMC_CAR(tmpMeta1);
        _scalar_var = omc_BackendVariable_copyVarNewName(threadData, _cref, _var);

        tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(20));
        memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_scalar_var), 20*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[6] = omc_ComponentReference_crefTypeFull(threadData, _cref);
        _scalar_var = tmpMeta2;

        tmpMeta3 = mmc_mk_cons(_scalar_var, _scalar_vars);
        _scalar_vars = tmpMeta3;
      }
    }
  }
  else
  {
    tmpMeta5 = mmc_mk_cons(_var, _scalar_vars);
    _scalar_vars = tmpMeta5;
  }
  _return: OMC_LABEL_UNUSED
  return _scalar_vars;
}

DLLDirection
modelica_metatype omc_BackendVariable_scalarizeVariables(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvars)
{
  modelica_metatype _vars = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _new_var_lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vars = __omcQ_24in_5Fvars;
  // _var_lst has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_var_lst = tmpMeta1;
  _var_lst = omc_BackendVariable_varList(threadData, _vars);

  {
    modelica_metatype _var;
    for (tmpMeta2 = _var_lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var = MMC_CAR(tmpMeta2);
      _new_var_lst = omc_BackendVariable_scalarizeVar(threadData, _var, _new_var_lst);
    }
  }

  _vars = omc_BackendVariable_listVar(threadData, listReverse(_new_var_lst));
  _return: OMC_LABEL_UNUSED
  return _vars;
}

DLLDirection
modelica_metatype omc_BackendVariable_varExp2(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
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
          _exp = omc_Expression_crefExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))));
          tmpMeta1 = omc_Expression_expDer(threadData, _exp);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Expression_crefExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))));
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
modelica_metatype omc_BackendVariable_varExp(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outExp = omc_Expression_crefToExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))));
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_boolean omc_BackendVariable_isRecordVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isRec;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isRec = mmc_unbox_boolean(omc_ComponentReference_traverseCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))), boxvar_ComponentReference_crefIsRec, mmc_mk_boolean(0 /* false */)));
  _return: OMC_LABEL_UNUSED
  return _isRec;
}
modelica_metatype boxptr_BackendVariable_isRecordVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isRec;
  modelica_metatype out_isRec;
  _isRec = omc_BackendVariable_isRecordVar(threadData, _inVar);
  out_isRec = mmc_mk_icon(_isRec);
  return out_isRec;
}

DLLDirection
modelica_metatype omc_BackendVariable_setStateIndex(threadData_t *threadData, modelica_metatype _v1, modelica_integer _idx)
{
  modelica_metatype _v2 = NULL;
  modelica_metatype _derName = NULL;
  modelica_boolean _natural;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _v2 = _v1;
  // _derName has no default value.
  // _natural has no default value.
  if(omc_BackendVariable_isStateVar(threadData, _v1))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = omc_BackendVariable_getVarKind(threadData, _v1);
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,3) == 0) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
    tmp4 = mmc_unbox_integer(tmpMeta3);
    _derName = tmpMeta2;
    _natural = tmp4  /* pattern as ty=Boolean */;

    tmpMeta5 = mmc_mk_box4(4, &BackendDAE_VarKind_STATE__desc, mmc_mk_integer(_idx), _derName, mmc_mk_boolean(_natural));
    _v2 = omc_BackendVariable_setVarKind(threadData, _v1, tmpMeta5);
  }
  _return: OMC_LABEL_UNUSED
  return _v2;
}
modelica_metatype boxptr_BackendVariable_setStateIndex(threadData_t *threadData, modelica_metatype _v1, modelica_metatype _idx)
{
  modelica_integer tmp1;
  modelica_metatype _v2 = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _v2 = omc_BackendVariable_setStateIndex(threadData, _v1, tmp1);
  /* skip box _v2; BackendDAE.Var */
  return _v2;
}

DLLDirection
modelica_metatype omc_BackendVariable_transformXToXd(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _outVar = _inVar;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(20));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_ComponentReference_crefPrefixDer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))));
          _outVar = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(20));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = _OMC_LIT0;
          _outVar = tmpMeta8;
          tmpMeta1 = _outVar;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inVar;
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
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_integer omc_BackendVariable_stateSelectToInteger(threadData_t *threadData, modelica_metatype _inStateSelect)
{
  modelica_integer _prio;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prio has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inStateSelect;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) -1);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 3);
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
modelica_metatype boxptr_BackendVariable_stateSelectToInteger(threadData_t *threadData, modelica_metatype _inStateSelect)
{
  modelica_integer _prio;
  modelica_metatype out_prio;
  _prio = omc_BackendVariable_stateSelectToInteger(threadData, _inStateSelect);
  out_prio = mmc_mk_icon(_prio);
  return out_prio;
}

DLLDirection
modelica_integer omc_BackendVariable_varStateSelectPrioAlias(threadData_t *threadData, modelica_metatype _v)
{
  modelica_integer _prio;
  modelica_metatype _ss = NULL;
  modelica_boolean _knownDer;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prio has no default value.
  // _ss has no default value.
  // _knownDer has no default value.
  _ss = omc_BackendVariable_varStateSelect(threadData, _v);

  _prio = omc_BackendVariable_stateSelectToInteger(threadData, _ss);

  _knownDer = omc_BackendVariable_varHasStateDerivative(threadData, _v);

  _prio = (((modelica_integer) 2)) * (_prio);

  _prio = (_knownDer?((modelica_integer) 1) + _prio:_prio);
  _return: OMC_LABEL_UNUSED
  return _prio;
}
modelica_metatype boxptr_BackendVariable_varStateSelectPrioAlias(threadData_t *threadData, modelica_metatype _v)
{
  modelica_integer _prio;
  modelica_metatype out_prio;
  _prio = omc_BackendVariable_varStateSelectPrioAlias(threadData, _v);
  out_prio = mmc_mk_icon(_prio);
  return out_prio;
}

DLLDirection
modelica_boolean omc_BackendVariable_selfGeneratedVar(threadData_t *threadData, modelica_metatype _inCref)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = omc_StringUtil_startsWith(threadData, omc_ComponentReference_crefStr(threadData, _inCref), _OMC_LIT1);
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_selfGeneratedVar(threadData_t *threadData, modelica_metatype _inCref)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_selfGeneratedVar(threadData, _inCref);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_BackendVariable_calcAliasKey(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_integer _i;
  modelica_boolean _b;
  modelica_integer _d;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  // _b has no default value.
  // _d has no default value.
  _b = omc_ComponentReference_isRecord(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))));

  _i = (_b?((modelica_integer) -1):((modelica_integer) 0));

  _b = omc_ComponentReference_isArrayElement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))));

  _i = _i + (_b?((modelica_integer) -1):((modelica_integer) 0));

  _b = omc_BackendVariable_isProtectedVar(threadData, _inVar);

  _i = _i + (_b?((modelica_integer) 5):((modelica_integer) 0));

  _b = omc_BackendVariable_isVarConnector(threadData, _inVar);

  _i = _i + (_b?((modelica_integer) 1):((modelica_integer) 0));

  _b = omc_BackendVariable_isDummyDerVar(threadData, _inVar);

  _i = _i + (_b?((modelica_integer) 10):((modelica_integer) 0));

  _b = omc_BackendVariable_selfGeneratedVar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))));

  _i = _i + (_b?((modelica_integer) 100):((modelica_integer) 0));

  _d = omc_ComponentReference_crefDepth(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))));

  _i = _i + _d;
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_BackendVariable_calcAliasKey(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_BackendVariable_calcAliasKey(threadData, _inVar);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_mergeMax(threadData_t *threadData, modelica_metatype _inMax1, modelica_metatype _inMax2)
{
  modelica_metatype _outMax = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMax has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inMax1;
    tmp4_2 = _inMax2;
    {
      modelica_metatype _max1 = NULL;
      modelica_metatype _max2 = NULL;
      modelica_metatype _max = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _max1 has no default value.
      // _max2 has no default value.
      // _max has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _max1 = tmpMeta6;
          _max2 = tmpMeta7;
          /* Pattern matching succeeded */
          _max = omc_Expression_expMinScalar(threadData, _max1, _max2);

          _max = omc_ExpressionSimplify_simplify(threadData, _max, NULL);
          tmpMeta1 = (referenceEq(_max, _max1)?_inMax1:(referenceEq(_max, _max2)?_inMax2:mmc_mk_some(_max)));
          goto tmp3_done;
        }
        case 1: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inMax2;
          goto tmp3_done;
        }
        case 2: {
          if (!optionNone(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inMax1;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inMax1;
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
  _outMax = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outMax;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_mergeMin(threadData_t *threadData, modelica_metatype _inMin1, modelica_metatype _inMin2)
{
  modelica_metatype _outMin = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMin has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inMin1;
    tmp4_2 = _inMin2;
    {
      modelica_metatype _min1 = NULL;
      modelica_metatype _min2 = NULL;
      modelica_metatype _min = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _min1 has no default value.
      // _min2 has no default value.
      // _min has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _min1 = tmpMeta6;
          _min2 = tmpMeta7;
          /* Pattern matching succeeded */
          _min = omc_Expression_expMaxScalar(threadData, _min1, _min2);

          _min = omc_ExpressionSimplify_simplify(threadData, _min, NULL);
          tmpMeta1 = (referenceEq(_min, _min1)?_inMin1:(referenceEq(_min, _min2)?_inMin2:mmc_mk_some(_min)));
          goto tmp3_done;
        }
        case 1: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inMin2;
          goto tmp3_done;
        }
        case 2: {
          if (!optionNone(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inMin1;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inMin1;
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
  _outMin = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outMin;
}

PROTECTED_FUNCTION_STATIC void omc_BackendVariable_checkMinMax(threadData_t *threadData, modelica_metatype _inMin, modelica_metatype _inMax, modelica_metatype _cr1, modelica_metatype _cr2, modelica_boolean _negate)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;
    tmp3_1 = _inMin;
    tmp3_2 = _inMax;
    {
      modelica_metatype _min = NULL;
      modelica_metatype _max = NULL;
      modelica_string _s = NULL;
      modelica_string _s1 = NULL;
      modelica_string _s2 = NULL;
      modelica_string _s3 = NULL;
      modelica_string _s4 = NULL;
      modelica_string _s5 = NULL;
      modelica_real _rmin;
      modelica_real _rmax;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _min has no default value.
      // _max has no default value.
      // _s has no default value.
      // _s1 has no default value.
      // _s2 has no default value.
      // _s3 has no default value.
      // _s4 has no default value.
      // _s5 has no default value.
      // _rmin has no default value.
      // _rmax has no default value.
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
          modelica_metatype tmpMeta9;
          if (optionNone(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 1));
          if (optionNone(tmp3_2)) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 1));
          _min = tmpMeta5;
          _max = tmpMeta6;
          /* Pattern matching succeeded */
          _rmin = omc_Expression_toReal(threadData, _min);

          _rmax = omc_Expression_toReal(threadData, _max);

          /* Pattern-matching assignment */
          tmp7 = (_rmin > _rmax);
          if (1 /* true */ != tmp7) goto goto_1;

          _s1 = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cr1);

          _s2 = (_negate?_OMC_LIT2:_OMC_LIT3);

          _s3 = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cr2);

          _s4 = omc_ExpressionBasics_printExpStr(threadData, _min);

          _s5 = omc_ExpressionBasics_printExpStr(threadData, _max);

          tmpMeta8 = mmc_mk_cons(_OMC_LIT4, mmc_mk_cons(_s1, mmc_mk_cons(_s2, mmc_mk_cons(_s3, mmc_mk_cons(_OMC_LIT5, mmc_mk_cons(_s4, mmc_mk_cons(_OMC_LIT6, mmc_mk_cons(_s5, MMC_REFSTRUCTLIT(mmc_nil)))))))));
          _s = stringAppendList(tmpMeta8);

          tmpMeta9 = mmc_mk_cons(_s, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT10, tmpMeta9);
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
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_BackendVariable_checkMinMax(threadData_t *threadData, modelica_metatype _inMin, modelica_metatype _inMax, modelica_metatype _cr1, modelica_metatype _cr2, modelica_metatype _negate)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_negate);
  omc_BackendVariable_checkMinMax(threadData, _inMin, _inMax, _cr1, _cr2, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_mergeMinMax(threadData_t *threadData, modelica_boolean _negate, modelica_metatype _inMin1, modelica_metatype _inMin2, modelica_metatype _inMax1, modelica_metatype _inMax2, modelica_metatype _cr, modelica_metatype _cr1, modelica_metatype *out_outMax)
{
  modelica_metatype _outMin = NULL;
  modelica_metatype _outMax = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMin has no default value.
  // _outMax has no default value.
  _outMin = (_negate?omc_Util_applyOption(threadData, _inMin1, boxvar_Expression_negate):_inMin1);

  _outMax = (_negate?omc_Util_applyOption(threadData, _inMax1, boxvar_Expression_negate):_inMax1);

  _outMin = omc_BackendVariable_mergeMin(threadData, _outMin, _inMin2);

  _outMax = omc_BackendVariable_mergeMax(threadData, _outMax, _inMax2);

  omc_BackendVariable_checkMinMax(threadData, _outMin, _outMax, _cr, _cr1, _negate);
  _return: OMC_LABEL_UNUSED
  if (out_outMax) { *out_outMax = _outMax; }
  return _outMin;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_mergeMinMax(threadData_t *threadData, modelica_metatype _negate, modelica_metatype _inMin1, modelica_metatype _inMin2, modelica_metatype _inMax1, modelica_metatype _inMax2, modelica_metatype _cr, modelica_metatype _cr1, modelica_metatype *out_outMax)
{
  modelica_integer tmp1;
  modelica_metatype _outMin = NULL;
  tmp1 = mmc_unbox_integer(_negate);
  _outMin = omc_BackendVariable_mergeMinMax(threadData, tmp1, _inMin1, _inMin2, _inMax1, _inMax2, _cr, _cr1, out_outMax);
  /* skip box _outMin; Option<DAE.Exp> */
  /* skip box _outMax; Option<DAE.Exp> */
  return _outMin;
}

DLLDirection
modelica_metatype omc_BackendVariable_getMinMaxAttribute(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype *out_outMax)
{
  modelica_metatype _outMin = NULL;
  modelica_metatype _outMax = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMin has no default value.
  // _outMax has no default value.
  _outMin = omc_DAEUtil_getMinMaxValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))) ,&_outMax);
  _return: OMC_LABEL_UNUSED
  if (out_outMax) { *out_outMax = _outMax; }
  return _outMin;
}

DLLDirection
modelica_metatype omc_BackendVariable_mergeMinMaxAttribute(threadData_t *threadData, modelica_metatype _inAVar, modelica_metatype _inVar, modelica_boolean _negate)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inAVar;
    tmp4_2 = _inVar;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _attr1 = NULL;
      modelica_metatype _min1 = NULL;
      modelica_metatype _min2 = NULL;
      modelica_metatype _max1 = NULL;
      modelica_metatype _max2 = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _cr1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _var has no default value.
      // _attr has no default value.
      // _attr1 has no default value.
      // _min1 has no default value.
      // _min2 has no default value.
      // _max1 has no default value.
      // _max2 has no default value.
      // _cr has no default value.
      // _cr1 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 11));
          
          _v = tmp4_1;
          _attr = tmpMeta6;
          _var = tmp4_2;
          _attr1 = tmpMeta7;
          /* Pattern matching succeeded */
          _min1 = omc_DAEUtil_getMinMaxValues(threadData, _attr ,&_max1);

          _min2 = omc_DAEUtil_getMinMaxValues(threadData, _attr1 ,&_max2);

          _cr = omc_BackendVariable_varCref(threadData, _v);

          _cr1 = omc_BackendVariable_varCref(threadData, _var);

          _min1 = omc_BackendVariable_mergeMinMax(threadData, _negate, _min1, _min2, _max1, _max2, _cr, _cr1 ,&_max1);
          tmpMeta1 = omc_BackendVariable_setVarMinMax(threadData, _var, _min1, _max1);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inVar;
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
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_mergeMinMaxAttribute(threadData_t *threadData, modelica_metatype _inAVar, modelica_metatype _inVar, modelica_metatype _negate)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_negate);
  _outVar = omc_BackendVariable_mergeMinMaxAttribute(threadData, _inAVar, _inVar, tmp1);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_mergeNominalAttribute(threadData_t *threadData, modelica_metatype _inAVar, modelica_metatype _inVar, modelica_boolean _negate)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inAVar;
    tmp4_2 = _inVar;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e_1 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _esum = NULL;
      modelica_metatype _eaverage = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _var has no default value.
      // _e has no default value.
      // _e_1 has no default value.
      // _e1 has no default value.
      // _esum has no default value.
      // _eaverage has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          
          _v = tmp4_1;
          _var = tmp4_2;
          /* Pattern matching succeeded */
          _e = omc_BackendVariable_varNominalValue(threadData, _v);

          _e1 = omc_BackendVariable_varNominalValue(threadData, _var);

          _e_1 = (_negate?omc_Expression_negate(threadData, _e):_e);

          tmpMeta6 = mmc_mk_cons(_e_1, mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil)));
          _esum = omc_Expression_makeSum(threadData, tmpMeta6);

          _eaverage = omc_Expression_expDiv(threadData, _esum, _OMC_LIT12);

          _eaverage = omc_ExpressionSimplify_simplify(threadData, _eaverage, NULL);
          tmpMeta1 = omc_BackendVariable_setVarNominalValue(threadData, _var, _eaverage);
          goto tmp3_done;
        }
        case 1: {
          
          _v = tmp4_1;
          _var = tmp4_2;
          /* Pattern matching succeeded */
          _e = omc_BackendVariable_varNominalValue(threadData, _v);

          _e_1 = (_negate?omc_Expression_negate(threadData, _e):_e);
          tmpMeta1 = omc_BackendVariable_setVarNominalValue(threadData, _var, _e_1);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inVar;
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
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_mergeNominalAttribute(threadData_t *threadData, modelica_metatype _inAVar, modelica_metatype _inVar, modelica_metatype _negate)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_negate);
  _outVar = omc_BackendVariable_mergeNominalAttribute(threadData, _inAVar, _inVar, tmp1);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

DLLDirection
modelica_integer omc_BackendVariable_startOriginToValue(threadData_t *threadData, modelica_metatype _startOrigin)
{
  modelica_integer _i;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _startOrigin;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (9 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT13), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (4 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (7 != MMC_STRLEN(tmpMeta11) || strcmp(MMC_STRINGDATA(_OMC_LIT15), MMC_STRINGDATA(tmpMeta11)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 3);
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
  _i = tmp1;
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_BackendVariable_startOriginToValue(threadData_t *threadData, modelica_metatype _startOrigin)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_BackendVariable_startOriginToValue(threadData, _startOrigin);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_getNonZeroStart(threadData_t *threadData, modelica_boolean _mustBeEqual, modelica_metatype _exp1, modelica_metatype _so, modelica_metatype _exp2, modelica_metatype _sao, modelica_metatype _globalKnownVars, modelica_metatype *out_outStartOrigin)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outStartOrigin = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outStartOrigin has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_boolean tmp4_1;
    tmp4_1 = _mustBeEqual;
    {
      modelica_metatype _exp2_1 = NULL;
      modelica_metatype _exp1_1 = NULL;
      modelica_integer _i;
      modelica_integer _ia;
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_metatype _origin = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp2_1 has no default value.
      // _exp1_1 has no default value.
      // _i has no default value.
      // _ia has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _origin has no default value.
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
          tmp6 = omc_ExpressionBasics_expEqual(threadData, _exp1, _exp2);
          if (1 /* true */ != tmp6) goto goto_2;

          _i = omc_BackendVariable_startOriginToValue(threadData, _so);

          _ia = omc_BackendVariable_startOriginToValue(threadData, _sao);

          _origin = ((_ia > _i)?_sao:_so);
          tmpMeta[0+0] = _exp1;
          tmpMeta[0+1] = _origin;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _i = omc_BackendVariable_startOriginToValue(threadData, _so);

          _ia = omc_BackendVariable_startOriginToValue(threadData, _sao);

          /* Pattern-matching assignment */
          tmp7 = (_i == _ia);
          if (0 /* false */ != tmp7) goto goto_2;

          /* Pattern-matching assignment */
          tmp10 = (modelica_boolean)(_ia > _i);
          if(tmp10)
          {
            tmpMeta8 = mmc_mk_box2(0, _exp2, _sao);
            tmpMeta11 = tmpMeta8;
          }
          else
          {
            tmpMeta9 = mmc_mk_box2(0, _exp1, _so);
            tmpMeta11 = tmpMeta9;
          }
          tmpMeta12 = tmpMeta11;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          _exp1_1 = tmpMeta13;
          _origin = tmpMeta14;
          tmpMeta[0+0] = _exp1_1;
          tmpMeta[0+1] = _origin;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_boolean tmp25;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta18 = mmc_mk_box3(0, _globalKnownVars, mmc_mk_boolean(0 /* false */), omc_HashSet_emptyHashSet(threadData));
          tmpMeta19 = omc_Expression_traverseExpBottomUp(threadData, _exp1, boxvar_BackendVariable_replaceCrefWithBindExp, tmpMeta18, &tmpMeta15);
          _exp1_1 = tmpMeta19;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          _b1 = tmp17  /* pattern as ty=Boolean */;

          /* Pattern-matching tuple assignment */
          tmpMeta23 = mmc_mk_box3(0, _globalKnownVars, mmc_mk_boolean(0 /* false */), omc_HashSet_emptyHashSet(threadData));
          tmpMeta24 = omc_Expression_traverseExpBottomUp(threadData, _exp2, boxvar_BackendVariable_replaceCrefWithBindExp, tmpMeta23, &tmpMeta20);
          _exp2_1 = tmpMeta24;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          _b2 = tmp22  /* pattern as ty=Boolean */;

          _exp1_1 = omc_ExpressionSimplify_condsimplify(threadData, _b1, _exp1_1, NULL);

          _exp2_1 = omc_ExpressionSimplify_condsimplify(threadData, _b2, _exp2_1, NULL);

          /* Pattern-matching assignment */
          tmp25 = omc_ExpressionBasics_expEqual(threadData, _exp1_1, _exp2_1);
          if (1 /* true */ != tmp25) goto goto_2;

          _exp1_1 = (_b1?_exp1:_exp2);

          _i = omc_BackendVariable_startOriginToValue(threadData, _so);

          _ia = omc_BackendVariable_startOriginToValue(threadData, _sao);

          _origin = ((_ia > _i)?_sao:_so);
          tmpMeta[0+0] = _exp1_1;
          tmpMeta[0+1] = _origin;
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
  _outStartOrigin = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outStartOrigin) { *out_outStartOrigin = _outStartOrigin; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_getNonZeroStart(threadData_t *threadData, modelica_metatype _mustBeEqual, modelica_metatype _exp1, modelica_metatype _so, modelica_metatype _exp2, modelica_metatype _sao, modelica_metatype _globalKnownVars, modelica_metatype *out_outStartOrigin)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_mustBeEqual);
  _outExp = omc_BackendVariable_getNonZeroStart(threadData, tmp1, _exp1, _so, _exp2, _sao, _globalKnownVars, out_outStartOrigin);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outStartOrigin; Option<DAE.Exp> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_replaceCrefWithBindExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTuple;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _hs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _vars has no default value.
      // _cr has no default value.
      // _hs has no default value.
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
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _cr = tmpMeta6;
          _vars = tmpMeta7;
          _hs = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_BaseHashSet_has(threadData, _cr, _hs);
          if (0 /* false */ != tmp9) goto goto_2;

          /* Pattern-matching tuple assignment */
          tmpMeta10 = omc_BackendVariable_getVarSingle(threadData, _cr, _vars, NULL);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 7));
          if (optionNone(tmpMeta11)) goto goto_2;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          _e = tmpMeta12;

          _hs = omc_BaseHashSet_add(threadData, _cr, _hs);

          /* Pattern-matching tuple assignment */
          tmpMeta15 = mmc_mk_box3(0, _vars, mmc_mk_boolean(0 /* false */), _hs);
          tmpMeta16 = omc_Expression_traverseExpBottomUp(threadData, _e, boxvar_BackendVariable_replaceCrefWithBindExp, tmpMeta15, &tmpMeta13);
          _e = tmpMeta16;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
          _hs = tmpMeta14;
          tmpMeta17 = mmc_mk_box3(0, _vars, mmc_mk_boolean(1 /* true */), _hs);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta17;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _e = tmp4_1;
          _vars = tmpMeta18;
          _hs = tmpMeta19;
          /* Pattern matching succeeded */
          tmpMeta20 = mmc_mk_box3(0, _vars, mmc_mk_boolean(1 /* true */), _hs);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta20;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTuple;
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
  _outTuple = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_mergeStartFixed1(threadData_t *threadData, modelica_boolean _b, modelica_metatype _inVar, modelica_metatype _cr, modelica_metatype _sv, modelica_metatype _cra, modelica_metatype _sva, modelica_metatype _soa, modelica_boolean _negate, modelica_string _s4)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  { /* match expression */
    modelica_boolean tmp4_1;
    tmp4_1 = _b;
    {
      modelica_string _s = NULL;
      modelica_string _s1 = NULL;
      modelica_string _s2 = NULL;
      modelica_string _s3 = NULL;
      modelica_string _s5 = NULL;
      modelica_string _s6 = NULL;
      modelica_metatype _v = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _s has no default value.
      // _s1 has no default value.
      // _s2 has no default value.
      // _s3 has no default value.
      // _s5 has no default value.
      // _s6 has no default value.
      // _v has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _s1 = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cr);

          _s2 = (_negate?_OMC_LIT2:_OMC_LIT3);

          _s3 = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cra);

          _s5 = omc_ExpressionBasics_printExpStr(threadData, _sv);

          _s6 = omc_ExpressionBasics_printExpStr(threadData, _sva);

          tmpMeta6 = mmc_mk_cons(_OMC_LIT4, mmc_mk_cons(_s1, mmc_mk_cons(_s2, mmc_mk_cons(_s3, mmc_mk_cons(_s4, mmc_mk_cons(_s5, mmc_mk_cons(_OMC_LIT16, mmc_mk_cons(_s6, mmc_mk_cons(_OMC_LIT17, mmc_mk_cons(_s1, mmc_mk_cons(_OMC_LIT18, MMC_REFSTRUCTLIT(mmc_nil))))))))))));
          _s = stringAppendList(tmpMeta6);

          tmpMeta7 = mmc_mk_cons(_s, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT10, tmpMeta7);
          tmpMeta1 = _inVar;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _s1 = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cr);

          _s2 = (_negate?_OMC_LIT2:_OMC_LIT3);

          _s3 = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cra);

          _s5 = omc_ExpressionBasics_printExpStr(threadData, _sv);

          _s6 = omc_ExpressionBasics_printExpStr(threadData, _sva);

          tmpMeta8 = mmc_mk_cons(_OMC_LIT4, mmc_mk_cons(_s1, mmc_mk_cons(_s2, mmc_mk_cons(_s3, mmc_mk_cons(_s4, mmc_mk_cons(_s5, mmc_mk_cons(_OMC_LIT16, mmc_mk_cons(_s6, mmc_mk_cons(_OMC_LIT17, mmc_mk_cons(_s3, mmc_mk_cons(_OMC_LIT18, MMC_REFSTRUCTLIT(mmc_nil))))))))))));
          _s = stringAppendList(tmpMeta8);

          tmpMeta9 = mmc_mk_cons(_s, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT10, tmpMeta9);

          _v = omc_BackendVariable_setVarStartValue(threadData, _inVar, _sva);
          tmpMeta1 = omc_BackendVariable_setVarStartOrigin(threadData, _v, _soa);
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
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_mergeStartFixed1(threadData_t *threadData, modelica_metatype _b, modelica_metatype _inVar, modelica_metatype _cr, modelica_metatype _sv, modelica_metatype _cra, modelica_metatype _sva, modelica_metatype _soa, modelica_metatype _negate, modelica_metatype _s4)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_b);
  tmp2 = mmc_unbox_integer(_negate);
  _outVar = omc_BackendVariable_mergeStartFixed1(threadData, tmp1, _inVar, _cr, _sv, _cra, _sva, _soa, tmp2, _s4);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_startValueType(threadData_t *threadData, modelica_metatype _iExp, modelica_metatype _iTy)
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
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _e = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _e;
          goto tmp3_done;
        }
        case 1: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Types_isRealOrSubTypeReal(threadData, _iTy)) goto tmp3_end;
          tmpMeta1 = _OMC_LIT20;
          goto tmp3_done;
        }
        case 2: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Types_isIntegerOrSubTypeInteger(threadData, _iTy)) goto tmp3_end;
          tmpMeta1 = _OMC_LIT21;
          goto tmp3_done;
        }
        case 3: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Types_isBooleanOrSubTypeBoolean(threadData, _iTy)) goto tmp3_end;
          tmpMeta1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 4: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Types_isStringOrSubTypeString(threadData, _iTy)) goto tmp3_end;
          tmpMeta1 = _OMC_LIT24;
          goto tmp3_done;
        }
        case 5: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Types_isEnumerationOrSubTypeEnumeration(threadData, _iTy)) goto tmp3_end;
          tmpMeta1 = omc_Types_getNthEnumLiteral(threadData, _iTy, ((modelica_integer) 1));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT20;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_mergeStartFixed(threadData_t *threadData, modelica_metatype _inVar, modelica_boolean _fixed, modelica_metatype _sv, modelica_metatype _so, modelica_metatype _inAVar, modelica_boolean _fixeda, modelica_metatype _sva, modelica_metatype _soa, modelica_boolean _negate, modelica_metatype _globalKnownVars)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_boolean tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_boolean tmp4_5;volatile modelica_metatype tmp4_6;
    tmp4_1 = _inVar;
    tmp4_2 = _fixed;
    tmp4_3 = _sv;
    tmp4_4 = _inAVar;
    tmp4_5 = _fixeda;
    tmp4_6 = _sva;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _v1 = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _cra = NULL;
      modelica_metatype _sa = NULL;
      modelica_metatype _sb = NULL;
      modelica_metatype _e = NULL;
      modelica_integer _i;
      modelica_integer _ia;
      modelica_metatype _origin = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _tya = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _v1 has no default value.
      // _cr has no default value.
      // _cra has no default value.
      // _sa has no default value.
      // _sb has no default value.
      // _e has no default value.
      // _i has no default value.
      // _ia has no default value.
      // _origin has no default value.
      // _ty has no default value.
      // _tya has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 12; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          if (0 /* false */ != tmp4_5) goto tmp3_end;
          
          _v = tmp4_1;
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _v;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (1 /* true */ != tmp4_5) goto tmp3_end;
          if (optionNone(tmp4_6)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_6), 1));
          
          _sb = tmpMeta6;
          _v = tmp4_1;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e = (_negate?omc_Expression_negate(threadData, _sb):_sb);

          _v1 = omc_BackendVariable_setVarStartValue(threadData, _v, _e);
          tmpMeta1 = omc_BackendVariable_setVarFixed(threadData, _v1, 1 /* true */);
          goto tmp3_done;
        }
        case 2: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (1 /* true */ != tmp4_5) goto tmp3_end;
          if (!optionNone(tmp4_3)) goto tmp3_end;
          if (!optionNone(tmp4_6)) goto tmp3_end;
          
          _v = tmp4_1;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_BackendVariable_setVarFixed(threadData, _v, 1 /* true */);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta7;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (1 /* true */ != tmp4_5) goto tmp3_end;
          if (optionNone(tmp4_3)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          if (!optionNone(tmp4_6)) goto tmp3_end;
          
          _v = tmp4_1;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          omc_BackendVariable_setVarStartValueOption(threadData, _v, mmc_mk_none());
          tmpMeta1 = omc_BackendVariable_setVarFixed(threadData, _v, 1 /* true */);
          goto tmp3_done;
        }
        case 4: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (0 /* false */ != tmp4_5) goto tmp3_end;
          if (!optionNone(tmp4_3)) goto tmp3_end;
          if (!optionNone(tmp4_6)) goto tmp3_end;
          
          _v = tmp4_1;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _v;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta8;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (0 /* false */ != tmp4_5) goto tmp3_end;
          if (optionNone(tmp4_3)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          if (!optionNone(tmp4_6)) goto tmp3_end;
          
          _v = tmp4_1;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _v;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta9;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (0 /* false */ != tmp4_5) goto tmp3_end;
          if (!optionNone(tmp4_3)) goto tmp3_end;
          if (optionNone(tmp4_6)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_6), 1));
          
          _sb = tmpMeta9;
          _v = tmp4_1;
          /* Pattern matching succeeded */
          _e = (_negate?omc_Expression_negate(threadData, _sb):_sb);
          tmpMeta1 = omc_BackendVariable_setVarStartValue(threadData, _v, _e);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (0 /* false */ != tmp4_5) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 6));
          
          _v = tmp4_1;
          _ty = tmpMeta10;
          _tya = tmpMeta11;
          /* Pattern matching succeeded */
          _sa = omc_BackendVariable_startValueType(threadData, _sv, _ty);

          _sb = omc_BackendVariable_startValueType(threadData, _sva, _tya);

          _e = (_negate?omc_Expression_negate(threadData, _sb):_sb);

          _e = omc_BackendVariable_getNonZeroStart(threadData, 0 /* false */, _sa, _so, _e, _soa, _globalKnownVars ,&_origin);

          omc_BackendVariable_setVarStartValue(threadData, _v, _e);
          tmpMeta1 = omc_BackendVariable_setVarStartOrigin(threadData, _v, _origin);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          if (0 /* false */ != tmp4_5) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 6));
          
          _v = tmp4_1;
          _cr = tmpMeta12;
          _ty = tmpMeta13;
          _cra = tmpMeta14;
          _tya = tmpMeta15;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _sa = omc_BackendVariable_startValueType(threadData, _sv, _ty);

          _sb = omc_BackendVariable_startValueType(threadData, _sva, _tya);

          _e = (_negate?omc_Expression_negate(threadData, _sb):_sb);

          _i = omc_ComponentReference_crefDepth(threadData, _cr);

          _ia = omc_ComponentReference_crefDepth(threadData, _cra);
          tmpMeta1 = omc_BackendVariable_mergeStartFixed1(threadData, (_ia < _i), _v, _cr, _sa, _cra, _e, _soa, _negate, _OMC_LIT25);
          goto tmp3_done;
        }
        case 9: {
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          if (1 /* true */ != tmp4_5) goto tmp3_end;
          if (!optionNone(tmp4_3)) goto tmp3_end;
          if (!optionNone(tmp4_6)) goto tmp3_end;
          
          _v = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _v;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          if (1 /* true */ != tmp4_5) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 6));
          
          _v = tmp4_1;
          _ty = tmpMeta16;
          _tya = tmpMeta17;
          /* Pattern matching succeeded */
          _sa = omc_BackendVariable_startValueType(threadData, _sv, _ty);

          _sb = omc_BackendVariable_startValueType(threadData, _sva, _tya);

          _e = (_negate?omc_Expression_negate(threadData, _sb):_sb);

          _e = omc_BackendVariable_getNonZeroStart(threadData, 1 /* true */, _sa, _so, _e, _soa, _globalKnownVars ,&_origin);

          omc_BackendVariable_setVarStartValue(threadData, _v, _e);
          tmpMeta1 = omc_BackendVariable_setVarStartOrigin(threadData, _v, _origin);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          if (1 /* true */ != tmp4_5) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 6));
          
          _v = tmp4_1;
          _cr = tmpMeta18;
          _ty = tmpMeta19;
          _cra = tmpMeta20;
          _tya = tmpMeta21;
          /* Pattern matching succeeded */
          _sa = omc_BackendVariable_startValueType(threadData, _sv, _ty);

          _sb = omc_BackendVariable_startValueType(threadData, _sva, _tya);

          _e = (_negate?omc_Expression_negate(threadData, _sb):_sb);

          _i = omc_ComponentReference_crefDepth(threadData, _cr);

          _ia = omc_ComponentReference_crefDepth(threadData, _cra);
          tmpMeta1 = omc_BackendVariable_mergeStartFixed1(threadData, (_ia < _i), _v, _cr, _sa, _cra, _e, _soa, _negate, _OMC_LIT26);
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
      if (++tmp4 < 12) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_mergeStartFixed(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _fixed, modelica_metatype _sv, modelica_metatype _so, modelica_metatype _inAVar, modelica_metatype _fixeda, modelica_metatype _sva, modelica_metatype _soa, modelica_metatype _negate, modelica_metatype _globalKnownVars)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_fixed);
  tmp2 = mmc_unbox_integer(_fixeda);
  tmp3 = mmc_unbox_integer(_negate);
  _outVar = omc_BackendVariable_mergeStartFixed(threadData, _inVar, tmp1, _sv, _so, _inAVar, tmp2, _sva, _soa, tmp3, _globalKnownVars);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_mergeAliasVars(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inAVar, modelica_boolean _negate, modelica_metatype _globalKnownVars)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _v1 = NULL;
  modelica_metatype _v2 = NULL;
  modelica_boolean _fixed;
  modelica_boolean _fixeda;
  modelica_metatype _sv = NULL;
  modelica_metatype _sva = NULL;
  modelica_metatype _so = NULL;
  modelica_metatype _soa = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _v1 has no default value.
  // _v2 has no default value.
  // _fixed has no default value.
  // _fixeda has no default value.
  // _sv has no default value.
  // _sva has no default value.
  // _so has no default value.
  // _soa has no default value.
  _fixed = omc_BackendVariable_varFixed(threadData, _inVar);

  _fixeda = omc_BackendVariable_varFixed(threadData, _inAVar);

  _sv = omc_BackendVariable_varStartValueOption(threadData, _inVar);

  _sva = omc_BackendVariable_varStartValueOption(threadData, _inAVar);

  _so = omc_BackendVariable_varStartOrigin(threadData, _inVar);

  _soa = omc_BackendVariable_varStartOrigin(threadData, _inAVar);

  _v1 = omc_BackendVariable_mergeStartFixed(threadData, _inVar, _fixed, _sv, _so, _inAVar, _fixeda, _sva, _soa, _negate, _globalKnownVars);

  _v2 = omc_BackendVariable_mergeNominalAttribute(threadData, _inAVar, _v1, _negate);

  _outVar = omc_BackendVariable_mergeMinMaxAttribute(threadData, _inAVar, _v2, _negate);
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_mergeAliasVars(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inAVar, modelica_metatype _negate, modelica_metatype _globalKnownVars)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_negate);
  _outVar = omc_BackendVariable_mergeAliasVars(threadData, _inVar, _inAVar, tmp1, _globalKnownVars);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_mergeVariableOperations(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inOps)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _ops = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _ops has no default value.
  _ops = listReverse(_inOps);

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[10] = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 10))));
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingisXXXFinder(threadData_t *threadData, modelica_metatype __omcQ_24in_5FinVar, modelica_metatype _v_lst, modelica_metatype _i_lst, modelica_fnptr _isFunc, modelica_metatype __omcQ_24in_5Fi, modelica_metatype *out_i)
{
  modelica_metatype _inVar = NULL;
  modelica_metatype _i = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _inVar = __omcQ_24in_5FinVar;
  _i = __omcQ_24in_5Fi;
  if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isFunc), 2))), _inVar) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isFunc), 1)))) (threadData, _inVar)))
  {
    tmpMeta1 = mmc_mk_cons(_inVar, arrayGet(_v_lst,((modelica_integer) 1)) /* DAE.ASUB */);
    arrayUpdate(_v_lst, ((modelica_integer) 1), tmpMeta1);

    tmpMeta2 = mmc_mk_cons(arrayGet(_i,((modelica_integer) 1)) /* DAE.ASUB */, arrayGet(_i_lst,((modelica_integer) 1)) /* DAE.ASUB */);
    arrayUpdate(_i_lst, ((modelica_integer) 1), tmpMeta2);
  }

  arrayUpdate(_i,((modelica_integer) 1),mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(arrayGet(_i,((modelica_integer) 1)) /* DAE.ASUB */)));
  _return: OMC_LABEL_UNUSED
  if (out_i) { *out_i = _i; }
  return _inVar;
}

static modelica_metatype closure0_BackendVariable_traversingisXXXFinder(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_inVar, modelica_metatype $in_i, modelica_metatype tmp3)
{
  modelica_metatype v_lst = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype i_lst = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_fnptr isFunc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_BackendVariable_traversingisXXXFinder(thData, $in_inVar, v_lst, i_lst, isFunc, $in_i, tmp3);
}
DLLDirection
modelica_metatype omc_BackendVariable_getAllVarIndicesFromVariables(threadData_t *threadData, modelica_metatype _inVariables, modelica_fnptr _isFunc, modelica_metatype *out_i_lst)
{
  modelica_metatype _v_lst = NULL;
  modelica_metatype _i_lst = NULL;
  modelica_metatype _v_a = NULL;
  modelica_metatype _i_a = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v_lst has no default value.
  // _i_lst has no default value.
  // _v_a has no default value.
  // _i_a has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _v_a = arrayCreate(((modelica_integer) 1), tmpMeta1);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _i_a = arrayCreate(((modelica_integer) 1), tmpMeta2);

  tmpMeta4 = mmc_mk_box3(0, _v_a, _i_a, ((modelica_fnptr) _isFunc));
  omc_BackendVariable_traverseBackendDAEVars(threadData, _inVariables, (modelica_fnptr) mmc_mk_box2(0,closure0_BackendVariable_traversingisXXXFinder,tmpMeta4), arrayCreate(((modelica_integer) 1), mmc_mk_integer(((modelica_integer) 1))));

  _v_lst = arrayGet(_v_a,((modelica_integer) 1)) /* DAE.ASUB */;

  _i_lst = arrayGet(_i_a,((modelica_integer) 1)) /* DAE.ASUB */;
  _return: OMC_LABEL_UNUSED
  if (out_i_lst) { *out_i_lst = _i_lst; }
  return _v_lst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingisStateCount(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fv, modelica_integer __omcQ_24in_5Fcount, modelica_integer *out_count)
{
  modelica_metatype _v = NULL;
  modelica_integer _count;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _v = __omcQ_24in_5Fv;
  _count = __omcQ_24in_5Fcount;
  if(omc_BackendVariable_isStateVar(threadData, _v))
  {
    _count = ((modelica_integer) 1) + _count;
  }
  _return: OMC_LABEL_UNUSED
  if (out_count) { *out_count = _count; }
  return _v;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_traversingisStateCount(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fv, modelica_metatype __omcQ_24in_5Fcount, modelica_metatype *out_count)
{
  modelica_integer tmp1;
  modelica_integer _count;
  modelica_metatype _v = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fcount);
  _v = omc_BackendVariable_traversingisStateCount(threadData, __omcQ_24in_5Fv, tmp1, &_count);
  /* skip box _v; BackendDAE.Var */
  if (out_count) { *out_count = mmc_mk_icon(_count); }
  return _v;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingisClockedStateVarFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVars, modelica_metatype *out_v_lst)
{
  modelica_metatype _v = NULL;
  modelica_metatype _v_lst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  // _v_lst has no default value.
  _v = _inVar;

  _v_lst = omc_List_consOnTrue(threadData, omc_BackendVariable_isClockedStateVar(threadData, _v), _v, _inVars);
  _return: OMC_LABEL_UNUSED
  if (out_v_lst) { *out_v_lst = _v_lst; }
  return _v;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingisStateVarFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVars, modelica_metatype *out_v_lst)
{
  modelica_metatype _v = NULL;
  modelica_metatype _v_lst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  // _v_lst has no default value.
  _v = _inVar;

  _v_lst = omc_List_consOnTrue(threadData, omc_BackendVariable_isStateVar(threadData, _v), _v, _inVars);
  _return: OMC_LABEL_UNUSED
  if (out_v_lst) { *out_v_lst = _v_lst; }
  return _v;
}

DLLDirection
modelica_integer omc_BackendVariable_getNumStateVarFromVariables(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_integer _count;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _count has no default value.
  _count = mmc_unbox_integer(omc_BackendVariable_traverseBackendDAEVars(threadData, _inVariables, boxvar_BackendVariable_traversingisStateCount, mmc_mk_integer(((modelica_integer) 0))));
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_BackendVariable_getNumStateVarFromVariables(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_BackendVariable_getNumStateVarFromVariables(threadData, _inVariables);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
modelica_metatype omc_BackendVariable_getAllClockedStatesFromVariables(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_metatype _v_lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v_lst has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _v_lst = omc_BackendVariable_traverseBackendDAEVars(threadData, _inVariables, boxvar_BackendVariable_traversingisClockedStateVarFinder, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _v_lst;
}

DLLDirection
modelica_metatype omc_BackendVariable_getAllStateVarFromVariables(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_metatype _v_lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v_lst has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _v_lst = omc_BackendVariable_traverseBackendDAEVars(threadData, _inVariables, boxvar_BackendVariable_traversingisStateVarFinder, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _v_lst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingisisVarDiscreteFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVars, modelica_metatype *out_v_lst)
{
  modelica_metatype _v = NULL;
  modelica_metatype _v_lst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  // _v_lst has no default value.
  _v = _inVar;

  _v_lst = omc_List_consOnTrue(threadData, omc_BackendVariable_isVarDiscrete(threadData, _v), _v, _inVars);
  _return: OMC_LABEL_UNUSED
  if (out_v_lst) { *out_v_lst = _v_lst; }
  return _v;
}

DLLDirection
modelica_metatype omc_BackendVariable_getAllDiscreteVarFromVariables(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_metatype _v_lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v_lst has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _v_lst = omc_BackendVariable_traverseBackendDAEVars(threadData, _inVariables, boxvar_BackendVariable_traversingisisVarDiscreteFinder, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _v_lst;
}

DLLDirection
modelica_metatype omc_BackendVariable_collectVarKindVarinVariables(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVarArrays, modelica_metatype *out_outVarArrays)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outVarArrays = NULL;
  modelica_metatype _vararray = NULL;
  modelica_fnptr _checkVarKind;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  _outVarArrays = _inVarArrays;
  // _vararray has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVarArrays;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _checkVarKind = tmpMeta2;
  _vararray = tmpMeta3;

  { /* match expression */
    {
      volatile mmc_switch_type tmp7;
      int tmp8;
      tmp7 = 0;
      for (; tmp7 < 2; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_checkVarKind), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_checkVarKind), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_checkVarKind), 2))), _inVar) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_checkVarKind), 1)))) (threadData, _inVar))) goto tmp6_end;
          _vararray = omc_BackendVariable_addVar(threadData, _inVar, _vararray);
          tmpMeta9 = mmc_mk_box2(0, ((modelica_fnptr) _checkVarKind), _vararray);
          tmpMeta4 = tmpMeta9;
          goto tmp6_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta4 = _outVarArrays;
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
  _outVarArrays = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  if (out_outVarArrays) { *out_outVarArrays = _outVarArrays; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingVarCrefFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inCrefs, modelica_metatype *out_outCrefs)
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
      modelica_metatype _v = NULL;
      modelica_metatype _cr_lst = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _cr_lst has no default value.
      // _cr has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          
          _v = tmp4_1;
          _cr_lst = tmp4_2;
          /* Pattern matching succeeded */
          _cr = omc_BackendVariable_varCref(threadData, _v);
          tmpMeta6 = mmc_mk_cons(_cr, _cr_lst);
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta6;
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

DLLDirection
modelica_metatype omc_BackendVariable_getAllCrefFromVariables(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_metatype _cr_lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cr_lst has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cr_lst = omc_BackendVariable_traverseBackendDAEVars(threadData, _inVariables, boxvar_BackendVariable_traversingVarCrefFinder, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _cr_lst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traverseBackendDAEVarsWithUpdate2(threadData_t *threadData, modelica_metatype _inVar, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outArg = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outArg has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _ov = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _new_v = NULL;
      modelica_metatype _arg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ov has no default value.
      // _v has no default value.
      // _new_v has no default value.
      // _arg has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inVar;
          tmpMeta[0+1] = _inArg;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _v = tmpMeta6;
          /* Pattern matching succeeded */
          _new_v = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _v, _inArg ,&_arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _v, _inArg ,&_arg);

          _ov = (referenceEq(_v, _new_v)?_inVar:mmc_mk_some(_new_v));
          tmpMeta[0+0] = _ov;
          tmpMeta[0+1] = _arg;
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
  _outVar = tmpMeta[0+0];
  _outArg = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData_t *threadData, modelica_metatype _inVariables, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outVariables = NULL;
  modelica_metatype _outArg = NULL;
  modelica_metatype _indices = NULL;
  modelica_integer _buckets;
  modelica_integer _num_vars1;
  modelica_integer _num_vars2;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _outArg has no default value.
  // _indices has no default value.
  // _buckets has no default value.
  // _num_vars1 has no default value.
  // _num_vars2 has no default value.
  // _vars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVariables;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  _indices = tmpMeta2;
  _num_vars1 = tmp5  /* pattern as ty=Integer */;
  _vars = tmpMeta6;
  _buckets = tmp8  /* pattern as ty=Integer */;
  _num_vars2 = tmp10  /* pattern as ty=Integer */;

  if((_num_vars1 != _num_vars2))
  {
    omc_Error_addInternalError(threadData, _OMC_LIT27, _OMC_LIT29);

    MMC_THROW_INTERNAL();
  }

  _vars = omc_BackendDAEUtil_traverseArrayNoCopyWithUpdate(threadData, _vars, ((modelica_fnptr) _inFunc), boxvar_BackendVariable_traverseBackendDAEVarsWithUpdate2, _inArg, _num_vars1 ,&_outArg);

  tmpMeta11 = mmc_mk_box3(3, &BackendDAE_VariableArray_VARIABLE__ARRAY__desc, mmc_mk_integer(_num_vars1), _vars);
  tmpMeta12 = mmc_mk_box5(3, &BackendDAE_Variables_VARIABLES__desc, _indices, tmpMeta11, mmc_mk_integer(_buckets), mmc_mk_integer(_num_vars2));
  _outVariables = tmpMeta12;
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_traverseBackendDAE(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdae, modelica_fnptr _inFunc, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg)
{
  modelica_metatype _dae = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dae = __omcQ_24in_5Fdae;
  _arg = __omcQ_24in_5Farg;
  {
    modelica_metatype _syst;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dae), 2))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _syst = MMC_CAR(tmpMeta1);
      omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), ((modelica_fnptr) _inFunc), _arg ,&_arg);
    }
  }

  omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dae), 3)))), 2))), ((modelica_fnptr) _inFunc), _arg ,&_arg);

  omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dae), 3)))), 3))), ((modelica_fnptr) _inFunc), _arg ,&_arg);

  omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dae), 3)))), 4))), ((modelica_fnptr) _inFunc), _arg ,&_arg);

  omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dae), 3)))), 5))), ((modelica_fnptr) _inFunc), _arg ,&_arg);
  _return: OMC_LABEL_UNUSED
  if (out_arg) { *out_arg = _arg; }
  return _dae;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVariable_traverseBackendDAEVarsWithStop2(threadData_t *threadData, modelica_metatype _inVar, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_boolean _outContinue;
  modelica_metatype _outArg = NULL;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outContinue has no default value.
  // _outArg has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _arg = NULL;
      modelica_boolean _cont;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _arg has no default value.
      // _cont has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = _inArg;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _v = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _v, _inArg, &tmpMeta7, &tmpMeta9) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _v, _inArg, &tmpMeta7, &tmpMeta9);
          tmp8 = mmc_unbox_integer(tmpMeta7);
          _cont = tmp8  /* pattern as ty=Boolean */;
          _arg = tmpMeta9;
          tmp1_c0 = _cont;
          tmpMeta[0+1] = _arg;
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
  _outContinue = tmp1_c0;
  _outArg = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outContinue;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_traverseBackendDAEVarsWithStop2(threadData_t *threadData, modelica_metatype _inVar, modelica_fnptr _inFunc, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_boolean _outContinue;
  modelica_metatype out_outContinue;
  _outContinue = omc_BackendVariable_traverseBackendDAEVarsWithStop2(threadData, _inVar, _inFunc, _inArg, out_outArg);
  out_outContinue = mmc_mk_icon(_outContinue);
  /* skip box _outArg; polymorphic<ArgT> */
  return out_outContinue;
}

DLLDirection
modelica_metatype omc_BackendVariable_traverseBackendDAEVarsWithStop(threadData_t *threadData, modelica_metatype _inVariables, modelica_fnptr _inFunc, modelica_metatype _inArg)
{
  modelica_metatype _outArg = NULL;
  modelica_integer _num_vars;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outArg has no default value.
  // _num_vars has no default value.
  // _vars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVariables;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  _num_vars = tmp4  /* pattern as ty=Integer */;
  _vars = tmpMeta5;

  _outArg = omc_BackendDAEUtil_traverseArrayNoCopyWithStop(threadData, _vars, ((modelica_fnptr) _inFunc), boxvar_BackendVariable_traverseBackendDAEVarsWithStop2, _inArg, _num_vars);
  _return: OMC_LABEL_UNUSED
  return _outArg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traverseBackendDAEVars2(threadData_t *threadData, modelica_metatype _inVar, modelica_fnptr _inFunc, modelica_metatype _inArg)
{
  modelica_metatype _outArg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outArg has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _arg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _arg has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _v = tmpMeta6;
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _v, _inArg ,&_arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _v, _inArg ,&_arg);
          tmpMeta1 = _arg;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
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
  _outArg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outArg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_filterTraverse(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Facc, modelica_metatype *out_acc)
{
  modelica_metatype _var = NULL;
  modelica_metatype _acc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  _acc = __omcQ_24in_5Facc;
  if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _var) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _var)))
  {
    tmpMeta1 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _acc);
    _acc = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  if (out_acc) { *out_acc = _acc; }
  return _var;
}

static modelica_metatype closure1_BackendVariable_filterTraverse(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var, modelica_metatype $in_acc, modelica_metatype tmp1)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_BackendVariable_filterTraverse(thData, $in_var, func, $in_acc, tmp1);
}
DLLDirection
modelica_metatype omc_BackendVariable_filterCrefs(threadData_t *threadData, modelica_metatype _variables, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Facc)
{
  modelica_metatype _acc = NULL;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _acc = __omcQ_24in_5Facc;
  tmpMeta2 = mmc_mk_box1(0, ((modelica_fnptr) _func));
  _acc = omc_BackendVariable_traverseBackendDAEVars(threadData, _variables, (modelica_fnptr) mmc_mk_box2(0,closure1_BackendVariable_filterTraverse,tmpMeta2), _acc);
  _return: OMC_LABEL_UNUSED
  return _acc;
}

DLLDirection
modelica_metatype omc_BackendVariable_traverseBackendDAEVars(threadData_t *threadData, modelica_metatype _inVariables, modelica_fnptr _inFunc, modelica_metatype _inArg)
{
  modelica_metatype _outArg = NULL;
  modelica_integer _num_vars;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outArg has no default value.
  // _num_vars has no default value.
  // _vars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVariables;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  _num_vars = tmp4  /* pattern as ty=Integer */;
  _vars = tmpMeta5;

  _outArg = omc_BackendDAEUtil_traverseArrayNoCopy(threadData, _vars, ((modelica_fnptr) _inFunc), boxvar_BackendVariable_traverseBackendDAEVars2, _inArg, _num_vars);
  _return: OMC_LABEL_UNUSED
  return _outArg;
}

DLLDirection
modelica_metatype omc_BackendVariable_rehashVariables(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_metatype _outVariables = NULL;
  modelica_real _load;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  _load = omc_BackendVariable_varsLoadFactor(threadData, _inVariables, ((modelica_integer) 0));
  if(((_load < 0.5) || (_load > 1.0)))
  {
    _outVariables = omc_BackendVariable_emptyVarsSized(threadData, omc_BackendVariable_varsSize(threadData, _inVariables));

    _outVariables = omc_BackendVariable_addVariables(threadData, _inVariables, _outVariables);
  }
  else
  {
    _outVariables = _inVariables;
  }
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_mergeVariables(threadData_t *threadData, modelica_metatype _inVariables1, modelica_metatype _inVariables2, modelica_boolean _copy)
{
  modelica_metatype _outVariables = NULL;
  modelica_integer _num_vars;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _num_vars has no default value.
  _num_vars = omc_BackendVariable_varsSize(threadData, _inVariables2);

  if((omc_BackendVariable_varsLoadFactor(threadData, _inVariables1, _num_vars) > 1.0))
  {
    _outVariables = omc_BackendVariable_emptyVarsSized(threadData, omc_BackendVariable_varsSize(threadData, _inVariables1) + _num_vars);

    _outVariables = omc_BackendVariable_addVariables(threadData, _inVariables1, _outVariables);
  }
  else
  {
    if(_copy)
    {
      _outVariables = omc_BackendVariable_copyVariables(threadData, _inVariables1);
    }
    else
    {
      _outVariables = _inVariables1;
    }
  }

  _outVariables = omc_BackendVariable_addVariables(threadData, _inVariables2, _outVariables);
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}
modelica_metatype boxptr_BackendVariable_mergeVariables(threadData_t *threadData, modelica_metatype _inVariables1, modelica_metatype _inVariables2, modelica_metatype _copy)
{
  modelica_integer tmp1;
  modelica_metatype _outVariables = NULL;
  tmp1 = mmc_unbox_integer(_copy);
  _outVariables = omc_BackendVariable_mergeVariables(threadData, _inVariables1, _inVariables2, tmp1);
  /* skip box _outVariables; BackendDAE.Variables */
  return _outVariables;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingVarIndexInFirstSetFinder(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype __omcQ_24in_5Fdata, modelica_metatype *out_data)
{
  modelica_metatype _var = NULL;
  modelica_metatype _data = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _l = NULL;
  modelica_metatype _i = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  _data = __omcQ_24in_5Fdata;
  // _cr has no default value.
  // _vars has no default value.
  // _l has no default value.
  // _i has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _data;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _vars = tmpMeta2;
  _l = tmpMeta3;
  _i = tmpMeta4;

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp7;
      int tmp8;
      tmp7 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp6_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp7 < 2; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          _cr = omc_BackendVariable_varCref(threadData, _var);

          omc_BackendVariable_getVar(threadData, _cr, _vars, NULL);

          tmpMeta9 = mmc_mk_cons(omc_Mutable_access(threadData, _i), omc_Mutable_access(threadData, _l));
          omc_Mutable_update(threadData, _l, tmpMeta9);
          goto tmp6_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto tmp6_done;
        }
        }
        goto tmp6_end;
        tmp6_end: ;
      }
      goto goto_5;
      tmp6_done:
      (void)tmp7;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp6_done2;
      goto_5:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp7 < 2) {
        goto tmp6_top;
      }
      MMC_THROW_INTERNAL();
      tmp6_done2:;
    }
  }
  ;

  omc_Mutable_update(threadData, _i, mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(omc_Mutable_access(threadData, _i))));
  _return: OMC_LABEL_UNUSED
  if (out_data) { *out_data = _data; }
  return _var;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarIndexFromVariablesIndexInFirstSet(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inVariables2)
{
  modelica_metatype _v_lst = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v_lst has no default value.
  // _a has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box3(0, _inVariables2, omc_Mutable_create(threadData, tmpMeta1), omc_Mutable_create(threadData, mmc_mk_integer(((modelica_integer) 1))));
  tmpMeta3 = omc_BackendVariable_traverseBackendDAEVars(threadData, _inVariables, boxvar_BackendVariable_traversingVarIndexInFirstSetFinder, tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  _a = tmpMeta4;

  _v_lst = listReverse(omc_Mutable_access(threadData, _a));
  _return: OMC_LABEL_UNUSED
  return _v_lst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_traversingVarIndexFinder(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVars, modelica_metatype _inIndices, modelica_metatype *out_outIndices)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outIndices = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _indices = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _outIndices has no default value.
  // _cr has no default value.
  // _indices has no default value.
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
          _cr = omc_BackendVariable_varCref(threadData, _inVar);

          omc_BackendVariable_getVar(threadData, _cr, _inVars ,&_indices);

          _outIndices = omc_List_append__reverse(threadData, _indices, _inIndices);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _outIndices = _inIndices;
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
  if (out_outIndices) { *out_outIndices = _outIndices; }
  return _outVar;
}

static modelica_metatype closure2_BackendVariable_traversingVarIndexFinder(threadData_t *thData, modelica_metatype closure, modelica_metatype inVar, modelica_metatype inIndices, modelica_metatype tmp1)
{
  modelica_metatype inVars = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_BackendVariable_traversingVarIndexFinder(thData, inVar, inVars, inIndices, tmp1);
}
DLLDirection
modelica_metatype omc_BackendVariable_getVarIndexFromVariables(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inVariables2)
{
  modelica_metatype _v_lst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v_lst has no default value.
  tmpMeta2 = mmc_mk_box1(0, _inVariables2);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _v_lst = listReverse(omc_BackendVariable_traverseBackendDAEVars(threadData, _inVariables, (modelica_fnptr) mmc_mk_box2(0,closure2_BackendVariable_traversingVarIndexFinder,tmpMeta2), tmpMeta3));
  _return: OMC_LABEL_UNUSED
  return _v_lst;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarIndexFromVars(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype _inVariables)
{
  modelica_metatype _outIndices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outIndices = tmpMeta1;
  {
    modelica_metatype _var;
    for (tmpMeta2 = _inVars; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _var = MMC_CAR(tmpMeta2);
      omc_BackendVariable_traversingVarIndexFinder(threadData, _var, _inVariables, _outIndices ,&_outIndices);
    }
  }

  _outIndices = listReverse(_outIndices);
  _return: OMC_LABEL_UNUSED
  return _outIndices;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVariable_crefIndexEqualCref(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inIndex)
{
  modelica_boolean _outMatch;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMatch has no default value.
  // _cr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inIndex;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _cr = tmpMeta2;

  _outMatch = omc_ComponentReferenceBasics_crefEqualNoStringCompare(threadData, _cr, _inCref);
  _return: OMC_LABEL_UNUSED
  return _outMatch;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_crefIndexEqualCref(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inIndex)
{
  modelica_boolean _outMatch;
  modelica_metatype out_outMatch;
  _outMatch = omc_BackendVariable_crefIndexEqualCref(threadData, _inCref, _inIndex);
  out_outMatch = mmc_mk_icon(_outMatch);
  return out_outMatch;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVar2(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inVariables, modelica_integer *out_outIndex)
{
  modelica_metatype _outVar = NULL;
  modelica_integer _outIndex;
  modelica_metatype _indices = NULL;
  modelica_metatype _arr = NULL;
  modelica_integer _buckets;
  modelica_integer _hash_idx;
  modelica_metatype _cr_indices = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_boolean tmp11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outIndex has no default value.
  // _indices has no default value.
  // _arr has no default value.
  // _buckets has no default value.
  // _hash_idx has no default value.
  // _cr_indices has no default value.
  // _cr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVariables;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _indices = tmpMeta2;
  _arr = tmpMeta3;
  _buckets = tmp5  /* pattern as ty=Integer */;

  _hash_idx = ((modelica_integer) 1) + modelica_integer_mod(omc_ComponentReferenceBasics_hashComponentRef(threadData, _inCref), _buckets);

  _cr_indices = arrayGet(_indices,_hash_idx) /* DAE.ASUB */;

  /* Pattern-matching assignment */
  tmpMeta6 = omc_List_getMemberOnTrue(threadData, _inCref, _cr_indices, boxvar_BackendVariable_crefIndexEqualCref);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  _outIndex = tmp8  /* pattern as ty=Integer */;

  _outIndex = ((modelica_integer) 1) + _outIndex;

  /* Pattern-matching assignment */
  tmpMeta9 = omc_BackendVariable_vararrayNth(threadData, _arr, _outIndex);
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
  _outVar = tmpMeta9;
  _cr = tmpMeta10;

  /* Pattern-matching assignment */
  tmp11 = omc_ComponentReferenceBasics_crefEqualNoStringCompare(threadData, _cr, _inCref);
  if (1 /* true */ != tmp11) MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  if (out_outIndex) { *out_outIndex = _outIndex; }
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_getVar2(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inVariables, modelica_metatype *out_outIndex)
{
  modelica_integer _outIndex;
  modelica_metatype _outVar = NULL;
  _outVar = omc_BackendVariable_getVar2(threadData, _inCref, _inVariables, &_outIndex);
  /* skip box _outVar; BackendDAE.Var */
  if (out_outIndex) { *out_outIndex = mmc_mk_icon(_outIndex); }
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarLst(threadData_t *threadData, modelica_metatype _inComponentRefLst, modelica_metatype _inVariables, modelica_metatype *out_outIntegerLst)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outIntegerLst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _v = NULL;
  modelica_integer _indx;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outVarLst = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outIntegerLst = tmpMeta2;
  // _v has no default value.
  // _indx has no default value.
  if(isPresent(_outIntegerLst))
  {
    {
      modelica_metatype _cr;
      for (tmpMeta3 = _inComponentRefLst; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
      {
        _cr = MMC_CAR(tmpMeta3);
        { /* matchcontinue expression */
          {
            volatile mmc_switch_type tmp6;
            int tmp7;
            tmp6 = 0;
            MMC_TRY_INTERNAL(mmc_jumper)
            tmp5_top:
            threadData->mmc_jumper = &new_mmc_jumper;
            for (; tmp6 < 2; tmp6++) {
              switch (MMC_SWITCH_CAST(tmp6)) {
              case 0: {
                modelica_metatype tmpMeta8;
                modelica_metatype tmpMeta9;
                /* Pattern matching succeeded */
                _v = omc_BackendVariable_getVar2(threadData, _cr, _inVariables ,&_indx);

                tmpMeta8 = mmc_mk_cons(_v, _outVarLst);
                _outVarLst = tmpMeta8;

                tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_indx), _outIntegerLst);
                _outIntegerLst = tmpMeta9;
                goto tmp5_done;
              }
              case 1: {
                /* Pattern matching succeeded */
                goto tmp5_done;
              }
              }
              goto tmp5_end;
              tmp5_end: ;
            }
            goto goto_4;
            tmp5_done:
            (void)tmp6;
            MMC_RESTORE_INTERNAL(mmc_jumper);
            goto tmp5_done2;
            goto_4:;
            MMC_CATCH_INTERNAL(mmc_jumper);
            if (++tmp6 < 2) {
              goto tmp5_top;
            }
            MMC_THROW_INTERNAL();
            tmp5_done2:;
          }
        }
        ;
      }
    }
  }
  else
  {
    {
      modelica_metatype _cr;
      for (tmpMeta11 = _inComponentRefLst; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
      {
        _cr = MMC_CAR(tmpMeta11);
        { /* matchcontinue expression */
          {
            volatile mmc_switch_type tmp14;
            int tmp15;
            tmp14 = 0;
            MMC_TRY_INTERNAL(mmc_jumper)
            tmp13_top:
            threadData->mmc_jumper = &new_mmc_jumper;
            for (; tmp14 < 2; tmp14++) {
              switch (MMC_SWITCH_CAST(tmp14)) {
              case 0: {
                modelica_metatype tmpMeta16;
                /* Pattern matching succeeded */
                _v = omc_BackendVariable_getVar2(threadData, _cr, _inVariables ,&_indx);

                tmpMeta16 = mmc_mk_cons(_v, _outVarLst);
                _outVarLst = tmpMeta16;
                goto tmp13_done;
              }
              case 1: {
                /* Pattern matching succeeded */
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
            if (++tmp14 < 2) {
              goto tmp13_top;
            }
            MMC_THROW_INTERNAL();
            tmp13_done2:;
          }
        }
        ;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outIntegerLst) { *out_outIntegerLst = _outIntegerLst; }
  return _outVarLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_computeRangeExps(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_isCalculated)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _isCalculated;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _isCalculated has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_integer _stop1;
      modelica_integer _stop2;
      modelica_metatype _exp = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _stop1 has no default value.
      // _stop2 has no default value.
      // _exp has no default value.
      // _ty has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
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
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,18,4) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          if (1 != tmp10) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,0,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,18,4) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,0,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          if (1 != tmp18) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,0,1) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          _ty = tmpMeta7;
          _stop1 = tmp13  /* pattern as ty=Integer */;
          _stop2 = tmp21  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _stop2 = _stop1 + _stop2;

          tmpMeta22 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_stop2));
          tmpMeta23 = mmc_mk_box5(21, &DAE_Exp_RANGE__desc, _ty, _OMC_LIT30, mmc_mk_none(), tmpMeta22);
          _exp = tmpMeta23;
          tmpMeta[0+0] = _exp;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 0 /* false */;
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
  _isCalculated = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_isCalculated) { *out_isCalculated = _isCalculated; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_computeRangeExps(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_isCalculated)
{
  modelica_boolean _isCalculated;
  modelica_metatype _outExp = NULL;
  _outExp = omc_BackendVariable_computeRangeExps(threadData, _inExp, &_isCalculated);
  /* skip box _outExp; DAE.Exp */
  if (out_isCalculated) { *out_isCalculated = mmc_mk_icon(_isCalculated); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_replaceVarWithWholeDimSubs(threadData_t *threadData, modelica_metatype _inSubscript, modelica_boolean _iPerformed, modelica_boolean *out_oPerformed)
{
  modelica_metatype _outSubscript = NULL;
  modelica_boolean _oPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSubscript has no default value.
  // _oPerformed has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inSubscript;
    {
      modelica_metatype _sub = NULL;
      modelica_metatype _sub_exp = NULL;
      modelica_metatype _sub_exp_ = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _res = NULL;
      modelica_boolean _b;
      modelica_boolean _const;
      modelica_boolean _calcRange;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sub has no default value.
      // _sub_exp has no default value.
      // _sub_exp_ has no default value.
      // _rest has no default value.
      // _res has no default value.
      // _b has no default value.
      // _const has no default value.
      // _calcRange has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inSubscript;
          tmp1_c1 = _iPerformed;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          omc_BackendVariable_replaceVarWithWholeDimSubs(threadData, _rest, _iPerformed ,&_b);
          tmpMeta8 = mmc_mk_cons(_OMC_LIT31, _rest);
          tmpMeta[0+0] = tmpMeta8;
          tmp1_c1 = _b;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          _sub = tmpMeta9;
          _sub_exp = tmpMeta11;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          _res = omc_BackendVariable_replaceVarWithWholeDimSubs(threadData, _rest, _iPerformed ,&_b);

          _const = omc_Expression_isConst(threadData, _sub_exp);

          tmp14 = (modelica_boolean)_const;
          if(tmp14)
          {
            tmpMeta12 = mmc_mk_cons(_sub, _rest);
            tmpMeta15 = tmpMeta12;
          }
          else
          {
            tmpMeta13 = mmc_mk_cons(_OMC_LIT31, _rest);
            tmpMeta15 = tmpMeta13;
          }
          _res = tmpMeta15;
          tmpMeta[0+0] = _res;
          tmp1_c1 = (_b || (!_const));
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_boolean tmp21;
          modelica_metatype tmpMeta22;
          modelica_boolean tmp23;
          modelica_metatype tmpMeta24;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,2,1) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          _sub = tmpMeta16;
          _sub_exp = tmpMeta18;
          _rest = tmpMeta17;
          /* Pattern matching succeeded */
          _sub_exp_ = omc_BackendVariable_computeRangeExps(threadData, _sub_exp ,&_calcRange);

          _res = omc_BackendVariable_replaceVarWithWholeDimSubs(threadData, _rest, _iPerformed ,&_b);

          _const = omc_Expression_isConst(threadData, _sub_exp_);

          tmp23 = (modelica_boolean)_const;
          if(tmp23)
          {
            tmp21 = (modelica_boolean)referenceEq(_sub_exp, _sub_exp_);
            if(tmp21)
            {
              tmpMeta22 = _sub;
            }
            else
            {
              tmpMeta20 = mmc_mk_box2(5, &DAE_Subscript_INDEX__desc, _sub_exp_);
              tmpMeta22 = tmpMeta20;
            }
            tmpMeta24 = tmpMeta22;
          }
          else
          {
            tmpMeta24 = _OMC_LIT31;
          }
          tmpMeta19 = mmc_mk_cons(tmpMeta24, _rest);
          _res = tmpMeta19;
          tmpMeta[0+0] = _res;
          tmp1_c1 = ((_b || (!_const)) || _calcRange);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_boolean tmp30;
          modelica_metatype tmpMeta31;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmp4_1);
          tmpMeta26 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,3,1) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
          _sub = tmpMeta25;
          _sub_exp = tmpMeta27;
          _rest = tmpMeta26;
          /* Pattern matching succeeded */
          _res = omc_BackendVariable_replaceVarWithWholeDimSubs(threadData, _rest, _iPerformed ,&_b);

          _const = omc_Expression_isConst(threadData, _sub_exp);

          tmp30 = (modelica_boolean)_const;
          if(tmp30)
          {
            tmpMeta28 = mmc_mk_cons(_sub, _rest);
            tmpMeta31 = tmpMeta28;
          }
          else
          {
            tmpMeta29 = mmc_mk_cons(_OMC_LIT31, _rest);
            tmpMeta31 = tmpMeta29;
          }
          _res = tmpMeta31;
          tmpMeta[0+0] = _res;
          tmp1_c1 = (_b || (!_const));
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
  _outSubscript = tmpMeta[0+0];
  _oPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_oPerformed) { *out_oPerformed = _oPerformed; }
  return _outSubscript;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_replaceVarWithWholeDimSubs(threadData_t *threadData, modelica_metatype _inSubscript, modelica_metatype _iPerformed, modelica_metatype *out_oPerformed)
{
  modelica_integer tmp1;
  modelica_boolean _oPerformed;
  modelica_metatype _outSubscript = NULL;
  tmp1 = mmc_unbox_integer(_iPerformed);
  _outSubscript = omc_BackendVariable_replaceVarWithWholeDimSubs(threadData, _inSubscript, tmp1, &_oPerformed);
  /* skip box _outSubscript; list<DAE.Subscript> */
  if (out_oPerformed) { *out_oPerformed = mmc_mk_icon(_oPerformed); }
  return _outSubscript;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_replaceVarWithWholeDim(threadData_t *threadData, modelica_metatype _inCref, modelica_boolean _iPerformed, modelica_boolean *out_oPerformed)
{
  modelica_metatype _outCref = NULL;
  modelica_boolean _oPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCref has no default value.
  // _oPerformed has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inCref;
    {
      modelica_string _name = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _cr_1 = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _subs = NULL;
      modelica_metatype _subs_1 = NULL;
      modelica_boolean _b;
      int tmp4;
      // _name has no default value.
      // _cr has no default value.
      // _cr_1 has no default value.
      // _ty has no default value.
      // _subs has no default value.
      // _subs_1 has no default value.
      // _b has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _name = tmpMeta5;
          _ty = tmpMeta6;
          _subs = tmpMeta7;
          _cr = tmpMeta8;
          /* Pattern matching succeeded */
          _subs_1 = omc_BackendVariable_replaceVarWithWholeDimSubs(threadData, _subs, _iPerformed ,&_b);

          _cr_1 = omc_BackendVariable_replaceVarWithWholeDim(threadData, _cr, _b ,&_b);
          tmp10 = (modelica_boolean)(referenceEq(_subs_1, _subs) && referenceEq(_cr_1, _cr));
          if(tmp10)
          {
            tmpMeta11 = _inCref;
          }
          else
          {
            tmpMeta9 = mmc_mk_box5(3, &DAE_ComponentRef_CREF__QUAL__desc, _name, _ty, _subs_1, _cr_1);
            tmpMeta11 = tmpMeta9;
          }
          tmpMeta[0+0] = tmpMeta11;
          tmp1_c1 = _b;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _name = tmpMeta12;
          _ty = tmpMeta13;
          _subs = tmpMeta14;
          /* Pattern matching succeeded */
          _subs_1 = omc_BackendVariable_replaceVarWithWholeDimSubs(threadData, _subs, _iPerformed ,&_b);
          tmp16 = (modelica_boolean)referenceEq(_subs_1, _subs);
          if(tmp16)
          {
            tmpMeta17 = _inCref;
          }
          else
          {
            tmpMeta15 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name, _ty, _subs_1);
            tmpMeta17 = tmpMeta15;
          }
          tmpMeta[0+0] = tmpMeta17;
          tmp1_c1 = _b;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inCref;
          tmp1_c1 = _iPerformed;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inCref;
          tmp1_c1 = _iPerformed;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT34, _OMC_LIT36);
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
  _outCref = tmpMeta[0+0];
  _oPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_oPerformed) { *out_oPerformed = _oPerformed; }
  return _outCref;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_replaceVarWithWholeDim(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _iPerformed, modelica_metatype *out_oPerformed)
{
  modelica_integer tmp1;
  modelica_boolean _oPerformed;
  modelica_metatype _outCref = NULL;
  tmp1 = mmc_unbox_integer(_iPerformed);
  _outCref = omc_BackendVariable_replaceVarWithWholeDim(threadData, _inCref, tmp1, &_oPerformed);
  /* skip box _outCref; DAE.ComponentRef */
  if (out_oPerformed) { *out_oPerformed = mmc_mk_icon(_oPerformed); }
  return _outCref;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarTryHard(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _vars)
{
  modelica_metatype _var_lst_opt = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _strippedCref = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var_lst_opt has no default value.
  // _var has no default value.
  // _var_lst has no default value.
  // _strippedCref has no default value.
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
          /* Pattern matching succeeded */
          _var = omc_BackendVariable_getVarSingle(threadData, _cref, _vars, NULL);

          tmpMeta5 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
          _var_lst_opt = mmc_mk_some(tmpMeta5);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
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
                  /* Pattern matching succeeded */
                  _var_lst = omc_BackendVariable_getVar(threadData, _cref, _vars, NULL);

                  _var_lst_opt = mmc_mk_some(_var_lst);
                  goto tmp7_done;
                }
                case 1: {
                  /* Pattern matching succeeded */
                  { /* matchcontinue expression */
                    {
                      volatile mmc_switch_type tmp12;
                      int tmp13;
                      tmp12 = 0;
                      MMC_TRY_INTERNAL(mmc_jumper)
                      tmp11_top:
                      threadData->mmc_jumper = &new_mmc_jumper;
                      for (; tmp12 < 2; tmp12++) {
                        switch (MMC_SWITCH_CAST(tmp12)) {
                        case 0: {
                          modelica_metatype tmpMeta14;
                          /* Pattern matching succeeded */
                          _strippedCref = omc_ComponentReference_crefStripSubsExceptModelSubs(threadData, _cref);

                          _var = omc_BackendVariable_getVarSingle(threadData, _strippedCref, _vars, NULL);

                          tmpMeta14 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
                          _var_lst_opt = mmc_mk_some(tmpMeta14);
                          goto tmp11_done;
                        }
                        case 1: {
                          /* Pattern matching succeeded */
                          _var_lst_opt = mmc_mk_none();
                          goto tmp11_done;
                        }
                        }
                        goto tmp11_end;
                        tmp11_end: ;
                      }
                      goto goto_10;
                      tmp11_done:
                      (void)tmp12;
                      MMC_RESTORE_INTERNAL(mmc_jumper);
                      goto tmp11_done2;
                      goto_10:;
                      MMC_CATCH_INTERNAL(mmc_jumper);
                      if (++tmp12 < 2) {
                        goto tmp11_top;
                      }
                      goto goto_6;
                      tmp11_done2:;
                    }
                  }
                  ;
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
              goto goto_1;
              tmp7_done2:;
            }
          }
          ;
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
  return _var_lst_opt;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarSingle(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _inVariables, modelica_integer *out_outInteger)
{
  modelica_metatype _outVar = NULL;
  modelica_integer _outInteger;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outInteger has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _v = NULL;
      modelica_integer _indx;
      modelica_metatype _crlst = NULL;
      modelica_metatype _cr1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _indx has no default value.
      // _crlst has no default value.
      // _cr1 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BackendVariable_getVar2(threadData, _cr, _inVariables, &tmp1_c1);
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
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          /* Pattern matching succeeded */
          _crlst = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          if(isPresent(_outInteger))
          {
            /* Pattern-matching tuple assignment */
            tmpMeta10 = omc_BackendVariable_getVarLst(threadData, _crlst, _inVariables, &tmpMeta6);
            if (listEmpty(tmpMeta10)) goto goto_2;
            tmpMeta11 = MMC_CAR(tmpMeta10);
            tmpMeta12 = MMC_CDR(tmpMeta10);
            if (!listEmpty(tmpMeta12)) goto goto_2;
            _v = tmpMeta11;
            if (listEmpty(tmpMeta6)) goto goto_2;
            tmpMeta7 = MMC_CAR(tmpMeta6);
            tmpMeta8 = MMC_CDR(tmpMeta6);
            tmp9 = mmc_unbox_integer(tmpMeta7);
            if (!listEmpty(tmpMeta8)) goto goto_2;
            _indx = tmp9  /* pattern as ty=Integer */;
          }
          else
          {
            /* Pattern-matching tuple assignment */
            tmpMeta13 = omc_BackendVariable_getVarLst(threadData, _crlst, _inVariables, NULL);
            if (listEmpty(tmpMeta13)) goto goto_2;
            tmpMeta14 = MMC_CAR(tmpMeta13);
            tmpMeta15 = MMC_CDR(tmpMeta13);
            if (!listEmpty(tmpMeta15)) goto goto_2;
            _v = tmpMeta14;

            _indx = ((modelica_integer) 0);
          }
          tmpMeta[0+0] = _v;
          tmp1_c1 = _indx;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp16;
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
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta17 = omc_BackendVariable_replaceVarWithWholeDim(threadData, _cr, 0 /* false */, &tmp16);
          _cr1 = tmpMeta17;
          if (1 /* true */ != tmp16) goto goto_2;

          _crlst = omc_ComponentReference_expandCref(threadData, _cr1, 1 /* true */);

          if(isPresent(_outInteger))
          {
            /* Pattern-matching tuple assignment */
            tmpMeta22 = omc_BackendVariable_getVarLst(threadData, _crlst, _inVariables, &tmpMeta18);
            if (listEmpty(tmpMeta22)) goto goto_2;
            tmpMeta23 = MMC_CAR(tmpMeta22);
            tmpMeta24 = MMC_CDR(tmpMeta22);
            if (!listEmpty(tmpMeta24)) goto goto_2;
            _v = tmpMeta23;
            if (listEmpty(tmpMeta18)) goto goto_2;
            tmpMeta19 = MMC_CAR(tmpMeta18);
            tmpMeta20 = MMC_CDR(tmpMeta18);
            tmp21 = mmc_unbox_integer(tmpMeta19);
            if (!listEmpty(tmpMeta20)) goto goto_2;
            _indx = tmp21  /* pattern as ty=Integer */;
          }
          else
          {
            /* Pattern-matching tuple assignment */
            tmpMeta25 = omc_BackendVariable_getVarLst(threadData, _crlst, _inVariables, NULL);
            if (listEmpty(tmpMeta25)) goto goto_2;
            tmpMeta26 = MMC_CAR(tmpMeta25);
            tmpMeta27 = MMC_CDR(tmpMeta25);
            if (!listEmpty(tmpMeta27)) goto goto_2;
            _v = tmpMeta26;

            _indx = ((modelica_integer) 0);
          }
          tmpMeta[0+0] = _v;
          tmp1_c1 = _indx;
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
  _outInteger = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outInteger) { *out_outInteger = _outInteger; }
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_getVarSingle(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _inVariables, modelica_metatype *out_outInteger)
{
  modelica_integer _outInteger;
  modelica_metatype _outVar = NULL;
  _outVar = omc_BackendVariable_getVarSingle(threadData, _cr, _inVariables, &_outInteger);
  /* skip box _outVar; BackendDAE.Var */
  if (out_outInteger) { *out_outInteger = mmc_mk_icon(_outInteger); }
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVar(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _inVariables, modelica_metatype *out_outIntegerLst)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIntegerLst = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
  // _outIntegerLst has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _v = NULL;
      modelica_integer _indx;
      modelica_metatype _indxs = NULL;
      modelica_metatype _vLst = NULL;
      modelica_metatype _crlst = NULL;
      modelica_metatype _cr1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _indx has no default value.
      // _indxs has no default value.
      // _vLst has no default value.
      // _crlst has no default value.
      // _cr1 has no default value.
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
          /* Pattern matching succeeded */
          _v = omc_BackendVariable_getVar2(threadData, _cr, _inVariables ,&_indx);
          tmpMeta6 = mmc_mk_cons(_v, MMC_REFSTRUCTLIT(mmc_nil));
          tmp9 = (modelica_boolean)isPresent(_outIntegerLst);
          if(tmp9)
          {
            tmpMeta7 = mmc_mk_cons(mmc_mk_integer(_indx), MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta10 = tmpMeta7;
          }
          else
          {
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta10 = tmpMeta8;
          }
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta10;
          goto tmp3_done;
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
          /* Pattern matching succeeded */
          _crlst = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          if(isPresent(_outIntegerLst))
          {
            /* Pattern-matching tuple assignment */
            tmpMeta12 = omc_BackendVariable_getVarLst(threadData, _crlst, _inVariables, &tmpMeta11);
            if (listEmpty(tmpMeta12)) goto goto_2;
            tmpMeta13 = MMC_CAR(tmpMeta12);
            tmpMeta14 = MMC_CDR(tmpMeta12);
            _vLst = tmpMeta12;
            _indxs = tmpMeta11;
          }
          else
          {
            /* Pattern-matching tuple assignment */
            tmpMeta15 = omc_BackendVariable_getVarLst(threadData, _crlst, _inVariables, NULL);
            if (listEmpty(tmpMeta15)) goto goto_2;
            tmpMeta16 = MMC_CAR(tmpMeta15);
            tmpMeta17 = MMC_CDR(tmpMeta15);
            _vLst = tmpMeta15;

            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            _indxs = tmpMeta18;
          }
          tmpMeta[0+0] = _vLst;
          tmpMeta[0+1] = _indxs;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta20 = omc_BackendVariable_replaceVarWithWholeDim(threadData, _cr, 0 /* false */, &tmp19);
          _cr1 = tmpMeta20;
          if (1 /* true */ != tmp19) goto goto_2;

          _crlst = omc_ComponentReference_expandCref(threadData, _cr1, 1 /* true */);

          if(isPresent(_outIntegerLst))
          {
            /* Pattern-matching tuple assignment */
            tmpMeta22 = omc_BackendVariable_getVarLst(threadData, _crlst, _inVariables, &tmpMeta21);
            if (listEmpty(tmpMeta22)) goto goto_2;
            tmpMeta23 = MMC_CAR(tmpMeta22);
            tmpMeta24 = MMC_CDR(tmpMeta22);
            _vLst = tmpMeta22;
            _indxs = tmpMeta21;
          }
          else
          {
            /* Pattern-matching tuple assignment */
            tmpMeta25 = omc_BackendVariable_getVarLst(threadData, _crlst, _inVariables, NULL);
            if (listEmpty(tmpMeta25)) goto goto_2;
            tmpMeta26 = MMC_CAR(tmpMeta25);
            tmpMeta27 = MMC_CDR(tmpMeta25);
            _vLst = tmpMeta25;

            tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
            _indxs = tmpMeta28;
          }
          tmpMeta[0+0] = _vLst;
          tmpMeta[0+1] = _indxs;
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
  _outVarLst = tmpMeta[0+0];
  _outIntegerLst = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outIntegerLst) { *out_outIntegerLst = _outIntegerLst; }
  return _outVarLst;
}

DLLDirection
modelica_boolean omc_BackendVariable_containsCref(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _inVariables)
{
  modelica_boolean _outB;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outB has no default value.
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
          omc_BackendVariable_getVar(threadData, _cr, _inVariables, NULL);

          _outB = 1 /* true */;
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _outB = 0 /* false */;
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
  return _outB;
}
modelica_metatype boxptr_BackendVariable_containsCref(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _inVariables)
{
  modelica_boolean _outB;
  modelica_metatype out_outB;
  _outB = omc_BackendVariable_containsCref(threadData, _cr, _inVariables);
  out_outB = mmc_mk_icon(_outB);
  return out_outB;
}

DLLDirection
modelica_boolean omc_BackendVariable_containsVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _inVariables)
{
  modelica_boolean _outB;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outB = omc_BackendVariable_containsCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _inVariables);
  _return: OMC_LABEL_UNUSED
  return _outB;
}
modelica_metatype boxptr_BackendVariable_containsVar(threadData_t *threadData, modelica_metatype _var, modelica_metatype _inVariables)
{
  modelica_boolean _outB;
  modelica_metatype out_outB;
  _outB = omc_BackendVariable_containsVar(threadData, _var, _inVariables);
  out_outB = mmc_mk_icon(_outB);
  return out_outB;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarShared(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inShared, modelica_metatype *out_outIntegerLst)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIntegerLst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
  // _outIntegerLst has no default value.
  _outVarLst = omc_BackendVariable_getVar(threadData, _inComponentRef, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 2))) ,&_outIntegerLst);
  _return: OMC_LABEL_UNUSED
  if (out_outIntegerLst) { *out_outIntegerLst = _outIntegerLst; }
  return _outVarLst;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarDAE(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inEqSystem, modelica_metatype *out_outIntegerLst)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype _outIntegerLst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
  // _outIntegerLst has no default value.
  _outVarLst = omc_BackendVariable_getVar(threadData, _inComponentRef, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqSystem), 2))) ,&_outIntegerLst);
  _return: OMC_LABEL_UNUSED
  if (out_outIntegerLst) { *out_outIntegerLst = _outIntegerLst; }
  return _outVarLst;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarSharedAt(threadData_t *threadData, modelica_integer _inInteger, modelica_metatype _inShared)
{
  modelica_metatype _outVar = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  _outVar = omc_BackendVariable_getVarAt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 2))), _inInteger);
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_getVarSharedAt(threadData_t *threadData, modelica_metatype _inInteger, modelica_metatype _inShared)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_inInteger);
  _outVar = omc_BackendVariable_getVarSharedAt(threadData, tmp1, _inShared);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarAtIndexFirst(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inVariables)
{
  modelica_metatype _outVar = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  _outVar = omc_BackendVariable_getVarAt(threadData, _inVariables, _inIndex);
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_getVarAtIndexFirst(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inVariables)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outVar = omc_BackendVariable_getVarAtIndexFirst(threadData, tmp1, _inVariables);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarAt(threadData_t *threadData, modelica_metatype _inVariables, modelica_integer _inIndex, modelica_metatype _inVar)
{
  modelica_metatype _outVariables = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVariables = _inVariables;
  omc_BackendVariable_vararraySetnth(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 3))), _inIndex, _inVar);
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}
modelica_metatype boxptr_BackendVariable_setVarAt(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inIndex, modelica_metatype _inVar)
{
  modelica_integer tmp1;
  modelica_metatype _outVariables = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outVariables = omc_BackendVariable_setVarAt(threadData, _inVariables, tmp1, _inVar);
  /* skip box _outVariables; BackendDAE.Variables */
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarAt(threadData_t *threadData, modelica_metatype _inVariables, modelica_integer _inIndex)
{
  modelica_metatype _outVar = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  _outVar = omc_BackendVariable_vararrayNth(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 3))), _inIndex);
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_getVarAt(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inIndex)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outVar = omc_BackendVariable_getVarAt(threadData, _inVariables, tmp1);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_addVariables(threadData_t *threadData, modelica_metatype _inSrcVars, modelica_metatype _inDestVars)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype _vars = NULL;
  modelica_integer _num_vars;
  modelica_metatype _var = NULL;
  modelica_metatype _ovar = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVars = _inDestVars;
  // _vars has no default value.
  // _num_vars has no default value.
  // _var has no default value.
  // _ovar has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inSrcVars;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  _num_vars = tmp4  /* pattern as ty=Integer */;
  _vars = tmpMeta5;

  tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = _num_vars;
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
    {
      _ovar = arrayGet(_vars,_i) /* DAE.ASUB */;

      if(isSome(_ovar))
      {
        /* Pattern-matching assignment */
        tmpMeta6 = _ovar;
        if (optionNone(tmpMeta6)) MMC_THROW_INTERNAL();
        tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
        _var = tmpMeta7;

        _outVars = omc_BackendVariable_addVar(threadData, _var, _outVars);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outVars;
}

DLLDirection
modelica_metatype omc_BackendVariable_addNewVar(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVariables)
{
  modelica_metatype _outVariables = NULL;
  modelica_metatype _hashvec = NULL;
  modelica_metatype _varr = NULL;
  modelica_integer _bsize;
  modelica_integer _num_vars;
  modelica_integer _idx;
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _hashvec has no default value.
  // _varr has no default value.
  // _bsize has no default value.
  // _num_vars has no default value.
  // _idx has no default value.
  // _indices has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVariables;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  _hashvec = tmpMeta2;
  _varr = tmpMeta3;
  _bsize = tmp5  /* pattern as ty=Integer */;
  _num_vars = tmp7  /* pattern as ty=Integer */;

  _idx = ((modelica_integer) 1) + modelica_integer_mod(omc_ComponentReferenceBasics_hashComponentRef(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2)))), _bsize);

  _varr = omc_BackendVariable_vararrayAdd(threadData, _varr, _inVar);

  _indices = arrayGet(_hashvec,_idx) /* DAE.ASUB */;

  tmpMeta9 = mmc_mk_box3(3, &BackendDAE_CrefIndex_CREFINDEX__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))), mmc_mk_integer(_num_vars));
  tmpMeta8 = mmc_mk_cons(tmpMeta9, _indices);
  arrayUpdate(_hashvec, _idx, tmpMeta8);

  tmpMeta10 = mmc_mk_box5(3, &BackendDAE_Variables_VARIABLES__desc, _hashvec, _varr, mmc_mk_integer(_bsize), mmc_mk_integer(((modelica_integer) 1) + _num_vars));
  _outVariables = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_addNewVars(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype _inVariables)
{
  modelica_metatype _outVariables = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  _outVariables = omc_List_fold(threadData, _inVars, boxvar_BackendVariable_addNewVar, _inVariables);
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_addVars(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype _inVariables)
{
  modelica_metatype _outVariables = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  _outVariables = omc_List_fold(threadData, _inVars, boxvar_BackendVariable_addVar, _inVariables);
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_addVar(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVariables)
{
  modelica_metatype _outVariables = NULL;
  modelica_integer _hash_idx;
  modelica_integer _arr_idx;
  modelica_metatype _indices = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVariables = _inVariables;
  // _hash_idx has no default value.
  // _arr_idx has no default value.
  // _indices has no default value.
  _hash_idx = ((modelica_integer) 1) + modelica_integer_mod(omc_ComponentReferenceBasics_hashComponentRef(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 4)))));

  _indices = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 2))), _hash_idx);

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
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = omc_List_getMemberOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))), _indices, boxvar_BackendVariable_crefIndexEqualCref);
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          _arr_idx = tmp7  /* pattern as ty=Integer */;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_outVariables), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = omc_BackendVariable_vararraySetnth(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 3))), ((modelica_integer) 1) + _arr_idx, _inVar);
          _outVariables = tmpMeta8;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_outVariables), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = omc_BackendVariable_vararrayAdd(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVariables), 3))), _inVar);
          _outVariables = tmpMeta9;

          tmpMeta11 = mmc_mk_box3(3, &BackendDAE_CrefIndex_CREFINDEX__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVariables), 5))));
          tmpMeta10 = mmc_mk_cons(tmpMeta11, _indices);
          arrayUpdate((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVariables), 2))), _hash_idx, tmpMeta10);

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_outVariables), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[5] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVariables), 5)))));
          _outVariables = tmpMeta12;
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
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_addNewAliasVarDAE(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inShared)
{
  modelica_metatype _outShared = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outShared has no default value.
  _outShared = omc_BackendDAEUtil_setSharedAliasVars(threadData, _inShared, omc_BackendVariable_addNewVar(threadData, _inVar, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 5)))));
  _return: OMC_LABEL_UNUSED
  return _outShared;
}

DLLDirection
modelica_metatype omc_BackendVariable_addAliasVarDAE(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inShared)
{
  modelica_metatype _outShared = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outShared has no default value.
  _outShared = omc_BackendDAEUtil_setSharedAliasVars(threadData, _inShared, omc_BackendVariable_addVar(threadData, _inVar, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 5)))));
  _return: OMC_LABEL_UNUSED
  return _outShared;
}

DLLDirection
modelica_metatype omc_BackendVariable_addNewGlobalKnownVarDAE(threadData_t *threadData, modelica_metatype _inGlobalKnownVar, modelica_metatype _inShared)
{
  modelica_metatype _outShared = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outShared has no default value.
  _outShared = omc_BackendDAEUtil_setSharedGlobalKnownVars(threadData, _inShared, omc_BackendVariable_addNewVar(threadData, _inGlobalKnownVar, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 2)))));
  _return: OMC_LABEL_UNUSED
  return _outShared;
}

DLLDirection
modelica_metatype omc_BackendVariable_addGlobalKnownVarDAE(threadData_t *threadData, modelica_metatype _inGlobalKnownVar, modelica_metatype _inShared)
{
  modelica_metatype _outShared = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outShared has no default value.
  _outShared = omc_BackendDAEUtil_setSharedGlobalKnownVars(threadData, _inShared, omc_BackendVariable_addVar(threadData, _inGlobalKnownVar, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 2)))));
  _return: OMC_LABEL_UNUSED
  return _outShared;
}

DLLDirection
modelica_metatype omc_BackendVariable_addVarsDAE(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype _inEqSystem)
{
  modelica_metatype _outEqSystem = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outEqSystem = _inEqSystem;
  _outEqSystem = omc_List_fold(threadData, _inVars, boxvar_BackendVariable_addVarDAE, _outEqSystem);
  _return: OMC_LABEL_UNUSED
  return _outEqSystem;
}

DLLDirection
modelica_metatype omc_BackendVariable_addVarDAE(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inEqSystem)
{
  modelica_metatype _outEqSystem = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqSystem has no default value.
  _outEqSystem = omc_BackendDAEUtil_setEqSystVars(threadData, _inEqSystem, omc_BackendVariable_addVar(threadData, _inVar, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqSystem), 2)))));
  _return: OMC_LABEL_UNUSED
  return _outEqSystem;
}

DLLDirection
modelica_metatype omc_BackendVariable_makeVar(threadData_t *threadData, modelica_metatype _cr)
{
  modelica_metatype _v = NULL;
  modelica_metatype _tp = NULL;
  modelica_metatype _dims = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  _tp = omc_ComponentReference_crefLastType(threadData, _cr);
  _dims = omc_Expression_arrayDimension(threadData, _tp);
  tmpMeta1 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _cr, _OMC_LIT37, _OMC_LIT38, _OMC_LIT39, omc_Types_arrayElementType(threadData, _tp), mmc_mk_none(), mmc_mk_none(), _dims, _OMC_LIT42, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT43, _OMC_LIT44, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
  _v = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _v;
}

DLLDirection
modelica_boolean omc_BackendVariable_existsAnyVar(threadData_t *threadData, modelica_metatype _inComponentRefs, modelica_metatype _inVariables, modelica_boolean _skipDiscrete)
{
  modelica_boolean _outExists;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outExists = 0 /* false */;
  {
    modelica_metatype _cref;
    for (tmpMeta1 = _inComponentRefs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _cref = MMC_CAR(tmpMeta1);
      if((omc_BackendVariable_existsVar(threadData, _cref, _inVariables, _skipDiscrete) && (!omc_BackendVariable_isState(threadData, _cref, _inVariables))))
      {
        _outExists = 1 /* true */;

        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outExists;
}
modelica_metatype boxptr_BackendVariable_existsAnyVar(threadData_t *threadData, modelica_metatype _inComponentRefs, modelica_metatype _inVariables, modelica_metatype _skipDiscrete)
{
  modelica_integer tmp1;
  modelica_boolean _outExists;
  modelica_metatype out_outExists;
  tmp1 = mmc_unbox_integer(_skipDiscrete);
  _outExists = omc_BackendVariable_existsAnyVar(threadData, _inComponentRefs, _inVariables, tmp1);
  out_outExists = mmc_mk_icon(_outExists);
  return out_outExists;
}

DLLDirection
modelica_boolean omc_BackendVariable_existsVar(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inVariables, modelica_boolean _skipDiscrete)
{
  modelica_boolean _outExists;
  modelica_metatype _varlst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExists has no default value.
  // _varlst has no default value.
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
          _varlst = omc_BackendVariable_getVar(threadData, _inComponentRef, _inVariables, NULL);

          _varlst = (_skipDiscrete?omc_List_select(threadData, _varlst, boxvar_BackendVariable_isVarNonDiscrete):_varlst);

          _outExists = (!listEmpty(_varlst));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _outExists = 0 /* false */;
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
  return _outExists;
}
modelica_metatype boxptr_BackendVariable_existsVar(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inVariables, modelica_metatype _skipDiscrete)
{
  modelica_integer tmp1;
  modelica_boolean _outExists;
  modelica_metatype out_outExists;
  tmp1 = mmc_unbox_integer(_skipDiscrete);
  _outExists = omc_BackendVariable_existsVar(threadData, _inComponentRef, _inVariables, tmp1);
  out_outExists = mmc_mk_icon(_outExists);
  return out_outExists;
}

DLLDirection
modelica_boolean omc_BackendVariable_crefIsParam(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inVariables)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_boolean _outBool;
  modelica_metatype _varlst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outBool = 1 /* true */;
  // _varlst has no default value.
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
          /* Pattern matching succeeded */
          _varlst = omc_BackendVariable_getVar(threadData, _inComponentRef, _inVariables, NULL);

          {
            modelica_metatype _var;
            for (tmpMeta5 = _varlst; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _var = MMC_CAR(tmpMeta5);
              _outBool = omc_BackendVariable_isParam(threadData, _var);

              if((!_outBool))
              {
                goto _return;
              }
            }
          }
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _outBool = 0 /* false */;
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
  threadData->mmc_jumper = old_mmc_jumper;
  return _outBool;
}
modelica_metatype boxptr_BackendVariable_crefIsParam(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inVariables)
{
  modelica_boolean _outBool;
  modelica_metatype out_outBool;
  _outBool = omc_BackendVariable_crefIsParam(threadData, _inComponentRef, _inVariables);
  out_outBool = mmc_mk_icon(_outBool);
  return out_outBool;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_isKnownAndParamWork(threadData_t *threadData, modelica_metatype __omcQ_24in_5FinExp, modelica_metatype __omcQ_24in_5Ftpl, modelica_metatype *out_tpl)
{
  modelica_metatype _inExp = NULL;
  modelica_metatype _tpl = NULL;
  modelica_boolean _outBoolean;
  modelica_metatype _knownVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _inExp = __omcQ_24in_5FinExp;
  _tpl = __omcQ_24in_5Ftpl;
  // _outBoolean has no default value.
  // _knownVars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _outBoolean = tmp3  /* pattern as ty=Boolean */;
  _knownVars = tmpMeta4;

  { /* match expression */
    modelica_metatype tmp8_1;modelica_boolean tmp8_2;
    tmp8_1 = _inExp;
    tmp8_2 = _outBoolean;
    {
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _cr has no default value.
      tmp8 = 0;
      for (; tmp8 < 3; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          if (0 /* false */ != tmp8_2) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box2(0, mmc_mk_boolean(0 /* false */), _knownVars);
          tmpMeta5 = tmpMeta10;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,6,2) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 2));
          
          _cr = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box2(0, mmc_mk_boolean(omc_BackendVariable_crefIsParam(threadData, _cr, _knownVars)), _knownVars);
          tmpMeta5 = tmpMeta12;
          goto tmp7_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box2(0, mmc_mk_boolean(1 /* true */), _knownVars);
          tmpMeta5 = tmpMeta13;
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
  _tpl = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  if (out_tpl) { *out_tpl = _tpl; }
  return _inExp;
}

DLLDirection
modelica_boolean omc_BackendVariable_isKnownAndParam(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _knownVars)
{
  modelica_boolean _outBoolean;
  modelica_metatype _tpl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  tmpMeta1 = mmc_mk_box2(0, mmc_mk_boolean(1 /* true */), _knownVars);
  _tpl = tmpMeta1;
  /* Pattern-matching tuple assignment, wild first pattern */
  omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_BackendVariable_isKnownAndParamWork, _tpl, &tmpMeta2);
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _outBoolean = tmp4  /* pattern as ty=Boolean */;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isKnownAndParam(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _knownVars)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isKnownAndParam(threadData, _inExp, _knownVars);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVariable_removeVar2(threadData_t *threadData, modelica_metatype _inCrefIndex1, modelica_metatype _inCrefIndex2)
{
  modelica_boolean _outMatch;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMatch has no default value.
  _outMatch = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCrefIndex1), 3)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCrefIndex2), 3)))));
  _return: OMC_LABEL_UNUSED
  return _outMatch;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_removeVar2(threadData_t *threadData, modelica_metatype _inCrefIndex1, modelica_metatype _inCrefIndex2)
{
  modelica_boolean _outMatch;
  modelica_metatype out_outMatch;
  _outMatch = omc_BackendVariable_removeVar2(threadData, _inCrefIndex1, _inCrefIndex2);
  out_outMatch = mmc_mk_icon(_outMatch);
  return out_outMatch;
}

DLLDirection
modelica_metatype omc_BackendVariable_removeVar(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inVariables, modelica_metatype *out_outVar)
{
  modelica_metatype _outVariables = NULL;
  modelica_metatype _outVar = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype _cr_indices = NULL;
  modelica_metatype _arr = NULL;
  modelica_integer _buckets;
  modelica_integer _num_vars;
  modelica_integer _hash_idx;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _outVar has no default value.
  // _indices has no default value.
  // _cr_indices has no default value.
  // _arr has no default value.
  // _buckets has no default value.
  // _num_vars has no default value.
  // _hash_idx has no default value.
  // _cr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVariables;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  _indices = tmpMeta2;
  _arr = tmpMeta3;
  _buckets = tmp5  /* pattern as ty=Integer */;
  _num_vars = tmp7  /* pattern as ty=Integer */;

  /* Pattern-matching tuple assignment */
  tmpMeta10 = omc_BackendVariable_vararrayDelete(threadData, _arr, _inIndex, &tmpMeta8);
  _arr = tmpMeta10;
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
  _outVar = tmpMeta8;
  _cr = tmpMeta9;

  _hash_idx = ((modelica_integer) 1) + modelica_integer_mod(omc_ComponentReferenceBasics_hashComponentRef(threadData, _cr), _buckets);

  _cr_indices = arrayGet(_indices,_hash_idx) /* DAE.ASUB */;

  tmpMeta11 = mmc_mk_box3(3, &BackendDAE_CrefIndex_CREFINDEX__desc, _cr, mmc_mk_integer(((modelica_integer) -1) + _inIndex));
  _cr_indices = omc_List_deleteMemberOnTrue(threadData, tmpMeta11, _cr_indices, boxvar_BackendVariable_removeVar2, NULL);

  arrayUpdate(_indices, _hash_idx, _cr_indices);

  tmpMeta12 = mmc_mk_box5(3, &BackendDAE_Variables_VARIABLES__desc, _indices, _arr, mmc_mk_integer(_buckets), mmc_mk_integer(((modelica_integer) -1) + _num_vars));
  _outVariables = tmpMeta12;
  _return: OMC_LABEL_UNUSED
  if (out_outVar) { *out_outVar = _outVar; }
  return _outVariables;
}
modelica_metatype boxptr_BackendVariable_removeVar(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inVariables, modelica_metatype *out_outVar)
{
  modelica_integer tmp1;
  modelica_metatype _outVariables = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outVariables = omc_BackendVariable_removeVar(threadData, tmp1, _inVariables, out_outVar);
  /* skip box _outVariables; BackendDAE.Variables */
  /* skip box _outVar; BackendDAE.Var */
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_removeAliasVars(threadData_t *threadData, modelica_metatype _inShared)
{
  modelica_metatype _outShared = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outShared has no default value.
  _outShared = omc_BackendDAEUtil_setSharedAliasVars(threadData, _inShared, omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013)));
  _return: OMC_LABEL_UNUSED
  return _outShared;
}

DLLDirection
modelica_metatype omc_BackendVariable_removeVarDAE(threadData_t *threadData, modelica_integer _inVarPos, modelica_metatype _inEqSystem, modelica_metatype *out_outVar)
{
  modelica_metatype _outEqSystem = NULL;
  modelica_metatype _outVar = NULL;
  modelica_metatype _vars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqSystem has no default value.
  // _outVar has no default value.
  // _vars has no default value.
  _vars = omc_BackendVariable_removeVar(threadData, _inVarPos, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqSystem), 2))) ,&_outVar);

  _outEqSystem = omc_BackendDAEUtil_setEqSystVars(threadData, _inEqSystem, _vars);
  _return: OMC_LABEL_UNUSED
  if (out_outVar) { *out_outVar = _outVar; }
  return _outEqSystem;
}
modelica_metatype boxptr_BackendVariable_removeVarDAE(threadData_t *threadData, modelica_metatype _inVarPos, modelica_metatype _inEqSystem, modelica_metatype *out_outVar)
{
  modelica_integer tmp1;
  modelica_metatype _outEqSystem = NULL;
  tmp1 = mmc_unbox_integer(_inVarPos);
  _outEqSystem = omc_BackendVariable_removeVarDAE(threadData, tmp1, _inEqSystem, out_outVar);
  /* skip box _outEqSystem; BackendDAE.EqSystem */
  /* skip box _outVar; BackendDAE.Var */
  return _outEqSystem;
}

DLLDirection
modelica_metatype omc_BackendVariable_removeVars(threadData_t *threadData, modelica_metatype _inVarPos, modelica_metatype _inVariables, modelica_metatype _iAcc, modelica_metatype *out_outVars)
{
  modelica_metatype _outVariables = NULL;
  modelica_metatype _outVars = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _outVars has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inVarPos;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _ilst = NULL;
      modelica_integer _i;
      modelica_metatype _v = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _ilst has no default value.
      // _i has no default value.
      // _v has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inVariables;
          tmpMeta[0+1] = _iAcc;
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
          _i = tmp8  /* pattern as ty=Integer */;
          _ilst = tmpMeta7;
          /* Pattern matching succeeded */
          _vars = omc_BackendVariable_removeVar(threadData, _i, _inVariables ,&_v);
          tmpMeta9 = mmc_mk_cons(_v, _iAcc);
          tmpMeta[0+0] = omc_BackendVariable_removeVars(threadData, _ilst, _vars, tmpMeta9, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _ilst = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BackendVariable_removeVars(threadData, _ilst, _inVariables, _iAcc, &tmpMeta[0+1]);
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
  _outVariables = tmpMeta[0+0];
  _outVars = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outVars) { *out_outVars = _outVars; }
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_removeCref(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inVariables)
{
  modelica_metatype _outVariables = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inComponentRef;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _ilst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _ilst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          
          _cr = tmp4_1;
          /* Pattern matching succeeded */
          omc_BackendVariable_getVar(threadData, _cr, _inVariables ,&_ilst);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_BackendVariable_removeVars(threadData, _ilst, _inVariables, tmpMeta6, NULL);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inVariables;
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
  _outVariables = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_removeCrefs(threadData_t *threadData, modelica_metatype _varlst, modelica_metatype _vars)
{
  modelica_metatype _vars_1 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vars_1 has no default value.
  _vars_1 = omc_List_fold(threadData, _varlst, boxvar_BackendVariable_removeCref, _vars);
  _return: OMC_LABEL_UNUSED
  return _vars_1;
}

DLLDirection
modelica_metatype omc_BackendVariable_deleteVarIfExistsAndReturn(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inVariables, modelica_metatype *out_outVariables)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outVariables = NULL;
  modelica_metatype _ilst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outVarLst = tmpMeta1;
  _outVariables = _inVariables;
  // _ilst has no default value.
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
          /* Pattern matching succeeded */
          _outVarLst = omc_BackendVariable_getVar(threadData, _inComponentRef, _inVariables ,&_ilst);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _outVariables = omc_BackendVariable_removeVars(threadData, _ilst, _inVariables, tmpMeta6, NULL);

          _outVariables = omc_BackendVariable_listVar1(threadData, omc_BackendVariable_varList(threadData, _outVariables));
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
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
  ;
  _return: OMC_LABEL_UNUSED
  if (out_outVariables) { *out_outVariables = _outVariables; }
  return _outVarLst;
}

DLLDirection
modelica_metatype omc_BackendVariable_deleteVar(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inVariables)
{
  modelica_metatype _outVariables = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inComponentRef;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _ilst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _cr has no default value.
      // _ilst has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          
          _cr = tmp4_1;
          /* Pattern matching succeeded */
          omc_BackendVariable_getVar(threadData, _cr, _inVariables ,&_ilst);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _vars = omc_BackendVariable_removeVars(threadData, _ilst, _inVariables, tmpMeta6, NULL);
          tmpMeta1 = omc_BackendVariable_listVar1(threadData, omc_BackendVariable_varList(threadData, _vars));
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
  _outVariables = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_deleteVars1(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVars, modelica_metatype *out_outVars)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _outVars has no default value.
  _outVars = omc_BackendVariable_removeCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))), _inVars);
  _return: OMC_LABEL_UNUSED
  if (out_outVars) { *out_outVars = _outVars; }
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_deleteVars(threadData_t *threadData, modelica_metatype _inDelVars, modelica_metatype _inVariables)
{
  modelica_metatype _outVariables = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _newvars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _newvars has no default value.
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
          tmp6 = (omc_BackendVariable_varsSize(threadData, _inDelVars) > ((modelica_integer) 0));
          if (1 /* true */ != tmp6) goto goto_2;

          _newvars = omc_BackendVariable_traverseBackendDAEVars(threadData, _inDelVars, boxvar_BackendVariable_deleteVars1, _inVariables);
          tmpMeta1 = omc_BackendVariable_listVar1(threadData, omc_BackendVariable_varList(threadData, _newvars));
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _inVariables;
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
  _outVariables = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_deleteCrefs(threadData_t *threadData, modelica_metatype _varlst, modelica_metatype _vars)
{
  modelica_metatype _vars_1 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vars_1 has no default value.
  _vars_1 = omc_List_fold(threadData, _varlst, boxvar_BackendVariable_removeCref, _vars);

  _vars_1 = omc_BackendVariable_listVar1(threadData, omc_BackendVariable_varList(threadData, _vars_1));
  _return: OMC_LABEL_UNUSED
  return _vars_1;
}

DLLDirection
modelica_boolean omc_BackendVariable_isTopLevelInputOrOutput(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inVars, modelica_metatype _inGlobalKnownVars)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _v = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
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
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta6 = omc_BackendVariable_getVar(threadData, _inComponentRef, _inVars, NULL);
          if (listEmpty(tmpMeta6)) goto goto_2;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          _v = tmpMeta7;
          tmp1 = omc_BackendVariable_isVarOnTopLevelAndOutput(threadData, _v);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta9 = omc_BackendVariable_getVar(threadData, _inComponentRef, _inGlobalKnownVars, NULL);
          if (listEmpty(tmpMeta9)) goto goto_2;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          _v = tmpMeta10;
          tmp1 = omc_BackendVariable_isVarOnTopLevelAndInput(threadData, _v);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isTopLevelInputOrOutput(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inVars, modelica_metatype _inGlobalKnownVars)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isTopLevelInputOrOutput(threadData, _inComponentRef, _inVars, _inGlobalKnownVars);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarKindState(threadData_t *threadData, modelica_metatype _inVarKind)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVarKind;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarKindState(threadData_t *threadData, modelica_metatype _inVarKind)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarKindState(threadData, _inVarKind);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
void omc_BackendVariable_isVarKindVariable(threadData_t *threadData, modelica_metatype _inVarKind)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _inVarKind;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 9: {
          
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
  return;
}

DLLDirection
void omc_BackendVariable_isVariable(threadData_t *threadData, modelica_metatype _inComponentRef1, modelica_metatype _inVariables2, modelica_metatype _inVariables3)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;volatile modelica_metatype tmp3_3;
    tmp3_1 = _inComponentRef1;
    tmp3_2 = _inVariables2;
    tmp3_3 = _inVariables3;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _globalKnownVars = NULL;
      modelica_metatype _kind = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _cr has no default value.
      // _vars has no default value.
      // _globalKnownVars has no default value.
      // _kind has no default value.
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
          
          _cr = tmp3_1;
          _vars = tmp3_2;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta5 = omc_BackendVariable_getVar(threadData, _cr, _vars, NULL);
          if (listEmpty(tmpMeta5)) goto goto_1;
          tmpMeta6 = MMC_CAR(tmpMeta5);
          tmpMeta7 = MMC_CDR(tmpMeta5);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          _kind = tmpMeta8;

          omc_BackendVariable_isVarKindVariable(threadData, _kind);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          _cr = tmp3_1;
          _globalKnownVars = tmp3_3;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta9 = omc_BackendVariable_getVar(threadData, _cr, _globalKnownVars, NULL);
          if (listEmpty(tmpMeta9)) goto goto_1;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          _kind = tmpMeta12;

          omc_BackendVariable_isVarKindVariable(threadData, _kind);
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
  return;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_BackendVariable_varsLoadFactor(threadData_t *threadData, modelica_metatype _inVariables, modelica_integer _inIncrease)
{
  modelica_real _outLoadFactor;
  modelica_real tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLoadFactor has no default value.
  tmp1 = ((modelica_real)mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 4)))));
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  _outLoadFactor = (((modelica_real)mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 5)))) + _inIncrease)) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _outLoadFactor;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_varsLoadFactor(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inIncrease)
{
  modelica_integer tmp1;
  modelica_real _outLoadFactor;
  modelica_metatype out_outLoadFactor;
  tmp1 = mmc_unbox_integer(_inIncrease);
  _outLoadFactor = omc_BackendVariable_varsLoadFactor(threadData, _inVariables, tmp1);
  out_outLoadFactor = mmc_mk_rcon(_outLoadFactor);
  return out_outLoadFactor;
}

DLLDirection
modelica_integer omc_BackendVariable_varsSize(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_integer _outNumVariables;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNumVariables = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 3)))), 2))));
  _return: OMC_LABEL_UNUSED
  return _outNumVariables;
}
modelica_metatype boxptr_BackendVariable_varsSize(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_integer _outNumVariables;
  modelica_metatype out_outNumVariables;
  _outNumVariables = omc_BackendVariable_varsSize(threadData, _inVariables);
  out_outNumVariables = mmc_mk_icon(_outNumVariables);
  return out_outNumVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_daeAliasVars(threadData_t *threadData, modelica_metatype _inShared)
{
  modelica_metatype _outAliasVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outAliasVars = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 5)));
  _return: OMC_LABEL_UNUSED
  return _outAliasVars;
}

DLLDirection
modelica_metatype omc_BackendVariable_daeGlobalKnownVars(threadData_t *threadData, modelica_metatype _inShared)
{
  modelica_metatype _outGlobalKnownVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outGlobalKnownVars = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 2)));
  _return: OMC_LABEL_UNUSED
  return _outGlobalKnownVars;
}

DLLDirection
modelica_metatype omc_BackendVariable_daeVars(threadData_t *threadData, modelica_metatype _inEqSystem)
{
  modelica_metatype _vars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vars = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqSystem), 2)));
  _return: OMC_LABEL_UNUSED
  return _vars;
}

DLLDirection
modelica_metatype omc_BackendVariable_equationSystemsVarsLst(threadData_t *threadData, modelica_metatype _systs)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _vars = NULL;
  modelica_metatype _v = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outVars = tmpMeta1;
  // _vars has no default value.
  // _v has no default value.
  {
    modelica_metatype _es;
    for (tmpMeta2 = _systs; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _es = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _es;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _v = tmpMeta4;

      _vars = omc_BackendVariable_varList(threadData, _v);

      _outVars = omc_List_append__reverse(threadData, _vars, _outVars);
    }
  }

  _outVars = listReverseInPlace(_outVars);
  _return: OMC_LABEL_UNUSED
  return _outVars;
}

DLLDirection
modelica_metatype omc_BackendVariable_listVar2(threadData_t *threadData, modelica_metatype _inVarLst1, modelica_metatype _inVarLst2)
{
  modelica_metatype _outVariables = NULL;
  modelica_integer _size;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _size has no default value.
  _size = listLength(_inVarLst1) + listLength(_inVarLst2);

  _outVariables = omc_List_fold(threadData, _inVarLst2, boxvar_BackendVariable_addVar, omc_List_fold(threadData, _inVarLst1, boxvar_BackendVariable_addVar, omc_BackendVariable_emptyVarsSized(threadData, _size)));
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_listVar1(threadData_t *threadData, modelica_metatype _inVarLst)
{
  modelica_metatype _outVariables = NULL;
  modelica_integer _size;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _size has no default value.
  _size = listLength(_inVarLst);

  _outVariables = omc_List_fold(threadData, _inVarLst, boxvar_BackendVariable_addVar, omc_BackendVariable_emptyVarsSized(threadData, _size));
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_listVarSized(threadData_t *threadData, modelica_metatype _inVarLst, modelica_integer _size)
{
  modelica_metatype _outVariables = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  _outVariables = omc_List_fold(threadData, _inVarLst, boxvar_BackendVariable_addVar, omc_BackendVariable_emptyVarsSized(threadData, _size));
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}
modelica_metatype boxptr_BackendVariable_listVarSized(threadData_t *threadData, modelica_metatype _inVarLst, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _outVariables = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _outVariables = omc_BackendVariable_listVarSized(threadData, _inVarLst, tmp1);
  /* skip box _outVariables; BackendDAE.Variables */
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_listVar(threadData_t *threadData, modelica_metatype _inVarLst)
{
  modelica_metatype _outVariables = NULL;
  modelica_integer _size;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _size has no default value.
  _size = listLength(_inVarLst);

  _outVariables = omc_BackendVariable_emptyVarsSized(threadData, _size);

  _outVariables = omc_BackendVariable_addVars(threadData, listReverse(_inVarLst), _outVariables);
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_varList(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_metatype _outVarLst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
  _outVarLst = omc_BackendVariable_vararrayList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 3))));
  _return: OMC_LABEL_UNUSED
  return _outVarLst;
}

DLLDirection
modelica_boolean omc_BackendVariable_areAllCrefsPrimaryParameters(threadData_t *threadData, modelica_metatype _inCrefs, modelica_metatype _inVars)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_boolean _isPrimary;
  modelica_metatype _v = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isPrimary = 1 /* true */;
  // _v has no default value.
  {
    modelica_metatype _cref;
    for (tmpMeta1 = _inCrefs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _cref = MMC_CAR(tmpMeta1);
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
              _v = omc_BackendVariable_getVar2(threadData, _cref, _inVars, NULL);

              /* Pattern-matching assignment */
              tmp6 = (omc_BackendVariable_isParam(threadData, _v) && omc_BackendVariable_varFixed(threadData, _v));
              if (1 /* true */ != tmp6) goto goto_2;
              goto tmp3_done;
            }
            case 1: {
              /* Pattern matching succeeded */
              _isPrimary = 0 /* false */;

              goto _return;
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
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _isPrimary;
}
modelica_metatype boxptr_BackendVariable_areAllCrefsPrimaryParameters(threadData_t *threadData, modelica_metatype _inCrefs, modelica_metatype _inVars)
{
  modelica_boolean _isPrimary;
  modelica_metatype out_isPrimary;
  _isPrimary = omc_BackendVariable_areAllCrefsPrimaryParameters(threadData, _inCrefs, _inVars);
  out_isPrimary = mmc_mk_icon(_isPrimary);
  return out_isPrimary;
}

DLLDirection
modelica_boolean omc_BackendVariable_areAllCrefsInVarList(threadData_t *threadData, modelica_metatype _inCrefs, modelica_metatype _inVars)
{
  modelica_boolean _isInList;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isInList = 1 /* true */;
  {
    modelica_metatype _cref;
    for (tmpMeta1 = _inCrefs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _cref = MMC_CAR(tmpMeta1);
      if((!omc_BackendVariable_isCrefInVarList(threadData, _cref, _inVars)))
      {
        _isInList = 0 /* false */;

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _isInList;
}
modelica_metatype boxptr_BackendVariable_areAllCrefsInVarList(threadData_t *threadData, modelica_metatype _inCrefs, modelica_metatype _inVars)
{
  modelica_boolean _isInList;
  modelica_metatype out_isInList;
  _isInList = omc_BackendVariable_areAllCrefsInVarList(threadData, _inCrefs, _inVars);
  out_isInList = mmc_mk_icon(_isInList);
  return out_isInList;
}

DLLDirection
modelica_boolean omc_BackendVariable_isCrefInVarList(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inVars)
{
  modelica_boolean _isInList;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isInList = 0 /* false */;
  {
    modelica_metatype _v;
    for (tmpMeta1 = _inVars; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      if(omc_ComponentReferenceBasics_crefEqual(threadData, omc_BackendVariable_varCref(threadData, _v), _inCref))
      {
        _isInList = 1 /* true */;

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _isInList;
}
modelica_metatype boxptr_BackendVariable_isCrefInVarList(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inVars)
{
  modelica_boolean _isInList;
  modelica_metatype out_isInList;
  _isInList = omc_BackendVariable_isCrefInVarList(threadData, _inCref, _inVars);
  out_isInList = mmc_mk_icon(_isInList);
  return out_isInList;
}

DLLDirection
modelica_metatype omc_BackendVariable_emptyVarsSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _outVariables = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVariables = omc_BackendVariable_emptyVars(threadData, _size);
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}
modelica_metatype boxptr_BackendVariable_emptyVarsSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _outVariables = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _outVariables = omc_BackendVariable_emptyVarsSized(threadData, tmp1);
  /* skip box _outVariables; BackendDAE.Variables */
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_emptyVars(threadData_t *threadData, modelica_integer _inSize)
{
  modelica_metatype _outVariables = NULL;
  modelica_metatype _indices = NULL;
  modelica_integer _buckets;
  modelica_integer _arr_size;
  modelica_metatype _arr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _indices has no default value.
  // _buckets has no default value.
  // _arr_size has no default value.
  // _arr has no default value.
  _arr_size = modelica_integer_max((modelica_integer)(_inSize),(modelica_integer)(((modelica_integer) 257)));

  _buckets = ((modelica_integer)floor((1.4) * (((modelica_real)_arr_size))));

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _indices = arrayCreate(_buckets, tmpMeta1);

  _arr = omc_BackendVariable_vararrayEmpty(threadData, _arr_size);

  tmpMeta2 = mmc_mk_box5(3, &BackendDAE_Variables_VARIABLES__desc, _indices, _arr, mmc_mk_integer(_buckets), mmc_mk_integer(((modelica_integer) 0)));
  _outVariables = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}
modelica_metatype boxptr_BackendVariable_emptyVars(threadData_t *threadData, modelica_metatype _inSize)
{
  modelica_integer tmp1;
  modelica_metatype _outVariables = NULL;
  tmp1 = mmc_unbox_integer(_inSize);
  _outVariables = omc_BackendVariable_emptyVars(threadData, tmp1);
  /* skip box _outVariables; BackendDAE.Variables */
  return _outVariables;
}

DLLDirection
modelica_metatype omc_BackendVariable_copyVariables(threadData_t *threadData, modelica_metatype _inVariables)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _outVariables = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // _outVariables has no default value.
  _outVariables = _inVariables;

  __omcQ_24mrfa_5F0 = arrayCopy((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 2))));

  __omcQ_24mrfa_5F1 = omc_BackendVariable_copyArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariables), 3))));

  tmpMeta1 = mmc_mk_box5(3, &BackendDAE_Variables_VARIABLES__desc, __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVariables), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVariables), 5))));
  _outVariables = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararrayList(threadData_t *threadData, modelica_metatype _inArray)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype _varOptArr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVars has no default value.
  // _varOptArr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inArray;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _varOptArr = tmpMeta2;

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _outVars = tmpMeta3;

  tmp5 = arrayLength(_varOptArr); tmp6 = ((modelica_integer) -1); tmp7 = ((modelica_integer) 1);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_varOptArr); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
    {
      if(isSome(arrayGet(_varOptArr,_i) /* DAE.ASUB */))
      {
        tmpMeta4 = mmc_mk_cons(omc_Util_getOption(threadData, arrayGet(_varOptArr,_i) /* DAE.ASUB */), _outVars);
        _outVars = tmpMeta4;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararrayDelete(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_integer _inIndex, modelica_metatype *out_outVar)
{
  modelica_metatype _outVariableArray = NULL;
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVariableArray = _inVariableArray;
  // _outVar has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVariableArray), 3))), _inIndex);
  if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _outVar = tmpMeta2;

  arrayUpdate((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVariableArray), 3))), _inIndex, mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  if (out_outVar) { *out_outVar = _outVar; }
  return _outVariableArray;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_vararrayDelete(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_metatype _inIndex, modelica_metatype *out_outVar)
{
  modelica_integer tmp1;
  modelica_metatype _outVariableArray = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outVariableArray = omc_BackendVariable_vararrayDelete(threadData, _inVariableArray, tmp1, out_outVar);
  /* skip box _outVariableArray; BackendDAE.VariableArray */
  /* skip box _outVar; BackendDAE.Var */
  return _outVariableArray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararrayNth(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_integer _inIndex)
{
  modelica_metatype _outVar = NULL;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  /* Pattern-matching assignment */
  tmp1 = (_inIndex <= mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariableArray), 2)))));
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmpMeta2 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariableArray), 3))), _inIndex);
  if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  _outVar = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_vararrayNth(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_metatype _inIndex)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outVar = omc_BackendVariable_vararrayNth(threadData, _inVariableArray, tmp1);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararraySetnth(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_integer _inIndex, modelica_metatype _inVar)
{
  modelica_metatype _outVariableArray = NULL;
  modelica_boolean tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVariableArray = _inVariableArray;
  /* Pattern-matching assignment */
  tmp1 = (_inIndex <= mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariableArray), 2)))));
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();

  arrayUpdate((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariableArray), 3))), _inIndex, mmc_mk_some(_inVar));
  _return: OMC_LABEL_UNUSED
  return _outVariableArray;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_vararraySetnth(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_metatype _inIndex, modelica_metatype _inVar)
{
  modelica_integer tmp1;
  modelica_metatype _outVariableArray = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outVariableArray = omc_BackendVariable_vararraySetnth(threadData, _inVariableArray, tmp1, _inVar);
  /* skip box _outVariableArray; BackendDAE.VariableArray */
  return _outVariableArray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararrayAdd(threadData_t *threadData, modelica_metatype _inVariableArray, modelica_metatype _inVar)
{
  modelica_metatype _outVariableArray = NULL;
  modelica_integer _num_elems;
  modelica_metatype _arr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariableArray has no default value.
  // _num_elems has no default value.
  // _arr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVariableArray;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _num_elems = tmp3  /* pattern as ty=Integer */;
  _arr = tmpMeta4;

  _num_elems = ((modelica_integer) 1) + _num_elems;

  _arr = omc_Array_expandOnDemand(threadData, _num_elems, _arr, 1.4, mmc_mk_none());

  arrayUpdate(_arr, _num_elems, mmc_mk_some(_inVar));

  tmpMeta5 = mmc_mk_box3(3, &BackendDAE_VariableArray_VARIABLE__ARRAY__desc, mmc_mk_integer(_num_elems), _arr);
  _outVariableArray = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outVariableArray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_vararrayEmpty(threadData_t *threadData, modelica_integer _inSize)
{
  modelica_metatype _outArray = NULL;
  modelica_metatype _arr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outArray has no default value.
  // _arr has no default value.
  _arr = arrayCreate(_inSize, mmc_mk_none());

  tmpMeta1 = mmc_mk_box3(3, &BackendDAE_VariableArray_VARIABLE__ARRAY__desc, mmc_mk_integer(((modelica_integer) 0)), _arr);
  _outArray = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outArray;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_vararrayEmpty(threadData_t *threadData, modelica_metatype _inSize)
{
  modelica_integer tmp1;
  modelica_metatype _outArray = NULL;
  tmp1 = mmc_unbox_integer(_inSize);
  _outArray = omc_BackendVariable_vararrayEmpty(threadData, tmp1);
  /* skip box _outArray; BackendDAE.VariableArray */
  return _outArray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_copyArray(threadData_t *threadData, modelica_metatype _inVariableArray)
{
  modelica_metatype _outVariableArray = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVariableArray = _inVariableArray;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVariableArray), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = arrayCopy((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariableArray), 3))));
  _outVariableArray = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVariableArray;
}

DLLDirection
modelica_integer omc_BackendVariable_daenumVariables(threadData_t *threadData, modelica_metatype _syst)
{
  modelica_integer _n;
  modelica_metatype _vars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _n has no default value.
  // _vars has no default value.
  _vars = omc_BackendVariable_daeVars(threadData, _syst);

  _n = omc_BackendVariable_varsSize(threadData, _vars);
  _return: OMC_LABEL_UNUSED
  return _n;
}
modelica_metatype boxptr_BackendVariable_daenumVariables(threadData_t *threadData, modelica_metatype _syst)
{
  modelica_integer _n;
  modelica_metatype out_n;
  _n = omc_BackendVariable_daenumVariables(threadData, _syst);
  out_n = mmc_mk_icon(_n);
  return out_n;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_getAlias1(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_negated)
{
  modelica_metatype _outCr = NULL;
  modelica_boolean _negated;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCr has no default value.
  // _negated has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _name;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,5,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          
          _name = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _name;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,6,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          
          _name = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _name;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,2) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,24,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,6,2) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          
          _name = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _name;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          if (3 != MMC_STRLEN(tmpMeta17) || strcmp(MMC_STRINGDATA(_OMC_LIT45), MMC_STRINGDATA(tmpMeta17)) != 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta18)) goto tmp3_end;
          tmpMeta19 = MMC_CAR(tmpMeta18);
          tmpMeta20 = MMC_CDR(tmpMeta18);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,6,2) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          if (!listEmpty(tmpMeta20)) goto tmp3_end;
          
          _name = tmpMeta21;
          /* Pattern matching succeeded */
          _name = omc_ComponentReference_crefPrefixDer(threadData, _name);
          tmpMeta[0+0] = _name;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,5,1) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,13,3) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,1,1) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          if (3 != MMC_STRLEN(tmpMeta25) || strcmp(MMC_STRINGDATA(_OMC_LIT45), MMC_STRINGDATA(tmpMeta25)) != 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
          if (listEmpty(tmpMeta26)) goto tmp3_end;
          tmpMeta27 = MMC_CAR(tmpMeta26);
          tmpMeta28 = MMC_CDR(tmpMeta26);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,6,2) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
          if (!listEmpty(tmpMeta28)) goto tmp3_end;
          
          _name = tmpMeta29;
          /* Pattern matching succeeded */
          _name = omc_ComponentReference_crefPrefixDer(threadData, _name);
          tmpMeta[0+0] = _name;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,6,1) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,13,3) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,1,1) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          if (3 != MMC_STRLEN(tmpMeta33) || strcmp(MMC_STRINGDATA(_OMC_LIT45), MMC_STRINGDATA(tmpMeta33)) != 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 3));
          if (listEmpty(tmpMeta34)) goto tmp3_end;
          tmpMeta35 = MMC_CAR(tmpMeta34);
          tmpMeta36 = MMC_CDR(tmpMeta34);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,6,2) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          if (!listEmpty(tmpMeta36)) goto tmp3_end;
          
          _name = tmpMeta37;
          /* Pattern matching succeeded */
          _name = omc_ComponentReference_crefPrefixDer(threadData, _name);
          tmpMeta[0+0] = _name;
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
  _outCr = tmpMeta[0+0];
  _negated = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_negated) { *out_negated = _negated; }
  return _outCr;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVariable_getAlias1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_negated)
{
  modelica_boolean _negated;
  modelica_metatype _outCr = NULL;
  _outCr = omc_BackendVariable_getAlias1(threadData, _inExp, &_negated);
  /* skip box _outCr; DAE.ComponentRef */
  if (out_negated) { *out_negated = mmc_mk_icon(_negated); }
  return _outCr;
}

DLLDirection
modelica_metatype omc_BackendVariable_getAlias(threadData_t *threadData, modelica_metatype _inVar, modelica_boolean *out_negated)
{
  modelica_metatype _outCr = NULL;
  modelica_boolean _negated;
  modelica_metatype _e = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCr has no default value.
  // _negated has no default value.
  // _e has no default value.
  _e = omc_BackendVariable_varBindExp(threadData, _inVar);

  _outCr = omc_BackendVariable_getAlias1(threadData, _e ,&_negated);
  _return: OMC_LABEL_UNUSED
  if (out_negated) { *out_negated = _negated; }
  return _outCr;
}
modelica_metatype boxptr_BackendVariable_getAlias(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype *out_negated)
{
  modelica_boolean _negated;
  modelica_metatype _outCr = NULL;
  _outCr = omc_BackendVariable_getAlias(threadData, _inVar, &_negated);
  /* skip box _outCr; DAE.ComponentRef */
  if (out_negated) { *out_negated = mmc_mk_icon(_negated); }
  return _outCr;
}

static modelica_metatype closure3_BackendVariable_containsVar(threadData_t *thData, modelica_metatype closure, modelica_metatype var)
{
  modelica_metatype inVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_BackendVariable_containsVar(thData, var, inVariables);
}
DLLDirection
modelica_metatype omc_BackendVariable_sortInitialVars(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvars, modelica_metatype _fixableVars)
{
  modelica_metatype _vars = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _fixable_start = NULL;
  modelica_metatype _fixable = NULL;
  modelica_metatype _non_fixable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vars = __omcQ_24in_5Fvars;
  // _var_lst has no default value.
  // _fixable_start has no default value.
  // _fixable has no default value.
  // _non_fixable has no default value.
  _var_lst = omc_BackendVariable_varList(threadData, _vars);

  tmpMeta1 = mmc_mk_box1(0, _fixableVars);
  _fixable = omc_List_splitOnTrue(threadData, _var_lst, (modelica_fnptr) mmc_mk_box2(0,closure3_BackendVariable_containsVar,tmpMeta1) ,&_non_fixable);

  _fixable_start = omc_List_splitOnTrue(threadData, _fixable, boxvar_BackendVariable_varHasStartValue ,&_fixable);

  _var_lst = listAppend(listAppend(_fixable_start, listReverse(_fixable)), listReverse(_non_fixable));

  _vars = omc_BackendVariable_listVar(threadData, _var_lst);
  _return: OMC_LABEL_UNUSED
  return _vars;
}

DLLDirection
modelica_boolean omc_BackendVariable_varSortFunc(threadData_t *threadData, modelica_metatype _v1, modelica_metatype _v2)
{
  modelica_boolean _greaterThan;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _greaterThan has no default value.
  _greaterThan = omc_ComponentReferenceBasics_crefSortFunc(threadData, omc_BackendVariable_varCref(threadData, _v1), omc_BackendVariable_varCref(threadData, _v2));
  _return: OMC_LABEL_UNUSED
  return _greaterThan;
}
modelica_metatype boxptr_BackendVariable_varSortFunc(threadData_t *threadData, modelica_metatype _v1, modelica_metatype _v2)
{
  modelica_boolean _greaterThan;
  modelica_metatype out_greaterThan;
  _greaterThan = omc_BackendVariable_varSortFunc(threadData, _v1, _v2);
  out_greaterThan = mmc_mk_icon(_greaterThan);
  return out_greaterThan;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_BackendVariable_getMinMaxAsserts1Str(threadData_t *threadData, modelica_metatype _omin, modelica_metatype _omax, modelica_string _varStr)
{
  modelica_string _msg = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _msg has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _omin;
    tmp4_2 = _omax;
    {
      modelica_metatype _min = NULL;
      modelica_metatype _max = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _min has no default value.
      // _max has no default value.
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
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _min = tmpMeta6;
          _max = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT46,omc_ExpressionBasics_printExpStr(threadData, _min));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT47);
          tmpMeta10 = stringAppend(tmpMeta9,_varStr);
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT47);
          tmpMeta12 = stringAppend(tmpMeta11,omc_ExpressionBasics_printExpStr(threadData, _max));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT48);
          tmp1 = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (!optionNone(tmp4_2)) goto tmp3_end;
          _min = tmpMeta14;
          /* Pattern matching succeeded */
          tmpMeta15 = stringAppend(_OMC_LIT49,omc_ExpressionBasics_printExpStr(threadData, _min));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT47);
          tmpMeta17 = stringAppend(tmpMeta16,_varStr);
          tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT48);
          tmp1 = tmpMeta18;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _max = tmpMeta19;
          /* Pattern matching succeeded */
          tmpMeta20 = stringAppend(_OMC_LIT50,_varStr);
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT47);
          tmpMeta22 = stringAppend(tmpMeta21,omc_ExpressionBasics_printExpStr(threadData, _max));
          tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT48);
          tmp1 = tmpMeta23;
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
  _msg = tmp1;
  _return: OMC_LABEL_UNUSED
  return _msg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVariable_getMinMaxAsserts1(threadData_t *threadData, modelica_metatype _omin, modelica_metatype _omax, modelica_metatype _e, modelica_metatype _tp)
{
  modelica_metatype _cond = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cond has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _omin;
    tmp4_2 = _omax;
    {
      modelica_metatype _min = NULL;
      modelica_metatype _max = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _min has no default value.
      // _max has no default value.
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
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _min = tmpMeta6;
          _max = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(31, &DAE_Operator_GREATEREQ__desc, _tp);
          tmpMeta9 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _e, tmpMeta8, _min, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          tmpMeta10 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta11 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _e, tmpMeta10, _max, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          tmpMeta12 = mmc_mk_box4(12, &DAE_Exp_LBINARY__desc, tmpMeta9, _OMC_LIT52, tmpMeta11);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (!optionNone(tmp4_2)) goto tmp3_end;
          _min = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box2(31, &DAE_Operator_GREATEREQ__desc, _tp);
          tmpMeta15 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _e, tmpMeta14, _min, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _max = tmpMeta16;
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_box2(29, &DAE_Operator_LESSEQ__desc, _tp);
          tmpMeta18 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _e, tmpMeta17, _max, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
          tmpMeta1 = tmpMeta18;
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
  _cond = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _cond;
}

DLLDirection
modelica_metatype omc_BackendVariable_getMinMaxAsserts(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inAsserts, modelica_metatype *out_outAsserts)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outAsserts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _outAsserts has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _cond = NULL;
      modelica_metatype _msg = NULL;
      modelica_metatype _level = NULL;
      modelica_metatype _min = NULL;
      modelica_metatype _max = NULL;
      modelica_string _str = NULL;
      modelica_string _format = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _name = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _varType = NULL;
      modelica_metatype _source = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _cond has no default value.
      // _msg has no default value.
      // _level has no default value.
      // _min has no default value.
      // _max has no default value.
      // _str has no default value.
      // _format has no default value.
      // _tp has no default value.
      // _name has no default value.
      // _attr has no default value.
      // _varType has no default value.
      // _source has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,8,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inAsserts;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          
          _name = tmpMeta7;
          _varType = tmpMeta8;
          _source = tmpMeta9;
          _attr = tmpMeta10;
          /* Pattern matching succeeded */
          _min = omc_DAEUtil_getMinMaxValues(threadData, _attr ,&_max);

          if((isNone(_min) && isNone(_max)))
          {
            goto goto_2;
          }

          _e = omc_Expression_crefExp(threadData, _name);

          _tp = omc_BackendDAEUtil_makeExpType(threadData, _varType);

          _cond = omc_BackendVariable_getMinMaxAsserts1(threadData, _min, _max, _e, _tp);

          _cond = omc_ExpressionSimplify_simplify(threadData, _cond, NULL);

          /* Pattern-matching assignment */
          tmp11 = omc_Expression_isConstTrue(threadData, _cond);
          if (0 /* false */ != tmp11) goto goto_2;

          _str = omc_BackendVariable_getMinMaxAsserts1Str(threadData, _min, _max, omc_ComponentReferenceBasics_printComponentRefStr(threadData, _name));

          if(omc_Flags_isSet(threadData, _OMC_LIT64))
          {
            _level = _OMC_LIT61;
          }
          else
          {
            _level = _OMC_LIT57;
          }

          _format = (omc_Types_isRealOrSubTypeReal(threadData, _tp)?_OMC_LIT65:_OMC_LIT66);

          tmpMeta12 = mmc_mk_box2(5, &DAE_Exp_SCONST__desc, _str);
          tmpMeta14 = mmc_mk_box2(5, &DAE_Exp_SCONST__desc, _format);
          tmpMeta13 = mmc_mk_cons(_e, mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta15 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT70, tmpMeta13, _OMC_LIT73);
          tmpMeta16 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta12, _OMC_LIT68, tmpMeta15);
          _msg = tmpMeta16;

          omc_BackendDAEUtil_checkAssertCondition(threadData, _cond, _msg, _level, omc_ElementSource_getElementSourceFileInfo(threadData, _source));
          tmpMeta19 = mmc_mk_box5(11, &DAE_Statement_STMT__ASSERT__desc, _cond, _msg, _level, _source);
          tmpMeta18 = mmc_mk_cons(tmpMeta19, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta20 = mmc_mk_box2(3, &DAE_Algorithm_ALGORITHM__STMTS__desc, tmpMeta18);
          tmpMeta17 = mmc_mk_cons(tmpMeta20, _inAsserts);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inAsserts;
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
  _outAsserts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_outAsserts) { *out_outAsserts = _outAsserts; }
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarType(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outType = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outType = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6)));
  _return: OMC_LABEL_UNUSED
  return _outType;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarSource(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outSource = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outSource = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 10)));
  _return: OMC_LABEL_UNUSED
  return _outSource;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVariableAttributes(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outAttr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outAttr = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11)));
  _return: OMC_LABEL_UNUSED
  return _outAttr;
}

DLLDirection
modelica_boolean omc_BackendVariable_isChangeable(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _isValueChangeable;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isValueChangeable = (omc_BackendVariable_isVarOnTopLevelAndInput(threadData, _v) || ((omc_BackendVariable_varFixed(threadData, _v) && (!omc_BackendVariable_hasVarEvaluateAnnotationTrueOrFinalOrProtected(threadData, _v))) && (omc_BackendVariable_isParam(threadData, _v)?(omc_BackendVariable_varHasConstantBindExp(threadData, _v) || ((!omc_BackendVariable_varHasBindExp(threadData, _v)) && omc_BackendVariable_varHasConstantStartExp(threadData, _v))):omc_BackendVariable_varHasConstantStartExp(threadData, _v))));
  _return: OMC_LABEL_UNUSED
  return _isValueChangeable;
}
modelica_metatype boxptr_BackendVariable_isChangeable(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _isValueChangeable;
  modelica_metatype out_isValueChangeable;
  _isValueChangeable = omc_BackendVariable_isChangeable(threadData, _v);
  out_isValueChangeable = mmc_mk_icon(_isValueChangeable);
  return out_isValueChangeable;
}

DLLDirection
modelica_boolean omc_BackendVariable_isFinalOrProtectedVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (omc_BackendVariable_isFinalVar(threadData, _inVar) || omc_BackendVariable_isProtectedVar(threadData, _inVar));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_isFinalOrProtectedVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_isFinalOrProtectedVar(threadData, _inVar);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_BackendVariable_isFinalVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = omc_DAEUtil_getFinalAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_isFinalVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_isFinalVar(threadData, _inVar);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarOnTopLevelAndInputNoDerInput(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outBoolean = (omc_BackendVariable_isVarOnTopLevelAndInput(threadData, _inVar) && (!omc_BackendVariable_isRealOptimizeDerInput(threadData, _inVar)));
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isVarOnTopLevelAndInputNoDerInput(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isVarOnTopLevelAndInputNoDerInput(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarOnTopLevelAndInput(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outBoolean = omc_BackendVariable_isInput(threadData, _inVar);
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isVarOnTopLevelAndInput(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isVarOnTopLevelAndInput(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarOnTopLevelAndOutput(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outBoolean = omc_BackendVariable_isOutputVar(threadData, _inVar);
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isVarOnTopLevelAndOutput(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isVarOnTopLevelAndOutput(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarKindForVar(threadData_t *threadData, modelica_integer _idx, modelica_metatype _varsIn)
{
  modelica_metatype _kind = NULL;
  modelica_metatype _var = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _kind has no default value.
  // _var has no default value.
  _var = omc_BackendVariable_getVarAt(threadData, _varsIn, _idx);

  _kind = omc_BackendVariable_getVarKind(threadData, _var);
  _return: OMC_LABEL_UNUSED
  return _kind;
}
modelica_metatype boxptr_BackendVariable_getVarKindForVar(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _varsIn)
{
  modelica_integer tmp1;
  modelica_metatype _kind = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _kind = omc_BackendVariable_getVarKindForVar(threadData, tmp1, _varsIn);
  /* skip box _kind; BackendDAE.VarKind */
  return _kind;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarKind(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _varKind = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _varKind = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 3)));
  _return: OMC_LABEL_UNUSED
  return _varKind;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarNominalValue(threadData_t *threadData, modelica_metatype _InVar)
{
  modelica_metatype _nom = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _nom = omc_DAEUtil_getNominalAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_InVar), 11))));
  _return: OMC_LABEL_UNUSED
  return _nom;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVarDirection(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _varDirection = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _varDirection = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 4)));
  _return: OMC_LABEL_UNUSED
  return _varDirection;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarDirection(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVarDirection)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = _inVarDirection;
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarDirectionTpl(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype __omcQ_24in_5Fdir, modelica_metatype *out_dir)
{
  modelica_metatype _var = NULL;
  modelica_metatype _dir = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  _dir = __omcQ_24in_5Fdir;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = _dir;
  _var = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_dir) { *out_dir = _dir; }
  return _var;
}

DLLDirection
modelica_metatype omc_BackendVariable_setHideResult(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _hideResultB)
{
  modelica_metatype _varOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _varOut = _varIn;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_varOut), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[13] = _hideResultB;
  _varOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _varOut;
}

DLLDirection
modelica_metatype omc_BackendVariable_setBindExp(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inBindExp)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[7] = _inBindExp;
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarTS(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTS)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[12] = _inTS;
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarKind(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inVarKind)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = _inVarKind;
  _outVar = tmpMeta1;

  if((omc_BackendVariable_isDummyStateVar(threadData, _outVar) && omc_BackendVariable_varStateSelectAlways(threadData, _outVar)))
  {
    tmpMeta2 = mmc_mk_cons(omc_ComponentReference_crefStr(threadData, omc_BackendVariable_varCref(threadData, _outVar)), MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addMessage(threadData, _OMC_LIT76, tmpMeta2);
  }
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarsKind(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype _inVarKind)
{
  modelica_metatype _outVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVars has no default value.
  _outVars = omc_List_map1(threadData, _inVars, boxvar_BackendVariable_setVarKind, _inVarKind);
  _return: OMC_LABEL_UNUSED
  return _outVars;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarKindForVar(threadData_t *threadData, modelica_integer _idx, modelica_metatype _kind, modelica_metatype _varsIn)
{
  modelica_metatype _varsOut = NULL;
  modelica_metatype _var = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varsOut has no default value.
  // _var has no default value.
  _var = omc_BackendVariable_getVarAt(threadData, _varsIn, _idx);

  _var = omc_BackendVariable_setVarKind(threadData, _var, _kind);

  _varsOut = omc_BackendVariable_setVarAt(threadData, _varsIn, _idx, _var);
  _return: OMC_LABEL_UNUSED
  return _varsOut;
}
modelica_metatype boxptr_BackendVariable_setVarKindForVar(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _kind, modelica_metatype _varsIn)
{
  modelica_integer tmp1;
  modelica_metatype _varsOut = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _varsOut = omc_BackendVariable_setVarKindForVar(threadData, tmp1, _kind, _varsIn);
  /* skip box _varsOut; BackendDAE.Variables */
  return _varsOut;
}

DLLDirection
modelica_metatype omc_BackendVariable_copyVarNewName(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _inVar)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = _cr;
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_createCSEArrayVar(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inType, modelica_metatype _inArryDim)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  { /* match expression */
    {
      modelica_metatype _source = NULL;
      modelica_metatype _path = NULL;
      modelica_metatype _varKind = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _source has no default value.
      // _path has no default value.
      // _varKind has no default value.
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
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!mmc_unbox_boolean(omc_ComponentReference_traverseCref(threadData, _inCref, boxvar_ComponentReference_crefIsRec, mmc_mk_boolean(0 /* false */)))) goto tmp3_end;
          /* Pattern-matching assignment */
          tmpMeta6 = _inType;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,9,4) == 0) goto goto_2;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,3,1) == 0) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _path = tmpMeta8;

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_cons(_path, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box8(3, &DAE_ElementSource_SOURCE__desc, _OMC_LIT40, tmpMeta9, _OMC_LIT41, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13);
          _source = tmpMeta14;

          _varKind = (omc_Types_isDiscreteType(threadData, _inType)?_OMC_LIT77:_OMC_LIT37);
          tmpMeta15 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _inCref, _varKind, _OMC_LIT38, _OMC_LIT39, _inType, mmc_mk_none(), mmc_mk_none(), _inArryDim, _source, omc_DAEUtil_setProtectedAttr(threadData, mmc_mk_none(), 1 /* true */), _OMC_LIT79, _OMC_LIT81, mmc_mk_none(), _OMC_LIT43, _OMC_LIT44, mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          /* Pattern matching succeeded */
          _varKind = (omc_Types_isDiscreteType(threadData, _inType)?_OMC_LIT77:_OMC_LIT37);
          tmpMeta16 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _inCref, _varKind, _OMC_LIT38, _OMC_LIT39, _inType, mmc_mk_none(), mmc_mk_none(), _inArryDim, _OMC_LIT42, omc_DAEUtil_setProtectedAttr(threadData, mmc_mk_none(), 1 /* true */), _OMC_LIT79, _OMC_LIT81, mmc_mk_none(), _OMC_LIT43, _OMC_LIT44, mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          tmpMeta1 = tmpMeta16;
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
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_generateArrayVar(threadData_t *threadData, modelica_metatype _name, modelica_metatype _varKind, modelica_metatype _varType, modelica_metatype _attr)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVars has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _varType;
    {
      modelica_metatype _crlst = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _dims = NULL;
      modelica_metatype _tp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _crlst has no default value.
      // _var has no default value.
      // _dims has no default value.
      // _tp has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _tp = tmpMeta6;
          _dims = tmpMeta7;
          /* Pattern matching succeeded */
          _crlst = omc_ComponentReference_expandCref(threadData, _name, 0 /* false */);
          tmpMeta1 = omc_List_map4(threadData, _crlst, boxvar_BackendVariable_generateVar, _varKind, _tp, _dims, mmc_mk_none());
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _name, _varKind, _OMC_LIT38, _OMC_LIT39, _varType, mmc_mk_none(), mmc_mk_none(), tmpMeta8, _OMC_LIT42, _attr, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT43, _OMC_LIT44, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          _var = tmpMeta9;
          tmpMeta10 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
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
  _outVars = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVars;
}

DLLDirection
modelica_metatype omc_BackendVariable_generateVar(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _varKind, modelica_metatype _varType, modelica_metatype _subs, modelica_metatype _attr)
{
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var has no default value.
  tmpMeta1 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _cr, _varKind, _OMC_LIT38, _OMC_LIT39, _varType, mmc_mk_none(), mmc_mk_none(), _subs, _OMC_LIT42, _attr, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT43, _OMC_LIT44, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
  _var = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _var;
}

DLLDirection
modelica_metatype omc_BackendVariable_createCSEVar(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inType)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  { /* match expression */
    {
      modelica_metatype _source = NULL;
      modelica_metatype _path = NULL;
      modelica_metatype _varKind = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _source has no default value.
      // _path has no default value.
      // _varKind has no default value.
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
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!mmc_unbox_boolean(omc_ComponentReference_traverseCref(threadData, _inCref, boxvar_ComponentReference_crefIsRec, mmc_mk_boolean(0 /* false */)))) goto tmp3_end;
          /* Pattern-matching assignment */
          tmpMeta6 = _inType;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,9,4) == 0) goto goto_2;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,3,1) == 0) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _path = tmpMeta8;

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_cons(_path, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box8(3, &DAE_ElementSource_SOURCE__desc, _OMC_LIT40, tmpMeta9, _OMC_LIT41, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13);
          _source = tmpMeta14;

          _varKind = (omc_Types_isDiscreteType(threadData, _inType)?_OMC_LIT77:_OMC_LIT37);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _inCref, _varKind, _OMC_LIT38, _OMC_LIT39, _inType, mmc_mk_none(), mmc_mk_none(), tmpMeta15, _source, omc_DAEUtil_setProtectedAttr(threadData, mmc_mk_none(), 1 /* true */), _OMC_LIT79, _OMC_LIT81, mmc_mk_none(), _OMC_LIT43, _OMC_LIT44, mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          /* Pattern matching succeeded */
          _varKind = (omc_Types_isDiscreteType(threadData, _inType)?_OMC_LIT77:_OMC_LIT37);
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta18 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _inCref, _varKind, _OMC_LIT38, _OMC_LIT39, _inType, mmc_mk_none(), mmc_mk_none(), tmpMeta17, _OMC_LIT42, omc_DAEUtil_setProtectedAttr(threadData, mmc_mk_none(), 1 /* true */), _OMC_LIT79, _OMC_LIT81, mmc_mk_none(), _OMC_LIT43, _OMC_LIT44, mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          tmpMeta1 = tmpMeta18;
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
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_createTmpVar(threadData_t *threadData, modelica_metatype _inCref, modelica_string _prependStringCref)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  tmpMeta1 = stringAppend(_prependStringCref,intString(omc_System_tmpTickIndex(threadData, ((modelica_integer) 4))));
  _outVar = omc_BackendVariable_createVar(threadData, _inCref, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_createVar(threadData_t *threadData, modelica_metatype _inCref, modelica_string _prependStringCref)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _cr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _cr has no default value.
  _cr = omc_ComponentReference_appendStringLastIdent(threadData, _prependStringCref, _inCref);

  _outVar = omc_BackendVariable_makeVar(threadData, _cr);
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_createAliasDerVar(threadData_t *threadData, modelica_metatype _inCref)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _cr has no default value.
  _cr = omc_ComponentReference_prependStringCref(threadData, _OMC_LIT82, _inCref);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _cr, _OMC_LIT37, _OMC_LIT38, _OMC_LIT39, _OMC_LIT83, mmc_mk_none(), mmc_mk_none(), tmpMeta1, _OMC_LIT42, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT43, _OMC_LIT44, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
  _outVar = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_createClockedState(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _cr has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cr = omc_ComponentReferenceBasics_makeCrefQual(threadData, _OMC_LIT84, _OMC_LIT83, tmpMeta1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))));

  _outVar = omc_BackendVariable_copyVarNewName(threadData, _cr, _inVar);

  _outVar = omc_BackendVariable_setVarKind(threadData, _outVar, _OMC_LIT85);
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_createpDerVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _cr has no default value.
  _cr = omc_BackendVariable_varCref(threadData, _inVar);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cr = omc_ComponentReferenceBasics_makeCrefQual(threadData, _OMC_LIT86, _OMC_LIT83, tmpMeta1, _cr);

  _outVar = omc_BackendVariable_copyVarNewName(threadData, _cr, _inVar);

  _outVar = omc_BackendVariable_setVarKind(threadData, _outVar, _OMC_LIT85);
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_getAnnotationComment(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _comment = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comment has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _com = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _com has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          
          _com = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _com;
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
  _comment = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _comment;
}

DLLDirection
modelica_metatype omc_BackendVariable_getNamedAnnotation(threadData_t *threadData, modelica_metatype _inVar, modelica_string _inName)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype _ann = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  // _ann has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVar;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 14));
  if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  if (optionNone(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  _ann = tmpMeta5;

  /* Pattern-matching assignment */
  tmpMeta6 = omc_SCodeUtil_lookupAnnotationBinding(threadData, _ann, _inName);
  if (optionNone(tmpMeta6)) MMC_THROW_INTERNAL();
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  _outValue = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasAnnotation(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _hasAnnot;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasAnnot has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
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
  _hasAnnot = tmp1;
  _return: OMC_LABEL_UNUSED
  return _hasAnnot;
}
modelica_metatype boxptr_BackendVariable_hasAnnotation(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _hasAnnot;
  modelica_metatype out_hasAnnot;
  _hasAnnot = omc_BackendVariable_hasAnnotation(threadData, _inVar);
  out_hasAnnot = mmc_mk_icon(_hasAnnot);
  return out_hasAnnot;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasVarEvaluateAnnotationFalse(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isFalse;
  modelica_metatype _ann = NULL;
  modelica_metatype _val = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isFalse has no default value.
  // _ann has no default value.
  // _val has no default value.
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
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _inVar;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 14));
          if (optionNone(tmpMeta6)) goto goto_1;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (optionNone(tmpMeta8)) goto goto_1;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          _ann = tmpMeta9;

          /* Pattern-matching assignment */
          tmpMeta10 = omc_SCodeUtil_lookupAnnotationBinding(threadData, _ann, _OMC_LIT87);
          if (optionNone(tmpMeta10)) goto goto_1;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          _val = tmpMeta11;

          _isFalse = (stringEqual(omc_Dump_printExpStr(threadData, _val), _OMC_LIT88));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _isFalse = 0 /* false */;
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
  return _isFalse;
}
modelica_metatype boxptr_BackendVariable_hasVarEvaluateAnnotationFalse(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isFalse;
  modelica_metatype out_isFalse;
  _isFalse = omc_BackendVariable_hasVarEvaluateAnnotationFalse(threadData, _inVar);
  out_isFalse = mmc_mk_icon(_isFalse);
  return out_isFalse;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasVarEvaluateAnnotationTrue(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isTrue;
  modelica_metatype _ann = NULL;
  modelica_metatype _val = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isTrue has no default value.
  // _ann has no default value.
  // _val has no default value.
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
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _inVar;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 14));
          if (optionNone(tmpMeta6)) goto goto_1;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (optionNone(tmpMeta8)) goto goto_1;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          _ann = tmpMeta9;

          /* Pattern-matching assignment */
          tmpMeta10 = omc_SCodeUtil_lookupAnnotationBinding(threadData, _ann, _OMC_LIT87);
          if (optionNone(tmpMeta10)) goto goto_1;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          _val = tmpMeta11;

          _isTrue = (stringEqual(omc_Dump_printExpStr(threadData, _val), _OMC_LIT89));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _isTrue = 0 /* false */;
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
  return _isTrue;
}
modelica_metatype boxptr_BackendVariable_hasVarEvaluateAnnotationTrue(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isTrue;
  modelica_metatype out_isTrue;
  _isTrue = omc_BackendVariable_hasVarEvaluateAnnotationTrue(threadData, _inVar);
  out_isTrue = mmc_mk_icon(_isTrue);
  return out_isTrue;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasVarEvaluateAnnotation(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _select;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _select has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _anno = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _anno has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          _anno = tmpMeta9;
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_hasBooleanNamedAnnotation(threadData, _anno, _OMC_LIT87);
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
  _select = tmp1;
  _return: OMC_LABEL_UNUSED
  return _select;
}
modelica_metatype boxptr_BackendVariable_hasVarEvaluateAnnotation(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _select;
  modelica_metatype out_select;
  _select = omc_BackendVariable_hasVarEvaluateAnnotation(threadData, _inVar);
  out_select = mmc_mk_icon(_select);
  return out_select;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasVarEvaluateAnnotationTrueOrFinalOrProtected(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _select;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _select has no default value.
  _select = (omc_BackendVariable_isFinalOrProtectedVar(threadData, _inVar) || omc_BackendVariable_hasVarEvaluateAnnotationTrue(threadData, _inVar));
  _return: OMC_LABEL_UNUSED
  return _select;
}
modelica_metatype boxptr_BackendVariable_hasVarEvaluateAnnotationTrueOrFinalOrProtected(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _select;
  modelica_metatype out_select;
  _select = omc_BackendVariable_hasVarEvaluateAnnotationTrueOrFinalOrProtected(threadData, _inVar);
  out_select = mmc_mk_icon(_select);
  return out_select;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasVarEvaluateAnnotationTrueOrProtected(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _select;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _select has no default value.
  _select = (omc_BackendVariable_isProtectedVar(threadData, _inVar) || omc_BackendVariable_hasVarEvaluateAnnotationTrue(threadData, _inVar));
  _return: OMC_LABEL_UNUSED
  return _select;
}
modelica_metatype boxptr_BackendVariable_hasVarEvaluateAnnotationTrueOrProtected(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _select;
  modelica_metatype out_select;
  _select = omc_BackendVariable_hasVarEvaluateAnnotationTrueOrProtected(threadData, _inVar);
  out_select = mmc_mk_icon(_select);
  return out_select;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasVarEvaluateAnnotationTrueOrFinal(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _select;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _select has no default value.
  _select = (omc_BackendVariable_isFinalVar(threadData, _inVar) || omc_BackendVariable_hasVarEvaluateAnnotationTrue(threadData, _inVar));
  _return: OMC_LABEL_UNUSED
  return _select;
}
modelica_metatype boxptr_BackendVariable_hasVarEvaluateAnnotationTrueOrFinal(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _select;
  modelica_metatype out_select;
  _select = omc_BackendVariable_hasVarEvaluateAnnotationTrueOrFinal(threadData, _inVar);
  out_select = mmc_mk_icon(_select);
  return out_select;
}

DLLDirection
modelica_boolean omc_BackendVariable_isProtected(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 11)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,15) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 14));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _b = tmp9  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _b;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,11) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 10));
          if (optionNone(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          
          _b = tmp13  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _b;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,2,7) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 6));
          if (optionNone(tmpMeta15)) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          
          _b = tmp17  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _b;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,4,7) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 6));
          if (optionNone(tmpMeta19)) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 1));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          
          _b = tmp21  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _b;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,5,9) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 8));
          if (optionNone(tmpMeta23)) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          
          _b = tmp25  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _b;
          goto tmp3_done;
        }
        case 5: {
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_isProtected(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_isProtected(threadData, _v);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_BackendVariable_isProtectedVar(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _hidden;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hidden = omc_DAEUtil_getProtectedAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 11))));
  _return: OMC_LABEL_UNUSED
  return _hidden;
}
modelica_metatype boxptr_BackendVariable_isProtectedVar(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _hidden;
  modelica_metatype out_hidden;
  _hidden = omc_BackendVariable_isProtectedVar(threadData, _v);
  out_hidden = mmc_mk_icon(_hidden);
  return out_hidden;
}

DLLDirection
modelica_boolean omc_BackendVariable_isOutput(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inVars)
{
  modelica_boolean _outBool;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBool has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta6 = omc_BackendVariable_getVar(threadData, _inCref, _inVars, NULL);
          if (listEmpty(tmpMeta6)) goto goto_2;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,0) == 0) goto goto_2;
          
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
  _outBool = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBool;
}
modelica_metatype boxptr_BackendVariable_isOutput(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inVars)
{
  modelica_boolean _outBool;
  modelica_metatype out_outBool;
  _outBool = omc_BackendVariable_isOutput(threadData, _inCref, _inVars);
  out_outBool = mmc_mk_icon(_outBool);
  return out_outBool;
}

DLLDirection
modelica_boolean omc_BackendVariable_isRealOutputVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isRealOutputVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isRealOutputVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isRealVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isRealVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isRealVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isOutputAliasVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_string _s = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  // _s has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _s = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_StringUtil_startsWith(threadData, _s, _OMC_LIT90);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isOutputAliasVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isOutputAliasVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isOutputVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isOutputVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isOutputVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isInput(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isInput(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isInput(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isNonRealParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  _outBoolean = (!omc_BackendVariable_isRealParam(threadData, _inVar));
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isNonRealParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isNonRealParam(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasTimeGridAnno(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _comm = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _comm has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _comm = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_commentHasBooleanNamedAnnotation(threadData, _comm, _OMC_LIT91);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_hasTimeGridAnno(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_hasTimeGridAnno(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasFinalConTermAnno(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _comm = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _comm has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _comm = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_commentHasBooleanNamedAnnotation(threadData, _comm, _OMC_LIT92);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_hasFinalConTermAnno(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_hasFinalConTermAnno(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasConTermAnno(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _comm = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _comm has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _comm = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_commentHasBooleanNamedAnnotation(threadData, _comm, _OMC_LIT93);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_hasConTermAnno(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_hasConTermAnno(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasLagrangeTermAnno(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _comm = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _comm has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _comm = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_commentHasBooleanNamedAnnotation(threadData, _comm, _OMC_LIT94);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_hasLagrangeTermAnno(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_hasLagrangeTermAnno(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasOpenModelicaBoundaryConditionAnnotation(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _comm = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _comm has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _comm = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_commentHasBooleanNamedAnnotation(threadData, _comm, _OMC_LIT95);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_hasOpenModelicaBoundaryConditionAnnotation(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_hasOpenModelicaBoundaryConditionAnnotation(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasMayerTermAnno(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _comm = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _comm has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _comm = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_commentHasBooleanNamedAnnotation(threadData, _comm, _OMC_LIT96);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_hasMayerTermAnno(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_hasMayerTermAnno(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isRESVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2)));
    {
      modelica_string _s = NULL;
      int tmp4;
      // _s has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _s = tmpMeta5;
          /* Pattern matching succeeded */
          tmp1 = omc_StringUtil_startsWith(threadData, _s, _OMC_LIT97);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _s = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_StringUtil_startsWith(threadData, _s, _OMC_LIT97);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isRESVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isRESVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isCSEVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_CommonSubExpression_isCSECref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))))) goto tmp3_end;
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isCSEVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isCSEVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isAlgebraicOldState(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,20,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isAlgebraicOldState(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isAlgebraicOldState(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isRealOptimizeDerInput(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,16,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isRealOptimizeDerInput(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isRealOptimizeDerInput(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isRealOptimizeFinalConstraintsVars(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,14,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isRealOptimizeFinalConstraintsVars(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isRealOptimizeFinalConstraintsVars(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isDAEmodeAuxVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,22,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isDAEmodeAuxVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isDAEmodeAuxVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isDAEmodeResVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,21,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isDAEmodeResVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isDAEmodeResVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isDAEmodeVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,21,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,22,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isDAEmodeVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isDAEmodeVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isRealOptimizeConstraintsVars(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,13,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isRealOptimizeConstraintsVars(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isRealOptimizeConstraintsVars(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isRealParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isRealParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isRealParam(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isAlgState(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,19,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isAlgState(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isAlgState(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isExtObj(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,9,1) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isExtObj(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isExtObj(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isStringParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,1) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isStringParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isStringParam(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isBoolParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,3,1) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isBoolParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isBoolParam(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isIntParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,7,0) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,5,5) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isIntParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isIntParam(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isParamOrConstant(threadData_t *threadData, modelica_metatype _invar)
{
  modelica_boolean _outbool;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outbool = 0 /* false */;
  _outbool = (omc_BackendVariable_isParam(threadData, _invar) || omc_BackendVariable_isConst(threadData, _invar));
  _return: OMC_LABEL_UNUSED
  return _outbool;
}
modelica_metatype boxptr_BackendVariable_isParamOrConstant(threadData_t *threadData, modelica_metatype _invar)
{
  modelica_boolean _outbool;
  modelica_metatype out_outbool;
  _outbool = omc_BackendVariable_isParamOrConstant(threadData, _invar);
  out_outbool = mmc_mk_icon(_outbool);
  return out_outbool;
}

DLLDirection
modelica_metatype omc_BackendVariable_makeParamOutputsOnly(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_boolean __omcQ_24in_5Ffixed, modelica_boolean *out_fixed)
{
  modelica_metatype _var = NULL;
  modelica_boolean _fixed;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  _fixed = __omcQ_24in_5Ffixed;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = _OMC_LIT98;
  _var = tmpMeta1;

  _var = omc_BackendVariable_setHideResult(threadData, _var, _OMC_LIT81);

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[11] = (isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11))))?(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11))):mmc_mk_some(omc_BackendVariable_getVariableAttributefromType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6))))));
  _var = tmpMeta2;

  if(isNone(omc_DAEUtil_getFixedAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11))))))
  {
    tmpMeta4 = mmc_mk_box2(6, &DAE_Exp_BCONST__desc, mmc_mk_boolean(_fixed));
    tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(20));
    memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[11] = omc_DAEUtil_setFixedAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11))), mmc_mk_some(tmpMeta4));
    _var = tmpMeta3;
  }
  _return: OMC_LABEL_UNUSED
  if (out_fixed) { *out_fixed = _fixed; }
  return _var;
}
modelica_metatype boxptr_BackendVariable_makeParamOutputsOnly(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype __omcQ_24in_5Ffixed, modelica_metatype *out_fixed)
{
  modelica_integer tmp1;
  modelica_boolean _fixed;
  modelica_metatype _var = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Ffixed);
  _var = omc_BackendVariable_makeParamOutputsOnly(threadData, __omcQ_24in_5Fvar, tmp1, &_fixed);
  /* skip box _var; BackendDAE.Var */
  if (out_fixed) { *out_fixed = mmc_mk_icon(_fixed); }
  return _var;
}

DLLDirection
modelica_metatype omc_BackendVariable_makeParam(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar)
{
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = _OMC_LIT98;
  _var = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _var;
}

DLLDirection
modelica_boolean omc_BackendVariable_isParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,17,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isParam(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isParam(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isConst(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,8,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isConst(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isConst(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isFlowVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isFlowVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isFlowVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarConnector(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
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
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarConnector(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarConnector(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarBoolParam(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
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
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isParam(threadData, _var)) goto tmp3_end;
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarBoolParam(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarBoolParam(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarIntParam(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isParam(threadData, _var)) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isParam(threadData, _var)) goto tmp3_end;
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarIntParam(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarIntParam(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarStringParam(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
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
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isParam(threadData, _var)) goto tmp3_end;
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarStringParam(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarStringParam(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarParam(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isParam(threadData, _var)) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarParam(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarParam(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarBoolConst(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
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
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isConst(threadData, _var)) goto tmp3_end;
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarBoolConst(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarBoolConst(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarIntConst(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isConst(threadData, _var)) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isConst(threadData, _var)) goto tmp3_end;
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarIntConst(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarIntConst(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarStringConst(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
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
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isConst(threadData, _var)) goto tmp3_end;
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarStringConst(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarStringConst(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarConst(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_isConst(threadData, _var)) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarConst(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarConst(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarAlg(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3)));
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarAlg(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarAlg(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarDiscreteRealAlg(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,0) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarDiscreteRealAlg(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarDiscreteRealAlg(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_isOptInputVar(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3)));
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 21: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_isOptInputVar(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_isOptInputVar(threadData, _var);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarNonDiscreteAlg(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
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
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((omc_BackendVariable_isVarAlg(threadData, _var) && (!omc_BackendVariable_isVarDiscreteRealAlg(threadData, _var))) || omc_BackendVariable_isOptInputVar(threadData, _var));
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_BackendVariable_isVarNonDiscreteAlg(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_BackendVariable_isVarNonDiscreteAlg(threadData, _var);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasContinuousVar(threadData_t *threadData, modelica_metatype _inBackendDAEVarLst)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inBackendDAEVarLst;
    {
      modelica_metatype _vs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vs has no default value.
      tmp4 = 0;
      for (; tmp4 < 15; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,0) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,0,0) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,6,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,2,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmp4_1);
          tmpMeta22 = MMC_CDR(tmp4_1);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,3,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmp4_1);
          tmpMeta25 = MMC_CDR(tmp4_1);
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,4,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta27 = MMC_CAR(tmp4_1);
          tmpMeta28 = MMC_CDR(tmp4_1);
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,13,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta30 = MMC_CAR(tmp4_1);
          tmpMeta31 = MMC_CDR(tmp4_1);
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,14,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta33 = MMC_CAR(tmp4_1);
          tmpMeta34 = MMC_CDR(tmp4_1);
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,15,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta36 = MMC_CAR(tmp4_1);
          tmpMeta37 = MMC_CDR(tmp4_1);
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,16,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta39 = MMC_CAR(tmp4_1);
          tmpMeta40 = MMC_CDR(tmp4_1);
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,17,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta42 = MMC_CAR(tmp4_1);
          tmpMeta43 = MMC_CDR(tmp4_1);
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,18,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta45 = MMC_CAR(tmp4_1);
          tmpMeta46 = MMC_CDR(tmp4_1);
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,19,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta48 = MMC_CAR(tmp4_1);
          tmpMeta49 = MMC_CDR(tmp4_1);
          _vs = tmpMeta49;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inBackendDAEVarLst = _vs;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 14: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_hasContinuousVar(threadData_t *threadData, modelica_metatype _inBackendDAEVarLst)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_hasContinuousVar(threadData, _inBackendDAEVarLst);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_hasDiscreteVar(threadData_t *threadData, modelica_metatype _inBackendDAEVarLst)
{
  modelica_boolean _outBoolean;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outBoolean = 0 /* false */;
  {
    modelica_metatype _v;
    for (tmpMeta1 = _inBackendDAEVarLst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      _outBoolean = omc_BackendVariable_isVarDiscrete(threadData, _v);

      if(_outBoolean)
      {
        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_hasDiscreteVar(threadData_t *threadData, modelica_metatype _inBackendDAEVarLst)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_hasDiscreteVar(threadData, _inBackendDAEVarLst);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarNonDiscrete(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  _outBoolean = (!omc_BackendVariable_isVarDiscrete(threadData, _inVar));
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isVarNonDiscrete(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isVarNonDiscrete(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isDiscrete(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars)
{
  modelica_boolean _outBoolean;
  modelica_metatype _v = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  // _v has no default value.
  _v = omc_BackendVariable_getVarSingle(threadData, _cr, _vars, NULL);

  _outBoolean = omc_BackendVariable_isVarDiscrete(threadData, _v);
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isDiscrete(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _vars)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isDiscrete(threadData, _cr, _vars);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarClockedState(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_string _test = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  // _test has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,2) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;

  _test = _OMC_LIT23;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isVarClockedState(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isVarClockedState(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarNonDifferentiable(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isVarNonDifferentiable(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isVarNonDifferentiable(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isVarDiscrete(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,8,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isVarDiscrete(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isVarDiscrete(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isStateorStateDerVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isStateorStateDerVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isStateorStateDerVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isStateDerVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isStateDerVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isStateDerVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isDummyDerVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,0) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isDummyDerVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isDummyDerVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isDummyStateVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isDummyStateVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isDummyStateVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasUncertaintyAttribute(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 11));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,11) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 7));
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_varHasUncertaintyAttribute(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_varHasUncertaintyAttribute(threadData, _var);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasDistributionAttribute(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 12));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,11) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 8));
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_varHasDistributionAttribute(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_varHasDistributionAttribute(threadData, _var);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_BackendVariable_varUncertainty(threadData_t *threadData, modelica_metatype _var)
{
  modelica_metatype _u = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 11));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          _u = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = _u;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,11) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 7));
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          
          _u = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta1 = _u;
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
  _u = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _u;
}

DLLDirection
modelica_metatype omc_BackendVariable_varTryGetDistribution(threadData_t *threadData, modelica_metatype _var)
{
  modelica_metatype _dout = NULL;
  modelica_metatype _d = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dout has no default value.
  // _d has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 12));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          _d = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = _d;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,11) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 8));
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          
          _d = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta1 = _d;
          goto tmp3_done;
        }
        case 2: {
          
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
  _dout = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dout;
}

DLLDirection
modelica_metatype omc_BackendVariable_varDistribution(threadData_t *threadData, modelica_metatype _var)
{
  modelica_metatype _d = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 12));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          _d = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = _d;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,11) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 8));
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          
          _d = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta1 = _d;
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
  _d = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _d;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasUncertainValuePropagate(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 11));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,0) == 0) goto tmp3_end;
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_varHasUncertainValuePropagate(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_varHasUncertainValuePropagate(threadData, _var);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasUncertainValueRefine(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 11));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,11) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 7));
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,2,0) == 0) goto tmp3_end;
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_varHasUncertainValueRefine(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_varHasUncertainValueRefine(threadData, _var);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_BackendVariable_isClockedState(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inVars)
{
  modelica_boolean _outBool;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBool has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta6 = omc_BackendVariable_getVar(threadData, _inCref, _inVars, NULL);
          if (listEmpty(tmpMeta6)) goto goto_2;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,5,2) == 0) goto goto_2;
          
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
  _outBool = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBool;
}
modelica_metatype boxptr_BackendVariable_isClockedState(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inVars)
{
  modelica_boolean _outBool;
  modelica_metatype out_outBool;
  _outBool = omc_BackendVariable_isClockedState(threadData, _inCref, _inVars);
  out_outBool = mmc_mk_icon(_outBool);
  return out_outBool;
}

DLLDirection
modelica_boolean omc_BackendVariable_isClockedStateVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBool;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBool has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,2) == 0) goto tmp3_end;
          
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
  _outBool = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBool;
}
modelica_metatype boxptr_BackendVariable_isClockedStateVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBool;
  modelica_metatype out_outBool;
  _outBool = omc_BackendVariable_isClockedStateVar(threadData, _inVar);
  out_outBool = mmc_mk_icon(_outBool);
  return out_outBool;
}

DLLDirection
modelica_boolean omc_BackendVariable_isNonStateVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 15; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,3,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,4,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,13,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,14,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta13;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,15,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta14;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,16,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta15;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,17,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta16;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,18,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta17;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,19,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta18;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,23,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta19;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,24,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 14: {
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isNonStateVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isNonStateVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVariable_isState(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inVars)
{
  modelica_boolean _outBool;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBool has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta6 = omc_BackendVariable_getVar(threadData, _inCref, _inVars, NULL);
          if (listEmpty(tmpMeta6)) goto goto_2;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,3) == 0) goto goto_2;
          
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
  _outBool = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBool;
}
modelica_metatype boxptr_BackendVariable_isState(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inVars)
{
  modelica_boolean _outBool;
  modelica_metatype out_outBool;
  _outBool = omc_BackendVariable_isState(threadData, _inCref, _inVars);
  out_outBool = mmc_mk_icon(_outBool);
  return out_outBool;
}

DLLDirection
modelica_boolean omc_BackendVariable_isStateVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_isStateVar(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_isStateVar(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_metatype omc_BackendVariable_varCref(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outComponentRef = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outComponentRef has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVar;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _outComponentRef = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outComponentRef;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasNominalValue(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBool;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBool has no default value.
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _inVar;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 11));
          if (optionNone(tmpMeta6)) goto goto_1;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto goto_1;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 9));
          if (optionNone(tmpMeta8)) goto goto_1;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,1) == 0) goto goto_1;
          

          _outBool = 1 /* true */;
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _outBool = 0 /* false */;
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
  return _outBool;
}
modelica_metatype boxptr_BackendVariable_varHasNominalValue(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBool;
  modelica_metatype out_outBool;
  _outBool = omc_BackendVariable_varHasNominalValue(threadData, _inVar);
  out_outBool = mmc_mk_icon(_outBool);
  return out_outBool;
}

DLLDirection
modelica_real omc_BackendVariable_varNominal(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_real _outReal;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outReal has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVar;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,0,15) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 9));
  if (optionNone(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,1,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
  tmp7 = mmc_unbox_real(tmpMeta6);
  _outReal = tmp7  /* pattern as ty=Real */;
  _return: OMC_LABEL_UNUSED
  return _outReal;
}
modelica_metatype boxptr_BackendVariable_varNominal(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_real _outReal;
  modelica_metatype out_outReal;
  _outReal = omc_BackendVariable_varNominal(threadData, _inVar);
  out_outReal = mmc_mk_rcon(_outReal);
  return out_outReal;
}

DLLDirection
modelica_metatype omc_BackendVariable_varKind(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outVarKind = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarKind has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVar;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _outVarKind = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outVarKind;
}

DLLDirection
modelica_metatype omc_BackendVariable_varType(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outType = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outType has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVar;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  _outType = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outType;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarNominalValue(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inExp)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oattr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _oattr has no default value.
  _oattr = (isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))))?(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))):mmc_mk_some(omc_BackendVariable_getVariableAttributefromType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6))))));

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = omc_DAEUtil_setNominalAttr(threadData, _oattr, _inExp);
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_varNominalValue(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVar;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,0,15) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 9));
  if (optionNone(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  _outExp = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarMinMax(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inMin, modelica_metatype _inMax)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oattr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _oattr has no default value.
  if((isSome(_inMin) || isSome(_inMax)))
  {
    _oattr = (isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))))?(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))):mmc_mk_some(omc_BackendVariable_getVariableAttributefromType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6))))));

    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = omc_DAEUtil_setMinMax(threadData, _oattr, _inMin, _inMax);
    _outVar = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarFinal(threadData_t *threadData, modelica_metatype _inVar, modelica_boolean _finalPrefix)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oattr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _oattr has no default value.
  _oattr = (isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))))?(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))):mmc_mk_some(omc_BackendVariable_getVariableAttributefromType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6))))));

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = omc_DAEUtil_setFinalAttr(threadData, _oattr, _finalPrefix);
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_setVarFinal(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _finalPrefix)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_finalPrefix);
  _outVar = omc_BackendVariable_setVarFinal(threadData, _inVar, tmp1);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_getVariableAttributefromType(threadData_t *threadData, modelica_metatype _inType)
{
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _attr has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inType;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT99;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT100;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT101;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT102;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT103;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT107))
          {
            omc_Debug_trace(threadData, _OMC_LIT104);
          }
          tmpMeta1 = _OMC_LIT99;
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
  _attr = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _attr;
}

DLLDirection
modelica_metatype omc_BackendVariable_setStateDerivative(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _derName)
{
  modelica_metatype _var = NULL;
  modelica_integer _index;
  modelica_boolean _natural;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  // _index has no default value.
  // _natural has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3)));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _index = tmp3  /* pattern as ty=Integer */;
  _natural = tmp5  /* pattern as ty=Boolean */;

  tmpMeta7 = mmc_mk_box4(4, &BackendDAE_VarKind_STATE__desc, mmc_mk_integer(_index), _derName, mmc_mk_boolean(_natural));
  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
  _var = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _var;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasStateDerivative(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_varHasStateDerivative(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_varHasStateDerivative(threadData, _inVar);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_BackendVariable_varStateDerivative(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _dcr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dcr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVar;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
  _dcr = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _dcr;
}

DLLDirection
modelica_boolean omc_BackendVariable_isArtificialState(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _artificial;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _artificial has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      modelica_boolean _n;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _n has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _n = tmp8  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = (!_n);
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
  _artificial = tmp1;
  _return: OMC_LABEL_UNUSED
  return _artificial;
}
modelica_metatype boxptr_BackendVariable_isArtificialState(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _artificial;
  modelica_metatype out_artificial;
  _artificial = omc_BackendVariable_isArtificialState(threadData, _var);
  out_artificial = mmc_mk_icon(_artificial);
  return out_artificial;
}

DLLDirection
modelica_boolean omc_BackendVariable_isNaturalState(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _natural;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _natural has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      modelica_boolean _n;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _n has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _n = tmp8  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _n;
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
  _natural = tmp1;
  _return: OMC_LABEL_UNUSED
  return _natural;
}
modelica_metatype boxptr_BackendVariable_isNaturalState(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _natural;
  modelica_metatype out_natural;
  _natural = omc_BackendVariable_isNaturalState(threadData, _var);
  out_natural = mmc_mk_icon(_natural);
  return out_natural;
}

DLLDirection
modelica_boolean omc_BackendVariable_varStateSelectForced(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isForced;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isForced has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 10));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,4,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,15) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 10));
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,3,0) == 0) goto tmp3_end;
          
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
  _isForced = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isForced;
}
modelica_metatype boxptr_BackendVariable_varStateSelectForced(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isForced;
  modelica_metatype out_isForced;
  _isForced = omc_BackendVariable_varStateSelectForced(threadData, _inVar);
  out_isForced = mmc_mk_icon(_isForced);
  return out_isForced;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarStateSelect(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _stateSelect)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oattr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _oattr has no default value.
  _oattr = (isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))))?(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))):mmc_mk_some(omc_BackendVariable_getVariableAttributefromType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6))))));

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = omc_DAEUtil_setStateSelect(threadData, _oattr, _stateSelect);
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_boolean omc_BackendVariable_varStateSelectPrefer(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isPrefer;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isPrefer has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_BackendVariable_varStateSelect(threadData, _inVar);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,0) == 0) goto tmp3_end;
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
  _isPrefer = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isPrefer;
}
modelica_metatype boxptr_BackendVariable_varStateSelectPrefer(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isPrefer;
  modelica_metatype out_isPrefer;
  _isPrefer = omc_BackendVariable_varStateSelectPrefer(threadData, _inVar);
  out_isPrefer = mmc_mk_icon(_isPrefer);
  return out_isPrefer;
}

DLLDirection
modelica_boolean omc_BackendVariable_varStateSelectAvoid(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isAvoid;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isAvoid has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_BackendVariable_varStateSelect(threadData, _inVar);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
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
  _isAvoid = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isAvoid;
}
modelica_metatype boxptr_BackendVariable_varStateSelectAvoid(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isAvoid;
  modelica_metatype out_isAvoid;
  _isAvoid = omc_BackendVariable_varStateSelectAvoid(threadData, _inVar);
  out_isAvoid = mmc_mk_icon(_isAvoid);
  return out_isAvoid;
}

DLLDirection
modelica_boolean omc_BackendVariable_varStateSelectNever(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isNever;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isNever has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_BackendVariable_varStateSelect(threadData, _inVar);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
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
  _isNever = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isNever;
}
modelica_metatype boxptr_BackendVariable_varStateSelectNever(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _isNever;
  modelica_metatype out_isNever;
  _isNever = omc_BackendVariable_varStateSelectNever(threadData, _inVar);
  out_isNever = mmc_mk_icon(_isNever);
  return out_isNever;
}

DLLDirection
modelica_boolean omc_BackendVariable_notVarStateSelectAlways(threadData_t *threadData, modelica_metatype _v, modelica_integer _level)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _v;
    {
      modelica_integer _diffcount;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _diffcount has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _diffcount = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = (!(omc_BackendVariable_varStateSelectAlways(threadData, _v) && ((_diffcount == _level) || (_diffcount == ((modelica_integer) 1)))));
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_notVarStateSelectAlways(threadData_t *threadData, modelica_metatype _v, modelica_metatype _level)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_level);
  _b = omc_BackendVariable_notVarStateSelectAlways(threadData, _v, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_BackendVariable_varStateSelectAlways(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _v;
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,15) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 10));
          if (optionNone(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,4,0) == 0) goto tmp3_end;
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_varStateSelectAlways(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_varStateSelectAlways(threadData, _v);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasStateSelect(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 10));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_BackendVariable_varHasStateSelect(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVariable_varHasStateSelect(threadData, _inVar);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_BackendVariable_varStateSelect(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _outStateSelect = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStateSelect has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _stateselect = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _stateselect has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 10));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          _stateselect = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = _stateselect;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT108;
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
  _outStateSelect = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outStateSelect;
}

DLLDirection
modelica_metatype omc_BackendVariable_varBindExpStartValueNoFail(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _sv = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sv has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _v;
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
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _e = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = _e;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_BackendVariable_varStartValue(threadData, _v);
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
  _sv = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sv;
}

DLLDirection
modelica_metatype omc_BackendVariable_varBindExpStartValue(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _sv = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sv has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _v;
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
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _e = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = _e;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_BackendVariable_varStartValueFail(threadData, _v);
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
  _sv = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sv;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasBindExp(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _v;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
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
modelica_metatype boxptr_BackendVariable_varHasBindExp(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_BackendVariable_varHasBindExp(threadData, _v);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasConstantStartExp(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _out;
  modelica_metatype _e = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _e has no default value.
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
          _e = omc_BackendVariable_varStartValueFail(threadData, _v);

          _out = omc_Expression_isConstValue(threadData, _e);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _out = 1 /* true */;
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
  return _out;
}
modelica_metatype boxptr_BackendVariable_varHasConstantStartExp(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_BackendVariable_varHasConstantStartExp(threadData, _v);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasNonConstantBindExpOrStartValue(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _v;
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
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _e = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = (!omc_Expression_isConstValue(threadData, _e));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = (!omc_BackendVariable_varHasConstantStartExp(threadData, _v));
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
modelica_metatype boxptr_BackendVariable_varHasNonConstantBindExpOrStartValue(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_BackendVariable_varHasNonConstantBindExpOrStartValue(threadData, _v);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasConstantBindExp(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _v;
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
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _e = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_Expression_isConst(threadData, _e);
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
modelica_metatype boxptr_BackendVariable_varHasConstantBindExp(threadData_t *threadData, modelica_metatype _v)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_BackendVariable_varHasConstantBindExp(threadData, _v);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

DLLDirection
modelica_metatype omc_BackendVariable_varBindExp(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _sv = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sv has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _v;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  _sv = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _sv;
}

DLLDirection
modelica_metatype omc_BackendVariable_varStartOrigin(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _so = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _so has no default value.
  // _attr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _v;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  _attr = tmpMeta2;

  _so = omc_DAEUtil_getStartOrigin(threadData, _attr);
  _return: OMC_LABEL_UNUSED
  return _so;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasNoStartValue(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outHasNoStartValue;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHasNoStartValue has no default value.
  _outHasNoStartValue = (!omc_BackendVariable_varHasStartValue(threadData, _inVar));
  _return: OMC_LABEL_UNUSED
  return _outHasNoStartValue;
}
modelica_metatype boxptr_BackendVariable_varHasNoStartValue(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outHasNoStartValue;
  modelica_metatype out_outHasNoStartValue;
  _outHasNoStartValue = omc_BackendVariable_varHasNoStartValue(threadData, _inVar);
  out_outHasNoStartValue = mmc_mk_icon(_outHasNoStartValue);
  return out_outHasNoStartValue;
}

DLLDirection
modelica_boolean omc_BackendVariable_varHasStartValue(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outHasStartValue;
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHasStartValue has no default value.
  // _attr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inVar;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  _attr = tmpMeta2;

  _outHasStartValue = omc_DAEUtil_hasStartAttr(threadData, _attr);
  _return: OMC_LABEL_UNUSED
  return _outHasStartValue;
}
modelica_metatype boxptr_BackendVariable_varHasStartValue(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outHasStartValue;
  modelica_metatype out_outHasStartValue;
  _outHasStartValue = omc_BackendVariable_varHasStartValue(threadData, _inVar);
  out_outHasStartValue = mmc_mk_icon(_outHasStartValue);
  return out_outHasStartValue;
}

DLLDirection
modelica_metatype omc_BackendVariable_varStartValueOption(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _sv = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sv has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _v;
    {
      modelica_metatype _attr = NULL;
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _attr has no default value.
      // _exp has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          
          _attr = tmpMeta6;
          /* Pattern matching succeeded */
          _exp = omc_DAEUtil_getStartAttrFail(threadData, _attr);
          tmpMeta1 = mmc_mk_some(_exp);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
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
  _sv = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sv;
}

DLLDirection
modelica_metatype omc_BackendVariable_varStartValueType(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _sv = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sv has no default value.
  // _attr has no default value.
  // _ty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _v;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  _ty = tmpMeta2;
  _attr = tmpMeta3;

  _sv = omc_DAEUtil_getStartAttr(threadData, _attr, _ty);
  _return: OMC_LABEL_UNUSED
  return _sv;
}

DLLDirection
modelica_metatype omc_BackendVariable_varMaxValueFail(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _sv = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sv has no default value.
  // _attr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _v;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  _attr = tmpMeta2;

  _sv = omc_DAEUtil_getMaxAttrFail(threadData, _attr);
  _return: OMC_LABEL_UNUSED
  return _sv;
}

DLLDirection
modelica_metatype omc_BackendVariable_varMinValueFail(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _sv = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sv has no default value.
  // _attr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _v;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  _attr = tmpMeta2;

  _sv = omc_DAEUtil_getMinAttrFail(threadData, _attr);
  _return: OMC_LABEL_UNUSED
  return _sv;
}

DLLDirection
modelica_metatype omc_BackendVariable_varNominalValueFail(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _sv = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sv has no default value.
  // _attr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _v;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  _attr = tmpMeta2;

  _sv = omc_DAEUtil_getNominalAttrFail(threadData, _attr);
  _return: OMC_LABEL_UNUSED
  return _sv;
}

DLLDirection
modelica_metatype omc_BackendVariable_varStartValueFail(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _sv = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sv has no default value.
  // _attr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _v;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  _attr = tmpMeta2;

  _sv = omc_DAEUtil_getStartAttrFail(threadData, _attr);
  _return: OMC_LABEL_UNUSED
  return _sv;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarInitNonlinear(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_boolean _value)
{
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[18] = mmc_mk_boolean(_value);
  _var = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _var;
}
modelica_metatype boxptr_BackendVariable_setVarInitNonlinear(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _value)
{
  modelica_integer tmp1;
  modelica_metatype _var = NULL;
  tmp1 = mmc_unbox_integer(_value);
  _var = omc_BackendVariable_setVarInitNonlinear(threadData, __omcQ_24in_5Fvar, tmp1);
  /* skip box _var; BackendDAE.Var */
  return _var;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarUnreplaceable(threadData_t *threadData, modelica_metatype _inVar, modelica_boolean _value)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[17] = mmc_mk_boolean(_value);
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_setVarUnreplaceable(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _value)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_value);
  _outVar = omc_BackendVariable_setVarUnreplaceable(threadData, _inVar, tmp1);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

DLLDirection
modelica_boolean omc_BackendVariable_varUnreplaceable(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outUnreplaceable;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outUnreplaceable = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 17))));
  _return: OMC_LABEL_UNUSED
  return _outUnreplaceable;
}
modelica_metatype boxptr_BackendVariable_varUnreplaceable(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outUnreplaceable;
  modelica_metatype out_outUnreplaceable;
  _outUnreplaceable = omc_BackendVariable_varUnreplaceable(threadData, _inVar);
  out_outUnreplaceable = mmc_mk_icon(_outUnreplaceable);
  return out_outUnreplaceable;
}

DLLDirection
modelica_metatype omc_BackendVariable_varStartValue(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype _sv = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sv has no default value.
  _sv = omc_DAEUtil_getStartAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6))));
  _return: OMC_LABEL_UNUSED
  return _sv;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarAttributes(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inAttr)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = _inAttr;
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarStartOrigin(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _startOrigin)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oattr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _oattr has no default value.
  _oattr = (isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))))?(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))):mmc_mk_some(omc_BackendVariable_getVariableAttributefromType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6))))));

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = omc_DAEUtil_setStartOrigin(threadData, _oattr, _startOrigin);
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarStartValueOption(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inExp)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oattr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _oattr has no default value.
  _oattr = (isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))))?(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))):mmc_mk_some(omc_BackendVariable_getVariableAttributefromType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6))))));

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = omc_DAEUtil_setStartAttrOption(threadData, _oattr, _inExp);
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarStartValue(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inExp)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oattr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _oattr has no default value.
  _oattr = (isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))))?(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))):mmc_mk_some(omc_BackendVariable_getVariableAttributefromType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6))))));

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = omc_DAEUtil_setStartAttr(threadData, _oattr, _inExp);
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

DLLDirection
modelica_boolean omc_BackendVariable_varFixed(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_boolean _fixed;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fixed has no default value.
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,15) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 8));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          
          _fixed = tmp11  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _fixed;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,1,11) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 6));
          if (optionNone(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,3,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          
          _fixed = tmp17  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _fixed;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta18)) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,2,7) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 4));
          if (optionNone(tmpMeta20)) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,3,1) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          
          _fixed = tmp23  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _fixed;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta24)) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,4,7) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 4));
          if (optionNone(tmpMeta26)) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,3,1) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
          tmp29 = mmc_unbox_integer(tmpMeta28);
          
          _fixed = tmp29  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _fixed;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_integer tmp35;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta30)) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,5,9) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 6));
          if (optionNone(tmpMeta32)) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,3,1) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 2));
          tmp35 = mmc_unbox_integer(tmpMeta34);
          
          _fixed = tmp35  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _fixed;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta36;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta36,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,8,0) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta38)) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 1));
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_varFixed(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_varFixed(threadData, _inVar);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_metatype omc_BackendVariable_removeStartAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar)
{
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11)))))
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = omc_DAEUtil_setStartAttrOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11))), mmc_mk_none());
    _var = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _var;
}

DLLDirection
modelica_metatype omc_BackendVariable_removeFixedAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar)
{
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11)))))
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = omc_DAEUtil_setFixedAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11))), mmc_mk_none());
    _var = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _var;
}

DLLDirection
modelica_metatype omc_BackendVariable_setVarFixed(threadData_t *threadData, modelica_metatype _inVar, modelica_boolean _inBoolean)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _oattr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  // _oattr has no default value.
  _oattr = (isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))))?(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 11))):mmc_mk_some(omc_BackendVariable_getVariableAttributefromType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6))))));

  tmpMeta2 = mmc_mk_box2(6, &DAE_Exp_BCONST__desc, mmc_mk_boolean(_inBoolean));
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(20));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outVar), 20*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[11] = omc_DAEUtil_setFixedAttr(threadData, _oattr, mmc_mk_some(tmpMeta2));
  _outVar = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}
modelica_metatype boxptr_BackendVariable_setVarFixed(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inBoolean)
{
  modelica_integer tmp1;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_inBoolean);
  _outVar = omc_BackendVariable_setVarFixed(threadData, _inVar, tmp1);
  /* skip box _outVar; BackendDAE.Var */
  return _outVar;
}

DLLDirection
modelica_boolean omc_BackendVariable_varEqual(threadData_t *threadData, modelica_metatype _inVar1, modelica_metatype _inVar2)
{
  modelica_boolean _outBoolean;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outBoolean = omc_ComponentReferenceBasics_crefEqualNoStringCompare(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar2), 2))));
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVariable_varEqual(threadData_t *threadData, modelica_metatype _inVar1, modelica_metatype _inVar2)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVariable_varEqual(threadData, _inVar1, _inVar2);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

