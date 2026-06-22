#include "omc_simulation_settings.h"
#include "DumpHTML.h"
#define _OMC_LIT0_data "var ctx = document.querySelector('canvas').getContext('2d');\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,61,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "ctx.fillStyle = '#001D4B';\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,27,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "ctx.font=\"18px Arial\";\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,24,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "var blockSize = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,16,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ";\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,2,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "var matrixMargin = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,19,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ";\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,3,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "\nfunction drawRectangle(px, py, blockSize, margin, ctx) {\n   ctx.fillRect(((py-1)*blockSize) + matrixMargin,((px-1)*blockSize) + matrixMargin, blockSize, blockSize);\n   return ctx;\n     }\n\nfunction rowName(name, rowIdx, blockSize, margin, ctx) {\n   ctx.strokeText(name, 0, 18+margin+(rowIdx-1)*blockSize, margin);\n   return ctx;\n     }\n\nfunction colName(name, colIdx, blockSize, margin, ctx) {\n   ctx.strokeText(name, 0, 18+margin+(colIdx-1)*blockSize, margin);\n   return ctx;\n     }\n\nfunction makeLines(blockSize, margin,  n,  ctx) {\n     for (var x = 0; x < n+1; ++x) {\n     ctx.beginPath();\n     ctx.moveTo( x*blockSize + margin, margin);\n     ctx.lineTo( x*blockSize + margin, margin + (n)*blockSize);\n     ctx.stroke();\n     }\n\n\n    for (var x = 0; x < n+1; ++x) {\n     ctx.beginPath();\n     ctx.moveTo(margin, x*blockSize + margin);\n     ctx.lineTo(margin + (n)*blockSize, x*blockSize + margin);\n     ctx.stroke();\n    }\n\n  return ctx;\n  }\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,948,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "ctx = rowName(\"eq_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,18,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "\", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,3,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ", blockSize, matrixMargin, ctx);\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,33,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "ctx = colName(\"var_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,19,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "ctx = drawRectangle("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,20,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,2,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ",blockSize, matrixMargin,  ctx);\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,33,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "\n  ctx.textAlign = 'right';\n\n  ctx = makeLines(blockSize, matrixMargin, "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,72,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data ", ctx);\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,8,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "ctx.rotate(-Math.PI / 2);\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,26,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "width = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,9,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,1,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data " height = \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,11,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "LANGUAGE=\"JavaScript"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,20,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,0,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ".html"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,5,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "Variable <a href=\"#"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,19,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "varanker"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,8,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "\" onclick=\"return show('"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,24,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "variables');\">"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,14,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "</a> is solved in equation  <a href=\"#"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,38,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "eqanker"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,7,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "equations');\">"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,14,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "</a>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,4,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Matching"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,8,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data " variables and equations\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,25,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "javascript:toggle('"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,19,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "matching')"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,10,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "show matching"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,13,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "show/hide matching"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,18,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "matching"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,8,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "background"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,10,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "#339966"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,7,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,3,3) {&DumpHTML_Style_STYLE__desc,_OMC_LIT39,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "display"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,7,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,4,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,3,3) {&DumpHTML_Style_STYLE__desc,_OMC_LIT42,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,1) {_OMC_LIT44,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,1) {_OMC_LIT41,_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data " ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,2,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "): "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,3,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "equations')"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,11,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "show equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,14,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "show/hide equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,19,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,9,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "#C0C0C0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,7,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,3,3) {&DumpHTML_Style_STYLE__desc,_OMC_LIT39,_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,1) {_OMC_LIT55,_OMC_LIT45}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,2,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "variables')"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,11,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "show variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,14,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "show/hide variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,19,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,9,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "#FFFFCC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,7,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,3,3) {&DumpHTML_Style_STYLE__desc,_OMC_LIT39,_OMC_LIT62}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,2,1) {_OMC_LIT63,_OMC_LIT45}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,1,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "Variables ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,11,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,1,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,11,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "<hr>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,4,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "system')"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,8,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "show system"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,11,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "show/hide system "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,17,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "system"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,6,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "\n<h"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,3,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data ">"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,1,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "</h"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,3,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "\n<a href=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,10,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "\" title=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,9,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "\">"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,2,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "\n<a name=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,10,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "\"/>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,3,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,1,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "<br>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,4,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "; "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,2,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "\n<div id=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,10,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "\" style=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,9,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "\">\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,3,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "\n</div>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,7,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "\n<script type=\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,15,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "\n</script>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,10,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "\n<SCRIPT \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,10,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "\n</SCRIPT>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,10,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,1,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "\n<canvas "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,9,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "\n<html>\n<head>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,14,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "\n</head>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,8,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "\n<body>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,7,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "\n</body>\n</html>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,16,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "text/Javascript"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,15,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "function toggle(name) {\n   var element = document.getElementById(name);\n   if (element.style.display == \"none\") {\n      // show the div\n      element.style.display = \"block\";   \n   } else {\n      // hide the div\n      element.style.display = \"none\";\n      // reset element\n      element.reset();\n   }\n}\n\nfunction show(name) {\n   var element = document.getElementById(name);\n   if (element.style.display == \"none\") {\n      // show the div\n      element.style.display = \"block\";   \n   }\n   return true;\n}\n\n    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,508,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,4,3) {&DumpHTML_Document_DOCUMENT__desc,_OMC_LIT22,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
#include "util/modelica.h"

#include "DumpHTML_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_DumpHTML_intAbsGt(threadData_t *threadData, modelica_integer _i1, modelica_integer _i2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DumpHTML_intAbsGt(threadData_t *threadData, modelica_metatype _i1, modelica_metatype _i2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_intAbsGt,2,0) {(void*) boxptr_DumpHTML_intAbsGt,0}};
#define boxvar_DumpHTML_intAbsGt MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_intAbsGt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpMatching2(threadData_t *threadData, modelica_metatype _v, modelica_integer _i, modelica_integer _len, modelica_string _prefixId, modelica_metatype _inTags);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DumpHTML_dumpMatching2(threadData_t *threadData, modelica_metatype _v, modelica_metatype _i, modelica_metatype _len, modelica_metatype _prefixId, modelica_metatype _inTags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpMatching2,2,0) {(void*) boxptr_DumpHTML_dumpMatching2,0}};
#define boxvar_DumpHTML_dumpMatching2 MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpMatching2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpMatching(threadData_t *threadData, modelica_metatype _v, modelica_string _prefixId, modelica_metatype _inTags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpMatching,2,0) {(void*) boxptr_DumpHTML_dumpMatching,0}};
#define boxvar_DumpHTML_dumpMatching MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpMatching)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpFullMatching(threadData_t *threadData, modelica_metatype _inMatch, modelica_string _prefixId, modelica_metatype _inTags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpFullMatching,2,0) {(void*) boxptr_DumpHTML_dumpFullMatching,0}};
#define boxvar_DumpHTML_dumpFullMatching MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpFullMatching)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpEqn(threadData_t *threadData, modelica_metatype _inEquation, modelica_string _prefixId, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpEqn,2,0) {(void*) boxptr_DumpHTML_dumpEqn,0}};
#define boxvar_DumpHTML_dumpEqn MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpEqns(threadData_t *threadData, modelica_metatype _eqns, modelica_string _prefixId, modelica_metatype _inTags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpEqns,2,0) {(void*) boxptr_DumpHTML_dumpEqns,0}};
#define boxvar_DumpHTML_dumpEqns MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpVar(threadData_t *threadData, modelica_metatype _inVar, modelica_string _prefixId, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpVar,2,0) {(void*) boxptr_DumpHTML_dumpVar,0}};
#define boxvar_DumpHTML_dumpVar MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_printVarList(threadData_t *threadData, modelica_metatype _vars, modelica_string _prefixId, modelica_metatype _inTags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_printVarList,2,0) {(void*) boxptr_DumpHTML_printVarList,0}};
#define boxvar_DumpHTML_printVarList MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_printVarList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpEqSystem(threadData_t *threadData, modelica_metatype _inEqSystem, modelica_string _inPrefixIdstr, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpEqSystem,2,0) {(void*) boxptr_DumpHTML_dumpEqSystem,0}};
#define boxvar_DumpHTML_dumpEqSystem MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpEqSystem)
PROTECTED_FUNCTION_STATIC modelica_string omc_DumpHTML_dumpStyle(threadData_t *threadData, modelica_metatype _inStyle);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpStyle,2,0) {(void*) boxptr_DumpHTML_dumpStyle,0}};
#define boxvar_DumpHTML_dumpStyle MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpStyle)
PROTECTED_FUNCTION_STATIC modelica_string omc_DumpHTML_dumpTag(threadData_t *threadData, modelica_metatype _tag, modelica_string _iBuffer);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpTag,2,0) {(void*) boxptr_DumpHTML_dumpTag,0}};
#define boxvar_DumpHTML_dumpTag MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpTag)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addBodyTag(threadData_t *threadData, modelica_metatype _tag, modelica_metatype _inDoc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addBodyTag,2,0) {(void*) boxptr_DumpHTML_addBodyTag,0}};
#define boxvar_DumpHTML_addBodyTag MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addBodyTag)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addHeadTag(threadData_t *threadData, modelica_metatype _tag, modelica_metatype _inDoc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addHeadTag,2,0) {(void*) boxptr_DumpHTML_addHeadTag,0}};
#define boxvar_DumpHTML_addHeadTag MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addHeadTag)
PROTECTED_FUNCTION_STATIC void omc_DumpHTML_dumpDocument(threadData_t *threadData, modelica_metatype _inDoc, modelica_string _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpDocument,2,0) {(void*) boxptr_DumpHTML_dumpDocument,0}};
#define boxvar_DumpHTML_dumpDocument MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpDocument)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addBodyTags(threadData_t *threadData, modelica_metatype _tags, modelica_metatype _inDoc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addBodyTags,2,0) {(void*) boxptr_DumpHTML_addBodyTags,0}};
#define boxvar_DumpHTML_addBodyTags MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addBodyTags)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addDivisionTag(threadData_t *threadData, modelica_string _id, modelica_metatype _style, modelica_metatype _tags, modelica_metatype _inTags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addDivisionTag,2,0) {(void*) boxptr_DumpHTML_addDivisionTag,0}};
#define boxvar_DumpHTML_addDivisionTag MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addDivisionTag)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addDivision(threadData_t *threadData, modelica_string _id, modelica_metatype _style, modelica_metatype _tags, modelica_metatype _inDoc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addDivision,2,0) {(void*) boxptr_DumpHTML_addDivision,0}};
#define boxvar_DumpHTML_addDivision MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addDivision)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addLineTag(threadData_t *threadData, modelica_string _text, modelica_metatype _inTags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addLineTag,2,0) {(void*) boxptr_DumpHTML_addLineTag,0}};
#define boxvar_DumpHTML_addLineTag MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addLineTag)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addLine(threadData_t *threadData, modelica_string _text, modelica_metatype _inDoc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addLine,2,0) {(void*) boxptr_DumpHTML_addLine,0}};
#define boxvar_DumpHTML_addLine MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addLine)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addAnkerTag(threadData_t *threadData, modelica_string _name, modelica_metatype _inTags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addAnkerTag,2,0) {(void*) boxptr_DumpHTML_addAnkerTag,0}};
#define boxvar_DumpHTML_addAnkerTag MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addAnkerTag)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addHyperLinkTag(threadData_t *threadData, modelica_string _href, modelica_string _title, modelica_string _text, modelica_metatype _inTags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addHyperLinkTag,2,0) {(void*) boxptr_DumpHTML_addHyperLinkTag,0}};
#define boxvar_DumpHTML_addHyperLinkTag MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addHyperLinkTag)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addHyperLink(threadData_t *threadData, modelica_string _href, modelica_string _title, modelica_string _text, modelica_metatype _inDoc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addHyperLink,2,0) {(void*) boxptr_DumpHTML_addHyperLink,0}};
#define boxvar_DumpHTML_addHyperLink MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addHyperLink)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addHeadingTag(threadData_t *threadData, modelica_integer _stage, modelica_string _text, modelica_metatype _inTags);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DumpHTML_addHeadingTag(threadData_t *threadData, modelica_metatype _stage, modelica_metatype _text, modelica_metatype _inTags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addHeadingTag,2,0) {(void*) boxptr_DumpHTML_addHeadingTag,0}};
#define boxvar_DumpHTML_addHeadingTag MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addHeadingTag)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addHeading(threadData_t *threadData, modelica_integer _stage, modelica_string _text, modelica_metatype _inDoc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DumpHTML_addHeading(threadData_t *threadData, modelica_metatype _stage, modelica_metatype _text, modelica_metatype _inDoc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addHeading,2,0) {(void*) boxptr_DumpHTML_addHeading,0}};
#define boxvar_DumpHTML_addHeading MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addHeading)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addScriptBody(threadData_t *threadData, modelica_string _type_, modelica_string _script, modelica_metatype _inDoc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addScriptBody,2,0) {(void*) boxptr_DumpHTML_addScriptBody,0}};
#define boxvar_DumpHTML_addScriptBody MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addScriptBody)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addScript(threadData_t *threadData, modelica_string _type_, modelica_string _script, modelica_metatype _inDoc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_addScript,2,0) {(void*) boxptr_DumpHTML_addScript,0}};
#define boxvar_DumpHTML_addScript MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_addScript)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_emptyDocumentWithToggleFunktion(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_emptyDocumentWithToggleFunktion,2,0) {(void*) boxptr_DumpHTML_emptyDocumentWithToggleFunktion,0}};
#define boxvar_DumpHTML_emptyDocumentWithToggleFunktion MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_emptyDocumentWithToggleFunktion)

PROTECTED_FUNCTION_STATIC modelica_boolean omc_DumpHTML_intAbsGt(threadData_t *threadData, modelica_integer _i1, modelica_integer _i2)
{
  modelica_boolean _out;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  _out = (labs(_i1) > labs(_i2));
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DumpHTML_intAbsGt(threadData_t *threadData, modelica_metatype _i1, modelica_metatype _i2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _out;
  modelica_metatype out_out;
  tmp1 = mmc_unbox_integer(_i1);
  tmp2 = mmc_unbox_integer(_i2);
  _out = omc_DumpHTML_intAbsGt(threadData, tmp1, tmp2);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

DLLDirection
void omc_DumpHTML_dumpMatrixHTML(threadData_t *threadData, modelica_metatype _m, modelica_metatype _rowNames, modelica_metatype _columNames, modelica_string _fileName)
{
  modelica_integer _size;
  modelica_integer _rowIdx;
  modelica_integer _colIdx;
  modelica_integer _matrixMargin;
  modelica_integer _blockSize;
  modelica_metatype _row = NULL;
  modelica_string _blockDraw = NULL;
  modelica_string _rowLabelDraw = NULL;
  modelica_string _colLabelDraw = NULL;
  modelica_metatype _scripts = NULL;
  modelica_metatype _rowLabelScripts = NULL;
  modelica_metatype _colLabelScripts = NULL;
  modelica_metatype _doc = NULL;
  modelica_metatype _canvas = NULL;
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
  modelica_integer tmp31;
  modelica_integer tmp32;
  modelica_integer tmp33;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _size has no default value.
  // _rowIdx has no default value.
  // _colIdx has no default value.
  // _matrixMargin has no default value.
  // _blockSize has no default value.
  // _row has no default value.
  // _blockDraw has no default value.
  // _rowLabelDraw has no default value.
  // _colLabelDraw has no default value.
  // _scripts has no default value.
  // _rowLabelScripts has no default value.
  // _colLabelScripts has no default value.
  // _doc has no default value.
  // _canvas has no default value.
  _matrixMargin = ((modelica_integer) 100);

  _blockSize = ((modelica_integer) 20);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _scripts = tmpMeta1;

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _rowLabelScripts = tmpMeta2;

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _colLabelScripts = tmpMeta3;

  tmpMeta4 = mmc_mk_cons(_OMC_LIT0, _scripts);
  _scripts = tmpMeta4;

  tmpMeta5 = mmc_mk_cons(_OMC_LIT1, _scripts);
  _scripts = tmpMeta5;

  tmpMeta6 = mmc_mk_cons(_OMC_LIT2, _scripts);
  _scripts = tmpMeta6;

  tmpMeta8 = stringAppend(_OMC_LIT3,intString(_blockSize));
  tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT4);
  tmpMeta7 = mmc_mk_cons(tmpMeta9, _scripts);
  _scripts = tmpMeta7;

  tmpMeta11 = stringAppend(_OMC_LIT5,intString(_matrixMargin));
  tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT6);
  tmpMeta10 = mmc_mk_cons(tmpMeta12, _scripts);
  _scripts = tmpMeta10;

  tmpMeta13 = mmc_mk_cons(_OMC_LIT7, _scripts);
  _scripts = tmpMeta13;

  _size = arrayLength(_m);

  tmp31 = ((modelica_integer) 1); tmp32 = 1; tmp33 = _size;
  if(!(((tmp32 > 0) && (tmp31 > tmp33)) || ((tmp32 < 0) && (tmp31 < tmp33))))
  {
    modelica_integer _rowIdx;
    for(_rowIdx = ((modelica_integer) 1); in_range_integer(_rowIdx, tmp31, tmp33); _rowIdx += tmp32)
    {
      _row = arrayGet(_m, _rowIdx);

      tmpMeta14 = stringAppend(_OMC_LIT8,listGet(_rowNames, _rowIdx));
      tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT9);
      tmpMeta16 = stringAppend(tmpMeta15,intString(_rowIdx));
      tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT10);
      _rowLabelDraw = tmpMeta17;

      tmpMeta18 = mmc_mk_cons(_rowLabelDraw, _rowLabelScripts);
      _rowLabelScripts = tmpMeta18;

      tmpMeta19 = stringAppend(_OMC_LIT11,listGet(_columNames, _rowIdx));
      tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT9);
      tmpMeta21 = stringAppend(tmpMeta20,intString(_rowIdx));
      tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT10);
      _colLabelDraw = tmpMeta22;

      tmpMeta23 = mmc_mk_cons(_colLabelDraw, _colLabelScripts);
      _colLabelScripts = tmpMeta23;

      {
        modelica_metatype _colIdx;
        for (tmpMeta24 = _row; !listEmpty(tmpMeta24); tmpMeta24=MMC_CDR(tmpMeta24))
        {
          _colIdx = MMC_CAR(tmpMeta24);
          if((mmc_unbox_integer(_colIdx) > ((modelica_integer) 0)))
          {
            tmpMeta25 = stringAppend(_OMC_LIT12,intString(_rowIdx));
            tmpMeta26 = stringAppend(tmpMeta25,_OMC_LIT13);
            tmpMeta27 = stringAppend(tmpMeta26,intString(mmc_unbox_integer(_colIdx)));
            tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT14);
            _blockDraw = tmpMeta28;

            tmpMeta29 = mmc_mk_cons(_blockDraw, _scripts);
            _scripts = tmpMeta29;
          }
        }
      }
    }
  }

  _scripts = listAppend(_rowLabelScripts, _scripts);

  tmpMeta35 = stringAppend(_OMC_LIT15,intString(_size));
  tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT16);
  tmpMeta34 = mmc_mk_cons(tmpMeta36, _scripts);
  _scripts = tmpMeta34;

  tmpMeta37 = mmc_mk_cons(_OMC_LIT17, _scripts);
  _scripts = tmpMeta37;

  _scripts = listAppend(_colLabelScripts, _scripts);

  _doc = omc_DumpHTML_emptyDocumentWithToggleFunktion(threadData);

  tmpMeta39 = stringAppend(_OMC_LIT18,intString((_size) * (_blockSize) + _matrixMargin));
  tmpMeta40 = stringAppend(tmpMeta39,_OMC_LIT19);
  tmpMeta41 = stringAppend(_OMC_LIT20,intString((_size) * (_blockSize) + _matrixMargin));
  tmpMeta42 = stringAppend(tmpMeta41,_OMC_LIT19);
  tmpMeta38 = mmc_mk_cons(tmpMeta40, mmc_mk_cons(tmpMeta42, MMC_REFSTRUCTLIT(mmc_nil)));
  tmpMeta43 = mmc_mk_box2(10, &DumpHTML_Tag_CANVAS__desc, tmpMeta38);
  _canvas = tmpMeta43;

  _doc = omc_DumpHTML_addScriptBody(threadData, _OMC_LIT21, omc_List_fold(threadData, _scripts, boxvar_stringAppend, _OMC_LIT22), _doc);

  _doc = omc_DumpHTML_addHeadTag(threadData, _canvas, _doc);

  tmpMeta44 = stringAppend(_fileName,_OMC_LIT23);
  omc_DumpHTML_dumpDocument(threadData, _doc, tmpMeta44);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpMatching2(threadData_t *threadData, modelica_metatype _v, modelica_integer _i, modelica_integer _len, modelica_string _prefixId, modelica_metatype _inTags)
{
  modelica_metatype _outTags = NULL;
  modelica_integer _eqn;
  modelica_string _s = NULL;
  modelica_string _s2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTags has no default value.
  // _eqn has no default value.
  // _s has no default value.
  // _s2 has no default value.
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
          modelica_boolean tmp5;
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = (_i <= _len);
          if (1 /* true */ != tmp5) goto goto_1;

          _s = intString(_i);

          _eqn = mmc_unbox_integer(arrayGet(_v,_i) /* DAE.ASUB */);

          _s2 = intString(_eqn);

          tmpMeta6 = stringAppend(_OMC_LIT24,_prefixId);
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT25);
          tmpMeta8 = stringAppend(tmpMeta7,_s);
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT26);
          tmpMeta10 = stringAppend(tmpMeta9,_prefixId);
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT27);
          tmpMeta12 = stringAppend(tmpMeta11,_s);
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT28);
          tmpMeta14 = stringAppend(tmpMeta13,_prefixId);
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT29);
          tmpMeta16 = stringAppend(tmpMeta15,_s2);
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT26);
          tmpMeta18 = stringAppend(tmpMeta17,_prefixId);
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT30);
          tmpMeta20 = stringAppend(tmpMeta19,_s2);
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT31);
          _s = tmpMeta21;

          tmpMeta23 = mmc_mk_box2(6, &DumpHTML_Tag_LINE__desc, _s);
          tmpMeta22 = mmc_mk_cons(tmpMeta23, _inTags);
          _outTags = omc_DumpHTML_dumpMatching2(threadData, _v, ((modelica_integer) 1) + _i, _len, _prefixId, tmpMeta22);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _outTags = _inTags;
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
  return _outTags;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DumpHTML_dumpMatching2(threadData_t *threadData, modelica_metatype _v, modelica_metatype _i, modelica_metatype _len, modelica_metatype _prefixId, modelica_metatype _inTags)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outTags = NULL;
  tmp1 = mmc_unbox_integer(_i);
  tmp2 = mmc_unbox_integer(_len);
  _outTags = omc_DumpHTML_dumpMatching2(threadData, _v, tmp1, tmp2, _prefixId, _inTags);
  /* skip box _outTags; list<DumpHTML.Tag> */
  return _outTags;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpMatching(threadData_t *threadData, modelica_metatype _v, modelica_string _prefixId, modelica_metatype _inTags)
{
  modelica_metatype _outTags = NULL;
  modelica_integer _len;
  modelica_string _len_str = NULL;
  modelica_metatype _tags = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTags has no default value.
  // _len has no default value.
  // _len_str has no default value.
  // _tags has no default value.
  _outTags = omc_DumpHTML_addHeadingTag(threadData, ((modelica_integer) 2), _OMC_LIT32, _inTags);

  _len = arrayLength(_v);

  tmpMeta1 = stringAppend(intString(_len),_OMC_LIT33);
  _len_str = tmpMeta1;

  _outTags = omc_DumpHTML_addLineTag(threadData, _len_str, _outTags);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _tags = omc_DumpHTML_dumpMatching2(threadData, _v, ((modelica_integer) 1), _len, _prefixId, tmpMeta2);

  tmpMeta3 = stringAppend(_OMC_LIT34,_prefixId);
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT35);
  _outTags = omc_DumpHTML_addHyperLinkTag(threadData, tmpMeta4, _OMC_LIT36, _OMC_LIT37, _outTags);

  tmpMeta5 = stringAppend(_prefixId,_OMC_LIT38);
  _outTags = omc_DumpHTML_addDivisionTag(threadData, tmpMeta5, _OMC_LIT46, _tags, _outTags);
  _return: OMC_LABEL_UNUSED
  return _outTags;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpFullMatching(threadData_t *threadData, modelica_metatype _inMatch, modelica_string _prefixId, modelica_metatype _inTags)
{
  modelica_metatype _outTags = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTags has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inMatch;
    {
      modelica_metatype _ass1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ass1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inTags;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _ass1 = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_DumpHTML_dumpMatching(threadData, _ass1, _prefixId, _inTags);
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
  _outTags = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTags;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpEqn(threadData_t *threadData, modelica_metatype _inEquation, modelica_string _prefixId, modelica_metatype _inTpl)
{
  modelica_metatype _oTpl = NULL;
  modelica_metatype _tags = NULL;
  modelica_integer _i;
  modelica_string _ln = NULL;
  modelica_string _istr = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTpl has no default value.
  // _tags has no default value.
  // _i has no default value.
  // _ln has no default value.
  // _istr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _tags = tmpMeta2;
  _i = tmp4  /* pattern as ty=Integer */;

  _istr = intString(_i);

  tmpMeta5 = stringAppend(_prefixId,_OMC_LIT29);
  tmpMeta6 = stringAppend(tmpMeta5,_istr);
  _ln = tmpMeta6;

  _tags = omc_DumpHTML_addAnkerTag(threadData, _ln, _tags);

  tmpMeta7 = stringAppend(_istr,_OMC_LIT47);
  tmpMeta8 = stringAppend(tmpMeta7,intString(omc_BackendEquation_equationSize(threadData, _inEquation)));
  tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT48);
  tmpMeta10 = stringAppend(tmpMeta9,omc_BackendDump_equationString(threadData, _inEquation));
  _ln = tmpMeta10;

  _tags = omc_DumpHTML_addLineTag(threadData, _ln, _tags);

  tmpMeta11 = mmc_mk_box2(0, _tags, mmc_mk_integer(((modelica_integer) 1) + _i));
  _oTpl = tmpMeta11;
  _return: OMC_LABEL_UNUSED
  return _oTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpEqns(threadData_t *threadData, modelica_metatype _eqns, modelica_string _prefixId, modelica_metatype _inTags)
{
  modelica_metatype _outTags = NULL;
  modelica_metatype _tags = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTags has no default value.
  // _tags has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_List_fold1(threadData, _eqns, boxvar_DumpHTML_dumpEqn, _prefixId, _OMC_LIT49);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _tags = tmpMeta2;

  tmpMeta3 = stringAppend(_OMC_LIT34,_prefixId);
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT50);
  _outTags = omc_DumpHTML_addHyperLinkTag(threadData, tmpMeta4, _OMC_LIT51, _OMC_LIT52, _inTags);

  tmpMeta5 = stringAppend(_prefixId,_OMC_LIT53);
  _outTags = omc_DumpHTML_addDivisionTag(threadData, tmpMeta5, _OMC_LIT56, _tags, _outTags);
  _return: OMC_LABEL_UNUSED
  return _outTags;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpVar(threadData_t *threadData, modelica_metatype _inVar, modelica_string _prefixId, modelica_metatype _inTpl)
{
  modelica_metatype _oTpl = NULL;
  modelica_metatype _tags = NULL;
  modelica_integer _i;
  modelica_string _ln = NULL;
  modelica_string _istr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTpl has no default value.
  // _tags has no default value.
  // _i has no default value.
  // _ln has no default value.
  // _istr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _tags = tmpMeta2;
  _i = tmp4  /* pattern as ty=Integer */;

  _istr = intString(_i);

  tmpMeta5 = stringAppend(_prefixId,_OMC_LIT25);
  tmpMeta6 = stringAppend(tmpMeta5,_istr);
  _ln = tmpMeta6;

  _tags = omc_DumpHTML_addAnkerTag(threadData, _ln, _tags);

  tmpMeta7 = stringAppend(_istr,_OMC_LIT57);
  tmpMeta8 = stringAppend(tmpMeta7,omc_BackendDump_varString(threadData, _inVar));
  _ln = tmpMeta8;

  _tags = omc_DumpHTML_addLineTag(threadData, _ln, _tags);

  tmpMeta9 = mmc_mk_box2(0, _tags, mmc_mk_integer(((modelica_integer) 1) + _i));
  _oTpl = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _oTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_printVarList(threadData_t *threadData, modelica_metatype _vars, modelica_string _prefixId, modelica_metatype _inTags)
{
  modelica_metatype _outTags = NULL;
  modelica_metatype _tags = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTags has no default value.
  // _tags has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_List_fold1(threadData, _vars, boxvar_DumpHTML_dumpVar, _prefixId, _OMC_LIT49);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _tags = tmpMeta2;

  tmpMeta3 = stringAppend(_OMC_LIT34,_prefixId);
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT58);
  _outTags = omc_DumpHTML_addHyperLinkTag(threadData, tmpMeta4, _OMC_LIT59, _OMC_LIT60, _inTags);

  tmpMeta5 = stringAppend(_prefixId,_OMC_LIT61);
  _outTags = omc_DumpHTML_addDivisionTag(threadData, tmpMeta5, _OMC_LIT64, _tags, _outTags);
  _return: OMC_LABEL_UNUSED
  return _outTags;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_dumpEqSystem(threadData_t *threadData, modelica_metatype _inEqSystem, modelica_string _inPrefixIdstr, modelica_metatype _inTpl)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype _vars = NULL;
  modelica_integer _i;
  modelica_string _varlen_str = NULL;
  modelica_string _eqnlen_str = NULL;
  modelica_string _prefixId = NULL;
  modelica_metatype _eqnsl = NULL;
  modelica_metatype _vars1 = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mT = NULL;
  modelica_metatype _matching = NULL;
  modelica_metatype _doc = NULL;
  modelica_metatype _tags = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  // _vars has no default value.
  // _i has no default value.
  // _varlen_str has no default value.
  // _eqnlen_str has no default value.
  // _prefixId has no default value.
  // _eqnsl has no default value.
  // _vars1 has no default value.
  // _eqns has no default value.
  // _m has no default value.
  // _mT has no default value.
  // _matching has no default value.
  // _doc has no default value.
  // _tags has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inEqSystem;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  _vars1 = tmpMeta2;
  _eqns = tmpMeta3;
  _m = tmpMeta4;
  _mT = tmpMeta5;
  _matching = tmpMeta6;

  /* Pattern-matching assignment */
  tmpMeta7 = _inTpl;
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  _doc = tmpMeta8;
  _i = tmp10  /* pattern as ty=Integer */;

  tmpMeta11 = stringAppend(_inPrefixIdstr,_OMC_LIT65);
  tmpMeta12 = stringAppend(tmpMeta11,intString(_i));
  _prefixId = tmpMeta12;

  _vars = omc_BackendVariable_varList(threadData, _vars1);

  tmpMeta13 = stringAppend(_OMC_LIT66,intString(listLength(_vars)));
  tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT67);
  _varlen_str = tmpMeta14;

  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
  _tags = omc_DumpHTML_addHeadingTag(threadData, ((modelica_integer) 2), _varlen_str, tmpMeta15);

  _tags = omc_DumpHTML_printVarList(threadData, _vars, _prefixId, _tags);

  _eqnsl = omc_BackendEquation_equationList(threadData, _eqns);

  tmpMeta16 = stringAppend(_OMC_LIT68,intString(listLength(_eqnsl)));
  tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT13);
  tmpMeta18 = stringAppend(tmpMeta17,intString(omc_BackendEquation_equationArraySize(threadData, _eqns)));
  tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT67);
  _eqnlen_str = tmpMeta19;

  _tags = omc_DumpHTML_addHeadingTag(threadData, ((modelica_integer) 2), _eqnlen_str, _tags);

  _tags = omc_DumpHTML_dumpEqns(threadData, _eqnsl, _prefixId, _tags);

  _tags = omc_DumpHTML_dumpFullMatching(threadData, _matching, _prefixId, _tags);

  _doc = omc_DumpHTML_addLine(threadData, _OMC_LIT69, _doc);

  tmpMeta20 = stringAppend(_OMC_LIT34,_prefixId);
  tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT70);
  tmpMeta22 = stringAppend(_OMC_LIT72,intString(_i));
  _doc = omc_DumpHTML_addHyperLink(threadData, tmpMeta21, _OMC_LIT71, tmpMeta22, _doc);

  tmpMeta23 = stringAppend(_prefixId,_OMC_LIT73);
  _doc = omc_DumpHTML_addDivision(threadData, tmpMeta23, _OMC_LIT45, _tags, _doc);

  tmpMeta24 = mmc_mk_box2(0, _doc, mmc_mk_integer(((modelica_integer) 1) + _i));
  _outTpl = tmpMeta24;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}

DLLDirection
void omc_DumpHTML_dumpDAE(threadData_t *threadData, modelica_metatype _inDAE, modelica_string _inHeader, modelica_string _inFilename)
{
  modelica_metatype _doc = NULL;
  modelica_string _str = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _doc has no default value.
  // _str has no default value.
  // _eqs has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inDAE;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _eqs = tmpMeta2;

  _doc = omc_DumpHTML_emptyDocumentWithToggleFunktion(threadData);

  _doc = omc_DumpHTML_addHeading(threadData, ((modelica_integer) 1), _inHeader, _doc);

  _str = intString(((modelica_integer)floor(omc_System_time(threadData))));

  /* Pattern-matching assignment */
  tmpMeta3 = mmc_mk_box2(0, _doc, mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta4 = omc_List_fold1(threadData, _eqs, boxvar_DumpHTML_dumpEqSystem, _str, tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  _doc = tmpMeta5;

  tmpMeta6 = stringAppend(_str,_inFilename);
  omc_DumpHTML_dumpDocument(threadData, _doc, tmpMeta6);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_DumpHTML_dumpStyle(threadData_t *threadData, modelica_metatype _inStyle)
{
  modelica_string _outBuffer = NULL;
  modelica_string _name = NULL;
  modelica_string _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBuffer has no default value.
  // _name has no default value.
  // _value has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inStyle;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _name = tmpMeta2;
  _value = tmpMeta3;

  tmpMeta4 = stringAppend(_name,_OMC_LIT57);
  tmpMeta5 = stringAppend(tmpMeta4,_value);
  _outBuffer = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outBuffer;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_DumpHTML_dumpTag(threadData_t *threadData, modelica_metatype _tag, modelica_string _iBuffer)
{
  modelica_string _oBuffer = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oBuffer has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tag;
    {
      modelica_integer _i;
      modelica_string _t = NULL;
      modelica_string _t1 = NULL;
      modelica_string _t2 = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _style = NULL;
      modelica_metatype _tags = NULL;
      int tmp4;
      // _i has no default value.
      // _t has no default value.
      // _t1 has no default value.
      // _t2 has no default value.
      // _attr has no default value.
      // _style has no default value.
      // _tags has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp6 = mmc_unbox_integer(tmpMeta5);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _i = tmp6  /* pattern as ty=Integer */;
          _t = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_iBuffer,_OMC_LIT74);
          tmpMeta9 = stringAppend(tmpMeta8,intString(_i));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT75);
          tmpMeta11 = stringAppend(tmpMeta10,_t);
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT76);
          tmpMeta13 = stringAppend(tmpMeta12,intString(_i));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT75);
          tmp1 = tmpMeta14;
          goto tmp3_done;
        }
        case 4: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _t = tmpMeta15;
          _t1 = tmpMeta16;
          _t2 = tmpMeta17;
          /* Pattern matching succeeded */
          tmpMeta18 = stringAppend(_iBuffer,_OMC_LIT77);
          tmpMeta19 = stringAppend(tmpMeta18,_t);
          tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT78);
          tmpMeta21 = stringAppend(tmpMeta20,_t1);
          tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT79);
          tmpMeta23 = stringAppend(tmpMeta22,_t2);
          tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT31);
          tmp1 = tmpMeta24;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _t = tmpMeta25;
          /* Pattern matching succeeded */
          tmpMeta26 = stringAppend(_iBuffer,_OMC_LIT80);
          tmpMeta27 = stringAppend(tmpMeta26,_t);
          tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT81);
          tmp1 = tmpMeta28;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _t = tmpMeta29;
          /* Pattern matching succeeded */
          tmpMeta30 = stringAppend(_iBuffer,_OMC_LIT82);
          tmpMeta31 = stringAppend(tmpMeta30,_t);
          tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT83);
          tmp1 = tmpMeta32;
          goto tmp3_done;
        }
        case 7: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _t = tmpMeta33;
          _style = tmpMeta34;
          _tags = tmpMeta35;
          /* Pattern matching succeeded */
          _t1 = stringDelimitList(omc_List_map(threadData, _style, boxvar_DumpHTML_dumpStyle), _OMC_LIT84);

          _t2 = omc_List_fold(threadData, _tags, boxvar_DumpHTML_dumpTag, _OMC_LIT22);
          tmpMeta36 = stringAppend(_iBuffer,_OMC_LIT85);
          tmpMeta37 = stringAppend(tmpMeta36,_t);
          tmpMeta38 = stringAppend(tmpMeta37,_OMC_LIT86);
          tmpMeta39 = stringAppend(tmpMeta38,_t1);
          tmpMeta40 = stringAppend(tmpMeta39,_OMC_LIT87);
          tmpMeta41 = stringAppend(tmpMeta40,_t2);
          tmpMeta42 = stringAppend(tmpMeta41,_OMC_LIT88);
          tmp1 = tmpMeta42;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _t1 = tmpMeta43;
          _t2 = tmpMeta44;
          /* Pattern matching succeeded */
          tmpMeta45 = stringAppend(_iBuffer,_OMC_LIT89);
          tmpMeta46 = stringAppend(tmpMeta45,_t1);
          tmpMeta47 = stringAppend(tmpMeta46,_OMC_LIT87);
          tmpMeta48 = stringAppend(tmpMeta47,_t2);
          tmpMeta49 = stringAppend(tmpMeta48,_OMC_LIT90);
          tmp1 = tmpMeta49;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _t1 = tmpMeta50;
          _t2 = tmpMeta51;
          /* Pattern matching succeeded */
          tmpMeta52 = stringAppend(_iBuffer,_OMC_LIT91);
          tmpMeta53 = stringAppend(tmpMeta52,_t1);
          tmpMeta54 = stringAppend(tmpMeta53,_OMC_LIT87);
          tmpMeta55 = stringAppend(tmpMeta54,_t2);
          tmpMeta56 = stringAppend(tmpMeta55,_OMC_LIT92);
          tmp1 = tmpMeta56;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,1) == 0) goto tmp3_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _attr = tmpMeta57;
          /* Pattern matching succeeded */
          _t1 = stringDelimitList(_attr, _OMC_LIT93);
          tmpMeta58 = stringAppend(_iBuffer,_OMC_LIT94);
          tmpMeta59 = stringAppend(tmpMeta58,_t1);
          tmpMeta60 = stringAppend(tmpMeta59,_OMC_LIT87);
          tmp1 = tmpMeta60;
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
  _oBuffer = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oBuffer;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addBodyTag(threadData_t *threadData, modelica_metatype _tag, modelica_metatype _inDoc)
{
  modelica_metatype _outDoc = NULL;
  modelica_string _docType = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDoc has no default value.
  // _docType has no default value.
  // _head has no default value.
  // _body has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inDoc;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _docType = tmpMeta2;
  _head = tmpMeta3;
  _body = tmpMeta4;

  tmpMeta5 = mmc_mk_cons(_tag, _body);
  tmpMeta6 = mmc_mk_box4(3, &DumpHTML_Document_DOCUMENT__desc, _docType, _head, tmpMeta5);
  _outDoc = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _outDoc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addHeadTag(threadData_t *threadData, modelica_metatype _tag, modelica_metatype _inDoc)
{
  modelica_metatype _outDoc = NULL;
  modelica_string _docType = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDoc has no default value.
  // _docType has no default value.
  // _head has no default value.
  // _body has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inDoc;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _docType = tmpMeta2;
  _head = tmpMeta3;
  _body = tmpMeta4;

  tmpMeta5 = mmc_mk_cons(_tag, _head);
  tmpMeta6 = mmc_mk_box4(3, &DumpHTML_Document_DOCUMENT__desc, _docType, tmpMeta5, _body);
  _outDoc = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _outDoc;
}

PROTECTED_FUNCTION_STATIC void omc_DumpHTML_dumpDocument(threadData_t *threadData, modelica_metatype _inDoc, modelica_string _name)
{
  modelica_string _str = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _body = NULL;
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
  // _str has no default value.
  // _head has no default value.
  // _body has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inDoc;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _str = tmpMeta2;
  _head = tmpMeta3;
  _body = tmpMeta4;

  tmpMeta5 = stringAppend(_str,_OMC_LIT95);
  _str = tmpMeta5;

  _str = omc_List_fold(threadData, listReverse(_head), boxvar_DumpHTML_dumpTag, _str);

  tmpMeta6 = stringAppend(_str,_OMC_LIT96);
  _str = tmpMeta6;

  tmpMeta7 = stringAppend(_str,_OMC_LIT97);
  _str = tmpMeta7;

  _str = omc_List_fold(threadData, listReverse(_body), boxvar_DumpHTML_dumpTag, _str);

  tmpMeta8 = stringAppend(_str,_OMC_LIT98);
  _str = tmpMeta8;

  omc_System_writeFile(threadData, _name, _str);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addBodyTags(threadData_t *threadData, modelica_metatype _tags, modelica_metatype _inDoc)
{
  modelica_metatype _outDoc = NULL;
  modelica_string _docType = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype _t = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDoc has no default value.
  // _docType has no default value.
  // _head has no default value.
  // _body has no default value.
  // _t has no default value.
  _t = listReverse(_tags);

  /* Pattern-matching assignment */
  tmpMeta1 = _inDoc;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _docType = tmpMeta2;
  _head = tmpMeta3;
  _body = tmpMeta4;

  tmpMeta5 = mmc_mk_box4(3, &DumpHTML_Document_DOCUMENT__desc, _docType, _head, listAppend(_body, _t));
  _outDoc = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outDoc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addDivisionTag(threadData_t *threadData, modelica_string _id, modelica_metatype _style, modelica_metatype _tags, modelica_metatype _inTags)
{
  modelica_metatype _outTags = NULL;
  modelica_metatype _t = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTags has no default value.
  // _t has no default value.
  _t = listReverse(_tags);

  tmpMeta2 = mmc_mk_box4(7, &DumpHTML_Tag_DIVISION__desc, _id, _style, _t);
  tmpMeta1 = mmc_mk_cons(tmpMeta2, _inTags);
  _outTags = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTags;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addDivision(threadData_t *threadData, modelica_string _id, modelica_metatype _style, modelica_metatype _tags, modelica_metatype _inDoc)
{
  modelica_metatype _outDoc = NULL;
  modelica_metatype _t = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDoc has no default value.
  // _t has no default value.
  _t = listReverse(_tags);

  tmpMeta1 = mmc_mk_box4(7, &DumpHTML_Tag_DIVISION__desc, _id, _style, _t);
  _outDoc = omc_DumpHTML_addBodyTag(threadData, tmpMeta1, _inDoc);
  _return: OMC_LABEL_UNUSED
  return _outDoc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addLineTag(threadData_t *threadData, modelica_string _text, modelica_metatype _inTags)
{
  modelica_metatype _outTags = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTags has no default value.
  tmpMeta2 = mmc_mk_box2(6, &DumpHTML_Tag_LINE__desc, _text);
  tmpMeta1 = mmc_mk_cons(tmpMeta2, _inTags);
  _outTags = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTags;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addLine(threadData_t *threadData, modelica_string _text, modelica_metatype _inDoc)
{
  modelica_metatype _outDoc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDoc has no default value.
  tmpMeta1 = mmc_mk_box2(6, &DumpHTML_Tag_LINE__desc, _text);
  _outDoc = omc_DumpHTML_addBodyTag(threadData, tmpMeta1, _inDoc);
  _return: OMC_LABEL_UNUSED
  return _outDoc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addAnkerTag(threadData_t *threadData, modelica_string _name, modelica_metatype _inTags)
{
  modelica_metatype _outTags = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTags has no default value.
  tmpMeta2 = mmc_mk_box2(5, &DumpHTML_Tag_ANKER__desc, _name);
  tmpMeta1 = mmc_mk_cons(tmpMeta2, _inTags);
  _outTags = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTags;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addHyperLinkTag(threadData_t *threadData, modelica_string _href, modelica_string _title, modelica_string _text, modelica_metatype _inTags)
{
  modelica_metatype _outTags = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTags has no default value.
  tmpMeta2 = mmc_mk_box4(4, &DumpHTML_Tag_HYPERLINK__desc, _href, _title, _text);
  tmpMeta1 = mmc_mk_cons(tmpMeta2, _inTags);
  _outTags = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTags;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addHyperLink(threadData_t *threadData, modelica_string _href, modelica_string _title, modelica_string _text, modelica_metatype _inDoc)
{
  modelica_metatype _outDoc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDoc has no default value.
  tmpMeta1 = mmc_mk_box4(4, &DumpHTML_Tag_HYPERLINK__desc, _href, _title, _text);
  _outDoc = omc_DumpHTML_addBodyTag(threadData, tmpMeta1, _inDoc);
  _return: OMC_LABEL_UNUSED
  return _outDoc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addHeadingTag(threadData_t *threadData, modelica_integer _stage, modelica_string _text, modelica_metatype _inTags)
{
  modelica_metatype _outTags = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTags has no default value.
  tmpMeta2 = mmc_mk_box3(3, &DumpHTML_Tag_HEADING__desc, mmc_mk_integer(_stage), _text);
  tmpMeta1 = mmc_mk_cons(tmpMeta2, _inTags);
  _outTags = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTags;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DumpHTML_addHeadingTag(threadData_t *threadData, modelica_metatype _stage, modelica_metatype _text, modelica_metatype _inTags)
{
  modelica_integer tmp1;
  modelica_metatype _outTags = NULL;
  tmp1 = mmc_unbox_integer(_stage);
  _outTags = omc_DumpHTML_addHeadingTag(threadData, tmp1, _text, _inTags);
  /* skip box _outTags; list<DumpHTML.Tag> */
  return _outTags;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addHeading(threadData_t *threadData, modelica_integer _stage, modelica_string _text, modelica_metatype _inDoc)
{
  modelica_metatype _outDoc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDoc has no default value.
  tmpMeta1 = mmc_mk_box3(3, &DumpHTML_Tag_HEADING__desc, mmc_mk_integer(_stage), _text);
  _outDoc = omc_DumpHTML_addBodyTag(threadData, tmpMeta1, _inDoc);
  _return: OMC_LABEL_UNUSED
  return _outDoc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DumpHTML_addHeading(threadData_t *threadData, modelica_metatype _stage, modelica_metatype _text, modelica_metatype _inDoc)
{
  modelica_integer tmp1;
  modelica_metatype _outDoc = NULL;
  tmp1 = mmc_unbox_integer(_stage);
  _outDoc = omc_DumpHTML_addHeading(threadData, tmp1, _text, _inDoc);
  /* skip box _outDoc; DumpHTML.Document */
  return _outDoc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addScriptBody(threadData_t *threadData, modelica_string _type_, modelica_string _script, modelica_metatype _inDoc)
{
  modelica_metatype _outDoc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDoc has no default value.
  tmpMeta1 = mmc_mk_box3(9, &DumpHTML_Tag_SCRIPT__BODY__desc, _type_, _script);
  _outDoc = omc_DumpHTML_addBodyTag(threadData, tmpMeta1, _inDoc);
  _return: OMC_LABEL_UNUSED
  return _outDoc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_addScript(threadData_t *threadData, modelica_string _type_, modelica_string _script, modelica_metatype _inDoc)
{
  modelica_metatype _outDoc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDoc has no default value.
  tmpMeta1 = mmc_mk_box3(8, &DumpHTML_Tag_SCRIPT__desc, _type_, _script);
  _outDoc = omc_DumpHTML_addHeadTag(threadData, tmpMeta1, _inDoc);
  _return: OMC_LABEL_UNUSED
  return _outDoc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpHTML_emptyDocumentWithToggleFunktion(threadData_t *threadData)
{
  modelica_metatype _outDoc = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDoc has no default value.
  _outDoc = omc_DumpHTML_addScript(threadData, _OMC_LIT99, _OMC_LIT100, _OMC_LIT101);
  _return: OMC_LABEL_UNUSED
  return _outDoc;
}

