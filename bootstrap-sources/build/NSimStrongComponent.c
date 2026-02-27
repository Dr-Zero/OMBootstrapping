#include "omc_simulation_settings.h"
#include "NSimStrongComponent.h"
#define _OMC_LIT0_data "Nonlinear System (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,25,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ", homotopy = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,13,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,5,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ", mixed = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,10,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ", torn = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,9,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "--"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Iteration Vars:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,15,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,2,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,0,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Linear System (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,22,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data ", jacobian = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,13,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,17,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT16,_OMC_LIT17,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "NSimStrongComponent.Block.getGenericEquationName failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,60,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "NSimStrongComponent.Block.getGenericAssignIndex failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,59,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "when "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,5,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "end when;\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,10,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "else"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,4,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "NSimStrongComponent.Block.fixIndex failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,46,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "NSimStrongComponent.Block.convert failed because there is a\n                conditional branch after a non-conditional branch in:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,130,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "NSimStrongComponent.Block.convert failed because there is\n                  at least two non-conditional branches in:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,118,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "NSimStrongComponent.Block.convert failed because there is no non-conditional branch in:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,88,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "NSimStrongComponent.Block.convert failed for following alias block because the index has not been updated:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,107,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "NSimStrongComponent.Block.convert failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,45,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "NSimStrongComponent.Block.createAssignment failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,54,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "NSimStrongComponent.Block.createEquation failed with status "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,60,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data " for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,5,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "NSimStrongComponent.Block.createResidual failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,52,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,18) {&NFType_ANY__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT40,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT43,0.0);
#define _OMC_LIT43 MMC_REFREALLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT13,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,1,35) {&NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc,}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,17,3) {&NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,5,3) {&NFBackendExtension_Annotations_ANNOTATIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,8,3) {&NFBackendExtension_BackendInfo_BACKEND__INFO__desc,_OMC_LIT45,_OMC_LIT46,_OMC_LIT47,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,11,3) {&NFVariable_VARIABLE__desc,_OMC_LIT37,_OMC_LIT38,_OMC_LIT39,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT41,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT42,_OMC_LIT44,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NSimCode/NSimStrongComponent.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,84,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT51_6,1.770631566e9);
#define _OMC_LIT51_6 MMC_REFREALLIT(_OMC_LIT_STRUCT51_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT50,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(718)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(718)),MMC_IMMEDIATE(MMC_TAGFIXNUM(125)),_OMC_LIT51_6}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT44,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT52,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "NSimStrongComponent.Block.fromStrongComponent failed because entwined equations have to be resolved beforehand in Solve.solve(). Failed for:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,141,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "NSimStrongComponent.Block.fromStrongComponent failed with unknown reason for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,77,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "NSimStrongComponent.Block.fromPartition failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,51,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT57_6,1.770631566e9);
#define _OMC_LIT57_6 MMC_REFREALLIT(_OMC_LIT_STRUCT57_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT50,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(574)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(576)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),_OMC_LIT57_6}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "NSimStrongComponent.Block.createNoReturnBlocks failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,58,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,3,3) {&NBBackendUtil_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,3,3) {&NBBackendUtil_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,4,4) {&NBPartitioning_BClock_SUB__CLOCK__desc,_OMC_LIT59,_OMC_LIT60,MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT62_6,1.770631566e9);
#define _OMC_LIT62_6 MMC_REFREALLIT(_OMC_LIT_STRUCT62_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT50,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(548)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(548)),MMC_IMMEDIATE(MMC_TAGFIXNUM(128)),_OMC_LIT62_6}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "NSimStrongComponent.Block.getIndex failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,46,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "if "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,3,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data " then\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,8,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,2,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data " in "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,4,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,1,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data ") 0 = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,6,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data ") For-Loop-Residual:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,21,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,4,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data " loop\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,6,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "  0 = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,6,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data ";\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,2,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "end for;\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,9,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data ") Generic For-Loop-Residual:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,29,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "slice"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,5,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data ") "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,2,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data " := "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,4,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "resizable call [index  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,23,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "]\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,2,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "single generic call [index  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,28,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,2,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "### entwined call ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,19,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data ") ###"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,5,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "\n    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,5,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,4,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data ") Alias of "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,11,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data ") Algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,12,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data ") Inverse Algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,20,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "else "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,5,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "end if;\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,8,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data ") Hybrid\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,9,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "NSimStrongComponent.Block.toString failed.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,43,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#include "util/modelica.h"

#include "NSimStrongComponent_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimStrongComponent_Block_getGenericEquationName(threadData_t *threadData, modelica_metatype _comp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_getGenericEquationName,2,0) {(void*) boxptr_NSimStrongComponent_Block_getGenericEquationName,0}};
#define boxvar_NSimStrongComponent_Block_getGenericEquationName MMC_REFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_getGenericEquationName)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NSimStrongComponent_Block_getGenericAssignIndex(threadData_t *threadData, modelica_metatype _blck);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimStrongComponent_Block_getGenericAssignIndex(threadData_t *threadData, modelica_metatype _blck);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_getGenericAssignIndex,2,0) {(void*) boxptr_NSimStrongComponent_Block_getGenericAssignIndex,0}};
#define boxvar_NSimStrongComponent_Block_getGenericAssignIndex MMC_REFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_getGenericAssignIndex)
PROTECTED_FUNCTION_STATIC modelica_string omc_NSimStrongComponent_Block_whenString(threadData_t *threadData, modelica_metatype _conditions, modelica_metatype _when_stmts, modelica_metatype _else_when, modelica_string __omcQ_24in_5Fstr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_whenString,2,0) {(void*) boxptr_NSimStrongComponent_Block_whenString,0}};
#define boxvar_NSimStrongComponent_Block_whenString MMC_REFSTRUCTLIT(boxvar_lit_NSimStrongComponent_Block_whenString)

DLLDirection
modelica_metatype omc_NSimStrongComponent_NonlinearSystem_convert(threadData_t *threadData, modelica_metatype _system)
{
  modelica_metatype _oldSystem = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldSystem has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _crefs = tmpMeta1;
  {
    modelica_metatype _cref;
    for (tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 4))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _cref = MMC_CAR(tmpMeta2);
      tmpMeta3 = mmc_mk_cons(omc_NFComponentRef_toDAE(threadData, _cref), _crefs);
      _crefs = tmpMeta3;
    }
  }

  tmpMeta5 = mmc_mk_box11(3, &SimCode_NonlinearSystem_NONLINEARSYSTEM__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 2))), omc_NSimStrongComponent_Block_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 3)))), listReverse(_crefs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 6))), omc_Util_applyOption(threadData, omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 7)))), boxvar_NSimJacobian_SimJacobian_convert), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 10))), mmc_mk_none());
  _oldSystem = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _oldSystem;
}

DLLDirection
modelica_string omc_NSimStrongComponent_NonlinearSystem_toString(threadData_t *threadData, modelica_metatype _system, modelica_string __omcQ_24in_5Fstr)
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  tmpMeta1 = stringAppend(_OMC_LIT0,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 6))))));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT1);
  tmpMeta3 = stringAppend(tmpMeta2,(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 8))))?_OMC_LIT2:_OMC_LIT3));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT4);
  tmpMeta5 = stringAppend(tmpMeta4,(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 9))))?_OMC_LIT2:_OMC_LIT3));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT5);
  tmpMeta7 = stringAppend(tmpMeta6,(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 10))))?_OMC_LIT2:_OMC_LIT3));
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT6);
  tmpMeta9 = stringAppend(tmpMeta8,_str);
  tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT7);
  tmpMeta11 = stringAppend(tmpMeta10,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 4))), boxvar_NFComponentRef_toString, _OMC_LIT8, _OMC_LIT9, _OMC_LIT10, _OMC_LIT11, 1 /* true */, ((modelica_integer) 10)));
  tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT12);
  tmpMeta13 = stringAppend(_str,_OMC_LIT7);
  tmpMeta14 = stringAppend(tmpMeta12,omc_NSimStrongComponent_Block_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 3))), tmpMeta13, _OMC_LIT13));
  _str = tmpMeta14;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_NonlinearSystem_setJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsyst, modelica_metatype _jacobian)
{
  modelica_metatype _syst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _syst = __omcQ_24in_5Fsyst;
  omc_Pointer_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 7))), _jacobian);
  _return: OMC_LABEL_UNUSED
  return _syst;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_NonlinearSystem_getJacobian(threadData_t *threadData, modelica_metatype _syst)
{
  modelica_metatype _jacobian = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _jacobian = omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 7))));
  _return: OMC_LABEL_UNUSED
  return _jacobian;
}

DLLDirection
modelica_string omc_NSimStrongComponent_LinearSystem_toString(threadData_t *threadData, modelica_metatype _system, modelica_string __omcQ_24in_5Fstr)
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  tmpMeta1 = stringAppend(_OMC_LIT14,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 12))))));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT15);
  tmpMeta3 = stringAppend(tmpMeta2,(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 13))))?_OMC_LIT2:_OMC_LIT3));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT4);
  tmpMeta5 = stringAppend(tmpMeta4,(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 3))))?_OMC_LIT2:_OMC_LIT3));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT5);
  tmpMeta7 = stringAppend(tmpMeta6,(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 4))))?_OMC_LIT2:_OMC_LIT3));
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT6);
  tmpMeta9 = stringAppend(_str,_OMC_LIT7);
  tmpMeta10 = stringAppend(tmpMeta8,omc_NSimStrongComponent_Block_listToString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 8))), tmpMeta9, _OMC_LIT13));
  _str = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NSimStrongComponent_Block_getGenericEquationName(threadData_t *threadData, modelica_metatype _comp)
{
  modelica_metatype _name = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBEquation_Equation_getEqnName(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT21,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta6 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta6);
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
  _name = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _name;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NSimStrongComponent_Block_getGenericAssignIndex(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_integer _index;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT22,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta5);
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
  _index = tmp1;
  _return: OMC_LABEL_UNUSED
  return _index;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NSimStrongComponent_Block_getGenericAssignIndex(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_integer _index;
  modelica_metatype out_index;
  _index = omc_NSimStrongComponent_Block_getGenericAssignIndex(threadData, _blck);
  out_index = mmc_mk_icon(_index);
  return out_index;
}

static modelica_metatype closure0_NBEquation_WhenStatement_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype stmt)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_WhenStatement_toString(thData, stmt, $in_str);
}
PROTECTED_FUNCTION_STATIC modelica_string omc_NSimStrongComponent_Block_whenString(threadData_t *threadData, modelica_metatype _conditions, modelica_metatype _when_stmts, modelica_metatype _else_when, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  modelica_string _indent = NULL;
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
  _str = __omcQ_24in_5Fstr;
  _indent = _str;
  tmpMeta1 = stringAppend(_OMC_LIT23,omc_List_toString(threadData, _conditions, boxvar_NFComponentRef_toString, _OMC_LIT13, _OMC_LIT9, _OMC_LIT10, _OMC_LIT11, 1 /* true */, ((modelica_integer) 0)));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT12);
  tmpMeta4 = stringAppend(_indent,_OMC_LIT24);
  tmpMeta3 = mmc_mk_box1(0, tmpMeta4);
  tmpMeta5 = stringAppend(tmpMeta2,omc_List_toString(threadData, _when_stmts, (modelica_fnptr) mmc_mk_box2(0,closure0_NBEquation_WhenStatement_toString,tmpMeta3), _OMC_LIT13, _OMC_LIT13, _OMC_LIT12, _OMC_LIT13, 1 /* true */, ((modelica_integer) 0)));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT12);
  _str = tmpMeta6;

  if(isSome(_else_when))
  {
    tmpMeta7 = stringAppend(_str,_indent);
    tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT26);
    tmpMeta9 = stringAppend(tmpMeta8,omc_NSimStrongComponent_Block_toString(threadData, omc_Util_getOption(threadData, _else_when), _OMC_LIT13));
    _str = tmpMeta9;
  }
  else
  {
    tmpMeta10 = stringAppend(_str,_indent);
    tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT25);
    _str = tmpMeta11;
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_collectEntwinedEquations(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)));
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_fixIndex(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fblck, modelica_metatype __omcQ_24in_5Findices, modelica_metatype *out_indices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _blck = __omcQ_24in_5Fblck;
  _indices = __omcQ_24in_5Findices;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      modelica_metatype _tmp = NULL;
      modelica_metatype _tmp_lst = NULL;
      int tmp4;
      // _tmp has no default value.
      // _tmp_lst has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta5;

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta6;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta8;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta10;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta12;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta14;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta15;

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta16;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_blck), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta17;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta18;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_blck), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta19;

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta20;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta21;

          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta22;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          
          /* Pattern matching succeeded */
          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_blck), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta23;

          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta24;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_blck), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)));
          _blck = tmpMeta25;

          tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
          _indices = tmpMeta26;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))))
          {
            _tmp = omc_NSimStrongComponent_Block_fixIndex(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))), _indices ,&_indices);

            tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(9));
            memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_blck), 9*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[6] = mmc_mk_some(_tmp);
            _blck = tmpMeta27;
          }
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_fixIndex(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), _indices ,&_indices);

          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          _tmp_lst = omc_NSimStrongComponent_Block_fixIndices(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))), tmpMeta28, _indices ,&_indices);

          tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[3] = _tmp;
          _blck = tmpMeta29;

          tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[5] = _tmp_lst;
          _blck = tmpMeta30;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          
          /* Pattern matching succeeded */
          tmpMeta32 = stringAppend(_OMC_LIT27,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
          tmpMeta31 = mmc_mk_cons(tmpMeta32, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta31);
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
  _blck = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_indices) { *out_indices = _indices; }
  return _blck;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_fixIndices(threadData_t *threadData, modelica_metatype _blcks, modelica_metatype __omcQ_24in_5Facc, modelica_metatype __omcQ_24in_5Findices, modelica_metatype *out_indices)
{
  modelica_metatype _acc = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _acc = __omcQ_24in_5Facc;
  _indices = __omcQ_24in_5Findices;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blcks;
    {
      modelica_metatype _blck = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _blck has no default value.
      // _rest has no default value.
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
          _blck = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _blck = omc_NSimStrongComponent_Block_fixIndex(threadData, _blck, _indices ,&_indices);
          tmpMeta8 = mmc_mk_cons(_blck, _acc);
          /* Tail recursive call */
          _blcks = _rest;
          __omcQ_24in_5Facc = tmpMeta8;
          __omcQ_24in_5Findices = _indices;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _acc;
          tmpMeta[0+1] = _indices;
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
  _acc = tmpMeta[0+0];
  _indices = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_indices) { *out_indices = _indices; }
  return _acc;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_convertListList(threadData_t *threadData, modelica_metatype _blck_lst_lst)
{
  modelica_metatype _oldBlck_lst_lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp4;
    modelica_metatype _blck_lst_loopVar = 0;
    modelica_metatype _blck_lst;
    _blck_lst_loopVar = _blck_lst_lst;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar5;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_blck_lst_loopVar)) {
        _blck_lst = MMC_CAR(_blck_lst_loopVar);
        _blck_lst_loopVar = MMC_CDR(_blck_lst_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar4 = omc_NSimStrongComponent_Block_convertList(threadData, _blck_lst);
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
  _oldBlck_lst_lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldBlck_lst_lst;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_convertList(threadData_t *threadData, modelica_metatype _blck_lst)
{
  modelica_metatype _oldBlck_lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp4;
    modelica_metatype _blck_loopVar = 0;
    modelica_metatype _blck;
    _blck_loopVar = _blck_lst;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar7;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_blck_loopVar)) {
        _blck = MMC_CAR(_blck_loopVar);
        _blck_loopVar = MMC_CDR(_blck_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar6 = omc_NSimStrongComponent_Block_convert(threadData, _blck);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar7;
  }
  _oldBlck_lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldBlck_lst;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_convert(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_metatype _oldBlck = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldBlck has no default value.
  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = _blck;
    {
      modelica_metatype _iter = NULL;
      modelica_metatype _range = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _old_iterators = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _blcks = NULL;
      modelica_metatype _oldBranches = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _else_branch = NULL;
      modelica_metatype tmpMeta5;
      volatile mmc_switch_type tmp7;
      int tmp8;
      // _iter has no default value.
      // _range has no default value.
      // _exp has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _old_iterators = tmpMeta3;
      // _blcks has no default value.
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _oldBranches = tmpMeta4;
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _else_branch = tmpMeta5;
      tmp7 = 0;
      for (; tmp7 < 16; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,0,5) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box6(3, &SimCode_SimEqSystem_SES__RESIDUAL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))));
          tmpMeta1 = tmpMeta9;
          goto tmp6_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,1,5) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box6(3, &SimCode_SimEqSystem_SES__RESIDUAL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))));
          tmpMeta1 = tmpMeta10;
          goto tmp6_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,2,6) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _iterator;
            for (tmpMeta11 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _iterator = MMC_CAR(tmpMeta11);
              /* Pattern-matching assignment */
              tmpMeta12 = _iterator;
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
              _iter = tmpMeta13;
              _range = tmpMeta14;

              tmpMeta16 = mmc_mk_box2(0, omc_NFComponentRef_toDAE(threadData, _iter), omc_NFExpression_toDAE(threadData, _range));
              tmpMeta15 = mmc_mk_cons(tmpMeta16, _old_iterators);
              _old_iterators = tmpMeta15;
            }
          }
          tmpMeta18 = mmc_mk_box7(4, &SimCode_SimEqSystem_SES__FOR__RESIDUAL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), _old_iterators, omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 7)))));
          tmpMeta1 = tmpMeta18;
          goto tmp6_done;
        }
        case 3: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,3,7) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _iterator;
            for (tmpMeta19 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5)))); !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
            {
              _iterator = MMC_CAR(tmpMeta19);
              /* Pattern-matching assignment */
              tmpMeta20 = _iterator;
              tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
              tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
              _iter = tmpMeta21;
              _range = tmpMeta22;

              tmpMeta24 = mmc_mk_box2(0, omc_NFComponentRef_toDAE(threadData, _iter), omc_NFExpression_toDAE(threadData, _range));
              tmpMeta23 = mmc_mk_cons(tmpMeta24, _old_iterators);
              _old_iterators = tmpMeta23;
            }
          }
          tmpMeta26 = mmc_mk_box8(5, &SimCode_SimEqSystem_SES__GENERIC__RESIDUAL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))), _old_iterators, omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 7))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 8)))));
          tmpMeta1 = tmpMeta26;
          goto tmp6_done;
        }
        case 4: {
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,4,5) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          tmpMeta27 = mmc_mk_box6(6, &SimCode_SimEqSystem_SES__SIMPLE__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), omc_NFComponentRef_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3)))), omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))));
          tmpMeta1 = tmpMeta27;
          goto tmp6_done;
        }
        case 5: {
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,5,5) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          tmpMeta28 = mmc_mk_box6(8, &SimCode_SimEqSystem_SES__ARRAY__CALL__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3)))), omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))));
          tmpMeta1 = tmpMeta28;
          goto tmp6_done;
        }
        case 6: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,6,5) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp30;
            modelica_metatype tmpMeta31;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp32;
            modelica_metatype _it_loopVar = 0;
            modelica_metatype _it;
            _it_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)));
            tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta31; /* defaultValue */
            tmp30 = &__omcQ_24tmpVar9;
            while(1) {
              tmp32 = 1;
              if (!listEmpty(_it_loopVar)) {
                _it = MMC_CAR(_it_loopVar);
                _it_loopVar = MMC_CDR(_it_loopVar);
                tmp32--;
              }
              if (tmp32 == 0) {
                __omcQ_24tmpVar8 = omc_NSimGenericCall_SimIterator_convert(threadData, _it);
                *tmp30 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp30 = &MMC_CDR(*tmp30);
              } else if (tmp32 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp30 = mmc_mk_nil();
            tmpMeta29 = __omcQ_24tmpVar9;
          }
          tmpMeta33 = mmc_mk_box6(9, &SimCode_SimEqSystem_SES__RESIZABLE__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), tmpMeta29, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))));
          tmpMeta1 = tmpMeta33;
          goto tmp6_done;
        }
        case 7: {
          modelica_metatype tmpMeta34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,7,5) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          tmpMeta34 = mmc_mk_box6(10, &SimCode_SimEqSystem_SES__GENERIC__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))));
          tmpMeta1 = tmpMeta34;
          goto tmp6_done;
        }
        case 8: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta39;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,8,5) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp36;
            modelica_metatype tmpMeta37;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp38;
            modelica_metatype _single_call_loopVar = 0;
            modelica_metatype _single_call;
            _single_call_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)));
            tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta37; /* defaultValue */
            tmp36 = &__omcQ_24tmpVar11;
            while(1) {
              tmp38 = 1;
              if (!listEmpty(_single_call_loopVar)) {
                _single_call = MMC_CAR(_single_call_loopVar);
                _single_call_loopVar = MMC_CDR(_single_call_loopVar);
                tmp38--;
              }
              if (tmp38 == 0) {
                __omcQ_24tmpVar10 = omc_NSimStrongComponent_Block_convert(threadData, _single_call);
                *tmp36 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp36 = &MMC_CDR(*tmp36);
              } else if (tmp38 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp36 = mmc_mk_nil();
            tmpMeta35 = __omcQ_24tmpVar11;
          }
          tmpMeta39 = mmc_mk_box6(11, &SimCode_SimEqSystem_SES__ENTWINED__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), tmpMeta35, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))));
          tmpMeta1 = tmpMeta39;
          goto tmp6_done;
        }
        case 9: {
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,12,4) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta40 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))); !listEmpty(tmpMeta40); tmpMeta40=MMC_CDR(tmpMeta40))
            {
              _branch = MMC_CAR(tmpMeta40);
              /* Pattern-matching assignment */
              tmpMeta41 = _branch;
              tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 1));
              tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 2));
              _exp = tmpMeta42;
              _blcks = tmpMeta43;

              if(omc_NFExpression_isEnd(threadData, _exp))
              {
                if(listEmpty(_else_branch))
                {
                  {
                    modelica_metatype __omcQ_24tmpVar13;
                    modelica_metatype* tmp45;
                    modelica_metatype tmpMeta46;
                    modelica_metatype __omcQ_24tmpVar12;
                    modelica_integer tmp47;
                    modelica_metatype _blck__loopVar = 0;
                    modelica_metatype _blck_;
                    _blck__loopVar = _blcks;
                    tmpMeta46 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar13 = tmpMeta46; /* defaultValue */
                    tmp45 = &__omcQ_24tmpVar13;
                    while(1) {
                      tmp47 = 1;
                      if (!listEmpty(_blck__loopVar)) {
                        _blck_ = MMC_CAR(_blck__loopVar);
                        _blck__loopVar = MMC_CDR(_blck__loopVar);
                        tmp47--;
                      }
                      if (tmp47 == 0) {
                        __omcQ_24tmpVar12 = omc_NSimStrongComponent_Block_convert(threadData, _blck_);
                        *tmp45 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                        tmp45 = &MMC_CDR(*tmp45);
                      } else if (tmp47 == 1) {
                        break;
                      } else {
                        goto goto_2;
                      }
                    }
                    *tmp45 = mmc_mk_nil();
                    tmpMeta44 = __omcQ_24tmpVar13;
                  }
                  _else_branch = tmpMeta44;
                }
                else
                {
                  tmpMeta49 = stringAppend(_OMC_LIT29,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
                  tmpMeta48 = mmc_mk_cons(tmpMeta49, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta48);

                  goto goto_2;
                }
              }
              else
              {
                if(listEmpty(_else_branch))
                {
                  {
                    modelica_metatype __omcQ_24tmpVar15;
                    modelica_metatype* tmp52;
                    modelica_metatype tmpMeta53;
                    modelica_metatype __omcQ_24tmpVar14;
                    modelica_integer tmp54;
                    modelica_metatype _blck__loopVar = 0;
                    modelica_metatype _blck_;
                    _blck__loopVar = _blcks;
                    tmpMeta53 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar15 = tmpMeta53; /* defaultValue */
                    tmp52 = &__omcQ_24tmpVar15;
                    while(1) {
                      tmp54 = 1;
                      if (!listEmpty(_blck__loopVar)) {
                        _blck_ = MMC_CAR(_blck__loopVar);
                        _blck__loopVar = MMC_CDR(_blck__loopVar);
                        tmp54--;
                      }
                      if (tmp54 == 0) {
                        __omcQ_24tmpVar14 = omc_NSimStrongComponent_Block_convert(threadData, _blck_);
                        *tmp52 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                        tmp52 = &MMC_CDR(*tmp52);
                      } else if (tmp54 == 1) {
                        break;
                      } else {
                        goto goto_2;
                      }
                    }
                    *tmp52 = mmc_mk_nil();
                    tmpMeta51 = __omcQ_24tmpVar15;
                  }
                  tmpMeta55 = mmc_mk_box2(0, omc_NFExpression_toDAE(threadData, _exp), tmpMeta51);
                  tmpMeta50 = mmc_mk_cons(tmpMeta55, _oldBranches);
                  _oldBranches = tmpMeta50;
                }
                else
                {
                  tmpMeta57 = stringAppend(_OMC_LIT28,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
                  tmpMeta56 = mmc_mk_cons(tmpMeta57, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta56);

                  goto goto_2;
                }
              }
            }
          }

          if(listEmpty(_else_branch))
          {
            tmpMeta60 = stringAppend(_OMC_LIT30,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
            tmpMeta59 = mmc_mk_cons(tmpMeta60, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta59);

            goto goto_2;
          }
          tmpMeta61 = mmc_mk_box6(12, &SimCode_SimEqSystem_SES__IFEQUATION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), listReverse(_oldBranches), _else_branch, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5)))));
          tmpMeta1 = tmpMeta61;
          goto tmp6_done;
        }
        case 10: {
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta70;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,13,7) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp63;
            modelica_metatype tmpMeta64;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp65;
            modelica_metatype _cr_loopVar = 0;
            modelica_metatype _cr;
            _cr_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)));
            tmpMeta64 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta64; /* defaultValue */
            tmp63 = &__omcQ_24tmpVar17;
            while(1) {
              tmp65 = 1;
              if (!listEmpty(_cr_loopVar)) {
                _cr = MMC_CAR(_cr_loopVar);
                _cr_loopVar = MMC_CDR(_cr_loopVar);
                tmp65--;
              }
              if (tmp65 == 0) {
                __omcQ_24tmpVar16 = omc_NFComponentRef_toDAE(threadData, _cr);
                *tmp63 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp63 = &MMC_CDR(*tmp63);
              } else if (tmp65 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp63 = mmc_mk_nil();
            tmpMeta62 = __omcQ_24tmpVar17;
          }
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp67;
            modelica_metatype tmpMeta68;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp69;
            modelica_metatype _stmt_loopVar = 0;
            modelica_metatype _stmt;
            _stmt_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5)));
            tmpMeta68 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta68; /* defaultValue */
            tmp67 = &__omcQ_24tmpVar19;
            while(1) {
              tmp69 = 1;
              if (!listEmpty(_stmt_loopVar)) {
                _stmt = MMC_CAR(_stmt_loopVar);
                _stmt_loopVar = MMC_CDR(_stmt_loopVar);
                tmp69--;
              }
              if (tmp69 == 0) {
                __omcQ_24tmpVar18 = omc_NBEquation_WhenStatement_convert(threadData, _stmt);
                *tmp67 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp67 = &MMC_CDR(*tmp67);
              } else if (tmp69 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp67 = mmc_mk_nil();
            tmpMeta66 = __omcQ_24tmpVar19;
          }
          tmpMeta70 = mmc_mk_box8(18, &SimCode_SimEqSystem_SES__WHEN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), tmpMeta62, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), tmpMeta66, omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6))), boxvar_NSimStrongComponent_Block_convert), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 7))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 8)))));
          tmpMeta1 = tmpMeta70;
          goto tmp6_done;
        }
        case 11: {
          modelica_metatype tmpMeta71;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,15,2) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          tmpMeta71 = mmc_mk_box4(16, &SimCode_SimEqSystem_SES__NONLINEAR__desc, omc_NSimStrongComponent_NonlinearSystem_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2)))), mmc_mk_none(), omc_NBEquation_EquationAttributes_convert(threadData, omc_NBEquation_default(threadData, 1, 0 /* false */, mmc_mk_none(), mmc_mk_none())));
          tmpMeta1 = tmpMeta71;
          goto tmp6_done;
        }
        case 12: {
          modelica_metatype tmpMeta72;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,10,3) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          tmpMeta72 = mmc_mk_box4(13, &SimCode_SimEqSystem_SES__ALGORITHM__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), omc_NFConvertDAE_convertStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3)))), omc_NBEquation_EquationAttributes_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))));
          tmpMeta1 = tmpMeta72;
          goto tmp6_done;
        }
        case 13: {
          modelica_metatype tmpMeta73;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,9,4) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))) > ((modelica_integer) 0))) goto tmp6_end;
          tmpMeta73 = mmc_mk_box3(21, &SimCode_SimEqSystem_SES__ALIAS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))));
          tmpMeta1 = tmpMeta73;
          goto tmp6_done;
        }
        case 14: {
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,9,4) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))) == ((modelica_integer) -1))) goto tmp6_end;
          tmpMeta75 = stringAppend(_OMC_LIT31,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
          tmpMeta74 = mmc_mk_cons(tmpMeta75, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta74);
          goto goto_2;
          goto tmp6_done;
        }
        case 15: {
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          
          /* Pattern matching succeeded */
          tmpMeta77 = stringAppend(_OMC_LIT32,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
          tmpMeta76 = mmc_mk_cons(tmpMeta77, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta76);
          goto goto_2;
          goto tmp6_done;
        }
        }
        goto tmp6_end;
        tmp6_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp6_done;
      tmp6_done:;
    }
  }
  _oldBlck = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldBlck;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_collectAlgebraicLoops(threadData_t *threadData, modelica_metatype _blcks, modelica_metatype __omcQ_24in_5FlinearLoops, modelica_metatype __omcQ_24in_5FnonlinearLoops, modelica_metatype __omcQ_24in_5Fjacobians, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype *out_nonlinearLoops, modelica_metatype *out_jacobians, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _linearLoops = NULL;
  modelica_metatype _nonlinearLoops = NULL;
  modelica_metatype _jacobians = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _linearLoops = __omcQ_24in_5FlinearLoops;
  _nonlinearLoops = __omcQ_24in_5FnonlinearLoops;
  _jacobians = __omcQ_24in_5Fjacobians;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  {
    modelica_metatype _blck_lst;
    for (tmpMeta1 = _blcks; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _blck_lst = MMC_CAR(tmpMeta1);
      {
        modelica_metatype _blck;
        for (tmpMeta2 = _blck_lst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _blck = MMC_CAR(tmpMeta2);
          
          
          { /* match expression */
            modelica_metatype tmp6_1;
            tmp6_1 = _blck;
            {
              modelica_metatype _jacobian = NULL;
              int tmp6;
              // _jacobian has no default value.
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp6_1))) {
                case 17: {
                  modelica_metatype tmpMeta7;
                  
                  /* Pattern matching succeeded */
                  tmpMeta7 = mmc_mk_cons(_blck, _linearLoops);
                  tmpMeta[0+0] = tmpMeta7;
                  tmpMeta[0+1] = _nonlinearLoops;
                  goto tmp5_done;
                }
                case 18: {
                  modelica_metatype tmpMeta8;
                  modelica_metatype tmpMeta9;
                  modelica_metatype tmpMeta10;
                  
                  /* Pattern matching succeeded */
                  _jacobian = omc_NSimStrongComponent_NonlinearSystem_getJacobian(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));

                  if(isSome(_jacobian))
                  {
                    tmpMeta8 = mmc_mk_cons(omc_Util_getOption(threadData, _jacobian), _jacobians);
                    _jacobians = tmpMeta8;
                  }

                  tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(4));
                  memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_blck), 4*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = omc_NSimStrongComponent_NonlinearSystem_setJacobian(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), _jacobian);
                  _blck = tmpMeta9;
                  tmpMeta10 = mmc_mk_cons(_blck, _nonlinearLoops);
                  tmpMeta[0+0] = _linearLoops;
                  tmpMeta[0+1] = tmpMeta10;
                  goto tmp5_done;
                }
                default:
                tmp5_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = _linearLoops;
                  tmpMeta[0+1] = _nonlinearLoops;
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
          _linearLoops = tmpMeta[0+0];
          _nonlinearLoops = tmpMeta[0+1];
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_nonlinearLoops) { *out_nonlinearLoops = _nonlinearLoops; }
  if (out_jacobians) { *out_jacobians = _jacobians; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _linearLoops;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createAssignment(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      modelica_metatype _qual = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _tmp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _qual has no default value.
      // _cref has no default value.
      // _tmp has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          
          _qual = tmp4_1;
          _cref = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box6(7, &NSimStrongComponent_Block_SIMPLE__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_qual), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_qual), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_qual), 6))));
          _tmp = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta9;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          
          _qual = tmp4_1;
          _cref = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box6(7, &NSimStrongComponent_Block_SIMPLE__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_qual), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_qual), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_qual), 6))));
          _tmp = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta13;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = stringAppend(_OMC_LIT33,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT13));
          tmpMeta14 = mmc_mk_cons(tmpMeta15, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta14);
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
  _blck = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _blck;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createAlgorithm(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5Findices, modelica_metatype _equation_map, modelica_metatype *out_indices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype _stmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _indices = __omcQ_24in_5Findices;
  // _stmts has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3)))), 2)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NBEquation_Equation_toStatement(threadData, _eqn);
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
  _stmts = tmpMeta1;

  tmpMeta6 = mmc_mk_box4(13, &NSimStrongComponent_Block_ALGORITHM__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18))), _stmts, omc_NBEquation_Equation_getAttributes(threadData, _eqn));
  _blck = tmpMeta6;

  tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(27));
  memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
  _indices = tmpMeta7;

  omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, omc_Pointer_create(threadData, _eqn)), _blck, _equation_map);
  _return: OMC_LABEL_UNUSED
  if (out_indices) { *out_indices = _indices; }
  return _blck;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createIfBody(threadData_t *threadData, modelica_metatype _body, modelica_metatype __omcQ_24in_5Fbranches, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _branches = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _blck = NULL;
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _branches = __omcQ_24in_5Fbranches;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _comps has no default value.
  // _blck has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  {
    modelica_metatype __omcQ_24tmpVar21;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype tmpMeta5;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar20;
    modelica_integer tmp7;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 3)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar21 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar21;
    while(1) {
      tmp7 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp7--;
      }
      if (tmp7 == 0) {
        tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta6 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqn, tmpMeta5);
        __omcQ_24tmpVar20 = omc_NBStrongComponent_fromSolvedEquationSlice(threadData, tmpMeta6);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar20,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp7 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar21;
  }
  _comps = tmpMeta2;

  {
    modelica_metatype _comp;
    for (tmpMeta8 = listReverse(_comps); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
    {
      _comp = MMC_CAR(tmpMeta8);
      _blck = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, _comp, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices ,NULL);

      tmpMeta9 = mmc_mk_cons(_blck, _blcks);
      _blcks = tmpMeta9;
    }
  }

  tmpMeta12 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 2))), _blcks);
  tmpMeta11 = mmc_mk_cons(tmpMeta12, _branches);
  _branches = tmpMeta11;

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 4)))))
  {
    /* Tail recursive call */
    _body = omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 4))));
    __omcQ_24in_5Fbranches = _branches;
    __omcQ_24in_5FsimCodeIndices = _simCodeIndices;
    _kind = (modelica_integer)_kind;
    goto _tailrecursive;
    /* TODO: Make sure any eventual dead code below is never generated */
    ;
  }
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _branches;
}
modelica_metatype boxptr_NSimStrongComponent_Block_createIfBody(threadData_t *threadData, modelica_metatype _body, modelica_metatype __omcQ_24in_5Fbranches, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_integer tmp1;
  modelica_metatype _branches = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _branches = omc_NSimStrongComponent_Block_createIfBody(threadData, _body, __omcQ_24in_5Fbranches, __omcQ_24in_5FsimCodeIndices, tmp1, _simcode_map, _equation_map, out_simCodeIndices);
  /* skip box _branches; list<tuple<NFExpression, list<NSimStrongComponent.Block>>> */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  return _branches;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createWhenBody(threadData_t *threadData, modelica_metatype _body, modelica_metatype _source, modelica_metatype _attr, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _conditions = NULL;
  modelica_metatype _when_stmts = NULL;
  modelica_metatype _else_when = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _else_when_block = NULL;
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _conditions has no default value.
  // _when_stmts has no default value.
  // _else_when has no default value.
  // _tmp has no default value.
  // _else_when_block has no default value.
  _index = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))));
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(27));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
  _simCodeIndices = tmpMeta1;

  _conditions = omc_NBEquation_WhenEquationBody_getBodyAttributes(threadData, _body ,&_when_stmts ,&_else_when);

  if(isSome(_else_when))
  {
    _tmp = omc_NSimStrongComponent_Block_createWhenBody(threadData, omc_Util_getOption(threadData, _else_when), _source, _attr, _simCodeIndices ,&_simCodeIndices);

    _else_when_block = mmc_mk_some(_tmp);
  }
  else
  {
    _else_when_block = mmc_mk_none();
  }

  tmpMeta2 = mmc_mk_box8(16, &NSimStrongComponent_Block_WHEN__desc, mmc_mk_integer(_index), mmc_mk_boolean(0 /* false */), _conditions, _when_stmts, _else_when_block, _source, _attr);
  _blck = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _blck;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createImplicitEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _comp = NULL;
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _comp has no default value.
  // _index has no default value.
  tmpMeta1 = mmc_mk_box4(3, &NBStrongComponent_SINGLE__COMPONENT__desc, omc_Pointer_create(threadData, _var), omc_Pointer_create(threadData, _eqn), mmc_mk_integer(3));
  _comp = omc_NBTearing_implicit(threadData, tmpMeta1, omc_UnorderedMap_new(threadData, boxvar_AbsynUtil_pathHash, boxvar_AbsynUtil_pathEqual, ((modelica_integer) 1)), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 23)))), (modelica_integer)_kind ,&_index);

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(27));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[23] = mmc_mk_integer(_index);
  _simCodeIndices = tmpMeta2;

  _blck = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, _comp, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices, NULL);
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _blck;
}
modelica_metatype boxptr_NSimStrongComponent_Block_createImplicitEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_integer tmp1;
  modelica_metatype _blck = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _blck = omc_NSimStrongComponent_Block_createImplicitEquation(threadData, _var, _eqn, __omcQ_24in_5FsimCodeIndices, tmp1, _simcode_map, _equation_map, out_simCodeIndices);
  /* skip box _blck; NSimStrongComponent.Block */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  return _blck;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _eqn, modelica_integer _status, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;
    tmp4_1 = _eqn;
    tmp4_2 = (modelica_integer)_status;
    {
      modelica_metatype _tmp = NULL;
      modelica_metatype _branches = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tmp has no default value.
      // _branches has no default value.
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box6(7, &NSimStrongComponent_Block_SIMPLE__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))));
          _tmp = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta7;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box6(8, &NSimStrongComponent_Block_ARRAY__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))));
          _tmp = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta9;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createAlgorithm(threadData, _eqn, _simCodeIndices, _equation_map ,&_simCodeIndices);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createWhenBody(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 5))), _simCodeIndices ,&_simCodeIndices);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,4) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _branches = omc_NSimStrongComponent_Block_createIfBody(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), tmpMeta10, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices);

          tmpMeta11 = mmc_mk_box5(15, &NSimStrongComponent_Block_IF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), listReverse(_branches), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 5))));
          _tmp = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta12;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          if (2 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box4(13, &NSimStrongComponent_Block_ALGORITHM__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3)))), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))));
          _tmp = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta14;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 6: {
          if (3 != tmp4_2) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createImplicitEquation(threadData, _var, _eqn, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta16 = stringAppend(_OMC_LIT34,omc_NBSolve_statusString(threadData, (modelica_integer)_status));
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT35);
          tmpMeta18 = stringAppend(tmpMeta17,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT13));
          tmpMeta15 = mmc_mk_cons(tmpMeta18, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta15);
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
  _blck = tmpMeta1;

  omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, omc_Pointer_create(threadData, _eqn)), _blck, _equation_map);
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _blck;
}
modelica_metatype boxptr_NSimStrongComponent_Block_createEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _eqn, modelica_metatype _status, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _blck = NULL;
  tmp1 = mmc_unbox_integer(_status);
  tmp2 = mmc_unbox_integer(_kind);
  _blck = omc_NSimStrongComponent_Block_createEquation(threadData, _var, _eqn, tmp1, __omcQ_24in_5FsimCodeIndices, tmp2, _simcode_map, _equation_map, out_simCodeIndices);
  /* skip box _blck; NSimStrongComponent.Block */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  return _blck;
}

static modelica_metatype closure1_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createResidual(threadData_t *threadData, modelica_metatype _slice, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer __omcQ_24in_5Fres_5Fidx, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices, modelica_integer *out_res_idx)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_integer _res_idx;
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  _res_idx = __omcQ_24in_5Fres_5Fidx;
  _eqn = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _slice));
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _eqn;
    tmp4_2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slice), 3)));
    {
      modelica_metatype _tmp = NULL;
      modelica_metatype _names = NULL;
      modelica_metatype _ranges = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tmp has no default value.
      // _names has no default value.
      // _ranges has no default value.
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box6(3, &NSimStrongComponent_Block_RESIDUAL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), mmc_mk_integer(_res_idx), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))));
          _tmp = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta7;

          _res_idx = ((modelica_integer) 1) + _res_idx;
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box6(4, &NSimStrongComponent_Block_ARRAY__RESIDUAL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), mmc_mk_integer(_res_idx), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))));
          _tmp = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta9;

          _res_idx = _res_idx + omc_NBEquation_Equation_size(threadData, omc_NBSlice_getT(threadData, _slice), 0 /* false */);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box3(3, &NBSlice_SLICE__desc, omc_Pointer_create(threadData, omc_NBEquation_IfEquationBody_inline(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), _eqn)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slice), 3))));
          _tmp = omc_NSimStrongComponent_Block_createResidual(threadData, tmpMeta10, _simCodeIndices, _res_idx, _equation_map ,&_simCodeIndices ,&_res_idx);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (listEmpty(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (!listEmpty(tmpMeta13)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _names = omc_NBEquation_Iterator_getFrames(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))) ,&_ranges, NULL);

          tmpMeta14 = mmc_mk_box7(5, &NSimStrongComponent_Block_FOR__RESIDUAL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), mmc_mk_integer(_res_idx), omc_List_zip(threadData, _names, _ranges), omc_Util_getOption(threadData, omc_NBEquation_Equation_getRHS(threadData, _eqn)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))));
          _tmp = tmpMeta14;

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta15;

          _res_idx = _res_idx + omc_NBEquation_Equation_size(threadData, omc_NBSlice_getT(threadData, _slice), 0 /* false */);
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (listEmpty(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmpMeta16);
          tmpMeta18 = MMC_CDR(tmpMeta16);
          if (!listEmpty(tmpMeta18)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _names = omc_NBEquation_Iterator_getFrames(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))) ,&_ranges, NULL);

          tmpMeta19 = mmc_mk_box8(6, &NSimStrongComponent_Block_GENERIC__RESIDUAL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), mmc_mk_integer(_res_idx), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slice), 3))), omc_List_zip(threadData, _names, _ranges), omc_Util_getOption(threadData, omc_NBEquation_Equation_getRHS(threadData, _eqn)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))));
          _tmp = tmpMeta19;

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta20;

          _res_idx = _res_idx + listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slice), 3))));
          tmpMeta1 = _tmp;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          tmpMeta22 = mmc_mk_box1(0, _OMC_LIT13);
          tmpMeta23 = stringAppend(_OMC_LIT36,omc_NBSlice_toString(threadData, _slice, (modelica_fnptr) mmc_mk_box2(0,closure1_NBEquation_Equation_pointerToString,tmpMeta22), ((modelica_integer) 10)));
          tmpMeta21 = mmc_mk_cons(tmpMeta23, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta21);
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
  _blck = tmpMeta1;

  omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, omc_Pointer_create(threadData, _eqn)), _blck, _equation_map);
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  if (out_res_idx) { *out_res_idx = _res_idx; }
  return _blck;
}
modelica_metatype boxptr_NSimStrongComponent_Block_createResidual(threadData_t *threadData, modelica_metatype _slice, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype __omcQ_24in_5Fres_5Fidx, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices, modelica_metatype *out_res_idx)
{
  modelica_integer tmp1;
  modelica_integer _res_idx;
  modelica_metatype _blck = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fres_5Fidx);
  _blck = omc_NSimStrongComponent_Block_createResidual(threadData, _slice, __omcQ_24in_5FsimCodeIndices, tmp1, _equation_map, out_simCodeIndices, &_res_idx);
  /* skip box _blck; NSimStrongComponent.Block */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  if (out_res_idx) { *out_res_idx = mmc_mk_icon(_res_idx); }
  return _blck;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_fromStrongComponent(threadData_t *threadData, modelica_metatype _comp, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices, modelica_integer *out_index)
{
  modelica_metatype _blck = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_integer _index;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blck has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _index has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _comp;
    {
      modelica_metatype _strict = NULL;
      modelica_metatype _system = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _crefs = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _tmp = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _jacobian = NULL;
      modelica_metatype _eqn_ptr = NULL;
      modelica_metatype _eqn = NULL;
      modelica_integer _aliasOf;
      modelica_integer _generic_call_index;
      modelica_integer _residual_index;
      modelica_metatype _single_call = NULL;
      modelica_metatype _single_calls = NULL;
      modelica_metatype tmpMeta5;
      modelica_metatype _entwined_index_map = NULL;
      modelica_metatype _call_order = NULL;
      modelica_metatype tmpMeta6;
      modelica_metatype _ident = NULL;
      modelica_metatype _iters = NULL;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _strict has no default value.
      // _system has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _eqns = tmpMeta3;
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _crefs = tmpMeta4;
      // _tmp has no default value.
      // _var has no default value.
      // _jacobian has no default value.
      // _eqn_ptr has no default value.
      // _eqn has no default value.
      // _aliasOf has no default value.
      // _generic_call_index has no default value.
      _residual_index = ((modelica_integer) 0);
      // _single_call has no default value.
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _single_calls = tmpMeta5;
      // _entwined_index_map has no default value.
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _call_order = tmpMeta6;
      // _ident has no default value.
      // _iters has no default value.
      tmp8 = 0;
      for (; tmp8 < 11; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,3) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createEquation(threadData, omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))), omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices);
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp7_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,3) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          _tmp = omc_NSimStrongComponent_Block_createEquation(threadData, _OMC_LIT49, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices);
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp7_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,2,4) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))))) goto tmp7_end;
          _tmp = omc_NSimStrongComponent_Block_createAlgorithm(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))))), _simCodeIndices, _equation_map ,&_simCodeIndices);
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp7_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,2,4) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          _eqn = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))));

          _tmp = omc_NSimStrongComponent_Block_createEquation(threadData, omc_NFVariable_fromCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2)))), _eqn, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5)))), _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices);
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp7_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,3,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBEquation_Equation_isForEquation(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))))) goto tmp7_end;
          _eqn_ptr = omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))));

          _eqn = omc_Pointer_access(threadData, _eqn_ptr);

          tmpMeta10 = mmc_mk_box4(3, &NSimCode_Identifier_IDENTIFIER__desc, _eqn_ptr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), mmc_mk_boolean(1 /* true */));
          _ident = tmpMeta10;

          _iters = omc_NSimGenericCall_SimIterator_fromIterator(threadData, omc_NBEquation_Equation_getForIterator(threadData, _eqn));

          _generic_call_index = mmc_unbox_integer(omc_UnorderedMap_tryAdd(threadData, _ident, mmc_mk_integer(omc_UnorderedMap_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 26))))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 26)))));

          tmpMeta11 = mmc_mk_box6(9, &NSimStrongComponent_Block_RESIZABLE__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), mmc_mk_integer(_generic_call_index), _iters, omc_NBEquation_Equation_getSource(threadData, _eqn), omc_NBEquation_Equation_getAttributes(threadData, _eqn));
          _tmp = tmpMeta11;

          omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, _eqn_ptr), _tmp, _equation_map);

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta12;
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp7_done;
        }
        case 5: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,4,3) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          _eqn_ptr = omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))));

          _eqn = omc_Pointer_access(threadData, _eqn_ptr);

          tmpMeta13 = mmc_mk_box4(3, &NSimCode_Identifier_IDENTIFIER__desc, _eqn_ptr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), mmc_mk_boolean(0 /* false */));
          _ident = tmpMeta13;

          _generic_call_index = mmc_unbox_integer(omc_UnorderedMap_tryAdd(threadData, _ident, mmc_mk_integer(omc_UnorderedMap_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 26))))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 26)))));

          tmpMeta14 = mmc_mk_box6(10, &NSimStrongComponent_Block_GENERIC__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), mmc_mk_integer(_generic_call_index), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))), 3))), omc_NBEquation_Equation_getSource(threadData, _eqn), omc_NBEquation_Equation_getAttributes(threadData, _eqn));
          _tmp = tmpMeta14;

          omc_UnorderedMap_add(threadData, omc_NBEquation_Equation_getEqnName(threadData, _eqn_ptr), _tmp, _equation_map);

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta15;
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp7_done;
        }
        case 6: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,5,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          _entwined_index_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

          {
            modelica_metatype _slice;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _slice = MMC_CAR(tmpMeta16);
              _single_call = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, _slice, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices ,NULL);

              omc_UnorderedMap_add(threadData, omc_NSimStrongComponent_Block_getGenericEquationName(threadData, _slice), mmc_mk_integer(omc_NSimStrongComponent_Block_getGenericAssignIndex(threadData, _single_call)), _entwined_index_map);

              tmpMeta17 = mmc_mk_cons(_single_call, _single_calls);
              _single_calls = tmpMeta17;
            }
          }

          {
            modelica_metatype _tpl;
            for (tmpMeta19 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))); !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
            {
              _tpl = MMC_CAR(tmpMeta19);
              /* Pattern-matching assignment */
              tmpMeta20 = _tpl;
              tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
              _eqn_ptr = tmpMeta21;

              tmpMeta22 = mmc_mk_cons(omc_UnorderedMap_getSafe(threadData, omc_NBEquation_Equation_getEqnName(threadData, _eqn_ptr), _entwined_index_map, _OMC_LIT51), _call_order);
              _call_order = tmpMeta22;
            }
          }

          tmpMeta24 = mmc_mk_box6(11, &NSimStrongComponent_Block_ENTWINED__ASSIGN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), _call_order, _single_calls, _OMC_LIT53, omc_NBEquation_default(threadData, 1, 0 /* false */, mmc_mk_none(), mmc_mk_none()));
          _tmp = tmpMeta24;

          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta25;
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp7_done;
        }
        case 7: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_integer tmp29;
          modelica_integer tmp30;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,6,7) == 0) goto tmp7_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
          
          _strict = tmpMeta26;
          /* Pattern matching succeeded */
          tmp28 = ((modelica_integer) 1); tmp29 = 1; tmp30 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 4))));
          if(!(((tmp29 > 0) && (tmp28 > tmp30)) || ((tmp29 < 0) && (tmp28 < tmp30))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp28, tmp30); _i += tmp29)
            {
              _tmp = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 4))),_i) /* DAE.ASUB */, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices ,NULL);

              tmpMeta27 = mmc_mk_cons(_tmp, _eqns);
              _eqns = tmpMeta27;
            }
          }

          {
            modelica_metatype _slice;
            for (tmpMeta31 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3))); !listEmpty(tmpMeta31); tmpMeta31=MMC_CDR(tmpMeta31))
            {
              _slice = MMC_CAR(tmpMeta31);
              _tmp = omc_NSimStrongComponent_Block_createResidual(threadData, _slice, _simCodeIndices, _residual_index, _equation_map ,&_simCodeIndices ,&_residual_index);

              tmpMeta32 = mmc_mk_cons(_tmp, _eqns);
              _eqns = tmpMeta32;
            }
          }

          {
            modelica_metatype _slice;
            for (tmpMeta34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 2))); !listEmpty(tmpMeta34); tmpMeta34=MMC_CDR(tmpMeta34))
            {
              _slice = MMC_CAR(tmpMeta34);
              _var = omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _slice));

              if((omc_NFVariable_size(threadData, _var, 0 /* false */) > ((modelica_integer) 1)))
              {
                {
                  modelica_metatype _scal_var;
                  for (tmpMeta35 = omc_NFScalarize_scalarizeBackendVariable(threadData, _var, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slice), 3)))); !listEmpty(tmpMeta35); tmpMeta35=MMC_CDR(tmpMeta35))
                  {
                    _scal_var = MMC_CAR(tmpMeta35);
                    tmpMeta36 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_scal_var), 2))), _crefs);
                    _crefs = tmpMeta36;
                  }
                }
              }
              else
              {
                tmpMeta38 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _crefs);
                _crefs = tmpMeta38;
              }
            }
          }

          _jacobian = mmc_mk_none();

          tmpMeta40 = mmc_mk_box10(3, &NSimStrongComponent_NonlinearSystem_NONLINEAR__SYSTEM__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), listReverse(_eqns), listReverse(_crefs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 20))), mmc_mk_integer(listLength(_crefs)), omc_Pointer_create(threadData, _jacobian), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 6))), mmc_mk_boolean(1 /* true */));
          _system = tmpMeta40;

          tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[20] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 20)))));
          _simCodeIndices = tmpMeta41;

          tmpMeta42 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta42), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta42))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta42;
          tmpMeta43 = mmc_mk_box3(18, &NSimStrongComponent_Block_NONLINEAR__desc, _system, mmc_mk_none());
          tmpMeta[0+0] = tmpMeta43;
          tmp1_c1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_system), 2))));
          goto tmp7_done;
        }
        case 8: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,7,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          _aliasOf = mmc_unbox_integer(omc_UnorderedMap_getOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 25))), mmc_mk_integer(((modelica_integer) -1))));

          tmpMeta44 = mmc_mk_box5(12, &NSimStrongComponent_Block_ALIAS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), mmc_mk_integer(_aliasOf), mmc_mk_boolean((omc_NBStrongComponent_isDiscrete(threadData, _comp) && (!omc_NBStrongComponent_isAlgebraicLoop(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))))))));
          _tmp = tmpMeta44;

          tmpMeta45 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta45), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta45))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
          _simCodeIndices = tmpMeta45;
          tmpMeta[0+0] = _tmp;
          tmp1_c1 = omc_NSimStrongComponent_Block_getIndex(threadData, _tmp);
          goto tmp7_done;
        }
        case 9: {
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,5,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta47 = stringAppend(_OMC_LIT54,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta46 = mmc_mk_cons(tmpMeta47, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta46);
          goto goto_2;
          goto tmp7_done;
        }
        case 10: {
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          
          /* Pattern matching succeeded */
          tmpMeta49 = stringAppend(_OMC_LIT55,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta48 = mmc_mk_cons(tmpMeta49, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta48);
          goto goto_2;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _blck = tmpMeta[0+0];
  _index = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  if (out_index) { *out_index = _index; }
  return _blck;
}
modelica_metatype boxptr_NSimStrongComponent_Block_fromStrongComponent(threadData_t *threadData, modelica_metatype _comp, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices, modelica_metatype *out_index)
{
  modelica_integer tmp1;
  modelica_integer _index;
  modelica_metatype _blck = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _blck = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, _comp, __omcQ_24in_5FsimCodeIndices, tmp1, _simcode_map, _equation_map, out_simCodeIndices, &_index);
  /* skip box _blck; NSimStrongComponent.Block */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  return _blck;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_fromPartition(threadData_t *threadData, modelica_metatype _partition, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blcks has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 9)));
    {
      modelica_metatype _comps = NULL;
      modelica_integer _kind;
      modelica_metatype _tmp = NULL;
      modelica_metatype _result = NULL;
      modelica_metatype tmpMeta3;
      modelica_integer _index;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _comps has no default value.
      // _kind has no default value.
      // _tmp has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _result = tmpMeta3;
      // _index has no default value.
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_integer tmp11;
          modelica_integer tmp12;
          if (optionNone(tmp5_1)) goto tmp4_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
          _comps = tmpMeta7;
          /* Pattern matching succeeded */
          _kind = omc_NBPartition_Partition_getKind(threadData, _partition);

          tmp10 = arrayLength(_comps); tmp11 = ((modelica_integer) -1); tmp12 = ((modelica_integer) 1);
          if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
          {
            modelica_integer _i;
            for(_i = arrayLength(_comps); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
            {
              _tmp = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, arrayGet(_comps,_i) /* DAE.ASUB */, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map ,&_simCodeIndices ,&_index);

              if((!omc_NBStrongComponent_isAlias(threadData, arrayGet(_comps,_i) /* DAE.ASUB */)))
              {
                tmpMeta8 = mmc_mk_box4(3, &NBStrongComponent_AliasInfo_ALIAS__INFO__desc, mmc_mk_integer((modelica_integer)_kind), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partition), 2))), mmc_mk_integer(_i));
                omc_UnorderedMap_add(threadData, tmpMeta8, mmc_mk_integer(_index), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 25))));
              }

              tmpMeta9 = mmc_mk_cons(_tmp, _result);
              _result = tmpMeta9;
            }
          }
          tmpMeta1 = _result;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta14 = stringAppend(_OMC_LIT56,omc_NBPartition_Partition_toString(threadData, _partition, ((modelica_integer) 0)));
          tmpMeta13 = mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta13);
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
  _blcks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _blcks;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createNoReturnBlocks(threadData_t *threadData, modelica_metatype _equations, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_integer _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _eqn has no default value.
  // _tmp has no default value.
  tmp12 = ((modelica_integer) 1); tmp13 = 1; tmp14 = omc_ExpandableArray_getLastUsedIndex(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 3))));
  if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp12, tmp14); _i += tmp13)
    {
      if(omc_ExpandableArray_occupied(threadData, _i, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 3)))))
      {
        _eqn = omc_Pointer_access(threadData, omc_ExpandableArray_get(threadData, _i, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 3)))));

        
        
        { /* match expression */
          modelica_metatype tmp5_1;
          tmp5_1 = _eqn;
          {
            modelica_metatype _cref = NULL;
            volatile mmc_switch_type tmp5;
            int tmp6;
            // _cref has no default value.
            tmp5 = 0;
            for (; tmp5 < 5; tmp5++) {
              switch (MMC_SWITCH_CAST(tmp5)) {
              case 0: {
                modelica_metatype tmpMeta7;
                modelica_metatype tmpMeta8;
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,5) == 0) goto tmp4_end;
                tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 3));
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto tmp4_end;
                tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
                
                _cref = tmpMeta8;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NSimStrongComponent_Block_createEquation(threadData, omc_NBVariable_getVar(threadData, _cref, _OMC_LIT57), _eqn, 2, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map, &tmpMeta[0+1]);
                goto tmp4_done;
              }
              case 1: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,6,4) == 0) goto tmp4_end;
                
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NSimStrongComponent_Block_createEquation(threadData, _OMC_LIT49, _eqn, 2, _simCodeIndices, (modelica_integer)_kind, _simcode_map, _equation_map, &tmpMeta[0+1]);
                goto tmp4_done;
              }
              case 2: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,3,5) == 0) goto tmp4_end;
                
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NSimStrongComponent_Block_createAlgorithm(threadData, _eqn, _simCodeIndices, _equation_map, &tmpMeta[0+1]);
                goto tmp4_done;
              }
              case 3: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,5,5) == 0) goto tmp4_end;
                
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NSimStrongComponent_Block_createAlgorithm(threadData, _eqn, _simCodeIndices, _equation_map, &tmpMeta[0+1]);
                goto tmp4_done;
              }
              case 4: {
                modelica_metatype tmpMeta9;
                modelica_metatype tmpMeta10;
                
                /* Pattern matching succeeded */
                tmpMeta10 = stringAppend(_OMC_LIT58,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT13));
                tmpMeta9 = mmc_mk_cons(tmpMeta10, MMC_REFSTRUCTLIT(mmc_nil));
                omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta9);
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
        _tmp = tmpMeta[0+0];
        _simCodeIndices = tmpMeta[0+1];

        tmpMeta11 = mmc_mk_cons(_tmp, _blcks);
        _blcks = tmpMeta11;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _blcks;
}
modelica_metatype boxptr_NSimStrongComponent_Block_createNoReturnBlocks(threadData_t *threadData, modelica_metatype _equations, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _kind, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_integer tmp1;
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_kind);
  _blcks = omc_NSimStrongComponent_Block_createNoReturnBlocks(threadData, _equations, __omcQ_24in_5FsimCodeIndices, tmp1, _simcode_map, _equation_map, out_simCodeIndices);
  /* skip box _blcks; list<NSimStrongComponent.Block> */
  /* skip box _simCodeIndices; NSimCode.SimCodeIndices */
  return _blcks;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createClockedBlocks(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype _info, modelica_metatype *out_eventClocks, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _baseParts = NULL;
  modelica_metatype _eventClocks = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _clock_collector = NULL;
  modelica_metatype _clock_dependencies = NULL;
  modelica_metatype _blcks = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _clock = NULL;
  modelica_metatype _subClock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_boolean _holdEvents;
  modelica_metatype _baseClock_opt = NULL;
  modelica_metatype _subPart = NULL;
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
  // _baseParts has no default value.
  // _eventClocks has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  _clock_collector = omc_UnorderedMap_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 1));
  // _clock_dependencies has no default value.
  // _blcks has no default value.
  // _vars has no default value.
  // _clock has no default value.
  // _subClock has no default value.
  // _baseClock has no default value.
  // _holdEvents has no default value.
  // _baseClock_opt has no default value.
  // _subPart has no default value.
  {
    modelica_metatype _c;
    for (tmpMeta1 = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2)))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _c = MMC_CAR(tmpMeta1);
      tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
      omc_UnorderedMap_add(threadData, _c, tmpMeta2, _clock_collector);
    }
  }

  {
    modelica_metatype _partition;
    for (tmpMeta4 = listReverse(_partitions); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _partition = MMC_CAR(tmpMeta4);
      _blcks = omc_NSimStrongComponent_Block_fromPartition(threadData, _partition, _simCodeIndices, _simcode_map, _equation_map ,&_simCodeIndices);

      _vars = omc_NSimVar_SimVars_getPartitionVars(threadData, _partition, _simcode_map);

      _clock = omc_NBPartition_Partition_getClocks(threadData, _partition ,&_baseClock_opt ,&_holdEvents);

      if(isSome(_baseClock_opt))
      {
        /* Pattern-matching assignment */
        tmpMeta5 = _baseClock_opt;
        if (optionNone(tmpMeta5)) MMC_THROW_INTERNAL();
        tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
        _baseClock = tmpMeta6;

        _subClock = _clock;
      }
      else
      {
        _baseClock = _clock;

        _subClock = _OMC_LIT61;
      }

      _subPart = omc_NSimPartition_createSubPartition(threadData, _subClock, _blcks, _vars, _holdEvents);

      tmpMeta7 = mmc_mk_cons(_subPart, omc_UnorderedMap_getSafe(threadData, _baseClock, _clock_collector, _OMC_LIT62));
      omc_UnorderedMap_add(threadData, _baseClock, tmpMeta7, _clock_collector);
    }
  }

  _baseParts = omc_NSimPartition_createBasePartitions(threadData, _clock_collector, _simCodeIndices ,&_eventClocks ,&_simCodeIndices);
  _return: OMC_LABEL_UNUSED
  if (out_eventClocks) { *out_eventClocks = _eventClocks; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _baseParts;
}

static modelica_metatype closure2_NSimVar_SimVar_createFromResidualComponent(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_comp)
{
  modelica_metatype acc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype indices_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype varType = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NSimVar_SimVar_createFromResidualComponent(thData, $in_comp, acc, indices_ptr, varType);
}
DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createDAEModeBlocks(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_vars, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _indices_ptr = NULL;
  modelica_metatype _vars_ptr = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _tmp = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _vars = tmpMeta2;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _indices_ptr has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _vars_ptr = omc_Pointer_create(threadData, tmpMeta3);
  // _tmp has no default value.
  {
    modelica_metatype _partition;
    for (tmpMeta4 = listReverse(_partitions); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _partition = MMC_CAR(tmpMeta4);
      _indices_ptr = omc_Pointer_create(threadData, _simCodeIndices);

      tmpMeta5 = mmc_mk_box3(0, _vars_ptr, _indices_ptr, mmc_mk_integer(4));
      omc_NBPartition_Partition_mapStrongComponents(threadData, _partition, (modelica_fnptr) mmc_mk_box2(0,closure2_NSimVar_SimVar_createFromResidualComponent,tmpMeta5));

      _tmp = omc_NSimStrongComponent_Block_fromPartition(threadData, _partition, omc_Pointer_access(threadData, _indices_ptr), _simcode_map, _equation_map ,&_simCodeIndices);

      tmpMeta6 = mmc_mk_cons(_tmp, _blcks);
      _blcks = tmpMeta6;
    }
  }

  _vars = listReverse(omc_Pointer_access(threadData, _vars_ptr));
  _return: OMC_LABEL_UNUSED
  if (out_vars) { *out_vars = _vars; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _blcks;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createInitialBlocks(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _tmp_lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blcks has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _tmp has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmp_lst = tmpMeta1;
  {
    modelica_metatype _partition;
    for (tmpMeta2 = _partitions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _partition = MMC_CAR(tmpMeta2);
      _tmp = omc_NSimStrongComponent_Block_fromPartition(threadData, _partition, _simCodeIndices, _simcode_map, _equation_map ,&_simCodeIndices);

      tmpMeta3 = mmc_mk_cons(_tmp, _tmp_lst);
      _tmp_lst = tmpMeta3;
    }
  }

  _blcks = omc_List_flatten(threadData, _tmp_lst);
  _return: OMC_LABEL_UNUSED
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _blcks;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createDiscreteBlocks(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5Fblcks, modelica_metatype __omcQ_24in_5Fall_5Fblcks, modelica_metatype __omcQ_24in_5Fevent_5Fdependencies, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_all_blcks, modelica_metatype *out_event_dependencies, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype _all_blcks = NULL;
  modelica_metatype _event_dependencies = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _new_blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _blcks = __omcQ_24in_5Fblcks;
  _all_blcks = __omcQ_24in_5Fall_5Fblcks;
  _event_dependencies = __omcQ_24in_5Fevent_5Fdependencies;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _tmp has no default value.
  // _new_blcks has no default value.
  {
    modelica_metatype _partition;
    for (tmpMeta1 = _partitions; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _partition = MMC_CAR(tmpMeta1);
      _tmp = omc_NSimStrongComponent_Block_fromPartition(threadData, _partition, _simCodeIndices, _simcode_map, _equation_map ,&_simCodeIndices);

      _all_blcks = listAppend(_tmp, _all_blcks);

      tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _tmp = omc_NSimStrongComponent_Block_filterWhen(threadData, listReverse(_tmp), tmpMeta2, tmpMeta3, _simCodeIndices ,&_new_blcks ,&_simCodeIndices);

      _all_blcks = listAppend(_new_blcks, _all_blcks);

      tmpMeta4 = mmc_mk_cons(_tmp, _blcks);
      _blcks = tmpMeta4;

      {
        modelica_metatype __omcQ_24tmpVar23;
        modelica_metatype* tmp6;
        modelica_metatype tmpMeta7;
        modelica_metatype __omcQ_24tmpVar22;
        modelica_integer tmp8;
        modelica_metatype _blck_loopVar = 0;
        modelica_metatype _blck;
        _blck_loopVar = _tmp;
        tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar23 = tmpMeta7; /* defaultValue */
        tmp6 = &__omcQ_24tmpVar23;
        while(1) {
          tmp8 = 1;
          while (!listEmpty(_blck_loopVar)) {
            _blck = MMC_CAR(_blck_loopVar);
            _blck_loopVar = MMC_CDR(_blck_loopVar);
            if ((!omc_NSimStrongComponent_Block_isDiscrete(threadData, _blck))) {
              tmp8--;
              break;
            }
          }
          if (tmp8 == 0) {
            __omcQ_24tmpVar22 = _blck;
            *tmp6 = mmc_mk_cons(__omcQ_24tmpVar22,0);
            tmp6 = &MMC_CDR(*tmp6);
          } else if (tmp8 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp6 = mmc_mk_nil();
        tmpMeta5 = __omcQ_24tmpVar23;
      }
      _tmp = tmpMeta5;

      _event_dependencies = listAppend(_tmp, _event_dependencies);
    }
  }

  _blcks = listReverse(_blcks);
  _return: OMC_LABEL_UNUSED
  if (out_all_blcks) { *out_all_blcks = _all_blcks; }
  if (out_event_dependencies) { *out_event_dependencies = _event_dependencies; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _blcks;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_createBlocks(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5Fall_5Fblcks, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype _equation_map, modelica_metatype *out_all_blcks, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _all_blcks = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  _all_blcks = __omcQ_24in_5Fall_5Fblcks;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _tmp has no default value.
  {
    modelica_metatype _partition;
    for (tmpMeta2 = _partitions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _partition = MMC_CAR(tmpMeta2);
      _tmp = omc_NSimStrongComponent_Block_fromPartition(threadData, _partition, _simCodeIndices, _simcode_map, _equation_map ,&_simCodeIndices);

      tmpMeta3 = mmc_mk_cons(_tmp, _blcks);
      _blcks = tmpMeta3;

      _all_blcks = listAppend(_tmp, _all_blcks);
    }
  }

  _blcks = listReverse(_blcks);
  _return: OMC_LABEL_UNUSED
  if (out_all_blcks) { *out_all_blcks = _all_blcks; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _blcks;
}

DLLDirection
modelica_string omc_NSimStrongComponent_Block_listToString(threadData_t *threadData, modelica_metatype _blcks, modelica_string __omcQ_24in_5Fstr, modelica_string _header)
{
  modelica_string _str = NULL;
  modelica_string _indent = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  _indent = _str;
  _str = ((!stringEqual(_header, _OMC_LIT13))?omc_StringUtil_headline__3(threadData, _header):_OMC_LIT13);

  {
    modelica_metatype _blck;
    for (tmpMeta1 = _blcks; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _blck = MMC_CAR(tmpMeta1);
      tmpMeta2 = stringAppend(_str,omc_NSimStrongComponent_Block_toString(threadData, _blck, _indent));
      _str = tmpMeta2;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fblck, modelica_fnptr _func)
{
  modelica_metatype _blck = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _blck = __omcQ_24in_5Fblck;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))), ((modelica_fnptr) _func));
          _blck = tmpMeta5;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_blck), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))), ((modelica_fnptr) _func));
          _blck = tmpMeta6;
          tmpMeta1 = _blck;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _blck;
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
  _blck = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _blck;
}

DLLDirection
modelica_metatype omc_NSimStrongComponent_Block_filterWhen(threadData_t *threadData, modelica_metatype _blcks, modelica_metatype __omcQ_24in_5Fout_5Fblcks, modelica_metatype __omcQ_24in_5Fnew_5Fblcks, modelica_metatype __omcQ_24in_5Findices, modelica_metatype *out_new_blcks, modelica_metatype *out_indices)
{
  modelica_metatype _out_blcks = NULL;
  modelica_metatype _new_blcks = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype _blck = NULL;
  modelica_metatype _new_blck = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _stmts = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _out_blcks = __omcQ_24in_5Fout_5Fblcks;
  _new_blcks = __omcQ_24in_5Fnew_5Fblcks;
  _indices = __omcQ_24in_5Findices;
  // _blck has no default value.
  // _new_blck has no default value.
  // _rest has no default value.
  // _stmts has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blcks;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,13,7) == 0) goto tmp3_end;
          
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _blcks = _rest;
          __omcQ_24in_5Fout_5Fblcks = _out_blcks;
          __omcQ_24in_5Fnew_5Fblcks = _new_blcks;
          __omcQ_24in_5Findices = _indices;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,10,3) == 0) goto tmp3_end;
          
          _blck = tmpMeta8;
          _rest = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _stmts = omc_NFStatement_filterDiscrete(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), tmpMeta10);

          if(listEmpty(_stmts))
          {
            _out_blcks = omc_NSimStrongComponent_Block_filterWhen(threadData, _rest, _out_blcks, _new_blcks, _indices ,&_new_blcks ,&_indices);
          }
          else
          {
            if((omc_List_compareLength(threadData, _stmts, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3)))) != ((modelica_integer) 0)))
            {
              tmpMeta11 = mmc_mk_box4(13, &NSimStrongComponent_Block_ALGORITHM__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18))), _stmts, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))));
              _new_blck = tmpMeta11;

              tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(27));
              memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 18)))));
              _indices = tmpMeta12;

              tmpMeta13 = mmc_mk_cons(_new_blck, _out_blcks);
              tmpMeta14 = mmc_mk_cons(_new_blck, _new_blcks);
              _out_blcks = omc_NSimStrongComponent_Block_filterWhen(threadData, _rest, tmpMeta13, tmpMeta14, _indices ,&_new_blcks ,&_indices);
            }
            else
            {
              tmpMeta15 = mmc_mk_cons(_blck, _out_blcks);
              _out_blcks = omc_NSimStrongComponent_Block_filterWhen(threadData, _rest, tmpMeta15, _new_blcks, _indices ,&_new_blcks ,&_indices);
            }
          }
          tmpMeta[0+0] = _out_blcks;
          tmpMeta[0+1] = _new_blcks;
          tmpMeta[0+2] = _indices;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          _blck = tmpMeta16;
          _rest = tmpMeta17;
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_cons(_blck, _out_blcks);
          /* Tail recursive call */
          _blcks = _rest;
          __omcQ_24in_5Fout_5Fblcks = tmpMeta18;
          __omcQ_24in_5Fnew_5Fblcks = _new_blcks;
          __omcQ_24in_5Findices = _indices;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _out_blcks;
          tmpMeta[0+1] = _new_blcks;
          tmpMeta[0+2] = _indices;
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
  _out_blcks = tmpMeta[0+0];
  _new_blcks = tmpMeta[0+1];
  _indices = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_new_blcks) { *out_new_blcks = _new_blcks; }
  if (out_indices) { *out_indices = _indices; }
  return _out_blcks;
}

DLLDirection
modelica_boolean omc_NSimStrongComponent_Block_isDiscrete(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      modelica_metatype _attr = NULL;
      int tmp4;
      // _attr has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _attr = tmpMeta5;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _attr = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          _attr = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _attr = tmpMeta8;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _attr = tmpMeta9;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _attr = tmpMeta10;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,5) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _attr = tmpMeta11;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,5) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _attr = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))));
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _attr = tmpMeta13;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,5) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _attr = tmpMeta14;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,4) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _attr = tmpMeta15;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,7) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          _attr = tmpMeta16;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)))) == 2);
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
modelica_metatype boxptr_NSimStrongComponent_Block_isDiscrete(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NSimStrongComponent_Block_isDiscrete(threadData, _blck);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NSimStrongComponent_Block_getIndex(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_integer _index;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2)))), 2))));
          goto tmp3_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2)))), 2))));
          goto tmp3_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT63,omc_NSimStrongComponent_Block_toString(threadData, _blck, _OMC_LIT13));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta5);
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
  _index = tmp1;
  _return: OMC_LABEL_UNUSED
  return _index;
}
modelica_metatype boxptr_NSimStrongComponent_Block_getIndex(threadData_t *threadData, modelica_metatype _blck)
{
  modelica_integer _index;
  modelica_metatype out_index;
  _index = omc_NSimStrongComponent_Block_getIndex(threadData, _blck);
  out_index = mmc_mk_icon(_index);
  return out_index;
}

static modelica_metatype closure3_NSimStrongComponent_Block_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype blck)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NSimStrongComponent_Block_toString(thData, blck, $in_str);
}
DLLDirection
modelica_string omc_NSimStrongComponent_Block_ifTplStr(threadData_t *threadData, modelica_metatype _tpl, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  modelica_metatype _condition = NULL;
  modelica_metatype _blcks = NULL;
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
  _str = __omcQ_24in_5Fstr;
  // _condition has no default value.
  // _blcks has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _condition = tmpMeta2;
  _blcks = tmpMeta3;

  tmpMeta4 = stringAppend(_OMC_LIT64,omc_NFExpression_toString(threadData, _condition));
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT65);
  tmpMeta7 = stringAppend(_str,_OMC_LIT66);
  tmpMeta6 = mmc_mk_box1(0, tmpMeta7);
  tmpMeta8 = stringAppend(tmpMeta5,omc_List_toString(threadData, _blcks, (modelica_fnptr) mmc_mk_box2(0,closure3_NSimStrongComponent_Block_toString,tmpMeta6), _OMC_LIT13, _OMC_LIT13, _OMC_LIT12, _OMC_LIT13, 1 /* true */, ((modelica_integer) 0)));
  _str = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NSimStrongComponent_Block_forTplStr(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_string _str = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _range = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _name has no default value.
  // _range has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _name = tmpMeta2;
  _range = tmpMeta3;

  tmpMeta4 = stringAppend(omc_NFComponentRef_toString(threadData, _name),_OMC_LIT67);
  tmpMeta5 = stringAppend(tmpMeta4,omc_NFExpression_toString(threadData, _range));
  _str = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _str;
}

static modelica_metatype closure4_NSimStrongComponent_Block_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype blck)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NSimStrongComponent_Block_toString(thData, blck, $in_str);
}static modelica_metatype closure5_NSimStrongComponent_Block_ifTplStr(threadData_t *thData, modelica_metatype closure, modelica_metatype tpl)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NSimStrongComponent_Block_ifTplStr(thData, tpl, $in_str);
}
DLLDirection
modelica_string omc_NSimStrongComponent_Block_toString(threadData_t *threadData, modelica_metatype _blck, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_str,_OMC_LIT68);
          tmpMeta6 = stringAppend(tmpMeta5,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT69);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT12);
          tmp1 = tmpMeta9;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_str,_OMC_LIT68);
          tmpMeta11 = stringAppend(tmpMeta10,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT69);
          tmpMeta13 = stringAppend(tmpMeta12,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT12);
          tmp1 = tmpMeta14;
          goto tmp3_done;
        }
        case 5: {
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
          
          /* Pattern matching succeeded */
          tmpMeta15 = stringAppend(_str,_OMC_LIT68);
          tmpMeta16 = stringAppend(tmpMeta15,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT70);
          tmpMeta18 = stringAppend(tmpMeta17,_str);
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT71);
          tmpMeta20 = stringAppend(tmpMeta19,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))), boxvar_NSimStrongComponent_Block_forTplStr, _OMC_LIT13, _OMC_LIT9, _OMC_LIT10, _OMC_LIT11, 1 /* true */, ((modelica_integer) 0)));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT72);
          tmpMeta22 = stringAppend(tmpMeta21,_str);
          tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT73);
          tmpMeta24 = stringAppend(tmpMeta23,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5)))));
          tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT74);
          tmpMeta26 = stringAppend(tmpMeta25,_str);
          tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT75);
          tmp1 = tmpMeta27;
          goto tmp3_done;
        }
        case 6: {
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
          
          /* Pattern matching succeeded */
          tmpMeta28 = stringAppend(_str,_OMC_LIT68);
          tmpMeta29 = stringAppend(tmpMeta28,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta30 = stringAppend(tmpMeta29,_OMC_LIT76);
          tmpMeta31 = stringAppend(tmpMeta30,_str);
          tmpMeta32 = stringAppend(tmpMeta31,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))), boxvar_intString, _OMC_LIT77, _OMC_LIT9, _OMC_LIT10, _OMC_LIT11, 1 /* true */, ((modelica_integer) 10)));
          tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT12);
          tmpMeta34 = stringAppend(tmpMeta33,_str);
          tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT71);
          tmpMeta36 = stringAppend(tmpMeta35,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))), boxvar_NSimStrongComponent_Block_forTplStr, _OMC_LIT13, _OMC_LIT9, _OMC_LIT10, _OMC_LIT11, 1 /* true */, ((modelica_integer) 0)));
          tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT72);
          tmpMeta38 = stringAppend(tmpMeta37,_str);
          tmpMeta39 = stringAppend(tmpMeta38,_OMC_LIT73);
          tmpMeta40 = stringAppend(tmpMeta39,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6)))));
          tmpMeta41 = stringAppend(tmpMeta40,_OMC_LIT74);
          tmpMeta42 = stringAppend(tmpMeta41,_str);
          tmpMeta43 = stringAppend(tmpMeta42,_OMC_LIT75);
          tmp1 = tmpMeta43;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          
          /* Pattern matching succeeded */
          tmpMeta44 = stringAppend(_str,_OMC_LIT68);
          tmpMeta45 = stringAppend(tmpMeta44,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta46 = stringAppend(tmpMeta45,_OMC_LIT78);
          tmpMeta47 = stringAppend(tmpMeta46,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3)))));
          tmpMeta48 = stringAppend(tmpMeta47,_OMC_LIT79);
          tmpMeta49 = stringAppend(tmpMeta48,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))));
          tmpMeta50 = stringAppend(tmpMeta49,_OMC_LIT12);
          tmp1 = tmpMeta50;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          
          /* Pattern matching succeeded */
          tmpMeta51 = stringAppend(_str,_OMC_LIT68);
          tmpMeta52 = stringAppend(tmpMeta51,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta53 = stringAppend(tmpMeta52,_OMC_LIT78);
          tmpMeta54 = stringAppend(tmpMeta53,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3)))));
          tmpMeta55 = stringAppend(tmpMeta54,_OMC_LIT79);
          tmpMeta56 = stringAppend(tmpMeta55,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4)))));
          tmpMeta57 = stringAppend(tmpMeta56,_OMC_LIT12);
          tmp1 = tmpMeta57;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          
          /* Pattern matching succeeded */
          tmpMeta58 = stringAppend(_str,_OMC_LIT68);
          tmpMeta59 = stringAppend(tmpMeta58,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta60 = stringAppend(tmpMeta59,_OMC_LIT78);
          tmpMeta61 = stringAppend(tmpMeta60,_OMC_LIT80);
          tmpMeta62 = stringAppend(tmpMeta61,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))))));
          tmpMeta63 = stringAppend(tmpMeta62,_OMC_LIT81);
          tmp1 = tmpMeta63;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          
          /* Pattern matching succeeded */
          tmpMeta64 = stringAppend(_str,_OMC_LIT68);
          tmpMeta65 = stringAppend(tmpMeta64,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta66 = stringAppend(tmpMeta65,_OMC_LIT78);
          tmpMeta67 = stringAppend(tmpMeta66,_OMC_LIT82);
          tmpMeta68 = stringAppend(tmpMeta67,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))))));
          tmpMeta69 = stringAppend(tmpMeta68,_OMC_LIT83);
          tmpMeta70 = stringAppend(tmpMeta69,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))), boxvar_intString, _OMC_LIT13, _OMC_LIT9, _OMC_LIT10, _OMC_LIT11, 1 /* true */, ((modelica_integer) 10)));
          tmpMeta71 = stringAppend(tmpMeta70,_OMC_LIT12);
          tmp1 = tmpMeta71;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          
          /* Pattern matching succeeded */
          tmpMeta72 = mmc_mk_box1(0, _OMC_LIT13);
          tmpMeta73 = stringAppend(_OMC_LIT84,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta74 = stringAppend(tmpMeta73,_OMC_LIT85);
          tmpMeta75 = stringAppend(_str,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))), (modelica_fnptr) mmc_mk_box2(0,closure4_NSimStrongComponent_Block_toString,tmpMeta72), tmpMeta74, _OMC_LIT86, _OMC_LIT87, _OMC_LIT13, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta75;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          
          /* Pattern matching succeeded */
          tmpMeta76 = stringAppend(_str,_OMC_LIT68);
          tmpMeta77 = stringAppend(tmpMeta76,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta78 = stringAppend(tmpMeta77,_OMC_LIT88);
          tmpMeta79 = stringAppend(tmpMeta78,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))))));
          tmpMeta80 = stringAppend(tmpMeta79,_OMC_LIT12);
          tmp1 = tmpMeta80;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          
          /* Pattern matching succeeded */
          tmpMeta81 = stringAppend(_str,_OMC_LIT68);
          tmpMeta82 = stringAppend(tmpMeta81,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta83 = stringAppend(tmpMeta82,_OMC_LIT89);
          tmpMeta84 = stringAppend(tmpMeta83,omc_NFStatement_toStringList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), _str));
          tmp1 = tmpMeta84;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          
          /* Pattern matching succeeded */
          tmpMeta85 = stringAppend(_str,_OMC_LIT68);
          tmpMeta86 = stringAppend(tmpMeta85,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta87 = stringAppend(tmpMeta86,_OMC_LIT90);
          tmpMeta88 = stringAppend(tmpMeta87,omc_NFStatement_toStringList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), _str));
          tmpMeta89 = stringAppend(tmpMeta88,_OMC_LIT12);
          tmp1 = tmpMeta89;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          
          /* Pattern matching succeeded */
          tmpMeta90 = stringAppend(_str,_OMC_LIT68);
          tmpMeta91 = stringAppend(tmpMeta90,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta92 = stringAppend(tmpMeta91,_OMC_LIT78);
          tmpMeta93 = mmc_mk_box1(0, _str);
          tmpMeta94 = stringAppend(_str,_OMC_LIT91);
          tmpMeta95 = stringAppend(_str,_OMC_LIT92);
          tmpMeta96 = stringAppend(tmpMeta92,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 3))), (modelica_fnptr) mmc_mk_box2(0,closure5_NSimStrongComponent_Block_ifTplStr,tmpMeta93), _OMC_LIT13, _str, tmpMeta94, tmpMeta95, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta96;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          
          /* Pattern matching succeeded */
          tmpMeta97 = stringAppend(_str,_OMC_LIT68);
          tmpMeta98 = stringAppend(tmpMeta97,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta99 = stringAppend(tmpMeta98,_OMC_LIT78);
          tmpMeta100 = stringAppend(tmpMeta99,omc_NSimStrongComponent_Block_whenString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 6))), _str));
          tmp1 = tmpMeta100;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          
          /* Pattern matching succeeded */
          tmpMeta101 = stringAppend(_str,_OMC_LIT68);
          tmpMeta102 = stringAppend(tmpMeta101,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2)))), 2))))));
          tmpMeta103 = stringAppend(tmpMeta102,_OMC_LIT78);
          tmpMeta104 = stringAppend(tmpMeta103,omc_NSimStrongComponent_LinearSystem_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), _str));
          tmp1 = tmpMeta104;
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          
          /* Pattern matching succeeded */
          tmpMeta105 = stringAppend(_str,_OMC_LIT68);
          tmpMeta106 = stringAppend(tmpMeta105,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2)))), 2))))));
          tmpMeta107 = stringAppend(tmpMeta106,_OMC_LIT78);
          tmpMeta108 = stringAppend(tmpMeta107,omc_NSimStrongComponent_NonlinearSystem_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))), _str));
          tmp1 = tmpMeta108;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          
          /* Pattern matching succeeded */
          tmpMeta109 = stringAppend(_str,_OMC_LIT68);
          tmpMeta110 = stringAppend(tmpMeta109,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_blck), 2))))));
          tmpMeta111 = stringAppend(tmpMeta110,_OMC_LIT93);
          tmp1 = tmpMeta111;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT94;
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

