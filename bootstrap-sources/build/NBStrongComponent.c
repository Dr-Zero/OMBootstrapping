#include "omc_simulation_settings.h"
#include "NBStrongComponent.h"
#define _OMC_LIT0_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NBackEnd/Classes/NBStrongComponent.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,90,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1_6,1.772102377e9);
#define _OMC_LIT1_6 MMC_REFREALLIT(_OMC_LIT_STRUCT1_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1249)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1251)),MMC_IMMEDIATE(MMC_TAGFIXNUM(16)),_OMC_LIT1_6}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2_6,1.772102377e9);
#define _OMC_LIT2_6 MMC_REFREALLIT(_OMC_LIT_STRUCT2_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1246)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1252)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),_OMC_LIT2_6}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,17,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT3,_OMC_LIT4,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "NBStrongComponent.createPseudoScalar failed because single indices did not turn out to be single components."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,108,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,1) {_OMC_LIT8,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "NBStrongComponent.createPseudoScalar failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,44,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,1) {_OMC_LIT10,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "NBStrongComponent.isDiscrete failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,64,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "NBStrongComponent.getSolveStatus failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,68,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "NBStrongComponent.getEquations failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,66,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "NBStrongComponent.getVarCref failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,64,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "NBStrongComponent.getVariables failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,66,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "NBStrongComponent.addLoopJacobian failed because of wrong component: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,69,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "NBStrongComponent.toSolvedEquation failed because strong component could not be\n        solved explicitly:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,107,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT19_6,1.772102377e9);
#define _OMC_LIT19_6 MMC_REFREALLIT(_OMC_LIT_STRUCT19_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(671)),MMC_IMMEDIATE(MMC_TAGFIXNUM(39)),MMC_IMMEDIATE(MMC_TAGFIXNUM(672)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),_OMC_LIT19_6}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT20_6,1.772102377e9);
#define _OMC_LIT20_6 MMC_REFREALLIT(_OMC_LIT_STRUCT20_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(672)),MMC_IMMEDIATE(MMC_TAGFIXNUM(39)),MMC_IMMEDIATE(MMC_TAGFIXNUM(673)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),_OMC_LIT20_6}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT21_6,1.772102377e9);
#define _OMC_LIT21_6 MMC_REFREALLIT(_OMC_LIT_STRUCT21_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(673)),MMC_IMMEDIATE(MMC_TAGFIXNUM(39)),MMC_IMMEDIATE(MMC_TAGFIXNUM(674)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),_OMC_LIT21_6}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT22_6,1.772102377e9);
#define _OMC_LIT22_6 MMC_REFREALLIT(_OMC_LIT_STRUCT22_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(674)),MMC_IMMEDIATE(MMC_TAGFIXNUM(39)),MMC_IMMEDIATE(MMC_TAGFIXNUM(675)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),_OMC_LIT22_6}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,18) {&NFType_ANY__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT26,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,0,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT30,0.0);
#define _OMC_LIT30 MMC_REFREALLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT29,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,1,35) {&NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc,}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,17,3) {&NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,5,3) {&NFBackendExtension_Annotations_ANNOTATIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,8,3) {&NFBackendExtension_BackendInfo_BACKEND__INFO__desc,_OMC_LIT32,_OMC_LIT33,_OMC_LIT34,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,11,3) {&NFVariable_VARIABLE__desc,_OMC_LIT23,_OMC_LIT24,_OMC_LIT25,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT27,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT28,_OMC_LIT31,_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "NBStrongComponent.fromSolvedEquationSlice failed for:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,54,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT39_6,1.772102377e9);
#define _OMC_LIT39_6 MMC_REFREALLIT(_OMC_LIT_STRUCT39_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(445)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(445)),MMC_IMMEDIATE(MMC_TAGFIXNUM(188)),_OMC_LIT39_6}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT40_6,1.772102377e9);
#define _OMC_LIT40_6 MMC_REFREALLIT(_OMC_LIT_STRUCT40_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(381)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(381)),MMC_IMMEDIATE(MMC_TAGFIXNUM(68)),_OMC_LIT40_6}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "NBStrongComponent.size failed. Cannot determine size of strong component:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,74,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,1,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "Cannot classify strong component:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,34,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,1,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "BLOCK"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,5,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data ": Single Strong Component (status = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,36,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data ", size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,9,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,1,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "### Variable:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,14,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,1,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "### Equation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,14,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data ": Multi Strong Component (status = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,35,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "### Variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,15,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,2,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "\n### Equation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,15,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data ": Sliced Component (status = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,29,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "### Variable:\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,15,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data ": Resizable Component (status = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,32,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "### Equation:\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,15,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data ": Entwined Component (status = Solve.EXPLICIT, size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,54,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "call order: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,12,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,1,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,2,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,1,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data ": Generic Component (status = Solve.EXPLICIT, size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,53,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data ": Algebraic Loop (Linear = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,27,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,4,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,5,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data ", Mixed = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,10,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data ", Homotopy = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,13,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "Strict Tearing Set"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,18,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "Casual Tearing Set"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,18,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "--- Alias of "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,13,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data " ---\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,5,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "NBStrongComponent.toString failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,34,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,2,1) {_OMC_LIT75,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,1,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data " | "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,3,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,1,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#include "util/modelica.h"

#include "NBStrongComponent_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *threadData, modelica_metatype _dep, modelica_metatype _map, modelica_fnptr _checkFn, modelica_metatype __omcQ_24in_5Fset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBStrongComponent_prepareDependencies_addSubDependencies,2,0) {(void*) boxptr_NBStrongComponent_prepareDependencies_addSubDependencies,0}};
#define boxvar_NBStrongComponent_prepareDependencies_addSubDependencies MMC_REFSTRUCTLIT(boxvar_lit_NBStrongComponent_prepareDependencies_addSubDependencies)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_prepareDependencies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdependencies, modelica_metatype _map, modelica_integer _jacType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBStrongComponent_prepareDependencies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdependencies, modelica_metatype _map, modelica_metatype _jacType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBStrongComponent_prepareDependencies,2,0) {(void*) boxptr_NBStrongComponent_prepareDependencies,0}};
#define boxvar_NBStrongComponent_prepareDependencies MMC_REFSTRUCTLIT(boxvar_lit_NBStrongComponent_prepareDependencies)
PROTECTED_FUNCTION_STATIC void omc_NBStrongComponent_updateDependencyMap(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _dependencies, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBStrongComponent_updateDependencyMap,2,0) {(void*) boxptr_NBStrongComponent_updateDependencyMap,0}};
#define boxvar_NBStrongComponent_updateDependencyMap MMC_REFSTRUCTLIT(boxvar_lit_NBStrongComponent_updateDependencyMap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_getLoopVarsAndEqns(threadData_t *threadData, modelica_metatype _comp_indices, modelica_metatype _eqn_to_var, modelica_metatype _mapping, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype *out_acc_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBStrongComponent_getLoopVarsAndEqns,2,0) {(void*) boxptr_NBStrongComponent_getLoopVarsAndEqns,0}};
#define boxvar_NBStrongComponent_getLoopVarsAndEqns MMC_REFSTRUCTLIT(boxvar_lit_NBStrongComponent_getLoopVarsAndEqns)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *threadData, modelica_metatype _dep, modelica_metatype _map, modelica_fnptr _checkFn, modelica_metatype __omcQ_24in_5Fset)
{
  modelica_metatype _set = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _set = __omcQ_24in_5Fset;
  if(omc_NBVariable_checkCref(threadData, _dep, ((modelica_fnptr) _checkFn), _OMC_LIT2))
  {
    omc_UnorderedSet_add(threadData, _dep, _set);
  }
  else
  {
    {
      modelica_metatype _tmp;
      for (tmpMeta1 = omc_UnorderedMap_getSafe(threadData, _dep, _map, _OMC_LIT1); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _tmp = MMC_CAR(tmpMeta1);
        omc_UnorderedSet_add(threadData, _tmp, _set);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _set;
}

static modelica_metatype closure0_NFComponentRef_mapExp(threadData_t *thData, modelica_metatype closure, modelica_metatype cref)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFComponentRef_mapExp(thData, cref, func);
}static modelica_metatype closure1_NFComponentRef_simplifySubscripts(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref)
{
  modelica_metatype trim = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFComponentRef_simplifySubscripts(thData, $in_cref, trim);
}static modelica_metatype closure2_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *thData, modelica_metatype closure, modelica_metatype dep, modelica_metatype $in_set)
{
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_fnptr checkFn = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBStrongComponent_prepareDependencies_addSubDependencies(thData, dep, map, checkFn, $in_set);
}static modelica_metatype closure3_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *thData, modelica_metatype closure, modelica_metatype dep, modelica_metatype $in_set)
{
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_fnptr checkFn = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBStrongComponent_prepareDependencies_addSubDependencies(thData, dep, map, checkFn, $in_set);
}static modelica_metatype closure4_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *thData, modelica_metatype closure, modelica_metatype dep, modelica_metatype $in_set)
{
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_fnptr checkFn = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBStrongComponent_prepareDependencies_addSubDependencies(thData, dep, map, checkFn, $in_set);
}static modelica_metatype closure5_NBStrongComponent_prepareDependencies_addSubDependencies(threadData_t *thData, modelica_metatype closure, modelica_metatype dep, modelica_metatype $in_set)
{
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_fnptr checkFn = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBStrongComponent_prepareDependencies_addSubDependencies(thData, dep, map, checkFn, $in_set);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_prepareDependencies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdependencies, modelica_metatype _map, modelica_integer _jacType)
{
  modelica_metatype _dependencies = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dependencies = __omcQ_24in_5Fdependencies;
  tmpMeta1 = mmc_mk_box1(0, boxvar_NFExpression_replaceResizableParameter);
  omc_UnorderedSet_apply(threadData, _dependencies, (modelica_fnptr) mmc_mk_box2(0,closure0_NFComponentRef_mapExp,tmpMeta1));

  tmpMeta2 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
  omc_UnorderedSet_apply(threadData, _dependencies, (modelica_fnptr) mmc_mk_box2(0,closure1_NFComponentRef_simplifySubscripts,tmpMeta2));

  { /* match expression */
    modelica_integer tmp6_1;
    tmp6_1 = (modelica_integer)_jacType;
    {
      int tmp6;
      {
        switch (MMC_SWITCH_CAST(tmp6_1)) {
        case 1: {
          modelica_metatype tmpMeta7;
          if (1 != tmp6_1) goto tmp5_end;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(0, _map, boxvar_NBVariable_isState);
          tmpMeta3 = omc_UnorderedSet_fold(threadData, _dependencies, (modelica_fnptr) mmc_mk_box2(0,closure2_NBStrongComponent_prepareDependencies_addSubDependencies,tmpMeta7), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          goto tmp5_done;
        }
        case 5: {
          modelica_metatype tmpMeta8;
          if (5 != tmp6_1) goto tmp5_end;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(0, _map, boxvar_NBVariable_isStateOrOptimizable);
          tmpMeta3 = omc_UnorderedSet_fold(threadData, _dependencies, (modelica_fnptr) mmc_mk_box2(0,closure3_NBStrongComponent_prepareDependencies_addSubDependencies,tmpMeta8), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          goto tmp5_done;
        }
        case 6: {
          modelica_metatype tmpMeta9;
          if (6 != tmp6_1) goto tmp5_end;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box2(0, _map, boxvar_NBVariable_isStateOrOptimizable);
          tmpMeta3 = omc_UnorderedSet_fold(threadData, _dependencies, (modelica_fnptr) mmc_mk_box2(0,closure4_NBStrongComponent_prepareDependencies_addSubDependencies,tmpMeta9), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          goto tmp5_done;
        }
        case 7: {
          modelica_metatype tmpMeta10;
          if (7 != tmp6_1) goto tmp5_end;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box2(0, _map, boxvar_NBVariable_isStateOrOptimizable);
          tmpMeta3 = omc_UnorderedSet_fold(threadData, _dependencies, (modelica_fnptr) mmc_mk_box2(0,closure5_NBStrongComponent_prepareDependencies_addSubDependencies,tmpMeta10), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          goto tmp5_done;
        }
        default:
        tmp5_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta3 = _dependencies;
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
  _dependencies = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _dependencies;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBStrongComponent_prepareDependencies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdependencies, modelica_metatype _map, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  modelica_metatype _dependencies = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  _dependencies = omc_NBStrongComponent_prepareDependencies(threadData, __omcQ_24in_5Fdependencies, _map, tmp1);
  /* skip box _dependencies; UnorderedSet<NFComponentRef> */
  return _dependencies;
}

PROTECTED_FUNCTION_STATIC void omc_NBStrongComponent_updateDependencyMap(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _dependencies, modelica_metatype _map)
{
  modelica_boolean _removed;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _removed has no default value.
  _removed = omc_UnorderedSet_remove(threadData, _cref, _dependencies);

  omc_UnorderedMap_add(threadData, _cref, omc_UnorderedSet_toList(threadData, _dependencies), _map);

  if(_removed)
  {
    omc_UnorderedSet_addNew(threadData, _cref, _dependencies);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBStrongComponent_getLoopVarsAndEqns(threadData_t *threadData, modelica_metatype _comp_indices, modelica_metatype _eqn_to_var, modelica_metatype _mapping, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype *out_acc_eqns)
{
  modelica_metatype _acc_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _acc_eqns = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _var_idx;
  modelica_integer _var_arr_idx;
  modelica_integer _var_scal_idx;
  modelica_integer _eqn_arr_idx;
  modelica_integer _eqn_scal_idx;
  modelica_metatype _idx_lst = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _eqn = NULL;
  modelica_integer _len_comps;
  modelica_metatype _var_map = NULL;
  modelica_metatype _eqn_map = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_boolean tmp22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_integer tmp30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_integer tmp34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_boolean tmp40;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc_vars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc_eqns = tmpMeta2;
  // _var_idx has no default value.
  // _var_arr_idx has no default value.
  // _var_scal_idx has no default value.
  // _eqn_arr_idx has no default value.
  // _eqn_scal_idx has no default value.
  // _idx_lst has no default value.
  // _var has no default value.
  // _eqn has no default value.
  _len_comps = listLength(_comp_indices);
  _var_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, _len_comps);
  _eqn_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, _len_comps);
  {
    modelica_metatype _eqn_idx;
    for (tmpMeta3 = _comp_indices; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _eqn_idx = MMC_CAR(tmpMeta3);
      _var_idx = mmc_unbox_integer(arrayGet(_eqn_to_var,mmc_unbox_integer(_eqn_idx)) /* DAE.ASUB */);

      _var_arr_idx = mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 3))),_var_idx) /* DAE.ASUB */);

      _eqn_arr_idx = mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),mmc_unbox_integer(_eqn_idx)) /* DAE.ASUB */);

      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _idx_lst = omc_UnorderedMap_getOrDefault(threadData, mmc_mk_integer(_var_arr_idx), _var_map, tmpMeta4);

      tmpMeta5 = mmc_mk_cons(mmc_mk_integer(_var_idx), _idx_lst);
      omc_UnorderedMap_add(threadData, mmc_mk_integer(_var_arr_idx), tmpMeta5, _var_map);

      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _idx_lst = omc_UnorderedMap_getOrDefault(threadData, mmc_mk_integer(_eqn_arr_idx), _eqn_map, tmpMeta6);

      tmpMeta7 = mmc_mk_cons(_eqn_idx, _idx_lst);
      omc_UnorderedMap_add(threadData, mmc_mk_integer(_eqn_arr_idx), tmpMeta7, _eqn_map);
    }
  }

  {
    modelica_metatype _tpl;
    for (tmpMeta9 = omc_UnorderedMap_toList(threadData, _var_map); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
    {
      _tpl = MMC_CAR(tmpMeta9);
      /* Pattern-matching assignment */
      tmpMeta10 = _tpl;
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
      tmp12 = mmc_unbox_integer(tmpMeta11);
      tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
      _var_arr_idx = tmp12  /* pattern as ty=Integer */;
      _idx_lst = tmpMeta13;

      /* Pattern-matching assignment */
      tmpMeta14 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 5))),_var_arr_idx) /* DAE.ASUB */;
      tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
      tmp16 = mmc_unbox_integer(tmpMeta15);
      _var_scal_idx = tmp16  /* pattern as ty=Integer */;

      _var = omc_NBVariable_VariablePointers_getVarAt(threadData, _vars, _var_arr_idx);

      tmp22 = (modelica_boolean)(listLength(_idx_lst) == omc_NBVariable_size(threadData, _var, 0 /* false */));
      if(tmp22)
      {
        tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta23 = tmpMeta17;
      }
      else
      {
        {
          modelica_metatype __omcQ_24tmpVar3;
          modelica_metatype* tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype __omcQ_24tmpVar2;
          modelica_integer tmp21;
          modelica_metatype _i_loopVar = 0;
          modelica_metatype _i;
          _i_loopVar = _idx_lst;
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar3 = tmpMeta20; /* defaultValue */
          tmp19 = &__omcQ_24tmpVar3;
          while(1) {
            tmp21 = 1;
            if (!listEmpty(_i_loopVar)) {
              _i = MMC_CAR(_i_loopVar);
              _i_loopVar = MMC_CDR(_i_loopVar);
              tmp21--;
            }
            if (tmp21 == 0) {
              __omcQ_24tmpVar2 = mmc_mk_integer(mmc_unbox_integer(_i) - _var_scal_idx);
              *tmp19 = mmc_mk_cons(__omcQ_24tmpVar2,0);
              tmp19 = &MMC_CDR(*tmp19);
            } else if (tmp21 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp19 = mmc_mk_nil();
          tmpMeta18 = __omcQ_24tmpVar3;
        }
        tmpMeta23 = tmpMeta18;
      }
      _idx_lst = tmpMeta23;

      tmpMeta25 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _var, _idx_lst);
      tmpMeta24 = mmc_mk_cons(tmpMeta25, _acc_vars);
      _acc_vars = tmpMeta24;
    }
  }

  {
    modelica_metatype _tpl;
    for (tmpMeta27 = omc_UnorderedMap_toList(threadData, _eqn_map); !listEmpty(tmpMeta27); tmpMeta27=MMC_CDR(tmpMeta27))
    {
      _tpl = MMC_CAR(tmpMeta27);
      /* Pattern-matching assignment */
      tmpMeta28 = _tpl;
      tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 1));
      tmp30 = mmc_unbox_integer(tmpMeta29);
      tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
      _eqn_arr_idx = tmp30  /* pattern as ty=Integer */;
      _idx_lst = tmpMeta31;

      /* Pattern-matching assignment */
      tmpMeta32 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 4))),_eqn_arr_idx) /* DAE.ASUB */;
      tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
      tmp34 = mmc_unbox_integer(tmpMeta33);
      _eqn_scal_idx = tmp34  /* pattern as ty=Integer */;

      _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, _eqn_arr_idx);

      tmp40 = (modelica_boolean)(listLength(_idx_lst) == omc_NBEquation_Equation_size(threadData, _eqn, 0 /* false */));
      if(tmp40)
      {
        tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta41 = tmpMeta35;
      }
      else
      {
        {
          modelica_metatype __omcQ_24tmpVar5;
          modelica_metatype* tmp37;
          modelica_metatype tmpMeta38;
          modelica_metatype __omcQ_24tmpVar4;
          modelica_integer tmp39;
          modelica_metatype _i_loopVar = 0;
          modelica_metatype _i;
          _i_loopVar = _idx_lst;
          tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar5 = tmpMeta38; /* defaultValue */
          tmp37 = &__omcQ_24tmpVar5;
          while(1) {
            tmp39 = 1;
            if (!listEmpty(_i_loopVar)) {
              _i = MMC_CAR(_i_loopVar);
              _i_loopVar = MMC_CDR(_i_loopVar);
              tmp39--;
            }
            if (tmp39 == 0) {
              __omcQ_24tmpVar4 = mmc_mk_integer(mmc_unbox_integer(_i) - _eqn_scal_idx);
              *tmp37 = mmc_mk_cons(__omcQ_24tmpVar4,0);
              tmp37 = &MMC_CDR(*tmp37);
            } else if (tmp39 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp37 = mmc_mk_nil();
          tmpMeta36 = __omcQ_24tmpVar5;
        }
        tmpMeta41 = tmpMeta36;
      }
      _idx_lst = tmpMeta41;

      tmpMeta43 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqn, _idx_lst);
      tmpMeta42 = mmc_mk_cons(tmpMeta43, _acc_eqns);
      _acc_eqns = tmpMeta42;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_acc_eqns) { *out_acc_eqns = _acc_eqns; }
  return _acc_vars;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_createSliceOrSingle(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _var_slice, modelica_metatype _eqn_slice)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  if(((omc_NBSlice_isFull(threadData, _var_slice) && omc_NBSlice_isFull(threadData, _eqn_slice)) && (!omc_NFComponentRef_hasSubscripts(threadData, _cref))))
  {
    tmpMeta1 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_NBSlice_getT(threadData, _var_slice), omc_NBSlice_getT(threadData, _eqn_slice), mmc_mk_integer(1));
    _comp = tmpMeta1;
  }
  else
  {
    tmpMeta2 = mmc_mk_box5(5, &NBStrongComponent_SLICED__COMPONENT__desc, _cref, _var_slice, _eqn_slice, mmc_mk_integer(1));
    _comp = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  return _comp;
}

static modelica_metatype closure6_NBInitialization_containsHomotopyCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype b = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_containsHomotopyCall(thData, $in_exp, b);
}
DLLDirection
modelica_metatype omc_NBStrongComponent_createPseudoScalar(threadData_t *threadData, modelica_metatype _comp_indices, modelica_metatype _eqn_to_var, modelica_metatype _mapping, modelica_metatype _vars, modelica_metatype _eqns)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp_indices;
    {
      modelica_integer _i;
      modelica_integer _var_scal_idx;
      modelica_integer _var_arr_idx;
      modelica_metatype _var = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _comp_vars = NULL;
      modelica_metatype _comp_eqns = NULL;
      modelica_metatype _tearingSet = NULL;
      modelica_metatype _var_slice = NULL;
      modelica_metatype _eqn_slice = NULL;
      modelica_metatype _homotopy = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _var_scal_idx has no default value.
      // _var_arr_idx has no default value.
      // _var has no default value.
      // _eqn has no default value.
      // _comp_vars has no default value.
      // _comp_eqns has no default value.
      // _tearingSet has no default value.
      // _var_slice has no default value.
      // _eqn_slice has no default value.
      _homotopy = omc_Pointer_create(threadData, mmc_mk_boolean(0 /* false */));
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _i = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _var_scal_idx = mmc_unbox_integer(arrayGet(_eqn_to_var,_i) /* DAE.ASUB */);

          _var_arr_idx = mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 3))),_var_scal_idx) /* DAE.ASUB */);

          _var = omc_NBVariable_VariablePointers_getVarAt(threadData, _vars, _var_arr_idx);

          _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),_i) /* DAE.ASUB */));

          if(omc_NBEquation_Equation_isForEquation(threadData, _eqn))
          {
            { /* matchcontinue expression */
              {
                volatile mmc_switch_type tmp11;
                int tmp12;
                tmp11 = 0;
                MMC_TRY_INTERNAL(mmc_jumper)
                tmp10_top:
                threadData->mmc_jumper = &new_mmc_jumper;
                for (; tmp11 < 2; tmp11++) {
                  switch (MMC_SWITCH_CAST(tmp11)) {
                  case 0: {
                    modelica_metatype tmpMeta13;
                    modelica_metatype tmpMeta14;
                    modelica_metatype tmpMeta15;
                    modelica_metatype tmpMeta16;
                    modelica_metatype tmpMeta17;
                    modelica_metatype tmpMeta18;
                    /* Pattern matching succeeded */
                    /* Pattern-matching tuple assignment */
                    tmpMeta16 = omc_NBStrongComponent_getLoopVarsAndEqns(threadData, _comp_indices, _eqn_to_var, _mapping, _vars, _eqns, &tmpMeta13);
                    if (listEmpty(tmpMeta16)) goto goto_9;
                    tmpMeta17 = MMC_CAR(tmpMeta16);
                    tmpMeta18 = MMC_CDR(tmpMeta16);
                    if (!listEmpty(tmpMeta18)) goto goto_9;
                    _var_slice = tmpMeta17;
                    if (listEmpty(tmpMeta13)) goto goto_9;
                    tmpMeta14 = MMC_CAR(tmpMeta13);
                    tmpMeta15 = MMC_CDR(tmpMeta13);
                    if (!listEmpty(tmpMeta15)) goto goto_9;
                    _eqn_slice = tmpMeta14;
                    goto tmp10_done;
                  }
                  case 1: {
                    /* Pattern matching succeeded */
                    omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT9);

                    goto goto_9;
                    goto tmp10_done;
                  }
                  }
                  goto tmp10_end;
                  tmp10_end: ;
                }
                goto goto_9;
                tmp10_done:
                (void)tmp11;
                MMC_RESTORE_INTERNAL(mmc_jumper);
                goto tmp10_done2;
                goto_9:;
                MMC_CATCH_INTERNAL(mmc_jumper);
                if (++tmp11 < 2) {
                  goto tmp10_top;
                }
                goto goto_2;
                tmp10_done2:;
              }
            }
            ;

            tmpMeta19 = mmc_mk_box5(5, &NBStrongComponent_SLICED__COMPONENT__desc, omc_NBVariable_VariablePointers_varSlice(threadData, _vars, _var_scal_idx, _mapping), _var_slice, _eqn_slice, mmc_mk_integer(1));
            _comp = tmpMeta19;
          }
          else
          {
            if(omc_NBEquation_Equation_isCompound(threadData, _eqn))
            {
              tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta22 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _var, tmpMeta21);
              tmpMeta20 = mmc_mk_cons(tmpMeta22, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta24 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqn, tmpMeta23);
              tmpMeta25 = mmc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, tmpMeta20, tmpMeta24, mmc_mk_integer(1));
              _comp = tmpMeta25;
            }
            else
            {
              { /* matchcontinue expression */
                {
                  volatile mmc_switch_type tmp28;
                  int tmp29;
                  tmp28 = 0;
                  MMC_TRY_INTERNAL(mmc_jumper)
                  tmp27_top:
                  threadData->mmc_jumper = &new_mmc_jumper;
                  for (; tmp28 < 2; tmp28++) {
                    switch (MMC_SWITCH_CAST(tmp28)) {
                    case 0: {
                      modelica_metatype tmpMeta30;
                      modelica_metatype tmpMeta31;
                      modelica_metatype tmpMeta32;
                      modelica_metatype tmpMeta33;
                      modelica_metatype tmpMeta34;
                      modelica_metatype tmpMeta35;
                      /* Pattern matching succeeded */
                      /* Pattern-matching tuple assignment */
                      tmpMeta33 = omc_NBStrongComponent_getLoopVarsAndEqns(threadData, _comp_indices, _eqn_to_var, _mapping, _vars, _eqns, &tmpMeta30);
                      if (listEmpty(tmpMeta33)) goto goto_26;
                      tmpMeta34 = MMC_CAR(tmpMeta33);
                      tmpMeta35 = MMC_CDR(tmpMeta33);
                      if (!listEmpty(tmpMeta35)) goto goto_26;
                      _var_slice = tmpMeta34;
                      if (listEmpty(tmpMeta30)) goto goto_26;
                      tmpMeta31 = MMC_CAR(tmpMeta30);
                      tmpMeta32 = MMC_CDR(tmpMeta30);
                      if (!listEmpty(tmpMeta32)) goto goto_26;
                      _eqn_slice = tmpMeta31;
                      goto tmp27_done;
                    }
                    case 1: {
                      /* Pattern matching succeeded */
                      omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT9);

                      goto goto_26;
                      goto tmp27_done;
                    }
                    }
                    goto tmp27_end;
                    tmp27_end: ;
                  }
                  goto goto_26;
                  tmp27_done:
                  (void)tmp28;
                  MMC_RESTORE_INTERNAL(mmc_jumper);
                  goto tmp27_done2;
                  goto_26:;
                  MMC_CATCH_INTERNAL(mmc_jumper);
                  if (++tmp28 < 2) {
                    goto tmp27_top;
                  }
                  goto goto_2;
                  tmp27_done2:;
                }
              }
              ;

              _comp = omc_NBStrongComponent_createSliceOrSingle(threadData, omc_NBVariable_VariablePointers_varSlice(threadData, _vars, _var_scal_idx, _mapping), _var_slice, _eqn_slice);
            }
          }
          tmpMeta1 = _comp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta36;
          
          /* Pattern matching succeeded */
          _comp_vars = omc_NBStrongComponent_getLoopVarsAndEqns(threadData, _comp_indices, _eqn_to_var, _mapping, _vars, _eqns ,&_comp_eqns);
          { /* match expression */
            modelica_metatype tmp39_1;modelica_metatype tmp39_2;
            tmp39_1 = _comp_vars;
            tmp39_2 = _comp_eqns;
            {
              volatile mmc_switch_type tmp39;
              int tmp40;
              tmp39 = 0;
              for (; tmp39 < 3; tmp39++) {
                switch (MMC_SWITCH_CAST(tmp39)) {
                case 0: {
                  modelica_metatype tmpMeta41;
                  modelica_metatype tmpMeta42;
                  modelica_metatype tmpMeta43;
                  modelica_metatype tmpMeta44;
                  if (listEmpty(tmp39_1)) goto tmp38_end;
                  tmpMeta41 = MMC_CAR(tmp39_1);
                  tmpMeta42 = MMC_CDR(tmp39_1);
                  if (!listEmpty(tmpMeta42)) goto tmp38_end;
                  if (listEmpty(tmp39_2)) goto tmp38_end;
                  tmpMeta43 = MMC_CAR(tmp39_2);
                  tmpMeta44 = MMC_CDR(tmp39_2);
                  if (!listEmpty(tmpMeta44)) goto tmp38_end;
                  _var_slice = tmpMeta41;
                  _eqn_slice = tmpMeta43;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(!(omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, _eqn_slice)) || omc_NBEquation_Equation_isAlgorithm(threadData, omc_NBSlice_getT(threadData, _eqn_slice))))) goto tmp38_end;
                  tmpMeta36 = omc_NBStrongComponent_createSliceOrSingle(threadData, omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _var_slice)), _var_slice, _eqn_slice);
                  goto tmp38_done;
                }
                case 1: {
                  modelica_metatype tmpMeta45;
                  modelica_metatype tmpMeta46;
                  modelica_metatype tmpMeta47;
                  if (listEmpty(tmp39_2)) goto tmp38_end;
                  tmpMeta45 = MMC_CAR(tmp39_2);
                  tmpMeta46 = MMC_CDR(tmp39_2);
                  if (!listEmpty(tmpMeta46)) goto tmp38_end;
                  
                  _eqn_slice = tmpMeta45;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, _eqn_slice)))) goto tmp38_end;
                  tmpMeta47 = mmc_mk_box4(4, &NBStrongComponent_MULTI__COMPONENT__desc, _comp_vars, _eqn_slice, mmc_mk_integer(1));
                  tmpMeta36 = tmpMeta47;
                  goto tmp38_done;
                }
                case 2: {
                  modelica_metatype tmpMeta48;
                  modelica_metatype tmpMeta49;
                  modelica_metatype tmpMeta50;
                  modelica_metatype tmpMeta51;
                  modelica_metatype tmpMeta52;
                  modelica_metatype tmpMeta53;
                  
                  /* Pattern matching succeeded */
                  tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta49 = mmc_mk_box5(3, &NBTearing_TEARING__SET__desc, _comp_vars, _comp_eqns, listArray(tmpMeta48), mmc_mk_none());
                  _tearingSet = tmpMeta49;

                  {
                    modelica_metatype _eqn;
                    for (tmpMeta50 = _comp_eqns; !listEmpty(tmpMeta50); tmpMeta50=MMC_CDR(tmpMeta50))
                    {
                      _eqn = MMC_CAR(tmpMeta50);
                      tmpMeta51 = mmc_mk_box1(0, _homotopy);
                      omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _eqn)), (modelica_fnptr) mmc_mk_box2(0,closure6_NBInitialization_containsHomotopyCall,tmpMeta51), mmc_mk_none(), boxvar_NFExpression_map);
                    }
                  }
                  tmpMeta53 = mmc_mk_box8(9, &NBStrongComponent_ALGEBRAIC__LOOP__desc, mmc_mk_integer(((modelica_integer) -1)), _tearingSet, mmc_mk_none(), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), omc_Pointer_access(threadData, _homotopy), mmc_mk_integer(3));
                  tmpMeta36 = tmpMeta53;
                  goto tmp38_done;
                }
                }
                goto tmp38_end;
                tmp38_end: ;
              }
              goto goto_37;
              goto_37:;
              goto goto_2;
              goto tmp38_done;
              tmp38_done:;
            }
          }tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT11);
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
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _comp;
}

DLLDirection
modelica_boolean omc_NBStrongComponent_isAlgebraicLoop(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NBStrongComponent_removeAlias(threadData, _comp);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,7) == 0) goto tmp3_end;
          
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
modelica_metatype boxptr_NBStrongComponent_isAlgebraicLoop(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isAlgebraicLoop(threadData, _comp);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NBStrongComponent_isSingleComponent(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NBStrongComponent_removeAlias(threadData, _comp);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
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
modelica_metatype boxptr_NBStrongComponent_isSingleComponent(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isSingleComponent(threadData, _comp);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NBStrongComponent_isAlias(threadData_t *threadData, modelica_metatype _comp)
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
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          
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
modelica_metatype boxptr_NBStrongComponent_isAlias(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isAlias(threadData, _comp);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NBStrongComponent_isDummy(threadData_t *threadData, modelica_metatype _comp)
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
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDummy(threadData, omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDummy(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))))));
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
modelica_metatype boxptr_NBStrongComponent_isDummy(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isDummy(threadData, _comp);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NBStrongComponent_isDiscrete(threadData_t *threadData, modelica_metatype _comp)
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
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDiscrete(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDiscrete(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDiscrete(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDiscrete(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), boxvar_NBStrongComponent_isDiscrete);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isDiscrete(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 6))));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT12,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta5);
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBStrongComponent_isDiscrete(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isDiscrete(threadData, _comp);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NBStrongComponent_getSolveStatus(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_integer _status;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _status has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 6))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 8))));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT13,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta5);
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
  _status = tmp1;
  _return: OMC_LABEL_UNUSED
  return _status;
}
modelica_metatype boxptr_NBStrongComponent_getSolveStatus(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_NBStrongComponent_getSolveStatus(threadData, _comp);
  out_status = mmc_mk_icon(_status);
  return out_status;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_getEquations(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _eqns = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqns has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp13;
            modelica_metatype _slice_loopVar = 0;
            modelica_metatype _slice;
            _slice_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar7;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_slice_loopVar)) {
                _slice = MMC_CAR(_slice_loopVar);
                _slice_loopVar = MMC_CDR(_slice_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar6 = omc_NBStrongComponent_getEquations(threadData, _slice);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar7;
          }
          tmpMeta1 = omc_List_flatten(threadData, tmpMeta10);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBTearing_getResidualEqns(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = stringAppend(_OMC_LIT14,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta14 = mmc_mk_cons(tmpMeta15, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta14);
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
  _eqns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqns;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_getVarCref(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _var_cref = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var_cref has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT15,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta5);
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
  _var_cref = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _var_cref;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_getVariables(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vars has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp9;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar9;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar8 = omc_NBSlice_getT(threadData, _v);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar9;
          }
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons(omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_cons(omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp16;
            modelica_metatype _slice_loopVar = 0;
            modelica_metatype _slice;
            _slice_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar11;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_slice_loopVar)) {
                _slice = MMC_CAR(_slice_loopVar);
                _slice_loopVar = MMC_CDR(_slice_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar10 = omc_NBStrongComponent_getVariables(threadData, _slice);
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar11;
          }
          tmpMeta1 = omc_List_flatten(threadData, tmpMeta13);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBTearing_getVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta18 = stringAppend(_OMC_LIT16,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta17 = mmc_mk_cons(tmpMeta18, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta17);
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
  _vars = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _vars;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_getLoopResiduals(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _residuals = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _residuals has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBTearing_getResidualVars(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
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
  _residuals = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _residuals;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_addLoopJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _jac)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      modelica_metatype _strict = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _strict has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _strict = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_strict), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = _jac;
          _strict = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_comp), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = _strict;
          _comp = tmpMeta8;
          tmpMeta1 = _comp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_OMC_LIT17,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta9 = mmc_mk_cons(tmpMeta10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta9);
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
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _comp;
}

static modelica_metatype closure7_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}
DLLDirection
void omc_NBStrongComponent_addForLoopDependencies(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _indices, modelica_metatype _var_cref, modelica_metatype _var_rep, modelica_metatype _eqn_rep, modelica_metatype _var_rep_mapping, modelica_metatype _eqn_rep_mapping, modelica_metatype _map, modelica_metatype _set, modelica_integer _jacType)
{
  modelica_metatype _iter = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype _dependencies = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _scalarized_dependencies = NULL;
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
  // _iter has no default value.
  // _body has no default value.
  // _dependencies has no default value.
  // _cref has no default value.
  // _scalarized_dependencies has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _eqn;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,5,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (!listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  _iter = tmpMeta2;
  _body = tmpMeta4;

  tmpMeta6 = mmc_mk_box1(0, _set);
  _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, _eqn, (modelica_fnptr) mmc_mk_box2(0,closure7_NBSlice_getDependentCrefCausalized,tmpMeta6), boxvar_NFExpression_fakeMap);

  if(omc_NFComponentRef_isEmpty(threadData, _var_cref))
  {
    /* Pattern-matching assignment */
    tmpMeta7 = omc_NBEquation_Equation_getLHS(threadData, _body);
    if (optionNone(tmpMeta7)) MMC_THROW_INTERNAL();
    tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,2) == 0) MMC_THROW_INTERNAL();
    tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
    _cref = tmpMeta9;
  }
  else
  {
    _cref = _var_cref;
  }

  _scalarized_dependencies = omc_NBSlice_getDependentCrefsPseudoForCausalized(threadData, _cref, _dependencies, _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _iter, omc_NBEquation_Equation_size(threadData, omc_Pointer_create(threadData, _eqn), 0 /* false */), _indices, 0 /* false */);

  omc_NBStrongComponent_addScalarizedDependencies(threadData, _scalarized_dependencies, _map, (modelica_integer)_jacType);
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NBStrongComponent_addForLoopDependencies(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _indices, modelica_metatype _var_cref, modelica_metatype _var_rep, modelica_metatype _eqn_rep, modelica_metatype _var_rep_mapping, modelica_metatype _eqn_rep_mapping, modelica_metatype _map, modelica_metatype _set, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_jacType);
  omc_NBStrongComponent_addForLoopDependencies(threadData, _eqn, _indices, _var_cref, _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, tmp1);
  return;
}

DLLDirection
void omc_NBStrongComponent_addScalarizedDependencies(threadData_t *threadData, modelica_metatype _scalarized_dependencies, modelica_metatype _map, modelica_integer _jacType)
{
  modelica_metatype _cref = NULL;
  modelica_metatype _dependencies = NULL;
  modelica_metatype _deps_set = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cref has no default value.
  // _dependencies has no default value.
  // _deps_set has no default value.
  {
    modelica_metatype _tpl;
    for (tmpMeta1 = listReverse(_scalarized_dependencies); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _tpl = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _tpl;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _cref = tmpMeta3;
      _dependencies = tmpMeta4;

      _deps_set = omc_NBStrongComponent_prepareDependencies(threadData, omc_UnorderedSet_fromList(threadData, _dependencies, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual), _map, (modelica_integer)_jacType);

      omc_NBStrongComponent_updateDependencyMap(threadData, _cref, _deps_set, _map);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NBStrongComponent_addScalarizedDependencies(threadData_t *threadData, modelica_metatype _scalarized_dependencies, modelica_metatype _map, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_jacType);
  omc_NBStrongComponent_addScalarizedDependencies(threadData, _scalarized_dependencies, _map, tmp1);
  return;
}

static modelica_metatype closure8_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}static modelica_metatype closure9_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}static modelica_metatype closure10_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}static modelica_metatype closure11_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}static modelica_metatype closure12_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}static modelica_metatype closure13_NBSlice_getDependentCrefCausalized(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_metatype acc)
{
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBSlice_getDependentCrefCausalized(thData, $in_cref, acc, set);
}
DLLDirection
void omc_NBStrongComponent_collectCrefs(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _var_rep, modelica_metatype _eqn_rep, modelica_metatype _var_rep_mapping, modelica_metatype _eqn_rep_mapping, modelica_metatype _map, modelica_metatype _set, modelica_integer _jacType)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _comp;
    {
      modelica_metatype _eqn_ptr = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _dependencies = NULL;
      modelica_metatype _loop_vars = NULL;
      modelica_metatype _tmp = NULL;
      modelica_metatype _scalarized_dependencies = NULL;
      modelica_metatype _strict = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _iter = NULL;
      modelica_metatype _deps_set = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _eqn_ptr has no default value.
      // _cref has no default value.
      // _dependencies has no default value.
      // _loop_vars has no default value.
      // _tmp has no default value.
      // _scalarized_dependencies has no default value.
      // _strict has no default value.
      // _eqn has no default value.
      // _iter has no default value.
      // _deps_set has no default value.
      tmp3 = 0;
      for (; tmp3 < 11; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isArrayEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))))) goto tmp2_end;
          tmpMeta5 = mmc_mk_box1(0, _set);
          _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), (modelica_fnptr) mmc_mk_box2(0,closure8_NBSlice_getDependentCrefCausalized,tmpMeta5), boxvar_NFExpression_fakeMap);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _scalarized_dependencies = omc_NBSlice_getDependentCrefsPseudoArrayCausalized(threadData, omc_NBVariable_getVarName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))), _dependencies, tmpMeta6);

          omc_NBStrongComponent_addScalarizedDependencies(threadData, _scalarized_dependencies, _map, (modelica_integer)_jacType);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box1(0, _set);
          _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), (modelica_fnptr) mmc_mk_box2(0,closure9_NBSlice_getDependentCrefCausalized,tmpMeta7), boxvar_NFExpression_fakeMap);

          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp9;
            modelica_metatype tmpMeta10;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp11;
            modelica_metatype _dep_loopVar = 0;
            modelica_metatype _dep;
            _dep_loopVar = _dependencies;
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta10; /* defaultValue */
            tmp9 = &__omcQ_24tmpVar13;
            while(1) {
              tmp11 = 1;
              if (!listEmpty(_dep_loopVar)) {
                _dep = MMC_CAR(_dep_loopVar);
                _dep_loopVar = MMC_CDR(_dep_loopVar);
                tmp11--;
              }
              if (tmp11 == 0) {
                __omcQ_24tmpVar12 = omc_NFComponentRef_scalarizeAll(threadData, _dep, 1 /* true */);
                *tmp9 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp9 = &MMC_CDR(*tmp9);
              } else if (tmp11 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp9 = mmc_mk_nil();
            tmpMeta8 = __omcQ_24tmpVar13;
          }
          _dependencies = omc_List_flatten(threadData, tmpMeta8);

          _deps_set = omc_NBStrongComponent_prepareDependencies(threadData, omc_UnorderedSet_fromList(threadData, _dependencies, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual), _map, (modelica_integer)_jacType);

          omc_NBStrongComponent_updateDependencyMap(threadData, omc_NBVariable_getVarName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))), _deps_set, _map);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box1(0, _set);
          _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))))), (modelica_fnptr) mmc_mk_box2(0,closure10_NBSlice_getDependentCrefCausalized,tmpMeta12), boxvar_NFExpression_fakeMap);

          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp16;
            modelica_metatype _dep_loopVar = 0;
            modelica_metatype _dep;
            _dep_loopVar = _dependencies;
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar15;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_dep_loopVar)) {
                _dep = MMC_CAR(_dep_loopVar);
                _dep_loopVar = MMC_CDR(_dep_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar14 = omc_NFComponentRef_stripIteratorSubscripts(threadData, _dep);
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar15;
          }
          _dependencies = tmpMeta13;

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp20;
            modelica_metatype _dep_loopVar = 0;
            modelica_metatype _dep;
            _dep_loopVar = _dependencies;
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta19; /* defaultValue */
            tmp18 = &__omcQ_24tmpVar17;
            while(1) {
              tmp20 = 1;
              if (!listEmpty(_dep_loopVar)) {
                _dep = MMC_CAR(_dep_loopVar);
                _dep_loopVar = MMC_CDR(_dep_loopVar);
                tmp20--;
              }
              if (tmp20 == 0) {
                __omcQ_24tmpVar16 = omc_NFComponentRef_scalarizeAll(threadData, _dep, 1 /* true */);
                *tmp18 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp18 = &MMC_CDR(*tmp18);
              } else if (tmp20 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp18 = mmc_mk_nil();
            tmpMeta17 = __omcQ_24tmpVar17;
          }
          _dependencies = omc_List_flatten(threadData, tmpMeta17);

          _deps_set = omc_NBStrongComponent_prepareDependencies(threadData, omc_UnorderedSet_fromList(threadData, _dependencies, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual), _map, (modelica_integer)_jacType);

          {
            modelica_metatype _var;
            for (tmpMeta21 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))); !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
            {
              _var = MMC_CAR(tmpMeta21);
              {
                modelica_metatype _cref;
                for (tmpMeta22 = omc_NFComponentRef_scalarizeAll(threadData, omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _var)), 1 /* true */); !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
                {
                  _cref = MMC_CAR(tmpMeta22);
                  omc_NBStrongComponent_updateDependencyMap(threadData, _cref, _deps_set, _map);
                }
              }
            }
          }
          goto tmp2_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))))) goto tmp2_end;
          omc_NBStrongComponent_addForLoopDependencies(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, (modelica_integer)_jacType);
          goto tmp2_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,4) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))))) goto tmp2_end;
          omc_NBStrongComponent_addForLoopDependencies(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, (modelica_integer)_jacType);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,4) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isArrayEquation(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))))) goto tmp2_end;
          _eqn = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));

          tmpMeta25 = mmc_mk_box1(0, _set);
          _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, _eqn, (modelica_fnptr) mmc_mk_box2(0,closure11_NBSlice_getDependentCrefCausalized,tmpMeta25), boxvar_NFExpression_fakeMap);

          _scalarized_dependencies = omc_NBSlice_getDependentCrefsPseudoArrayCausalized(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), _dependencies, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), 3))));

          omc_NBStrongComponent_addScalarizedDependencies(threadData, _scalarized_dependencies, _map, (modelica_integer)_jacType);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,4) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _eqn = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));

          tmpMeta26 = mmc_mk_box1(0, _set);
          _dependencies = omc_NBEquation_Equation_collectCrefs(threadData, _eqn, (modelica_fnptr) mmc_mk_box2(0,closure12_NBSlice_getDependentCrefCausalized,tmpMeta26), boxvar_NFExpression_fakeMap);

          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp28;
            modelica_metatype tmpMeta29;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp30;
            modelica_metatype _dep_loopVar = 0;
            modelica_metatype _dep;
            _dep_loopVar = _dependencies;
            tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta29; /* defaultValue */
            tmp28 = &__omcQ_24tmpVar19;
            while(1) {
              tmp30 = 1;
              if (!listEmpty(_dep_loopVar)) {
                _dep = MMC_CAR(_dep_loopVar);
                _dep_loopVar = MMC_CDR(_dep_loopVar);
                tmp30--;
              }
              if (tmp30 == 0) {
                __omcQ_24tmpVar18 = omc_NFComponentRef_scalarizeAll(threadData, _dep, 1 /* true */);
                *tmp28 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp28 = &MMC_CDR(*tmp28);
              } else if (tmp30 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp28 = mmc_mk_nil();
            tmpMeta27 = __omcQ_24tmpVar19;
          }
          _dependencies = omc_List_flatten(threadData, tmpMeta27);

          _deps_set = omc_NBStrongComponent_prepareDependencies(threadData, omc_UnorderedSet_fromList(threadData, _dependencies, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual), _map, (modelica_integer)_jacType);

          omc_NBStrongComponent_updateDependencyMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), _deps_set, _map);
          goto tmp2_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))))) goto tmp2_end;
          omc_NBStrongComponent_addForLoopDependencies(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, (modelica_integer)_jacType);
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta52;
          modelica_integer tmp56;
          modelica_integer tmp57;
          modelica_integer tmp58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,7) == 0) goto tmp2_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          
          _strict = tmpMeta31;
          /* Pattern matching succeeded */
          _deps_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));

          {
            modelica_metatype _slice;
            for (tmpMeta32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3))); !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
            {
              _slice = MMC_CAR(tmpMeta32);
              tmpMeta33 = mmc_mk_box1(0, _set);
              _tmp = omc_NBEquation_Equation_collectCrefs(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _slice)), (modelica_fnptr) mmc_mk_box2(0,closure13_NBSlice_getDependentCrefCausalized,tmpMeta33), boxvar_NFExpression_fakeMap);

              _eqn_ptr = omc_NBSlice_getT(threadData, _slice);

              if(omc_NBEquation_Equation_isForEquation(threadData, _eqn_ptr))
              {
                /* Pattern-matching assignment */
                tmpMeta34 = omc_Pointer_access(threadData, _eqn_ptr);
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,5,5) == 0) goto goto_1;
                tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 3));
                tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 4));
                if (listEmpty(tmpMeta36)) goto goto_1;
                tmpMeta37 = MMC_CAR(tmpMeta36);
                tmpMeta38 = MMC_CDR(tmpMeta36);
                if (!listEmpty(tmpMeta38)) goto goto_1;
                _iter = tmpMeta35;

                _cref = omc_NBEquation_Equation_getEqnName(threadData, _eqn_ptr);

                _scalarized_dependencies = omc_NBSlice_getDependentCrefsPseudoForCausalized(threadData, _cref, _tmp, _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _iter, omc_NBEquation_Equation_size(threadData, _eqn_ptr, 0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slice), 3))), 1 /* true */);

                {
                  modelica_metatype __omcQ_24tmpVar21;
                  modelica_metatype* tmp40;
                  modelica_metatype tmpMeta41;
                  modelica_metatype __omcQ_24tmpVar20;
                  modelica_integer tmp42;
                  modelica_metatype _tpl_loopVar = 0;
                  modelica_metatype _tpl;
                  _tpl_loopVar = _scalarized_dependencies;
                  tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar21 = tmpMeta41; /* defaultValue */
                  tmp40 = &__omcQ_24tmpVar21;
                  while(1) {
                    tmp42 = 1;
                    if (!listEmpty(_tpl_loopVar)) {
                      _tpl = MMC_CAR(_tpl_loopVar);
                      _tpl_loopVar = MMC_CDR(_tpl_loopVar);
                      tmp42--;
                    }
                    if (tmp42 == 0) {
                      __omcQ_24tmpVar20 = omc_Util_tuple22(threadData, _tpl);
                      *tmp40 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                      tmp40 = &MMC_CDR(*tmp40);
                    } else if (tmp42 == 1) {
                      break;
                    } else {
                      goto goto_1;
                    }
                  }
                  *tmp40 = mmc_mk_nil();
                  tmpMeta39 = __omcQ_24tmpVar21;
                }
                _tmp = omc_List_flatten(threadData, tmpMeta39);
              }

              {
                modelica_metatype _dep;
                for (tmpMeta43 = _tmp; !listEmpty(tmpMeta43); tmpMeta43=MMC_CDR(tmpMeta43))
                {
                  _dep = MMC_CAR(tmpMeta43);
                  {
                    modelica_metatype _scal;
                    for (tmpMeta44 = omc_NFComponentRef_scalarizeAll(threadData, _dep, 1 /* true */); !listEmpty(tmpMeta44); tmpMeta44=MMC_CDR(tmpMeta44))
                    {
                      _scal = MMC_CAR(tmpMeta44);
                      omc_UnorderedSet_add(threadData, _scal, _deps_set);
                    }
                  }
                }
              }
            }
          }

          _deps_set = omc_NBStrongComponent_prepareDependencies(threadData, _deps_set, _map, (modelica_integer)_jacType);

          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp49;
            modelica_metatype tmpMeta50;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp51;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 2)));
            tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta50; /* defaultValue */
            tmp49 = &__omcQ_24tmpVar23;
            while(1) {
              tmp51 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp51--;
              }
              if (tmp51 == 0) {
                __omcQ_24tmpVar22 = omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, _var));
                *tmp49 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp49 = &MMC_CDR(*tmp49);
              } else if (tmp51 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp49 = mmc_mk_nil();
            tmpMeta48 = __omcQ_24tmpVar23;
          }
          _loop_vars = tmpMeta48;

          tmp56 = ((modelica_integer) 1); tmp57 = 1; tmp58 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 4))));
          if(!(((tmp57 > 0) && (tmp56 > tmp58)) || ((tmp57 < 0) && (tmp56 < tmp58))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp56, tmp58); _i += tmp57)
            {
              omc_NBStrongComponent_collectCrefs(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 4))),_i) /* DAE.ASUB */, _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, (modelica_integer)_jacType);

              {
                modelica_metatype __omcQ_24tmpVar25;
                modelica_metatype* tmp53;
                modelica_metatype tmpMeta54;
                modelica_metatype __omcQ_24tmpVar24;
                modelica_integer tmp55;
                modelica_metatype _var_loopVar = 0;
                modelica_metatype _var;
                _var_loopVar = omc_NBStrongComponent_getVariables(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 4))),_i) /* DAE.ASUB */);
                tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar25 = tmpMeta54; /* defaultValue */
                tmp53 = &__omcQ_24tmpVar25;
                while(1) {
                  tmp55 = 1;
                  if (!listEmpty(_var_loopVar)) {
                    _var = MMC_CAR(_var_loopVar);
                    _var_loopVar = MMC_CDR(_var_loopVar);
                    tmp55--;
                  }
                  if (tmp55 == 0) {
                    __omcQ_24tmpVar24 = omc_NBVariable_getVarName(threadData, _var);
                    *tmp53 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                    tmp53 = &MMC_CDR(*tmp53);
                  } else if (tmp55 == 1) {
                    break;
                  } else {
                    goto goto_1;
                  }
                }
                *tmp53 = mmc_mk_nil();
                tmpMeta52 = __omcQ_24tmpVar25;
              }
              _loop_vars = listAppend(tmpMeta52, _loop_vars);
            }
          }

          {
            modelica_metatype _cref;
            for (tmpMeta59 = _loop_vars; !listEmpty(tmpMeta59); tmpMeta59=MMC_CDR(tmpMeta59))
            {
              _cref = MMC_CAR(tmpMeta59);
              omc_NBStrongComponent_updateDependencyMap(threadData, _cref, _deps_set, _map);
            }
          }
          goto tmp2_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          _jacType = (modelica_integer)_jacType;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 10: {
          
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
void boxptr_NBStrongComponent_collectCrefs(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _var_rep, modelica_metatype _eqn_rep, modelica_metatype _var_rep_mapping, modelica_metatype _eqn_rep_mapping, modelica_metatype _map, modelica_metatype _set, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_jacType);
  omc_NBStrongComponent_collectCrefs(threadData, _comp, _var_rep, _eqn_rep, _var_rep_mapping, _eqn_rep_mapping, _map, _set, tmp1);
  return;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_toSolvedEquation(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqn has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (2 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (2 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (2 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_OMC_LIT18,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta12 = mmc_mk_cons(tmpMeta13, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta12);
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
  _eqn = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqn;
}

static modelica_metatype closure14_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLDirection
modelica_metatype omc_NBStrongComponent_fromSolvedEquationSlice(threadData_t *threadData, modelica_metatype _eqn_slice)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  _eqn = omc_NBSlice_getT(threadData, _eqn_slice);
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_Pointer_access(threadData, _eqn);
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_NBVariable_getVarPointer(threadData, omc_NFExpression_toCref(threadData, omc_Util_getOption(threadData, omc_NBEquation_Equation_getLHS(threadData, omc_Pointer_access(threadData, _eqn)))), _OMC_LIT19), _eqn, mmc_mk_integer(2));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_NBVariable_getVarPointer(threadData, omc_NFExpression_toCref(threadData, omc_Util_getOption(threadData, omc_NBEquation_Equation_getLHS(threadData, omc_Pointer_access(threadData, _eqn)))), _OMC_LIT20), _eqn, mmc_mk_integer(2));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_NBVariable_getVarPointer(threadData, omc_NFExpression_toCref(threadData, omc_Util_getOption(threadData, omc_NBEquation_Equation_getLHS(threadData, omc_Pointer_access(threadData, _eqn)))), _OMC_LIT21), _eqn, mmc_mk_integer(2));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_NBVariable_getVarPointer(threadData, omc_NFExpression_toCref(threadData, omc_Util_getOption(threadData, omc_NBEquation_Equation_getLHS(threadData, omc_Pointer_access(threadData, _eqn)))), _OMC_LIT22), _eqn, mmc_mk_integer(2));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = mmc_mk_box3(3, &NBSlice_SLICE__desc, omc_Pointer_create(threadData, _OMC_LIT36), tmpMeta9);
          tmpMeta11 = mmc_mk_box5(5, &NBStrongComponent_SLICED__COMPONENT__desc, _OMC_LIT23, tmpMeta10, _eqn_slice, mmc_mk_integer(2));
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box1(0, _OMC_LIT29);
          tmpMeta14 = stringAppend(_OMC_LIT37,omc_NBSlice_toString(threadData, _eqn_slice, (modelica_fnptr) mmc_mk_box2(0,closure14_NBEquation_Equation_pointerToString,tmpMeta13), ((modelica_integer) 10)));
          tmpMeta12 = mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta12);
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
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _comp;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_inlinedDAEModeComponent(threadData_t *threadData, modelica_metatype _eqns, modelica_integer *out_dae_type)
{
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _dae_type;
  modelica_metatype _new_eqn = NULL;
  modelica_metatype _new_comp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _comps = tmpMeta1;
  _dae_type = 1;
  // _new_eqn has no default value.
  // _new_comp has no default value.
  {
    modelica_metatype _eqn;
    for (tmpMeta2 = _eqns; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eqn = MMC_CAR(tmpMeta2);
      if(omc_NBEquation_Equation_isDiscrete(threadData, _eqn))
      {
        if(((modelica_integer)_dae_type < 3))
        {
          _dae_type = 2;
        }
      }
      else
      {
        _new_eqn = omc_NBEquation_Equation_createResidual(threadData, _eqn, mmc_mk_none(), 0 /* false */, 1 /* true */);

        if(omc_NBEquation_Equation_isResidual(threadData, _new_eqn))
        {
          tmpMeta3 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_NBEquation_Equation_getResidualVar(threadData, _new_eqn), _new_eqn, mmc_mk_integer(1));
          _new_comp = tmpMeta3;

          tmpMeta4 = mmc_mk_cons(_new_comp, _comps);
          _comps = tmpMeta4;

          _dae_type = 4;
        }
        else
        {
          _dae_type = 3;

          break;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_dae_type) { *out_dae_type = _dae_type; }
  return _comps;
}
modelica_metatype boxptr_NBStrongComponent_inlinedDAEModeComponent(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype *out_dae_type)
{
  modelica_integer _dae_type;
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  _comps = omc_NBStrongComponent_inlinedDAEModeComponent(threadData, _eqns, &_dae_type);
  /* skip box _comps; list<NBStrongComponent> */
  if (out_dae_type) { *out_dae_type = mmc_mk_icon(_dae_type); }
  return _comps;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_singleDAEModeComponent(threadData_t *threadData, modelica_metatype _eqn_ptr, modelica_metatype _variables, modelica_metatype _uniqueIndex, modelica_integer *out_dae_type)
{
  modelica_metatype _new_residuals = NULL;
  modelica_integer _dae_type;
  modelica_metatype _new_eqns = NULL;
  modelica_metatype _dummy_set = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean tmp3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _new_residuals has no default value.
  _dae_type = 4;
  // _new_eqns has no default value.
  // _dummy_set has no default value.
  // _eqn has no default value.
  // _eqns has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_eqns = omc_Pointer_create(threadData, tmpMeta1);

  _dummy_set = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));

  _eqn = omc_NBInline_inlineRecordTupleArrayEquation(threadData, omc_Pointer_access(threadData, _eqn_ptr), _OMC_LIT38, _variables, _new_eqns, _dummy_set, _uniqueIndex, 1 /* true */);

  _eqns = omc_Pointer_access(threadData, _new_eqns);

  tmp3 = (modelica_boolean)listEmpty(_eqns);
  if(tmp3)
  {
    tmpMeta2 = mmc_mk_cons(omc_Pointer_create(threadData, _eqn), MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta4 = tmpMeta2;
  }
  else
  {
    tmpMeta4 = _eqns;
  }
  _eqns = tmpMeta4;

  _new_residuals = omc_NBStrongComponent_inlinedDAEModeComponent(threadData, _eqns ,&_dae_type);
  _return: OMC_LABEL_UNUSED
  if (out_dae_type) { *out_dae_type = _dae_type; }
  return _new_residuals;
}
modelica_metatype boxptr_NBStrongComponent_singleDAEModeComponent(threadData_t *threadData, modelica_metatype _eqn_ptr, modelica_metatype _variables, modelica_metatype _uniqueIndex, modelica_metatype *out_dae_type)
{
  modelica_integer _dae_type;
  modelica_metatype _new_residuals = NULL;
  _new_residuals = omc_NBStrongComponent_singleDAEModeComponent(threadData, _eqn_ptr, _variables, _uniqueIndex, &_dae_type);
  /* skip box _new_residuals; list<NBStrongComponent> */
  if (out_dae_type) { *out_dae_type = mmc_mk_icon(_dae_type); }
  return _new_residuals;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_slicedDAEModeComponent(threadData_t *threadData, modelica_metatype _var_slices, modelica_metatype _eqn_slices, modelica_metatype _variables, modelica_metatype _uniqueIndex, modelica_metatype _slice_set, modelica_integer *out_dae_type)
{
  modelica_metatype _new_residuals = NULL;
  modelica_integer _dae_type;
  modelica_metatype _eqn = NULL;
  modelica_metatype _eqn_name = NULL;
  modelica_metatype _acc_new_residuals = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _new_residuals has no default value.
  // _dae_type has no default value.
  // _eqn has no default value.
  // _eqn_name has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc_new_residuals = tmpMeta1;
  {
    modelica_metatype __omcQ_24tmpVar27;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar26;
    modelica_integer tmp5;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = _var_slices;
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar27 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar27;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 3)));
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar26,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar27;
  }
  if(omc_List_all(threadData, tmpMeta2, boxvar_listEmpty))
  {
    {
      modelica_metatype _eqn_slice;
      for (tmpMeta6 = _eqn_slices; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
      {
        _eqn_slice = MMC_CAR(tmpMeta6);
        _eqn = omc_NBSlice_getT(threadData, _eqn_slice);

        _eqn_name = omc_NBEquation_Equation_getEqnName(threadData, _eqn);

        if((listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn_slice), 3)))) && (!omc_UnorderedSet_contains(threadData, _eqn_name, _slice_set))))
        {
          _new_residuals = omc_NBStrongComponent_singleDAEModeComponent(threadData, _eqn, _variables, _uniqueIndex ,&_dae_type);

          if(((modelica_integer)_dae_type == 4))
          {
            tmpMeta7 = mmc_mk_cons(_new_residuals, _acc_new_residuals);
            _acc_new_residuals = tmpMeta7;
          }
          else
          {
            if(((modelica_integer)_dae_type == 3))
            {
              break;
            }
          }
        }
        else
        {
          _dae_type = 3;

          break;
        }
      }
    }
  }
  else
  {
    _dae_type = 3;
  }

  if(((modelica_integer)_dae_type == 3))
  {
    {
      modelica_metatype _eqn_slice;
      for (tmpMeta9 = _eqn_slices; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
      {
        _eqn_slice = MMC_CAR(tmpMeta9);
        _eqn = omc_NBSlice_getT(threadData, _eqn_slice);

        _eqn_name = omc_NBEquation_Equation_getEqnName(threadData, _eqn);

        omc_UnorderedSet_add(threadData, _eqn_name, _slice_set);
      }
    }

    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    _new_residuals = tmpMeta11;
  }
  else
  {
    _new_residuals = omc_List_flatten(threadData, _acc_new_residuals);
  }
  _return: OMC_LABEL_UNUSED
  if (out_dae_type) { *out_dae_type = _dae_type; }
  return _new_residuals;
}
modelica_metatype boxptr_NBStrongComponent_slicedDAEModeComponent(threadData_t *threadData, modelica_metatype _var_slices, modelica_metatype _eqn_slices, modelica_metatype _variables, modelica_metatype _uniqueIndex, modelica_metatype _slice_set, modelica_metatype *out_dae_type)
{
  modelica_integer _dae_type;
  modelica_metatype _new_residuals = NULL;
  _new_residuals = omc_NBStrongComponent_slicedDAEModeComponent(threadData, _var_slices, _eqn_slices, _variables, _uniqueIndex, _slice_set, &_dae_type);
  /* skip box _new_residuals; list<NBStrongComponent> */
  if (out_dae_type) { *out_dae_type = mmc_mk_icon(_dae_type); }
  return _new_residuals;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_sortDAEModeComponent(threadData_t *threadData, modelica_metatype _comp, modelica_metatype __omcQ_24in_5Fresiduals, modelica_metatype __omcQ_24in_5Finners, modelica_metatype _variables, modelica_metatype _uniqueIndex, modelica_metatype _slice_set, modelica_metatype *out_inners)
{
  modelica_metatype _residuals = NULL;
  modelica_metatype _inners = NULL;
  modelica_metatype _new_residuals = NULL;
  modelica_integer _dae_type;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _residuals = __omcQ_24in_5Fresiduals;
  _inners = __omcQ_24in_5Finners;
  // _new_residuals has no default value.
  // _dae_type has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NBStrongComponent_singleDAEModeComponent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), _variables, _uniqueIndex, &tmp1_c1);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = omc_NBStrongComponent_slicedDAEModeComponent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), tmpMeta5, _variables, _uniqueIndex, _slice_set, &tmp1_c1);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta7 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = omc_NBStrongComponent_slicedDAEModeComponent(threadData, tmpMeta6, tmpMeta7, _variables, _uniqueIndex, _slice_set, &tmp1_c1);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta9 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = omc_NBStrongComponent_slicedDAEModeComponent(threadData, tmpMeta8, tmpMeta9, _variables, _uniqueIndex, _slice_set, &tmp1_c1);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta11 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = omc_NBStrongComponent_slicedDAEModeComponent(threadData, tmpMeta10, tmpMeta11, _variables, _uniqueIndex, _slice_set, &tmp1_c1);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NBStrongComponent_slicedDAEModeComponent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), 3))), _variables, _uniqueIndex, _slice_set, &tmp1_c1);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta12;
          tmp1_c1 = (omc_NBStrongComponent_isDiscrete(threadData, _comp)?2:3);
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
  _new_residuals = tmpMeta[0+0];
  _dae_type = tmp1_c1;

  if(((modelica_integer)_dae_type == 4))
  {
    _residuals = listAppend(_new_residuals, _residuals);
  }
  else
  {
    if(((modelica_integer)_dae_type == 3))
    {
      tmpMeta13 = mmc_mk_cons(_comp, _inners);
      _inners = tmpMeta13;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_inners) { *out_inners = _inners; }
  return _residuals;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_sortDAEModeComponents(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomps, modelica_metatype _variables, modelica_metatype _uniqueIndex)
{
  modelica_metatype _comps = NULL;
  modelica_metatype _residuals = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _inners = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _slice_set = NULL;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comps = __omcQ_24in_5Fcomps;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _residuals = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _inners = tmpMeta2;
  _slice_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _comps;
    {
      modelica_metatype _original = NULL;
      volatile mmc_switch_type tmp6;
      int tmp7;
      // _original has no default value.
      tmp6 = 0;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_integer tmp12;
          if (optionNone(tmp6_1)) goto tmp5_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 1));
          _original = tmpMeta8;
          /* Pattern matching succeeded */
          {
            modelica_metatype _comp;
            for (tmpMeta9 = _original, tmp12 = arrayLength(tmpMeta9), tmp11 = 1; tmp11 <= tmp12; tmp11++)
            {
              _comp = arrayGet(tmpMeta9,tmp11);
              _residuals = omc_NBStrongComponent_sortDAEModeComponent(threadData, _comp, _residuals, _inners, _variables, _uniqueIndex, _slice_set ,&_inners);
            }
          }
          tmpMeta3 = mmc_mk_some(listArray(listAppend(listReverse(_inners), _residuals)));
          goto tmp5_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta3 = _comps;
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
  _comps = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _comps;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_createPseudoEntwinedIndices(threadData_t *threadData, modelica_metatype _entwined_indices, modelica_metatype _eqns, modelica_metatype _mapping)
{
  modelica_metatype _flat_tpl_indices = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _arr_idx;
  modelica_integer _first_idx;
  modelica_metatype _eqn_StA = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _flat_tpl_indices = tmpMeta1;
  // _arr_idx has no default value.
  // _first_idx has no default value.
  // _eqn_StA has no default value.
  {
    modelica_metatype _tmp;
    for (tmpMeta2 = _entwined_indices, tmp12 = arrayLength(tmpMeta2), tmp11 = 1; tmp11 <= tmp12; tmp11++)
    {
      _tmp = arrayGet(tmpMeta2,tmp11);
      {
        modelica_metatype _scal_idx;
        for (tmpMeta3 = _tmp; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _scal_idx = MMC_CAR(tmpMeta3);
          _eqn_StA = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2)));

          _arr_idx = mmc_unbox_integer(arrayGet(_eqn_StA,mmc_unbox_integer(_scal_idx)) /* DAE.ASUB */);

          /* Pattern-matching assignment */
          tmpMeta4 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 4))),_arr_idx) /* DAE.ASUB */;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
          tmp6 = mmc_unbox_integer(tmpMeta5);
          _first_idx = tmp6  /* pattern as ty=Integer */;

          tmpMeta8 = mmc_mk_box2(0, omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, _arr_idx), mmc_mk_integer(mmc_unbox_integer(_scal_idx) - _first_idx));
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _flat_tpl_indices);
          _flat_tpl_indices = tmpMeta7;
        }
      }
    }
  }

  _flat_tpl_indices = listReverse(_flat_tpl_indices);
  _return: OMC_LABEL_UNUSED
  return _flat_tpl_indices;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_createAlias(threadData_t *threadData, modelica_integer _kind, modelica_integer _partitionIndex, modelica_metatype _index_ptr, modelica_metatype _orig_comp)
{
  modelica_metatype _alias_comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _alias_comp has no default value.
  tmpMeta1 = mmc_mk_box4(3, &NBStrongComponent_AliasInfo_ALIAS__INFO__desc, mmc_mk_integer((modelica_integer)_kind), mmc_mk_integer(_partitionIndex), omc_Pointer_access(threadData, _index_ptr));
  tmpMeta2 = mmc_mk_box3(10, &NBStrongComponent_ALIAS__desc, tmpMeta1, _orig_comp);
  _alias_comp = tmpMeta2;

  omc_Pointer_update(threadData, _index_ptr, mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(omc_Pointer_access(threadData, _index_ptr))));
  _return: OMC_LABEL_UNUSED
  return _alias_comp;
}
modelica_metatype boxptr_NBStrongComponent_createAlias(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _partitionIndex, modelica_metatype _index_ptr, modelica_metatype _orig_comp)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _alias_comp = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  tmp2 = mmc_unbox_integer(_partitionIndex);
  _alias_comp = omc_NBStrongComponent_createAlias(threadData, tmp1, tmp2, _index_ptr, _orig_comp);
  /* skip box _alias_comp; NBStrongComponent */
  return _alias_comp;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_createPseudoEntwined(threadData_t *threadData, modelica_metatype _eqn_indices, modelica_metatype _eqn_to_var, modelica_metatype _mapping, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _nodes)
{
  modelica_metatype _entwined = NULL;
  modelica_metatype _elem_map = NULL;
  modelica_metatype _cref_map = NULL;
  modelica_metatype _flat_map = NULL;
  modelica_integer _eqn_arr_idx;
  modelica_integer _var_arr_idx;
  modelica_metatype _scal_indices = NULL;
  modelica_metatype _entwined_slices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _entwined_tpl_lst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta24;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _entwined has no default value.
  _elem_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 1));
  _cref_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 1));
  // _flat_map has no default value.
  // _eqn_arr_idx has no default value.
  // _var_arr_idx has no default value.
  // _scal_indices has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _entwined_slices = tmpMeta1;
  // _entwined_tpl_lst has no default value.
  {
    modelica_metatype _idx;
    for (tmpMeta2 = _eqn_indices; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _idx = MMC_CAR(tmpMeta2);
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta3 = mmc_mk_cons(_idx, omc_UnorderedMap_getOrDefault(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),mmc_unbox_integer(_idx)) /* DAE.ASUB */, _elem_map, tmpMeta4));
      omc_UnorderedMap_add(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),mmc_unbox_integer(_idx)) /* DAE.ASUB */, tmpMeta3, _elem_map);
    }
  }

  {
    modelica_metatype _node;
    for (tmpMeta6 = _nodes; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _node = MMC_CAR(tmpMeta6);
      { /* match expression */
        modelica_metatype tmp9_1;
        tmp9_1 = _node;
        {
          volatile mmc_switch_type tmp9;
          int tmp10;
          tmp9 = 0;
          for (; tmp9 < 2; tmp9++) {
            switch (MMC_SWITCH_CAST(tmp9)) {
            case 0: {
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,3,4) == 0) goto tmp8_end;
              
              /* Pattern matching succeeded */
              omc_UnorderedMap_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3))), _cref_map);
              goto tmp8_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              goto tmp8_done;
            }
            }
            goto tmp8_end;
            tmp8_end: ;
          }
          goto goto_7;
          goto_7:;
          MMC_THROW_INTERNAL();
          goto tmp8_done;
          tmp8_done:;
        }
      }
      ;
    }
  }

  {
    modelica_metatype _tpl;
    for (tmpMeta12 = omc_UnorderedMap_toList(threadData, _elem_map); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _tpl = MMC_CAR(tmpMeta12);
      /* Pattern-matching assignment */
      tmpMeta13 = _tpl;
      tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
      tmp15 = mmc_unbox_integer(tmpMeta14);
      tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
      _eqn_arr_idx = tmp15  /* pattern as ty=Integer */;
      _scal_indices = tmpMeta16;

      _var_arr_idx = mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 3))),mmc_unbox_integer(arrayGet(_eqn_to_var,mmc_unbox_integer(omc_Util_tuple21(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 4))),_eqn_arr_idx) /* DAE.ASUB */))) /* DAE.ASUB */)) /* DAE.ASUB */);

      tmpMeta17 = mmc_mk_cons(omc_NBStrongComponent_createPseudoSlice(threadData, _var_arr_idx, _eqn_arr_idx, omc_UnorderedMap_getSafe(threadData, mmc_mk_integer(_eqn_arr_idx), _cref_map, _OMC_LIT39), _scal_indices, _eqn_to_var, _eqns, _mapping, 0 /* false */), _entwined_slices);
      _entwined_slices = tmpMeta17;
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar29;
    modelica_metatype* tmp20;
    modelica_metatype tmpMeta21;
    modelica_metatype tmpMeta22;
    modelica_metatype __omcQ_24tmpVar28;
    modelica_integer tmp23;
    modelica_metatype _idx_loopVar = 0;
    modelica_metatype _idx;
    _idx_loopVar = _eqn_indices;
    tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar29 = tmpMeta21; /* defaultValue */
    tmp20 = &__omcQ_24tmpVar29;
    while(1) {
      tmp23 = 1;
      if (!listEmpty(_idx_loopVar)) {
        _idx = MMC_CAR(_idx_loopVar);
        _idx_loopVar = MMC_CDR(_idx_loopVar);
        tmp23--;
      }
      if (tmp23 == 0) {
        tmpMeta22 = mmc_mk_box2(0, omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),mmc_unbox_integer(_idx)) /* DAE.ASUB */)), _idx);
        __omcQ_24tmpVar28 = tmpMeta22;
        *tmp20 = mmc_mk_cons(__omcQ_24tmpVar28,0);
        tmp20 = &MMC_CDR(*tmp20);
      } else if (tmp23 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp20 = mmc_mk_nil();
    tmpMeta19 = __omcQ_24tmpVar29;
  }
  _entwined_tpl_lst = tmpMeta19;

  tmpMeta24 = mmc_mk_box3(8, &NBStrongComponent_ENTWINED__COMPONENT__desc, _entwined_slices, _entwined_tpl_lst);
  _entwined = tmpMeta24;
  _return: OMC_LABEL_UNUSED
  return _entwined;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_createPseudoSlice(threadData_t *threadData, modelica_integer _var_arr_idx, modelica_integer _eqn_arr_idx, modelica_metatype _cref_to_solve, modelica_metatype _eqn_scal_indices, modelica_metatype _eqn_to_var, modelica_metatype _eqns, modelica_metatype _mapping, modelica_boolean _independent)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _eqn_ptr = NULL;
  modelica_integer _first_var;
  modelica_integer _var_size;
  modelica_integer _first_eqn;
  modelica_integer _eqn_size;
  modelica_metatype _var_slice = NULL;
  modelica_metatype _eqn_slice = NULL;
  modelica_metatype _var_scal_indices = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  // _var_ptr has no default value.
  // _eqn_ptr has no default value.
  // _first_var has no default value.
  // _var_size has no default value.
  // _first_eqn has no default value.
  // _eqn_size has no default value.
  // _var_slice has no default value.
  // _eqn_slice has no default value.
  // _var_scal_indices has no default value.
  // _order has no default value.
  _var_ptr = omc_NBVariable_getVarPointer(threadData, _cref_to_solve, _OMC_LIT40);

  _eqn_ptr = omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, _eqn_arr_idx);

  /* Pattern-matching assignment */
  tmpMeta1 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 5))),_var_arr_idx) /* DAE.ASUB */;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _first_var = tmp3  /* pattern as ty=Integer */;
  _var_size = tmp5  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta6 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 4))),_eqn_arr_idx) /* DAE.ASUB */;
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  _first_eqn = tmp8  /* pattern as ty=Integer */;
  _eqn_size = tmp10  /* pattern as ty=Integer */;

  {
    modelica_metatype __omcQ_24tmpVar31;
    modelica_metatype* tmp12;
    modelica_metatype tmpMeta13;
    modelica_metatype __omcQ_24tmpVar30;
    modelica_integer tmp14;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _eqn_scal_indices;
    tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar31 = tmpMeta13; /* defaultValue */
    tmp12 = &__omcQ_24tmpVar31;
    while(1) {
      tmp14 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp14--;
      }
      if (tmp14 == 0) {
        __omcQ_24tmpVar30 = arrayGet(_eqn_to_var,mmc_unbox_integer(_e)) /* DAE.ASUB */;
        *tmp12 = mmc_mk_cons(__omcQ_24tmpVar30,0);
        tmp12 = &MMC_CDR(*tmp12);
      } else if (tmp14 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp12 = mmc_mk_nil();
    tmpMeta11 = __omcQ_24tmpVar31;
  }
  _var_scal_indices = tmpMeta11;

  if((((_independent && omc_NBEquation_Equation_isArrayEquation(threadData, _eqn_ptr)) && (listLength(_eqn_scal_indices) == _eqn_size)) && (listLength(_var_scal_indices) == _var_size)))
  {
    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta16 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _var_ptr, tmpMeta15);
    _var_slice = tmpMeta16;

    tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta18 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqn_ptr, tmpMeta17);
    _eqn_slice = tmpMeta18;
  }
  else
  {
    {
      modelica_metatype __omcQ_24tmpVar33;
      modelica_metatype* tmp20;
      modelica_metatype tmpMeta21;
      modelica_metatype __omcQ_24tmpVar32;
      modelica_integer tmp22;
      modelica_metatype _idx_loopVar = 0;
      modelica_metatype _idx;
      _idx_loopVar = _var_scal_indices;
      tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar33 = tmpMeta21; /* defaultValue */
      tmp20 = &__omcQ_24tmpVar33;
      while(1) {
        tmp22 = 1;
        if (!listEmpty(_idx_loopVar)) {
          _idx = MMC_CAR(_idx_loopVar);
          _idx_loopVar = MMC_CDR(_idx_loopVar);
          tmp22--;
        }
        if (tmp22 == 0) {
          __omcQ_24tmpVar32 = mmc_mk_integer(mmc_unbox_integer(_idx) - _first_var);
          *tmp20 = mmc_mk_cons(__omcQ_24tmpVar32,0);
          tmp20 = &MMC_CDR(*tmp20);
        } else if (tmp22 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp20 = mmc_mk_nil();
      tmpMeta19 = __omcQ_24tmpVar33;
    }
    tmpMeta23 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _var_ptr, tmpMeta19);
    _var_slice = tmpMeta23;

    {
      modelica_metatype __omcQ_24tmpVar35;
      modelica_metatype* tmp25;
      modelica_metatype tmpMeta26;
      modelica_metatype __omcQ_24tmpVar34;
      modelica_integer tmp27;
      modelica_metatype _idx_loopVar = 0;
      modelica_metatype _idx;
      _idx_loopVar = _eqn_scal_indices;
      tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar35 = tmpMeta26; /* defaultValue */
      tmp25 = &__omcQ_24tmpVar35;
      while(1) {
        tmp27 = 1;
        if (!listEmpty(_idx_loopVar)) {
          _idx = MMC_CAR(_idx_loopVar);
          _idx_loopVar = MMC_CDR(_idx_loopVar);
          tmp27--;
        }
        if (tmp27 == 0) {
          __omcQ_24tmpVar34 = mmc_mk_integer(mmc_unbox_integer(_idx) - _first_eqn);
          *tmp25 = mmc_mk_cons(__omcQ_24tmpVar34,0);
          tmp25 = &MMC_CDR(*tmp25);
        } else if (tmp27 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp25 = mmc_mk_nil();
      tmpMeta24 = __omcQ_24tmpVar35;
    }
    tmpMeta28 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqn_ptr, tmpMeta24);
    _eqn_slice = tmpMeta28;
  }

  _order = omc_NBResizable_detect(threadData, omc_Pointer_access(threadData, _eqn_ptr), _cref_to_solve);

  if(((!omc_List_any(threadData, omc_UnorderedMap_valueList(threadData, _order), boxvar_NBResizable_orderFailed)) && (listLength(_eqn_scal_indices) == _eqn_size)))
  {
    tmpMeta29 = mmc_mk_box6(6, &NBStrongComponent_RESIZABLE__COMPONENT__desc, _cref_to_solve, _var_slice, _eqn_slice, _order, mmc_mk_integer(1));
    _comp = tmpMeta29;
  }
  else
  {
    _comp = omc_NBStrongComponent_createSliceOrSingle(threadData, _cref_to_solve, _var_slice, _eqn_slice);
  }
  _return: OMC_LABEL_UNUSED
  return _comp;
}
modelica_metatype boxptr_NBStrongComponent_createPseudoSlice(threadData_t *threadData, modelica_metatype _var_arr_idx, modelica_metatype _eqn_arr_idx, modelica_metatype _cref_to_solve, modelica_metatype _eqn_scal_indices, modelica_metatype _eqn_to_var, modelica_metatype _eqns, modelica_metatype _mapping, modelica_metatype _independent)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _comp = NULL;
  tmp1 = mmc_unbox_integer(_var_arr_idx);
  tmp2 = mmc_unbox_integer(_eqn_arr_idx);
  tmp3 = mmc_unbox_integer(_independent);
  _comp = omc_NBStrongComponent_createPseudoSlice(threadData, tmp1, tmp2, _cref_to_solve, _eqn_scal_indices, _eqn_to_var, _eqns, _mapping, tmp3);
  /* skip box _comp; NBStrongComponent */
  return _comp;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_removeAlias(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _comp;
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
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _comp;
}

static modelica_metatype closure15_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}static modelica_metatype closure16_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}static modelica_metatype closure17_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}static modelica_metatype closure18_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}
DLLDirection
modelica_integer omc_NBStrongComponent_size(threadData_t *threadData, modelica_metatype _comp, modelica_boolean _resize)
{
  modelica_integer _s;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), _resize);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box1(0, mmc_mk_boolean(_resize));
          tmp1 = omc_NBSlice_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), (modelica_fnptr) mmc_mk_box2(0,closure15_NBEquation_Equation_size,tmpMeta5));
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box1(0, mmc_mk_boolean(_resize));
          tmp1 = omc_NBSlice_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), (modelica_fnptr) mmc_mk_box2(0,closure16_NBEquation_Equation_size,tmpMeta6));
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box1(0, mmc_mk_boolean(_resize));
          tmp1 = omc_NBSlice_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), (modelica_fnptr) mmc_mk_box2(0,closure17_NBEquation_Equation_size,tmpMeta7));
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box1(0, mmc_mk_boolean(_resize));
          tmp1 = omc_NBSlice_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), (modelica_fnptr) mmc_mk_box2(0,closure18_NBEquation_Equation_size,tmpMeta8));
          goto tmp3_done;
        }
        case 8: {
          modelica_integer tmp9;
          
          /* Pattern matching succeeded */
          {
            modelica_integer __omcQ_24tmpVar37;
            modelica_integer __omcQ_24tmpVar36;
            modelica_integer tmp10;
            modelica_metatype _c_loopVar = 0;
            modelica_metatype _c;
            _c_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
            __omcQ_24tmpVar37 = ((modelica_integer) 0); /* defaultValue */
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_c_loopVar)) {
                _c = MMC_CAR(_c_loopVar);
                _c_loopVar = MMC_CDR(_c_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar36 = omc_NBStrongComponent_size(threadData, _c, _resize);
                __omcQ_24tmpVar37 = __omcQ_24tmpVar37 + __omcQ_24tmpVar36;
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp9 = __omcQ_24tmpVar37;
          }
          tmp1 = tmp9;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBTearing_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), _resize);
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta12 = stringAppend(_OMC_LIT41,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT42);
          tmpMeta11 = mmc_mk_cons(tmpMeta13, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta11);
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
  _s = tmp1;
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_NBStrongComponent_size(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _resize)
{
  modelica_integer tmp1;
  modelica_integer _s;
  modelica_metatype out_s;
  tmp1 = mmc_unbox_integer(_resize);
  _s = omc_NBStrongComponent_size(threadData, _comp, tmp1);
  out_s = mmc_mk_icon(_s);
  return out_s;
}

DLLDirection
modelica_boolean omc_NBStrongComponent_isEqual(threadData_t *threadData, modelica_metatype _comp1, modelica_metatype _comp2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _comp1;
    tmp4_2 = _comp2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NBVariable_equalName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 2)))) && omc_NBEquation_Equation_isEqualPtr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 3)))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_isEqualPtr(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 3)))), omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 3)))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFComponentRef_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 2)))) && omc_NBSlice_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 4))), boxvar_NBEquation_Equation_isEqualPtr));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFComponentRef_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 2)))) && omc_NBSlice_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 4))), boxvar_NBEquation_Equation_isEqualPtr));
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBSlice_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 4))), boxvar_NBEquation_Equation_isEqualPtr);
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 2))), boxvar_NBStrongComponent_isEqual);
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,7) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBTearing_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 3))));
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBStrongComponent_AliasInfo_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 2))));
          goto tmp3_done;
        }
        case 8: {
          
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
modelica_metatype boxptr_NBStrongComponent_isEqual(threadData_t *threadData, modelica_metatype _comp1, modelica_metatype _comp2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_isEqual(threadData, _comp1, _comp2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NBStrongComponent_hash(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_integer _i;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBVariable_hash(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))) + omc_NBEquation_Equation_hash(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_hash(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFComponentRef_hash(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))) + omc_NBEquation_Equation_hash(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFComponentRef_hash(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))) + omc_NBEquation_Equation_hash(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBEquation_Equation_hash(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));
          goto tmp3_done;
        }
        case 8: {
          modelica_integer tmp5;
          
          /* Pattern matching succeeded */
          {
            modelica_integer __omcQ_24tmpVar39;
            modelica_integer __omcQ_24tmpVar38;
            modelica_integer tmp6;
            modelica_metatype _sub_comp_loopVar = 0;
            modelica_metatype _sub_comp;
            _sub_comp_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)));
            __omcQ_24tmpVar39 = ((modelica_integer) 0); /* defaultValue */
            while(1) {
              tmp6 = 1;
              if (!listEmpty(_sub_comp_loopVar)) {
                _sub_comp = MMC_CAR(_sub_comp_loopVar);
                _sub_comp_loopVar = MMC_CDR(_sub_comp_loopVar);
                tmp6--;
              }
              if (tmp6 == 0) {
                __omcQ_24tmpVar38 = omc_NBStrongComponent_hash(threadData, _sub_comp);
                __omcQ_24tmpVar39 = __omcQ_24tmpVar39 + __omcQ_24tmpVar38;
              } else if (tmp6 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp5 = __omcQ_24tmpVar39;
          }
          tmp1 = tmp5;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBTearing_hash(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBStrongComponent_AliasInfo_hash(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))));
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
modelica_metatype boxptr_NBStrongComponent_hash(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NBStrongComponent_hash(threadData, _comp);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_metatype omc_NBStrongComponent_strongComponentInfo(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _collector_ptr)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _collector = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  _collector = omc_Pointer_access(threadData, _collector_ptr);
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _comp;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 10; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp7_1;
            tmp7_1 = omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))));
            {
              int tmp7;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp7_1))) {
                case 3: {
                  modelica_metatype tmpMeta8;
                  
                  /* Pattern matching succeeded */
                  tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 2)))));
                  _collector = tmpMeta8;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp6_done;
                }
                case 4: {
                  modelica_metatype tmpMeta9;
                  
                  /* Pattern matching succeeded */
                  tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 3)))));
                  _collector = tmpMeta9;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp6_done;
                }
                case 5: {
                  modelica_metatype tmpMeta10;
                  
                  /* Pattern matching succeeded */
                  tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[4] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 4)))));
                  _collector = tmpMeta10;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp6_done;
                }
                default:
                tmp6_default: OMC_LABEL_UNUSED; {
                  modelica_metatype tmpMeta11;
                  modelica_metatype tmpMeta12;
                  
                  /* Pattern matching succeeded */
                  tmpMeta11 = stringAppend(_OMC_LIT43,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
                  tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT42);
                  omc_Error_addCompilerWarning(threadData, tmpMeta12);
                  goto tmp6_done;
                }
                }
                goto tmp6_end;
                tmp6_end: ;
              }
              goto goto_5;
              goto_5:;
              goto goto_1;
              goto tmp6_done;
              tmp6_done:;
            }
          }
          ;
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp15_1;
            tmp15_1 = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))));
            {
              int tmp15;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp15_1))) {
                case 6: {
                  modelica_metatype tmpMeta16;
                  
                  /* Pattern matching succeeded */
                  tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[5] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 5)))));
                  _collector = tmpMeta16;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp14_done;
                }
                case 9: {
                  modelica_metatype tmpMeta17;
                  
                  /* Pattern matching succeeded */
                  tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[6] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 6)))));
                  _collector = tmpMeta17;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp14_done;
                }
                case 7: {
                  modelica_metatype tmpMeta18;
                  
                  /* Pattern matching succeeded */
                  tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[7] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 7)))));
                  _collector = tmpMeta18;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp14_done;
                }
                case 5: {
                  modelica_metatype tmpMeta19;
                  
                  /* Pattern matching succeeded */
                  tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[8] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 8)))));
                  _collector = tmpMeta19;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp14_done;
                }
                default:
                tmp14_default: OMC_LABEL_UNUSED; {
                  modelica_metatype tmpMeta20;
                  modelica_metatype tmpMeta21;
                  
                  /* Pattern matching succeeded */
                  tmpMeta20 = stringAppend(_OMC_LIT43,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
                  tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT42);
                  omc_Error_addCompilerWarning(threadData, tmpMeta21);
                  goto tmp14_done;
                }
                }
                goto tmp14_end;
                tmp14_end: ;
              }
              goto goto_13;
              goto_13:;
              goto goto_1;
              goto tmp14_done;
              tmp14_done:;
            }
          }
          ;
          goto tmp2_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,4) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp24_1;
            tmp24_1 = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));
            {
              int tmp24;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp24_1))) {
                case 3: {
                  modelica_metatype tmpMeta25;
                  
                  /* Pattern matching succeeded */
                  tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 2)))));
                  _collector = tmpMeta25;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp23_done;
                }
                case 4: {
                  modelica_metatype tmpMeta26;
                  
                  /* Pattern matching succeeded */
                  tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[3] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 3)))));
                  _collector = tmpMeta26;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp23_done;
                }
                case 5: {
                  modelica_metatype tmpMeta27;
                  
                  /* Pattern matching succeeded */
                  tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(14));
                  memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[4] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 4)))));
                  _collector = tmpMeta27;

                  omc_Pointer_update(threadData, _collector_ptr, _collector);
                  goto tmp23_done;
                }
                default:
                tmp23_default: OMC_LABEL_UNUSED; {
                  modelica_metatype tmpMeta28;
                  modelica_metatype tmpMeta29;
                  
                  /* Pattern matching succeeded */
                  tmpMeta28 = stringAppend(_OMC_LIT43,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
                  tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT42);
                  omc_Error_addCompilerWarning(threadData, tmpMeta29);
                  goto tmp23_done;
                }
                }
                goto tmp23_end;
                tmp23_end: ;
              }
              goto goto_22;
              goto_22:;
              goto goto_1;
              goto tmp23_done;
              tmp23_done:;
            }
          }
          ;
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[9] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 9)))));
          _collector = tmpMeta30;

          omc_Pointer_update(threadData, _collector_ptr, _collector);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta31 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta31), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta31))[10] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 10)))));
          _collector = tmpMeta31;

          omc_Pointer_update(threadData, _collector_ptr, _collector);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[11] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 11)))));
          _collector = tmpMeta32;

          omc_Pointer_update(threadData, _collector_ptr, _collector);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,7) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))))) goto tmp2_end;
          tmpMeta33 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta33), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta33))[12] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 12)))));
          _collector = tmpMeta33;

          omc_Pointer_update(threadData, _collector_ptr, _collector);
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,7) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_collector), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[13] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_collector), 13)))));
          _collector = tmpMeta34;

          omc_Pointer_update(threadData, _collector_ptr, _collector);
          goto tmp2_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_NBStrongComponent_strongComponentInfo(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), _collector_ptr);
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          
          /* Pattern matching succeeded */
          tmpMeta35 = stringAppend(_OMC_LIT43,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT42);
          omc_Error_addCompilerWarning(threadData, tmpMeta36);
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

static modelica_metatype closure19_NBSlice_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype slice)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype maxLength = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBSlice_toString(thData, slice, func, maxLength);
}static modelica_metatype closure20_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure21_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure22_NBStrongComponent_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype comp)
{
  modelica_metatype index = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBStrongComponent_toString(thData, comp, index);
}static modelica_metatype closure23_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLDirection
modelica_string omc_NBStrongComponent_toString(threadData_t *threadData, modelica_metatype _comp, modelica_integer _index)
{
  modelica_string _str = NULL;
  modelica_integer _s;
  modelica_string _indexStr = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_string tmp3;
  modelica_string tmp4 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _s = omc_NBStrongComponent_size(threadData, _comp, 1 /* true */);
  tmp2 = (modelica_boolean)(_index > ((modelica_integer) 0));
  if(tmp2)
  {
    tmpMeta1 = stringAppend(_OMC_LIT44,intString(_index));
    tmp3 = tmpMeta1;
  }
  else
  {
    tmp3 = _OMC_LIT29;
  }
  _indexStr = tmp3;
  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = _comp;
    {
      int tmp7;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp7_1))) {
        case 3: {
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
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT45,_indexStr);
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT46);
          tmpMeta10 = stringAppend(tmpMeta9,omc_NBSolve_statusString(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))))));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT47);
          tmpMeta12 = stringAppend(tmpMeta11,intString(_s));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT48);
          _str = omc_StringUtil_headline__3(threadData, tmpMeta13);

          tmpMeta14 = stringAppend(_str,_OMC_LIT49);
          tmpMeta15 = stringAppend(tmpMeta14,omc_NFVariable_toString(threadData, omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))), _OMC_LIT50, 0 /* false */));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT42);
          _str = tmpMeta16;
          tmpMeta17 = stringAppend(_str,_OMC_LIT51);
          tmpMeta18 = stringAppend(tmpMeta17,omc_NBEquation_Equation_toString(threadData, omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), _OMC_LIT50));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT42);
          tmp4 = tmpMeta19;
          goto tmp6_done;
        }
        case 4: {
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
          
          /* Pattern matching succeeded */
          tmpMeta20 = stringAppend(_OMC_LIT45,_indexStr);
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT52);
          tmpMeta22 = stringAppend(tmpMeta21,omc_NBSolve_statusString(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))))));
          tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT47);
          tmpMeta24 = stringAppend(tmpMeta23,intString(_s));
          tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT48);
          _str = omc_StringUtil_headline__3(threadData, tmpMeta25);

          tmpMeta26 = stringAppend(_str,_OMC_LIT53);
          _str = tmpMeta26;

          tmpMeta27 = mmc_mk_box2(0, boxvar_NBVariable_pointerToString, mmc_mk_integer(((modelica_integer) 10)));
          tmpMeta28 = stringAppend(_str,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), (modelica_fnptr) mmc_mk_box2(0,closure19_NBSlice_toString,tmpMeta27), _OMC_LIT29, _OMC_LIT50, _OMC_LIT54, _OMC_LIT29, 1 /* true */, ((modelica_integer) 0)));
          _str = tmpMeta28;
          tmpMeta29 = stringAppend(_str,_OMC_LIT55);
          tmpMeta30 = mmc_mk_box1(0, _OMC_LIT50);
          tmpMeta31 = stringAppend(tmpMeta29,omc_NBSlice_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), (modelica_fnptr) mmc_mk_box2(0,closure20_NBEquation_Equation_pointerToString,tmpMeta30), ((modelica_integer) 10)));
          tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT42);
          tmp4 = tmpMeta32;
          goto tmp6_done;
        }
        case 5: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_boolean tmp39;
          modelica_string tmp40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          
          /* Pattern matching succeeded */
          tmp39 = (modelica_boolean)(_index == ((modelica_integer) -2));
          if(tmp39)
          {
            tmp40 = _OMC_LIT29;
          }
          else
          {
            tmpMeta33 = stringAppend(_OMC_LIT45,_indexStr);
            tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT56);
            tmpMeta35 = stringAppend(tmpMeta34,omc_NBSolve_statusString(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))))));
            tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT47);
            tmpMeta37 = stringAppend(tmpMeta36,intString(_s));
            tmpMeta38 = stringAppend(tmpMeta37,_OMC_LIT48);
            tmp40 = omc_StringUtil_headline__3(threadData, tmpMeta38);
          }
          _str = tmp40;

          tmpMeta41 = stringAppend(_str,_OMC_LIT57);
          tmpMeta42 = stringAppend(tmpMeta41,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))));
          tmpMeta43 = stringAppend(tmpMeta42,_OMC_LIT42);
          _str = tmpMeta43;
          tmpMeta44 = stringAppend(_str,_OMC_LIT51);
          tmpMeta45 = mmc_mk_box1(0, _OMC_LIT50);
          tmpMeta46 = stringAppend(tmpMeta44,omc_NBSlice_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), (modelica_fnptr) mmc_mk_box2(0,closure21_NBEquation_Equation_pointerToString,tmpMeta45), ((modelica_integer) 10)));
          tmpMeta47 = stringAppend(tmpMeta46,_OMC_LIT42);
          tmp4 = tmpMeta47;
          goto tmp6_done;
        }
        case 6: {
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
          
          /* Pattern matching succeeded */
          tmpMeta48 = stringAppend(_OMC_LIT45,_indexStr);
          tmpMeta49 = stringAppend(tmpMeta48,_OMC_LIT58);
          tmpMeta50 = stringAppend(tmpMeta49,omc_NBSolve_statusString(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 6))))));
          tmpMeta51 = stringAppend(tmpMeta50,_OMC_LIT47);
          tmpMeta52 = stringAppend(tmpMeta51,intString(_s));
          tmpMeta53 = stringAppend(tmpMeta52,_OMC_LIT48);
          _str = omc_StringUtil_headline__3(threadData, tmpMeta53);

          tmpMeta54 = stringAppend(_str,_OMC_LIT57);
          tmpMeta55 = stringAppend(tmpMeta54,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))));
          tmpMeta56 = stringAppend(tmpMeta55,_OMC_LIT42);
          _str = tmpMeta56;
          tmpMeta57 = stringAppend(_str,_OMC_LIT59);
          tmpMeta58 = stringAppend(tmpMeta57,omc_NBEquation_Equation_pointerToString(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), _OMC_LIT29));
          tmpMeta59 = stringAppend(tmpMeta58,_OMC_LIT42);
          tmp4 = tmpMeta59;
          goto tmp6_done;
        }
        case 8: {
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          
          /* Pattern matching succeeded */
          tmpMeta60 = stringAppend(_OMC_LIT45,_indexStr);
          tmpMeta61 = stringAppend(tmpMeta60,_OMC_LIT60);
          tmpMeta62 = stringAppend(tmpMeta61,intString(_s));
          tmpMeta63 = stringAppend(tmpMeta62,_OMC_LIT48);
          _str = omc_StringUtil_headline__3(threadData, tmpMeta63);

          tmpMeta64 = stringAppend(_str,_OMC_LIT61);
          {
            modelica_metatype __omcQ_24tmpVar41;
            modelica_metatype* tmp66;
            modelica_metatype tmpMeta67;
            modelica_metatype __omcQ_24tmpVar40;
            modelica_integer tmp68;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)));
            tmpMeta67 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar41 = tmpMeta67; /* defaultValue */
            tmp66 = &__omcQ_24tmpVar41;
            while(1) {
              tmp68 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp68--;
              }
              if (tmp68 == 0) {
                __omcQ_24tmpVar40 = omc_NBEquation_Equation_getEqnName(threadData, omc_Util_tuple21(threadData, _e));
                *tmp66 = mmc_mk_cons(__omcQ_24tmpVar40,0);
                tmp66 = &MMC_CDR(*tmp66);
              } else if (tmp68 == 1) {
                break;
              } else {
                goto goto_5;
              }
            }
            *tmp66 = mmc_mk_nil();
            tmpMeta65 = __omcQ_24tmpVar41;
          }
          tmpMeta69 = stringAppend(tmpMeta64,omc_List_toString(threadData, tmpMeta65, boxvar_NFComponentRef_toString, _OMC_LIT29, _OMC_LIT62, _OMC_LIT63, _OMC_LIT64, 1 /* true */, ((modelica_integer) 10)));
          tmpMeta70 = stringAppend(tmpMeta69,_OMC_LIT42);
          _str = tmpMeta70;
          tmpMeta71 = mmc_mk_box1(0, mmc_mk_integer(((modelica_integer) -2)));
          tmpMeta72 = stringAppend(_str,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), (modelica_fnptr) mmc_mk_box2(0,closure22_NBStrongComponent_toString,tmpMeta71), _OMC_LIT29, _OMC_LIT29, _OMC_LIT29, _OMC_LIT29, 1 /* true */, ((modelica_integer) 0)));
          tmp4 = tmpMeta72;
          goto tmp6_done;
        }
        case 7: {
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
          
          /* Pattern matching succeeded */
          tmpMeta73 = stringAppend(_OMC_LIT45,_indexStr);
          tmpMeta74 = stringAppend(tmpMeta73,_OMC_LIT65);
          tmpMeta75 = stringAppend(tmpMeta74,intString(_s));
          tmpMeta76 = stringAppend(tmpMeta75,_OMC_LIT48);
          _str = omc_StringUtil_headline__3(threadData, tmpMeta76);

          tmpMeta77 = stringAppend(_str,_OMC_LIT57);
          tmpMeta78 = stringAppend(tmpMeta77,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))));
          tmpMeta79 = stringAppend(tmpMeta78,_OMC_LIT42);
          _str = tmpMeta79;
          tmpMeta80 = stringAppend(_str,_OMC_LIT51);
          tmpMeta81 = mmc_mk_box1(0, _OMC_LIT50);
          tmpMeta82 = stringAppend(tmpMeta80,omc_NBSlice_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), (modelica_fnptr) mmc_mk_box2(0,closure23_NBEquation_Equation_pointerToString,tmpMeta81), ((modelica_integer) 10)));
          tmpMeta83 = stringAppend(tmpMeta82,_OMC_LIT42);
          tmp4 = tmpMeta83;
          goto tmp6_done;
        }
        case 9: {
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
          
          /* Pattern matching succeeded */
          tmpMeta84 = stringAppend(_OMC_LIT45,_indexStr);
          tmpMeta85 = stringAppend(tmpMeta84,_OMC_LIT66);
          tmpMeta86 = stringAppend(tmpMeta85,(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))))?_OMC_LIT67:_OMC_LIT68));
          tmpMeta87 = stringAppend(tmpMeta86,_OMC_LIT69);
          tmpMeta88 = stringAppend(tmpMeta87,(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 6))))?_OMC_LIT67:_OMC_LIT68));
          tmpMeta89 = stringAppend(tmpMeta88,_OMC_LIT70);
          tmpMeta90 = stringAppend(tmpMeta89,(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 7))))?_OMC_LIT67:_OMC_LIT68));
          tmpMeta91 = stringAppend(tmpMeta90,_OMC_LIT47);
          tmpMeta92 = stringAppend(tmpMeta91,intString(_s));
          tmpMeta93 = stringAppend(tmpMeta92,_OMC_LIT48);
          _str = omc_StringUtil_headline__3(threadData, tmpMeta93);

          tmpMeta94 = stringAppend(_str,omc_NBTearing_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), _OMC_LIT71));
          _str = tmpMeta94;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))))
          {
            tmpMeta95 = stringAppend(_str,omc_NBTearing_toString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), _OMC_LIT72));
            _str = tmpMeta95;
          }
          tmp4 = _str;
          goto tmp6_done;
        }
        case 10: {
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          
          /* Pattern matching succeeded */
          tmpMeta96 = stringAppend(_OMC_LIT73,omc_NBStrongComponent_AliasInfo_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))));
          tmpMeta97 = stringAppend(tmpMeta96,_OMC_LIT74);
          tmpMeta98 = stringAppend(tmpMeta97,omc_NBStrongComponent_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), _index));
          tmp4 = tmpMeta98;
          goto tmp6_done;
        }
        default:
        tmp6_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT76);
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
  _str = tmp4;
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NBStrongComponent_toString(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _str = omc_NBStrongComponent_toString(threadData, _comp, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_boolean omc_NBStrongComponent_AliasInfo_isEqual(threadData_t *threadData, modelica_metatype _info1, modelica_metatype _info2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info1), 4)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info2), 4))))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info1), 3)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info2), 3)))))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info1), 2)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info2), 2))))));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBStrongComponent_AliasInfo_isEqual(threadData_t *threadData, modelica_metatype _info1, modelica_metatype _info2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBStrongComponent_AliasInfo_isEqual(threadData, _info1, _info2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NBStrongComponent_AliasInfo_hash(threadData_t *threadData, modelica_metatype _info)
{
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = stringHashDjb2(omc_NBStrongComponent_AliasInfo_toString(threadData, _info));
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_NBStrongComponent_AliasInfo_hash(threadData_t *threadData, modelica_metatype _info)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NBStrongComponent_AliasInfo_hash(threadData, _info);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_string omc_NBStrongComponent_AliasInfo_toString(threadData_t *threadData, modelica_metatype _info)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(omc_NBPartition_Partition_kindToString(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))))),_OMC_LIT77);
  tmpMeta2 = stringAppend(tmpMeta1,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))))));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT78);
  tmpMeta4 = stringAppend(tmpMeta3,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))))));
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT79);
  _str = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _str;
}

