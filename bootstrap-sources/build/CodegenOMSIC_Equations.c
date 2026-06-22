#include "omc_simulation_settings.h"
#include "CodegenOMSIC_Equations.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,3,3) {&Tpl_Text_MEM__TEXT__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,3) {&Tpl_StringToken_ST__NEW__LINE__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,1) {_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,9,3) {&Tpl_IterOptions_ITER__OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT2,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "if("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,3,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "{\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,1) {_OMC_LIT7,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,1) {_OMC_LIT6,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,4) {&Tpl_BlockType_BT__INDENT__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "TODO: Implement elsewhen"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,24,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,3,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data ";"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "/* ToDo: Add some info that variable was reinitialized */"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,57,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "TODO: when expression not supported yet"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,39,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "TODO: Implement for arrays!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,27,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT24}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data " || "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,4,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,1,1) {_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,9,3) {&Tpl_IterOptions_ITER__OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT28,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,1,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,1,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data " && !"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,5,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data " /* edge */)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,12,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "omsi_status "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,12,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT38}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "_derivativeMatFunc_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,19,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "(struct omsi_function_t* this_function, const omsi_values* model_vars_and_params, void* data);"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,94,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "/*\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,3,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "Description something\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,22,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "*/\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,3,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,1) {_OMC_LIT38,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,1) {_OMC_LIT46,_OMC_LIT47}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {_OMC_LIT45,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,1) {_OMC_LIT44,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT50,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "(struct omsi_function_t* this_function, const omsi_values* model_vars_and_params, void* data){\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,95,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,1,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,2,1) {_OMC_LIT53,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,1) {_OMC_LIT52,_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT55,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "return omsi_ok;\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,16,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,2,1) {_OMC_LIT57,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,1) {_OMC_LIT53,_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT59,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,0,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "this_function, model_vars_and_params"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,36,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,2,1) {_OMC_LIT53,_OMC_LIT54}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT63,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,1,1) {_OMC_LIT64}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,9,3) {&Tpl_IterOptions_ITER__OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT65,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "eqFunction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,10,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,1,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data ");"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,2,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "resFunction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,11,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "new_status = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,13,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT73}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "_algSystFunction_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,17,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data ");\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,3,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "status = (new_status==omsi_ok && status==omsi_ok) ? omsi_ok:new_status;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,71,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,2,1) {_OMC_LIT78,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,1) {_OMC_LIT77,_OMC_LIT79}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,3,6) {&Tpl_StringToken_ST__STRING__LIST__desc,_OMC_LIT80,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "/* equationCall not implemented yet */"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,38,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "*res = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,7,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "NOT IMPLEMENTED YET Error in function equationCStr in template CodegenOMSIC_Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,85,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT86}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "void "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,5,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT88}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,5) {&Tpl_StringToken_ST__LINE__desc,_OMC_LIT44}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,2,5) {&Tpl_StringToken_ST__LINE__desc,_OMC_LIT46}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,2,4) {&Tpl_BlockType_BT__INDENT__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "){\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,3,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,2,5) {&Tpl_StringToken_ST__LINE__desc,_OMC_LIT93}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "/* Variables */\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,16,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,2,5) {&Tpl_StringToken_ST__LINE__desc,_OMC_LIT95}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "omsi_real* res = (omsi_real*) data;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,35,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT98,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT97}};
#define _OMC_LIT98 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "struct omsi_function_t* this_function, const omsi_values* model_vars_and_params, void* data"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,91,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT99}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "struct omsi_function_t* this_function, const omsi_values* model_vars_and_params"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,79,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT101}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT72}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "algSystFunction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,15,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT104}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT106,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT67}};
#define _OMC_LIT106 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "(Data_Struct_something* data, Data_Struct_something* threadData);"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,65,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT107}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
#include "util/modelica.h"

#include "CodegenOMSIC_Equations_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__80(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_metatype __omcQ_24in_5Fa_5FauxFunction, modelica_metatype __omcQ_24in_5Fa_5FvarDecls, modelica_metatype _a_context, modelica_metatype *out_a_auxFunction, modelica_metatype *out_a_varDecls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__80,2,0) {(void*) boxptr_CodegenOMSIC__Equations_lm__80,0}};
#define boxvar_CodegenOMSIC__Equations_lm__80 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__80)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__79(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_stmt, modelica_metatype _in_a_auxFunction, modelica_metatype _in_a_varDecls, modelica_metatype _in_a_context, modelica_metatype *out_out_a_auxFunction, modelica_metatype *out_out_a_varDecls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__79,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__79,0}};
#define boxvar_CodegenOMSIC__Equations_fun__79 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__79)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__78(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_val, modelica_metatype _in_a_context, modelica_metatype _in_a_stateVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__78,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__78,0}};
#define boxvar_CodegenOMSIC__Equations_fun__78 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__78)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__77(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_context, modelica_metatype _in_a_conditions);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenOMSIC__Equations_fun__77(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_context, modelica_metatype _in_a_conditions);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__77,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__77,0}};
#define boxvar_CodegenOMSIC__Equations_fun__77 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__77)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__76(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_metatype _a_context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__76,2,0) {(void*) boxptr_CodegenOMSIC__Equations_lm__76,0}};
#define boxvar_CodegenOMSIC__Equations_lm__76 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__76)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__74(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_column, modelica_string _in_a_index, modelica_metatype _in_a_functionPrototypes, modelica_string _in_a_omsiName, modelica_string _in_a_modelName, modelica_metatype *out_out_a_functionPrototypes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__74,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__74,0}};
#define boxvar_CodegenOMSIC__Equations_fun__74 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__74)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__73(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_string _a_omsiName, modelica_string _a_modelName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__73,2,0) {(void*) boxptr_CodegenOMSIC__Equations_lm__73,0}};
#define boxvar_CodegenOMSIC__Equations_lm__73 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__73)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__71(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_column, modelica_metatype _in_a_functionPrototypes, modelica_string _in_a_modelName, modelica_metatype *out_out_a_functionPrototypes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__71,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__71,0}};
#define boxvar_CodegenOMSIC__Equations_fun__71 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__71)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__70(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_metatype __omcQ_24in_5Fa_5FfunctionPrototypes, modelica_metatype _a_omsiFunction_context, modelica_string _a_modelName, modelica_metatype *out_a_functionPrototypes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__70,2,0) {(void*) boxptr_CodegenOMSIC__Equations_lm__70,0}};
#define boxvar_CodegenOMSIC__Equations_lm__70 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__70)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__68(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_matrix, modelica_string _in_a_omsiName, modelica_metatype _in_a_functionPrototypes, modelica_string _in_a_index, modelica_string _in_a_modelName, modelica_metatype *out_out_a_functionPrototypes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__68,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__68,0}};
#define boxvar_CodegenOMSIC__Equations_fun__68 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__68)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__67(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_string _a_omsiName, modelica_metatype __omcQ_24in_5Fa_5FfunctionPrototypes, modelica_string _a_index, modelica_string _a_modelName, modelica_metatype *out_a_functionPrototypes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__67,2,0) {(void*) boxptr_CodegenOMSIC__Equations_lm__67,0}};
#define boxvar_CodegenOMSIC__Equations_lm__67 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__67)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__65(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_column, modelica_metatype _in_a_auxFunction, modelica_metatype _in_a_varDecls, modelica_metatype _in_a_body, modelica_metatype *out_out_a_auxFunction, modelica_metatype *out_out_a_varDecls, modelica_metatype *out_out_a_body);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__65,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__65,0}};
#define boxvar_CodegenOMSIC__Equations_fun__65 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__65)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__64(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_metatype _a_omsiFunction_context, modelica_metatype __omcQ_24in_5Fa_5FauxFunction, modelica_metatype __omcQ_24in_5Fa_5FvarDecls, modelica_metatype __omcQ_24in_5Fa_5Fbody, modelica_metatype *out_a_auxFunction, modelica_metatype *out_a_varDecls, modelica_metatype *out_a_body);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__64,2,0) {(void*) boxptr_CodegenOMSIC__Equations_lm__64,0}};
#define boxvar_CodegenOMSIC__Equations_lm__64 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__64)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__62(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_matrix, modelica_metatype _in_a_columnsString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__62,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__62,0}};
#define boxvar_CodegenOMSIC__Equations_fun__62 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__62)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__61(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__61,2,0) {(void*) boxptr_CodegenOMSIC__Equations_lm__61,0}};
#define boxvar_CodegenOMSIC__Equations_lm__61 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_lm__61)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__59(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq, modelica_string _in_a_modelNamePrefixStr, modelica_string _in_a_input, modelica_string _in_a_omsiName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__59,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__59,0}};
#define boxvar_CodegenOMSIC__Equations_fun__59 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__59)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__57(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq, modelica_metatype _in_a_auxFunction, modelica_metatype _in_a_varDecls, modelica_metatype _in_a_preExp, modelica_metatype _in_a_context, modelica_metatype *out_out_a_auxFunction, modelica_metatype *out_out_a_varDecls, modelica_metatype *out_out_a_preExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__57,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__57,0}};
#define boxvar_CodegenOMSIC__Equations_fun__57 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__57)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__55(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_varDecls);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenOMSIC__Equations_fun__55(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_varDecls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__55,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__55,0}};
#define boxvar_CodegenOMSIC__Equations_fun__55 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__55)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__54(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__54,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__54,0}};
#define boxvar_CodegenOMSIC__Equations_fun__54 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__54)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__53(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__53,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__53,0}};
#define boxvar_CodegenOMSIC__Equations_fun__53 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__53)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__52(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__52,2,0) {(void*) boxptr_CodegenOMSIC__Equations_fun__52,0}};
#define boxvar_CodegenOMSIC__Equations_fun__52 MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC__Equations_fun__52)

DLLDirection
modelica_metatype omc_CodegenOMSIC__Equations_equationWhen(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq, modelica_metatype _in_a_context, modelica_metatype _in_a_varDecls, modelica_metatype _in_a_auxFunction, modelica_metatype *out_out_a_varDecls, modelica_metatype *out_out_a_auxFunction)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_varDecls = NULL;
  modelica_metatype _out_a_auxFunction = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_varDecls has no default value.
  // _out_a_auxFunction has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;modelica_metatype tmp4_5;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_eq;
    tmp4_3 = _in_a_context;
    tmp4_4 = _in_a_varDecls;
    tmp4_5 = _in_a_auxFunction;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_context = NULL;
      modelica_metatype _a_varDecls = NULL;
      modelica_metatype _a_auxFunction = NULL;
      modelica_metatype _i_whenStmtLst = NULL;
      modelica_metatype _i_conditions = NULL;
      modelica_metatype _l_assign = NULL;
      modelica_boolean _ret_1;
      modelica_metatype _l_helpIf = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_context has no default value.
      // _a_varDecls has no default value.
      // _a_auxFunction has no default value.
      // _i_whenStmtLst has no default value.
      // _i_conditions has no default value.
      // _l_assign has no default value.
      // _ret_1 has no default value.
      // _l_helpIf has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,15,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          if (!optionNone(tmpMeta8)) goto tmp3_end;
          
          _i_conditions = tmpMeta6;
          _i_whenStmtLst = tmpMeta7;
          _txt = tmp4_1;
          _a_context = tmp4_3;
          _a_varDecls = tmp4_4;
          _a_auxFunction = tmp4_5;
          /* Pattern matching succeeded */
          _ret_1 = listEmpty(_i_conditions);

          _l_helpIf = omc_CodegenOMSIC__Equations_fun__77(threadData, _OMC_LIT0, _ret_1, _a_context, _i_conditions);

          _l_assign = omc_Tpl_pushIter(threadData, _OMC_LIT0, _OMC_LIT3);

          _l_assign = omc_CodegenOMSIC__Equations_lm__80(threadData, _l_assign, _i_whenStmtLst, _a_auxFunction, _a_varDecls, _a_context ,&_a_auxFunction ,&_a_varDecls);

          _l_assign = omc_Tpl_popIter(threadData, _l_assign);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT5);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_helpIf);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT10);

          _txt = omc_Tpl_pushBlock(threadData, _txt, _OMC_LIT11);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_assign);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_Tpl_popBlock(threadData, _txt);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT13);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_varDecls;
          tmpMeta[0+2] = _a_auxFunction;
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          _a_varDecls = tmp4_4;
          _a_auxFunction = tmp4_5;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT15);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_varDecls;
          tmpMeta[0+2] = _a_auxFunction;
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
  _out_txt = tmpMeta[0+0];
  _out_a_varDecls = tmpMeta[0+1];
  _out_a_auxFunction = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_out_a_varDecls) { *out_out_a_varDecls = _out_a_varDecls; }
  if (out_out_a_auxFunction) { *out_out_a_auxFunction = _out_a_auxFunction; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__80(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_metatype __omcQ_24in_5Fa_5FauxFunction, modelica_metatype __omcQ_24in_5Fa_5FvarDecls, modelica_metatype _a_context, modelica_metatype *out_a_auxFunction, modelica_metatype *out_a_varDecls)
{
  modelica_metatype _txt = NULL;
  modelica_metatype _a_auxFunction = NULL;
  modelica_metatype _a_varDecls = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _txt = __omcQ_24in_5Ftxt;
  _a_auxFunction = __omcQ_24in_5Fa_5FauxFunction;
  _a_varDecls = __omcQ_24in_5Fa_5FvarDecls;
  {
    modelica_metatype _lstElt_80;
    for (tmpMeta1 = _items; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _lstElt_80 = MMC_CAR(tmpMeta1);
      
      
      
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _lstElt_80;
        {
          modelica_metatype _i_stmt = NULL;
          volatile mmc_switch_type tmp5;
          int tmp6;
          // _i_stmt has no default value.
          tmp5 = 0;
          for (; tmp5 < 1; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              
              _i_stmt = tmp5_1;
              /* Pattern matching succeeded */
              _txt = omc_CodegenOMSIC__Equations_fun__79(threadData, _txt, _i_stmt, _a_auxFunction, _a_varDecls, _a_context ,&_a_auxFunction ,&_a_varDecls);

              _txt = omc_Tpl_nextIter(threadData, _txt);
              tmpMeta[0+0] = _txt;
              tmpMeta[0+1] = _a_auxFunction;
              tmpMeta[0+2] = _a_varDecls;
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
      _txt = tmpMeta[0+0];
      _a_auxFunction = tmpMeta[0+1];
      _a_varDecls = tmpMeta[0+2];
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_a_auxFunction) { *out_a_auxFunction = _a_auxFunction; }
  if (out_a_varDecls) { *out_a_varDecls = _a_varDecls; }
  return _txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__79(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_stmt, modelica_metatype _in_a_auxFunction, modelica_metatype _in_a_varDecls, modelica_metatype _in_a_context, modelica_metatype *out_out_a_auxFunction, modelica_metatype *out_out_a_varDecls)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_auxFunction = NULL;
  modelica_metatype _out_a_varDecls = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_auxFunction has no default value.
  // _out_a_varDecls has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;modelica_metatype tmp4_5;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_stmt;
    tmp4_3 = _in_a_auxFunction;
    tmp4_4 = _in_a_varDecls;
    tmp4_5 = _in_a_context;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_auxFunction = NULL;
      modelica_metatype _a_varDecls = NULL;
      modelica_metatype _a_context = NULL;
      modelica_metatype _i_stateVar = NULL;
      modelica_metatype _i_value = NULL;
      modelica_metatype _i_right = NULL;
      modelica_metatype _i_left = NULL;
      modelica_metatype _ret_4 = NULL;
      modelica_metatype _l_val = NULL;
      modelica_metatype _l_rhs = NULL;
      modelica_metatype _l_lhs = NULL;
      modelica_metatype _l_preExp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_auxFunction has no default value.
      // _a_varDecls has no default value.
      // _a_context has no default value.
      // _i_stateVar has no default value.
      // _i_value has no default value.
      // _i_right has no default value.
      // _i_left has no default value.
      // _ret_4 has no default value.
      // _l_val has no default value.
      // _l_rhs has no default value.
      // _l_lhs has no default value.
      // _l_preExp has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _i_left = tmpMeta7;
          _i_right = tmpMeta8;
          _txt = tmp4_1;
          _a_auxFunction = tmp4_3;
          _a_varDecls = tmp4_4;
          _a_context = tmp4_5;
          /* Pattern matching succeeded */
          _l_preExp = _OMC_LIT0;

          _l_lhs = omc_CodegenCFunctions_crefOMSI(threadData, _OMC_LIT0, _i_left, _a_context);

          _l_rhs = omc_CodegenCFunctions_daeExp(threadData, _OMC_LIT0, _i_right, _a_context, _l_preExp, _a_varDecls, _a_auxFunction ,&_l_preExp ,&_a_varDecls ,&_a_auxFunction);

          _txt = omc_Tpl_pushBlock(threadData, _txt, _OMC_LIT11);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_preExp);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_lhs);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT17);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_rhs);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT19);

          _txt = omc_Tpl_popBlock(threadData, _txt);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_auxFunction;
          tmpMeta[0+2] = _a_varDecls;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _i_stateVar = tmpMeta9;
          _i_value = tmpMeta10;
          _txt = tmp4_1;
          _a_auxFunction = tmp4_3;
          _a_varDecls = tmp4_4;
          _a_context = tmp4_5;
          /* Pattern matching succeeded */
          _l_preExp = _OMC_LIT0;

          _l_val = omc_CodegenCFunctions_daeExp(threadData, _OMC_LIT0, _i_value, _a_context, _l_preExp, _a_varDecls, _a_auxFunction ,&_l_preExp ,&_a_varDecls ,&_a_auxFunction);

          _ret_4 = omc_ComponentReference_crefTypeConsiderSubs(threadData, _i_stateVar);

          _l_lhs = omc_CodegenOMSIC__Equations_fun__78(threadData, _OMC_LIT0, _ret_4, _l_val, _a_context, _i_stateVar);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_preExp);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_lhs);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT21);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_auxFunction;
          tmpMeta[0+2] = _a_varDecls;
          goto tmp3_done;
        }
        case 2: {
          
          _txt = tmp4_1;
          _a_auxFunction = tmp4_3;
          _a_varDecls = tmp4_4;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT23);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_auxFunction;
          tmpMeta[0+2] = _a_varDecls;
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
  _out_txt = tmpMeta[0+0];
  _out_a_auxFunction = tmpMeta[0+1];
  _out_a_varDecls = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_out_a_auxFunction) { *out_out_a_auxFunction = _out_a_auxFunction; }
  if (out_out_a_varDecls) { *out_out_a_varDecls = _out_a_varDecls; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__78(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_val, modelica_metatype _in_a_context, modelica_metatype _in_a_stateVar)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;modelica_metatype tmp4_5;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    tmp4_3 = _in_a_val;
    tmp4_4 = _in_a_context;
    tmp4_5 = _in_a_stateVar;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_val = NULL;
      modelica_metatype _a_context = NULL;
      modelica_metatype _a_stateVar = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_val has no default value.
      // _a_context has no default value.
      // _a_stateVar has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT25);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          _a_val = tmp4_3;
          _a_context = tmp4_4;
          _a_stateVar = tmp4_5;
          /* Pattern matching succeeded */
          _txt = omc_CodegenCFunctions_crefOMSI(threadData, _txt, _a_stateVar, _a_context);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT17);

          _txt = omc_Tpl_writeText(threadData, _txt, _a_val);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT19);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__77(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_context, modelica_metatype _in_a_conditions)
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
    tmp4_3 = _in_a_context;
    tmp4_4 = _in_a_conditions;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_context = NULL;
      modelica_metatype _a_conditions = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_context has no default value.
      // _a_conditions has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          _a_context = tmp4_3;
          _a_conditions = tmp4_4;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_pushIter(threadData, _txt, _OMC_LIT29);

          _txt = omc_CodegenOMSIC__Equations_lm__76(threadData, _txt, _a_conditions, _a_context);
          tmpMeta1 = omc_Tpl_popIter(threadData, _txt);
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT31);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenOMSIC__Equations_fun__77(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_context, modelica_metatype _in_a_conditions)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenOMSIC__Equations_fun__77(threadData, _in_txt, tmp1, _in_a_context, _in_a_conditions);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__76(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_metatype _a_context)
{
  modelica_metatype _txt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _txt = __omcQ_24in_5Ftxt;
  {
    modelica_metatype _lstElt_76;
    for (tmpMeta1 = _items; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _lstElt_76 = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _lstElt_76;
        {
          modelica_metatype _i_cr = NULL;
          modelica_metatype _ret_0 = NULL;
          volatile mmc_switch_type tmp5;
          int tmp6;
          // _i_cr has no default value.
          // _ret_0 has no default value.
          tmp5 = 0;
          for (; tmp5 < 1; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              
              _i_cr = tmp5_1;
              /* Pattern matching succeeded */
              _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT33);

              _txt = omc_CodegenCFunctions_crefOMSI(threadData, _txt, _i_cr, _a_context);

              _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT35);

              _ret_0 = omc_ComponentReference_crefPrefixPre(threadData, _i_cr);

              _txt = omc_CodegenCFunctions_crefOMSI(threadData, _txt, _ret_0, _a_context);

              _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT37);
              tmpMeta2 = omc_Tpl_nextIter(threadData, _txt);
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
      _txt = tmpMeta2;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _txt;
}

DLLDirection
modelica_metatype omc_CodegenOMSIC__Equations_generateDereivativeMatrixColumnCall(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_column, modelica_string _a_modelName, modelica_string _a_index, modelica_metatype _a_functionPrototypes, modelica_string _a_omsiName, modelica_metatype *out_out_a_functionPrototypes)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_functionPrototypes = NULL;
  modelica_metatype _l_auxFunction = NULL;
  modelica_metatype _l_varDecls = NULL;
  modelica_metatype _l_preExp = NULL;
  modelica_metatype _l_bodyBuffer = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_functionPrototypes has no default value.
  // _l_auxFunction has no default value.
  // _l_varDecls has no default value.
  // _l_preExp has no default value.
  // _l_bodyBuffer has no default value.
  _l_bodyBuffer = _OMC_LIT0;

  _l_preExp = _OMC_LIT0;

  _l_varDecls = _OMC_LIT0;

  _l_auxFunction = _OMC_LIT0;

  _out_txt = omc_CodegenOMSIC__Equations_fun__74(threadData, _txt, _a_column, _a_index, _a_functionPrototypes, _a_omsiName, _a_modelName ,&_out_a_functionPrototypes);
  _return: OMC_LABEL_UNUSED
  if (out_out_a_functionPrototypes) { *out_out_a_functionPrototypes = _out_a_functionPrototypes; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__74(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_column, modelica_string _in_a_index, modelica_metatype _in_a_functionPrototypes, modelica_string _in_a_omsiName, modelica_string _in_a_modelName, modelica_metatype *out_out_a_functionPrototypes)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_functionPrototypes = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_functionPrototypes has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_string tmp4_3;modelica_metatype tmp4_4;modelica_string tmp4_5;modelica_string tmp4_6;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_column;
    tmp4_3 = _in_a_index;
    tmp4_4 = _in_a_functionPrototypes;
    tmp4_5 = _in_a_omsiName;
    tmp4_6 = _in_a_modelName;
    {
      modelica_metatype _txt = NULL;
      modelica_string _a_index = NULL;
      modelica_metatype _a_functionPrototypes = NULL;
      modelica_string _a_omsiName = NULL;
      modelica_string _a_modelName = NULL;
      modelica_metatype _i_equations = NULL;
      modelica_metatype _l_bodyBuffer = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_index has no default value.
      // _a_functionPrototypes has no default value.
      // _a_omsiName has no default value.
      // _a_modelName has no default value.
      // _i_equations has no default value.
      // _l_bodyBuffer has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _txt = tmp4_1;
          _i_equations = tmpMeta6;
          _a_index = tmp4_3;
          _a_functionPrototypes = tmp4_4;
          _a_omsiName = tmp4_5;
          _a_modelName = tmp4_6;
          /* Pattern matching succeeded */
          _l_bodyBuffer = omc_Tpl_pushIter(threadData, _OMC_LIT0, _OMC_LIT3);

          _l_bodyBuffer = omc_CodegenOMSIC__Equations_lm__73(threadData, _l_bodyBuffer, _i_equations, _a_omsiName, _a_modelName);

          _l_bodyBuffer = omc_Tpl_popIter(threadData, _l_bodyBuffer);

          _a_functionPrototypes = omc_Tpl_writeTok(threadData, _a_functionPrototypes, _OMC_LIT39);

          _a_functionPrototypes = omc_CodegenUtil_symbolName(threadData, _a_functionPrototypes, _a_modelName, _a_omsiName);

          _a_functionPrototypes = omc_Tpl_writeTok(threadData, _a_functionPrototypes, _OMC_LIT41);

          _a_functionPrototypes = omc_Tpl_writeStr(threadData, _a_functionPrototypes, _a_index);

          _a_functionPrototypes = omc_Tpl_writeTok(threadData, _a_functionPrototypes, _OMC_LIT43);

          _a_functionPrototypes = omc_Tpl_writeTok(threadData, _a_functionPrototypes, _OMC_LIT1);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT51);

          _txt = omc_CodegenUtil_symbolName(threadData, _txt, _a_modelName, _a_omsiName);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT41);

          _txt = omc_Tpl_writeStr(threadData, _txt, _a_index);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT56);

          _txt = omc_Tpl_pushBlock(threadData, _txt, _OMC_LIT11);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_bodyBuffer);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT60);

          _txt = omc_Tpl_popBlock(threadData, _txt);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT13);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_functionPrototypes;
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          _a_functionPrototypes = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_functionPrototypes;
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
  _out_txt = tmpMeta[0+0];
  _out_a_functionPrototypes = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_out_a_functionPrototypes) { *out_out_a_functionPrototypes = _out_a_functionPrototypes; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__73(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_string _a_omsiName, modelica_string _a_modelName)
{
  modelica_metatype _txt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _txt = __omcQ_24in_5Ftxt;
  {
    modelica_metatype _lstElt_73;
    for (tmpMeta1 = _items; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _lstElt_73 = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _lstElt_73;
        {
          modelica_metatype _i_eq = NULL;
          volatile mmc_switch_type tmp5;
          int tmp6;
          // _i_eq has no default value.
          tmp5 = 0;
          for (; tmp5 < 1; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              
              _i_eq = tmp5_1;
              /* Pattern matching succeeded */
              _txt = omc_CodegenOMSIC__Equations_equationCall(threadData, _txt, _i_eq, _a_modelName, _OMC_LIT61, _OMC_LIT62, _a_omsiName);
              tmpMeta2 = omc_Tpl_nextIter(threadData, _txt);
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
      _txt = tmpMeta2;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _txt;
}

DLLDirection
modelica_metatype omc_CodegenOMSIC__Equations_generateDereivativeMatrixColumnFunction(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_column, modelica_string _a_modelName, modelica_string _a_index, modelica_metatype _a_functionPrototypes, modelica_metatype *out_out_a_functionPrototypes)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_functionPrototypes = NULL;
  modelica_metatype _l_auxFunction = NULL;
  modelica_metatype _l_varDecls = NULL;
  modelica_metatype _l_preExp = NULL;
  modelica_metatype _l_bodyBuffer = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_functionPrototypes has no default value.
  // _l_auxFunction has no default value.
  // _l_varDecls has no default value.
  // _l_preExp has no default value.
  // _l_bodyBuffer has no default value.
  _l_bodyBuffer = _OMC_LIT0;

  _l_preExp = _OMC_LIT0;

  _l_varDecls = _OMC_LIT0;

  _l_auxFunction = _OMC_LIT0;

  _out_txt = omc_CodegenOMSIC__Equations_fun__71(threadData, _txt, _a_column, _a_functionPrototypes, _a_modelName ,&_out_a_functionPrototypes);
  _return: OMC_LABEL_UNUSED
  if (out_out_a_functionPrototypes) { *out_out_a_functionPrototypes = _out_a_functionPrototypes; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__71(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_column, modelica_metatype _in_a_functionPrototypes, modelica_string _in_a_modelName, modelica_metatype *out_out_a_functionPrototypes)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_functionPrototypes = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_functionPrototypes has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_string tmp4_4;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_column;
    tmp4_3 = _in_a_functionPrototypes;
    tmp4_4 = _in_a_modelName;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_functionPrototypes = NULL;
      modelica_string _a_modelName = NULL;
      modelica_metatype _i_omsiFunction_context = NULL;
      modelica_metatype _i_equations = NULL;
      modelica_metatype _l_bodyBuffer = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_functionPrototypes has no default value.
      // _a_modelName has no default value.
      // _i_omsiFunction_context has no default value.
      // _i_equations has no default value.
      // _l_bodyBuffer has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          
          _txt = tmp4_1;
          _i_equations = tmpMeta6;
          _i_omsiFunction_context = tmpMeta7;
          _a_functionPrototypes = tmp4_3;
          _a_modelName = tmp4_4;
          /* Pattern matching succeeded */
          _l_bodyBuffer = omc_Tpl_pushIter(threadData, _OMC_LIT0, _OMC_LIT3);

          _l_bodyBuffer = omc_CodegenOMSIC__Equations_lm__70(threadData, _l_bodyBuffer, _i_equations, _a_functionPrototypes, _i_omsiFunction_context, _a_modelName ,&_a_functionPrototypes);

          _l_bodyBuffer = omc_Tpl_popIter(threadData, _l_bodyBuffer);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_bodyBuffer);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_functionPrototypes;
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          _a_functionPrototypes = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_functionPrototypes;
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
  _out_txt = tmpMeta[0+0];
  _out_a_functionPrototypes = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_out_a_functionPrototypes) { *out_out_a_functionPrototypes = _out_a_functionPrototypes; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__70(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_metatype __omcQ_24in_5Fa_5FfunctionPrototypes, modelica_metatype _a_omsiFunction_context, modelica_string _a_modelName, modelica_metatype *out_a_functionPrototypes)
{
  modelica_metatype _txt = NULL;
  modelica_metatype _a_functionPrototypes = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _txt = __omcQ_24in_5Ftxt;
  _a_functionPrototypes = __omcQ_24in_5Fa_5FfunctionPrototypes;
  {
    modelica_metatype _lstElt_70;
    for (tmpMeta1 = _items; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _lstElt_70 = MMC_CAR(tmpMeta1);
      
      
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _lstElt_70;
        {
          modelica_metatype _i_eq = NULL;
          volatile mmc_switch_type tmp5;
          int tmp6;
          // _i_eq has no default value.
          tmp5 = 0;
          for (; tmp5 < 1; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              
              _i_eq = tmp5_1;
              /* Pattern matching succeeded */
              _txt = omc_CodegenOMSIC__Equations_generateEquationFunction(threadData, _txt, _i_eq, _a_modelName, _OMC_LIT61, _a_omsiFunction_context, _a_functionPrototypes ,&_a_functionPrototypes);

              _txt = omc_Tpl_nextIter(threadData, _txt);
              tmpMeta[0+0] = _txt;
              tmpMeta[0+1] = _a_functionPrototypes;
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
      _txt = tmpMeta[0+0];
      _a_functionPrototypes = tmpMeta[0+1];
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_a_functionPrototypes) { *out_a_functionPrototypes = _a_functionPrototypes; }
  return _txt;
}

DLLDirection
modelica_metatype omc_CodegenOMSIC__Equations_generateDerivativeMatrix(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_matrix, modelica_string _a_modelName, modelica_string _a_index, modelica_metatype _a_functionPrototypes, modelica_string _a_omsiName, modelica_metatype *out_out_a_functionPrototypes)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_functionPrototypes = NULL;
  modelica_metatype _l_columnsString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_functionPrototypes has no default value.
  // _l_columnsString has no default value.
  _l_columnsString = _OMC_LIT0;

  _out_txt = omc_CodegenOMSIC__Equations_fun__68(threadData, _txt, _a_matrix, _a_omsiName, _a_functionPrototypes, _a_index, _a_modelName ,&_out_a_functionPrototypes);
  _return: OMC_LABEL_UNUSED
  if (out_out_a_functionPrototypes) { *out_out_a_functionPrototypes = _out_a_functionPrototypes; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__68(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_matrix, modelica_string _in_a_omsiName, modelica_metatype _in_a_functionPrototypes, modelica_string _in_a_index, modelica_string _in_a_modelName, modelica_metatype *out_out_a_functionPrototypes)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_functionPrototypes = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_functionPrototypes has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_string tmp4_3;modelica_metatype tmp4_4;modelica_string tmp4_5;modelica_string tmp4_6;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_matrix;
    tmp4_3 = _in_a_omsiName;
    tmp4_4 = _in_a_functionPrototypes;
    tmp4_5 = _in_a_index;
    tmp4_6 = _in_a_modelName;
    {
      modelica_metatype _txt = NULL;
      modelica_string _a_omsiName = NULL;
      modelica_metatype _a_functionPrototypes = NULL;
      modelica_string _a_index = NULL;
      modelica_string _a_modelName = NULL;
      modelica_metatype _i_m_columns = NULL;
      modelica_metatype _l_columnsString = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_omsiName has no default value.
      // _a_functionPrototypes has no default value.
      // _a_index has no default value.
      // _a_modelName has no default value.
      // _i_m_columns has no default value.
      // _l_columnsString has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _i_m_columns = tmpMeta7;
          _txt = tmp4_1;
          _a_omsiName = tmp4_3;
          _a_functionPrototypes = tmp4_4;
          _a_index = tmp4_5;
          _a_modelName = tmp4_6;
          /* Pattern matching succeeded */
          _l_columnsString = omc_Tpl_pushIter(threadData, _OMC_LIT0, _OMC_LIT66);

          _l_columnsString = omc_CodegenOMSIC__Equations_lm__67(threadData, _l_columnsString, _i_m_columns, _a_omsiName, _a_functionPrototypes, _a_index, _a_modelName ,&_a_functionPrototypes);

          _l_columnsString = omc_Tpl_popIter(threadData, _l_columnsString);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_columnsString);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_functionPrototypes;
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          _a_functionPrototypes = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_functionPrototypes;
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
  _out_txt = tmpMeta[0+0];
  _out_a_functionPrototypes = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_out_a_functionPrototypes) { *out_out_a_functionPrototypes = _out_a_functionPrototypes; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__67(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_string _a_omsiName, modelica_metatype __omcQ_24in_5Fa_5FfunctionPrototypes, modelica_string _a_index, modelica_string _a_modelName, modelica_metatype *out_a_functionPrototypes)
{
  modelica_metatype _txt = NULL;
  modelica_metatype _a_functionPrototypes = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _txt = __omcQ_24in_5Ftxt;
  _a_functionPrototypes = __omcQ_24in_5Fa_5FfunctionPrototypes;
  {
    modelica_metatype _lstElt_67;
    for (tmpMeta1 = _items; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _lstElt_67 = MMC_CAR(tmpMeta1);
      
      
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _lstElt_67;
        {
          modelica_metatype _i_col = NULL;
          volatile mmc_switch_type tmp5;
          int tmp6;
          // _i_col has no default value.
          tmp5 = 0;
          for (; tmp5 < 1; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              
              _i_col = tmp5_1;
              /* Pattern matching succeeded */
              _txt = omc_CodegenOMSIC__Equations_generateDereivativeMatrixColumnFunction(threadData, _txt, _i_col, _a_modelName, _a_index, _a_functionPrototypes ,&_a_functionPrototypes);

              _txt = omc_Tpl_softNewLine(threadData, _txt);

              _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT1);

              _txt = omc_CodegenOMSIC__Equations_generateDereivativeMatrixColumnCall(threadData, _txt, _i_col, _a_modelName, _a_index, _a_functionPrototypes, _a_omsiName ,&_a_functionPrototypes);

              _txt = omc_Tpl_nextIter(threadData, _txt);
              tmpMeta[0+0] = _txt;
              tmpMeta[0+1] = _a_functionPrototypes;
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
      _txt = tmpMeta[0+0];
      _a_functionPrototypes = tmpMeta[0+1];
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_a_functionPrototypes) { *out_a_functionPrototypes = _a_functionPrototypes; }
  return _txt;
}

DLLDirection
modelica_metatype omc_CodegenOMSIC__Equations_generateMatrixColumnInitialization(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_column)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _l_body = NULL;
  modelica_metatype _l_auxFunction = NULL;
  modelica_metatype _l_varDecls = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _l_body has no default value.
  // _l_auxFunction has no default value.
  // _l_varDecls has no default value.
  _l_varDecls = _OMC_LIT0;

  _l_auxFunction = _OMC_LIT0;

  _l_body = _OMC_LIT0;

  _out_txt = omc_CodegenOMSIC__Equations_fun__65(threadData, _txt, _a_column, _l_auxFunction, _l_varDecls, _l_body ,&_l_auxFunction ,&_l_varDecls ,&_l_body);
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__65(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_column, modelica_metatype _in_a_auxFunction, modelica_metatype _in_a_varDecls, modelica_metatype _in_a_body, modelica_metatype *out_out_a_auxFunction, modelica_metatype *out_out_a_varDecls, modelica_metatype *out_out_a_body)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_auxFunction = NULL;
  modelica_metatype _out_a_varDecls = NULL;
  modelica_metatype _out_a_body = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_auxFunction has no default value.
  // _out_a_varDecls has no default value.
  // _out_a_body has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;modelica_metatype tmp4_5;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_column;
    tmp4_3 = _in_a_auxFunction;
    tmp4_4 = _in_a_varDecls;
    tmp4_5 = _in_a_body;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_auxFunction = NULL;
      modelica_metatype _a_varDecls = NULL;
      modelica_metatype _a_body = NULL;
      modelica_metatype _i_omsiFunction_context = NULL;
      modelica_metatype _i_equations = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_auxFunction has no default value.
      // _a_varDecls has no default value.
      // _a_body has no default value.
      // _i_omsiFunction_context has no default value.
      // _i_equations has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          
          _txt = tmp4_1;
          _i_equations = tmpMeta6;
          _i_omsiFunction_context = tmpMeta7;
          _a_auxFunction = tmp4_3;
          _a_varDecls = tmp4_4;
          _a_body = tmp4_5;
          /* Pattern matching succeeded */
          omc_CodegenOMSIC__Equations_lm__64(threadData, _OMC_LIT0, _i_equations, _i_omsiFunction_context, _a_auxFunction, _a_varDecls, _a_body ,&_a_auxFunction ,&_a_varDecls ,&_a_body);

          _txt = omc_Tpl_writeText(threadData, _txt, _a_body);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_auxFunction;
          tmpMeta[0+2] = _a_varDecls;
          tmpMeta[0+3] = _a_body;
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          _a_auxFunction = tmp4_3;
          _a_varDecls = tmp4_4;
          _a_body = tmp4_5;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_auxFunction;
          tmpMeta[0+2] = _a_varDecls;
          tmpMeta[0+3] = _a_body;
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
  _out_txt = tmpMeta[0+0];
  _out_a_auxFunction = tmpMeta[0+1];
  _out_a_varDecls = tmpMeta[0+2];
  _out_a_body = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_out_a_auxFunction) { *out_out_a_auxFunction = _out_a_auxFunction; }
  if (out_out_a_varDecls) { *out_out_a_varDecls = _out_a_varDecls; }
  if (out_out_a_body) { *out_out_a_body = _out_a_body; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__64(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items, modelica_metatype _a_omsiFunction_context, modelica_metatype __omcQ_24in_5Fa_5FauxFunction, modelica_metatype __omcQ_24in_5Fa_5FvarDecls, modelica_metatype __omcQ_24in_5Fa_5Fbody, modelica_metatype *out_a_auxFunction, modelica_metatype *out_a_varDecls, modelica_metatype *out_a_body)
{
  modelica_metatype _txt = NULL;
  modelica_metatype _a_auxFunction = NULL;
  modelica_metatype _a_varDecls = NULL;
  modelica_metatype _a_body = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _txt = __omcQ_24in_5Ftxt;
  _a_auxFunction = __omcQ_24in_5Fa_5FauxFunction;
  _a_varDecls = __omcQ_24in_5Fa_5FvarDecls;
  _a_body = __omcQ_24in_5Fa_5Fbody;
  {
    modelica_metatype _lstElt_64;
    for (tmpMeta1 = _items; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _lstElt_64 = MMC_CAR(tmpMeta1);
      
      
      
      
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _lstElt_64;
        {
          modelica_metatype _i_eq = NULL;
          volatile mmc_switch_type tmp5;
          int tmp6;
          // _i_eq has no default value.
          tmp5 = 0;
          for (; tmp5 < 1; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              
              _i_eq = tmp5_1;
              /* Pattern matching succeeded */
              _a_body = omc_CodegenOMSIC__Equations_equationCStr(threadData, _a_body, _i_eq, _a_varDecls, _a_auxFunction, _a_omsiFunction_context ,&_a_varDecls ,&_a_auxFunction);
              tmpMeta[0+0] = _txt;
              tmpMeta[0+1] = _a_auxFunction;
              tmpMeta[0+2] = _a_varDecls;
              tmpMeta[0+3] = _a_body;
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
      _txt = tmpMeta[0+0];
      _a_auxFunction = tmpMeta[0+1];
      _a_varDecls = tmpMeta[0+2];
      _a_body = tmpMeta[0+3];
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_a_auxFunction) { *out_a_auxFunction = _a_auxFunction; }
  if (out_a_varDecls) { *out_a_varDecls = _a_varDecls; }
  if (out_a_body) { *out_a_body = _a_body; }
  return _txt;
}

DLLDirection
modelica_metatype omc_CodegenOMSIC__Equations_generateMatrixInitialization(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_matrix)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _l_columnsString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _l_columnsString has no default value.
  _l_columnsString = _OMC_LIT0;

  _out_txt = omc_CodegenOMSIC__Equations_fun__62(threadData, _txt, _a_matrix, _l_columnsString);
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__62(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_matrix, modelica_metatype _in_a_columnsString)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_matrix;
    tmp4_3 = _in_a_columnsString;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_columnsString = NULL;
      modelica_metatype _i_m_columns = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_columnsString has no default value.
      // _i_m_columns has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _i_m_columns = tmpMeta7;
          _txt = tmp4_1;
          _a_columnsString = tmp4_3;
          /* Pattern matching succeeded */
          omc_CodegenOMSIC__Equations_lm__61(threadData, _OMC_LIT0, _i_m_columns);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT1);

          _txt = omc_Tpl_writeText(threadData, _txt, _a_columnsString);

          _txt = omc_Tpl_softNewLine(threadData, _txt);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT1);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_lm__61(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items)
{
  modelica_metatype _txt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _txt = __omcQ_24in_5Ftxt;
  {
    modelica_metatype _lstElt_61;
    for (tmpMeta1 = _items; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _lstElt_61 = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _lstElt_61;
        {
          modelica_metatype _i_col = NULL;
          volatile mmc_switch_type tmp5;
          int tmp6;
          // _i_col has no default value.
          tmp5 = 0;
          for (; tmp5 < 1; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              
              _i_col = tmp5_1;
              /* Pattern matching succeeded */
              omc_CodegenOMSIC__Equations_generateMatrixColumnInitialization(threadData, _OMC_LIT0, _i_col);
              tmpMeta2 = _txt;
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
      _txt = tmpMeta2;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _txt;
}

DLLDirection
modelica_metatype omc_CodegenOMSIC__Equations_equationCall(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_eq, modelica_string _a_modelNamePrefixStr, modelica_string _a_modelFunctionnamePrefixStr, modelica_string _a_input, modelica_string _a_omsiName)
{
  modelica_metatype _out_txt = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  _out_txt = omc_CodegenOMSIC__Equations_fun__59(threadData, _txt, _a_eq, _a_modelNamePrefixStr, _a_input, _a_omsiName);
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__59(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq, modelica_string _in_a_modelNamePrefixStr, modelica_string _in_a_input, modelica_string _in_a_omsiName)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_string tmp4_3;modelica_string tmp4_4;modelica_string tmp4_5;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_eq;
    tmp4_3 = _in_a_modelNamePrefixStr;
    tmp4_4 = _in_a_input;
    tmp4_5 = _in_a_omsiName;
    {
      modelica_metatype _txt = NULL;
      modelica_string _a_modelNamePrefixStr = NULL;
      modelica_string _a_input = NULL;
      modelica_string _a_omsiName = NULL;
      modelica_integer _i_algSysIndex;
      modelica_integer _i_index;
      modelica_metatype _l_i = NULL;
      int tmp4;
      // _txt has no default value.
      // _a_modelNamePrefixStr has no default value.
      // _a_input has no default value.
      // _a_omsiName has no default value.
      // _i_algSysIndex has no default value.
      // _i_index has no default value.
      // _l_i has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_2))) {
        case 6: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp6 = mmc_unbox_integer(tmpMeta5);
          
          _i_index = tmp6  /* pattern as ty=Integer */;
          _txt = tmp4_1;
          _a_modelNamePrefixStr = tmp4_3;
          _a_input = tmp4_4;
          /* Pattern matching succeeded */
          _l_i = omc_Tpl_writeStr(threadData, _OMC_LIT0, intString(_i_index));

          _txt = omc_CodegenUtil_symbolName(threadData, _txt, _a_modelNamePrefixStr, _OMC_LIT67);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT69);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_i);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT33);

          _txt = omc_Tpl_writeStr(threadData, _txt, _a_input);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT71);
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,15,7) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _i_index = tmp8  /* pattern as ty=Integer */;
          _txt = tmp4_1;
          _a_modelNamePrefixStr = tmp4_3;
          _a_input = tmp4_4;
          /* Pattern matching succeeded */
          _l_i = omc_Tpl_writeStr(threadData, _OMC_LIT0, intString(_i_index));

          _txt = omc_CodegenUtil_symbolName(threadData, _txt, _a_modelNamePrefixStr, _OMC_LIT67);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT69);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_i);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT33);

          _txt = omc_Tpl_writeStr(threadData, _txt, _a_input);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT71);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          
          _i_index = tmp10  /* pattern as ty=Integer */;
          _txt = tmp4_1;
          _a_modelNamePrefixStr = tmp4_3;
          _a_input = tmp4_4;
          /* Pattern matching succeeded */
          _txt = omc_CodegenUtil_symbolName(threadData, _txt, _a_modelNamePrefixStr, _OMC_LIT72);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT69);

          _txt = omc_Tpl_writeStr(threadData, _txt, intString(_i_index));

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT33);

          _txt = omc_Tpl_writeStr(threadData, _txt, _a_input);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT71);
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,19,11) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          
          _i_algSysIndex = tmp12  /* pattern as ty=Integer */;
          _txt = tmp4_1;
          _a_modelNamePrefixStr = tmp4_3;
          _a_input = tmp4_4;
          _a_omsiName = tmp4_5;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT74);

          _txt = omc_CodegenUtil_symbolName(threadData, _txt, _a_modelNamePrefixStr, _a_omsiName);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT76);

          _txt = omc_Tpl_writeStr(threadData, _txt, intString(_i_algSysIndex));

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT33);

          _txt = omc_Tpl_writeStr(threadData, _txt, _a_input);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT81);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT83);
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

DLLDirection
modelica_metatype omc_CodegenOMSIC__Equations_equationCStr(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_eq, modelica_metatype _a_varDecls, modelica_metatype _a_auxFunction, modelica_metatype _a_context, modelica_metatype *out_out_a_varDecls, modelica_metatype *out_out_a_auxFunction)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_varDecls = NULL;
  modelica_metatype _out_a_auxFunction = NULL;
  modelica_metatype _l_preExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_varDecls has no default value.
  // _out_a_auxFunction has no default value.
  // _l_preExp has no default value.
  _l_preExp = _OMC_LIT0;

  _out_txt = omc_CodegenOMSIC__Equations_fun__57(threadData, _txt, _a_eq, _a_auxFunction, _a_varDecls, _l_preExp, _a_context ,&_out_a_auxFunction ,&_out_a_varDecls ,&_l_preExp);
  _return: OMC_LABEL_UNUSED
  if (out_out_a_varDecls) { *out_out_a_varDecls = _out_a_varDecls; }
  if (out_out_a_auxFunction) { *out_out_a_auxFunction = _out_a_auxFunction; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__57(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq, modelica_metatype _in_a_auxFunction, modelica_metatype _in_a_varDecls, modelica_metatype _in_a_preExp, modelica_metatype _in_a_context, modelica_metatype *out_out_a_auxFunction, modelica_metatype *out_out_a_varDecls, modelica_metatype *out_out_a_preExp)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_auxFunction = NULL;
  modelica_metatype _out_a_varDecls = NULL;
  modelica_metatype _out_a_preExp = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_auxFunction has no default value.
  // _out_a_varDecls has no default value.
  // _out_a_preExp has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;modelica_metatype tmp4_5;modelica_metatype tmp4_6;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_eq;
    tmp4_3 = _in_a_auxFunction;
    tmp4_4 = _in_a_varDecls;
    tmp4_5 = _in_a_preExp;
    tmp4_6 = _in_a_context;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_auxFunction = NULL;
      modelica_metatype _a_varDecls = NULL;
      modelica_metatype _a_preExp = NULL;
      modelica_metatype _a_context = NULL;
      modelica_metatype _i_eq = NULL;
      modelica_metatype _i_exp = NULL;
      modelica_metatype _i_cref = NULL;
      modelica_metatype _l_whenEq = NULL;
      modelica_metatype _l_expPart = NULL;
      modelica_metatype _l_crefStr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_auxFunction has no default value.
      // _a_varDecls has no default value.
      // _a_preExp has no default value.
      // _a_context has no default value.
      // _i_eq has no default value.
      // _i_exp has no default value.
      // _i_cref has no default value.
      // _l_whenEq has no default value.
      // _l_expPart has no default value.
      // _l_crefStr has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          
          _i_cref = tmpMeta6;
          _i_exp = tmpMeta7;
          _txt = tmp4_1;
          _a_auxFunction = tmp4_3;
          _a_varDecls = tmp4_4;
          _a_preExp = tmp4_5;
          _a_context = tmp4_6;
          /* Pattern matching succeeded */
          _l_crefStr = omc_CodegenCFunctions_crefOMSI(threadData, _OMC_LIT0, _i_cref, _a_context);

          _l_expPart = omc_CodegenCFunctions_daeExp(threadData, _OMC_LIT0, _i_exp, _a_context, _a_preExp, _a_varDecls, _a_auxFunction ,&_a_preExp ,&_a_varDecls ,&_a_auxFunction);

          _txt = omc_Tpl_writeText(threadData, _txt, _a_preExp);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_crefStr);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT17);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_expPart);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT19);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_auxFunction;
          tmpMeta[0+2] = _a_varDecls;
          tmpMeta[0+3] = _a_preExp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          
          _i_exp = tmpMeta8;
          _txt = tmp4_1;
          _a_auxFunction = tmp4_3;
          _a_varDecls = tmp4_4;
          _a_preExp = tmp4_5;
          _a_context = tmp4_6;
          /* Pattern matching succeeded */
          _l_expPart = omc_CodegenCFunctions_daeExp(threadData, _OMC_LIT0, _i_exp, _a_context, _a_preExp, _a_varDecls, _a_auxFunction ,&_a_preExp ,&_a_varDecls ,&_a_auxFunction);

          _txt = omc_Tpl_writeText(threadData, _txt, _a_preExp);

          _txt = omc_Tpl_softNewLine(threadData, _txt);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT85);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_expPart);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT19);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_auxFunction;
          tmpMeta[0+2] = _a_varDecls;
          tmpMeta[0+3] = _a_preExp;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,15,7) == 0) goto tmp3_end;
          
          _i_eq = tmp4_2;
          _txt = tmp4_1;
          _a_auxFunction = tmp4_3;
          _a_varDecls = tmp4_4;
          _a_preExp = tmp4_5;
          _a_context = tmp4_6;
          /* Pattern matching succeeded */
          _l_whenEq = omc_CodegenOMSIC__Equations_equationWhen(threadData, _OMC_LIT0, _i_eq, _a_context, _a_varDecls, _a_auxFunction ,&_a_varDecls ,&_a_auxFunction);

          _txt = omc_Tpl_writeText(threadData, _txt, _l_whenEq);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_auxFunction;
          tmpMeta[0+2] = _a_varDecls;
          tmpMeta[0+3] = _a_preExp;
          goto tmp3_done;
        }
        case 3: {
          
          _txt = tmp4_1;
          _a_auxFunction = tmp4_3;
          _a_varDecls = tmp4_4;
          _a_preExp = tmp4_5;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT87);
          tmpMeta[0+0] = _txt;
          tmpMeta[0+1] = _a_auxFunction;
          tmpMeta[0+2] = _a_varDecls;
          tmpMeta[0+3] = _a_preExp;
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
  _out_txt = tmpMeta[0+0];
  _out_a_auxFunction = tmpMeta[0+1];
  _out_a_varDecls = tmpMeta[0+2];
  _out_a_preExp = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_out_a_auxFunction) { *out_out_a_auxFunction = _out_a_auxFunction; }
  if (out_out_a_varDecls) { *out_out_a_varDecls = _out_a_varDecls; }
  if (out_out_a_preExp) { *out_out_a_preExp = _out_a_preExp; }
  return _out_txt;
}

DLLDirection
modelica_metatype omc_CodegenOMSIC__Equations_generateEquationFunction(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_eq, modelica_string _a_modelNamePrefixStr, modelica_string _a_modelFunctionnamePrefixStr, modelica_metatype _a_context, modelica_metatype _a_functionPrototypes, modelica_metatype *out_out_a_functionPrototypes)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_functionPrototypes = NULL;
  modelica_boolean _ret_9;
  modelica_metatype _l_dataCast = NULL;
  modelica_metatype _l_funcArguments = NULL;
  modelica_metatype _l_funcName = NULL;
  modelica_metatype _l_equationCode = NULL;
  modelica_metatype _l_auxFunction = NULL;
  modelica_metatype _l_varDecls = NULL;
  modelica_metatype _ret_2 = NULL;
  modelica_metatype _l_equationInfos = NULL;
  modelica_metatype _l_ix = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_functionPrototypes has no default value.
  // _ret_9 has no default value.
  // _l_dataCast has no default value.
  // _l_funcArguments has no default value.
  // _l_funcName has no default value.
  // _l_equationCode has no default value.
  // _l_auxFunction has no default value.
  // _l_varDecls has no default value.
  // _ret_2 has no default value.
  // _l_equationInfos has no default value.
  // _l_ix has no default value.
  _l_ix = omc_CodegenUtilSimulation_equationIndex(threadData, _OMC_LIT0, _a_eq);

  _ret_2 = omc_List_fill(threadData, _a_eq, ((modelica_integer) 1));

  _l_equationInfos = omc_CodegenUtilSimulation_dumpEqs(threadData, _OMC_LIT0, _ret_2);

  _l_varDecls = _OMC_LIT0;

  _l_auxFunction = _OMC_LIT0;

  _l_equationCode = omc_CodegenOMSIC__Equations_equationCStr(threadData, _OMC_LIT0, _a_eq, _l_varDecls, _l_auxFunction, _a_context ,&_l_varDecls ,&_l_auxFunction);

  _l_funcName = omc_CodegenOMSIC__Equations_fun__52(threadData, _OMC_LIT0, _a_eq);

  _l_funcArguments = omc_CodegenOMSIC__Equations_fun__53(threadData, _OMC_LIT0, _a_eq);

  _l_dataCast = omc_CodegenOMSIC__Equations_fun__54(threadData, _OMC_LIT0, _a_eq);

  _out_a_functionPrototypes = omc_Tpl_writeTok(threadData, _a_functionPrototypes, _OMC_LIT89);

  _out_a_functionPrototypes = omc_CodegenUtil_symbolName(threadData, _out_a_functionPrototypes, _a_modelNamePrefixStr, omc_Tpl_textString(threadData, _l_funcName));

  _out_a_functionPrototypes = omc_Tpl_writeTok(threadData, _out_a_functionPrototypes, _OMC_LIT69);

  _out_a_functionPrototypes = omc_Tpl_writeText(threadData, _out_a_functionPrototypes, _l_ix);

  _out_a_functionPrototypes = omc_Tpl_writeTok(threadData, _out_a_functionPrototypes, _OMC_LIT33);

  _out_a_functionPrototypes = omc_Tpl_writeText(threadData, _out_a_functionPrototypes, _l_funcArguments);

  _out_a_functionPrototypes = omc_Tpl_writeTok(threadData, _out_a_functionPrototypes, _OMC_LIT71);

  _out_a_functionPrototypes = omc_Tpl_writeTok(threadData, _out_a_functionPrototypes, _OMC_LIT1);

  _out_txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT90);

  _out_txt = omc_Tpl_writeText(threadData, _out_txt, _l_equationInfos);

  _out_txt = omc_Tpl_softNewLine(threadData, _out_txt);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT91);

  _out_txt = omc_Tpl_pushBlock(threadData, _out_txt, _OMC_LIT92);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT89);

  _out_txt = omc_CodegenUtil_symbolName(threadData, _out_txt, _a_modelNamePrefixStr, omc_Tpl_textString(threadData, _l_funcName));

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT69);

  _out_txt = omc_Tpl_writeText(threadData, _out_txt, _l_ix);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT33);

  _out_txt = omc_Tpl_writeText(threadData, _out_txt, _l_funcArguments);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT94);

  _out_txt = omc_Tpl_pushBlock(threadData, _out_txt, _OMC_LIT92);

  _out_txt = omc_Tpl_writeText(threadData, _out_txt, _l_dataCast);

  _out_txt = omc_Tpl_softNewLine(threadData, _out_txt);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT1);

  _ret_9 = (stringEqual(omc_Tpl_textString(threadData, _l_varDecls), _OMC_LIT61));

  _out_txt = omc_CodegenOMSIC__Equations_fun__55(threadData, _out_txt, _ret_9, _l_varDecls);

  _out_txt = omc_Tpl_softNewLine(threadData, _out_txt);

  _out_txt = omc_Tpl_writeText(threadData, _out_txt, _l_auxFunction);

  _out_txt = omc_Tpl_softNewLine(threadData, _out_txt);

  _out_txt = omc_Tpl_writeText(threadData, _out_txt, _l_equationCode);

  _out_txt = omc_Tpl_softNewLine(threadData, _out_txt);

  _out_txt = omc_Tpl_popBlock(threadData, _out_txt);

  _out_txt = omc_Tpl_popBlock(threadData, _out_txt);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT13);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT1);
  _return: OMC_LABEL_UNUSED
  if (out_out_a_functionPrototypes) { *out_out_a_functionPrototypes = _out_a_functionPrototypes; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__55(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg, modelica_metatype _in_a_varDecls)
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
    tmp4_3 = _in_a_varDecls;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _a_varDecls = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_varDecls has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          _a_varDecls = tmp4_3;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT96);

          _txt = omc_Tpl_writeText(threadData, _txt, _a_varDecls);

          _txt = omc_Tpl_softNewLine(threadData, _txt);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT1);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenOMSIC__Equations_fun__55(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg, modelica_metatype _in_a_varDecls)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenOMSIC__Equations_fun__55(threadData, _in_txt, tmp1, _in_a_varDecls);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__54(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_eq;
    {
      modelica_metatype _txt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT98);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__53(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_eq;
    {
      modelica_metatype _txt = NULL;
      int tmp4;
      // _txt has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_2))) {
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT100);
          goto tmp3_done;
        }
        case 22: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,19,11) == 0) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT102);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT102);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenOMSIC__Equations_fun__52(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_eq)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_eq;
    {
      modelica_metatype _txt = NULL;
      int tmp4;
      // _txt has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_2))) {
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,5) == 0) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT103);
          goto tmp3_done;
        }
        case 22: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,19,11) == 0) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT105);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT106);
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

DLLDirection
modelica_metatype omc_CodegenOMSIC__Equations_equationFunctionPrototypes(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_eq, modelica_string _a_modelNamePrefixStr)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _l_ix = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _l_ix has no default value.
  _l_ix = omc_CodegenUtilSimulation_equationIndex(threadData, _OMC_LIT0, _a_eq);

  _out_txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT89);

  _out_txt = omc_CodegenUtil_symbolName(threadData, _out_txt, _a_modelNamePrefixStr, _OMC_LIT67);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT69);

  _out_txt = omc_Tpl_writeText(threadData, _out_txt, _l_ix);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT108);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT1);
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

