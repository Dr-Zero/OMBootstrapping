#include "omc_simulation_settings.h"
#include "NBInitialization.h"
#define _OMC_LIT0_data "initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,7,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "$getPart"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,8,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "/projects/OpenModelica-session2/OMCompiler/Compiler/NBackEnd/Modules/1_Main/NBInitialization.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,95,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4_6,1.781983298e9);
#define _OMC_LIT4_6 MMC_REFREALLIT(_OMC_LIT_STRUCT4_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(992)),MMC_IMMEDIATE(MMC_TAGFIXNUM(12)),MMC_IMMEDIATE(MMC_TAGFIXNUM(992)),MMC_IMMEDIATE(MMC_TAGFIXNUM(30)),_OMC_LIT4_6}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT6,0.0);
#define _OMC_LIT6 MMC_REFREALLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT7,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT8,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,11) {&NBEquation_Equation_DUMMY__EQUATION__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "homotopy"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,8,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "allowNonStandardModelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,24,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,9) {&Flags_FlagData_STRING__LIST__FLAG__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "nonStdMultipleExternalDeclarations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,34,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "Allow several external declarations in functions.\nSee: https://specification.modelica.org/maint/3.5/functions.html#function-as-a-specialized-class"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,146,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,0) {_OMC_LIT15,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "nonStdEnumerationAsIntegers"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,27,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "Allow enumeration as integer without casting via Integer(Enum).\nSee: https://specification.modelica.org/maint/3.5/class-predefined-types-and-declarations.html#type-conversion-of-enumeration-values-to-string-or-integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,217,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,0) {_OMC_LIT18,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "nonStdIntegersAsEnumeration"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,27,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Allow integer as enumeration without casting via Enum(Integer).\nSee: https://specification.modelica.org/maint/3.5/class-predefined-types-and-declarations.html#type-conversion-of-integer-to-enumeration-values"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,207,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,0) {_OMC_LIT21,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "nonStdDifferentCaseFileVsClassName"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,34,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Allow directory or file with different case in the name than the contained class name.\nSee: https://specification.modelica.org/maint/3.5/packages.html#mapping-package-class-structures-to-a-hierarchical-file-system"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,213,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,0) {_OMC_LIT24,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "nonStdTopLevelOuter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,19,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Allow top level outer.\nSee: https://specification.modelica.org/maint/3.6/scoping-name-lookup-and-flattening.html#S4.p1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,118,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,0) {_OMC_LIT27,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "protectedAccess"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,15,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Allow access of protected elements"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,34,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,0) {_OMC_LIT30,_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "reinitInAlgorithms"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,18,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Allow reinit in algorithm sections"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,34,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,0) {_OMC_LIT33,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "unbalancedModel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,15,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "Allow models to be locally unbalanced and to have unbalanced connectors"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,71,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,0) {_OMC_LIT36,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "implicitParameterStartAttribute"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,31,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "Allow fixed parameters with no binding or start attribute"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,57,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,0) {_OMC_LIT39,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "initialSimplified"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,17,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "Allow use of experimental operator `initialSimplified()`"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,56,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,0) {_OMC_LIT42,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "illegalConditionalContext"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,25,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "Allow use of components with false conditions in illegal contexts"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,65,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,0) {_OMC_LIT45,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,1) {_OMC_LIT47,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {_OMC_LIT44,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,1) {_OMC_LIT41,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,1) {_OMC_LIT38,_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,2,1) {_OMC_LIT35,_OMC_LIT51}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,1) {_OMC_LIT32,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,2,1) {_OMC_LIT29,_OMC_LIT53}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,1) {_OMC_LIT26,_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,1) {_OMC_LIT23,_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,1) {_OMC_LIT20,_OMC_LIT56}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,2,1) {_OMC_LIT17,_OMC_LIT57}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,1,1) {_OMC_LIT59}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "Flags to allow non-standard Modelica."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,37,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(143)),_OMC_LIT12,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT13,_OMC_LIT14,_OMC_LIT60,_OMC_LIT61}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "PRE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,3,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "SRT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,3,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,1,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "Created"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,7,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "Parameter Binding Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,29,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "):"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,2,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,1,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,2,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "initialization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,14,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "Shows additional information from the initialization process."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,61,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(86)),_OMC_LIT73,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT74}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "dumpBindings"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,12,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "Dumps information about the equations created from bindings."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,60,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(47)),_OMC_LIT76,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT77}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT79_6,1.781983298e9);
#define _OMC_LIT79_6 MMC_REFREALLIT(_OMC_LIT_STRUCT79_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(318)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(318)),MMC_IMMEDIATE(MMC_TAGFIXNUM(59)),_OMC_LIT79_6}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,17,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT80,_OMC_LIT81,_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "NBInitialization.createWhenReplacementEquation could not replace when-replacement for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,86,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data " because it has no pre-variable."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,32,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "Created When Replacement Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,36,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "Created "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,8,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data " Start Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,18,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "debugFollowEquations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,20,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "Takes a list of equation names and prints the corresponding equations after each stage of the backend process."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,110,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(155)),_OMC_LIT89,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT13,_OMC_LIT14,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT90}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "State"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,5,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "Algebraic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,9,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "Discrete"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,8,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "Discrete State"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,14,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "Clocked State"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,13,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,1,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data " Record "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,8,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data " External Object "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,17,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "NBInitialization.main failed to create initial partition!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,57,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,2,1) {_OMC_LIT100,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "Simplify"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,8,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,1,3) {&DAE_InlineType_NORM__INLINE__desc,}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT104,1,4) {&DAE_InlineType_BUILTIN__EARLY__INLINE__desc,}};
#define _OMC_LIT104 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,1,5) {&DAE_InlineType_EARLY__INLINE__desc,}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT106,1,6) {&DAE_InlineType_DEFAULT__INLINE__desc,}};
#define _OMC_LIT106 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,2,1) {_OMC_LIT106,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,2,1) {_OMC_LIT105,_OMC_LIT107}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT109,2,1) {_OMC_LIT104,_OMC_LIT108}};
#define _OMC_LIT109 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,2,1) {_OMC_LIT103,_OMC_LIT109}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "Inline"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,6,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "Partitioning"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,12,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "Cleanup"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,7,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "Causalize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,9,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "Tearing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,7,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "Initialization Backend Clocks:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,30,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "dumpBackendClocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,17,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "Dumps times for each backend module (only new backend)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,55,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT119,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(188)),_OMC_LIT117,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT118}};
#define _OMC_LIT119 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "NBInitialization.main failed to apply modules!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,46,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT121,2,1) {_OMC_LIT120,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT121 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT121)
#include "util/modelica.h"

#include "NBInitialization_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _kind, modelica_metatype _simplify);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _kind, modelica_metatype _simplify);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInitialization_cleanupInitialCall_cleanupInitialCallExp,2,0) {(void*) boxptr_NBInitialization_cleanupInitialCall_cleanupInitialCallExp,0}};
#define boxvar_NBInitialization_cleanupInitialCall_cleanupInitialCallExp MMC_REFSTRUCTLIT(boxvar_lit_NBInitialization_cleanupInitialCall_cleanupInitialCallExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInitialization_createIteratedStartCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_integer _num_dim, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_cref, modelica_metatype *out_subscripts, modelica_metatype *out_frames, modelica_metatype *out_iterator);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInitialization_createIteratedStartCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_metatype _num_dim, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_cref, modelica_metatype *out_subscripts, modelica_metatype *out_frames, modelica_metatype *out_iterator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInitialization_createIteratedStartCref,2,0) {(void*) boxptr_NBInitialization_createIteratedStartCref,0}};
#define boxvar_NBInitialization_createIteratedStartCref MMC_REFSTRUCTLIT(boxvar_lit_NBInitialization_createIteratedStartCref)

DLLDirection
modelica_metatype omc_NBInitialization_collectAlgorithmOutputs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _outputs)
{
  modelica_metatype _eqn = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eqn;
    {
      modelica_metatype _alg = NULL;
      modelica_metatype _out_crefs = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _alg has no default value.
      // _out_crefs has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,5) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          
          _alg = tmpMeta5;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar65;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar64;
            modelica_integer tmp9;
            modelica_metatype _o_loopVar = 0;
            modelica_metatype _o;
            _o_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 4)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar65 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar65;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_o_loopVar)) {
                _o = MMC_CAR(_o_loopVar);
                _o_loopVar = MMC_CDR(_o_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar64 = omc_NBVariable_getRecordChildrenCrefOrSelf(threadData, _o);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar64,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar65;
          }
          _out_crefs = omc_List_flatten(threadData, tmpMeta6);

          {
            modelica_metatype _cr;
            for (tmpMeta10 = _out_crefs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _cr = MMC_CAR(tmpMeta10);
              omc_UnorderedSet_add(threadData, _cr, _outputs);
            }
          }
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
  return _eqn;
}

DLLDirection
void omc_NBInitialization_collectNonInitial(threadData_t *threadData, modelica_metatype _condition, modelica_metatype _condition_set)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _condition;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 9: {
          
          /* Pattern matching succeeded */
          omc_UnorderedSet_add(threadData, _condition, _condition_set);
          goto tmp2_done;
        }
        case 11: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_integer tmp7;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _elem;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_condition), 3))), tmp7 = arrayLength(tmpMeta4), tmp6 = 1; tmp6 <= tmp7; tmp6++)
            {
              _elem = arrayGet(tmpMeta4,tmp6);
              omc_NBInitialization_collectNonInitial(threadData, _elem, _condition_set);
            }
          }
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
modelica_boolean omc_NBInitialization_isInitialCall(threadData_t *threadData, modelica_metatype _condition)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _condition;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFCall_isNamed(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_condition), 2))), _OMC_LIT0);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (28 != tmp8) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NBInitialization_isInitialCall(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_condition), 2)))) || omc_NBInitialization_isInitialCall(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_condition), 4)))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_Array_any(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_condition), 3))), boxvar_NBInitialization_isInitialCall);
          goto tmp3_done;
        }
        case 3: {
          
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
modelica_metatype boxptr_NBInitialization_isInitialCall(threadData_t *threadData, modelica_metatype _condition)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInitialization_isInitialCall(threadData, _condition);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NBInitialization_replaceClockedFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _call = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT1, 1 /* true */, 0 /* false */), _OMC_LIT2))) goto tmp3_end;
          tmpMeta1 = omc_NFExpression_makeZero(threadData, omc_NFExpression_typeOf(threadData, _exp));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp;
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NBInitialization_replaceClockedFunctionsEqn(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn)
{
  modelica_metatype _eqn = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  omc_Pointer_update(threadData, _eqn, omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, _eqn), boxvar_NBInitialization_replaceClockedFunctions, mmc_mk_none(), boxvar_NFExpression_map));
  _return: OMC_LABEL_UNUSED
  return _eqn;
}

DLLDirection
modelica_metatype omc_NBInitialization_findPreVars(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _pre_set)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBVariable_isPrevious(threadData, omc_NBVariable_getVarPointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _OMC_LIT4))) goto tmp2_end;
          omc_UnorderedSet_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _pre_set);
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
  return _exp;
}

static modelica_metatype closure0_NBInitialization_findPreVars(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype pre_set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_findPreVars(thData, $in_exp, pre_set);
}
DLLDirection
modelica_metatype omc_NBInitialization_removeConditionEquation(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _condition_set, modelica_metatype _tail_stmts_ptr)
{
  modelica_metatype _out_stmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _out_stmts = tmpMeta1;
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _stmt;
    {
      modelica_metatype _pre_set = NULL;
      modelica_metatype _post_cref = NULL;
      modelica_metatype _tail_stmts = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _pre_set has no default value.
      // _post_cref has no default value.
      // _tail_stmts has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,4) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_UnorderedSet_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _condition_set)) goto tmp4_end;
          _pre_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));

          tmpMeta7 = mmc_mk_box1(0, _pre_set);
          omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), (modelica_fnptr) mmc_mk_box2(0,closure0_NBInitialization_findPreVars,tmpMeta7));

          if(omc_UnorderedSet_isEmpty(threadData, _pre_set))
          {
            tmpMeta8 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
            _out_stmts = tmpMeta8;
          }
          else
          {
            tmpMeta9 = mmc_mk_cons(_stmt, omc_Pointer_access(threadData, _tail_stmts_ptr));
            _tail_stmts = tmpMeta9;

            {
              modelica_metatype _pre_cref;
              for (tmpMeta10 = omc_UnorderedSet_toList(threadData, _pre_set); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
              {
                _pre_cref = MMC_CAR(tmpMeta10);
                _post_cref = omc_NBVariable_getPartnerCref(threadData, _pre_cref, boxvar_NBVariable_getVarPre, 0 /* false */);

                tmpMeta12 = mmc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, omc_NFExpression_fromCref(threadData, _pre_cref, 0 /* false */), omc_NFExpression_fromCref(threadData, _post_cref, 0 /* false */), omc_NFComponentRef_getSubscriptedType(threadData, _pre_cref, 0 /* false */), _OMC_LIT9);
                tmpMeta11 = mmc_mk_cons(tmpMeta12, _tail_stmts);
                _tail_stmts = tmpMeta11;
              }
            }

            omc_Pointer_update(threadData, _tail_stmts_ptr, _tail_stmts);
          }
          tmpMeta2 = _out_stmts;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta2 = tmpMeta14;
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
  _out_stmts = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _out_stmts;
}

DLLDirection
modelica_metatype omc_NBInitialization_removeWhenEquationStatement(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _condition_set)
{
  modelica_metatype _out_stmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _out_stmts = tmpMeta1;
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _stmt;
    {
      modelica_metatype _cond = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _stmts_acc = NULL;
      modelica_metatype tmpMeta4;
      int tmp6;
      // _cond has no default value.
      // _stmts has no default value.
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _stmts_acc = tmpMeta4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp6_1))) {
        case 7: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _tpl;
            for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _tpl = MMC_CAR(tmpMeta7);
              /* Pattern-matching assignment */
              tmpMeta8 = _tpl;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
              _cond = tmpMeta9;
              _stmts = tmpMeta10;

              if(omc_NBInitialization_isInitialCall(threadData, _cond))
              {
                _out_stmts = _stmts;
              }

              omc_NBInitialization_collectNonInitial(threadData, _cond, _condition_set);
            }
          }
          tmpMeta2 = _out_stmts;
          goto tmp5_done;
        }
        case 5: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _body_stmt;
            for (tmpMeta12 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)))); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _body_stmt = MMC_CAR(tmpMeta12);
              tmpMeta13 = mmc_mk_cons(omc_NBInitialization_removeWhenEquationStatement(threadData, _body_stmt, _condition_set), _stmts_acc);
              _stmts_acc = tmpMeta13;
            }
          }

          _stmts = omc_List_flatten(threadData, _stmts_acc);

          if((!listEmpty(_stmts)))
          {
            tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[4] = _stmts;
            _stmt = tmpMeta15;

            tmpMeta16 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
            _out_stmts = tmpMeta16;
          }
          else
          {
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            _out_stmts = tmpMeta17;
          }
          tmpMeta2 = _out_stmts;
          goto tmp5_done;
        }
        default:
        tmp5_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta2 = tmpMeta18;
          goto tmp5_done;
        }
        }
        goto tmp5_end;
        tmp5_end: ;
      }
      goto goto_3;
      goto_3:;
      MMC_THROW_INTERNAL();
      goto tmp5_done;
      tmp5_done:;
    }
  }
  _out_stmts = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _out_stmts;
}

DLLDirection
modelica_metatype omc_NBInitialization_removeWhenEquationAlgorithmBody(threadData_t *threadData, modelica_metatype _in_stmts)
{
  modelica_metatype _out_stmts = NULL;
  modelica_metatype _condition_set = NULL;
  modelica_metatype _tail_stmts_ptr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_stmts has no default value.
  _condition_set = omc_UnorderedSet_new(threadData, boxvar_NFExpression_hash, boxvar_NFExpression_isEqual, ((modelica_integer) 13));
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tail_stmts_ptr = omc_Pointer_create(threadData, tmpMeta1);
  {
    modelica_metatype __omcQ_24tmpVar67;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar66;
    modelica_integer tmp5;
    modelica_metatype _stmt_loopVar = 0;
    modelica_metatype _stmt;
    _stmt_loopVar = _in_stmts;
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar67 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar67;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_stmt_loopVar)) {
        _stmt = MMC_CAR(_stmt_loopVar);
        _stmt_loopVar = MMC_CDR(_stmt_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar66 = omc_NBInitialization_removeWhenEquationStatement(threadData, _stmt, _condition_set);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar66,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar67;
  }
  _out_stmts = omc_List_flatten(threadData, tmpMeta2);

  {
    modelica_metatype __omcQ_24tmpVar69;
    modelica_metatype* tmp7;
    modelica_metatype tmpMeta8;
    modelica_metatype __omcQ_24tmpVar68;
    modelica_integer tmp9;
    modelica_metatype _stmt_loopVar = 0;
    modelica_metatype _stmt;
    _stmt_loopVar = _out_stmts;
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar69 = tmpMeta8; /* defaultValue */
    tmp7 = &__omcQ_24tmpVar69;
    while(1) {
      tmp9 = 1;
      if (!listEmpty(_stmt_loopVar)) {
        _stmt = MMC_CAR(_stmt_loopVar);
        _stmt_loopVar = MMC_CDR(_stmt_loopVar);
        tmp9--;
      }
      if (tmp9 == 0) {
        __omcQ_24tmpVar68 = omc_NBInitialization_removeConditionEquation(threadData, _stmt, _condition_set, _tail_stmts_ptr);
        *tmp7 = mmc_mk_cons(__omcQ_24tmpVar68,0);
        tmp7 = &MMC_CDR(*tmp7);
      } else if (tmp9 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp7 = mmc_mk_nil();
    tmpMeta6 = __omcQ_24tmpVar69;
  }
  _out_stmts = omc_List_flatten(threadData, tmpMeta6);

  _out_stmts = listAppend(_out_stmts, omc_Pointer_access(threadData, _tail_stmts_ptr));
  _return: OMC_LABEL_UNUSED
  return _out_stmts;
}

static modelica_metatype closure1_NBInitialization_removeWhenEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn)
{
  modelica_metatype iter = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype cref_map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBInitialization_removeWhenEquation(thData, $in_eqn, iter, cref_map);
}static modelica_metatype closure2_NBInitialization_removeWhenEquationIfBody(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_body)
{
  modelica_metatype iter = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype cref_map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBInitialization_removeWhenEquationIfBody(thData, $in_body, iter, cref_map);
}
DLLDirection
modelica_metatype omc_NBInitialization_removeWhenEquationIfBody(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody, modelica_metatype _iter, modelica_metatype _cref_map)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  _body = __omcQ_24in_5Fbody;
  {
    modelica_metatype __omcQ_24tmpVar71;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar70;
    modelica_integer tmp5;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 3)));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar71 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar71;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        tmpMeta4 = mmc_mk_box2(0, _iter, _cref_map);
        __omcQ_24tmpVar70 = omc_Pointer_apply(threadData, _e, (modelica_fnptr) mmc_mk_box2(0,closure1_NBInitialization_removeWhenEquation,tmpMeta4));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar70,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar71;
  }
  __omcQ_24mrfa_5F0 = tmpMeta1;

  tmpMeta6 = mmc_mk_box2(0, _iter, _cref_map);
  __omcQ_24mrfa_5F1 = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 4))), (modelica_fnptr) mmc_mk_box2(0,closure2_NBInitialization_removeWhenEquationIfBody,tmpMeta6));

  tmpMeta7 = mmc_mk_box4(3, &NBEquation_IfEquationBody_IF__EQUATION__BODY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 2))), __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1);
  _body = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _body;
}

DLLDirection
modelica_metatype omc_NBInitialization_removeWhenEquationBody(threadData_t *threadData, modelica_metatype _body_opt)
{
  modelica_metatype _stmts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmts has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _body_opt;
    {
      modelica_metatype _body = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _body has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _body = tmpMeta6;
          /* Pattern matching succeeded */
          if(omc_NBInitialization_isInitialCall(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 2)))))
          {
            {
              modelica_metatype __omcQ_24tmpVar73;
              modelica_metatype* tmp8;
              modelica_metatype tmpMeta9;
              modelica_metatype __omcQ_24tmpVar72;
              modelica_integer tmp10;
              modelica_metatype _st_loopVar = 0;
              modelica_metatype _st;
              _st_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 3)));
              tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar73 = tmpMeta9; /* defaultValue */
              tmp8 = &__omcQ_24tmpVar73;
              while(1) {
                tmp10 = 1;
                if (!listEmpty(_st_loopVar)) {
                  _st = MMC_CAR(_st_loopVar);
                  _st_loopVar = MMC_CDR(_st_loopVar);
                  tmp10--;
                }
                if (tmp10 == 0) {
                  __omcQ_24tmpVar72 = omc_NBEquation_WhenStatement_toStatement(threadData, _st);
                  *tmp8 = mmc_mk_cons(__omcQ_24tmpVar72,0);
                  tmp8 = &MMC_CDR(*tmp8);
                } else if (tmp10 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp8 = mmc_mk_nil();
              tmpMeta7 = __omcQ_24tmpVar73;
            }
            _stmts = tmpMeta7;
          }
          else
          {
            _stmts = omc_NBInitialization_removeWhenEquationBody(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 4))));
          }
          tmpMeta1 = _stmts;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta11;
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
  _return: OMC_LABEL_UNUSED
  return _stmts;
}

DLLDirection
modelica_metatype omc_NBInitialization_removeWhenEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _cref_map)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      modelica_metatype _new_eqn = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _lhs_crefs = NULL;
      int tmp4;
      // _new_eqn has no default value.
      // _stmts has no default value.
      // _lhs_crefs has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 8: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar75;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar74;
            modelica_integer tmp9;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar75 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar75;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar74 = omc_NBInitialization_removeWhenEquation(threadData, _b, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), _cref_map);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar74,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar75;
          }
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_eqn), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = tmpMeta6;
          _eqn = tmpMeta5;
          tmpMeta1 = (omc_List_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4))), boxvar_NBEquation_Equation_isDummy)?_OMC_LIT10:_eqn);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _stmts = omc_NBInitialization_removeWhenEquationBody(threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3)))));

          if((!listEmpty(_stmts)))
          {
            _new_eqn = omc_Pointer_access(threadData, omc_NBEquation_Equation_makeAlgorithm(threadData, _stmts, 1 /* true */));

            _new_eqn = omc_NBEquation_Equation_setResidualVar(threadData, _new_eqn, omc_NBEquation_Equation_getResidualVar(threadData, omc_Pointer_create(threadData, _eqn)));
          }
          else
          {
            _lhs_crefs = omc_NBEquation_WhenEquationBody_getAllAssigned(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))));

            {
              modelica_metatype _cref;
              for (tmpMeta10 = _lhs_crefs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
              {
                _cref = MMC_CAR(tmpMeta10);
                omc_UnorderedMap_add(threadData, _cref, _iter, _cref_map);
              }
            }

            _new_eqn = _OMC_LIT10;
          }
          tmpMeta1 = _new_eqn;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_eqn), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = omc_NBInitialization_removeWhenEquationIfBody(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), _iter, _cref_map);
          _eqn = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_eqn), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = mmc_mk_integer(omc_NBEquation_IfEquationBody_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), 0 /* false */));
          _eqn = tmpMeta13;
          tmpMeta1 = ((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 2)))) > ((modelica_integer) 0))?_eqn:_OMC_LIT10);
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          _stmts = omc_NBInitialization_removeWhenEquationAlgorithmBody(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3)))), 2))));

          if((!listEmpty(_stmts)))
          {
            _new_eqn = omc_Pointer_access(threadData, omc_NBEquation_Equation_makeAlgorithm(threadData, _stmts, 1 /* true */));

            _new_eqn = omc_NBEquation_Equation_setResidualVar(threadData, _new_eqn, omc_NBEquation_Equation_getResidualVar(threadData, omc_Pointer_create(threadData, _eqn)));
          }
          else
          {
            _new_eqn = _OMC_LIT10;
          }
          tmpMeta1 = _new_eqn;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _eqn;
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

static modelica_metatype closure3_NBStrongComponent_setHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_comp)
{
  modelica_metatype homotopy = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBStrongComponent_setHomotopy(thData, $in_comp, homotopy);
}
DLLDirection
modelica_metatype omc_NBInitialization_minimizeHomotopySystem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _bdae;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,13) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 8)))))
          {
            {
              modelica_metatype __omcQ_24tmpVar77;
              modelica_metatype* tmp8;
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              modelica_metatype __omcQ_24tmpVar76;
              modelica_integer tmp11;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 7)));
              tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar77 = tmpMeta9; /* defaultValue */
              tmp8 = &__omcQ_24tmpVar77;
              while(1) {
                tmp11 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp11--;
                }
                if (tmp11 == 0) {
                  tmpMeta10 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
                  __omcQ_24tmpVar76 = omc_NBPartition_Partition_mapStrongComponents(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure3_NBStrongComponent_setHomotopy,tmpMeta10));
                  *tmp8 = mmc_mk_cons(__omcQ_24tmpVar76,0);
                  tmp8 = &MMC_CDR(*tmp8);
                } else if (tmp11 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp8 = mmc_mk_nil();
              tmpMeta7 = __omcQ_24tmpVar77;
            }
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(15));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[7] = tmpMeta7;
            _bdae = tmpMeta6;
          }
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _bdae;
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
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}

DLLDirection
modelica_metatype omc_NBInitialization_containsLambda0(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _b)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  if(((!mmc_unbox_boolean(omc_Pointer_access(threadData, _b))) && (omc_NFExpression_isCallNamed(threadData, _exp, _OMC_LIT11) || (omc_Flags_isConfigFlagSet(threadData, _OMC_LIT62, _OMC_LIT42) && omc_NFExpression_isCallNamed(threadData, _exp, _OMC_LIT42)))))
  {
    omc_Pointer_update(threadData, _b, mmc_mk_boolean(1 /* true */));
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NBInitialization_containsHomotopyCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _b)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  if(((!mmc_unbox_boolean(omc_Pointer_access(threadData, _b))) && omc_NFExpression_isCallNamed(threadData, _exp, _OMC_LIT11)))
  {
    omc_Pointer_update(threadData, _b, mmc_mk_boolean(1 /* true */));
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NBInitialization_cleanupHomotopy(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _kind)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFCall_isNamed(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _OMC_LIT11)) goto tmp3_end;
          { /* match expression */
            modelica_integer tmp9_1;
            tmp9_1 = (modelica_integer)_kind;
            {
              int tmp9;
              {
                switch (MMC_SWITCH_CAST(tmp9_1)) {
                case 6: {
                  if (6 != tmp9_1) goto tmp8_end;
                  /* Pattern matching succeeded */
                  tmpMeta6 = listGet(omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))), ((modelica_integer) 2));
                  goto tmp8_done;
                }
                case 5: {
                  if (5 != tmp9_1) goto tmp8_end;
                  /* Pattern matching succeeded */
                  tmpMeta6 = _exp;
                  goto tmp8_done;
                }
                default:
                tmp8_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmpMeta6 = listHead(omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
                  goto tmp8_done;
                }
                }
                goto tmp8_end;
                tmp8_end: ;
              }
              goto goto_7;
              goto_7:;
              goto goto_2;
              goto tmp8_done;
              tmp8_done:;
            }
          }tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp;
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}
modelica_metatype boxptr_NBInitialization_cleanupHomotopy(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _exp = omc_NBInitialization_cleanupHomotopy(threadData, __omcQ_24in_5Fexp, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _kind, modelica_metatype _simplify)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  if(omc_NFExpression_isCallNamed(threadData, _exp, _OMC_LIT0))
  {
    tmpMeta1 = mmc_mk_box2(6, &NFExpression_BOOLEAN__desc, mmc_mk_boolean((((modelica_integer)_kind == 5) || ((modelica_integer)_kind == 6))));
    _exp = tmpMeta1;

    omc_Pointer_update(threadData, _simplify, mmc_mk_boolean(1 /* true */));
  }
  else
  {
    if((omc_Flags_isConfigFlagSet(threadData, _OMC_LIT62, _OMC_LIT42) && omc_NFExpression_isCallNamed(threadData, _exp, _OMC_LIT42)))
    {
      tmpMeta2 = mmc_mk_box2(6, &NFExpression_BOOLEAN__desc, mmc_mk_boolean(((modelica_integer)_kind == 6)));
      _exp = tmpMeta2;

      omc_Pointer_update(threadData, _simplify, mmc_mk_boolean(1 /* true */));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _kind, modelica_metatype _simplify)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _exp = omc_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData, __omcQ_24in_5Fexp, tmp1, _simplify);
  /* skip box _exp; NFExpression */
  return _exp;
}

static modelica_metatype closure4_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype simplify = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBInitialization_cleanupInitialCall_cleanupInitialCallExp(thData, $in_exp, kind, simplify);
}static modelica_metatype closure5_NFSimplifyExp_simplifyDump(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_string indent = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NFSimplifyExp_simplifyDump(thData, exp, includeScope, name, indent);
}
DLLDirection
modelica_metatype omc_NBInitialization_cleanupInitialCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_integer _kind)
{
  modelica_metatype _eq = NULL;
  modelica_metatype _simplify = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  _simplify = omc_Pointer_create(threadData, mmc_mk_boolean(0 /* false */));
  tmpMeta1 = mmc_mk_box2(0, mmc_mk_integer((modelica_integer)_kind), _simplify);
  _eq = omc_NBEquation_Equation_map(threadData, _eq, (modelica_fnptr) mmc_mk_box2(0,closure4_NBInitialization_cleanupInitialCall_cleanupInitialCallExp,tmpMeta1), mmc_mk_none(), boxvar_NFExpression_map);

  if(mmc_unbox_boolean(omc_Pointer_access(threadData, _simplify)))
  {
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta4 = mmc_mk_box3(0, mmc_mk_boolean(1 /* true */), _OMC_LIT5, _OMC_LIT5);
    _eq = omc_NBEquation_Equation_simplify(threadData, _eq, _OMC_LIT5, _OMC_LIT5, omc_Pointer_create(threadData, tmpMeta2), omc_Pointer_create(threadData, tmpMeta3), (modelica_fnptr) mmc_mk_box2(0,closure5_NFSimplifyExp_simplifyDump,tmpMeta4));
  }
  _return: OMC_LABEL_UNUSED
  return _eq;
}
modelica_metatype boxptr_NBInitialization_cleanupInitialCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _eq = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _eq = omc_NBInitialization_cleanupInitialCall(threadData, __omcQ_24in_5Feq, tmp1);
  /* skip box _eq; NBEquation.Equation */
  return _eq;
}

static modelica_metatype closure6_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure7_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure8_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure9_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure10_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure11_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure12_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure13_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure14_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure15_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure16_NBInitialization_containsLambda0(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype b = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_containsLambda0(thData, $in_exp, b);
}static modelica_metatype closure17_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}static modelica_metatype closure18_NBInitialization_cleanupHomotopy(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupHomotopy(thData, $in_exp, kind);
}static modelica_metatype closure19_NBInitialization_cleanupInitialCall(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_cleanupInitialCall(thData, $in_eq, kind);
}
DLLDirection
modelica_metatype omc_NBInitialization_cleanup(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype _hasHom = NULL;
  modelica_metatype _init_0 = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  _hasHom = omc_Pointer_create(threadData, mmc_mk_boolean(0 /* false */));
  // _init_0 has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _bdae;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,13) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype tmpMeta10;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp11;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 2)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar1;
            while(1) {
              tmp11 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp11--;
              }
              if (tmp11 == 0) {
                tmpMeta10 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar0 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure6_NBInitialization_cleanupInitialCall,tmpMeta10));
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp11 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar1;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = tmpMeta7;
          _bdae = tmpMeta6;

          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp17;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 3)));
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar3;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                tmpMeta16 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar2 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure7_NBInitialization_cleanupInitialCall,tmpMeta16));
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar3;
          }
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = tmpMeta13;
          _bdae = tmpMeta12;

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp20;
            modelica_metatype tmpMeta21;
            modelica_metatype tmpMeta22;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp23;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 4)));
            tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta21; /* defaultValue */
            tmp20 = &__omcQ_24tmpVar5;
            while(1) {
              tmp23 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp23--;
              }
              if (tmp23 == 0) {
                tmpMeta22 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar4 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure8_NBInitialization_cleanupInitialCall,tmpMeta22));
                *tmp20 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp20 = &MMC_CDR(*tmp20);
              } else if (tmp23 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp20 = mmc_mk_nil();
            tmpMeta19 = __omcQ_24tmpVar5;
          }
          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[4] = tmpMeta19;
          _bdae = tmpMeta18;

          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp26;
            modelica_metatype tmpMeta27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp29;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 5)));
            tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta27; /* defaultValue */
            tmp26 = &__omcQ_24tmpVar7;
            while(1) {
              tmp29 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp29--;
              }
              if (tmp29 == 0) {
                tmpMeta28 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar6 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure9_NBInitialization_cleanupInitialCall,tmpMeta28));
                *tmp26 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp26 = &MMC_CDR(*tmp26);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp26 = mmc_mk_nil();
            tmpMeta25 = __omcQ_24tmpVar7;
          }
          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[5] = tmpMeta25;
          _bdae = tmpMeta24;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 9)))))
          {
            {
              modelica_metatype __omcQ_24tmpVar9;
              modelica_metatype* tmp32;
              modelica_metatype tmpMeta33;
              modelica_metatype tmpMeta34;
              modelica_metatype __omcQ_24tmpVar8;
              modelica_integer tmp35;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 9))));
              tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar9 = tmpMeta33; /* defaultValue */
              tmp32 = &__omcQ_24tmpVar9;
              while(1) {
                tmp35 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp35--;
                }
                if (tmp35 == 0) {
                  tmpMeta34 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                  __omcQ_24tmpVar8 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure10_NBInitialization_cleanupInitialCall,tmpMeta34));
                  *tmp32 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                  tmp32 = &MMC_CDR(*tmp32);
                } else if (tmp35 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp32 = mmc_mk_nil();
              tmpMeta31 = __omcQ_24tmpVar9;
            }
            tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(15));
            memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[9] = mmc_mk_some(tmpMeta31);
            _bdae = tmpMeta30;
          }

          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp38;
            modelica_metatype tmpMeta39;
            modelica_metatype tmpMeta40;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp41;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 2)));
            tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta39; /* defaultValue */
            tmp38 = &__omcQ_24tmpVar11;
            while(1) {
              tmp41 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp41--;
              }
              if (tmp41 == 0) {
                tmpMeta40 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar10 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure11_NBInitialization_cleanupHomotopy,tmpMeta40));
                *tmp38 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp38 = &MMC_CDR(*tmp38);
              } else if (tmp41 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp38 = mmc_mk_nil();
            tmpMeta37 = __omcQ_24tmpVar11;
          }
          tmpMeta36 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta36), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta36))[2] = tmpMeta37;
          _bdae = tmpMeta36;

          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp44;
            modelica_metatype tmpMeta45;
            modelica_metatype tmpMeta46;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp47;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 3)));
            tmpMeta45 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta45; /* defaultValue */
            tmp44 = &__omcQ_24tmpVar13;
            while(1) {
              tmp47 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp47--;
              }
              if (tmp47 == 0) {
                tmpMeta46 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar12 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure12_NBInitialization_cleanupHomotopy,tmpMeta46));
                *tmp44 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp44 = &MMC_CDR(*tmp44);
              } else if (tmp47 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp44 = mmc_mk_nil();
            tmpMeta43 = __omcQ_24tmpVar13;
          }
          tmpMeta42 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta42), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta42))[3] = tmpMeta43;
          _bdae = tmpMeta42;

          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp50;
            modelica_metatype tmpMeta51;
            modelica_metatype tmpMeta52;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp53;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 4)));
            tmpMeta51 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta51; /* defaultValue */
            tmp50 = &__omcQ_24tmpVar15;
            while(1) {
              tmp53 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp53--;
              }
              if (tmp53 == 0) {
                tmpMeta52 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar14 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure13_NBInitialization_cleanupHomotopy,tmpMeta52));
                *tmp50 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp50 = &MMC_CDR(*tmp50);
              } else if (tmp53 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp50 = mmc_mk_nil();
            tmpMeta49 = __omcQ_24tmpVar15;
          }
          tmpMeta48 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta48), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta48))[4] = tmpMeta49;
          _bdae = tmpMeta48;

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp56;
            modelica_metatype tmpMeta57;
            modelica_metatype tmpMeta58;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp59;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 5)));
            tmpMeta57 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta57; /* defaultValue */
            tmp56 = &__omcQ_24tmpVar17;
            while(1) {
              tmp59 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp59--;
              }
              if (tmp59 == 0) {
                tmpMeta58 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar16 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure14_NBInitialization_cleanupHomotopy,tmpMeta58));
                *tmp56 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp56 = &MMC_CDR(*tmp56);
              } else if (tmp59 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp56 = mmc_mk_nil();
            tmpMeta55 = __omcQ_24tmpVar17;
          }
          tmpMeta54 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta54), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta54))[5] = tmpMeta55;
          _bdae = tmpMeta54;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 9)))))
          {
            {
              modelica_metatype __omcQ_24tmpVar19;
              modelica_metatype* tmp62;
              modelica_metatype tmpMeta63;
              modelica_metatype tmpMeta64;
              modelica_metatype __omcQ_24tmpVar18;
              modelica_integer tmp65;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 9))));
              tmpMeta63 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar19 = tmpMeta63; /* defaultValue */
              tmp62 = &__omcQ_24tmpVar19;
              while(1) {
                tmp65 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp65--;
                }
                if (tmp65 == 0) {
                  tmpMeta64 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                  __omcQ_24tmpVar18 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure15_NBInitialization_cleanupHomotopy,tmpMeta64));
                  *tmp62 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                  tmp62 = &MMC_CDR(*tmp62);
                } else if (tmp65 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp62 = mmc_mk_nil();
              tmpMeta61 = __omcQ_24tmpVar19;
            }
            tmpMeta60 = MMC_TAGPTR(mmc_alloc_words(15));
            memcpy(MMC_UNTAGPTR(tmpMeta60), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta60))[9] = mmc_mk_some(tmpMeta61);
            _bdae = tmpMeta60;
          }

          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp68;
            modelica_metatype tmpMeta69;
            modelica_metatype tmpMeta70;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp71;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 7)));
            tmpMeta69 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta69; /* defaultValue */
            tmp68 = &__omcQ_24tmpVar21;
            while(1) {
              tmp71 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp71--;
              }
              if (tmp71 == 0) {
                tmpMeta70 = mmc_mk_box1(0, _hasHom);
                __omcQ_24tmpVar20 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure16_NBInitialization_containsLambda0,tmpMeta70));
                *tmp68 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp68 = &MMC_CDR(*tmp68);
              } else if (tmp71 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp68 = mmc_mk_nil();
            tmpMeta67 = __omcQ_24tmpVar21;
          }
          tmpMeta66 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta66), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta66))[7] = tmpMeta67;
          _bdae = tmpMeta66;

          if(mmc_unbox_boolean(omc_Pointer_access(threadData, _hasHom)))
          {
            {
              modelica_metatype __omcQ_24tmpVar23;
              modelica_metatype* tmp73;
              modelica_metatype tmpMeta74;
              modelica_metatype __omcQ_24tmpVar22;
              modelica_integer tmp75;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 7)));
              tmpMeta74 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar23 = tmpMeta74; /* defaultValue */
              tmp73 = &__omcQ_24tmpVar23;
              while(1) {
                tmp75 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp75--;
                }
                if (tmp75 == 0) {
                  __omcQ_24tmpVar22 = omc_NBPartition_Partition_setKind(threadData, omc_NBPartition_Partition_clone(threadData, _par, 0 /* false */), 6);
                  *tmp73 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                  tmp73 = &MMC_CDR(*tmp73);
                } else if (tmp75 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp73 = mmc_mk_nil();
              tmpMeta72 = __omcQ_24tmpVar23;
            }
            _init_0 = tmpMeta72;

            {
              modelica_metatype __omcQ_24tmpVar25;
              modelica_metatype* tmp77;
              modelica_metatype tmpMeta78;
              modelica_metatype tmpMeta79;
              modelica_metatype __omcQ_24tmpVar24;
              modelica_integer tmp80;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = _init_0;
              tmpMeta78 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar25 = tmpMeta78; /* defaultValue */
              tmp77 = &__omcQ_24tmpVar25;
              while(1) {
                tmp80 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp80--;
                }
                if (tmp80 == 0) {
                  tmpMeta79 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                  __omcQ_24tmpVar24 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure17_NBInitialization_cleanupInitialCall,tmpMeta79));
                  *tmp77 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                  tmp77 = &MMC_CDR(*tmp77);
                } else if (tmp80 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp77 = mmc_mk_nil();
              tmpMeta76 = __omcQ_24tmpVar25;
            }
            _init_0 = tmpMeta76;

            {
              modelica_metatype __omcQ_24tmpVar27;
              modelica_metatype* tmp82;
              modelica_metatype tmpMeta83;
              modelica_metatype tmpMeta84;
              modelica_metatype __omcQ_24tmpVar26;
              modelica_integer tmp85;
              modelica_metatype _par_loopVar = 0;
              modelica_metatype _par;
              _par_loopVar = _init_0;
              tmpMeta83 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar27 = tmpMeta83; /* defaultValue */
              tmp82 = &__omcQ_24tmpVar27;
              while(1) {
                tmp85 = 1;
                if (!listEmpty(_par_loopVar)) {
                  _par = MMC_CAR(_par_loopVar);
                  _par_loopVar = MMC_CDR(_par_loopVar);
                  tmp85--;
                }
                if (tmp85 == 0) {
                  tmpMeta84 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                  __omcQ_24tmpVar26 = omc_NBPartition_Partition_mapExp(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure18_NBInitialization_cleanupHomotopy,tmpMeta84));
                  *tmp82 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                  tmp82 = &MMC_CDR(*tmp82);
                } else if (tmp85 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp82 = mmc_mk_nil();
              tmpMeta81 = __omcQ_24tmpVar27;
            }
            _init_0 = tmpMeta81;

            tmpMeta86 = MMC_TAGPTR(mmc_alloc_words(15));
            memcpy(MMC_UNTAGPTR(tmpMeta86), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta86))[8] = mmc_mk_some(_init_0);
            _bdae = tmpMeta86;
          }

          {
            modelica_metatype __omcQ_24tmpVar29;
            modelica_metatype* tmp89;
            modelica_metatype tmpMeta90;
            modelica_metatype tmpMeta91;
            modelica_metatype __omcQ_24tmpVar28;
            modelica_integer tmp92;
            modelica_metatype _par_loopVar = 0;
            modelica_metatype _par;
            _par_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 7)));
            tmpMeta90 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar29 = tmpMeta90; /* defaultValue */
            tmp89 = &__omcQ_24tmpVar29;
            while(1) {
              tmp92 = 1;
              if (!listEmpty(_par_loopVar)) {
                _par = MMC_CAR(_par_loopVar);
                _par_loopVar = MMC_CDR(_par_loopVar);
                tmp92--;
              }
              if (tmp92 == 0) {
                tmpMeta91 = mmc_mk_box1(0, mmc_mk_integer(omc_NBPartition_Partition_getKind(threadData, _par)));
                __omcQ_24tmpVar28 = omc_NBPartition_Partition_mapEqn(threadData, _par, (modelica_fnptr) mmc_mk_box2(0,closure19_NBInitialization_cleanupInitialCall,tmpMeta91));
                *tmp89 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                tmp89 = &MMC_CDR(*tmp89);
              } else if (tmp92 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp89 = mmc_mk_nil();
            tmpMeta88 = __omcQ_24tmpVar29;
          }
          tmpMeta87 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta87), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta87))[7] = tmpMeta88;
          _bdae = tmpMeta87;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _bdae;
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
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}

DLLDirection
void omc_NBInitialization_createPreEquationSlice(threadData_t *threadData, modelica_metatype _var_slice, modelica_metatype _ptr_pre_eqs, modelica_metatype _idx)
{
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _pre = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _pre_name = NULL;
  modelica_metatype _dims = NULL;
  modelica_metatype _iterators = NULL;
  modelica_metatype _ranges = NULL;
  modelica_metatype _subscripts = NULL;
  modelica_metatype _frames = NULL;
  modelica_metatype _pre_eq = NULL;
  modelica_integer _kind;
  modelica_metatype _sliced_eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var_ptr has no default value.
  // _pre has no default value.
  // _name has no default value.
  // _pre_name has no default value.
  // _dims has no default value.
  // _iterators has no default value.
  // _ranges has no default value.
  // _subscripts has no default value.
  // _frames has no default value.
  // _pre_eq has no default value.
  // _kind has no default value.
  // _sliced_eqn has no default value.
  _var_ptr = omc_NBSlice_getT(threadData, _var_slice);

  if((!omc_NBVariable_isPrevious(threadData, _var_ptr)))
  {
    _pre = omc_NBVariable_getVarPre(threadData, _var_ptr, NULL);

    if(isSome(_pre))
    {
      _name = omc_NBVariable_getVarName(threadData, _var_ptr);

      _dims = omc_NFType_arrayDims(threadData, omc_NFComponentRef_getSubscriptedType(threadData, _name, 0 /* false */));

      _iterators = omc_NFFlatten_makeIterators(threadData, _name, _dims ,&_ranges ,&_subscripts);

      {
        modelica_metatype __omcQ_24tmpVar79;
        modelica_metatype* tmp2;
        modelica_metatype tmpMeta3;
        modelica_metatype __omcQ_24tmpVar78;
        modelica_integer tmp4;
        modelica_metatype _iter_loopVar = 0;
        modelica_metatype _iter;
        _iter_loopVar = _iterators;
        tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar79 = tmpMeta3; /* defaultValue */
        tmp2 = &__omcQ_24tmpVar79;
        while(1) {
          tmp4 = 1;
          if (!listEmpty(_iter_loopVar)) {
            _iter = MMC_CAR(_iter_loopVar);
            _iter_loopVar = MMC_CDR(_iter_loopVar);
            tmp4--;
          }
          if (tmp4 == 0) {
            __omcQ_24tmpVar78 = omc_NFComponentRef_makeIterator(threadData, _iter, _OMC_LIT63);
            *tmp2 = mmc_mk_cons(__omcQ_24tmpVar78,0);
            tmp2 = &MMC_CDR(*tmp2);
          } else if (tmp4 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp2 = mmc_mk_nil();
        tmpMeta1 = __omcQ_24tmpVar79;
      }
      _frames = omc_List_zip3(threadData, tmpMeta1, _ranges, omc_List_fill(threadData, mmc_mk_none(), listLength(_ranges)));

      _pre_name = omc_NBVariable_getVarName(threadData, omc_Util_getOption(threadData, _pre));

      _pre_name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _pre_name, 1 /* true */, 1 /* true */, 0 /* false */);

      _name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _name, 1 /* true */, 1 /* true */, 0 /* false */);

      _kind = (omc_NBVariable_isContinuous(threadData, _var_ptr, 1 /* true */)?1:2);

      _pre_eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _name, 1 /* true */), omc_NFExpression_fromCref(threadData, _pre_name, 0 /* false */), _idx, _OMC_LIT64, omc_NBEquation_Iterator_fromFrames(threadData, _frames), omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none()));

      if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var_slice), 3))))))
      {
        _sliced_eqn = omc_NBEquation_Equation_slice(threadData, _pre_eq, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var_slice), 3))), NULL);

        omc_Pointer_update(threadData, _ptr_pre_eqs, listAppend(omc_Pointer_access(threadData, _ptr_pre_eqs), _sliced_eqn));
      }
      else
      {
        tmpMeta5 = mmc_mk_cons(_pre_eq, omc_Pointer_access(threadData, _ptr_pre_eqs));
        omc_Pointer_update(threadData, _ptr_pre_eqs, tmpMeta5);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NBInitialization_createPreEquation(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _ptr_pre_eqs, modelica_metatype _idx)
{
  modelica_metatype _pre = NULL;
  modelica_metatype _pre_eq = NULL;
  modelica_integer _kind;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _pre has no default value.
  // _pre_eq has no default value.
  // _kind has no default value.
  if((!omc_NBVariable_isPrevious(threadData, _var_ptr)))
  {
    _pre = omc_NBVariable_getVarPre(threadData, _var_ptr, NULL);

    if(isSome(_pre))
    {
      _kind = (omc_NBVariable_isContinuous(threadData, _var_ptr, 1 /* true */)?1:2);

      _pre_eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, omc_NBVariable_getVarName(threadData, _var_ptr), 0 /* false */), omc_NFExpression_fromCref(threadData, omc_NBVariable_getVarName(threadData, omc_Util_getOption(threadData, _pre)), 0 /* false */), _idx, _OMC_LIT64, _OMC_LIT65, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none()));

      tmpMeta1 = mmc_mk_cons(_pre_eq, omc_Pointer_access(threadData, _ptr_pre_eqs));
      omc_Pointer_update(threadData, _ptr_pre_eqs, tmpMeta1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInitialization_createIteratedStartCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_integer _num_dim, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_cref, modelica_metatype *out_subscripts, modelica_metatype *out_frames, modelica_metatype *out_iterator)
{
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _start_var = NULL;
  modelica_metatype _start_cref = NULL;
  modelica_metatype _subscripts = NULL;
  modelica_metatype _frames = NULL;
  modelica_metatype _iterator = NULL;
  modelica_metatype _dims = NULL;
  modelica_metatype _iterators = NULL;
  modelica_metatype _ranges = NULL;
  modelica_metatype _iter_crefs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var_ptr = __omcQ_24in_5Fvar_5Fptr;
  _name = __omcQ_24in_5Fname;
  // _start_var has no default value.
  // _start_cref has no default value.
  // _subscripts has no default value.
  // _frames has no default value.
  // _iterator has no default value.
  // _dims has no default value.
  // _iterators has no default value.
  // _ranges has no default value.
  // _iter_crefs has no default value.
  _dims = omc_NFType_arrayDims(threadData, omc_NFComponentRef_getSubscriptedType(threadData, _name, 0 /* false */));

  _dims = ((_num_dim == ((modelica_integer) 0))?_dims:omc_List_firstN(threadData, _dims, _num_dim));

  _iterators = omc_NFFlatten_makeIterators(threadData, _name, _dims ,&_ranges ,&_subscripts);

  {
    modelica_metatype __omcQ_24tmpVar81;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar80;
    modelica_integer tmp4;
    modelica_metatype _iter_loopVar = 0;
    modelica_metatype _iter;
    _iter_loopVar = _iterators;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar81 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar81;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_iter_loopVar)) {
        _iter = MMC_CAR(_iter_loopVar);
        _iter_loopVar = MMC_CDR(_iter_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar80 = omc_NFComponentRef_makeIterator(threadData, _iter, _OMC_LIT63);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar80,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar81;
  }
  _iter_crefs = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar83;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar82;
    modelica_integer tmp8;
    modelica_metatype _iter_loopVar = 0;
    modelica_metatype _iter;
    _iter_loopVar = _iter_crefs;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar83 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar83;
    while(1) {
      tmp8 = 1;
      if (!listEmpty(_iter_loopVar)) {
        _iter = MMC_CAR(_iter_loopVar);
        _iter_loopVar = MMC_CDR(_iter_loopVar);
        tmp8--;
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar82 = omc_NBackendDAE_lowerIteratorCref(threadData, _iter);
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar82,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar83;
  }
  _iter_crefs = tmpMeta5;

  {
    modelica_metatype __omcQ_24tmpVar85;
    modelica_metatype* tmp10;
    modelica_metatype tmpMeta11;
    modelica_metatype __omcQ_24tmpVar84;
    modelica_integer tmp12;
    modelica_metatype _sub_loopVar = 0;
    modelica_metatype _sub;
    _sub_loopVar = _subscripts;
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar85 = tmpMeta11; /* defaultValue */
    tmp10 = &__omcQ_24tmpVar85;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_sub_loopVar)) {
        _sub = MMC_CAR(_sub_loopVar);
        _sub_loopVar = MMC_CDR(_sub_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        __omcQ_24tmpVar84 = omc_NFSubscript_mapExp(threadData, _sub, boxvar_NBackendDAE_lowerIteratorExp);
        *tmp10 = mmc_mk_cons(__omcQ_24tmpVar84,0);
        tmp10 = &MMC_CDR(*tmp10);
      } else if (tmp12 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp10 = mmc_mk_nil();
    tmpMeta9 = __omcQ_24tmpVar85;
  }
  _subscripts = tmpMeta9;

  _frames = omc_List_zip3(threadData, _iter_crefs, _ranges, omc_List_fill(threadData, mmc_mk_none(), listLength(_iter_crefs)));

  _iterator = omc_NBEquation_Iterator_fromFrames(threadData, _frames);

  _var_ptr = omc_NBInitialization_createStartVar(threadData, _var_ptr, _name, _subscripts ,&_name ,&_start_var ,&_start_cref);
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_start_var) { *out_start_var = _start_var; }
  if (out_start_cref) { *out_start_cref = _start_cref; }
  if (out_subscripts) { *out_subscripts = _subscripts; }
  if (out_frames) { *out_frames = _frames; }
  if (out_iterator) { *out_iterator = _iterator; }
  return _var_ptr;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInitialization_createIteratedStartCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_metatype _num_dim, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_cref, modelica_metatype *out_subscripts, modelica_metatype *out_frames, modelica_metatype *out_iterator)
{
  modelica_integer tmp1;
  modelica_metatype _var_ptr = NULL;
  tmp1 = mmc_unbox_integer(_num_dim);
  _var_ptr = omc_NBInitialization_createIteratedStartCref(threadData, __omcQ_24in_5Fvar_5Fptr, __omcQ_24in_5Fname, tmp1, out_name, out_start_var, out_start_cref, out_subscripts, out_frames, out_iterator);
  /* skip box _var_ptr; Pointer<NFVariable> */
  /* skip box _name; NFComponentRef */
  /* skip box _start_var; Pointer<NFVariable> */
  /* skip box _start_cref; NFComponentRef */
  /* skip box _subscripts; list<NFSubscript> */
  /* skip box _frames; list<tuple<NFComponentRef, NFExpression, Option<NBEquation.Iterator>>> */
  /* skip box _iterator; NBEquation.Iterator */
  return _var_ptr;
}

DLLDirection
modelica_metatype omc_NBInitialization_createStartVariableSlice(threadData_t *threadData, modelica_metatype _var_slice, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_metatype _ptr_start_vars, modelica_metatype *out_var_ptr, modelica_metatype *out_name, modelica_metatype *out_iterator)
{
  modelica_metatype _start_exp = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _iterator = NULL;
  modelica_metatype _start_var = NULL;
  modelica_metatype _start_name = NULL;
  modelica_metatype _subscripts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _start_exp has no default value.
  _var_ptr = __omcQ_24in_5Fvar_5Fptr;
  _name = __omcQ_24in_5Fname;
  // _iterator has no default value.
  // _start_var has no default value.
  // _start_name has no default value.
  // _subscripts has no default value.
  if(omc_NBSlice_isFull(threadData, _var_slice))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _var_ptr = omc_NBInitialization_createStartVar(threadData, _var_ptr, _name, tmpMeta1 ,&_name ,&_start_var ,&_start_name);

    _iterator = _OMC_LIT65;
  }
  else
  {
    _var_ptr = omc_NBInitialization_createIteratedStartCref(threadData, _var_ptr, _name, ((modelica_integer) 0) ,&_name ,&_start_var ,&_start_name ,&_subscripts ,NULL ,&_iterator);
  }

  tmpMeta2 = mmc_mk_cons(_start_var, omc_Pointer_access(threadData, _ptr_start_vars));
  omc_Pointer_update(threadData, _ptr_start_vars, tmpMeta2);

  _start_exp = omc_NFExpression_fromCref(threadData, _start_name, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  if (out_var_ptr) { *out_var_ptr = _var_ptr; }
  if (out_name) { *out_name = _name; }
  if (out_iterator) { *out_iterator = _iterator; }
  return _start_exp;
}

static modelica_metatype closure20_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}
DLLDirection
modelica_metatype omc_NBInitialization_createStartExpressionSlice(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _var_slice, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_metatype *out_var_ptr, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_cref, modelica_metatype *out_iterator)
{
  modelica_metatype _start_exp = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _start_var = NULL;
  modelica_metatype _start_cref = NULL;
  modelica_metatype _iterator = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _start_exp has no default value.
  _var_ptr = __omcQ_24in_5Fvar_5Fptr;
  _name = __omcQ_24in_5Fname;
  // _start_var has no default value.
  // _start_cref has no default value.
  // _iterator has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _array_constructor = NULL;
      modelica_metatype _frames = NULL;
      modelica_metatype _replacements = NULL;
      modelica_metatype _old_iter = NULL;
      modelica_metatype _new_iter = NULL;
      modelica_metatype _subscripts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _array_constructor has no default value.
      // _frames has no default value.
      // _replacements has no default value.
      // _old_iter has no default value.
      // _new_iter has no default value.
      // _subscripts has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,4,5) == 0) goto tmp3_end;
          
          _array_constructor = tmpMeta6;
          /* Pattern matching succeeded */
          _var_ptr = omc_NBInitialization_createIteratedStartCref(threadData, _var_ptr, _name, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_array_constructor), 6)))) ,&_name ,&_start_var ,&_start_cref ,NULL ,&_frames ,&_iterator);

          _replacements = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

          {
            modelica_metatype _tpl;
            for (tmpMeta7 = omc_List_zip(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_array_constructor), 6))), _frames); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _tpl = MMC_CAR(tmpMeta7);
              /* Pattern-matching assignment */
              tmpMeta8 = _tpl;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
              _old_iter = tmpMeta10;
              _new_iter = tmpMeta12;

              tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
              omc_UnorderedMap_add(threadData, omc_NFComponentRef_fromNode(threadData, _old_iter, omc_NFInstNode_InstNode_getType(threadData, _old_iter), tmpMeta13, 1), omc_NFExpression_fromCref(threadData, _new_iter, 0 /* false */), _replacements);
            }
          }
          tmpMeta15 = mmc_mk_box1(0, _replacements);
          tmpMeta[0+0] = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_array_constructor), 5))), (modelica_fnptr) mmc_mk_box2(0,closure20_NBReplacements_applySimpleExp,tmpMeta15));
          tmpMeta[0+1] = _iterator;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          if(omc_NBSlice_isFull(threadData, _var_slice))
          {
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            _var_ptr = omc_NBInitialization_createStartVar(threadData, _var_ptr, _name, tmpMeta16 ,&_name ,&_start_var ,&_start_cref);

            _iterator = _OMC_LIT65;

            _start_exp = _exp;
          }
          else
          {
            _var_ptr = omc_NBInitialization_createIteratedStartCref(threadData, _var_ptr, _name, ((modelica_integer) 0) ,&_name ,&_start_var ,&_start_cref ,&_subscripts ,NULL ,&_iterator);

            _start_exp = omc_NFExpression_applySubscripts(threadData, _subscripts, _exp, 1 /* true */);
          }
          tmpMeta[0+0] = _start_exp;
          tmpMeta[0+1] = _iterator;
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
  _start_exp = tmpMeta[0+0];
  _iterator = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_var_ptr) { *out_var_ptr = _var_ptr; }
  if (out_name) { *out_name = _name; }
  if (out_start_var) { *out_start_var = _start_var; }
  if (out_start_cref) { *out_start_cref = _start_cref; }
  if (out_iterator) { *out_iterator = _iterator; }
  return _start_exp;
}

DLLDirection
void omc_NBInitialization_createStartEquationSlice(threadData_t *threadData, modelica_metatype _var_slice, modelica_metatype _ptr_start_vars, modelica_metatype _ptr_start_eqs, modelica_metatype _idx, modelica_boolean _fixed)
{
  modelica_metatype _start_exp = NULL;
  modelica_metatype _start_var_exp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _start_var = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _start_eq = NULL;
  modelica_integer _kind;
  modelica_metatype _iterator = NULL;
  modelica_metatype _sliced_eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _start_exp has no default value.
  // _start_var_exp has no default value.
  // _e has no default value.
  // _var_ptr has no default value.
  // _start_var has no default value.
  // _name has no default value.
  _start_eq = mmc_mk_none();
  // _kind has no default value.
  // _iterator has no default value.
  // _sliced_eqn has no default value.
  _var_ptr = omc_NBSlice_getT(threadData, _var_slice);

  _name = omc_NBVariable_getVarName(threadData, _var_ptr);

  _kind = (omc_NBVariable_isContinuous(threadData, _var_ptr, 1 /* true */)?1:2);

  if(_fixed)
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = omc_NBVariable_getStartAttribute(threadData, _var_ptr);
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            modelica_metatype tmpMeta6;
            if (optionNone(tmp4_1)) goto tmp3_end;
            tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
            _e = tmpMeta6;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!(!omc_NFExpression_isLiteralXML(threadData, _e))) goto tmp3_end;
            _start_exp = omc_NBInitialization_createStartExpressionSlice(threadData, _e, _var_slice, _var_ptr, _name ,&_var_ptr ,&_name ,NULL ,NULL ,&_iterator);
            tmpMeta1 = _start_exp;
            goto tmp3_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            _start_var_exp = omc_NBInitialization_createStartVariableSlice(threadData, _var_slice, _var_ptr, _name, _ptr_start_vars ,&_var_ptr ,&_name ,&_iterator);
            tmpMeta1 = _start_var_exp;
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
    _start_exp = tmpMeta1;

    _start_eq = mmc_mk_some(omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _name, 1 /* true */), _start_exp, _idx, _OMC_LIT66, _iterator, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none())));
  }
  else
  {
    { /* match expression */
      modelica_metatype tmp10_1;
      tmp10_1 = omc_NBVariable_getStartAttribute(threadData, _var_ptr);
      {
        volatile mmc_switch_type tmp10;
        int tmp11;
        tmp10 = 0;
        for (; tmp10 < 2; tmp10++) {
          switch (MMC_SWITCH_CAST(tmp10)) {
          case 0: {
            modelica_metatype tmpMeta12;
            modelica_metatype tmpMeta13;
            if (optionNone(tmp10_1)) goto tmp9_end;
            tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 1));
            _e = tmpMeta12;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!(!omc_NFExpression_isLiteralXML(threadData, _e))) goto tmp9_end;
            _start_exp = omc_NBInitialization_createStartExpressionSlice(threadData, _e, _var_slice, _var_ptr, _name ,&_var_ptr ,NULL ,&_start_var ,&_name ,&_iterator);

            _start_eq = mmc_mk_some(omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _name, 1 /* true */), _start_exp, _idx, _OMC_LIT66, _iterator, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none())));

            tmpMeta13 = mmc_mk_cons(_start_var, omc_Pointer_access(threadData, _ptr_start_vars));
            omc_Pointer_update(threadData, _ptr_start_vars, tmpMeta13);
            tmpMeta7 = _start_eq;
            goto tmp9_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmpMeta7 = mmc_mk_none();
            goto tmp9_done;
          }
          }
          goto tmp9_end;
          tmp9_end: ;
        }
        goto goto_8;
        goto_8:;
        MMC_THROW_INTERNAL();
        goto tmp9_done;
        tmp9_done:;
      }
    }
    _start_eq = tmpMeta7;
  }

  if(isSome(_start_eq))
  {
    if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var_slice), 3))))))
    {
      _sliced_eqn = omc_NBEquation_Equation_slice(threadData, omc_Util_getOption(threadData, _start_eq), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var_slice), 3))), NULL);

      omc_Pointer_update(threadData, _ptr_start_eqs, listAppend(omc_Pointer_access(threadData, _ptr_start_eqs), _sliced_eqn));
    }
    else
    {
      tmpMeta14 = mmc_mk_cons(omc_Util_getOption(threadData, _start_eq), omc_Pointer_access(threadData, _ptr_start_eqs));
      omc_Pointer_update(threadData, _ptr_start_eqs, tmpMeta14);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NBInitialization_createStartEquationSlice(threadData_t *threadData, modelica_metatype _var_slice, modelica_metatype _ptr_start_vars, modelica_metatype _ptr_start_eqs, modelica_metatype _idx, modelica_metatype _fixed)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_fixed);
  omc_NBInitialization_createStartEquationSlice(threadData, _var_slice, _ptr_start_vars, _ptr_start_eqs, _idx, tmp1);
  return;
}

DLLDirection
modelica_metatype omc_NBInitialization_createParameterEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _new_iters, modelica_metatype _idx, modelica_metatype __omcQ_24in_5Fparameter_5Feqs, modelica_metatype __omcQ_24in_5Finitial_5Fparam_5Fvars, modelica_metatype *out_initial_param_vars)
{
  modelica_metatype _parameter_eqs = NULL;
  modelica_metatype _initial_param_vars = NULL;
  modelica_metatype _parent = NULL;
  modelica_boolean _skip;
  modelica_boolean tmp1 = 0;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _parameter_eqs = __omcQ_24in_5Fparameter_5Feqs;
  _initial_param_vars = __omcQ_24in_5Finitial_5Fparam_5Fvars;
  // _parent has no default value.
  // _skip has no default value.
  if(omc_NBVariable_isConst(threadData, _var))
  {
    _skip = 1 /* true */;
  }
  else
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = omc_NBVariable_getParent(threadData, _var);
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            modelica_metatype tmpMeta6;
            if (optionNone(tmp4_1)) goto tmp3_end;
            tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
            _parent = tmpMeta6;
            /* Pattern matching succeeded */
            tmp1 = (omc_NBVariable_isBound(threadData, _parent) && omc_NBVariable_isKnownRecord(threadData, _parent));
            goto tmp3_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmp1 = (omc_NBVariable_isRecord(threadData, _var) && (!omc_NBVariable_isBound(threadData, _var)));
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
    _skip = tmp1;
  }

  if(_skip)
  {
    goto _return;
  }

  if(omc_NBVariable_isKnownRecord(threadData, _var))
  {
    if(((!omc_NBVariable_hasEvaluableBinding(threadData, _var)) && (omc_NBVariable_isBound(threadData, _var) || omc_NBVariable_hasStartAttr(threadData, _var))))
    {
      _initial_param_vars = listAppend(omc_NBVariable_getRecordChildren(threadData, _var), _initial_param_vars);

      tmpMeta7 = mmc_mk_cons(omc_NBEquation_Equation_generateBindingEquation(threadData, _var, _idx, 1 /* true */, _new_iters), _parameter_eqs);
      _parameter_eqs = tmpMeta7;
    }
    else
    {
      {
        modelica_metatype _c_var;
        for (tmpMeta8 = omc_NBVariable_getRecordChildren(threadData, _var); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
        {
          _c_var = MMC_CAR(tmpMeta8);
          if(omc_NBVariable_isBound(threadData, _c_var))
          {
            omc_NBVariable_setBindingAsStart(threadData, _c_var, 1 /* true */);
          }

          _parameter_eqs = omc_NBInitialization_createParameterEquation(threadData, _c_var, _new_iters, _idx, _parameter_eqs, _initial_param_vars ,&_initial_param_vars);
        }
      }
    }
  }
  else
  {
    if((!omc_NBVariable_isRecord(threadData, _var)))
    {
      if((!omc_NBVariable_hasEvaluableBinding(threadData, _var)))
      {
        tmpMeta10 = mmc_mk_cons(_var, _initial_param_vars);
        _initial_param_vars = tmpMeta10;

        if(omc_NBVariable_isFixed(threadData, _var))
        {
          tmpMeta11 = mmc_mk_cons(omc_NBEquation_Equation_generateBindingEquation(threadData, _var, _idx, 1 /* true */, _new_iters), _parameter_eqs);
          _parameter_eqs = tmpMeta11;
        }
      }
      else
      {
        if(omc_NBVariable_isBound(threadData, _var))
        {
          omc_NBVariable_setBindingAsStart(threadData, _var, 1 /* true */);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_initial_param_vars) { *out_initial_param_vars = _initial_param_vars; }
  return _parameter_eqs;
}

static modelica_metatype closure21_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLDirection
modelica_metatype omc_NBInitialization_createParameterEquations(threadData_t *threadData, modelica_metatype _parameters, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FinitialEqs, modelica_metatype __omcQ_24in_5FinitialVars, modelica_metatype _new_iters, modelica_metatype _idx, modelica_string _str, modelica_metatype *out_initialEqs, modelica_metatype *out_initialVars)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _initialEqs = NULL;
  modelica_metatype _initialVars = NULL;
  modelica_metatype _parameter_eqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _initial_param_vars = NULL;
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
  _equations = __omcQ_24in_5Fequations;
  _initialEqs = __omcQ_24in_5FinitialEqs;
  _initialVars = __omcQ_24in_5FinitialVars;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _parameter_eqs = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _initial_param_vars = tmpMeta2;
  {
    modelica_metatype _var;
    for (tmpMeta3 = omc_NBVariable_VariablePointers_toList(threadData, _parameters); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _var = MMC_CAR(tmpMeta3);
      _parameter_eqs = omc_NBInitialization_createParameterEquation(threadData, _var, _new_iters, _idx, _parameter_eqs, _initial_param_vars ,&_initial_param_vars);
    }
  }

  _equations = omc_NBEquation_EquationPointers_addList(threadData, _parameter_eqs, _equations);

  _initialEqs = omc_NBEquation_EquationPointers_addList(threadData, _parameter_eqs, _initialEqs);

  _initialVars = omc_NBVariable_VariablePointers_addList(threadData, _initial_param_vars, _initialVars);

  if(((omc_Flags_isSet(threadData, _OMC_LIT75) && (!listEmpty(_parameter_eqs))) || omc_Flags_isSet(threadData, _OMC_LIT78)))
  {
    tmpMeta5 = mmc_mk_box1(0, _OMC_LIT67);
    tmpMeta6 = stringAppend(_OMC_LIT68,_str);
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT69);
    tmpMeta8 = stringAppend(tmpMeta7,intString(listLength(_parameter_eqs)));
    tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT70);
    tmpMeta10 = stringAppend(omc_List_toString(threadData, _parameter_eqs, (modelica_fnptr) mmc_mk_box2(0,closure21_NBEquation_Equation_pointerToString,tmpMeta5), omc_StringUtil_headline__4(threadData, tmpMeta9), _OMC_LIT5, _OMC_LIT71, _OMC_LIT5, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT72);
    fputs(MMC_STRINGDATA(tmpMeta10),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_initialEqs) { *out_initialEqs = _initialEqs; }
  if (out_initialVars) { *out_initialVars = _initialVars; }
  return _equations;
}

DLLDirection
modelica_metatype omc_NBInitialization_createStartVar(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype __omcQ_24in_5Fname, modelica_metatype _subscripts, modelica_metatype *out_name, modelica_metatype *out_start_var, modelica_metatype *out_start_name)
{
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _start_var = NULL;
  modelica_metatype _start_name = NULL;
  modelica_metatype _var_pre = NULL;
  modelica_metatype _merged_name = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var_ptr = __omcQ_24in_5Fvar_5Fptr;
  _name = __omcQ_24in_5Fname;
  // _start_var has no default value.
  // _start_name has no default value.
  _var_pre = omc_NBVariable_getVarPre(threadData, _var_ptr, NULL);
  // _merged_name has no default value.
  if((omc_NBVariable_isPrevious(threadData, _var_ptr) && isSome(_var_pre)))
  {
    _merged_name = omc_NBVariable_getVarName(threadData, omc_Util_getOption(threadData, _var_pre));

    _merged_name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _merged_name, 1 /* true */, 1 /* true */, 1 /* true */);
  }
  else
  {
    if(isSome(_var_pre))
    {
      _merged_name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _name, 1 /* true */, 1 /* true */, 1 /* true */);

      _var_ptr = omc_Util_getOption(threadData, _var_pre);

      _name = omc_NBVariable_getVarName(threadData, _var_ptr);

      _name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _name, 1 /* true */, 1 /* true */, 1 /* true */);
    }
    else
    {
      _name = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, _name, 1 /* true */, 1 /* true */, 1 /* true */);

      _merged_name = _name;
    }
  }

  _start_name = omc_NBVariable_makeStartVar(threadData, _merged_name ,&_start_var);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NBVariable_getParent(threadData, _var_ptr);
    {
      modelica_metatype _parent = NULL;
      modelica_metatype _start_parent = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _parent has no default value.
      // _start_parent has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _parent = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = omc_NBVariable_getVarStart(threadData, _parent, NULL);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 2; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  modelica_metatype tmpMeta12;
                  if (optionNone(tmp10_1)) goto tmp9_end;
                  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 1));
                  _start_parent = tmpMeta12;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _start_parent;
                  goto tmp9_done;
                }
                case 1: {
                  modelica_metatype tmpMeta13;
                  
                  /* Pattern matching succeeded */
                  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
                  omc_NBInitialization_createStartVar(threadData, _parent, omc_NBVariable_getVarName(threadData, _parent), tmpMeta13 ,NULL ,&_start_parent ,NULL);
                  tmpMeta7 = _start_parent;
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_2;
              goto tmp9_done;
              tmp9_done:;
            }
          }
          _start_parent = tmpMeta7;

          omc_NBVariable_addRecordChild(threadData, _start_parent, _start_var);
          tmpMeta1 = omc_NBVariable_setParent(threadData, _start_var, _start_parent);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _start_var;
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
  _start_var = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_start_var) { *out_start_var = _start_var; }
  if (out_start_name) { *out_start_name = _start_name; }
  return _var_ptr;
}

DLLDirection
void omc_NBInitialization_createWhenReplacementEquation(threadData_t *threadData, modelica_metatype _tpl, modelica_metatype _ptr_start_eqs, modelica_metatype _idx)
{
  modelica_metatype _cref = NULL;
  modelica_metatype _iter = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _var_pre = NULL;
  modelica_metatype _pre = NULL;
  modelica_integer _kind;
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cref has no default value.
  // _iter has no default value.
  // _var_ptr has no default value.
  // _var_pre has no default value.
  // _pre has no default value.
  // _kind has no default value.
  // _eq has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _cref = tmpMeta2;
  _iter = tmpMeta3;

  _var_ptr = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT79);

  _var_pre = omc_NBVariable_getVarPre(threadData, _var_ptr, NULL);

  if(isSome(_var_pre))
  {
    _pre = omc_NBVariable_getVarName(threadData, omc_Util_getOption(threadData, _var_pre));

    _pre = omc_NFComponentRef_copySubscripts(threadData, _cref, _pre);

    _kind = (omc_NBVariable_isContinuous(threadData, _var_ptr, 1 /* true */)?1:2);

    _eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _cref, 1 /* true */), omc_NFExpression_fromCref(threadData, _pre, 1 /* true */), _idx, _OMC_LIT66, _iter, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none()));

    tmpMeta4 = mmc_mk_cons(_eq, omc_Pointer_access(threadData, _ptr_start_eqs));
    omc_Pointer_update(threadData, _ptr_start_eqs, tmpMeta4);
  }
  else
  {
    tmpMeta6 = stringAppend(_OMC_LIT84,omc_NFComponentRef_toString(threadData, _cref));
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT85);
    tmpMeta5 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addMessage(threadData, _OMC_LIT83, tmpMeta5);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}

static modelica_metatype closure22_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLDirection
modelica_metatype omc_NBInitialization_createWhenReplacementEquations(threadData_t *threadData, modelica_metatype _cref_map, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FinitialEqs, modelica_metatype _idx, modelica_metatype *out_initialEqs)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _initialEqs = NULL;
  modelica_metatype _ptr_start_eqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _start_eqs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equations = __omcQ_24in_5Fequations;
  _initialEqs = __omcQ_24in_5FinitialEqs;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_eqs = omc_Pointer_create(threadData, tmpMeta1);
  // _start_eqs has no default value.
  {
    modelica_metatype _tpl;
    for (tmpMeta2 = omc_UnorderedMap_toList(threadData, _cref_map); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _tpl = MMC_CAR(tmpMeta2);
      omc_NBInitialization_createWhenReplacementEquation(threadData, _tpl, _ptr_start_eqs, _idx);
    }
  }

  _start_eqs = omc_Pointer_access(threadData, _ptr_start_eqs);

  _equations = omc_NBEquation_EquationPointers_addList(threadData, _start_eqs, _equations);

  _initialEqs = omc_NBEquation_EquationPointers_addList(threadData, _start_eqs, _initialEqs);

  if((omc_Flags_isSet(threadData, _OMC_LIT75) && (!listEmpty(_start_eqs))))
  {
    tmpMeta4 = mmc_mk_box1(0, _OMC_LIT67);
    tmpMeta5 = stringAppend(_OMC_LIT86,intString(listLength(_start_eqs)));
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT70);
    tmpMeta7 = stringAppend(omc_List_toString(threadData, _start_eqs, (modelica_fnptr) mmc_mk_box2(0,closure22_NBEquation_Equation_pointerToString,tmpMeta4), omc_StringUtil_headline__4(threadData, tmpMeta6), _OMC_LIT5, _OMC_LIT71, _OMC_LIT5, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT72);
    fputs(MMC_STRINGDATA(tmpMeta7),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_initialEqs) { *out_initialEqs = _initialEqs; }
  return _equations;
}

DLLDirection
void omc_NBInitialization_createStartEquation(threadData_t *threadData, modelica_metatype _var, modelica_metatype _ptr_start_vars, modelica_metatype _ptr_start_vars_init, modelica_metatype _ptr_start_eqs, modelica_metatype _idx, modelica_metatype _algorithm_outputs)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((!omc_UnorderedSet_contains(threadData, omc_NBVariable_getVarName(threadData, _var), _algorithm_outputs)))
  {
    { /* match expression */
      modelica_metatype tmp3_1;
      tmp3_1 = omc_Pointer_access(threadData, _var);
      {
        modelica_metatype _name = NULL;
        modelica_metatype _start_name = NULL;
        modelica_metatype _start_var = NULL;
        modelica_metatype _start_eq = NULL;
        modelica_integer _kind;
        modelica_metatype _start_exp = NULL;
        volatile mmc_switch_type tmp3;
        int tmp4;
        // _name has no default value.
        // _start_name has no default value.
        // _start_var has no default value.
        // _start_eq has no default value.
        // _kind has no default value.
        // _start_exp has no default value.
        tmp3 = 0;
        for (; tmp3 < 4; tmp3++) {
          switch (MMC_SWITCH_CAST(tmp3)) {
          case 0: {
            modelica_metatype tmpMeta5;
            modelica_metatype tmpMeta6;
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,10) == 0) goto tmp2_end;
            
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!omc_NBVariable_isArray(threadData, _var)) goto tmp2_end;
            if(omc_NBVariable_isFixed(threadData, _var))
            {
              tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta6 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _var, tmpMeta5);
              omc_NBInitialization_createStartEquationSlice(threadData, tmpMeta6, _ptr_start_vars, _ptr_start_eqs, _idx, omc_NBVariable_isFixed(threadData, _var));
            }
            else
            {
              tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta8 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _var, tmpMeta7);
              omc_NBInitialization_createStartEquationSlice(threadData, tmpMeta8, _ptr_start_vars_init, _ptr_start_eqs, _idx, omc_NBVariable_isFixed(threadData, _var));
            }
            goto tmp2_done;
          }
          case 1: {
            modelica_metatype tmpMeta9;
            modelica_metatype tmpMeta17;
            if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,10) == 0) goto tmp2_end;
            
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!omc_NBVariable_isFixed(threadData, _var)) goto tmp2_end;
            _name = omc_NBVariable_getVarName(threadData, _var);

            { /* match expression */
              modelica_metatype tmp12_1;
              tmp12_1 = omc_NBVariable_getStartAttribute(threadData, _var);
              {
                modelica_metatype _e = NULL;
                volatile mmc_switch_type tmp12;
                int tmp13;
                // _e has no default value.
                tmp12 = 0;
                for (; tmp12 < 2; tmp12++) {
                  switch (MMC_SWITCH_CAST(tmp12)) {
                  case 0: {
                    modelica_metatype tmpMeta14;
                    if (optionNone(tmp12_1)) goto tmp11_end;
                    tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp12_1), 1));
                    _e = tmpMeta14;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!(!omc_NFExpression_isLiteralXML(threadData, _e))) goto tmp11_end;
                    tmpMeta9 = _e;
                    goto tmp11_done;
                  }
                  case 1: {
                    modelica_metatype tmpMeta15;
                    modelica_metatype tmpMeta16;
                    
                    /* Pattern matching succeeded */
                    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
                    omc_NBInitialization_createStartVar(threadData, _var, _name, tmpMeta15 ,&_name ,&_start_var ,&_start_name);

                    tmpMeta16 = mmc_mk_cons(_start_var, omc_Pointer_access(threadData, _ptr_start_vars));
                    omc_Pointer_update(threadData, _ptr_start_vars, tmpMeta16);
                    tmpMeta9 = omc_NFExpression_fromCref(threadData, _start_name, 0 /* false */);
                    goto tmp11_done;
                  }
                  }
                  goto tmp11_end;
                  tmp11_end: ;
                }
                goto goto_10;
                goto_10:;
                goto goto_1;
                goto tmp11_done;
                tmp11_done:;
              }
            }
            _start_exp = tmpMeta9;

            _kind = (omc_NBVariable_isContinuous(threadData, _var, 1 /* true */)?1:2);

            _start_eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _name, 0 /* false */), _start_exp, _idx, _OMC_LIT66, _OMC_LIT65, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none()));

            tmpMeta17 = mmc_mk_cons(_start_eq, omc_Pointer_access(threadData, _ptr_start_eqs));
            omc_Pointer_update(threadData, _ptr_start_eqs, tmpMeta17);
            goto tmp2_done;
          }
          case 2: {
            if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,10) == 0) goto tmp2_end;
            
            /* Pattern matching succeeded */
            { /* match expression */
              modelica_metatype tmp20_1;
              tmp20_1 = omc_NBVariable_getStartAttribute(threadData, _var);
              {
                modelica_metatype _e = NULL;
                volatile mmc_switch_type tmp20;
                int tmp21;
                // _e has no default value.
                tmp20 = 0;
                for (; tmp20 < 2; tmp20++) {
                  switch (MMC_SWITCH_CAST(tmp20)) {
                  case 0: {
                    modelica_metatype tmpMeta22;
                    modelica_metatype tmpMeta23;
                    modelica_metatype tmpMeta24;
                    modelica_metatype tmpMeta25;
                    if (optionNone(tmp20_1)) goto tmp19_end;
                    tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp20_1), 1));
                    _e = tmpMeta22;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!(!omc_NFExpression_isLiteralXML(threadData, _e))) goto tmp19_end;
                    tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
                    omc_NBInitialization_createStartVar(threadData, _var, omc_NBVariable_getVarName(threadData, _var), tmpMeta23 ,NULL ,&_start_var ,&_start_name);

                    _kind = (omc_NBVariable_isContinuous(threadData, _var, 1 /* true */)?1:2);

                    _start_eq = omc_NBEquation_Equation_makeAssignment(threadData, omc_NFExpression_fromCref(threadData, _start_name, 0 /* false */), _e, _idx, _OMC_LIT66, _OMC_LIT65, omc_NBEquation_default(threadData, (modelica_integer)_kind, 1 /* true */, mmc_mk_none(), mmc_mk_none()));

                    tmpMeta24 = mmc_mk_cons(_start_eq, omc_Pointer_access(threadData, _ptr_start_eqs));
                    omc_Pointer_update(threadData, _ptr_start_eqs, tmpMeta24);

                    tmpMeta25 = mmc_mk_cons(_start_var, omc_Pointer_access(threadData, _ptr_start_vars_init));
                    omc_Pointer_update(threadData, _ptr_start_vars_init, tmpMeta25);
                    goto tmp19_done;
                  }
                  case 1: {
                    
                    /* Pattern matching succeeded */
                    goto tmp19_done;
                  }
                  }
                  goto tmp19_end;
                  tmp19_end: ;
                }
                goto goto_18;
                goto_18:;
                goto goto_1;
                goto tmp19_done;
                tmp19_done:;
              }
            }
            ;
            goto tmp2_done;
          }
          case 3: {
            
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
  }
  _return: OMC_LABEL_UNUSED
  return;
}

static void closure23_NBInitialization_createStartEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype var)
{
  modelica_metatype ptr_start_vars = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype ptr_start_vars_init = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype ptr_start_eqs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype idx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype algorithm_outputs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  boxptr_NBInitialization_createStartEquation(thData, var, ptr_start_vars, ptr_start_vars_init, ptr_start_eqs, idx, algorithm_outputs);
}static modelica_metatype closure24_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLDirection
modelica_metatype omc_NBInitialization_createStartEquations(threadData_t *threadData, modelica_metatype _states, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5FinitialVars, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype __omcQ_24in_5FinitialEqs, modelica_metatype _idx, modelica_metatype _algorithm_outputs, modelica_string _str, modelica_metatype *out_initialVars, modelica_metatype *out_equations, modelica_metatype *out_initialEqs)
{
  modelica_metatype _variables = NULL;
  modelica_metatype _initialVars = NULL;
  modelica_metatype _equations = NULL;
  modelica_metatype _initialEqs = NULL;
  modelica_metatype _ptr_start_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ptr_start_vars_init = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _ptr_start_eqs = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _start_eqs = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _variables = __omcQ_24in_5Fvariables;
  _initialVars = __omcQ_24in_5FinitialVars;
  _equations = __omcQ_24in_5Fequations;
  _initialEqs = __omcQ_24in_5FinitialEqs;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_vars = omc_Pointer_create(threadData, tmpMeta1);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_vars_init = omc_Pointer_create(threadData, tmpMeta2);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _ptr_start_eqs = omc_Pointer_create(threadData, tmpMeta3);
  // _start_eqs has no default value.
  tmpMeta4 = mmc_mk_box5(0, _ptr_start_vars, _ptr_start_vars_init, _ptr_start_eqs, _idx, _algorithm_outputs);
  omc_NBVariable_VariablePointers_mapPtr(threadData, _states, (modelica_fnptr) mmc_mk_box2(0,closure23_NBInitialization_createStartEquation,tmpMeta4));

  _start_eqs = omc_Pointer_access(threadData, _ptr_start_eqs);

  _variables = omc_NBVariable_VariablePointers_addList(threadData, omc_Pointer_access(threadData, _ptr_start_vars), _variables);

  _initialVars = omc_NBVariable_VariablePointers_addList(threadData, omc_Pointer_access(threadData, _ptr_start_vars_init), _initialVars);

  _equations = omc_NBEquation_EquationPointers_addList(threadData, _start_eqs, _equations);

  _initialEqs = omc_NBEquation_EquationPointers_addList(threadData, _start_eqs, _initialEqs);

  if((omc_Flags_isSet(threadData, _OMC_LIT75) && (!listEmpty(_start_eqs))))
  {
    tmpMeta5 = mmc_mk_box1(0, _OMC_LIT67);
    tmpMeta6 = stringAppend(_OMC_LIT87,_str);
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT88);
    tmpMeta8 = stringAppend(tmpMeta7,intString(listLength(_start_eqs)));
    tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT70);
    tmpMeta10 = stringAppend(omc_List_toString(threadData, _start_eqs, (modelica_fnptr) mmc_mk_box2(0,closure24_NBEquation_Equation_pointerToString,tmpMeta5), omc_StringUtil_headline__4(threadData, tmpMeta9), _OMC_LIT5, _OMC_LIT71, _OMC_LIT5, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT72);
    fputs(MMC_STRINGDATA(tmpMeta10),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_initialVars) { *out_initialVars = _initialVars; }
  if (out_equations) { *out_equations = _equations; }
  if (out_initialEqs) { *out_initialEqs = _initialEqs; }
  return _variables;
}

static modelica_metatype closure25_NBInitialization_removeWhenEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn)
{
  modelica_metatype iter = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype cref_map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBInitialization_removeWhenEquation(thData, $in_eqn, iter, cref_map);
}static modelica_metatype closure26_NBInitialization_collectAlgorithmOutputs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn)
{
  modelica_metatype outputs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBInitialization_collectAlgorithmOutputs(thData, $in_eqn, outputs);
}static modelica_metatype closure27_NBackendDAE_simplify(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_bdae)
{
  modelica_metatype init = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBackendDAE_simplify(thData, $in_bdae, init);
}static modelica_metatype closure28_NBInline_main(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_bdae)
{
  modelica_metatype inline_types = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype init = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBInline_main(thData, $in_bdae, inline_types, init);
}static modelica_metatype closure29_NBPartitioning_main(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_bdae)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBPartitioning_main(thData, $in_bdae, kind);
}static modelica_metatype closure30_NBCausalize_main(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_bdae)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBCausalize_main(thData, $in_bdae, kind);
}static modelica_metatype closure31_NBTearing_main(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_bdae)
{
  modelica_metatype kind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBTearing_main(thData, $in_bdae, kind);
}
DLLDirection
modelica_metatype omc_NBInitialization_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype _variables = NULL;
  modelica_metatype _initialVars = NULL;
  modelica_metatype _equations = NULL;
  modelica_metatype _initialEqs = NULL;
  modelica_metatype _modules = NULL;
  modelica_metatype _clocks = NULL;
  modelica_metatype _followEquations = NULL;
  modelica_metatype _eq_filter_opt = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  // _variables has no default value.
  // _initialVars has no default value.
  // _equations has no default value.
  // _initialEqs has no default value.
  // _modules has no default value.
  // _clocks has no default value.
  _followEquations = omc_Flags_getConfigStringList(threadData, _OMC_LIT91);
  // _eq_filter_opt has no default value.
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
          modelica_metatype tmpMeta39;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp8_1;
            tmp8_1 = _bdae;
            {
              modelica_metatype _varData = NULL;
              modelica_metatype _eqData = NULL;
              modelica_metatype _clonedEqns = NULL;
              modelica_metatype _clonedVars = NULL;
              modelica_metatype _algorithm_outputs = NULL;
              modelica_metatype _new_iters = NULL;
              modelica_metatype _cref_map = NULL;
              volatile mmc_switch_type tmp8;
              int tmp9;
              // _varData has no default value.
              // _eqData has no default value.
              // _clonedEqns has no default value.
              // _clonedVars has no default value.
              _algorithm_outputs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
              _new_iters = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));
              _cref_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
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
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  modelica_metatype tmpMeta19;
                  modelica_metatype tmpMeta20;
                  modelica_metatype tmpMeta21;
                  modelica_metatype tmpMeta22;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,13) == 0) goto tmp7_end;
                  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 10));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,24) == 0) goto tmp7_end;
                  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
                  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 6));
                  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 11));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,9) == 0) goto tmp7_end;
                  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
                  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 8));
                  
                  _varData = tmpMeta10;
                  _variables = tmpMeta11;
                  _initialVars = tmpMeta12;
                  _eqData = tmpMeta13;
                  _equations = tmpMeta14;
                  _initialEqs = tmpMeta15;
                  /* Pattern matching succeeded */
                  _clonedEqns = omc_NBEquation_EquationPointers_clone(threadData, _equations, 0 /* false */);

                  _initialEqs = omc_NBEquation_EquationPointers_addList(threadData, omc_NBEquation_EquationPointers_toList(threadData, _initialEqs), _clonedEqns);

                  omc_NBEquation_EquationPointers_mapRemovePtr(threadData, _initialEqs, boxvar_NBEquation_Equation_isClocked);

                  omc_NBEquation_EquationPointers_mapPtr(threadData, _initialEqs, boxvar_NBInitialization_replaceClockedFunctionsEqn);

                  tmpMeta16 = mmc_mk_box2(0, _OMC_LIT65, _cref_map);
                  _initialEqs = omc_NBEquation_EquationPointers_map(threadData, _initialEqs, (modelica_fnptr) mmc_mk_box2(0,closure25_NBInitialization_removeWhenEquation,tmpMeta16));

                  _equations = omc_NBInitialization_createWhenReplacementEquations(threadData, _cref_map, _equations, _initialEqs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))) ,&_initialEqs);

                  tmpMeta17 = mmc_mk_box1(0, _algorithm_outputs);
                  omc_NBEquation_EquationPointers_map(threadData, _initialEqs, (modelica_fnptr) mmc_mk_box2(0,closure26_NBInitialization_collectAlgorithmOutputs,tmpMeta17));

                  _variables = omc_NBInitialization_createStartEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 17))), _variables, _initialVars, _equations, _initialEqs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), _algorithm_outputs, _OMC_LIT92 ,&_initialVars ,&_equations ,&_initialEqs);

                  _variables = omc_NBInitialization_createStartEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 11))), _variables, _initialVars, _equations, _initialEqs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), _algorithm_outputs, _OMC_LIT93 ,&_initialVars ,&_equations ,&_initialEqs);

                  _variables = omc_NBInitialization_createStartEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 12))), _variables, _initialVars, _equations, _initialEqs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), _algorithm_outputs, _OMC_LIT94 ,&_initialVars ,&_equations ,&_initialEqs);

                  _variables = omc_NBInitialization_createStartEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 13))), _variables, _initialVars, _equations, _initialEqs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), _algorithm_outputs, _OMC_LIT95 ,&_initialVars ,&_equations ,&_initialEqs);

                  _variables = omc_NBInitialization_createStartEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 14))), _variables, _initialVars, _equations, _initialEqs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), _algorithm_outputs, _OMC_LIT96 ,&_initialVars ,&_equations ,&_initialEqs);

                  _equations = omc_NBInitialization_createParameterEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 20))), _equations, _initialEqs, _initialVars, _new_iters, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), _OMC_LIT97 ,&_initialEqs ,&_initialVars);

                  _equations = omc_NBInitialization_createParameterEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 22))), _equations, _initialEqs, _initialVars, _new_iters, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), _OMC_LIT98 ,&_initialEqs ,&_initialVars);

                  _equations = omc_NBInitialization_createParameterEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 23))), _equations, _initialEqs, _initialVars, _new_iters, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), _OMC_LIT99 ,&_initialEqs ,&_initialVars);

                  _clonedVars = omc_NBVariable_VariablePointers_clone(threadData, _initialVars, 1 /* true */);

                  omc_NBVariable_VariablePointers_mapRemovePtr(threadData, _clonedVars, boxvar_NBVariable_isClocked);

                  tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(26));
                  memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_varData), 26*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[3] = _variables;
                  _varData = tmpMeta18;

                  tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(26));
                  memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_varData), 26*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[6] = omc_NBVariable_VariablePointers_compress(threadData, _clonedVars);
                  _varData = tmpMeta19;

                  tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(11));
                  memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[3] = _equations;
                  _eqData = tmpMeta20;

                  tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(11));
                  memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[8] = omc_NBEquation_EquationPointers_compress(threadData, _initialEqs);
                  _eqData = tmpMeta21;

                  tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[11] = _eqData;
                  _bdae = tmpMeta22;
                  tmpMeta5 = omc_NBackendDAE_setVarData(threadData, _bdae, omc_NBVariable_VarData_addTypedList(threadData, _varData, omc_UnorderedSet_toList(threadData, _new_iters), 9));
                  goto tmp7_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  omc_Error_addMessage(threadData, _OMC_LIT83, _OMC_LIT101);
                  goto goto_6;
                  goto tmp7_done;
                }
                }
                goto tmp7_end;
                tmp7_end: ;
              }
              goto goto_6;
              goto_6:;
              goto goto_1;
              goto tmp7_done;
              tmp7_done:;
            }
          }
          _bdae = tmpMeta5;

          if(listEmpty(_followEquations))
          {
            _eq_filter_opt = mmc_mk_none();
          }
          else
          {
            _eq_filter_opt = mmc_mk_some(omc_UnorderedSet_fromList(threadData, _followEquations, boxvar_stringHashDjb2, boxvar_stringEqual));
          }

          tmpMeta24 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
          tmpMeta25 = mmc_mk_box2(0, (modelica_fnptr) mmc_mk_box2(0,closure27_NBackendDAE_simplify,tmpMeta24), _OMC_LIT102);
          tmpMeta26 = mmc_mk_box2(0, _OMC_LIT110, mmc_mk_boolean(1 /* true */));
          tmpMeta27 = mmc_mk_box2(0, (modelica_fnptr) mmc_mk_box2(0,closure28_NBInline_main,tmpMeta26), _OMC_LIT111);
          tmpMeta28 = mmc_mk_box1(0, mmc_mk_integer(5));
          tmpMeta29 = mmc_mk_box2(0, (modelica_fnptr) mmc_mk_box2(0,closure29_NBPartitioning_main,tmpMeta28), _OMC_LIT112);
          tmpMeta30 = mmc_mk_box2(0, boxvar_NBInitialization_cleanup, _OMC_LIT113);
          tmpMeta31 = mmc_mk_box1(0, mmc_mk_integer(5));
          tmpMeta32 = mmc_mk_box2(0, (modelica_fnptr) mmc_mk_box2(0,closure30_NBCausalize_main,tmpMeta31), _OMC_LIT114);
          tmpMeta33 = mmc_mk_box1(0, mmc_mk_integer(5));
          tmpMeta34 = mmc_mk_box2(0, (modelica_fnptr) mmc_mk_box2(0,closure31_NBTearing_main,tmpMeta33), _OMC_LIT115);
          tmpMeta23 = mmc_mk_cons(tmpMeta25, mmc_mk_cons(tmpMeta27, mmc_mk_cons(tmpMeta29, mmc_mk_cons(tmpMeta30, mmc_mk_cons(tmpMeta32, mmc_mk_cons(tmpMeta34, MMC_REFSTRUCTLIT(mmc_nil)))))));
          _modules = tmpMeta23;

          _bdae = omc_NBackendDAE_applyModules(threadData, _bdae, _modules, _eq_filter_opt, ((modelica_integer) 30) ,&_clocks);

          if(omc_Flags_isSet(threadData, _OMC_LIT119))
          {
            if((!listEmpty(_clocks)))
            {
              fputs(MMC_STRINGDATA(omc_StringUtil_headline__4(threadData, _OMC_LIT116)),stdout);

              {
                modelica_metatype __omcQ_24tmpVar87;
                modelica_metatype* tmp36;
                modelica_metatype tmpMeta37;
                modelica_string __omcQ_24tmpVar86;
                modelica_integer tmp38;
                modelica_metatype _clck_loopVar = 0;
                modelica_metatype _clck;
                _clck_loopVar = _clocks;
                tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar87 = tmpMeta37; /* defaultValue */
                tmp36 = &__omcQ_24tmpVar87;
                while(1) {
                  tmp38 = 1;
                  if (!listEmpty(_clck_loopVar)) {
                    _clck = MMC_CAR(_clck_loopVar);
                    _clck_loopVar = MMC_CDR(_clck_loopVar);
                    tmp38--;
                  }
                  if (tmp38 == 0) {
                    __omcQ_24tmpVar86 = omc_NBModule_moduleClockString(threadData, _clck);
                    *tmp36 = mmc_mk_cons(__omcQ_24tmpVar86,0);
                    tmp36 = &MMC_CDR(*tmp36);
                  } else if (tmp38 == 1) {
                    break;
                  } else {
                    goto goto_1;
                  }
                }
                *tmp36 = mmc_mk_nil();
                tmpMeta35 = __omcQ_24tmpVar87;
              }
              tmpMeta39 = stringAppend(stringDelimitList(tmpMeta35, _OMC_LIT71),_OMC_LIT71);
              fputs(MMC_STRINGDATA(tmpMeta39),stdout);
            }
          }
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT83, _OMC_LIT121);

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
  return _bdae;
}

