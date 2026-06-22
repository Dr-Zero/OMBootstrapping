#include "omc_simulation_settings.h"
#include "CodegenFMU2.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,3,3) {&Tpl_Text_MEM__TEXT__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "<CoSimulation\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,14,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,2,5) {&Tpl_StringToken_ST__LINE__desc,_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,4) {&Tpl_BlockType_BT__INDENT__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "modelIdentifier=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,17,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "needsExecutionTool=\"false\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,27,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "canHandleVariableCommunicationStepSize=\"true\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,46,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "canInterpolateInputs=\"true\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,28,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "maxOutputDerivativeOrder=\"1\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,29,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "canRunAsynchronuously = \"false\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,32,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "canBeInstantiatedOnlyOncePerProcess=\"false\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,44,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "canNotUseMemoryManagementFunctions=\"false\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,43,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,1) {_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,2,1) {_OMC_LIT12,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,1) {_OMC_LIT11,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,1) {_OMC_LIT10,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,1) {_OMC_LIT9,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,1) {_OMC_LIT8,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,1) {_OMC_LIT7,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,1) {_OMC_LIT6,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT21,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "fmuExperimental"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,15,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "Adds features to the FMI export that are considered experimental as of now: fmi2GetSpecificDerivatives, canGetSetFMUState, canSerializeFMUstate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,143,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(135)),_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT24}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data ">\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,2,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,2,5) {&Tpl_StringToken_ST__LINE__desc,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "</CoSimulation>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,15,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "providesDirectionalDerivative=\"false\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,37,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "providesDirectionalDerivative=\"true\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,36,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "canSerializeFMUstate=\"false\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,28,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "canSerializeFMUstate=\"true\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,27,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "canGetAndSetFMUstate=\"false\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,28,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT38}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "canGetAndSetFMUstate=\"true\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,27,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "2.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,3,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "OpenModelica Compiler "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,22,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "structured"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,10,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "fmiVersion=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,12,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "modelName=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,11,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,1) {_OMC_LIT50,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,2,1) {_OMC_LIT6,_OMC_LIT51}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT52,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "guid=\"{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,7,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,1) {_OMC_LIT54,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,1) {_OMC_LIT6,_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT56,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "}\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,3,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "description=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,13,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,2,1) {_OMC_LIT59,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,1) {_OMC_LIT58,_OMC_LIT60}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT61,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "version=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,9,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,2,1) {_OMC_LIT63,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,2,1) {_OMC_LIT6,_OMC_LIT64}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT65,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,5) {&Tpl_StringToken_ST__LINE__desc,_OMC_LIT6}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,0,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "generationTool=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,16,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT69}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "generationDateAndTime=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,23,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,2,1) {_OMC_LIT71,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,2,1) {_OMC_LIT6,_OMC_LIT72}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT73,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "variableNamingConvention=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,26,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,2,1) {_OMC_LIT75,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,2,1) {_OMC_LIT6,_OMC_LIT76}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT77,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "numberOfEventIndicators=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,25,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,1) {_OMC_LIT79,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,2,1) {_OMC_LIT6,_OMC_LIT80}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT81,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,1,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT83}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "license=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,9,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT85}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "copyright=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,11,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "author=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,8,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT89}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "<fmiModelDescription\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,21,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,2,5) {&Tpl_StringToken_ST__LINE__desc,_OMC_LIT91}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "</fmiModelDescription>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,22,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT93}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "<LogCategories>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,16,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "  <Category name=\"logEvents\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,32,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "  <Category name=\"logSingularLinearSystems\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,47,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "  <Category name=\"logNonlinearSystems\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,42,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "  <Category name=\"logDynamicStateSelection\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,47,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "  <Category name=\"logStatusWarning\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,39,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "  <Category name=\"logStatusDiscard\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,39,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "  <Category name=\"logStatusError\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,37,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "  <Category name=\"logStatusFatal\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,37,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "  <Category name=\"logStatusPending\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,39,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "  <Category name=\"logAll\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,29,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "  <Category name=\"logFmi2Call\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,34,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "</LogCategories>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,16,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,2,1) {_OMC_LIT107,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT109,2,1) {_OMC_LIT106,_OMC_LIT108}};
#define _OMC_LIT109 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,2,1) {_OMC_LIT105,_OMC_LIT109}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT111,2,1) {_OMC_LIT104,_OMC_LIT110}};
#define _OMC_LIT111 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT111)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT112,2,1) {_OMC_LIT103,_OMC_LIT111}};
#define _OMC_LIT112 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT112)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT113,2,1) {_OMC_LIT102,_OMC_LIT112}};
#define _OMC_LIT113 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT113)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT114,2,1) {_OMC_LIT101,_OMC_LIT113}};
#define _OMC_LIT114 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT114)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT115,2,1) {_OMC_LIT100,_OMC_LIT114}};
#define _OMC_LIT115 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT115)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT116,2,1) {_OMC_LIT99,_OMC_LIT115}};
#define _OMC_LIT116 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT116)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT117,2,1) {_OMC_LIT98,_OMC_LIT116}};
#define _OMC_LIT117 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,2,1) {_OMC_LIT97,_OMC_LIT117}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT119,2,1) {_OMC_LIT96,_OMC_LIT118}};
#define _OMC_LIT119 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT119)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT120,2,1) {_OMC_LIT95,_OMC_LIT119}};
#define _OMC_LIT120 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT120)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT121,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT120,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT121 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "  <Category name=\"logEvents\" description=\"logEvents\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,56,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "  <Category name=\"logSingularLinearSystems\" description=\"logSingularLinearSystems\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,86,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "  <Category name=\"logNonlinearSystems\" description=\"logNonlinearSystems\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,76,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "  <Category name=\"logDynamicStateSelection\" description=\"logDynamicStateSelection\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,86,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "  <Category name=\"logStatusWarning\" description=\"logStatusWarning\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,70,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "  <Category name=\"logStatusDiscard\" description=\"logStatusDiscard\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,70,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "  <Category name=\"logStatusError\" description=\"logStatusError\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,66,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "  <Category name=\"logStatusFatal\" description=\"logStatusFatal\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,66,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "  <Category name=\"logStatusPending\" description=\"logStatusPending\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,70,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "  <Category name=\"logAll\" description=\"logAll\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,50,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "  <Category name=\"logFmi2Call\" description=\"logFmi2Call\" />\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,60,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT133,2,1) {_OMC_LIT132,_OMC_LIT108}};
#define _OMC_LIT133 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT133)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT134,2,1) {_OMC_LIT131,_OMC_LIT133}};
#define _OMC_LIT134 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT134)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT135,2,1) {_OMC_LIT130,_OMC_LIT134}};
#define _OMC_LIT135 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT135)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT136,2,1) {_OMC_LIT129,_OMC_LIT135}};
#define _OMC_LIT136 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT136)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT137,2,1) {_OMC_LIT128,_OMC_LIT136}};
#define _OMC_LIT137 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT137)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT138,2,1) {_OMC_LIT127,_OMC_LIT137}};
#define _OMC_LIT138 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT138)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT139,2,1) {_OMC_LIT126,_OMC_LIT138}};
#define _OMC_LIT139 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT139)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT140,2,1) {_OMC_LIT125,_OMC_LIT139}};
#define _OMC_LIT140 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT140)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT141,2,1) {_OMC_LIT124,_OMC_LIT140}};
#define _OMC_LIT141 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT141)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT142,2,1) {_OMC_LIT123,_OMC_LIT141}};
#define _OMC_LIT142 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT142)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT143,2,1) {_OMC_LIT122,_OMC_LIT142}};
#define _OMC_LIT143 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT143)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT144,2,1) {_OMC_LIT95,_OMC_LIT143}};
#define _OMC_LIT144 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT144)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT145,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT144,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT145 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT145)
#include "util/modelica.h"

#include "CodegenFMU2_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__60(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__60(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__60,2,0) {(void*) boxptr_CodegenFMU2_fun__60,0}};
#define boxvar_CodegenFMU2_fun__60 MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__60)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__59(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__59(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__59,2,0) {(void*) boxptr_CodegenFMU2_fun__59,0}};
#define boxvar_CodegenFMU2_fun__59 MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__59)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__58(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__58(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__58,2,0) {(void*) boxptr_CodegenFMU2_fun__58,0}};
#define boxvar_CodegenFMU2_fun__58 MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__58)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__56(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_license);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__56(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_license);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__56,2,0) {(void*) boxptr_CodegenFMU2_fun__56,0}};
#define boxvar_CodegenFMU2_fun__56 MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__56)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__55(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_copyright);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__55(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_copyright);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__55,2,0) {(void*) boxptr_CodegenFMU2_fun__55,0}};
#define boxvar_CodegenFMU2_fun__55 MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__55)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__54(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_author);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__54(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_author);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__54,2,0) {(void*) boxptr_CodegenFMU2_fun__54,0}};
#define boxvar_CodegenFMU2_fun__54 MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__54)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__52(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__52(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__52,2,0) {(void*) boxptr_CodegenFMU2_fun__52,0}};
#define boxvar_CodegenFMU2_fun__52 MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__52)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__51(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_sourceFiles, modelica_metatype _in_a_simCode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__51(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_sourceFiles, modelica_metatype _in_a_simCode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__51,2,0) {(void*) boxptr_CodegenFMU2_fun__51,0}};
#define boxvar_CodegenFMU2_fun__51 MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__51)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__50(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_sourceFiles, modelica_metatype _in_a_simCode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__50(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_sourceFiles, modelica_metatype _in_a_simCode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__50,2,0) {(void*) boxptr_CodegenFMU2_fun__50,0}};
#define boxvar_CodegenFMU2_fun__50 MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fun__50)

DLLDirection
modelica_metatype omc_CodegenFMU2_CoSimulation(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode, modelica_metatype _in_a_sourceFiles)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_simCode;
    tmp4_3 = _in_a_sourceFiles;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_sourceFiles = NULL;
      modelica_metatype _i_simCode = NULL;
      modelica_boolean _ret_4;
      modelica_boolean _ret_3;
      modelica_boolean _ret_2;
      modelica_string _ret_1 = NULL;
      modelica_metatype _l_modelIdentifier = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_sourceFiles has no default value.
      // _i_simCode has no default value.
      // _ret_4 has no default value.
      // _ret_3 has no default value.
      // _ret_2 has no default value.
      // _ret_1 has no default value.
      // _l_modelIdentifier has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _txt = tmp4_1;
          _i_simCode = tmp4_2;
          _a_sourceFiles = tmp4_3;
          /* Pattern matching succeeded */
          _l_modelIdentifier = omc_CodegenUtilSimulation_modelNamePrefix(threadData, _OMC_LIT0, _i_simCode);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT2);

          _txt = omc_Tpl_pushBlock(threadData, _txt, _OMC_LIT3);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT5);

          _ret_1 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _l_modelIdentifier));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_1);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT22);

          _ret_2 = omc_Flags_isSet(threadData, _OMC_LIT25);

          _txt = omc_CodegenFMU2_fun__58(threadData, _txt, _ret_2);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _ret_3 = omc_Flags_isSet(threadData, _OMC_LIT25);

          _txt = omc_CodegenFMU2_fun__59(threadData, _txt, _ret_3);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _ret_4 = omc_Flags_isSet(threadData, _OMC_LIT25);

          _txt = omc_CodegenFMU2_fun__60(threadData, _txt, _ret_4);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT27);

          _txt = omc_CodegenFMUCommon_SourceFiles(threadData, _txt, _a_sourceFiles);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_Tpl_popBlock(threadData, _txt);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT29);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__60(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    {
      modelica_metatype _txt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT31);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT33);
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__60(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenFMU2_fun__60(threadData, _in_txt, tmp1);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__59(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    {
      modelica_metatype _txt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT35);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT37);
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__59(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenFMU2_fun__59(threadData, _in_txt, tmp1);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__58(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    {
      modelica_metatype _txt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT39);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT41);
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__58(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenFMU2_fun__58(threadData, _in_txt, tmp1);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

DLLDirection
modelica_metatype omc_CodegenFMU2_fmiModelDescriptionAttributes(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode, modelica_string _in_a_guid)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_string tmp4_3;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_simCode;
    tmp4_3 = _in_a_guid;
    {
      modelica_metatype _txt = NULL;
      modelica_string _a_guid = NULL;
      modelica_metatype _i_simCode = NULL;
      modelica_string _i_modelInfo_license = NULL;
      modelica_string _i_modelInfo_copyright = NULL;
      modelica_string _i_modelInfo_version = NULL;
      modelica_string _i_modelInfo_author = NULL;
      modelica_string _i_modelInfo_description = NULL;
      modelica_metatype _i_modelInfo_name = NULL;
      modelica_string _ret_20 = NULL;
      modelica_string _ret_19 = NULL;
      modelica_boolean _ret_18;
      modelica_boolean _ret_17;
      modelica_boolean _ret_16;
      modelica_string _ret_15 = NULL;
      modelica_string _ret_14 = NULL;
      modelica_string _ret_13 = NULL;
      modelica_metatype _l_numberOfEventIndicators = NULL;
      modelica_metatype _l_variableNamingConvention = NULL;
      modelica_metatype _ret_10 = NULL;
      modelica_metatype _l_generationDateAndTime = NULL;
      modelica_string _ret_8 = NULL;
      modelica_metatype _l_generationTool = NULL;
      modelica_metatype _l_license = NULL;
      modelica_metatype _l_copyright = NULL;
      modelica_metatype _l_version = NULL;
      modelica_metatype _l_author = NULL;
      modelica_metatype _l_description = NULL;
      modelica_metatype _l_modelName = NULL;
      modelica_metatype _l_fmiVersion = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_guid has no default value.
      // _i_simCode has no default value.
      // _i_modelInfo_license has no default value.
      // _i_modelInfo_copyright has no default value.
      // _i_modelInfo_version has no default value.
      // _i_modelInfo_author has no default value.
      // _i_modelInfo_description has no default value.
      // _i_modelInfo_name has no default value.
      // _ret_20 has no default value.
      // _ret_19 has no default value.
      // _ret_18 has no default value.
      // _ret_17 has no default value.
      // _ret_16 has no default value.
      // _ret_15 has no default value.
      // _ret_14 has no default value.
      // _ret_13 has no default value.
      // _l_numberOfEventIndicators has no default value.
      // _l_variableNamingConvention has no default value.
      // _ret_10 has no default value.
      // _l_generationDateAndTime has no default value.
      // _ret_8 has no default value.
      // _l_generationTool has no default value.
      // _l_license has no default value.
      // _l_copyright has no default value.
      // _l_version has no default value.
      // _l_author has no default value.
      // _l_description has no default value.
      // _l_modelName has no default value.
      // _l_fmiVersion has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 10));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 11));
          
          _txt = tmp4_1;
          _i_simCode = tmp4_2;
          _i_modelInfo_name = tmpMeta7;
          _i_modelInfo_description = tmpMeta8;
          _i_modelInfo_version = tmpMeta9;
          _i_modelInfo_author = tmpMeta10;
          _i_modelInfo_license = tmpMeta11;
          _i_modelInfo_copyright = tmpMeta12;
          _a_guid = tmp4_3;
          /* Pattern matching succeeded */
          _l_fmiVersion = omc_Tpl_writeTok(threadData, _OMC_LIT0, _OMC_LIT43);

          _l_modelName = omc_CodegenUtil_dotPath(threadData, _OMC_LIT0, _i_modelInfo_name);

          _l_description = omc_Tpl_writeStr(threadData, _OMC_LIT0, _i_modelInfo_description);

          _l_author = omc_Tpl_writeStr(threadData, _OMC_LIT0, _i_modelInfo_author);

          _l_version = omc_Tpl_writeStr(threadData, _OMC_LIT0, _i_modelInfo_version);

          _l_copyright = omc_Tpl_writeStr(threadData, _OMC_LIT0, _i_modelInfo_copyright);

          _l_license = omc_Tpl_writeStr(threadData, _OMC_LIT0, _i_modelInfo_license);

          _l_generationTool = omc_Tpl_writeTok(threadData, _OMC_LIT0, _OMC_LIT45);

          _ret_8 = omc_Settings_getVersionNr(threadData);

          _l_generationTool = omc_Tpl_writeStr(threadData, _l_generationTool, _ret_8);

          _ret_10 = omc_Util_getCurrentDateTime(threadData);

          _l_generationDateAndTime = omc_CodegenFMUCommon_xsdateTime(threadData, _OMC_LIT0, _ret_10);

          _l_variableNamingConvention = omc_Tpl_writeTok(threadData, _OMC_LIT0, _OMC_LIT47);

          _l_numberOfEventIndicators = omc_CodegenFMUCommon_getNumberOfEventIndicators(threadData, _OMC_LIT0, _i_simCode);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT49);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_fmiVersion);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT53);

          _ret_13 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _l_modelName));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_13);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT57);

          _txt = omc_Tpl_writeStr(threadData, _txt, _a_guid);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT62);

          _ret_14 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _l_description));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_14);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT66);

          _ret_15 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _l_version));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_15);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT67);

          _ret_16 = (stringEqual(omc_Tpl_textString(threadData, _l_author), _OMC_LIT68));

          _txt = omc_CodegenFMU2_fun__54(threadData, _txt, _ret_16, _l_author);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _ret_17 = (stringEqual(omc_Tpl_textString(threadData, _l_copyright), _OMC_LIT68));

          _txt = omc_CodegenFMU2_fun__55(threadData, _txt, _ret_17, _l_copyright);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _ret_18 = (stringEqual(omc_Tpl_textString(threadData, _l_license), _OMC_LIT68));

          _txt = omc_CodegenFMU2_fun__56(threadData, _txt, _ret_18, _l_license);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT70);

          _ret_19 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _l_generationTool));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_19);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT74);

          _ret_20 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _l_generationDateAndTime));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_20);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT78);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_variableNamingConvention);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT82);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_numberOfEventIndicators);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT84);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__56(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_license)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    tmp4_3 = _in_a_license;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_license = NULL;
      modelica_string _ret_0 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_license has no default value.
      // _ret_0 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          _a_license = tmp4_3;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT86);

          _ret_0 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _a_license));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_0);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT84);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__56(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_license)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenFMU2_fun__56(threadData, _in_txt, tmp1, _in_a_license);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__55(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_copyright)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    tmp4_3 = _in_a_copyright;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_copyright = NULL;
      modelica_string _ret_0 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_copyright has no default value.
      // _ret_0 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          _a_copyright = tmp4_3;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT88);

          _ret_0 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _a_copyright));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_0);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT84);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__55(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_copyright)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenFMU2_fun__55(threadData, _in_txt, tmp1, _in_a_copyright);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__54(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_author)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    tmp4_3 = _in_a_author;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_author = NULL;
      modelica_string _ret_0 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_author has no default value.
      // _ret_0 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          _a_author = tmp4_3;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT90);

          _ret_0 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _a_author));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_0);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT84);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__54(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_author)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenFMU2_fun__54(threadData, _in_txt, tmp1, _in_a_author);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

DLLDirection
modelica_metatype omc_CodegenFMU2_fmiModelDescription(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode, modelica_string _in_a_guid, modelica_string _in_a_FMUType, modelica_metatype _in_a_sourceFiles)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_string tmp4_3;modelica_string tmp4_4;modelica_metatype tmp4_5;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_simCode;
    tmp4_3 = _in_a_guid;
    tmp4_4 = _in_a_FMUType;
    tmp4_5 = _in_a_sourceFiles;
    {
      modelica_metatype _txt = NULL;
      modelica_string _a_guid = NULL;
      modelica_string _a_FMUType = NULL;
      modelica_metatype _a_sourceFiles = NULL;
      modelica_metatype _i_modelStructure = NULL;
      modelica_metatype _i_simulationSettingsOpt = NULL;
      modelica_metatype _i_simCode = NULL;
      modelica_boolean _ret_2;
      modelica_boolean _ret_1;
      modelica_boolean _ret_0;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_guid has no default value.
      // _a_FMUType has no default value.
      // _a_sourceFiles has no default value.
      // _i_modelStructure has no default value.
      // _i_simulationSettingsOpt has no default value.
      // _i_simCode has no default value.
      // _ret_2 has no default value.
      // _ret_1 has no default value.
      // _ret_0 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 36));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 47));
          
          _txt = tmp4_1;
          _i_simCode = tmp4_2;
          _i_simulationSettingsOpt = tmpMeta6;
          _i_modelStructure = tmpMeta7;
          _a_guid = tmp4_3;
          _a_FMUType = tmp4_4;
          _a_sourceFiles = tmp4_5;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT92);

          _txt = omc_Tpl_pushBlock(threadData, _txt, _OMC_LIT3);

          _txt = omc_CodegenFMU2_fmiModelDescriptionAttributes(threadData, _txt, _i_simCode, _a_guid);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT27);

          _ret_0 = omc_FMI_isFMIMEType(threadData, _a_FMUType);

          _txt = omc_CodegenFMU2_fun__50(threadData, _txt, _ret_0, _a_sourceFiles, _i_simCode);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _ret_1 = omc_FMI_isFMICSType(threadData, _a_FMUType);

          _txt = omc_CodegenFMU2_fun__51(threadData, _txt, _ret_1, _a_sourceFiles, _i_simCode);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_CodegenFMUCommon_UnitDefinitions(threadData, _txt, _i_simCode);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_CodegenFMUCommon_fmiTypeDefinitions(threadData, _txt, _i_simCode, _OMC_LIT42);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _ret_2 = omc_Flags_isSet(threadData, _OMC_LIT25);

          _txt = omc_CodegenFMU2_fun__52(threadData, _txt, _ret_2);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_CodegenFMUCommon_DefaultExperiment(threadData, _txt, _i_simulationSettingsOpt, _OMC_LIT42);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_CodegenFMUCommon_fmiModelVariables(threadData, _txt, _i_simCode, _OMC_LIT42);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_CodegenFMUCommon_ModelStructure(threadData, _txt, _i_modelStructure);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_Tpl_popBlock(threadData, _txt);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT94);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__52(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    {
      modelica_metatype _txt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT121);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT145);
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__52(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenFMU2_fun__52(threadData, _in_txt, tmp1);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__51(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_sourceFiles, modelica_metatype _in_a_simCode)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    tmp4_3 = _in_a_sourceFiles;
    tmp4_4 = _in_a_simCode;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_sourceFiles = NULL;
      modelica_metatype _a_simCode = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_sourceFiles has no default value.
      // _a_simCode has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          _a_sourceFiles = tmp4_3;
          _a_simCode = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_CodegenFMU2_CoSimulation(threadData, _txt, _a_simCode, _a_sourceFiles);
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__51(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_sourceFiles, modelica_metatype _in_a_simCode)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenFMU2_fun__51(threadData, _in_txt, tmp1, _in_a_sourceFiles, _in_a_simCode);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMU2_fun__50(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_sourceFiles, modelica_metatype _in_a_simCode)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    tmp4_3 = _in_a_sourceFiles;
    tmp4_4 = _in_a_simCode;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_sourceFiles = NULL;
      modelica_metatype _a_simCode = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_sourceFiles has no default value.
      // _a_simCode has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          _a_sourceFiles = tmp4_3;
          _a_simCode = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_CodegenFMUCommon_ModelExchange(threadData, _txt, _a_simCode, _a_sourceFiles);
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMU2_fun__50(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_sourceFiles, modelica_metatype _in_a_simCode)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenFMU2_fun__50(threadData, _in_txt, tmp1, _in_a_sourceFiles, _in_a_simCode);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

