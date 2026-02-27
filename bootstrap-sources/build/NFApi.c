#include "omc_simulation_settings.h"
#include "NFApi.h"
#define _OMC_LIT0_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "dummy"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,5,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "<internal>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,10,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&SCode_Final_NOT__FINAL__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,4) {&SCode_Each_NOT__EACH__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT6,0.0);
#define _OMC_LIT6 MMC_REFREALLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "choice"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,6,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "baseClass"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,9,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "dims"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,4,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "$kind"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,5,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "extends"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,7,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,7) {&JSON_STRING__desc,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "elements"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,8,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "class"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,5,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,7) {&JSON_STRING__desc,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "name"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,4,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "restriction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,11,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "prefixes"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,8,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "Dialog"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,6,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "choices"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,7,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "choicesAllMatching"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,18,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,2,1) {_OMC_LIT23,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,2,1) {_OMC_LIT22,_OMC_LIT24}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,1) {_OMC_LIT21,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "type"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,4,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "component"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,9,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,7) {&JSON_STRING__desc,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "condition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,9,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "$type"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,5,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "final"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,5,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "each"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,4,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "comment"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,7,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "$value"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,6,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "modifiers"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,9,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "arguments"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,9,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "lhs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,3,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "rhs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,3,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "initialState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,12,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "transition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,10,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "connections"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,11,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "initialStates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,13,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "transitions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,11,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "path"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,4,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "shortName"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,9,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "imports"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,7,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "args"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,4,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "namedArgs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,9,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,4,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,7) {&JSON_STRING__desc,_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "filename"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,8,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "lineStart"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,9,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "columnStart"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,11,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "lineEnd"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,7,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "columnEnd"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,9,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "readonly"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,8,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "NFApi.dumpJSONAnnotationExp2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,28,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "$error"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,6,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "value"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,5,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "annotation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,10,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "constrainedby"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,13,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "partial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,7,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "encapsulated"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,12,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "public"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,6,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "inner"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,5,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "outer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,5,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "replaceable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,11,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "redeclare"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,9,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "connector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,9,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "variability"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,11,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "direction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,9,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "output"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,6,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,7) {&JSON_STRING__desc,_OMC_LIT73}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "input"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,5,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,2,7) {&JSON_STRING__desc,_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "absyn"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,5,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "typed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,5,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "binding"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,7,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "NFApi.dumpJSONBinding"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,21,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "source"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,6,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "missing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,7,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "generated"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,9,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "NFApi.dumpJSONComponent got unknown component "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,46,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/Script/NFApi.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,68,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT86_6,1.772185663e9);
#define _OMC_LIT86_6 MMC_REFREALLIT(_OMC_LIT_STRUCT86_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT85,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1404)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1405)),MMC_IMMEDIATE(MMC_TAGFIXNUM(45)),_OMC_LIT86_6}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,1,7) {&SCode_Mod_NOMOD__desc,}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "NFApi.dumpJSONInstanceAnnotation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,32,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,1,5) {&NFModifier_Modifier_NOMOD__desc,}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,1,5) {&NFSections_EMPTY__desc,}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,3,3) {&NFInst_InstSettings_SETTINGS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,1,6) {&NFApi_InstanceTree_EMPTY__desc,}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "enumeration"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,11,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,2,5) {&NFApi_InstanceTree_BUILTIN__BASE__CLASS__desc,_OMC_LIT93}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT95,2,1) {_OMC_LIT94,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT95 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "NFApi.buildInstanceTree got unknown class tree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,46,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT97_6,1.772185663e9);
#define _OMC_LIT97_6 MMC_REFREALLIT(_OMC_LIT_STRUCT97_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT85,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(942)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(942)),MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT97_6}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT98,2,3) {&NFModifier_ModifierScope_COMPONENT__desc,_OMC_LIT5}};
#define _OMC_LIT98 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,3,3) {&NFInst_InstSettings_SETTINGS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "__NoContext"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,11,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "Inst.instantiateRootClass"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,25,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "NFApi.buildInstanceTree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,23,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "evaluateAllParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,21,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "Evaluates all parameters if set, except the ones that have annotation(Evaluate = false)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,88,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT104}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT106,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(26)),_OMC_LIT103,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT105}};
#define _OMC_LIT106 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "Inst.instExpressions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,20,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "Typing.typeComponents"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,21,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "Typing.typeBinding"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,18,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "NFApi.dumpJSONInstanceTree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,26,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "JSON.toString"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,13,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "newInst"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,7,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "Enables new instantiation phase."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,32,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT115,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT114}};
#define _OMC_LIT115 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT115)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT116,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(66)),_OMC_LIT113,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT115}};
#define _OMC_LIT116 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "AllLoadedClasses"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,16,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT117}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "NFApi.frontEndLookup_dispatch("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,30,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,1,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "execstat"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,8,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "Prints out execution statistics for the compiler."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,49,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT123,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT122}};
#define _OMC_LIT123 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT123)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT124,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(31)),_OMC_LIT121,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT123}};
#define _OMC_LIT124 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "nfScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,11,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "Run scalarization in NF, default true."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,38,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT127,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT126}};
#define _OMC_LIT127 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT127)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT128,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(168)),_OMC_LIT125,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT127}};
#define _OMC_LIT128 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "NFApi.frontEndBack("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,19,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data ", name: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,8,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data ", scalarize: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,13,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,4,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,5,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "NFApi.frontEndFront_dispatch("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,29,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "NFApi.mkTop("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,12,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "NFApi.mkFullyQual"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,17,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "nfAPINoise"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,10,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "Enables error display for the experimental new instantiation use in the OMC API."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,80,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT139,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT138}};
#define _OMC_LIT139 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT139)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT140,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(173)),_OMC_LIT137,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT139}};
#define _OMC_LIT140 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "NFApi.mkFullyQual("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,18,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,2,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data ") -> "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,5,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,1,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,1,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "NFApi.evaluateAnnotations_dispatch("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,35,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data " annotation("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,12,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,1,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT149,1,3) {&Absyn_EqMod_NOMOD__desc,}};
#define _OMC_LIT149 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT149)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT150,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT150 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT150)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT151,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT150,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT151 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT151)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT152,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT152 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,1,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "Icon"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,4,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
#define _OMC_LIT155_data "Diagram"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT155,7,_OMC_LIT155_data);
#define _OMC_LIT155 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT155)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT156,2,1) {_OMC_LIT22,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT156 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT156)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT157,2,1) {_OMC_LIT155,_OMC_LIT156}};
#define _OMC_LIT157 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT157)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT158,2,1) {_OMC_LIT154,_OMC_LIT157}};
#define _OMC_LIT158 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,1,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
#define _OMC_LIT160_data "error evaluating: annotation("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT160,29,_OMC_LIT160_data);
#define _OMC_LIT160 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data "(\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,2,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
#define _OMC_LIT162_data "\")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT162,2,_OMC_LIT162_data);
#define _OMC_LIT162 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data "NFApi.evaluateAnnotation_dispatch("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,34,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#include "util/modelica.h"

#include "NFApi_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndLookup__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_expanded_cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_frontEndLookup__dispatch,2,0) {(void*) boxptr_NFApi_frontEndLookup__dispatch,0}};
#define boxvar_NFApi_frontEndLookup__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFApi_frontEndLookup__dispatch)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndLookup(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_expanded_cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_frontEndLookup,2,0) {(void*) boxptr_NFApi_frontEndLookup,0}};
#define boxvar_NFApi_frontEndLookup MMC_REFSTRUCTLIT(boxvar_lit_NFApi_frontEndLookup)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndBack(threadData_t *threadData, modelica_metatype _inst_cls, modelica_string _name, modelica_boolean _scalarize);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFApi_frontEndBack(threadData_t *threadData, modelica_metatype _inst_cls, modelica_metatype _name, modelica_metatype _scalarize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_frontEndBack,2,0) {(void*) boxptr_NFApi_frontEndBack,0}};
#define boxvar_NFApi_frontEndBack MMC_REFSTRUCTLIT(boxvar_lit_NFApi_frontEndBack)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndFront__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_inst_cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_frontEndFront__dispatch,2,0) {(void*) boxptr_NFApi_frontEndFront__dispatch,0}};
#define boxvar_NFApi_frontEndFront__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFApi_frontEndFront__dispatch)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_mkTop(threadData_t *threadData, modelica_metatype _absynProgram, modelica_string _name, modelica_metatype *out_top);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_mkTop,2,0) {(void*) boxptr_NFApi_mkTop,0}};
#define boxvar_NFApi_mkTop MMC_REFSTRUCTLIT(boxvar_lit_NFApi_mkTop)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndFront(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_inst_cls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_frontEndFront,2,0) {(void*) boxptr_NFApi_frontEndFront,0}};
#define boxvar_NFApi_frontEndFront MMC_REFSTRUCTLIT(boxvar_lit_NFApi_frontEndFront)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_evaluateAnnotations__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inElements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_evaluateAnnotations__dispatch,2,0) {(void*) boxptr_NFApi_evaluateAnnotations__dispatch,0}};
#define boxvar_NFApi_evaluateAnnotations__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFApi_evaluateAnnotations__dispatch)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFApi_evaluateAnnotation__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inAnnotation, modelica_boolean _addAnnotationName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFApi_evaluateAnnotation__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inAnnotation, modelica_metatype _addAnnotationName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFApi_evaluateAnnotation__dispatch,2,0) {(void*) boxptr_NFApi_evaluateAnnotation__dispatch,0}};
#define boxvar_NFApi_evaluateAnnotation__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFApi_evaluateAnnotation__dispatch)

DLLDirection
modelica_metatype omc_NFApi_updateMovedCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _env)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _cref = NULL;
  modelica_metatype _qualified_path = NULL;
  modelica_metatype _qualified_cref = NULL;
  modelica_metatype _opt_path = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  // _qualified_path has no default value.
  // _qualified_cref has no default value.
  // _opt_path has no default value.
  if((omc_AbsynUtil_crefIsFullyQualified(threadData, _cref) || omc_AbsynUtil_crefIsWild(threadData, _cref)))
  {
    goto _return;
  }

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
          _qualified_path = omc_NFLookup_lookupSimpleNameRootPath(threadData, omc_AbsynUtil_crefFirstIdent(threadData, _cref), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 2))), ((modelica_integer) 5));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto _return;
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

  if(omc_AbsynUtil_pathIsFullyQualified(threadData, _qualified_path))
  {
    _qualified_path = omc_AbsynUtil_makeNotFullyQualified(threadData, _qualified_path);

    if((omc_AbsynUtil_pathIsIdent(threadData, _qualified_path) && (stringEqual(omc_AbsynUtil_pathFirstIdent(threadData, _qualified_path), omc_AbsynUtil_pathFirstIdent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 3))))))))
    {
      _cref = omc_AbsynUtil_crefStripFirst(threadData, _cref);
    }
    else
    {
      _opt_path = omc_AbsynUtil_pathStripSamePrefix(threadData, _qualified_path, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 3))));

      if(isSome(_opt_path))
      {
        /* Pattern-matching assignment */
        tmpMeta5 = _opt_path;
        if (optionNone(tmpMeta5)) MMC_THROW_INTERNAL();
        tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
        _qualified_path = tmpMeta6;

        _qualified_cref = omc_AbsynUtil_pathToCref(threadData, _qualified_path);

        if(omc_AbsynUtil_crefIsQual(threadData, _cref))
        {
          _cref = omc_AbsynUtil_joinCrefs(threadData, _qualified_cref, omc_AbsynUtil_crefStripFirst(threadData, _cref));
        }
        else
        {
          _cref = _qualified_cref;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _cref;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedExp__traverser(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype *out_env)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _env = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _env = __omcQ_24in_5Fenv;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 5: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[2] = omc_NFApi_updateMovedCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _env);
          _exp = tmpMeta4;
          goto tmp2_done;
        }
        case 14: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFApi_updateMovedCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _env);
          _exp = tmpMeta5;
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
  if (out_env) { *out_env = _env; }
  return _exp;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _env)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _exp = omc_AbsynUtil_traverseExp(threadData, _exp, boxvar_NFApi_updateMovedExp__traverser, _env, NULL);
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedSubscript(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsub, modelica_metatype _env)
{
  modelica_metatype _sub = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sub = __omcQ_24in_5Fsub;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _sub;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_sub), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFApi_updateMovedExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sub), 2))), _env);
          _sub = tmpMeta5;
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
  return _sub;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedAnnotation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fann, modelica_metatype _env)
{
  modelica_metatype _ann = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ann = __omcQ_24in_5Fann;
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp5;
    modelica_metatype _a_loopVar = 0;
    modelica_metatype _a;
    _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ann), 2)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar3;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_a_loopVar)) {
        _a = MMC_CAR(_a_loopVar);
        _a_loopVar = MMC_CDR(_a_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar2 = omc_NFApi_updateMovedElementArg(threadData, _a, _env);
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
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(3));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_ann), 3*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = tmpMeta2;
  _ann = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ann;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedAnnotationOpt(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fann, modelica_metatype _env)
{
  modelica_metatype _ann = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ann = __omcQ_24in_5Fann;
  if(isSome(_ann))
  {
    _ann = mmc_mk_some(omc_NFApi_updateMovedAnnotation(threadData, omc_Util_getOption(threadData, _ann), _env));
  }
  _return: OMC_LABEL_UNUSED
  return _ann;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedComment(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcmt, modelica_metatype _env)
{
  modelica_metatype _cmt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cmt = __omcQ_24in_5Fcmt;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_cmt), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFApi_updateMovedAnnotationOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cmt), 2))), _env);
  _cmt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _cmt;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedCommentOpt(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcmt, modelica_metatype _env)
{
  modelica_metatype _cmt = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cmt = __omcQ_24in_5Fcmt;
  if(isSome(_cmt))
  {
    _cmt = mmc_mk_some(omc_NFApi_updateMovedComment(threadData, omc_Util_getOption(threadData, _cmt), _env));
  }
  _return: OMC_LABEL_UNUSED
  return _cmt;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedPath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _env)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _path = NULL;
  modelica_metatype _qualified_path = NULL;
  modelica_metatype _opt_path = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _path = __omcQ_24in_5Fpath;
  // _qualified_path has no default value.
  // _opt_path has no default value.
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
          _qualified_path = omc_NFLookup_lookupSimpleNameRootPath(threadData, omc_AbsynUtil_pathFirstIdent(threadData, _path), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 2))), ((modelica_integer) 5));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto _return;
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

  if(omc_AbsynUtil_pathIsFullyQualified(threadData, _qualified_path))
  {
    _qualified_path = omc_AbsynUtil_makeNotFullyQualified(threadData, _qualified_path);

    if((omc_AbsynUtil_pathIsIdent(threadData, _qualified_path) && (stringEqual(omc_AbsynUtil_pathFirstIdent(threadData, _qualified_path), omc_AbsynUtil_pathFirstIdent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 3))))))))
    {
      _path = omc_AbsynUtil_pathRest(threadData, _path);
    }
    else
    {
      _opt_path = omc_AbsynUtil_pathStripSamePrefix(threadData, _qualified_path, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 3))));

      if(isSome(_opt_path))
      {
        /* Pattern-matching assignment */
        tmpMeta5 = _opt_path;
        if (optionNone(tmpMeta5)) MMC_THROW_INTERNAL();
        tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
        _qualified_path = tmpMeta6;

        if(omc_AbsynUtil_pathIsQual(threadData, _path))
        {
          _path = omc_AbsynUtil_joinPaths(threadData, _qualified_path, omc_AbsynUtil_pathRest(threadData, _path));
        }
        else
        {
          _path = _qualified_path;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _path;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedTypeSpec(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _env)
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_ty), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFApi_updateMovedPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))), _env);
          _ty = tmpMeta5;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3)))))
          {
            {
              modelica_metatype __omcQ_24tmpVar5;
              modelica_metatype* tmp8;
              modelica_metatype tmpMeta9;
              modelica_metatype __omcQ_24tmpVar4;
              modelica_integer tmp10;
              modelica_metatype _s_loopVar = 0;
              modelica_metatype _s;
              _s_loopVar = omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))));
              tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar5 = tmpMeta9; /* defaultValue */
              tmp8 = &__omcQ_24tmpVar5;
              while(1) {
                tmp10 = 1;
                if (!listEmpty(_s_loopVar)) {
                  _s = MMC_CAR(_s_loopVar);
                  _s_loopVar = MMC_CDR(_s_loopVar);
                  tmp10--;
                }
                if (tmp10 == 0) {
                  __omcQ_24tmpVar4 = omc_NFApi_updateMovedSubscript(threadData, _s, _env);
                  *tmp8 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                  tmp8 = &MMC_CDR(*tmp8);
                } else if (tmp10 == 1) {
                  break;
                } else {
                  goto goto_1;
                }
              }
              *tmp8 = mmc_mk_nil();
              tmpMeta7 = __omcQ_24tmpVar5;
            }
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_ty), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = mmc_mk_some(tmpMeta7);
            _ty = tmpMeta6;
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_ty), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = omc_NFApi_updateMovedPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))), _env);
          _ty = tmpMeta11;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 4)))))
          {
            {
              modelica_metatype __omcQ_24tmpVar7;
              modelica_metatype* tmp14;
              modelica_metatype tmpMeta15;
              modelica_metatype __omcQ_24tmpVar6;
              modelica_integer tmp16;
              modelica_metatype _s_loopVar = 0;
              modelica_metatype _s;
              _s_loopVar = omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 4))));
              tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar7 = tmpMeta15; /* defaultValue */
              tmp14 = &__omcQ_24tmpVar7;
              while(1) {
                tmp16 = 1;
                if (!listEmpty(_s_loopVar)) {
                  _s = MMC_CAR(_s_loopVar);
                  _s_loopVar = MMC_CDR(_s_loopVar);
                  tmp16--;
                }
                if (tmp16 == 0) {
                  __omcQ_24tmpVar6 = omc_NFApi_updateMovedSubscript(threadData, _s, _env);
                  *tmp14 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                  tmp14 = &MMC_CDR(*tmp14);
                } else if (tmp16 == 1) {
                  break;
                } else {
                  goto goto_1;
                }
              }
              *tmp14 = mmc_mk_nil();
              tmpMeta13 = __omcQ_24tmpVar7;
            }
            tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_ty), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[4] = mmc_mk_some(tmpMeta13);
            _ty = tmpMeta12;
          }
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
modelica_metatype omc_NFApi_updateMovedAlgorithmItems(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fitems, modelica_metatype _env)
{
  modelica_metatype _items = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _items = __omcQ_24in_5Fitems;
  _items = omc_AbsynUtil_traverseAlgorithmItemListBidir(threadData, _items, boxvar_NFApi_updateMovedExp__traverser, boxvar_AbsynUtil_dummyTraverseExp, _env, NULL);
  _return: OMC_LABEL_UNUSED
  return _items;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedEquationItems(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fitems, modelica_metatype _env)
{
  modelica_metatype _items = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _items = __omcQ_24in_5Fitems;
  _items = omc_AbsynUtil_traverseEquationItemListBidir(threadData, _items, boxvar_NFApi_updateMovedExp__traverser, boxvar_AbsynUtil_dummyTraverseExp, _env, NULL);
  _return: OMC_LABEL_UNUSED
  return _items;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedComponent(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomponent, modelica_metatype _env)
{
  modelica_metatype _component = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))))))
  {
    {
      modelica_metatype __omcQ_24tmpVar9;
      modelica_metatype* tmp3;
      modelica_metatype tmpMeta4;
      modelica_metatype __omcQ_24tmpVar8;
      modelica_integer tmp5;
      modelica_metatype _d_loopVar = 0;
      modelica_metatype _d;
      _d_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3)));
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar9 = tmpMeta4; /* defaultValue */
      tmp3 = &__omcQ_24tmpVar9;
      while(1) {
        tmp5 = 1;
        if (!listEmpty(_d_loopVar)) {
          _d = MMC_CAR(_d_loopVar);
          _d_loopVar = MMC_CDR(_d_loopVar);
          tmp5--;
        }
        if (tmp5 == 0) {
          __omcQ_24tmpVar8 = omc_NFApi_updateMovedSubscript(threadData, _d, _env);
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
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_component), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
    _component = tmpMeta1;
  }

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 4)))))
  {
    tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_component), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = mmc_mk_some(omc_NFApi_updateMovedModification(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 4)))), _env));
    _component = tmpMeta6;
  }
  _return: OMC_LABEL_UNUSED
  return _component;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedComponentItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fitem, modelica_metatype _env)
{
  modelica_metatype _item = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _item = __omcQ_24in_5Fitem;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_item), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFApi_updateMovedComponent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_item), 2))), _env);
  _item = tmpMeta1;

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_item), 3)))))
  {
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_item), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = mmc_mk_some(omc_NFApi_updateMovedExp(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_item), 3)))), _env));
    _item = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  return _item;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedModification(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _env)
{
  modelica_metatype _mod = NULL;
  modelica_metatype _eq_mod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  // _eq_mod has no default value.
  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp5;
    modelica_metatype _a_loopVar = 0;
    modelica_metatype _a;
    _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar11;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_a_loopVar)) {
        _a = MMC_CAR(_a_loopVar);
        _a_loopVar = MMC_CDR(_a_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar10 = omc_NFApi_updateMovedElementArg(threadData, _a, _env);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar11;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_mod), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = tmpMeta2;
  _mod = tmpMeta1;

  _eq_mod = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 3)));

  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _eq_mod;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_eq_mod), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = omc_NFApi_updateMovedExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq_mod), 2))), _env);
          _eq_mod = tmpMeta10;

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_mod), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = _eq_mod;
          _mod = tmpMeta11;
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
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
  ;
  _return: OMC_LABEL_UNUSED
  return _mod;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedElementArg(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farg, modelica_metatype _env)
{
  modelica_metatype _arg = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _arg;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 5)))))
          {
            tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[5] = mmc_mk_some(omc_NFApi_updateMovedModification(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 5)))), _env));
            _arg = tmpMeta4;
          }
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[5] = omc_NFApi_updateMovedElementSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 5))), _env);
          _arg = tmpMeta5;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 6)))))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[6] = mmc_mk_some(omc_NFApi_updateMovedConstrainClass(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 6)))), _env));
            _arg = tmpMeta6;
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
  return _arg;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedElementAttributes(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattr, modelica_metatype _env)
{
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _attr = __omcQ_24in_5Fattr;
  if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8))))))
  {
    {
      modelica_metatype __omcQ_24tmpVar13;
      modelica_metatype* tmp3;
      modelica_metatype tmpMeta4;
      modelica_metatype __omcQ_24tmpVar12;
      modelica_integer tmp5;
      modelica_metatype _s_loopVar = 0;
      modelica_metatype _s;
      _s_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 8)));
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar13 = tmpMeta4; /* defaultValue */
      tmp3 = &__omcQ_24tmpVar13;
      while(1) {
        tmp5 = 1;
        if (!listEmpty(_s_loopVar)) {
          _s = MMC_CAR(_s_loopVar);
          _s_loopVar = MMC_CDR(_s_loopVar);
          tmp5--;
        }
        if (tmp5 == 0) {
          __omcQ_24tmpVar12 = omc_NFApi_updateMovedSubscript(threadData, _s, _env);
          *tmp3 = mmc_mk_cons(__omcQ_24tmpVar12,0);
          tmp3 = &MMC_CDR(*tmp3);
        } else if (tmp5 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp3 = mmc_mk_nil();
      tmpMeta2 = __omcQ_24tmpVar13;
    }
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_attr), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[8] = tmpMeta2;
    _attr = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _attr;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedElementSpec(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fspec, modelica_metatype _env)
{
  modelica_metatype _spec = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _spec = __omcQ_24in_5Fspec;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _spec;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_spec), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[3] = omc_NFApi_updateMovedClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 3))), _env);
          _spec = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFApi_updateMovedPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 2))), _env);
          _spec = tmpMeta5;

          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp10;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 3)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar15;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar14 = omc_NFApi_updateMovedElementArg(threadData, _a, _env);
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar15;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
          _spec = tmpMeta6;

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[4] = omc_NFApi_updateMovedAnnotationOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 4))), _env);
          _spec = tmpMeta11;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = omc_NFApi_updateMovedElementAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 2))), _env);
          _spec = tmpMeta12;

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = omc_NFApi_updateMovedTypeSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 3))), _env);
          _spec = tmpMeta13;

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp16;
            modelica_metatype tmpMeta17;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp18;
            modelica_metatype _c_loopVar = 0;
            modelica_metatype _c;
            _c_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 4)));
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta17; /* defaultValue */
            tmp16 = &__omcQ_24tmpVar17;
            while(1) {
              tmp18 = 1;
              if (!listEmpty(_c_loopVar)) {
                _c = MMC_CAR(_c_loopVar);
                _c_loopVar = MMC_CDR(_c_loopVar);
                tmp18--;
              }
              if (tmp18 == 0) {
                __omcQ_24tmpVar16 = omc_NFApi_updateMovedComponentItem(threadData, _c, _env);
                *tmp16 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp16 = &MMC_CDR(*tmp16);
              } else if (tmp18 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp16 = mmc_mk_nil();
            tmpMeta15 = __omcQ_24tmpVar17;
          }
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[4] = tmpMeta15;
          _spec = tmpMeta14;
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
  return _spec;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedConstrainClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcc, modelica_metatype _env)
{
  modelica_metatype _cc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cc = __omcQ_24in_5Fcc;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_cc), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFApi_updateMovedElementSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cc), 2))), _env);
  _cc = tmpMeta1;

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_cc), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = omc_NFApi_updateMovedCommentOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cc), 3))), _env);
  _cc = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _cc;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedElement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felement, modelica_metatype _env)
{
  modelica_metatype _element = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _element = __omcQ_24in_5Felement;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_element), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[5] = omc_NFApi_updateMovedElementSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 5))), _env);
          _element = tmpMeta5;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 7)))))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_element), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[7] = mmc_mk_some(omc_NFApi_updateMovedConstrainClass(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 7)))), _env));
            _element = tmpMeta6;
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
  return _element;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedElementItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fitem, modelica_metatype _env)
{
  modelica_metatype _item = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _item = __omcQ_24in_5Fitem;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _item;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_item), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFApi_updateMovedElement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_item), 2))), _env);
          _item = tmpMeta5;
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
  return _item;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedClassPart(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype _env)
{
  modelica_metatype _part = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _part = __omcQ_24in_5Fpart;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _part;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp8;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar19;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar18 = omc_NFApi_updateMovedElementItem(threadData, _i, _env);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar19;
          }
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[2] = tmpMeta5;
          _part = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp13;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar21;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar20 = omc_NFApi_updateMovedElementItem(threadData, _i, _env);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar21;
          }
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = tmpMeta10;
          _part = tmpMeta9;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = omc_NFApi_updateMovedEquationItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _env);
          _part = tmpMeta14;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = omc_NFApi_updateMovedEquationItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _env);
          _part = tmpMeta15;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[2] = omc_NFApi_updateMovedAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _env);
          _part = tmpMeta16;
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = omc_NFApi_updateMovedAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _env);
          _part = tmpMeta17;
          goto tmp2_done;
        }
        case 10: {
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_part), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[3] = omc_NFApi_updateMovedAnnotationOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 3))), _env);
          _part = tmpMeta18;
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
  return _part;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedClassDef(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcdef, modelica_metatype _env)
{
  modelica_metatype _cdef = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cdef = __omcQ_24in_5Fcdef;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cdef;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp8;
            modelica_metatype _p_loopVar = 0;
            modelica_metatype _p;
            _p_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar23;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_p_loopVar)) {
                _p = MMC_CAR(_p_loopVar);
                _p_loopVar = MMC_CDR(_p_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar22 = omc_NFApi_updateMovedClassPart(threadData, _p, _env);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar23;
          }
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[4] = tmpMeta5;
          _cdef = tmpMeta4;

          {
            modelica_metatype __omcQ_24tmpVar25;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar24;
            modelica_integer tmp13;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 5)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar25 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar25;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar24 = omc_NFApi_updateMovedAnnotation(threadData, _a, _env);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar25;
          }
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[5] = tmpMeta10;
          _cdef = tmpMeta9;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = omc_NFApi_updateMovedTypeSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 2))), _env);
          _cdef = tmpMeta14;

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = omc_NFApi_updateMovedElementAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3))), _env);
          _cdef = tmpMeta15;

          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp20;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4)));
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta19; /* defaultValue */
            tmp18 = &__omcQ_24tmpVar27;
            while(1) {
              tmp20 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp20--;
              }
              if (tmp20 == 0) {
                __omcQ_24tmpVar26 = omc_NFApi_updateMovedElementArg(threadData, _a, _env);
                *tmp18 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp18 = &MMC_CDR(*tmp18);
              } else if (tmp20 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp18 = mmc_mk_nil();
            tmpMeta17 = __omcQ_24tmpVar27;
          }
          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[4] = tmpMeta17;
          _cdef = tmpMeta16;

          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[5] = omc_NFApi_updateMovedCommentOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 5))), _env);
          _cdef = tmpMeta21;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar29;
            modelica_metatype* tmp24;
            modelica_metatype tmpMeta25;
            modelica_metatype __omcQ_24tmpVar28;
            modelica_integer tmp26;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3)));
            tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar29 = tmpMeta25; /* defaultValue */
            tmp24 = &__omcQ_24tmpVar29;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                __omcQ_24tmpVar28 = omc_NFApi_updateMovedElementArg(threadData, _a, _env);
                *tmp24 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                tmp24 = &MMC_CDR(*tmp24);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp24 = mmc_mk_nil();
            tmpMeta23 = __omcQ_24tmpVar29;
          }
          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[3] = tmpMeta23;
          _cdef = tmpMeta22;

          {
            modelica_metatype __omcQ_24tmpVar31;
            modelica_metatype* tmp29;
            modelica_metatype tmpMeta30;
            modelica_metatype __omcQ_24tmpVar30;
            modelica_integer tmp31;
            modelica_metatype _p_loopVar = 0;
            modelica_metatype _p;
            _p_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 5)));
            tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar31 = tmpMeta30; /* defaultValue */
            tmp29 = &__omcQ_24tmpVar31;
            while(1) {
              tmp31 = 1;
              if (!listEmpty(_p_loopVar)) {
                _p = MMC_CAR(_p_loopVar);
                _p_loopVar = MMC_CDR(_p_loopVar);
                tmp31--;
              }
              if (tmp31 == 0) {
                __omcQ_24tmpVar30 = omc_NFApi_updateMovedClassPart(threadData, _p, _env);
                *tmp29 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                tmp29 = &MMC_CDR(*tmp29);
              } else if (tmp31 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp29 = mmc_mk_nil();
            tmpMeta28 = __omcQ_24tmpVar31;
          }
          tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[5] = tmpMeta28;
          _cdef = tmpMeta27;

          {
            modelica_metatype __omcQ_24tmpVar33;
            modelica_metatype* tmp34;
            modelica_metatype tmpMeta35;
            modelica_metatype __omcQ_24tmpVar32;
            modelica_integer tmp36;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 6)));
            tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar33 = tmpMeta35; /* defaultValue */
            tmp34 = &__omcQ_24tmpVar33;
            while(1) {
              tmp36 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp36--;
              }
              if (tmp36 == 0) {
                __omcQ_24tmpVar32 = omc_NFApi_updateMovedAnnotation(threadData, _a, _env);
                *tmp34 = mmc_mk_cons(__omcQ_24tmpVar32,0);
                tmp34 = &MMC_CDR(*tmp34);
              } else if (tmp36 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp34 = mmc_mk_nil();
            tmpMeta33 = __omcQ_24tmpVar33;
          }
          tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[6] = tmpMeta33;
          _cdef = tmpMeta32;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          
          /* Pattern matching succeeded */
          tmpMeta37 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta37), MMC_UNTAGPTR(_cdef), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta37))[2] = omc_NFApi_updateMovedPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 2))), _env);
          _cdef = tmpMeta37;

          tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_cdef), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[4] = omc_NFApi_updateMovedCommentOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), _env);
          _cdef = tmpMeta38;
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
  return _cdef;
}

DLLDirection
modelica_boolean omc_NFApi_classHasScope(threadData_t *threadData, modelica_metatype _cls)
{
  modelica_boolean _hasScope;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasScope has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cls), 7)));
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          
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
  _hasScope = tmp1;
  _return: OMC_LABEL_UNUSED
  return _hasScope;
}
modelica_metatype boxptr_NFApi_classHasScope(threadData_t *threadData, modelica_metatype _cls)
{
  modelica_boolean _hasScope;
  modelica_metatype out_hasScope;
  _hasScope = omc_NFApi_classHasScope(threadData, _cls);
  out_hasScope = mmc_mk_icon(_hasScope);
  return out_hasScope;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcls, modelica_metatype _env)
{
  modelica_metatype _cls = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _cls_env = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cls = __omcQ_24in_5Fcls;
  // _cls_node has no default value.
  // _cls_env has no default value.
  if(omc_NFApi_classHasScope(threadData, _cls))
  {
    _cls_node = omc_NFLookup_lookupLocalSimpleName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cls), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 2))), NULL);

    omc_NFInst_expand(threadData, _cls_node, ((modelica_integer) 5));

    tmpMeta1 = mmc_mk_box3(3, &NFApi_MoveEnv_MOVE__ENV__desc, _cls_node, omc_AbsynUtil_suffixPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cls), 2)))));
    _cls_env = tmpMeta1;
  }
  else
  {
    _cls_env = _env;
  }

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_cls), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[7] = omc_NFApi_updateMovedClassDef(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cls), 7))), _cls_env);
  _cls = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _cls;
}

DLLDirection
modelica_metatype omc_NFApi_updateMovedClassPaths(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcls, modelica_metatype _clsPath, modelica_metatype _destination)
{
  modelica_metatype _cls = NULL;
  modelica_integer _context;
  modelica_metatype _top = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _env = NULL;
  modelica_metatype _dest_path = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cls = __omcQ_24in_5Fcls;
  // _context has no default value.
  // _top has no default value.
  // _cls_node has no default value.
  // _env has no default value.
  // _dest_path has no default value.
  omc_NFApi_mkTop(threadData, omc_SymbolTable_getAbsyn(threadData), omc_AbsynUtil_pathString(threadData, _clsPath, _OMC_LIT0, 1 /* true */, 0 /* false */) ,&_top);

  _cls_node = omc_NFInst_lookupRootClass(threadData, _clsPath, _top, ((modelica_integer) 5));

  omc_NFInst_expand(threadData, _cls_node, ((modelica_integer) 5));

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _destination;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_AbsynUtil_suffixPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_destination), 2))), omc_NFInstNode_InstNode_name(threadData, _cls_node));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, omc_NFInstNode_InstNode_name(threadData, _cls_node));
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
  _dest_path = tmpMeta1;

  tmpMeta7 = mmc_mk_box3(3, &NFApi_MoveEnv_MOVE__ENV__desc, _cls_node, _dest_path);
  _env = tmpMeta7;

  tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_cls), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[7] = omc_NFApi_updateMovedClassDef(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cls), 7))), _env);
  _cls = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _cls;
}

DLLDirection
modelica_metatype omc_NFApi_modifierToJSON(threadData_t *threadData, modelica_string _modifier, modelica_boolean _prettyPrint)
{
  modelica_metatype _jsonString = NULL;
  modelica_metatype _amod = NULL;
  modelica_metatype _smod = NULL;
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jsonString has no default value.
  // _amod has no default value.
  // _smod has no default value.
  // _json has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = stringAppend(_OMC_LIT1,_modifier);
  tmpMeta2 = omc_Parser_stringMod(threadData, tmpMeta1, _OMC_LIT2);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,6) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
  _amod = tmpMeta4;

  _smod = omc_AbsynToSCode_translateMod(threadData, mmc_mk_some(_amod), _OMC_LIT3, _OMC_LIT4, mmc_mk_none(), _OMC_LIT7, 0 /* false */);

  _json = omc_NFApi_dumpJSONSCodeMod__impl(threadData, _smod, _OMC_LIT8, 0 /* false */);

  tmpMeta5 = mmc_mk_box2(5, &Values_Value_STRING__desc, omc_JSON_toString(threadData, _json, _prettyPrint));
  _jsonString = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _jsonString;
}
modelica_metatype boxptr_NFApi_modifierToJSON(threadData_t *threadData, modelica_metatype _modifier, modelica_metatype _prettyPrint)
{
  modelica_integer tmp1;
  modelica_metatype _jsonString = NULL;
  tmp1 = mmc_unbox_integer(_prettyPrint);
  _jsonString = omc_NFApi_modifierToJSON(threadData, _modifier, tmp1);
  /* skip box _jsonString; Values.Value */
  return _jsonString;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONChoicesAnnotation(threadData_t *threadData, modelica_metatype _mods, modelica_metatype _scope, modelica_metatype _info, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype _smod = NULL;
  modelica_metatype _choices = NULL;
  modelica_metatype _others = NULL;
  modelica_metatype _choices_mod = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _smod has no default value.
  // _choices has no default value.
  // _others has no default value.
  // _choices_mod has no default value.
  // _j has no default value.
  {
    modelica_metatype __omcQ_24tmpVar35;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar34;
    modelica_integer tmp4;
    modelica_metatype _m_loopVar = 0;
    modelica_metatype _m;
    _m_loopVar = _mods;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar35 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar35;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_m_loopVar)) {
        _m = MMC_CAR(_m_loopVar);
        _m_loopVar = MMC_CDR(_m_loopVar);
        if ((stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 2))), _OMC_LIT9))) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar34 = _m;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar34,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar35;
  }
  _choices = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar37;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar36;
    modelica_integer tmp8;
    modelica_metatype _m_loopVar = 0;
    modelica_metatype _m;
    _m_loopVar = _mods;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar37 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar37;
    while(1) {
      tmp8 = 1;
      while (!listEmpty(_m_loopVar)) {
        _m = MMC_CAR(_m_loopVar);
        _m_loopVar = MMC_CDR(_m_loopVar);
        if ((!stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 2))), _OMC_LIT9))) {
          tmp8--;
          break;
        }
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar36 = _m;
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar36,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar37;
  }
  _others = tmpMeta5;

  if((!listEmpty(_choices)))
  {
    _j = omc_JSON_emptyArray(threadData, listLength(_choices));

    {
      modelica_metatype _m;
      for (tmpMeta9 = _choices; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
      {
        _m = MMC_CAR(tmpMeta9);
        { /* match expression */
          modelica_metatype tmp13_1;
          tmp13_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 3)));
          {
            volatile mmc_switch_type tmp13;
            int tmp14;
            tmp13 = 0;
            for (; tmp13 < 2; tmp13++) {
              switch (MMC_SWITCH_CAST(tmp13)) {
              case 0: {
                modelica_metatype tmpMeta15;
                modelica_metatype tmpMeta16;
                modelica_metatype tmpMeta17;
                modelica_metatype tmpMeta18;
                if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,0,6) == 0) goto tmp12_end;
                tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 4));
                if (listEmpty(tmpMeta15)) goto tmp12_end;
                tmpMeta16 = MMC_CAR(tmpMeta15);
                tmpMeta17 = MMC_CDR(tmpMeta15);
                if (!listEmpty(tmpMeta17)) goto tmp12_end;
                tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 5));
                if (!optionNone(tmpMeta18)) goto tmp12_end;
                
                _smod = tmpMeta16;
                /* Pattern matching succeeded */
                tmpMeta10 = _smod;
                goto tmp12_done;
              }
              case 1: {
                
                /* Pattern matching succeeded */
                tmpMeta10 = _m;
                goto tmp12_done;
              }
              }
              goto tmp12_end;
              tmp12_end: ;
            }
            goto goto_11;
            goto_11:;
            MMC_THROW_INTERNAL();
            goto tmp12_done;
            tmp12_done:;
          }
        }
        _m = tmpMeta10;

        _j = omc_JSON_addElement(threadData, omc_NFApi_dumpJSONSCodeMod__impl(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 3))), _scope, 1 /* true */), _j);
      }
    }

    _json = omc_JSON_addPair(threadData, _OMC_LIT9, _j, _json);
  }

  {
    modelica_metatype _m;
    for (tmpMeta20 = _others; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
    {
      _m = MMC_CAR(tmpMeta20);
      _json = omc_NFApi_dumpJSONAnnotationSubMod(threadData, _m, _scope, _failOnError, _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONChoicesAnnotation(threadData_t *threadData, modelica_metatype _mods, modelica_metatype _scope, modelica_metatype _info, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_failOnError);
  _json = omc_NFApi_dumpJSONChoicesAnnotation(threadData, _mods, _scope, _info, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONSCodeClassDef(threadData_t *threadData, modelica_metatype _classDef, modelica_metatype _scope, modelica_boolean _qualifyPath, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _odims = NULL;
  modelica_metatype _derivedNode = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _path has no default value.
  // _odims has no default value.
  // _derivedNode has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _classDef;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,2) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          
          _path = tmpMeta6;
          _odims = tmpMeta7;
          /* Pattern matching succeeded */
          if(_qualifyPath)
          {
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
                    /* Pattern matching succeeded */
                    _derivedNode = omc_NFLookup_lookupName(threadData, _path, _scope, ((modelica_integer) 1), 0 /* false */, NULL);

                    _json = omc_JSON_addPair(threadData, _OMC_LIT10, omc_NFApi_dumpJSONNodeEnclosingPath(threadData, _derivedNode), _json);
                    goto tmp9_done;
                  }
                  case 1: {
                    /* Pattern matching succeeded */
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
                goto goto_1;
                tmp9_done2:;
              }
            }
            ;
          }
          else
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT10, omc_NFApi_dumpJSONPath(threadData, _path), _json);
          }

          if(isSome(_odims))
          {
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT11, omc_NFApi_dumpJSONDims(threadData, omc_Util_getOption(threadData, _odims), tmpMeta12), _json);
          }

          _json = omc_NFApi_dumpJSONSCodeMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_classDef), 3))), _scope, _json);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _json = omc_NFApi_dumpJSONSCodeMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_classDef), 2))), _scope, _json);
          goto tmp2_done;
        }
        case 2: {
          
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
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONSCodeClassDef(threadData_t *threadData, modelica_metatype _classDef, modelica_metatype _scope, modelica_metatype _qualifyPath, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_qualifyPath);
  _json = omc_NFApi_dumpJSONSCodeClassDef(threadData, _classDef, _scope, tmp1, __omcQ_24in_5Fjson);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONSCodeTypeExtends(threadData_t *threadData, modelica_metatype _node, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _json = NULL;
  modelica_metatype _expanded_node = NULL;
  modelica_metatype _exts = NULL;
  modelica_metatype _json_elements = NULL;
  modelica_metatype _json_ext = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _expanded_node has no default value.
  // _exts has no default value.
  // _json_elements has no default value.
  // _json_ext has no default value.
  if(omc_NFInstNode_InstNode_isEmpty(threadData, _node))
  {
    goto _return;
  }

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
          modelica_integer tmp8;
          /* Pattern matching succeeded */
          _expanded_node = omc_NFInst_expand(threadData, _node, ((modelica_integer) 1));

          _exts = omc_NFClassTree_ClassTree_getExtends(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _expanded_node)));

          if((!(arrayLength(_exts) == ((modelica_integer) 0))))
          {
            _json_elements = omc_JSON_makeNull(threadData);

            {
              modelica_metatype _ext;
              for (tmpMeta5 = _exts, tmp8 = arrayLength(tmpMeta5), tmp7 = 1; tmp7 <= tmp8; tmp7++)
              {
                _ext = arrayGet(tmpMeta5,tmp7);
                _json_ext = omc_JSON_makeNull(threadData);

                _json_ext = omc_JSON_addPair(threadData, _OMC_LIT12, _OMC_LIT14, _json_ext);

                _json_ext = omc_JSON_addPair(threadData, _OMC_LIT10, omc_NFApi_dumpJSONSCodeClass(threadData, omc_NFInstNode_InstNode_definition(threadData, _ext), _ext, _scope, 0 /* false */, omc_JSON_makeNull(threadData)), _json_ext);

                _json_elements = omc_JSON_addElement(threadData, _json_ext, _json_elements);
              }
            }

            _json = omc_JSON_addPair(threadData, _OMC_LIT15, _json_elements, _json);
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
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONSCodeClass(threadData_t *threadData, modelica_metatype _element, modelica_metatype _node, modelica_metatype _scope, modelica_boolean _isRedeclare, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _odims = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _odims has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT12, _OMC_LIT17, _json);

          if((omc_NFInstNode_InstNode_isEmpty(threadData, _node) || _isRedeclare))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_JSON_makeString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2)))), _json);
          }
          else
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_NFApi_dumpJSONNodeEnclosingPath(threadData, _node), _json);
          }

          _json = omc_JSON_addPair(threadData, _OMC_LIT19, omc_JSON_makeString(threadData, omc_SCodeDump_restrictionStringPP(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 6))))), _json);

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT20, omc_NFApi_dumpJSONClassPrefixes(threadData, _element, _scope), _json);

          _json = omc_NFApi_dumpJSONSCodeClassDef(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 7))), _scope, _isRedeclare, _json);

          _json = omc_NFApi_dumpJSONComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 8))), _scope, _json, 1 /* true */, (!_isRedeclare), 0 /* false */);

          if(_isRedeclare)
          {
            _json = omc_NFApi_dumpJSONCommentAnnotation(threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 8)))), _scope, _json, _OMC_LIT26, 0 /* false */);
          }

          if((!_isRedeclare))
          {
            _json = omc_NFApi_dumpJSONSCodeTypeExtends(threadData, _node, _scope, _json);
          }
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
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONSCodeClass(threadData_t *threadData, modelica_metatype _element, modelica_metatype _node, modelica_metatype _scope, modelica_metatype _isRedeclare, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_isRedeclare);
  _json = omc_NFApi_dumpJSONSCodeClass(threadData, _element, _node, _scope, tmp1, __omcQ_24in_5Fjson);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONSCodeType(threadData_t *threadData, modelica_metatype _path, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _ty_node = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _ty_node has no default value.
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
          _ty_node = omc_NFLookup_lookupName(threadData, _path, _scope, omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 4)), 0 /* false */, NULL);

          _json = omc_JSON_addPair(threadData, _OMC_LIT27, omc_NFApi_dumpJSONSCodeClass(threadData, omc_NFInstNode_InstNode_definition(threadData, _ty_node), _ty_node, _scope, 0 /* false */, omc_JSON_makeNull(threadData)), _json);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT27, omc_NFApi_dumpJSONPath(threadData, _path), _json);
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
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONSCodeElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT12, _OMC_LIT29, _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_JSON_makeString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2)))), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT27, omc_NFApi_dumpJSONPath(threadData, omc_AbsynUtil_typeSpecPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 5))))), _json);

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT11, omc_NFApi_dumpJSONDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 4)))), 2))), tmpMeta5), _json);

          _json = omc_NFApi_dumpJSONSCodeMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 6))), _scope, _json);

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT20, omc_NFApi_dumpJSONAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 3))), _scope), _json);

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 8)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT30, omc_NFApi_dumpJSONAbsynExpression(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 8))))), _json);
          }
          tmpMeta1 = omc_NFApi_dumpJSONComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 7))), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFApi_dumpJSONSCodeClass(threadData, _element, _OMC_LIT8, _scope, 0 /* false */, _json);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _json;
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONRedeclareType(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _path = NULL;
  modelica_integer _context;
  modelica_metatype _cls = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _path has no default value.
  // _context has no default value.
  // _cls has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _element;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _path = omc_AbsynUtil_typeSpecPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 5))));

          _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 4));

          _cls = omc_NFLookup_lookupName(threadData, _path, _scope, _context, 0 /* false */, NULL);

          _json = omc_JSON_addPair(threadData, _OMC_LIT31, omc_NFApi_dumpJSONNodePath(threadData, _cls, 0 /* false */), _json);
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
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONSCodeMod__impl(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _scope, modelica_boolean _isChoices)
{
  modelica_metatype _json = NULL;
  modelica_metatype _binding_json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _binding_json has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _m;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _m = MMC_CAR(tmpMeta4);
              _json = omc_JSON_addPair(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 2))), omc_NFApi_dumpJSONSCodeMod__impl(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 3))), _scope, 0 /* false */), _json);
            }
          }

          if(omc_SCodeUtil_finalBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT32, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }

          if(omc_SCodeUtil_eachBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 3)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT33, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }

          if((_isChoices && isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 6))))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT34, omc_JSON_makeString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 6))))), _json);
          }

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5)))))
          {
            _binding_json = omc_JSON_makeString(threadData, omc_Dump_printExpStr(threadData, omc_AbsynUtil_stripCommentExpressions(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5)))), 1 /* true */)));

            if(omc_JSON_isNull(threadData, _json))
            {
              _json = _binding_json;
            }
            else
            {
              _json = omc_JSON_addPair(threadData, _OMC_LIT35, _binding_json, _json);
            }
          }
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          if(omc_SCodeUtil_finalBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT32, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }

          if(omc_SCodeUtil_eachBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 3)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT33, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }

          _json = omc_JSON_addPair(threadData, _OMC_LIT35, omc_NFApi_dumpJSONSCodeElement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))), _scope, omc_JSON_makeNull(threadData)), _json);
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
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONSCodeMod__impl(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _scope, modelica_metatype _isChoices)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_isChoices);
  _json = omc_NFApi_dumpJSONSCodeMod__impl(threadData, _mod, _scope, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONSCodeMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _j = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _j has no default value.
  _j = omc_NFApi_dumpJSONSCodeMod__impl(threadData, _mod, _scope, 0 /* false */);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT36, _j, _json);
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONReplaceableElements(threadData_t *threadData, modelica_metatype _clsNode)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cls_tree = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _cls_tree has no default value.
  // _j has no default value.
  _cls_tree = omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _clsNode));

  {
    modelica_metatype _c;
    for (tmpMeta1 = omc_NFClassTree_ClassTree_getComponents(threadData, _cls_tree), tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
    {
      _c = arrayGet(tmpMeta1,tmp3);
      if(omc_NFInstNode_InstNode_isReplaceable(threadData, _c))
      {
        _j = omc_JSON_makeNull(threadData);

        _j = omc_JSON_addPair(threadData, _OMC_LIT18, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, _c)), _j);

        _j = omc_JSON_addPair(threadData, _OMC_LIT27, omc_NFApi_dumpJSONTypeName(threadData, omc_NFInstNode_InstNode_getType(threadData, _c)), _j);

        _json = omc_JSON_addElement(threadData, _j, _json);
      }
    }
  }

  {
    modelica_metatype _c;
    for (tmpMeta5 = omc_NFClassTree_ClassTree_getClasses(threadData, _cls_tree), tmp8 = arrayLength(tmpMeta5), tmp7 = 1; tmp7 <= tmp8; tmp7++)
    {
      _c = arrayGet(tmpMeta5,tmp7);
      if(omc_NFInstNode_InstNode_isReplaceable(threadData, _c))
      {
        _json = omc_JSON_addElement(threadData, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, _c)), _json);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONStateCall(threadData_t *threadData, modelica_metatype _callEq, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype _j = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _call has no default value.
  // _args has no default value.
  // _src has no default value.
  // _j has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _callEq;
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
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,9,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,13,1) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          _call = tmpMeta6;
          _args = tmpMeta7;
          _src = tmpMeta8;
          /* Pattern matching succeeded */
          _j = omc_JSON_emptyArray(threadData, listLength(_args));

          {
            modelica_metatype _arg;
            for (tmpMeta9 = _args; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _arg = MMC_CAR(tmpMeta9);
              _j = omc_JSON_addElement(threadData, omc_NFExpression_toJSON(threadData, _arg), _j);
            }
          }

          _json = omc_JSON_addPair(threadData, _OMC_LIT37, _j, _json);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _json = omc_NFApi_dumpJSONCommentAnnotation(threadData, omc_ElementSource_getOptComment(threadData, _src), _scope, _json, tmpMeta11, 0 /* false */);
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
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONStateCalls(threadData_t *threadData, modelica_metatype _callEqs, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  {
    modelica_metatype _eq;
    for (tmpMeta1 = _callEqs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      _json = omc_JSON_addElement(threadData, omc_NFApi_dumpJSONStateCall(threadData, _eq, _scope), _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONConnection(threadData_t *threadData, modelica_metatype _connEq, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _lhs has no default value.
  // _rhs has no default value.
  // _src has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _connEq;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,2,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _lhs = tmpMeta2;
  _rhs = tmpMeta3;
  _src = tmpMeta4;

  _json = omc_JSON_addPair(threadData, _OMC_LIT38, omc_NFExpression_toJSON(threadData, _lhs), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT39, omc_NFExpression_toJSON(threadData, _rhs), _json);

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _json = omc_NFApi_dumpJSONCommentAnnotation(threadData, omc_ElementSource_getOptComment(threadData, _src), _scope, _json, tmpMeta5, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONConnections(threadData_t *threadData, modelica_metatype _connections, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  {
    modelica_metatype _conn;
    for (tmpMeta1 = _connections; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _conn = MMC_CAR(tmpMeta1);
      _json = omc_JSON_addElement(threadData, omc_NFApi_dumpJSONConnection(threadData, _conn, _scope), _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_sortEquations(threadData_t *threadData, modelica_metatype _equations, modelica_metatype __omcQ_24in_5Fconnections, modelica_metatype __omcQ_24in_5Ftransitions, modelica_metatype __omcQ_24in_5FinitialStates, modelica_metatype *out_transitions, modelica_metatype *out_initialStates)
{
  modelica_metatype _connections = NULL;
  modelica_metatype _transitions = NULL;
  modelica_metatype _initialStates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _connections = __omcQ_24in_5Fconnections;
  _transitions = __omcQ_24in_5Ftransitions;
  _initialStates = __omcQ_24in_5FinitialStates;
  {
    modelica_metatype _eq;
    for (tmpMeta1 = listReverse(_equations); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = _eq;
        {
          int tmp4;
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
            case 5: {
              modelica_metatype tmpMeta5;
              
              /* Pattern matching succeeded */
              tmpMeta5 = mmc_mk_cons(_eq, _connections);
              _connections = tmpMeta5;
              goto tmp3_done;
            }
            case 6: {
              
              /* Pattern matching succeeded */
              _connections = omc_NFApi_sortEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _connections, _transitions, _initialStates ,&_transitions ,&_initialStates);
              goto tmp3_done;
            }
            case 7: {
              modelica_metatype tmpMeta6;
              modelica_metatype tmpMeta11;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype _b;
                for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
                {
                  _b = MMC_CAR(tmpMeta6);
                  { /* match expression */
                    modelica_metatype tmp9_1;
                    tmp9_1 = _b;
                    {
                      volatile mmc_switch_type tmp9;
                      int tmp10;
                      tmp9 = 0;
                      for (; tmp9 < 2; tmp9++) {
                        switch (MMC_SWITCH_CAST(tmp9)) {
                        case 0: {
                          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,3) == 0) goto tmp8_end;
                          
                          /* Pattern matching succeeded */
                          _connections = omc_NFApi_sortEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))), _connections, _transitions, _initialStates ,&_transitions ,&_initialStates);
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
                      goto goto_2;
                      goto tmp8_done;
                      tmp8_done:;
                    }
                  }
                  ;
                }
              }
              goto tmp3_done;
            }
            case 12: {
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              
              /* Pattern matching succeeded */
              if(omc_NFExpression_isCallNamed(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _OMC_LIT41))
              {
                tmpMeta12 = mmc_mk_cons(_eq, _transitions);
                _transitions = tmpMeta12;
              }
              else
              {
                if(omc_NFExpression_isCallNamed(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _OMC_LIT40))
                {
                  tmpMeta13 = mmc_mk_cons(_eq, _initialStates);
                  _initialStates = tmpMeta13;
                }
              }
              goto tmp3_done;
            }
            default:
            tmp3_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
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
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_transitions) { *out_transitions = _transitions; }
  if (out_initialStates) { *out_initialStates = _initialStates; }
  return _connections;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONEquations(threadData_t *threadData, modelica_metatype _sections, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _connections = NULL;
  modelica_metatype _transitions = NULL;
  modelica_metatype _initial_states = NULL;
  modelica_metatype _j = NULL;
  modelica_integer _context;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _connections has no default value.
  // _transitions has no default value.
  // _initial_states has no default value.
  // _j has no default value.
  // _context has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _connections = omc_NFApi_sortEquations(threadData, omc_NFSections_equations(threadData, _sections), tmpMeta1, tmpMeta2, tmpMeta3 ,&_transitions ,&_initial_states);

  _context = omc_NFInstContext_set(threadData, ((modelica_integer) 8), ((modelica_integer) 1));

  {
    modelica_metatype __omcQ_24tmpVar39;
    modelica_metatype* tmp5;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar38;
    modelica_integer tmp7;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _transitions;
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar39 = tmpMeta6; /* defaultValue */
    tmp5 = &__omcQ_24tmpVar39;
    while(1) {
      tmp7 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp7--;
      }
      if (tmp7 == 0) {
        __omcQ_24tmpVar38 = omc_NFTyping_typeEquation(threadData, _e, _context);
        *tmp5 = mmc_mk_cons(__omcQ_24tmpVar38,0);
        tmp5 = &MMC_CDR(*tmp5);
      } else if (tmp7 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp5 = mmc_mk_nil();
    tmpMeta4 = __omcQ_24tmpVar39;
  }
  _transitions = tmpMeta4;

  {
    modelica_metatype __omcQ_24tmpVar41;
    modelica_metatype* tmp9;
    modelica_metatype tmpMeta10;
    modelica_metatype __omcQ_24tmpVar40;
    modelica_integer tmp11;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _initial_states;
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar41 = tmpMeta10; /* defaultValue */
    tmp9 = &__omcQ_24tmpVar41;
    while(1) {
      tmp11 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp11--;
      }
      if (tmp11 == 0) {
        __omcQ_24tmpVar40 = omc_NFTyping_typeEquation(threadData, _e, _context);
        *tmp9 = mmc_mk_cons(__omcQ_24tmpVar40,0);
        tmp9 = &MMC_CDR(*tmp9);
      } else if (tmp11 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp9 = mmc_mk_nil();
    tmpMeta8 = __omcQ_24tmpVar41;
  }
  _initial_states = tmpMeta8;

  _j = omc_NFApi_dumpJSONConnections(threadData, _connections, _scope);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT42, _j, _json);

  _j = omc_NFApi_dumpJSONStateCalls(threadData, _initial_states, _scope);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT43, _j, _json);

  _j = omc_NFApi_dumpJSONStateCalls(threadData, _transitions, _scope);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT44, _j, _json);
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONImports(threadData_t *threadData, modelica_metatype _node, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _imps = NULL;
  modelica_metatype _resolved_imps = NULL;
  modelica_metatype _json_imp = NULL;
  modelica_metatype _json_imp_array = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  _n = _node;
  // _imps has no default value.
  // _resolved_imps has no default value.
  // _json_imp has no default value.
  // _json_imp_array has no default value.
  _json_imp_array = omc_JSON_makeNull(threadData);

  while(1)
  {
    if(!(!omc_NFInstNode_InstNode_isEmpty(threadData, _n))) break;
    _imps = omc_NFClassTree_ClassTree_getImports(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _n)));

    if((!(arrayLength(_imps) == ((modelica_integer) 0))))
    {
      _resolved_imps = omc_NFImport_resolveList(threadData, _imps);

      _resolved_imps = listReverseInPlace(_resolved_imps);

      {
        modelica_metatype _imp;
        for (tmpMeta1 = _resolved_imps; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
        {
          _imp = MMC_CAR(tmpMeta1);
          { /* match expression */
            modelica_metatype tmp4_1;
            tmp4_1 = _imp;
            {
              volatile mmc_switch_type tmp4;
              int tmp5;
              tmp4 = 0;
              for (; tmp4 < 2; tmp4++) {
                switch (MMC_SWITCH_CAST(tmp4)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
                  
                  /* Pattern matching succeeded */
                  _json_imp = omc_JSON_makeNull(threadData);

                  _json_imp = omc_JSON_addPair(threadData, _OMC_LIT45, omc_NFApi_dumpJSONPath(threadData, omc_NFInstNode_InstNode_fullPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 2))), 0 /* false */)), _json_imp);

                  if((!(stringLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 3)))) == ((modelica_integer) 0))))
                  {
                    _json_imp = omc_JSON_addPair(threadData, _OMC_LIT46, omc_JSON_makeString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 3)))), _json_imp);
                  }

                  _json_imp_array = omc_JSON_addElement(threadData, _json_imp, _json_imp_array);
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
              goto_2:;
              MMC_THROW_INTERNAL();
              goto tmp3_done;
              tmp3_done:;
            }
          }
          ;
        }
      }
    }

    _n = omc_NFInstNode_InstNode_parent(threadData, _n);
  }

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT47, _json_imp_array, _json);
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAbsynFunctionArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _json_args = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _json_args has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _args;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 2))))))
          {
            _json_args = omc_JSON_makeNull(threadData);

            {
              modelica_metatype _arg;
              for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 2))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
              {
                _arg = MMC_CAR(tmpMeta5);
                _json_args = omc_JSON_addElement(threadData, omc_NFApi_dumpJSONAbsynExpression(threadData, _arg), _json_args);
              }
            }

            _json = omc_JSON_addPair(threadData, _OMC_LIT48, _json_args, _json);
          }

          if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 3))))))
          {
            _json_args = omc_JSON_makeNull(threadData);

            {
              modelica_metatype _arg;
              for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 3))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
              {
                _arg = MMC_CAR(tmpMeta7);
                _json_args = omc_JSON_addPair(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 2))), omc_NFApi_dumpJSONAbsynExpression(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))), _json_args);
              }
            }

            _json = omc_JSON_addPair(threadData, _OMC_LIT49, _json_args, _json);
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
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAbsynCref(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  _json = omc_JSON_makeString(threadData, omc_Dump_printComponentRefStr(threadData, _cref));
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAbsynExpression(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_metatype _json = NULL;
  modelica_integer _i;
  modelica_string _r = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _i has no default value.
  // _r has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeInteger(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNumber(threadData, stringReal((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFApi_dumpJSONAbsynCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeBoolean(threadData, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,0) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _i = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeInteger(threadData, (-_i));
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,0) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          _r = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNumber(threadData, (-stringReal(_r)));
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_makeNull(threadData);

          _json = omc_JSON_addPair(threadData, _OMC_LIT12, _OMC_LIT51, _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_NFApi_dumpJSONAbsynCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))), _json);
          tmpMeta1 = omc_NFApi_dumpJSONAbsynFunctionArgs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _json);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_emptyArray(threadData, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));

          {
            modelica_metatype _e;
            for (tmpMeta13 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))); !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
            {
              _e = MMC_CAR(tmpMeta13);
              _json = omc_JSON_addElement(threadData, omc_NFApi_dumpJSONAbsynExpression(threadData, _e), _json);
            }
          }
          tmpMeta1 = _json;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeString(threadData, omc_Dump_printExpStr(threadData, omc_AbsynUtil_stripCommentExpressions(threadData, _exp, 1 /* true */)));
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONSourceInfo(threadData_t *threadData, modelica_metatype _info)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  _json = omc_JSON_addPair(threadData, _OMC_LIT52, omc_JSON_makeString(threadData, omc_Testsuite_friendly(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))))), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT53, omc_JSON_makeInteger(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))))), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT54, omc_JSON_makeInteger(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 5))))), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT55, omc_JSON_makeInteger(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 6))))), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT56, omc_JSON_makeInteger(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 7))))), _json);

  if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3)))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT57, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAnnotationExp2(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_metatype _info, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _exp has no default value.
  omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT58);

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
          _exp = omc_NFInst_instExp(threadData, _absynExp, _scope, ((modelica_integer) 67108865), _info);

          _exp = omc_NFTyping_typeExp(threadData, _exp, ((modelica_integer) 67108865), _info, 0 /* false */, NULL, NULL, NULL);

          _exp = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);

          _json = omc_NFExpression_toJSON(threadData, _exp);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          if(_failOnError)
          {
            goto goto_1;
          }

          _json = omc_JSON_makeNull(threadData);

          _json = omc_JSON_addPair(threadData, _OMC_LIT59, omc_JSON_makeString(threadData, omc_ErrorExt_printCheckpointMessagesStr(threadData, 0 /* false */)), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT60, omc_NFApi_dumpJSONAbsynExpression(threadData, _absynExp), _json);
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

  omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT58);
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONAnnotationExp2(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_metatype _info, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_failOnError);
  _json = omc_NFApi_dumpJSONAnnotationExp2(threadData, _absynExp, _scope, _info, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAnnotationExp(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_metatype _info, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _j has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _absynExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeInteger(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_absynExp), 2)))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNumber(threadData, stringReal((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_absynExp), 2)))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_absynExp), 2))));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeBoolean(threadData, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_absynExp), 2)))));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_AbsynUtil_isLiteralExp(threadData, _absynExp))) goto tmp3_end;
          _json = omc_JSON_emptyArray(threadData, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_absynExp), 2)))));

          {
            modelica_metatype _e;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_absynExp), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _e = MMC_CAR(tmpMeta6);
              _j = omc_NFApi_dumpJSONAnnotationExp(threadData, _e, _scope, _info, _failOnError);

              _json = omc_JSON_addElement(threadData, _j, _json);
            }
          }
          tmpMeta1 = _json;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFApi_dumpJSONAnnotationExp2(threadData, _absynExp, _scope, _info, _failOnError);
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONAnnotationExp(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_metatype _info, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_failOnError);
  _json = omc_NFApi_dumpJSONAnnotationExp(threadData, _absynExp, _scope, _info, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAnnotationSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _scope, modelica_boolean _failOnError, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_string _name = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _absyn_binding = NULL;
  modelica_metatype _binding_exp = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _name has no default value.
  // _mod has no default value.
  // _absyn_binding has no default value.
  // _binding_exp has no default value.
  // _j has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _subMod;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _name = tmpMeta2;
  _mod = tmpMeta3;

  { /* match expression */
    modelica_string tmp6_1;modelica_metatype tmp6_2;
    tmp6_1 = _name;
    tmp6_2 = _mod;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 5; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          if (7 != MMC_STRLEN(tmp6_1) || strcmp(MMC_STRINGDATA(_OMC_LIT22), MMC_STRINGDATA(tmp6_1)) != 0) goto tmp5_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,0,6) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          _j = omc_NFApi_dumpJSONChoicesAnnotation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))), _scope, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 7))), _failOnError);

          _json = omc_JSON_addPairNotNull(threadData, _name, _j, _json);
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,0,6) == 0) goto tmp5_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 5));
          if (optionNone(tmpMeta8)) goto tmp5_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          _absyn_binding = tmpMeta9;
          /* Pattern matching succeeded */
          _j = omc_NFApi_dumpJSONAnnotationExp(threadData, _absyn_binding, _scope, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 7))), _failOnError);

          _json = omc_JSON_addPair(threadData, _name, _j, _json);
          goto tmp5_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,0,6) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _json = omc_JSON_addPair(threadData, _name, omc_NFApi_dumpJSONAnnotationSubMods(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))), _scope, tmpMeta10, _failOnError), _json);
          goto tmp5_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_2,4,0) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _name, omc_JSON_emptyListObject(threadData), _json);
          goto tmp5_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
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
  ;
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONAnnotationSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _scope, modelica_metatype _failOnError, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_failOnError);
  _json = omc_NFApi_dumpJSONAnnotationSubMod(threadData, _subMod, _scope, tmp1, __omcQ_24in_5Fjson);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAnnotationSubMods(threadData_t *threadData, modelica_metatype _subMods, modelica_metatype _scope, modelica_metatype _filter, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  {
    modelica_metatype _m;
    for (tmpMeta1 = _subMods; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _m = MMC_CAR(tmpMeta1);
      if((listEmpty(_filter) || omc_List_contains(threadData, _filter, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 2))), boxvar_stringEq)))
      {
        _json = omc_NFApi_dumpJSONAnnotationSubMod(threadData, _m, _scope, _failOnError, _json);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONAnnotationSubMods(threadData_t *threadData, modelica_metatype _subMods, modelica_metatype _scope, modelica_metatype _filter, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_failOnError);
  _json = omc_NFApi_dumpJSONAnnotationSubMods(threadData, _subMods, _scope, _filter, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAnnotationMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _scope, modelica_metatype _filter, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFApi_dumpJSONAnnotationSubMods(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))), _scope, _filter, _failOnError);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNull(threadData);
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONAnnotationMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _scope, modelica_metatype _filter, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_failOnError);
  _json = omc_NFApi_dumpJSONAnnotationMod(threadData, _mod, _scope, _filter, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAnnotationOpt(threadData_t *threadData, modelica_metatype _annOpt, modelica_metatype _scope, modelica_metatype _filter, modelica_boolean _failOnError, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_metatype _ann = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _ann has no default value.
  if(isSome(_annOpt))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _annOpt;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _ann = tmpMeta2;

    _json = omc_JSON_addPair(threadData, _OMC_LIT61, omc_NFApi_dumpJSONAnnotationMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ann), 2))), _scope, _filter, _failOnError), _json);
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONAnnotationOpt(threadData_t *threadData, modelica_metatype _annOpt, modelica_metatype _scope, modelica_metatype _filter, modelica_metatype _failOnError, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_failOnError);
  _json = omc_NFApi_dumpJSONAnnotationOpt(threadData, _annOpt, _scope, _filter, tmp1, __omcQ_24in_5Fjson);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONCommentAnnotation(threadData_t *threadData, modelica_metatype _cmtOpt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_metatype _filter, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cmt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  // _cmt has no default value.
  if(isSome(_cmtOpt))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _cmtOpt;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _cmt = tmpMeta2;

    _json = omc_NFApi_dumpJSONAnnotationOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cmt), 2))), _scope, _filter, _failOnError, _json);
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONCommentAnnotation(threadData_t *threadData, modelica_metatype _cmtOpt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_metatype _filter, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_failOnError);
  _json = omc_NFApi_dumpJSONCommentAnnotation(threadData, _cmtOpt, _scope, __omcQ_24in_5Fjson, _filter, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONComment(threadData_t *threadData, modelica_metatype _cmt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_boolean _dumpComment, modelica_boolean _dumpAnnotation, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  if((isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cmt), 3)))) && _dumpComment))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT34, omc_JSON_makeString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cmt), 3))))), _json);
  }

  if(_dumpAnnotation)
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _json = omc_NFApi_dumpJSONAnnotationOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cmt), 2))), _scope, tmpMeta1, _failOnError, _json);
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONComment(threadData_t *threadData, modelica_metatype _cmt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_metatype _dumpComment, modelica_metatype _dumpAnnotation, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_dumpComment);
  tmp2 = mmc_unbox_integer(_dumpAnnotation);
  tmp3 = mmc_unbox_integer(_failOnError);
  _json = omc_NFApi_dumpJSONComment(threadData, _cmt, _scope, __omcQ_24in_5Fjson, tmp1, tmp2, tmp3);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONCommentOpt(threadData_t *threadData, modelica_metatype _cmtOpt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_boolean _dumpComment, modelica_boolean _dumpAnnotation, modelica_boolean _failOnError)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  if(isSome(_cmtOpt))
  {
    _json = omc_NFApi_dumpJSONComment(threadData, omc_Util_getOption(threadData, _cmtOpt), _scope, _json, _dumpComment, _dumpAnnotation, _failOnError);
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONCommentOpt(threadData_t *threadData, modelica_metatype _cmtOpt, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson, modelica_metatype _dumpComment, modelica_metatype _dumpAnnotation, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_dumpComment);
  tmp2 = mmc_unbox_integer(_dumpAnnotation);
  tmp3 = mmc_unbox_integer(_failOnError);
  _json = omc_NFApi_dumpJSONCommentOpt(threadData, _cmtOpt, _scope, __omcQ_24in_5Fjson, tmp1, tmp2, tmp3);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONReplaceable(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _cc has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _repl;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          _cc = tmpMeta7;
          /* Pattern matching succeeded */
          _json = omc_JSON_makeNull(threadData);

          _json = omc_JSON_addPair(threadData, _OMC_LIT62, omc_NFApi_dumpJSONPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cc), 2)))), _json);

          _json = omc_NFApi_dumpJSONSCodeMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cc), 3))), _scope, _json);
          tmpMeta1 = omc_NFApi_dumpJSONCommentOpt(threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cc), 4)))), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeBoolean(threadData, 1 /* true */);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNull(threadData);
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONClassPrefixes(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype _prefs = NULL;
  modelica_metatype _cdef = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _prefs has no default value.
  // _cdef has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          
          _prefs = tmpMeta6;
          _cdef = tmpMeta7;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp11_1;
            tmp11_1 = _cdef;
            {
              volatile mmc_switch_type tmp11;
              int tmp12;
              tmp11 = 0;
              for (; tmp11 < 2; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,2,3) == 0) goto tmp10_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta8 = omc_NFApi_dumpJSONAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 3))), _scope);
                  goto tmp10_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta8 = omc_NFApi_dumpJSONSCodePrefixes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 3))), _scope);
                  goto tmp10_done;
                }
                }
                goto tmp10_end;
                tmp10_end: ;
              }
              goto goto_9;
              goto_9:;
              goto goto_2;
              goto tmp10_done;
              tmp10_done:;
            }
          }
          _json = tmpMeta8;

          if(omc_SCodeUtil_partialBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 5)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT63, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }

          if(omc_SCodeUtil_encapsulatedBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 4)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT64, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }
          tmpMeta1 = _json;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_JSON_makeNull(threadData);
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONSCodePrefixes(threadData_t *threadData, modelica_metatype _prefixes, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  if((!omc_SCodeUtil_visibilityBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_prefixes), 2))))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT65, omc_JSON_makeBoolean(threadData, 0 /* false */), _json);
  }

  if(omc_SCodeUtil_finalBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_prefixes), 4)))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT32, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
  }

  if(omc_AbsynUtil_isInner(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_prefixes), 5)))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT66, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
  }

  if(omc_AbsynUtil_isOuter(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_prefixes), 5)))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT67, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
  }

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT68, omc_NFApi_dumpJSONReplaceable(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_prefixes), 6))), _scope), _json);

  if(omc_SCodeUtil_redeclareBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_prefixes), 3)))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT69, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAttributes(threadData_t *threadData, modelica_metatype _attrs, modelica_metatype _prefs, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_string _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _s has no default value.
  _json = omc_NFApi_dumpJSONSCodePrefixes(threadData, _prefs, _scope);

  _s = omc_SCodeDump_connectorTypeStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrs), 3))));

  if((!(stringLength(_s) == ((modelica_integer) 0))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT70, omc_JSON_makeString(threadData, _s), _json);
  }

  _s = omc_SCodeDump_unparseVariability(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrs), 5))));

  if((!(stringLength(_s) == ((modelica_integer) 0))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT71, omc_JSON_makeString(threadData, _s), _json);
  }

  if(omc_AbsynUtil_isInput(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrs), 6)))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT72, _OMC_LIT76, _json);
  }
  else
  {
    if(omc_AbsynUtil_isOutput(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attrs), 6)))))
    {
      _json = omc_JSON_addPair(threadData, _OMC_LIT72, _OMC_LIT74, _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONAbsynDims(threadData_t *threadData, modelica_metatype _dims)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  {
    modelica_metatype _d;
    for (tmpMeta1 = _dims; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _d = MMC_CAR(tmpMeta1);
      _json = omc_JSON_addElement(threadData, omc_JSON_makeString(threadData, omc_Dump_printSubscriptStr(threadData, _d)), _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONDims(threadData_t *threadData, modelica_metatype _absynDims, modelica_metatype _typedDims)
{
  modelica_metatype _json = NULL;
  modelica_metatype _ty_json = NULL;
  modelica_metatype _absyn_json = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _ty_json has no default value.
  // _absyn_json has no default value.
  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT77, omc_NFApi_dumpJSONAbsynDims(threadData, _absynDims), _json);

  _ty_json = omc_JSON_makeNull(threadData);

  {
    modelica_metatype _d;
    for (tmpMeta1 = _typedDims; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _d = MMC_CAR(tmpMeta1);
      _ty_json = omc_JSON_addElement(threadData, omc_JSON_makeString(threadData, omc_NFDimension_toString(threadData, _d)), _ty_json);
    }
  }

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT78, _ty_json, _json);
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONClassDims(threadData_t *threadData, modelica_metatype _node, modelica_metatype _element)
{
  modelica_metatype _json = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _absyn_dims = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  // _ty has no default value.
  // _absyn_dims has no default value.
  _ty = omc_NFInstNode_InstNode_getType(threadData, _node);

  if(omc_NFType_isArray(threadData, _ty))
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = _element;
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
            if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
            tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,3) == 0) goto tmp3_end;
            tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,2) == 0) goto tmp3_end;
            tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
            if (optionNone(tmpMeta8)) goto tmp3_end;
            tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
            
            _absyn_dims = tmpMeta9;
            /* Pattern matching succeeded */
            tmpMeta1 = _absyn_dims;
            goto tmp3_done;
          }
          case 1: {
            modelica_metatype tmpMeta10;
            
            /* Pattern matching succeeded */
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
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
    _absyn_dims = tmpMeta1;

    _json = omc_NFApi_dumpJSONDims(threadData, _absyn_dims, omc_NFType_arrayDims(threadData, _ty));
  }
  else
  {
    _json = omc_JSON_makeNull(threadData);
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _originalBinding, modelica_boolean _evaluate)
{
  modelica_metatype _json = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _bind = NULL;
  modelica_integer _context;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _exp has no default value.
  _bind = _binding;
  // _context has no default value.
  if((isSome(_originalBinding) && omc_NFBinding_isEvaluated(threadData, _binding)))
  {
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
            _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 2));

            _bind = omc_NFInst_instBinding(threadData, omc_Util_getOption(threadData, _originalBinding), _context);

            _bind = omc_NFTyping_typeBinding(threadData, _bind, _context);
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
  }

  _exp = omc_NFBinding_getExp(threadData, _bind);

  _exp = omc_NFExpression_map(threadData, _exp, boxvar_NFExpression_expandSplitIndices);

  _json = omc_JSON_addPair(threadData, _OMC_LIT79, omc_NFExpression_toJSON(threadData, _exp), _json);

  if((_evaluate && (!omc_NFExpression_isLiteral(threadData, _exp))))
  {
    omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT80);

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
            /* Pattern matching succeeded */
            _exp = omc_NFCeval_evalExp(threadData, _exp, omc_NFCeval_EvalTarget_new(threadData, _OMC_LIT7, ((modelica_integer) 2), mmc_mk_none()));

            _exp = omc_NFExpression_map(threadData, _exp, boxvar_NFExpression_expandSplitIndices);

            _json = omc_JSON_addPair(threadData, _OMC_LIT60, omc_NFExpression_toJSON(threadData, _exp), _json);
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

    omc_ErrorExt_rollBack(threadData, _OMC_LIT80);
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _originalBinding, modelica_metatype _evaluate)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_evaluate);
  _json = omc_NFApi_dumpJSONBinding(threadData, _binding, _originalBinding, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONTypeName(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  _json = omc_JSON_makeString(threadData, omc_NFType_toString(threadData, omc_NFType_arrayElementType(threadData, _ty)));
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONEnumTypeLiteral(threadData_t *threadData, modelica_metatype _node, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  _json = omc_JSON_addPair(threadData, _OMC_LIT12, _OMC_LIT29, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, _node)), _json);

  _json = omc_NFApi_dumpJSONComment(threadData, omc_NFComponent_comment(threadData, omc_NFInstNode_InstNode_component(threadData, _node)), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONEnumTypeLiterals(threadData_t *threadData, modelica_metatype _literals, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fjson)
{
  modelica_metatype _json = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = __omcQ_24in_5Fjson;
  tmp1 = ((modelica_integer) 6); tmp2 = 1; tmp3 = arrayLength(_literals);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 6); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _json = omc_JSON_addElement(threadData, omc_NFApi_dumpJSONEnumTypeLiteral(threadData, arrayGet(_literals,_i) /* DAE.ASUB */, _scope), _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONEnumType(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _enumNode)
{
  modelica_metatype _json = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _def = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _json_elems = NULL;
  modelica_metatype _json_ext = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  _node = omc_NFInstNode_InstNode_resolveInner(threadData, omc_NFInstNode_InstNode_classScope(threadData, _enumNode));
  // _def has no default value.
  // _comps has no default value.
  // _json_elems has no default value.
  // _json_ext has no default value.
  // _elems has no default value.
  _def = omc_NFInstNode_InstNode_definition(threadData, _node);

  _json = omc_JSON_makeNull(threadData);

  _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_NFApi_dumpJSONNodePath(threadData, _node, 0 /* false */), _json);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT11, omc_NFApi_dumpJSONClassDims(threadData, _node, _def), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT19, omc_JSON_makeString(threadData, omc_SCodeDump_restrictionStringPP(threadData, omc_SCodeUtil_getClassRestriction(threadData, _def))), _json);

  _json = omc_NFApi_dumpJSONCommentOpt(threadData, omc_SCodeUtil_getElementComment(threadData, _def), _node, _json, 1 /* true */, 1 /* true */, 0 /* false */);

  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _elems = tmpMeta2;

  _json_elems = omc_NFApi_dumpJSONElements(threadData, _elems, _node, 0 /* false */);

  _comps = omc_NFClassTree_ClassTree_getComponents(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _node)));

  _json_elems = omc_NFApi_dumpJSONEnumTypeLiterals(threadData, _comps, omc_NFInstNode_InstNode_parent(threadData, _node), _json_elems);

  _json = omc_JSON_addPair(threadData, _OMC_LIT15, _json_elems, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT81, omc_NFApi_dumpJSONSourceInfo(threadData, omc_NFInstNode_InstNode_info(threadData, _node)), _json);
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONSCodeElementType(threadData_t *threadData, modelica_metatype _elem)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _elem;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_NFApi_dumpJSONPath(threadData, omc_AbsynUtil_typeSpecPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 5))))), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT82, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
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
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONComponentType(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _node, modelica_metatype _ty, modelica_boolean _isDeleted)
{
  modelica_metatype _json = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _json has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _cls;
    tmp4_2 = omc_NFType_arrayElementType(threadData, _ty);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFApi_dumpJSONEnumType(threadData, _cls, _node);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,10,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFApi_dumpJSONSCodeElementType(threadData, omc_NFInstNode_InstNode_definition(threadData, _node));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFApi_dumpJSONInstanceTree(threadData, _cls, _node, 1 /* true */, _isDeleted, 0 /* false */);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFApi_dumpJSONTypeName(threadData, _ty);
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
  _json = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONComponentType(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _node, modelica_metatype _ty, modelica_metatype _isDeleted)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_isDeleted);
  _json = omc_NFApi_dumpJSONComponentType(threadData, _cls, _node, _ty, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONComponent(threadData_t *threadData, modelica_metatype _component, modelica_metatype _originalBinding, modelica_metatype _cls)
{
  modelica_metatype _json = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _scope = NULL;
  modelica_metatype _ty_node = NULL;
  modelica_metatype _comp = NULL;
  modelica_metatype _elem = NULL;
  modelica_boolean _is_constant;
  modelica_metatype _cmt = NULL;
  modelica_metatype _ann = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype _path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _node has no default value.
  // _scope has no default value.
  // _ty_node has no default value.
  // _comp has no default value.
  // _elem has no default value.
  // _is_constant has no default value.
  // _cmt has no default value.
  // _ann has no default value.
  // _j has no default value.
  // _path has no default value.
  _node = omc_NFInstNode_InstNode_resolveOuter(threadData, _component);

  _comp = omc_NFInstNode_InstNode_component(threadData, _node);

  _elem = omc_NFInstNode_InstNode_definition(threadData, _node);

  _scope = omc_NFInstNode_InstNode_parent(threadData, _node);

  _json = omc_JSON_addPair(threadData, _OMC_LIT12, _OMC_LIT29, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, _node)), _json);

  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _comp;
    tmp3_2 = _elem;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponent_isDeleted(threadData, _comp)) goto tmp2_end;
          _json = omc_JSON_addPair(threadData, _OMC_LIT27, omc_NFApi_dumpJSONComponentType(threadData, _cls, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), 1 /* true */), _json);

          _json = omc_NFApi_dumpJSONSCodeMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 6))), _scope, _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT30, omc_JSON_makeBoolean(threadData, 0 /* false */), _json);

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT20, omc_NFApi_dumpJSONAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 3))), _scope), _json);

          _json = omc_NFApi_dumpJSONComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 7))), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,2) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT27, omc_NFApi_dumpJSONComponentType(threadData, _cls, _node, omc_NFComponent_getType(threadData, _comp), 0 /* false */), _json);

          _json = omc_NFApi_dumpJSONSCodeMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 6))), _scope, _json);

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT20, omc_NFApi_dumpJSONAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 3))), _scope), _json);

          _json = omc_NFApi_dumpJSONComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 7))), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);

          _json = omc_JSON_addPair(threadData, _OMC_LIT59, omc_JSON_makeString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), _json);
          goto tmp2_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT27, omc_NFApi_dumpJSONComponentType(threadData, _cls, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), 0 /* false */), _json);

          if(omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT11, omc_NFApi_dumpJSONDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 4)))), 2))), omc_NFType_arrayDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))))), _json);
          }

          _json = omc_NFApi_dumpJSONSCodeMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 6))), _scope, _json);

          _is_constant = ((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 6)))), 4)))) <= 3) && (omc_NFBinding_purity(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))) == 1));

          if(omc_NFBinding_isExplicitlyBound(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT60, omc_NFApi_dumpJSONBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), _originalBinding, _is_constant), _json);
          }

          if(omc_NFBinding_isBound(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5)))))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT30, omc_NFApi_dumpJSONBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))), mmc_mk_none(), 1 /* true */), _json);
          }

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT20, omc_NFApi_dumpJSONAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 3))), _scope), _json);

          _json = omc_NFApi_dumpJSONComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 7))), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);

          if(omc_NFInstNode_InstNode_isGeneratedInner(threadData, _node))
          {
            _json = omc_JSON_addPair(threadData, _OMC_LIT83, omc_JSON_makeBoolean(threadData, 1 /* true */), _json);
          }
          goto tmp2_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_AbsynUtil_isOnlyOuter(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 3)))), 5))))) goto tmp2_end;
          _path = omc_AbsynUtil_typeSpecPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 5))));

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
                  /* Pattern matching succeeded */
                  _ty_node = omc_NFLookup_lookupName(threadData, _path, _scope, omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 4)), 0 /* false */, NULL);

                  _json = omc_JSON_addPair(threadData, _OMC_LIT27, omc_NFApi_dumpJSONSCodeClass(threadData, omc_NFInstNode_InstNode_definition(threadData, _ty_node), _ty_node, omc_NFInstNode_InstNode_resolveInner(threadData, _component), 0 /* false */, omc_JSON_makeNull(threadData)), _json);
                  goto tmp6_done;
                }
                case 1: {
                  /* Pattern matching succeeded */
                  _json = omc_JSON_addPair(threadData, _OMC_LIT27, omc_NFApi_dumpJSONPath(threadData, _path), _json);
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
              goto goto_1;
              tmp6_done2:;
            }
          }
          ;

          _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT20, omc_NFApi_dumpJSONAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 3))), _scope), _json);

          _json = omc_NFApi_dumpJSONComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 7))), _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT84,omc_NFInstNode_InstNode_name(threadData, _node));
          omc_Error_assertion(threadData, 0 /* false */, tmpMeta9, _OMC_LIT86);
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
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONReplaceableClass(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _scope)
{
  modelica_metatype _json = NULL;
  modelica_metatype _elem = NULL;
  modelica_metatype _cdef = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _derivedNode = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _odims = NULL;
  modelica_metatype _cmt = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _elem has no default value.
  // _cdef has no default value.
  // _node has no default value.
  // _derivedNode has no default value.
  // _path has no default value.
  // _odims has no default value.
  // _cmt has no default value.
  _node = omc_NFInstNode_InstNode_getRedeclaredNode(threadData, _cls);

  _elem = omc_NFInstNode_InstNode_definition(threadData, _node);

  _json = omc_NFApi_dumpJSONSCodeClass(threadData, _elem, _scope, _node, 1 /* true */, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT81, omc_NFApi_dumpJSONSourceInfo(threadData, omc_NFInstNode_InstNode_info(threadData, _node)), _json);
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_getExtendsModifier(threadData_t *threadData, modelica_metatype _definition, modelica_metatype _node)
{
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _definition;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_definition), 4)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_SCodeUtil_elementMod(threadData, omc_NFInstNode_InstNode_definition(threadData, omc_NFInstNode_InstNode_getDerivedNode(threadData, _node, 0 /* false */)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT87;
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
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mod;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONBuiltinBaseClass(threadData_t *threadData, modelica_string _name)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  _json = omc_JSON_addPair(threadData, _OMC_LIT12, _OMC_LIT14, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT10, omc_JSON_makeString(threadData, _name), _json);
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONExtends(threadData_t *threadData, modelica_metatype _ext, modelica_boolean _isDeleted)
{
  modelica_metatype _json = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _cls_def = NULL;
  modelica_metatype _ext_def = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _node has no default value.
  // _cls has no default value.
  // _cls_def has no default value.
  // _ext_def has no default value.
  // _mod has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _ext;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _node = tmpMeta2;

  _cls_def = omc_NFInstNode_InstNode_definition(threadData, _node);

  /* Pattern-matching assignment */
  tmpMeta3 = omc_NFInstNode_InstNode_extendsDefinition(threadData, _node);
  if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
  _ext_def = tmpMeta4;

  _json = omc_JSON_addPair(threadData, _OMC_LIT12, _OMC_LIT14, _json);

  _json = omc_NFApi_dumpJSONSCodeMod(threadData, omc_NFApi_getExtendsModifier(threadData, _ext_def, _node), _node, _json);

  _json = omc_NFApi_dumpJSONCommentOpt(threadData, omc_SCodeUtil_getElementComment(threadData, _ext_def), _node, _json, 1 /* true */, 1 /* true */, 0 /* false */);

  _cls = omc_NFInstNode_InstNode_getClass(threadData, _node);

  if((omc_NFClass_isOnlyBuiltin(threadData, _cls) && (!omc_NFClass_isEnumeration(threadData, _cls))))
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT10, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, _node)), _json);
  }
  else
  {
    _json = omc_JSON_addPair(threadData, _OMC_LIT10, omc_NFApi_dumpJSONInstanceTree(threadData, _ext, _node, 0 /* false */, _isDeleted, 1 /* true */), _json);
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONExtends(threadData_t *threadData, modelica_metatype _ext, modelica_metatype _isDeleted)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_isDeleted);
  _json = omc_NFApi_dumpJSONExtends(threadData, _ext, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _scope, modelica_boolean _isDeleted)
{
  modelica_metatype _json = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta18;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _j has no default value.
  if(_isDeleted)
  {
    {
      modelica_metatype _e;
      for (tmpMeta1 = _elements; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _e = MMC_CAR(tmpMeta1);
        { /* match expression */
          modelica_metatype tmp5_1;
          tmp5_1 = _e;
          {
            volatile mmc_switch_type tmp5;
            int tmp6;
            tmp5 = 0;
            for (; tmp5 < 2; tmp5++) {
              switch (MMC_SWITCH_CAST(tmp5)) {
              case 0: {
                modelica_metatype tmpMeta7;
                modelica_integer tmp8;
                if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,3) == 0) goto tmp4_end;
                tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 4));
                tmp8 = mmc_unbox_integer(tmpMeta7);
                if (1 /* true */ != tmp8) goto tmp4_end;
                /* Pattern matching succeeded */
                tmpMeta2 = omc_NFApi_dumpJSONExtends(threadData, _e, _isDeleted);
                goto tmp4_done;
              }
              case 1: {
                
                /* Pattern matching succeeded */
                tmpMeta2 = omc_JSON_makeNull(threadData);
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
        _j = tmpMeta2;

        _json = omc_JSON_addElementNotNull(threadData, _j, _json);
      }
    }
  }
  else
  {
    {
      modelica_metatype _e;
      for (tmpMeta10 = _elements; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
      {
        _e = MMC_CAR(tmpMeta10);
        { /* match expression */
          modelica_metatype tmp14_1;
          tmp14_1 = _e;
          {
            volatile mmc_switch_type tmp14;
            int tmp15;
            tmp14 = 0;
            for (; tmp14 < 5; tmp14++) {
              switch (MMC_SWITCH_CAST(tmp14)) {
              case 0: {
                modelica_metatype tmpMeta16;
                modelica_integer tmp17;
                if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,1,3) == 0) goto tmp13_end;
                tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp14_1), 4));
                tmp17 = mmc_unbox_integer(tmpMeta16);
                if (1 /* true */ != tmp17) goto tmp13_end;
                /* Pattern matching succeeded */
                tmpMeta11 = omc_NFApi_dumpJSONExtends(threadData, _e, _isDeleted);
                goto tmp13_done;
              }
              case 1: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,1,3) == 0) goto tmp13_end;
                
                /* Pattern matching succeeded */
                tmpMeta11 = omc_NFApi_dumpJSONReplaceableClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))), _scope);
                goto tmp13_done;
              }
              case 2: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,0,3) == 0) goto tmp13_end;
                
                /* Pattern matching succeeded */
                tmpMeta11 = omc_NFApi_dumpJSONComponent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 4))));
                goto tmp13_done;
              }
              case 3: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,2,1) == 0) goto tmp13_end;
                
                /* Pattern matching succeeded */
                tmpMeta11 = omc_NFApi_dumpJSONBuiltinBaseClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))));
                goto tmp13_done;
              }
              case 4: {
                
                /* Pattern matching succeeded */
                tmpMeta11 = omc_JSON_makeNull(threadData);
                goto tmp13_done;
              }
              }
              goto tmp13_end;
              tmp13_end: ;
            }
            goto goto_12;
            goto_12:;
            MMC_THROW_INTERNAL();
            goto tmp13_done;
            tmp13_done:;
          }
        }
        _j = tmpMeta11;

        _json = omc_JSON_addElementNotNull(threadData, _j, _json);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _scope, modelica_metatype _isDeleted)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_isDeleted);
  _json = omc_NFApi_dumpJSONElements(threadData, _elements, _scope, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONPath(threadData_t *threadData, modelica_metatype _path)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeString(threadData, omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT0, 1 /* true */, 0 /* false */));
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONNodeEnclosingPath(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_NFApi_dumpJSONPath(threadData, omc_NFInstNode_InstNode_enclosingScopePath(threadData, _node, 1 /* true */, 0 /* false */));
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONNodePath(threadData_t *threadData, modelica_metatype _node, modelica_boolean _ignoreBaseClass)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_NFApi_dumpJSONPath(threadData, omc_NFInstNode_InstNode_enclosingScopePath(threadData, _node, 0 /* false */, _ignoreBaseClass));
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONNodePath(threadData_t *threadData, modelica_metatype _node, modelica_metatype _ignoreBaseClass)
{
  modelica_integer tmp1;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_ignoreBaseClass);
  _json = omc_NFApi_dumpJSONNodePath(threadData, _node, tmp1);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONInstanceAnnotationExtends(threadData_t *threadData, modelica_metatype _ext, modelica_metatype _filter)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  _json = omc_JSON_addPair(threadData, _OMC_LIT12, _OMC_LIT14, _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT10, omc_NFApi_dumpJSONInstanceAnnotation(threadData, _ext, _filter), _json);
  _return: OMC_LABEL_UNUSED
  return _json;
}

static modelica_metatype closure0_SCodeUtil_filterGivenSubModNames(threadData_t *thData, modelica_metatype closure, modelica_metatype submod)
{
  modelica_metatype namesToKeep = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_SCodeUtil_filterGivenSubModNames(thData, submod, namesToKeep);
}
DLLDirection
modelica_metatype omc_NFApi_dumpJSONInstanceAnnotation(threadData_t *threadData, modelica_metatype _node, modelica_metatype _filter)
{
  modelica_metatype _json = NULL;
  modelica_metatype _cmt = NULL;
  modelica_metatype _ann = NULL;
  modelica_metatype _exts = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype _scope = NULL;
  modelica_integer _context;
  modelica_boolean _annotation_is_literal;
  modelica_metatype _def = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _cmt has no default value.
  // _ann has no default value.
  // _exts has no default value.
  // _j has no default value.
  _scope = _node;
  // _context has no default value.
  _annotation_is_literal = 1 /* true */;
  // _def has no default value.
  omc_NFInst_expand(threadData, _node, ((modelica_integer) 67108865));

  _def = omc_NFInstNode_InstNode_definition(threadData, _node);

  _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_NFApi_dumpJSONNodePath(threadData, _node, 0 /* false */), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT19, omc_JSON_makeString(threadData, omc_NFRestriction_toString(threadData, omc_NFInstNode_InstNode_restriction(threadData, _node))), _json);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT20, omc_NFApi_dumpJSONClassPrefixes(threadData, _def, omc_NFInstNode_InstNode_parent(threadData, _node)), _json);

  _exts = omc_NFClassTree_ClassTree_getExtends(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _node)));

  if((!(arrayLength(_exts) == ((modelica_integer) 0))))
  {
    _j = omc_JSON_emptyArray(threadData, ((modelica_integer) 0));

    {
      modelica_metatype _ext;
      for (tmpMeta1 = _exts, tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
      {
        _ext = arrayGet(tmpMeta1,tmp3);
        _j = omc_JSON_addElement(threadData, omc_NFApi_dumpJSONInstanceAnnotationExtends(threadData, _ext, _filter), _j);
      }
    }

    _json = omc_JSON_addPair(threadData, _OMC_LIT15, _j, _json);
  }

  _cmt = omc_SCodeUtil_getElementComment(threadData, omc_NFInstNode_InstNode_definition(threadData, _node));

  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _cmt;
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
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          modelica_metatype tmpMeta17;
          if (optionNone(tmp8_1)) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 1));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (optionNone(tmpMeta11)) goto tmp7_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          
          _ann = tmpMeta12;
          /* Pattern matching succeeded */
          if((!listEmpty(_filter)))
          {
            tmpMeta14 = mmc_mk_box1(0, _filter);
            tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(3));
            memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_ann), 3*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = omc_SCodeUtil_filterSubMods(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ann), 2))), (modelica_fnptr) mmc_mk_box2(0,closure0_SCodeUtil_filterGivenSubModNames,tmpMeta14));
            _ann = tmpMeta13;
          }

          _annotation_is_literal = omc_SCodeUtil_onlyLiteralsInMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ann), 2))));
          tmp16 = (modelica_boolean)omc_SCodeUtil_isEmptyMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ann), 2))));
          if(tmp16)
          {
            tmpMeta17 = mmc_mk_none();
          }
          else
          {
            tmpMeta15 = mmc_mk_box3(3, &SCode_Comment_COMMENT__desc, mmc_mk_some(_ann), mmc_mk_none());
            tmpMeta17 = mmc_mk_some(tmpMeta15);
          }
          tmpMeta5 = tmpMeta17;
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_none();
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
  _cmt = tmpMeta5;

  if((!_annotation_is_literal))
  {
    omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT88);

    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp20;
        int tmp21;
        tmp20 = 0;
        MMC_TRY_INTERNAL(mmc_jumper)
        tmp19_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp20 < 2; tmp20++) {
          switch (MMC_SWITCH_CAST(tmp20)) {
          case 0: {
            /* Pattern matching succeeded */
            _context = omc_NFInstContext_set(threadData, ((modelica_integer) 8), ((modelica_integer) 1));

            _scope = omc_NFInstNode_InstNode_makeRootClass(threadData, _scope, _OMC_LIT8, mmc_mk_none());

            _scope = omc_NFInst_instantiate(threadData, _scope, _OMC_LIT89, _OMC_LIT8, _context, 1 /* true */);

            omc_NFInst_insertGeneratedInners(threadData, _scope, omc_NFInstNode_InstNode_topScope(threadData, _scope), _context);

            omc_NFInst_instExpressions(threadData, _scope, _scope, _OMC_LIT90, omc_NFConnectBreakTree_new(threadData), _context, _OMC_LIT91);
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
        tmp19_done:
        (void)tmp20;
        MMC_RESTORE_INTERNAL(mmc_jumper);
        goto tmp19_done2;
        goto_18:;
        MMC_CATCH_INTERNAL(mmc_jumper);
        if (++tmp20 < 2) {
          goto tmp19_top;
        }
        MMC_THROW_INTERNAL();
        tmp19_done2:;
      }
    }
    ;

    omc_ErrorExt_rollBack(threadData, _OMC_LIT88);
  }

  _json = omc_NFApi_dumpJSONCommentOpt(threadData, _cmt, _scope, _json, 1 /* true */, 1 /* true */, 1 /* true */);
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_dumpJSONInstanceTree(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _scope, modelica_boolean _root, modelica_boolean _isDeleted, modelica_boolean _isExtends)
{
  modelica_metatype _json = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype _sections = NULL;
  modelica_metatype _cmt = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype _def = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_makeNull(threadData);
  // _node has no default value.
  // _elems has no default value.
  // _sections has no default value.
  // _cmt has no default value.
  // _j has no default value.
  // _def has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tree;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _node = tmpMeta2;
  _elems = tmpMeta3;

  _node = omc_NFInstNode_InstNode_resolveOuter(threadData, _node);

  _def = omc_NFInstNode_InstNode_definition(threadData, _node);

  _cmt = omc_SCodeUtil_getElementComment(threadData, _def);

  _json = omc_JSON_addPair(threadData, _OMC_LIT18, omc_NFApi_dumpJSONNodePath(threadData, _node, (!_isExtends)), _json);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT11, omc_NFApi_dumpJSONClassDims(threadData, _node, _def), _json);

  _json = omc_JSON_addPair(threadData, _OMC_LIT19, omc_JSON_makeString(threadData, omc_SCodeDump_restrictionStringPP(threadData, omc_SCodeUtil_getClassRestriction(threadData, _def))), _json);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT20, omc_NFApi_dumpJSONClassPrefixes(threadData, _def, omc_NFInstNode_InstNode_parent(threadData, _node)), _json);

  _json = omc_NFApi_dumpJSONCommentOpt(threadData, _cmt, _scope, _json, 1 /* true */, 1 /* true */, 0 /* false */);

  _json = omc_JSON_addPairNotNull(threadData, _OMC_LIT15, omc_NFApi_dumpJSONElements(threadData, _elems, _node, _isDeleted), _json);

  if((!_isDeleted))
  {
    _json = omc_NFApi_dumpJSONImports(threadData, _node, _json);

    _sections = omc_NFClass_getSections(threadData, omc_NFInstNode_InstNode_getClass(threadData, _node));

    _json = omc_NFApi_dumpJSONEquations(threadData, _sections, _node, _json);
  }

  _json = omc_JSON_addPair(threadData, _OMC_LIT81, omc_NFApi_dumpJSONSourceInfo(threadData, omc_NFInstNode_InstNode_info(threadData, _node)), _json);
  _return: OMC_LABEL_UNUSED
  return _json;
}
modelica_metatype boxptr_NFApi_dumpJSONInstanceTree(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _scope, modelica_metatype _root, modelica_metatype _isDeleted, modelica_metatype _isExtends)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _json = NULL;
  tmp1 = mmc_unbox_integer(_root);
  tmp2 = mmc_unbox_integer(_isDeleted);
  tmp3 = mmc_unbox_integer(_isExtends);
  _json = omc_NFApi_dumpJSONInstanceTree(threadData, _tree, _scope, tmp1, tmp2, tmp3);
  /* skip box _json; JSON */
  return _json;
}

DLLDirection
modelica_metatype omc_NFApi_buildInstanceTreeComponent(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _inner_node = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _opt_binding = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tree has no default value.
  // _inner_node has no default value.
  // _cls_node has no default value.
  // _cls has no default value.
  // _binding has no default value.
  // _opt_binding has no default value.
  _inner_node = omc_NFInstNode_InstNode_resolveOuter(threadData, _node);

  _cls_node = omc_NFInstNode_InstNode_classScope(threadData, _inner_node);

  if(omc_NFInstNode_InstNode_isEmpty(threadData, _cls_node))
  {
    _cls = _OMC_LIT92;
  }
  else
  {
    _cls = omc_NFApi_buildInstanceTree(threadData, _cls_node, 0 /* false */);
  }

  if(omc_NFInstNode_InstNode_isComponent(threadData, _inner_node))
  {
    _binding = omc_NFComponent_getBinding(threadData, omc_NFInstNode_InstNode_component(threadData, _inner_node));

    _opt_binding = (omc_NFBinding_isBound(threadData, _binding)?mmc_mk_some(_binding):mmc_mk_none());
  }
  else
  {
    _opt_binding = mmc_mk_none();
  }

  tmpMeta1 = mmc_mk_box4(3, &NFApi_InstanceTree_COMPONENT__desc, _node, _opt_binding, _cls);
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_NFApi_buildInstanceTreeGeneratedInners(threadData_t *threadData, modelica_metatype _classTree, modelica_metatype _elements)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _comp = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElements has no default value.
  // _comps has no default value.
  // _comp has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _elems = tmpMeta1;
  /* Pattern-matching assignment */
  tmpMeta2 = _classTree;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,2,7) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  _comps = tmpMeta3;

  tmp5 = arrayLength(_comps); tmp6 = ((modelica_integer) -1); tmp7 = ((modelica_integer) 1);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_comps); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
    {
      if(omc_NFInstNode_InstNode_isGeneratedInner(threadData, omc_Mutable_access(threadData, arrayGet(_comps,_i) /* DAE.ASUB */)))
      {
        tmpMeta4 = mmc_mk_cons(omc_NFApi_buildInstanceTreeComponent(threadData, omc_Mutable_access(threadData, arrayGet(_comps,_i) /* DAE.ASUB */)), _elems);
        _elems = tmpMeta4;
      }
      else
      {
        break;
      }
    }
  }

  if(listEmpty(_elems))
  {
    _outElements = _elements;
  }
  else
  {
    _outElements = listAppend(_elements, _elems);
  }
  _return: OMC_LABEL_UNUSED
  return _outElements;
}

DLLDirection
modelica_metatype omc_NFApi_buildInstanceTreeElements(threadData_t *threadData, modelica_metatype _classDefinition, modelica_metatype _classTree)
{
  modelica_metatype _elements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _scode_elems = NULL;
  modelica_metatype _clss = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _exts = NULL;
  modelica_integer _cls_index;
  modelica_integer _comp_index;
  modelica_integer _ext_index;
  modelica_metatype _tree = NULL;
  modelica_metatype _local_comps = NULL;
  modelica_metatype _node_ptr = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta30;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _elements = tmpMeta1;
  // _scode_elems has no default value.
  // _clss has no default value.
  // _comps has no default value.
  // _exts has no default value.
  _cls_index = ((modelica_integer) 1);
  _comp_index = ((modelica_integer) 1);
  _ext_index = ((modelica_integer) 1);
  // _tree has no default value.
  // _local_comps has no default value.
  // _node_ptr has no default value.
  // _node has no default value.
  /* Pattern-matching assignment */
  tmpMeta2 = _classTree;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,2,7) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 6));
  _clss = tmpMeta3;
  _comps = tmpMeta4;
  _local_comps = tmpMeta5;
  _exts = tmpMeta6;

  _scode_elems = omc_SCodeUtil_getClassElements(threadData, _classDefinition);

  if((!listEmpty(_local_comps)))
  {
    /* Pattern-matching assignment */
    tmpMeta7 = _local_comps;
    if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
    tmpMeta8 = MMC_CAR(tmpMeta7);
    tmpMeta9 = MMC_CDR(tmpMeta7);
    tmp10 = mmc_unbox_integer(tmpMeta8);
    _comp_index = tmp10  /* pattern as ty=Integer */;
    _local_comps = tmpMeta9;
  }

  {
    modelica_metatype _e;
    for (tmpMeta11 = _scode_elems; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
    {
      _e = MMC_CAR(tmpMeta11);
      { /* match expression */
        modelica_metatype tmp15_1;
        tmp15_1 = _e;
        {
          volatile mmc_switch_type tmp15;
          int tmp16;
          tmp15 = 0;
          for (; tmp15 < 4; tmp15++) {
            switch (MMC_SWITCH_CAST(tmp15)) {
            case 0: {
              modelica_metatype tmpMeta17;
              if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,1,5) == 0) goto tmp14_end;
              
              /* Pattern matching succeeded */
              _tree = omc_NFApi_buildInstanceTree(threadData, arrayGet(_exts,_ext_index) /* DAE.ASUB */, 1 /* true */);

              _ext_index = ((modelica_integer) 1) + _ext_index;
              tmpMeta17 = mmc_mk_cons(_tree, _elements);
              tmpMeta12 = tmpMeta17;
              goto tmp14_done;
            }
            case 1: {
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_metatype tmpMeta20;
              if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,2,8) == 0) goto tmp14_end;
              
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!omc_SCodeUtil_isElementReplaceable(threadData, _e)) goto tmp14_end;
              while(1)
              {
                if(!(!stringEqual(omc_NFInstNode_InstNode_name(threadData, omc_Mutable_access(threadData, arrayGet(_clss,_cls_index) /* DAE.ASUB */)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2)))))) break;
                _cls_index = ((modelica_integer) 1) + _cls_index;
              }

              tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta19 = mmc_mk_box4(4, &NFApi_InstanceTree_CLASS__desc, omc_Mutable_access(threadData, arrayGet(_clss,_cls_index) /* DAE.ASUB */), tmpMeta18, mmc_mk_boolean(0 /* false */));
              _tree = tmpMeta19;

              _cls_index = ((modelica_integer) 1) + _cls_index;
              tmpMeta20 = mmc_mk_cons(_tree, _elements);
              tmpMeta12 = tmpMeta20;
              goto tmp14_done;
            }
            case 2: {
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              modelica_integer tmp24;
              modelica_metatype tmpMeta25;
              modelica_metatype tmpMeta26;
              modelica_metatype tmpMeta27;
              modelica_metatype tmpMeta28;
              modelica_integer tmp29;
              if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,3,8) == 0) goto tmp14_end;
              
              /* Pattern matching succeeded */
              while(1)
              {
                if(!1 /* true */) break;
                _node = omc_Mutable_access(threadData, arrayGet(_comps,_comp_index) /* DAE.ASUB */);

                if(((stringEqual(omc_NFInstNode_InstNode_name(threadData, _node), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))))) && (!omc_NFInstNode_InstNode_isGeneratedInner(threadData, _node))))
                {
                  break;
                }

                /* Pattern-matching assignment */
                tmpMeta21 = _local_comps;
                if (listEmpty(tmpMeta21)) goto goto_13;
                tmpMeta22 = MMC_CAR(tmpMeta21);
                tmpMeta23 = MMC_CDR(tmpMeta21);
                tmp24 = mmc_unbox_integer(tmpMeta22);
                _comp_index = tmp24  /* pattern as ty=Integer */;
                _local_comps = tmpMeta23;
              }

              _tree = omc_NFApi_buildInstanceTreeComponent(threadData, _node);

              tmpMeta25 = mmc_mk_cons(_tree, _elements);
              _elements = tmpMeta25;

              if((!listEmpty(_local_comps)))
              {
                /* Pattern-matching assignment */
                tmpMeta26 = _local_comps;
                if (listEmpty(tmpMeta26)) goto goto_13;
                tmpMeta27 = MMC_CAR(tmpMeta26);
                tmpMeta28 = MMC_CDR(tmpMeta26);
                tmp29 = mmc_unbox_integer(tmpMeta27);
                _comp_index = tmp29  /* pattern as ty=Integer */;
                _local_comps = tmpMeta28;
              }
              tmpMeta12 = _elements;
              goto tmp14_done;
            }
            case 3: {
              
              /* Pattern matching succeeded */
              tmpMeta12 = _elements;
              goto tmp14_done;
            }
            }
            goto tmp14_end;
            tmp14_end: ;
          }
          goto goto_13;
          goto_13:;
          MMC_THROW_INTERNAL();
          goto tmp14_done;
          tmp14_done:;
        }
      }
      _elements = tmpMeta12;
    }
  }

  _elements = listReverseInPlace(_elements);
  _return: OMC_LABEL_UNUSED
  return _elements;
}

DLLDirection
modelica_metatype omc_NFApi_buildInstanceTree(threadData_t *threadData, modelica_metatype _node, modelica_boolean _isDerived)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _cls_tree = NULL;
  modelica_metatype _elems = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tree has no default value.
  // _cls_node has no default value.
  // _cls has no default value.
  // _cls_tree has no default value.
  // _elems has no default value.
  _cls_node = omc_NFInstNode_InstNode_resolveInner(threadData, _node);

  _cls = omc_NFInstNode_InstNode_getClass(threadData, _cls_node);

  if((((!_isDerived) && omc_NFClass_isOnlyBuiltin(threadData, _cls)) && (!omc_NFClass_isEnumeration(threadData, _cls))))
  {
    _tree = _OMC_LIT92;

    goto _return;
  }

  _cls_tree = omc_NFClass_classTree(threadData, _cls);

  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _cls;
    tmp4_2 = _cls_tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(omc_NFApi_buildInstanceTree(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cls), 2))), 1 /* true */), MMC_REFSTRUCTLIT(mmc_nil));
          _elems = tmpMeta6;
          tmpMeta7 = mmc_mk_box4(4, &NFApi_InstanceTree_CLASS__desc, _node, _elems, mmc_mk_boolean(_isDerived));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _elems = omc_NFApi_buildInstanceTreeElements(threadData, omc_NFInstNode_InstNode_definition(threadData, _cls_node), _cls_tree);

          if(omc_NFInstNode_InstNode_isRootClass(threadData, _node))
          {
            _elems = omc_NFApi_buildInstanceTreeGeneratedInners(threadData, _cls_tree, _elems);
          }
          tmpMeta8 = mmc_mk_box4(4, &NFApi_InstanceTree_CLASS__desc, _node, _elems, mmc_mk_boolean(_isDerived));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp10 = (modelica_boolean)omc_NFInstNode_InstNode_isEnumerationType(threadData, _cls_node);
          if(tmp10)
          {
            tmpMeta11 = _OMC_LIT95;
          }
          else
          {
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta11 = tmpMeta9;
          }
          tmpMeta12 = mmc_mk_box4(4, &NFApi_InstanceTree_CLASS__desc, _node, tmpMeta11, mmc_mk_boolean(_isDerived));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT96, _OMC_LIT97);
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}
modelica_metatype boxptr_NFApi_buildInstanceTree(threadData_t *threadData, modelica_metatype _node, modelica_metatype _isDerived)
{
  modelica_integer tmp1;
  modelica_metatype _tree = NULL;
  tmp1 = mmc_unbox_integer(_isDerived);
  _tree = omc_NFApi_buildInstanceTree(threadData, _node, tmp1);
  /* skip box _tree; NFApi.InstanceTree */
  return _tree;
}

DLLDirection
modelica_metatype omc_NFApi_parseModifier(threadData_t *threadData, modelica_string _modifierValue, modelica_metatype _scope)
{
  modelica_metatype _outMod = NULL;
  modelica_metatype _amod = NULL;
  modelica_metatype _smod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMod has no default value.
  // _amod has no default value.
  // _smod has no default value.
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = stringAppend(_OMC_LIT1,_modifierValue);
          tmpMeta6 = omc_Parser_stringMod(threadData, tmpMeta5, _OMC_LIT2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,6) == 0) goto goto_1;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          if (optionNone(tmpMeta7)) goto goto_1;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          _amod = tmpMeta8;

          _smod = omc_AbsynToSCode_translateMod(threadData, mmc_mk_some(_amod), _OMC_LIT3, _OMC_LIT4, mmc_mk_none(), _OMC_LIT7, 0 /* false */);

          _outMod = omc_NFModifier_Modifier_create(threadData, _smod, _OMC_LIT5, _OMC_LIT98, _scope);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _outMod = _OMC_LIT89;
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
  return _outMod;
}

DLLDirection
modelica_metatype omc_NFApi_getModelInstanceAnnotation(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _filter, modelica_boolean _prettyPrint)
{
  modelica_metatype _res = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_integer _context;
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _top has no default value.
  // _cls_node has no default value.
  // _context has no default value.
  // _json has no default value.
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
          _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 8));

          _context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 2));

          omc_NFApi_mkTop(threadData, omc_SymbolTable_getAbsyn(threadData), omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT0, 1 /* true */, 0 /* false */) ,&_top);

          _cls_node = omc_NFInst_lookupRootClass(threadData, _classPath, _top, _context);

          _cls_node = omc_NFInstNode_InstNode_resolveInner(threadData, _cls_node);

          _json = omc_NFApi_dumpJSONInstanceAnnotation(threadData, _cls_node, _filter);

          tmpMeta5 = mmc_mk_box2(5, &Values_Value_STRING__desc, omc_JSON_toString(threadData, _json, _prettyPrint));
          _res = tmpMeta5;

          omc_NFInst_clearCaches(threadData);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_NFInst_clearCaches(threadData);

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
  return _res;
}
modelica_metatype boxptr_NFApi_getModelInstanceAnnotation(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _filter, modelica_metatype _prettyPrint)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_integer(_prettyPrint);
  _res = omc_NFApi_getModelInstanceAnnotation(threadData, _classPath, _filter, tmp1);
  /* skip box _res; Values.Value */
  return _res;
}

DLLDirection
modelica_metatype omc_NFApi_getModelInstance(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _contextPath, modelica_string _modifier, modelica_boolean _prettyPrint)
{
  modelica_metatype _res = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _json = NULL;
  modelica_integer _context;
  modelica_metatype _inst_tree = NULL;
  modelica_metatype _inst_settings = NULL;
  modelica_string _str = NULL;
  modelica_metatype _mod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _top has no default value.
  // _cls_node has no default value.
  // _json has no default value.
  // _context has no default value.
  // _inst_tree has no default value.
  // _inst_settings has no default value.
  // _str has no default value.
  // _mod has no default value.
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
          _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 8));

          _context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 2));

          _inst_settings = _OMC_LIT99;

          omc_NFApi_mkTop(threadData, omc_SymbolTable_getAbsyn(threadData), omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT0, 1 /* true */, 0 /* false */) ,&_top);

          _mod = omc_NFApi_parseModifier(threadData, _modifier, _top);

          _cls_node = omc_NFInst_lookupRootClass(threadData, _classPath, _top, _context);

          if(omc_SCodeUtil_isFunction(threadData, omc_NFInstNode_InstNode_definition(threadData, _cls_node)))
          {
            _context = omc_NFInstContext_unset(threadData, _context, ((modelica_integer) 8));

            _context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 16));
          }

          if((!stringEqual(omc_AbsynUtil_pathFirstIdent(threadData, _contextPath), _OMC_LIT100)))
          {
            tmpMeta5 = mmc_mk_box3(8, &NFInstNode_InstNodeType_ROOT__CLASS__desc, _OMC_LIT8, mmc_mk_some(_contextPath));
            _cls_node = omc_NFInstNode_InstNode_setNodeType(threadData, tmpMeta5, _cls_node);
          }

          _cls_node = omc_NFInst_instantiateRootClass(threadData, _cls_node, _context, _mod);

          omc_ExecStat_execStat(threadData, _OMC_LIT101);

          _inst_tree = omc_NFApi_buildInstanceTree(threadData, _cls_node, 0 /* false */);

          omc_ExecStat_execStat(threadData, _OMC_LIT102);

          omc_NFInst_instExpressions(threadData, _cls_node, _cls_node, _OMC_LIT90, omc_NFConnectBreakTree_new(threadData), _context, _inst_settings);

          omc_NFInst_updateImplicitVariability(threadData, _cls_node, omc_Flags_isSet(threadData, _OMC_LIT106), _context);

          omc_ExecStat_execStat(threadData, _OMC_LIT107);

          omc_NFTyping_typeClassType(threadData, _cls_node, _OMC_LIT108, _context, _cls_node);

          omc_NFTyping_typeComponents(threadData, _cls_node, _context, 0 /* false */);

          omc_ExecStat_execStat(threadData, _OMC_LIT109);

          omc_NFTyping_typeBindings(threadData, _cls_node, _context);

          omc_ExecStat_execStat(threadData, _OMC_LIT110);

          _json = omc_NFApi_dumpJSONInstanceTree(threadData, _inst_tree, _cls_node, 1 /* true */, 0 /* false */, 0 /* false */);

          omc_ExecStat_execStat(threadData, _OMC_LIT111);

          tmpMeta6 = mmc_mk_box2(5, &Values_Value_STRING__desc, omc_JSON_toString(threadData, _json, _prettyPrint));
          _res = tmpMeta6;

          omc_ExecStat_execStat(threadData, _OMC_LIT112);

          omc_NFInst_clearCaches(threadData);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_NFInst_clearCaches(threadData);

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
  return _res;
}
modelica_metatype boxptr_NFApi_getModelInstance(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _contextPath, modelica_metatype _modifier, modelica_metatype _prettyPrint)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_integer(_prettyPrint);
  _res = omc_NFApi_getModelInstance(threadData, _classPath, _contextPath, _modifier, tmp1);
  /* skip box _res; Values.Value */
  return _res;
}

DLLDirection
modelica_metatype omc_NFApi_getInheritedClasses(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _program)
{
  modelica_metatype _extendsPaths = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _extendsPaths has no default value.
  // _cls_node has no default value.
  // _cls has no default value.
  if((!omc_Flags_isSet(threadData, _OMC_LIT116)))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _extendsPaths = tmpMeta1;

    goto _return;
  }

  omc_NFApi_frontEndLookup(threadData, _program, _classPath ,NULL ,&_cls_node);

  if((!omc_NFInstNode_InstNode_isClass(threadData, _cls_node)))
  {
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    _extendsPaths = tmpMeta2;

    goto _return;
  }

  _cls = omc_NFInstNode_InstNode_getClass(threadData, _cls_node);

  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _cls;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,4,7) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(omc_NFInstNode_InstNode_fullPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cls), 2))), 1 /* true */), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta3 = tmpMeta8;
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar43;
            modelica_metatype* tmp10;
            modelica_metatype tmpMeta11;
            modelica_metatype __omcQ_24tmpVar42;
            modelica_integer tmp12;
            modelica_metatype _e_loopVar = 0;
            modelica_integer tmp13;
            modelica_metatype _e;
            _e_loopVar = omc_NFClassTree_ClassTree_getExtends(threadData, omc_NFClass_classTree(threadData, _cls));
            tmp13 = 1;
            tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar43 = tmpMeta11; /* defaultValue */
            tmp10 = &__omcQ_24tmpVar43;
            while(1) {
              tmp12 = 1;
              if (tmp13 <= arrayLength(_e_loopVar)) {
                _e = arrayGet(_e_loopVar, tmp13++);
                tmp12--;
              }
              if (tmp12 == 0) {
                __omcQ_24tmpVar42 = omc_NFInstNode_InstNode_fullPath(threadData, _e, 1 /* true */);
                *tmp10 = mmc_mk_cons(__omcQ_24tmpVar42,0);
                tmp10 = &MMC_CDR(*tmp10);
              } else if (tmp12 == 1) {
                break;
              } else {
                goto goto_4;
              }
            }
            *tmp10 = mmc_mk_nil();
            tmpMeta9 = __omcQ_24tmpVar43;
          }
          tmpMeta3 = tmpMeta9;
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
  _extendsPaths = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _extendsPaths;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndLookup__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_expanded_cls)
{
  modelica_metatype _program = NULL;
  modelica_string _name = NULL;
  modelica_metatype _expanded_cls = NULL;
  modelica_metatype _scode_builtin = NULL;
  modelica_metatype _graphicProgramSCode = NULL;
  modelica_metatype _placementProgram = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _cache = NULL;
  modelica_boolean _update;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  // _name has no default value.
  // _expanded_cls has no default value.
  // _scode_builtin has no default value.
  // _graphicProgramSCode has no default value.
  // _placementProgram has no default value.
  // _top has no default value.
  // _cls has no default value.
  // _cache has no default value.
  _update = 1 /* true */;
  _name = omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT0, 1 /* true */, 0 /* false */);

  _program = omc_NFApi_mkTop(threadData, _absynProgram, _name ,&_top);

  if(omc_AbsynUtil_pathEqual(threadData, _classPath, _OMC_LIT118))
  {
    _expanded_cls = _top;
  }
  else
  {
    _cls = omc_NFInst_lookupRootClass(threadData, _classPath, _top, ((modelica_integer) 5));

    _expanded_cls = omc_NFInst_expand(threadData, _cls, ((modelica_integer) 5));
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT124))
  {
    tmpMeta1 = stringAppend(_OMC_LIT119,_name);
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT120);
    omc_ExecStat_execStat(threadData, tmpMeta2);
  }

  omc_NFInst_clearCaches(threadData);
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_expanded_cls) { *out_expanded_cls = _expanded_cls; }
  return _program;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndLookup(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_expanded_cls)
{
  modelica_metatype _program = NULL;
  modelica_string _name = NULL;
  modelica_metatype _expanded_cls = NULL;
  modelica_metatype _cache = NULL;
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
  // _program has no default value.
  // _name has no default value.
  // _expanded_cls has no default value.
  // _cache has no default value.
  _cache = getGlobalRoot(((modelica_integer) 12));

  if((!listEmpty(_cache)))
  {
    {
      modelica_metatype _i;
      for (tmpMeta1 = _cache; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _i = MMC_CAR(tmpMeta1);
        if(referenceEq(_absynProgram, omc_Util_tuple21(threadData, omc_Util_tuple21(threadData, _i))))
        {
          if(omc_AbsynUtil_pathEqual(threadData, _classPath, omc_Util_tuple22(threadData, omc_Util_tuple21(threadData, _i))))
          {
            /* Pattern-matching assignment */
            tmpMeta2 = omc_Util_tuple22(threadData, _i);
            tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
            tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
            tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
            _program = tmpMeta3;
            _name = tmpMeta4;
            _expanded_cls = tmpMeta5;

            goto _return;
          }

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _cache = tmpMeta6;

          setGlobalRoot(((modelica_integer) 12), _cache);

          break;
        }
        else
        {
          if(omc_AbsynUtil_pathEqual(threadData, _classPath, omc_Util_tuple22(threadData, omc_Util_tuple21(threadData, _i))))
          {
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            _cache = tmpMeta7;

            setGlobalRoot(((modelica_integer) 12), _cache);

            break;
          }
        }
      }
    }
  }

  _program = omc_NFApi_frontEndLookup__dispatch(threadData, _absynProgram, _classPath ,&_name ,&_expanded_cls);

  if((listLength(_cache) > ((modelica_integer) 100)))
  {
    _cache = omc_List_firstN(threadData, _cache, ((modelica_integer) 10));
  }

  tmpMeta10 = mmc_mk_box2(0, _absynProgram, _classPath);
  tmpMeta11 = mmc_mk_box3(0, _program, _name, _expanded_cls);
  tmpMeta12 = mmc_mk_box2(0, tmpMeta10, tmpMeta11);
  tmpMeta9 = mmc_mk_cons(tmpMeta12, _cache);
  _cache = tmpMeta9;

  setGlobalRoot(((modelica_integer) 12), _cache);
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_expanded_cls) { *out_expanded_cls = _expanded_cls; }
  return _program;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndBack(threadData_t *threadData, modelica_metatype _inst_cls, modelica_string _name, modelica_boolean _scalarize)
{
  modelica_metatype _dae = NULL;
  modelica_metatype _top = NULL;
  modelica_string _clsName = NULL;
  modelica_string _annName = NULL;
  modelica_string _str = NULL;
  modelica_metatype _flat_model = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _scode_builtin = NULL;
  modelica_metatype _program = NULL;
  modelica_metatype _graphicProgramSCode = NULL;
  modelica_metatype _scls = NULL;
  modelica_metatype _sAnnCls = NULL;
  modelica_metatype _placementProgram = NULL;
  modelica_metatype _daeFuncs = NULL;
  modelica_metatype _fullClassPath = NULL;
  modelica_metatype _elArgs = NULL;
  modelica_metatype _el = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _stringLst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _absynExp = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _dexp = NULL;
  modelica_metatype _items = NULL;
  modelica_metatype _cc = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _smod = NULL;
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
  // _dae has no default value.
  // _top has no default value.
  // _clsName has no default value.
  // _annName has no default value.
  // _str has no default value.
  // _flat_model has no default value.
  // _funcs has no default value.
  // _scode_builtin has no default value.
  // _program has no default value.
  // _graphicProgramSCode has no default value.
  // _scls has no default value.
  // _sAnnCls has no default value.
  // _placementProgram has no default value.
  // _daeFuncs has no default value.
  // _fullClassPath has no default value.
  // _elArgs has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _el = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringLst = tmpMeta2;
  // _absynExp has no default value.
  // _exp has no default value.
  // _dexp has no default value.
  // _items has no default value.
  // _cc has no default value.
  // _info has no default value.
  // _mod has no default value.
  // _smod has no default value.
  omc_NFTyping_typeClass(threadData, _inst_cls, ((modelica_integer) 1));

  tmpMeta3 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _name);
  _flat_model = omc_NFFlatten_flatten(threadData, _inst_cls, tmpMeta3, 1 /* true */);

  _flat_model = omc_NFEvalConstants_evaluate(threadData, _flat_model, ((modelica_integer) 1));

  _flat_model = omc_NFUnitCheck_checkUnits(threadData, _flat_model);

  _flat_model = omc_NFSimplifyModel_simplify(threadData, _flat_model);

  _flat_model = omc_NFPackage_collectConstants(threadData, _flat_model);

  _funcs = omc_NFFlatten_collectFunctions(threadData, _flat_model);

  if(omc_Flags_isSet(threadData, _OMC_LIT128))
  {
    _flat_model = omc_NFScalarize_scalarize(threadData, _flat_model);
  }
  else
  {
    tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(9));
    memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_flat_model), 9*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[3] = omc_List_filterOnFalse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flat_model), 3))), boxvar_NFVariable_isEmptyArray);
    _flat_model = tmpMeta4;
  }

  omc_NFVerifyModel_verify(threadData, _flat_model, omc_NFInstNode_InstNode_isPartial(threadData, _inst_cls));

  _dae = omc_NFConvertDAE_convert(threadData, _flat_model, _funcs ,&_daeFuncs);

  if(omc_Flags_isSet(threadData, _OMC_LIT124))
  {
    tmpMeta5 = stringAppend(_OMC_LIT129,omc_AbsynUtil_pathString(threadData, omc_NFInstNode_InstNode_enclosingScopePath(threadData, _inst_cls, 0 /* false */, 0 /* false */), _OMC_LIT0, 1 /* true */, 0 /* false */));
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT130);
    tmpMeta7 = stringAppend(tmpMeta6,_name);
    tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT131);
    tmpMeta9 = stringAppend(tmpMeta8,(_scalarize?_OMC_LIT132:_OMC_LIT133));
    tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT120);
    omc_ExecStat_execStat(threadData, tmpMeta10);
  }
  _return: OMC_LABEL_UNUSED
  return _dae;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFApi_frontEndBack(threadData_t *threadData, modelica_metatype _inst_cls, modelica_metatype _name, modelica_metatype _scalarize)
{
  modelica_integer tmp1;
  modelica_metatype _dae = NULL;
  tmp1 = mmc_unbox_integer(_scalarize);
  _dae = omc_NFApi_frontEndBack(threadData, _inst_cls, _name, tmp1);
  /* skip box _dae; DAE.DAElist */
  return _dae;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndFront__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_inst_cls)
{
  modelica_metatype _program = NULL;
  modelica_string _name = NULL;
  modelica_metatype _inst_cls = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  // _name has no default value.
  // _inst_cls has no default value.
  // _top has no default value.
  // _cls has no default value.
  _name = omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT0, 1 /* true */, 0 /* false */);

  _program = omc_NFApi_mkTop(threadData, _absynProgram, _name ,&_top);

  _cls = omc_NFLookup_lookupClassName(threadData, _classPath, _top, ((modelica_integer) 1), _OMC_LIT7, 0 /* false */);

  _cls = omc_NFInstNode_InstNode_makeRootClass(threadData, _cls, _OMC_LIT8, mmc_mk_none());

  _inst_cls = omc_NFInst_instantiate(threadData, _cls, _OMC_LIT89, _OMC_LIT8, ((modelica_integer) 1), 0 /* false */);

  omc_NFInst_insertGeneratedInners(threadData, _inst_cls, _top, ((modelica_integer) 1));

  omc_NFInst_instExpressions(threadData, _inst_cls, _inst_cls, _OMC_LIT90, omc_NFConnectBreakTree_new(threadData), ((modelica_integer) 1), _OMC_LIT91);

  omc_NFInst_updateImplicitVariability(threadData, _inst_cls, omc_Flags_isSet(threadData, _OMC_LIT106), ((modelica_integer) 1));

  if(omc_Flags_isSet(threadData, _OMC_LIT124))
  {
    tmpMeta1 = stringAppend(_OMC_LIT134,_name);
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT120);
    omc_ExecStat_execStat(threadData, tmpMeta2);
  }

  omc_NFInst_clearCaches(threadData);
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_inst_cls) { *out_inst_cls = _inst_cls; }
  return _program;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_mkTop(threadData_t *threadData, modelica_metatype _absynProgram, modelica_string _name, modelica_metatype *out_top)
{
  modelica_metatype _program = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _scode_builtin = NULL;
  modelica_metatype _graphicProgramSCode = NULL;
  modelica_metatype _placementProgram = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _cache = NULL;
  modelica_boolean _update;
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
  // _program has no default value.
  // _top has no default value.
  // _scode_builtin has no default value.
  // _graphicProgramSCode has no default value.
  // _placementProgram has no default value.
  // _cls has no default value.
  // _cache has no default value.
  _update = 1 /* true */;
  _cache = getGlobalRoot(((modelica_integer) 11));

  if((!listEmpty(_cache)))
  {
    if(referenceEq(_absynProgram, omc_Util_tuple21(threadData, listHead(_cache))))
    {
      /* Pattern-matching assignment */
      tmpMeta1 = omc_Util_tuple22(threadData, listHead(_cache));
      tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
      _program = tmpMeta2;
      _top = tmpMeta3;

      omc_NFInstNode_InstNode_clearGeneratedInners(threadData, _top);

      _update = 0 /* false */;
    }
    else
    {
      _update = 1 /* true */;

      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _cache = tmpMeta4;

      setGlobalRoot(((modelica_integer) 11), _cache);
    }
  }

  if(_update)
  {
    omc_FBuiltin_getInitialFunctions(threadData ,&_scode_builtin);

    _program = omc_AbsynToSCode_translateAbsyn2SCode(threadData, _absynProgram);

    _program = listAppend(_scode_builtin, _program);

    _placementProgram = omc_InteractiveUtil_modelicaAnnotationProgram(threadData, omc_Config_getAnnotationVersion(threadData));

    _graphicProgramSCode = omc_AbsynToSCode_translateAbsyn2SCode(threadData, _placementProgram);

    omc_NFInst_resetGlobalFlags(threadData);

    _top = omc_NFInst_makeTopNode(threadData, _program, _graphicProgramSCode);

    if(omc_Flags_isSet(threadData, _OMC_LIT124))
    {
      tmpMeta5 = stringAppend(_OMC_LIT135,_name);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT120);
      omc_ExecStat_execStat(threadData, tmpMeta6);
    }

    tmpMeta8 = mmc_mk_box2(0, _program, _top);
    tmpMeta9 = mmc_mk_box2(0, _absynProgram, tmpMeta8);
    tmpMeta7 = mmc_mk_cons(tmpMeta9, MMC_REFSTRUCTLIT(mmc_nil));
    _cache = tmpMeta7;

    setGlobalRoot(((modelica_integer) 11), _cache);
  }
  _return: OMC_LABEL_UNUSED
  if (out_top) { *out_top = _top; }
  return _program;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_frontEndFront(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_string *out_name, modelica_metatype *out_inst_cls)
{
  modelica_metatype _program = NULL;
  modelica_string _name = NULL;
  modelica_metatype _inst_cls = NULL;
  modelica_metatype _cache = NULL;
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
  // _program has no default value.
  // _name has no default value.
  // _inst_cls has no default value.
  // _cache has no default value.
  _cache = getGlobalRoot(((modelica_integer) 10));

  if((!listEmpty(_cache)))
  {
    {
      modelica_metatype _i;
      for (tmpMeta1 = _cache; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _i = MMC_CAR(tmpMeta1);
        if(referenceEq(_absynProgram, omc_Util_tuple21(threadData, omc_Util_tuple21(threadData, _i))))
        {
          if(omc_AbsynUtil_pathEqual(threadData, _classPath, omc_Util_tuple22(threadData, omc_Util_tuple21(threadData, _i))))
          {
            /* Pattern-matching assignment */
            tmpMeta2 = omc_Util_tuple22(threadData, _i);
            tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
            tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
            tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
            _program = tmpMeta3;
            _name = tmpMeta4;
            _inst_cls = tmpMeta5;

            goto _return;
          }

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _cache = tmpMeta6;

          setGlobalRoot(((modelica_integer) 10), _cache);

          break;
        }
        else
        {
          if(omc_AbsynUtil_pathEqual(threadData, _classPath, omc_Util_tuple22(threadData, omc_Util_tuple21(threadData, _i))))
          {
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            _cache = tmpMeta7;

            setGlobalRoot(((modelica_integer) 10), _cache);

            break;
          }
        }
      }
    }
  }

  _program = omc_NFApi_frontEndFront__dispatch(threadData, _absynProgram, _classPath ,&_name ,&_inst_cls);

  if((listLength(_cache) > ((modelica_integer) 100)))
  {
    _cache = omc_List_firstN(threadData, _cache, ((modelica_integer) 10));
  }

  tmpMeta10 = mmc_mk_box2(0, _absynProgram, _classPath);
  tmpMeta11 = mmc_mk_box3(0, _program, _name, _inst_cls);
  tmpMeta12 = mmc_mk_box2(0, tmpMeta10, tmpMeta11);
  tmpMeta9 = mmc_mk_cons(tmpMeta12, _cache);
  _cache = tmpMeta9;

  setGlobalRoot(((modelica_integer) 10), _cache);
  _return: OMC_LABEL_UNUSED
  if (out_name) { *out_name = _name; }
  if (out_inst_cls) { *out_inst_cls = _inst_cls; }
  return _program;
}

DLLDirection
modelica_metatype omc_NFApi_mkFullyQual(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _pathToQualify, modelica_boolean _failOnError)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _qualPath = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _expanded_cls = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _program = NULL;
  modelica_string _name = NULL;
  modelica_string _id1 = NULL;
  modelica_string _id2 = NULL;
  modelica_boolean _b;
  modelica_boolean _s;
  modelica_integer _context;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _qualPath = _pathToQualify;
  // _top has no default value.
  // _expanded_cls has no default value.
  // _cls has no default value.
  // _program has no default value.
  // _name has no default value.
  // _id1 has no default value.
  // _id2 has no default value.
  // _b has no default value.
  // _s has no default value.
  // _context has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _classPath;
    tmp3_2 = _pathToQualify;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,0,2) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 2));
          
          _id1 = tmpMeta5;
          _id2 = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_id1, _id2))) goto tmp2_end;
          goto _return;
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

  _b = omc_FlagsUtil_set(threadData, _OMC_LIT116, 1 /* true */);

  _s = omc_FlagsUtil_set(threadData, _OMC_LIT128, 1 /* true */);

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp8_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          /* Pattern matching succeeded */
          if((!omc_Flags_isSet(threadData, _OMC_LIT140)))
          {
            omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT136);
          }

          _program = omc_NFApi_frontEndLookup(threadData, _absynProgram, _classPath ,&_name ,&_expanded_cls);

          _context = omc_NFInstContext_set(threadData, ((modelica_integer) 1), ((modelica_integer) 4));

          if(omc_NFInstNode_InstNode_isDerivedClass(threadData, _expanded_cls))
          {
            _cls = omc_NFLookup_lookupClassName(threadData, _pathToQualify, omc_NFInstNode_InstNode_classParent(threadData, _expanded_cls), _context, _OMC_LIT7, 0 /* false */);
          }
          else
          {
            _cls = omc_NFLookup_lookupClassName(threadData, _pathToQualify, _expanded_cls, _context, _OMC_LIT7, 0 /* false */);
          }

          _qualPath = omc_NFInstNode_InstNode_fullPath(threadData, _cls, 0 /* false */);

          if((!omc_Flags_isSet(threadData, _OMC_LIT140)))
          {
            omc_ErrorExt_rollBack(threadData, _OMC_LIT136);
          }

          omc_FlagsUtil_set(threadData, _OMC_LIT116, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT128, _s);
          goto tmp8_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          if((!omc_Flags_isSet(threadData, _OMC_LIT140)))
          {
            omc_ErrorExt_rollBack(threadData, _OMC_LIT136);
          }

          omc_FlagsUtil_set(threadData, _OMC_LIT116, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT128, _s);

          if(_failOnError)
          {
            goto goto_7;
          }
          else
          {
            _qualPath = _pathToQualify;
          }
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      tmp8_done:
      (void)tmp9;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp8_done2;
      goto_7:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp9 < 2) {
        goto tmp8_top;
      }
      MMC_THROW_INTERNAL();
      tmp8_done2:;
    }
  }
  ;

  if(omc_Flags_isSet(threadData, _OMC_LIT124))
  {
    tmpMeta11 = stringAppend(_OMC_LIT141,omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT0, 1 /* true */, 0 /* false */));
    tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT142);
    tmpMeta13 = stringAppend(tmpMeta12,omc_AbsynUtil_pathString(threadData, _pathToQualify, _OMC_LIT0, 1 /* true */, 0 /* false */));
    tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT143);
    tmpMeta15 = stringAppend(tmpMeta14,omc_AbsynUtil_pathString(threadData, _qualPath, _OMC_LIT0, 1 /* true */, 0 /* false */));
    omc_ExecStat_execStat(threadData, tmpMeta15);
  }
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _qualPath;
}
modelica_metatype boxptr_NFApi_mkFullyQual(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _pathToQualify, modelica_metatype _failOnError)
{
  modelica_integer tmp1;
  modelica_metatype _qualPath = NULL;
  tmp1 = mmc_unbox_integer(_failOnError);
  _qualPath = omc_NFApi_mkFullyQual(threadData, _absynProgram, _classPath, _pathToQualify, tmp1);
  /* skip box _qualPath; Absyn.Path */
  return _qualPath;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFApi_evaluateAnnotations__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inElements)
{
  modelica_metatype _outStringLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _top = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _inst_cls = NULL;
  modelica_metatype _anncls = NULL;
  modelica_metatype _inst_anncls = NULL;
  modelica_string _name = NULL;
  modelica_string _clsName = NULL;
  modelica_string _annName = NULL;
  modelica_string _str = NULL;
  modelica_metatype _flat_model = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _program = NULL;
  modelica_metatype _daeFuncs = NULL;
  modelica_metatype _fullClassPath = NULL;
  modelica_metatype _elArgs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _el = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _stringLst = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _absynExp = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _dexp = NULL;
  modelica_metatype _items = NULL;
  modelica_metatype _cc = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _anns = NULL;
  modelica_metatype _eqmod = NULL;
  modelica_metatype _smod = NULL;
  modelica_metatype _dae = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _var;
  modelica_metatype _cmt = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
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
  modelica_metatype tmpMeta51;
  modelica_metatype tmpMeta52;
  modelica_metatype tmpMeta53;
  modelica_metatype tmpMeta54;
  modelica_metatype tmpMeta55;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outStringLst = tmpMeta1;
  // _top has no default value.
  // _cls has no default value.
  // _inst_cls has no default value.
  // _anncls has no default value.
  // _inst_anncls has no default value.
  // _name has no default value.
  // _clsName has no default value.
  // _annName has no default value.
  // _str has no default value.
  // _flat_model has no default value.
  // _funcs has no default value.
  // _program has no default value.
  // _daeFuncs has no default value.
  // _fullClassPath has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _elArgs = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _el = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringLst = tmpMeta4;
  // _absynExp has no default value.
  // _exp has no default value.
  // _dexp has no default value.
  // _items has no default value.
  // _cc has no default value.
  // _info has no default value.
  // _mod has no default value.
  // _anns has no default value.
  // _eqmod has no default value.
  // _smod has no default value.
  // _dae has no default value.
  // _ty has no default value.
  // _var has no default value.
  // _cmt has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta5 = _inElements; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _i = MMC_CAR(tmpMeta5);
      { /* matchcontinue expression */
        volatile modelica_metatype tmp9_1;
        tmp9_1 = _i;
        {
          volatile mmc_switch_type tmp9;
          int tmp10;
          tmp9 = 0;
          MMC_TRY_INTERNAL(mmc_jumper)
          tmp8_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp9 < 6; tmp9++) {
            switch (MMC_SWITCH_CAST(tmp9)) {
            case 0: {
              modelica_metatype tmpMeta11;
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,6) == 0) goto tmp8_end;
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 5));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,3) == 0) goto tmp8_end;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 4));
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 7));
              _items = tmpMeta12;
              _cc = tmpMeta13;
              /* Pattern matching succeeded */
              _el = omc_AbsynUtil_getAnnotationsFromItems(threadData, _items, omc_AbsynUtil_getAnnotationsFromConstraintClass(threadData, _cc));
              tmpMeta6 = listAppend(_el, _elArgs);
              goto tmp8_done;
            }
            case 1: {
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              modelica_metatype tmpMeta16;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,6) == 0) goto tmp8_end;
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 5));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,3,3) == 0) goto tmp8_end;
              
              tmp9 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
              tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta15 = mmc_mk_cons(tmpMeta16, _elArgs);
              tmpMeta6 = tmpMeta15;
              goto tmp8_done;
            }
            case 2: {
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta32;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,6) == 0) goto tmp8_end;
              tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 5));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,2) == 0) goto tmp8_end;
              tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 3));
              tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 7));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,1,4) == 0) goto tmp8_end;
              tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 5));
              tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 7));
              _cmt = tmpMeta20;
              _cc = tmpMeta21;
              tmp9 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
              { /* match expression */
                modelica_metatype tmp25_1;
                tmp25_1 = _cmt;
                {
                  volatile mmc_switch_type tmp25;
                  int tmp26;
                  tmp25 = 0;
                  for (; tmp25 < 2; tmp25++) {
                    switch (MMC_SWITCH_CAST(tmp25)) {
                    case 0: {
                      modelica_metatype tmpMeta27;
                      modelica_metatype tmpMeta28;
                      modelica_metatype tmpMeta29;
                      modelica_metatype tmpMeta30;
                      if (optionNone(tmp25_1)) goto tmp24_end;
                      tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp25_1), 1));
                      tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
                      if (optionNone(tmpMeta28)) goto tmp24_end;
                      tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 1));
                      tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
                      
                      _anns = tmpMeta30;
                      /* Pattern matching succeeded */
                      tmpMeta22 = _anns;
                      goto tmp24_done;
                    }
                    case 1: {
                      modelica_metatype tmpMeta31;
                      
                      /* Pattern matching succeeded */
                      tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
                      tmpMeta22 = tmpMeta31;
                      goto tmp24_done;
                    }
                    }
                    goto tmp24_end;
                    tmp24_end: ;
                  }
                  goto goto_23;
                  goto_23:;
                  goto goto_7;
                  goto tmp24_done;
                  tmp24_done:;
                }
              }
              _anns = tmpMeta22;
              tmpMeta32 = mmc_mk_cons(listAppend(_anns, omc_AbsynUtil_getAnnotationsFromConstraintClass(threadData, _cc)), _elArgs);
              tmpMeta6 = tmpMeta32;
              goto tmp8_done;
            }
            case 3: {
              modelica_metatype tmpMeta33;
              modelica_metatype tmpMeta34;
              modelica_metatype tmpMeta35;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,6) == 0) goto tmp8_end;
              tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 5));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,3,3) == 0) goto tmp8_end;
              
              tmp9 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
              tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta34 = mmc_mk_cons(tmpMeta35, _elArgs);
              tmpMeta6 = tmpMeta34;
              goto tmp8_done;
            }
            case 4: {
              modelica_metatype tmpMeta36;
              modelica_metatype tmpMeta37;
              modelica_metatype tmpMeta38;
              modelica_metatype tmpMeta39;
              modelica_metatype tmpMeta40;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,6) == 0) goto tmp8_end;
              tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 5));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta36,0,2) == 0) goto tmp8_end;
              tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 3));
              tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 7));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,1,4) == 0) goto tmp8_end;
              
              /* Pattern matching succeeded */
              tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta39 = mmc_mk_cons(tmpMeta40, _elArgs);
              tmpMeta6 = tmpMeta39;
              goto tmp8_done;
            }
            case 5: {
              
              /* Pattern matching succeeded */
              tmpMeta6 = _elArgs;
              goto tmp8_done;
            }
            }
            goto tmp8_end;
            tmp8_end: ;
          }
          goto goto_7;
          tmp8_done:
          (void)tmp9;
          MMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp8_done2;
          goto_7:;
          MMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp9 < 6) {
            goto tmp8_top;
          }
          MMC_THROW_INTERNAL();
          tmp8_done2:;
        }
      }
      _elArgs = tmpMeta6;
    }
  }

  {
    modelica_metatype _l;
    for (tmpMeta42 = _elArgs; !listEmpty(tmpMeta42); tmpMeta42=MMC_CDR(tmpMeta42))
    {
      _l = MMC_CAR(tmpMeta42);
      tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
      _stringLst = tmpMeta43;

      {
        modelica_metatype _e;
        for (tmpMeta44 = listReverse(_l); !listEmpty(tmpMeta44); tmpMeta44=MMC_CDR(tmpMeta44))
        {
          _e = MMC_CAR(tmpMeta44);
          tmpMeta45 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta46 = mmc_mk_box2(3, &Absyn_Annotation_ANNOTATION__desc, tmpMeta45);
          _str = omc_NFApi_evaluateAnnotation__dispatch(threadData, _absynProgram, _classPath, tmpMeta46, 1 /* true */);

          tmpMeta47 = mmc_mk_cons(_str, _stringLst);
          _stringLst = tmpMeta47;
        }
      }

      _str = stringDelimitList(_stringLst, _OMC_LIT142);

      tmpMeta50 = mmc_mk_cons(_OMC_LIT144, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT145, MMC_REFSTRUCTLIT(mmc_nil))));
      tmpMeta49 = mmc_mk_cons(stringAppendList(tmpMeta50), _outStringLst);
      _outStringLst = tmpMeta49;
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT124))
  {
    tmpMeta52 = stringAppend(_OMC_LIT146,omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT0, 1 /* true */, 0 /* false */));
    tmpMeta53 = stringAppend(tmpMeta52,_OMC_LIT147);
    tmpMeta54 = stringAppend(tmpMeta53,stringDelimitList(omc_List_map(threadData, omc_List_flatten(threadData, _elArgs), boxvar_Dump_unparseElementArgStr), _OMC_LIT142));
    tmpMeta55 = stringAppend(tmpMeta54,_OMC_LIT120);
    omc_ExecStat_execStat(threadData, tmpMeta55);
  }
  _return: OMC_LABEL_UNUSED
  return _outStringLst;
}

DLLDirection
modelica_metatype omc_NFApi_evaluateAnnotations(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inElements)
{
  modelica_metatype _outStringLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _b;
  modelica_boolean _s;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outStringLst = tmpMeta1;
  // _b has no default value.
  // _s has no default value.
  _b = omc_FlagsUtil_set(threadData, _OMC_LIT116, 1 /* true */);

  _s = omc_FlagsUtil_set(threadData, _OMC_LIT128, 1 /* true */);

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
          _outStringLst = omc_NFApi_evaluateAnnotations__dispatch(threadData, _absynProgram, _classPath, _inElements);

          omc_FlagsUtil_set(threadData, _OMC_LIT116, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT128, _s);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_FlagsUtil_set(threadData, _OMC_LIT116, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT128, _s);

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
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _outStringLst;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NFApi_evaluateAnnotation__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inAnnotation, modelica_boolean _addAnnotationName)
{
  modelica_string _outString = NULL;
  modelica_metatype _top = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _inst_cls = NULL;
  modelica_metatype _anncls = NULL;
  modelica_metatype _inst_anncls = NULL;
  modelica_string _name = NULL;
  modelica_string _clsName = NULL;
  modelica_string _annName = NULL;
  modelica_string _str = NULL;
  modelica_metatype _flat_model = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _program = NULL;
  modelica_metatype _daeFuncs = NULL;
  modelica_metatype _fullClassPath = NULL;
  modelica_metatype _el = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _stringLst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _absynExp = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _save = NULL;
  modelica_metatype _dexp = NULL;
  modelica_metatype _items = NULL;
  modelica_metatype _cc = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _stripped_mod = NULL;
  modelica_metatype _graphics_mod = NULL;
  modelica_metatype _eqmod = NULL;
  modelica_metatype _smod = NULL;
  modelica_metatype _dae = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _var;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7 = 0;
  modelica_metatype tmpMeta65;
  modelica_metatype tmpMeta66;
  modelica_metatype tmpMeta67;
  modelica_metatype tmpMeta68;
  modelica_metatype tmpMeta69;
  modelica_metatype tmpMeta70;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outString = _OMC_LIT5;
  // _top has no default value.
  // _cls has no default value.
  // _inst_cls has no default value.
  // _anncls has no default value.
  // _inst_anncls has no default value.
  // _name has no default value.
  // _clsName has no default value.
  // _annName has no default value.
  // _str has no default value.
  // _flat_model has no default value.
  // _funcs has no default value.
  // _program has no default value.
  // _daeFuncs has no default value.
  // _fullClassPath has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _el = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringLst = tmpMeta2;
  // _absynExp has no default value.
  // _exp has no default value.
  // _save has no default value.
  // _dexp has no default value.
  // _items has no default value.
  // _cc has no default value.
  // _info has no default value.
  // _mod has no default value.
  // _stripped_mod has no default value.
  // _graphics_mod has no default value.
  // _eqmod has no default value.
  // _smod has no default value.
  // _dae has no default value.
  // _ty has no default value.
  // _var has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _stringLst = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _inAnnotation;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  _el = tmpMeta5;

  {
    modelica_metatype _e;
    for (tmpMeta6 = listReverse(_el); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _e = MMC_CAR(tmpMeta6);
      _e = omc_AbsynUtil_createChoiceArray(threadData, _e);

      { /* matchcontinue expression */
        volatile modelica_metatype tmp10_1;
        tmp10_1 = _e;
        {
          volatile mmc_switch_type tmp10;
          int tmp11;
          tmp10 = 0;
          MMC_TRY_INTERNAL(mmc_jumper)
          tmp9_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp10 < 4; tmp10++) {
            switch (MMC_SWITCH_CAST(tmp10)) {
            case 0: {
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              modelica_metatype tmpMeta16;
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_metatype tmpMeta20;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,6) == 0) goto tmp9_end;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 4));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,1) == 0) goto tmp9_end;
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 5));
              if (optionNone(tmpMeta14)) goto tmp9_end;
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
              tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
              if (!listEmpty(tmpMeta16)) goto tmp9_end;
              tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 3));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,1,2) == 0) goto tmp9_end;
              tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
              tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 7));
              _annName = tmpMeta13;
              _eqmod = tmpMeta17;
              _absynExp = tmpMeta18;
              _info = tmpMeta19;
              tmp10 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
              if(omc_AbsynUtil_onlyLiteralsInEqMod(threadData, _eqmod))
              {
                _program = omc_NFApi_mkTop(threadData, _absynProgram, _annName ,&_top);

                _inst_cls = _top;
              }
              else
              {
                _program = omc_NFApi_frontEndFront(threadData, _absynProgram, _classPath ,&_name ,&_inst_cls);
              }

              _exp = omc_NFInst_instExp(threadData, _absynExp, _inst_cls, ((modelica_integer) 67108865), _info);

              _exp = omc_NFTyping_typeExp(threadData, _exp, ((modelica_integer) 67108865), _info, 0 /* false */ ,&_ty ,&_var, NULL);

              _exp = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);

              _str = omc_NFExpression_toString(threadData, _exp);
              tmpMeta20 = mmc_mk_cons(_annName, mmc_mk_cons(_OMC_LIT148, mmc_mk_cons(_str, MMC_REFSTRUCTLIT(mmc_nil))));
              tmp7 = stringAppendList(tmpMeta20);
              goto tmp9_done;
            }
            case 1: {
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
              modelica_metatype tmpMeta48;
              modelica_boolean tmp49;
              modelica_string tmp50;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,6) == 0) goto tmp9_end;
              tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 4));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,1,1) == 0) goto tmp9_end;
              tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
              tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 5));
              if (optionNone(tmpMeta23)) goto tmp9_end;
              tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
              tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
              tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 3));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,0) == 0) goto tmp9_end;
              tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 7));
              _annName = tmpMeta22;
              _mod = tmpMeta25;
              _info = tmpMeta27;
              tmp10 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
              if(omc_AbsynUtil_onlyLiteralsInAnnotationMod(threadData, _mod))
              {
                _program = omc_NFApi_mkTop(threadData, _absynProgram, _annName ,&_top);

                _inst_cls = _top;
              }
              else
              {
                _program = omc_NFApi_frontEndFront(threadData, _absynProgram, _classPath ,&_name ,&_inst_cls);
              }

              _stripped_mod = omc_AbsynUtil_stripGraphicsAndInteractionModification(threadData, _mod ,&_graphics_mod);

              tmpMeta28 = mmc_mk_box3(3, &Absyn_Modification_CLASSMOD__desc, _stripped_mod, _OMC_LIT149);
              _smod = omc_AbsynToSCode_translateMod(threadData, mmc_mk_some(tmpMeta28), _OMC_LIT3, _OMC_LIT4, mmc_mk_none(), _info, 0 /* false */);

              tmpMeta29 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _annName);
              _anncls = omc_NFLookup_lookupClassName(threadData, tmpMeta29, _inst_cls, ((modelica_integer) 67108865), _OMC_LIT7, 0 /* false */);

              _inst_anncls = omc_NFInst_expand(threadData, _anncls, ((modelica_integer) 67108865));

              tmpMeta30 = mmc_mk_box2(4, &NFModifier_ModifierScope_CLASS__desc, _annName);
              _inst_anncls = omc_NFInst_instClass(threadData, _inst_anncls, omc_NFModifier_Modifier_create(threadData, _smod, _annName, tmpMeta30, _inst_cls), _OMC_LIT151, 1 /* true */, ((modelica_integer) 0), _inst_cls, ((modelica_integer) 67108865), NULL);

              omc_NFInst_instExpressions(threadData, _inst_anncls, _inst_anncls, _OMC_LIT90, omc_NFConnectBreakTree_new(threadData), ((modelica_integer) 67108865), _OMC_LIT91);

              omc_NFInst_updateImplicitVariability(threadData, _inst_anncls, omc_Flags_isSet(threadData, _OMC_LIT106), ((modelica_integer) 67108865));

              _dae = omc_NFApi_frontEndBack(threadData, _inst_anncls, _annName, 0 /* false */);

              _str = omc_DAEUtil_getVariableBindingsStr(threadData, omc_DAEUtil_daeElements(threadData, _dae));

              if((listMember(_annName, _OMC_LIT158) && (!listEmpty(_graphics_mod))))
              {
                { /* matchcontinue expression */
                  {
                    volatile mmc_switch_type tmp33;
                    int tmp34;
                    tmp33 = 0;
                    MMC_TRY_INTERNAL(mmc_jumper)
                    tmp32_top:
                    threadData->mmc_jumper = &new_mmc_jumper;
                    for (; tmp33 < 2; tmp33++) {
                      switch (MMC_SWITCH_CAST(tmp33)) {
                      case 0: {
                        modelica_metatype tmpMeta35;
                        modelica_metatype tmpMeta36;
                        modelica_metatype tmpMeta37;
                        modelica_metatype tmpMeta38;
                        modelica_metatype tmpMeta39;
                        modelica_metatype tmpMeta40;
                        modelica_metatype tmpMeta41;
                        modelica_metatype tmpMeta46;
                        modelica_metatype tmpMeta47;
                        /* Pattern matching succeeded */
                        /* Pattern-matching assignment */
                        tmpMeta35 = _graphics_mod;
                        if (listEmpty(tmpMeta35)) goto goto_31;
                        tmpMeta36 = MMC_CAR(tmpMeta35);
                        tmpMeta37 = MMC_CDR(tmpMeta35);
                        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta36,0,6) == 0) goto goto_31;
                        tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 5));
                        if (optionNone(tmpMeta38)) goto goto_31;
                        tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 1));
                        tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 3));
                        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,1,2) == 0) goto goto_31;
                        tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 2));
                        if (!listEmpty(tmpMeta37)) goto goto_31;
                        _absynExp = tmpMeta41;

                        _exp = omc_NFInst_instExp(threadData, _absynExp, _inst_cls, ((modelica_integer) 67108865), _info);

                        _exp = omc_NFTyping_typeExp(threadData, _exp, ((modelica_integer) 67108865), _info, 0 /* false */ ,&_ty ,&_var, NULL);

                        _save = _exp;

                        { /* matchcontinue expression */
                          {
                            volatile mmc_switch_type tmp44;
                            int tmp45;
                            tmp44 = 0;
                            MMC_TRY_INTERNAL(mmc_jumper)
                            tmp43_top:
                            threadData->mmc_jumper = &new_mmc_jumper;
                            for (; tmp44 < 2; tmp44++) {
                              switch (MMC_SWITCH_CAST(tmp44)) {
                              case 0: {
                                /* Pattern matching succeeded */
                                _exp = omc_NFCeval_evalExp(threadData, _save, _OMC_LIT152);
                                goto tmp43_done;
                              }
                              case 1: {
                                /* Pattern matching succeeded */
                                _exp = omc_NFEvalConstants_evaluateExp(threadData, _save, _info);
                                goto tmp43_done;
                              }
                              }
                              goto tmp43_end;
                              tmp43_end: ;
                            }
                            goto goto_42;
                            tmp43_done:
                            (void)tmp44;
                            MMC_RESTORE_INTERNAL(mmc_jumper);
                            goto tmp43_done2;
                            goto_42:;
                            MMC_CATCH_INTERNAL(mmc_jumper);
                            if (++tmp44 < 2) {
                              goto tmp43_top;
                            }
                            goto goto_31;
                            tmp43_done2:;
                          }
                        }
                        ;

                        _exp = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);

                        tmpMeta46 = stringAppend(_str,_OMC_LIT153);
                        tmpMeta47 = stringAppend(tmpMeta46,omc_NFExpression_toString(threadData, _exp));
                        _str = tmpMeta47;
                        goto tmp32_done;
                      }
                      case 1: {
                        /* Pattern matching succeeded */
                        goto tmp32_done;
                      }
                      }
                      goto tmp32_end;
                      tmp32_end: ;
                    }
                    goto goto_31;
                    tmp32_done:
                    (void)tmp33;
                    MMC_RESTORE_INTERNAL(mmc_jumper);
                    goto tmp32_done2;
                    goto_31:;
                    MMC_CATCH_INTERNAL(mmc_jumper);
                    if (++tmp33 < 2) {
                      goto tmp32_top;
                    }
                    goto goto_8;
                    tmp32_done2:;
                  }
                }
                ;
              }
              tmp49 = (modelica_boolean)_addAnnotationName;
              if(tmp49)
              {
                tmpMeta48 = mmc_mk_cons(_annName, mmc_mk_cons(_OMC_LIT159, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT120, MMC_REFSTRUCTLIT(mmc_nil)))));
                tmp50 = stringAppendList(tmpMeta48);
              }
              else
              {
                tmp50 = _str;
              }
              tmp7 = tmp50;
              goto tmp9_done;
            }
            case 2: {
              modelica_metatype tmpMeta51;
              modelica_metatype tmpMeta52;
              modelica_metatype tmpMeta53;
              modelica_metatype tmpMeta54;
              modelica_metatype tmpMeta55;
              modelica_metatype tmpMeta56;
              modelica_boolean tmp57;
              modelica_string tmp58;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,6) == 0) goto tmp9_end;
              tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 4));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta51,1,1) == 0) goto tmp9_end;
              tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 2));
              tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 5));
              if (!optionNone(tmpMeta53)) goto tmp9_end;
              tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 7));
              _annName = tmpMeta52;
              _info = tmpMeta54;
              /* Pattern matching succeeded */
              _program = omc_NFApi_mkTop(threadData, _absynProgram, _annName ,&_top);

              _inst_cls = _top;

              tmpMeta55 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _annName);
              _anncls = omc_NFLookup_lookupClassName(threadData, tmpMeta55, _inst_cls, ((modelica_integer) 67108865), _OMC_LIT7, 0 /* false */);

              _inst_anncls = omc_NFInst_instantiate(threadData, _anncls, _OMC_LIT89, _OMC_LIT8, ((modelica_integer) 67108865), 0 /* false */);

              omc_NFInst_instExpressions(threadData, _inst_anncls, _inst_anncls, _OMC_LIT90, omc_NFConnectBreakTree_new(threadData), ((modelica_integer) 67108865), _OMC_LIT91);

              omc_NFInst_updateImplicitVariability(threadData, _inst_anncls, omc_Flags_isSet(threadData, _OMC_LIT106), ((modelica_integer) 67108865));

              _dae = omc_NFApi_frontEndBack(threadData, _inst_anncls, _annName, 0 /* false */);

              _str = omc_DAEUtil_getVariableBindingsStr(threadData, omc_DAEUtil_daeElements(threadData, _dae));
              tmp57 = (modelica_boolean)_addAnnotationName;
              if(tmp57)
              {
                tmpMeta56 = mmc_mk_cons(_annName, mmc_mk_cons(_OMC_LIT159, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT120, MMC_REFSTRUCTLIT(mmc_nil)))));
                tmp58 = stringAppendList(tmpMeta56);
              }
              else
              {
                tmp58 = _str;
              }
              tmp7 = tmp58;
              goto tmp9_done;
            }
            case 3: {
              modelica_metatype tmpMeta59;
              modelica_metatype tmpMeta60;
              modelica_metatype tmpMeta61;
              modelica_metatype tmpMeta62;
              modelica_metatype tmpMeta63;
              modelica_metatype tmpMeta64;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,6) == 0) goto tmp9_end;
              tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 4));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta59,1,1) == 0) goto tmp9_end;
              tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta59), 2));
              tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 7));
              _annName = tmpMeta60;
              _info = tmpMeta61;
              /* Pattern matching succeeded */
              tmpMeta62 = stringAppend(_OMC_LIT160,omc_Dump_unparseElementArgStr(threadData, _e));
              tmpMeta63 = stringAppend(tmpMeta62,_OMC_LIT120);
              _str = tmpMeta63;

              _str = omc_Util_escapeQuotes(threadData, _str);
              tmpMeta64 = mmc_mk_cons(_annName, mmc_mk_cons(_OMC_LIT161, mmc_mk_cons(_str, mmc_mk_cons(_OMC_LIT162, MMC_REFSTRUCTLIT(mmc_nil)))));
              tmp7 = stringAppendList(tmpMeta64);
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
          if (++tmp10 < 4) {
            goto tmp9_top;
          }
          MMC_THROW_INTERNAL();
          tmp9_done2:;
        }
      }
      _str = tmp7;

      tmpMeta65 = mmc_mk_cons(_str, _stringLst);
      _stringLst = tmpMeta65;
    }
  }

  _outString = stringDelimitList(_stringLst, _OMC_LIT142);

  if(omc_Flags_isSet(threadData, _OMC_LIT124))
  {
    tmpMeta67 = stringAppend(_OMC_LIT163,omc_AbsynUtil_pathString(threadData, _classPath, _OMC_LIT0, 1 /* true */, 0 /* false */));
    tmpMeta68 = stringAppend(tmpMeta67,_OMC_LIT147);
    tmpMeta69 = stringAppend(tmpMeta68,stringDelimitList(omc_List_map(threadData, _el, boxvar_Dump_unparseElementArgStr), _OMC_LIT142));
    tmpMeta70 = stringAppend(tmpMeta69,_OMC_LIT120);
    omc_ExecStat_execStat(threadData, tmpMeta70);
  }
  _return: OMC_LABEL_UNUSED
  return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFApi_evaluateAnnotation__dispatch(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inAnnotation, modelica_metatype _addAnnotationName)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_addAnnotationName);
  _outString = omc_NFApi_evaluateAnnotation__dispatch(threadData, _absynProgram, _classPath, _inAnnotation, tmp1);
  /* skip box _outString; String */
  return _outString;
}

DLLDirection
modelica_string omc_NFApi_evaluateAnnotation(threadData_t *threadData, modelica_metatype _absynProgram, modelica_metatype _classPath, modelica_metatype _inAnnotation)
{
  modelica_string _outString = NULL;
  modelica_boolean _b;
  modelica_boolean _s;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outString = _OMC_LIT5;
  // _b has no default value.
  // _s has no default value.
  _b = omc_FlagsUtil_set(threadData, _OMC_LIT116, 1 /* true */);

  _s = omc_FlagsUtil_set(threadData, _OMC_LIT128, 1 /* true */);

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
          _outString = omc_NFApi_evaluateAnnotation__dispatch(threadData, _absynProgram, _classPath, _inAnnotation, 0 /* false */);

          omc_FlagsUtil_set(threadData, _OMC_LIT116, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT128, _s);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_FlagsUtil_set(threadData, _OMC_LIT116, _b);

          omc_FlagsUtil_set(threadData, _OMC_LIT128, _s);

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
  return _outString;
}

