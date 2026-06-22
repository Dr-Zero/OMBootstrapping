#include "omc_simulation_settings.h"
#include "DynamicOptimization.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "$OMC$objectMayerTerm"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,20,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "$OMC$objectLagrangeTerm"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,23,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,12) {&BackendDAE_Equation_DUMMY__EQUATION__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "time"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,4,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT5,_OMC_LIT0,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT7,-1e64);
#define _OMC_LIT7 MMC_REFREALLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT9,1e64);
#define _OMC_LIT9 MMC_REFREALLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,1,3) {&BackendDAE_VarKind_VARIABLE__desc,}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "gDynOpt"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,7,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "Generate dynamic optimization problem based on annotation approach."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,67,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(56)),_OMC_LIT12,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT13,_OMC_LIT14,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "$EqCon$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,7,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT18,0.0);
#define _OMC_LIT18 MMC_REFREALLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,1,1) {_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,16) {&BackendDAE_VarKind_OPT__CONSTR__desc,}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,4) {&DAE_VarDirection_OUTPUT__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,0,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT18}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT24,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT25,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,1,9) {&BackendDAE_EquationKind_UNKNOWN__EQUATION__KIND__desc,}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT27,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,1,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,1,3) {&DAE_VarDirection_INPUT__desc,}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "loop2con"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,8,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,4,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "Disables module"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,15,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,2,0) {_OMC_LIT33,_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "lin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,3,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "linear loops --> constraints"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,28,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,0) {_OMC_LIT37,_OMC_LIT38}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "noLin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,5,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "no linear loops --> constraints"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,31,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,0) {_OMC_LIT40,_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "all"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,3,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "loops --> constraints"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,21,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,0) {_OMC_LIT43,_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,1) {_OMC_LIT45,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,1) {_OMC_LIT42,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,1) {_OMC_LIT39,_OMC_LIT47}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {_OMC_LIT36,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,1,1) {_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Specifies method that transform loops in constraints. hint: using initial guess from file!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,90,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(62)),_OMC_LIT32,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT13,_OMC_LIT34,_OMC_LIT51,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,2,6) {&DAE_Exp_BCONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,1,1) {_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "$TMP$DER$P"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,10,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,3,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,1,18) {&BackendDAE_VarKind_OPT__INPUT__WITH__DER__desc,}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,1,19) {&BackendDAE_VarKind_OPT__INPUT__DER__desc,}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,1,5) {&DAE_VarParallelism_NON__PARALLEL__desc,}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,1,4) {&BackendDAE_TearingSelect_AVOID__desc,}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,1,1) {_OMC_LIT61}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,1,6) {&DAE_ConnectorType_NON__CONNECTOR__desc,}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,1,6) {&DAE_VarInnerOuter_NOT__INNER__OUTER__desc,}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,1,20) {&BackendDAE_VarKind_OPT__TGRID__desc,}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "Something going wrong for postOptModul=createDynamicOptimization. Check your flags. You need -g=DynOpt or -g=Optimica!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,119,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "grammar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,7,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "g"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,1,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,1,1) {_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "Modelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,8,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,0) {_OMC_LIT70,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "MetaModelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,12,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,2,0) {_OMC_LIT72,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "ParModelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,11,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,0) {_OMC_LIT74,MMC_IMMEDIATE(MMC_TAGFIXNUM(3))}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "Optimica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,8,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,2,0) {_OMC_LIT76,MMC_IMMEDIATE(MMC_TAGFIXNUM(4))}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "PDEModelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,11,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,2,0) {_OMC_LIT78,MMC_IMMEDIATE(MMC_TAGFIXNUM(5))}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,1) {_OMC_LIT79,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,2,1) {_OMC_LIT77,_OMC_LIT80}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,2,1) {_OMC_LIT75,_OMC_LIT81}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,1) {_OMC_LIT73,_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,2,1) {_OMC_LIT71,_OMC_LIT83}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,3,10) {&Flags_FlagData_ENUM__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,2,1) {_OMC_LIT78,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,2,1) {_OMC_LIT76,_OMC_LIT86}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,2,1) {_OMC_LIT74,_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,2,1) {_OMC_LIT72,_OMC_LIT88}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,1) {_OMC_LIT70,_OMC_LIT89}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,2,3) {&Flags_ValidOptions_STRING__OPTION__desc,_OMC_LIT90}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,1,1) {_OMC_LIT91}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "Sets the grammar and semantics to accept."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,41,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6)),_OMC_LIT67,_OMC_LIT69,_OMC_LIT13,_OMC_LIT85,_OMC_LIT92,_OMC_LIT93}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "$con$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,5,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "$finalCon$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,10,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,1,17) {&BackendDAE_VarKind_OPT__FCONSTR__desc,}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "generateSymbolicLinearization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,29,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "Generates symbolic linearization matrices A,B,C,D for linear model:\n		:math:`\\dot{x} = Ax + Bu`\n		:math:`y = Cx + Du`"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,117,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(52)),_OMC_LIT98,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT13,_OMC_LIT14,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT99}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
#include "util/modelica.h"

#include "DynamicOptimization_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_res2Con(threadData_t *threadData, modelica_metatype _ieqns, modelica_metatype _ivars, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ishared, modelica_metatype *out_ovars, modelica_metatype *out_oshared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_res2Con,2,0) {(void*) boxptr_DynamicOptimization_res2Con,0}};
#define boxvar_DynamicOptimization_res2Con MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_res2Con)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_DynamicOptimization_isConstOrlinear(threadData_t *threadData, modelica_metatype _jacType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_isConstOrlinear(threadData_t *threadData, modelica_metatype _jacType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_isConstOrlinear,2,0) {(void*) boxptr_DynamicOptimization_isConstOrlinear,0}};
#define boxvar_DynamicOptimization_isConstOrlinear MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_isConstOrlinear)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_removeLoopsWork(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _icomp, modelica_boolean _l2p_all, modelica_boolean _l2p_l, modelica_metatype *out_oshared);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_removeLoopsWork(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _icomp, modelica_metatype _l2p_all, modelica_metatype _l2p_l, modelica_metatype *out_oshared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_removeLoopsWork,2,0) {(void*) boxptr_DynamicOptimization_removeLoopsWork,0}};
#define boxvar_DynamicOptimization_removeLoopsWork MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_removeLoopsWork)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findLoops1(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inComps, modelica_boolean _inchanged, modelica_metatype *out_oshared, modelica_boolean *out_changed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_findLoops1(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inComps, modelica_metatype _inchanged, modelica_metatype *out_oshared, modelica_metatype *out_changed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_findLoops1,2,0) {(void*) boxptr_DynamicOptimization_findLoops1,0}};
#define boxvar_DynamicOptimization_findLoops1 MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_findLoops1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findLoops(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_boolean _inChanged, modelica_metatype *out_outShared, modelica_boolean *out_outChanged);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_findLoops(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_metatype _inChanged, modelica_metatype *out_outShared, modelica_metatype *out_outChanged);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_findLoops,2,0) {(void*) boxptr_DynamicOptimization_findLoops,0}};
#define boxvar_DynamicOptimization_findLoops MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_findLoops)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_traverserExpinputDerivativesForDynOpt(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_traverserExpinputDerivativesForDynOpt(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_traverserExpinputDerivativesForDynOpt,2,0) {(void*) boxptr_DynamicOptimization_traverserExpinputDerivativesForDynOpt,0}};
#define boxvar_DynamicOptimization_traverserExpinputDerivativesForDynOpt MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_traverserExpinputDerivativesForDynOpt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_traverserinputDerivativesForDynOpt(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _itpl, modelica_metatype *out_tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_traverserinputDerivativesForDynOpt,2,0) {(void*) boxptr_DynamicOptimization_traverserinputDerivativesForDynOpt,0}};
#define boxvar_DynamicOptimization_traverserinputDerivativesForDynOpt MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_traverserinputDerivativesForDynOpt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_inputDerivativesForDynOptWork(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_boolean _inChanged, modelica_metatype *out_outShared, modelica_boolean *out_outChanged);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_inputDerivativesForDynOptWork(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_metatype _inChanged, modelica_metatype *out_outShared, modelica_metatype *out_outChanged);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_inputDerivativesForDynOptWork,2,0) {(void*) boxptr_DynamicOptimization_inputDerivativesForDynOptWork,0}};
#define boxvar_DynamicOptimization_inputDerivativesForDynOptWork MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_inputDerivativesForDynOptWork)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addConstraints2(threadData_t *threadData, modelica_metatype _inConstraintLst, modelica_metatype _inVarlst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_addConstraints2,2,0) {(void*) boxptr_DynamicOptimization_addConstraints2,0}};
#define boxvar_DynamicOptimization_addConstraints2 MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_addConstraints2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addConstraints(threadData_t *threadData, modelica_metatype _InVarlst, modelica_metatype _inConstraint, modelica_fnptr _findCon);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_addConstraints,2,0) {(void*) boxptr_DynamicOptimization_addConstraints,0}};
#define boxvar_DynamicOptimization_addConstraints MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_addConstraints)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_mergeObjectVars(threadData_t *threadData, modelica_metatype _inmayer1, modelica_metatype _inmayer2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_mergeObjectVars,2,0) {(void*) boxptr_DynamicOptimization_mergeObjectVars,0}};
#define boxvar_DynamicOptimization_mergeObjectVars MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_mergeObjectVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findObjTerm(threadData_t *threadData, modelica_metatype _InVarlst, modelica_fnptr _findObjTermFun);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_findObjTerm,2,0) {(void*) boxptr_DynamicOptimization_findObjTerm,0}};
#define boxvar_DynamicOptimization_findObjTerm MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_findObjTerm)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findTimeGrid(threadData_t *threadData, modelica_metatype _varlst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_findTimeGrid,2,0) {(void*) boxptr_DynamicOptimization_findTimeGrid,0}};
#define boxvar_DynamicOptimization_findTimeGrid MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_findTimeGrid)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findLagrangeTerm(threadData_t *threadData, modelica_metatype _varlst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_findLagrangeTerm,2,0) {(void*) boxptr_DynamicOptimization_findLagrangeTerm,0}};
#define boxvar_DynamicOptimization_findLagrangeTerm MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_findLagrangeTerm)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findMayerTerm(threadData_t *threadData, modelica_metatype _varlst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_findMayerTerm,2,0) {(void*) boxptr_DynamicOptimization_findMayerTerm,0}};
#define boxvar_DynamicOptimization_findMayerTerm MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_findMayerTerm)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addOptimizationVarsEqns2(threadData_t *threadData, modelica_metatype _inConstraint, modelica_integer _inI, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _globalKnownVars, modelica_string _prefConCrefName, modelica_metatype _conKind, modelica_metatype *out_outEqns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_addOptimizationVarsEqns2(threadData_t *threadData, modelica_metatype _inConstraint, modelica_metatype _inI, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _globalKnownVars, modelica_metatype _prefConCrefName, modelica_metatype _conKind, modelica_metatype *out_outEqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_addOptimizationVarsEqns2,2,0) {(void*) boxptr_DynamicOptimization_addOptimizationVarsEqns2,0}};
#define boxvar_DynamicOptimization_addOptimizationVarsEqns2 MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_addOptimizationVarsEqns2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addOptimizationVarsEqns1(threadData_t *threadData, modelica_metatype _constraintLst, modelica_integer _inI, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _globalKnownVars, modelica_string _prefConCrefName, modelica_metatype _conKind, modelica_metatype *out_outEqns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_addOptimizationVarsEqns1(threadData_t *threadData, modelica_metatype _constraintLst, modelica_metatype _inI, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _globalKnownVars, modelica_metatype _prefConCrefName, modelica_metatype _conKind, modelica_metatype *out_outEqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_addOptimizationVarsEqns1,2,0) {(void*) boxptr_DynamicOptimization_addOptimizationVarsEqns1,0}};
#define boxvar_DynamicOptimization_addOptimizationVarsEqns1 MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_addOptimizationVarsEqns1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_makeVar(threadData_t *threadData, modelica_string _name, modelica_metatype *out_v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_makeVar,2,0) {(void*) boxptr_DynamicOptimization_makeVar,0}};
#define boxvar_DynamicOptimization_makeVar MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_makeVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_makeObject(threadData_t *threadData, modelica_string _name, modelica_fnptr _findObj, modelica_metatype _varlst, modelica_metatype _optimicaExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_makeObject,2,0) {(void*) boxptr_DynamicOptimization_makeObject,0}};
#define boxvar_DynamicOptimization_makeObject MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_makeObject)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_joinObjectFun(threadData_t *threadData, modelica_metatype _obj, modelica_metatype _vars, modelica_metatype _e, modelica_metatype *out_oe, modelica_metatype *out_objExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_joinObjectFun,2,0) {(void*) boxptr_DynamicOptimization_joinObjectFun,0}};
#define boxvar_DynamicOptimization_joinObjectFun MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_joinObjectFun)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_joinConstraints(threadData_t *threadData, modelica_metatype _inConstraint, modelica_string _name, modelica_metatype _conKind, modelica_metatype _globalKnownVars, modelica_metatype _varlst, modelica_metatype _vars, modelica_metatype _e, modelica_fnptr _findCon, modelica_metatype *out_oe);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_joinConstraints,2,0) {(void*) boxptr_DynamicOptimization_joinConstraints,0}};
#define boxvar_DynamicOptimization_joinConstraints MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_joinConstraints)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addTimeGrid(threadData_t *threadData, modelica_metatype _varlst, modelica_metatype _iv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_addTimeGrid,2,0) {(void*) boxptr_DynamicOptimization_addTimeGrid,0}};
#define boxvar_DynamicOptimization_addTimeGrid MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_addTimeGrid)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_getOptimicaArgs(threadData_t *threadData, modelica_metatype _inClassAttr, modelica_metatype *out_lagrange, modelica_metatype *out_startTimeE, modelica_metatype *out_finalTimeE);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_getOptimicaArgs,2,0) {(void*) boxptr_DynamicOptimization_getOptimicaArgs,0}};
#define boxvar_DynamicOptimization_getOptimicaArgs MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_getOptimicaArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addOptimizationVarsEqns(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvars, modelica_metatype __omcQ_24in_5Feqns, modelica_metatype __omcQ_24in_5Fshared, modelica_metatype *out_eqns, modelica_metatype *out_shared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DynamicOptimization_addOptimizationVarsEqns,2,0) {(void*) boxptr_DynamicOptimization_addOptimizationVarsEqns,0}};
#define boxvar_DynamicOptimization_addOptimizationVarsEqns MMC_REFSTRUCTLIT(boxvar_lit_DynamicOptimization_addOptimizationVarsEqns)

DLLDirection
modelica_metatype omc_DynamicOptimization_checkObjectIsSet(threadData_t *threadData, modelica_metatype _inVars, modelica_string _CrefName)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype _leftcref = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVars has no default value.
  // _leftcref has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _leftcref = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _CrefName, _OMC_LIT0, tmpMeta1);

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
          _outVars = omc_BackendVariable_getVar(threadData, _leftcref, _inVars, NULL);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _outVars = tmpMeta6;
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
  return _outVars;
}

DLLDirection
modelica_metatype omc_DynamicOptimization_reduceDynamicOptimization(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _varlst = NULL;
  modelica_metatype _opt_varlst = NULL;
  modelica_metatype _conVarsList = NULL;
  modelica_metatype _fconVarsList = NULL;
  modelica_metatype _objMayer = NULL;
  modelica_metatype _objLagrange = NULL;
  modelica_metatype _systlst = NULL;
  modelica_metatype _newsyst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _v = NULL;
  modelica_metatype _shared = NULL;
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
  // _outDAE has no default value.
  // _varlst has no default value.
  // _opt_varlst has no default value.
  // _conVarsList has no default value.
  // _fconVarsList has no default value.
  // _objMayer has no default value.
  // _objLagrange has no default value.
  // _systlst has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _newsyst = tmpMeta1;
  // _v has no default value.
  // _shared has no default value.
  /* Pattern-matching assignment */
  tmpMeta2 = _inDAE;
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  _systlst = tmpMeta3;
  _shared = tmpMeta4;

  _shared = omc_BackendVariable_removeAliasVars(threadData, _shared);

  {
    modelica_metatype _syst;
    for (tmpMeta5 = _systlst; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _syst = MMC_CAR(tmpMeta5);
      _syst = omc_BackendEquation_removeRemovedEqs(threadData, _syst);

      /* Pattern-matching assignment */
      tmpMeta6 = _syst;
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
      _v = tmpMeta7;

      _varlst = omc_BackendVariable_varList(threadData, _v);

      _conVarsList = omc_List_select(threadData, _varlst, boxvar_BackendVariable_isRealOptimizeConstraintsVars);

      _fconVarsList = omc_List_select(threadData, _varlst, boxvar_BackendVariable_isRealOptimizeFinalConstraintsVars);

      _objMayer = omc_DynamicOptimization_checkObjectIsSet(threadData, _v, _OMC_LIT1);

      _objLagrange = omc_DynamicOptimization_checkObjectIsSet(threadData, _v, _OMC_LIT2);

      _opt_varlst = listAppend(_conVarsList, listAppend(_fconVarsList, listAppend(_objMayer, _objLagrange)));

      if((!listEmpty(_opt_varlst)))
      {
        tmpMeta8 = mmc_mk_cons(omc_BackendDAEUtil_tryReduceEqSystem(threadData, _syst, _shared, _opt_varlst, 0 /* false */), _newsyst);
        _newsyst = tmpMeta8;
      }
    }
  }

  tmpMeta10 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _newsyst, _shared);
  _outDAE = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

DLLDirection
modelica_metatype omc_DynamicOptimization_simplifyConstraints(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _systlst = NULL;
  modelica_metatype _new_systlst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _shared = NULL;
  modelica_metatype _eqn_ = NULL;
  modelica_metatype _var_ = NULL;
  modelica_metatype _var_con = NULL;
  modelica_metatype _comps = NULL;
  modelica_integer _eindex;
  modelica_integer _vindx;
  modelica_metatype _cr = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _var_lst_opt = NULL;
  modelica_metatype _var_lst1 = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _c = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _oMax_con = NULL;
  modelica_metatype _oMin_con = NULL;
  modelica_metatype _max_con = NULL;
  modelica_metatype _min_con = NULL;
  modelica_metatype _zero = NULL;
  modelica_metatype _con2 = NULL;
  modelica_metatype _z = NULL;
  modelica_metatype _der_e = NULL;
  modelica_boolean _b1;
  modelica_boolean _b2;
  modelica_boolean _b;
  modelica_boolean _b3;
  modelica_boolean _b4;
  modelica_metatype _tp = NULL;
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
  modelica_boolean tmp15 = 0;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_integer tmp22;
  modelica_metatype tmpMeta23;
  modelica_integer tmp24;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta72;
  modelica_metatype tmpMeta73;
  modelica_metatype tmpMeta74;
  modelica_metatype tmpMeta75;
  modelica_metatype tmpMeta76;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _systlst has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_systlst = tmpMeta1;
  // _shared has no default value.
  _eqn_ = _OMC_LIT3;
  // _var_ has no default value.
  // _var_con has no default value.
  // _comps has no default value.
  // _eindex has no default value.
  // _vindx has no default value.
  // _cr has no default value.
  // _var_lst has no default value.
  // _var_lst_opt has no default value.
  // _var_lst1 has no default value.
  // _e1 has no default value.
  _e2 = _OMC_LIT4;
  // _e has no default value.
  // _c has no default value.
  // _vars has no default value.
  // _globalKnownVars has no default value.
  // _eqns has no default value.
  // _funcs has no default value.
  // _oMax_con has no default value.
  // _oMin_con has no default value.
  // _max_con has no default value.
  // _min_con has no default value.
  // _zero has no default value.
  // _con2 has no default value.
  // _z has no default value.
  // _der_e has no default value.
  // _b1 has no default value.
  // _b2 has no default value.
  // _b has no default value.
  // _b3 has no default value.
  // _b4 has no default value.
  // _tp has no default value.
  if(omc_Flags_getConfigBool(threadData, _OMC_LIT16))
  {
    /* Pattern-matching assignment */
    tmpMeta2 = _inDAE;
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
    tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
    _systlst = tmpMeta3;
    _shared = tmpMeta4;

    /* Pattern-matching assignment */
    tmpMeta5 = _shared;
    tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
    tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 12));
    _globalKnownVars = tmpMeta6;
    _funcs = tmpMeta7;

    {
      modelica_metatype _syst;
      for (tmpMeta8 = _systlst; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
      {
        _syst = MMC_CAR(tmpMeta8);
        /* Pattern-matching assignment */
        tmpMeta9 = _syst;
        tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
        tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
        tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 7));
        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,3) == 0) MMC_THROW_INTERNAL();
        tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 4));
        _vars = tmpMeta10;
        _eqns = tmpMeta11;
        _comps = tmpMeta13;

        _b = 0 /* false */;

        {
          modelica_metatype _comp;
          for (tmpMeta14 = _comps; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
          {
            _comp = MMC_CAR(tmpMeta14);
            { /* match expression */
              modelica_metatype tmp18_1;
              tmp18_1 = _comp;
              {
                volatile mmc_switch_type tmp18;
                int tmp19;
                tmp18 = 0;
                for (; tmp18 < 2; tmp18++) {
                  switch (MMC_SWITCH_CAST(tmp18)) {
                  case 0: {
                    if (mmc__uniontype__metarecord__typedef__equal(tmp18_1,0,2) == 0) goto tmp17_end;
                    
                    /* Pattern matching succeeded */
                    tmp15 = 1 /* true */;
                    goto tmp17_done;
                  }
                  case 1: {
                    
                    /* Pattern matching succeeded */
                    tmp15 = 0 /* false */;
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
            if(tmp15)
            {
              /* Pattern-matching assignment */
              tmpMeta20 = _comp;
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,2) == 0) MMC_THROW_INTERNAL();
              tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
              tmp22 = mmc_unbox_integer(tmpMeta21);
              tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 3));
              tmp24 = mmc_unbox_integer(tmpMeta23);
              _eindex = tmp22  /* pattern as ty=Integer */;
              _vindx = tmp24  /* pattern as ty=Integer */;

              _var_con = omc_BackendVariable_getVarAt(threadData, _vars, _vindx);

              _b3 = omc_BackendVariable_isRealOptimizeConstraintsVars(threadData, _var_con);

              if(_b3)
              {
                { /* matchcontinue expression */
                  {
                    volatile mmc_switch_type tmp27;
                    int tmp28;
                    tmp27 = 0;
                    MMC_TRY_INTERNAL(mmc_jumper)
                    tmp26_top:
                    threadData->mmc_jumper = &new_mmc_jumper;
                    for (; tmp27 < 2; tmp27++) {
                      switch (MMC_SWITCH_CAST(tmp27)) {
                      case 0: {
                        modelica_metatype tmpMeta29;
                        modelica_metatype tmpMeta30;
                        modelica_metatype tmpMeta31;
                        modelica_boolean tmp32;
                        /* Pattern matching succeeded */
                        /* Pattern-matching assignment */
                        tmpMeta29 = omc_BackendEquation_get(threadData, _eqns, _eindex);
                        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,0,4) == 0) goto goto_25;
                        tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
                        tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 3));
                        _eqn_ = tmpMeta29;
                        _e1 = tmpMeta30;
                        _e2 = tmpMeta31;

                        /* Pattern-matching assignment */
                        tmp32 = omc_ExpressionBasics_expEqual(threadData, _e1, omc_BackendVariable_varExp(threadData, _var_con));
                        if (1 /* true */ != tmp32) goto goto_25;
                        goto tmp26_done;
                      }
                      case 1: {
                        /* Pattern matching succeeded */
                        _b3 = 0 /* false */;
                        goto tmp26_done;
                      }
                      }
                      goto tmp26_end;
                      tmp26_end: ;
                    }
                    goto goto_25;
                    tmp26_done:
                    (void)tmp27;
                    MMC_RESTORE_INTERNAL(mmc_jumper);
                    goto tmp26_done2;
                    goto_25:;
                    MMC_CATCH_INTERNAL(mmc_jumper);
                    if (++tmp27 < 2) {
                      goto tmp26_top;
                    }
                    MMC_THROW_INTERNAL();
                    tmp26_done2:;
                  }
                }
                ;
              }

              if(_b3)
              {
                tmpMeta33 = mmc_mk_cons(_eqn_, MMC_REFSTRUCTLIT(mmc_nil));
                _var_lst = omc_BackendEquation_equationsLstVars(threadData, tmpMeta33, _vars);

                {
                  modelica_metatype __omcQ_24tmpVar1;
                  modelica_metatype* tmp35;
                  modelica_metatype tmpMeta36;
                  modelica_metatype __omcQ_24tmpVar0;
                  modelica_integer tmp37;
                  modelica_metatype _vv_loopVar = 0;
                  modelica_metatype _vv;
                  _vv_loopVar = _var_lst;
                  tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar1 = tmpMeta36; /* defaultValue */
                  tmp35 = &__omcQ_24tmpVar1;
                  while(1) {
                    tmp37 = 1;
                    while (!listEmpty(_vv_loopVar)) {
                      _vv = MMC_CAR(_vv_loopVar);
                      _vv_loopVar = MMC_CDR(_vv_loopVar);
                      if (omc_BackendVariable_isStateVar(threadData, _vv)) {
                        tmp37--;
                        break;
                      }
                    }
                    if (tmp37 == 0) {
                      __omcQ_24tmpVar0 = _vv;
                      *tmp35 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                      tmp35 = &MMC_CDR(*tmp35);
                    } else if (tmp37 == 1) {
                      break;
                    } else {
                      MMC_THROW_INTERNAL();
                    }
                  }
                  *tmp35 = mmc_mk_nil();
                  tmpMeta34 = __omcQ_24tmpVar1;
                }
                _var_lst_opt = tmpMeta34;

                _b3 = (listLength(_var_lst_opt) == ((modelica_integer) 1));

                tmpMeta38 = mmc_mk_cons(_eqn_, MMC_REFSTRUCTLIT(mmc_nil));
                _var_lst = omc_BackendEquation_equationsLstVars(threadData, tmpMeta38, _globalKnownVars);

                {
                  modelica_metatype __omcQ_24tmpVar3;
                  modelica_metatype* tmp40;
                  modelica_metatype tmpMeta41;
                  modelica_metatype __omcQ_24tmpVar2;
                  modelica_integer tmp42;
                  modelica_metatype _vv_loopVar = 0;
                  modelica_metatype _vv;
                  _vv_loopVar = _var_lst;
                  tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar3 = tmpMeta41; /* defaultValue */
                  tmp40 = &__omcQ_24tmpVar3;
                  while(1) {
                    tmp42 = 1;
                    while (!listEmpty(_vv_loopVar)) {
                      _vv = MMC_CAR(_vv_loopVar);
                      _vv_loopVar = MMC_CDR(_vv_loopVar);
                      if (omc_BackendVariable_isInput(threadData, _vv)) {
                        tmp42--;
                        break;
                      }
                    }
                    if (tmp42 == 0) {
                      __omcQ_24tmpVar2 = _vv;
                      *tmp40 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                      tmp40 = &MMC_CDR(*tmp40);
                    } else if (tmp42 == 1) {
                      break;
                    } else {
                      MMC_THROW_INTERNAL();
                    }
                  }
                  *tmp40 = mmc_mk_nil();
                  tmpMeta39 = __omcQ_24tmpVar3;
                }
                _var_lst_opt = listAppend(_var_lst_opt, tmpMeta39);

                if((listLength(_var_lst_opt) == ((modelica_integer) 1)))
                {
                  /* Pattern-matching assignment */
                  tmpMeta43 = _var_lst_opt;
                  if (listEmpty(tmpMeta43)) MMC_THROW_INTERNAL();
                  tmpMeta44 = MMC_CAR(tmpMeta43);
                  tmpMeta45 = MMC_CDR(tmpMeta43);
                  if (!listEmpty(tmpMeta45)) MMC_THROW_INTERNAL();
                  _var_ = tmpMeta44;

                  /* Pattern-matching assignment */
                  tmpMeta46 = _var_;
                  tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 2));
                  _cr = tmpMeta47;

                  _e = omc_Expression_crefExp(threadData, _cr);

                  _tp = omc_Expression_typeof(threadData, _e);

                  _zero = omc_Expression_makeConstZero(threadData, _tp);

                  { /* matchcontinue expression */
                    {
                      volatile mmc_switch_type tmp50;
                      int tmp51;
                      tmp50 = 0;
                      MMC_TRY_INTERNAL(mmc_jumper)
                      tmp49_top:
                      threadData->mmc_jumper = &new_mmc_jumper;
                      for (; tmp50 < 2; tmp50++) {
                        switch (MMC_SWITCH_CAST(tmp50)) {
                        case 0: {
                          modelica_metatype tmpMeta52;
                          modelica_metatype tmpMeta56;
                          modelica_metatype tmpMeta60;
                          modelica_metatype tmpMeta61;
                          modelica_metatype tmpMeta62;
                          modelica_metatype tmpMeta63;
                          modelica_metatype tmpMeta64;
                          modelica_metatype tmpMeta65;
                          modelica_metatype tmpMeta66;
                          modelica_metatype tmpMeta67;
                          /* Pattern matching succeeded */
                          _der_e = omc_Differentiate_differentiateExpSolve(threadData, _e2, _cr, mmc_mk_some(_funcs));

                          _der_e = omc_ExpressionSimplify_simplify(threadData, _der_e, NULL);

                          if(omc_Expression_isZero(threadData, _e))
                          {
                            continue;
                          }

                          _z = omc_Expression_makeZeroExpression(threadData, omc_Expression_arrayDimension(threadData, _tp), NULL);

                          _c = omc_Expression_replaceExp(threadData, _e2, _e, _z, NULL);

                          _c = omc_ExpressionSimplify_simplify(threadData, _c, NULL);

                          _var_lst = omc_BackendEquation_expressionVars(threadData, _der_e, _globalKnownVars);

                          if(_b3)
                          {
                            {
                              modelica_metatype __omcQ_24tmpVar5;
                              modelica_metatype* tmp53;
                              modelica_metatype tmpMeta54;
                              modelica_metatype __omcQ_24tmpVar4;
                              modelica_integer tmp55;
                              modelica_metatype _vv_loopVar = 0;
                              modelica_metatype _vv;
                              _vv_loopVar = _var_lst;
                              tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
                              __omcQ_24tmpVar5 = tmpMeta54; /* defaultValue */
                              tmp53 = &__omcQ_24tmpVar5;
                              while(1) {
                                tmp55 = 1;
                                while (!listEmpty(_vv_loopVar)) {
                                  _vv = MMC_CAR(_vv_loopVar);
                                  _vv_loopVar = MMC_CDR(_vv_loopVar);
                                  if ((!omc_BackendVariable_isParam(threadData, _vv))) {
                                    tmp55--;
                                    break;
                                  }
                                }
                                if (tmp55 == 0) {
                                  __omcQ_24tmpVar4 = _vv;
                                  *tmp53 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                                  tmp53 = &MMC_CDR(*tmp53);
                                } else if (tmp55 == 1) {
                                  break;
                                } else {
                                  goto goto_48;
                                }
                              }
                              *tmp53 = mmc_mk_nil();
                              tmpMeta52 = __omcQ_24tmpVar5;
                            }
                            _var_lst = tmpMeta52;
                          }

                          _var_lst = listAppend(omc_BackendEquation_expressionVars(threadData, _der_e, _vars), _var_lst);

                          _var_lst1 = omc_BackendEquation_expressionVars(threadData, _c, _globalKnownVars);

                          if(_b3)
                          {
                            {
                              modelica_metatype __omcQ_24tmpVar7;
                              modelica_metatype* tmp57;
                              modelica_metatype tmpMeta58;
                              modelica_metatype __omcQ_24tmpVar6;
                              modelica_integer tmp59;
                              modelica_metatype _vv_loopVar = 0;
                              modelica_metatype _vv;
                              _vv_loopVar = _var_lst1;
                              tmpMeta58 = MMC_REFSTRUCTLIT(mmc_nil);
                              __omcQ_24tmpVar7 = tmpMeta58; /* defaultValue */
                              tmp57 = &__omcQ_24tmpVar7;
                              while(1) {
                                tmp59 = 1;
                                while (!listEmpty(_vv_loopVar)) {
                                  _vv = MMC_CAR(_vv_loopVar);
                                  _vv_loopVar = MMC_CDR(_vv_loopVar);
                                  if ((!omc_BackendVariable_isParam(threadData, _vv))) {
                                    tmp59--;
                                    break;
                                  }
                                }
                                if (tmp59 == 0) {
                                  __omcQ_24tmpVar6 = _vv;
                                  *tmp57 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                                  tmp57 = &MMC_CDR(*tmp57);
                                } else if (tmp59 == 1) {
                                  break;
                                } else {
                                  goto goto_48;
                                }
                              }
                              *tmp57 = mmc_mk_nil();
                              tmpMeta56 = __omcQ_24tmpVar7;
                            }
                            _var_lst1 = tmpMeta56;
                          }

                          _var_lst1 = listAppend(omc_BackendEquation_expressionVars(threadData, _c, _vars), _var_lst1);

                          _var_lst = listAppend(_var_lst1, _var_lst);

                          _b4 = (omc_Expression_expHasCref(threadData, _der_e, _OMC_LIT6) || omc_Expression_expHasCref(threadData, _c, _OMC_LIT6));

                          if((listEmpty(_var_lst) && (!_b4)))
                          {
                            _oMin_con = omc_BackendVariable_getMinMaxAttribute(threadData, _var_con ,&_oMax_con);

                            _b1 = isSome(_oMin_con);

                            _b2 = isSome(_oMax_con);

                            tmpMeta60 = mmc_mk_box2(28, &DAE_Operator_LESS__desc, _tp);
                            tmpMeta61 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _der_e, tmpMeta60, _zero, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_none());
                            _con2 = omc_Expression_makeNoEvent(threadData, tmpMeta61);

                            if(_b1)
                            {
                              /* Pattern-matching assignment */
                              tmpMeta62 = _oMin_con;
                              if (optionNone(tmpMeta62)) goto goto_48;
                              tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta62), 1));
                              _min_con = tmpMeta63;

                              _min_con = omc_Expression_makeDiv(threadData, omc_Expression_expSub(threadData, _min_con, _c), _der_e);
                            }
                            else
                            {
                              _min_con = _OMC_LIT8;
                            }

                            if(_b2)
                            {
                              /* Pattern-matching assignment */
                              tmpMeta64 = _oMax_con;
                              if (optionNone(tmpMeta64)) goto goto_48;
                              tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 1));
                              _max_con = tmpMeta65;

                              _max_con = omc_Expression_makeDiv(threadData, omc_Expression_expSub(threadData, _max_con, _c), _der_e);
                            }
                            else
                            {
                              _max_con = _OMC_LIT10;
                            }

                            tmpMeta66 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con2, _max_con, _min_con);
                            _oMin_con = mmc_mk_some(tmpMeta66);

                            tmpMeta67 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _con2, _min_con, _max_con);
                            _oMax_con = mmc_mk_some(tmpMeta67);

                            _oMin_con = omc_ExpressionSimplify_simplify1o(threadData, _oMin_con);

                            _oMax_con = omc_ExpressionSimplify_simplify1o(threadData, _oMax_con);

                            _var_con = omc_BackendVariable_setVarMinMax(threadData, _var_con, _oMin_con, _oMax_con);

                            _var_ = omc_BackendVariable_mergeMinMaxAttribute(threadData, _var_con, _var_, 0 /* false */);

                            _var_con = omc_BackendVariable_setVarKind(threadData, _var_con, _OMC_LIT11);

                            _vars = omc_BackendVariable_setVarAt(threadData, _vars, _vindx, _var_con);

                            { /* matchcontinue expression */
                              {
                                volatile mmc_switch_type tmp70;
                                int tmp71;
                                tmp70 = 0;
                                MMC_TRY_INTERNAL(mmc_jumper)
                                tmp69_top:
                                threadData->mmc_jumper = &new_mmc_jumper;
                                for (; tmp70 < 2; tmp70++) {
                                  switch (MMC_SWITCH_CAST(tmp70)) {
                                  case 0: {
                                    /* Pattern matching succeeded */
                                    omc_BackendVariable_getVarSingle(threadData, _cr, _vars ,&_vindx);

                                    _vars = omc_BackendVariable_setVarAt(threadData, _vars, _vindx, _var_);
                                    goto tmp69_done;
                                  }
                                  case 1: {
                                    /* Pattern matching succeeded */
                                    omc_BackendVariable_getVarSingle(threadData, _cr, _globalKnownVars ,&_vindx);

                                    _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _vindx, _var_);
                                    goto tmp69_done;
                                  }
                                  }
                                  goto tmp69_end;
                                  tmp69_end: ;
                                }
                                goto goto_68;
                                tmp69_done:
                                (void)tmp70;
                                MMC_RESTORE_INTERNAL(mmc_jumper);
                                goto tmp69_done2;
                                goto_68:;
                                MMC_CATCH_INTERNAL(mmc_jumper);
                                if (++tmp70 < 2) {
                                  goto tmp69_top;
                                }
                                goto goto_48;
                                tmp69_done2:;
                              }
                            }
                            ;

                            _b = 1 /* true */;
                          }
                          goto tmp49_done;
                        }
                        case 1: {
                          /* Pattern matching succeeded */
                          goto tmp49_done;
                        }
                        }
                        goto tmp49_end;
                        tmp49_end: ;
                      }
                      goto goto_48;
                      tmp49_done:
                      (void)tmp50;
                      MMC_RESTORE_INTERNAL(mmc_jumper);
                      goto tmp49_done2;
                      goto_48:;
                      MMC_CATCH_INTERNAL(mmc_jumper);
                      if (++tmp50 < 2) {
                        goto tmp49_top;
                      }
                      MMC_THROW_INTERNAL();
                      tmp49_done2:;
                    }
                  }
                  ;
                }
              }
            }
          }
        }

        if(_b)
        {
          tmpMeta73 = mmc_mk_cons(omc_BackendDAEUtil_clearEqSyst(threadData, _syst), _new_systlst);
          _new_systlst = tmpMeta73;
        }
        else
        {
          tmpMeta74 = mmc_mk_cons(_syst, _new_systlst);
          _new_systlst = tmpMeta74;
        }
      }
    }

    _shared = omc_BackendDAEUtil_setSharedGlobalKnownVars(threadData, _shared, _globalKnownVars);

    tmpMeta76 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _new_systlst, _shared);
    _outDAE = tmpMeta76;
  }
  else
  {
    _outDAE = _inDAE;
  }
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_res2Con(threadData_t *threadData, modelica_metatype _ieqns, modelica_metatype _ivars, modelica_metatype _eindex, modelica_metatype _vindx, modelica_metatype _ishared, modelica_metatype *out_ovars, modelica_metatype *out_oshared)
{
  modelica_metatype _oeqns = NULL;
  modelica_metatype _ovars = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _var_ = NULL;
  modelica_metatype _cr_lst = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _cr_var = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _res = NULL;
  modelica_integer _ind_e;
  modelica_integer _ind_v;
  modelica_metatype _ind_lst_v = NULL;
  modelica_metatype _ind_lst_e = NULL;
  modelica_metatype _globalKnownVars = NULL;
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
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oeqns = _ieqns;
  _ovars = _ivars;
  _oshared = _ishared;
  _eqn_lst = omc_BackendEquation_getList(threadData, _eindex, _ieqns);
  // _eqn has no default value.
  _var_lst = omc_List_map1r(threadData, _vindx, boxvar_BackendVariable_getVarAt, _ivars);
  // _var has no default value.
  // _var_ has no default value.
  _cr_lst = omc_List_map(threadData, _var_lst, boxvar_BackendVariable_varCref);
  // _cr has no default value.
  // _cr_var has no default value.
  // _e has no default value.
  // _res has no default value.
  // _ind_e has no default value.
  // _ind_v has no default value.
  _ind_lst_v = omc_List_map(threadData, _vindx, boxvar_intAbs);
  _ind_lst_e = _eindex;
  // _globalKnownVars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _oshared;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _globalKnownVars = tmpMeta2;

  {
    modelica_metatype _var_;
    for (tmpMeta3 = _var_lst; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _var_ = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _cr_lst;
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
      tmpMeta5 = MMC_CAR(tmpMeta4);
      tmpMeta6 = MMC_CDR(tmpMeta4);
      _cr_var = tmpMeta5;
      _cr_lst = tmpMeta6;

      /* Pattern-matching assignment */
      tmpMeta7 = _eqn_lst;
      if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
      tmpMeta8 = MMC_CAR(tmpMeta7);
      tmpMeta9 = MMC_CDR(tmpMeta7);
      _eqn = tmpMeta8;
      _eqn_lst = tmpMeta9;

      /* Pattern-matching assignment */
      tmpMeta10 = _ind_lst_e;
      if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
      tmpMeta11 = MMC_CAR(tmpMeta10);
      tmpMeta12 = MMC_CDR(tmpMeta10);
      tmp13 = mmc_unbox_integer(tmpMeta11);
      _ind_e = tmp13  /* pattern as ty=Integer */;
      _ind_lst_e = tmpMeta12;

      /* Pattern-matching assignment */
      tmpMeta14 = _ind_lst_v;
      if (listEmpty(tmpMeta14)) MMC_THROW_INTERNAL();
      tmpMeta15 = MMC_CAR(tmpMeta14);
      tmpMeta16 = MMC_CDR(tmpMeta14);
      tmp17 = mmc_unbox_integer(tmpMeta15);
      _ind_v = tmp17  /* pattern as ty=Integer */;
      _ind_lst_v = tmpMeta16;

      tmpMeta18 = stringAppend(_OMC_LIT17,omc_ComponentReference_crefModelicaStr(threadData, _cr_var));
      tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
      _cr = omc_ComponentReferenceBasics_makeCrefIdent(threadData, tmpMeta18, _OMC_LIT0, tmpMeta19);

      _e = omc_Expression_crefExp(threadData, _cr);

      _var = omc_BackendVariable_makeVar(threadData, _cr);

      _var = omc_BackendVariable_setVarMinMax(threadData, _var, _OMC_LIT20, _OMC_LIT20);

      _var = omc_BackendVariable_setVarKind(threadData, _var, _OMC_LIT21);

      _var = omc_BackendVariable_setVarDirection(threadData, _var, _OMC_LIT22);

      _ovars = omc_BackendVariable_addNewVar(threadData, _var, _ovars);

      _res = omc_BackendDAEOptimize_makeEquationToResidualExp(threadData, _eqn);

      _res = omc_Expression_createResidualExp(threadData, _res, omc_Expression_makeConstZeroE(threadData, _res));

      tmpMeta20 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _e, _res, _OMC_LIT26, _OMC_LIT29);
      _oeqns = omc_BackendEquation_setAtIndex(threadData, _oeqns, _ind_e, tmpMeta20);

      tmpMeta21 = stringAppend(_OMC_LIT30,omc_ComponentReference_crefModelicaStr(threadData, _cr_var));
      _cr = omc_DynamicOptimization_makeVar(threadData, tmpMeta21 ,&_var);

      _var = omc_BackendVariable_setVarDirection(threadData, _var, _OMC_LIT31);

      _e = omc_Expression_crefExp(threadData, _cr_var);

      if(omc_BackendVariable_isStateVar(threadData, _var_))
      {
        _e = omc_Expression_expDer(threadData, _e);

        tmpMeta22 = mmc_mk_box2(21, &BackendDAE_VarKind_OPT__LOOP__INPUT__desc, omc_ComponentReference_crefPrefixDer(threadData, _cr_var));
        _var = omc_BackendVariable_setVarKind(threadData, _var, tmpMeta22);
      }
      else
      {
        _var = omc_BackendVariable_mergeAliasVars(threadData, _var, _var_, 0 /* false */, _globalKnownVars);

        tmpMeta23 = mmc_mk_box2(21, &BackendDAE_VarKind_OPT__LOOP__INPUT__desc, _cr_var);
        _var = omc_BackendVariable_setVarKind(threadData, _var, tmpMeta23);
      }

      _oshared = omc_BackendVariable_addGlobalKnownVarDAE(threadData, _var, _oshared);

      tmpMeta24 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _e, omc_Expression_crefExp(threadData, _cr), _OMC_LIT26, _OMC_LIT29);
      _oeqns = omc_BackendEquation_add(threadData, tmpMeta24, _oeqns);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_ovars) { *out_ovars = _ovars; }
  if (out_oshared) { *out_oshared = _oshared; }
  return _oeqns;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_DynamicOptimization_isConstOrlinear(threadData_t *threadData, modelica_metatype _jacType)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _jacType;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_isConstOrlinear(threadData_t *threadData, modelica_metatype _jacType)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_DynamicOptimization_isConstOrlinear(threadData, _jacType);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_removeLoopsWork(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _icomp, modelica_boolean _l2p_all, modelica_boolean _l2p_l, modelica_metatype *out_oshared)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _oshared has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _isyst;
    tmp4_2 = _ishared;
    tmp4_3 = _icomp;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eindex = NULL;
      modelica_metatype _vindx = NULL;
      modelica_integer _eindex_;
      modelica_integer _vindx_;
      modelica_metatype _shared = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _varexp = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _funcs = NULL;
      modelica_metatype _jacType = NULL;
      modelica_metatype _syst = NULL;
      modelica_boolean _linear;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _eqns has no default value.
      // _eindex has no default value.
      // _vindx has no default value.
      // _eindex_ has no default value.
      // _vindx_ has no default value.
      // _shared has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _varexp has no default value.
      // _v has no default value.
      // _cr has no default value.
      // _funcs has no default value.
      // _jacType has no default value.
      // _syst has no default value.
      // _linear has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,1,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 5));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _eindex = tmpMeta6;
          _vindx = tmpMeta7;
          _jacType = tmpMeta8;
          _syst = tmp4_1;
          _vars = tmpMeta9;
          _eqns = tmpMeta10;
          _shared = tmp4_2;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!(_l2p_all || (_l2p_l?omc_DynamicOptimization_isConstOrlinear(threadData, _jacType):(!omc_DynamicOptimization_isConstOrlinear(threadData, _jacType))))) goto tmp3_end;
          _eqns = omc_DynamicOptimization_res2Con(threadData, _eqns, _vars, _eindex, _vindx, _shared ,&_vars ,&_shared);

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = _eqns;
          _syst = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = _vars;
          _syst = tmpMeta12;
          tmpMeta[0+0] = omc_BackendDAEUtil_clearEqSyst(threadData, _syst);
          tmpMeta[0+1] = _shared;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,7,4) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _vindx = tmpMeta14;
          _eindex = tmpMeta15;
          _linear = tmp17  /* pattern as ty=Boolean */;
          _syst = tmp4_1;
          _vars = tmpMeta18;
          _eqns = tmpMeta19;
          _shared = tmp4_2;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!(_l2p_all || (_l2p_l?_linear:(!_linear)))) goto tmp3_end;
          _eqns = omc_DynamicOptimization_res2Con(threadData, _eqns, _vars, _eindex, _vindx, _shared ,&_vars ,&_shared);

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[3] = _eqns;
          _syst = tmpMeta20;

          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[2] = _vars;
          _syst = tmpMeta21;
          tmpMeta[0+0] = omc_BackendDAEUtil_clearEqSyst(threadData, _syst);
          tmpMeta[0+1] = _shared;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_boolean tmp34;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,0,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 12));
          
          _eindex_ = tmp23  /* pattern as ty=Integer */;
          _vindx_ = tmp25  /* pattern as ty=Integer */;
          _syst = tmp4_1;
          _vars = tmpMeta26;
          _eqns = tmpMeta27;
          _shared = tmp4_2;
          _funcs = tmpMeta28;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_l2p_all || (!_l2p_l))) goto tmp3_end;
          /* Pattern-matching assignment */
          tmpMeta29 = omc_BackendEquation_get(threadData, _eqns, _eindex_);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,0,4) == 0) goto goto_2;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 3));
          _e1 = tmpMeta30;
          _e2 = tmpMeta31;

          /* Pattern-matching assignment */
          tmpMeta32 = omc_BackendVariable_getVarAt(threadData, _vars, _vindx_);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          _v = tmpMeta32;
          _cr = tmpMeta33;

          _varexp = omc_Expression_crefExp(threadData, _cr);

          _varexp = (omc_BackendVariable_isStateVar(threadData, _v)?omc_Expression_expDer(threadData, _varexp):_varexp);

          tmp34 = 0; /* begin failure */
          MMC_TRY_INTERNAL(mmc_jumper)
            omc_ExpressionSolve_solve2(threadData, _e1, _e2, _varexp, mmc_mk_some(_funcs), mmc_mk_none(), 1 /* true */, 0 /* false */, NULL, NULL, NULL);
            tmp34 = 1;
          goto goto_35;
          goto_35:;
          MMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp34) {goto goto_2;} /* end failure */

          tmpMeta36 = mmc_mk_cons(mmc_mk_integer(_eindex_), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta37 = mmc_mk_cons(mmc_mk_integer(_vindx_), MMC_REFSTRUCTLIT(mmc_nil));
          _eqns = omc_DynamicOptimization_res2Con(threadData, _eqns, _vars, tmpMeta36, tmpMeta37, _shared ,&_vars ,&_shared);

          tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[3] = _eqns;
          _syst = tmpMeta38;

          tmpMeta39 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta39), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta39))[2] = _vars;
          _syst = tmpMeta39;
          tmpMeta[0+0] = omc_BackendDAEUtil_clearEqSyst(threadData, _syst);
          tmpMeta[0+1] = _shared;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _isyst;
          tmpMeta[0+1] = _ishared;
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
  _osyst = tmpMeta[0+0];
  _oshared = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_removeLoopsWork(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _icomp, modelica_metatype _l2p_all, modelica_metatype _l2p_l, modelica_metatype *out_oshared)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_l2p_all);
  tmp2 = mmc_unbox_integer(_l2p_l);
  _osyst = omc_DynamicOptimization_removeLoopsWork(threadData, _isyst, _ishared, _icomp, tmp1, tmp2, out_oshared);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oshared; BackendDAE.Shared */
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findLoops1(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inComps, modelica_boolean _inchanged, modelica_metatype *out_oshared, modelica_boolean *out_changed)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_boolean _changed;
  modelica_boolean _l2p_all;
  modelica_boolean _l2p_nl;
  modelica_boolean _l2p_l;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _osyst = _isyst;
  _oshared = _ishared;
  _changed = _inchanged;
  _l2p_all = (stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT53), _OMC_LIT43));
  // _l2p_nl has no default value.
  // _l2p_l has no default value.
  if(_l2p_all)
  {
    _l2p_l = 1 /* true */;
  }
  else
  {
    _l2p_nl = (stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT53), _OMC_LIT40));

    _l2p_l = (!_l2p_nl);
  }

  {
    modelica_metatype _comp;
    for (tmpMeta1 = _inComps; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _comp = MMC_CAR(tmpMeta1);
      _osyst = omc_DynamicOptimization_removeLoopsWork(threadData, _osyst, _oshared, _comp, _l2p_all, _l2p_l ,&_oshared);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_changed) { *out_changed = _changed; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_findLoops1(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inComps, modelica_metatype _inchanged, modelica_metatype *out_oshared, modelica_metatype *out_changed)
{
  modelica_integer tmp1;
  modelica_boolean _changed;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_inchanged);
  _osyst = omc_DynamicOptimization_findLoops1(threadData, _isyst, _ishared, _inComps, tmp1, out_oshared, &_changed);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oshared; BackendDAE.Shared */
  if (out_changed) { *out_changed = mmc_mk_icon(_changed); }
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findLoops(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_boolean _inChanged, modelica_metatype *out_outShared, modelica_boolean *out_outChanged)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _outShared = NULL;
  modelica_boolean _outChanged;
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _outShared has no default value.
  // _outChanged has no default value.
  // _comps has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _isyst;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  _comps = tmpMeta3;

  _osyst = omc_DynamicOptimization_findLoops1(threadData, _isyst, _inShared, _comps, _inChanged ,&_outShared ,&_outChanged);
  _return: OMC_LABEL_UNUSED
  if (out_outShared) { *out_outShared = _outShared; }
  if (out_outChanged) { *out_outChanged = _outChanged; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_findLoops(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_metatype _inChanged, modelica_metatype *out_outShared, modelica_metatype *out_outChanged)
{
  modelica_integer tmp1;
  modelica_boolean _outChanged;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_inChanged);
  _osyst = omc_DynamicOptimization_findLoops(threadData, _isyst, _inShared, tmp1, out_outShared, &_outChanged);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _outShared; BackendDAE.Shared */
  if (out_outChanged) { *out_outChanged = mmc_mk_icon(_outChanged); }
  return _osyst;
}

DLLDirection
modelica_metatype omc_DynamicOptimization_removeLoops(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  if((!(stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT53), _OMC_LIT33))))
  {
    _outDAE = omc_BackendDAEUtil_mapEqSystemAndFold(threadData, _inDAE, boxvar_DynamicOptimization_findLoops, mmc_mk_boolean(0 /* false */), NULL);
  }
  else
  {
    _outDAE = _inDAE;
  }
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_traverserExpinputDerivativesForDynOpt(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl)
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
    tmp4_2 = _tpl;
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _cr1 = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _lst1 = NULL;
      modelica_metatype _varLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _e has no default value.
      // _cr has no default value.
      // _cr1 has no default value.
      // _var has no default value.
      // _lst has no default value.
      // _lst1 has no default value.
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
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT57), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
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
          _cr = tmpMeta11;
          _vars = tmpMeta12;
          _lst = tmpMeta13;
          _lst1 = tmpMeta14;
          _varLst = tmpMeta15;
          /* Pattern matching succeeded */
          _var = omc_BackendVariable_getVarSingle(threadData, _cr, _vars, NULL);

          /* Pattern-matching assignment */
          tmp16 = omc_BackendVariable_isVarOnTopLevelAndInput(threadData, _var);
          if (1 /* true */ != tmp16) goto goto_2;

          _var = omc_BackendVariable_setHideResult(threadData, _var, _OMC_LIT55);

          _cr1 = omc_ComponentReference_prependStringCref(threadData, _OMC_LIT56, _cr);

          _e = omc_Expression_crefExp(threadData, _cr1);
          tmpMeta17 = mmc_mk_box4(0, _vars, omc_List_unionElt(threadData, _cr1, _lst), omc_List_unionElt(threadData, _cr, _lst1), omc_List_unionElt(threadData, _var, _varLst));
          tmpMeta[0+0] = _e;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta17;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _tpl;
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
  _outTpl = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_traverserExpinputDerivativesForDynOpt(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_DynamicOptimization_traverserExpinputDerivativesForDynOpt(threadData, _inExp, _tpl, &_cont, out_outTpl);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTpl; tuple<BackendDAE.Variables, list<DAE.ComponentRef>, list<DAE.ComponentRef>, list<BackendDAE.Var>> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_traverserinputDerivativesForDynOpt(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _itpl, modelica_metatype *out_tpl)
{
  modelica_metatype _e = NULL;
  modelica_metatype _tpl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _e has no default value.
  // _tpl has no default value.
  _e = omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_DynamicOptimization_traverserExpinputDerivativesForDynOpt, _itpl ,&_tpl);
  _return: OMC_LABEL_UNUSED
  if (out_tpl) { *out_tpl = _tpl; }
  return _e;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_inputDerivativesForDynOptWork(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_boolean _inChanged, modelica_metatype *out_outShared, modelica_boolean *out_outChanged)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _outShared = NULL;
  modelica_boolean _outChanged;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  _outShared = _inShared;
  // _outChanged has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp7_1;
    tmp7_1 = _isyst;
    {
      modelica_metatype _orderedEqs = NULL;
      modelica_metatype _idercr = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _icr = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _varLst = NULL;
      modelica_metatype tmpMeta5;
      modelica_metatype _vars = NULL;
      volatile mmc_switch_type tmp7;
      int tmp8;
      // _orderedEqs has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _idercr = tmpMeta3;
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _icr = tmpMeta4;
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _varLst = tmpMeta5;
      // _vars has no default value.
      tmp7 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp6_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp7 < 2; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
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
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
          
          _orderedEqs = tmpMeta9;
          /* Pattern matching succeeded */
          _vars = omc_BackendVariable_daeGlobalKnownVars(threadData, _outShared);

          /* Pattern-matching assignment */
          tmpMeta10 = mmc_mk_box4(0, _vars, _idercr, _icr, _varLst);
          tmpMeta11 = omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, _orderedEqs, boxvar_DynamicOptimization_traverserinputDerivativesForDynOpt, tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 4));
          _idercr = tmpMeta12;
          _icr = tmpMeta13;
          _varLst = tmpMeta14;

          if(listEmpty(_idercr))
          {
            goto goto_2;
          }

          _varLst = omc_BackendVariable_setVarsKind(threadData, _varLst, _OMC_LIT58);

          {
            modelica_metatype _v;
            for (tmpMeta15 = _varLst; !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
            {
              _v = MMC_CAR(tmpMeta15);
              _outShared = omc_BackendVariable_addGlobalKnownVarDAE(threadData, _v, _outShared);
            }
          }

          _varLst = omc_List_map(threadData, _idercr, boxvar_BackendVariable_makeVar);

          _varLst = omc_List_map1(threadData, _varLst, boxvar_BackendVariable_setVarDirection, _OMC_LIT31);

          {
            modelica_metatype _v;
            for (tmpMeta17 = _varLst; !listEmpty(tmpMeta17); tmpMeta17=MMC_CDR(tmpMeta17))
            {
              _v = MMC_CAR(tmpMeta17);
              _v = omc_BackendVariable_setVarKind(threadData, _v, _OMC_LIT59);

              _outShared = omc_BackendVariable_addGlobalKnownVarDAE(threadData, _v, _outShared);
            }
          }
          tmpMeta[0+0] = _isyst;
          tmp1_c1 = 1 /* true */;
          goto tmp6_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _isyst;
          tmp1_c1 = _inChanged;
          goto tmp6_done;
        }
        }
        goto tmp6_end;
        tmp6_end: ;
      }
      goto goto_2;
      tmp6_done:
      (void)tmp7;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp6_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp7 < 2) {
        goto tmp6_top;
      }
      MMC_THROW_INTERNAL();
      tmp6_done2:;
    }
  }
  _osyst = tmpMeta[0+0];
  _outChanged = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outShared) { *out_outShared = _outShared; }
  if (out_outChanged) { *out_outChanged = _outChanged; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_inputDerivativesForDynOptWork(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_metatype _inChanged, modelica_metatype *out_outShared, modelica_metatype *out_outChanged)
{
  modelica_integer tmp1;
  modelica_boolean _outChanged;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_inChanged);
  _osyst = omc_DynamicOptimization_inputDerivativesForDynOptWork(threadData, _isyst, _inShared, tmp1, out_outShared, &_outChanged);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _outShared; BackendDAE.Shared */
  if (out_outChanged) { *out_outChanged = mmc_mk_icon(_outChanged); }
  return _osyst;
}

DLLDirection
modelica_metatype omc_DynamicOptimization_inputDerivativesForDynOpt(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  if((omc_Config_acceptOptimicaGrammar(threadData) || omc_Flags_getConfigBool(threadData, _OMC_LIT16)))
  {
    _outDAE = omc_BackendDAEUtil_mapEqSystemAndFold(threadData, _inDAE, boxvar_DynamicOptimization_inputDerivativesForDynOptWork, mmc_mk_boolean(0 /* false */), NULL);
  }
  else
  {
    _outDAE = _inDAE;
  }
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addConstraints2(threadData_t *threadData, modelica_metatype _inConstraintLst, modelica_metatype _inVarlst)
{
  modelica_metatype _outConstraintLst = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outConstraintLst = _inConstraintLst;
  // _cr has no default value.
  // _e has no default value.
  {
    modelica_metatype _v;
    for (tmpMeta1 = _inVarlst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      _cr = omc_BackendVariable_varCref(threadData, _v);

      tmpMeta2 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _OMC_LIT0);
      _e = tmpMeta2;

      tmpMeta3 = mmc_mk_cons(_e, _outConstraintLst);
      _outConstraintLst = tmpMeta3;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outConstraintLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addConstraints(threadData_t *threadData, modelica_metatype _InVarlst, modelica_metatype _inConstraint, modelica_fnptr _findCon)
{
  modelica_metatype _outConstraint = NULL;
  modelica_metatype _varlst = NULL;
  modelica_metatype _constraintLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outConstraint has no default value.
  // _varlst has no default value.
  // _constraintLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inConstraint;
    {
      modelica_metatype _constraintLst_ = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _constraintLst_ has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _constraintLst_ = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = _constraintLst_;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
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
  _constraintLst = tmpMeta1;

  _varlst = omc_List_select(threadData, _InVarlst, ((modelica_fnptr) _findCon));

  _constraintLst = omc_DynamicOptimization_addConstraints2(threadData, _constraintLst, _varlst);

  tmpMeta11 = mmc_mk_box2(3, &DAE_Constraint_CONSTRAINT__EXPS__desc, _constraintLst);
  tmpMeta10 = mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil));
  _outConstraint = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _outConstraint;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_mergeObjectVars(threadData_t *threadData, modelica_metatype _inmayer1, modelica_metatype _inmayer2)
{
  modelica_metatype _mayer = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mayer has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inmayer1;
    tmp4_2 = _inmayer2;
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
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _e1 = tmpMeta6;
          _e2 = tmpMeta7;
          /* Pattern matching succeeded */
          _e3 = omc_Expression_expAdd(threadData, _e1, _e2);
          tmpMeta1 = mmc_mk_some(_e3);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          /* Pattern matching succeeded */
          tmpMeta1 = _inmayer2;
          goto tmp3_done;
        }
        case 2: {
          if (!optionNone(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inmayer1;
          goto tmp3_done;
        }
        case 3: {
          
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
  _mayer = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mayer;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findObjTerm(threadData_t *threadData, modelica_metatype _InVarlst, modelica_fnptr _findObjTermFun)
{
  modelica_metatype _objeExp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _nom = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _varlst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _objeExp = mmc_mk_none();
  // _e has no default value.
  // _nom has no default value.
  // _cr has no default value.
  _varlst = omc_List_select(threadData, _InVarlst, ((modelica_fnptr) _findObjTermFun));
  {
    modelica_metatype _v;
    for (tmpMeta1 = _varlst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      _nom = omc_BackendVariable_getVarNominalValue(threadData, _v);

      _cr = omc_BackendVariable_varCref(threadData, _v);

      tmpMeta2 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _OMC_LIT0);
      _e = tmpMeta2;

      _e = omc_Expression_expDiv(threadData, _e, _nom);

      _objeExp = omc_DynamicOptimization_mergeObjectVars(threadData, _objeExp, mmc_mk_some(_e));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _objeExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findTimeGrid(threadData_t *threadData, modelica_metatype _varlst)
{
  modelica_metatype _timeGrids = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _timeGrids = omc_List_select(threadData, _varlst, boxvar_BackendVariable_hasTimeGridAnno);
  _return: OMC_LABEL_UNUSED
  return _timeGrids;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findLagrangeTerm(threadData_t *threadData, modelica_metatype _varlst)
{
  modelica_metatype _lagrange = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lagrange = omc_DynamicOptimization_findObjTerm(threadData, _varlst, boxvar_BackendVariable_hasLagrangeTermAnno);
  _return: OMC_LABEL_UNUSED
  return _lagrange;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_findMayerTerm(threadData_t *threadData, modelica_metatype _varlst)
{
  modelica_metatype _mayer = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mayer = omc_DynamicOptimization_findObjTerm(threadData, _varlst, boxvar_BackendVariable_hasMayerTermAnno);
  _return: OMC_LABEL_UNUSED
  return _mayer;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addOptimizationVarsEqns2(threadData_t *threadData, modelica_metatype _inConstraint, modelica_integer _inI, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _globalKnownVars, modelica_string _prefConCrefName, modelica_metatype _conKind, modelica_metatype *out_outEqns)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype _outEqns = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVars has no default value.
  // _outEqns has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inConstraint;
    {
      modelica_metatype _constraintLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _constraintLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _constraintLst = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_DynamicOptimization_addOptimizationVarsEqns1(threadData, _constraintLst, _inI, _inVars, _inEqns, _globalKnownVars, _prefConCrefName, _conKind, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inVars;
          tmpMeta[0+1] = _inEqns;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outVars = tmpMeta[0+0];
  _outEqns = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEqns) { *out_outEqns = _outEqns; }
  return _outVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_addOptimizationVarsEqns2(threadData_t *threadData, modelica_metatype _inConstraint, modelica_metatype _inI, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _globalKnownVars, modelica_metatype _prefConCrefName, modelica_metatype _conKind, modelica_metatype *out_outEqns)
{
  modelica_integer tmp1;
  modelica_metatype _outVars = NULL;
  tmp1 = mmc_unbox_integer(_inI);
  _outVars = omc_DynamicOptimization_addOptimizationVarsEqns2(threadData, _inConstraint, tmp1, _inVars, _inEqns, _globalKnownVars, _prefConCrefName, _conKind, out_outEqns);
  /* skip box _outVars; BackendDAE.Variables */
  /* skip box _outEqns; list<BackendDAE.Equation> */
  return _outVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addOptimizationVarsEqns1(threadData_t *threadData, modelica_metatype _constraintLst, modelica_integer _inI, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _globalKnownVars, modelica_string _prefConCrefName, modelica_metatype _conKind, modelica_metatype *out_outEqns)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype _outEqns = NULL;
  modelica_integer _i;
  modelica_metatype _dummyVar = NULL;
  modelica_metatype _conEqn = NULL;
  modelica_string _conCrefName = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVars = _inVars;
  _outEqns = _inEqns;
  _i = _inI;
  // _dummyVar has no default value.
  // _conEqn has no default value.
  // _conCrefName has no default value.
  {
    modelica_metatype _elem;
    for (tmpMeta1 = _constraintLst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _elem = MMC_CAR(tmpMeta1);
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
              tmpMeta6 = stringAppend(_prefConCrefName,omc_ComponentReferenceBasics_printComponentRefStr(threadData, omc_Expression_expCref(threadData, _elem)));
              _conCrefName = tmpMeta6;
              goto tmp3_done;
            }
            case 1: {
              modelica_metatype tmpMeta7;
              /* Pattern matching succeeded */
              tmpMeta7 = stringAppend(_prefConCrefName,intString(_i));
              _conCrefName = tmpMeta7;

              _i = ((modelica_integer) 1) + _i;
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

      _conEqn = omc_BackendEquation_generateResidualFromRelation(threadData, _conCrefName, _elem, _OMC_LIT26, _outVars, _globalKnownVars, _conKind ,&_dummyVar);

      _outVars = omc_BackendVariable_addNewVar(threadData, _dummyVar, _outVars);

      _outEqns = listAppend(_conEqn, _outEqns);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outEqns) { *out_outEqns = _outEqns; }
  return _outVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DynamicOptimization_addOptimizationVarsEqns1(threadData_t *threadData, modelica_metatype _constraintLst, modelica_metatype _inI, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _globalKnownVars, modelica_metatype _prefConCrefName, modelica_metatype _conKind, modelica_metatype *out_outEqns)
{
  modelica_integer tmp1;
  modelica_metatype _outVars = NULL;
  tmp1 = mmc_unbox_integer(_inI);
  _outVars = omc_DynamicOptimization_addOptimizationVarsEqns1(threadData, _constraintLst, tmp1, _inVars, _inEqns, _globalKnownVars, _prefConCrefName, _conKind, out_outEqns);
  /* skip box _outVars; BackendDAE.Variables */
  /* skip box _outEqns; list<BackendDAE.Equation> */
  return _outVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_makeVar(threadData_t *threadData, modelica_string _name, modelica_metatype *out_v)
{
  modelica_metatype _cr = NULL;
  modelica_metatype _v = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cr has no default value.
  // _v has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cr = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _name, _OMC_LIT0, tmpMeta1);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _cr, _OMC_LIT11, _OMC_LIT22, _OMC_LIT60, _OMC_LIT0, mmc_mk_none(), mmc_mk_none(), tmpMeta2, _OMC_LIT26, mmc_mk_none(), _OMC_LIT62, mmc_mk_none(), mmc_mk_none(), _OMC_LIT63, _OMC_LIT64, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
  _v = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  if (out_v) { *out_v = _v; }
  return _cr;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_makeObject(threadData_t *threadData, modelica_string _name, modelica_fnptr _findObj, modelica_metatype _varlst, modelica_metatype _optimicaExp)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _annoObj = NULL;
  modelica_metatype _v = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  // _cr has no default value.
  // _annoObj has no default value.
  // _v has no default value.
  // _e has no default value.
  _cr = omc_DynamicOptimization_makeVar(threadData, _name ,&_v);

  _annoObj = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_findObj), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_findObj), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_findObj), 2))), _varlst) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_findObj), 1)))) (threadData, _varlst);

  _annoObj = omc_DynamicOptimization_mergeObjectVars(threadData, _annoObj, _optimicaExp);

  _e = omc_BackendEquation_generateSolvedEqnsfromOption(threadData, _cr, _annoObj, _OMC_LIT26, _OMC_LIT29);

  tmpMeta1 = mmc_mk_box3(0, _v, _e, _annoObj);
  _outTpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_joinObjectFun(threadData_t *threadData, modelica_metatype _obj, modelica_metatype _vars, modelica_metatype _e, modelica_metatype *out_oe, modelica_metatype *out_objExp)
{
  modelica_metatype _ovars = NULL;
  modelica_metatype _oe = NULL;
  modelica_metatype _objExp = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ovars has no default value.
  // _oe has no default value.
  // _objExp has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _e_ = NULL;
      modelica_metatype _e1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _e_ has no default value.
      // _e1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (!listEmpty(tmpMeta6)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _vars;
          tmpMeta[0+1] = _e;
          tmpMeta[0+2] = mmc_mk_none();
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _v = tmpMeta7;
          _e_ = tmpMeta8;
          _e1 = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BackendVariable_addNewVar(threadData, _v, _vars);
          tmpMeta[0+1] = listAppend(_e_, _e);
          tmpMeta[0+2] = _e1;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _ovars = tmpMeta[0+0];
  _oe = tmpMeta[0+1];
  _objExp = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_oe) { *out_oe = _oe; }
  if (out_objExp) { *out_objExp = _objExp; }
  return _ovars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_joinConstraints(threadData_t *threadData, modelica_metatype _inConstraint, modelica_string _name, modelica_metatype _conKind, modelica_metatype _globalKnownVars, modelica_metatype _varlst, modelica_metatype _vars, modelica_metatype _e, modelica_fnptr _findCon, modelica_metatype *out_oe)
{
  modelica_metatype _ovars = NULL;
  modelica_metatype _oe = NULL;
  modelica_metatype _constraints = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ovars has no default value.
  // _oe has no default value.
  // _constraints has no default value.
  _constraints = omc_DynamicOptimization_addConstraints(threadData, _varlst, _inConstraint, ((modelica_fnptr) _findCon));

  _ovars = omc_DynamicOptimization_addOptimizationVarsEqns2(threadData, _constraints, ((modelica_integer) 1), _vars, _e, _globalKnownVars, _name, _conKind ,&_oe);
  _return: OMC_LABEL_UNUSED
  if (out_oe) { *out_oe = _oe; }
  return _ovars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addTimeGrid(threadData_t *threadData, modelica_metatype _varlst, modelica_metatype _iv)
{
  modelica_metatype _ov = NULL;
  modelica_metatype _tG = NULL;
  modelica_metatype _ind = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ov = _iv;
  _tG = omc_DynamicOptimization_findTimeGrid(threadData, _varlst);
  // _ind has no default value.
  if((!listEmpty(_tG)))
  {
    _ind = omc_BackendVariable_getVarIndexFromVars(threadData, _tG, _ov);

    {
      modelica_metatype _i;
      for (tmpMeta1 = _ind; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _i = MMC_CAR(tmpMeta1);
        _ov = omc_BackendVariable_setVarKindForVar(threadData, mmc_unbox_integer(_i), _OMC_LIT65, _ov);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _ov;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_getOptimicaArgs(threadData_t *threadData, modelica_metatype _inClassAttr, modelica_metatype *out_lagrange, modelica_metatype *out_startTimeE, modelica_metatype *out_finalTimeE)
{
  modelica_metatype _mayer = NULL;
  modelica_metatype _lagrange = NULL;
  modelica_metatype _startTimeE = NULL;
  modelica_metatype _finalTimeE = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mayer has no default value.
  // _lagrange has no default value.
  // _startTimeE has no default value.
  // _finalTimeE has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inClassAttr;
    {
      modelica_metatype _mayer_ = NULL;
      modelica_metatype _lagrange_ = NULL;
      modelica_metatype _startTimeE_ = NULL;
      modelica_metatype _finalTimeE_ = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _mayer_ has no default value.
      // _lagrange_ has no default value.
      // _startTimeE_ has no default value.
      // _finalTimeE_ has no default value.
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _mayer_ = tmpMeta8;
          _lagrange_ = tmpMeta9;
          _startTimeE_ = tmpMeta10;
          _finalTimeE_ = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _mayer_;
          tmpMeta[0+1] = _lagrange_;
          tmpMeta[0+2] = _startTimeE_;
          tmpMeta[0+3] = _finalTimeE_;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = mmc_mk_none();
          tmpMeta[0+1] = mmc_mk_none();
          tmpMeta[0+2] = mmc_mk_none();
          tmpMeta[0+3] = mmc_mk_none();
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _mayer = tmpMeta[0+0];
  _lagrange = tmpMeta[0+1];
  _startTimeE = tmpMeta[0+2];
  _finalTimeE = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_lagrange) { *out_lagrange = _lagrange; }
  if (out_startTimeE) { *out_startTimeE = _startTimeE; }
  if (out_finalTimeE) { *out_finalTimeE = _finalTimeE; }
  return _mayer;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DynamicOptimization_addOptimizationVarsEqns(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvars, modelica_metatype __omcQ_24in_5Feqns, modelica_metatype __omcQ_24in_5Fshared, modelica_metatype *out_eqns, modelica_metatype *out_shared)
{
  modelica_metatype _vars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _mayer = NULL;
  modelica_metatype _lagrange = NULL;
  modelica_metatype _startTimeE = NULL;
  modelica_metatype _finalTimeE = NULL;
  modelica_metatype _varlst = NULL;
  modelica_metatype _eqnsLst = NULL;
  modelica_metatype _classAttrs = NULL;
  modelica_metatype _constraints = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_boolean _inOptimicaFlag;
  modelica_boolean _inDynOptimization;
  modelica_boolean _debug;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vars = __omcQ_24in_5Fvars;
  _eqns = __omcQ_24in_5Feqns;
  _shared = __omcQ_24in_5Fshared;
  // _mayer has no default value.
  // _lagrange has no default value.
  // _startTimeE has no default value.
  // _finalTimeE has no default value.
  // _varlst has no default value.
  // _eqnsLst has no default value.
  // _classAttrs has no default value.
  // _constraints has no default value.
  // _globalKnownVars has no default value.
  _inOptimicaFlag = omc_Config_acceptOptimicaGrammar(threadData);
  _inDynOptimization = omc_Flags_getConfigBool(threadData, _OMC_LIT16);
  _debug = 0 /* false */;
  _classAttrs = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 9)));

  _constraints = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 8)));

  _globalKnownVars = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 2)));

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqnsLst = tmpMeta1;

  if((!(_inOptimicaFlag || _inDynOptimization)))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT66),stdout);

    MMC_THROW_INTERNAL();
  }

  omc_FlagsUtil_setConfigEnum(threadData, _OMC_LIT94, ((modelica_integer) 4));

  _mayer = omc_DynamicOptimization_getOptimicaArgs(threadData, _classAttrs ,&_lagrange ,&_startTimeE ,&_finalTimeE);

  _varlst = omc_BackendVariable_varList(threadData, _globalKnownVars);

  omc_DynamicOptimization_addTimeGrid(threadData, _varlst, _globalKnownVars);

  _varlst = listAppend(_varlst, omc_BackendVariable_varList(threadData, _vars));

  _vars = omc_DynamicOptimization_joinObjectFun(threadData, omc_DynamicOptimization_makeObject(threadData, _OMC_LIT1, boxvar_DynamicOptimization_findMayerTerm, _varlst, _mayer), _vars, _eqnsLst ,&_eqnsLst ,&_mayer);

  _vars = omc_DynamicOptimization_joinObjectFun(threadData, omc_DynamicOptimization_makeObject(threadData, _OMC_LIT2, boxvar_DynamicOptimization_findLagrangeTerm, _varlst, _lagrange), _vars, _eqnsLst ,&_eqnsLst ,&_lagrange);

  _vars = omc_DynamicOptimization_joinConstraints(threadData, _constraints, _OMC_LIT95, _OMC_LIT21, _globalKnownVars, _varlst, _vars, _eqnsLst, boxvar_BackendVariable_hasConTermAnno ,&_eqnsLst);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _vars = omc_DynamicOptimization_joinConstraints(threadData, tmpMeta2, _OMC_LIT96, _OMC_LIT97, _globalKnownVars, _varlst, _vars, _eqnsLst, boxvar_BackendVariable_hasFinalConTermAnno ,&_eqnsLst);

  omc_FlagsUtil_setConfigBool(threadData, _OMC_LIT100, 1 /* true */);

  tmpMeta5 = mmc_mk_box5(3, &DAE_ClassAttributes_OPTIMIZATION__ATTRS__desc, _mayer, _lagrange, _startTimeE, _finalTimeE);
  tmpMeta4 = mmc_mk_cons(tmpMeta5, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(22));
  memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[9] = tmpMeta4;
  _shared = tmpMeta3;

  _eqns = omc_BackendEquation_addList(threadData, _eqnsLst, _eqns);
  _return: OMC_LABEL_UNUSED
  if (out_eqns) { *out_eqns = _eqns; }
  if (out_shared) { *out_shared = _shared; }
  return _vars;
}

DLLDirection
modelica_metatype omc_DynamicOptimization_createDynamicOptimization(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdae)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype _dae = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _syst = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype tmpMeta1;
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
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // __omcQ_24mrfa_5F2 has no default value.
  // __omcQ_24mrfa_5F3 has no default value.
  _dae = __omcQ_24in_5Fdae;
  // _vars has no default value.
  // _syst has no default value.
  // _eqns has no default value.
  // _shared has no default value.
  _shared = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dae), 3)));

  /* Pattern-matching assignment */
  tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dae), 2)));
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (!listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  _syst = tmpMeta2;

  /* Pattern-matching assignment */
  tmpMeta4 = _syst;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  _vars = tmpMeta5;
  _eqns = tmpMeta6;

  _vars = omc_DynamicOptimization_addOptimizationVarsEqns(threadData, _vars, _eqns, _shared ,&_eqns ,&_shared);

  __omcQ_24mrfa_5F0 = _vars;

  __omcQ_24mrfa_5F1 = _eqns;

  tmpMeta7 = mmc_mk_box10(3, &BackendDAE_EqSystem_EQSYSTEM__desc, __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 10))));
  _syst = tmpMeta7;

  tmpMeta8 = mmc_mk_cons(_syst, MMC_REFSTRUCTLIT(mmc_nil));
  __omcQ_24mrfa_5F2 = tmpMeta8;

  __omcQ_24mrfa_5F3 = _shared;

  tmpMeta9 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, __omcQ_24mrfa_5F2, __omcQ_24mrfa_5F3);
  _dae = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _dae;
}

