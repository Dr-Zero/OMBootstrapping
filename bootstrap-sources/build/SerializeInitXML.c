#include "omc_simulation_settings.h"
#include "SerializeInitXML.h"
#define _OMC_LIT0_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,4,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,5,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "%d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,2,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "-%02d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,5,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "T%02d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,5,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ":%02d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,5,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ":%02dZ"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,6,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "\"alias\" aliasVariable=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,23,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "\" aliasVariableId=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,19,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "\"negatedAlias\" aliasVariable=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,30,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "\"noAlias\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,9,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "discrete"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,8,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "parameter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,9,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "constant"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,8,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "continuous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,10,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,4,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "output"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,6,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "input"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,5,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "local"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,5,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "calculatedParameter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,19,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,0,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,2,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data " fixed=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,8,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "<Integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,8,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "start"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,5,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,3,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,3,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "unit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,4,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "displayUnit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,11,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data " />"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,3,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "<Real"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,5,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "useNominal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,10,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "nominal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,7,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "<Boolean"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,8,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "<String"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,7,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "<ExternalObject path=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,22,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,1,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "\" />"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,4,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "SerializeInitXML.scalarVariableType: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,37,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/SimCode/SerializeInitXML.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,80,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT42_6,1.770631566e9);
#define _OMC_LIT42_6 MMC_REFREALLIT(_OMC_LIT_STRUCT42_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT41,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(472)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(472)),MMC_IMMEDIATE(MMC_TAGFIXNUM(98)),_OMC_LIT42_6}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "    name = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,12,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,2,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "    valueReference = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,22,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "    description = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,19,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "    variability = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,19,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "\" isDiscrete = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,16,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "    causality = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,17,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "\" isValueChangeable = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,23,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "    inputIndex = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,18,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "    alias = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,12,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,1,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "    classIndex = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,18,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "\" classType = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,15,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "    isProtected = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,19,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "\" hideResult = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,16,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "\" isEncrypted = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,17,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "\" initNonlinear = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,19,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "    fileName = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,16,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "\" startLine = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,15,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "\" startColumn = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,17,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "\" endLine = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,13,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "\" endColumn = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,15,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "\" fileWritable = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,18,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "\">\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,3,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "    <Dimension start=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,22,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "\"/>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,4,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "ArrayVariable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,13,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "ScalarVariable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,14,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "  <"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,3,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,4,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "\n  </"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,5,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data ">\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,2,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "omsic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,5,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "omsicpp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,7,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "rSta"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,4,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "rDer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,4,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "rAlg"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,4,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "rPar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,4,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "rAli"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,4,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "iAlg"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,4,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "iPar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,4,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "iAli"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,4,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "bAlg"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,4,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "bPar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,4,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "bAli"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,4,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "sAlg"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,4,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "sPar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,4,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "sAli"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,4,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "rSen"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,4,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,1,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "_init.xml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,9,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "2.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,3,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "1.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,3,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "<?xml version = \"1.0\" encoding=\"UTF-8\"?>\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,42,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "<!-- description of the model interface using an extention of the FMI standard -->\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,83,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "<fmiModelDescription\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,21,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "  fmiVersion                          = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,41,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,3,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "  modelName                           = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,41,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "  modelIdentifier                     = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,41,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,1,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "  OPENMODELICAHOME                    = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,41,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "  guid                                = \"{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,42,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "}\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,4,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "  description                         = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,41,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "  generationTool                      = \"OpenModelica Compiler "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,63,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "  generationDateAndTime               = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,41,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "  variableNamingConvention            = \"structured\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,54,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "  numberOfEventIndicators             = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,41,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "\"  cmt_numberOfEventIndicators             = \"NG:       number of zero crossings,                           FMI\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,113,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "  numberOfTimeEvents                  = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,41,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "\"  cmt_numberOfTimeEvents                  = \"NG_SAM:   number of zero crossings that are samples,          OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,114,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "  numberOfInputVariables              = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,41,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "\"  cmt_numberOfInputVariables              = \"NI:       number of inputvar on topmodel,                     OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,113,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "  numberOfOutputVariables             = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,41,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "\"  cmt_numberOfOutputVariables             = \"NO:       number of outputvar on topmodel,                    OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,114,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "  numberOfExternalObjects             = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,41,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "\"  cmt_numberOfExternalObjects             = \"NEXT:     number of external objects,                         OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,113,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "  numberOfFunctions                   = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,41,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "\"  cmt_numberOfFunctions                   = \"NFUNC:    number of functions used by the simulation,         OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,114,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "  numberOfContinuousStates            = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,41,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "\"  cmt_numberOfContinuousStates            = \"NX:       number of states,                                   FMI\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,113,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "  numberOfRealAlgebraicVariables      = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,41,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "\"  cmt_numberOfRealAlgebraicVariables      = \"NY:       number of real variables,                           OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,113,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "  numberOfRealAlgebraicAliasVariables = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,41,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "\"  cmt_numberOfRealAlgebraicAliasVariables = \"NA:       number of alias variables,                          OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,113,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "  numberOfRealParameters              = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,41,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "\"  cmt_numberOfRealParameters              = \"NP:       number of parameters,                               OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,114,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "  numberOfIntegerAlgebraicVariables   = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,41,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "\"  cmt_numberOfIntegerAlgebraicVariables   = \"NYINT:    number of alg. int variables,                       OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,113,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "  numberOfIntegerAliasVariables       = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,41,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "\"  cmt_numberOfIntegerAliasVariables       = \"NAINT:    number of alias int variables,                      OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,113,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "  numberOfIntegerParameters           = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,41,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "\"  cmt_numberOfIntegerParameters           = \"NPINT:    number of int parameters,                           OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,114,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "  numberOfStringAlgebraicVariables    = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,41,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "\"  cmt_numberOfStringAlgebraicVariables    = \"NYSTR:    number of alg. string variables,                    OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,113,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "  numberOfStringAliasVariables        = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,41,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "\"  cmt_numberOfStringAliasVariables        = \"NASTR:    number of alias string variables,                   OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,113,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "  numberOfStringParameters            = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,41,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "\"  cmt_numberOfStringParameters            = \"NPSTR:    number of string parameters,                        OMC\"\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,114,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "  numberOfBooleanAlgebraicVariables   = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,41,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "\"  cmt_numberOfBooleanAlgebraicVariables   = \"NYBOOL:   number of alg. bool variables,                      OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,113,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "  numberOfBooleanAliasVariables       = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,41,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "\"  cmt_numberOfBooleanAliasVariables       = \"NABOOL:   number of alias bool variables,                     OMC\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,113,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "  numberOfBooleanParameters           = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,41,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "\"  cmt_numberOfBooleanParameters           = \"NPBOOL:   number of bool parameters,                          OMC\" >\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,117,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "  <!-- startTime, stopTime, tolerance are FMI specific, all others are OMC specific -->\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,88,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "  <DefaultExperiment\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,21,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "    startTime      = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,22,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
#define _OMC_LIT152_data "%.15g"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT152,5,_OMC_LIT152_data);
#define _OMC_LIT152 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "    stopTime       = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,22,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "    stepSize       = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,22,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
#define _OMC_LIT155_data "    tolerance      = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT155,22,_OMC_LIT155_data);
#define _OMC_LIT155 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT155)
#define _OMC_LIT156_data "    solver         = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT156,22,_OMC_LIT156_data);
#define _OMC_LIT156 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT156)
#define _OMC_LIT157_data "    outputFormat   = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT157,22,_OMC_LIT157_data);
#define _OMC_LIT157 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT157)
#define _OMC_LIT158_data "    variableFilter = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT158,22,_OMC_LIT158_data);
#define _OMC_LIT158 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data "\" />\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,6,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
#define _OMC_LIT160_data "  <!-- variables in the model -->\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT160,34,_OMC_LIT160_data);
#define _OMC_LIT160 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data "  <ModelVariables>\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,20,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
#define _OMC_LIT162_data "\n\n\n  </ModelVariables>\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT162,24,_OMC_LIT162_data);
#define _OMC_LIT162 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data "\n</fmiModelDescription>\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,25,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#include "util/modelica.h"

#include "SerializeInitXML_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeInitXML_expString(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_expString,2,0) {(void*) boxptr_SerializeInitXML_expString,0}};
#define boxvar_SerializeInitXML_expString MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_expString)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_xsdateTime(threadData_t *threadData, modelica_complex _file, modelica_metatype _dt);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_xsdateTime(threadData_t *threadData, modelica_metatype _file, modelica_metatype _dt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_xsdateTime,2,0) {(void*) boxptr_SerializeInitXML_xsdateTime,0}};
#define boxvar_SerializeInitXML_xsdateTime MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_xsdateTime)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_getAliasVar(threadData_t *threadData, modelica_complex _file, modelica_metatype _simVar);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_getAliasVar(threadData_t *threadData, modelica_metatype _file, modelica_metatype _simVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_getAliasVar,2,0) {(void*) boxptr_SerializeInitXML_getAliasVar,0}};
#define boxvar_SerializeInitXML_getAliasVar MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_getAliasVar)
PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeInitXML_getVariablity(threadData_t *threadData, modelica_metatype _varKind);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_getVariablity,2,0) {(void*) boxptr_SerializeInitXML_getVariablity,0}};
#define boxvar_SerializeInitXML_getVariablity MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_getVariablity)
PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeInitXML_getCausality(threadData_t *threadData, modelica_metatype _c);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_getCausality,2,0) {(void*) boxptr_SerializeInitXML_getCausality,0}};
#define boxvar_SerializeInitXML_getCausality MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_getCausality)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData_t *threadData, modelica_complex _file, modelica_string _attr, modelica_string _name);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeStringAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _attr, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeStringAttribute,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableTypeStringAttribute,0}};
#define boxvar_SerializeInitXML_scalarVariableTypeStringAttribute MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeStringAttribute)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _attr, modelica_string _name);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _attr, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeAttribute,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableTypeAttribute,0}};
#define boxvar_SerializeInitXML_scalarVariableTypeAttribute MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeAttribute)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData_t *threadData, modelica_complex _file, modelica_boolean _isFixed);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _isFixed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeFixedAttribute,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableTypeFixedAttribute,0}};
#define boxvar_SerializeInitXML_scalarVariableTypeFixedAttribute MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeFixedAttribute)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeUseAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _attr, modelica_string _use, modelica_string _name);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeUseAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _attr, modelica_metatype _use, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeUseAttribute,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableTypeUseAttribute,0}};
#define boxvar_SerializeInitXML_scalarVariableTypeUseAttribute MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableTypeUseAttribute)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableType(threadData_t *threadData, modelica_complex _file, modelica_metatype _v);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableType(threadData_t *threadData, modelica_metatype _file, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableType,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableType,0}};
#define boxvar_SerializeInitXML_scalarVariableType MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableType)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _simVar, modelica_string _classType, modelica_integer _valueReference, modelica_integer _classIndex);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _simVar, modelica_metatype _classType, modelica_metatype _valueReference, modelica_metatype _classIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableAttribute,2,0) {(void*) boxptr_SerializeInitXML_scalarVariableAttribute,0}};
#define boxvar_SerializeInitXML_scalarVariableAttribute MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariableAttribute)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariable(threadData_t *threadData, modelica_complex _file, modelica_metatype _var, modelica_string _classType, modelica_integer _valueReference, modelica_integer _classIndex);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariable(threadData_t *threadData, modelica_metatype _file, modelica_metatype _var, modelica_metatype _classType, modelica_metatype _valueReference, modelica_metatype _classIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariable,2,0) {(void*) boxptr_SerializeInitXML_scalarVariable,0}};
#define boxvar_SerializeInitXML_scalarVariable MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariable)
PROTECTED_FUNCTION_STATIC modelica_integer omc_SerializeInitXML_scalarVariables(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_string _classType, modelica_integer __omcQ_24in_5FvalueReference, modelica_integer __omcQ_24in_5Findex, modelica_integer *out_index);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeInitXML_scalarVariables(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _classType, modelica_metatype __omcQ_24in_5FvalueReference, modelica_metatype __omcQ_24in_5Findex, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariables,2,0) {(void*) boxptr_SerializeInitXML_scalarVariables,0}};
#define boxvar_SerializeInitXML_scalarVariables MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_scalarVariables)
PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_modelVariables(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_modelVariables(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_modelVariables,2,0) {(void*) boxptr_SerializeInitXML_modelVariables,0}};
#define boxvar_SerializeInitXML_modelVariables MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_modelVariables)

PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeInitXML_expString(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = realString(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_Util_escapeModelicaStringToXmlString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))))?_OMC_LIT0:_OMC_LIT1);
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))));
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_isSimpleLiteralValue(threadData, _exp, 1 /* true */)) goto tmp3_end;
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_string __omcQ_24tmpVar2;
            modelica_integer tmp9;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar3;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar2 = omc_SerializeInitXML_expString(threadData, _e);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar3;
          }
          tmp1 = stringDelimitList(tmpMeta6, _OMC_LIT2);
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,27,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _exp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_xsdateTime(threadData_t *threadData, modelica_complex _file, modelica_metatype _dt)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 7)))), _OMC_LIT3);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 6)))), _OMC_LIT4);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 5)))), _OMC_LIT4);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 4)))), _OMC_LIT5);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 3)))), _OMC_LIT6);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dt), 2)))), _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_xsdateTime(threadData_t *threadData, modelica_metatype _file, modelica_metatype _dt)
{
  omc_SerializeInitXML_xsdateTime(threadData, _file, _dt);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_getAliasVar(threadData_t *threadData, modelica_complex _file, modelica_metatype _simVar)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _simVar;
    {
      modelica_metatype _aliasvar = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _aliasvar has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 16));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,1,1) == 0) goto tmp2_end;
          
          _aliasvar = tmpMeta5;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT8);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aliasvar), 2))), 4);

          omc_File_write(threadData, _file, _OMC_LIT9);

          omc_File_write(threadData, _file, omc_SimCodeUtil_getValueReference(threadData, _simVar, omc_SimCodeUtil_getSimCode(threadData), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT10);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 16));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp2_end;
          
          _aliasvar = tmpMeta6;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT11);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aliasvar), 2))), 4);

          omc_File_write(threadData, _file, _OMC_LIT9);

          omc_File_write(threadData, _file, omc_SimCodeUtil_getValueReference(threadData, _simVar, omc_SimCodeUtil_getSimCode(threadData), 1 /* true */));

          omc_File_write(threadData, _file, _OMC_LIT10);
          goto tmp2_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT12);
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_getAliasVar(threadData_t *threadData, modelica_metatype _file, modelica_metatype _simVar)
{
  omc_SerializeInitXML_getAliasVar(threadData, _file, _simVar);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeInitXML_getVariablity(threadData_t *threadData, modelica_metatype _varKind)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _varKind;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT13;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT15;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT16;
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

PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeInitXML_getCausality(threadData_t *threadData, modelica_metatype _c)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _c;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT17;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT18;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT19;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT20;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,4,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,5,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT21;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT20;
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

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData_t *threadData, modelica_complex _file, modelica_string _attr, modelica_string _name)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((stringEqual(_attr, _OMC_LIT22)))
  {
    goto _return;
  }

  omc_File_write(threadData, _file, _OMC_LIT2);

  omc_File_write(threadData, _file, _name);

  omc_File_write(threadData, _file, _OMC_LIT23);

  omc_File_writeEscape(threadData, _file, _attr, 4);

  omc_File_write(threadData, _file, _OMC_LIT10);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeStringAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _attr, modelica_metatype _name)
{
  omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, _attr, _name);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _attr, modelica_string _name)
{
  modelica_string _expStr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expStr has no default value.
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
          _expStr = omc_SerializeInitXML_expString(threadData, omc_Util_getOption(threadData, _attr));

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_write(threadData, _file, _name);

          omc_File_write(threadData, _file, _OMC_LIT23);

          omc_File_write(threadData, _file, _expStr);

          omc_File_write(threadData, _file, _OMC_LIT10);
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _attr, modelica_metatype _name)
{
  omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _attr, _name);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData_t *threadData, modelica_complex _file, modelica_boolean _isFixed)
{
  modelica_string tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT24);

  tmp1 = modelica_boolean_to_modelica_string(_isFixed, ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp1);

  omc_File_write(threadData, _file, _OMC_LIT10);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _isFixed)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isFixed);
  omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableTypeUseAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _attr, modelica_string _use, modelica_string _name)
{
  modelica_string _expStr = NULL;
  modelica_string tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expStr has no default value.
  omc_File_write(threadData, _file, _OMC_LIT2);

  omc_File_write(threadData, _file, _use);

  omc_File_write(threadData, _file, _OMC_LIT23);

  tmp1 = modelica_boolean_to_modelica_string(isSome(_attr), ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp1);

  omc_File_write(threadData, _file, _OMC_LIT10);

  omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, _attr, _name);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableTypeUseAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _attr, modelica_metatype _use, modelica_metatype _name)
{
  omc_SerializeInitXML_scalarVariableTypeUseAttribute(threadData, _file, _attr, _use, _name);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableType(threadData_t *threadData, modelica_complex _file, modelica_metatype _v)
{
  modelica_metatype _path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _path has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = omc_Types_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 13))));
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 7; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT25);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 10))), _OMC_LIT26);

          omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 12)))));

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 8))), _OMC_LIT27);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 9))), _OMC_LIT28);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 5))), _OMC_LIT29);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 6))), _OMC_LIT30);

          omc_File_write(threadData, _file, _OMC_LIT31);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT32);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 10))), _OMC_LIT26);

          omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 12)))));

          omc_SerializeInitXML_scalarVariableTypeUseAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 11))), _OMC_LIT33, _OMC_LIT34);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 8))), _OMC_LIT27);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 9))), _OMC_LIT28);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 5))), _OMC_LIT29);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 6))), _OMC_LIT30);

          omc_File_write(threadData, _file, _OMC_LIT31);
          goto tmp2_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT35);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 10))), _OMC_LIT26);

          omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 12)))));

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 5))), _OMC_LIT29);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 6))), _OMC_LIT30);

          omc_File_write(threadData, _file, _OMC_LIT31);
          goto tmp2_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT36);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 10))), _OMC_LIT26);

          omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 12)))));

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 5))), _OMC_LIT29);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 6))), _OMC_LIT30);

          omc_File_write(threadData, _file, _OMC_LIT31);
          goto tmp2_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT25);

          omc_SerializeInitXML_scalarVariableTypeAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 10))), _OMC_LIT26);

          omc_SerializeInitXML_scalarVariableTypeFixedAttribute(threadData, _file, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 12)))));

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 5))), _OMC_LIT29);

          omc_SerializeInitXML_scalarVariableTypeStringAttribute(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 6))), _OMC_LIT30);

          omc_File_write(threadData, _file, _OMC_LIT31);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,9,4) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,17,1) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          
          _path = tmpMeta6;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT37);

          omc_Dump_writePath(threadData, _file, _path, 4, _OMC_LIT38, 1 /* true */);

          omc_File_write(threadData, _file, _OMC_LIT39);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT40,omc_Types_unparseType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 13)))));
          omc_Error_addInternalError(threadData, tmpMeta7, _OMC_LIT42);
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableType(threadData_t *threadData, modelica_metatype _file, modelica_metatype _v)
{
  omc_SerializeInitXML_scalarVariableType(threadData, _file, _v);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariableAttribute(threadData_t *threadData, modelica_complex _file, modelica_metatype _simVar, modelica_string _classType, modelica_integer _valueReference, modelica_integer _classIndex)
{
  modelica_integer _inputIndex;
  modelica_metatype _info = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _inputIndex = omc_SimCodeUtil_getInputIndex(threadData, _simVar);
  _info = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 17)))), 2)));
  omc_File_write(threadData, _file, _OMC_LIT43);

  omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 2))), 4);

  omc_File_write(threadData, _file, _OMC_LIT44);

  omc_File_write(threadData, _file, _OMC_LIT45);

  omc_File_writeInt(threadData, _file, _valueReference, _OMC_LIT3);

  omc_File_write(threadData, _file, _OMC_LIT44);

  if((!stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 4))), _OMC_LIT22)))
  {
    omc_File_write(threadData, _file, _OMC_LIT46);

    omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 4))), 4);

    omc_File_write(threadData, _file, _OMC_LIT44);
  }

  omc_File_write(threadData, _file, _OMC_LIT47);

  omc_File_write(threadData, _file, omc_SerializeInitXML_getVariablity(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 3)))));

  omc_File_write(threadData, _file, _OMC_LIT48);

  tmp1 = modelica_boolean_to_modelica_string(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 14)))), ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp1);

  omc_File_write(threadData, _file, _OMC_LIT44);

  omc_File_write(threadData, _file, _OMC_LIT49);

  omc_File_write(threadData, _file, omc_SerializeInitXML_getCausality(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 18)))));

  omc_File_write(threadData, _file, _OMC_LIT50);

  tmp2 = modelica_boolean_to_modelica_string(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 22)))), ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp2);

  omc_File_write(threadData, _file, _OMC_LIT44);

  if((_inputIndex != ((modelica_integer) -1)))
  {
    omc_File_write(threadData, _file, _OMC_LIT51);

    omc_File_writeInt(threadData, _file, _inputIndex, _OMC_LIT3);

    omc_File_write(threadData, _file, _OMC_LIT44);
  }

  omc_File_write(threadData, _file, _OMC_LIT52);

  omc_SerializeInitXML_getAliasVar(threadData, _file, _simVar);

  omc_File_write(threadData, _file, _OMC_LIT53);

  omc_File_write(threadData, _file, _OMC_LIT54);

  omc_File_writeInt(threadData, _file, _classIndex, _OMC_LIT3);

  omc_File_write(threadData, _file, _OMC_LIT55);

  omc_File_write(threadData, _file, _classType);

  omc_File_write(threadData, _file, _OMC_LIT44);

  omc_File_write(threadData, _file, _OMC_LIT56);

  tmp3 = modelica_boolean_to_modelica_string(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 23)))), ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp3);

  omc_File_write(threadData, _file, _OMC_LIT57);

  omc_File_write(threadData, _file, omc_Util_applyOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 24))), boxvar_boolString, _OMC_LIT22));

  omc_File_write(threadData, _file, _OMC_LIT58);

  omc_File_write(threadData, _file, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 25))))?_OMC_LIT0:_OMC_LIT1));

  omc_File_write(threadData, _file, _OMC_LIT59);

  omc_File_write(threadData, _file, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 27))))?_OMC_LIT0:_OMC_LIT1));

  omc_File_write(threadData, _file, _OMC_LIT44);

  omc_File_write(threadData, _file, _OMC_LIT60);

  omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))), 4);

  omc_File_write(threadData, _file, _OMC_LIT61);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4)))), _OMC_LIT3);

  omc_File_write(threadData, _file, _OMC_LIT62);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 5)))), _OMC_LIT3);

  omc_File_write(threadData, _file, _OMC_LIT63);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 6)))), _OMC_LIT3);

  omc_File_write(threadData, _file, _OMC_LIT64);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 7)))), _OMC_LIT3);

  omc_File_write(threadData, _file, _OMC_LIT65);

  tmp4 = modelica_boolean_to_modelica_string((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))))), ((modelica_integer) 0), 1 /* true */);
  omc_File_write(threadData, _file, tmp4);

  omc_File_write(threadData, _file, _OMC_LIT66);

  {
    modelica_metatype _dim;
    for (tmpMeta5 = omc_Expression_arrayDimension(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 13)))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _dim = MMC_CAR(tmpMeta5);
      tmpMeta6 = stringAppend(_OMC_LIT67,intString(omc_Expression_dimensionSize(threadData, _dim)));
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT68);
      omc_File_write(threadData, _file, tmpMeta7);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariableAttribute(threadData_t *threadData, modelica_metatype _file, modelica_metatype _simVar, modelica_metatype _classType, modelica_metatype _valueReference, modelica_metatype _classIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_valueReference);
  tmp2 = mmc_unbox_integer(_classIndex);
  omc_SerializeInitXML_scalarVariableAttribute(threadData, _file, _simVar, _classType, tmp1, tmp2);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_scalarVariable(threadData_t *threadData, modelica_complex _file, modelica_metatype _var, modelica_string _classType, modelica_integer _valueReference, modelica_integer _classIndex)
{
  modelica_string _type_name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _type_name = (omc_DAEUtil_expTypeArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 13))))?_OMC_LIT69:_OMC_LIT70);
  tmpMeta1 = stringAppend(_OMC_LIT71,_type_name);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT53);
  omc_File_write(threadData, _file, tmpMeta2);

  omc_SerializeInitXML_scalarVariableAttribute(threadData, _file, _var, _classType, _valueReference, _classIndex);

  omc_File_write(threadData, _file, _OMC_LIT72);

  omc_SerializeInitXML_scalarVariableType(threadData, _file, _var);

  tmpMeta3 = stringAppend(_OMC_LIT73,_type_name);
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT74);
  omc_File_write(threadData, _file, tmpMeta4);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_scalarVariable(threadData_t *threadData, modelica_metatype _file, modelica_metatype _var, modelica_metatype _classType, modelica_metatype _valueReference, modelica_metatype _classIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_valueReference);
  tmp2 = mmc_unbox_integer(_classIndex);
  omc_SerializeInitXML_scalarVariable(threadData, _file, _var, _classType, tmp1, tmp2);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_SerializeInitXML_scalarVariables(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_string _classType, modelica_integer __omcQ_24in_5FvalueReference, modelica_integer __omcQ_24in_5Findex, modelica_integer *out_index)
{
  modelica_integer _valueReference;
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _valueReference = __omcQ_24in_5FvalueReference;
  _index = __omcQ_24in_5Findex;
  {
    modelica_metatype _var;
    for (tmpMeta1 = _vars; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      omc_SerializeInitXML_scalarVariable(threadData, _file, _var, _classType, _valueReference, _index);

      _index = ((modelica_integer) 1) + _index;

      _valueReference = ((modelica_integer) 1) + _valueReference;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_index) { *out_index = _index; }
  return _valueReference;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeInitXML_scalarVariables(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _classType, modelica_metatype __omcQ_24in_5FvalueReference, modelica_metatype __omcQ_24in_5Findex, modelica_metatype *out_index)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_integer _valueReference;
  modelica_metatype out_valueReference;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5FvalueReference);
  tmp2 = mmc_unbox_integer(__omcQ_24in_5Findex);
  _valueReference = omc_SerializeInitXML_scalarVariables(threadData, _file, _vars, _classType, tmp1, tmp2, &_index);
  out_valueReference = mmc_mk_icon(_valueReference);
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  return out_valueReference;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeInitXML_modelVariables(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars)
{
  modelica_integer _vr;
  modelica_integer _ix;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vr has no default value.
  _ix = ((modelica_integer) 0);
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = omc_Config_simCodeTarget(threadData);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT75), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 1: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT76), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1000);
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
  _vr = tmp1;

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 2))), _OMC_LIT77, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 3))), _OMC_LIT78, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 4))), _OMC_LIT79, _vr, _ix ,&_ix);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 5))), _OMC_LIT79, _vr, _ix ,&_ix);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 26))), _OMC_LIT79, _vr, _ix ,&_ix);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 27))), _OMC_LIT79, _vr, _ix ,&_ix);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 13))), _OMC_LIT80, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 10))), _OMC_LIT81, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 6))), _OMC_LIT82, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 14))), _OMC_LIT83, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 11))), _OMC_LIT84, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 7))), _OMC_LIT85, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 15))), _OMC_LIT86, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 12))), _OMC_LIT87, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 16))), _OMC_LIT88, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 17))), _OMC_LIT89, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 18))), _OMC_LIT90, _vr, ((modelica_integer) 0), NULL);

  _vr = omc_SerializeInitXML_scalarVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 28))), _OMC_LIT91, _vr, ((modelica_integer) 0), NULL);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeInitXML_modelVariables(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars)
{
  omc_SerializeInitXML_modelVariables(threadData, _file, _vars);
  return;
}

DLLDirection
modelica_boolean omc_SerializeInitXML_simulationInitFileReturnBool(threadData_t *threadData, modelica_metatype _simCode, modelica_string _guid)
{
  modelica_boolean _success;
  modelica_metatype _vi = NULL;
  modelica_metatype _s = NULL;
  modelica_complex _file;
  modelica_string _fileName = NULL;
  modelica_string _FMUType = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _success = 0 /* false */;
  // _vi has no default value.
  // _s has no default value.
  _file = omc_File_File_constructor(threadData, omc_File_noReference(threadData));
  // _fileName has no default value.
  // _FMUType has no default value.
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
          modelica_string tmp5 = 0;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_string tmp16 = 0;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp8_1;
            tmp8_1 = omc_Config_simCodeTarget(threadData);
            {
              volatile mmc_switch_type tmp8;
              int tmp9;
              tmp8 = 0;
              for (; tmp8 < 2; tmp8++) {
                switch (MMC_SWITCH_CAST(tmp8)) {
                case 0: {
                  modelica_metatype tmpMeta10;
                  modelica_metatype tmpMeta11;
                  modelica_metatype tmpMeta12;
                  if (5 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT75), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
                  /* Pattern matching succeeded */
                  tmpMeta10 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 38))),_OMC_LIT92);
                  tmpMeta11 = stringAppend(tmpMeta10,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 37))));
                  tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT93);
                  tmp5 = tmpMeta12;
                  goto tmp7_done;
                }
                case 1: {
                  modelica_metatype tmpMeta13;
                  
                  /* Pattern matching succeeded */
                  tmpMeta13 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 37))),_OMC_LIT93);
                  tmp5 = tmpMeta13;
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
          _fileName = tmp5;

          omc_File_open(threadData, _file, _fileName, 2);

          _vi = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 2)))), 10)));

          /* Pattern-matching assignment */
          tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 36)));
          if (optionNone(tmpMeta14)) goto goto_1;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          _s = tmpMeta15;

          { /* match expression */
            modelica_string tmp19_1;
            tmp19_1 = omc_Config_simCodeTarget(threadData);
            {
              volatile mmc_switch_type tmp19;
              int tmp20;
              tmp19 = 0;
              for (; tmp19 < 3; tmp19++) {
                switch (MMC_SWITCH_CAST(tmp19)) {
                case 0: {
                  if (5 != MMC_STRLEN(tmp19_1) || strcmp(MMC_STRINGDATA(_OMC_LIT75), MMC_STRINGDATA(tmp19_1)) != 0) goto tmp18_end;
                  /* Pattern matching succeeded */
                  tmp16 = _OMC_LIT94;
                  goto tmp18_done;
                }
                case 1: {
                  if (7 != MMC_STRLEN(tmp19_1) || strcmp(MMC_STRINGDATA(_OMC_LIT76), MMC_STRINGDATA(tmp19_1)) != 0) goto tmp18_end;
                  /* Pattern matching succeeded */
                  tmp16 = _OMC_LIT94;
                  goto tmp18_done;
                }
                case 2: {
                  
                  /* Pattern matching succeeded */
                  tmp16 = _OMC_LIT95;
                  goto tmp18_done;
                }
                }
                goto tmp18_end;
                tmp18_end: ;
              }
              goto goto_17;
              goto_17:;
              goto goto_1;
              goto tmp18_done;
              tmp18_done:;
            }
          }
          _FMUType = tmp16;

          omc_File_write(threadData, _file, _OMC_LIT96);

          omc_File_write(threadData, _file, _OMC_LIT97);

          omc_File_write(threadData, _file, _OMC_LIT98);

          tmpMeta21 = stringAppend(_OMC_LIT99,_FMUType);
          tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT100);
          omc_File_write(threadData, _file, tmpMeta22);

          omc_File_write(threadData, _file, _OMC_LIT101);

          omc_Dump_writePath(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 2)))), 2))), 1, _OMC_LIT38, 0 /* false */);

          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_write(threadData, _file, _OMC_LIT102);

          omc_Dump_writePath(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 2)))), 2))), 1, _OMC_LIT103, 0 /* false */);

          omc_File_write(threadData, _file, _OMC_LIT100);

          omc_File_write(threadData, _file, _OMC_LIT104);

          omc_File_write(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 32)))), 7))));

          omc_File_write(threadData, _file, _OMC_LIT100);

          omc_File_write(threadData, _file, _OMC_LIT105);

          omc_File_write(threadData, _file, _guid);

          omc_File_write(threadData, _file, _OMC_LIT106);

          omc_File_write(threadData, _file, _OMC_LIT107);

          omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 2)))), 3))), 4);

          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_write(threadData, _file, _OMC_LIT108);

          omc_File_write(threadData, _file, omc_Settings_getVersionNr(threadData));

          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_write(threadData, _file, _OMC_LIT109);

          omc_SerializeInitXML_xsdateTime(threadData, _file, omc_Util_getCurrentDateTime(threadData));

          omc_File_write(threadData, _file, _OMC_LIT100);

          omc_File_write(threadData, _file, _OMC_LIT110);

          omc_File_write(threadData, _file, _OMC_LIT111);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 2)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT112);

          omc_File_write(threadData, _file, _OMC_LIT113);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 3)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT114);

          omc_File_write(threadData, _file, _OMC_LIT115);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 18)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT116);

          omc_File_write(threadData, _file, _OMC_LIT117);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 17)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT118);

          omc_File_write(threadData, _file, _OMC_LIT119);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 19)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT120);

          omc_File_write(threadData, _file, _OMC_LIT121);

          omc_File_writeInt(threadData, _file, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 2)))), 12)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT122);

          omc_File_write(threadData, _file, _OMC_LIT123);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 6)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT124);

          omc_File_write(threadData, _file, _OMC_LIT125);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 7)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 8)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 29)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 30)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT126);

          omc_File_write(threadData, _file, _OMC_LIT127);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 11)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT128);

          omc_File_write(threadData, _file, _OMC_LIT129);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 14)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT130);

          omc_File_write(threadData, _file, _OMC_LIT131);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 9)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT132);

          omc_File_write(threadData, _file, _OMC_LIT133);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 12)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT134);

          omc_File_write(threadData, _file, _OMC_LIT135);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 15)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT136);

          omc_File_write(threadData, _file, _OMC_LIT137);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 20)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT138);

          omc_File_write(threadData, _file, _OMC_LIT139);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 22)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT140);

          omc_File_write(threadData, _file, _OMC_LIT141);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 21)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT142);

          omc_File_write(threadData, _file, _OMC_LIT143);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 10)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT144);

          omc_File_write(threadData, _file, _OMC_LIT145);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 13)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT146);

          omc_File_write(threadData, _file, _OMC_LIT147);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vi), 16)))), _OMC_LIT3);

          omc_File_write(threadData, _file, _OMC_LIT148);

          omc_File_write(threadData, _file, _OMC_LIT149);

          omc_File_write(threadData, _file, _OMC_LIT150);

          omc_File_write(threadData, _file, _OMC_LIT151);

          omc_File_writeReal(threadData, _file, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 2)))), _OMC_LIT152);

          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_write(threadData, _file, _OMC_LIT153);

          omc_File_writeReal(threadData, _file, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 3)))), _OMC_LIT152);

          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_write(threadData, _file, _OMC_LIT154);

          omc_File_writeReal(threadData, _file, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 5)))), _OMC_LIT152);

          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_write(threadData, _file, _OMC_LIT155);

          omc_File_writeReal(threadData, _file, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 6)))), _OMC_LIT152);

          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_write(threadData, _file, _OMC_LIT156);

          omc_File_write(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 7))));

          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_write(threadData, _file, _OMC_LIT157);

          omc_File_write(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 9))));

          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_write(threadData, _file, _OMC_LIT158);

          omc_File_write(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 10))));

          omc_File_write(threadData, _file, _OMC_LIT159);

          omc_File_write(threadData, _file, _OMC_LIT160);

          omc_File_write(threadData, _file, _OMC_LIT161);

          omc_SerializeInitXML_modelVariables(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 2)))), 11))));

          omc_File_write(threadData, _file, _OMC_LIT162);

          omc_File_write(threadData, _file, _OMC_LIT163);

          _success = 1 /* true */;
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
  omc_File_File_destructor(threadData,_file);
  return _success;
}
modelica_metatype boxptr_SerializeInitXML_simulationInitFileReturnBool(threadData_t *threadData, modelica_metatype _simCode, modelica_metatype _guid)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_SerializeInitXML_simulationInitFileReturnBool(threadData, _simCode, _guid);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
void omc_SerializeInitXML_simulationInitFile(threadData_t *threadData, modelica_metatype _simCode, modelica_string _guid)
{
  modelica_boolean tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  /* Pattern-matching assignment */
  tmp1 = omc_SerializeInitXML_simulationInitFileReturnBool(threadData, _simCode, _guid);
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

