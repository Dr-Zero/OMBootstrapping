#include "omc_simulation_settings.h"
#include "HpcOmMemory.h"
#define _OMC_LIT0_data "getTaskListTasks failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,25,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "createArrayIndexCref_impl failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,34,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "HpcOmMemory.getCrefDims failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,32,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "getDimStringOfDimElement: unsupported Dimension-type given!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,60,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,0,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,9,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data " has data type "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,15,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data " and size "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,10,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data " and type "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,10,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "dumpScVarsByIdx: Failed to find simcode-variable with index "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,60,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "NONE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,4,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "--------------------\nScVar - Infos\n--------------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,56,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "ScVar "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,6,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data " has thread owner "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,18,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data " and shared state "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,18,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,4,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,5,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Scc "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,4,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data " is solved by node "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,19,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "--------------------\nScc - Node - Mapping\n--------------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,63,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "System "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,7,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Tasks that are writing to cacheline "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,36,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,2,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "SCVar "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,6,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data " is solved in task: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,20,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "----------------------\nSCVar - Task - Mapping\n----------------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,69,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Node "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,5,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data " uses sc-vars: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,15,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "Node - SimCodeVar - Mapping\n------------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,47,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "| "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,2,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,1,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data " ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,2,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,1,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data " | "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,3,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "  CacheLineMap "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,15,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data " ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,2,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data " entries)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,10,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,0) {_OMC_LIT4,_OMC_LIT4}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,4,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "\n\nCacheMap\n---------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,27,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "  Variables\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,12,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "  Float Cache Lines\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,20,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "  Int Cache Lines\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,18,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "  Bool Cache Lines\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,19,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "\n\nUniform CacheMap\n---------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,35,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "  Variables.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,13,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "printCacheMap: Unsupported cache map type!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,43,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "var"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,3,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "Th "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,3,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,1,3) {&GraphML_FontStyle_FONTPLAIN__desc,}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "98B954"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,6,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,1,5) {&GraphML_ShapeType_ELLIPSE__desc,}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "CL_Meta_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,8,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "CL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,2,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "varEdge_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,8,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,1,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "Node"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,4,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "000000"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,6,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,1,3) {&GraphML_LineType_LINE__desc,}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,1,4) {&GraphML_ArrowType_ARROWNONE__desc,}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,1,3) {&GraphML_ArrowType_ARROWSTANDART__desc,}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,2,0) {_OMC_LIT61,_OMC_LIT62}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "unknown"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,7,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "Th -1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,5,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "CL_GoupNode"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,11,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "HpcOmSimCode.appendCacheLinesToGraph failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,45,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "HpcOmMemory.getTaskSimVarMapping failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,39,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "/projects/OpenModelica-session2/OMCompiler/Compiler/BackEnd/HpcOmMemory.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,74,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT70_6,1.782113391e9);
#define _OMC_LIT70_6 MMC_REFREALLIT(_OMC_LIT_STRUCT70_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT69,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2822)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2822)),MMC_IMMEDIATE(MMC_TAGFIXNUM(74)),_OMC_LIT70_6}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "$DER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,4,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,3,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT75,0.0);
#define _OMC_LIT75 MMC_REFREALLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,4,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,2,0) {_OMC_LIT76,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,17,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT78,_OMC_LIT79,_OMC_LIT80}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "addCacheLineEntryToVarArrayMapping failed! Unsupported entry-type\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,66,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,1) {_OMC_LIT82,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "addCacheLineMapToVarArrayMapping failed! CacheLineMap-Type not supported!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,73,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,2,1) {_OMC_LIT84,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "ConvertCacheToVarArrayMapping: Uniform-CacheMap not supported!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,62,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,2,1) {_OMC_LIT86,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "ConvertCacheToVarArrayMapping: CacheMap-Type not supported!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,59,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,2,1) {_OMC_LIT88,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "appendSCVarToCacheMap failed! Variable skipped.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,48,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "appendNodeVarsToCacheMap0 failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,34,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(-1))}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "Cpp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,3,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "findMatchingSharedCLLevelfix0: Unknown partly filled cache line type given.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,76,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "getCacheLineForVarType: Found Variable with unknown type ( "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,59,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data ")!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,3,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,3,3) {&HpcOmMemory_ScVarInfo_SCVARINFO__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "createCacheMapThreadOptimizedForTask failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,45,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,3,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,2,0) {_OMC_LIT99,_OMC_LIT99}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "createCacheMapLevelOptimized1: Calctask without threadIdx given\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,64,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "createCacheMapLevelOptimized1: Unsupported task type\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,53,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "Creating optimized cache map for fixed level scheduler\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,55,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "Creating optimized cache map for thread scheduler\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,50,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "Creating optimized cache map for empty scheduler\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,49,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "No optimized cache map for the selected scheduler avaiable. Using default cacheMap!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,84,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,3,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(-1))}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "hpcomMemoryOpt"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,14,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "Optimize the memory structure regarding the selected scheduler"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,62,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(103)),_OMC_LIT108,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT109}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "TasksGroupGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,15,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "TasksGroup"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,10,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "TG"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,2,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "nothing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,7,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT115,5,3) {&HpcOmTaskGraph_GraphDumpOptions_GRAPHDUMPOPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT115 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "ThreadId"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,8,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT117,1,3) {&GraphML_AttributeTarget_TARGET__NODE__desc,}};
#define _OMC_LIT117 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,1,3) {&BackendDAE_IndexType_ABSOLUTE__desc,}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "taskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,9,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "ODE_schedule_CL.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,23,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "ODE_schedule_vars.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,25,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "CreateMemoryMap failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,23,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT123_6,1.782113391e9);
#define _OMC_LIT123_6 MMC_REFREALLIT(_OMC_LIT_STRUCT123_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT123,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT69,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(433)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(433)),MMC_IMMEDIATE(MMC_TAGFIXNUM(74)),_OMC_LIT123_6}};
#define _OMC_LIT123 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT123)
#include "util/modelica.h"

#include "HpcOmMemory_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_getCacheLineSizeOfCacheMap(threadData_t *threadData, modelica_metatype _iCacheMap);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getCacheLineSizeOfCacheMap(threadData_t *threadData, modelica_metatype _iCacheMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheLineSizeOfCacheMap,2,0) {(void*) boxptr_HpcOmMemory_getCacheLineSizeOfCacheMap,0}};
#define boxvar_HpcOmMemory_getCacheLineSizeOfCacheMap MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheLineSizeOfCacheMap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getCacheVariablesOfCacheMap(threadData_t *threadData, modelica_metatype _iCacheMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheVariablesOfCacheMap,2,0) {(void*) boxptr_HpcOmMemory_getCacheVariablesOfCacheMap,0}};
#define boxvar_HpcOmMemory_getCacheVariablesOfCacheMap MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheVariablesOfCacheMap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getAllCacheLinesOfCacheMap(threadData_t *threadData, modelica_metatype _iCacheMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getAllCacheLinesOfCacheMap,2,0) {(void*) boxptr_HpcOmMemory_getAllCacheLinesOfCacheMap,0}};
#define boxvar_HpcOmMemory_getAllCacheLinesOfCacheMap MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getAllCacheLinesOfCacheMap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine(threadData_t *threadData, modelica_metatype _iPartlyFilledCacheLine);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine,2,0) {(void*) boxptr_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine,0}};
#define boxvar_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getTaskListTasks(threadData_t *threadData, modelica_metatype _iTaskList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getTaskListTasks,2,0) {(void*) boxptr_HpcOmMemory_getTaskListTasks,0}};
#define boxvar_HpcOmMemory_getTaskListTasks MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getTaskListTasks)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createArrayIndexCref__impl(threadData_t *threadData, modelica_integer _iIdx, modelica_metatype _iDimElemCount, modelica_metatype _iRefCurrentDim);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createArrayIndexCref__impl(threadData_t *threadData, modelica_metatype _iIdx, modelica_metatype _iDimElemCount, modelica_metatype _iRefCurrentDim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createArrayIndexCref__impl,2,0) {(void*) boxptr_HpcOmMemory_createArrayIndexCref__impl,0}};
#define boxvar_HpcOmMemory_createArrayIndexCref__impl MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createArrayIndexCref__impl)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createArrayIndexCref(threadData_t *threadData, modelica_integer _iIdx, modelica_metatype _iDimElemCount, modelica_metatype _iCref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createArrayIndexCref(threadData_t *threadData, modelica_metatype _iIdx, modelica_metatype _iDimElemCount, modelica_metatype _iCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createArrayIndexCref,2,0) {(void*) boxptr_HpcOmMemory_createArrayIndexCref,0}};
#define boxvar_HpcOmMemory_createArrayIndexCref MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createArrayIndexCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_expandCref1(threadData_t *threadData, modelica_metatype _iCref, modelica_integer _iElems, modelica_metatype _iDimElemCount);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_expandCref1(threadData_t *threadData, modelica_metatype _iCref, modelica_metatype _iElems, modelica_metatype _iDimElemCount);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_expandCref1,2,0) {(void*) boxptr_HpcOmMemory_expandCref1,0}};
#define boxvar_HpcOmMemory_expandCref1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_expandCref1)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_getCrefDims(threadData_t *threadData, modelica_metatype _iCref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getCrefDims(threadData_t *threadData, modelica_metatype _iCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCrefDims,2,0) {(void*) boxptr_HpcOmMemory_getCrefDims,0}};
#define boxvar_HpcOmMemory_getCrefDims MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCrefDims)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getDimElemCount(threadData_t *threadData, modelica_metatype _iNumArrayElems, modelica_integer _iDims);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getDimElemCount(threadData_t *threadData, modelica_metatype _iNumArrayElems, modelica_metatype _iDims);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getDimElemCount,2,0) {(void*) boxptr_HpcOmMemory_getDimElemCount,0}};
#define boxvar_HpcOmMemory_getDimElemCount MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getDimElemCount)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_removeSubscripts(threadData_t *threadData, modelica_metatype _iCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_removeSubscripts,2,0) {(void*) boxptr_HpcOmMemory_removeSubscripts,0}};
#define boxvar_HpcOmMemory_removeSubscripts MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_removeSubscripts)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmMemory_getDimStringOfDimElement(threadData_t *threadData, modelica_metatype _iDim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getDimStringOfDimElement,2,0) {(void*) boxptr_HpcOmMemory_getDimStringOfDimElement,0}};
#define boxvar_HpcOmMemory_getDimStringOfDimElement MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getDimStringOfDimElement)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printSimCodeVarTypes(threadData_t *threadData, modelica_metatype _iSimCodeVarTypes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printSimCodeVarTypes,2,0) {(void*) boxptr_HpcOmMemory_printSimCodeVarTypes,0}};
#define boxvar_HpcOmMemory_printSimCodeVarTypes MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printSimCodeVarTypes)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmMemory_dumpScVarsByIdx(threadData_t *threadData, modelica_integer _iSimCodeVarIdx, modelica_metatype _iAllSCVarsMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_dumpScVarsByIdx(threadData_t *threadData, modelica_metatype _iSimCodeVarIdx, modelica_metatype _iAllSCVarsMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_dumpScVarsByIdx,2,0) {(void*) boxptr_HpcOmMemory_dumpScVarsByIdx,0}};
#define boxvar_HpcOmMemory_dumpScVarsByIdx MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_dumpScVarsByIdx)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printScVarInfos(threadData_t *threadData, modelica_metatype _iScVarInfos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printScVarInfos,2,0) {(void*) boxptr_HpcOmMemory_printScVarInfos,0}};
#define boxvar_HpcOmMemory_printScVarInfos MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printScVarInfos)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_printSccNodeMapping0(threadData_t *threadData, modelica_integer _iMappingEntry, modelica_integer _iIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_printSccNodeMapping0(threadData_t *threadData, modelica_metatype _iMappingEntry, modelica_metatype _iIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printSccNodeMapping0,2,0) {(void*) boxptr_HpcOmMemory_printSccNodeMapping0,0}};
#define boxvar_HpcOmMemory_printSccNodeMapping0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printSccNodeMapping0)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printSccNodeMapping(threadData_t *threadData, modelica_metatype _iMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printSccNodeMapping,2,0) {(void*) boxptr_HpcOmMemory_printSccNodeMapping,0}};
#define boxvar_HpcOmMemory_printSccNodeMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printSccNodeMapping)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printEqSimCodeVarMapping(threadData_t *threadData, modelica_metatype _iMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printEqSimCodeVarMapping,2,0) {(void*) boxptr_HpcOmMemory_printEqSimCodeVarMapping,0}};
#define boxvar_HpcOmMemory_printEqSimCodeVarMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printEqSimCodeVarMapping)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_printCacheLineTaskMapping0(threadData_t *threadData, modelica_metatype _iTasks, modelica_integer _iCacheLineIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_printCacheLineTaskMapping0(threadData_t *threadData, modelica_metatype _iTasks, modelica_metatype _iCacheLineIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheLineTaskMapping0,2,0) {(void*) boxptr_HpcOmMemory_printCacheLineTaskMapping0,0}};
#define boxvar_HpcOmMemory_printCacheLineTaskMapping0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheLineTaskMapping0)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printCacheLineTaskMapping(threadData_t *threadData, modelica_metatype _iCacheLineTaskMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheLineTaskMapping,2,0) {(void*) boxptr_HpcOmMemory_printCacheLineTaskMapping,0}};
#define boxvar_HpcOmMemory_printCacheLineTaskMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheLineTaskMapping)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_printScVarTaskMapping0(threadData_t *threadData, modelica_integer _iMappingEntry, modelica_integer _iScVarIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_printScVarTaskMapping0(threadData_t *threadData, modelica_metatype _iMappingEntry, modelica_metatype _iScVarIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printScVarTaskMapping0,2,0) {(void*) boxptr_HpcOmMemory_printScVarTaskMapping0,0}};
#define boxvar_HpcOmMemory_printScVarTaskMapping0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printScVarTaskMapping0)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printScVarTaskMapping(threadData_t *threadData, modelica_metatype _iMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printScVarTaskMapping,2,0) {(void*) boxptr_HpcOmMemory_printScVarTaskMapping,0}};
#define boxvar_HpcOmMemory_printScVarTaskMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printScVarTaskMapping)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_printNodeSimCodeVarMapping0(threadData_t *threadData, modelica_metatype _iMappingEntry, modelica_integer _iNodeIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_printNodeSimCodeVarMapping0(threadData_t *threadData, modelica_metatype _iMappingEntry, modelica_metatype _iNodeIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printNodeSimCodeVarMapping0,2,0) {(void*) boxptr_HpcOmMemory_printNodeSimCodeVarMapping0,0}};
#define boxvar_HpcOmMemory_printNodeSimCodeVarMapping0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printNodeSimCodeVarMapping0)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printNodeSimCodeVarMapping(threadData_t *threadData, modelica_metatype _iMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printNodeSimCodeVarMapping,2,0) {(void*) boxptr_HpcOmMemory_printNodeSimCodeVarMapping,0}};
#define boxvar_HpcOmMemory_printNodeSimCodeVarMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printNodeSimCodeVarMapping)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmMemory_dumpSimCodeVar(threadData_t *threadData, modelica_metatype _iVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_dumpSimCodeVar,2,0) {(void*) boxptr_HpcOmMemory_dumpSimCodeVar,0}};
#define boxvar_HpcOmMemory_dumpSimCodeVar MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_dumpSimCodeVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_cacheLineEntryToStringClean(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_metatype _iString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_cacheLineEntryToStringClean,2,0) {(void*) boxptr_HpcOmMemory_cacheLineEntryToStringClean,0}};
#define boxvar_HpcOmMemory_cacheLineEntryToStringClean MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_cacheLineEntryToStringClean)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_cacheLineEntryToString(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_metatype _iCacheVariables, modelica_metatype _iString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_cacheLineEntryToString,2,0) {(void*) boxptr_HpcOmMemory_cacheLineEntryToString,0}};
#define boxvar_HpcOmMemory_cacheLineEntryToString MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_cacheLineEntryToString)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printCacheLineMapClean(threadData_t *threadData, modelica_metatype _iCacheLineMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheLineMapClean,2,0) {(void*) boxptr_HpcOmMemory_printCacheLineMapClean,0}};
#define boxvar_HpcOmMemory_printCacheLineMapClean MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheLineMapClean)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printCacheLineMap(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_metatype _iCacheVariables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheLineMap,2,0) {(void*) boxptr_HpcOmMemory_printCacheLineMap,0}};
#define boxvar_HpcOmMemory_printCacheLineMap MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheLineMap)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_printCacheVariable(threadData_t *threadData, modelica_metatype _iCacheVariable, modelica_integer _iIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_printCacheVariable(threadData_t *threadData, modelica_metatype _iCacheVariable, modelica_metatype _iIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheVariable,2,0) {(void*) boxptr_HpcOmMemory_printCacheVariable,0}};
#define boxvar_HpcOmMemory_printCacheVariable MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheVariable)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printCacheMap(threadData_t *threadData, modelica_metatype _iCacheMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheMap,2,0) {(void*) boxptr_HpcOmMemory_printCacheMap,0}};
#define boxvar_HpcOmMemory_printCacheMap MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_printCacheMap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendCacheLineEntryToGraph(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_metatype _iCacheVariables, modelica_metatype _iAddedVariables, modelica_metatype _iSchedulerInfo, modelica_metatype _iTopGraphAttThreadIdIdx, modelica_metatype _iScVarTaskMapping, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendCacheLineEntryToGraph,2,0) {(void*) boxptr_HpcOmMemory_appendCacheLineEntryToGraph,0}};
#define boxvar_HpcOmMemory_appendCacheLineEntryToGraph MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendCacheLineEntryToGraph)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendCacheLineMapToGraph(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_metatype _iCacheVariables, modelica_metatype _iAddedVariables, modelica_metatype _iSchedulerInfo, modelica_metatype _iTopGraphAttThreadIdIdx, modelica_metatype _iScVarTaskMapping, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendCacheLineMapToGraph,2,0) {(void*) boxptr_HpcOmMemory_appendCacheLineMapToGraph,0}};
#define boxvar_HpcOmMemory_appendCacheLineMapToGraph MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendCacheLineMapToGraph)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendUnmappedVariablesToGraph(threadData_t *threadData, modelica_metatype _iScVarCLMapping, modelica_metatype _iGraphInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendUnmappedVariablesToGraph,2,0) {(void*) boxptr_HpcOmMemory_appendUnmappedVariablesToGraph,0}};
#define boxvar_HpcOmMemory_appendUnmappedVariablesToGraph MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendUnmappedVariablesToGraph)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendTaskVarEdgesToGraph(threadData_t *threadData, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iGraphInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendTaskVarEdgesToGraph,2,0) {(void*) boxptr_HpcOmMemory_appendTaskVarEdgesToGraph,0}};
#define boxvar_HpcOmMemory_appendTaskVarEdgesToGraph MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendTaskVarEdgesToGraph)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendVariablesToGraph(threadData_t *threadData, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_integer _iNumberOfScVars, modelica_integer _iGraphIdx, modelica_integer _iThreadIdAttributeIdx, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iAllVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_appendVariablesToGraph(threadData_t *threadData, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iNumberOfScVars, modelica_metatype _iGraphIdx, modelica_metatype _iThreadIdAttributeIdx, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iAllVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendVariablesToGraph,2,0) {(void*) boxptr_HpcOmMemory_appendVariablesToGraph,0}};
#define boxvar_HpcOmMemory_appendVariablesToGraph MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendVariablesToGraph)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendCacheLinesToGraph(threadData_t *threadData, modelica_metatype _iCacheMap, modelica_integer _iNumberOfNodes, modelica_metatype _iEqSimCodeVarMapping, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _ieqCompMapping, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_integer _iThreadIdAttributeIdx, modelica_metatype _iCompNodeMapping, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_appendCacheLinesToGraph(threadData_t *threadData, modelica_metatype _iCacheMap, modelica_metatype _iNumberOfNodes, modelica_metatype _iEqSimCodeVarMapping, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _ieqCompMapping, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iThreadIdAttributeIdx, modelica_metatype _iCompNodeMapping, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendCacheLinesToGraph,2,0) {(void*) boxptr_HpcOmMemory_appendCacheLinesToGraph,0}};
#define boxvar_HpcOmMemory_appendCacheLinesToGraph MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendCacheLinesToGraph)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getTaskSimVarMapping(threadData_t *threadData, modelica_metatype _iSccEqMapping, modelica_metatype _iNodeSccMapping, modelica_metatype _iEqSimCodeVarMapping, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oNotSolvedVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getTaskSimVarMapping,2,0) {(void*) boxptr_HpcOmMemory_getTaskSimVarMapping,0}};
#define boxvar_HpcOmMemory_getTaskSimVarMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getTaskSimVarMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getCacheLineTaskMapping0(threadData_t *threadData, modelica_metatype _iNodeIdx, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iSCVarCLMapping, modelica_metatype _iCLTaskMappingVarIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheLineTaskMapping0,2,0) {(void*) boxptr_HpcOmMemory_getCacheLineTaskMapping0,0}};
#define boxvar_HpcOmMemory_getCacheLineTaskMapping0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheLineTaskMapping0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getCacheLineTaskMapping(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_integer _iNumCacheLines, modelica_metatype _iSCVarCLMapping, modelica_metatype *out_oScVarTaskMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getCacheLineTaskMapping(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iNumCacheLines, modelica_metatype _iSCVarCLMapping, modelica_metatype *out_oScVarTaskMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheLineTaskMapping,2,0) {(void*) boxptr_HpcOmMemory_getCacheLineTaskMapping,0}};
#define boxvar_HpcOmMemory_getCacheLineTaskMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheLineTaskMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getModifiedVarName(threadData_t *threadData, modelica_metatype _iVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getModifiedVarName,2,0) {(void*) boxptr_HpcOmMemory_getModifiedVarName,0}};
#define boxvar_HpcOmMemory_getModifiedVarName MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getModifiedVarName)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_flattenEqSimCodeVarMapping(threadData_t *threadData, modelica_metatype _iEqSimCodeVarMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_flattenEqSimCodeVarMapping,2,0) {(void*) boxptr_HpcOmMemory_flattenEqSimCodeVarMapping,0}};
#define boxvar_HpcOmMemory_flattenEqSimCodeVarMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_flattenEqSimCodeVarMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_invertSccNodeMapping(threadData_t *threadData, modelica_metatype _iSccNodeMapping, modelica_integer _iNumberOfNodes);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_invertSccNodeMapping(threadData_t *threadData, modelica_metatype _iSccNodeMapping, modelica_metatype _iNumberOfNodes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_invertSccNodeMapping,2,0) {(void*) boxptr_HpcOmMemory_invertSccNodeMapping,0}};
#define boxvar_HpcOmMemory_invertSccNodeMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_invertSccNodeMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_invertEqCompMapping(threadData_t *threadData, modelica_metatype _iEqCompMapping, modelica_integer _iNumOfComps);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_invertEqCompMapping(threadData_t *threadData, modelica_metatype _iEqCompMapping, modelica_metatype _iNumOfComps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_invertEqCompMapping,2,0) {(void*) boxptr_HpcOmMemory_invertEqCompMapping,0}};
#define boxvar_HpcOmMemory_invertEqCompMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_invertEqCompMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getSimCodeVarNodeMapping0(threadData_t *threadData, modelica_metatype _iCompIdx, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iCompNodeMapping, modelica_metatype _iScVarTaskMappingVarIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getSimCodeVarNodeMapping0,2,0) {(void*) boxptr_HpcOmMemory_getSimCodeVarNodeMapping0,0}};
#define boxvar_HpcOmMemory_getSimCodeVarNodeMapping0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getSimCodeVarNodeMapping0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getSimCodeVarNodeMapping(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iEqSystems, modelica_integer _iNumScVars, modelica_metatype _iCompNodeMapping, modelica_metatype _iVarNameSCVarIdxMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getSimCodeVarNodeMapping(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iEqSystems, modelica_metatype _iNumScVars, modelica_metatype _iCompNodeMapping, modelica_metatype _iVarNameSCVarIdxMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getSimCodeVarNodeMapping,2,0) {(void*) boxptr_HpcOmMemory_getSimCodeVarNodeMapping,0}};
#define boxvar_HpcOmMemory_getSimCodeVarNodeMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getSimCodeVarNodeMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createMemoryMapTraverse0(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_oTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createMemoryMapTraverse0,2,0) {(void*) boxptr_HpcOmMemory_createMemoryMapTraverse0,0}};
#define boxvar_HpcOmMemory_createMemoryMapTraverse0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createMemoryMapTraverse0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getEqSCVarMapping0(threadData_t *threadData, modelica_metatype _iEquation, modelica_metatype _iHt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getEqSCVarMapping0,2,0) {(void*) boxptr_HpcOmMemory_getEqSCVarMapping0,0}};
#define boxvar_HpcOmMemory_getEqSCVarMapping0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getEqSCVarMapping0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getEqSCVarMappingByEqSystem(threadData_t *threadData, modelica_metatype _iEqSystem, modelica_metatype _iHt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getEqSCVarMappingByEqSystem,2,0) {(void*) boxptr_HpcOmMemory_getEqSCVarMappingByEqSystem,0}};
#define boxvar_HpcOmMemory_getEqSCVarMappingByEqSystem MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getEqSCVarMappingByEqSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getEqSCVarMapping(threadData_t *threadData, modelica_metatype _iEqSystems, modelica_metatype _iHt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getEqSCVarMapping,2,0) {(void*) boxptr_HpcOmMemory_getEqSCVarMapping,0}};
#define boxvar_HpcOmMemory_getEqSCVarMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getEqSCVarMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_transposeTasksScVarsMapping(threadData_t *threadData, modelica_metatype _iTasksScVarMapping, modelica_integer _iNumberOfScVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_transposeTasksScVarsMapping(threadData_t *threadData, modelica_metatype _iTasksScVarMapping, modelica_metatype _iNumberOfScVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_transposeTasksScVarsMapping,2,0) {(void*) boxptr_HpcOmMemory_transposeTasksScVarsMapping,0}};
#define boxvar_HpcOmMemory_transposeTasksScVarsMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_transposeTasksScVarsMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_transposeScVarTaskMapping(threadData_t *threadData, modelica_metatype _iScVarTaskMapping, modelica_metatype _iTaskGraph);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_transposeScVarTaskMapping,2,0) {(void*) boxptr_HpcOmMemory_transposeScVarTaskMapping,0}};
#define boxvar_HpcOmMemory_transposeScVarTaskMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_transposeScVarTaskMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_fillSimVarHashTable(threadData_t *threadData, modelica_metatype _iSimVars, modelica_integer _iOffset, modelica_integer _iType, modelica_metatype _iHt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_fillSimVarHashTable(threadData_t *threadData, modelica_metatype _iSimVars, modelica_metatype _iOffset, modelica_metatype _iType, modelica_metatype _iHt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_fillSimVarHashTable,2,0) {(void*) boxptr_HpcOmMemory_fillSimVarHashTable,0}};
#define boxvar_HpcOmMemory_fillSimVarHashTable MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_fillSimVarHashTable)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmMemory_calculateLocCoForTask(threadData_t *threadData, modelica_integer _iTaskIdx, modelica_integer _iThreadIdx, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iCacheLineThreadProperties);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_calculateLocCoForTask(threadData_t *threadData, modelica_metatype _iTaskIdx, modelica_metatype _iThreadIdx, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iCacheLineThreadProperties);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_calculateLocCoForTask,2,0) {(void*) boxptr_HpcOmMemory_calculateLocCoForTask,0}};
#define boxvar_HpcOmMemory_calculateLocCoForTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_calculateLocCoForTask)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmMemory_calculateLocCoWrite(threadData_t *threadData, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _cacheLineThreadProperties, modelica_metatype _iSchedulerInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_calculateLocCoWrite(threadData_t *threadData, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _cacheLineThreadProperties, modelica_metatype _iSchedulerInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_calculateLocCoWrite,2,0) {(void*) boxptr_HpcOmMemory_calculateLocCoWrite,0}};
#define boxvar_HpcOmMemory_calculateLocCoWrite MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_calculateLocCoWrite)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmMemory_calculateLocCoReadForTask(threadData_t *threadData, modelica_integer _iNodeIdx, modelica_integer _iThreadIdx, modelica_metatype _iTaskGraphT, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iCacheLineThreadProperties);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_calculateLocCoReadForTask(threadData_t *threadData, modelica_metatype _iNodeIdx, modelica_metatype _iThreadIdx, modelica_metatype _iTaskGraphT, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iCacheLineThreadProperties);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_calculateLocCoReadForTask,2,0) {(void*) boxptr_HpcOmMemory_calculateLocCoReadForTask,0}};
#define boxvar_HpcOmMemory_calculateLocCoReadForTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_calculateLocCoReadForTask)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmMemory_calculateLocCoRead(threadData_t *threadData, modelica_metatype _iTaskGraphT, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _cacheLineThreadProperties, modelica_metatype _iSchedulerInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_calculateLocCoRead(threadData_t *threadData, modelica_metatype _iTaskGraphT, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _cacheLineThreadProperties, modelica_metatype _iSchedulerInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_calculateLocCoRead,2,0) {(void*) boxptr_HpcOmMemory_calculateLocCoRead,0}};
#define boxvar_HpcOmMemory_calculateLocCoRead MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_calculateLocCoRead)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_createCacheLineThreadProperties(threadData_t *threadData, modelica_metatype _iCacheLine, modelica_integer _iNumberOfThreads, modelica_integer _iCacheLineSize, modelica_metatype _iCacheLineThreadProperties);
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmMemory_createCacheLineThreadProperties(threadData_t *threadData, modelica_metatype _iCacheLine, modelica_metatype _iNumberOfThreads, modelica_metatype _iCacheLineSize, modelica_metatype _iCacheLineThreadProperties);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheLineThreadProperties,2,0) {(void*) boxptr_HpcOmMemory_createCacheLineThreadProperties,0}};
#define boxvar_HpcOmMemory_createCacheLineThreadProperties MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheLineThreadProperties)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createVarCLMappingFromVarArrayIndexHashTable(threadData_t *threadData, modelica_metatype _iVarToIndexMappingHashTable, modelica_metatype _iSimVarIdxMappingHashTable, modelica_integer _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oVarToCLMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createVarCLMappingFromVarArrayIndexHashTable(threadData_t *threadData, modelica_metatype _iVarToIndexMappingHashTable, modelica_metatype _iSimVarIdxMappingHashTable, modelica_metatype _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oVarToCLMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createVarCLMappingFromVarArrayIndexHashTable,2,0) {(void*) boxptr_HpcOmMemory_createVarCLMappingFromVarArrayIndexHashTable,0}};
#define boxvar_HpcOmMemory_createVarCLMappingFromVarArrayIndexHashTable MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createVarCLMappingFromVarArrayIndexHashTable)
PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_evaluateCacheBehaviour(threadData_t *threadData, modelica_metatype _iVarToIndexMappingHashTable, modelica_metatype _iSimVarIdxMappingHashTable, modelica_metatype _taskSolvedVarsMapping, modelica_metatype _taskUnsolvedVarsMapping, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_integer _iNumberOfThreads, modelica_integer _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iSchedulerInfo);
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmMemory_evaluateCacheBehaviour(threadData_t *threadData, modelica_metatype _iVarToIndexMappingHashTable, modelica_metatype _iSimVarIdxMappingHashTable, modelica_metatype _taskSolvedVarsMapping, modelica_metatype _taskUnsolvedVarsMapping, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iNumberOfThreads, modelica_metatype _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iSchedulerInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_evaluateCacheBehaviour,2,0) {(void*) boxptr_HpcOmMemory_evaluateCacheBehaviour,0}};
#define boxvar_HpcOmMemory_evaluateCacheBehaviour MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_evaluateCacheBehaviour)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping0(threadData_t *threadData, modelica_metatype _iScVarCLMapping, modelica_metatype _iAllVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iEntries);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping0,2,0) {(void*) boxptr_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping0,0}};
#define boxvar_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping(threadData_t *threadData, modelica_metatype _iScVarCLMapping, modelica_metatype _iAllVarsMapping, modelica_metatype _iSimCodeVarTypes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping,2,0) {(void*) boxptr_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping,0}};
#define boxvar_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_convertCacheToVarArrayMapping2Helper(threadData_t *threadData, modelica_metatype _iArray, modelica_integer _iOffset, modelica_integer _iIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_convertCacheToVarArrayMapping2Helper(threadData_t *threadData, modelica_metatype _iArray, modelica_metatype _iOffset, modelica_metatype _iIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_convertCacheToVarArrayMapping2Helper,2,0) {(void*) boxptr_HpcOmMemory_convertCacheToVarArrayMapping2Helper,0}};
#define boxvar_HpcOmMemory_convertCacheToVarArrayMapping2Helper MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_convertCacheToVarArrayMapping2Helper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_addCacheLineEntryToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_integer _iArrayIdx, modelica_metatype _iClIdxSize, modelica_metatype _iVarIdxOffsets, modelica_metatype _iCacheVariables, modelica_metatype _iPositionMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_addCacheLineEntryToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_metatype _iArrayIdx, modelica_metatype _iClIdxSize, modelica_metatype _iVarIdxOffsets, modelica_metatype _iCacheVariables, modelica_metatype _iPositionMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_addCacheLineEntryToVarArrayMapping,2,0) {(void*) boxptr_HpcOmMemory_addCacheLineEntryToVarArrayMapping,0}};
#define boxvar_HpcOmMemory_addCacheLineEntryToVarArrayMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_addCacheLineEntryToVarArrayMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_addCacheLineMapToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_integer _iCacheLineSize, modelica_metatype _iVarIdxOffsets, modelica_metatype _iCacheVariables, modelica_metatype _iPositionMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_addCacheLineMapToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_metatype _iCacheLineSize, modelica_metatype _iVarIdxOffsets, modelica_metatype _iCacheVariables, modelica_metatype _iPositionMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_addCacheLineMapToVarArrayMapping,2,0) {(void*) boxptr_HpcOmMemory_addCacheLineMapToVarArrayMapping,0}};
#define boxvar_HpcOmMemory_addCacheLineMapToVarArrayMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_addCacheLineMapToVarArrayMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_convertCacheToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheMap, modelica_integer _iCacheLineSize, modelica_metatype _iStateVars, modelica_metatype _iDerivativeVars, modelica_metatype _iAliasVars, modelica_metatype _iIntAliasVars, modelica_metatype _iBoolAliasVars, modelica_metatype _iStringAliasVars, modelica_metatype _iVarSizes, modelica_metatype _iNotOptimizedVars, modelica_metatype *out_oVarToIndexMapping, modelica_metatype *out_oMemoryMap);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_convertCacheToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheMap, modelica_metatype _iCacheLineSize, modelica_metatype _iStateVars, modelica_metatype _iDerivativeVars, modelica_metatype _iAliasVars, modelica_metatype _iIntAliasVars, modelica_metatype _iBoolAliasVars, modelica_metatype _iStringAliasVars, modelica_metatype _iVarSizes, modelica_metatype _iNotOptimizedVars, modelica_metatype *out_oVarToIndexMapping, modelica_metatype *out_oMemoryMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_convertCacheToVarArrayMapping,2,0) {(void*) boxptr_HpcOmMemory_convertCacheToVarArrayMapping,0}};
#define boxvar_HpcOmMemory_convertCacheToVarArrayMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_convertCacheToVarArrayMapping)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmMemory_compareCacheLineMapByIdx(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_metatype _iCacheLineMap2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_compareCacheLineMapByIdx(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_metatype _iCacheLineMap2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_compareCacheLineMapByIdx,2,0) {(void*) boxptr_HpcOmMemory_compareCacheLineMapByIdx,0}};
#define boxvar_HpcOmMemory_compareCacheLineMapByIdx MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_compareCacheLineMapByIdx)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_reverseCacheLineMapEntries(threadData_t *threadData, modelica_metatype _iCacheLineMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_reverseCacheLineMapEntries,2,0) {(void*) boxptr_HpcOmMemory_reverseCacheLineMapEntries,0}};
#define boxvar_HpcOmMemory_reverseCacheLineMapEntries MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_reverseCacheLineMapEntries)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmMemory_sortCacheLineEntriesByPos(threadData_t *threadData, modelica_metatype _iCacheLineEntry1, modelica_metatype _iCacheLineEntry2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_sortCacheLineEntriesByPos(threadData_t *threadData, modelica_metatype _iCacheLineEntry1, modelica_metatype _iCacheLineEntry2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_sortCacheLineEntriesByPos,2,0) {(void*) boxptr_HpcOmMemory_sortCacheLineEntriesByPos,0}};
#define boxvar_HpcOmMemory_sortCacheLineEntriesByPos MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_sortCacheLineEntriesByPos)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_getNumOfUsedBytesByCacheLine(threadData_t *threadData, modelica_metatype _iCacheLineMap);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getNumOfUsedBytesByCacheLine(threadData_t *threadData, modelica_metatype _iCacheLineMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getNumOfUsedBytesByCacheLine,2,0) {(void*) boxptr_HpcOmMemory_getNumOfUsedBytesByCacheLine,0}};
#define boxvar_HpcOmMemory_getNumOfUsedBytesByCacheLine MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getNumOfUsedBytesByCacheLine)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createDetailedCacheMapInformation0(threadData_t *threadData, modelica_integer _iCacheLineIdx, modelica_metatype _iCacheLinesArray, modelica_integer _iCacheLineSize, modelica_metatype _iCacheLines);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createDetailedCacheMapInformation0(threadData_t *threadData, modelica_metatype _iCacheLineIdx, modelica_metatype _iCacheLinesArray, modelica_metatype _iCacheLineSize, modelica_metatype _iCacheLines);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createDetailedCacheMapInformation0,2,0) {(void*) boxptr_HpcOmMemory_createDetailedCacheMapInformation0,0}};
#define boxvar_HpcOmMemory_createDetailedCacheMapInformation0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createDetailedCacheMapInformation0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createDetailedCacheMapInformation(threadData_t *threadData, modelica_metatype _iCacheLinesIdc, modelica_metatype _iCacheLines, modelica_integer _iCacheLineSize);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createDetailedCacheMapInformation(threadData_t *threadData, modelica_metatype _iCacheLinesIdc, modelica_metatype _iCacheLines, modelica_metatype _iCacheLineSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createDetailedCacheMapInformation,2,0) {(void*) boxptr_HpcOmMemory_createDetailedCacheMapInformation,0}};
#define boxvar_HpcOmMemory_createDetailedCacheMapInformation MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createDetailedCacheMapInformation)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmMemory_doesSCVarFitIntoCL(threadData_t *threadData, modelica_metatype _iCacheLineCandidate, modelica_integer _iNumBytes);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_doesSCVarFitIntoCL(threadData_t *threadData, modelica_metatype _iCacheLineCandidate, modelica_metatype _iNumBytes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_doesSCVarFitIntoCL,2,0) {(void*) boxptr_HpcOmMemory_doesSCVarFitIntoCL,0}};
#define boxvar_HpcOmMemory_doesSCVarFitIntoCL MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_doesSCVarFitIntoCL)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendSCVarToCacheMap(threadData_t *threadData, modelica_integer _iSCVarIdx, modelica_integer _iOwnerThread, modelica_metatype _iInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_appendSCVarToCacheMap(threadData_t *threadData, modelica_metatype _iSCVarIdx, modelica_metatype _iOwnerThread, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendSCVarToCacheMap,2,0) {(void*) boxptr_HpcOmMemory_appendSCVarToCacheMap,0}};
#define boxvar_HpcOmMemory_appendSCVarToCacheMap MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendSCVarToCacheMap)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmMemory_appendNodeVarsToCacheMap0(threadData_t *threadData, modelica_metatype _iWrittenCLs, modelica_metatype _iDetailedCLInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_appendNodeVarsToCacheMap0(threadData_t *threadData, modelica_metatype _iWrittenCLs, modelica_metatype _iDetailedCLInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendNodeVarsToCacheMap0,2,0) {(void*) boxptr_HpcOmMemory_appendNodeVarsToCacheMap0,0}};
#define boxvar_HpcOmMemory_appendNodeVarsToCacheMap0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendNodeVarsToCacheMap0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendNodeVarsToCacheMap(threadData_t *threadData, modelica_integer _iNodeIdx, modelica_integer _iOwnerThread, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_appendNodeVarsToCacheMap(threadData_t *threadData, modelica_metatype _iNodeIdx, modelica_metatype _iOwnerThread, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendNodeVarsToCacheMap,2,0) {(void*) boxptr_HpcOmMemory_appendNodeVarsToCacheMap,0}};
#define boxvar_HpcOmMemory_appendNodeVarsToCacheMap MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_appendNodeVarsToCacheMap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapDefaultCppRuntime1(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_integer _iCacheLineSize, modelica_metatype _iLastCacheLine, modelica_metatype *out_oLastCacheLine, modelica_boolean *out_oNewOneCreated);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapDefaultCppRuntime1(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_metatype _iCacheLineSize, modelica_metatype _iLastCacheLine, modelica_metatype *out_oLastCacheLine, modelica_metatype *out_oNewOneCreated);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapDefaultCppRuntime1,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapDefaultCppRuntime1,0}};
#define boxvar_HpcOmMemory_createCacheMapDefaultCppRuntime1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapDefaultCppRuntime1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData_t *threadData, modelica_metatype _iVariables, modelica_integer _iScVarIdxStart, modelica_integer _iRealScVarIdxStart, modelica_metatype _iScVarCLMapping, modelica_metatype _iFilledCacheLines, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iLastCacheLine, modelica_integer _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oLastCacheLine, modelica_integer *out_oScVarIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData_t *threadData, modelica_metatype _iVariables, modelica_metatype _iScVarIdxStart, modelica_metatype _iRealScVarIdxStart, modelica_metatype _iScVarCLMapping, modelica_metatype _iFilledCacheLines, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iLastCacheLine, modelica_metatype _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oLastCacheLine, modelica_metatype *out_oScVarIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapDefaultCppRuntime0,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapDefaultCppRuntime0,0}};
#define boxvar_HpcOmMemory_createCacheMapDefaultCppRuntime0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapDefaultCppRuntime0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapDefaultCppRuntime(threadData_t *threadData, modelica_metatype _iAllSCVars, modelica_integer _iCacheLineSize, modelica_metatype _iSimCodeVars, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapDefaultCppRuntime(threadData_t *threadData, modelica_metatype _iAllSCVars, modelica_metatype _iCacheLineSize, modelica_metatype _iSimCodeVars, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapDefaultCppRuntime,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapDefaultCppRuntime,0}};
#define boxvar_HpcOmMemory_createCacheMapDefaultCppRuntime MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapDefaultCppRuntime)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapDefault(threadData_t *threadData, modelica_metatype _iAllSCVars, modelica_integer _iCacheLineSize, modelica_metatype _iSimCodeVars, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapDefault(threadData_t *threadData, modelica_metatype _iAllSCVars, modelica_metatype _iCacheLineSize, modelica_metatype _iSimCodeVars, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapDefault,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapDefault,0}};
#define boxvar_HpcOmMemory_createCacheMapDefault MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapDefault)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapFromThreadAndSharedCLs(threadData_t *threadData, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iCacheMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapFromThreadAndSharedCLs,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapFromThreadAndSharedCLs,0}};
#define boxvar_HpcOmMemory_createCacheMapFromThreadAndSharedCLs MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapFromThreadAndSharedCLs)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmMemory_isCLWrittenByOtherThread(threadData_t *threadData, modelica_metatype _iLevelInfo, modelica_integer _iLevelIdx, modelica_integer _iThreadIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_isCLWrittenByOtherThread(threadData_t *threadData, modelica_metatype _iLevelInfo, modelica_metatype _iLevelIdx, modelica_metatype _iThreadIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_isCLWrittenByOtherThread,2,0) {(void*) boxptr_HpcOmMemory_isCLWrittenByOtherThread,0}};
#define boxvar_HpcOmMemory_isCLWrittenByOtherThread MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_isCLWrittenByOtherThread)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createSharedClLevelFix(threadData_t *threadData, modelica_metatype _iOldPartlyFilledCacheLine, modelica_metatype _iCacheLineMap, modelica_metatype _iLevelThreadIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createSharedClLevelFix,2,0) {(void*) boxptr_HpcOmMemory_createSharedClLevelFix,0}};
#define boxvar_HpcOmMemory_createSharedClLevelFix MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createSharedClLevelFix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createSharedClThread(threadData_t *threadData, modelica_metatype _iOldPartlyFilledCacheLine, modelica_metatype _iCacheLineMap, modelica_integer _iAdditionalArgument);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createSharedClThread(threadData_t *threadData, modelica_metatype _iOldPartlyFilledCacheLine, modelica_metatype _iCacheLineMap, modelica_metatype _iAdditionalArgument);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createSharedClThread,2,0) {(void*) boxptr_HpcOmMemory_createSharedClThread,0}};
#define boxvar_HpcOmMemory_createSharedClThread MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createSharedClThread)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_findMatchingSharedCLThread(threadData_t *threadData, modelica_integer _iNodeVar, modelica_integer _iVarSize, modelica_integer _iVarType, modelica_integer _iThreadIdx, modelica_integer _iAdditionalArgument, modelica_metatype _iSharedCacheLines);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_findMatchingSharedCLThread(threadData_t *threadData, modelica_metatype _iNodeVar, modelica_metatype _iVarSize, modelica_metatype _iVarType, modelica_metatype _iThreadIdx, modelica_metatype _iAdditionalArgument, modelica_metatype _iSharedCacheLines);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_findMatchingSharedCLThread,2,0) {(void*) boxptr_HpcOmMemory_findMatchingSharedCLThread,0}};
#define boxvar_HpcOmMemory_findMatchingSharedCLThread MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_findMatchingSharedCLThread)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_findMatchingSharedCLLevelfix0(threadData_t *threadData, modelica_integer _iNodeVar, modelica_integer _iVarSize, modelica_integer _iLevelIdx, modelica_integer _iThreadIdx, modelica_integer _iCurrentListIdx, modelica_metatype _iSharedCacheLines);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_findMatchingSharedCLLevelfix0(threadData_t *threadData, modelica_metatype _iNodeVar, modelica_metatype _iVarSize, modelica_metatype _iLevelIdx, modelica_metatype _iThreadIdx, modelica_metatype _iCurrentListIdx, modelica_metatype _iSharedCacheLines);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_findMatchingSharedCLLevelfix0,2,0) {(void*) boxptr_HpcOmMemory_findMatchingSharedCLLevelfix0,0}};
#define boxvar_HpcOmMemory_findMatchingSharedCLLevelfix0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_findMatchingSharedCLLevelfix0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_findMatchingSharedCLLevelfix(threadData_t *threadData, modelica_integer _iNodeVar, modelica_integer _iVarSize, modelica_integer _iVarType, modelica_integer _iThreadIdx, modelica_metatype _iLevelThreadIdx, modelica_metatype _iSharedCacheLines);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_findMatchingSharedCLLevelfix(threadData_t *threadData, modelica_metatype _iNodeVar, modelica_metatype _iVarSize, modelica_metatype _iVarType, modelica_metatype _iThreadIdx, modelica_metatype _iLevelThreadIdx, modelica_metatype _iSharedCacheLines);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_findMatchingSharedCLLevelfix,2,0) {(void*) boxptr_HpcOmMemory_findMatchingSharedCLLevelfix,0}};
#define boxvar_HpcOmMemory_findMatchingSharedCLLevelfix MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_findMatchingSharedCLLevelfix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getPartlyFilledCLByVarType(threadData_t *threadData, modelica_integer _iVarType, modelica_metatype _iSharedCacheLines);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getPartlyFilledCLByVarType(threadData_t *threadData, modelica_metatype _iVarType, modelica_metatype _iSharedCacheLines);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getPartlyFilledCLByVarType,2,0) {(void*) boxptr_HpcOmMemory_getPartlyFilledCLByVarType,0}};
#define boxvar_HpcOmMemory_getPartlyFilledCLByVarType MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getPartlyFilledCLByVarType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_addVarsToSharedCL0(threadData_t *threadData, modelica_metatype _iMatchedCacheLine, modelica_integer _iVarIdx, modelica_fnptr _iFactoryMethod, modelica_metatype _iAdditionalArgument, modelica_integer _iThreadIdx, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_addVarsToSharedCL0(threadData_t *threadData, modelica_metatype _iMatchedCacheLine, modelica_metatype _iVarIdx, modelica_fnptr _iFactoryMethod, modelica_metatype _iAdditionalArgument, modelica_metatype _iThreadIdx, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_addVarsToSharedCL0,2,0) {(void*) boxptr_HpcOmMemory_addVarsToSharedCL0,0}};
#define boxvar_HpcOmMemory_addVarsToSharedCL0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_addVarsToSharedCL0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_addVarsToSharedCL(threadData_t *threadData, modelica_metatype _iNodeVars, modelica_fnptr _iSharedClSelectFunction, modelica_fnptr _iFactoryMethod, modelica_integer _iThreadIdx, modelica_metatype _iCompareFuncArgument, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_addVarsToSharedCL(threadData_t *threadData, modelica_metatype _iNodeVars, modelica_fnptr _iSharedClSelectFunction, modelica_fnptr _iFactoryMethod, modelica_metatype _iThreadIdx, modelica_metatype _iCompareFuncArgument, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_addVarsToSharedCL,2,0) {(void*) boxptr_HpcOmMemory_addVarsToSharedCL,0}};
#define boxvar_HpcOmMemory_addVarsToSharedCL MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_addVarsToSharedCL)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_contractCacheLineForVarType(threadData_t *threadData, modelica_integer _iVarDataType, modelica_metatype _iCacheLinesFloat, modelica_metatype _iCacheLinesInt, modelica_metatype _iCacheLinesBool, modelica_metatype _iVarCacheLines);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_contractCacheLineForVarType(threadData_t *threadData, modelica_metatype _iVarDataType, modelica_metatype _iCacheLinesFloat, modelica_metatype _iCacheLinesInt, modelica_metatype _iCacheLinesBool, modelica_metatype _iVarCacheLines);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_contractCacheLineForVarType,2,0) {(void*) boxptr_HpcOmMemory_contractCacheLineForVarType,0}};
#define boxvar_HpcOmMemory_contractCacheLineForVarType MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_contractCacheLineForVarType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getCacheLineForVarType(threadData_t *threadData, modelica_integer _iVarDataType, modelica_metatype _iCacheLinesForTypes, modelica_metatype *out_oCacheLinesInt, modelica_metatype *out_oCacheLinesBool, modelica_metatype *out_oVarCacheLines);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getCacheLineForVarType(threadData_t *threadData, modelica_metatype _iVarDataType, modelica_metatype _iCacheLinesForTypes, modelica_metatype *out_oCacheLinesInt, modelica_metatype *out_oCacheLinesBool, modelica_metatype *out_oVarCacheLines);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheLineForVarType,2,0) {(void*) boxptr_HpcOmMemory_getCacheLineForVarType,0}};
#define boxvar_HpcOmMemory_getCacheLineForVarType MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getCacheLineForVarType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_addVarsToThreadCL(threadData_t *threadData, modelica_metatype _iNodeVars, modelica_integer _iThreadIdx, modelica_metatype _iThreadCacheLines, modelica_metatype _iInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_addVarsToThreadCL(threadData_t *threadData, modelica_metatype _iNodeVars, modelica_metatype _iThreadIdx, modelica_metatype _iThreadCacheLines, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_addVarsToThreadCL,2,0) {(void*) boxptr_HpcOmMemory_addVarsToThreadCL,0}};
#define boxvar_HpcOmMemory_addVarsToThreadCL MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_addVarsToThreadCL)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getVarInfoByScVarIdx(threadData_t *threadData, modelica_integer _iScVarIdx, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iSchedulerInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getVarInfoByScVarIdx(threadData_t *threadData, modelica_metatype _iScVarIdx, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iSchedulerInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getVarInfoByScVarIdx,2,0) {(void*) boxptr_HpcOmMemory_getVarInfoByScVarIdx,0}};
#define boxvar_HpcOmMemory_getVarInfoByScVarIdx MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getVarInfoByScVarIdx)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createVarInfos(threadData_t *threadData, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iSchedulerInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createVarInfos,2,0) {(void*) boxptr_HpcOmMemory_createVarInfos,0}};
#define boxvar_HpcOmMemory_createVarInfos MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createVarInfos)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapOptimizedForTask1(threadData_t *threadData, modelica_integer _iScVar, modelica_integer _iThreadIdx, modelica_metatype _iScVarInfos, modelica_metatype _iHandledVariables, modelica_fnptr _iSharedClSelectFunction, modelica_metatype _iCompareFuncArgument, modelica_fnptr _iFactoryMethod, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapOptimizedForTask1(threadData_t *threadData, modelica_metatype _iScVar, modelica_metatype _iThreadIdx, modelica_metatype _iScVarInfos, modelica_metatype _iHandledVariables, modelica_fnptr _iSharedClSelectFunction, modelica_metatype _iCompareFuncArgument, modelica_fnptr _iFactoryMethod, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapOptimizedForTask1,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapOptimizedForTask1,0}};
#define boxvar_HpcOmMemory_createCacheMapOptimizedForTask1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapOptimizedForTask1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapOptimizedForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_integer _iNumberOfThreads, modelica_fnptr _iSharedClSelectFunction, modelica_metatype _iCompareFuncArgument, modelica_fnptr _iFactoryMethod, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iScVarInfos, modelica_metatype _iInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapOptimizedForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_metatype _iNumberOfThreads, modelica_fnptr _iSharedClSelectFunction, modelica_metatype _iCompareFuncArgument, modelica_fnptr _iFactoryMethod, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iScVarInfos, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapOptimizedForTask,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapOptimizedForTask,0}};
#define boxvar_HpcOmMemory_createCacheMapOptimizedForTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapOptimizedForTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapThreadOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_integer _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iThreadTasks, modelica_integer _iNumberOfThreads, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapThreadOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iThreadTasks, modelica_metatype _iNumberOfThreads, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapThreadOptimized,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapThreadOptimized,0}};
#define boxvar_HpcOmMemory_createCacheMapThreadOptimized MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapThreadOptimized)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getUnsolvedVarsByNodeList(threadData_t *threadData, modelica_metatype _iNodeList, modelica_integer _iVarCount, modelica_metatype _iTaskUnsolvedVarsMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getUnsolvedVarsByNodeList(threadData_t *threadData, modelica_metatype _iNodeList, modelica_metatype _iVarCount, modelica_metatype _iTaskUnsolvedVarsMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_getUnsolvedVarsByNodeList,2,0) {(void*) boxptr_HpcOmMemory_getUnsolvedVarsByNodeList,0}};
#define boxvar_HpcOmMemory_getUnsolvedVarsByNodeList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_getUnsolvedVarsByNodeList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSchedulerInfo, modelica_integer _iNumberOfThreads, modelica_integer _iLevel, modelica_metatype _iScVarInfos, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSchedulerInfo, modelica_metatype _iNumberOfThreads, modelica_metatype _iLevel, modelica_metatype _iScVarInfos, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask,0}};
#define boxvar_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iScVarInfos, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_metatype _iSchedulerInfo, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iScVarInfos, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_metatype _iSchedulerInfo, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel,0}};
#define boxvar_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelFixedOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_integer _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iTasksOfLevels, modelica_integer _iNumberOfThreads, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapLevelFixedOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iTasksOfLevels, modelica_metatype _iNumberOfThreads, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelFixedOptimized,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapLevelFixedOptimized,0}};
#define boxvar_HpcOmMemory_createCacheMapLevelFixedOptimized MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelFixedOptimized)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelOptimizedForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelOptimizedForTask,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapLevelOptimizedForTask,0}};
#define boxvar_HpcOmMemory_createCacheMapLevelOptimizedForTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelOptimizedForTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelOptimized0(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelOptimized0,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapLevelOptimized0,0}};
#define boxvar_HpcOmMemory_createCacheMapLevelOptimized0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelOptimized0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelOptimized(threadData_t *threadData, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarTaskMapping, modelica_integer _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iTasksOfLevels, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapLevelOptimized(threadData_t *threadData, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarTaskMapping, modelica_metatype _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iTasksOfLevels, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelOptimized,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapLevelOptimized,0}};
#define boxvar_HpcOmMemory_createCacheMapLevelOptimized MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapLevelOptimized)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSimCodeVars, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_integer _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iSchedule, modelica_metatype _iSchedulerInfo, modelica_integer _iNumberOfThreads, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSimCodeVars, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iSchedule, modelica_metatype _iSchedulerInfo, modelica_metatype _iNumberOfThreads, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapOptimized,2,0) {(void*) boxptr_HpcOmMemory_createCacheMapOptimized,0}};
#define boxvar_HpcOmMemory_createCacheMapOptimized MMC_REFSTRUCTLIT(boxvar_lit_HpcOmMemory_createCacheMapOptimized)

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_getCacheLineSizeOfCacheMap(threadData_t *threadData, modelica_metatype _iCacheMap)
{
  modelica_integer _oCacheLineSize;
  modelica_integer _cacheLineSize;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheLineSize has no default value.
  // _cacheLineSize has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iCacheMap;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          
          _cacheLineSize = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = _cacheLineSize;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _cacheLineSize = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = _cacheLineSize;
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
  _oCacheLineSize = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oCacheLineSize;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getCacheLineSizeOfCacheMap(threadData_t *threadData, modelica_metatype _iCacheMap)
{
  modelica_integer _oCacheLineSize;
  modelica_metatype out_oCacheLineSize;
  _oCacheLineSize = omc_HpcOmMemory_getCacheLineSizeOfCacheMap(threadData, _iCacheMap);
  out_oCacheLineSize = mmc_mk_icon(_oCacheLineSize);
  return out_oCacheLineSize;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getCacheVariablesOfCacheMap(threadData_t *threadData, modelica_metatype _iCacheMap)
{
  modelica_metatype _oCacheVariables = NULL;
  modelica_metatype _cacheVariables = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheVariables has no default value.
  // _cacheVariables has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iCacheMap;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _cacheVariables = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _cacheVariables;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _cacheVariables = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = _cacheVariables;
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
  _oCacheVariables = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCacheVariables;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getAllCacheLinesOfCacheMap(threadData_t *threadData, modelica_metatype _iCacheMap)
{
  modelica_metatype _oCacheLines = NULL;
  modelica_metatype _cacheLinesFloat = NULL;
  modelica_metatype _cacheLinesInt = NULL;
  modelica_metatype _cacheLinesBool = NULL;
  modelica_metatype _allCacheLines = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheLines has no default value.
  // _cacheLinesFloat has no default value.
  // _cacheLinesInt has no default value.
  // _cacheLinesBool has no default value.
  // _allCacheLines has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iCacheMap;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _cacheLinesFloat = tmpMeta6;
          _cacheLinesInt = tmpMeta7;
          _cacheLinesBool = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = listAppend(_cacheLinesFloat, listAppend(_cacheLinesInt, _cacheLinesBool));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _allCacheLines = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = _allCacheLines;
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
  _oCacheLines = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCacheLines;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine(threadData_t *threadData, modelica_metatype _iPartlyFilledCacheLine)
{
  modelica_metatype _oCacheLineMap = NULL;
  modelica_metatype _cacheLineMap = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheLineMap has no default value.
  // _cacheLineMap has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iPartlyFilledCacheLine;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cacheLineMap = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _cacheLineMap;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _cacheLineMap = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = _cacheLineMap;
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
  _oCacheLineMap = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCacheLineMap;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getTaskListTasks(threadData_t *threadData, modelica_metatype _iTaskList)
{
  modelica_metatype _oTasks = NULL;
  modelica_metatype _tasks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTasks has no default value.
  // _tasks has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTaskList;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _tasks = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _tasks;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _tasks = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = _tasks;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT0),stdout);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta8;
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
  _oTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createArrayIndexCref__impl(threadData_t *threadData, modelica_integer _iIdx, modelica_metatype _iDimElemCount, modelica_metatype _iRefCurrentDim)
{
  modelica_metatype _oRefCurrentDim = NULL;
  modelica_string _ident = NULL;
  modelica_metatype _identType = NULL;
  modelica_metatype _subscriptLst = NULL;
  modelica_metatype _componentRef = NULL;
  modelica_integer _currentDim;
  modelica_integer _idxValue;
  modelica_integer _dimElemsPre;
  modelica_integer _dimElems;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oRefCurrentDim has no default value.
  // _ident has no default value.
  // _identType has no default value.
  // _subscriptLst has no default value.
  // _componentRef has no default value.
  // _currentDim has no default value.
  // _idxValue has no default value.
  // _dimElemsPre has no default value.
  // _dimElems has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iRefCurrentDim;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,4) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          if (1 != tmp12) goto tmp3_end;
          _ident = tmpMeta7;
          _identType = tmpMeta8;
          _subscriptLst = tmpMeta9;
          _componentRef = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = (((modelica_integer) 1) <= listLength(_iDimElemCount));
          if (1 /* true */ != tmp13) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta14 = mmc_mk_box2(0, _componentRef, mmc_mk_integer(((modelica_integer) 1)));
          tmpMeta15 = omc_HpcOmMemory_createArrayIndexCref__impl(threadData, _iIdx, _iDimElemCount, tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
          _componentRef = tmpMeta16;
          tmpMeta17 = mmc_mk_box5(3, &DAE_ComponentRef_CREF__QUAL__desc, _ident, _identType, _subscriptLst, _componentRef);
          tmpMeta18 = mmc_mk_box2(0, tmpMeta17, mmc_mk_integer(((modelica_integer) 2)));
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_boolean tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,0,4) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 4));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 5));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          _ident = tmpMeta20;
          _identType = tmpMeta21;
          _subscriptLst = tmpMeta22;
          _componentRef = tmpMeta23;
          _currentDim = tmp25  /* pattern as ty=Integer */;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp26 = (_currentDim <= listLength(_iDimElemCount));
          if (1 /* true */ != tmp26) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta27 = mmc_mk_box2(0, _componentRef, mmc_mk_integer(_currentDim));
          tmpMeta28 = omc_HpcOmMemory_createArrayIndexCref__impl(threadData, _iIdx, _iDimElemCount, tmpMeta27);
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 1));
          _componentRef = tmpMeta29;
          tmpMeta30 = mmc_mk_box5(3, &DAE_ComponentRef_CREF__QUAL__desc, _ident, _identType, _subscriptLst, _componentRef);
          tmpMeta31 = mmc_mk_box2(0, tmpMeta30, mmc_mk_integer(((modelica_integer) 1) + _currentDim));
          tmpMeta1 = tmpMeta31;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_boolean tmp38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,1,3) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 3));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 4));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp37 = mmc_unbox_integer(tmpMeta36);
          if (1 != tmp37) goto tmp3_end;
          _ident = tmpMeta33;
          _identType = tmpMeta34;
          _subscriptLst = tmpMeta35;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp38 = (((modelica_integer) 1) <= listLength(_iDimElemCount));
          if (1 /* true */ != tmp38) goto goto_2;

          _idxValue = ((modelica_integer) 1) + modelica_integer_mod(((modelica_integer) -1) + _iIdx, mmc_unbox_integer(listHead(_iDimElemCount)));

          tmpMeta40 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_idxValue));
          tmpMeta41 = mmc_mk_box2(5, &DAE_Subscript_INDEX__desc, tmpMeta40);
          tmpMeta39 = mmc_mk_cons(tmpMeta41, _subscriptLst);
          _subscriptLst = tmpMeta39;
          tmpMeta42 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _ident, _identType, _subscriptLst);
          tmpMeta43 = mmc_mk_box2(0, tmpMeta42, mmc_mk_integer(((modelica_integer) 2)));
          tmpMeta1 = omc_HpcOmMemory_createArrayIndexCref__impl(threadData, _iIdx, _iDimElemCount, tmpMeta43);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_integer tmp49;
          modelica_boolean tmp50;
          modelica_integer tmp51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,1,3) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 2));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 3));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 4));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp49 = mmc_unbox_integer(tmpMeta48);
          _ident = tmpMeta45;
          _identType = tmpMeta46;
          _subscriptLst = tmpMeta47;
          _currentDim = tmp49  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp50 = (_currentDim <= listLength(_iDimElemCount));
          if (1 /* true */ != tmp50) goto goto_2;

          _dimElemsPre = mmc_unbox_integer(omc_List_reduce(threadData, omc_List_sublist(threadData, _iDimElemCount, ((modelica_integer) 1), ((modelica_integer) 1) + listLength(_iDimElemCount) - _currentDim), boxvar_intMul));

          _dimElems = mmc_unbox_integer(listGet(_iDimElemCount, _currentDim));

          tmp51 = _dimElemsPre;
          if (tmp51 == 0) {goto goto_2;}
          _idxValue = ((modelica_integer) 1) + modelica_integer_mod(modelica_div_integer(((modelica_integer) -1) + _iIdx,tmp51).quot, _dimElems);

          tmpMeta53 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_idxValue));
          tmpMeta54 = mmc_mk_box2(5, &DAE_Subscript_INDEX__desc, tmpMeta53);
          tmpMeta52 = mmc_mk_cons(tmpMeta54, _subscriptLst);
          _subscriptLst = tmpMeta52;
          tmpMeta55 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _ident, _identType, _subscriptLst);
          tmpMeta56 = mmc_mk_box2(0, tmpMeta55, mmc_mk_integer(((modelica_integer) 1) + _currentDim));
          tmpMeta1 = omc_HpcOmMemory_createArrayIndexCref__impl(threadData, _iIdx, _iDimElemCount, tmpMeta56);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_integer tmp62;
          modelica_boolean tmp63;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta57,1,3) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 2));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 3));
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 4));
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp62 = mmc_unbox_integer(tmpMeta61);
          _ident = tmpMeta58;
          _identType = tmpMeta59;
          _subscriptLst = tmpMeta60;
          _currentDim = tmp62  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp63 = (_currentDim <= listLength(_iDimElemCount));
          if (0 /* false */ != tmp63) goto goto_2;
          tmpMeta1 = _iRefCurrentDim;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT1),stdout);
          tmpMeta1 = _iRefCurrentDim;
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
      if (++tmp4 < 6) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oRefCurrentDim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oRefCurrentDim;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createArrayIndexCref__impl(threadData_t *threadData, modelica_metatype _iIdx, modelica_metatype _iDimElemCount, modelica_metatype _iRefCurrentDim)
{
  modelica_integer tmp1;
  modelica_metatype _oRefCurrentDim = NULL;
  tmp1 = mmc_unbox_integer(_iIdx);
  _oRefCurrentDim = omc_HpcOmMemory_createArrayIndexCref__impl(threadData, tmp1, _iDimElemCount, _iRefCurrentDim);
  /* skip box _oRefCurrentDim; tuple<DAE.ComponentRef, #Integer> */
  return _oRefCurrentDim;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createArrayIndexCref(threadData_t *threadData, modelica_integer _iIdx, modelica_metatype _iDimElemCount, modelica_metatype _iCref)
{
  modelica_metatype _oCref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCref has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = mmc_mk_box2(0, _iCref, mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta2 = omc_HpcOmMemory_createArrayIndexCref__impl(threadData, _iIdx, _iDimElemCount, tmpMeta1);
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  _oCref = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _oCref;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createArrayIndexCref(threadData_t *threadData, modelica_metatype _iIdx, modelica_metatype _iDimElemCount, modelica_metatype _iCref)
{
  modelica_integer tmp1;
  modelica_metatype _oCref = NULL;
  tmp1 = mmc_unbox_integer(_iIdx);
  _oCref = omc_HpcOmMemory_createArrayIndexCref(threadData, tmp1, _iDimElemCount, _iCref);
  /* skip box _oCref; DAE.ComponentRef */
  return _oCref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_expandCref1(threadData_t *threadData, modelica_metatype _iCref, modelica_integer _iElems, modelica_metatype _iDimElemCount)
{
  modelica_metatype _oCrefs = NULL;
  modelica_metatype _tmpCrefs = NULL;
  modelica_metatype _idxList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCrefs has no default value.
  // _tmpCrefs has no default value.
  // _idxList has no default value.
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
          _tmpCrefs = omc_ComponentReference_expandCref(threadData, _iCref, 0 /* false */);

          /* Pattern-matching assignment */
          tmp6 = (listLength(_tmpCrefs) == _iElems);
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta1 = _tmpCrefs;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _idxList = omc_List_intRange(threadData, mmc_unbox_integer(omc_List_reduce(threadData, _iDimElemCount, boxvar_intMul)));
          tmpMeta1 = omc_List_map2(threadData, _idxList, boxvar_HpcOmMemory_createArrayIndexCref, _iDimElemCount, _iCref);
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
  _oCrefs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCrefs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_expandCref1(threadData_t *threadData, modelica_metatype _iCref, modelica_metatype _iElems, modelica_metatype _iDimElemCount)
{
  modelica_integer tmp1;
  modelica_metatype _oCrefs = NULL;
  tmp1 = mmc_unbox_integer(_iElems);
  _oCrefs = omc_HpcOmMemory_expandCref1(threadData, _iCref, tmp1, _iDimElemCount);
  /* skip box _oCrefs; list<DAE.ComponentRef> */
  return _oCrefs;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_getCrefDims(threadData_t *threadData, modelica_metatype _iCref)
{
  modelica_integer _oDims;
  modelica_metatype _componentRef = NULL;
  modelica_metatype _subscriptLst = NULL;
  modelica_integer _tmpDims;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oDims has no default value.
  // _componentRef has no default value.
  // _subscriptLst has no default value.
  // _tmpDims has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iCref;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _componentRef = tmpMeta5;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _iCref = _componentRef;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _subscriptLst = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = listLength(_subscriptLst);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);
          tmp1 = ((modelica_integer) 0);
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
  _oDims = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oDims;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getCrefDims(threadData_t *threadData, modelica_metatype _iCref)
{
  modelica_integer _oDims;
  modelica_metatype out_oDims;
  _oDims = omc_HpcOmMemory_getCrefDims(threadData, _iCref);
  out_oDims = mmc_mk_icon(_oDims);
  return out_oDims;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getDimElemCount(threadData_t *threadData, modelica_metatype _iNumArrayElems, modelica_integer _iDims)
{
  modelica_metatype _oNumArrayElems = NULL;
  modelica_metatype _dimList = NULL;
  modelica_metatype _intNumArrayElems = NULL;
  modelica_integer _dims;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oNumArrayElems has no default value.
  // _dimList has no default value.
  // _intNumArrayElems has no default value.
  // _dims has no default value.
  _dims = ((_iDims <= ((modelica_integer) 0))?listLength(_iNumArrayElems):_iDims);

  _dimList = omc_List_intRange(threadData, _dims);

  _intNumArrayElems = omc_List_map(threadData, _iNumArrayElems, boxvar_stringInt);

  _oNumArrayElems = omc_List_map1(threadData, _dimList, boxvar_List_getIndexFirst, _intNumArrayElems);
  _return: OMC_LABEL_UNUSED
  return _oNumArrayElems;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getDimElemCount(threadData_t *threadData, modelica_metatype _iNumArrayElems, modelica_metatype _iDims)
{
  modelica_integer tmp1;
  modelica_metatype _oNumArrayElems = NULL;
  tmp1 = mmc_unbox_integer(_iDims);
  _oNumArrayElems = omc_HpcOmMemory_getDimElemCount(threadData, _iNumArrayElems, tmp1);
  /* skip box _oNumArrayElems; list<#Integer> */
  return _oNumArrayElems;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_removeSubscripts(threadData_t *threadData, modelica_metatype _iCref)
{
  modelica_metatype _oCref = NULL;
  modelica_string _ident = NULL;
  modelica_metatype _identType = NULL;
  modelica_metatype _subscriptLst = NULL;
  modelica_metatype _componentRef = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCref has no default value.
  // _ident has no default value.
  // _identType has no default value.
  // _subscriptLst has no default value.
  // _componentRef has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iCref;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _ident = tmpMeta5;
          _identType = tmpMeta6;
          _subscriptLst = tmpMeta7;
          _componentRef = tmpMeta8;
          /* Pattern matching succeeded */
          _componentRef = omc_HpcOmMemory_removeSubscripts(threadData, _componentRef);
          tmpMeta9 = mmc_mk_box5(3, &DAE_ComponentRef_CREF__QUAL__desc, _ident, _identType, _subscriptLst, _componentRef);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _ident = tmpMeta10;
          _identType = tmpMeta11;
          _subscriptLst = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _ident, _identType, tmpMeta13);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iCref;
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
  _oCref = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCref;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmMemory_getDimStringOfDimElement(threadData_t *threadData, modelica_metatype _iDim)
{
  modelica_string _oDimString = NULL;
  modelica_integer _integer;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oDimString has no default value.
  // _integer has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iDim;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          _integer = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = intString(_integer);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);
          tmp1 = _OMC_LIT4;
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
  _oDimString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oDimString;
}

DLLDirection
modelica_metatype omc_HpcOmMemory_expandCrefWithDims(threadData_t *threadData, modelica_metatype _iCref, modelica_metatype _iDims)
{
  modelica_metatype _oCrefs = NULL;
  modelica_metatype _dim = NULL;
  modelica_metatype _numArrayElems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCrefs has no default value.
  // _dim has no default value.
  // _numArrayElems has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _numArrayElems = tmpMeta1;

  {
    modelica_metatype _dim;
    for (tmpMeta2 = _iDims; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _dim = MMC_CAR(tmpMeta2);
      tmpMeta3 = mmc_mk_cons(omc_HpcOmMemory_getDimStringOfDimElement(threadData, _dim), _numArrayElems);
      _numArrayElems = tmpMeta3;
    }
  }

  _oCrefs = omc_HpcOmMemory_expandCref(threadData, _iCref, _numArrayElems);
  _return: OMC_LABEL_UNUSED
  return _oCrefs;
}

DLLDirection
modelica_metatype omc_HpcOmMemory_expandCref(threadData_t *threadData, modelica_metatype _iCref, modelica_metatype _iNumArrayElems)
{
  modelica_metatype _oCrefs = NULL;
  modelica_integer _elems;
  modelica_integer _dims;
  modelica_metatype _dimElemCount = NULL;
  modelica_metatype _cref = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCrefs has no default value.
  // _elems has no default value.
  // _dims has no default value.
  // _dimElemCount has no default value.
  // _cref has no default value.
  _cref = omc_HpcOmMemory_removeSubscripts(threadData, _iCref);

  _dims = omc_HpcOmMemory_getCrefDims(threadData, _iCref);

  _dimElemCount = omc_HpcOmMemory_getDimElemCount(threadData, listReverse(_iNumArrayElems), _dims);

  _elems = mmc_unbox_integer(omc_List_reduce(threadData, _dimElemCount, boxvar_intMul));

  _dims = listLength(_iNumArrayElems);

  _oCrefs = omc_HpcOmMemory_expandCref1(threadData, _cref, _elems, _dimElemCount);
  _return: OMC_LABEL_UNUSED
  return _oCrefs;
}

DLLDirection
modelica_metatype omc_HpcOmMemory_getSubscriptListOfArrayCref(threadData_t *threadData, modelica_metatype _iCref, modelica_metatype _iNumArrayElems)
{
  modelica_metatype _oSubscriptList = NULL;
  modelica_metatype _tmpCrefs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSubscriptList has no default value.
  // _tmpCrefs has no default value.
  _tmpCrefs = omc_HpcOmMemory_expandCref(threadData, _iCref, _iNumArrayElems);

  _oSubscriptList = omc_List_map(threadData, _tmpCrefs, boxvar_ComponentReference_crefLastSubs);
  _return: OMC_LABEL_UNUSED
  return _oSubscriptList;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printSimCodeVarTypes(threadData_t *threadData, modelica_metatype _iSimCodeVarTypes)
{
  modelica_integer _varIdx;
  modelica_integer _varDataType;
  modelica_integer _varSize;
  modelica_integer _varType;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varIdx has no default value.
  // _varDataType has no default value.
  // _varSize has no default value.
  // _varType has no default value.
  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = arrayLength(_iSimCodeVarTypes);
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer _varIdx;
    for(_varIdx = ((modelica_integer) 1); in_range_integer(_varIdx, tmp16, tmp18); _varIdx += tmp17)
    {
      /* Pattern-matching assignment */
      tmpMeta1 = arrayGet(_iSimCodeVarTypes, _varIdx);
      tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
      tmp3 = mmc_unbox_integer(tmpMeta2);
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
      tmp5 = mmc_unbox_integer(tmpMeta4);
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
      tmp7 = mmc_unbox_integer(tmpMeta6);
      _varDataType = tmp3  /* pattern as ty=Integer */;
      _varSize = tmp5  /* pattern as ty=Integer */;
      _varType = tmp7  /* pattern as ty=Integer */;

      tmpMeta8 = stringAppend(_OMC_LIT5,intString(_varIdx));
      tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT6);
      tmpMeta10 = stringAppend(tmpMeta9,intString(_varDataType));
      tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT7);
      tmpMeta12 = stringAppend(tmpMeta11,intString(_varSize));
      tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT8);
      tmpMeta14 = stringAppend(tmpMeta13,intString(_varType));
      tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT9);
      fputs(MMC_STRINGDATA(tmpMeta15),stdout);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmMemory_dumpScVarsByIdx(threadData_t *threadData, modelica_integer _iSimCodeVarIdx, modelica_metatype _iAllSCVarsMapping)
{
  modelica_string _oString = NULL;
  modelica_string _tmpString = NULL;
  modelica_metatype _simVar = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oString has no default value.
  // _tmpString has no default value.
  // _simVar has no default value.
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = arrayGet(_iAllSCVarsMapping, _iSimCodeVarIdx);
          if (optionNone(tmpMeta6)) goto goto_2;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          _simVar = tmpMeta7;
          tmp1 = omc_HpcOmMemory_dumpSimCodeVar(threadData, _simVar);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT10,intString(_iSimCodeVarIdx));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT9);
          fputs(MMC_STRINGDATA(tmpMeta9),stdout);
          tmp1 = _OMC_LIT11;
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
  _oString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oString;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_dumpScVarsByIdx(threadData_t *threadData, modelica_metatype _iSimCodeVarIdx, modelica_metatype _iAllSCVarsMapping)
{
  modelica_integer tmp1;
  modelica_string _oString = NULL;
  tmp1 = mmc_unbox_integer(_iSimCodeVarIdx);
  _oString = omc_HpcOmMemory_dumpScVarsByIdx(threadData, tmp1, _iAllSCVarsMapping);
  /* skip box _oString; String */
  return _oString;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printScVarInfos(threadData_t *threadData, modelica_metatype _iScVarInfos)
{
  modelica_integer _scVarIdx;
  modelica_integer _ownerThread;
  modelica_boolean _isShared;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scVarIdx has no default value.
  // _ownerThread has no default value.
  // _isShared has no default value.
  fputs(MMC_STRINGDATA(_OMC_LIT12),stdout);

  tmp12 = ((modelica_integer) 1); tmp13 = 1; tmp14 = arrayLength(_iScVarInfos);
  if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
  {
    modelica_integer _scVarIdx;
    for(_scVarIdx = ((modelica_integer) 1); in_range_integer(_scVarIdx, tmp12, tmp14); _scVarIdx += tmp13)
    {
      /* Pattern-matching assignment */
      tmpMeta1 = arrayGet(_iScVarInfos, _scVarIdx);
      tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
      tmp3 = mmc_unbox_integer(tmpMeta2);
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
      tmp5 = mmc_unbox_integer(tmpMeta4);
      _ownerThread = tmp3  /* pattern as ty=Integer */;
      _isShared = tmp5  /* pattern as ty=Boolean */;

      tmpMeta6 = stringAppend(_OMC_LIT13,intString(_scVarIdx));
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT14);
      tmpMeta8 = stringAppend(tmpMeta7,intString(_ownerThread));
      tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT15);
      tmpMeta10 = stringAppend(tmpMeta9,(_isShared?_OMC_LIT16:_OMC_LIT17));
      tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT9);
      fputs(MMC_STRINGDATA(tmpMeta11),stdout);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_printSccNodeMapping0(threadData_t *threadData, modelica_integer _iMappingEntry, modelica_integer _iIdx)
{
  modelica_integer _oIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oIdx has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT18,intString(_iIdx));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT19);
  tmpMeta3 = stringAppend(tmpMeta2,intString(_iMappingEntry));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT9);
  fputs(MMC_STRINGDATA(tmpMeta4),stdout);

  _oIdx = ((modelica_integer) 1) + _iIdx;
  _return: OMC_LABEL_UNUSED
  return _oIdx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_printSccNodeMapping0(threadData_t *threadData, modelica_metatype _iMappingEntry, modelica_metatype _iIdx)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oIdx;
  modelica_metatype out_oIdx;
  tmp1 = mmc_unbox_integer(_iMappingEntry);
  tmp2 = mmc_unbox_integer(_iIdx);
  _oIdx = omc_HpcOmMemory_printSccNodeMapping0(threadData, tmp1, tmp2);
  out_oIdx = mmc_mk_icon(_oIdx);
  return out_oIdx;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printSccNodeMapping(threadData_t *threadData, modelica_metatype _iMapping)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(MMC_STRINGDATA(_OMC_LIT20),stdout);

  omc_Array_fold(threadData, _iMapping, boxvar_HpcOmMemory_printSccNodeMapping0, mmc_mk_integer(((modelica_integer) 1)));
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printEqSimCodeVarMapping(threadData_t *threadData, modelica_metatype _iMapping)
{
  modelica_metatype _sysInformation = NULL;
  modelica_integer _sysIdx;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sysInformation has no default value.
  // _sysIdx has no default value.
  // _vars has no default value.
  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = arrayLength(_iMapping);
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
  {
    modelica_integer _sysIdx;
    for(_sysIdx = ((modelica_integer) 1); in_range_integer(_sysIdx, tmp6, tmp8); _sysIdx += tmp7)
    {
      tmpMeta1 = stringAppend(_OMC_LIT21,intString(_sysIdx));
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT9);
      fputs(MMC_STRINGDATA(tmpMeta2),stdout);

      _sysInformation = arrayGet(_iMapping, _sysIdx);

      tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength(_sysInformation);
      if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
      {
        modelica_integer _eqIdx;
        for(_eqIdx = ((modelica_integer) 1); in_range_integer(_eqIdx, tmp3, tmp5); _eqIdx += tmp4)
        {
          _vars = arrayGet(_sysInformation, _eqIdx);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_printCacheLineTaskMapping0(threadData_t *threadData, modelica_metatype _iTasks, modelica_integer _iCacheLineIdx)
{
  modelica_integer _oCacheLineIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheLineIdx has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT22,intString(_iCacheLineIdx));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT23);
  tmpMeta3 = stringAppend(tmpMeta2,stringDelimitList(omc_List_map(threadData, _iTasks, boxvar_intString), _OMC_LIT24));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT9);
  fputs(MMC_STRINGDATA(tmpMeta4),stdout);

  _oCacheLineIdx = ((modelica_integer) 1) + _iCacheLineIdx;
  _return: OMC_LABEL_UNUSED
  return _oCacheLineIdx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_printCacheLineTaskMapping0(threadData_t *threadData, modelica_metatype _iTasks, modelica_metatype _iCacheLineIdx)
{
  modelica_integer tmp1;
  modelica_integer _oCacheLineIdx;
  modelica_metatype out_oCacheLineIdx;
  tmp1 = mmc_unbox_integer(_iCacheLineIdx);
  _oCacheLineIdx = omc_HpcOmMemory_printCacheLineTaskMapping0(threadData, _iTasks, tmp1);
  out_oCacheLineIdx = mmc_mk_icon(_oCacheLineIdx);
  return out_oCacheLineIdx;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printCacheLineTaskMapping(threadData_t *threadData, modelica_metatype _iCacheLineTaskMapping)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Array_fold(threadData, _iCacheLineTaskMapping, boxvar_HpcOmMemory_printCacheLineTaskMapping0, mmc_mk_integer(((modelica_integer) 1)));
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_printScVarTaskMapping0(threadData_t *threadData, modelica_integer _iMappingEntry, modelica_integer _iScVarIdx)
{
  modelica_integer _oScVarIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oScVarIdx has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT25,intString(_iScVarIdx));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT26);
  tmpMeta3 = stringAppend(tmpMeta2,intString(_iMappingEntry));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT9);
  fputs(MMC_STRINGDATA(tmpMeta4),stdout);

  _oScVarIdx = ((modelica_integer) 1) + _iScVarIdx;
  _return: OMC_LABEL_UNUSED
  return _oScVarIdx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_printScVarTaskMapping0(threadData_t *threadData, modelica_metatype _iMappingEntry, modelica_metatype _iScVarIdx)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oScVarIdx;
  modelica_metatype out_oScVarIdx;
  tmp1 = mmc_unbox_integer(_iMappingEntry);
  tmp2 = mmc_unbox_integer(_iScVarIdx);
  _oScVarIdx = omc_HpcOmMemory_printScVarTaskMapping0(threadData, tmp1, tmp2);
  out_oScVarIdx = mmc_mk_icon(_oScVarIdx);
  return out_oScVarIdx;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printScVarTaskMapping(threadData_t *threadData, modelica_metatype _iMapping)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(MMC_STRINGDATA(_OMC_LIT27),stdout);

  omc_Array_fold(threadData, _iMapping, boxvar_HpcOmMemory_printScVarTaskMapping0, mmc_mk_integer(((modelica_integer) 1)));

  fputs(MMC_STRINGDATA(_OMC_LIT9),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_printNodeSimCodeVarMapping0(threadData_t *threadData, modelica_metatype _iMappingEntry, modelica_integer _iNodeIdx)
{
  modelica_integer _oNodeIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oNodeIdx has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT28,intString(_iNodeIdx));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT29);
  tmpMeta3 = stringAppend(tmpMeta2,stringDelimitList(omc_List_map(threadData, _iMappingEntry, boxvar_intString), _OMC_LIT24));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT9);
  fputs(MMC_STRINGDATA(tmpMeta4),stdout);

  _oNodeIdx = ((modelica_integer) 1) + _iNodeIdx;
  _return: OMC_LABEL_UNUSED
  return _oNodeIdx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_printNodeSimCodeVarMapping0(threadData_t *threadData, modelica_metatype _iMappingEntry, modelica_metatype _iNodeIdx)
{
  modelica_integer tmp1;
  modelica_integer _oNodeIdx;
  modelica_metatype out_oNodeIdx;
  tmp1 = mmc_unbox_integer(_iNodeIdx);
  _oNodeIdx = omc_HpcOmMemory_printNodeSimCodeVarMapping0(threadData, _iMappingEntry, tmp1);
  out_oNodeIdx = mmc_mk_icon(_oNodeIdx);
  return out_oNodeIdx;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printNodeSimCodeVarMapping(threadData_t *threadData, modelica_metatype _iMapping)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(MMC_STRINGDATA(_OMC_LIT30),stdout);

  omc_Array_fold(threadData, _iMapping, boxvar_HpcOmMemory_printNodeSimCodeVarMapping0, mmc_mk_integer(((modelica_integer) 1)));

  fputs(MMC_STRINGDATA(_OMC_LIT9),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmMemory_dumpSimCodeVar(threadData_t *threadData, modelica_metatype _iVar)
{
  modelica_string _oString = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oString has no default value.
  // _name has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iVar;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _name = tmpMeta2;

  _oString = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _name);
  _return: OMC_LABEL_UNUSED
  return _oString;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_cacheLineEntryToStringClean(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_metatype _iString)
{
  modelica_metatype _oString = NULL;
  modelica_integer _start;
  modelica_integer _dataType;
  modelica_integer _size;
  modelica_integer _scVarIdx;
  modelica_string _scVarStr = NULL;
  modelica_string _iVarsString = NULL;
  modelica_string _iBytesString = NULL;
  modelica_string _iBytesStringNew = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oString has no default value.
  // _start has no default value.
  // _dataType has no default value.
  // _size has no default value.
  // _scVarIdx has no default value.
  // _scVarStr has no default value.
  // _iVarsString has no default value.
  // _iBytesString has no default value.
  // _iBytesStringNew has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iString;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _iVarsString = tmpMeta2;
  _iBytesString = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _iCacheLineEntry;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 4));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 5));
  tmp12 = mmc_unbox_integer(tmpMeta11);
  _start = tmp6  /* pattern as ty=Integer */;
  _dataType = tmp8  /* pattern as ty=Integer */;
  _size = tmp10  /* pattern as ty=Integer */;
  _scVarIdx = tmp12  /* pattern as ty=Integer */;

  _scVarStr = intString(_scVarIdx);

  tmpMeta13 = stringAppend(_iVarsString,_OMC_LIT31);
  tmpMeta14 = stringAppend(tmpMeta13,_scVarStr);
  tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT32);
  _iVarsString = tmpMeta15;

  _iBytesStringNew = intString(_start);

  _iBytesStringNew = omc_Util_stringPadRight(threadData, _iBytesStringNew, ((modelica_integer) 3) + stringLength(_scVarStr), _OMC_LIT32);

  tmpMeta16 = stringAppend(_iBytesString,_iBytesStringNew);
  _iBytesString = tmpMeta16;

  tmpMeta17 = mmc_mk_box2(0, _iVarsString, _iBytesString);
  _oString = tmpMeta17;
  _return: OMC_LABEL_UNUSED
  return _oString;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_cacheLineEntryToString(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_metatype _iCacheVariables, modelica_metatype _iString)
{
  modelica_metatype _oString = NULL;
  modelica_integer _start;
  modelica_integer _dataType;
  modelica_integer _size;
  modelica_integer _scVarIdx;
  modelica_string _scVarStr = NULL;
  modelica_metatype _iVar = NULL;
  modelica_string _iVarsString = NULL;
  modelica_string _iBytesString = NULL;
  modelica_string _iBytesStringNew = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oString has no default value.
  // _start has no default value.
  // _dataType has no default value.
  // _size has no default value.
  // _scVarIdx has no default value.
  // _scVarStr has no default value.
  // _iVar has no default value.
  // _iVarsString has no default value.
  // _iBytesString has no default value.
  // _iBytesStringNew has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iString;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _iVarsString = tmpMeta2;
  _iBytesString = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _iCacheLineEntry;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 4));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 5));
  tmp12 = mmc_unbox_integer(tmpMeta11);
  _start = tmp6  /* pattern as ty=Integer */;
  _dataType = tmp8  /* pattern as ty=Integer */;
  _size = tmp10  /* pattern as ty=Integer */;
  _scVarIdx = tmp12  /* pattern as ty=Integer */;

  _iVar = listGet(_iCacheVariables, ((modelica_integer) 1) + listLength(_iCacheVariables) - _scVarIdx);

  tmpMeta13 = stringAppend(omc_HpcOmMemory_dumpSimCodeVar(threadData, _iVar),_OMC_LIT33);
  tmpMeta14 = stringAppend(tmpMeta13,intString(_scVarIdx));
  tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT34);
  _scVarStr = tmpMeta15;

  tmpMeta16 = stringAppend(_iVarsString,_OMC_LIT32);
  tmpMeta17 = stringAppend(tmpMeta16,_scVarStr);
  _iVarsString = tmpMeta17;

  if((_start > ((modelica_integer) 0)))
  {
    tmpMeta18 = stringAppend(_iVarsString,_OMC_LIT35);
    _iVarsString = tmpMeta18;

    _iBytesStringNew = intString(_start);
  }
  else
  {
    _iBytesStringNew = _OMC_LIT4;
  }

  _iBytesStringNew = omc_Util_stringPadLeft(threadData, _iBytesStringNew, ((modelica_integer) 2) + stringLength(_scVarStr) + stringLength(_iBytesStringNew), _OMC_LIT32);

  tmpMeta19 = stringAppend(_iBytesString,_iBytesStringNew);
  _iBytesString = tmpMeta19;

  tmpMeta20 = mmc_mk_box2(0, _iVarsString, _iBytesString);
  _oString = tmpMeta20;
  _return: OMC_LABEL_UNUSED
  return _oString;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printCacheLineMapClean(threadData_t *threadData, modelica_metatype _iCacheLineMap)
{
  modelica_integer _idx;
  modelica_metatype _entries = NULL;
  modelica_string _iVarsString = NULL;
  modelica_string _iBytesString = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
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
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _idx has no default value.
  // _entries has no default value.
  // _iVarsString has no default value.
  // _iBytesString has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLineMap;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _idx = tmp3  /* pattern as ty=Integer */;
  _entries = tmpMeta4;

  tmpMeta5 = stringAppend(_OMC_LIT36,intString(_idx));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT37);
  tmpMeta7 = stringAppend(tmpMeta6,intString(listLength(_entries)));
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT38);
  fputs(MMC_STRINGDATA(tmpMeta8),stdout);

  /* Pattern-matching assignment */
  tmpMeta9 = omc_List_fold(threadData, _entries, boxvar_HpcOmMemory_cacheLineEntryToStringClean, _OMC_LIT39);
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
  _iVarsString = tmpMeta10;
  _iBytesString = tmpMeta11;

  tmpMeta12 = stringAppend(_OMC_LIT40,_iVarsString);
  tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT9);
  fputs(MMC_STRINGDATA(tmpMeta13),stdout);

  tmpMeta14 = stringAppend(_OMC_LIT40,_iBytesString);
  tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT9);
  fputs(MMC_STRINGDATA(tmpMeta15),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT9),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printCacheLineMap(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_metatype _iCacheVariables)
{
  modelica_integer _idx;
  modelica_metatype _entries = NULL;
  modelica_string _iVarsString = NULL;
  modelica_string _iBytesString = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
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
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _idx has no default value.
  // _entries has no default value.
  // _iVarsString has no default value.
  // _iBytesString has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLineMap;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _idx = tmp3  /* pattern as ty=Integer */;
  _entries = tmpMeta4;

  tmpMeta5 = stringAppend(_OMC_LIT36,intString(_idx));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT37);
  tmpMeta7 = stringAppend(tmpMeta6,intString(listLength(_entries)));
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT38);
  fputs(MMC_STRINGDATA(tmpMeta8),stdout);

  /* Pattern-matching assignment */
  tmpMeta9 = omc_List_fold1(threadData, _entries, boxvar_HpcOmMemory_cacheLineEntryToString, _iCacheVariables, _OMC_LIT39);
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
  _iVarsString = tmpMeta10;
  _iBytesString = tmpMeta11;

  tmpMeta12 = stringAppend(_OMC_LIT40,_iVarsString);
  tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT9);
  fputs(MMC_STRINGDATA(tmpMeta13),stdout);

  tmpMeta14 = stringAppend(_OMC_LIT40,_iBytesString);
  tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT9);
  fputs(MMC_STRINGDATA(tmpMeta15),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT9),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_printCacheVariable(threadData_t *threadData, modelica_metatype _iCacheVariable, modelica_integer _iIdx)
{
  modelica_integer _oIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oIdx has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT40,intString(_iIdx));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT23);
  tmpMeta3 = stringAppend(tmpMeta2,omc_HpcOmMemory_dumpSimCodeVar(threadData, _iCacheVariable));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT9);
  fputs(MMC_STRINGDATA(tmpMeta4),stdout);

  _oIdx = ((modelica_integer) -1) + _iIdx;
  _return: OMC_LABEL_UNUSED
  return _oIdx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_printCacheVariable(threadData_t *threadData, modelica_metatype _iCacheVariable, modelica_metatype _iIdx)
{
  modelica_integer tmp1;
  modelica_integer _oIdx;
  modelica_metatype out_oIdx;
  tmp1 = mmc_unbox_integer(_iIdx);
  _oIdx = omc_HpcOmMemory_printCacheVariable(threadData, _iCacheVariable, tmp1);
  out_oIdx = mmc_mk_icon(_oIdx);
  return out_oIdx;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_printCacheMap(threadData_t *threadData, modelica_metatype _iCacheMap)
{
  modelica_integer _cacheLineSize;
  modelica_metatype _cacheLinesFloat = NULL;
  modelica_metatype _cacheLinesInt = NULL;
  modelica_metatype _cacheLinesBool = NULL;
  modelica_metatype _cacheLines = NULL;
  modelica_metatype _cacheVariables = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cacheLineSize has no default value.
  // _cacheLinesFloat has no default value.
  // _cacheLinesInt has no default value.
  // _cacheLinesBool has no default value.
  // _cacheLines has no default value.
  // _cacheVariables has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _iCacheMap;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_integer tmp5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,5) == 0) goto tmp2_end;
          tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmp5 = mmc_unbox_integer(tmpMeta4);
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 5));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 6));
          _cacheLineSize = tmp5  /* pattern as ty=Integer */;
          _cacheVariables = tmpMeta6;
          _cacheLinesFloat = tmpMeta7;
          _cacheLinesInt = tmpMeta8;
          _cacheLinesBool = tmpMeta9;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT41),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT42),stdout);

          omc_List_fold(threadData, _cacheVariables, boxvar_HpcOmMemory_printCacheVariable, mmc_mk_integer(listLength(_cacheVariables)));

          fputs(MMC_STRINGDATA(_OMC_LIT43),stdout);

          omc_List_map1__0(threadData, _cacheLinesFloat, boxvar_HpcOmMemory_printCacheLineMap, _cacheVariables);

          fputs(MMC_STRINGDATA(_OMC_LIT44),stdout);

          omc_List_map1__0(threadData, _cacheLinesInt, boxvar_HpcOmMemory_printCacheLineMap, _cacheVariables);

          fputs(MMC_STRINGDATA(_OMC_LIT45),stdout);

          omc_List_map1__0(threadData, _cacheLinesBool, boxvar_HpcOmMemory_printCacheLineMap, _cacheVariables);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          _cacheLineSize = tmp11  /* pattern as ty=Integer */;
          _cacheVariables = tmpMeta12;
          _cacheLines = tmpMeta13;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT46),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT47),stdout);

          omc_List_map1__0(threadData, _cacheLines, boxvar_HpcOmMemory_printCacheLineMap, _cacheVariables);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT48),stdout);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendCacheLineEntryToGraph(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_metatype _iCacheVariables, modelica_metatype _iAddedVariables, modelica_metatype _iSchedulerInfo, modelica_metatype _iTopGraphAttThreadIdIdx, modelica_metatype _iScVarTaskMapping, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _realScVarIdxOffset = NULL;
  modelica_integer _scVarIdx;
  modelica_integer _realScVarIdx;
  modelica_integer _realScVarOffset;
  modelica_integer _taskIdx;
  modelica_integer _iTopGraphIdx;
  modelica_integer _iAttThreadIdIdx;
  modelica_integer _threadOwner;
  modelica_string _varString = NULL;
  modelica_string _threadText = NULL;
  modelica_string _nodeLabelText = NULL;
  modelica_string _nodeId = NULL;
  modelica_metatype _nodeLabel = NULL;
  modelica_metatype _iVar = NULL;
  modelica_metatype _name = NULL;
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
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  // _realScVarIdxOffset has no default value.
  // _scVarIdx has no default value.
  // _realScVarIdx has no default value.
  // _realScVarOffset has no default value.
  // _taskIdx has no default value.
  // _iTopGraphIdx has no default value.
  // _iAttThreadIdIdx has no default value.
  // _threadOwner has no default value.
  // _varString has no default value.
  // _threadText has no default value.
  // _nodeLabelText has no default value.
  // _nodeId has no default value.
  // _nodeLabel has no default value.
  // _iVar has no default value.
  // _name has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLineEntry;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _scVarIdx = tmp3  /* pattern as ty=Integer */;
  _threadOwner = tmp5  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta6 = _iTopGraphAttThreadIdIdx;
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  _iTopGraphIdx = tmp8  /* pattern as ty=Integer */;
  _iAttThreadIdIdx = tmp10  /* pattern as ty=Integer */;

  if((((modelica_integer) 1) + arrayLength(_iCacheVariables) - _scVarIdx >= ((modelica_integer) 1)))
  {
    _iVar = arrayGet(_iCacheVariables, ((modelica_integer) 1) + arrayLength(_iCacheVariables) - _scVarIdx);

    /* Pattern-matching assignment */
    tmpMeta11 = _iVar;
    tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
    _name = tmpMeta12;

    if(omc_BaseHashTable_hasKey(threadData, _name, _iVarNameSCVarIdxMapping))
    {
      _realScVarIdxOffset = omc_BaseHashTable_get(threadData, _name, _iVarNameSCVarIdxMapping);

      _realScVarIdx = mmc_unbox_integer(listGet(_realScVarIdxOffset, ((modelica_integer) 1)));

      _realScVarOffset = mmc_unbox_integer(listGet(_realScVarIdxOffset, ((modelica_integer) 2)));

      _realScVarIdx = _realScVarIdx + _realScVarOffset;

      _varString = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _name);

      _taskIdx = mmc_unbox_integer(arrayGet(_iScVarTaskMapping, _realScVarIdx));

      /* Pattern-matching assignment */
      tmpMeta13 = arrayGet(_iScVarInfos, _realScVarIdx);
      tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
      tmp15 = mmc_unbox_integer(tmpMeta14);
      _threadOwner = tmp15  /* pattern as ty=Integer */;

      tmpMeta16 = stringAppend(_OMC_LIT49,intString(_realScVarIdx));
      _nodeId = tmpMeta16;

      arrayUpdate(_iAddedVariables, _realScVarIdx, mmc_mk_boolean(1 /* true */));

      tmpMeta17 = stringAppend(_OMC_LIT50,intString(_threadOwner));
      _threadText = tmpMeta17;

      _nodeLabelText = intString(_realScVarIdx);

      tmpMeta18 = mmc_mk_box4(3, &GraphML_NodeLabel_NODELABEL__INTERNAL__desc, _nodeLabelText, mmc_mk_none(), _OMC_LIT51);
      _nodeLabel = tmpMeta18;

      tmpMeta19 = mmc_mk_cons(_nodeLabel, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta21 = mmc_mk_box2(0, mmc_mk_integer(_iAttThreadIdIdx), _threadText);
      tmpMeta20 = mmc_mk_cons(tmpMeta21, MMC_REFSTRUCTLIT(mmc_nil));
      _oGraphInfo = omc_GraphML_addNode(threadData, _nodeId, _OMC_LIT52, 1.0, tmpMeta19, _OMC_LIT53, mmc_mk_some(_varString), tmpMeta20, _iTopGraphIdx, _iGraphInfo, NULL);
    }
    else
    {
      _oGraphInfo = _iGraphInfo;
    }
  }
  else
  {
    _oGraphInfo = _iGraphInfo;
  }
  _return: OMC_LABEL_UNUSED
  return _oGraphInfo;
}

static modelica_metatype closure0_HpcOmMemory_appendCacheLineEntryToGraph(threadData_t *thData, modelica_metatype closure, modelica_metatype iCacheLineEntry, modelica_metatype iGraphInfo)
{
  modelica_metatype iCacheVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iAddedVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iSchedulerInfo = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iTopGraphAttThreadIdIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iScVarTaskMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype iVarNameSCVarIdxMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  modelica_metatype iScVarInfos = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),7));
  return boxptr_HpcOmMemory_appendCacheLineEntryToGraph(thData, iCacheLineEntry, iCacheVariables, iAddedVariables, iSchedulerInfo, iTopGraphAttThreadIdIdx, iScVarTaskMapping, iVarNameSCVarIdxMapping, iScVarInfos, iGraphInfo);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendCacheLineMapToGraph(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_metatype _iCacheVariables, modelica_metatype _iAddedVariables, modelica_metatype _iSchedulerInfo, modelica_metatype _iTopGraphAttThreadIdIdx, modelica_metatype _iScVarTaskMapping, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_integer _idx;
  modelica_integer _graphIdx;
  modelica_integer _iTopGraphIdx;
  modelica_integer _iAttThreadIdIdx;
  modelica_metatype _entries = NULL;
  modelica_metatype _entry = NULL;
  modelica_metatype _tmpGraphInfo = NULL;
  modelica_integer _entryThreadOwner;
  modelica_boolean _notOnlyParamters;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  // _idx has no default value.
  // _graphIdx has no default value.
  // _iTopGraphIdx has no default value.
  // _iAttThreadIdIdx has no default value.
  // _entries has no default value.
  // _entry has no default value.
  // _tmpGraphInfo has no default value.
  // _entryThreadOwner has no default value.
  // _notOnlyParamters has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLineMap;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _idx = tmp3  /* pattern as ty=Integer */;
  _entries = tmpMeta4;

  _notOnlyParamters = 0 /* false */;

  {
    modelica_metatype _entry;
    for (tmpMeta5 = _entries; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _entry = MMC_CAR(tmpMeta5);
      /* Pattern-matching assignment */
      tmpMeta6 = _entry;
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
      tmp8 = mmc_unbox_integer(tmpMeta7);
      _entryThreadOwner = tmp8  /* pattern as ty=Integer */;

      _notOnlyParamters = (_notOnlyParamters || (_entryThreadOwner != ((modelica_integer) -1)));
    }
  }

  if(_notOnlyParamters)
  {
    /* Pattern-matching assignment */
    tmpMeta10 = _iTopGraphAttThreadIdIdx;
    tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
    tmp12 = mmc_unbox_integer(tmpMeta11);
    tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
    tmp14 = mmc_unbox_integer(tmpMeta13);
    _iTopGraphIdx = tmp12  /* pattern as ty=Integer */;
    _iAttThreadIdIdx = tmp14  /* pattern as ty=Integer */;

    /* Pattern-matching tuple assignment */
    tmpMeta18 = stringAppend(_OMC_LIT54,intString(_idx));
    tmpMeta19 = stringAppend(_OMC_LIT55,intString(_idx));
    tmpMeta20 = omc_GraphML_addGroupNode(threadData, tmpMeta18, _iTopGraphIdx, 1 /* true */, tmpMeta19, _iGraphInfo, NULL, &tmpMeta15);
    _tmpGraphInfo = tmpMeta20;
    tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
    tmp17 = mmc_unbox_integer(tmpMeta16);
    _graphIdx = tmp17  /* pattern as ty=Integer */;

    tmpMeta22 = mmc_mk_box2(0, mmc_mk_integer(_graphIdx), mmc_mk_integer(_iAttThreadIdIdx));
    tmpMeta21 = mmc_mk_box7(0, _iCacheVariables, _iAddedVariables, _iSchedulerInfo, tmpMeta22, _iScVarTaskMapping, _iVarNameSCVarIdxMapping, _iScVarInfos);
    _oGraphInfo = omc_List_fold(threadData, _entries, (modelica_fnptr) mmc_mk_box2(0,closure0_HpcOmMemory_appendCacheLineEntryToGraph,tmpMeta21), _tmpGraphInfo);
  }
  else
  {
    _oGraphInfo = _iGraphInfo;
  }
  _return: OMC_LABEL_UNUSED
  return _oGraphInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendUnmappedVariablesToGraph(threadData_t *threadData, modelica_metatype _iScVarCLMapping, modelica_metatype _iGraphInfo)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _tmpGraphInfo = NULL;
  modelica_integer _scVarIdx;
  modelica_integer _clIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  _tmpGraphInfo = _iGraphInfo;
  // _scVarIdx has no default value.
  // _clIdx has no default value.
  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = arrayLength(_iScVarCLMapping);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _scVarIdx;
    for(_scVarIdx = ((modelica_integer) 1); in_range_integer(_scVarIdx, tmp4, tmp6); _scVarIdx += tmp5)
    {
      /* Pattern-matching assignment */
      tmpMeta1 = arrayGet(_iScVarCLMapping, _scVarIdx);
      tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
      tmp3 = mmc_unbox_integer(tmpMeta2);
      _clIdx = tmp3  /* pattern as ty=Integer */;

      if((_clIdx < ((modelica_integer) 1)))
      {
      }
    }
  }

  _oGraphInfo = _tmpGraphInfo;
  _return: OMC_LABEL_UNUSED
  return _oGraphInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendTaskVarEdgesToGraph(threadData_t *threadData, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iGraphInfo)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _tmpGraphInfo = NULL;
  modelica_integer _taskIdx;
  modelica_integer _varIdx;
  modelica_metatype _taskVarList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_integer tmp22;
  modelica_integer tmp23;
  modelica_integer tmp24;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  _tmpGraphInfo = _iGraphInfo;
  // _taskIdx has no default value.
  // _varIdx has no default value.
  // _taskVarList has no default value.
  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = arrayLength(_iTaskSolvedVarsMapping);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _taskIdx;
    for(_taskIdx = ((modelica_integer) 1); in_range_integer(_taskIdx, tmp10, tmp12); _taskIdx += tmp11)
    {
      _taskVarList = arrayGet(_iTaskSolvedVarsMapping, _taskIdx);

      {
        modelica_metatype _varIdx;
        for (tmpMeta1 = _taskVarList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
        {
          _varIdx = MMC_CAR(tmpMeta1);
          tmpMeta2 = stringAppend(_OMC_LIT56,intString(_taskIdx));
          tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT57);
          tmpMeta4 = stringAppend(tmpMeta3,intString(mmc_unbox_integer(_varIdx)));
          tmpMeta5 = stringAppend(_OMC_LIT49,intString(mmc_unbox_integer(_varIdx)));
          tmpMeta6 = stringAppend(_OMC_LIT58,intString(_taskIdx));
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _tmpGraphInfo = omc_GraphML_addEdge(threadData, tmpMeta4, tmpMeta5, tmpMeta6, _OMC_LIT59, _OMC_LIT60, 2.0, 0 /* false */, tmpMeta7, _OMC_LIT63, tmpMeta8, _tmpGraphInfo, NULL);
        }
      }
    }
  }

  tmp22 = ((modelica_integer) 1); tmp23 = 1; tmp24 = arrayLength(_iTaskUnsolvedVarsMapping);
  if(!(((tmp23 > 0) && (tmp22 > tmp24)) || ((tmp23 < 0) && (tmp22 < tmp24))))
  {
    modelica_integer _taskIdx;
    for(_taskIdx = ((modelica_integer) 1); in_range_integer(_taskIdx, tmp22, tmp24); _taskIdx += tmp23)
    {
      _taskVarList = arrayGet(_iTaskUnsolvedVarsMapping, _taskIdx);

      {
        modelica_metatype _varIdx;
        for (tmpMeta13 = _taskVarList; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
        {
          _varIdx = MMC_CAR(tmpMeta13);
          tmpMeta14 = stringAppend(_OMC_LIT56,intString(_taskIdx));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT57);
          tmpMeta16 = stringAppend(tmpMeta15,intString(mmc_unbox_integer(_varIdx)));
          tmpMeta17 = stringAppend(_OMC_LIT58,intString(_taskIdx));
          tmpMeta18 = stringAppend(_OMC_LIT49,intString(mmc_unbox_integer(_varIdx)));
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          _tmpGraphInfo = omc_GraphML_addEdge(threadData, tmpMeta16, tmpMeta17, tmpMeta18, _OMC_LIT59, _OMC_LIT60, 2.0, 0 /* false */, tmpMeta19, _OMC_LIT63, tmpMeta20, _tmpGraphInfo, NULL);
        }
      }
    }
  }

  _oGraphInfo = _tmpGraphInfo;
  _return: OMC_LABEL_UNUSED
  return _oGraphInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendVariablesToGraph(threadData_t *threadData, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_integer _iNumberOfScVars, modelica_integer _iGraphIdx, modelica_integer _iThreadIdAttributeIdx, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iAllVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_metatype _tmpGraphInfo = NULL;
  modelica_string _description = NULL;
  modelica_string _threadText = NULL;
  modelica_metatype _simVarOpt = NULL;
  modelica_metatype _simVar = NULL;
  modelica_metatype _varCompRef = NULL;
  modelica_metatype _nodeLabel = NULL;
  modelica_boolean _isValidVar;
  modelica_metatype _realScVarIdxOffset = NULL;
  modelica_integer _realScVarIdx;
  modelica_integer _realScVarOffset;
  modelica_integer _threadOwner;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  _tmpGraphInfo = _iGraphInfo;
  // _description has no default value.
  // _threadText has no default value.
  // _simVarOpt has no default value.
  // _simVar has no default value.
  // _varCompRef has no default value.
  // _nodeLabel has no default value.
  // _isValidVar has no default value.
  // _realScVarIdxOffset has no default value.
  // _realScVarIdx has no default value.
  // _realScVarOffset has no default value.
  // _threadOwner has no default value.
  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = _iNumberOfScVars;
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _varIdx;
    for(_varIdx = ((modelica_integer) 1); in_range_integer(_varIdx, tmp10, tmp12); _varIdx += tmp11)
    {
      _isValidVar = 1 /* true */;

      _simVarOpt = arrayGet(_iAllVarsMapping, _varIdx);

      _description = _OMC_LIT64;

      _threadText = _OMC_LIT65;

      if(isSome(_simVarOpt))
      {
        _simVar = omc_Util_getOption(threadData, _simVarOpt);

        _varCompRef = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVar), 2)));

        _description = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _varCompRef);

        _isValidVar = omc_BaseHashTable_hasKey(threadData, _varCompRef, _iVarNameSCVarIdxMapping);

        if(omc_BaseHashTable_hasKey(threadData, _varCompRef, _iVarNameSCVarIdxMapping))
        {
          _realScVarIdxOffset = omc_BaseHashTable_get(threadData, _varCompRef, _iVarNameSCVarIdxMapping);

          _realScVarIdx = mmc_unbox_integer(listGet(_realScVarIdxOffset, ((modelica_integer) 1)));

          _realScVarOffset = mmc_unbox_integer(listGet(_realScVarIdxOffset, ((modelica_integer) 2)));

          _realScVarIdx = _realScVarIdx + _realScVarOffset;

          /* Pattern-matching assignment */
          tmpMeta1 = arrayGet(_iScVarInfos, _realScVarIdx);
          tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
          tmp3 = mmc_unbox_integer(tmpMeta2);
          _threadOwner = tmp3  /* pattern as ty=Integer */;

          tmpMeta4 = stringAppend(_OMC_LIT50,intString(_threadOwner));
          _threadText = tmpMeta4;
        }
      }

      if(_isValidVar)
      {
        tmpMeta5 = mmc_mk_box4(3, &GraphML_NodeLabel_NODELABEL__INTERNAL__desc, intString(_varIdx), mmc_mk_none(), _OMC_LIT51);
        _nodeLabel = tmpMeta5;

        tmpMeta6 = stringAppend(_OMC_LIT49,intString(_varIdx));
        tmpMeta7 = mmc_mk_cons(_nodeLabel, MMC_REFSTRUCTLIT(mmc_nil));
        tmpMeta9 = mmc_mk_box2(0, mmc_mk_integer(_iThreadIdAttributeIdx), _threadText);
        tmpMeta8 = mmc_mk_cons(tmpMeta9, MMC_REFSTRUCTLIT(mmc_nil));
        _tmpGraphInfo = omc_GraphML_addNode(threadData, tmpMeta6, _OMC_LIT52, 1.0, tmpMeta7, _OMC_LIT53, mmc_mk_some(_description), tmpMeta8, _iGraphIdx, _tmpGraphInfo, NULL);
      }
    }
  }

  _tmpGraphInfo = omc_HpcOmMemory_appendTaskVarEdgesToGraph(threadData, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _tmpGraphInfo);

  _oGraphInfo = _tmpGraphInfo;
  _return: OMC_LABEL_UNUSED
  return _oGraphInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_appendVariablesToGraph(threadData_t *threadData, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iNumberOfScVars, modelica_metatype _iGraphIdx, modelica_metatype _iThreadIdAttributeIdx, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iAllVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _oGraphInfo = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfScVars);
  tmp2 = mmc_unbox_integer(_iGraphIdx);
  tmp3 = mmc_unbox_integer(_iThreadIdAttributeIdx);
  _oGraphInfo = omc_HpcOmMemory_appendVariablesToGraph(threadData, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, tmp1, tmp2, tmp3, _iVarNameSCVarIdxMapping, _iAllVarsMapping, _iScVarInfos, _iGraphInfo);
  /* skip box _oGraphInfo; GraphML.GraphInfo */
  return _oGraphInfo;
}

static modelica_metatype closure1_HpcOmMemory_appendCacheLineMapToGraph(threadData_t *thData, modelica_metatype closure, modelica_metatype iCacheLineMap, modelica_metatype iGraphInfo)
{
  modelica_metatype iCacheVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iAddedVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iSchedulerInfo = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iTopGraphAttThreadIdIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iScVarTaskMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype iVarNameSCVarIdxMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  modelica_metatype iScVarInfos = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),7));
  return boxptr_HpcOmMemory_appendCacheLineMapToGraph(thData, iCacheLineMap, iCacheVariables, iAddedVariables, iSchedulerInfo, iTopGraphAttThreadIdIdx, iScVarTaskMapping, iVarNameSCVarIdxMapping, iScVarInfos, iGraphInfo);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendCacheLinesToGraph(threadData_t *threadData, modelica_metatype _iCacheMap, modelica_integer _iNumberOfNodes, modelica_metatype _iEqSimCodeVarMapping, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _ieqCompMapping, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_integer _iThreadIdAttributeIdx, modelica_metatype _iCompNodeMapping, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo)
{
  modelica_metatype _oGraphInfo = NULL;
  modelica_integer _clGroupNodeIdx;
  modelica_integer _graphCount;
  modelica_metatype _tmpGraphInfo = NULL;
  modelica_metatype _knownEdges = NULL;
  modelica_metatype _addedVariables = NULL;
  modelica_metatype _cacheVariables = NULL;
  modelica_metatype _cacheLines = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oGraphInfo has no default value.
  // _clGroupNodeIdx has no default value.
  // _graphCount has no default value.
  // _tmpGraphInfo has no default value.
  // _knownEdges has no default value.
  // _addedVariables has no default value.
  // _cacheVariables has no default value.
  // _cacheLines has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iGraphInfo;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,9) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          
          _graphCount = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (((modelica_integer) 1) <= _graphCount);
          if (1 /* true */ != tmp8) goto goto_2;

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _knownEdges = arrayCreate(_iNumberOfNodes, tmpMeta9);

          _addedVariables = arrayCreate(arrayLength(_iScVarTaskMapping), mmc_mk_boolean(0 /* false */));

          /* Pattern-matching tuple assignment */
          tmpMeta13 = omc_GraphML_addGroupNode(threadData, _OMC_LIT66, ((modelica_integer) 1), 0 /* false */, _OMC_LIT55, _iGraphInfo, NULL, &tmpMeta10);
          _tmpGraphInfo = tmpMeta13;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          _clGroupNodeIdx = tmp12  /* pattern as ty=Integer */;

          _cacheLines = omc_HpcOmMemory_getAllCacheLinesOfCacheMap(threadData, _iCacheMap);

          _cacheVariables = listArray(omc_HpcOmMemory_getCacheVariablesOfCacheMap(threadData, _iCacheMap));

          tmpMeta15 = mmc_mk_box2(0, mmc_mk_integer(_clGroupNodeIdx), mmc_mk_integer(_iThreadIdAttributeIdx));
          tmpMeta14 = mmc_mk_box7(0, _cacheVariables, _addedVariables, _iSchedulerInfo, tmpMeta15, _iScVarTaskMapping, _iVarNameSCVarIdxMapping, _iScVarInfos);
          _tmpGraphInfo = omc_List_fold(threadData, _cacheLines, (modelica_fnptr) mmc_mk_box2(0,closure1_HpcOmMemory_appendCacheLineMapToGraph,tmpMeta14), _tmpGraphInfo);
          tmpMeta1 = omc_HpcOmMemory_appendTaskVarEdgesToGraph(threadData, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _tmpGraphInfo);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_boolean tmp18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,9) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          
          _graphCount = tmp17  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = (_graphCount == ((modelica_integer) 0));
          if (1 /* true */ != tmp18) goto goto_2;
          tmpMeta1 = _iGraphInfo;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT67),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oGraphInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oGraphInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_appendCacheLinesToGraph(threadData_t *threadData, modelica_metatype _iCacheMap, modelica_metatype _iNumberOfNodes, modelica_metatype _iEqSimCodeVarMapping, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _ieqCompMapping, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iThreadIdAttributeIdx, modelica_metatype _iCompNodeMapping, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iScVarInfos, modelica_metatype _iGraphInfo)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oGraphInfo = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfNodes);
  tmp2 = mmc_unbox_integer(_iThreadIdAttributeIdx);
  _oGraphInfo = omc_HpcOmMemory_appendCacheLinesToGraph(threadData, _iCacheMap, tmp1, _iEqSimCodeVarMapping, _iEqSystems, _iVarNameSCVarIdxMapping, _ieqCompMapping, _iScVarTaskMapping, _iSchedulerInfo, tmp2, _iCompNodeMapping, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iScVarCLMapping, _iScVarInfos, _iGraphInfo);
  /* skip box _oGraphInfo; GraphML.GraphInfo */
  return _oGraphInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getTaskSimVarMapping(threadData_t *threadData, modelica_metatype _iSccEqMapping, modelica_metatype _iNodeSccMapping, modelica_metatype _iEqSimCodeVarMapping, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oNotSolvedVars)
{
  modelica_metatype _oSolvedVars = NULL;
  modelica_metatype _oNotSolvedVars = NULL;
  modelica_metatype _tmpSolvedVars = NULL;
  modelica_metatype _tmpNotSolvedVars = NULL;
  modelica_metatype _scVarMarks = NULL;
  modelica_metatype _scSolvedVarMarks = NULL;
  modelica_metatype _nodeSccs = NULL;
  modelica_metatype _eqVars = NULL;
  modelica_integer _nodeIdx;
  modelica_integer _sccIdx;
  modelica_integer _eqIdx;
  modelica_integer _var;
  modelica_integer _varTask;
  modelica_integer _varMark;
  modelica_integer _varType;
  modelica_integer _nvar;
  modelica_metatype _sccEqs = NULL;
  modelica_metatype _sccEq = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSolvedVars has no default value.
  // _oNotSolvedVars has no default value.
  // _tmpSolvedVars has no default value.
  // _tmpNotSolvedVars has no default value.
  // _scVarMarks has no default value.
  // _scSolvedVarMarks has no default value.
  // _nodeSccs has no default value.
  // _eqVars has no default value.
  // _nodeIdx has no default value.
  // _sccIdx has no default value.
  // _eqIdx has no default value.
  // _var has no default value.
  // _varTask has no default value.
  // _varMark has no default value.
  // _varType has no default value.
  // _nvar has no default value.
  // _sccEqs has no default value.
  // _sccEq has no default value.
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
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_integer tmp21;
          modelica_integer tmp22;
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _tmpSolvedVars = arrayCreate(arrayLength(_iNodeSccMapping), tmpMeta5);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _tmpNotSolvedVars = arrayCreate(arrayLength(_iNodeSccMapping), tmpMeta6);

          _scVarMarks = arrayCreate(arrayLength(_iScVarTaskMapping), mmc_mk_integer(((modelica_integer) -1)));

          _scSolvedVarMarks = arrayCreate(arrayLength(_iScVarTaskMapping), mmc_mk_integer(((modelica_integer) -1)));

          _nvar = arrayLength(_iScVarTaskMapping);

          tmp20 = ((modelica_integer) 1); tmp21 = 1; tmp22 = arrayLength(_iNodeSccMapping);
          if(!(((tmp21 > 0) && (tmp20 > tmp22)) || ((tmp21 < 0) && (tmp20 < tmp22))))
          {
            modelica_integer _nodeIdx;
            for(_nodeIdx = ((modelica_integer) 1); in_range_integer(_nodeIdx, tmp20, tmp22); _nodeIdx += tmp21)
            {
              _nodeSccs = arrayGet(_iNodeSccMapping, _nodeIdx);

              {
                modelica_metatype _sccIdx;
                for (tmpMeta7 = _nodeSccs; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
                {
                  _sccIdx = MMC_CAR(tmpMeta7);
                  _sccEqs = arrayGet(_iSccEqMapping, mmc_unbox_integer(_sccIdx));

                  {
                    modelica_metatype _sccEq;
                    for (tmpMeta8 = _sccEqs; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
                    {
                      _sccEq = MMC_CAR(tmpMeta8);
                      /* Pattern-matching assignment */
                      tmpMeta9 = _sccEq;
                      tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
                      tmp11 = mmc_unbox_integer(tmpMeta10);
                      _eqIdx = tmp11  /* pattern as ty=Integer */;

                      /* Pattern-matching assignment */
                      tmpMeta12 = arrayGet(_iEqSimCodeVarMapping, _eqIdx);
                      tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
                      _eqVars = tmpMeta13;

                      {
                        modelica_metatype _v2;
                        for (tmpMeta14 = _eqVars; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
                        {
                          _v2 = MMC_CAR(tmpMeta14);
                          _var = ((mmc_unbox_integer(_v2) > _nvar)?mmc_unbox_integer(_v2) - _nvar:mmc_unbox_integer(_v2));

                          _varTask = mmc_unbox_integer(arrayGet(_iScVarTaskMapping, _var));

                          _varType = mmc_unbox_integer(omc_Util_tuple31(threadData, arrayGet(_iSimCodeVarTypes, _var)));

                          if((_varType > ((modelica_integer) 0)))
                          {
                            if((_nodeIdx == _varTask))
                            {
                              _varMark = mmc_unbox_integer(arrayGet(_scSolvedVarMarks, _var));

                              if((_varMark != _nodeIdx))
                              {
                                tmpMeta15 = mmc_mk_cons(mmc_mk_integer(_var), arrayGet(_tmpSolvedVars, _nodeIdx));
                                _tmpSolvedVars = arrayUpdate(_tmpSolvedVars, _nodeIdx, tmpMeta15);

                                _scSolvedVarMarks = arrayUpdate(_scSolvedVarMarks, _var, mmc_mk_integer(_nodeIdx));
                              }
                            }
                            else
                            {
                              _varMark = mmc_unbox_integer(arrayGet(_scVarMarks, _var));

                              if((_varMark != _nodeIdx))
                              {
                                tmpMeta16 = mmc_mk_cons(mmc_mk_integer(_var), arrayGet(_tmpNotSolvedVars, _nodeIdx));
                                _tmpNotSolvedVars = arrayUpdate(_tmpNotSolvedVars, _nodeIdx, tmpMeta16);

                                _scVarMarks = arrayUpdate(_scVarMarks, _var, mmc_mk_integer(_nodeIdx));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }

          _oSolvedVars = _tmpSolvedVars;

          _oNotSolvedVars = _tmpNotSolvedVars;
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT68, _OMC_LIT70);

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
  if (out_oNotSolvedVars) { *out_oNotSolvedVars = _oNotSolvedVars; }
  return _oSolvedVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getCacheLineTaskMapping0(threadData_t *threadData, modelica_metatype _iNodeIdx, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iSCVarCLMapping, modelica_metatype _iCLTaskMappingVarIdx)
{
  modelica_metatype _oCLTaskMappingVarIdx = NULL;
  modelica_metatype _iClTaskMapping = NULL;
  modelica_metatype _iScVarTaskMapping = NULL;
  modelica_integer _varIdx;
  modelica_integer _eqSysIdx;
  modelica_integer _varOffset;
  modelica_integer _scVarIdx;
  modelica_integer _clIdx;
  modelica_integer _nodeIdx;
  modelica_integer _scVarOffset;
  modelica_metatype _eqSystem = NULL;
  modelica_metatype _orderedVars = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _varName = NULL;
  modelica_metatype _oldVal = NULL;
  modelica_metatype _scVarValues = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCLTaskMappingVarIdx has no default value.
  // _iClTaskMapping has no default value.
  // _iScVarTaskMapping has no default value.
  // _varIdx has no default value.
  // _eqSysIdx has no default value.
  // _varOffset has no default value.
  // _scVarIdx has no default value.
  // _clIdx has no default value.
  // _nodeIdx has no default value.
  // _scVarOffset has no default value.
  // _eqSystem has no default value.
  // _orderedVars has no default value.
  // _var has no default value.
  // _varName has no default value.
  // _oldVal has no default value.
  // _scVarValues has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _iNodeIdx;
    tmp4_2 = _iCLTaskMappingVarIdx;
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
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_boolean tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          _nodeIdx = tmp7  /* pattern as ty=Integer */;
          _eqSysIdx = tmp9  /* pattern as ty=Integer */;
          _varOffset = tmp11  /* pattern as ty=Integer */;
          _iClTaskMapping = tmpMeta12;
          _iScVarTaskMapping = tmpMeta13;
          _varIdx = tmp15  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp16 = (_nodeIdx > ((modelica_integer) 0));
          if (1 /* true */ != tmp16) goto goto_2;

          _eqSystem = listGet(_iEqSystems, _eqSysIdx);

          /* Pattern-matching assignment */
          tmpMeta17 = _eqSystem;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          _orderedVars = tmpMeta18;

          _var = omc_BackendVariable_getVarAt(threadData, _orderedVars, _varIdx - _varOffset);

          /* Pattern-matching assignment */
          tmpMeta19 = _var;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          _varName = tmpMeta20;

          _varName = omc_HpcOmMemory_getModifiedVarName(threadData, _var);

          _scVarValues = omc_BaseHashTable_get(threadData, _varName, _iVarNameSCVarIdxMapping);

          _scVarIdx = mmc_unbox_integer(listHead(_scVarValues));

          _scVarOffset = mmc_unbox_integer(omc_List_second(threadData, _scVarValues));

          _scVarIdx = _scVarIdx + _scVarOffset;

          /* Pattern-matching assignment */
          tmpMeta21 = arrayGet(_iSCVarCLMapping, _scVarIdx);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 1));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          _clIdx = tmp23  /* pattern as ty=Integer */;

          _oldVal = arrayGet(_iClTaskMapping, _clIdx);

          tmpMeta24 = mmc_mk_cons(mmc_mk_integer(_nodeIdx), _oldVal);
          _iClTaskMapping = arrayUpdate(_iClTaskMapping, _clIdx, tmpMeta24);

          _iScVarTaskMapping = arrayUpdate(_iScVarTaskMapping, _scVarIdx, mmc_mk_integer(_nodeIdx));
          tmpMeta25 = mmc_mk_box3(0, _iClTaskMapping, _iScVarTaskMapping, mmc_mk_integer(((modelica_integer) 1) + _varIdx));
          tmpMeta1 = tmpMeta25;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          modelica_metatype tmpMeta30;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp29 = mmc_unbox_integer(tmpMeta28);
          _iClTaskMapping = tmpMeta26;
          _iScVarTaskMapping = tmpMeta27;
          _varIdx = tmp29  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta30 = mmc_mk_box3(0, _iClTaskMapping, _iScVarTaskMapping, mmc_mk_integer(((modelica_integer) 1) + _varIdx));
          tmpMeta1 = tmpMeta30;
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
  _oCLTaskMappingVarIdx = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCLTaskMappingVarIdx;
}

static modelica_metatype closure2_HpcOmMemory_getCacheLineTaskMapping0(threadData_t *thData, modelica_metatype closure, modelica_metatype iNodeIdx, modelica_metatype iCLTaskMappingVarIdx)
{
  modelica_metatype iEqSystems = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iVarNameSCVarIdxMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iSCVarCLMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_HpcOmMemory_getCacheLineTaskMapping0(thData, iNodeIdx, iEqSystems, iVarNameSCVarIdxMapping, iSCVarCLMapping, iCLTaskMappingVarIdx);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getCacheLineTaskMapping(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_integer _iNumCacheLines, modelica_metatype _iSCVarCLMapping, modelica_metatype *out_oScVarTaskMapping)
{
  modelica_metatype _oCLTaskMapping = NULL;
  modelica_metatype _oScVarTaskMapping = NULL;
  modelica_metatype _varCompMapping = NULL;
  modelica_metatype _tmpCLTaskMapping = NULL;
  modelica_metatype _scVarTaskMapping = NULL;
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
  // _oCLTaskMapping has no default value.
  // _oScVarTaskMapping has no default value.
  // _varCompMapping has no default value.
  // _tmpCLTaskMapping has no default value.
  // _scVarTaskMapping has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpCLTaskMapping = arrayCreate(_iNumCacheLines, tmpMeta1);

  _scVarTaskMapping = arrayCreate(arrayLength(_iSCVarCLMapping), mmc_mk_integer(((modelica_integer) -1)));

  /* Pattern-matching assignment */
  tmpMeta2 = _iTaskGraphMeta;
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  _varCompMapping = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = mmc_mk_box3(0, _iEqSystems, _iVarNameSCVarIdxMapping, _iSCVarCLMapping);
  tmpMeta5 = mmc_mk_box3(0, _tmpCLTaskMapping, _scVarTaskMapping, mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta6 = omc_Array_fold(threadData, _varCompMapping, (modelica_fnptr) mmc_mk_box2(0,closure2_HpcOmMemory_getCacheLineTaskMapping0,tmpMeta4), tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  _tmpCLTaskMapping = tmpMeta7;
  _oScVarTaskMapping = tmpMeta8;

  _tmpCLTaskMapping = omc_Array_map1(threadData, _tmpCLTaskMapping, boxvar_List_sort, boxvar_intLt);

  _oCLTaskMapping = omc_Array_map1(threadData, _tmpCLTaskMapping, boxvar_List_sortedUnique, boxvar_intEq);
  _return: OMC_LABEL_UNUSED
  if (out_oScVarTaskMapping) { *out_oScVarTaskMapping = _oScVarTaskMapping; }
  return _oCLTaskMapping;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getCacheLineTaskMapping(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iNumCacheLines, modelica_metatype _iSCVarCLMapping, modelica_metatype *out_oScVarTaskMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oCLTaskMapping = NULL;
  tmp1 = mmc_unbox_integer(_iNumCacheLines);
  _oCLTaskMapping = omc_HpcOmMemory_getCacheLineTaskMapping(threadData, _iTaskGraphMeta, _iEqSystems, _iVarNameSCVarIdxMapping, tmp1, _iSCVarCLMapping, out_oScVarTaskMapping);
  /* skip box _oCLTaskMapping; array<list<#Integer>> */
  /* skip box _oScVarTaskMapping; array<#Integer> */
  return _oCLTaskMapping;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getModifiedVarName(threadData_t *threadData, modelica_metatype _iVar)
{
  modelica_metatype _oVarName = NULL;
  modelica_metatype _iVarName = NULL;
  modelica_metatype _tmpVarName = NULL;
  modelica_metatype _varKind = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVarName has no default value.
  // _iVarName has no default value.
  // _tmpVarName has no default value.
  // _varKind has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iVar;
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (1 != tmp9) goto tmp3_end;
          
          _iVarName = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_box5(3, &DAE_ComponentRef_CREF__QUAL__desc, _OMC_LIT71, _OMC_LIT72, tmpMeta10, _iVarName);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _iVarName = tmpMeta12;
          _varKind = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta1 = _iVarName;
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
  _oVarName = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oVarName;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_flattenEqSimCodeVarMapping(threadData_t *threadData, modelica_metatype _iEqSimCodeVarMapping)
{
  modelica_metatype _oFlatEqSimCodeVarMapping = NULL;
  modelica_metatype _simCodeVarList = NULL;
  modelica_metatype _tmpFlatEqSimCodeVarMapping = NULL;
  modelica_integer _eqCount;
  modelica_integer _eqIdx;
  modelica_integer _eqSysIdx;
  modelica_integer _eqSimCodeVarIdx;
  modelica_metatype _eqSimCodeVarMappingEntry = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oFlatEqSimCodeVarMapping has no default value.
  // _simCodeVarList has no default value.
  // _tmpFlatEqSimCodeVarMapping has no default value.
  // _eqCount has no default value.
  // _eqIdx has no default value.
  // _eqSysIdx has no default value.
  // _eqSimCodeVarIdx has no default value.
  // _eqSimCodeVarMappingEntry has no default value.
  _eqCount = ((modelica_integer) 0);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_iEqSimCodeVarMapping);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _eqSysIdx;
    for(_eqSysIdx = ((modelica_integer) 1); in_range_integer(_eqSysIdx, tmp1, tmp3); _eqSysIdx += tmp2)
    {
      _eqSimCodeVarMappingEntry = arrayGet(_iEqSimCodeVarMapping, _eqSysIdx);

      _eqCount = _eqCount + arrayLength(_eqSimCodeVarMappingEntry);
    }
  }

  _eqIdx = ((modelica_integer) 1);

  _tmpFlatEqSimCodeVarMapping = arrayCreate(_eqCount, _OMC_LIT73);

  tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = arrayLength(_iEqSimCodeVarMapping);
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer _eqSysIdx;
    for(_eqSysIdx = ((modelica_integer) 1); in_range_integer(_eqSysIdx, tmp8, tmp10); _eqSysIdx += tmp9)
    {
      _eqSimCodeVarMappingEntry = arrayGet(_iEqSimCodeVarMapping, _eqSysIdx);

      tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = arrayLength(_eqSimCodeVarMappingEntry);
      if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
      {
        modelica_integer _eqSimCodeVarIdx;
        for(_eqSimCodeVarIdx = ((modelica_integer) 1); in_range_integer(_eqSimCodeVarIdx, tmp5, tmp7); _eqSimCodeVarIdx += tmp6)
        {
          _simCodeVarList = arrayGet(_eqSimCodeVarMappingEntry, _eqSimCodeVarIdx);

          tmpMeta4 = mmc_mk_box2(0, mmc_mk_integer(_eqSysIdx), _simCodeVarList);
          _tmpFlatEqSimCodeVarMapping = arrayUpdate(_tmpFlatEqSimCodeVarMapping, _eqIdx, tmpMeta4);

          _eqIdx = ((modelica_integer) 1) + _eqIdx;
        }
      }
    }
  }

  _oFlatEqSimCodeVarMapping = _tmpFlatEqSimCodeVarMapping;
  _return: OMC_LABEL_UNUSED
  return _oFlatEqSimCodeVarMapping;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_invertSccNodeMapping(threadData_t *threadData, modelica_metatype _iSccNodeMapping, modelica_integer _iNumberOfNodes)
{
  modelica_metatype _oNodeSccMapping = NULL;
  modelica_metatype _tmpNodeSccMapping = NULL;
  modelica_integer _sccIdx;
  modelica_integer _nodeIdx;
  modelica_metatype _nodeSccEntry = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oNodeSccMapping has no default value.
  // _tmpNodeSccMapping has no default value.
  // _sccIdx has no default value.
  // _nodeIdx has no default value.
  // _nodeSccEntry has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpNodeSccMapping = arrayCreate(_iNumberOfNodes, tmpMeta1);

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength(_iSccNodeMapping);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _sccIdx;
    for(_sccIdx = ((modelica_integer) 1); in_range_integer(_sccIdx, tmp3, tmp5); _sccIdx += tmp4)
    {
      _nodeIdx = mmc_unbox_integer(arrayGet(_iSccNodeMapping, _sccIdx));

      if((_nodeIdx > ((modelica_integer) 0)))
      {
        _nodeSccEntry = arrayGet(_tmpNodeSccMapping, _nodeIdx);

        tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_sccIdx), _nodeSccEntry);
        _tmpNodeSccMapping = arrayUpdate(_tmpNodeSccMapping, _nodeIdx, tmpMeta2);
      }
    }
  }

  _oNodeSccMapping = _tmpNodeSccMapping;
  _return: OMC_LABEL_UNUSED
  return _oNodeSccMapping;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_invertSccNodeMapping(threadData_t *threadData, modelica_metatype _iSccNodeMapping, modelica_metatype _iNumberOfNodes)
{
  modelica_integer tmp1;
  modelica_metatype _oNodeSccMapping = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfNodes);
  _oNodeSccMapping = omc_HpcOmMemory_invertSccNodeMapping(threadData, _iSccNodeMapping, tmp1);
  /* skip box _oNodeSccMapping; array<list<#Integer>> */
  return _oNodeSccMapping;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_invertEqCompMapping(threadData_t *threadData, modelica_metatype _iEqCompMapping, modelica_integer _iNumOfComps)
{
  modelica_metatype _oCompEqMapping = NULL;
  modelica_metatype _tmpCompEqMapping = NULL;
  modelica_integer _eqIdx;
  modelica_integer _compIdx;
  modelica_integer _eqSystemIdx;
  modelica_integer _offset;
  modelica_metatype _compEqEntry = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCompEqMapping has no default value.
  // _tmpCompEqMapping has no default value.
  // _eqIdx has no default value.
  // _compIdx has no default value.
  // _eqSystemIdx has no default value.
  // _offset has no default value.
  // _compEqEntry has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpCompEqMapping = arrayCreate(_iNumOfComps, tmpMeta1);

  tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = arrayLength(_iEqCompMapping);
  if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
  {
    modelica_integer _eqIdx;
    for(_eqIdx = ((modelica_integer) 1); in_range_integer(_eqIdx, tmp11, tmp13); _eqIdx += tmp12)
    {
      /* Pattern-matching assignment */
      tmpMeta2 = arrayGet(_iEqCompMapping, _eqIdx);
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmp4 = mmc_unbox_integer(tmpMeta3);
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
      tmp8 = mmc_unbox_integer(tmpMeta7);
      _compIdx = tmp4  /* pattern as ty=Integer */;
      _eqSystemIdx = tmp6  /* pattern as ty=Integer */;
      _offset = tmp8  /* pattern as ty=Integer */;

      _compEqEntry = arrayGet(_tmpCompEqMapping, _compIdx);

      tmpMeta10 = mmc_mk_box3(0, mmc_mk_integer(_eqIdx), mmc_mk_integer(_eqSystemIdx), mmc_mk_integer(_offset));
      tmpMeta9 = mmc_mk_cons(tmpMeta10, _compEqEntry);
      _tmpCompEqMapping = arrayUpdate(_tmpCompEqMapping, _compIdx, tmpMeta9);
    }
  }

  _oCompEqMapping = _tmpCompEqMapping;
  _return: OMC_LABEL_UNUSED
  return _oCompEqMapping;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_invertEqCompMapping(threadData_t *threadData, modelica_metatype _iEqCompMapping, modelica_metatype _iNumOfComps)
{
  modelica_integer tmp1;
  modelica_metatype _oCompEqMapping = NULL;
  tmp1 = mmc_unbox_integer(_iNumOfComps);
  _oCompEqMapping = omc_HpcOmMemory_invertEqCompMapping(threadData, _iEqCompMapping, tmp1);
  /* skip box _oCompEqMapping; array<list<tuple<#Integer, #Integer, #Integer>>> */
  return _oCompEqMapping;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getSimCodeVarNodeMapping0(threadData_t *threadData, modelica_metatype _iCompIdx, modelica_metatype _iEqSystems, modelica_metatype _iVarNameSCVarIdxMapping, modelica_metatype _iCompNodeMapping, modelica_metatype _iScVarTaskMappingVarIdx)
{
  modelica_metatype _oScVarTaskMappingVarIdx = NULL;
  modelica_metatype _iScVarTaskMapping = NULL;
  modelica_integer _varIdx;
  modelica_integer _eqSysIdx;
  modelica_integer _varOffset;
  modelica_integer _scVarIdx;
  modelica_integer _compIdx;
  modelica_integer _nodeIdx;
  modelica_integer _scVarOffset;
  modelica_metatype _eqSystem = NULL;
  modelica_metatype _orderedVars = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _varName = NULL;
  modelica_metatype _scVarValues = NULL;
  modelica_string _varNameString = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oScVarTaskMappingVarIdx has no default value.
  // _iScVarTaskMapping has no default value.
  // _varIdx has no default value.
  // _eqSysIdx has no default value.
  // _varOffset has no default value.
  // _scVarIdx has no default value.
  // _compIdx has no default value.
  // _nodeIdx has no default value.
  // _scVarOffset has no default value.
  // _eqSystem has no default value.
  // _orderedVars has no default value.
  // _var has no default value.
  // _varName has no default value.
  // _scVarValues has no default value.
  // _varNameString has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _iCompIdx;
    tmp4_2 = _iScVarTaskMappingVarIdx;
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
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_boolean tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          _compIdx = tmp7  /* pattern as ty=Integer */;
          _eqSysIdx = tmp9  /* pattern as ty=Integer */;
          _varOffset = tmp11  /* pattern as ty=Integer */;
          _iScVarTaskMapping = tmpMeta12;
          _varIdx = tmp14  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp15 = (_compIdx > ((modelica_integer) 0));
          if (1 /* true */ != tmp15) goto goto_2;

          _eqSystem = listGet(_iEqSystems, _eqSysIdx);

          /* Pattern-matching assignment */
          tmpMeta16 = _eqSystem;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          _orderedVars = tmpMeta17;

          _var = omc_BackendVariable_getVarAt(threadData, _orderedVars, _varIdx - _varOffset);

          /* Pattern-matching assignment */
          tmpMeta18 = _var;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          _varName = tmpMeta19;

          _varName = omc_HpcOmMemory_getModifiedVarName(threadData, _var);

          _scVarValues = omc_BaseHashTable_get(threadData, _varName, _iVarNameSCVarIdxMapping);

          _varNameString = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _varName);

          _scVarIdx = mmc_unbox_integer(listHead(_scVarValues));

          _scVarOffset = mmc_unbox_integer(omc_List_second(threadData, _scVarValues));

          _scVarIdx = _scVarIdx + _scVarOffset;

          _nodeIdx = mmc_unbox_integer(arrayGet(_iCompNodeMapping, _compIdx));

          _iScVarTaskMapping = arrayUpdate(_iScVarTaskMapping, _scVarIdx, mmc_mk_integer(_nodeIdx));
          tmpMeta20 = mmc_mk_box2(0, _iScVarTaskMapping, mmc_mk_integer(((modelica_integer) 1) + _varIdx));
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          _iScVarTaskMapping = tmpMeta21;
          _varIdx = tmp23  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta24 = mmc_mk_box2(0, _iScVarTaskMapping, mmc_mk_integer(((modelica_integer) 1) + _varIdx));
          tmpMeta1 = tmpMeta24;
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
  _oScVarTaskMappingVarIdx = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oScVarTaskMappingVarIdx;
}

static modelica_metatype closure3_HpcOmMemory_getSimCodeVarNodeMapping0(threadData_t *thData, modelica_metatype closure, modelica_metatype iCompIdx, modelica_metatype iScVarTaskMappingVarIdx)
{
  modelica_metatype iEqSystems = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iVarNameSCVarIdxMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iCompNodeMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_HpcOmMemory_getSimCodeVarNodeMapping0(thData, iCompIdx, iEqSystems, iVarNameSCVarIdxMapping, iCompNodeMapping, iScVarTaskMappingVarIdx);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getSimCodeVarNodeMapping(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iEqSystems, modelica_integer _iNumScVars, modelica_metatype _iCompNodeMapping, modelica_metatype _iVarNameSCVarIdxMapping)
{
  modelica_metatype _oScVarTaskMapping = NULL;
  modelica_metatype _varCompMapping = NULL;
  modelica_metatype _scVarTaskMapping = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oScVarTaskMapping has no default value.
  // _varCompMapping has no default value.
  // _scVarTaskMapping has no default value.
  _scVarTaskMapping = arrayCreate(_iNumScVars, mmc_mk_integer(((modelica_integer) -1)));

  /* Pattern-matching assignment */
  tmpMeta1 = _iTaskGraphMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _varCompMapping = tmpMeta2;

  /* Pattern-matching assignment */
  tmpMeta3 = mmc_mk_box3(0, _iEqSystems, _iVarNameSCVarIdxMapping, _iCompNodeMapping);
  tmpMeta4 = mmc_mk_box2(0, _scVarTaskMapping, mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta5 = omc_Array_fold(threadData, _varCompMapping, (modelica_fnptr) mmc_mk_box2(0,closure3_HpcOmMemory_getSimCodeVarNodeMapping0,tmpMeta3), tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
  _oScVarTaskMapping = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _oScVarTaskMapping;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getSimCodeVarNodeMapping(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iEqSystems, modelica_metatype _iNumScVars, modelica_metatype _iCompNodeMapping, modelica_metatype _iVarNameSCVarIdxMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oScVarTaskMapping = NULL;
  tmp1 = mmc_unbox_integer(_iNumScVars);
  _oScVarTaskMapping = omc_HpcOmMemory_getSimCodeVarNodeMapping(threadData, _iTaskGraphMeta, _iEqSystems, tmp1, _iCompNodeMapping, _iVarNameSCVarIdxMapping);
  /* skip box _oScVarTaskMapping; array<#Integer> */
  return _oScVarTaskMapping;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createMemoryMapTraverse0(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_oTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _oTpl = NULL;
  modelica_metatype _iVarList = NULL;
  modelica_metatype _oVarList = NULL;
  modelica_metatype _varInfo = NULL;
  modelica_integer _varIdx;
  modelica_integer _varHead;
  modelica_metatype _iHashTable = NULL;
  modelica_metatype _iExp = NULL;
  modelica_metatype _componentRef = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _oTpl has no default value.
  // _iVarList has no default value.
  // _oVarList has no default value.
  // _varInfo has no default value.
  // _varIdx has no default value.
  // _varHead has no default value.
  // _iHashTable has no default value.
  // _iExp has no default value.
  // _componentRef has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTpl;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
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
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT74), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _iExp = tmp4_1;
          _componentRef = tmpMeta11;
          _iHashTable = tmpMeta12;
          _iVarList = tmpMeta13;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _varInfo = omc_BaseHashTable_get(threadData, _componentRef, _iHashTable);

          _varIdx = mmc_unbox_integer(listHead(_varInfo)) + mmc_unbox_integer(omc_List_second(threadData, _varInfo));

          if((!listEmpty(_iVarList)))
          {
            _varHead = mmc_unbox_integer(listHead(_iVarList));

            if((_varHead == _varIdx))
            {
              _iVarList = listRest(_iVarList);
            }
          }

          _varInfo = omc_BaseHashTable_get(threadData, omc_ComponentReference_crefPrefixDer(threadData, _componentRef), _iHashTable);

          _varIdx = mmc_unbox_integer(listHead(_varInfo)) + mmc_unbox_integer(omc_List_second(threadData, _varInfo));

          tmpMeta14 = mmc_mk_cons(mmc_mk_integer(_varIdx), _iVarList);
          _oVarList = tmpMeta14;
          tmpMeta15 = mmc_mk_box2(0, _iHashTable, _oVarList);
          tmpMeta[0+0] = _iExp;
          tmpMeta[0+1] = tmpMeta15;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _iExp = tmp4_1;
          _componentRef = tmpMeta16;
          _iHashTable = tmpMeta17;
          _iVarList = tmpMeta18;
          /* Pattern matching succeeded */
          _varInfo = omc_BaseHashTable_get(threadData, _componentRef, _iHashTable);

          _varIdx = mmc_unbox_integer(listHead(_varInfo)) + mmc_unbox_integer(omc_List_second(threadData, _varInfo));

          tmpMeta19 = mmc_mk_cons(mmc_mk_integer(_varIdx), _iVarList);
          _oVarList = tmpMeta19;
          tmpMeta20 = mmc_mk_box2(0, _iHashTable, _oVarList);
          tmpMeta[0+0] = _iExp;
          tmpMeta[0+1] = tmpMeta20;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTpl;
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
  _oTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oTpl) { *out_oTpl = _oTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getEqSCVarMapping0(threadData_t *threadData, modelica_metatype _iEquation, modelica_metatype _iHt)
{
  modelica_metatype _oMapping = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oMapping has no default value.
  /* Pattern-matching tuple assignment, wild first pattern */
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box2(0, _iHt, tmpMeta4);
  tmpMeta6 = mmc_mk_box2(0, boxvar_HpcOmMemory_createMemoryMapTraverse0, tmpMeta5);
  omc_BackendEquation_traverseExpsOfEquation(threadData, _iEquation, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta6, &tmpMeta1);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  _oMapping = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _oMapping;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getEqSCVarMappingByEqSystem(threadData_t *threadData, modelica_metatype _iEqSystem, modelica_metatype _iHt)
{
  modelica_metatype _oMapping = NULL;
  modelica_metatype _orderedEqs = NULL;
  modelica_metatype _equOptList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oMapping has no default value.
  // _orderedEqs has no default value.
  // _equOptList has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iEqSystem;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _orderedEqs = tmpMeta2;

  _equOptList = arrayList(omc_ExpandableArray_getData(threadData, _orderedEqs));

  _oMapping = listArray(omc_List_map1Option(threadData, _equOptList, boxvar_HpcOmMemory_getEqSCVarMapping0, _iHt));
  _return: OMC_LABEL_UNUSED
  return _oMapping;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getEqSCVarMapping(threadData_t *threadData, modelica_metatype _iEqSystems, modelica_metatype _iHt)
{
  modelica_metatype _oMapping = NULL;
  modelica_metatype _tmpMapping = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oMapping has no default value.
  // _tmpMapping has no default value.
  _tmpMapping = omc_List_map1(threadData, _iEqSystems, boxvar_HpcOmMemory_getEqSCVarMappingByEqSystem, _iHt);

  _oMapping = listArray(_tmpMapping);
  _return: OMC_LABEL_UNUSED
  return _oMapping;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_transposeTasksScVarsMapping(threadData_t *threadData, modelica_metatype _iTasksScVarMapping, modelica_integer _iNumberOfScVars)
{
  modelica_metatype _oScVarTasksMapping = NULL;
  modelica_metatype _tmpScVarTasksMapping = NULL;
  modelica_integer _scVarIdx;
  modelica_integer _taskIdx;
  modelica_metatype _oldList = NULL;
  modelica_metatype _scVarIdc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oScVarTasksMapping has no default value.
  // _tmpScVarTasksMapping has no default value.
  // _scVarIdx has no default value.
  // _taskIdx has no default value.
  // _oldList has no default value.
  // _scVarIdc has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpScVarTasksMapping = arrayCreate(_iNumberOfScVars, tmpMeta1);

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = arrayLength(_iTasksScVarMapping);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _taskIdx;
    for(_taskIdx = ((modelica_integer) 1); in_range_integer(_taskIdx, tmp5, tmp7); _taskIdx += tmp6)
    {
      _scVarIdc = arrayGet(_iTasksScVarMapping, _taskIdx);

      {
        modelica_metatype _scVarIdx;
        for (tmpMeta2 = _scVarIdc; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _scVarIdx = MMC_CAR(tmpMeta2);
          if((mmc_unbox_integer(_scVarIdx) > ((modelica_integer) 0)))
          {
            _oldList = arrayGet(_tmpScVarTasksMapping, mmc_unbox_integer(_scVarIdx));

            tmpMeta3 = mmc_mk_cons(mmc_mk_integer(_taskIdx), _oldList);
            _oldList = tmpMeta3;

            arrayUpdate(_tmpScVarTasksMapping, mmc_unbox_integer(_scVarIdx), _oldList);
          }
        }
      }
    }
  }

  _oScVarTasksMapping = _tmpScVarTasksMapping;
  _return: OMC_LABEL_UNUSED
  return _oScVarTasksMapping;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_transposeTasksScVarsMapping(threadData_t *threadData, modelica_metatype _iTasksScVarMapping, modelica_metatype _iNumberOfScVars)
{
  modelica_integer tmp1;
  modelica_metatype _oScVarTasksMapping = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfScVars);
  _oScVarTasksMapping = omc_HpcOmMemory_transposeTasksScVarsMapping(threadData, _iTasksScVarMapping, tmp1);
  /* skip box _oScVarTasksMapping; array<list<#Integer>> */
  return _oScVarTasksMapping;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_transposeScVarTaskMapping(threadData_t *threadData, modelica_metatype _iScVarTaskMapping, modelica_metatype _iTaskGraph)
{
  modelica_metatype _oNodeSimCodeVarMapping = NULL;
  modelica_metatype _tmpNodeSimCodeVarMapping = NULL;
  modelica_integer _scVarIdx;
  modelica_integer _taskIdx;
  modelica_metatype _oldList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oNodeSimCodeVarMapping has no default value.
  // _tmpNodeSimCodeVarMapping has no default value.
  // _scVarIdx has no default value.
  // _taskIdx has no default value.
  // _oldList has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpNodeSimCodeVarMapping = arrayCreate(arrayLength(_iTaskGraph), tmpMeta1);

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength(_iScVarTaskMapping);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _scVarIdx;
    for(_scVarIdx = ((modelica_integer) 1); in_range_integer(_scVarIdx, tmp3, tmp5); _scVarIdx += tmp4)
    {
      _taskIdx = mmc_unbox_integer(arrayGet(_iScVarTaskMapping, _scVarIdx));

      if((_taskIdx > ((modelica_integer) 0)))
      {
        _oldList = arrayGet(_tmpNodeSimCodeVarMapping, _taskIdx);

        tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_scVarIdx), _oldList);
        _oldList = tmpMeta2;

        arrayUpdate(_tmpNodeSimCodeVarMapping, _taskIdx, _oldList);
      }
    }
  }

  _oNodeSimCodeVarMapping = _tmpNodeSimCodeVarMapping;
  _return: OMC_LABEL_UNUSED
  return _oNodeSimCodeVarMapping;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_fillSimVarHashTable(threadData_t *threadData, modelica_metatype _iSimVars, modelica_integer _iOffset, modelica_integer _iType, modelica_metatype _iHt)
{
  modelica_metatype _oHt = NULL;
  modelica_metatype _tmpHashTable = NULL;
  modelica_metatype _simVar = NULL;
  modelica_integer _index;
  modelica_metatype _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oHt has no default value.
  // _tmpHashTable has no default value.
  // _simVar has no default value.
  // _index has no default value.
  // _name has no default value.
  _tmpHashTable = _iHt;

  {
    modelica_metatype _simVar;
    for (tmpMeta1 = _iSimVars; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _simVar = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _simVar;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 7));
      tmp5 = mmc_unbox_integer(tmpMeta4);
      _name = tmpMeta3;
      _index = tmp5  /* pattern as ty=Integer */;

      _index = ((modelica_integer) 1) + _index;

      tmpMeta6 = mmc_mk_cons(mmc_mk_integer(_index), mmc_mk_cons(mmc_mk_integer(_iOffset), mmc_mk_cons(mmc_mk_integer(_iType), MMC_REFSTRUCTLIT(mmc_nil))));
      tmpMeta7 = mmc_mk_box2(0, _name, tmpMeta6);
      _tmpHashTable = omc_BaseHashTable_add(threadData, tmpMeta7, _tmpHashTable);
    }
  }

  _oHt = _tmpHashTable;
  _return: OMC_LABEL_UNUSED
  return _oHt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_fillSimVarHashTable(threadData_t *threadData, modelica_metatype _iSimVars, modelica_metatype _iOffset, modelica_metatype _iType, modelica_metatype _iHt)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oHt = NULL;
  tmp1 = mmc_unbox_integer(_iOffset);
  tmp2 = mmc_unbox_integer(_iType);
  _oHt = omc_HpcOmMemory_fillSimVarHashTable(threadData, _iSimVars, tmp1, tmp2, _iHt);
  /* skip box _oHt; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, list<#Integer>>>>>, #Integer, tuple<.HashTableCrILst.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrILst.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrILst.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrILst.FuncExpStr<function>(list<#Integer> exp) => String>> */
  return _oHt;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmMemory_calculateLocCoForTask(threadData_t *threadData, modelica_integer _iTaskIdx, modelica_integer _iThreadIdx, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iCacheLineThreadProperties)
{
  modelica_real _oLocCo;
  modelica_integer _simCodeVar;
  modelica_integer _clIdx;
  modelica_real _sum;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLocCo has no default value.
  // _simCodeVar has no default value.
  // _clIdx has no default value.
  // _sum has no default value.
  _sum = 0.0;

  {
    modelica_metatype _simCodeVar;
    for (tmpMeta1 = _iNodeSimCodeVarMapping; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _simCodeVar = MMC_CAR(tmpMeta1);
      _clIdx = mmc_unbox_integer(omc_Util_tuple21(threadData, arrayGet(_iScVarCLMapping, mmc_unbox_integer(_simCodeVar))));

      _sum = _sum + mmc_unbox_real(arrayGet(arrayGet(_iCacheLineThreadProperties, _clIdx), _iThreadIdx));
    }
  }

  tmp3 = ((modelica_real)listLength(_iNodeSimCodeVarMapping));
  if (tmp3 == 0) {MMC_THROW_INTERNAL();}
  _oLocCo = (_sum) / tmp3;
  _return: OMC_LABEL_UNUSED
  return _oLocCo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_calculateLocCoForTask(threadData_t *threadData, modelica_metatype _iTaskIdx, modelica_metatype _iThreadIdx, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iCacheLineThreadProperties)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_real _oLocCo;
  modelica_metatype out_oLocCo;
  tmp1 = mmc_unbox_integer(_iTaskIdx);
  tmp2 = mmc_unbox_integer(_iThreadIdx);
  _oLocCo = omc_HpcOmMemory_calculateLocCoForTask(threadData, tmp1, tmp2, _iNodeSimCodeVarMapping, _iScVarCLMapping, _iCacheLineThreadProperties);
  out_oLocCo = mmc_mk_rcon(_oLocCo);
  return out_oLocCo;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmMemory_calculateLocCoWrite(threadData_t *threadData, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _cacheLineThreadProperties, modelica_metatype _iSchedulerInfo)
{
  modelica_real _oLocCoWrite;
  modelica_integer _nodeIdx;
  modelica_integer _numberOfNodes;
  modelica_integer _threadIdx;
  modelica_real _sum;
  modelica_real _locCoWrite;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_real tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLocCoWrite has no default value.
  // _nodeIdx has no default value.
  // _numberOfNodes has no default value.
  // _threadIdx has no default value.
  // _sum has no default value.
  // _locCoWrite has no default value.
  _numberOfNodes = arrayLength(_iNodeSimCodeVarMapping);

  _sum = 0.0;

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _numberOfNodes;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _nodeIdx;
    for(_nodeIdx = ((modelica_integer) 1); in_range_integer(_nodeIdx, tmp1, tmp3); _nodeIdx += tmp2)
    {
      _threadIdx = mmc_unbox_integer(omc_Util_tuple31(threadData, arrayGet(_iSchedulerInfo, _nodeIdx)));

      _locCoWrite = omc_HpcOmMemory_calculateLocCoForTask(threadData, _nodeIdx, _threadIdx, arrayGet(_iNodeSimCodeVarMapping, _nodeIdx), _iScVarCLMapping, _cacheLineThreadProperties);

      _sum = _sum + _locCoWrite;
    }
  }

  if((_numberOfNodes > ((modelica_integer) 0)))
  {
    tmp4 = ((modelica_real)_numberOfNodes);
    if (tmp4 == 0) {MMC_THROW_INTERNAL();}
    _oLocCoWrite = (_sum) / tmp4;
  }
  else
  {
    _oLocCoWrite = 1.0;
  }
  _return: OMC_LABEL_UNUSED
  return _oLocCoWrite;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_calculateLocCoWrite(threadData_t *threadData, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _cacheLineThreadProperties, modelica_metatype _iSchedulerInfo)
{
  modelica_real _oLocCoWrite;
  modelica_metatype out_oLocCoWrite;
  _oLocCoWrite = omc_HpcOmMemory_calculateLocCoWrite(threadData, _iNodeSimCodeVarMapping, _iScVarCLMapping, _cacheLineThreadProperties, _iSchedulerInfo);
  out_oLocCoWrite = mmc_mk_rcon(_oLocCoWrite);
  return out_oLocCoWrite;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmMemory_calculateLocCoReadForTask(threadData_t *threadData, modelica_integer _iNodeIdx, modelica_integer _iThreadIdx, modelica_metatype _iTaskGraphT, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iCacheLineThreadProperties)
{
  modelica_real _oLocCoRead;
  modelica_integer _predecessor;
  modelica_integer _numberOfPredecessors;
  modelica_metatype _predecessors = NULL;
  modelica_real _sum;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLocCoRead has no default value.
  // _predecessor has no default value.
  // _numberOfPredecessors has no default value.
  // _predecessors has no default value.
  // _sum has no default value.
  _sum = 0.0;

  _predecessors = arrayGet(_iTaskGraphT, _iNodeIdx);

  _numberOfPredecessors = listLength(_predecessors);

  {
    modelica_metatype _predecessor;
    for (tmpMeta1 = _predecessors; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _predecessor = MMC_CAR(tmpMeta1);
      _sum = _sum + omc_HpcOmMemory_calculateLocCoForTask(threadData, mmc_unbox_integer(_predecessor), _iThreadIdx, arrayGet(_iNodeSimCodeVarMapping, mmc_unbox_integer(_predecessor)), _iScVarCLMapping, _iCacheLineThreadProperties);
    }
  }

  if((_numberOfPredecessors > ((modelica_integer) 0)))
  {
    tmp3 = ((modelica_real)_numberOfPredecessors);
    if (tmp3 == 0) {MMC_THROW_INTERNAL();}
    _oLocCoRead = (_sum) / tmp3;
  }
  else
  {
    _oLocCoRead = 1.0;
  }
  _return: OMC_LABEL_UNUSED
  return _oLocCoRead;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_calculateLocCoReadForTask(threadData_t *threadData, modelica_metatype _iNodeIdx, modelica_metatype _iThreadIdx, modelica_metatype _iTaskGraphT, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _iCacheLineThreadProperties)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_real _oLocCoRead;
  modelica_metatype out_oLocCoRead;
  tmp1 = mmc_unbox_integer(_iNodeIdx);
  tmp2 = mmc_unbox_integer(_iThreadIdx);
  _oLocCoRead = omc_HpcOmMemory_calculateLocCoReadForTask(threadData, tmp1, tmp2, _iTaskGraphT, _iNodeSimCodeVarMapping, _iScVarCLMapping, _iCacheLineThreadProperties);
  out_oLocCoRead = mmc_mk_rcon(_oLocCoRead);
  return out_oLocCoRead;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmMemory_calculateLocCoRead(threadData_t *threadData, modelica_metatype _iTaskGraphT, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _cacheLineThreadProperties, modelica_metatype _iSchedulerInfo)
{
  modelica_real _oLocCoRead;
  modelica_integer _nodeIdx;
  modelica_integer _numberOfNodes;
  modelica_integer _threadIdx;
  modelica_real _sum;
  modelica_real _locCoRead;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_real tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLocCoRead has no default value.
  // _nodeIdx has no default value.
  // _numberOfNodes has no default value.
  // _threadIdx has no default value.
  // _sum has no default value.
  // _locCoRead has no default value.
  _numberOfNodes = arrayLength(_iNodeSimCodeVarMapping);

  _sum = 0.0;

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _numberOfNodes;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _nodeIdx;
    for(_nodeIdx = ((modelica_integer) 1); in_range_integer(_nodeIdx, tmp1, tmp3); _nodeIdx += tmp2)
    {
      _threadIdx = mmc_unbox_integer(omc_Util_tuple31(threadData, arrayGet(_iSchedulerInfo, _nodeIdx)));

      _locCoRead = omc_HpcOmMemory_calculateLocCoReadForTask(threadData, _nodeIdx, _threadIdx, _iTaskGraphT, _iNodeSimCodeVarMapping, _iScVarCLMapping, _cacheLineThreadProperties);

      _sum = _sum + _locCoRead;
    }
  }

  if((_numberOfNodes > ((modelica_integer) 0)))
  {
    tmp4 = ((modelica_real)_numberOfNodes);
    if (tmp4 == 0) {MMC_THROW_INTERNAL();}
    _oLocCoRead = (_sum) / tmp4;
  }
  else
  {
    _oLocCoRead = 1.0;
  }
  _return: OMC_LABEL_UNUSED
  return _oLocCoRead;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_calculateLocCoRead(threadData_t *threadData, modelica_metatype _iTaskGraphT, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iScVarCLMapping, modelica_metatype _cacheLineThreadProperties, modelica_metatype _iSchedulerInfo)
{
  modelica_real _oLocCoRead;
  modelica_metatype out_oLocCoRead;
  _oLocCoRead = omc_HpcOmMemory_calculateLocCoRead(threadData, _iTaskGraphT, _iNodeSimCodeVarMapping, _iScVarCLMapping, _cacheLineThreadProperties, _iSchedulerInfo);
  out_oLocCoRead = mmc_mk_rcon(_oLocCoRead);
  return out_oLocCoRead;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_createCacheLineThreadProperties(threadData_t *threadData, modelica_metatype _iCacheLine, modelica_integer _iNumberOfThreads, modelica_integer _iCacheLineSize, modelica_metatype _iCacheLineThreadProperties)
{
  modelica_metatype _bytesPerThread = NULL;
  modelica_metatype _threadProperties = NULL;
  modelica_integer _cacheLineIdx;
  modelica_integer _threadOwner;
  modelica_integer _size;
  modelica_integer _threadIdx;
  modelica_integer _numBytesFree;
  modelica_integer _numBytesUnassigned;
  modelica_metatype _entries = NULL;
  modelica_metatype _entry = NULL;
  modelica_real _sizeReal;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_real tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _bytesPerThread has no default value.
  // _threadProperties has no default value.
  // _cacheLineIdx has no default value.
  // _threadOwner has no default value.
  // _size has no default value.
  // _threadIdx has no default value.
  // _numBytesFree has no default value.
  // _numBytesUnassigned has no default value.
  // _entries has no default value.
  // _entry has no default value.
  // _sizeReal has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLine;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _cacheLineIdx = tmp3  /* pattern as ty=Integer */;
  _numBytesFree = tmp5  /* pattern as ty=Integer */;
  _entries = tmpMeta6;

  _numBytesUnassigned = ((modelica_integer) 0);

  _threadProperties = arrayCreate(_iNumberOfThreads, _OMC_LIT75);

  _bytesPerThread = arrayCreate(_iNumberOfThreads, mmc_mk_integer(((modelica_integer) 0)));

  {
    modelica_metatype _entry;
    for (tmpMeta7 = _entries; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _entry = MMC_CAR(tmpMeta7);
      /* Pattern-matching assignment */
      tmpMeta8 = _entry;
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
      tmp10 = mmc_unbox_integer(tmpMeta9);
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 6));
      tmp12 = mmc_unbox_integer(tmpMeta11);
      _size = tmp10  /* pattern as ty=Integer */;
      _threadOwner = tmp12  /* pattern as ty=Integer */;

      if((_threadOwner < ((modelica_integer) 0)))
      {
        _numBytesUnassigned = _numBytesUnassigned + _size;
      }
      else
      {
        _bytesPerThread = arrayUpdate(_bytesPerThread, _threadOwner, mmc_mk_integer(mmc_unbox_integer(arrayGet(_bytesPerThread, _threadOwner)) + _size));
      }
    }
  }

  _sizeReal = ((modelica_real)_iCacheLineSize + (-_numBytesFree) - _numBytesUnassigned);

  if((_sizeReal > 0.0))
  {
    tmp15 = ((modelica_integer) 1); tmp16 = 1; tmp17 = _iNumberOfThreads;
    if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
    {
      modelica_integer _threadIdx;
      for(_threadIdx = ((modelica_integer) 1); in_range_integer(_threadIdx, tmp15, tmp17); _threadIdx += tmp16)
      {
        tmp14 = _sizeReal;
        if (tmp14 == 0) {MMC_THROW_INTERNAL();}
        arrayUpdate(_threadProperties, _threadIdx, mmc_mk_real((((modelica_real)mmc_unbox_integer(arrayGet(_bytesPerThread, _threadIdx)))) / tmp14));
      }
    }
  }

  arrayUpdate(_iCacheLineThreadProperties, _cacheLineIdx, _threadProperties);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmMemory_createCacheLineThreadProperties(threadData_t *threadData, modelica_metatype _iCacheLine, modelica_metatype _iNumberOfThreads, modelica_metatype _iCacheLineSize, modelica_metatype _iCacheLineThreadProperties)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  tmp2 = mmc_unbox_integer(_iCacheLineSize);
  omc_HpcOmMemory_createCacheLineThreadProperties(threadData, _iCacheLine, tmp1, tmp2, _iCacheLineThreadProperties);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createVarCLMappingFromVarArrayIndexHashTable(threadData_t *threadData, modelica_metatype _iVarToIndexMappingHashTable, modelica_metatype _iSimVarIdxMappingHashTable, modelica_integer _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oVarToCLMapping)
{
  modelica_metatype _oNumberOfVars = NULL;
  modelica_metatype _oVarToCLMapping = NULL;
  modelica_metatype _hashTableElements = NULL;
  modelica_metatype _hashTableElement = NULL;
  modelica_metatype _varToCLMapping = NULL;
  modelica_metatype _numberOfVars = NULL;
  modelica_integer _pos;
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oNumberOfVars has no default value.
  // _oVarToCLMapping has no default value.
  // _hashTableElements has no default value.
  // _hashTableElement has no default value.
  // _varToCLMapping has no default value.
  // _numberOfVars has no default value.
  // _pos has no default value.
  // _cref has no default value.
  _varToCLMapping = arrayCreate(arrayLength(_iSimCodeVarTypes), mmc_mk_integer(((modelica_integer) -1)));

  _numberOfVars = arrayCreate(((modelica_integer) 3), mmc_mk_integer(((modelica_integer) 0)));

  _hashTableElements = omc_BaseHashTable_hashTableList(threadData, _iVarToIndexMappingHashTable);

  {
    modelica_metatype _hashTableElement;
    for (tmpMeta1 = _hashTableElements; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _hashTableElement = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _hashTableElement;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
      tmpMeta5 = MMC_CAR(tmpMeta4);
      tmpMeta6 = MMC_CDR(tmpMeta4);
      tmp7 = mmc_unbox_integer(tmpMeta5);
      _cref = tmpMeta3;
      _pos = tmp7  /* pattern as ty=Integer */;
    }
  }

  _oNumberOfVars = _numberOfVars;

  _oVarToCLMapping = _varToCLMapping;
  _return: OMC_LABEL_UNUSED
  if (out_oVarToCLMapping) { *out_oVarToCLMapping = _oVarToCLMapping; }
  return _oNumberOfVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createVarCLMappingFromVarArrayIndexHashTable(threadData_t *threadData, modelica_metatype _iVarToIndexMappingHashTable, modelica_metatype _iSimVarIdxMappingHashTable, modelica_metatype _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oVarToCLMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oNumberOfVars = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  _oNumberOfVars = omc_HpcOmMemory_createVarCLMappingFromVarArrayIndexHashTable(threadData, _iVarToIndexMappingHashTable, _iSimVarIdxMappingHashTable, tmp1, _iSimCodeVarTypes, out_oVarToCLMapping);
  /* skip box _oNumberOfVars; array<#Integer> */
  /* skip box _oVarToCLMapping; array<#Integer> */
  return _oNumberOfVars;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmMemory_evaluateCacheBehaviour(threadData_t *threadData, modelica_metatype _iVarToIndexMappingHashTable, modelica_metatype _iSimVarIdxMappingHashTable, modelica_metatype _taskSolvedVarsMapping, modelica_metatype _taskUnsolvedVarsMapping, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_integer _iNumberOfThreads, modelica_integer _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iSchedulerInfo)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmMemory_evaluateCacheBehaviour(threadData_t *threadData, modelica_metatype _iVarToIndexMappingHashTable, modelica_metatype _iSimVarIdxMappingHashTable, modelica_metatype _taskSolvedVarsMapping, modelica_metatype _taskUnsolvedVarsMapping, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iNumberOfThreads, modelica_metatype _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iSchedulerInfo)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  tmp2 = mmc_unbox_integer(_iCacheLineSize);
  omc_HpcOmMemory_evaluateCacheBehaviour(threadData, _iVarToIndexMappingHashTable, _iSimVarIdxMappingHashTable, _taskSolvedVarsMapping, _taskUnsolvedVarsMapping, _iTaskGraph, _iTaskGraphT, tmp1, tmp2, _iSimCodeVarTypes, _iSchedulerInfo);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping0(threadData_t *threadData, modelica_metatype _iScVarCLMapping, modelica_metatype _iAllVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iEntries)
{
  modelica_metatype _oEntries = NULL;
  modelica_metatype _tmpSimVarsFloat = NULL;
  modelica_metatype _tmpSimVarsInt = NULL;
  modelica_metatype _tmpSimVarsBool = NULL;
  modelica_metatype _tmpSimVarsString = NULL;
  modelica_integer _scVarIdx;
  modelica_integer _dataType;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oEntries has no default value.
  // _tmpSimVarsFloat has no default value.
  // _tmpSimVarsInt has no default value.
  // _tmpSimVarsBool has no default value.
  // _tmpSimVarsString has no default value.
  // _scVarIdx has no default value.
  // _dataType has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _iScVarCLMapping;
    tmp4_2 = _iEntries;
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
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (-1 != tmp7) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          _tmpSimVarsFloat = tmpMeta9;
          _tmpSimVarsInt = tmpMeta10;
          _tmpSimVarsBool = tmpMeta11;
          _tmpSimVarsString = tmpMeta12;
          _scVarIdx = tmp14  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _dataType = mmc_unbox_integer(omc_Util_tuple31(threadData, arrayGet(_iSimCodeVarTypes, _scVarIdx)));

          if((_dataType == ((modelica_integer) 1)))
          {
            tmpMeta15 = mmc_mk_cons(mmc_mk_integer(_scVarIdx), _tmpSimVarsFloat);
            _tmpSimVarsFloat = tmpMeta15;
          }
          else
          {
            if((_dataType == ((modelica_integer) 2)))
            {
              tmpMeta16 = mmc_mk_cons(mmc_mk_integer(_scVarIdx), _tmpSimVarsInt);
              _tmpSimVarsInt = tmpMeta16;
            }
            else
            {
              if((_dataType == ((modelica_integer) 3)))
              {
                tmpMeta17 = mmc_mk_cons(mmc_mk_integer(_scVarIdx), _tmpSimVarsBool);
                _tmpSimVarsBool = tmpMeta17;
              }
              else
              {
                if((_dataType == ((modelica_integer) 4)))
                {
                  tmpMeta18 = mmc_mk_cons(mmc_mk_integer(_scVarIdx), _tmpSimVarsString);
                  _tmpSimVarsString = tmpMeta18;
                }
              }
            }
          }
          tmpMeta19 = mmc_mk_box4(0, _tmpSimVarsFloat, _tmpSimVarsInt, _tmpSimVarsBool, _tmpSimVarsString);
          tmpMeta20 = mmc_mk_box2(0, tmpMeta19, mmc_mk_integer(((modelica_integer) 1) + _scVarIdx));
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 1));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 4));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          _tmpSimVarsFloat = tmpMeta22;
          _tmpSimVarsInt = tmpMeta23;
          _tmpSimVarsBool = tmpMeta24;
          _tmpSimVarsString = tmpMeta25;
          _scVarIdx = tmp27  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta28 = mmc_mk_box4(0, _tmpSimVarsFloat, _tmpSimVarsInt, _tmpSimVarsBool, _tmpSimVarsString);
          tmpMeta29 = mmc_mk_box2(0, tmpMeta28, mmc_mk_integer(((modelica_integer) 1) + _scVarIdx));
          tmpMeta1 = tmpMeta29;
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
  _oEntries = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oEntries;
}

static modelica_metatype closure4_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping0(threadData_t *thData, modelica_metatype closure, modelica_metatype iScVarCLMapping, modelica_metatype iEntries)
{
  modelica_metatype iAllVarsMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iSimCodeVarTypes = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping0(thData, iScVarCLMapping, iAllVarsMapping, iSimCodeVarTypes, iEntries);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping(threadData_t *threadData, modelica_metatype _iScVarCLMapping, modelica_metatype _iAllVarsMapping, modelica_metatype _iSimCodeVarTypes)
{
  modelica_metatype _oNotOptimizedVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oNotOptimizedVars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = mmc_mk_box2(0, _iAllVarsMapping, _iSimCodeVarTypes);
  tmpMeta2 = omc_Array_fold(threadData, _iScVarCLMapping, (modelica_fnptr) mmc_mk_box2(0,closure4_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping0,tmpMeta1), _OMC_LIT77);
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  _oNotOptimizedVars = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _oNotOptimizedVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_convertCacheToVarArrayMapping2Helper(threadData_t *threadData, modelica_metatype _iArray, modelica_integer _iOffset, modelica_integer _iIndex)
{
  modelica_metatype _oArray = NULL;
  modelica_metatype _tmpArray = NULL;
  modelica_integer _i;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oArray has no default value.
  // _tmpArray has no default value.
  // _i has no default value.
  _tmpArray = _iArray;

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_tmpArray);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      if((_i != _iIndex))
      {
        _tmpArray = arrayUpdate(_tmpArray, _i, mmc_mk_integer(mmc_unbox_integer(arrayGet(_tmpArray, _i)) + _iOffset));
      }
    }
  }

  _oArray = _tmpArray;
  _return: OMC_LABEL_UNUSED
  return _oArray;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_convertCacheToVarArrayMapping2Helper(threadData_t *threadData, modelica_metatype _iArray, modelica_metatype _iOffset, modelica_metatype _iIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oArray = NULL;
  tmp1 = mmc_unbox_integer(_iOffset);
  tmp2 = mmc_unbox_integer(_iIndex);
  _oArray = omc_HpcOmMemory_convertCacheToVarArrayMapping2Helper(threadData, _iArray, tmp1, tmp2);
  /* skip box _oArray; array<#Integer> */
  return _oArray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_addCacheLineEntryToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_integer _iArrayIdx, modelica_metatype _iClIdxSize, modelica_metatype _iVarIdxOffsets, modelica_metatype _iCacheVariables, modelica_metatype _iPositionMapping)
{
  modelica_metatype _oPositionMapping = NULL;
  modelica_metatype _varArrayIndexMappingHashTable = NULL;
  modelica_metatype _varIndexMappingHashTable = NULL;
  modelica_integer _scVarIdx;
  modelica_integer _start;
  modelica_integer _size;
  modelica_integer _arrayPosition;
  modelica_integer _offset;
  modelica_metatype _currentVarIndices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oPositionMapping has no default value.
  // _varArrayIndexMappingHashTable has no default value.
  // _varIndexMappingHashTable has no default value.
  // _scVarIdx has no default value.
  // _start has no default value.
  // _size has no default value.
  // _arrayPosition has no default value.
  // _offset has no default value.
  // _currentVarIndices has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iCacheLineEntry;
    tmp4_2 = _iPositionMapping;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _start = tmp7  /* pattern as ty=Integer */;
          _size = tmp9  /* pattern as ty=Integer */;
          _scVarIdx = tmp11  /* pattern as ty=Integer */;
          _varArrayIndexMappingHashTable = tmpMeta12;
          _varIndexMappingHashTable = tmpMeta13;
          /* Pattern matching succeeded */
          _offset = mmc_unbox_integer(arrayGet(_iVarIdxOffsets, _iArrayIdx));

          tmp14 = _size;
          if (tmp14 == 0) {goto goto_2;}
          _arrayPosition = modelica_div_integer(_start,tmp14).quot + _offset;

          _currentVarIndices = arrayCreate(((modelica_integer) 4), mmc_mk_integer(_arrayPosition));

          omc_SimCodeUtilShared_addVarToArrayIndexMapping(threadData, arrayGet(_iCacheVariables, ((modelica_integer) 1) + arrayLength(_iCacheVariables) - _scVarIdx), _iArrayIdx, _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);
          tmpMeta15 = mmc_mk_box2(0, _varArrayIndexMappingHashTable, _varIndexMappingHashTable);
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT81, _OMC_LIT83);
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
  _oPositionMapping = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oPositionMapping;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_addCacheLineEntryToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_metatype _iArrayIdx, modelica_metatype _iClIdxSize, modelica_metatype _iVarIdxOffsets, modelica_metatype _iCacheVariables, modelica_metatype _iPositionMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oPositionMapping = NULL;
  tmp1 = mmc_unbox_integer(_iArrayIdx);
  _oPositionMapping = omc_HpcOmMemory_addCacheLineEntryToVarArrayMapping(threadData, _iCacheLineEntry, tmp1, _iClIdxSize, _iVarIdxOffsets, _iCacheVariables, _iPositionMapping);
  /* skip box _oPositionMapping; tuple<tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, tuple<list<#Integer>, array<#Integer>>>>>>, #Integer, tuple<.HashTableCrIListArray.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrIListArray.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrIListArray.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrIListArray.FuncExpStr<function>(tuple<list<#Integer>, array<#Integer>> exp) => String>>, tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, list<#Integer>>>>>, #Integer, tuple<.HashTableCrILst.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrILst.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrILst.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrILst.FuncExpStr<function>(list<#Integer> exp) => String>>> */
  return _oPositionMapping;
}

static modelica_metatype closure5_HpcOmMemory_addCacheLineEntryToVarArrayMapping(threadData_t *thData, modelica_metatype closure, modelica_metatype iCacheLineEntry, modelica_metatype iPositionMapping)
{
  modelica_metatype iArrayIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iClIdxSize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iVarIdxOffsets = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iCacheVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  return boxptr_HpcOmMemory_addCacheLineEntryToVarArrayMapping(thData, iCacheLineEntry, iArrayIdx, iClIdxSize, iVarIdxOffsets, iCacheVariables, iPositionMapping);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_addCacheLineMapToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_integer _iCacheLineSize, modelica_metatype _iVarIdxOffsets, modelica_metatype _iCacheVariables, modelica_metatype _iPositionMapping)
{
  modelica_metatype _oPositionMapping = NULL;
  modelica_metatype _varArrayIndexMappingHashTable = NULL;
  modelica_metatype _varIndexMappingHashTable = NULL;
  modelica_integer _idx;
  modelica_metatype _entries = NULL;
  modelica_integer _dataType;
  modelica_integer _size;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oPositionMapping has no default value.
  // _varArrayIndexMappingHashTable has no default value.
  // _varIndexMappingHashTable has no default value.
  // _idx has no default value.
  // _entries has no default value.
  // _dataType has no default value.
  // _size has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iCacheLineMap;
    tmp4_2 = _iPositionMapping;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _idx = tmp7  /* pattern as ty=Integer */;
          _entries = tmpMeta8;
          _varArrayIndexMappingHashTable = tmpMeta9;
          _varIndexMappingHashTable = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta11 = _entries;
          if (listEmpty(tmpMeta11)) goto goto_2;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 4));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          _dataType = tmp15  /* pattern as ty=Integer */;
          _size = tmp17  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmpMeta19 = mmc_mk_box2(0, mmc_mk_integer(_idx), mmc_mk_integer(_iCacheLineSize));
          tmpMeta18 = mmc_mk_box4(0, mmc_mk_integer(_dataType), tmpMeta19, _iVarIdxOffsets, _iCacheVariables);
          tmpMeta20 = omc_List_fold(threadData, _entries, (modelica_fnptr) mmc_mk_box2(0,closure5_HpcOmMemory_addCacheLineEntryToVarArrayMapping,tmpMeta18), _iPositionMapping);
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          _varArrayIndexMappingHashTable = tmpMeta21;
          _varIndexMappingHashTable = tmpMeta22;

          tmp23 = _size;
          if (tmp23 == 0) {goto goto_2;}
          arrayUpdate(_iVarIdxOffsets, _dataType, mmc_mk_integer(mmc_unbox_integer(arrayGet(_iVarIdxOffsets, _dataType)) + modelica_div_integer(_iCacheLineSize,tmp23).quot));
          tmpMeta24 = mmc_mk_box2(0, _varArrayIndexMappingHashTable, _varIndexMappingHashTable);
          tmpMeta1 = tmpMeta24;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT81, _OMC_LIT85);
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
  _oPositionMapping = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oPositionMapping;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_addCacheLineMapToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_metatype _iCacheLineSize, modelica_metatype _iVarIdxOffsets, modelica_metatype _iCacheVariables, modelica_metatype _iPositionMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oPositionMapping = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  _oPositionMapping = omc_HpcOmMemory_addCacheLineMapToVarArrayMapping(threadData, _iCacheLineMap, tmp1, _iVarIdxOffsets, _iCacheVariables, _iPositionMapping);
  /* skip box _oPositionMapping; tuple<tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, tuple<list<#Integer>, array<#Integer>>>>>>, #Integer, tuple<.HashTableCrIListArray.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrIListArray.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrIListArray.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrIListArray.FuncExpStr<function>(tuple<list<#Integer>, array<#Integer>> exp) => String>>, tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, list<#Integer>>>>>, #Integer, tuple<.HashTableCrILst.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrILst.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrILst.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrILst.FuncExpStr<function>(list<#Integer> exp) => String>>> */
  return _oPositionMapping;
}

static modelica_metatype closure6_HpcOmMemory_addCacheLineMapToVarArrayMapping(threadData_t *thData, modelica_metatype closure, modelica_metatype iCacheLineMap, modelica_metatype iPositionMapping)
{
  modelica_metatype iCacheLineSize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iVarIdxOffsets = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iCacheVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_HpcOmMemory_addCacheLineMapToVarArrayMapping(thData, iCacheLineMap, iCacheLineSize, iVarIdxOffsets, iCacheVariables, iPositionMapping);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_convertCacheToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheMap, modelica_integer _iCacheLineSize, modelica_metatype _iStateVars, modelica_metatype _iDerivativeVars, modelica_metatype _iAliasVars, modelica_metatype _iIntAliasVars, modelica_metatype _iBoolAliasVars, modelica_metatype _iStringAliasVars, modelica_metatype _iVarSizes, modelica_metatype _iNotOptimizedVars, modelica_metatype *out_oVarToIndexMapping, modelica_metatype *out_oMemoryMap)
{
  modelica_metatype _oVarToArrayIndexMapping = NULL;
  modelica_metatype _oVarToIndexMapping = NULL;
  modelica_metatype _oMemoryMap = NULL;
  modelica_integer _cacheLineSize;
  modelica_integer _maxNumElemsFloat;
  modelica_integer _maxNumElemsInt;
  modelica_integer _maxNumElemsBool;
  modelica_integer _stateAndStateDerSize;
  modelica_metatype _cacheVariables = NULL;
  modelica_metatype _cacheVariablesArray = NULL;
  modelica_metatype _cacheLinesFloat = NULL;
  modelica_metatype _cacheLinesInt = NULL;
  modelica_metatype _cacheLinesBool = NULL;
  modelica_metatype _allCacheLines = NULL;
  modelica_metatype _varArrayIndexMappingHashTable = NULL;
  modelica_metatype _varIndexMappingHashTable = NULL;
  modelica_integer _varSizeFloat;
  modelica_integer _varSizeInt;
  modelica_integer _varSizeBool;
  modelica_integer _varSizeString;
  modelica_metatype _varIdxOffsets = NULL;
  modelica_metatype _notOptimizedVarsFloat = NULL;
  modelica_metatype _notOptimizedVarsInt = NULL;
  modelica_metatype _notOptimizedVarsBool = NULL;
  modelica_metatype _notOptimizedVarsString = NULL;
  modelica_metatype _currentVarIndices = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVarToArrayIndexMapping has no default value.
  // _oVarToIndexMapping has no default value.
  // _oMemoryMap has no default value.
  // _cacheLineSize has no default value.
  // _maxNumElemsFloat has no default value.
  // _maxNumElemsInt has no default value.
  // _maxNumElemsBool has no default value.
  // _stateAndStateDerSize has no default value.
  // _cacheVariables has no default value.
  // _cacheVariablesArray has no default value.
  // _cacheLinesFloat has no default value.
  // _cacheLinesInt has no default value.
  // _cacheLinesBool has no default value.
  // _allCacheLines has no default value.
  // _varArrayIndexMappingHashTable has no default value.
  // _varIndexMappingHashTable has no default value.
  // _varSizeFloat has no default value.
  // _varSizeInt has no default value.
  // _varSizeBool has no default value.
  // _varSizeString has no default value.
  // _varIdxOffsets has no default value.
  // _notOptimizedVarsFloat has no default value.
  // _notOptimizedVarsInt has no default value.
  // _notOptimizedVarsBool has no default value.
  // _notOptimizedVarsString has no default value.
  // _currentVarIndices has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _iCacheMap;
    tmp4_2 = _iVarSizes;
    tmp4_3 = _iNotOptimizedVars;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_integer tmp23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          _cacheLineSize = tmp7  /* pattern as ty=Integer */;
          _cacheVariables = tmpMeta8;
          _cacheLinesFloat = tmpMeta9;
          _cacheLinesInt = tmpMeta10;
          _cacheLinesBool = tmpMeta11;
          _varSizeFloat = tmp13  /* pattern as ty=Integer */;
          _varSizeInt = tmp15  /* pattern as ty=Integer */;
          _varSizeBool = tmp17  /* pattern as ty=Integer */;
          _notOptimizedVarsFloat = tmpMeta18;
          _notOptimizedVarsInt = tmpMeta19;
          _notOptimizedVarsBool = tmpMeta20;
          _notOptimizedVarsString = tmpMeta21;
          /* Pattern matching succeeded */
          tmp22 = _varSizeFloat;
          if (tmp22 == 0) {goto goto_2;}
          _maxNumElemsFloat = modelica_div_integer(_iCacheLineSize,tmp22).quot;

          tmp23 = _varSizeInt;
          if (tmp23 == 0) {goto goto_2;}
          _maxNumElemsInt = modelica_div_integer(_iCacheLineSize,tmp23).quot;

          tmp24 = _varSizeBool;
          if (tmp24 == 0) {goto goto_2;}
          _maxNumElemsBool = modelica_div_integer(_iCacheLineSize,tmp24).quot;

          _cacheVariablesArray = listArray(_cacheVariables);

          _varArrayIndexMappingHashTable = omc_HashTableCrIListArray_emptyHashTable(threadData);

          _varIndexMappingHashTable = omc_HashTableCrILst_emptyHashTable(threadData);

          _currentVarIndices = arrayCreate(((modelica_integer) 4), mmc_mk_integer(((modelica_integer) 1)));

          _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, _iStateVars, ((modelica_integer) 1), _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);

          _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, _iDerivativeVars, ((modelica_integer) 1), _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);

          _stateAndStateDerSize = listLength(_iStateVars) + listLength(_iDerivativeVars);

          if((modelica_integer_mod(_stateAndStateDerSize, _maxNumElemsFloat) == ((modelica_integer) 0)))
          {
            arrayUpdate(_currentVarIndices, ((modelica_integer) 1), mmc_mk_integer(((modelica_integer) 1) + _stateAndStateDerSize));

            arrayUpdate(_currentVarIndices, ((modelica_integer) 2), mmc_mk_integer(((modelica_integer) 1)));

            arrayUpdate(_currentVarIndices, ((modelica_integer) 3), mmc_mk_integer(((modelica_integer) 1)));

            arrayUpdate(_currentVarIndices, ((modelica_integer) 4), mmc_mk_integer(((modelica_integer) 1)));
          }
          else
          {
            arrayUpdate(_currentVarIndices, ((modelica_integer) 1), mmc_mk_integer(((modelica_integer) 1) + _stateAndStateDerSize + _maxNumElemsFloat - modelica_integer_mod(_stateAndStateDerSize, _maxNumElemsFloat)));

            arrayUpdate(_currentVarIndices, ((modelica_integer) 2), mmc_mk_integer(((modelica_integer) 1)));

            arrayUpdate(_currentVarIndices, ((modelica_integer) 3), mmc_mk_integer(((modelica_integer) 1)));

            arrayUpdate(_currentVarIndices, ((modelica_integer) 4), mmc_mk_integer(((modelica_integer) 1)));
          }

          _varSizeFloat = mmc_unbox_integer(arrayGet(_currentVarIndices, ((modelica_integer) 1)));

          _varIdxOffsets = arrayCreate(((modelica_integer) 3), mmc_mk_integer(((modelica_integer) 1)));

          _varIdxOffsets = arrayUpdate(_varIdxOffsets, ((modelica_integer) 1), mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(arrayGet(_currentVarIndices, ((modelica_integer) 1)))));

          _allCacheLines = omc_List_sort(threadData, omc_HpcOmMemory_getAllCacheLinesOfCacheMap(threadData, _iCacheMap), boxvar_HpcOmMemory_compareCacheLineMapByIdx);

          /* Pattern-matching assignment */
          tmpMeta25 = mmc_mk_box3(0, mmc_mk_integer(_cacheLineSize), _varIdxOffsets, _cacheVariablesArray);
          tmpMeta26 = mmc_mk_box2(0, _varArrayIndexMappingHashTable, _varIndexMappingHashTable);
          tmpMeta27 = omc_List_fold(threadData, _allCacheLines, (modelica_fnptr) mmc_mk_box2(0,closure6_HpcOmMemory_addCacheLineMapToVarArrayMapping,tmpMeta25), tmpMeta26);
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 1));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
          _varArrayIndexMappingHashTable = tmpMeta28;
          _varIndexMappingHashTable = tmpMeta29;

          arrayUpdate(_currentVarIndices, ((modelica_integer) 1), mmc_mk_integer(mmc_unbox_integer(arrayGet(_currentVarIndices, ((modelica_integer) 1))) + (listLength(_cacheLinesFloat)) * (_maxNumElemsFloat)));

          arrayUpdate(_currentVarIndices, ((modelica_integer) 2), mmc_mk_integer(((modelica_integer) 1) + (listLength(_cacheLinesInt)) * (_maxNumElemsInt)));

          arrayUpdate(_currentVarIndices, ((modelica_integer) 3), mmc_mk_integer(((modelica_integer) 1) + (listLength(_cacheLinesBool)) * (_maxNumElemsBool)));

          arrayUpdate(_currentVarIndices, ((modelica_integer) 4), mmc_mk_integer(((modelica_integer) 1)));

          _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, listReverse(_notOptimizedVarsFloat), ((modelica_integer) 1), _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);

          _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, listReverse(_notOptimizedVarsInt), ((modelica_integer) 2), _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);

          _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, listReverse(_notOptimizedVarsBool), ((modelica_integer) 3), _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);

          _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, listReverse(_notOptimizedVarsString), ((modelica_integer) 4), _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);

          _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, _iAliasVars, ((modelica_integer) 1), _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);

          _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, _iIntAliasVars, ((modelica_integer) 2), _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);

          _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, _iBoolAliasVars, ((modelica_integer) 3), _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);

          _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, _iStringAliasVars, ((modelica_integer) 4), _currentVarIndices, _varArrayIndexMappingHashTable, _varIndexMappingHashTable ,&_varArrayIndexMappingHashTable ,&_varIndexMappingHashTable);

          _varSizeFloat = _varSizeFloat + (listLength(_cacheLinesFloat)) * (_maxNumElemsFloat) + listLength(_notOptimizedVarsFloat);

          _varSizeInt = (listLength(_cacheLinesInt)) * (_maxNumElemsInt) + listLength(_notOptimizedVarsInt);

          _varSizeBool = (listLength(_cacheLinesBool)) * (_maxNumElemsBool) + listLength(_notOptimizedVarsBool);

          _varSizeString = listLength(_notOptimizedVarsString);
          tmpMeta30 = mmc_mk_box5(3, &HpcOmSimCode_MemoryMap_MEMORYMAP__ARRAY__desc, mmc_mk_integer(_varSizeFloat), mmc_mk_integer(_varSizeInt), mmc_mk_integer(_varSizeBool), mmc_mk_integer(_varSizeString));
          tmpMeta[0+0] = _varArrayIndexMappingHashTable;
          tmpMeta[0+1] = _varIndexMappingHashTable;
          tmpMeta[0+2] = mmc_mk_some(tmpMeta30);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT81, _OMC_LIT87);
          goto goto_2;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT81, _OMC_LIT89);
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
  _oVarToArrayIndexMapping = tmpMeta[0+0];
  _oVarToIndexMapping = tmpMeta[0+1];
  _oMemoryMap = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_oVarToIndexMapping) { *out_oVarToIndexMapping = _oVarToIndexMapping; }
  if (out_oMemoryMap) { *out_oMemoryMap = _oMemoryMap; }
  return _oVarToArrayIndexMapping;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_convertCacheToVarArrayMapping(threadData_t *threadData, modelica_metatype _iCacheMap, modelica_metatype _iCacheLineSize, modelica_metatype _iStateVars, modelica_metatype _iDerivativeVars, modelica_metatype _iAliasVars, modelica_metatype _iIntAliasVars, modelica_metatype _iBoolAliasVars, modelica_metatype _iStringAliasVars, modelica_metatype _iVarSizes, modelica_metatype _iNotOptimizedVars, modelica_metatype *out_oVarToIndexMapping, modelica_metatype *out_oMemoryMap)
{
  modelica_integer tmp1;
  modelica_metatype _oVarToArrayIndexMapping = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  _oVarToArrayIndexMapping = omc_HpcOmMemory_convertCacheToVarArrayMapping(threadData, _iCacheMap, tmp1, _iStateVars, _iDerivativeVars, _iAliasVars, _iIntAliasVars, _iBoolAliasVars, _iStringAliasVars, _iVarSizes, _iNotOptimizedVars, out_oVarToIndexMapping, out_oMemoryMap);
  /* skip box _oVarToArrayIndexMapping; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, tuple<list<#Integer>, array<#Integer>>>>>>, #Integer, tuple<.HashTableCrIListArray.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrIListArray.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrIListArray.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrIListArray.FuncExpStr<function>(tuple<list<#Integer>, array<#Integer>> exp) => String>> */
  /* skip box _oVarToIndexMapping; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, list<#Integer>>>>>, #Integer, tuple<.HashTableCrILst.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrILst.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrILst.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrILst.FuncExpStr<function>(list<#Integer> exp) => String>> */
  /* skip box _oMemoryMap; Option<HpcOmSimCode.MemoryMap> */
  return _oVarToArrayIndexMapping;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmMemory_compareCacheLineMapByIdx(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_metatype _iCacheLineMap2)
{
  modelica_boolean _oIsGreater;
  modelica_integer _idx1;
  modelica_integer _idx2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oIsGreater has no default value.
  // _idx1 has no default value.
  // _idx2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLineMap;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _idx1 = tmp3  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta4 = _iCacheLineMap2;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _idx2 = tmp6  /* pattern as ty=Integer */;

  _oIsGreater = (_idx1 > _idx2);
  _return: OMC_LABEL_UNUSED
  return _oIsGreater;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_compareCacheLineMapByIdx(threadData_t *threadData, modelica_metatype _iCacheLineMap, modelica_metatype _iCacheLineMap2)
{
  modelica_boolean _oIsGreater;
  modelica_metatype out_oIsGreater;
  _oIsGreater = omc_HpcOmMemory_compareCacheLineMapByIdx(threadData, _iCacheLineMap, _iCacheLineMap2);
  out_oIsGreater = mmc_mk_icon(_oIsGreater);
  return out_oIsGreater;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_reverseCacheLineMapEntries(threadData_t *threadData, modelica_metatype _iCacheLineMap)
{
  modelica_metatype _oCacheLineMap = NULL;
  modelica_integer _idx;
  modelica_integer _numBytesFree;
  modelica_metatype _entries = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheLineMap has no default value.
  // _idx has no default value.
  // _numBytesFree has no default value.
  // _entries has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLineMap;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _idx = tmp3  /* pattern as ty=Integer */;
  _numBytesFree = tmp5  /* pattern as ty=Integer */;
  _entries = tmpMeta6;

  _entries = listReverse(_entries);

  tmpMeta7 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(_idx), mmc_mk_integer(_numBytesFree), _entries);
  _oCacheLineMap = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _oCacheLineMap;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmMemory_sortCacheLineEntriesByPos(threadData_t *threadData, modelica_metatype _iCacheLineEntry1, modelica_metatype _iCacheLineEntry2)
{
  modelica_boolean _oIsGreater;
  modelica_integer _start1;
  modelica_integer _start2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oIsGreater has no default value.
  // _start1 has no default value.
  // _start2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLineEntry1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _start1 = tmp3  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta4 = _iCacheLineEntry2;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _start2 = tmp6  /* pattern as ty=Integer */;

  _oIsGreater = (_start1 > _start2);
  _return: OMC_LABEL_UNUSED
  return _oIsGreater;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_sortCacheLineEntriesByPos(threadData_t *threadData, modelica_metatype _iCacheLineEntry1, modelica_metatype _iCacheLineEntry2)
{
  modelica_boolean _oIsGreater;
  modelica_metatype out_oIsGreater;
  _oIsGreater = omc_HpcOmMemory_sortCacheLineEntriesByPos(threadData, _iCacheLineEntry1, _iCacheLineEntry2);
  out_oIsGreater = mmc_mk_icon(_oIsGreater);
  return out_oIsGreater;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmMemory_getNumOfUsedBytesByCacheLine(threadData_t *threadData, modelica_metatype _iCacheLineMap)
{
  modelica_integer _oNumBytes;
  modelica_metatype _entries = NULL;
  modelica_integer _firstEntryStart;
  modelica_integer _firstEntrySize;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oNumBytes has no default value.
  // _entries has no default value.
  // _firstEntryStart has no default value.
  // _firstEntrySize has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLineMap;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _entries = tmpMeta2;

  _entries = omc_List_sort(threadData, _entries, boxvar_HpcOmMemory_sortCacheLineEntriesByPos);

  /* Pattern-matching assignment */
  tmpMeta3 = omc_List_last(threadData, _entries);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 4));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  _firstEntryStart = tmp5  /* pattern as ty=Integer */;
  _firstEntrySize = tmp7  /* pattern as ty=Integer */;

  _oNumBytes = _firstEntryStart + _firstEntrySize;
  _return: OMC_LABEL_UNUSED
  return _oNumBytes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getNumOfUsedBytesByCacheLine(threadData_t *threadData, modelica_metatype _iCacheLineMap)
{
  modelica_integer _oNumBytes;
  modelica_metatype out_oNumBytes;
  _oNumBytes = omc_HpcOmMemory_getNumOfUsedBytesByCacheLine(threadData, _iCacheLineMap);
  out_oNumBytes = mmc_mk_icon(_oNumBytes);
  return out_oNumBytes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createDetailedCacheMapInformation0(threadData_t *threadData, modelica_integer _iCacheLineIdx, modelica_metatype _iCacheLinesArray, modelica_integer _iCacheLineSize, modelica_metatype _iCacheLines)
{
  modelica_metatype _oCacheLines = NULL;
  modelica_metatype _cacheLineEntry = NULL;
  modelica_integer _numBytesFree;
  modelica_metatype _cacheLines = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheLines has no default value.
  // _cacheLineEntry has no default value.
  // _numBytesFree has no default value.
  // _cacheLines has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          _cacheLineEntry = arrayGet(_iCacheLinesArray, ((modelica_integer) 1) + arrayLength(_iCacheLinesArray) - _iCacheLineIdx);

          _numBytesFree = _iCacheLineSize - omc_HpcOmMemory_getNumOfUsedBytesByCacheLine(threadData, _cacheLineEntry);

          /* Pattern-matching assignment */
          tmp6 = (_numBytesFree > ((modelica_integer) 0));
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta8 = mmc_mk_box2(0, mmc_mk_integer(_iCacheLineIdx), mmc_mk_integer(_numBytesFree));
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _iCacheLines);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _iCacheLines;
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
  _oCacheLines = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCacheLines;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createDetailedCacheMapInformation0(threadData_t *threadData, modelica_metatype _iCacheLineIdx, modelica_metatype _iCacheLinesArray, modelica_metatype _iCacheLineSize, modelica_metatype _iCacheLines)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oCacheLines = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineIdx);
  tmp2 = mmc_unbox_integer(_iCacheLineSize);
  _oCacheLines = omc_HpcOmMemory_createDetailedCacheMapInformation0(threadData, tmp1, _iCacheLinesArray, tmp2, _iCacheLines);
  /* skip box _oCacheLines; list<tuple<#Integer, #Integer>> */
  return _oCacheLines;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createDetailedCacheMapInformation(threadData_t *threadData, modelica_metatype _iCacheLinesIdc, modelica_metatype _iCacheLines, modelica_integer _iCacheLineSize)
{
  modelica_metatype _oCacheLines = NULL;
  modelica_metatype _iCacheLinesArray = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheLines has no default value.
  // _iCacheLinesArray has no default value.
  _iCacheLinesArray = listArray(_iCacheLines);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _oCacheLines = omc_List_fold2(threadData, _iCacheLinesIdc, boxvar_HpcOmMemory_createDetailedCacheMapInformation0, _iCacheLinesArray, mmc_mk_integer(_iCacheLineSize), tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _oCacheLines;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createDetailedCacheMapInformation(threadData_t *threadData, modelica_metatype _iCacheLinesIdc, modelica_metatype _iCacheLines, modelica_metatype _iCacheLineSize)
{
  modelica_integer tmp1;
  modelica_metatype _oCacheLines = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  _oCacheLines = omc_HpcOmMemory_createDetailedCacheMapInformation(threadData, _iCacheLinesIdc, _iCacheLines, tmp1);
  /* skip box _oCacheLines; list<tuple<#Integer, #Integer>> */
  return _oCacheLines;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmMemory_doesSCVarFitIntoCL(threadData_t *threadData, modelica_metatype _iCacheLineCandidate, modelica_integer _iNumBytes)
{
  modelica_boolean _oResult;
  modelica_integer _freeSpace;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oResult has no default value.
  // _freeSpace has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLineCandidate;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _freeSpace = tmp3  /* pattern as ty=Integer */;

  _oResult = (_freeSpace >= _iNumBytes);
  _return: OMC_LABEL_UNUSED
  return _oResult;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_doesSCVarFitIntoCL(threadData_t *threadData, modelica_metatype _iCacheLineCandidate, modelica_metatype _iNumBytes)
{
  modelica_integer tmp1;
  modelica_boolean _oResult;
  modelica_metatype out_oResult;
  tmp1 = mmc_unbox_integer(_iNumBytes);
  _oResult = omc_HpcOmMemory_doesSCVarFitIntoCL(threadData, _iCacheLineCandidate, tmp1);
  out_oResult = mmc_mk_icon(_oResult);
  return out_oResult;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendSCVarToCacheMap(threadData_t *threadData, modelica_integer _iSCVarIdx, modelica_integer _iOwnerThread, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_metatype _iAllSCVarsMapping = NULL;
  modelica_metatype _iSimCodeVarTypes = NULL;
  modelica_metatype _iScVarCLMapping = NULL;
  modelica_integer _currentCLCandidateIdx;
  modelica_integer _currentCLCandidateCLIdx;
  modelica_integer _clIdx;
  modelica_integer _currentCLCandidateFreeBytes;
  modelica_integer _cacheLineSize;
  modelica_integer _numNewCL;
  modelica_integer _varDataType;
  modelica_integer _numBytesRequired;
  modelica_integer _entryStart;
  modelica_metatype _currentCLCandidate = NULL;
  modelica_metatype _cacheLineCandidates = NULL;
  modelica_metatype _cacheLinesFloat = NULL;
  modelica_metatype _cacheLinesInt = NULL;
  modelica_metatype _cacheLinesBool = NULL;
  modelica_metatype _cacheVariables = NULL;
  modelica_metatype _cacheLine = NULL;
  modelica_metatype _CLentries = NULL;
  modelica_metatype _scVar = NULL;
  modelica_integer _numCacheVars;
  modelica_integer _freeSpace;
  modelica_integer _numBytesFree;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _cacheMapMeta = NULL;
  modelica_metatype _writtenCL = NULL;
  modelica_metatype _tmpInfo = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _iAllSCVarsMapping has no default value.
  // _iSimCodeVarTypes has no default value.
  // _iScVarCLMapping has no default value.
  // _currentCLCandidateIdx has no default value.
  // _currentCLCandidateCLIdx has no default value.
  // _clIdx has no default value.
  // _currentCLCandidateFreeBytes has no default value.
  // _cacheLineSize has no default value.
  // _numNewCL has no default value.
  // _varDataType has no default value.
  // _numBytesRequired has no default value.
  // _entryStart has no default value.
  // _currentCLCandidate has no default value.
  // _cacheLineCandidates has no default value.
  // _cacheLinesFloat has no default value.
  // _cacheLinesInt has no default value.
  // _cacheLinesBool has no default value.
  // _cacheVariables has no default value.
  // _cacheLine has no default value.
  // _CLentries has no default value.
  // _scVar has no default value.
  // _numCacheVars has no default value.
  // _freeSpace has no default value.
  // _numBytesFree has no default value.
  // _cacheMap has no default value.
  // _cacheMapMeta has no default value.
  // _writtenCL has no default value.
  // _tmpInfo has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iInfo;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_boolean tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_boolean tmp29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          modelica_integer tmp34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          modelica_integer tmp39;
          modelica_metatype tmpMeta40;
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 4));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          _cacheMap = tmpMeta6;
          _cacheLineSize = tmp8  /* pattern as ty=Integer */;
          _cacheVariables = tmpMeta9;
          _cacheLinesFloat = tmpMeta10;
          _cacheLinesInt = tmpMeta11;
          _cacheLinesBool = tmpMeta12;
          _cacheMapMeta = tmpMeta13;
          _iAllSCVarsMapping = tmpMeta14;
          _iSimCodeVarTypes = tmpMeta15;
          _iScVarCLMapping = tmpMeta16;
          _numNewCL = tmp18  /* pattern as ty=Integer */;
          _cacheLineCandidates = tmpMeta19;
          _writtenCL = tmpMeta20;
          _currentCLCandidateIdx = tmp22  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp23 = (listLength(_cacheLineCandidates) >= _currentCLCandidateIdx);
          if (1 /* true */ != tmp23) goto goto_2;

          _currentCLCandidate = listGet(_cacheLineCandidates, _currentCLCandidateIdx);

          /* Pattern-matching assignment */
          tmpMeta24 = arrayGet(_iSimCodeVarTypes, _iSCVarIdx);
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 1));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          _varDataType = tmp26  /* pattern as ty=Integer */;
          _numBytesRequired = tmp28  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmp29 = omc_HpcOmMemory_doesSCVarFitIntoCL(threadData, _currentCLCandidate, _numBytesRequired);
          if (1 /* true */ != tmp29) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta30 = _currentCLCandidate;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 1));
          tmp32 = mmc_unbox_integer(tmpMeta31);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          tmp34 = mmc_unbox_integer(tmpMeta33);
          _currentCLCandidateCLIdx = tmp32  /* pattern as ty=Integer */;
          _currentCLCandidateFreeBytes = tmp34  /* pattern as ty=Integer */;

          _cacheLine = listGet(_cacheLinesFloat, ((modelica_integer) 1) + listLength(_cacheLinesFloat) - _currentCLCandidateCLIdx);

          /* Pattern-matching assignment */
          tmpMeta35 = _cacheLine;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          tmp37 = mmc_unbox_integer(tmpMeta36);
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 3));
          tmp39 = mmc_unbox_integer(tmpMeta38);
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 4));
          _clIdx = tmp37  /* pattern as ty=Integer */;
          _numBytesFree = tmp39  /* pattern as ty=Integer */;
          _CLentries = tmpMeta40;

          _entryStart = _cacheLineSize - _currentCLCandidateFreeBytes;

          _numCacheVars = ((modelica_integer) 1) + listLength(_cacheVariables);

          tmpMeta42 = mmc_mk_box6(3, &HpcOmMemory_CacheLineEntry_CACHELINEENTRY__desc, mmc_mk_integer(_entryStart), mmc_mk_integer(_varDataType), mmc_mk_integer(_numBytesRequired), mmc_mk_integer(_numCacheVars), mmc_mk_integer(_iOwnerThread));
          tmpMeta41 = mmc_mk_cons(tmpMeta42, _CLentries);
          _CLentries = tmpMeta41;

          tmpMeta43 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(_clIdx), mmc_mk_integer(_numBytesFree + _numBytesRequired), _CLentries);
          _cacheLine = tmpMeta43;

          _cacheLinesFloat = omc_List_set(threadData, _cacheLinesFloat, ((modelica_integer) 1) + listLength(_cacheLinesFloat) - _currentCLCandidateCLIdx, _cacheLine);

          tmpMeta44 = mmc_mk_box2(0, mmc_mk_integer(_clIdx), mmc_mk_integer(_varDataType));
          _iScVarCLMapping = arrayUpdate(_iScVarCLMapping, _iSCVarIdx, tmpMeta44);

          /* Pattern-matching assignment */
          tmpMeta45 = arrayGet(_iAllSCVarsMapping, _iSCVarIdx);
          if (optionNone(tmpMeta45)) goto goto_2;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 1));
          _scVar = tmpMeta46;

          tmpMeta47 = mmc_mk_cons(_scVar, _cacheVariables);
          _cacheVariables = tmpMeta47;

          tmpMeta48 = mmc_mk_cons(mmc_mk_integer(_clIdx), _writtenCL);
          _writtenCL = tmpMeta48;

          tmpMeta49 = mmc_mk_box2(0, mmc_mk_integer(_currentCLCandidateCLIdx), mmc_mk_integer(_currentCLCandidateFreeBytes - _numBytesRequired));
          _currentCLCandidate = tmpMeta49;

          _cacheLineCandidates = omc_List_set(threadData, _cacheLineCandidates, _currentCLCandidateIdx, _currentCLCandidate);

          tmpMeta50 = mmc_mk_box6(3, &HpcOmMemory_CacheMap_CACHEMAP__desc, mmc_mk_integer(_cacheLineSize), _cacheVariables, _cacheLinesFloat, _cacheLinesInt, _cacheLinesBool);
          _cacheMap = tmpMeta50;

          tmpMeta51 = mmc_mk_box4(3, &HpcOmMemory_CacheMapMeta_CACHEMAPMETA__desc, _iAllSCVarsMapping, _iSimCodeVarTypes, _iScVarCLMapping);
          _cacheMapMeta = tmpMeta51;
          tmpMeta52 = mmc_mk_box6(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numNewCL), _cacheLineCandidates, _writtenCL, mmc_mk_integer(_currentCLCandidateIdx));
          tmpMeta1 = tmpMeta52;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_integer tmp55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_integer tmp65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_integer tmp69;
          modelica_boolean tmp70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_integer tmp73;
          modelica_metatype tmpMeta74;
          modelica_integer tmp75;
          modelica_metatype tmpMeta76;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta53,0,5) == 0) goto tmp3_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 2));
          tmp55 = mmc_unbox_integer(tmpMeta54);
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 3));
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 4));
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 5));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 6));
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 2));
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 3));
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 4));
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp65 = mmc_unbox_integer(tmpMeta64);
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp69 = mmc_unbox_integer(tmpMeta68);
          _cacheMap = tmpMeta53;
          _cacheLineSize = tmp55  /* pattern as ty=Integer */;
          _cacheVariables = tmpMeta56;
          _cacheLinesFloat = tmpMeta57;
          _cacheLinesInt = tmpMeta58;
          _cacheLinesBool = tmpMeta59;
          _cacheMapMeta = tmpMeta60;
          _iAllSCVarsMapping = tmpMeta61;
          _iSimCodeVarTypes = tmpMeta62;
          _iScVarCLMapping = tmpMeta63;
          _numNewCL = tmp65  /* pattern as ty=Integer */;
          _cacheLineCandidates = tmpMeta66;
          _writtenCL = tmpMeta67;
          _currentCLCandidateIdx = tmp69  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp70 = (listLength(_cacheLineCandidates) >= _currentCLCandidateIdx);
          if (1 /* true */ != tmp70) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta71 = arrayGet(_iSimCodeVarTypes, _iSCVarIdx);
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta71), 1));
          tmp73 = mmc_unbox_integer(tmpMeta72);
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta71), 2));
          tmp75 = mmc_unbox_integer(tmpMeta74);
          _varDataType = tmp73  /* pattern as ty=Integer */;
          _numBytesRequired = tmp75  /* pattern as ty=Integer */;
          tmpMeta76 = mmc_mk_box6(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numNewCL), _cacheLineCandidates, _writtenCL, mmc_mk_integer(((modelica_integer) 1) + _currentCLCandidateIdx));
          tmpMeta1 = omc_HpcOmMemory_appendSCVarToCacheMap(threadData, _iSCVarIdx, _iOwnerThread, tmpMeta76);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_integer tmp79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_integer tmp89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_integer tmp93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_integer tmp96;
          modelica_metatype tmpMeta97;
          modelica_integer tmp98;
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
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta77,0,5) == 0) goto tmp3_end;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 2));
          tmp79 = mmc_unbox_integer(tmpMeta78);
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 3));
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 4));
          tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 5));
          tmpMeta83 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 6));
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 2));
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 3));
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 4));
          tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp89 = mmc_unbox_integer(tmpMeta88);
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta91 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp93 = mmc_unbox_integer(tmpMeta92);
          _cacheMap = tmpMeta77;
          _cacheLineSize = tmp79  /* pattern as ty=Integer */;
          _cacheVariables = tmpMeta80;
          _cacheLinesFloat = tmpMeta81;
          _cacheLinesInt = tmpMeta82;
          _cacheLinesBool = tmpMeta83;
          _iAllSCVarsMapping = tmpMeta85;
          _iSimCodeVarTypes = tmpMeta86;
          _iScVarCLMapping = tmpMeta87;
          _numNewCL = tmp89  /* pattern as ty=Integer */;
          _cacheLineCandidates = tmpMeta90;
          _writtenCL = tmpMeta91;
          _currentCLCandidateIdx = tmp93  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta94 = arrayGet(_iSimCodeVarTypes, _iSCVarIdx);
          tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta94), 1));
          tmp96 = mmc_unbox_integer(tmpMeta95);
          tmpMeta97 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta94), 2));
          tmp98 = mmc_unbox_integer(tmpMeta97);
          _varDataType = tmp96  /* pattern as ty=Integer */;
          _numBytesRequired = tmp98  /* pattern as ty=Integer */;

          _entryStart = ((modelica_integer) 0);

          _numCacheVars = ((modelica_integer) 1) + listLength(_cacheVariables);

          tmpMeta100 = mmc_mk_box6(3, &HpcOmMemory_CacheLineEntry_CACHELINEENTRY__desc, mmc_mk_integer(_entryStart), mmc_mk_integer(_varDataType), mmc_mk_integer(_numBytesRequired), mmc_mk_integer(_numCacheVars), mmc_mk_integer(_iOwnerThread));
          tmpMeta99 = mmc_mk_cons(tmpMeta100, MMC_REFSTRUCTLIT(mmc_nil));
          _CLentries = tmpMeta99;

          _clIdx = ((modelica_integer) 1) + listLength(_cacheLinesFloat);

          tmpMeta101 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(_clIdx), mmc_mk_integer(_numBytesRequired), _CLentries);
          _cacheLine = tmpMeta101;

          tmpMeta102 = mmc_mk_cons(_cacheLine, _cacheLinesFloat);
          _cacheLinesFloat = tmpMeta102;

          tmpMeta103 = mmc_mk_box2(0, mmc_mk_integer(_clIdx), mmc_mk_integer(_varDataType));
          _iScVarCLMapping = arrayUpdate(_iScVarCLMapping, _iSCVarIdx, tmpMeta103);

          /* Pattern-matching assignment */
          tmpMeta104 = arrayGet(_iAllSCVarsMapping, _iSCVarIdx);
          if (optionNone(tmpMeta104)) goto goto_2;
          tmpMeta105 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta104), 1));
          _scVar = tmpMeta105;

          tmpMeta106 = mmc_mk_cons(_scVar, _cacheVariables);
          _cacheVariables = tmpMeta106;

          tmpMeta107 = mmc_mk_cons(mmc_mk_integer(_clIdx), _writtenCL);
          _writtenCL = tmpMeta107;

          _freeSpace = _cacheLineSize - _numBytesRequired;

          tmpMeta108 = mmc_mk_box2(0, mmc_mk_integer(_clIdx), mmc_mk_integer(_freeSpace));
          _cacheLineCandidates = omc_List_appendElt(threadData, tmpMeta108, _cacheLineCandidates);

          tmpMeta109 = mmc_mk_box6(3, &HpcOmMemory_CacheMap_CACHEMAP__desc, mmc_mk_integer(_cacheLineSize), _cacheVariables, _cacheLinesFloat, _cacheLinesInt, _cacheLinesBool);
          _cacheMap = tmpMeta109;

          tmpMeta110 = mmc_mk_box4(3, &HpcOmMemory_CacheMapMeta_CACHEMAPMETA__desc, _iAllSCVarsMapping, _iSimCodeVarTypes, _iScVarCLMapping);
          _cacheMapMeta = tmpMeta110;
          tmpMeta111 = mmc_mk_box6(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(((modelica_integer) 1) + _numNewCL), _cacheLineCandidates, _writtenCL, mmc_mk_integer(_currentCLCandidateIdx));
          tmpMeta1 = tmpMeta111;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT90),stdout);
          tmpMeta1 = _iInfo;
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
  _oInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_appendSCVarToCacheMap(threadData_t *threadData, modelica_metatype _iSCVarIdx, modelica_metatype _iOwnerThread, modelica_metatype _iInfo)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oInfo = NULL;
  tmp1 = mmc_unbox_integer(_iSCVarIdx);
  tmp2 = mmc_unbox_integer(_iOwnerThread);
  _oInfo = omc_HpcOmMemory_appendSCVarToCacheMap(threadData, tmp1, tmp2, _iInfo);
  /* skip box _oInfo; tuple<HpcOmMemory.CacheMap, HpcOmMemory.CacheMapMeta, #Integer, list<tuple<#Integer, #Integer>>, list<#Integer>, #Integer> */
  return _oInfo;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmMemory_appendNodeVarsToCacheMap0(threadData_t *threadData, modelica_metatype _iWrittenCLs, modelica_metatype _iDetailedCLInfo)
{
  modelica_boolean _oRemove;
  modelica_integer _clIdx;
  modelica_integer _freeBytes;
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oRemove has no default value.
  // _clIdx has no default value.
  // _freeBytes has no default value.
  // _res has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iDetailedCLInfo;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_boolean tmp10;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _clIdx = tmp7  /* pattern as ty=Integer */;
          _freeBytes = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (_freeBytes == ((modelica_integer) 0));
          if (1 /* true */ != tmp10) goto goto_2;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          _clIdx = tmp12  /* pattern as ty=Integer */;
          _freeBytes = tmp14  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = omc_List_isMemberOnTrue(threadData, mmc_mk_integer(_clIdx), _iWrittenCLs, boxvar_intEq);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT91),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oRemove = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oRemove;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_appendNodeVarsToCacheMap0(threadData_t *threadData, modelica_metatype _iWrittenCLs, modelica_metatype _iDetailedCLInfo)
{
  modelica_boolean _oRemove;
  modelica_metatype out_oRemove;
  _oRemove = omc_HpcOmMemory_appendNodeVarsToCacheMap0(threadData, _iWrittenCLs, _iDetailedCLInfo);
  out_oRemove = mmc_mk_icon(_oRemove);
  return out_oRemove;
}

static modelica_metatype closure7_HpcOmMemory_appendSCVarToCacheMap(threadData_t *thData, modelica_metatype closure, modelica_metatype iSCVarIdx, modelica_metatype iInfo)
{
  modelica_metatype iOwnerThread = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_HpcOmMemory_appendSCVarToCacheMap(thData, iSCVarIdx, iOwnerThread, iInfo);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_appendNodeVarsToCacheMap(threadData_t *threadData, modelica_integer _iNodeIdx, modelica_integer _iOwnerThread, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_metatype _simCodeVars = NULL;
  modelica_metatype _writtenCL = NULL;
  modelica_metatype _iCacheMap = NULL;
  modelica_metatype _iCacheMapMeta = NULL;
  modelica_integer _iNumNewCL;
  modelica_string _varsString = NULL;
  modelica_metatype _clCandidates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _simCodeVars has no default value.
  // _writtenCL has no default value.
  // _iCacheMap has no default value.
  // _iCacheMapMeta has no default value.
  // _iNumNewCL has no default value.
  // _varsString has no default value.
  // _clCandidates has no default value.
  _simCodeVars = arrayGet(_iNodeSimCodeVarMapping, _iNodeIdx);

  /* Pattern-matching assignment */
  tmpMeta1 = _iInfo;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _iCacheMap = tmpMeta2;
  _iCacheMapMeta = tmpMeta3;
  _iNumNewCL = tmp5  /* pattern as ty=Integer */;
  _clCandidates = tmpMeta6;

  _varsString = stringDelimitList(omc_List_map(threadData, _simCodeVars, boxvar_intString), _OMC_LIT24);

  /* Pattern-matching assignment */
  tmpMeta7 = mmc_mk_box1(0, mmc_mk_integer(_iOwnerThread));
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta9 = mmc_mk_box6(0, _iCacheMap, _iCacheMapMeta, mmc_mk_integer(_iNumNewCL), _clCandidates, tmpMeta8, mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta10 = omc_List_fold(threadData, _simCodeVars, (modelica_fnptr) mmc_mk_box2(0,closure7_HpcOmMemory_appendSCVarToCacheMap,tmpMeta7), tmpMeta9);
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
  tmp14 = mmc_unbox_integer(tmpMeta13);
  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 5));
  _iCacheMap = tmpMeta11;
  _iCacheMapMeta = tmpMeta12;
  _iNumNewCL = tmp14  /* pattern as ty=Integer */;
  _clCandidates = tmpMeta15;
  _writtenCL = tmpMeta16;

  _clCandidates = omc_List_removeOnTrue(threadData, _writtenCL, boxvar_HpcOmMemory_appendNodeVarsToCacheMap0, _clCandidates);

  tmpMeta17 = mmc_mk_box4(0, _iCacheMap, _iCacheMapMeta, mmc_mk_integer(_iNumNewCL), _clCandidates);
  _oInfo = tmpMeta17;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_appendNodeVarsToCacheMap(threadData_t *threadData, modelica_metatype _iNodeIdx, modelica_metatype _iOwnerThread, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iInfo)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oInfo = NULL;
  tmp1 = mmc_unbox_integer(_iNodeIdx);
  tmp2 = mmc_unbox_integer(_iOwnerThread);
  _oInfo = omc_HpcOmMemory_appendNodeVarsToCacheMap(threadData, tmp1, tmp2, _iNodeSimCodeVarMapping, _iInfo);
  /* skip box _oInfo; tuple<HpcOmMemory.CacheMap, HpcOmMemory.CacheMapMeta, #Integer, list<tuple<#Integer, #Integer>>> */
  return _oInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapDefaultCppRuntime1(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_integer _iCacheLineSize, modelica_metatype _iLastCacheLine, modelica_metatype *out_oLastCacheLine, modelica_boolean *out_oNewOneCreated)
{
  modelica_metatype _oCacheLineEntry = NULL;
  modelica_metatype _oLastCacheLine = NULL;
  modelica_boolean _oNewOneCreated;
  modelica_integer _numberOfFreeBytesLastCacheLine;
  modelica_metatype _lastCacheLineEntries = NULL;
  modelica_metatype _cacheLine = NULL;
  modelica_metatype _cacheLineEntry = NULL;
  modelica_integer _entrySize;
  modelica_integer _entryStart;
  modelica_integer _entryType;
  modelica_integer _entryVarIdx;
  modelica_integer _entryThreadOwner;
  modelica_integer _lastCacheLineIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheLineEntry has no default value.
  // _oLastCacheLine has no default value.
  // _oNewOneCreated has no default value.
  // _numberOfFreeBytesLastCacheLine has no default value.
  // _lastCacheLineEntries has no default value.
  // _cacheLine has no default value.
  // _cacheLineEntry has no default value.
  // _entrySize has no default value.
  // _entryStart has no default value.
  // _entryType has no default value.
  // _entryVarIdx has no default value.
  // _entryThreadOwner has no default value.
  // _lastCacheLineIdx has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheLineEntry;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp9 = mmc_unbox_integer(tmpMeta8);
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmp11 = mmc_unbox_integer(tmpMeta10);
  _entryStart = tmp3  /* pattern as ty=Integer */;
  _entryType = tmp5  /* pattern as ty=Integer */;
  _entrySize = tmp7  /* pattern as ty=Integer */;
  _entryVarIdx = tmp9  /* pattern as ty=Integer */;
  _entryThreadOwner = tmp11  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta12 = _iLastCacheLine;
  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
  tmp14 = mmc_unbox_integer(tmpMeta13);
  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
  tmp16 = mmc_unbox_integer(tmpMeta15);
  tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 4));
  _lastCacheLineIdx = tmp14  /* pattern as ty=Integer */;
  _numberOfFreeBytesLastCacheLine = tmp16  /* pattern as ty=Integer */;
  _lastCacheLineEntries = tmpMeta17;

  if((_entrySize > _numberOfFreeBytesLastCacheLine))
  {
    tmpMeta18 = mmc_mk_box6(3, &HpcOmMemory_CacheLineEntry_CACHELINEENTRY__desc, mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(_entryType), mmc_mk_integer(_entrySize), mmc_mk_integer(_entryVarIdx), mmc_mk_integer(_entryThreadOwner));
    _cacheLineEntry = tmpMeta18;

    tmpMeta19 = mmc_mk_cons(_cacheLineEntry, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta20 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(((modelica_integer) 1) + _lastCacheLineIdx), mmc_mk_integer(_iCacheLineSize - _entrySize), tmpMeta19);
    _cacheLine = tmpMeta20;

    _oNewOneCreated = 1 /* true */;
  }
  else
  {
    tmpMeta21 = mmc_mk_box6(3, &HpcOmMemory_CacheLineEntry_CACHELINEENTRY__desc, mmc_mk_integer(_iCacheLineSize - _numberOfFreeBytesLastCacheLine), mmc_mk_integer(_entryType), mmc_mk_integer(_entrySize), mmc_mk_integer(_entryVarIdx), mmc_mk_integer(_entryThreadOwner));
    _cacheLineEntry = tmpMeta21;

    tmpMeta22 = mmc_mk_cons(_cacheLineEntry, _lastCacheLineEntries);
    tmpMeta23 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(_lastCacheLineIdx), mmc_mk_integer(_numberOfFreeBytesLastCacheLine - _entrySize), tmpMeta22);
    _cacheLine = tmpMeta23;

    _oNewOneCreated = 0 /* false */;
  }

  _oCacheLineEntry = _cacheLineEntry;

  _oLastCacheLine = _cacheLine;
  _return: OMC_LABEL_UNUSED
  if (out_oLastCacheLine) { *out_oLastCacheLine = _oLastCacheLine; }
  if (out_oNewOneCreated) { *out_oNewOneCreated = _oNewOneCreated; }
  return _oCacheLineEntry;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapDefaultCppRuntime1(threadData_t *threadData, modelica_metatype _iCacheLineEntry, modelica_metatype _iCacheLineSize, modelica_metatype _iLastCacheLine, modelica_metatype *out_oLastCacheLine, modelica_metatype *out_oNewOneCreated)
{
  modelica_integer tmp1;
  modelica_boolean _oNewOneCreated;
  modelica_metatype _oCacheLineEntry = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  _oCacheLineEntry = omc_HpcOmMemory_createCacheMapDefaultCppRuntime1(threadData, _iCacheLineEntry, tmp1, _iLastCacheLine, out_oLastCacheLine, &_oNewOneCreated);
  /* skip box _oCacheLineEntry; HpcOmMemory.CacheLineEntry */
  /* skip box _oLastCacheLine; HpcOmMemory.CacheLineMap */
  if (out_oNewOneCreated) { *out_oNewOneCreated = mmc_mk_icon(_oNewOneCreated); }
  return _oCacheLineEntry;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData_t *threadData, modelica_metatype _iVariables, modelica_integer _iScVarIdxStart, modelica_integer _iRealScVarIdxStart, modelica_metatype _iScVarCLMapping, modelica_metatype _iFilledCacheLines, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iLastCacheLine, modelica_integer _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oLastCacheLine, modelica_integer *out_oScVarIdx)
{
  modelica_metatype _oFilledCacheLines = NULL;
  modelica_metatype _oLastCacheLine = NULL;
  modelica_integer _oScVarIdx;
  modelica_integer _currentScVarIdx;
  modelica_integer _varSize;
  modelica_integer _varDataType;
  modelica_integer _varTask;
  modelica_integer _threadIdx;
  modelica_integer _varCLIdx;
  modelica_metatype _var = NULL;
  modelica_metatype _entry = NULL;
  modelica_boolean _newCacheLineCreated;
  modelica_metatype _lastCacheLine = NULL;
  modelica_metatype _lastCacheLineNew = NULL;
  modelica_metatype _filledCacheLines = NULL;
  modelica_metatype _cachelineEntries = NULL;
  modelica_metatype _name = NULL;
  modelica_string _nameStr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oFilledCacheLines has no default value.
  // _oLastCacheLine has no default value.
  // _oScVarIdx has no default value.
  // _currentScVarIdx has no default value.
  // _varSize has no default value.
  // _varDataType has no default value.
  // _varTask has no default value.
  // _threadIdx has no default value.
  // _varCLIdx has no default value.
  // _var has no default value.
  // _entry has no default value.
  // _newCacheLineCreated has no default value.
  // _lastCacheLine has no default value.
  // _lastCacheLineNew has no default value.
  // _filledCacheLines has no default value.
  // _cachelineEntries has no default value.
  // _name has no default value.
  // _nameStr has no default value.
  _currentScVarIdx = ((modelica_integer) 0);

  _lastCacheLine = _iLastCacheLine;

  _filledCacheLines = _iFilledCacheLines;

  {
    modelica_metatype _var;
    for (tmpMeta1 = _iVariables; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _var;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _name = tmpMeta3;

      _nameStr = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _name);

      if(((_currentScVarIdx < arrayLength(_iSimCodeVarTypes)) && (_currentScVarIdx < arrayLength(_iScVarCLMapping))))
      {
        /* Pattern-matching assignment */
        tmpMeta4 = arrayGet(_iSimCodeVarTypes, _currentScVarIdx + _iRealScVarIdxStart);
        tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
        tmp6 = mmc_unbox_integer(tmpMeta5);
        tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
        tmp8 = mmc_unbox_integer(tmpMeta7);
        _varDataType = tmp6  /* pattern as ty=Integer */;
        _varSize = tmp8  /* pattern as ty=Integer */;

        if((_currentScVarIdx + _iRealScVarIdxStart <= arrayLength(_iScVarTaskMapping)))
        {
          _varTask = mmc_unbox_integer(arrayGet(_iScVarTaskMapping, _currentScVarIdx + _iRealScVarIdxStart));
        }
        else
        {
          _varTask = ((modelica_integer) -1);
        }

        if(((_varTask >= ((modelica_integer) 1)) && (arrayLength(_iSchedulerInfo) >= _varTask)))
        {
          _threadIdx = mmc_unbox_integer(omc_Util_tuple31(threadData, arrayGet(_iSchedulerInfo, _varTask)));
        }
        else
        {
          _threadIdx = ((modelica_integer) -1);
        }

        tmpMeta9 = mmc_mk_box6(3, &HpcOmMemory_CacheLineEntry_CACHELINEENTRY__desc, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_integer(_varDataType), mmc_mk_integer(_varSize), mmc_mk_integer(_currentScVarIdx + _iScVarIdxStart), mmc_mk_integer(_threadIdx));
        _entry = tmpMeta9;

        _entry = omc_HpcOmMemory_createCacheMapDefaultCppRuntime1(threadData, _entry, _iCacheLineSize, _lastCacheLine ,&_lastCacheLineNew ,&_newCacheLineCreated);

        /* Pattern-matching assignment */
        tmpMeta10 = _lastCacheLineNew;
        tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
        tmp12 = mmc_unbox_integer(tmpMeta11);
        tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
        _varCLIdx = tmp12  /* pattern as ty=Integer */;
        _cachelineEntries = tmpMeta13;

        tmpMeta14 = mmc_mk_box2(0, mmc_mk_integer(_varCLIdx), mmc_mk_integer(_varDataType));
        arrayUpdate(_iScVarCLMapping, _currentScVarIdx + _iRealScVarIdxStart, tmpMeta14);

        if(_newCacheLineCreated)
        {
          tmpMeta15 = mmc_mk_cons(_lastCacheLine, _filledCacheLines);
          _filledCacheLines = tmpMeta15;
        }

        _lastCacheLine = _lastCacheLineNew;
      }

      _currentScVarIdx = ((modelica_integer) 1) + _currentScVarIdx;
    }
  }

  _oFilledCacheLines = _filledCacheLines;

  _oLastCacheLine = _lastCacheLine;

  _oScVarIdx = _currentScVarIdx + _iScVarIdxStart;
  _return: OMC_LABEL_UNUSED
  if (out_oLastCacheLine) { *out_oLastCacheLine = _oLastCacheLine; }
  if (out_oScVarIdx) { *out_oScVarIdx = _oScVarIdx; }
  return _oFilledCacheLines;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData_t *threadData, modelica_metatype _iVariables, modelica_metatype _iScVarIdxStart, modelica_metatype _iRealScVarIdxStart, modelica_metatype _iScVarCLMapping, modelica_metatype _iFilledCacheLines, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iLastCacheLine, modelica_metatype _iCacheLineSize, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oLastCacheLine, modelica_metatype *out_oScVarIdx)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _oScVarIdx;
  modelica_metatype _oFilledCacheLines = NULL;
  tmp1 = mmc_unbox_integer(_iScVarIdxStart);
  tmp2 = mmc_unbox_integer(_iRealScVarIdxStart);
  tmp3 = mmc_unbox_integer(_iCacheLineSize);
  _oFilledCacheLines = omc_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData, _iVariables, tmp1, tmp2, _iScVarCLMapping, _iFilledCacheLines, _iScVarTaskMapping, _iSchedulerInfo, _iLastCacheLine, tmp3, _iSimCodeVarTypes, out_oLastCacheLine, &_oScVarIdx);
  /* skip box _oFilledCacheLines; list<HpcOmMemory.CacheLineMap> */
  /* skip box _oLastCacheLine; HpcOmMemory.CacheLineMap */
  if (out_oScVarIdx) { *out_oScVarIdx = mmc_mk_icon(_oScVarIdx); }
  return _oFilledCacheLines;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapDefaultCppRuntime(threadData_t *threadData, modelica_metatype _iAllSCVars, modelica_integer _iCacheLineSize, modelica_metatype _iSimCodeVars, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL)
{
  modelica_metatype _oCacheMap = NULL;
  modelica_metatype _oScVarCLMapping = NULL;
  modelica_integer _oNumCL;
  modelica_metatype _stateVars = NULL;
  modelica_metatype _derivativeVars = NULL;
  modelica_metatype _algVars = NULL;
  modelica_metatype _discreteAlgVars = NULL;
  modelica_metatype _paramVars = NULL;
  modelica_metatype _aliasVars = NULL;
  modelica_metatype _intAlgVars = NULL;
  modelica_metatype _intParamVars = NULL;
  modelica_metatype _intAliasVars = NULL;
  modelica_metatype _boolAlgVars = NULL;
  modelica_metatype _boolParamVars = NULL;
  modelica_metatype _boolAliasVars = NULL;
  modelica_metatype _inputVars = NULL;
  modelica_metatype _outputVars = NULL;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _lastCacheLine = NULL;
  modelica_metatype _scVarCLMapping = NULL;
  modelica_integer _currentScVarIdx;
  modelica_integer _paramVarsStart;
  modelica_integer _aliasVarsStart;
  modelica_integer _stateDerVarsStart;
  modelica_integer _algVarsStart;
  modelica_integer _discreteAlgVarsStart;
  modelica_integer _intAlgVarsStart;
  modelica_integer _intParamVarsStart;
  modelica_metatype _filledCacheLines = NULL;
  modelica_metatype _allVars = NULL;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheMap has no default value.
  // _oScVarCLMapping has no default value.
  // _oNumCL has no default value.
  // _stateVars has no default value.
  // _derivativeVars has no default value.
  // _algVars has no default value.
  // _discreteAlgVars has no default value.
  // _paramVars has no default value.
  // _aliasVars has no default value.
  // _intAlgVars has no default value.
  // _intParamVars has no default value.
  // _intAliasVars has no default value.
  // _boolAlgVars has no default value.
  // _boolParamVars has no default value.
  // _boolAliasVars has no default value.
  // _inputVars has no default value.
  // _outputVars has no default value.
  // _cacheMap has no default value.
  // _lastCacheLine has no default value.
  // _scVarCLMapping has no default value.
  // _currentScVarIdx has no default value.
  // _paramVarsStart has no default value.
  // _aliasVarsStart has no default value.
  // _stateDerVarsStart has no default value.
  // _algVarsStart has no default value.
  // _discreteAlgVarsStart has no default value.
  // _intAlgVarsStart has no default value.
  // _intParamVarsStart has no default value.
  // _filledCacheLines has no default value.
  // _allVars has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iSimCodeVars;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          
          _stateVars = tmpMeta6;
          _derivativeVars = tmpMeta7;
          _algVars = tmpMeta8;
          _discreteAlgVars = tmpMeta9;
          _intAlgVars = tmpMeta10;
          _boolAlgVars = tmpMeta11;
          _inputVars = tmpMeta12;
          _outputVars = tmpMeta13;
          _aliasVars = tmpMeta14;
          _intAliasVars = tmpMeta15;
          _boolAliasVars = tmpMeta16;
          _paramVars = tmpMeta17;
          _intParamVars = tmpMeta18;
          _boolParamVars = tmpMeta19;
          /* Pattern matching succeeded */
          _currentScVarIdx = ((modelica_integer) 1);

          _stateDerVarsStart = ((modelica_integer) 1) + listLength(_stateVars);

          _scVarCLMapping = arrayCreate(arrayLength(_iAllSCVars), _OMC_LIT92);

          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          _filledCacheLines = tmpMeta20;

          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta22 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_iCacheLineSize), tmpMeta21);
          _lastCacheLine = tmpMeta22;

          _filledCacheLines = omc_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData, _derivativeVars, _currentScVarIdx, _stateDerVarsStart, _scVarCLMapping, _filledCacheLines, _iScVarTaskMapping, _iSchedulerInfo, _lastCacheLine, _iCacheLineSize, _iSimCodeVarTypes ,&_lastCacheLine ,&_currentScVarIdx);

          tmpMeta23 = mmc_mk_cons(_lastCacheLine, _filledCacheLines);
          _filledCacheLines = tmpMeta23;

          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta25 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(((modelica_integer) 1) + listLength(_filledCacheLines)), mmc_mk_integer(_iCacheLineSize), tmpMeta24);
          _lastCacheLine = tmpMeta25;

          _allVars = listReverse(_derivativeVars);

          _algVarsStart = _stateDerVarsStart + listLength(_derivativeVars);

          _discreteAlgVarsStart = _algVarsStart + listLength(_algVars);

          _intAlgVarsStart = _discreteAlgVarsStart + listLength(_discreteAlgVars);

          _aliasVarsStart = _intAlgVarsStart + listLength(_boolAlgVars) + listLength(_inputVars) + listLength(_outputVars);

          _paramVarsStart = _aliasVarsStart + listLength(_aliasVars) + listLength(_intAliasVars) + listLength(_boolAliasVars);

          _intParamVarsStart = _paramVarsStart + listLength(_paramVars);

          _filledCacheLines = omc_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData, _algVars, _currentScVarIdx, _algVarsStart, _scVarCLMapping, _filledCacheLines, _iScVarTaskMapping, _iSchedulerInfo, _lastCacheLine, _iCacheLineSize, _iSimCodeVarTypes ,&_lastCacheLine ,&_currentScVarIdx);

          _allVars = omc_List_append__reverse(threadData, _algVars, _allVars);

          _filledCacheLines = omc_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData, _discreteAlgVars, _currentScVarIdx, _discreteAlgVarsStart, _scVarCLMapping, _filledCacheLines, _iScVarTaskMapping, _iSchedulerInfo, _lastCacheLine, _iCacheLineSize, _iSimCodeVarTypes ,&_lastCacheLine ,&_currentScVarIdx);

          _allVars = omc_List_append__reverse(threadData, _discreteAlgVars, _allVars);

          _filledCacheLines = omc_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData, _paramVars, _currentScVarIdx, _paramVarsStart, _scVarCLMapping, _filledCacheLines, _iScVarTaskMapping, _iSchedulerInfo, _lastCacheLine, _iCacheLineSize, _iSimCodeVarTypes ,&_lastCacheLine ,&_currentScVarIdx);

          _allVars = omc_List_append__reverse(threadData, _paramVars, _allVars);

          _filledCacheLines = omc_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData, _aliasVars, _currentScVarIdx, _aliasVarsStart, _scVarCLMapping, _filledCacheLines, _iScVarTaskMapping, _iSchedulerInfo, _lastCacheLine, _iCacheLineSize, _iSimCodeVarTypes ,&_lastCacheLine ,&_currentScVarIdx);

          _allVars = omc_List_append__reverse(threadData, _aliasVars, _allVars);

          _filledCacheLines = omc_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData, _intAlgVars, _currentScVarIdx, _intAlgVarsStart, _scVarCLMapping, _filledCacheLines, _iScVarTaskMapping, _iSchedulerInfo, _lastCacheLine, _iCacheLineSize, _iSimCodeVarTypes ,&_lastCacheLine ,&_currentScVarIdx);

          _allVars = omc_List_append__reverse(threadData, _intAlgVars, _allVars);

          _filledCacheLines = omc_HpcOmMemory_createCacheMapDefaultCppRuntime0(threadData, _intParamVars, _currentScVarIdx, _intAlgVarsStart, _scVarCLMapping, _filledCacheLines, _iScVarTaskMapping, _iSchedulerInfo, _lastCacheLine, _iCacheLineSize, _iSimCodeVarTypes ,&_lastCacheLine ,&_currentScVarIdx);

          _allVars = omc_List_append__reverse(threadData, _intParamVars, _allVars);

          tmpMeta26 = mmc_mk_cons(_lastCacheLine, _filledCacheLines);
          tmpMeta27 = mmc_mk_box4(4, &HpcOmMemory_CacheMap_UNIFORM__CACHEMAP__desc, mmc_mk_integer(_iCacheLineSize), _allVars, tmpMeta26);
          _cacheMap = tmpMeta27;
          tmpMeta[0+0] = _cacheMap;
          tmpMeta[0+1] = _scVarCLMapping;
          tmp1_c2 = ((modelica_integer) 1) + listLength(_filledCacheLines);
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
  _oCacheMap = tmpMeta[0+0];
  _oScVarCLMapping = tmpMeta[0+1];
  _oNumCL = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_oScVarCLMapping) { *out_oScVarCLMapping = _oScVarCLMapping; }
  if (out_oNumCL) { *out_oNumCL = _oNumCL; }
  return _oCacheMap;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapDefaultCppRuntime(threadData_t *threadData, modelica_metatype _iAllSCVars, modelica_metatype _iCacheLineSize, modelica_metatype _iSimCodeVars, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL)
{
  modelica_integer tmp1;
  modelica_integer _oNumCL;
  modelica_metatype _oCacheMap = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  _oCacheMap = omc_HpcOmMemory_createCacheMapDefaultCppRuntime(threadData, _iAllSCVars, tmp1, _iSimCodeVars, _iScVarTaskMapping, _iSchedulerInfo, _iSimCodeVarTypes, out_oScVarCLMapping, &_oNumCL);
  /* skip box _oCacheMap; HpcOmMemory.CacheMap */
  /* skip box _oScVarCLMapping; array<tuple<#Integer, #Integer>> */
  if (out_oNumCL) { *out_oNumCL = mmc_mk_icon(_oNumCL); }
  return _oCacheMap;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapDefault(threadData_t *threadData, modelica_metatype _iAllSCVars, modelica_integer _iCacheLineSize, modelica_metatype _iSimCodeVars, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL)
{
  modelica_metatype _oCacheMap = NULL;
  modelica_metatype _oScVarCLMapping = NULL;
  modelica_integer _oNumCL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheMap has no default value.
  // _oScVarCLMapping has no default value.
  // _oNumCL has no default value.
  if((stringEqual(omc_Config_simCodeTarget(threadData), _OMC_LIT93)))
  {
    _oCacheMap = omc_HpcOmMemory_createCacheMapDefaultCppRuntime(threadData, _iAllSCVars, _iCacheLineSize, _iSimCodeVars, _iScVarTaskMapping, _iSchedulerInfo, _iSimCodeVarTypes ,&_oScVarCLMapping ,&_oNumCL);
  }
  else
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta3 = mmc_mk_box4(4, &HpcOmMemory_CacheMap_UNIFORM__CACHEMAP__desc, mmc_mk_integer(_iCacheLineSize), tmpMeta1, tmpMeta2);
    _oCacheMap = tmpMeta3;

    _oNumCL = ((modelica_integer) 0);

    _oScVarCLMapping = arrayCreate(((modelica_integer) 0), _OMC_LIT92);
  }
  _return: OMC_LABEL_UNUSED
  if (out_oScVarCLMapping) { *out_oScVarCLMapping = _oScVarCLMapping; }
  if (out_oNumCL) { *out_oNumCL = _oNumCL; }
  return _oCacheMap;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapDefault(threadData_t *threadData, modelica_metatype _iAllSCVars, modelica_metatype _iCacheLineSize, modelica_metatype _iSimCodeVars, modelica_metatype _iScVarTaskMapping, modelica_metatype _iSchedulerInfo, modelica_metatype _iSimCodeVarTypes, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL)
{
  modelica_integer tmp1;
  modelica_integer _oNumCL;
  modelica_metatype _oCacheMap = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  _oCacheMap = omc_HpcOmMemory_createCacheMapDefault(threadData, _iAllSCVars, tmp1, _iSimCodeVars, _iScVarTaskMapping, _iSchedulerInfo, _iSimCodeVarTypes, out_oScVarCLMapping, &_oNumCL);
  /* skip box _oCacheMap; HpcOmMemory.CacheMap */
  /* skip box _oScVarCLMapping; array<tuple<#Integer, #Integer>> */
  if (out_oNumCL) { *out_oNumCL = mmc_mk_icon(_oNumCL); }
  return _oCacheMap;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapFromThreadAndSharedCLs(threadData_t *threadData, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iCacheMap)
{
  modelica_metatype _oCacheMap = NULL;
  modelica_integer _cacheLineSize;
  modelica_metatype _cacheLinesFloat = NULL;
  modelica_metatype _cacheLinesInt = NULL;
  modelica_metatype _cacheLinesBool = NULL;
  modelica_metatype _fullyFilledSharedCacheLines = NULL;
  modelica_metatype _partlyFilledCacheLines = NULL;
  modelica_metatype _cacheVariables = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
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
  // _oCacheMap has no default value.
  // _cacheLineSize has no default value.
  // _cacheLinesFloat has no default value.
  // _cacheLinesInt has no default value.
  // _cacheLinesBool has no default value.
  // _fullyFilledSharedCacheLines has no default value.
  // _partlyFilledCacheLines has no default value.
  // _cacheVariables has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iCacheMap;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  _cacheLineSize = tmp3  /* pattern as ty=Integer */;
  _cacheVariables = tmpMeta4;
  _cacheLinesFloat = tmpMeta5;
  _cacheLinesInt = tmpMeta6;
  _cacheLinesBool = tmpMeta7;

  /* Pattern-matching assignment */
  tmpMeta8 = _iSharedCacheLines;
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
  _partlyFilledCacheLines = tmpMeta9;
  _fullyFilledSharedCacheLines = tmpMeta10;

  _cacheLinesFloat = listAppend(_cacheLinesFloat, listAppend(omc_Util_tuple31(threadData, _iThreadCacheLines), omc_Util_tuple31(threadData, _fullyFilledSharedCacheLines)));

  _cacheLinesInt = listAppend(_cacheLinesInt, listAppend(omc_Util_tuple32(threadData, _iThreadCacheLines), omc_Util_tuple32(threadData, _fullyFilledSharedCacheLines)));

  _cacheLinesBool = listAppend(_cacheLinesBool, listAppend(omc_Util_tuple33(threadData, _iThreadCacheLines), omc_Util_tuple33(threadData, _fullyFilledSharedCacheLines)));

  _cacheLinesFloat = listAppend(_cacheLinesFloat, omc_List_map(threadData, omc_Util_tuple31(threadData, _partlyFilledCacheLines), boxvar_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine));

  _cacheLinesInt = listAppend(_cacheLinesInt, omc_List_map(threadData, omc_Util_tuple32(threadData, _partlyFilledCacheLines), boxvar_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine));

  _cacheLinesBool = listAppend(_cacheLinesBool, omc_List_map(threadData, omc_Util_tuple33(threadData, _partlyFilledCacheLines), boxvar_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine));

  tmpMeta11 = mmc_mk_box6(3, &HpcOmMemory_CacheMap_CACHEMAP__desc, mmc_mk_integer(_cacheLineSize), _cacheVariables, _cacheLinesFloat, _cacheLinesInt, _cacheLinesBool);
  _oCacheMap = tmpMeta11;
  _return: OMC_LABEL_UNUSED
  return _oCacheMap;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmMemory_isCLWrittenByOtherThread(threadData_t *threadData, modelica_metatype _iLevelInfo, modelica_integer _iLevelIdx, modelica_integer _iThreadIdx)
{
  modelica_boolean _oWrittenByOtherThread;
  modelica_integer _levelIdx;
  modelica_integer _threadIdx;
  modelica_boolean _ret;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oWrittenByOtherThread has no default value.
  // _levelIdx has no default value.
  // _threadIdx has no default value.
  // _ret has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iLevelInfo;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _levelIdx = tmp3  /* pattern as ty=Integer */;
  _threadIdx = tmp5  /* pattern as ty=Integer */;

  _ret = ((_levelIdx == _iLevelIdx) && (_threadIdx != _iThreadIdx));

  _oWrittenByOtherThread = _ret;
  _return: OMC_LABEL_UNUSED
  return _oWrittenByOtherThread;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_isCLWrittenByOtherThread(threadData_t *threadData, modelica_metatype _iLevelInfo, modelica_metatype _iLevelIdx, modelica_metatype _iThreadIdx)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _oWrittenByOtherThread;
  modelica_metatype out_oWrittenByOtherThread;
  tmp1 = mmc_unbox_integer(_iLevelIdx);
  tmp2 = mmc_unbox_integer(_iThreadIdx);
  _oWrittenByOtherThread = omc_HpcOmMemory_isCLWrittenByOtherThread(threadData, _iLevelInfo, tmp1, tmp2);
  out_oWrittenByOtherThread = mmc_mk_icon(_oWrittenByOtherThread);
  return out_oWrittenByOtherThread;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createSharedClLevelFix(threadData_t *threadData, modelica_metatype _iOldPartlyFilledCacheLine, modelica_metatype _iCacheLineMap, modelica_metatype _iLevelThreadIdx)
{
  modelica_metatype _oCreatedCacheLine = NULL;
  modelica_metatype _prefetchLevel = NULL;
  modelica_metatype _writeLevel = NULL;
  modelica_integer _levelIdx;
  modelica_integer _threadIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCreatedCacheLine has no default value.
  // _prefetchLevel has no default value.
  // _writeLevel has no default value.
  // _levelIdx has no default value.
  // _threadIdx has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iLevelThreadIdx;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _levelIdx = tmp3  /* pattern as ty=Integer */;
  _threadIdx = tmp5  /* pattern as ty=Integer */;

  if(isSome(_iOldPartlyFilledCacheLine))
  {
    /* Pattern-matching assignment */
    tmpMeta6 = _iOldPartlyFilledCacheLine;
    if (optionNone(tmpMeta6)) MMC_THROW_INTERNAL();
    tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,3) == 0) MMC_THROW_INTERNAL();
    tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
    tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
    _prefetchLevel = tmpMeta8;
    _writeLevel = tmpMeta9;
  }
  else
  {
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    _prefetchLevel = tmpMeta10;

    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    _writeLevel = tmpMeta11;
  }

  if((((modelica_integer) -1) + _levelIdx > ((modelica_integer) 0)))
  {
    tmpMeta12 = mmc_mk_cons(mmc_mk_integer(((modelica_integer) -1) + _levelIdx), _prefetchLevel);
    _prefetchLevel = tmpMeta12;
  }

  tmpMeta14 = mmc_mk_box2(0, mmc_mk_integer(_levelIdx), mmc_mk_integer(_threadIdx));
  tmpMeta13 = mmc_mk_cons(tmpMeta14, _writeLevel);
  _writeLevel = tmpMeta13;

  tmpMeta15 = mmc_mk_box4(3, &HpcOmMemory_PartlyFilledCacheLine_PARTLYFILLEDCACHELINE__LEVEL__desc, _iCacheLineMap, _prefetchLevel, _writeLevel);
  _oCreatedCacheLine = tmpMeta15;
  _return: OMC_LABEL_UNUSED
  return _oCreatedCacheLine;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createSharedClThread(threadData_t *threadData, modelica_metatype _iOldPartlyFilledCacheLine, modelica_metatype _iCacheLineMap, modelica_integer _iAdditionalArgument)
{
  modelica_metatype _oCreatedCacheLine = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCreatedCacheLine has no default value.
  tmpMeta1 = mmc_mk_box2(4, &HpcOmMemory_PartlyFilledCacheLine_PARTLYFILLEDCACHELINE__THREAD__desc, _iCacheLineMap);
  _oCreatedCacheLine = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCreatedCacheLine;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createSharedClThread(threadData_t *threadData, modelica_metatype _iOldPartlyFilledCacheLine, modelica_metatype _iCacheLineMap, modelica_metatype _iAdditionalArgument)
{
  modelica_integer tmp1;
  modelica_metatype _oCreatedCacheLine = NULL;
  tmp1 = mmc_unbox_integer(_iAdditionalArgument);
  _oCreatedCacheLine = omc_HpcOmMemory_createSharedClThread(threadData, _iOldPartlyFilledCacheLine, _iCacheLineMap, tmp1);
  /* skip box _oCreatedCacheLine; HpcOmMemory.PartlyFilledCacheLine */
  return _oCreatedCacheLine;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_findMatchingSharedCLThread(threadData_t *threadData, modelica_integer _iNodeVar, modelica_integer _iVarSize, modelica_integer _iVarType, modelica_integer _iThreadIdx, modelica_integer _iAdditionalArgument, modelica_metatype _iSharedCacheLines)
{
  modelica_metatype _oMatchedCacheLine = NULL;
  modelica_metatype _partlyFilledCacheLines = NULL;
  modelica_metatype _partlyFilledCL = NULL;
  modelica_integer _numBytesFree;
  modelica_integer _listIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oMatchedCacheLine has no default value.
  // _partlyFilledCacheLines has no default value.
  // _partlyFilledCL has no default value.
  // _numBytesFree has no default value.
  // _listIdx has no default value.
  _oMatchedCacheLine = mmc_mk_none();

  _partlyFilledCacheLines = omc_HpcOmMemory_getPartlyFilledCLByVarType(threadData, _iVarType, omc_Util_tuple21(threadData, arrayGet(_iSharedCacheLines, _iThreadIdx)));

  _listIdx = ((modelica_integer) 1);

  {
    modelica_metatype _partlyFilledCL;
    for (tmpMeta1 = _partlyFilledCacheLines; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _partlyFilledCL = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = omc_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine(threadData, _partlyFilledCL);
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
      tmp4 = mmc_unbox_integer(tmpMeta3);
      _numBytesFree = tmp4  /* pattern as ty=Integer */;

      if((_numBytesFree >= _iVarSize))
      {
        tmpMeta5 = mmc_mk_box2(0, _partlyFilledCL, mmc_mk_integer(_listIdx));
        _oMatchedCacheLine = mmc_mk_some(tmpMeta5);

        break;
      }

      _listIdx = ((modelica_integer) 1) + _listIdx;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _oMatchedCacheLine;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_findMatchingSharedCLThread(threadData_t *threadData, modelica_metatype _iNodeVar, modelica_metatype _iVarSize, modelica_metatype _iVarType, modelica_metatype _iThreadIdx, modelica_metatype _iAdditionalArgument, modelica_metatype _iSharedCacheLines)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype _oMatchedCacheLine = NULL;
  tmp1 = mmc_unbox_integer(_iNodeVar);
  tmp2 = mmc_unbox_integer(_iVarSize);
  tmp3 = mmc_unbox_integer(_iVarType);
  tmp4 = mmc_unbox_integer(_iThreadIdx);
  tmp5 = mmc_unbox_integer(_iAdditionalArgument);
  _oMatchedCacheLine = omc_HpcOmMemory_findMatchingSharedCLThread(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, _iSharedCacheLines);
  /* skip box _oMatchedCacheLine; Option<tuple<HpcOmMemory.PartlyFilledCacheLine, #Integer>> */
  return _oMatchedCacheLine;
}

static modelica_metatype closure8_HpcOmMemory_isCLWrittenByOtherThread(threadData_t *thData, modelica_metatype closure, modelica_metatype iLevelInfo)
{
  modelica_metatype iLevelIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iThreadIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_HpcOmMemory_isCLWrittenByOtherThread(thData, iLevelInfo, iLevelIdx, iThreadIdx);
}static modelica_metatype closure9_HpcOmMemory_isCLWrittenByOtherThread(threadData_t *thData, modelica_metatype closure, modelica_metatype iLevelInfo)
{
  modelica_metatype iLevelIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iThreadIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_HpcOmMemory_isCLWrittenByOtherThread(thData, iLevelInfo, iLevelIdx, iThreadIdx);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_findMatchingSharedCLLevelfix0(threadData_t *threadData, modelica_integer _iNodeVar, modelica_integer _iVarSize, modelica_integer _iLevelIdx, modelica_integer _iThreadIdx, modelica_integer _iCurrentListIdx, modelica_metatype _iSharedCacheLines)
{
  modelica_metatype _oMatchedCacheLine = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _tmpMatchedCacheLine = NULL;
  modelica_metatype _cacheLineMap = NULL;
  modelica_integer _numBytesFree;
  modelica_metatype _prefetchLevel = NULL;
  modelica_metatype _writeLevel = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oMatchedCacheLine has no default value.
  // _head has no default value.
  // _rest has no default value.
  // _tmpMatchedCacheLine has no default value.
  // _cacheLineMap has no default value.
  // _numBytesFree has no default value.
  // _prefetchLevel has no default value.
  // _writeLevel has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iSharedCacheLines;
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
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          _head = tmpMeta6;
          _cacheLineMap = tmpMeta8;
          _numBytesFree = tmp10  /* pattern as ty=Integer */;
          _prefetchLevel = tmpMeta11;
          _writeLevel = tmpMeta12;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          if(((_numBytesFree < _iVarSize) || omc_List_exist1(threadData, _prefetchLevel, boxvar_intEq, mmc_mk_integer(_iLevelIdx))))
          {
            _tmpMatchedCacheLine = omc_HpcOmMemory_findMatchingSharedCLLevelfix0(threadData, _iNodeVar, _iVarSize, _iLevelIdx, _iThreadIdx, ((modelica_integer) 1) + _iCurrentListIdx, _rest);
          }
          else
          {
            tmpMeta13 = mmc_mk_box2(0, mmc_mk_integer(_iLevelIdx), mmc_mk_integer(_iThreadIdx));
            if(omc_List_any(threadData, _writeLevel, (modelica_fnptr) mmc_mk_box2(0,closure8_HpcOmMemory_isCLWrittenByOtherThread,tmpMeta13)))
            {
              _tmpMatchedCacheLine = omc_HpcOmMemory_findMatchingSharedCLLevelfix0(threadData, _iNodeVar, _iVarSize, _iLevelIdx, _iThreadIdx, ((modelica_integer) 1) + _iCurrentListIdx, _rest);
            }
            else
            {
              tmpMeta14 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) -1) + _iLevelIdx), mmc_mk_integer(_iThreadIdx));
              if(omc_List_any(threadData, _writeLevel, (modelica_fnptr) mmc_mk_box2(0,closure9_HpcOmMemory_isCLWrittenByOtherThread,tmpMeta14)))
              {
                _tmpMatchedCacheLine = omc_HpcOmMemory_findMatchingSharedCLLevelfix0(threadData, _iNodeVar, _iVarSize, _iLevelIdx, _iThreadIdx, ((modelica_integer) 1) + _iCurrentListIdx, _rest);
              }
              else
              {
                tmpMeta15 = mmc_mk_box2(0, _head, mmc_mk_integer(_iCurrentListIdx));
                _tmpMatchedCacheLine = mmc_mk_some(tmpMeta15);
              }
            }
          }
          tmpMeta1 = _tmpMatchedCacheLine;
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT94),stdout);
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
  _oMatchedCacheLine = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oMatchedCacheLine;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_findMatchingSharedCLLevelfix0(threadData_t *threadData, modelica_metatype _iNodeVar, modelica_metatype _iVarSize, modelica_metatype _iLevelIdx, modelica_metatype _iThreadIdx, modelica_metatype _iCurrentListIdx, modelica_metatype _iSharedCacheLines)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype _oMatchedCacheLine = NULL;
  tmp1 = mmc_unbox_integer(_iNodeVar);
  tmp2 = mmc_unbox_integer(_iVarSize);
  tmp3 = mmc_unbox_integer(_iLevelIdx);
  tmp4 = mmc_unbox_integer(_iThreadIdx);
  tmp5 = mmc_unbox_integer(_iCurrentListIdx);
  _oMatchedCacheLine = omc_HpcOmMemory_findMatchingSharedCLLevelfix0(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, _iSharedCacheLines);
  /* skip box _oMatchedCacheLine; Option<tuple<HpcOmMemory.PartlyFilledCacheLine, #Integer>> */
  return _oMatchedCacheLine;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_findMatchingSharedCLLevelfix(threadData_t *threadData, modelica_integer _iNodeVar, modelica_integer _iVarSize, modelica_integer _iVarType, modelica_integer _iThreadIdx, modelica_metatype _iLevelThreadIdx, modelica_metatype _iSharedCacheLines)
{
  modelica_metatype _oMatchedCacheLine = NULL;
  modelica_metatype _partlyFilledCacheLines = NULL;
  modelica_metatype _sharedCacheLines = NULL;
  modelica_integer _levelIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oMatchedCacheLine has no default value.
  // _partlyFilledCacheLines has no default value.
  // _sharedCacheLines has no default value.
  // _levelIdx has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iLevelThreadIdx;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _levelIdx = tmp3  /* pattern as ty=Integer */;

  _sharedCacheLines = omc_Util_tuple21(threadData, arrayGet(_iSharedCacheLines, _iThreadIdx));

  _oMatchedCacheLine = mmc_mk_none();

  _partlyFilledCacheLines = omc_HpcOmMemory_getPartlyFilledCLByVarType(threadData, _iVarType, _sharedCacheLines);

  _oMatchedCacheLine = omc_HpcOmMemory_findMatchingSharedCLLevelfix0(threadData, _iNodeVar, _iVarSize, _levelIdx, _iThreadIdx, ((modelica_integer) 1), _partlyFilledCacheLines);
  _return: OMC_LABEL_UNUSED
  return _oMatchedCacheLine;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_findMatchingSharedCLLevelfix(threadData_t *threadData, modelica_metatype _iNodeVar, modelica_metatype _iVarSize, modelica_metatype _iVarType, modelica_metatype _iThreadIdx, modelica_metatype _iLevelThreadIdx, modelica_metatype _iSharedCacheLines)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype _oMatchedCacheLine = NULL;
  tmp1 = mmc_unbox_integer(_iNodeVar);
  tmp2 = mmc_unbox_integer(_iVarSize);
  tmp3 = mmc_unbox_integer(_iVarType);
  tmp4 = mmc_unbox_integer(_iThreadIdx);
  _oMatchedCacheLine = omc_HpcOmMemory_findMatchingSharedCLLevelfix(threadData, tmp1, tmp2, tmp3, tmp4, _iLevelThreadIdx, _iSharedCacheLines);
  /* skip box _oMatchedCacheLine; Option<tuple<HpcOmMemory.PartlyFilledCacheLine, #Integer>> */
  return _oMatchedCacheLine;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getPartlyFilledCLByVarType(threadData_t *threadData, modelica_integer _iVarType, modelica_metatype _iSharedCacheLines)
{
  modelica_metatype _oSharedCacheLinesForType = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSharedCacheLinesForType has no default value.
  if((_iVarType == ((modelica_integer) 1)))
  {
    _oSharedCacheLinesForType = omc_Util_tuple31(threadData, _iSharedCacheLines);
  }
  else
  {
    if((_iVarType == ((modelica_integer) 2)))
    {
      _oSharedCacheLinesForType = omc_Util_tuple32(threadData, _iSharedCacheLines);
    }
    else
    {
      _oSharedCacheLinesForType = omc_Util_tuple33(threadData, _iSharedCacheLines);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _oSharedCacheLinesForType;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getPartlyFilledCLByVarType(threadData_t *threadData, modelica_metatype _iVarType, modelica_metatype _iSharedCacheLines)
{
  modelica_integer tmp1;
  modelica_metatype _oSharedCacheLinesForType = NULL;
  tmp1 = mmc_unbox_integer(_iVarType);
  _oSharedCacheLinesForType = omc_HpcOmMemory_getPartlyFilledCLByVarType(threadData, tmp1, _iSharedCacheLines);
  /* skip box _oSharedCacheLinesForType; list<HpcOmMemory.PartlyFilledCacheLine> */
  return _oSharedCacheLinesForType;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_addVarsToSharedCL0(threadData_t *threadData, modelica_metatype _iMatchedCacheLine, modelica_integer _iVarIdx, modelica_fnptr _iFactoryMethod, modelica_metatype _iAdditionalArgument, modelica_integer _iThreadIdx, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_metatype _threadPartlyFilledCacheLines = NULL;
  modelica_metatype _partlyFilledClFloat = NULL;
  modelica_metatype _partlyFilledClInt = NULL;
  modelica_metatype _partlyFilledClBool = NULL;
  modelica_metatype _threadFullyFilledCacheLines = NULL;
  modelica_metatype _fullyFilledClFloat = NULL;
  modelica_metatype _fullyFilledClInt = NULL;
  modelica_metatype _fullyFilledClBool = NULL;
  modelica_metatype _allSCVarsMapping = NULL;
  modelica_metatype _simCodeVarTypes = NULL;
  modelica_metatype _scVarCLMapping = NULL;
  modelica_metatype _partlyFilledCacheLine = NULL;
  modelica_metatype _partlyFilledCacheLineOption = NULL;
  modelica_integer _matchedClIndex;
  modelica_integer _numOfCLs;
  modelica_integer _clMapIdx;
  modelica_integer _clMapNumBytesFree;
  modelica_integer _varDataType;
  modelica_integer _varSize;
  modelica_integer _cacheLineSize;
  modelica_metatype _cacheVariables = NULL;
  modelica_metatype _cacheLinesFloat = NULL;
  modelica_metatype _cacheLinesInt = NULL;
  modelica_metatype _cacheLinesBool = NULL;
  modelica_metatype _clMapEntries = NULL;
  modelica_metatype _entry = NULL;
  modelica_metatype _cacheLineMap = NULL;
  modelica_metatype _cacheVariable = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_integer tmp19;
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
  modelica_integer tmp35;
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_integer tmp38;
  modelica_metatype tmpMeta39;
  modelica_integer tmp40;
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
  modelica_metatype tmpMeta56;
  modelica_metatype tmpMeta57;
  modelica_metatype tmpMeta58;
  modelica_metatype tmpMeta59;
  modelica_metatype tmpMeta60;
  modelica_metatype tmpMeta61;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _threadPartlyFilledCacheLines has no default value.
  // _partlyFilledClFloat has no default value.
  // _partlyFilledClInt has no default value.
  // _partlyFilledClBool has no default value.
  // _threadFullyFilledCacheLines has no default value.
  // _fullyFilledClFloat has no default value.
  // _fullyFilledClInt has no default value.
  // _fullyFilledClBool has no default value.
  // _allSCVarsMapping has no default value.
  // _simCodeVarTypes has no default value.
  // _scVarCLMapping has no default value.
  // _partlyFilledCacheLine has no default value.
  // _partlyFilledCacheLineOption has no default value.
  // _matchedClIndex has no default value.
  // _numOfCLs has no default value.
  // _clMapIdx has no default value.
  // _clMapNumBytesFree has no default value.
  // _varDataType has no default value.
  // _varSize has no default value.
  // _cacheLineSize has no default value.
  // _cacheVariables has no default value.
  // _cacheLinesFloat has no default value.
  // _cacheLinesInt has no default value.
  // _cacheLinesBool has no default value.
  // _clMapEntries has no default value.
  // _entry has no default value.
  // _cacheLineMap has no default value.
  // _cacheVariable has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iInfo;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 6));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp14 = mmc_unbox_integer(tmpMeta13);
  _cacheLineSize = tmp4  /* pattern as ty=Integer */;
  _cacheVariables = tmpMeta5;
  _cacheLinesFloat = tmpMeta6;
  _cacheLinesInt = tmpMeta7;
  _cacheLinesBool = tmpMeta8;
  _allSCVarsMapping = tmpMeta10;
  _simCodeVarTypes = tmpMeta11;
  _scVarCLMapping = tmpMeta12;
  _numOfCLs = tmp14  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta15 = arrayGet(_simCodeVarTypes, _iVarIdx);
  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
  tmp17 = mmc_unbox_integer(tmpMeta16);
  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
  tmp19 = mmc_unbox_integer(tmpMeta18);
  _varDataType = tmp17  /* pattern as ty=Integer */;
  _varSize = tmp19  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta20 = arrayGet(_iSharedCacheLines, _iThreadIdx);
  tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
  tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
  _threadPartlyFilledCacheLines = tmpMeta21;
  _threadFullyFilledCacheLines = tmpMeta22;

  /* Pattern-matching assignment */
  tmpMeta23 = _threadPartlyFilledCacheLines;
  tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
  tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
  tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
  _partlyFilledClFloat = tmpMeta24;
  _partlyFilledClInt = tmpMeta25;
  _partlyFilledClBool = tmpMeta26;

  /* Pattern-matching assignment */
  tmpMeta27 = _threadFullyFilledCacheLines;
  tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 1));
  tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
  tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 3));
  _fullyFilledClFloat = tmpMeta28;
  _fullyFilledClInt = tmpMeta29;
  _fullyFilledClBool = tmpMeta30;

  if(isSome(_iMatchedCacheLine))
  {
    _clMapIdx = _numOfCLs;

    /* Pattern-matching assignment */
    tmpMeta31 = _iMatchedCacheLine;
    if (optionNone(tmpMeta31)) MMC_THROW_INTERNAL();
    tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 1));
    tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
    tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
    tmp35 = mmc_unbox_integer(tmpMeta34);
    _partlyFilledCacheLine = tmpMeta33;
    _matchedClIndex = tmp35  /* pattern as ty=Integer */;

    _partlyFilledCacheLineOption = mmc_mk_some(_partlyFilledCacheLine);

    /* Pattern-matching assignment */
    tmpMeta36 = omc_HpcOmMemory_getCacheLineMapOfPartlyFilledCacheLine(threadData, _partlyFilledCacheLine);
    tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 2));
    tmp38 = mmc_unbox_integer(tmpMeta37);
    tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 3));
    tmp40 = mmc_unbox_integer(tmpMeta39);
    tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 4));
    _clMapIdx = tmp38  /* pattern as ty=Integer */;
    _clMapNumBytesFree = tmp40  /* pattern as ty=Integer */;
    _clMapEntries = tmpMeta41;
  }
  else
  {
    _numOfCLs = ((modelica_integer) 1) + _numOfCLs;

    _partlyFilledCacheLineOption = mmc_mk_none();

    _clMapIdx = _numOfCLs;

    _clMapNumBytesFree = _cacheLineSize;

    tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
    _clMapEntries = tmpMeta42;

    _matchedClIndex = ((modelica_integer) -1);
  }

  _clMapNumBytesFree = _clMapNumBytesFree - _varSize;

  /* Pattern-matching assignment */
  tmpMeta43 = arrayGet(_allSCVarsMapping, _iVarIdx);
  if (optionNone(tmpMeta43)) MMC_THROW_INTERNAL();
  tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 1));
  _cacheVariable = tmpMeta44;

  tmpMeta45 = mmc_mk_cons(_cacheVariable, _cacheVariables);
  _cacheVariables = tmpMeta45;

  tmpMeta46 = mmc_mk_box6(3, &HpcOmMemory_CacheLineEntry_CACHELINEENTRY__desc, mmc_mk_integer(_cacheLineSize + (-_clMapNumBytesFree) - _varSize), mmc_mk_integer(_varDataType), mmc_mk_integer(_varSize), mmc_mk_integer(listLength(_cacheVariables)), mmc_mk_integer(_iThreadIdx));
  _entry = tmpMeta46;

  tmpMeta47 = mmc_mk_cons(_entry, _clMapEntries);
  tmpMeta48 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(_clMapIdx), mmc_mk_integer(_clMapNumBytesFree), tmpMeta47);
  _cacheLineMap = tmpMeta48;

  _partlyFilledCacheLine = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iFactoryMethod), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iFactoryMethod), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iFactoryMethod), 2))), _partlyFilledCacheLineOption, _cacheLineMap, _iAdditionalArgument) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iFactoryMethod), 1)))) (threadData, _partlyFilledCacheLineOption, _cacheLineMap, _iAdditionalArgument);

  tmpMeta49 = mmc_mk_box2(0, mmc_mk_integer(_clMapIdx), mmc_mk_integer(_varDataType));
  _scVarCLMapping = arrayUpdate(_scVarCLMapping, _iVarIdx, tmpMeta49);

  if((_clMapNumBytesFree == ((modelica_integer) 0)))
  {
    if((_varDataType == ((modelica_integer) 1)))
    {
      _partlyFilledClFloat = listDelete(_partlyFilledClFloat, _matchedClIndex);

      tmpMeta50 = mmc_mk_cons(_cacheLineMap, _fullyFilledClFloat);
      _fullyFilledClFloat = tmpMeta50;
    }
    else
    {
      if((_varDataType == ((modelica_integer) 2)))
      {
        _partlyFilledClInt = listDelete(_partlyFilledClInt, _matchedClIndex);

        tmpMeta51 = mmc_mk_cons(_cacheLineMap, _fullyFilledClInt);
        _fullyFilledClInt = tmpMeta51;
      }
      else
      {
        _partlyFilledClBool = listDelete(_partlyFilledClBool, _matchedClIndex);

        tmpMeta52 = mmc_mk_cons(_cacheLineMap, _fullyFilledClBool);
        _fullyFilledClBool = tmpMeta52;
      }
    }
  }
  else
  {
    if((_matchedClIndex != ((modelica_integer) -1)))
    {
      if((_varDataType == ((modelica_integer) 1)))
      {
        _partlyFilledClFloat = omc_List_set(threadData, _partlyFilledClFloat, _matchedClIndex, _partlyFilledCacheLine);
      }
      else
      {
        if((_varDataType == ((modelica_integer) 2)))
        {
          _partlyFilledClInt = omc_List_set(threadData, _partlyFilledClInt, _matchedClIndex, _partlyFilledCacheLine);
        }
        else
        {
          _partlyFilledClBool = omc_List_set(threadData, _partlyFilledClBool, _matchedClIndex, _partlyFilledCacheLine);
        }
      }
    }
    else
    {
      if((_varDataType == ((modelica_integer) 1)))
      {
        tmpMeta53 = mmc_mk_cons(_partlyFilledCacheLine, _partlyFilledClFloat);
        _partlyFilledClFloat = tmpMeta53;
      }
      else
      {
        if((_varDataType == ((modelica_integer) 2)))
        {
          tmpMeta54 = mmc_mk_cons(_partlyFilledCacheLine, _partlyFilledClInt);
          _partlyFilledClInt = tmpMeta54;
        }
        else
        {
          tmpMeta55 = mmc_mk_cons(_partlyFilledCacheLine, _partlyFilledClBool);
          _partlyFilledClBool = tmpMeta55;
        }
      }
    }
  }

  tmpMeta56 = mmc_mk_box3(0, _partlyFilledClFloat, _partlyFilledClInt, _partlyFilledClBool);
  tmpMeta57 = mmc_mk_box3(0, _fullyFilledClFloat, _fullyFilledClInt, _fullyFilledClBool);
  tmpMeta58 = mmc_mk_box2(0, tmpMeta56, tmpMeta57);
  arrayUpdate(_iSharedCacheLines, _iThreadIdx, tmpMeta58);

  tmpMeta59 = mmc_mk_box6(3, &HpcOmMemory_CacheMap_CACHEMAP__desc, mmc_mk_integer(_cacheLineSize), _cacheVariables, _cacheLinesFloat, _cacheLinesInt, _cacheLinesBool);
  tmpMeta60 = mmc_mk_box4(3, &HpcOmMemory_CacheMapMeta_CACHEMAPMETA__desc, _allSCVarsMapping, _simCodeVarTypes, _scVarCLMapping);
  tmpMeta61 = mmc_mk_box3(0, tmpMeta59, tmpMeta60, mmc_mk_integer(_numOfCLs));
  _oInfo = tmpMeta61;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_addVarsToSharedCL0(threadData_t *threadData, modelica_metatype _iMatchedCacheLine, modelica_metatype _iVarIdx, modelica_fnptr _iFactoryMethod, modelica_metatype _iAdditionalArgument, modelica_metatype _iThreadIdx, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oInfo = NULL;
  tmp1 = mmc_unbox_integer(_iVarIdx);
  tmp2 = mmc_unbox_integer(_iThreadIdx);
  _oInfo = omc_HpcOmMemory_addVarsToSharedCL0(threadData, _iMatchedCacheLine, tmp1, _iFactoryMethod, _iAdditionalArgument, tmp2, _iSharedCacheLines, _iInfo);
  /* skip box _oInfo; tuple<HpcOmMemory.CacheMap, HpcOmMemory.CacheMapMeta, #Integer> */
  return _oInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_addVarsToSharedCL(threadData_t *threadData, modelica_metatype _iNodeVars, modelica_fnptr _iSharedClSelectFunction, modelica_fnptr _iFactoryMethod, modelica_integer _iThreadIdx, modelica_metatype _iCompareFuncArgument, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_metatype _allSCVarsMapping = NULL;
  modelica_integer _varIdx;
  modelica_integer _varDataType;
  modelica_integer _numOfCLs;
  modelica_integer _cacheLineSize;
  modelica_integer _varSize;
  modelica_metatype _simCodeVarTypes = NULL;
  modelica_metatype _scVarCLMapping = NULL;
  modelica_metatype _cacheVariables = NULL;
  modelica_metatype _cacheLinesFloat = NULL;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _cacheMapMeta = NULL;
  modelica_metatype _matchedCacheLine = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
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
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_integer tmp24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _allSCVarsMapping has no default value.
  // _varIdx has no default value.
  // _varDataType has no default value.
  // _numOfCLs has no default value.
  // _cacheLineSize has no default value.
  // _varSize has no default value.
  // _simCodeVarTypes has no default value.
  // _scVarCLMapping has no default value.
  // _cacheVariables has no default value.
  // _cacheLinesFloat has no default value.
  // _cacheMap has no default value.
  // _cacheMapMeta has no default value.
  // _matchedCacheLine has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iInfo;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp12 = mmc_unbox_integer(tmpMeta11);
  _cacheMap = tmpMeta2;
  _cacheLineSize = tmp4  /* pattern as ty=Integer */;
  _cacheVariables = tmpMeta5;
  _cacheLinesFloat = tmpMeta6;
  _cacheMapMeta = tmpMeta7;
  _allSCVarsMapping = tmpMeta8;
  _simCodeVarTypes = tmpMeta9;
  _scVarCLMapping = tmpMeta10;
  _numOfCLs = tmp12  /* pattern as ty=Integer */;

  {
    modelica_metatype _varIdx;
    for (tmpMeta13 = _iNodeVars; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
    {
      _varIdx = MMC_CAR(tmpMeta13);
      /* Pattern-matching assignment */
      tmpMeta14 = arrayGet(_simCodeVarTypes, mmc_unbox_integer(_varIdx));
      tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
      tmp16 = mmc_unbox_integer(tmpMeta15);
      tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
      tmp18 = mmc_unbox_integer(tmpMeta17);
      _varDataType = tmp16  /* pattern as ty=Integer */;
      _varSize = tmp18  /* pattern as ty=Integer */;

      _matchedCacheLine = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iSharedClSelectFunction), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iSharedClSelectFunction), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iSharedClSelectFunction), 2))), _varIdx, mmc_mk_integer(_varSize), mmc_mk_integer(_varDataType), mmc_mk_integer(_iThreadIdx), _iCompareFuncArgument, _iSharedCacheLines) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iSharedClSelectFunction), 1)))) (threadData, _varIdx, mmc_mk_integer(_varSize), mmc_mk_integer(_varDataType), mmc_mk_integer(_iThreadIdx), _iCompareFuncArgument, _iSharedCacheLines);

      /* Pattern-matching assignment */
      tmpMeta19 = mmc_mk_box3(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numOfCLs));
      tmpMeta20 = omc_HpcOmMemory_addVarsToSharedCL0(threadData, _matchedCacheLine, mmc_unbox_integer(_varIdx), ((modelica_fnptr) _iFactoryMethod), _iCompareFuncArgument, _iThreadIdx, _iSharedCacheLines, tmpMeta19);
      tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
      tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
      tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 3));
      tmp24 = mmc_unbox_integer(tmpMeta23);
      _cacheMap = tmpMeta21;
      _cacheMapMeta = tmpMeta22;
      _numOfCLs = tmp24  /* pattern as ty=Integer */;
    }
  }

  tmpMeta26 = mmc_mk_box3(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numOfCLs));
  _oInfo = tmpMeta26;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_addVarsToSharedCL(threadData_t *threadData, modelica_metatype _iNodeVars, modelica_fnptr _iSharedClSelectFunction, modelica_fnptr _iFactoryMethod, modelica_metatype _iThreadIdx, modelica_metatype _iCompareFuncArgument, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo)
{
  modelica_integer tmp1;
  modelica_metatype _oInfo = NULL;
  tmp1 = mmc_unbox_integer(_iThreadIdx);
  _oInfo = omc_HpcOmMemory_addVarsToSharedCL(threadData, _iNodeVars, _iSharedClSelectFunction, _iFactoryMethod, tmp1, _iCompareFuncArgument, _iSharedCacheLines, _iInfo);
  /* skip box _oInfo; tuple<HpcOmMemory.CacheMap, HpcOmMemory.CacheMapMeta, #Integer> */
  return _oInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_contractCacheLineForVarType(threadData_t *threadData, modelica_integer _iVarDataType, modelica_metatype _iCacheLinesFloat, modelica_metatype _iCacheLinesInt, modelica_metatype _iCacheLinesBool, modelica_metatype _iVarCacheLines)
{
  modelica_metatype _oContractedCacheLines = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(0, _iCacheLinesFloat, _iCacheLinesInt, _iCacheLinesBool);
  _oContractedCacheLines = tmpMeta1;
  if((_iVarDataType == ((modelica_integer) 1)))
  {
    tmpMeta2 = mmc_mk_box3(0, _iVarCacheLines, _iCacheLinesInt, _iCacheLinesBool);
    _oContractedCacheLines = tmpMeta2;
  }
  else
  {
    if((_iVarDataType == ((modelica_integer) 2)))
    {
      tmpMeta3 = mmc_mk_box3(0, _iCacheLinesFloat, _iVarCacheLines, _iCacheLinesBool);
      _oContractedCacheLines = tmpMeta3;
    }
    else
    {
      if((_iVarDataType == ((modelica_integer) 3)))
      {
        tmpMeta4 = mmc_mk_box3(0, _iCacheLinesFloat, _iCacheLinesInt, _iVarCacheLines);
        _oContractedCacheLines = tmpMeta4;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _oContractedCacheLines;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_contractCacheLineForVarType(threadData_t *threadData, modelica_metatype _iVarDataType, modelica_metatype _iCacheLinesFloat, modelica_metatype _iCacheLinesInt, modelica_metatype _iCacheLinesBool, modelica_metatype _iVarCacheLines)
{
  modelica_integer tmp1;
  modelica_metatype _oContractedCacheLines = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_iVarDataType);
  _oContractedCacheLines = omc_HpcOmMemory_contractCacheLineForVarType(threadData, tmp1, _iCacheLinesFloat, _iCacheLinesInt, _iCacheLinesBool, _iVarCacheLines);
  /* skip box _oContractedCacheLines; tuple<list<HpcOmMemory.CacheLineMap>, list<HpcOmMemory.CacheLineMap>, list<HpcOmMemory.CacheLineMap>> */
  return _oContractedCacheLines;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getCacheLineForVarType(threadData_t *threadData, modelica_integer _iVarDataType, modelica_metatype _iCacheLinesForTypes, modelica_metatype *out_oCacheLinesInt, modelica_metatype *out_oCacheLinesBool, modelica_metatype *out_oVarCacheLines)
{
  modelica_metatype _oCacheLinesFloat = NULL;
  modelica_metatype _oCacheLinesInt = NULL;
  modelica_metatype _oCacheLinesBool = NULL;
  modelica_metatype _oVarCacheLines = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheLinesFloat has no default value.
  // _oCacheLinesInt has no default value.
  // _oCacheLinesBool has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _oVarCacheLines = tmpMeta1;
  /* Pattern-matching assignment */
  tmpMeta2 = _iCacheLinesForTypes;
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  _oCacheLinesFloat = tmpMeta3;
  _oCacheLinesInt = tmpMeta4;
  _oCacheLinesBool = tmpMeta5;

  if((_iVarDataType == ((modelica_integer) 1)))
  {
    /* Pattern-matching assignment */
    tmpMeta6 = _iCacheLinesForTypes;
    tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
    _oVarCacheLines = tmpMeta7;
  }
  else
  {
    if((_iVarDataType == ((modelica_integer) 2)))
    {
      /* Pattern-matching assignment */
      tmpMeta8 = _iCacheLinesForTypes;
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
      _oVarCacheLines = tmpMeta9;
    }
    else
    {
      if((_iVarDataType == ((modelica_integer) 3)))
      {
        /* Pattern-matching assignment */
        tmpMeta10 = _iCacheLinesForTypes;
        tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
        _oVarCacheLines = tmpMeta11;
      }
      else
      {
        tmpMeta12 = stringAppend(_OMC_LIT95,intString(_iVarDataType));
        tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT96);
        fputs(MMC_STRINGDATA(tmpMeta13),stdout);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oCacheLinesInt) { *out_oCacheLinesInt = _oCacheLinesInt; }
  if (out_oCacheLinesBool) { *out_oCacheLinesBool = _oCacheLinesBool; }
  if (out_oVarCacheLines) { *out_oVarCacheLines = _oVarCacheLines; }
  return _oCacheLinesFloat;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getCacheLineForVarType(threadData_t *threadData, modelica_metatype _iVarDataType, modelica_metatype _iCacheLinesForTypes, modelica_metatype *out_oCacheLinesInt, modelica_metatype *out_oCacheLinesBool, modelica_metatype *out_oVarCacheLines)
{
  modelica_integer tmp1;
  modelica_metatype _oCacheLinesFloat = NULL;
  tmp1 = mmc_unbox_integer(_iVarDataType);
  _oCacheLinesFloat = omc_HpcOmMemory_getCacheLineForVarType(threadData, tmp1, _iCacheLinesForTypes, out_oCacheLinesInt, out_oCacheLinesBool, out_oVarCacheLines);
  /* skip box _oCacheLinesFloat; list<HpcOmMemory.CacheLineMap> */
  /* skip box _oCacheLinesInt; list<HpcOmMemory.CacheLineMap> */
  /* skip box _oCacheLinesBool; list<HpcOmMemory.CacheLineMap> */
  /* skip box _oVarCacheLines; list<HpcOmMemory.CacheLineMap> */
  return _oCacheLinesFloat;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_addVarsToThreadCL(threadData_t *threadData, modelica_metatype _iNodeVars, modelica_integer _iThreadIdx, modelica_metatype _iThreadCacheLines, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_metatype _lastCL = NULL;
  modelica_metatype _cacheVariable = NULL;
  modelica_metatype _allSCVarsMapping = NULL;
  modelica_integer _varIdx;
  modelica_integer _varDataType;
  modelica_integer _varNumBytesRequired;
  modelica_integer _numCLs;
  modelica_integer _cacheLineSize;
  modelica_metatype _simCodeVarTypes = NULL;
  modelica_metatype _scVarCLMapping = NULL;
  modelica_metatype _fullCLs = NULL;
  modelica_metatype _threadCacheLines = NULL;
  modelica_metatype _cacheVariables = NULL;
  modelica_metatype _cacheLinesFloat = NULL;
  modelica_metatype _cacheLinesInt = NULL;
  modelica_metatype _cacheLinesBool = NULL;
  modelica_integer _lastCLidx;
  modelica_integer _lastCLnumBytesFree;
  modelica_metatype _lastCLentries = NULL;
  modelica_metatype _varEntry = NULL;
  modelica_metatype _cacheVarName = NULL;
  modelica_metatype _threadCacheLinesFloat = NULL;
  modelica_metatype _threadCacheLinesInt = NULL;
  modelica_metatype _threadCacheLinesBool = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_integer tmp29;
  modelica_metatype tmpMeta30;
  modelica_integer tmp31;
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
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _lastCL has no default value.
  // _cacheVariable has no default value.
  // _allSCVarsMapping has no default value.
  // _varIdx has no default value.
  // _varDataType has no default value.
  // _varNumBytesRequired has no default value.
  // _numCLs has no default value.
  // _cacheLineSize has no default value.
  // _simCodeVarTypes has no default value.
  // _scVarCLMapping has no default value.
  // _fullCLs has no default value.
  // _threadCacheLines has no default value.
  // _cacheVariables has no default value.
  // _cacheLinesFloat has no default value.
  // _cacheLinesInt has no default value.
  // _cacheLinesBool has no default value.
  // _lastCLidx has no default value.
  // _lastCLnumBytesFree has no default value.
  // _lastCLentries has no default value.
  // _varEntry has no default value.
  // _cacheVarName has no default value.
  // _threadCacheLinesFloat has no default value.
  // _threadCacheLinesInt has no default value.
  // _threadCacheLinesBool has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iInfo;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 6));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp14 = mmc_unbox_integer(tmpMeta13);
  _cacheLineSize = tmp4  /* pattern as ty=Integer */;
  _cacheVariables = tmpMeta5;
  _cacheLinesFloat = tmpMeta6;
  _cacheLinesInt = tmpMeta7;
  _cacheLinesBool = tmpMeta8;
  _allSCVarsMapping = tmpMeta10;
  _simCodeVarTypes = tmpMeta11;
  _scVarCLMapping = tmpMeta12;
  _numCLs = tmp14  /* pattern as ty=Integer */;

  {
    modelica_metatype _varIdx;
    for (tmpMeta15 = _iNodeVars; !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
    {
      _varIdx = MMC_CAR(tmpMeta15);
      /* Pattern-matching assignment */
      tmpMeta16 = arrayGet(_simCodeVarTypes, mmc_unbox_integer(_varIdx));
      tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
      tmp18 = mmc_unbox_integer(tmpMeta17);
      tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
      tmp20 = mmc_unbox_integer(tmpMeta19);
      _varDataType = tmp18  /* pattern as ty=Integer */;
      _varNumBytesRequired = tmp20  /* pattern as ty=Integer */;

      _threadCacheLinesFloat = omc_HpcOmMemory_getCacheLineForVarType(threadData, _varDataType, arrayGet(_iThreadCacheLines, _iThreadIdx) ,&_threadCacheLinesInt ,&_threadCacheLinesBool ,&_threadCacheLines);

      if((!listEmpty(_threadCacheLines)))
      {
        /* Pattern-matching assignment */
        tmpMeta21 = _threadCacheLines;
        if (listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
        tmpMeta22 = MMC_CAR(tmpMeta21);
        tmpMeta23 = MMC_CDR(tmpMeta21);
        _lastCL = tmpMeta22;
        _fullCLs = tmpMeta23;
      }
      else
      {
        _lastCLidx = ((modelica_integer) 1) + _numCLs;

        _lastCLnumBytesFree = _cacheLineSize;

        tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
        _lastCLentries = tmpMeta24;

        tmpMeta25 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(_lastCLidx), mmc_mk_integer(_lastCLnumBytesFree), _lastCLentries);
        _lastCL = tmpMeta25;

        _numCLs = ((modelica_integer) 1) + _numCLs;

        tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
        _fullCLs = tmpMeta26;
      }

      /* Pattern-matching assignment */
      tmpMeta27 = _lastCL;
      tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
      tmp29 = mmc_unbox_integer(tmpMeta28);
      tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 3));
      tmp31 = mmc_unbox_integer(tmpMeta30);
      tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 4));
      _lastCLidx = tmp29  /* pattern as ty=Integer */;
      _lastCLnumBytesFree = tmp31  /* pattern as ty=Integer */;
      _lastCLentries = tmpMeta32;

      if((_lastCLnumBytesFree < _varNumBytesRequired))
      {
        tmpMeta33 = mmc_mk_cons(_lastCL, _fullCLs);
        _fullCLs = tmpMeta33;

        _lastCLidx = ((modelica_integer) 1) + _numCLs;

        _lastCLnumBytesFree = _cacheLineSize;

        tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
        _lastCLentries = tmpMeta34;

        tmpMeta35 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(_lastCLidx), mmc_mk_integer(_lastCLnumBytesFree), _lastCLentries);
        _lastCL = tmpMeta35;

        _numCLs = ((modelica_integer) 1) + _numCLs;
      }

      /* Pattern-matching assignment */
      tmpMeta36 = arrayGet(_allSCVarsMapping, mmc_unbox_integer(_varIdx));
      if (optionNone(tmpMeta36)) MMC_THROW_INTERNAL();
      tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 1));
      tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
      _cacheVariable = tmpMeta37;
      _cacheVarName = tmpMeta38;

      tmpMeta39 = mmc_mk_cons(_cacheVariable, _cacheVariables);
      _cacheVariables = tmpMeta39;

      tmpMeta40 = mmc_mk_box2(0, mmc_mk_integer(_lastCLidx), mmc_mk_integer(_varDataType));
      _scVarCLMapping = arrayUpdate(_scVarCLMapping, mmc_unbox_integer(_varIdx), tmpMeta40);

      tmpMeta41 = mmc_mk_box6(3, &HpcOmMemory_CacheLineEntry_CACHELINEENTRY__desc, mmc_mk_integer(_cacheLineSize - _lastCLnumBytesFree), mmc_mk_integer(_varDataType), mmc_mk_integer(_varNumBytesRequired), mmc_mk_integer(listLength(_cacheVariables)), mmc_mk_integer(_iThreadIdx));
      _varEntry = tmpMeta41;

      tmpMeta42 = mmc_mk_cons(_varEntry, _lastCLentries);
      tmpMeta43 = mmc_mk_box4(3, &HpcOmMemory_CacheLineMap_CACHELINEMAP__desc, mmc_mk_integer(_lastCLidx), mmc_mk_integer(_lastCLnumBytesFree - _varNumBytesRequired), tmpMeta42);
      _lastCL = tmpMeta43;

      tmpMeta44 = mmc_mk_cons(_lastCL, _fullCLs);
      arrayUpdate(_iThreadCacheLines, _iThreadIdx, omc_HpcOmMemory_contractCacheLineForVarType(threadData, _varDataType, _threadCacheLinesFloat, _threadCacheLinesInt, _threadCacheLinesBool, tmpMeta44));
    }
  }

  tmpMeta46 = mmc_mk_box6(3, &HpcOmMemory_CacheMap_CACHEMAP__desc, mmc_mk_integer(_cacheLineSize), _cacheVariables, _cacheLinesFloat, _cacheLinesInt, _cacheLinesBool);
  tmpMeta47 = mmc_mk_box4(3, &HpcOmMemory_CacheMapMeta_CACHEMAPMETA__desc, _allSCVarsMapping, _simCodeVarTypes, _scVarCLMapping);
  tmpMeta48 = mmc_mk_box3(0, tmpMeta46, tmpMeta47, mmc_mk_integer(_numCLs));
  _oInfo = tmpMeta48;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_addVarsToThreadCL(threadData_t *threadData, modelica_metatype _iNodeVars, modelica_metatype _iThreadIdx, modelica_metatype _iThreadCacheLines, modelica_metatype _iInfo)
{
  modelica_integer tmp1;
  modelica_metatype _oInfo = NULL;
  tmp1 = mmc_unbox_integer(_iThreadIdx);
  _oInfo = omc_HpcOmMemory_addVarsToThreadCL(threadData, _iNodeVars, tmp1, _iThreadCacheLines, _iInfo);
  /* skip box _oInfo; tuple<HpcOmMemory.CacheMap, HpcOmMemory.CacheMapMeta, #Integer> */
  return _oInfo;
}

static modelica_metatype closure10_arrayGet(threadData_t *thData, modelica_metatype closure, modelica_metatype index)
{
  modelica_metatype arr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_arrayGet(thData, arr, index);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getVarInfoByScVarIdx(threadData_t *threadData, modelica_integer _iScVarIdx, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iSchedulerInfo)
{
  modelica_metatype _oVarInfo = NULL;
  modelica_integer _solvingThreadIdx;
  modelica_integer _solvingTaskIdx;
  modelica_integer _listLen;
  modelica_integer _owner;
  modelica_boolean _isShared;
  modelica_metatype _threads = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _unsolvingThreadIdc = NULL;
  modelica_metatype _unsolvingTaskIdc = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVarInfo has no default value.
  // _solvingThreadIdx has no default value.
  // _solvingTaskIdx has no default value.
  // _listLen has no default value.
  _owner = ((modelica_integer) -1);
  _isShared = 0 /* false */;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _threads = tmpMeta1;
  // _unsolvingThreadIdc has no default value.
  // _unsolvingTaskIdc has no default value.
  _solvingTaskIdx = mmc_unbox_integer(arrayGet(_iScVarSolvedTaskMapping, _iScVarIdx));

  _unsolvingTaskIdc = arrayGet(_iScVarUnsolvedTaskMapping, _iScVarIdx);

  if((_solvingTaskIdx > ((modelica_integer) 0)))
  {
    _solvingThreadIdx = mmc_unbox_integer(omc_Util_tuple31(threadData, arrayGet(_iSchedulerInfo, _solvingTaskIdx)));

    _owner = _solvingThreadIdx;

    tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_owner), _threads);
    _threads = tmpMeta2;
  }

  _listLen = listLength(_unsolvingTaskIdc);

  tmpMeta3 = mmc_mk_box1(0, _iSchedulerInfo);
  _unsolvingThreadIdc = omc_List_map(threadData, omc_List_map(threadData, _unsolvingTaskIdc, (modelica_fnptr) mmc_mk_box2(0,closure10_arrayGet,tmpMeta3)), boxvar_Util_tuple31);

  if((_listLen == ((modelica_integer) 1)))
  {
    if((_owner < ((modelica_integer) 0)))
    {
      _owner = mmc_unbox_integer(listHead(_unsolvingThreadIdc));

      tmpMeta4 = mmc_mk_cons(mmc_mk_integer(_owner), _threads);
      _threads = tmpMeta4;
    }
    else
    {
      _isShared = 1 /* true */;
    }
  }

  if((_listLen > ((modelica_integer) 1)))
  {
    _threads = omc_List_unique(threadData, listAppend(_unsolvingThreadIdc, _threads));

    _isShared = 1 /* true */;
  }

  tmpMeta5 = mmc_mk_box3(3, &HpcOmMemory_ScVarInfo_SCVARINFO__desc, mmc_mk_integer(_owner), mmc_mk_boolean(_isShared));
  _oVarInfo = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _oVarInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getVarInfoByScVarIdx(threadData_t *threadData, modelica_metatype _iScVarIdx, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iSchedulerInfo)
{
  modelica_integer tmp1;
  modelica_metatype _oVarInfo = NULL;
  tmp1 = mmc_unbox_integer(_iScVarIdx);
  _oVarInfo = omc_HpcOmMemory_getVarInfoByScVarIdx(threadData, tmp1, _iScVarSolvedTaskMapping, _iScVarUnsolvedTaskMapping, _iSchedulerInfo);
  /* skip box _oVarInfo; HpcOmMemory.ScVarInfo */
  return _oVarInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createVarInfos(threadData_t *threadData, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iSchedulerInfo)
{
  modelica_metatype _oVarInfos = NULL;
  modelica_metatype _tmpVarInfos = NULL;
  modelica_integer _scVarIdx;
  modelica_integer _numberOfScVars;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVarInfos has no default value.
  // _tmpVarInfos has no default value.
  // _scVarIdx has no default value.
  // _numberOfScVars has no default value.
  _numberOfScVars = arrayLength(_iScVarSolvedTaskMapping);

  _tmpVarInfos = arrayCreate(_numberOfScVars, _OMC_LIT97);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _numberOfScVars;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _scVarIdx;
    for(_scVarIdx = ((modelica_integer) 1); in_range_integer(_scVarIdx, tmp1, tmp3); _scVarIdx += tmp2)
    {
      _tmpVarInfos = arrayUpdate(_tmpVarInfos, _scVarIdx, omc_HpcOmMemory_getVarInfoByScVarIdx(threadData, _scVarIdx, _iScVarSolvedTaskMapping, _iScVarUnsolvedTaskMapping, _iSchedulerInfo));
    }
  }

  _oVarInfos = _tmpVarInfos;
  _return: OMC_LABEL_UNUSED
  return _oVarInfos;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapOptimizedForTask1(threadData_t *threadData, modelica_integer _iScVar, modelica_integer _iThreadIdx, modelica_metatype _iScVarInfos, modelica_metatype _iHandledVariables, modelica_fnptr _iSharedClSelectFunction, modelica_metatype _iCompareFuncArgument, modelica_fnptr _iFactoryMethod, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_boolean _isShared;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _cacheMapMeta = NULL;
  modelica_integer _numOfCLs;
  modelica_integer _ownerThread;
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
  modelica_metatype tmpMeta13;
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
  modelica_integer tmp24;
  modelica_metatype tmpMeta25;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _isShared has no default value.
  // _cacheMap has no default value.
  // _cacheMapMeta has no default value.
  // _numOfCLs has no default value.
  // _ownerThread has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iInfo;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _cacheMap = tmpMeta2;
  _cacheMapMeta = tmpMeta3;
  _numOfCLs = tmp5  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta6 = arrayGet(_iScVarInfos, _iScVar);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  _ownerThread = tmp8  /* pattern as ty=Integer */;
  _isShared = tmp10  /* pattern as ty=Boolean */;

  if(((!((_ownerThread == ((modelica_integer) -1)) && _isShared)) && (!mmc_unbox_boolean(arrayGet(_iHandledVariables, _iScVar)))))
  {
    if(_isShared)
    {
      /* Pattern-matching assignment */
      tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_iScVar), MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta12 = mmc_mk_box3(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numOfCLs));
      tmpMeta13 = omc_HpcOmMemory_addVarsToSharedCL(threadData, tmpMeta11, ((modelica_fnptr) _iSharedClSelectFunction), ((modelica_fnptr) _iFactoryMethod), _iThreadIdx, _iCompareFuncArgument, _iSharedCacheLines, tmpMeta12);
      tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
      tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
      tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
      tmp17 = mmc_unbox_integer(tmpMeta16);
      _cacheMap = tmpMeta14;
      _cacheMapMeta = tmpMeta15;
      _numOfCLs = tmp17  /* pattern as ty=Integer */;
    }
    else
    {
      /* Pattern-matching assignment */
      tmpMeta18 = mmc_mk_cons(mmc_mk_integer(_iScVar), MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta19 = mmc_mk_box3(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numOfCLs));
      tmpMeta20 = omc_HpcOmMemory_addVarsToThreadCL(threadData, tmpMeta18, _iThreadIdx, _iThreadCacheLines, tmpMeta19);
      tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
      tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
      tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 3));
      tmp24 = mmc_unbox_integer(tmpMeta23);
      _cacheMap = tmpMeta21;
      _cacheMapMeta = tmpMeta22;
      _numOfCLs = tmp24  /* pattern as ty=Integer */;
    }
  }

  arrayUpdate(_iHandledVariables, _iScVar, mmc_mk_boolean(1 /* true */));

  tmpMeta25 = mmc_mk_box3(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numOfCLs));
  _oInfo = tmpMeta25;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapOptimizedForTask1(threadData_t *threadData, modelica_metatype _iScVar, modelica_metatype _iThreadIdx, modelica_metatype _iScVarInfos, modelica_metatype _iHandledVariables, modelica_fnptr _iSharedClSelectFunction, modelica_metatype _iCompareFuncArgument, modelica_fnptr _iFactoryMethod, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oInfo = NULL;
  tmp1 = mmc_unbox_integer(_iScVar);
  tmp2 = mmc_unbox_integer(_iThreadIdx);
  _oInfo = omc_HpcOmMemory_createCacheMapOptimizedForTask1(threadData, tmp1, tmp2, _iScVarInfos, _iHandledVariables, _iSharedClSelectFunction, _iCompareFuncArgument, _iFactoryMethod, _iThreadCacheLines, _iSharedCacheLines, _iInfo);
  /* skip box _oInfo; tuple<HpcOmMemory.CacheMap, HpcOmMemory.CacheMapMeta, #Integer> */
  return _oInfo;
}

static modelica_metatype closure11_HpcOmMemory_createCacheMapOptimizedForTask1(threadData_t *thData, modelica_metatype closure, modelica_metatype iScVar, modelica_metatype iInfo)
{
  modelica_metatype iThreadIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iScVarInfos = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iHandledVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_fnptr iSharedClSelectFunction = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iCompareFuncArgument = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_fnptr iFactoryMethod = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  modelica_metatype iThreadCacheLines = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),7));
  modelica_metatype iSharedCacheLines = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),8));
  return boxptr_HpcOmMemory_createCacheMapOptimizedForTask1(thData, iScVar, iThreadIdx, iScVarInfos, iHandledVariables, iSharedClSelectFunction, iCompareFuncArgument, iFactoryMethod, iThreadCacheLines, iSharedCacheLines, iInfo);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapOptimizedForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_integer _iNumberOfThreads, modelica_fnptr _iSharedClSelectFunction, modelica_metatype _iCompareFuncArgument, modelica_fnptr _iFactoryMethod, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iScVarInfos, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_integer _threadIdx;
  modelica_integer _taskIdx;
  modelica_metatype _solvedVars = NULL;
  modelica_metatype _unsolvedVars = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _cacheMapMeta = NULL;
  modelica_integer _numOfCLs;
  modelica_metatype _tmpInfo = NULL;
  modelica_metatype _allSCVarsMapping = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _threadIdx has no default value.
  // _taskIdx has no default value.
  // _solvedVars has no default value.
  // _unsolvedVars has no default value.
  // _vars has no default value.
  // _cacheMap has no default value.
  // _cacheMapMeta has no default value.
  // _numOfCLs has no default value.
  // _tmpInfo has no default value.
  // _allSCVarsMapping has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iTask;
    tmp4_2 = _iInfo;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          _taskIdx = tmp7  /* pattern as ty=Integer */;
          _threadIdx = tmp9  /* pattern as ty=Integer */;
          _cacheMap = tmpMeta10;
          _cacheMapMeta = tmpMeta11;
          _allSCVarsMapping = tmpMeta12;
          _numOfCLs = tmp14  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _solvedVars = arrayGet(_iTaskSolvedVarsMapping, _taskIdx);

          _unsolvedVars = arrayGet(_iTaskUnsolvedVarsMapping, _taskIdx);

          _vars = omc_List_sort(threadData, listAppend(_solvedVars, _unsolvedVars), boxvar_intGt);
          tmpMeta15 = mmc_mk_box8(0, mmc_mk_integer(_threadIdx), _iScVarInfos, _iHandledVariables, ((modelica_fnptr) _iSharedClSelectFunction), _iCompareFuncArgument, ((modelica_fnptr) _iFactoryMethod), _iThreadCacheLines, _iSharedCacheLines);
          tmpMeta16 = mmc_mk_box3(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numOfCLs));
          tmpMeta1 = omc_List_fold(threadData, _vars, (modelica_fnptr) mmc_mk_box2(0,closure11_HpcOmMemory_createCacheMapOptimizedForTask1,tmpMeta15), tmpMeta16);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          _cacheMap = tmpMeta17;
          _cacheMapMeta = tmpMeta18;
          _allSCVarsMapping = tmpMeta19;
          _numOfCLs = tmp21  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta1 = _iInfo;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT98),stdout);
          tmpMeta1 = _iInfo;
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
  _oInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapOptimizedForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_metatype _iNumberOfThreads, modelica_fnptr _iSharedClSelectFunction, modelica_metatype _iCompareFuncArgument, modelica_fnptr _iFactoryMethod, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iScVarInfos, modelica_metatype _iInfo)
{
  modelica_integer tmp1;
  modelica_metatype _oInfo = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oInfo = omc_HpcOmMemory_createCacheMapOptimizedForTask(threadData, _iTask, _iTaskGraph, _iTaskGraphMeta, _iSchedulerInfo, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iHandledVariables, tmp1, _iSharedClSelectFunction, _iCompareFuncArgument, _iFactoryMethod, _iThreadCacheLines, _iSharedCacheLines, _iScVarInfos, _iInfo);
  /* skip box _oInfo; tuple<HpcOmMemory.CacheMap, HpcOmMemory.CacheMapMeta, #Integer> */
  return _oInfo;
}

static modelica_metatype closure12_HpcOmMemory_createCacheMapOptimizedForTask(threadData_t *thData, modelica_metatype closure, modelica_metatype iTask, modelica_metatype iInfo)
{
  modelica_metatype iTaskGraph = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iTaskGraphMeta = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iSchedulerInfo = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iTaskSolvedVarsMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iTaskUnsolvedVarsMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype iHandledVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  modelica_metatype iNumberOfThreads = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),7));
  modelica_fnptr iSharedClSelectFunction = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),8));
  modelica_metatype iCompareFuncArgument = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),9));
  modelica_fnptr iFactoryMethod = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),10));
  modelica_metatype iThreadCacheLines = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),11));
  modelica_metatype iSharedCacheLines = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),12));
  modelica_metatype iScVarInfos = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),13));
  return boxptr_HpcOmMemory_createCacheMapOptimizedForTask(thData, iTask, iTaskGraph, iTaskGraphMeta, iSchedulerInfo, iTaskSolvedVarsMapping, iTaskUnsolvedVarsMapping, iHandledVariables, iNumberOfThreads, iSharedClSelectFunction, iCompareFuncArgument, iFactoryMethod, iThreadCacheLines, iSharedCacheLines, iScVarInfos, iInfo);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapThreadOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_integer _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iThreadTasks, modelica_integer _iNumberOfThreads, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL)
{
  modelica_metatype _oCacheMap = NULL;
  modelica_metatype _oScVarCLMapping = NULL;
  modelica_integer _oNumCL;
  modelica_metatype _threadCacheLines = NULL;
  modelica_metatype _sharedCacheLines = NULL;
  modelica_metatype _tmpCacheInfo = NULL;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _cacheMapMeta = NULL;
  modelica_metatype _scVarCLMapping = NULL;
  modelica_metatype _handledVariables = NULL;
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
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheMap has no default value.
  // _oScVarCLMapping has no default value.
  // _oNumCL has no default value.
  // _threadCacheLines has no default value.
  // _sharedCacheLines has no default value.
  // _tmpCacheInfo has no default value.
  // _cacheMap has no default value.
  // _cacheMapMeta has no default value.
  // _scVarCLMapping has no default value.
  // _handledVariables has no default value.
  _threadCacheLines = arrayCreate(_iNumberOfThreads, _OMC_LIT99);

  _sharedCacheLines = arrayCreate(_iNumberOfThreads, _OMC_LIT100);

  _handledVariables = arrayCreate(arrayLength(_iSimCodeVarTypes), mmc_mk_boolean(0 /* false */));

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box6(3, &HpcOmMemory_CacheMap_CACHEMAP__desc, mmc_mk_integer(_iCacheLineSize), tmpMeta1, tmpMeta2, tmpMeta3, tmpMeta4);
  _cacheMap = tmpMeta5;

  _scVarCLMapping = arrayCreate(arrayLength(_iAllSCVarsMapping), _OMC_LIT92);

  _oNumCL = ((modelica_integer) 0);

  tmpMeta6 = mmc_mk_box4(3, &HpcOmMemory_CacheMapMeta_CACHEMAPMETA__desc, _iAllSCVarsMapping, _iSimCodeVarTypes, _scVarCLMapping);
  _cacheMapMeta = tmpMeta6;

  tmpMeta7 = mmc_mk_box3(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_oNumCL));
  _tmpCacheInfo = tmpMeta7;

  tmp15 = ((modelica_integer) 1); tmp16 = 1; tmp17 = _iNumberOfThreads;
  if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
  {
    modelica_integer _threadIdx;
    for(_threadIdx = ((modelica_integer) 1); in_range_integer(_threadIdx, tmp15, tmp17); _threadIdx += tmp16)
    {
      /* Pattern-matching assignment */
      tmpMeta8 = mmc_mk_box13(0, _iTaskGraph, _iTaskGraphMeta, _iSchedulerInfo, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _handledVariables, mmc_mk_integer(_iNumberOfThreads), boxvar_HpcOmMemory_findMatchingSharedCLThread, mmc_mk_integer(((modelica_integer) 0)), boxvar_HpcOmMemory_createSharedClThread, _threadCacheLines, _sharedCacheLines, _iScVarInfos);
      tmpMeta9 = omc_List_fold(threadData, arrayGet(_iThreadTasks, _threadIdx), (modelica_fnptr) mmc_mk_box2(0,closure12_HpcOmMemory_createCacheMapOptimizedForTask,tmpMeta8), _tmpCacheInfo);
      tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
      tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
      tmp13 = mmc_unbox_integer(tmpMeta12);
      _cacheMap = tmpMeta10;
      _cacheMapMeta = tmpMeta11;
      _oNumCL = tmp13  /* pattern as ty=Integer */;

      _cacheMap = omc_HpcOmMemory_createCacheMapFromThreadAndSharedCLs(threadData, arrayGet(_threadCacheLines, _threadIdx), arrayGet(_sharedCacheLines, _threadIdx), _cacheMap);

      tmpMeta14 = mmc_mk_box3(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_oNumCL));
      _tmpCacheInfo = tmpMeta14;
    }
  }

  _oCacheMap = omc_Util_tuple31(threadData, _tmpCacheInfo);

  /* Pattern-matching assignment */
  tmpMeta18 = _cacheMapMeta;
  tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 4));
  _oScVarCLMapping = tmpMeta19;
  _return: OMC_LABEL_UNUSED
  if (out_oScVarCLMapping) { *out_oScVarCLMapping = _oScVarCLMapping; }
  if (out_oNumCL) { *out_oNumCL = _oNumCL; }
  return _oCacheMap;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapThreadOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iThreadTasks, modelica_metatype _iNumberOfThreads, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oNumCL;
  modelica_metatype _oCacheMap = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  tmp2 = mmc_unbox_integer(_iNumberOfThreads);
  _oCacheMap = omc_HpcOmMemory_createCacheMapThreadOptimized(threadData, _iTaskGraph, _iTaskGraphMeta, _iAllSCVarsMapping, _iSimCodeVarTypes, _iScVarSolvedTaskMapping, _iScVarUnsolvedTaskMapping, tmp1, _iAllComponents, _iThreadTasks, tmp2, _iSchedulerInfo, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iScVarInfos, out_oScVarCLMapping, &_oNumCL);
  /* skip box _oCacheMap; HpcOmMemory.CacheMap */
  /* skip box _oScVarCLMapping; array<tuple<#Integer, #Integer>> */
  if (out_oNumCL) { *out_oNumCL = mmc_mk_icon(_oNumCL); }
  return _oCacheMap;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_getUnsolvedVarsByNodeList(threadData_t *threadData, modelica_metatype _iNodeList, modelica_integer _iVarCount, modelica_metatype _iTaskUnsolvedVarsMapping)
{
  modelica_metatype _oUnsolvedVars = NULL;
  modelica_metatype _varMarks = NULL;
  modelica_integer _nodeIdx;
  modelica_integer _varIdx;
  modelica_metatype _nodeUnsolvedVars = NULL;
  modelica_metatype _tmpUnsolvedVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oUnsolvedVars has no default value.
  // _varMarks has no default value.
  // _nodeIdx has no default value.
  // _varIdx has no default value.
  // _nodeUnsolvedVars has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpUnsolvedVars = tmpMeta1;
  _varMarks = arrayCreate(_iVarCount, mmc_mk_boolean(0 /* false */));

  {
    modelica_metatype _nodeIdx;
    for (tmpMeta2 = _iNodeList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _nodeIdx = MMC_CAR(tmpMeta2);
      _nodeUnsolvedVars = arrayGet(_iTaskUnsolvedVarsMapping, mmc_unbox_integer(_nodeIdx));

      {
        modelica_metatype _varIdx;
        for (tmpMeta3 = _nodeUnsolvedVars; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _varIdx = MMC_CAR(tmpMeta3);
          if((!mmc_unbox_boolean(arrayGet(_varMarks, mmc_unbox_integer(_varIdx)))))
          {
            tmpMeta4 = mmc_mk_cons(_varIdx, _tmpUnsolvedVars);
            _tmpUnsolvedVars = tmpMeta4;

            _varMarks = arrayUpdate(_varMarks, mmc_unbox_integer(_varIdx), mmc_mk_boolean(1 /* true */));
          }
        }
      }
    }
  }

  _oUnsolvedVars = _tmpUnsolvedVars;
  _return: OMC_LABEL_UNUSED
  return _oUnsolvedVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_getUnsolvedVarsByNodeList(threadData_t *threadData, modelica_metatype _iNodeList, modelica_metatype _iVarCount, modelica_metatype _iTaskUnsolvedVarsMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oUnsolvedVars = NULL;
  tmp1 = mmc_unbox_integer(_iVarCount);
  _oUnsolvedVars = omc_HpcOmMemory_getUnsolvedVarsByNodeList(threadData, _iNodeList, tmp1, _iTaskUnsolvedVarsMapping);
  /* skip box _oUnsolvedVars; list<#Integer> */
  return _oUnsolvedVars;
}

static modelica_metatype closure13_arrayGet(threadData_t *thData, modelica_metatype closure, modelica_metatype index)
{
  modelica_metatype arr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_arrayGet(thData, arr, index);
}static modelica_metatype closure14_HpcOmMemory_createCacheMapOptimizedForTask1(threadData_t *thData, modelica_metatype closure, modelica_metatype iScVar, modelica_metatype iInfo)
{
  modelica_metatype iThreadIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iScVarInfos = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iHandledVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_fnptr iSharedClSelectFunction = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iCompareFuncArgument = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_fnptr iFactoryMethod = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  modelica_metatype iThreadCacheLines = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),7));
  modelica_metatype iSharedCacheLines = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),8));
  return boxptr_HpcOmMemory_createCacheMapOptimizedForTask1(thData, iScVar, iThreadIdx, iScVarInfos, iHandledVariables, iSharedClSelectFunction, iCompareFuncArgument, iFactoryMethod, iThreadCacheLines, iSharedCacheLines, iInfo);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSchedulerInfo, modelica_integer _iNumberOfThreads, modelica_integer _iLevel, modelica_metatype _iScVarInfos, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_metatype _nodeIdc = NULL;
  modelica_metatype _solvedVars = NULL;
  modelica_metatype _unsolvedVars = NULL;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _cacheMapMeta = NULL;
  modelica_metatype _tmpInfo = NULL;
  modelica_integer _threadIdx;
  modelica_integer _numNewCL;
  modelica_metatype _allSCVarsMapping = NULL;
  modelica_metatype _cacheVariables = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _nodeIdc has no default value.
  // _solvedVars has no default value.
  // _unsolvedVars has no default value.
  // _cacheMap has no default value.
  // _cacheMapMeta has no default value.
  // _tmpInfo has no default value.
  // _threadIdx has no default value.
  // _numNewCL has no default value.
  // _allSCVarsMapping has no default value.
  // _cacheVariables has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iTask;
    tmp4_2 = _iInfo;
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          _nodeIdc = tmpMeta6;
          _threadIdx = tmp9  /* pattern as ty=Integer */;
          _cacheMap = tmpMeta10;
          _cacheMapMeta = tmpMeta11;
          _allSCVarsMapping = tmpMeta12;
          _numNewCL = tmp14  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box1(0, _iTaskSolvedVarsMapping);
          _solvedVars = omc_List_flatten(threadData, omc_List_map(threadData, _nodeIdc, (modelica_fnptr) mmc_mk_box2(0,closure13_arrayGet,tmpMeta15)));

          _unsolvedVars = omc_HpcOmMemory_getUnsolvedVarsByNodeList(threadData, _nodeIdc, arrayLength(_iScVarInfos), _iTaskUnsolvedVarsMapping);

          tmpMeta17 = mmc_mk_box2(0, mmc_mk_integer(_iLevel), mmc_mk_integer(_threadIdx));
          tmpMeta16 = mmc_mk_box8(0, mmc_mk_integer(_threadIdx), _iScVarInfos, _iHandledVariables, boxvar_HpcOmMemory_findMatchingSharedCLLevelfix, tmpMeta17, boxvar_HpcOmMemory_createSharedClLevelFix, _iThreadCacheLines, _iSharedCacheLines);
          tmpMeta18 = mmc_mk_box3(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numNewCL));
          _tmpInfo = omc_List_fold(threadData, listAppend(_solvedVars, _unsolvedVars), (modelica_fnptr) mmc_mk_box2(0,closure14_HpcOmMemory_createCacheMapOptimizedForTask1,tmpMeta16), tmpMeta18);

          /* Pattern-matching assignment */
          tmpMeta19 = omc_Util_tuple31(threadData, _tmpInfo);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,0,5) == 0) goto goto_2;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
          _cacheVariables = tmpMeta20;
          tmpMeta1 = _tmpInfo;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta22)) goto tmp3_end;
          
          _nodeIdc = tmpMeta21;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT101),stdout);
          goto goto_2;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT102),stdout);
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
  _oInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSchedulerInfo, modelica_metatype _iNumberOfThreads, modelica_metatype _iLevel, modelica_metatype _iScVarInfos, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oInfo = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  tmp2 = mmc_unbox_integer(_iLevel);
  _oInfo = omc_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask(threadData, _iTask, _iTaskGraph, _iTaskGraphMeta, _iSchedulerInfo, tmp1, tmp2, _iScVarInfos, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iHandledVariables, _iThreadCacheLines, _iSharedCacheLines, _iInfo);
  /* skip box _oInfo; tuple<HpcOmMemory.CacheMap, HpcOmMemory.CacheMapMeta, #Integer> */
  return _oInfo;
}

static modelica_metatype closure15_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask(threadData_t *thData, modelica_metatype closure, modelica_metatype iTask, modelica_metatype iInfo)
{
  modelica_metatype iTaskGraph = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iTaskGraphMeta = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iSchedulerInfo = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iNumberOfThreads = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iLevel = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype iScVarInfos = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  modelica_metatype iTaskSolvedVarsMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),7));
  modelica_metatype iTaskUnsolvedVarsMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),8));
  modelica_metatype iHandledVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),9));
  modelica_metatype iThreadCacheLines = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),10));
  modelica_metatype iSharedCacheLines = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),11));
  return boxptr_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask(thData, iTask, iTaskGraph, iTaskGraphMeta, iSchedulerInfo, iNumberOfThreads, iLevel, iScVarInfos, iTaskSolvedVarsMapping, iTaskUnsolvedVarsMapping, iHandledVariables, iThreadCacheLines, iSharedCacheLines, iInfo);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iScVarInfos, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_metatype _iSchedulerInfo, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_integer _createdCL;
  modelica_integer _numCL;
  modelica_integer _cacheLineSize;
  modelica_integer _level;
  modelica_metatype _allCL = NULL;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _cacheMapMeta = NULL;
  modelica_metatype _cacheLinesFloat = NULL;
  modelica_metatype _cacheVariables = NULL;
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
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _createdCL has no default value.
  // _numCL has no default value.
  // _cacheLineSize has no default value.
  // _level has no default value.
  // _allCL has no default value.
  // _cacheMap has no default value.
  // _cacheMapMeta has no default value.
  // _cacheLinesFloat has no default value.
  // _cacheVariables has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iInfo;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  _cacheMap = tmpMeta2;
  _cacheMapMeta = tmpMeta3;
  _numCL = tmp5  /* pattern as ty=Integer */;
  _level = tmp7  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta8 = _cacheMap;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
  _cacheVariables = tmpMeta9;

  _allCL = omc_List_intRange(threadData, _numCL);

  /* Pattern-matching assignment */
  tmpMeta10 = _cacheMap;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
  tmp12 = mmc_unbox_integer(tmpMeta11);
  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
  _cacheLineSize = tmp12  /* pattern as ty=Integer */;
  _cacheLinesFloat = tmpMeta13;

  /* Pattern-matching assignment */
  tmpMeta14 = mmc_mk_box11(0, _iTaskGraph, _iTaskGraphMeta, _iSchedulerInfo, mmc_mk_integer(_iNumberOfThreads), mmc_mk_integer(_level), _iScVarInfos, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iHandledVariables, _iThreadCacheLines, _iSharedCacheLines);
  tmpMeta15 = mmc_mk_box3(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numCL));
  tmpMeta16 = omc_List_fold(threadData, omc_HpcOmMemory_getTaskListTasks(threadData, _iLevelTasks), (modelica_fnptr) mmc_mk_box2(0,closure15_HpcOmMemory_createCacheMapLevelFixedOptimizedForTask,tmpMeta14), tmpMeta15);
  tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
  tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
  tmp20 = mmc_unbox_integer(tmpMeta19);
  _cacheMap = tmpMeta17;
  _cacheMapMeta = tmpMeta18;
  _createdCL = tmp20  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta21 = _cacheMap;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
  _cacheVariables = tmpMeta22;

  tmpMeta23 = mmc_mk_box4(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_createdCL), mmc_mk_integer(((modelica_integer) 1) + _level));
  _oInfo = tmpMeta23;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iScVarInfos, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iHandledVariables, modelica_metatype _iSchedulerInfo, modelica_metatype _iThreadCacheLines, modelica_metatype _iSharedCacheLines, modelica_metatype _iInfo)
{
  modelica_integer tmp1;
  modelica_metatype _oInfo = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oInfo = omc_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel(threadData, _iLevelTasks, _iTaskGraph, _iTaskGraphMeta, tmp1, _iScVarInfos, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iHandledVariables, _iSchedulerInfo, _iThreadCacheLines, _iSharedCacheLines, _iInfo);
  /* skip box _oInfo; tuple<HpcOmMemory.CacheMap, HpcOmMemory.CacheMapMeta, #Integer, #Integer> */
  return _oInfo;
}

static modelica_metatype closure16_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel(threadData_t *thData, modelica_metatype closure, modelica_metatype iLevelTasks, modelica_metatype iInfo)
{
  modelica_metatype iTaskGraph = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iTaskGraphMeta = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iNumberOfThreads = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iScVarInfos = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iTaskSolvedVarsMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype iTaskUnsolvedVarsMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  modelica_metatype iHandledVariables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),7));
  modelica_metatype iSchedulerInfo = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),8));
  modelica_metatype iThreadCacheLines = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),9));
  modelica_metatype iSharedCacheLines = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),10));
  return boxptr_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel(thData, iLevelTasks, iTaskGraph, iTaskGraphMeta, iNumberOfThreads, iScVarInfos, iTaskSolvedVarsMapping, iTaskUnsolvedVarsMapping, iHandledVariables, iSchedulerInfo, iThreadCacheLines, iSharedCacheLines, iInfo);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelFixedOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_integer _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iTasksOfLevels, modelica_integer _iNumberOfThreads, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL)
{
  modelica_metatype _oCacheMap = NULL;
  modelica_metatype _oScVarCLMapping = NULL;
  modelica_integer _oNumCL;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _cacheMapMeta = NULL;
  modelica_metatype _handledVariables = NULL;
  modelica_metatype _scVarCLMapping = NULL;
  modelica_metatype _threadCacheLines = NULL;
  modelica_metatype _sharedCacheLines = NULL;
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
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheMap has no default value.
  // _oScVarCLMapping has no default value.
  // _oNumCL has no default value.
  // _cacheMap has no default value.
  // _cacheMapMeta has no default value.
  // _handledVariables has no default value.
  // _scVarCLMapping has no default value.
  // _threadCacheLines has no default value.
  // _sharedCacheLines has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box6(3, &HpcOmMemory_CacheMap_CACHEMAP__desc, mmc_mk_integer(_iCacheLineSize), tmpMeta1, tmpMeta2, tmpMeta3, tmpMeta4);
  _cacheMap = tmpMeta5;

  _scVarCLMapping = arrayCreate(arrayLength(_iAllSCVarsMapping), _OMC_LIT92);

  _handledVariables = arrayCreate(arrayLength(_iSimCodeVarTypes), mmc_mk_boolean(0 /* false */));

  _oNumCL = ((modelica_integer) 0);

  _threadCacheLines = arrayCreate(_iNumberOfThreads, _OMC_LIT99);

  _sharedCacheLines = arrayCreate(_iNumberOfThreads, _OMC_LIT100);

  tmpMeta6 = mmc_mk_box4(3, &HpcOmMemory_CacheMapMeta_CACHEMAPMETA__desc, _iAllSCVarsMapping, _iSimCodeVarTypes, _scVarCLMapping);
  _cacheMapMeta = tmpMeta6;

  /* Pattern-matching assignment */
  tmpMeta7 = mmc_mk_box10(0, _iTaskGraph, _iTaskGraphMeta, mmc_mk_integer(_iNumberOfThreads), _iScVarInfos, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _handledVariables, _iSchedulerInfo, _threadCacheLines, _sharedCacheLines);
  tmpMeta8 = mmc_mk_box4(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(_oNumCL), mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta9 = omc_List_fold(threadData, _iTasksOfLevels, (modelica_fnptr) mmc_mk_box2(0,closure16_HpcOmMemory_createCacheMapLevelFixedOptimizedForLevel,tmpMeta7), tmpMeta8);
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
  tmp13 = mmc_unbox_integer(tmpMeta12);
  _cacheMap = tmpMeta10;
  _cacheMapMeta = tmpMeta11;
  _oNumCL = tmp13  /* pattern as ty=Integer */;

  tmp14 = ((modelica_integer) 1); tmp15 = 1; tmp16 = _iNumberOfThreads;
  if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
  {
    modelica_integer _threadIdx;
    for(_threadIdx = ((modelica_integer) 1); in_range_integer(_threadIdx, tmp14, tmp16); _threadIdx += tmp15)
    {
      _cacheMap = omc_HpcOmMemory_createCacheMapFromThreadAndSharedCLs(threadData, arrayGet(_threadCacheLines, _threadIdx), arrayGet(_sharedCacheLines, _threadIdx), _cacheMap);
    }
  }

  _oCacheMap = _cacheMap;

  /* Pattern-matching assignment */
  tmpMeta17 = _cacheMapMeta;
  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 4));
  _oScVarCLMapping = tmpMeta18;
  _return: OMC_LABEL_UNUSED
  if (out_oScVarCLMapping) { *out_oScVarCLMapping = _oScVarCLMapping; }
  if (out_oNumCL) { *out_oNumCL = _oNumCL; }
  return _oCacheMap;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapLevelFixedOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iTasksOfLevels, modelica_metatype _iNumberOfThreads, modelica_metatype _iSchedulerInfo, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oNumCL;
  modelica_metatype _oCacheMap = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  tmp2 = mmc_unbox_integer(_iNumberOfThreads);
  _oCacheMap = omc_HpcOmMemory_createCacheMapLevelFixedOptimized(threadData, _iTaskGraph, _iTaskGraphMeta, _iAllSCVarsMapping, _iSimCodeVarTypes, _iScVarSolvedTaskMapping, _iScVarUnsolvedTaskMapping, tmp1, _iAllComponents, _iTasksOfLevels, tmp2, _iSchedulerInfo, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iScVarInfos, out_oScVarCLMapping, &_oNumCL);
  /* skip box _oCacheMap; HpcOmMemory.CacheMap */
  /* skip box _oScVarCLMapping; array<tuple<#Integer, #Integer>> */
  if (out_oNumCL) { *out_oNumCL = mmc_mk_icon(_oNumCL); }
  return _oCacheMap;
}

static modelica_metatype closure17_HpcOmMemory_appendNodeVarsToCacheMap(threadData_t *thData, modelica_metatype closure, modelica_metatype iNodeIdx, modelica_metatype iInfo)
{
  modelica_metatype iOwnerThread = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iNodeSimCodeVarMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_HpcOmMemory_appendNodeVarsToCacheMap(thData, iNodeIdx, iOwnerThread, iNodeSimCodeVarMapping, iInfo);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelOptimizedForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_metatype _nodeIdc = NULL;
  modelica_metatype _tmpInfo = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _nodeIdc has no default value.
  // _tmpInfo has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTask;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _nodeIdc = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) -1)), _iNodeSimCodeVarMapping);
          tmpMeta1 = omc_List_fold(threadData, _nodeIdc, (modelica_fnptr) mmc_mk_box2(0,closure17_HpcOmMemory_appendNodeVarsToCacheMap,tmpMeta7), _iInfo);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT102),stdout);
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
  _oInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelOptimized0(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype _iInfo)
{
  modelica_metatype _oInfo = NULL;
  modelica_integer _createdCL;
  modelica_integer _numCL;
  modelica_integer _cacheLineSize;
  modelica_metatype _allCL = NULL;
  modelica_metatype _availableCL = NULL;
  modelica_metatype _availableCLold = NULL;
  modelica_metatype _writtenCL = NULL;
  modelica_metatype _cacheLinesPrevLevel = NULL;
  modelica_metatype _detailedCacheLineInfo = NULL;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _cacheMapMeta = NULL;
  modelica_metatype _cacheLinesFloat = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_boolean tmp19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oInfo has no default value.
  // _createdCL has no default value.
  // _numCL has no default value.
  // _cacheLineSize has no default value.
  // _allCL has no default value.
  // _availableCL has no default value.
  // _availableCLold has no default value.
  // _writtenCL has no default value.
  // _cacheLinesPrevLevel has no default value.
  // _detailedCacheLineInfo has no default value.
  // _cacheMap has no default value.
  // _cacheMapMeta has no default value.
  // _cacheLinesFloat has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iInfo;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _cacheLinesPrevLevel = tmpMeta2;
  _cacheMap = tmpMeta3;
  _cacheMapMeta = tmpMeta4;
  _numCL = tmp6  /* pattern as ty=Integer */;

  _allCL = omc_List_intRange(threadData, _numCL);

  /* Pattern-matching assignment */
  tmpMeta7 = _cacheMap;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  tmp9 = mmc_unbox_integer(tmpMeta8);
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
  _cacheLineSize = tmp9  /* pattern as ty=Integer */;
  _cacheLinesFloat = tmpMeta10;

  _availableCLold = omc_List_setDifferenceIntN(threadData, _allCL, _cacheLinesPrevLevel, _numCL);

  _detailedCacheLineInfo = omc_HpcOmMemory_createDetailedCacheMapInformation(threadData, _availableCLold, _cacheLinesFloat, _cacheLineSize);

  _detailedCacheLineInfo = listReverse(_detailedCacheLineInfo);

  /* Pattern-matching assignment */
  tmpMeta11 = mmc_mk_box4(0, _cacheMap, _cacheMapMeta, mmc_mk_integer(((modelica_integer) 0)), _detailedCacheLineInfo);
  tmpMeta12 = omc_List_fold1(threadData, omc_HpcOmMemory_getTaskListTasks(threadData, _iLevelTasks), boxvar_HpcOmMemory_createCacheMapLevelOptimizedForTask, _iNodeSimCodeVarMapping, tmpMeta11);
  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
  tmp16 = mmc_unbox_integer(tmpMeta15);
  tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 4));
  _cacheMap = tmpMeta13;
  _cacheMapMeta = tmpMeta14;
  _createdCL = tmp16  /* pattern as ty=Integer */;
  _detailedCacheLineInfo = tmpMeta17;

  _availableCL = omc_List_map(threadData, _detailedCacheLineInfo, boxvar_Util_tuple21);

  _writtenCL = omc_List_setDifferenceIntN(threadData, _availableCLold, _availableCL, _numCL);

  tmp19 = (modelica_boolean)(((modelica_integer) 1) + _numCL <= _numCL + _createdCL);
  if(tmp19)
  {
    tmpMeta20 = omc_List_intRange2(threadData, ((modelica_integer) 1) + _numCL, _numCL + _createdCL);
  }
  else
  {
    tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta20 = tmpMeta18;
  }
  _writtenCL = listAppend(_writtenCL, tmpMeta20);

  tmpMeta21 = mmc_mk_box4(0, _writtenCL, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numCL + _createdCL));
  _oInfo = tmpMeta21;
  _return: OMC_LABEL_UNUSED
  return _oInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapLevelOptimized(threadData_t *threadData, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarTaskMapping, modelica_integer _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iTasksOfLevels, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL)
{
  modelica_metatype _oCacheMap = NULL;
  modelica_metatype _oScVarCLMapping = NULL;
  modelica_integer _oNumCL;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _cacheMapMeta = NULL;
  modelica_integer _numCL;
  modelica_metatype _scVarCLMapping = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheMap has no default value.
  // _oScVarCLMapping has no default value.
  // _oNumCL has no default value.
  // _cacheMap has no default value.
  // _cacheMapMeta has no default value.
  // _numCL has no default value.
  // _scVarCLMapping has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box6(3, &HpcOmMemory_CacheMap_CACHEMAP__desc, mmc_mk_integer(_iCacheLineSize), tmpMeta1, tmpMeta2, tmpMeta3, tmpMeta4);
  _cacheMap = tmpMeta5;

  _scVarCLMapping = arrayCreate(arrayLength(_iAllSCVarsMapping), _OMC_LIT92);

  _numCL = ((modelica_integer) 0);

  tmpMeta6 = mmc_mk_box4(3, &HpcOmMemory_CacheMapMeta_CACHEMAPMETA__desc, _iAllSCVarsMapping, _iSimCodeVarTypes, _scVarCLMapping);
  _cacheMapMeta = tmpMeta6;

  /* Pattern-matching assignment */
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta8 = mmc_mk_box4(0, tmpMeta7, _cacheMap, _cacheMapMeta, mmc_mk_integer(_numCL));
  tmpMeta9 = omc_List_fold1(threadData, _iTasksOfLevels, boxvar_HpcOmMemory_createCacheMapLevelOptimized0, _iNodeSimCodeVarMapping, tmpMeta8);
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
  tmp13 = mmc_unbox_integer(tmpMeta12);
  _cacheMap = tmpMeta10;
  _cacheMapMeta = tmpMeta11;
  _numCL = tmp13  /* pattern as ty=Integer */;

  _oCacheMap = _cacheMap;

  /* Pattern-matching assignment */
  tmpMeta14 = _cacheMapMeta;
  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 4));
  _oScVarCLMapping = tmpMeta15;

  _oNumCL = _numCL;
  _return: OMC_LABEL_UNUSED
  if (out_oScVarCLMapping) { *out_oScVarCLMapping = _oScVarCLMapping; }
  if (out_oNumCL) { *out_oNumCL = _oNumCL; }
  return _oCacheMap;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapLevelOptimized(threadData_t *threadData, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarTaskMapping, modelica_metatype _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iTasksOfLevels, modelica_metatype _iNodeSimCodeVarMapping, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL)
{
  modelica_integer tmp1;
  modelica_integer _oNumCL;
  modelica_metatype _oCacheMap = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  _oCacheMap = omc_HpcOmMemory_createCacheMapLevelOptimized(threadData, _iAllSCVarsMapping, _iSimCodeVarTypes, _iScVarTaskMapping, tmp1, _iAllComponents, _iTasksOfLevels, _iNodeSimCodeVarMapping, out_oScVarCLMapping, &_oNumCL);
  /* skip box _oCacheMap; HpcOmMemory.CacheMap */
  /* skip box _oScVarCLMapping; array<tuple<#Integer, #Integer>> */
  if (out_oNumCL) { *out_oNumCL = mmc_mk_icon(_oNumCL); }
  return _oCacheMap;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmMemory_createCacheMapOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSimCodeVars, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_integer _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iSchedule, modelica_metatype _iSchedulerInfo, modelica_integer _iNumberOfThreads, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_integer *out_oNumCL)
{
  modelica_metatype _oCacheMap = NULL;
  modelica_metatype _oScVarCLMapping = NULL;
  modelica_integer _oNumCL;
  modelica_metatype _cacheMap = NULL;
  modelica_metatype _scVarCLMapping = NULL;
  modelica_integer _numCL;
  modelica_metatype _tasksOfLevels = NULL;
  modelica_metatype _scheduleInfo = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _allTasks = NULL;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCacheMap has no default value.
  // _oScVarCLMapping has no default value.
  // _oNumCL has no default value.
  // _cacheMap has no default value.
  // _scVarCLMapping has no default value.
  // _numCL has no default value.
  // _tasksOfLevels has no default value.
  // _scheduleInfo has no default value.
  // _threadTasks has no default value.
  // _allTasks has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iSchedule;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (1 /* true */ != tmp8) goto tmp3_end;
          _tasksOfLevels = tmpMeta6;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT103),stdout);

          _scheduleInfo = omc_HpcOmScheduler_convertScheduleStrucToInfo(threadData, _iSchedule, arrayLength(_iTaskGraph));
          tmpMeta[0+0] = omc_HpcOmMemory_createCacheMapLevelFixedOptimized(threadData, _iTaskGraph, _iTaskGraphMeta, _iAllSCVarsMapping, _iSimCodeVarTypes, _iScVarSolvedTaskMapping, _iScVarUnsolvedTaskMapping, _iCacheLineSize, _iAllComponents, _tasksOfLevels, _iNumberOfThreads, _scheduleInfo, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iScVarInfos, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _threadTasks = tmpMeta9;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT104),stdout);

          _scheduleInfo = omc_HpcOmScheduler_convertScheduleStrucToInfo(threadData, _iSchedule, arrayLength(_iTaskGraph));
          tmpMeta[0+0] = omc_HpcOmMemory_createCacheMapThreadOptimized(threadData, _iTaskGraph, _iTaskGraphMeta, _iAllSCVarsMapping, _iSimCodeVarTypes, _iScVarSolvedTaskMapping, _iScVarUnsolvedTaskMapping, _iCacheLineSize, _iAllComponents, _threadTasks, _iNumberOfThreads, _scheduleInfo, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iScVarInfos, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          
          _allTasks = tmpMeta11;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT105),stdout);

          _threadTasks = arrayCreate(((modelica_integer) 1), _allTasks);

          _scheduleInfo = omc_HpcOmScheduler_convertScheduleStrucToInfo(threadData, _iSchedule, arrayLength(_iTaskGraph));
          tmpMeta[0+0] = omc_HpcOmMemory_createCacheMapThreadOptimized(threadData, _iTaskGraph, _iTaskGraphMeta, _iAllSCVarsMapping, _iSimCodeVarTypes, _iScVarSolvedTaskMapping, _iScVarUnsolvedTaskMapping, _iCacheLineSize, _iAllComponents, _threadTasks, ((modelica_integer) 1), _scheduleInfo, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iScVarInfos, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT106),stdout);
          tmpMeta[0+0] = omc_HpcOmMemory_createCacheMapDefault(threadData, _iAllSCVarsMapping, _iCacheLineSize, _iSimCodeVars, _iScVarSolvedTaskMapping, _iSchedulerInfo, _iSimCodeVarTypes, &tmpMeta[0+1], &tmp1_c2);
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
  _oCacheMap = tmpMeta[0+0];
  _oScVarCLMapping = tmpMeta[0+1];
  _oNumCL = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_oScVarCLMapping) { *out_oScVarCLMapping = _oScVarCLMapping; }
  if (out_oNumCL) { *out_oNumCL = _oNumCL; }
  return _oCacheMap;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmMemory_createCacheMapOptimized(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSimCodeVars, modelica_metatype _iAllSCVarsMapping, modelica_metatype _iSimCodeVarTypes, modelica_metatype _iScVarSolvedTaskMapping, modelica_metatype _iScVarUnsolvedTaskMapping, modelica_metatype _iCacheLineSize, modelica_metatype _iAllComponents, modelica_metatype _iSchedule, modelica_metatype _iSchedulerInfo, modelica_metatype _iNumberOfThreads, modelica_metatype _iTaskSolvedVarsMapping, modelica_metatype _iTaskUnsolvedVarsMapping, modelica_metatype _iScVarInfos, modelica_metatype *out_oScVarCLMapping, modelica_metatype *out_oNumCL)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oNumCL;
  modelica_metatype _oCacheMap = NULL;
  tmp1 = mmc_unbox_integer(_iCacheLineSize);
  tmp2 = mmc_unbox_integer(_iNumberOfThreads);
  _oCacheMap = omc_HpcOmMemory_createCacheMapOptimized(threadData, _iTaskGraph, _iTaskGraphMeta, _iSimCodeVars, _iAllSCVarsMapping, _iSimCodeVarTypes, _iScVarSolvedTaskMapping, _iScVarUnsolvedTaskMapping, tmp1, _iAllComponents, _iSchedule, _iSchedulerInfo, tmp2, _iTaskSolvedVarsMapping, _iTaskUnsolvedVarsMapping, _iScVarInfos, out_oScVarCLMapping, &_oNumCL);
  /* skip box _oCacheMap; HpcOmMemory.CacheMap */
  /* skip box _oScVarCLMapping; array<tuple<#Integer, #Integer>> */
  if (out_oNumCL) { *out_oNumCL = mmc_mk_icon(_oNumCL); }
  return _oCacheMap;
}

static void closure18_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static void closure19_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static void closure20_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static void closure21_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static void closure22_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static void closure23_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static void closure24_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static void closure25_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static void closure26_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static void closure27_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static void closure28_Array_updateIndexFirst(threadData_t *thData, modelica_metatype closure, modelica_metatype inIndex)
{
  modelica_metatype inValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_Array_updateIndexFirst(thData, inIndex, inValue, inArray);
}static modelica_metatype closure29_arrayGet(threadData_t *thData, modelica_metatype closure, modelica_metatype index)
{
  modelica_metatype arr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_arrayGet(thData, arr, index);
}static modelica_metatype closure30_arrayGet(threadData_t *thData, modelica_metatype closure, modelica_metatype index)
{
  modelica_metatype arr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_arrayGet(thData, arr, index);
}static modelica_metatype closure31_arrayGet(threadData_t *thData, modelica_metatype closure, modelica_metatype index)
{
  modelica_metatype arr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_arrayGet(thData, arr, index);
}static modelica_metatype closure32_arrayGet(threadData_t *thData, modelica_metatype closure, modelica_metatype index)
{
  modelica_metatype arr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_arrayGet(thData, arr, index);
}
DLLDirection
modelica_metatype omc_HpcOmMemory_createMemoryMap(threadData_t *threadData, modelica_metatype _iModelInfo, modelica_metatype _iVarToArrayIndexMapping, modelica_metatype _iVarToIndexMapping, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _iEqSystems, modelica_string _iFileNamePrefix, modelica_metatype _iSchedulerInfo, modelica_metatype _iSchedule, modelica_metatype _iSccSimEqMapping, modelica_metatype _iCriticalPaths, modelica_metatype _iCriticalPathsWoC, modelica_string _iCriticalPathInfo, modelica_integer _iNumberOfThreads, modelica_metatype _iAllComponents, modelica_boolean _isInitial, modelica_metatype *out_oVarToArrayIndexMapping, modelica_metatype *out_oVarToIndexMapping)
{
  modelica_metatype _oMemoryMap = NULL;
  modelica_metatype _oVarToArrayIndexMapping = NULL;
  modelica_metatype _oVarToIndexMapping = NULL;
  modelica_metatype _simCodeVars = NULL;
  modelica_metatype _stateVars = NULL;
  modelica_metatype _derivativeVars = NULL;
  modelica_metatype _algVars = NULL;
  modelica_metatype _discreteAlgVars = NULL;
  modelica_metatype _intAlgVars = NULL;
  modelica_metatype _boolAlgVars = NULL;
  modelica_metatype _stringAlgVars = NULL;
  modelica_metatype _inputVars = NULL;
  modelica_metatype _outputVars = NULL;
  modelica_metatype _aliasVars = NULL;
  modelica_metatype _paramVars = NULL;
  modelica_metatype _intParamVars = NULL;
  modelica_metatype _boolParamVars = NULL;
  modelica_metatype _stringParamVars = NULL;
  modelica_metatype _intAliasVars = NULL;
  modelica_metatype _boolAliasVars = NULL;
  modelica_metatype _stringAliasVars = NULL;
  modelica_metatype _notOptimizedVarsFloatOpt = NULL;
  modelica_metatype _notOptimizedVarsIntOpt = NULL;
  modelica_metatype _notOptimizedVarsBoolOpt = NULL;
  modelica_metatype _notOptimizedVarsStringOpt = NULL;
  modelica_metatype _notOptimizedVarsFloat = NULL;
  modelica_metatype _notOptimizedVarsInt = NULL;
  modelica_metatype _notOptimizedVarsBool = NULL;
  modelica_metatype _notOptimizedVarsString = NULL;
  modelica_metatype _notOptimizedVars = NULL;
  modelica_metatype _allVarsMapping = NULL;
  modelica_metatype _simVarIdxMappingHashTable = NULL;
  modelica_integer _numCL;
  modelica_integer _threadAttIdx;
  modelica_metatype _clTaskMapping = NULL;
  modelica_metatype _scVarSolvedTaskMapping = NULL;
  modelica_metatype _sccNodeMapping = NULL;
  modelica_metatype _scVarUnsolvedTaskMapping = NULL;
  modelica_metatype _annotInfo = NULL;
  modelica_metatype _scVarCLMapping = NULL;
  modelica_metatype _cacheMap = NULL;
  modelica_integer _graphIdx;
  modelica_metatype _graphInfo = NULL;
  modelica_string _fileName = NULL;
  modelica_metatype _eqSimCodeVarMapping = NULL;
  modelica_metatype _eqCompMapping = NULL;
  modelica_metatype _varCompMapping = NULL;
  modelica_metatype _adjacencyMatrix = NULL;
  modelica_metatype _tmpMemoryMapOpt = NULL;
  modelica_integer _varCount;
  modelica_integer _stateVarsCnt;
  modelica_integer _derivativeVarsCnt;
  modelica_integer _algVarsCnt;
  modelica_integer _discreteAlgVarsCnt;
  modelica_integer _intAlgVarsCnt;
  modelica_integer _boolAlgVarsCnt;
  modelica_integer _stringAlgVarsCnt;
  modelica_integer _inputVarsCnt;
  modelica_integer _outputVarsCnt;
  modelica_integer _aliasVarsCnt;
  modelica_integer _intAliasVarsCnt;
  modelica_integer _boolAliasVarsCnt;
  modelica_integer _stringAliasVarsCnt;
  modelica_integer _paramVarsCnt;
  modelica_integer _intParamVarsCnt;
  modelica_integer _boolParamVarsCnt;
  modelica_integer _stringParamVarsCnt;
  modelica_integer _VARSIZE_FLOAT;
  modelica_integer _VARSIZE_INTEGER;
  modelica_integer _VARSIZE_BOOLEAN;
  modelica_integer _VARSIZE_STRING;
  modelica_integer _CACHELINE_SIZE;
  modelica_metatype _simCodeVarTypes = NULL;
  modelica_metatype _taskSolvedVarsMapping = NULL;
  modelica_metatype _taskUnsolvedVarsMapping = NULL;
  modelica_metatype _nodeSccMapping = NULL;
  modelica_metatype _flatEqSimCodeVarMapping = NULL;
  modelica_metatype _sccEqMapping = NULL;
  modelica_metatype _scVarInfos = NULL;
  modelica_metatype _varToArrayIndexMapping = NULL;
  modelica_metatype _varToIndexMapping = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oMemoryMap has no default value.
  // _oVarToArrayIndexMapping has no default value.
  // _oVarToIndexMapping has no default value.
  // _simCodeVars has no default value.
  // _stateVars has no default value.
  // _derivativeVars has no default value.
  // _algVars has no default value.
  // _discreteAlgVars has no default value.
  // _intAlgVars has no default value.
  // _boolAlgVars has no default value.
  // _stringAlgVars has no default value.
  // _inputVars has no default value.
  // _outputVars has no default value.
  // _aliasVars has no default value.
  // _paramVars has no default value.
  // _intParamVars has no default value.
  // _boolParamVars has no default value.
  // _stringParamVars has no default value.
  // _intAliasVars has no default value.
  // _boolAliasVars has no default value.
  // _stringAliasVars has no default value.
  // _notOptimizedVarsFloatOpt has no default value.
  // _notOptimizedVarsIntOpt has no default value.
  // _notOptimizedVarsBoolOpt has no default value.
  // _notOptimizedVarsStringOpt has no default value.
  // _notOptimizedVarsFloat has no default value.
  // _notOptimizedVarsInt has no default value.
  // _notOptimizedVarsBool has no default value.
  // _notOptimizedVarsString has no default value.
  // _notOptimizedVars has no default value.
  // _allVarsMapping has no default value.
  // _simVarIdxMappingHashTable has no default value.
  // _numCL has no default value.
  // _threadAttIdx has no default value.
  // _clTaskMapping has no default value.
  // _scVarSolvedTaskMapping has no default value.
  // _sccNodeMapping has no default value.
  // _scVarUnsolvedTaskMapping has no default value.
  // _annotInfo has no default value.
  // _scVarCLMapping has no default value.
  // _cacheMap has no default value.
  // _graphIdx has no default value.
  // _graphInfo has no default value.
  // _fileName has no default value.
  // _eqSimCodeVarMapping has no default value.
  // _eqCompMapping has no default value.
  // _varCompMapping has no default value.
  // _adjacencyMatrix has no default value.
  // _tmpMemoryMapOpt has no default value.
  // _varCount has no default value.
  // _stateVarsCnt has no default value.
  // _derivativeVarsCnt has no default value.
  // _algVarsCnt has no default value.
  // _discreteAlgVarsCnt has no default value.
  // _intAlgVarsCnt has no default value.
  // _boolAlgVarsCnt has no default value.
  // _stringAlgVarsCnt has no default value.
  // _inputVarsCnt has no default value.
  // _outputVarsCnt has no default value.
  // _aliasVarsCnt has no default value.
  // _intAliasVarsCnt has no default value.
  // _boolAliasVarsCnt has no default value.
  // _stringAliasVarsCnt has no default value.
  // _paramVarsCnt has no default value.
  // _intParamVarsCnt has no default value.
  // _boolParamVarsCnt has no default value.
  // _stringParamVarsCnt has no default value.
  // _VARSIZE_FLOAT has no default value.
  // _VARSIZE_INTEGER has no default value.
  // _VARSIZE_BOOLEAN has no default value.
  // _VARSIZE_STRING has no default value.
  // _CACHELINE_SIZE has no default value.
  // _simCodeVarTypes has no default value.
  // _taskSolvedVarsMapping has no default value.
  // _taskUnsolvedVarsMapping has no default value.
  // _nodeSccMapping has no default value.
  // _flatEqSimCodeVarMapping has no default value.
  // _sccEqMapping has no default value.
  // _scVarInfos has no default value.
  // _varToArrayIndexMapping has no default value.
  // _varToIndexMapping has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _iVarToArrayIndexMapping;
    tmp4_2 = _iVarToIndexMapping;
    tmp4_3 = _iTaskGraphMeta;
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
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
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
          modelica_integer tmp56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_integer tmp60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_integer tmp65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_integer tmp72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_integer tmp77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          
          _varToArrayIndexMapping = tmp4_1;
          _varToIndexMapping = tmp4_2;
          _varCompMapping = tmpMeta6;
          _eqCompMapping = tmpMeta7;
          /* Pattern matching succeeded */
          _VARSIZE_FLOAT = ((modelica_integer) 8);

          _VARSIZE_INTEGER = ((modelica_integer) 4);

          _VARSIZE_BOOLEAN = ((modelica_integer) 1);

          _VARSIZE_STRING = ((modelica_integer) 4);

          _CACHELINE_SIZE = ((modelica_integer) 64);

          /* Pattern-matching assignment */
          tmpMeta8 = _iModelInfo;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 11));
          _simCodeVars = tmpMeta9;

          /* Pattern-matching assignment */
          tmpMeta10 = _simCodeVars;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 5));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 6));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 7));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 8));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 9));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 10));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 11));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 12));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 13));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 14));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 15));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 16));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 17));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 18));
          _stateVars = tmpMeta11;
          _derivativeVars = tmpMeta12;
          _algVars = tmpMeta13;
          _discreteAlgVars = tmpMeta14;
          _intAlgVars = tmpMeta15;
          _boolAlgVars = tmpMeta16;
          _inputVars = tmpMeta17;
          _outputVars = tmpMeta18;
          _aliasVars = tmpMeta19;
          _intAliasVars = tmpMeta20;
          _boolAliasVars = tmpMeta21;
          _paramVars = tmpMeta22;
          _intParamVars = tmpMeta23;
          _boolParamVars = tmpMeta24;
          _stringAlgVars = tmpMeta25;
          _stringParamVars = tmpMeta26;
          _stringAliasVars = tmpMeta27;

          _allVarsMapping = omc_SimCodeUtil_createIdxSCVarMapping(threadData, _simCodeVars);

          _simVarIdxMappingHashTable = omc_HashTableCrILst_emptyHashTableSized(threadData, ((modelica_integer) 25343));

          _varCount = ((modelica_integer) 0);

          _stateVarsCnt = listLength(_stateVars);

          _varCount = _varCount + _stateVarsCnt;

          _derivativeVarsCnt = listLength(_derivativeVars);

          _varCount = _varCount + _derivativeVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _algVars, _varCount, ((modelica_integer) 1), _simVarIdxMappingHashTable);

          _algVarsCnt = listLength(_algVars);

          _varCount = _varCount + _algVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _discreteAlgVars, _varCount, ((modelica_integer) 1), _simVarIdxMappingHashTable);

          _discreteAlgVarsCnt = listLength(_discreteAlgVars);

          _varCount = _varCount + _discreteAlgVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _intAlgVars, _varCount, ((modelica_integer) 2), _simVarIdxMappingHashTable);

          _intAlgVarsCnt = listLength(_intAlgVars);

          _varCount = _varCount + _intAlgVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _boolAlgVars, _varCount, ((modelica_integer) 3), _simVarIdxMappingHashTable);

          _boolAlgVarsCnt = listLength(_boolAlgVars);

          _varCount = _varCount + _boolAlgVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _stringAlgVars, _varCount, ((modelica_integer) 4), _simVarIdxMappingHashTable);

          _stringAlgVarsCnt = listLength(_stringAlgVars);

          _varCount = _varCount + _stringAlgVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _inputVars, _varCount, ((modelica_integer) 1), _simVarIdxMappingHashTable);

          _inputVarsCnt = listLength(_inputVars);

          _varCount = _varCount + _inputVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _outputVars, _varCount, ((modelica_integer) 1), _simVarIdxMappingHashTable);

          _outputVarsCnt = listLength(_outputVars);

          _varCount = _varCount + _outputVarsCnt;

          _aliasVarsCnt = listLength(_aliasVars);

          _varCount = _varCount + _aliasVarsCnt;

          _intAliasVarsCnt = listLength(_intAliasVars);

          _varCount = _varCount + _intAliasVarsCnt;

          _boolAliasVarsCnt = listLength(_boolAliasVars);

          _varCount = _varCount + _boolAliasVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _stringAliasVars, _varCount, ((modelica_integer) 4), _simVarIdxMappingHashTable);

          _stringAliasVarsCnt = listLength(_stringAliasVars);

          _varCount = _varCount + _stringAliasVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _paramVars, _varCount, ((modelica_integer) 1), _simVarIdxMappingHashTable);

          _paramVarsCnt = listLength(_paramVars);

          _varCount = _varCount + _paramVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _intParamVars, _varCount, ((modelica_integer) 2), _simVarIdxMappingHashTable);

          _intParamVarsCnt = listLength(_intParamVars);

          _varCount = _varCount + _intParamVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _boolParamVars, _varCount, ((modelica_integer) 3), _simVarIdxMappingHashTable);

          _boolParamVarsCnt = listLength(_boolParamVars);

          _varCount = _varCount + _boolParamVarsCnt;

          _simVarIdxMappingHashTable = omc_HpcOmMemory_fillSimVarHashTable(threadData, _stringParamVars, _varCount, ((modelica_integer) 4), _simVarIdxMappingHashTable);

          _stringParamVarsCnt = listLength(_stringParamVars);

          _varCount = _varCount + _stringParamVarsCnt;

          _simCodeVarTypes = arrayCreate(_varCount, _OMC_LIT107);

          _varCount = ((modelica_integer) 0);

          _varCount = _varCount + _stateVarsCnt;

          _varCount = _varCount + _derivativeVarsCnt;

          if((_algVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta29 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_VARSIZE_FLOAT), mmc_mk_integer(((modelica_integer) 5)));
            tmpMeta28 = mmc_mk_box2(0, tmpMeta29, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _algVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure18_Array_updateIndexFirst,tmpMeta28));
          }

          _varCount = _varCount + _algVarsCnt;

          if((_discreteAlgVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta31 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_VARSIZE_FLOAT), mmc_mk_integer(((modelica_integer) 5)));
            tmpMeta30 = mmc_mk_box2(0, tmpMeta31, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _discreteAlgVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure19_Array_updateIndexFirst,tmpMeta30));
          }

          _varCount = _varCount + _discreteAlgVarsCnt;

          if((_intAlgVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta33 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 2)), mmc_mk_integer(_VARSIZE_INTEGER), mmc_mk_integer(((modelica_integer) 5)));
            tmpMeta32 = mmc_mk_box2(0, tmpMeta33, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _intAlgVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure20_Array_updateIndexFirst,tmpMeta32));
          }

          _varCount = _varCount + _intAlgVarsCnt;

          if((_boolAlgVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta35 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 3)), mmc_mk_integer(_VARSIZE_BOOLEAN), mmc_mk_integer(((modelica_integer) 5)));
            tmpMeta34 = mmc_mk_box2(0, tmpMeta35, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _boolAlgVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure21_Array_updateIndexFirst,tmpMeta34));
          }

          _varCount = _varCount + _boolAlgVarsCnt;

          if((_stringAlgVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta37 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 4)), mmc_mk_integer(_VARSIZE_STRING), mmc_mk_integer(((modelica_integer) 5)));
            tmpMeta36 = mmc_mk_box2(0, tmpMeta37, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _stringAlgVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure22_Array_updateIndexFirst,tmpMeta36));
          }

          _varCount = _varCount + _stringAlgVarsCnt;

          if((_inputVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta39 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_VARSIZE_FLOAT), mmc_mk_integer(((modelica_integer) 5)));
            tmpMeta38 = mmc_mk_box2(0, tmpMeta39, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _inputVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure23_Array_updateIndexFirst,tmpMeta38));
          }

          _varCount = _varCount + _inputVarsCnt;

          if((_outputVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta41 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_VARSIZE_FLOAT), mmc_mk_integer(((modelica_integer) 5)));
            tmpMeta40 = mmc_mk_box2(0, tmpMeta41, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _outputVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure24_Array_updateIndexFirst,tmpMeta40));
          }

          _varCount = _varCount + _outputVarsCnt;

          _varCount = _varCount + _aliasVarsCnt;

          _varCount = _varCount + _intAliasVarsCnt;

          _varCount = _varCount + _boolAliasVarsCnt;

          _varCount = _varCount + _stringAliasVarsCnt;

          if((_paramVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta43 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_VARSIZE_FLOAT), mmc_mk_integer(((modelica_integer) 3)));
            tmpMeta42 = mmc_mk_box2(0, tmpMeta43, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _paramVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure25_Array_updateIndexFirst,tmpMeta42));
          }

          _varCount = _varCount + _paramVarsCnt;

          if((_intParamVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta45 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 2)), mmc_mk_integer(_VARSIZE_INTEGER), mmc_mk_integer(((modelica_integer) 3)));
            tmpMeta44 = mmc_mk_box2(0, tmpMeta45, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _intParamVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure26_Array_updateIndexFirst,tmpMeta44));
          }

          _varCount = _varCount + _intParamVarsCnt;

          if((_boolParamVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta47 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 3)), mmc_mk_integer(_VARSIZE_BOOLEAN), mmc_mk_integer(((modelica_integer) 3)));
            tmpMeta46 = mmc_mk_box2(0, tmpMeta47, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _boolParamVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure27_Array_updateIndexFirst,tmpMeta46));
          }

          _varCount = _varCount + _boolParamVarsCnt;

          if((_stringParamVarsCnt > ((modelica_integer) 0)))
          {
            tmpMeta49 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 4)), mmc_mk_integer(_VARSIZE_STRING), mmc_mk_integer(((modelica_integer) 3)));
            tmpMeta48 = mmc_mk_box2(0, tmpMeta49, _simCodeVarTypes);
            omc_List_map__0(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _varCount, _varCount + _stringParamVarsCnt), (modelica_fnptr) mmc_mk_box2(0,closure28_Array_updateIndexFirst,tmpMeta48));
          }

          _varCount = _varCount + _stringParamVarsCnt;

          _sccNodeMapping = omc_HpcOmTaskGraph_getSccNodeMapping(threadData, arrayLength(_iSccSimEqMapping), _iTaskGraphMeta);

          _scVarSolvedTaskMapping = omc_HpcOmMemory_getSimCodeVarNodeMapping(threadData, _iTaskGraphMeta, _iEqSystems, _varCount, _sccNodeMapping, _simVarIdxMappingHashTable);

          _eqSimCodeVarMapping = omc_HpcOmMemory_getEqSCVarMapping(threadData, _iEqSystems, _simVarIdxMappingHashTable);

          _sccEqMapping = omc_HpcOmMemory_invertEqCompMapping(threadData, _eqCompMapping, arrayLength(_sccNodeMapping));

          _nodeSccMapping = omc_HpcOmMemory_invertSccNodeMapping(threadData, _sccNodeMapping, arrayLength(_iTaskGraph));

          _flatEqSimCodeVarMapping = omc_HpcOmMemory_flattenEqSimCodeVarMapping(threadData, _eqSimCodeVarMapping);

          _taskSolvedVarsMapping = omc_HpcOmMemory_getTaskSimVarMapping(threadData, _sccEqMapping, _nodeSccMapping, _flatEqSimCodeVarMapping, _scVarSolvedTaskMapping, _simCodeVarTypes ,&_taskUnsolvedVarsMapping);

          _scVarUnsolvedTaskMapping = omc_HpcOmMemory_transposeTasksScVarsMapping(threadData, _taskUnsolvedVarsMapping, _varCount);

          _scVarInfos = omc_HpcOmMemory_createVarInfos(threadData, _scVarSolvedTaskMapping, _scVarUnsolvedTaskMapping, _iSchedulerInfo);

          if(omc_Flags_isSet(threadData, _OMC_LIT110))
          {
            _cacheMap = omc_HpcOmMemory_createCacheMapOptimized(threadData, _iTaskGraph, _iTaskGraphMeta, _simCodeVars, _allVarsMapping, _simCodeVarTypes, _scVarSolvedTaskMapping, _scVarUnsolvedTaskMapping, _CACHELINE_SIZE, _iAllComponents, _iSchedule, _iSchedulerInfo, _iNumberOfThreads, _taskSolvedVarsMapping, _taskUnsolvedVarsMapping, _scVarInfos ,&_scVarCLMapping ,&_numCL);
          }
          else
          {
            _cacheMap = omc_HpcOmMemory_createCacheMapDefault(threadData, _allVarsMapping, _CACHELINE_SIZE, _simCodeVars, _scVarSolvedTaskMapping, _iSchedulerInfo, _simCodeVarTypes ,&_scVarCLMapping ,&_numCL);
          }

          _clTaskMapping = omc_HpcOmMemory_getCacheLineTaskMapping(threadData, _iTaskGraphMeta, _iEqSystems, _simVarIdxMappingHashTable, _numCL, _scVarCLMapping, NULL);

          _notOptimizedVars = omc_HpcOmMemory_getNotOptimizedVarsByCacheLineMapping(threadData, _scVarCLMapping, _allVarsMapping, _simCodeVarTypes);

          tmpMeta50 = mmc_mk_box1(0, _allVarsMapping);
          _notOptimizedVarsFloatOpt = omc_List_map(threadData, omc_Util_tuple41(threadData, _notOptimizedVars), (modelica_fnptr) mmc_mk_box2(0,closure29_arrayGet,tmpMeta50));

          tmpMeta51 = mmc_mk_box1(0, _allVarsMapping);
          _notOptimizedVarsIntOpt = omc_List_map(threadData, omc_Util_tuple42(threadData, _notOptimizedVars), (modelica_fnptr) mmc_mk_box2(0,closure30_arrayGet,tmpMeta51));

          tmpMeta52 = mmc_mk_box1(0, _allVarsMapping);
          _notOptimizedVarsBoolOpt = omc_List_map(threadData, omc_Util_tuple43(threadData, _notOptimizedVars), (modelica_fnptr) mmc_mk_box2(0,closure31_arrayGet,tmpMeta52));

          tmpMeta53 = mmc_mk_box1(0, _allVarsMapping);
          _notOptimizedVarsStringOpt = omc_List_map(threadData, omc_Util_tuple44(threadData, _notOptimizedVars), (modelica_fnptr) mmc_mk_box2(0,closure32_arrayGet,tmpMeta53));

          _notOptimizedVarsFloat = omc_List_map(threadData, _notOptimizedVarsFloatOpt, boxvar_Util_getOption);

          _notOptimizedVarsInt = omc_List_map(threadData, _notOptimizedVarsIntOpt, boxvar_Util_getOption);

          _notOptimizedVarsBool = omc_List_map(threadData, _notOptimizedVarsBoolOpt, boxvar_Util_getOption);

          _notOptimizedVarsString = omc_List_map(threadData, _notOptimizedVarsStringOpt, boxvar_Util_getOption);

          _graphInfo = omc_GraphML_createGraphInfo(threadData);

          /* Pattern-matching tuple assignment */
          tmpMeta57 = omc_GraphML_addGraph(threadData, _OMC_LIT111, 1 /* true */, _graphInfo, &tmpMeta54);
          _graphInfo = tmpMeta57;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 2));
          tmp56 = mmc_unbox_integer(tmpMeta55);
          _graphIdx = tmp56  /* pattern as ty=Integer */;

          /* Pattern-matching tuple assignment */
          tmpMeta61 = omc_GraphML_addGroupNode(threadData, _OMC_LIT112, _graphIdx, 0 /* false */, _OMC_LIT113, _graphInfo, NULL, &tmpMeta58);
          _graphInfo = tmpMeta61;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta58), 2));
          tmp60 = mmc_unbox_integer(tmpMeta59);
          _graphIdx = tmp60  /* pattern as ty=Integer */;

          _annotInfo = arrayCreate(arrayLength(_iTaskGraph), _OMC_LIT114);

          _graphInfo = omc_HpcOmTaskGraph_convertToGraphMLSccLevelSubgraph(threadData, _iTaskGraph, _iTaskGraphMeta, _iCriticalPathInfo, omc_HpcOmTaskGraph_convertNodeListToEdgeTuples(threadData, listHead(_iCriticalPaths)), omc_HpcOmTaskGraph_convertNodeListToEdgeTuples(threadData, listHead(_iCriticalPathsWoC)), _iSccSimEqMapping, _iSchedulerInfo, _annotInfo, _graphIdx, _OMC_LIT115, _graphInfo);

          /* Pattern-matching assignment */
          tmpMeta62 = omc_GraphML_getAttributeByNameAndTarget(threadData, _OMC_LIT116, _OMC_LIT117, _graphInfo);
          if (optionNone(tmpMeta62)) goto goto_2;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta62), 1));
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 2));
          tmp65 = mmc_unbox_integer(tmpMeta64);
          _threadAttIdx = tmp65  /* pattern as ty=Integer */;

          omc_BackendDAEUtil_getAdjacencyMatrix(threadData, listHead(_iEqSystems), _OMC_LIT118, mmc_mk_none(), _isInitial ,&_adjacencyMatrix ,NULL);

          _graphInfo = omc_HpcOmMemory_appendCacheLinesToGraph(threadData, _cacheMap, arrayLength(_iTaskGraph), _eqSimCodeVarMapping, _iEqSystems, _simVarIdxMappingHashTable, _eqCompMapping, _scVarSolvedTaskMapping, _iSchedulerInfo, _threadAttIdx, _sccNodeMapping, _taskSolvedVarsMapping, _taskUnsolvedVarsMapping, _scVarCLMapping, _scVarInfos, _graphInfo);

          tmpMeta66 = stringAppend(_OMC_LIT119,_iFileNamePrefix);
          tmpMeta67 = stringAppend(tmpMeta66,_OMC_LIT120);
          _fileName = tmpMeta67;

          omc_GraphML_dumpGraph(threadData, _graphInfo, _fileName);

          if(omc_Flags_isSet(threadData, _OMC_LIT110))
          {
            tmpMeta68 = mmc_mk_box3(0, mmc_mk_integer(_VARSIZE_FLOAT), mmc_mk_integer(_VARSIZE_INTEGER), mmc_mk_integer(_VARSIZE_BOOLEAN));
            tmpMeta69 = mmc_mk_box4(0, _notOptimizedVarsFloat, _notOptimizedVarsInt, _notOptimizedVarsBool, _notOptimizedVarsString);
            _varToArrayIndexMapping = omc_HpcOmMemory_convertCacheToVarArrayMapping(threadData, _cacheMap, _CACHELINE_SIZE, _stateVars, _derivativeVars, _aliasVars, _intAliasVars, _boolAliasVars, _stringAliasVars, tmpMeta68, tmpMeta69 ,&_varToIndexMapping ,&_tmpMemoryMapOpt);
          }
          else
          {
            _tmpMemoryMapOpt = mmc_mk_none();
          }

          omc_HpcOmMemory_evaluateCacheBehaviour(threadData, _varToIndexMapping, _simVarIdxMappingHashTable, _taskSolvedVarsMapping, _taskUnsolvedVarsMapping, _iTaskGraph, _iTaskGraphT, _iNumberOfThreads, _CACHELINE_SIZE, _simCodeVarTypes, _iSchedulerInfo);

          _graphInfo = omc_GraphML_createGraphInfo(threadData);

          /* Pattern-matching tuple assignment */
          tmpMeta73 = omc_GraphML_addGraph(threadData, _OMC_LIT111, 1 /* true */, _graphInfo, &tmpMeta70);
          _graphInfo = tmpMeta73;
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta70), 2));
          tmp72 = mmc_unbox_integer(tmpMeta71);
          _graphIdx = tmp72  /* pattern as ty=Integer */;

          _annotInfo = arrayCreate(arrayLength(_iTaskGraph), _OMC_LIT114);

          _graphInfo = omc_HpcOmTaskGraph_convertToGraphMLSccLevelSubgraph(threadData, _iTaskGraph, _iTaskGraphMeta, _iCriticalPathInfo, omc_HpcOmTaskGraph_convertNodeListToEdgeTuples(threadData, listHead(_iCriticalPaths)), omc_HpcOmTaskGraph_convertNodeListToEdgeTuples(threadData, listHead(_iCriticalPathsWoC)), _iSccSimEqMapping, _iSchedulerInfo, _annotInfo, _graphIdx, _OMC_LIT115, _graphInfo);

          /* Pattern-matching assignment */
          tmpMeta74 = omc_GraphML_getAttributeByNameAndTarget(threadData, _OMC_LIT116, _OMC_LIT117, _graphInfo);
          if (optionNone(tmpMeta74)) goto goto_2;
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta74), 1));
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta75), 2));
          tmp77 = mmc_unbox_integer(tmpMeta76);
          _threadAttIdx = tmp77  /* pattern as ty=Integer */;

          _graphInfo = omc_HpcOmMemory_appendVariablesToGraph(threadData, _taskSolvedVarsMapping, _taskUnsolvedVarsMapping, arrayLength(_scVarSolvedTaskMapping), _graphIdx, _threadAttIdx, _simVarIdxMappingHashTable, _allVarsMapping, _scVarInfos, _graphInfo);

          tmpMeta78 = stringAppend(_OMC_LIT119,_iFileNamePrefix);
          tmpMeta79 = stringAppend(tmpMeta78,_OMC_LIT121);
          _fileName = tmpMeta79;

          omc_GraphML_dumpGraph(threadData, _graphInfo, _fileName);
          tmpMeta[0+0] = _tmpMemoryMapOpt;
          tmpMeta[0+1] = _varToArrayIndexMapping;
          tmpMeta[0+2] = _varToIndexMapping;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT122, _OMC_LIT123);
          tmpMeta[0+0] = mmc_mk_none();
          tmpMeta[0+1] = _iVarToArrayIndexMapping;
          tmpMeta[0+2] = _iVarToIndexMapping;
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
  _oMemoryMap = tmpMeta[0+0];
  _oVarToArrayIndexMapping = tmpMeta[0+1];
  _oVarToIndexMapping = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_oVarToArrayIndexMapping) { *out_oVarToArrayIndexMapping = _oVarToArrayIndexMapping; }
  if (out_oVarToIndexMapping) { *out_oVarToIndexMapping = _oVarToIndexMapping; }
  return _oMemoryMap;
}
modelica_metatype boxptr_HpcOmMemory_createMemoryMap(threadData_t *threadData, modelica_metatype _iModelInfo, modelica_metatype _iVarToArrayIndexMapping, modelica_metatype _iVarToIndexMapping, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _iEqSystems, modelica_metatype _iFileNamePrefix, modelica_metatype _iSchedulerInfo, modelica_metatype _iSchedule, modelica_metatype _iSccSimEqMapping, modelica_metatype _iCriticalPaths, modelica_metatype _iCriticalPathsWoC, modelica_metatype _iCriticalPathInfo, modelica_metatype _iNumberOfThreads, modelica_metatype _iAllComponents, modelica_metatype _isInitial, modelica_metatype *out_oVarToArrayIndexMapping, modelica_metatype *out_oVarToIndexMapping)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oMemoryMap = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  tmp2 = mmc_unbox_integer(_isInitial);
  _oMemoryMap = omc_HpcOmMemory_createMemoryMap(threadData, _iModelInfo, _iVarToArrayIndexMapping, _iVarToIndexMapping, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _iEqSystems, _iFileNamePrefix, _iSchedulerInfo, _iSchedule, _iSccSimEqMapping, _iCriticalPaths, _iCriticalPathsWoC, _iCriticalPathInfo, tmp1, _iAllComponents, tmp2, out_oVarToArrayIndexMapping, out_oVarToIndexMapping);
  /* skip box _oMemoryMap; Option<HpcOmSimCode.MemoryMap> */
  /* skip box _oVarToArrayIndexMapping; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, tuple<list<#Integer>, array<#Integer>>>>>>, #Integer, tuple<.HashTableCrIListArray.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrIListArray.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrIListArray.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrIListArray.FuncExpStr<function>(tuple<list<#Integer>, array<#Integer>> exp) => String>> */
  /* skip box _oVarToIndexMapping; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, list<#Integer>>>>>, #Integer, tuple<.HashTableCrILst.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrILst.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrILst.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrILst.FuncExpStr<function>(list<#Integer> exp) => String>> */
  return _oMemoryMap;
}

