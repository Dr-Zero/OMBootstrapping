#include "omc_simulation_settings.h"
#include "NFFlatModel.h"
#define _OMC_LIT0_data "useLocalDirection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,17,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Keeps the input/output prefix for all variables in the flat model, not only top-level ones."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,91,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(71)),_OMC_LIT0,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT1,_OMC_LIT2,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "NFFlatModel.obfuscateAbsynCref"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,30,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "__"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Icon"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,4,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Diagram"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,7,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Dialog"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,6,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "IconMap"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,7,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "DiagramMap"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,10,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Placement"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,9,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Text"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,4,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "Line"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,4,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "defaultComponentName"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,20,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "defaultComponentPrefixes"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,24,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "missingInnerMessage"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,19,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "obsolete"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,8,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "unassignedMessage"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,17,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "Protection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,10,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Authorization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,13,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,1,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "obfuscate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,9,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,4,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "No obfuscation."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,15,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,0) {_OMC_LIT25,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "encrypted"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,9,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Obfuscates protected variables in encrypted models"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,50,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,0) {_OMC_LIT30,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "protected"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,9,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "Obfuscates protected variables in all models."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,45,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,2,0) {_OMC_LIT34,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "full"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,4,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "Obfuscates everything."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,22,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,0) {_OMC_LIT38,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,1) {_OMC_LIT41,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,1) {_OMC_LIT37,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,1) {_OMC_LIT33,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,1) {_OMC_LIT29,_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,1,1) {_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "Obfuscates identifiers in the simulation model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,46,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(149)),_OMC_LIT24,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT1,_OMC_LIT26,_OMC_LIT47,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,1,35) {&NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc,}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,17,3) {&NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,5,3) {&NFBackendExtension_Annotations_ANNOTATIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,8,3) {&NFBackendExtension_BackendInfo_BACKEND__INFO__desc,_OMC_LIT52,_OMC_LIT53,_OMC_LIT54,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "baseModelicaOptions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,19,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,9) {&Flags_FlagData_STRING__LIST__FLAG__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "moveBindings"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,12,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "Moves movable binding equations to normal equations."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,52,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,2,4) {&Gettext_TranslatableContent_notrans__desc,_OMC_LIT59}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,0) {_OMC_LIT58,_OMC_LIT60}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "scalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,9,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "Fully scalarize the Base Modelica model."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,40,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,2,4) {&Gettext_TranslatableContent_notrans__desc,_OMC_LIT63}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,2,0) {_OMC_LIT62,_OMC_LIT64}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,2,1) {_OMC_LIT65,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,1) {_OMC_LIT61,_OMC_LIT66}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,1,1) {_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "Enables optional Base Modelica options."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,39,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(154)),_OMC_LIT56,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT1,_OMC_LIT57,_OMC_LIT69,_OMC_LIT71}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "//! base 0.1.0\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,15,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "package "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,8,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,1,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,4,3) {&BaseModelica_OutputFormat_OUTPUT__FORMAT__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,2,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,0,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data ";\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,3,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "  model "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,8,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,4,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data ";\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,2,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "  initial equation\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,19,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "  equation\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,11,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "  initial algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,20,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "  algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,12,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "  end "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,6,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "end "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,4,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,1,4) {&IOStream_IOStreamType_LIST__desc,}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "class "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,6,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "initial equation\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,17,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "equation\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,9,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "initial algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,18,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "algorithm\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,10,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "NFFlatModel.toStream"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,20,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,1,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#include "util/modelica.h"

#include "NFFlatModel_includes.h"



DLLDirection
modelica_metatype omc_NFFlatModel_moveBindings(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _eqs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _vars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqs = tmpMeta2;
  {
    modelica_metatype _var;
    for (tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _var = MMC_CAR(tmpMeta3);
      _var = omc_NFVariable_moveBinding(threadData, _var, _eqs ,&_eqs);

      tmpMeta4 = mmc_mk_cons(_var, _vars);
      _vars = tmpMeta4;
    }
  }

  if((!listEmpty(_eqs)))
  {
    tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = listReverseInPlace(_vars);
    _flatModel = tmpMeta6;

    tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[4] = listAppend(listReverseInPlace(_eqs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))));
    _flatModel = tmpMeta7;
  }
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

DLLDirection
modelica_metatype omc_NFFlatModel_removeNonTopLevelDirections(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  if(omc_Flags_getConfigBool(threadData, _OMC_LIT5))
  {
    goto _return;
  }

  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp5;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar3;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar2 = omc_NFVariable_removeNonTopLevelDirection(threadData, _v);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar3;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
  _flatModel = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

DLLDirection
modelica_boolean omc_NFFlatModel_hasArrayConnections(threadData_t *threadData, modelica_metatype _flatModel, modelica_integer _minSize)
{
  modelica_boolean _hasArrays;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hasArrays = 0 /* false */;
  // _ty has no default value.
  {
    modelica_metatype _eq;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      if((omc_NFEquation_contains(threadData, _eq, boxvar_NFEquation_isConnect) && (omc_NFEquation_sizeOf(threadData, _eq) >= _minSize)))
      {
        _hasArrays = 1 /* true */;

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _hasArrays;
}
modelica_metatype boxptr_NFFlatModel_hasArrayConnections(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _minSize)
{
  modelica_integer tmp1;
  modelica_boolean _hasArrays;
  modelica_metatype out_hasArrays;
  tmp1 = mmc_unbox_integer(_minSize);
  _hasArrays = omc_NFFlatModel_hasArrayConnections(threadData, _flatModel, tmp1);
  out_hasArrays = mmc_mk_icon(_hasArrays);
  return out_hasArrays;
}

DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateAbsynCref2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _nodes, modelica_metatype _obfuscationMap)
{
  modelica_metatype _cref = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _rest_nodes = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  // _node has no default value.
  // _rest_nodes has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _cref;
    tmp3_2 = _nodes;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 4; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_cref), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFFlatModel_obfuscateAbsynCref2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2))), _nodes, _obfuscationMap);
          _cref = tmpMeta5;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta6 = MMC_CAR(tmp3_2);
          tmpMeta7 = MMC_CDR(tmp3_2);
          _node = tmpMeta6;
          _rest_nodes = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(omc_NFInstNode_InstNode_name(threadData, _node), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2)))))) goto tmp2_end;
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_cref), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = omc_UnorderedMap_getOrDefault(threadData, _node, _obfuscationMap, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2))));
          _cref = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_cref), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[4] = omc_NFFlatModel_obfuscateAbsynCref2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 4))), _rest_nodes, _obfuscationMap);
          _cref = tmpMeta9;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,2) == 0) goto tmp2_end;
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta10 = MMC_CAR(tmp3_2);
          tmpMeta11 = MMC_CDR(tmp3_2);
          _node = tmpMeta10;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(omc_NFInstNode_InstNode_name(threadData, _node), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2)))))) goto tmp2_end;
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_cref), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = omc_UnorderedMap_getOrDefault(threadData, _node, _obfuscationMap, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2))));
          _cref = tmpMeta12;
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
  _return: OMC_LABEL_UNUSED
  return _cref;
}

DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateAbsynCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _scope, modelica_metatype _obfuscationMap)
{
  modelica_metatype _cref = NULL;
  modelica_metatype _inst_cref = NULL;
  modelica_metatype _nodes = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  // _inst_cref has no default value.
  // _nodes has no default value.
  omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT6);

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
          _inst_cref = omc_NFLookup_lookupCref(threadData, _cref, _scope, ((modelica_integer) 1), NULL, NULL);

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp8;
            modelica_metatype _c_loopVar = 0;
            modelica_metatype tmpMeta9;
            modelica_metatype _c;
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            _c_loopVar = omc_NFComponentRef_toListReverse(threadData, _inst_cref, 0 /* false */, tmpMeta9);
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar5;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_c_loopVar)) {
                _c = MMC_CAR(_c_loopVar);
                _c_loopVar = MMC_CDR(_c_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar4 = omc_NFComponentRef_node(threadData, _c);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar5;
          }
          _nodes = tmpMeta5;

          _cref = omc_NFFlatModel_obfuscateAbsynCref2(threadData, _cref, _nodes, _obfuscationMap);
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

  omc_ErrorExt_rollBack(threadData, _OMC_LIT6);
  _return: OMC_LABEL_UNUSED
  return _cref;
}

DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateAbsynExpTraverse(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _scope, modelica_metatype __omcQ_24in_5FobfuscationMap, modelica_metatype *out_obfuscationMap)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _obfuscationMap = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _obfuscationMap = __omcQ_24in_5FobfuscationMap;
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
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFFlatModel_obfuscateAbsynCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _scope, _obfuscationMap);
          _exp = tmpMeta5;
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
  if (out_obfuscationMap) { *out_obfuscationMap = _obfuscationMap; }
  return _exp;
}

static modelica_metatype closure0_NFFlatModel_obfuscateAbsynExpTraverse(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp, modelica_metatype $in_obfuscationMap, modelica_metatype tmp1)
{
  modelica_metatype scope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFFlatModel_obfuscateAbsynExpTraverse(thData, $in_exp, scope, $in_obfuscationMap, tmp1);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateAbsynExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _scope, modelica_metatype _obfuscationMap)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  tmpMeta2 = mmc_mk_box1(0, _scope);
  _exp = omc_AbsynUtil_traverseExp(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure0_NFFlatModel_obfuscateAbsynExpTraverse,tmpMeta2), _obfuscationMap, NULL);
  _return: OMC_LABEL_UNUSED
  return _exp;
}

static modelica_metatype closure1_NFFlatModel_obfuscateAbsynExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype scope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFFlatModel_obfuscateAbsynExp(thData, $in_exp, scope, obfuscationMap);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateAbsynExpOpt(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _scope, modelica_metatype _obfuscationMap)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  tmpMeta1 = mmc_mk_box2(0, _scope, _obfuscationMap);
  _exp = omc_Util_applyOption(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure1_NFFlatModel_obfuscateAbsynExp,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateAnnotationSubMod(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _scope, modelica_metatype _obfuscationMap)
{
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_mod), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = omc_NFFlatModel_obfuscateAnnotationMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 3))), _scope, _obfuscationMap);
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mod;
}

DLLDirection
modelica_boolean omc_NFFlatModel_isAllowedAnnotation(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _allowed;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _allowed has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2)));
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(stringHashDjb2Mod(tmp4_1,512))) {
        case 270 /* Icon */: {
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 122 /* Diagram */: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 341 /* Dialog */: {
          if (6 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT10), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 204 /* IconMap */: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT11), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 184 /* DiagramMap */: {
          if (10 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT12), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 446 /* Placement */: {
          if (9 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT13), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 234 /* Text */: {
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 397 /* Line */: {
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT15), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 62 /* defaultComponentName */: {
          if (20 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 259 /* defaultComponentPrefixes */: {
          if (24 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT17), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 160 /* missingInnerMessage */: {
          if (19 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT18), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 418 /* obsolete */: {
          if (8 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT19), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 507 /* unassignedMessage */: {
          if (17 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT20), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 460 /* Protection */: {
          if (10 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT21), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 214 /* Authorization */: {
          if (13 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT22), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = (!omc_StringUtil_startsWith(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2))), _OMC_LIT7));
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
  _allowed = tmp1;
  _return: OMC_LABEL_UNUSED
  return _allowed;
}
modelica_metatype boxptr_NFFlatModel_isAllowedAnnotation(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _allowed;
  modelica_metatype out_allowed;
  _allowed = omc_NFFlatModel_isAllowedAnnotation(threadData, _mod);
  out_allowed = mmc_mk_icon(_allowed);
  return out_allowed;
}

DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateAnnotationMod(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _scope, modelica_metatype _obfuscationMap)
{
  modelica_metatype _mod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp9;
            modelica_metatype _s_loopVar = 0;
            modelica_metatype _s;
            _s_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar7;
            while(1) {
              tmp9 = 1;
              while (!listEmpty(_s_loopVar)) {
                _s = MMC_CAR(_s_loopVar);
                _s_loopVar = MMC_CDR(_s_loopVar);
                if (omc_NFFlatModel_isAllowedAnnotation(threadData, _s)) {
                  tmp9--;
                  break;
                }
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar6 = omc_NFFlatModel_obfuscateAnnotationSubMod(threadData, _s, _scope, _obfuscationMap);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar7;
          }
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = tmpMeta6;
          _mod = tmpMeta5;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[5] = omc_NFFlatModel_obfuscateAbsynExpOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5))), _scope, _obfuscationMap);
          _mod = tmpMeta10;
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
  return _mod;
}

DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateAnnotation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fann, modelica_metatype _scope, modelica_metatype _obfuscationMap)
{
  modelica_metatype _ann = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ann = __omcQ_24in_5Fann;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(3));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_ann), 3*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFFlatModel_obfuscateAnnotationMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ann), 2))), _scope, _obfuscationMap);
  _ann = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ann;
}

static modelica_metatype closure2_NFFlatModel_obfuscateAnnotation(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_ann)
{
  modelica_metatype scope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFFlatModel_obfuscateAnnotation(thData, $in_ann, scope, obfuscationMap);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateAnnotationOpt(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fann, modelica_metatype _scope, modelica_metatype _obfuscationMap)
{
  modelica_metatype _ann = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ann = __omcQ_24in_5Fann;
  tmpMeta1 = mmc_mk_box2(0, _scope, _obfuscationMap);
  _ann = omc_Util_applyOption(threadData, _ann, (modelica_fnptr) mmc_mk_box2(0,closure2_NFFlatModel_obfuscateAnnotation,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _ann;
}

DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateComment(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomment, modelica_metatype _scope, modelica_metatype _obfuscationMap, modelica_boolean _stripComment)
{
  modelica_metatype _comment = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comment = __omcQ_24in_5Fcomment;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_comment), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFFlatModel_obfuscateAnnotationOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comment), 2))), _scope, _obfuscationMap);
  _comment = tmpMeta1;

  if(_stripComment)
  {
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(4));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_comment), 4*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = mmc_mk_none();
    _comment = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  return _comment;
}
modelica_metatype boxptr_NFFlatModel_obfuscateComment(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomment, modelica_metatype _scope, modelica_metatype _obfuscationMap, modelica_metatype _stripComment)
{
  modelica_integer tmp1;
  modelica_metatype _comment = NULL;
  tmp1 = mmc_unbox_integer(_stripComment);
  _comment = omc_NFFlatModel_obfuscateComment(threadData, __omcQ_24in_5Fcomment, _scope, _obfuscationMap, tmp1);
  /* skip box _comment; SCode.Comment */
  return _comment;
}

static modelica_metatype closure3_NFFlatModel_obfuscateComment(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_comment)
{
  modelica_metatype scope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype stripComment = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NFFlatModel_obfuscateComment(thData, $in_comment, scope, obfuscationMap, stripComment);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateCommentOpt(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomment, modelica_metatype _scope, modelica_metatype _obfuscationMap, modelica_boolean _stripComment)
{
  modelica_metatype _comment = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comment = __omcQ_24in_5Fcomment;
  tmpMeta1 = mmc_mk_box3(0, _scope, _obfuscationMap, mmc_mk_boolean(_stripComment));
  _comment = omc_Util_applyOption(threadData, _comment, (modelica_fnptr) mmc_mk_box2(0,closure3_NFFlatModel_obfuscateComment,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _comment;
}
modelica_metatype boxptr_NFFlatModel_obfuscateCommentOpt(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomment, modelica_metatype _scope, modelica_metatype _obfuscationMap, modelica_metatype _stripComment)
{
  modelica_integer tmp1;
  modelica_metatype _comment = NULL;
  tmp1 = mmc_unbox_integer(_stripComment);
  _comment = omc_NFFlatModel_obfuscateCommentOpt(threadData, __omcQ_24in_5Fcomment, _scope, _obfuscationMap, tmp1);
  /* skip box _comment; Option<SCode.Comment> */
  return _comment;
}

DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateSource(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsource, modelica_metatype _scope, modelica_metatype _obfuscationMap)
{
  modelica_metatype _source = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _source = __omcQ_24in_5Fsource;
  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp5;
    modelica_metatype _c_loopVar = 0;
    modelica_metatype _c;
    _c_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_source), 8)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar9;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_c_loopVar)) {
        _c = MMC_CAR(_c_loopVar);
        _c_loopVar = MMC_CDR(_c_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar8 = omc_NFFlatModel_obfuscateComment(threadData, _c, _scope, _obfuscationMap, 1 /* true */);
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
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_source), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[8] = tmpMeta2;
  _source = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _source;
}

static modelica_metatype closure4_NFFlatModel_obfuscateExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFFlatModel_obfuscateExp(thData, $in_exp, obfuscationMap);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateStatement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt, modelica_metatype _scope, modelica_metatype _obfuscationMap)
{
  modelica_metatype _stmt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmt = __omcQ_24in_5Fstmt;
  _stmt = omc_NFStatement_setSource(threadData, omc_NFFlatModel_obfuscateSource(threadData, omc_NFStatement_source(threadData, _stmt), _scope, _obfuscationMap), _stmt);

  tmpMeta1 = mmc_mk_box1(0, _obfuscationMap);
  _stmt = omc_NFStatement_mapExpShallow(threadData, _stmt, (modelica_fnptr) mmc_mk_box2(0,closure4_NFFlatModel_obfuscateExp,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _stmt;
}

static modelica_metatype closure5_NFFlatModel_obfuscateStatement(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_stmt)
{
  modelica_metatype scope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFFlatModel_obfuscateStatement(thData, $in_stmt, scope, obfuscationMap);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateAlgorithm(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_metatype _obfuscationMap)
{
  modelica_metatype _alg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = __omcQ_24in_5Falg;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_alg), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[6] = omc_NFFlatModel_obfuscateSource(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 5))), _obfuscationMap);
  _alg = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp4;
    modelica_metatype tmpMeta5;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp6;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 3)));
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta5; /* defaultValue */
    tmp4 = &__omcQ_24tmpVar11;
    while(1) {
      tmp6 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp6--;
      }
      if (tmp6 == 0) {
        __omcQ_24tmpVar10 = omc_NFFlatModel_obfuscateCref(threadData, _e, _obfuscationMap, NULL);
        *tmp4 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp4 = &MMC_CDR(*tmp4);
      } else if (tmp6 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp4 = mmc_mk_nil();
    tmpMeta3 = __omcQ_24tmpVar11;
  }
  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_alg), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = tmpMeta3;
  _alg = tmpMeta2;

  {
    modelica_metatype __omcQ_24tmpVar13;
    modelica_metatype* tmp9;
    modelica_metatype tmpMeta10;
    modelica_metatype __omcQ_24tmpVar12;
    modelica_integer tmp11;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 4)));
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar13 = tmpMeta10; /* defaultValue */
    tmp9 = &__omcQ_24tmpVar13;
    while(1) {
      tmp11 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp11--;
      }
      if (tmp11 == 0) {
        __omcQ_24tmpVar12 = omc_NFFlatModel_obfuscateCref(threadData, _e, _obfuscationMap, NULL);
        *tmp9 = mmc_mk_cons(__omcQ_24tmpVar12,0);
        tmp9 = &MMC_CDR(*tmp9);
      } else if (tmp11 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp9 = mmc_mk_nil();
    tmpMeta8 = __omcQ_24tmpVar13;
  }
  tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_alg), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[4] = tmpMeta8;
  _alg = tmpMeta7;

  {
    modelica_metatype __omcQ_24tmpVar15;
    modelica_metatype* tmp14;
    modelica_metatype tmpMeta15;
    modelica_metatype tmpMeta16;
    modelica_metatype __omcQ_24tmpVar14;
    modelica_integer tmp17;
    modelica_metatype _s_loopVar = 0;
    modelica_metatype _s;
    _s_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2)));
    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar15 = tmpMeta15; /* defaultValue */
    tmp14 = &__omcQ_24tmpVar15;
    while(1) {
      tmp17 = 1;
      if (!listEmpty(_s_loopVar)) {
        _s = MMC_CAR(_s_loopVar);
        _s_loopVar = MMC_CDR(_s_loopVar);
        tmp17--;
      }
      if (tmp17 == 0) {
        tmpMeta16 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 5))), _obfuscationMap);
        __omcQ_24tmpVar14 = omc_NFStatement_map(threadData, _s, (modelica_fnptr) mmc_mk_box2(0,closure5_NFFlatModel_obfuscateStatement,tmpMeta16));
        *tmp14 = mmc_mk_cons(__omcQ_24tmpVar14,0);
        tmp14 = &MMC_CDR(*tmp14);
      } else if (tmp17 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp14 = mmc_mk_nil();
    tmpMeta13 = __omcQ_24tmpVar15;
  }
  tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_alg), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = tmpMeta13;
  _alg = tmpMeta12;
  _return: OMC_LABEL_UNUSED
  return _alg;
}

static modelica_metatype closure6_NFFlatModel_obfuscateExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFFlatModel_obfuscateExp(thData, $in_exp, obfuscationMap);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype _obfuscationMap)
{
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  _eq = omc_NFEquation_setSource(threadData, omc_NFFlatModel_obfuscateSource(threadData, omc_NFEquation_source(threadData, _eq), omc_NFEquation_scope(threadData, _eq), _obfuscationMap), _eq);

  tmpMeta1 = mmc_mk_box1(0, _obfuscationMap);
  _eq = omc_NFEquation_mapExpShallow(threadData, _eq, (modelica_fnptr) mmc_mk_box2(0,closure6_NFFlatModel_obfuscateExp,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _eq;
}

DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateExp__impl(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _obfuscationMap)
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
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = omc_NFFlatModel_obfuscateCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _obfuscationMap, NULL);
          _exp = tmpMeta5;
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

DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateExpOpt(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _obfuscationMap)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  if(isSome(_exp))
  {
    _exp = mmc_mk_some(omc_NFFlatModel_obfuscateExp(threadData, omc_Util_getOption(threadData, _exp), _obfuscationMap));
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

static modelica_metatype closure7_NFFlatModel_obfuscateExp__impl(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFFlatModel_obfuscateExp__impl(thData, $in_exp, obfuscationMap);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _obfuscationMap)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  tmpMeta1 = mmc_mk_box1(0, _obfuscationMap);
  _exp = omc_NFExpression_map(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure7_NFFlatModel_obfuscateExp__impl,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _exp;
}

static modelica_metatype closure8_NFFlatModel_obfuscateExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFFlatModel_obfuscateExp(thData, $in_exp, obfuscationMap);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _obfuscationMap, modelica_boolean *out_insideRecord)
{
  modelica_metatype _cref = NULL;
  modelica_boolean _insideRecord;
  modelica_metatype _name = NULL;
  modelica_metatype _rest_cref = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  _insideRecord = 0 /* false */;
  // _name has no default value.
  // _rest_cref has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cref;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _rest_cref = omc_NFFlatModel_obfuscateCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 6))), _obfuscationMap ,&_insideRecord);

          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_cref), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[6] = _rest_cref;
          _cref = tmpMeta5;

          if((!_insideRecord))
          {
            _name = omc_UnorderedMap_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2))), _obfuscationMap);

            if(isSome(_name))
            {
              tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_cref), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = omc_NFInstNode_InstNode_rename(threadData, omc_Util_getOption(threadData, _name), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2))));
              _cref = tmpMeta6;
            }
          }

          _insideRecord = omc_NFInstNode_InstNode_isRecord(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2))));

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp9;
            modelica_metatype tmpMeta10;
            modelica_metatype tmpMeta11;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp12;
            modelica_metatype _s_loopVar = 0;
            modelica_metatype _s;
            _s_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 3)));
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta10; /* defaultValue */
            tmp9 = &__omcQ_24tmpVar17;
            while(1) {
              tmp12 = 1;
              if (!listEmpty(_s_loopVar)) {
                _s = MMC_CAR(_s_loopVar);
                _s_loopVar = MMC_CDR(_s_loopVar);
                tmp12--;
              }
              if (tmp12 == 0) {
                tmpMeta11 = mmc_mk_box1(0, _obfuscationMap);
                __omcQ_24tmpVar16 = omc_NFSubscript_mapShallowExp(threadData, _s, (modelica_fnptr) mmc_mk_box2(0,closure8_NFFlatModel_obfuscateExp,tmpMeta11));
                *tmp9 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp9 = &MMC_CDR(*tmp9);
              } else if (tmp12 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp9 = mmc_mk_nil();
            tmpMeta8 = __omcQ_24tmpVar17;
          }
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_cref), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = tmpMeta8;
          _cref = tmpMeta7;
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
  if (out_insideRecord) { *out_insideRecord = _insideRecord; }
  return _cref;
}
modelica_metatype boxptr_NFFlatModel_obfuscateCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _obfuscationMap, modelica_metatype *out_insideRecord)
{
  modelica_boolean _insideRecord;
  modelica_metatype _cref = NULL;
  _cref = omc_NFFlatModel_obfuscateCref(threadData, __omcQ_24in_5Fcref, _obfuscationMap, &_insideRecord);
  /* skip box _cref; NFComponentRef */
  if (out_insideRecord) { *out_insideRecord = mmc_mk_icon(_insideRecord); }
  return _cref;
}

static modelica_metatype closure9_NFFlatModel_obfuscateExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFFlatModel_obfuscateExp(thData, $in_exp, obfuscationMap);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscateVariable(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _obfuscationMap)
{
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFFlatModel_obfuscateCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _obfuscationMap, NULL);
  _var = tmpMeta1;

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[9] = omc_NFFlatModel_obfuscateComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 9))), omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))), _obfuscationMap, (!omc_NFVariable_isAccessible(threadData, _var)));
  _var = tmpMeta2;

  tmpMeta3 = mmc_mk_box1(0, _obfuscationMap);
  _var = omc_NFVariable_mapExpShallow(threadData, _var, (modelica_fnptr) mmc_mk_box2(0,closure9_NFFlatModel_obfuscateExp,tmpMeta3));
  _return: OMC_LABEL_UNUSED
  return _var;
}

DLLDirection
void omc_NFFlatModel_addObfuscatedVariable(threadData_t *threadData, modelica_metatype _var, modelica_boolean _onlyEncrypted, modelica_metatype _obfuscationMap)
{
  modelica_metatype _info = NULL;
  modelica_string _filename = NULL;
  modelica_metatype _nodes = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  // _filename has no default value.
  // _nodes has no default value.
  if((omc_NFVariable_isProtected(threadData, _var) && ((!_onlyEncrypted) || omc_NFVariable_isEncrypted(threadData, _var))))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _nodes = omc_NFComponentRef_nodes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), tmpMeta1);

    _nodes = omc_List_trim(threadData, _nodes, boxvar_NFInstNode_InstNode_isPublic);

    {
      modelica_metatype _node;
      for (tmpMeta2 = _nodes; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
      {
        _node = MMC_CAR(tmpMeta2);
        tmp3 = modelica_integer_to_modelica_string(((modelica_integer) 1) + omc_UnorderedMap_size(threadData, _obfuscationMap), ((modelica_integer) 0), 1 /* true */);
        tmpMeta4 = stringAppend(_OMC_LIT23,tmp3);
        omc_UnorderedMap_tryAdd(threadData, _node, tmpMeta4, _obfuscationMap);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NFFlatModel_addObfuscatedVariable(threadData_t *threadData, modelica_metatype _var, modelica_metatype _onlyEncrypted, modelica_metatype _obfuscationMap)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_onlyEncrypted);
  omc_NFFlatModel_addObfuscatedVariable(threadData, _var, tmp1, _obfuscationMap);
  return;
}

static modelica_metatype closure10_NFFlatModel_obfuscateEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFFlatModel_obfuscateEquation(thData, $in_eq, obfuscationMap);
}static modelica_metatype closure11_NFFlatModel_obfuscateAlgorithm(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_alg)
{
  modelica_metatype obfuscationMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFFlatModel_obfuscateAlgorithm(thData, $in_alg, obfuscationMap);
}
DLLDirection
modelica_metatype omc_NFFlatModel_obfuscate(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype _obfuscation_map = NULL;
  modelica_boolean _only_encrypted;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  // _obfuscation_map has no default value.
  // _only_encrypted has no default value.
  _only_encrypted = (stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT50), _OMC_LIT30));

  _obfuscation_map = omc_UnorderedMap_new(threadData, boxvar_NFInstNode_InstNode_hash, boxvar_NFInstNode_InstNode_refEqual, ((modelica_integer) 1));

  {
    modelica_metatype _v;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      omc_NFFlatModel_addObfuscatedVariable(threadData, _v, _only_encrypted, _obfuscation_map);
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar19;
    modelica_metatype* tmp5;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar18;
    modelica_integer tmp7;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3)));
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar19 = tmpMeta6; /* defaultValue */
    tmp5 = &__omcQ_24tmpVar19;
    while(1) {
      tmp7 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp7--;
      }
      if (tmp7 == 0) {
        __omcQ_24tmpVar18 = omc_NFFlatModel_obfuscateVariable(threadData, _v, _obfuscation_map);
        *tmp5 = mmc_mk_cons(__omcQ_24tmpVar18,0);
        tmp5 = &MMC_CDR(*tmp5);
      } else if (tmp7 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp5 = mmc_mk_nil();
    tmpMeta4 = __omcQ_24tmpVar19;
  }
  tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[3] = tmpMeta4;
  _flatModel = tmpMeta3;

  tmpMeta8 = mmc_mk_box1(0, _obfuscation_map);
  _flatModel = omc_NFFlatModel_mapEquations(threadData, _flatModel, (modelica_fnptr) mmc_mk_box2(0,closure10_NFFlatModel_obfuscateEquation,tmpMeta8));

  tmpMeta9 = mmc_mk_box1(0, _obfuscation_map);
  _flatModel = omc_NFFlatModel_mapAlgorithms(threadData, _flatModel, (modelica_fnptr) mmc_mk_box2(0,closure11_NFFlatModel_obfuscateAlgorithm,tmpMeta9));
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

DLLDirection
modelica_metatype omc_NFFlatModel_typeFlatType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty)
{
  modelica_metatype _ty = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ty = __omcQ_24in_5Fty;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _ty;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,11,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,4,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_NFTyping_typeBindings(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))), ((modelica_integer) 8));
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
  return _ty;
}

DLLDirection
modelica_metatype omc_NFFlatModel_reconstructRecordInstance(threadData_t *threadData, modelica_metatype _recordName, modelica_metatype _variables)
{
  modelica_metatype _recordVar = NULL;
  modelica_metatype _record_node = NULL;
  modelica_metatype _record_comp = NULL;
  modelica_metatype _record_ty = NULL;
  modelica_metatype _field_exps = NULL;
  modelica_metatype _record_exp = NULL;
  modelica_metatype _record_binding = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _recordVar has no default value.
  // _record_node has no default value.
  // _record_comp has no default value.
  // _record_ty has no default value.
  // _field_exps has no default value.
  // _record_exp has no default value.
  // _record_binding has no default value.
  _record_node = omc_NFComponentRef_node(threadData, _recordName);

  _record_comp = omc_NFInstNode_InstNode_component(threadData, _record_node);

  _record_ty = omc_NFComponentRef_nodeType(threadData, _recordName);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _field_exps = tmpMeta1;

  {
    modelica_metatype _v;
    for (tmpMeta2 = _variables; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      if(omc_NFBinding_hasExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 4)))))
      {
        tmpMeta3 = mmc_mk_cons(omc_NFBinding_getExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 4)))), _field_exps);
        _field_exps = tmpMeta3;
      }
      else
      {
        tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
        _field_exps = tmpMeta4;

        break;
      }
    }
  }

  if(listEmpty(_field_exps))
  {
    _record_binding = _OMC_LIT51;
  }
  else
  {
    _field_exps = listReverseInPlace(_field_exps);

    _record_exp = omc_NFExpression_makeRecord(threadData, omc_NFInstNode_InstNode_scopePath(threadData, omc_NFInstNode_InstNode_classScope(threadData, _record_node), 1, 0 /* false */), _record_ty, _field_exps);

    _record_binding = omc_NFBinding_makeFlat(threadData, _record_exp, omc_NFComponent_variability(threadData, _record_comp), 4);
  }

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = mmc_mk_box11(3, &NFVariable_VARIABLE__desc, _recordName, _record_ty, _record_binding, mmc_mk_integer(omc_NFInstNode_InstNode_visibility(threadData, _record_node)), omc_NFComponent_getAttributes(threadData, _record_comp), tmpMeta6, _variables, omc_NFComponent_comment(threadData, _record_comp), omc_NFInstNode_InstNode_info(threadData, _record_node), _OMC_LIT55);
  _recordVar = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _recordVar;
}

DLLDirection
modelica_metatype omc_NFFlatModel_reconstructRecordInstances(threadData_t *threadData, modelica_metatype _variables)
{
  modelica_metatype _outVariables = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _rest_vars = NULL;
  modelica_metatype _record_vars = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _parent_cr = NULL;
  modelica_metatype _parent_ty = NULL;
  modelica_integer _field_count;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outVariables = tmpMeta1;
  _rest_vars = _variables;
  // _record_vars has no default value.
  // _var has no default value.
  // _parent_cr has no default value.
  // _parent_ty has no default value.
  // _field_count has no default value.
  while(1)
  {
    if(!(!listEmpty(_rest_vars))) break;
    /* Pattern-matching assignment */
    tmpMeta2 = _rest_vars;
    if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
    tmpMeta3 = MMC_CAR(tmpMeta2);
    tmpMeta4 = MMC_CDR(tmpMeta2);
    _var = tmpMeta3;
    _rest_vars = tmpMeta4;

    _parent_cr = omc_NFComponentRef_rest(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))));

    if((!omc_NFComponentRef_isEmpty(threadData, _parent_cr)))
    {
      _parent_ty = omc_NFComponentRef_nodeType(threadData, _parent_cr);

      if(omc_NFType_isRecord(threadData, _parent_ty))
      {
        _field_count = listLength(omc_NFType_recordFields(threadData, _parent_ty));

        _record_vars = omc_List_split(threadData, _rest_vars, ((modelica_integer) -1) + _field_count ,&_rest_vars);

        tmpMeta5 = mmc_mk_cons(_var, _record_vars);
        _record_vars = tmpMeta5;

        _var = omc_NFFlatModel_reconstructRecordInstance(threadData, _parent_cr, _record_vars);
      }
    }

    tmpMeta6 = mmc_mk_cons(_var, _outVariables);
    _outVariables = tmpMeta6;
  }

  _outVariables = listReverseInPlace(_outVariables);
  _return: OMC_LABEL_UNUSED
  return _outVariables;
}

DLLDirection
void omc_NFFlatModel_collectComponentFlatTypes(threadData_t *threadData, modelica_metatype _component, modelica_metatype _types)
{
  modelica_metatype _comp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  _comp = omc_NFInstNode_InstNode_component(threadData, _component);

  omc_NFFlatModel_collectFlatType(threadData, omc_NFComponent_getType(threadData, _comp), _types);

  omc_NFFlatModel_collectBindingFlatTypes(threadData, omc_NFComponent_getBinding(threadData, _comp), _types);
  _return: OMC_LABEL_UNUSED
  return;
}

static void closure12_NFFlatModel_collectComponentFlatTypes(threadData_t *thData, modelica_metatype closure, modelica_metatype component)
{
  modelica_metatype types = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  boxptr_NFFlatModel_collectComponentFlatTypes(thData, component, types);
}
DLLDirection
void omc_NFFlatModel_collectFunctionFlatTypes(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _types)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box1(0, _types);
  omc_NFClassTree_ClassTree_applyComponents(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 3))))), (modelica_fnptr) mmc_mk_box2(0,closure12_NFFlatModel_collectComponentFlatTypes,tmpMeta1));

  if((!omc_NFFunction_Function_isExternal(threadData, _fn)))
  {
    omc_NFFlatModel_collectStatementsFlatTypes(threadData, omc_NFFunction_Function_getBody(threadData, _fn), _types);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFFlatModel_collectExpFlatTypes__traverse(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Ftypes)
{
  modelica_metatype _types = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _types = __omcQ_24in_5Ftypes;
  omc_NFFlatModel_collectFlatType(threadData, omc_NFExpression_typeOf(threadData, _exp), _types);
  _return: OMC_LABEL_UNUSED
  return _types;
}

DLLDirection
void omc_NFFlatModel_collectExpFlatTypes(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _types)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_NFExpression_fold(threadData, _exp, boxvar_NFFlatModel_collectExpFlatTypes__traverse, _types);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFFlatModel_collectStmtBranchFlatTypes(threadData_t *threadData, modelica_metatype _branch, modelica_metatype _types)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_NFFlatModel_collectExpFlatTypes(threadData, omc_Util_tuple21(threadData, _branch), _types);

  omc_NFFlatModel_collectStatementsFlatTypes(threadData, omc_Util_tuple22(threadData, _branch), _types);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFFlatModel_collectStatementFlatTypes(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _types)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _stmt;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _types);

          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _types);

          omc_NFFlatModel_collectFlatType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _types);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectStatementsFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _types);

          omc_NFFlatModel_collectExpFlatTypes(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))), _types);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), boxvar_NFFlatModel_collectStmtBranchFlatTypes, _types);
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), boxvar_NFFlatModel_collectStmtBranchFlatTypes, _types);
          goto tmp2_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _types);

          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _types);

          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _types);
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _types);
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _types);

          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _types);
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _types);
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _types);

          omc_NFFlatModel_collectStatementsFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _types);
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
void omc_NFFlatModel_collectStatementsFlatTypes(threadData_t *threadData, modelica_metatype _statements, modelica_metatype _types)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _s;
    for (tmpMeta1 = _statements; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _s = MMC_CAR(tmpMeta1);
      omc_NFFlatModel_collectStatementFlatTypes(threadData, _s, _types);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFFlatModel_collectAlgorithmFlatTypes(threadData_t *threadData, modelica_metatype _alg, modelica_metatype _types)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_NFFlatModel_collectStatementsFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _types);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFFlatModel_collectEqBranchFlatTypes(threadData_t *threadData, modelica_metatype _branch, modelica_metatype _types)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _branch;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2))), _types);

          omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 4))), boxvar_NFFlatModel_collectEquationFlatTypes, _types);
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
  return;
}

DLLDirection
void omc_NFFlatModel_collectEquationFlatTypes(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _types)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _types);

          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _types);

          omc_NFFlatModel_collectFlatType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _types);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _types);

          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _types);

          omc_NFFlatModel_collectFlatType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _types);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))))
          {
            omc_NFFlatModel_collectExpFlatTypes(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))), _types);
          }

          omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), boxvar_NFFlatModel_collectEquationFlatTypes, _types);
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), boxvar_NFFlatModel_collectEqBranchFlatTypes, _types);
          goto tmp2_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), boxvar_NFFlatModel_collectEqBranchFlatTypes, _types);
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _types);

          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _types);

          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _types);
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _types);
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _types);
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          omc_NFFlatModel_collectExpFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _types);
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
void omc_NFFlatModel_collectBindingFlatTypes(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _types)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if(omc_NFBinding_isExplicitlyBound(threadData, _binding))
  {
    omc_NFFlatModel_collectExpFlatTypes(threadData, omc_NFBinding_getTypedExp(threadData, _binding), _types);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFFlatModel_collectFlatType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _types)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _ty;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 6; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NFType_isBuiltinEnumeration(threadData, _ty))) goto tmp2_end;
          omc_UnorderedMap_tryAdd(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))), _ty, _types);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_NFDimension_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))), boxvar_NFFlatModel_collectExpFlatTypes__traverse, _types);

          /* Tail recursive call */
          _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,11,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,4,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_UnorderedMap_tryAdd(threadData, omc_NFInstNode_InstNode_scopePath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))), 1, 0 /* false */), _ty, _types);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,11,2) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_UnorderedMap_tryAdd(threadData, omc_NFInstNode_InstNode_scopePath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))), 1, 0 /* false */), _ty, _types);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,12,2) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (1 != tmp8) goto tmp2_end;
          /* Pattern matching succeeded */
          omc_UnorderedMap_tryAdd(threadData, omc_NFInstNode_InstNode_scopePath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2)))), 3))), 1, 0 /* false */), _ty, _types);
          goto tmp2_done;
        }
        case 5: {
          
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
void omc_NFFlatModel_collectVariableFlatTypes(threadData_t *threadData, modelica_metatype _var, modelica_metatype _types)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_NFFlatModel_collectFlatType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))), _types);

  omc_NFFlatModel_collectBindingFlatTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))), _types);

  {
    modelica_metatype _attr;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _attr = MMC_CAR(tmpMeta1);
      omc_NFFlatModel_collectBindingFlatTypes(threadData, omc_Util_tuple22(threadData, _attr), _types);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFFlatModel_collectFlatTypes(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _functions)
{
  modelica_metatype _outTypes = NULL;
  modelica_metatype _types = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTypes has no default value.
  // _types has no default value.
  _types = omc_UnorderedMap_new(threadData, boxvar_AbsynUtil_pathHash, boxvar_AbsynUtil_pathEqual, ((modelica_integer) 1));

  omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))), boxvar_NFFlatModel_collectVariableFlatTypes, _types);

  omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), boxvar_NFFlatModel_collectEquationFlatTypes, _types);

  omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))), boxvar_NFFlatModel_collectEquationFlatTypes, _types);

  omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))), boxvar_NFFlatModel_collectAlgorithmFlatTypes, _types);

  omc_List_map1__0(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7))), boxvar_NFFlatModel_collectAlgorithmFlatTypes, _types);

  omc_List_map1__0(threadData, _functions, boxvar_NFFlatModel_collectFunctionFlatTypes, _types);

  _outTypes = omc_UnorderedMap_valueList(threadData, _types);

  {
    modelica_metatype __omcQ_24tmpVar21;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar20;
    modelica_integer tmp4;
    modelica_metatype _ty_loopVar = 0;
    modelica_metatype _ty;
    _ty_loopVar = _outTypes;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar21 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar21;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_ty_loopVar)) {
        _ty = MMC_CAR(_ty_loopVar);
        _ty_loopVar = MMC_CDR(_ty_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar20 = omc_NFFlatModel_typeFlatType(threadData, _ty);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar20,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar21;
  }
  _outTypes = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTypes;
}

DLLDirection
modelica_metatype omc_NFFlatModel_appendFlatStream(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _functions, modelica_boolean _printBindingTypes, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype _flat_model = NULL;
  modelica_string _name = NULL;
  modelica_metatype _format = NULL;
  modelica_boolean _scalarize;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  _flat_model = _flatModel;
  _name = omc_Util_makeQuotedIdentifier(threadData, omc_NFFlatModel_className(threadData, _flatModel));
  // _format has no default value.
  // _scalarize has no default value.
  _format = omc_BaseModelica_formatFromFlags(threadData);

  _scalarize = omc_Flags_isConfigFlagSet(threadData, _OMC_LIT72, _OMC_LIT62);

  if(((stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT50), _OMC_LIT34)) || (stringEqual(omc_Flags_getConfigString(threadData, _OMC_LIT50), _OMC_LIT30))))
  {
    _flat_model = omc_NFFlatModel_obfuscate(threadData, _flat_model);
  }

  if(_scalarize)
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = omc_NFScalarize_scalarizeVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 3))), 1 /* true */);
    _flat_model = tmpMeta1;

    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[4] = omc_NFEquation_splitRecordEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 4))));
    _flat_model = tmpMeta2;

    tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[4] = omc_NFScalarize_scalarizeEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 4))), 1 /* true */);
    _flat_model = tmpMeta3;

    tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[4] = omc_NFEquation_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 4))), boxvar_NFExpandExp_expandCallArgs);
    _flat_model = tmpMeta4;

    tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[5] = omc_NFEquation_splitRecordEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 5))));
    _flat_model = tmpMeta5;

    tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_NFScalarize_scalarizeEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 5))), 1 /* true */);
    _flat_model = tmpMeta6;

    tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFEquation_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 5))), boxvar_NFExpandExp_expandCallArgs);
    _flat_model = tmpMeta7;

    {
      modelica_metatype __omcQ_24tmpVar23;
      modelica_metatype* tmp10;
      modelica_metatype tmpMeta11;
      modelica_metatype __omcQ_24tmpVar22;
      modelica_integer tmp12;
      modelica_metatype _a_loopVar = 0;
      modelica_metatype _a;
      _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 6)));
      tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar23 = tmpMeta11; /* defaultValue */
      tmp10 = &__omcQ_24tmpVar23;
      while(1) {
        tmp12 = 1;
        if (!listEmpty(_a_loopVar)) {
          _a = MMC_CAR(_a_loopVar);
          _a_loopVar = MMC_CDR(_a_loopVar);
          tmp12--;
        }
        if (tmp12 == 0) {
          __omcQ_24tmpVar22 = omc_NFFlatten_unrollForStatementsInAlg(threadData, _a);
          *tmp10 = mmc_mk_cons(__omcQ_24tmpVar22,0);
          tmp10 = &MMC_CDR(*tmp10);
        } else if (tmp12 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp10 = mmc_mk_nil();
      tmpMeta9 = __omcQ_24tmpVar23;
    }
    tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = tmpMeta9;
    _flat_model = tmpMeta8;

    {
      modelica_metatype __omcQ_24tmpVar25;
      modelica_metatype* tmp15;
      modelica_metatype tmpMeta16;
      modelica_metatype __omcQ_24tmpVar24;
      modelica_integer tmp17;
      modelica_metatype _a_loopVar = 0;
      modelica_metatype _a;
      _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 7)));
      tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar25 = tmpMeta16; /* defaultValue */
      tmp15 = &__omcQ_24tmpVar25;
      while(1) {
        tmp17 = 1;
        if (!listEmpty(_a_loopVar)) {
          _a = MMC_CAR(_a_loopVar);
          _a_loopVar = MMC_CDR(_a_loopVar);
          tmp17--;
        }
        if (tmp17 == 0) {
          __omcQ_24tmpVar24 = omc_NFFlatten_unrollForStatementsInAlg(threadData, _a);
          *tmp15 = mmc_mk_cons(__omcQ_24tmpVar24,0);
          tmp15 = &MMC_CDR(*tmp15);
        } else if (tmp17 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp15 = mmc_mk_nil();
      tmpMeta14 = __omcQ_24tmpVar25;
    }
    tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[7] = tmpMeta14;
    _flat_model = tmpMeta13;
  }
  else
  {
    tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[3] = omc_NFFlatModel_reconstructRecordInstances(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 3))));
    _flat_model = tmpMeta18;
  }

  if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_format), 4)))))
  {
    _flat_model = omc_NFFlatModel_moveBindings(threadData, _flat_model);
  }

  _s = omc_IOStream_append(threadData, _s, _OMC_LIT73);

  tmpMeta19 = stringAppend(_OMC_LIT74,_name);
  tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT75);
  _s = omc_IOStream_append(threadData, _s, tmpMeta20);

  {
    modelica_metatype _fn;
    for (tmpMeta21 = _functions; !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
    {
      _fn = MMC_CAR(tmpMeta21);
      if((!(omc_NFFunction_Function_isDefaultRecordConstructor(threadData, _fn) || omc_NFFunction_Function_isExternalObjectConstructorOrDestructor(threadData, _fn))))
      {
        _s = omc_NFFunction_Function_toFlatStream(threadData, _fn, _OMC_LIT76, _OMC_LIT77, _s, _OMC_LIT78);

        _s = omc_IOStream_append(threadData, _s, _OMC_LIT79);
      }
    }
  }

  {
    modelica_metatype _ty;
    for (tmpMeta23 = omc_NFFlatModel_collectFlatTypes(threadData, _flat_model, _functions); !listEmpty(tmpMeta23); tmpMeta23=MMC_CDR(tmpMeta23))
    {
      _ty = MMC_CAR(tmpMeta23);
      _s = omc_NFType_toFlatDeclarationStream(threadData, _ty, _format, _OMC_LIT77, _s);

      _s = omc_IOStream_append(threadData, _s, _OMC_LIT79);
    }
  }

  tmpMeta25 = stringAppend(_OMC_LIT80,_name);
  _s = omc_IOStream_append(threadData, _s, tmpMeta25);

  _s = omc_NFFlatModelicaUtil_appendElementSourceCommentString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 8))), _s);

  _s = omc_IOStream_append(threadData, _s, _OMC_LIT75);

  {
    modelica_metatype _v;
    for (tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 3))); !listEmpty(tmpMeta26); tmpMeta26=MMC_CDR(tmpMeta26))
    {
      _v = MMC_CAR(tmpMeta26);
      _s = omc_NFVariable_toFlatStream(threadData, _v, _format, _OMC_LIT81, _printBindingTypes, _s);

      _s = omc_IOStream_append(threadData, _s, _OMC_LIT82);
    }
  }

  if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 5))))))
  {
    _s = omc_IOStream_append(threadData, _s, _OMC_LIT83);

    _s = omc_NFEquation_toFlatStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 5))), _format, _OMC_LIT81, _s);
  }

  if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 4))))))
  {
    _s = omc_IOStream_append(threadData, _s, _OMC_LIT84);

    _s = omc_NFEquation_toFlatStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 4))), _format, _OMC_LIT81, _s);
  }

  {
    modelica_metatype _alg;
    for (tmpMeta28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 7))); !listEmpty(tmpMeta28); tmpMeta28=MMC_CDR(tmpMeta28))
    {
      _alg = MMC_CAR(tmpMeta28);
      if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))))))
      {
        _s = omc_IOStream_append(threadData, _s, _OMC_LIT85);

        _s = omc_NFStatement_toFlatStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _format, _OMC_LIT81, _s);
      }
    }
  }

  {
    modelica_metatype _alg;
    for (tmpMeta30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 6))); !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
    {
      _alg = MMC_CAR(tmpMeta30);
      if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))))))
      {
        _s = omc_IOStream_append(threadData, _s, _OMC_LIT86);

        _s = omc_NFStatement_toFlatStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _format, _OMC_LIT81, _s);
      }
    }
  }

  _s = omc_NFFlatModelicaUtil_appendElementSourceCommentAnnotation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 8))), 1, _OMC_LIT81, _OMC_LIT82, _s);

  tmpMeta32 = stringAppend(_OMC_LIT87,_name);
  tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT82);
  _s = omc_IOStream_append(threadData, _s, tmpMeta33);

  tmpMeta34 = stringAppend(_OMC_LIT88,_name);
  tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT82);
  _s = omc_IOStream_append(threadData, _s, tmpMeta35);
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_NFFlatModel_appendFlatStream(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _functions, modelica_metatype _printBindingTypes, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = mmc_unbox_integer(_printBindingTypes);
  _s = omc_NFFlatModel_appendFlatStream(threadData, _flatModel, _functions, tmp1, __omcQ_24in_5Fs);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLDirection
modelica_metatype omc_NFFlatModel_toFlatStream(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _functions, modelica_boolean _printBindingTypes)
{
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  _s = omc_IOStream_create(threadData, omc_NFFlatModel_className(threadData, _flatModel), _OMC_LIT89);

  _s = omc_NFFlatModel_appendFlatStream(threadData, _flatModel, _functions, _printBindingTypes, _s);
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_NFFlatModel_toFlatStream(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _functions, modelica_metatype _printBindingTypes)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = mmc_unbox_integer(_printBindingTypes);
  _s = omc_NFFlatModel_toFlatStream(threadData, _flatModel, _functions, tmp1);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLDirection
void omc_NFFlatModel_printFlatString(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _functions, modelica_boolean _printBindingTypes)
{
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  _s = omc_NFFlatModel_toFlatStream(threadData, _flatModel, _functions, _printBindingTypes);

  omc_IOStream_print(threadData, _s, ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NFFlatModel_printFlatString(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _functions, modelica_metatype _printBindingTypes)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_printBindingTypes);
  omc_NFFlatModel_printFlatString(threadData, _flatModel, _functions, tmp1);
  return;
}

DLLDirection
modelica_string omc_NFFlatModel_toFlatString(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _functions, modelica_boolean _printBindingTypes)
{
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = omc_IOStream_string(threadData, omc_NFFlatModel_toFlatStream(threadData, _flatModel, _functions, _printBindingTypes));
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NFFlatModel_toFlatString(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _functions, modelica_metatype _printBindingTypes)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_printBindingTypes);
  _str = omc_NFFlatModel_toFlatString(threadData, _flatModel, _functions, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_metatype omc_NFFlatModel_appendStream(threadData_t *threadData, modelica_metatype _flatModel, modelica_boolean _printBindingTypes, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_string _name = NULL;
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
  _s = __omcQ_24in_5Fs;
  _name = omc_NFFlatModel_className(threadData, _flatModel);
  tmpMeta1 = stringAppend(_OMC_LIT90,_name);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT75);
  _s = omc_IOStream_append(threadData, _s, tmpMeta2);

  {
    modelica_metatype _v;
    for (tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _v = MMC_CAR(tmpMeta3);
      _s = omc_NFVariable_toStream(threadData, _v, _OMC_LIT77, _printBindingTypes, _s);

      _s = omc_IOStream_append(threadData, _s, _OMC_LIT82);
    }
  }

  if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))))))
  {
    _s = omc_IOStream_append(threadData, _s, _OMC_LIT91);

    _s = omc_NFEquation_toStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))), _OMC_LIT77, _s);
  }

  if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))))))
  {
    _s = omc_IOStream_append(threadData, _s, _OMC_LIT92);

    _s = omc_NFEquation_toStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), _OMC_LIT77, _s);
  }

  {
    modelica_metatype _alg;
    for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _alg = MMC_CAR(tmpMeta5);
      if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))))))
      {
        _s = omc_IOStream_append(threadData, _s, _OMC_LIT93);

        _s = omc_NFStatement_toStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _OMC_LIT77, _s);
      }
    }
  }

  {
    modelica_metatype _alg;
    for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _alg = MMC_CAR(tmpMeta7);
      if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))))))
      {
        _s = omc_IOStream_append(threadData, _s, _OMC_LIT94);

        _s = omc_NFStatement_toStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _OMC_LIT77, _s);
      }
    }
  }

  tmpMeta9 = stringAppend(_OMC_LIT88,_name);
  tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT82);
  _s = omc_IOStream_append(threadData, _s, tmpMeta10);
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_NFFlatModel_appendStream(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _printBindingTypes, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = mmc_unbox_integer(_printBindingTypes);
  _s = omc_NFFlatModel_appendStream(threadData, _flatModel, tmp1, __omcQ_24in_5Fs);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLDirection
modelica_metatype omc_NFFlatModel_toStream(threadData_t *threadData, modelica_metatype _flatModel, modelica_boolean _printBindingTypes)
{
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  _s = omc_IOStream_create(threadData, _OMC_LIT95, _OMC_LIT89);

  _s = omc_NFFlatModel_appendStream(threadData, _flatModel, _printBindingTypes, _s);
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_NFFlatModel_toStream(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _printBindingTypes)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = mmc_unbox_integer(_printBindingTypes);
  _s = omc_NFFlatModel_toStream(threadData, _flatModel, tmp1);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLDirection
void omc_NFFlatModel_printString(threadData_t *threadData, modelica_metatype _flatModel, modelica_boolean _printBindingTypes)
{
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  _s = omc_NFFlatModel_toStream(threadData, _flatModel, _printBindingTypes);

  omc_IOStream_print(threadData, _s, ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NFFlatModel_printString(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _printBindingTypes)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_printBindingTypes);
  omc_NFFlatModel_printString(threadData, _flatModel, tmp1);
  return;
}

DLLDirection
modelica_string omc_NFFlatModel_toString(threadData_t *threadData, modelica_metatype _flatModel, modelica_boolean _printBindingTypes)
{
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = omc_IOStream_string(threadData, omc_NFFlatModel_toStream(threadData, _flatModel, _printBindingTypes));
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NFFlatModel_toString(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _printBindingTypes)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_printBindingTypes);
  _str = omc_NFFlatModel_toString(threadData, _flatModel, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_string omc_NFFlatModel_className(threadData_t *threadData, modelica_metatype _flatModel)
{
  modelica_string _name = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _name = omc_AbsynUtil_pathLastIdent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 2))));
  _return: OMC_LABEL_UNUSED
  return _name;
}

DLLDirection
modelica_string omc_NFFlatModel_fullName(threadData_t *threadData, modelica_metatype _flatModel)
{
  modelica_string _name = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _name = omc_AbsynUtil_pathString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 2))), _OMC_LIT96, 1 /* true */, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _name;
}

DLLDirection
modelica_metatype omc_NFFlatModel_mapAlgorithms(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_fnptr _fn)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  {
    modelica_metatype __omcQ_24tmpVar27;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar26;
    modelica_integer tmp5;
    modelica_metatype _alg_loopVar = 0;
    modelica_metatype _alg;
    _alg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar27 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar27;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_alg_loopVar)) {
        _alg = MMC_CAR(_alg_loopVar);
        _alg_loopVar = MMC_CDR(_alg_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), _alg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, _alg);
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
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[6] = tmpMeta2;
  _flatModel = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar29;
    modelica_metatype* tmp8;
    modelica_metatype tmpMeta9;
    modelica_metatype __omcQ_24tmpVar28;
    modelica_integer tmp10;
    modelica_metatype _alg_loopVar = 0;
    modelica_metatype _alg;
    _alg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7)));
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar29 = tmpMeta9; /* defaultValue */
    tmp8 = &__omcQ_24tmpVar29;
    while(1) {
      tmp10 = 1;
      if (!listEmpty(_alg_loopVar)) {
        _alg = MMC_CAR(_alg_loopVar);
        _alg_loopVar = MMC_CDR(_alg_loopVar);
        tmp10--;
      }
      if (tmp10 == 0) {
        __omcQ_24tmpVar28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), _alg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, _alg);
        *tmp8 = mmc_mk_cons(__omcQ_24tmpVar28,0);
        tmp8 = &MMC_CDR(*tmp8);
      } else if (tmp10 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp8 = mmc_mk_nil();
    tmpMeta7 = __omcQ_24tmpVar29;
  }
  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[7] = tmpMeta7;
  _flatModel = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

DLLDirection
modelica_metatype omc_NFFlatModel_mapEquations(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_fnptr _fn)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  {
    modelica_metatype __omcQ_24tmpVar31;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar30;
    modelica_integer tmp5;
    modelica_metatype _eq_loopVar = 0;
    modelica_metatype _eq;
    _eq_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar31 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar31;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_eq_loopVar)) {
        _eq = MMC_CAR(_eq_loopVar);
        _eq_loopVar = MMC_CDR(_eq_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar30 = omc_NFEquation_map(threadData, _eq, ((modelica_fnptr) _fn));
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar30,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar31;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = tmpMeta2;
  _flatModel = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar33;
    modelica_metatype* tmp8;
    modelica_metatype tmpMeta9;
    modelica_metatype __omcQ_24tmpVar32;
    modelica_integer tmp10;
    modelica_metatype _eq_loopVar = 0;
    modelica_metatype _eq;
    _eq_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5)));
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar33 = tmpMeta9; /* defaultValue */
    tmp8 = &__omcQ_24tmpVar33;
    while(1) {
      tmp10 = 1;
      if (!listEmpty(_eq_loopVar)) {
        _eq = MMC_CAR(_eq_loopVar);
        _eq_loopVar = MMC_CDR(_eq_loopVar);
        tmp10--;
      }
      if (tmp10 == 0) {
        __omcQ_24tmpVar32 = omc_NFEquation_map(threadData, _eq, ((modelica_fnptr) _fn));
        *tmp8 = mmc_mk_cons(__omcQ_24tmpVar32,0);
        tmp8 = &MMC_CDR(*tmp8);
      } else if (tmp10 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp8 = mmc_mk_nil();
    tmpMeta7 = __omcQ_24tmpVar33;
  }
  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = tmpMeta7;
  _flatModel = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

DLLDirection
modelica_metatype omc_NFFlatModel_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_fnptr _fn)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  {
    modelica_metatype __omcQ_24tmpVar35;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar34;
    modelica_integer tmp5;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar35 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar35;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar34 = omc_NFVariable_mapExpShallow(threadData, _v, ((modelica_fnptr) _fn));
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar34,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar35;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
  _flatModel = tmpMeta1;

  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = omc_NFEquation_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), ((modelica_fnptr) _fn));
  _flatModel = tmpMeta6;

  tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFEquation_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))), ((modelica_fnptr) _fn));
  _flatModel = tmpMeta7;

  tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_NFAlgorithm_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))), ((modelica_fnptr) _fn));
  _flatModel = tmpMeta8;

  tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[7] = omc_NFAlgorithm_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7))), ((modelica_fnptr) _fn));
  _flatModel = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

