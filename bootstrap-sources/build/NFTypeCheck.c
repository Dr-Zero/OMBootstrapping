#include "omc_simulation_settings.h"
#include "NFTypeCheck.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Type '%s' of expression '%s' in '%s' does not implement the required operator '%s'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,82,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(358)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "sum"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,3,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "'+'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,3,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "'0'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,3,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,1) {_OMC_LIT7,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,1) {_OMC_LIT6,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,0,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Integer or Real, or operator record"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,35,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "scalar Integer or Real"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,22,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "scalar enumeration, Boolean, Integer, or Real"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,45,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "product"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,7,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,3,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,3,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "Invalid expression '%s' of type %s in %s reduction, expected %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,64,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(344)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,1,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "Dimension '%s' of type %s is not an integer expression or an enumeration or Boolean type name."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,94,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(301)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "Type mismatch in binding %s = %s, expected subtype of %s, got type %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,70,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT24}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(135)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "Type mismatch in binding '%s = %s', expected array dimensions %s, got %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,73,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(347)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "Non-array modification '%s' for array component '%s', possibly due to missing 'each'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,85,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(348)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,1,10) {&NFDimension_UNKNOWN__desc,}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "NFTypeCheck.matchBinding got untyped binding "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,45,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFTypeCheck.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,78,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT36_6,1.770032059e9);
#define _OMC_LIT36_6 MMC_REFREALLIT(_OMC_LIT_STRUCT36_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2983)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2983)),MMC_IMMEDIATE(MMC_TAGFIXNUM(118)),_OMC_LIT36_6}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,1,6) {&NFType_BOOLEAN__desc,}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "Step size %s in range is too small."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,35,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(296)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,1,4) {&NFType_REAL__desc,}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT46,5e-15);
#define _OMC_LIT46 MMC_REFREALLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,4) {&NFExpression_REAL__desc,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "floor"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,5,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,1,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT53,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT56,0.0);
#define _OMC_LIT56 MMC_REFREALLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT10,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT56}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT50,_OMC_LIT45,_OMC_LIT52,_OMC_LIT52,_OMC_LIT54,_OMC_LIT55,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT57}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,1,1) {_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,1,9) {&NFInstNode_InstNodeType_NORMAL__COMP__desc,}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT51,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT59,_OMC_LIT50,_OMC_LIT60}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,2,1) {_OMC_LIT61,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,3,4) {&DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,1,3) {&DAE_FunctionParallelism_FP__NON__PARALLEL__desc,}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,7,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT63,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT64,_OMC_LIT65}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,7,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT69}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "i"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,1,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT50,_OMC_LIT37,_OMC_LIT52,_OMC_LIT52,_OMC_LIT54,_OMC_LIT55,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT57}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,1,1) {_OMC_LIT72}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT71,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT73,_OMC_LIT50,_OMC_LIT60}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,1) {_OMC_LIT74,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "div"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,3,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT76}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,2,1) {_OMC_LIT74,_OMC_LIT75}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT16}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "Range of type %s may not specify a step size."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,45,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT80}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(297)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT81}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "Range has invalid type %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,26,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT83}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(298)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "__Any"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,5,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "__Scalar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,8,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "__Array"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,7,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "__Connector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,11,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "__ComponentExpression"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,21,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "__Block"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,7,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "Allowing usage of enumeration expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,42,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data " as Integer: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,13,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data ". This is non-standard Modelica, use Integer("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,45,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data ") instead!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,10,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "allowNonStandardModelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,24,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT98,2,9) {&Flags_FlagData_STRING__LIST__FLAG__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT98 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "nonStdMultipleExternalDeclarations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,34,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "Allow several external declarations in functions.\nSee: https://specification.modelica.org/maint/3.5/functions.html#function-as-a-specialized-class"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,146,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT100}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,2,0) {_OMC_LIT99,_OMC_LIT101}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "nonStdEnumerationAsIntegers"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,27,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "Allow enumeration as integer without casting via Integer(Enum).\nSee: https://specification.modelica.org/maint/3.5/class-predefined-types-and-declarations.html#type-conversion-of-enumeration-values-to-string-or-integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,217,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT104}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT106,2,0) {_OMC_LIT103,_OMC_LIT105}};
#define _OMC_LIT106 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "nonStdIntegersAsEnumeration"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,27,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "Allow integer as enumeration without casting via Enum(Integer).\nSee: https://specification.modelica.org/maint/3.5/class-predefined-types-and-declarations.html#type-conversion-of-integer-to-enumeration-values"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,207,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT109,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT108}};
#define _OMC_LIT109 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,2,0) {_OMC_LIT107,_OMC_LIT109}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "nonStdDifferentCaseFileVsClassName"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,34,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "Allow directory or file with different case in the name than the contained class name.\nSee: https://specification.modelica.org/maint/3.5/packages.html#mapping-package-class-structures-to-a-hierarchical-file-system"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,213,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT113,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT112}};
#define _OMC_LIT113 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT113)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT114,2,0) {_OMC_LIT111,_OMC_LIT113}};
#define _OMC_LIT114 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "nonStdTopLevelOuter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,19,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "Allow top level outer.\nSee: https://specification.modelica.org/maint/3.6/scoping-name-lookup-and-flattening.html#S4.p1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,118,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT117,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT116}};
#define _OMC_LIT117 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,2,0) {_OMC_LIT115,_OMC_LIT117}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "protectedAccess"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,15,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "Allow access of protected elements"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,34,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT121,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT120}};
#define _OMC_LIT121 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT121)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT122,2,0) {_OMC_LIT119,_OMC_LIT121}};
#define _OMC_LIT122 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "reinitInAlgorithms"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,18,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "Allow reinit in algorithm sections"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,34,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT125,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT124}};
#define _OMC_LIT125 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT125)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT126,2,0) {_OMC_LIT123,_OMC_LIT125}};
#define _OMC_LIT126 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "unbalancedModel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,15,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "Allow models to be locally unbalanced and to have unbalanced connectors"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,71,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT129,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT128}};
#define _OMC_LIT129 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT129)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT130,2,0) {_OMC_LIT127,_OMC_LIT129}};
#define _OMC_LIT130 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "implicitParameterStartAttribute"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,31,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "Allow fixed parameters with no binding or start attribute"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,57,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT133,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT132}};
#define _OMC_LIT133 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT133)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT134,2,0) {_OMC_LIT131,_OMC_LIT133}};
#define _OMC_LIT134 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "initialSimplified"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,17,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "Allow use of experimental operator `initialSimplified()`"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,56,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT137,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT136}};
#define _OMC_LIT137 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT137)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT138,2,0) {_OMC_LIT135,_OMC_LIT137}};
#define _OMC_LIT138 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "illegalConditionalContext"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,25,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "Allow use of components with false conditions in illegal contexts"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,65,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT141,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT140}};
#define _OMC_LIT141 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT141)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT142,2,0) {_OMC_LIT139,_OMC_LIT141}};
#define _OMC_LIT142 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT142)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT143,2,1) {_OMC_LIT142,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT143 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT143)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT144,2,1) {_OMC_LIT138,_OMC_LIT143}};
#define _OMC_LIT144 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT144)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT145,2,1) {_OMC_LIT134,_OMC_LIT144}};
#define _OMC_LIT145 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT145)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT146,2,1) {_OMC_LIT130,_OMC_LIT145}};
#define _OMC_LIT146 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT146)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT147,2,1) {_OMC_LIT126,_OMC_LIT146}};
#define _OMC_LIT147 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT147)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT148,2,1) {_OMC_LIT122,_OMC_LIT147}};
#define _OMC_LIT148 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT148)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT149,2,1) {_OMC_LIT118,_OMC_LIT148}};
#define _OMC_LIT149 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT149)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT150,2,1) {_OMC_LIT114,_OMC_LIT149}};
#define _OMC_LIT150 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT150)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT151,2,1) {_OMC_LIT110,_OMC_LIT150}};
#define _OMC_LIT151 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT151)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT152,2,1) {_OMC_LIT106,_OMC_LIT151}};
#define _OMC_LIT152 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT152)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT153,2,1) {_OMC_LIT102,_OMC_LIT152}};
#define _OMC_LIT153 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT153)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT154,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT153}};
#define _OMC_LIT154 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT154)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT155,1,1) {_OMC_LIT154}};
#define _OMC_LIT155 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT155)
#define _OMC_LIT156_data "Flags to allow non-standard Modelica."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT156,37,_OMC_LIT156_data);
#define _OMC_LIT156 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT156)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT157,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT156}};
#define _OMC_LIT157 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT157)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT158,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(143)),_OMC_LIT96,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT97,_OMC_LIT98,_OMC_LIT155,_OMC_LIT157}};
#define _OMC_LIT158 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data "Allowing usage of Integer expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,38,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
#define _OMC_LIT160_data " as enumeration: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT160,17,_OMC_LIT160_data);
#define _OMC_LIT160 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data ". This is non-standard Modelica, use the actual enumeration instead!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,68,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT162,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT162 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data "Allowing casting of enumeration expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,44,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#define _OMC_LIT164_data " to Integer: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT164,13,_OMC_LIT164_data);
#define _OMC_LIT164 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT164)
#define _OMC_LIT165_data "Allowing casting of Integer expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT165,40,_OMC_LIT165_data);
#define _OMC_LIT165 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT165)
#define _OMC_LIT166_data " to enumeration: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT166,17,_OMC_LIT166_data);
#define _OMC_LIT166 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT166)
#define _OMC_LIT167_data "Allowing casting of Boolean expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT167,40,_OMC_LIT167_data);
#define _OMC_LIT167 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT167)
#define _OMC_LIT168_data " to Real."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT168,9,_OMC_LIT168_data);
#define _OMC_LIT168 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT168)
#define _OMC_LIT169_data "nfAPI"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT169,5,_OMC_LIT169_data);
#define _OMC_LIT169 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT169)
#define _OMC_LIT170_data "Enables experimental new instantiation use in the OMC API."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT170,58,_OMC_LIT170_data);
#define _OMC_LIT170 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT170)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT171,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT170}};
#define _OMC_LIT171 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT171)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT172,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(171)),_OMC_LIT169,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT171}};
#define _OMC_LIT172 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT172)
#define _OMC_LIT173_data "NFTypeCheck.matchTypes got unknown type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT173,40,_OMC_LIT173_data);
#define _OMC_LIT173 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT173)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT174_6,1.770032059e9);
#define _OMC_LIT174_6 MMC_REFREALLIT(_OMC_LIT_STRUCT174_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT174,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1702)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1702)),MMC_IMMEDIATE(MMC_TAGFIXNUM(87)),_OMC_LIT174_6}};
#define _OMC_LIT174 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT174)
#define _OMC_LIT175_data "NFTypeCheck.matchExpressions got unknown type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT175,46,_OMC_LIT175_data);
#define _OMC_LIT175 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT175)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT176_6,1.770032059e9);
#define _OMC_LIT176_6 MMC_REFREALLIT(_OMC_LIT_STRUCT176_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT176,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1600)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1600)),MMC_IMMEDIATE(MMC_TAGFIXNUM(87)),_OMC_LIT176_6}};
#define _OMC_LIT176 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT176)
#define _OMC_LIT177_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT177,2,_OMC_LIT177_data);
#define _OMC_LIT177 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT177)
#define _OMC_LIT178_data "Cannot resolve type of expression %s. The operands have types %s in component %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT178,81,_OMC_LIT178_data);
#define _OMC_LIT178 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT178)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT179,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT178}};
#define _OMC_LIT179 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT179)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT180,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(84)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT179}};
#define _OMC_LIT180 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT180)
#define _OMC_LIT181_data "<NO_COMPONENT>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT181,14,_OMC_LIT181_data);
#define _OMC_LIT181 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT181)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT182,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT182 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT182)
#define _OMC_LIT183_data "In relation %s, %s on Real numbers is only allowed inside functions."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT183,68,_OMC_LIT183_data);
#define _OMC_LIT183 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT183)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT184,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT183}};
#define _OMC_LIT184 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT184)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT185,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(509)),_OMC_LIT0,_OMC_LIT182,_OMC_LIT184}};
#define _OMC_LIT185 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT185)
#define _OMC_LIT186_data "'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT186,1,_OMC_LIT186_data);
#define _OMC_LIT186 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT186)
#define _OMC_LIT187_data "Ambiguous matching overloaded operator functions found for %s.\nCandidates are:\n  %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT187,83,_OMC_LIT187_data);
#define _OMC_LIT187 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT187)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT188,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT187}};
#define _OMC_LIT188 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT188)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT189,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(324)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT188}};
#define _OMC_LIT189 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT189)
#define _OMC_LIT190_data "'constructor'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT190,13,_OMC_LIT190_data);
#define _OMC_LIT190 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT190)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT191,3,5) {&Absyn_ComponentRef_CREF__IDENT__desc,_OMC_LIT190,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT191 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT191)
#define _OMC_LIT192_data "NFTypeCheck.checkConditionalBinaryOperator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT192,42,_OMC_LIT192_data);
#define _OMC_LIT192 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT192)
#define _OMC_LIT193_data "NFTypeCheck:implicitConstruction"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT193,32,_OMC_LIT193_data);
#define _OMC_LIT193 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT193)
#include "util/modelica.h"

#include "NFTypeCheck_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFTypeCheck_elaborateBindingType_isParent(threadData_t *threadData, modelica_metatype _parent, modelica_metatype _node);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_elaborateBindingType_isParent(threadData_t *threadData, modelica_metatype _parent, modelica_metatype _node);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_elaborateBindingType_isParent,2,0) {(void*) boxptr_NFTypeCheck_elaborateBindingType_isParent,0}};
#define boxvar_NFTypeCheck_elaborateBindingType_isParent MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_elaborateBindingType_isParent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _elemOp, modelica_metatype _info, modelica_metatype *out_resultType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkBinaryOperationEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _elemOp, modelica_metatype _info, modelica_metatype *out_resultType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationEW,2,0) {(void*) boxptr_NFTypeCheck_checkBinaryOperationEW,0}};
#define boxvar_NFTypeCheck_checkBinaryOperationEW MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationEW)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationPowEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype *out_resultType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationPowEW,2,0) {(void*) boxptr_NFTypeCheck_checkBinaryOperationPowEW,0}};
#define boxvar_NFTypeCheck_checkBinaryOperationPowEW MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationPowEW)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationPow(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype *out_resultType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationPow,2,0) {(void*) boxptr_NFTypeCheck_checkBinaryOperationPow,0}};
#define boxvar_NFTypeCheck_checkBinaryOperationPow MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationPow)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationDiv(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_boolean _isElementWise, modelica_metatype *out_resultType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkBinaryOperationDiv(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype _isElementWise, modelica_metatype *out_resultType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationDiv,2,0) {(void*) boxptr_NFTypeCheck_checkBinaryOperationDiv,0}};
#define boxvar_NFTypeCheck_checkBinaryOperationDiv MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationDiv)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationMul(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype *out_resultType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationMul,2,0) {(void*) boxptr_NFTypeCheck_checkBinaryOperationMul,0}};
#define boxvar_NFTypeCheck_checkBinaryOperationMul MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationMul)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationSub(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype *out_resultType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationSub,2,0) {(void*) boxptr_NFTypeCheck_checkBinaryOperationSub,0}};
#define boxvar_NFTypeCheck_checkBinaryOperationSub MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationSub)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationAdd(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype *out_resultType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationAdd,2,0) {(void*) boxptr_NFTypeCheck_checkBinaryOperationAdd,0}};
#define boxvar_NFTypeCheck_checkBinaryOperationAdd MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkBinaryOperationAdd)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_implicitConstructAndMatch2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _paramType1, modelica_metatype _paramInfo1, modelica_metatype _paramType2, modelica_metatype _paramInfo2, modelica_metatype _scope, modelica_metatype _fn, modelica_boolean _reverseArgs, modelica_metatype __omcQ_24in_5FmatchedFns, modelica_boolean *out_matched);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_implicitConstructAndMatch2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _paramType1, modelica_metatype _paramInfo1, modelica_metatype _paramType2, modelica_metatype _paramInfo2, modelica_metatype _scope, modelica_metatype _fn, modelica_metatype _reverseArgs, modelica_metatype __omcQ_24in_5FmatchedFns, modelica_metatype *out_matched);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_implicitConstructAndMatch2,2,0) {(void*) boxptr_NFTypeCheck_implicitConstructAndMatch2,0}};
#define boxvar_NFTypeCheck_implicitConstructAndMatch2 MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_implicitConstructAndMatch2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_implicitConstructAndMatch(threadData_t *threadData, modelica_metatype _candidates, modelica_metatype _inExp1, modelica_metatype _inType1, modelica_metatype _op, modelica_metatype _inExp2, modelica_metatype _inType2, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_implicitConstructAndMatch,2,0) {(void*) boxptr_NFTypeCheck_implicitConstructAndMatch,0}};
#define boxvar_NFTypeCheck_implicitConstructAndMatch MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_implicitConstructAndMatch)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayEW2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayEW2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayEW2,2,0) {(void*) boxptr_NFTypeCheck_checkOverloadedBinaryArrayEW2,0}};
#define boxvar_NFTypeCheck_checkOverloadedBinaryArrayEW2 MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayEW2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayEW,2,0) {(void*) boxptr_NFTypeCheck_checkOverloadedBinaryArrayEW,0}};
#define boxvar_NFTypeCheck_checkOverloadedBinaryArrayEW MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayEW)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayDiv(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayDiv(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayDiv,2,0) {(void*) boxptr_NFTypeCheck_checkOverloadedBinaryArrayDiv,0}};
#define boxvar_NFTypeCheck_checkOverloadedBinaryArrayDiv MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayDiv)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayScalar2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayScalar2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayScalar2,2,0) {(void*) boxptr_NFTypeCheck_checkOverloadedBinaryArrayScalar2,0}};
#define boxvar_NFTypeCheck_checkOverloadedBinaryArrayScalar2 MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayScalar2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayScalar(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayScalar(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayScalar,2,0) {(void*) boxptr_NFTypeCheck_checkOverloadedBinaryArrayScalar,0}};
#define boxvar_NFTypeCheck_checkOverloadedBinaryArrayScalar MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayScalar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryScalarArray2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryScalarArray2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryScalarArray2,2,0) {(void*) boxptr_NFTypeCheck_checkOverloadedBinaryScalarArray2,0}};
#define boxvar_NFTypeCheck_checkOverloadedBinaryScalarArray2 MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryScalarArray2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryScalarArray(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryScalarArray(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryScalarArray,2,0) {(void*) boxptr_NFTypeCheck_checkOverloadedBinaryScalarArray,0}};
#define boxvar_NFTypeCheck_checkOverloadedBinaryScalarArray MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryScalarArray)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayMul(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayMul(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayMul,2,0) {(void*) boxptr_NFTypeCheck_checkOverloadedBinaryArrayMul,0}};
#define boxvar_NFTypeCheck_checkOverloadedBinaryArrayMul MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayMul)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayAddSub2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayAddSub2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayAddSub2,2,0) {(void*) boxptr_NFTypeCheck_checkOverloadedBinaryArrayAddSub2,0}};
#define boxvar_NFTypeCheck_checkOverloadedBinaryArrayAddSub2 MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayAddSub2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayAddSub(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayAddSub(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayAddSub,2,0) {(void*) boxptr_NFTypeCheck_checkOverloadedBinaryArrayAddSub,0}};
#define boxvar_NFTypeCheck_checkOverloadedBinaryArrayAddSub MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkOverloadedBinaryArrayAddSub)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkConditionalBinaryOperator(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_integer _context, modelica_metatype _info, modelica_boolean _retype, modelica_metatype *out_outType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkConditionalBinaryOperator(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _context, modelica_metatype _info, modelica_metatype _retype, modelica_metatype *out_outType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkConditionalBinaryOperator,2,0) {(void*) boxptr_NFTypeCheck_checkConditionalBinaryOperator,0}};
#define boxvar_NFTypeCheck_checkConditionalBinaryOperator MMC_REFSTRUCTLIT(boxvar_lit_NFTypeCheck_checkConditionalBinaryOperator)

DLLDirection
modelica_metatype omc_NFTypeCheck_matchIfBranches(threadData_t *threadData, modelica_metatype __omcQ_24in_5FtrueBranch, modelica_metatype _trueType, modelica_metatype __omcQ_24in_5FfalseBranch, modelica_metatype _falseType, modelica_integer _options, modelica_metatype *out_falseBranch, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _trueBranch = NULL;
  modelica_metatype _falseBranch = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _trueBranch = __omcQ_24in_5FtrueBranch;
  _falseBranch = __omcQ_24in_5FfalseBranch;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _trueType;
    tmp4_2 = _falseType;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _trueBranch = omc_NFTypeCheck_matchExpressions(threadData, _trueBranch, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_trueType), 2))), _falseBranch, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_falseType), 2))), _options ,&_falseBranch ,&_compatibleType ,&_matchKind);

          if(omc_NFTypeCheck_isIncompatibleMatch(threadData, (modelica_integer)_matchKind))
          {
            goto _return;
          }

          _compatibleType = omc_NFTypeCheck_matchArrayDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_trueType), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_falseType), 3))), _compatibleType, (modelica_integer)_matchKind, _options ,&_matchKind);

          if((omc_NFTypeCheck_isIncompatibleMatch(threadData, (modelica_integer)_matchKind) && (listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_trueType), 3)))) == listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_falseType), 3)))))))
          {
            tmpMeta6 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, omc_NFType_copyElementType(threadData, _trueType, _compatibleType), omc_NFType_copyElementType(threadData, _falseType, _compatibleType), mmc_mk_integer(1));
            _compatibleType = tmpMeta6;

            _matchKind = 1;
          }
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFType_isConditionalArray(threadData, _trueType) || omc_NFType_isConditionalArray(threadData, _falseType))) goto tmp3_end;
          _trueBranch = omc_NFTypeCheck_matchExpressions(threadData, _trueBranch, omc_NFType_arrayElementType(threadData, _trueType), _falseBranch, omc_NFType_arrayElementType(threadData, _falseType), _options ,&_falseBranch ,&_compatibleType ,&_matchKind);

          if(omc_NFTypeCheck_isIncompatibleMatch(threadData, (modelica_integer)_matchKind))
          {
            goto _return;
          }

          tmpMeta7 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, omc_NFType_copyElementType(threadData, _trueType, _compatibleType), omc_NFType_copyElementType(threadData, _falseType, _compatibleType), mmc_mk_integer(1));
          _compatibleType = tmpMeta7;
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          _trueBranch = omc_NFTypeCheck_matchExpressions(threadData, _trueBranch, _trueType, _falseBranch, _falseType, _options ,&_falseBranch ,&_compatibleType ,&_matchKind);
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
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
  _compatibleType = tmpMeta[0+0];
  _matchKind = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_falseBranch) { *out_falseBranch = _falseBranch; }
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _trueBranch;
}
modelica_metatype boxptr_NFTypeCheck_matchIfBranches(threadData_t *threadData, modelica_metatype __omcQ_24in_5FtrueBranch, modelica_metatype _trueType, modelica_metatype __omcQ_24in_5FfalseBranch, modelica_metatype _falseType, modelica_metatype _options, modelica_metatype *out_falseBranch, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _trueBranch = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _trueBranch = omc_NFTypeCheck_matchIfBranches(threadData, __omcQ_24in_5FtrueBranch, _trueType, __omcQ_24in_5FfalseBranch, _falseType, tmp1, out_falseBranch, out_compatibleType, &_matchKind);
  /* skip box _trueBranch; NFExpression */
  /* skip box _falseBranch; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _trueBranch;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_checkSumComplexType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _exp, modelica_metatype _info)
{
  modelica_boolean _valid;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _valid = 1 /* true */;
  // _cls_node has no default value.
  // _cls has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _ty;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,11,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _cls_node = tmpMeta2;

  _cls = omc_NFInstNode_InstNode_getClass(threadData, _cls_node);

  {
    modelica_metatype _op;
    for (tmpMeta3 = _OMC_LIT9; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _op = MMC_CAR(tmpMeta3);
      if((!omc_NFClass_hasOperator(threadData, _op, _cls)))
      {
        tmpMeta4 = mmc_mk_cons(omc_NFType_toString(threadData, _ty), mmc_mk_cons(omc_NFExpression_toString(threadData, _exp), mmc_mk_cons(_OMC_LIT5, mmc_mk_cons(_op, MMC_REFSTRUCTLIT(mmc_nil)))));
        omc_Error_addSourceMessage(threadData, _OMC_LIT4, tmpMeta4, _info);

        _valid = 0 /* false */;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _valid;
}
modelica_metatype boxptr_NFTypeCheck_checkSumComplexType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _exp, modelica_metatype _info)
{
  modelica_boolean _valid;
  modelica_metatype out_valid;
  _valid = omc_NFTypeCheck_checkSumComplexType(threadData, _ty, _exp, _info);
  out_valid = mmc_mk_icon(_valid);
  return out_valid;
}

DLLDirection
void omc_NFTypeCheck_checkReductionType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _name, modelica_metatype _exp, modelica_metatype _info)
{
  modelica_metatype _ety = NULL;
  modelica_string _err = NULL;
  modelica_string tmp1 = 0;
  modelica_metatype tmpMeta27;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ety has no default value.
  // _err has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _name;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_string tmp7 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT5), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = omc_NFType_arrayElementType(threadData, _ty);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 4; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,0) == 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmp7 = _OMC_LIT10;
                  goto tmp9_done;
                }
                case 1: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,1,0) == 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmp7 = _OMC_LIT10;
                  goto tmp9_done;
                }
                case 2: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,11,2) == 0) goto tmp9_end;
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!omc_NFTypeCheck_checkSumComplexType(threadData, _ty, _exp, _info)) goto tmp9_end;
                  tmp7 = _OMC_LIT10;
                  goto tmp9_done;
                }
                case 3: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = _OMC_LIT11;
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
          }tmp1 = tmp7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_string tmp13 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (7 != MMC_STRLEN(tmpMeta12) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmpMeta12)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp16_1;
            tmp16_1 = _ty;
            {
              int tmp16;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp16_1))) {
                case 3: {
                  
                  /* Pattern matching succeeded */
                  tmp13 = _OMC_LIT10;
                  goto tmp15_done;
                }
                case 4: {
                  
                  /* Pattern matching succeeded */
                  tmp13 = _OMC_LIT10;
                  goto tmp15_done;
                }
                default:
                tmp15_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmp13 = _OMC_LIT12;
                  goto tmp15_done;
                }
                }
                goto tmp15_end;
                tmp15_end: ;
              }
              goto goto_14;
              goto_14:;
              goto goto_2;
              goto tmp15_done;
              tmp15_done:;
            }
          }tmp1 = tmp13;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta17;
          modelica_string tmp18 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta17) || strcmp(MMC_STRINGDATA(_OMC_LIT15), MMC_STRINGDATA(tmpMeta17)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp21_1;
            tmp21_1 = _ty;
            {
              int tmp21;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp21_1))) {
                case 3: {
                  
                  /* Pattern matching succeeded */
                  tmp18 = _OMC_LIT10;
                  goto tmp20_done;
                }
                case 4: {
                  
                  /* Pattern matching succeeded */
                  tmp18 = _OMC_LIT10;
                  goto tmp20_done;
                }
                case 6: {
                  
                  /* Pattern matching succeeded */
                  tmp18 = _OMC_LIT10;
                  goto tmp20_done;
                }
                case 8: {
                  
                  /* Pattern matching succeeded */
                  tmp18 = _OMC_LIT10;
                  goto tmp20_done;
                }
                default:
                tmp20_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmp18 = _OMC_LIT13;
                  goto tmp20_done;
                }
                }
                goto tmp20_end;
                tmp20_end: ;
              }
              goto goto_19;
              goto_19:;
              goto goto_2;
              goto tmp20_done;
              tmp20_done:;
            }
          }tmp1 = tmp18;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta22;
          modelica_string tmp23 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta22) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmpMeta22)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp26_1;
            tmp26_1 = _ty;
            {
              int tmp26;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp26_1))) {
                case 3: {
                  
                  /* Pattern matching succeeded */
                  tmp23 = _OMC_LIT10;
                  goto tmp25_done;
                }
                case 4: {
                  
                  /* Pattern matching succeeded */
                  tmp23 = _OMC_LIT10;
                  goto tmp25_done;
                }
                case 6: {
                  
                  /* Pattern matching succeeded */
                  tmp23 = _OMC_LIT10;
                  goto tmp25_done;
                }
                case 8: {
                  
                  /* Pattern matching succeeded */
                  tmp23 = _OMC_LIT10;
                  goto tmp25_done;
                }
                default:
                tmp25_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmp23 = _OMC_LIT13;
                  goto tmp25_done;
                }
                }
                goto tmp25_end;
                tmp25_end: ;
              }
              goto goto_24;
              goto_24:;
              goto goto_2;
              goto tmp25_done;
              tmp25_done:;
            }
          }tmp1 = tmp23;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT10;
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
  _err = tmp1;

  if((!(stringLength(_err) == ((modelica_integer) 0))))
  {
    tmpMeta27 = mmc_mk_cons(omc_NFExpression_toString(threadData, _exp), mmc_mk_cons(omc_NFType_toString(threadData, _ty), mmc_mk_cons(omc_AbsynUtil_pathString(threadData, _name, _OMC_LIT20, 1 /* true */, 0 /* false */), mmc_mk_cons(_err, MMC_REFSTRUCTLIT(mmc_nil)))));
    omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT19, tmpMeta27, _info);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFTypeCheck_checkDimensionType(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype _info)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((!omc_NFType_isInteger(threadData, _ty)))
  {
    { /* match expression */
      modelica_metatype tmp3_1;
      tmp3_1 = _exp;
      {
        volatile mmc_switch_type tmp3;
        int tmp4;
        tmp3 = 0;
        for (; tmp3 < 3; tmp3++) {
          switch (MMC_SWITCH_CAST(tmp3)) {
          case 0: {
            modelica_metatype tmpMeta5;
            modelica_metatype tmpMeta6;
            if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,1) == 0) goto tmp2_end;
            tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,7,2) == 0) goto tmp2_end;
            tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,0) == 0) goto tmp2_end;
            
            /* Pattern matching succeeded */
            goto tmp2_done;
          }
          case 1: {
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,1) == 0) goto tmp2_end;
            tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,7,2) == 0) goto tmp2_end;
            tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,5,2) == 0) goto tmp2_end;
            
            /* Pattern matching succeeded */
            goto tmp2_done;
          }
          case 2: {
            modelica_metatype tmpMeta9;
            
            /* Pattern matching succeeded */
            tmpMeta9 = mmc_mk_cons(omc_NFExpression_toString(threadData, _exp), mmc_mk_cons(omc_NFType_toString(threadData, _ty), MMC_REFSTRUCTLIT(mmc_nil)));
            omc_Error_addSourceMessage(threadData, _OMC_LIT23, tmpMeta9, _info);
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
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFTypeCheck_printBindingTypeError(threadData_t *threadData, modelica_string _name, modelica_metatype _binding, modelica_metatype _componentType, modelica_metatype _bindingType, modelica_metatype _component, modelica_integer _context)
{
  modelica_metatype _binding_info = NULL;
  modelica_metatype _comp_info = NULL;
  modelica_string _bind_ty_str = NULL;
  modelica_string _comp_ty_str = NULL;
  modelica_integer _mk;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binding_info has no default value.
  // _comp_info has no default value.
  // _bind_ty_str has no default value.
  // _comp_ty_str has no default value.
  // _mk has no default value.
  _binding_info = omc_NFBinding_getInfo(threadData, _binding);

  _comp_info = omc_NFInstNode_InstNode_info(threadData, _component);

  if((omc_NFType_isScalar(threadData, _bindingType) && omc_NFType_isArray(threadData, _componentType)))
  {
    tmpMeta1 = mmc_mk_cons(omc_NFBinding_toString(threadData, _binding, _OMC_LIT10), mmc_mk_cons(_name, MMC_REFSTRUCTLIT(mmc_nil)));
    tmpMeta2 = mmc_mk_cons(_binding_info, mmc_mk_cons(_comp_info, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_Error_addMultiSourceMessage(threadData, _OMC_LIT32, tmpMeta1, tmpMeta2);
  }
  else
  {
    tmpMeta3 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, _bindingType);
    omc_NFTypeCheck_matchTypes(threadData, omc_NFType_arrayElementType(threadData, _bindingType), omc_NFType_arrayElementType(threadData, _componentType), tmpMeta3, ((modelica_integer) 1) ,NULL ,&_mk);

    if((!omc_NFInstContext_inAnnotation(threadData, _context)))
    {
      if(omc_NFTypeCheck_isValidAssignmentMatch(threadData, (modelica_integer)_mk))
      {
        tmpMeta4 = mmc_mk_cons(_name, mmc_mk_cons(omc_NFBinding_toString(threadData, _binding, _OMC_LIT10), mmc_mk_cons(omc_NFDimension_toStringList(threadData, omc_NFType_arrayDims(threadData, _componentType), 1 /* true */), mmc_mk_cons(omc_NFDimension_toStringList(threadData, omc_NFType_arrayDims(threadData, _bindingType), 1 /* true */), MMC_REFSTRUCTLIT(mmc_nil)))));
        tmpMeta5 = mmc_mk_cons(_binding_info, mmc_mk_cons(_comp_info, MMC_REFSTRUCTLIT(mmc_nil)));
        omc_Error_addMultiSourceMessage(threadData, _OMC_LIT29, tmpMeta4, tmpMeta5);
      }
      else
      {
        tmpMeta6 = mmc_mk_cons(_name, mmc_mk_cons(omc_NFBinding_toString(threadData, _binding, _OMC_LIT10), mmc_mk_cons(omc_NFType_toString(threadData, _componentType), mmc_mk_cons(omc_NFType_toString(threadData, _bindingType), MMC_REFSTRUCTLIT(mmc_nil)))));
        tmpMeta7 = mmc_mk_cons(_binding_info, mmc_mk_cons(_comp_info, MMC_REFSTRUCTLIT(mmc_nil)));
        omc_Error_addMultiSourceMessage(threadData, _OMC_LIT26, tmpMeta6, tmpMeta7);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NFTypeCheck_printBindingTypeError(threadData_t *threadData, modelica_metatype _name, modelica_metatype _binding, modelica_metatype _componentType, modelica_metatype _bindingType, modelica_metatype _component, modelica_metatype _context)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_context);
  omc_NFTypeCheck_printBindingTypeError(threadData, _name, _binding, _componentType, _bindingType, _component, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFTypeCheck_elaborateBindingType_isParent(threadData_t *threadData, modelica_metatype _parent, modelica_metatype _node)
{
  modelica_boolean _res;
  modelica_metatype _n = NULL;
  modelica_metatype _p = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _n = omc_NFInstNode_InstNode_getDerivedNode(threadData, _node, 1 /* true */);
  // _p has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _n;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _p = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = (omc_NFInstNode_InstNode_refEqual(threadData, _parent, _n) || omc_NFTypeCheck_elaborateBindingType_isParent(threadData, _parent, _p));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFInstNode_InstNode_refEqual(threadData, _parent, _n) || omc_NFTypeCheck_elaborateBindingType_isParent(threadData, _parent, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_n), 6)))));
          goto tmp3_done;
        }
        case 2: {
          
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_elaborateBindingType_isParent(threadData_t *threadData, modelica_metatype _parent, modelica_metatype _node)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFTypeCheck_elaborateBindingType_isParent(threadData, _parent, _node);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_elaborateBindingType(threadData_t *threadData, modelica_metatype _bindingExp, modelica_metatype _component, modelica_metatype __omcQ_24in_5FbindingType, modelica_metatype __omcQ_24in_5FcomponentType, modelica_metatype *out_componentType)
{
  modelica_metatype _bindingType = NULL;
  modelica_metatype _componentType = NULL;
  modelica_metatype _dims = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bindingType = __omcQ_24in_5FbindingType;
  _componentType = __omcQ_24in_5FcomponentType;
  // _dims has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _bindingExp;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 29: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _bindingType = omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bindingExp), 2))));

          tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
          _dims = tmpMeta4;

          {
            modelica_metatype _s;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bindingExp), 3))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _s = MMC_CAR(tmpMeta5);
              { /* match expression */
                modelica_metatype tmp9_1;
                tmp9_1 = _s;
                {
                  volatile mmc_switch_type tmp9;
                  int tmp10;
                  tmp9 = 0;
                  for (; tmp9 < 2; tmp9++) {
                    switch (MMC_SWITCH_CAST(tmp9)) {
                    case 0: {
                      modelica_metatype tmpMeta11;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,7,2) == 0) goto tmp8_end;
                      
                      /* Pattern matching succeeded */
                      if(omc_NFTypeCheck_elaborateBindingType_isParent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 2))), _component))
                      {
                        tmpMeta11 = mmc_mk_cons(omc_NFType_nthDimension(threadData, omc_NFInstNode_InstNode_getType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 3))))), _dims);
                        _dims = tmpMeta11;
                      }
                      tmpMeta6 = _dims;
                      goto tmp8_done;
                    }
                    case 1: {
                      modelica_metatype tmpMeta12;
                      
                      /* Pattern matching succeeded */
                      tmpMeta12 = mmc_mk_cons(_OMC_LIT33, _dims);
                      tmpMeta6 = tmpMeta12;
                      goto tmp8_done;
                    }
                    }
                    goto tmp8_end;
                    tmp8_end: ;
                  }
                  goto goto_7;
                  goto_7:;
                  goto goto_1;
                  goto tmp8_done;
                  tmp8_done:;
                }
              }
              _dims = tmpMeta6;
            }
          }

          _dims = listReverseInPlace(_dims);

          _componentType = omc_NFType_liftArrayLeftList(threadData, _componentType, _dims);
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          _bindingType = omc_NFComponentRef_getSubscriptedType(threadData, omc_NFComponentRef_expandSplitSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bindingExp), 3)))), 0 /* false */);

          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          _dims = tmpMeta14;

          {
            modelica_metatype _s;
            for (tmpMeta15 = omc_NFComponentRef_subscriptsAllFlat(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bindingExp), 3)))); !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
            {
              _s = MMC_CAR(tmpMeta15);
              { /* match expression */
                modelica_metatype tmp19_1;
                tmp19_1 = _s;
                {
                  volatile mmc_switch_type tmp19;
                  int tmp20;
                  tmp19 = 0;
                  for (; tmp19 < 2; tmp19++) {
                    switch (MMC_SWITCH_CAST(tmp19)) {
                    case 0: {
                      modelica_metatype tmpMeta21;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp19_1,7,2) == 0) goto tmp18_end;
                      
                      /* Pattern matching succeeded */
                      if(omc_NFTypeCheck_elaborateBindingType_isParent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 2))), _component))
                      {
                        tmpMeta21 = mmc_mk_cons(omc_NFType_nthDimension(threadData, omc_NFInstNode_InstNode_getType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 3))))), _dims);
                        _dims = tmpMeta21;
                      }
                      tmpMeta16 = _dims;
                      goto tmp18_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      tmpMeta16 = _dims;
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
              _dims = tmpMeta16;
            }
          }

          _dims = listReverseInPlace(_dims);

          _componentType = omc_NFType_liftArrayLeftList(threadData, _componentType, _dims);
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
  if (out_componentType) { *out_componentType = _componentType; }
  return _bindingType;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype _componentType, modelica_string _name, modelica_metatype _component, modelica_integer _context)
{
  modelica_metatype _binding = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _binding = __omcQ_24in_5Fbinding;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _binding;
    {
      modelica_integer _ty_match;
      modelica_metatype _exp = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _bind_ty = NULL;
      modelica_metatype _comp_ty = NULL;
      int tmp3;
      // _ty_match has no default value.
      // _exp has no default value.
      // _ty has no default value.
      // _bind_ty has no default value.
      // _comp_ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 6: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,9) == 0) goto tmp2_end;
          tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _exp = tmpMeta4;
          /* Pattern matching succeeded */
          _bind_ty = omc_NFTypeCheck_elaborateBindingType(threadData, _exp, _component, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 3))), _componentType ,&_comp_ty);

          _exp = omc_NFTypeCheck_matchTypes(threadData, _bind_ty, _comp_ty, _exp, ((modelica_integer) 1) ,&_ty ,&_ty_match);

          if((!omc_NFTypeCheck_isValidAssignmentMatch(threadData, (modelica_integer)_ty_match)))
          {
            tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(11));
            memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_binding), 11*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFExpression_expandSplitIndices(threadData, _exp);
            _binding = tmpMeta5;

            omc_NFTypeCheck_printBindingTypeError(threadData, _name, _binding, _comp_ty, _bind_ty, _component, _context);

            if((!omc_NFInstContext_inInstanceAPI(threadData, _context)))
            {
              goto goto_1;
            }
          }
          else
          {
            if(omc_NFTypeCheck_isCastMatch(threadData, (modelica_integer)_ty_match))
            {
              tmpMeta6 = mmc_mk_box10(6, &NFBinding_TYPED__BINDING__desc, _exp, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 10))));
              _binding = tmpMeta6;
            }
          }
          goto tmp2_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT34,omc_NFBinding_toString(threadData, _binding, _OMC_LIT10));
          omc_Error_assertion(threadData, 0 /* false */, tmpMeta7, _OMC_LIT36);
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
  return _binding;
}
modelica_metatype boxptr_NFTypeCheck_matchBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype _componentType, modelica_metatype _name, modelica_metatype _component, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_metatype _binding = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _binding = omc_NFTypeCheck_matchBinding(threadData, __omcQ_24in_5Fbinding, _componentType, _name, _component, tmp1);
  /* skip box _binding; NFBinding */
  return _binding;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_getRangeTypeEnum(threadData_t *threadData, modelica_metatype _startExp, modelica_metatype _stopExp)
{
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dim has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _startExp;
    tmp4_2 = _stopExp;
    {
      modelica_metatype _dim_exp = NULL;
      modelica_integer _var;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dim_exp has no default value.
      // _var has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFDimension_fromInteger(threadData, modelica_integer_max((modelica_integer)(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stopExp), 4)))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_startExp), 4)))))),(modelica_integer)(((modelica_integer) 0))), 1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (1 != tmp7) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFDimension_fromExp(threadData, _stopExp, omc_NFExpression_variability(threadData, _stopExp));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          if(omc_NFExpression_isEqual(threadData, _startExp, _stopExp))
          {
            _dim = omc_NFDimension_fromInteger(threadData, ((modelica_integer) 1), 1);
          }
          else
          {
            _var = omc_NFPrefixes_variabilityMax(threadData, omc_NFExpression_variability(threadData, _startExp), omc_NFExpression_variability(threadData, _stopExp));

            tmpMeta8 = mmc_mk_box4(19, &NFExpression_BINARY__desc, omc_NFExpression_enumIndexExp(threadData, _startExp), omc_NFOperator_makeSub(threadData, _OMC_LIT37), omc_NFExpression_enumIndexExp(threadData, _stopExp));
            _dim_exp = tmpMeta8;

            tmpMeta9 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _dim_exp, omc_NFOperator_makeAdd(threadData, _OMC_LIT37), _OMC_LIT38);
            _dim_exp = tmpMeta9;

            _dim_exp = omc_NFSimplifyExp_simplify(threadData, _dim_exp, 0 /* false */);

            _dim = omc_NFDimension_fromExp(threadData, _dim_exp, (modelica_integer)_var);
          }
          tmpMeta1 = _dim;
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
  _dim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dim;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_getRangeTypeBool(threadData_t *threadData, modelica_metatype _startExp, modelica_metatype _stopExp)
{
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dim has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _startExp;
    tmp4_2 = _stopExp;
    {
      modelica_integer _sz;
      modelica_metatype _dim_exp = NULL;
      modelica_integer _var;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sz has no default value.
      // _dim_exp has no default value.
      // _var has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _sz = ((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_startExp), 2)))) == !mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stopExp), 2)))))?((modelica_integer) 1):((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_startExp), 2)))) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stopExp), 2)))))?((modelica_integer) 2):((modelica_integer) 0)));
          tmpMeta1 = omc_NFDimension_fromInteger(threadData, _sz, 1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          if(omc_NFExpression_isEqual(threadData, _startExp, _stopExp))
          {
            _dim = omc_NFDimension_fromInteger(threadData, ((modelica_integer) 1), 1);
          }
          else
          {
            _var = omc_NFPrefixes_variabilityMax(threadData, omc_NFExpression_variability(threadData, _startExp), omc_NFExpression_variability(threadData, _stopExp));

            tmpMeta6 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _startExp, omc_NFOperator_makeEqual(threadData, _OMC_LIT39), _stopExp, mmc_mk_integer(((modelica_integer) -1)));
            tmpMeta7 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _startExp, omc_NFOperator_makeLess(threadData, _OMC_LIT39), _stopExp, mmc_mk_integer(((modelica_integer) -1)));
            tmpMeta8 = mmc_mk_box5(25, &NFExpression_IF__desc, _OMC_LIT37, tmpMeta7, _OMC_LIT40, _OMC_LIT41);
            tmpMeta9 = mmc_mk_box5(25, &NFExpression_IF__desc, _OMC_LIT37, tmpMeta6, _OMC_LIT38, tmpMeta8);
            _dim_exp = tmpMeta9;

            _dim_exp = omc_NFSimplifyExp_simplify(threadData, _dim_exp, 0 /* false */);

            _dim = omc_NFDimension_fromExp(threadData, _dim_exp, (modelica_integer)_var);
          }
          tmpMeta1 = _dim;
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
  _dim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dim;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_getRangeTypeReal(threadData_t *threadData, modelica_metatype _startExp, modelica_metatype _stepExp, modelica_metatype _stopExp, modelica_metatype _info)
{
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dim has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _startExp;
    tmp4_2 = _stepExp;
    tmp4_3 = _stopExp;
    {
      modelica_real _start;
      modelica_real _step;
      modelica_metatype _dim_exp = NULL;
      modelica_metatype _step_exp = NULL;
      modelica_integer _var;
      modelica_integer _pur;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _start has no default value.
      // _step has no default value.
      // _dim_exp has no default value.
      // _step_exp has no default value.
      // _var has no default value.
      // _pur has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFDimension_fromInteger(threadData, omc_Util_realRangeSize(threadData, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_startExp), 2)))), 1.0, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stopExp), 2))))), 1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_real tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_real tmp10;
          modelica_metatype tmpMeta11;
          modelica_string tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_real(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,1,1) == 0) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmp10 = mmc_unbox_real(tmpMeta9);
          _start = tmp7  /* pattern as ty=Real */;
          _step = tmp10  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          if((_start == _start + _step))
          {
            tmp12 = modelica_real_to_modelica_string(_step, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
            tmpMeta11 = mmc_mk_cons(tmp12, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT44, tmpMeta11, _info);
          }
          tmpMeta1 = omc_NFDimension_fromInteger(threadData, omc_Util_realRangeSize(threadData, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_startExp), 2)))), _step, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stopExp), 2))))), 1);
          goto tmp3_done;
        }
        case 2: {
          if (!optionNone(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isEqual(threadData, _startExp, _stopExp)) goto tmp3_end;
          tmpMeta1 = omc_NFDimension_fromInteger(threadData, ((modelica_integer) 1), 1);
          goto tmp3_done;
        }
        case 3: {
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
          
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _stopExp, omc_NFOperator_makeSub(threadData, _OMC_LIT45), _startExp);
          _dim_exp = tmpMeta13;

          _var = omc_NFPrefixes_variabilityMax(threadData, omc_NFExpression_variability(threadData, _stopExp), omc_NFExpression_variability(threadData, _startExp));

          _pur = omc_NFPrefixes_purityMin(threadData, omc_NFExpression_purity(threadData, _stopExp), omc_NFExpression_purity(threadData, _startExp));

          if(isSome(_stepExp))
          {
            /* Pattern-matching assignment */
            tmpMeta14 = _stepExp;
            if (optionNone(tmpMeta14)) goto goto_2;
            tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
            _step_exp = tmpMeta15;

            _var = omc_NFPrefixes_variabilityMax(threadData, (modelica_integer)_var, omc_NFExpression_variability(threadData, _step_exp));

            _pur = omc_NFPrefixes_purityMin(threadData, (modelica_integer)_pur, omc_NFExpression_purity(threadData, _step_exp));

            tmpMeta16 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _dim_exp, omc_NFOperator_makeDiv(threadData, _OMC_LIT45), _step_exp);
            _dim_exp = tmpMeta16;

            tmpMeta17 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _dim_exp, omc_NFOperator_makeAdd(threadData, _OMC_LIT45), _OMC_LIT47);
            _dim_exp = tmpMeta17;
          }

          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta23 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT49, _OMC_LIT50, _OMC_LIT62, _OMC_LIT62, tmpMeta18, tmpMeta19, _OMC_LIT45, _OMC_LIT66, tmpMeta20, tmpMeta21, listArray(tmpMeta22), _OMC_LIT67, _OMC_LIT68);
          tmpMeta24 = mmc_mk_cons(_dim_exp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta30 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT49, _OMC_LIT50, _OMC_LIT62, _OMC_LIT62, tmpMeta25, tmpMeta26, _OMC_LIT45, _OMC_LIT66, tmpMeta27, tmpMeta28, listArray(tmpMeta29), _OMC_LIT67, _OMC_LIT68);
          tmpMeta31 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta23, tmpMeta24, (modelica_integer)_var, (modelica_integer)_pur, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 8)))));
          _dim_exp = tmpMeta31;

          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta37 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT70, _OMC_LIT50, _OMC_LIT62, _OMC_LIT75, tmpMeta32, tmpMeta33, _OMC_LIT37, _OMC_LIT66, tmpMeta34, tmpMeta35, listArray(tmpMeta36), _OMC_LIT67, _OMC_LIT68);
          tmpMeta38 = mmc_mk_cons(_dim_exp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta44 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT70, _OMC_LIT50, _OMC_LIT62, _OMC_LIT75, tmpMeta39, tmpMeta40, _OMC_LIT37, _OMC_LIT66, tmpMeta41, tmpMeta42, listArray(tmpMeta43), _OMC_LIT67, _OMC_LIT68);
          tmpMeta45 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta37, tmpMeta38, (modelica_integer)_var, (modelica_integer)_pur, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 8)))));
          _dim_exp = tmpMeta45;

          tmpMeta46 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _dim_exp, omc_NFOperator_makeAdd(threadData, _OMC_LIT37), _OMC_LIT38);
          _dim_exp = tmpMeta46;

          _dim_exp = omc_NFSimplifyExp_simplify(threadData, _dim_exp, 0 /* false */);
          tmpMeta1 = omc_NFDimension_fromExp(threadData, _dim_exp, (modelica_integer)_var);
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
  _dim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dim;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_getRangeTypeInt(threadData_t *threadData, modelica_metatype _startExp, modelica_metatype _stepExp, modelica_metatype _stopExp, modelica_metatype _info)
{
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dim has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _startExp;
    tmp4_2 = _stepExp;
    tmp4_3 = _stopExp;
    {
      modelica_integer _step;
      modelica_metatype _step_exp = NULL;
      modelica_metatype _dim_exp = NULL;
      modelica_integer _var;
      modelica_integer _pur;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _step has no default value.
      // _step_exp has no default value.
      // _dim_exp has no default value.
      // _var has no default value.
      // _pur has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFDimension_fromInteger(threadData, modelica_integer_max((modelica_integer)(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stopExp), 2)))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_startExp), 2)))))),(modelica_integer)(((modelica_integer) 0))), 1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_string tmp10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,0,1) == 0) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          _step = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          if((_step == ((modelica_integer) 0)))
          {
            tmp10 = modelica_integer_to_modelica_string(_step, ((modelica_integer) 0), 1 /* true */);
            tmpMeta9 = mmc_mk_cons(tmp10, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT44, tmpMeta9, _info);
          }
          tmp11 = _step;
          if (tmp11 == 0) {goto goto_2;}
          tmpMeta1 = omc_NFDimension_fromInteger(threadData, modelica_integer_max((modelica_integer)(((modelica_integer) 1) + modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stopExp), 2)))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_startExp), 2))))),tmp11).quot),(modelica_integer)(((modelica_integer) 0))), 1);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          if (1 != tmp13) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _dim_exp = omc_NFSimplifyExp_simplify(threadData, _stopExp, 0 /* false */);
          tmpMeta1 = omc_NFDimension_fromExp(threadData, _dim_exp, omc_NFExpression_variability(threadData, _dim_exp));
          goto tmp3_done;
        }
        case 3: {
          if (!optionNone(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isEqual(threadData, _startExp, _stopExp)) goto tmp3_end;
          tmpMeta1 = omc_NFDimension_fromInteger(threadData, ((modelica_integer) 1), 1);
          goto tmp3_done;
        }
        case 4: {
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
          
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _stopExp, omc_NFOperator_makeSub(threadData, _OMC_LIT37), _startExp);
          _dim_exp = tmpMeta14;

          _var = omc_NFPrefixes_variabilityMax(threadData, omc_NFExpression_variability(threadData, _stopExp), omc_NFExpression_variability(threadData, _startExp));

          _pur = omc_NFPrefixes_purityMin(threadData, omc_NFExpression_purity(threadData, _stopExp), omc_NFExpression_purity(threadData, _startExp));

          if(isSome(_stepExp))
          {
            /* Pattern-matching assignment */
            tmpMeta15 = _stepExp;
            if (optionNone(tmpMeta15)) goto goto_2;
            tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
            _step_exp = tmpMeta16;

            _var = omc_NFPrefixes_variabilityMax(threadData, (modelica_integer)_var, omc_NFExpression_variability(threadData, _step_exp));

            _pur = omc_NFPrefixes_purityMin(threadData, (modelica_integer)_pur, omc_NFExpression_purity(threadData, _step_exp));

            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta22 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT77, _OMC_LIT50, _OMC_LIT78, _OMC_LIT75, tmpMeta17, tmpMeta18, _OMC_LIT37, _OMC_LIT66, tmpMeta19, tmpMeta20, listArray(tmpMeta21), _OMC_LIT67, _OMC_LIT68);
            tmpMeta23 = mmc_mk_cons(_dim_exp, mmc_mk_cons(_step_exp, MMC_REFSTRUCTLIT(mmc_nil)));
            tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta29 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT77, _OMC_LIT50, _OMC_LIT78, _OMC_LIT75, tmpMeta24, tmpMeta25, _OMC_LIT37, _OMC_LIT66, tmpMeta26, tmpMeta27, listArray(tmpMeta28), _OMC_LIT67, _OMC_LIT68);
            tmpMeta30 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta22, tmpMeta23, (modelica_integer)_var, (modelica_integer)_pur, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 8)))));
            _dim_exp = tmpMeta30;
          }

          tmpMeta31 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _dim_exp, omc_NFOperator_makeAdd(threadData, _OMC_LIT37), _OMC_LIT38);
          _dim_exp = tmpMeta31;

          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta37 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT79, _OMC_LIT50, _OMC_LIT78, _OMC_LIT75, tmpMeta32, tmpMeta33, _OMC_LIT37, _OMC_LIT66, tmpMeta34, tmpMeta35, listArray(tmpMeta36), _OMC_LIT67, _OMC_LIT68);
          tmpMeta38 = mmc_mk_cons(_dim_exp, mmc_mk_cons(_OMC_LIT41, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta44 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT79, _OMC_LIT50, _OMC_LIT78, _OMC_LIT75, tmpMeta39, tmpMeta40, _OMC_LIT37, _OMC_LIT66, tmpMeta41, tmpMeta42, listArray(tmpMeta43), _OMC_LIT67, _OMC_LIT68);
          tmpMeta45 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta37, tmpMeta38, (modelica_integer)_var, (modelica_integer)_pur, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 8)))));
          _dim_exp = tmpMeta45;

          _dim_exp = omc_NFSimplifyExp_simplify(threadData, _dim_exp, 0 /* false */);
          tmpMeta1 = omc_NFDimension_fromExp(threadData, _dim_exp, (modelica_integer)_var);
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
  _dim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dim;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_getRangeType(threadData_t *threadData, modelica_metatype _startExp, modelica_metatype _stepExp, modelica_metatype _stopExp, modelica_metatype _rangeElemType, modelica_metatype _info)
{
  modelica_metatype _rangeType = NULL;
  modelica_metatype _step_exp = NULL;
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _rangeType has no default value.
  // _step_exp has no default value.
  // _dim has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _rangeElemType;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFTypeCheck_getRangeTypeInt(threadData, _startExp, _stepExp, _stopExp, _info);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFTypeCheck_getRangeTypeReal(threadData, _startExp, _stepExp, _stopExp, _info);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          if(isSome(_stepExp))
          {
            tmpMeta5 = mmc_mk_cons(omc_NFType_toString(threadData, _rangeElemType), MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT82, tmpMeta5, _info);
          }
          tmpMeta1 = omc_NFTypeCheck_getRangeTypeBool(threadData, _startExp, _stopExp);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          if(isSome(_stepExp))
          {
            tmpMeta6 = mmc_mk_cons(omc_NFType_toString(threadData, _rangeElemType), MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT82, tmpMeta6, _info);
          }
          tmpMeta1 = omc_NFTypeCheck_getRangeTypeEnum(threadData, _startExp, _stopExp);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(omc_NFType_toString(threadData, _rangeElemType), MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT85, tmpMeta7, _info);
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
  _dim = tmpMeta1;

  tmpMeta8 = mmc_mk_cons(_dim, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta9 = mmc_mk_box3(10, &NFType_ARRAY__desc, _rangeElemType, tmpMeta8);
  _rangeType = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _rangeType;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchPolymorphic(threadData_t *threadData, modelica_string _polymorphicName, modelica_metatype _actualType, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  
  
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _polymorphicName;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT86), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _actualType;
          tmp1_c1 = 5;
          goto tmp3_done;
        }
        case 1: {
          if (8 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT87), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          _matchKind = (omc_NFType_isScalar(threadData, _actualType)?5:7);
          tmpMeta[0+0] = _actualType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 2: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT88), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          _matchKind = (omc_NFType_isArray(threadData, _actualType)?5:7);
          tmpMeta[0+0] = _actualType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 3: {
          if (11 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT89), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          _matchKind = ((omc_NFType_isScalar(threadData, _actualType) && omc_NFExpression_isConnector(threadData, _exp))?5:7);
          tmpMeta[0+0] = _actualType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 4: {
          if (21 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT90), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          _matchKind = ((omc_NFType_isScalar(threadData, _actualType) && omc_NFExpression_isComponentExpression(threadData, _exp))?5:7);
          tmpMeta[0+0] = _actualType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 5: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT91), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          _matchKind = (omc_NFType_isComplex(threadData, _actualType)?5:7);
          tmpMeta[0+0] = _actualType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _exp = omc_NFExpression_box(threadData, _exp);
          tmpMeta6 = mmc_mk_box2(16, &NFType_METABOXED__desc, _actualType);
          tmpMeta[0+0] = tmpMeta6;
          tmp1_c1 = 5;
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
  _compatibleType = tmpMeta[0+0];
  _matchKind = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _exp;
}
modelica_metatype boxptr_NFTypeCheck_matchPolymorphic(threadData_t *threadData, modelica_metatype _polymorphicName, modelica_metatype _actualType, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer _matchKind;
  modelica_metatype _exp = NULL;
  _exp = omc_NFTypeCheck_matchPolymorphic(threadData, _polymorphicName, _actualType, __omcQ_24in_5Fexp, out_compatibleType, &_matchKind);
  /* skip box _exp; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _exp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchTypes__cast(threadData_t *threadData, modelica_metatype _actualType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexpression, modelica_integer _options, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _expression = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _before = NULL;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _expression = __omcQ_24in_5Fexpression;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  _before = _expression;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _actualType;
    tmp4_2 = _expectedType;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 13; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          _expression = omc_NFExpression_typeCast(threadData, _expression, _expectedType);
          tmpMeta[0+0] = _expectedType;
          tmp1_c1 = 2;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Flags_isConfigFlagSet(threadData, _OMC_LIT158, _OMC_LIT103)) goto tmp3_end;
          _expression = omc_NFExpression_typeCast(threadData, _expression, _expectedType);

          tmpMeta6 = stringAppend(_OMC_LIT92,omc_NFExpression_toString(threadData, _before));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT93);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFExpression_toString(threadData, _expression));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT94);
          tmpMeta10 = stringAppend(tmpMeta9,omc_NFExpression_toString(threadData, _before));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT95);
          omc_Error_addCompilerWarning(threadData, tmpMeta11);
          tmpMeta[0+0] = _expectedType;
          tmp1_c1 = 2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Flags_isConfigFlagSet(threadData, _OMC_LIT158, _OMC_LIT107)) goto tmp3_end;
          _expression = omc_NFExpression_typeCast(threadData, _expression, _expectedType);

          tmpMeta12 = stringAppend(_OMC_LIT159,omc_NFExpression_toString(threadData, _before));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT160);
          tmpMeta14 = stringAppend(tmpMeta13,omc_NFExpression_toString(threadData, _expression));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT161);
          omc_Error_addCompilerWarning(threadData, tmpMeta15);
          tmpMeta[0+0] = _expectedType;
          tmp1_c1 = 2;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmpMeta16);
          tmpMeta18 = MMC_CDR(tmpMeta16);
          
          /* Pattern matching succeeded */
          _expression = omc_NFTypeCheck_matchTypes(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_actualType), 2)))), _expectedType, _expression, _options ,&_compatibleType ,&_matchKind);

          if(omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_matchKind))
          {
            { /* match expression */
              modelica_metatype tmp22_1;
              tmp22_1 = _expression;
              {
                volatile mmc_switch_type tmp22;
                int tmp23;
                tmp22 = 0;
                for (; tmp22 < 2; tmp22++) {
                  switch (MMC_SWITCH_CAST(tmp22)) {
                  case 0: {
                    if (mmc__uniontype__metarecord__typedef__equal(tmp22_1,11,2) == 0) goto tmp21_end;
                    
                    /* Pattern matching succeeded */
                    tmpMeta19 = listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_expression), 3))));
                    goto tmp21_done;
                  }
                  case 1: {
                    modelica_metatype tmpMeta24;
                    
                    /* Pattern matching succeeded */
                    tmpMeta24 = mmc_mk_box4(30, &NFExpression_TUPLE__ELEMENT__desc, _expression, mmc_mk_integer(((modelica_integer) 1)), omc_NFType_setArrayElementType(threadData, omc_NFExpression_typeOf(threadData, _expression), _compatibleType));
                    tmpMeta19 = tmpMeta24;
                    goto tmp21_done;
                  }
                  }
                  goto tmp21_end;
                  tmp21_end: ;
                }
                goto goto_20;
                goto_20:;
                goto goto_2;
                goto tmp21_done;
                tmp21_done:;
              }
            }
            _expression = tmpMeta19;

            _matchKind = 2;
          }
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _expectedType;
          tmp1_c1 = (omc_NFTypeCheck_getOption(threadData, _options, ((modelica_integer) 1))?4:7);
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,10,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _actualType;
          tmp1_c1 = (omc_NFTypeCheck_getOption(threadData, _options, ((modelica_integer) 1))?3:7);
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _expression = omc_NFExpression_unbox(threadData, _expression);

          _expression = omc_NFTypeCheck_matchTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_actualType), 2))), _expectedType, _expression, _options ,&_compatibleType ,&_matchKind);
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_matchKind)?2:(modelica_integer)_matchKind);
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _expression = omc_NFTypeCheck_matchTypes(threadData, _actualType, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_expectedType), 2))), _expression, _options ,&_compatibleType ,&_matchKind);

          _expression = omc_NFExpression_box(threadData, _expression);

          _compatibleType = omc_NFType_box(threadData, _compatibleType);
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_matchKind)?2:(modelica_integer)_matchKind);
          goto tmp3_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,14,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _expression = omc_NFTypeCheck_matchPolymorphic(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_expectedType), 2))), _actualType, _expression ,&_compatibleType ,&_matchKind);
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _expectedType;
          tmp1_c1 = 5;
          goto tmp3_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,15,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _expectedType;
          tmp1_c1 = 1;
          goto tmp3_done;
        }
        case 11: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _expression = omc_NFTypeCheck_matchConditionalArrayTypes__cast(threadData, _actualType, _expectedType, _expression, _options ,&_compatibleType ,&_matchKind);
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT162;
          tmp1_c1 = 7;
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
  _compatibleType = tmpMeta[0+0];
  _matchKind = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _expression;
}
modelica_metatype boxptr_NFTypeCheck_matchTypes__cast(threadData_t *threadData, modelica_metatype _actualType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexpression, modelica_metatype _options, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _expression = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _expression = omc_NFTypeCheck_matchTypes__cast(threadData, _actualType, _expectedType, __omcQ_24in_5Fexpression, tmp1, out_compatibleType, &_matchKind);
  /* skip box _expression; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _expression;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchConditionalArrayTypes__cast(threadData_t *threadData, modelica_metatype _condType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _options, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _true_ty = NULL;
  modelica_metatype _false_ty = NULL;
  modelica_metatype _cond_ty = NULL;
  modelica_metatype _comp_ty1 = NULL;
  modelica_metatype _comp_ty2 = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer _branch;
  modelica_integer _mk1;
  modelica_integer _mk2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  // _true_ty has no default value.
  // _false_ty has no default value.
  // _cond_ty has no default value.
  // _comp_ty1 has no default value.
  // _comp_ty2 has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _branch has no default value.
  // _mk1 has no default value.
  // _mk2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _condType;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,16,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _true_ty = tmpMeta2;
  _false_ty = tmpMeta3;
  _branch = tmp5  /* pattern as ty=enumeration(NONE, TRUE, FALSE) */;

  if(((modelica_integer)_branch == 1))
  {
    _e1 = omc_NFTypeCheck_matchTypes(threadData, _true_ty, _expectedType, _exp, _options ,&_comp_ty1 ,&_mk1);

    _e2 = omc_NFTypeCheck_matchTypes(threadData, _false_ty, _expectedType, _exp, _options ,&_comp_ty2 ,&_mk2);

    
    
    { /* match expression */
      modelica_boolean tmp9_1;modelica_boolean tmp9_2;
      tmp9_1 = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk1);
      tmp9_2 = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk2);
      {
        volatile mmc_switch_type tmp9;
        int tmp10;
        tmp9 = 0;
        for (; tmp9 < 4; tmp9++) {
          switch (MMC_SWITCH_CAST(tmp9)) {
          case 0: {
            modelica_metatype tmpMeta11;
            if (1 /* true */ != tmp9_1) goto tmp8_end;
            if (1 /* true */ != tmp9_2) goto tmp8_end;
            /* Pattern matching succeeded */
            tmpMeta11 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _comp_ty1, _comp_ty2, mmc_mk_integer(1));
            _cond_ty = tmpMeta11;

            _exp = omc_NFExpression_typeCast(threadData, _exp, _cond_ty);
            tmpMeta[0+0] = _comp_ty1;
            tmp6_c1 = (modelica_integer)_mk1;
            goto tmp8_done;
          }
          case 1: {
            modelica_metatype tmpMeta12;
            if (1 /* true */ != tmp9_1) goto tmp8_end;
            
            /* Pattern matching succeeded */
            tmpMeta12 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _comp_ty1, _false_ty, mmc_mk_integer(2));
            _cond_ty = tmpMeta12;

            _exp = omc_NFExpression_typeCast(threadData, _e1, _cond_ty);
            tmpMeta[0+0] = _comp_ty1;
            tmp6_c1 = (modelica_integer)_mk1;
            goto tmp8_done;
          }
          case 2: {
            modelica_metatype tmpMeta13;
            if (1 /* true */ != tmp9_2) goto tmp8_end;
            
            /* Pattern matching succeeded */
            tmpMeta13 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _true_ty, _comp_ty2, mmc_mk_integer(3));
            _cond_ty = tmpMeta13;

            _exp = omc_NFExpression_typeCast(threadData, _e2, _cond_ty);
            tmpMeta[0+0] = _comp_ty2;
            tmp6_c1 = (modelica_integer)_mk2;
            goto tmp8_done;
          }
          case 3: {
            
            /* Pattern matching succeeded */
            tmpMeta[0+0] = _condType;
            tmp6_c1 = (modelica_integer)_mk1;
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
    _compatibleType = tmpMeta[0+0];
    _matchKind = tmp6_c1;
  }
  else
  {
    if(((modelica_integer)_branch == 2))
    {
      _exp = omc_NFTypeCheck_matchTypes(threadData, _true_ty, _expectedType, _exp, _options ,&_compatibleType ,&_matchKind);

      tmpMeta14 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _compatibleType, _false_ty, mmc_mk_integer((modelica_integer)_branch));
      _cond_ty = tmpMeta14;
    }
    else
    {
      _exp = omc_NFTypeCheck_matchTypes(threadData, _false_ty, _expectedType, _exp, _options ,&_compatibleType ,&_matchKind);

      tmpMeta15 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _true_ty, _compatibleType, mmc_mk_integer((modelica_integer)_branch));
      _cond_ty = tmpMeta15;
    }

    if(omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_matchKind))
    {
      _exp = omc_NFExpression_typeCast(threadData, _exp, _cond_ty);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _exp;
}
modelica_metatype boxptr_NFTypeCheck_matchConditionalArrayTypes__cast(threadData_t *threadData, modelica_metatype _condType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _options, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _exp = omc_NFTypeCheck_matchConditionalArrayTypes__cast(threadData, _condType, _expectedType, __omcQ_24in_5Fexp, tmp1, out_compatibleType, &_matchKind);
  /* skip box _exp; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _exp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchConditionalArrayTypes(threadData_t *threadData, modelica_metatype _actualType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _options, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _actual_true_ty = NULL;
  modelica_metatype _actual_false_ty = NULL;
  modelica_metatype _expected_true_ty = NULL;
  modelica_metatype _expected_false_ty = NULL;
  modelica_metatype _true_ty = NULL;
  modelica_metatype _false_ty = NULL;
  modelica_metatype _true_exp = NULL;
  modelica_metatype _false_exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  // _actual_true_ty has no default value.
  // _actual_false_ty has no default value.
  // _expected_true_ty has no default value.
  // _expected_false_ty has no default value.
  // _true_ty has no default value.
  // _false_ty has no default value.
  // _true_exp has no default value.
  // _false_exp has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _actualType;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,16,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _actual_true_ty = tmpMeta2;
  _actual_false_ty = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _expectedType;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,16,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  _expected_true_ty = tmpMeta5;
  _expected_false_ty = tmpMeta6;

  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _exp;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 1; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,22,4) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          _true_exp = omc_NFTypeCheck_matchTypes(threadData, _actual_true_ty, _expected_true_ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _options ,&_true_ty ,&_matchKind);

          if((!omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_matchKind)))
          {
            _compatibleType = _actualType;

            goto _return;
          }

          _false_exp = omc_NFTypeCheck_matchTypes(threadData, _actual_false_ty, _expected_false_ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5))), _options ,&_false_ty ,&_matchKind);

          if((!omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_matchKind)))
          {
            _compatibleType = _actualType;

            goto _return;
          }

          tmpMeta11 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _true_ty, _false_ty, mmc_mk_integer(1));
          _compatibleType = tmpMeta11;

          tmpMeta12 = mmc_mk_box5(25, &NFExpression_IF__desc, _compatibleType, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _true_exp, _false_exp);
          _exp = tmpMeta12;
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
  _return: OMC_LABEL_UNUSED
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _exp;
}
modelica_metatype boxptr_NFTypeCheck_matchConditionalArrayTypes(threadData_t *threadData, modelica_metatype _actualType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _options, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _exp = omc_NFTypeCheck_matchConditionalArrayTypes(threadData, _actualType, _expectedType, __omcQ_24in_5Fexp, tmp1, out_compatibleType, &_matchKind);
  /* skip box _exp; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _exp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchConditionalArrayExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcondExp, modelica_metatype _condType, modelica_metatype __omcQ_24in_5FotherExp, modelica_metatype _otherType, modelica_integer _options, modelica_metatype *out_otherExp, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _condExp = NULL;
  modelica_metatype _otherExp = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _true_ty = NULL;
  modelica_metatype _false_ty = NULL;
  modelica_metatype _cond_ty = NULL;
  modelica_metatype _comp_ty1 = NULL;
  modelica_metatype _comp_ty2 = NULL;
  modelica_metatype _e1_1 = NULL;
  modelica_metatype _e2_1 = NULL;
  modelica_metatype _e1_2 = NULL;
  modelica_metatype _e2_2 = NULL;
  modelica_integer _branch;
  modelica_integer _mk1;
  modelica_integer _mk2;
  modelica_boolean _compat1;
  modelica_boolean _compat2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _condExp = __omcQ_24in_5FcondExp;
  _otherExp = __omcQ_24in_5FotherExp;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  // _true_ty has no default value.
  // _false_ty has no default value.
  // _cond_ty has no default value.
  // _comp_ty1 has no default value.
  // _comp_ty2 has no default value.
  // _e1_1 has no default value.
  // _e2_1 has no default value.
  // _e1_2 has no default value.
  // _e2_2 has no default value.
  // _branch has no default value.
  // _mk1 has no default value.
  // _mk2 has no default value.
  // _compat1 has no default value.
  // _compat2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _condType;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,16,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _true_ty = tmpMeta2;
  _false_ty = tmpMeta3;
  _branch = tmp5  /* pattern as ty=enumeration(NONE, TRUE, FALSE) */;

  if(((modelica_integer)_branch == 1))
  {
    _e1_1 = omc_NFTypeCheck_matchExpressions(threadData, _condExp, _true_ty, _otherExp, _otherType, _options ,&_e2_1 ,&_comp_ty1 ,&_mk1);

    _e1_2 = omc_NFTypeCheck_matchExpressions(threadData, _condExp, _false_ty, _otherExp, _otherType, _options ,&_e2_2 ,&_comp_ty2 ,&_mk2);

    _compat1 = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk1);

    _compat2 = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk2);

    
    
    
    { /* match expression */
      modelica_boolean tmp9_1;modelica_boolean tmp9_2;
      tmp9_1 = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk1);
      tmp9_2 = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk2);
      {
        volatile mmc_switch_type tmp9;
        int tmp10;
        tmp9 = 0;
        for (; tmp9 < 4; tmp9++) {
          switch (MMC_SWITCH_CAST(tmp9)) {
          case 0: {
            modelica_metatype tmpMeta11;
            if (1 /* true */ != tmp9_1) goto tmp8_end;
            if (1 /* true */ != tmp9_2) goto tmp8_end;
            /* Pattern matching succeeded */
            tmpMeta11 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _comp_ty1, _comp_ty2, mmc_mk_integer(1));
            _cond_ty = tmpMeta11;

            _condExp = omc_NFExpression_typeCast(threadData, _condExp, _cond_ty);
            tmpMeta[0+0] = _comp_ty1;
            tmpMeta[0+1] = _otherExp;
            tmp6_c2 = (modelica_integer)_mk1;
            goto tmp8_done;
          }
          case 1: {
            modelica_metatype tmpMeta12;
            if (1 /* true */ != tmp9_1) goto tmp8_end;
            
            /* Pattern matching succeeded */
            tmpMeta12 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _comp_ty1, _comp_ty2, mmc_mk_integer(2));
            _cond_ty = tmpMeta12;

            _condExp = omc_NFExpression_typeCast(threadData, _e1_1, _cond_ty);
            tmpMeta[0+0] = _comp_ty1;
            tmpMeta[0+1] = _e2_1;
            tmp6_c2 = (modelica_integer)_mk1;
            goto tmp8_done;
          }
          case 2: {
            modelica_metatype tmpMeta13;
            if (1 /* true */ != tmp9_2) goto tmp8_end;
            
            /* Pattern matching succeeded */
            tmpMeta13 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _comp_ty1, _comp_ty2, mmc_mk_integer(3));
            _cond_ty = tmpMeta13;

            _condExp = omc_NFExpression_typeCast(threadData, _e1_2, _cond_ty);
            tmpMeta[0+0] = _comp_ty2;
            tmpMeta[0+1] = _e2_2;
            tmp6_c2 = (modelica_integer)_mk2;
            goto tmp8_done;
          }
          case 3: {
            
            /* Pattern matching succeeded */
            tmpMeta[0+0] = _condType;
            tmpMeta[0+1] = _condExp;
            tmp6_c2 = (modelica_integer)_mk1;
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
    _compatibleType = tmpMeta[0+0];
    _otherExp = tmpMeta[0+1];
    _matchKind = tmp6_c2;
  }
  else
  {
    if(((modelica_integer)_branch == 2))
    {
      _condExp = omc_NFTypeCheck_matchExpressions(threadData, _condExp, _true_ty, _otherExp, _otherType, _options ,&_otherExp ,&_compatibleType ,&_matchKind);

      tmpMeta14 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _compatibleType, _false_ty, mmc_mk_integer((modelica_integer)_branch));
      _cond_ty = tmpMeta14;
    }
    else
    {
      _condExp = omc_NFTypeCheck_matchExpressions(threadData, _condExp, _false_ty, _otherExp, _otherType, _options ,&_otherExp ,&_compatibleType ,&_matchKind);

      tmpMeta15 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _true_ty, _compatibleType, mmc_mk_integer((modelica_integer)_branch));
      _cond_ty = tmpMeta15;
    }

    if(omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_matchKind))
    {
      _condExp = omc_NFExpression_typeCast(threadData, _condExp, _cond_ty);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_otherExp) { *out_otherExp = _otherExp; }
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _condExp;
}
modelica_metatype boxptr_NFTypeCheck_matchConditionalArrayExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcondExp, modelica_metatype _condType, modelica_metatype __omcQ_24in_5FotherExp, modelica_metatype _otherType, modelica_metatype _options, modelica_metatype *out_otherExp, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _condExp = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _condExp = omc_NFTypeCheck_matchConditionalArrayExp(threadData, __omcQ_24in_5FcondExp, _condType, __omcQ_24in_5FotherExp, _otherType, tmp1, out_otherExp, out_compatibleType, &_matchKind);
  /* skip box _condExp; NFExpression */
  /* skip box _otherExp; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _condExp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchBoxedExpressions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp1, modelica_metatype _type1, modelica_metatype __omcQ_24in_5Fexp2, modelica_metatype _type2, modelica_integer _options, modelica_metatype *out_exp2, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _exp1 = NULL;
  modelica_metatype _exp2 = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp1 = __omcQ_24in_5Fexp1;
  _exp2 = __omcQ_24in_5Fexp2;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  _e1 = omc_NFExpression_unbox(threadData, _exp1);

  _e2 = omc_NFExpression_unbox(threadData, _exp2);

  _e1 = omc_NFTypeCheck_matchExpressions(threadData, _e1, omc_NFType_unbox(threadData, _type1), _e2, omc_NFType_unbox(threadData, _type2), _options ,&_e2 ,&_compatibleType ,&_matchKind);

  if(omc_NFTypeCheck_isCastMatch(threadData, (modelica_integer)_matchKind))
  {
    _exp1 = omc_NFExpression_box(threadData, _e1);

    _exp2 = omc_NFExpression_box(threadData, _e2);
  }

  _compatibleType = omc_NFType_box(threadData, _compatibleType);
  _return: OMC_LABEL_UNUSED
  if (out_exp2) { *out_exp2 = _exp2; }
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _exp1;
}
modelica_metatype boxptr_NFTypeCheck_matchBoxedExpressions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp1, modelica_metatype _type1, modelica_metatype __omcQ_24in_5Fexp2, modelica_metatype _type2, modelica_metatype _options, modelica_metatype *out_exp2, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _exp1 = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _exp1 = omc_NFTypeCheck_matchBoxedExpressions(threadData, __omcQ_24in_5Fexp1, _type1, __omcQ_24in_5Fexp2, _type2, tmp1, out_exp2, out_compatibleType, &_matchKind);
  /* skip box _exp1; NFExpression */
  /* skip box _exp2; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _exp1;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchTupleTypes(threadData_t *threadData, modelica_metatype _tupleType1, modelica_metatype _tupleType2, modelica_metatype __omcQ_24in_5Fexpression, modelica_integer _options, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _expression = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _tyl1 = NULL;
  modelica_metatype _tyl2 = NULL;
  modelica_metatype _ty1 = NULL;
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
  _expression = __omcQ_24in_5Fexpression;
  _compatibleType = _tupleType1;
  _matchKind = 1;
  // _tyl1 has no default value.
  // _tyl2 has no default value.
  // _ty1 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tupleType1;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,8,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _tyl1 = tmpMeta2;

  /* Pattern-matching assignment */
  tmpMeta3 = _tupleType2;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,8,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  _tyl2 = tmpMeta4;

  if((listLength(_tyl1) < listLength(_tyl2)))
  {
    _matchKind = 7;

    goto _return;
  }

  {
    modelica_metatype _ty2;
    for (tmpMeta5 = _tyl2; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _ty2 = MMC_CAR(tmpMeta5);
      /* Pattern-matching assignment */
      tmpMeta6 = _tyl1;
      if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
      tmpMeta7 = MMC_CAR(tmpMeta6);
      tmpMeta8 = MMC_CDR(tmpMeta6);
      _ty1 = tmpMeta7;
      _tyl1 = tmpMeta8;

      if(omc_NFType_isUnknown(threadData, _ty2))
      {
        continue;
      }

      omc_NFTypeCheck_matchTypes(threadData, _ty1, _ty2, _expression, _options ,NULL ,&_matchKind);

      if(((modelica_integer)_matchKind != 1))
      {
        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _expression;
}
modelica_metatype boxptr_NFTypeCheck_matchTupleTypes(threadData_t *threadData, modelica_metatype _tupleType1, modelica_metatype _tupleType2, modelica_metatype __omcQ_24in_5Fexpression, modelica_metatype _options, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _expression = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _expression = omc_NFTypeCheck_matchTupleTypes(threadData, _tupleType1, _tupleType2, __omcQ_24in_5Fexpression, tmp1, out_compatibleType, &_matchKind);
  /* skip box _expression; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _expression;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchDimensions(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2, modelica_boolean *out_compatible)
{
  modelica_metatype _compatibleDim = NULL;
  modelica_boolean _compatible;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _compatibleDim has no default value.
  // _compatible has no default value.
  if(omc_NFDimension_isEqualKnown(threadData, _dim1, _dim2))
  {
    _compatibleDim = _dim1;

    _compatible = 1 /* true */;
  }
  else
  {
    if((!omc_NFDimension_isKnown(threadData, _dim1, 0 /* false */)))
    {
      _compatibleDim = _dim2;

      _compatible = 1 /* true */;
    }
    else
    {
      if((!omc_NFDimension_isKnown(threadData, _dim2, 0 /* false */)))
      {
        _compatibleDim = _dim1;

        _compatible = 1 /* true */;
      }
      else
      {
        _compatibleDim = _dim1;

        _compatible = 0 /* false */;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_compatible) { *out_compatible = _compatible; }
  return _compatibleDim;
}
modelica_metatype boxptr_NFTypeCheck_matchDimensions(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2, modelica_metatype *out_compatible)
{
  modelica_boolean _compatible;
  modelica_metatype _compatibleDim = NULL;
  _compatibleDim = omc_NFTypeCheck_matchDimensions(threadData, _dim1, _dim2, &_compatible);
  /* skip box _compatibleDim; NFDimension */
  if (out_compatible) { *out_compatible = mmc_mk_icon(_compatible); }
  return _compatibleDim;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchArrayDims(threadData_t *threadData, modelica_metatype _dims1, modelica_metatype _dims2, modelica_metatype __omcQ_24in_5Fty, modelica_integer __omcQ_24in_5FmatchKind, modelica_integer _options, modelica_integer *out_matchKind)
{
  modelica_metatype _ty = NULL;
  modelica_integer _matchKind;
  modelica_metatype _rest_dims2 = NULL;
  modelica_metatype _cdims = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _dim2 = NULL;
  modelica_boolean _compat;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ty = __omcQ_24in_5Fty;
  _matchKind = (modelica_integer)__omcQ_24in_5FmatchKind;
  _rest_dims2 = _dims2;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cdims = tmpMeta1;
  // _dim2 has no default value.
  // _compat has no default value.
  if((!omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_matchKind)))
  {
    goto _return;
  }

  if((listLength(_dims1) != listLength(_dims2)))
  {
    _matchKind = 7;

    goto _return;
  }

  {
    modelica_metatype _dim1;
    for (tmpMeta2 = _dims1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _dim1 = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _rest_dims2;
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
      tmpMeta4 = MMC_CAR(tmpMeta3);
      tmpMeta5 = MMC_CDR(tmpMeta3);
      _dim2 = tmpMeta4;
      _rest_dims2 = tmpMeta5;

      _dim1 = omc_NFTypeCheck_matchDimensions(threadData, _dim1, _dim2 ,&_compat);

      if(((!_compat) && (!omc_NFTypeCheck_getOption(threadData, _options, ((modelica_integer) 2)))))
      {
        _matchKind = 7;

        break;
      }

      tmpMeta6 = mmc_mk_cons(_dim1, _cdims);
      _cdims = tmpMeta6;
    }
  }

  tmpMeta8 = mmc_mk_box3(10, &NFType_ARRAY__desc, _ty, listReverseInPlace(_cdims));
  _ty = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _ty;
}
modelica_metatype boxptr_NFTypeCheck_matchArrayDims(threadData_t *threadData, modelica_metatype _dims1, modelica_metatype _dims2, modelica_metatype __omcQ_24in_5Fty, modelica_metatype __omcQ_24in_5FmatchKind, modelica_metatype _options, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _matchKind;
  modelica_metatype _ty = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5FmatchKind);
  tmp2 = mmc_unbox_integer(_options);
  _ty = omc_NFTypeCheck_matchArrayDims(threadData, _dims1, _dims2, __omcQ_24in_5Fty, tmp1, tmp2, &_matchKind);
  /* skip box _ty; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _ty;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchArrayTypes(threadData_t *threadData, modelica_metatype _arrayType1, modelica_metatype _arrayType2, modelica_metatype __omcQ_24in_5Fexpression, modelica_integer _options, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _expression = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _ety1 = NULL;
  modelica_metatype _ety2 = NULL;
  modelica_metatype _dims1 = NULL;
  modelica_metatype _dims2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _expression = __omcQ_24in_5Fexpression;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  // _ety1 has no default value.
  // _ety2 has no default value.
  // _dims1 has no default value.
  // _dims2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _arrayType1;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,7,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _ety1 = tmpMeta2;
  _dims1 = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _arrayType2;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,7,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  _ety2 = tmpMeta5;
  _dims2 = tmpMeta6;

  _expression = omc_NFTypeCheck_matchTypes(threadData, _ety1, _ety2, _expression, _options ,&_compatibleType ,&_matchKind);

  _compatibleType = omc_NFTypeCheck_matchArrayDims(threadData, _dims1, _dims2, _compatibleType, (modelica_integer)_matchKind, _options ,&_matchKind);
  _return: OMC_LABEL_UNUSED
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _expression;
}
modelica_metatype boxptr_NFTypeCheck_matchArrayTypes(threadData_t *threadData, modelica_metatype _arrayType1, modelica_metatype _arrayType2, modelica_metatype __omcQ_24in_5Fexpression, modelica_metatype _options, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _expression = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _expression = omc_NFTypeCheck_matchArrayTypes(threadData, _arrayType1, _arrayType2, __omcQ_24in_5Fexpression, tmp1, out_compatibleType, &_matchKind);
  /* skip box _expression; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _expression;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchArrayExpressions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp1, modelica_metatype _type1, modelica_metatype __omcQ_24in_5Fexp2, modelica_metatype _type2, modelica_integer _options, modelica_metatype *out_exp2, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _exp1 = NULL;
  modelica_metatype _exp2 = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _ety1 = NULL;
  modelica_metatype _ety2 = NULL;
  modelica_metatype _dims1 = NULL;
  modelica_metatype _dims2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp1 = __omcQ_24in_5Fexp1;
  _exp2 = __omcQ_24in_5Fexp2;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  // _ety1 has no default value.
  // _ety2 has no default value.
  // _dims1 has no default value.
  // _dims2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _type1;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,7,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _ety1 = tmpMeta2;
  _dims1 = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _type2;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,7,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  _ety2 = tmpMeta5;
  _dims2 = tmpMeta6;

  _exp1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _ety1, _exp2, _ety2, _options ,&_exp2 ,&_compatibleType ,&_matchKind);

  _compatibleType = omc_NFTypeCheck_matchArrayDims(threadData, _dims1, _dims2, _compatibleType, (modelica_integer)_matchKind, _options ,&_matchKind);
  _return: OMC_LABEL_UNUSED
  if (out_exp2) { *out_exp2 = _exp2; }
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _exp1;
}
modelica_metatype boxptr_NFTypeCheck_matchArrayExpressions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp1, modelica_metatype _type1, modelica_metatype __omcQ_24in_5Fexp2, modelica_metatype _type2, modelica_metatype _options, modelica_metatype *out_exp2, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _exp1 = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _exp1 = omc_NFTypeCheck_matchArrayExpressions(threadData, __omcQ_24in_5Fexp1, _type1, __omcQ_24in_5Fexp2, _type2, tmp1, out_exp2, out_compatibleType, &_matchKind);
  /* skip box _exp1; NFExpression */
  /* skip box _exp2; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _exp1;
}

DLLDirection
modelica_integer omc_NFTypeCheck_matchEnumerationTypes(threadData_t *threadData, modelica_metatype _type1, modelica_metatype _type2)
{
  modelica_integer _matchKind;
  modelica_metatype _lits1 = NULL;
  modelica_metatype _lits2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matchKind has no default value.
  // _lits1 has no default value.
  // _lits2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _type1;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,5,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _lits1 = tmpMeta2;

  /* Pattern-matching assignment */
  tmpMeta3 = _type2;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,5,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
  _lits2 = tmpMeta4;

  _matchKind = (omc_List_isEqualOnTrue(threadData, _lits1, _lits2, boxvar_stringEqual)?1:7);
  _return: OMC_LABEL_UNUSED
  return _matchKind;
}
modelica_metatype boxptr_NFTypeCheck_matchEnumerationTypes(threadData_t *threadData, modelica_metatype _type1, modelica_metatype _type2)
{
  modelica_integer _matchKind;
  modelica_metatype out_matchKind;
  _matchKind = omc_NFTypeCheck_matchEnumerationTypes(threadData, _type1, _type2);
  out_matchKind = mmc_mk_icon(_matchKind);
  return out_matchKind;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_matchFunctionParameters(threadData_t *threadData, modelica_metatype _params1, modelica_metatype _params2, modelica_integer _options)
{
  modelica_boolean _matching;
  modelica_metatype _pl1 = NULL;
  modelica_metatype _pl2 = NULL;
  modelica_metatype _p1 = NULL;
  modelica_metatype _dummy = NULL;
  modelica_integer _mk;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _matching = 1 /* true */;
  _pl1 = _params1;
  _pl2 = _params2;
  // _p1 has no default value.
  _dummy = _OMC_LIT41;
  // _mk has no default value.
  {
    modelica_metatype _p2;
    for (tmpMeta1 = _pl2; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _p2 = MMC_CAR(tmpMeta1);
      if(listEmpty(_pl1))
      {
        _matching = 0 /* false */;

        break;
      }

      /* Pattern-matching assignment */
      tmpMeta2 = _pl1;
      if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
      tmpMeta3 = MMC_CAR(tmpMeta2);
      tmpMeta4 = MMC_CDR(tmpMeta2);
      _p1 = tmpMeta3;
      _pl1 = tmpMeta4;

      if((!stringEqual(omc_NFInstNode_InstNode_name(threadData, _p1), omc_NFInstNode_InstNode_name(threadData, _p2))))
      {
        _matching = 0 /* false */;

        break;
      }

      omc_NFTypeCheck_matchTypes(threadData, omc_NFType_unbox(threadData, omc_NFInstNode_InstNode_getType(threadData, _p1)), omc_NFType_unbox(threadData, omc_NFInstNode_InstNode_getType(threadData, _p2)), _dummy, _options ,NULL ,&_mk);

      if(((modelica_integer)_mk != 1))
      {
        _matching = 0 /* false */;

        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _matching;
}
modelica_metatype boxptr_NFTypeCheck_matchFunctionParameters(threadData_t *threadData, modelica_metatype _params1, modelica_metatype _params2, modelica_metatype _options)
{
  modelica_integer tmp1;
  modelica_boolean _matching;
  modelica_metatype out_matching;
  tmp1 = mmc_unbox_integer(_options);
  _matching = omc_NFTypeCheck_matchFunctionParameters(threadData, _params1, _params2, tmp1);
  out_matching = mmc_mk_icon(_matching);
  return out_matching;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchFunctionTypes(threadData_t *threadData, modelica_metatype _actualType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexpression, modelica_integer _options, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _expression = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _inputs1 = NULL;
  modelica_metatype _inputs2 = NULL;
  modelica_metatype _remaining_inputs = NULL;
  modelica_metatype _outputs1 = NULL;
  modelica_metatype _outputs2 = NULL;
  modelica_metatype _slots1 = NULL;
  modelica_metatype _slots2 = NULL;
  modelica_metatype _input2 = NULL;
  modelica_metatype _output2 = NULL;
  modelica_metatype _slot1 = NULL;
  modelica_metatype _slot2 = NULL;
  modelica_boolean _matching;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _expression = __omcQ_24in_5Fexpression;
  _compatibleType = _actualType;
  _matchKind = 1;
  // _inputs1 has no default value.
  // _inputs2 has no default value.
  // _remaining_inputs has no default value.
  // _outputs1 has no default value.
  // _outputs2 has no default value.
  // _slots1 has no default value.
  // _slots2 has no default value.
  // _input2 has no default value.
  // _output2 has no default value.
  // _slot1 has no default value.
  // _slot2 has no default value.
  // _matching has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _actualType;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,12,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,13) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 7));
  _inputs1 = tmpMeta3;
  _outputs1 = tmpMeta4;
  _slots1 = tmpMeta5;

  /* Pattern-matching assignment */
  tmpMeta6 = _expectedType;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,12,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,13) == 0) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 5));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 7));
  _inputs2 = tmpMeta8;
  _outputs2 = tmpMeta9;
  _slots2 = tmpMeta10;

  if((listLength(_outputs1) != listLength(_outputs2)))
  {
    _matchKind = 7;

    goto _return;
  }

  if((!omc_NFTypeCheck_matchFunctionParameters(threadData, _outputs1, _outputs2, _options)))
  {
    _matchKind = 7;

    goto _return;
  }

  if((!omc_NFTypeCheck_matchFunctionParameters(threadData, _inputs1, _inputs2, _options)))
  {
    _matchKind = 7;

    goto _return;
  }

  {
    modelica_metatype _i;
    for (tmpMeta11 = _inputs2; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
    {
      _i = MMC_CAR(tmpMeta11);
      /* Pattern-matching assignment */
      tmpMeta12 = _slots1;
      if (listEmpty(tmpMeta12)) MMC_THROW_INTERNAL();
      tmpMeta13 = MMC_CAR(tmpMeta12);
      tmpMeta14 = MMC_CDR(tmpMeta12);
      _slot1 = tmpMeta13;
      _slots1 = tmpMeta14;

      /* Pattern-matching assignment */
      tmpMeta15 = _slots2;
      if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
      tmpMeta16 = MMC_CAR(tmpMeta15);
      tmpMeta17 = MMC_CDR(tmpMeta15);
      _slot2 = tmpMeta16;
      _slots2 = tmpMeta17;

      if((isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slot2), 4)))) && isNone((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slot1), 4))))))
      {
        _matchKind = 7;

        goto _return;
      }
    }
  }

  {
    modelica_metatype _slot;
    for (tmpMeta19 = _slots1; !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
    {
      _slot = MMC_CAR(tmpMeta19);
      if(isNone((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_slot), 4)))))
      {
        _matchKind = 7;

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _expression;
}
modelica_metatype boxptr_NFTypeCheck_matchFunctionTypes(threadData_t *threadData, modelica_metatype _actualType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexpression, modelica_metatype _options, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _expression = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _expression = omc_NFTypeCheck_matchFunctionTypes(threadData, _actualType, _expectedType, __omcQ_24in_5Fexpression, tmp1, out_compatibleType, &_matchKind);
  /* skip box _expression; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _expression;
}

DLLDirection
modelica_integer omc_NFTypeCheck_matchComponentList(threadData_t *threadData, modelica_metatype _comps1, modelica_metatype _comps2, modelica_integer _options)
{
  modelica_integer _matchKind;
  modelica_metatype _c2 = NULL;
  modelica_metatype _rest_c2 = NULL;
  modelica_metatype _dummy = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matchKind has no default value.
  // _c2 has no default value.
  _rest_c2 = _comps2;
  _dummy = _OMC_LIT41;
  if((listLength(_comps1) != listLength(_comps2)))
  {
    _matchKind = 7;
  }
  else
  {
    {
      modelica_metatype _c1;
      for (tmpMeta1 = _comps1; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _c1 = MMC_CAR(tmpMeta1);
        /* Pattern-matching assignment */
        tmpMeta2 = _rest_c2;
        if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
        tmpMeta3 = MMC_CAR(tmpMeta2);
        tmpMeta4 = MMC_CDR(tmpMeta2);
        _c2 = tmpMeta3;
        _rest_c2 = tmpMeta4;

        if((!stringEqual(omc_NFInstNode_InstNode_name(threadData, _c1), omc_NFInstNode_InstNode_name(threadData, _c2))))
        {
          _matchKind = 7;

          goto _return;
        }

        omc_NFTypeCheck_matchTypes(threadData, omc_NFInstNode_InstNode_getType(threadData, _c1), omc_NFInstNode_InstNode_getType(threadData, _c2), _dummy, _options ,NULL ,&_matchKind);

        if(((modelica_integer)_matchKind == 7))
        {
          goto _return;
        }
      }
    }
  }

  _matchKind = 6;
  _return: OMC_LABEL_UNUSED
  return _matchKind;
}
modelica_metatype boxptr_NFTypeCheck_matchComponentList(threadData_t *threadData, modelica_metatype _comps1, modelica_metatype _comps2, modelica_metatype _options)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype out_matchKind;
  tmp1 = mmc_unbox_integer(_options);
  _matchKind = omc_NFTypeCheck_matchComponentList(threadData, _comps1, _comps2, tmp1);
  out_matchKind = mmc_mk_icon(_matchKind);
  return out_matchKind;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_typeCastRecord(threadData_t *threadData, modelica_metatype _expressions, modelica_metatype _node, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexpression)
{
  modelica_metatype _expression = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _dims = NULL;
  modelica_metatype _ranges = NULL;
  modelica_metatype _iter = NULL;
  modelica_metatype _iters = NULL;
  modelica_metatype _sub = NULL;
  modelica_metatype _subs = NULL;
  modelica_integer _i;
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
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _expression = __omcQ_24in_5Fexpression;
  // _ty has no default value.
  // _dims has no default value.
  // _ranges has no default value.
  // _iter has no default value.
  // _iters has no default value.
  // _sub has no default value.
  // _subs has no default value.
  // _i has no default value.
  _ty = omc_NFExpression_typeOf(threadData, _expression);

  if(omc_NFType_isArray(threadData, _ty))
  {
    _dims = omc_NFType_arrayDims(threadData, _ty);

    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _ranges = tmpMeta1;

    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    _iters = tmpMeta2;

    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    _subs = tmpMeta3;

    _i = ((modelica_integer) 1);

    {
      modelica_metatype _d;
      for (tmpMeta4 = listReverse(_dims); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
      {
        _d = MMC_CAR(tmpMeta4);
        if(omc_NFDimension_isUnknown(threadData, _d))
        {
          tmpMeta6 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
          tmpMeta7 = mmc_mk_box3(17, &NFExpression_SIZE__desc, _expression, mmc_mk_some(tmpMeta6));
          tmpMeta8 = mmc_mk_box5(13, &NFExpression_RANGE__desc, _OMC_LIT37, _OMC_LIT38, mmc_mk_none(), tmpMeta7);
          tmpMeta5 = mmc_mk_cons(tmpMeta8, _ranges);
          _ranges = tmpMeta5;
        }
        else
        {
          tmpMeta9 = mmc_mk_cons(omc_NFDimension_toRange(threadData, _d), _ranges);
          _ranges = tmpMeta9;
        }

        _iter = omc_NFInstNode_InstNode_newUniqueIterator(threadData, omc_NFInstNode_InstNode_info(threadData, _node), _OMC_LIT37);

        tmpMeta10 = mmc_mk_cons(_iter, _iters);
        _iters = tmpMeta10;

        tmpMeta11 = mmc_mk_box3(9, &NFExpression_CREF__desc, _OMC_LIT37, omc_NFComponentRef_makeIterator(threadData, _iter, _OMC_LIT37));
        tmpMeta12 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta11);
        _sub = tmpMeta12;

        tmpMeta13 = mmc_mk_cons(_sub, _subs);
        _subs = tmpMeta13;

        _i = ((modelica_integer) 1) + _i;
      }
    }

    {
      modelica_metatype __omcQ_24tmpVar3;
      modelica_metatype* tmp16;
      modelica_metatype tmpMeta17;
      modelica_metatype __omcQ_24tmpVar2;
      modelica_integer tmp18;
      modelica_metatype _e_loopVar = 0;
      modelica_metatype _e;
      _e_loopVar = _expressions;
      tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar3 = tmpMeta17; /* defaultValue */
      tmp16 = &__omcQ_24tmpVar3;
      while(1) {
        tmp18 = 1;
        if (!listEmpty(_e_loopVar)) {
          _e = MMC_CAR(_e_loopVar);
          _e_loopVar = MMC_CDR(_e_loopVar);
          tmp18--;
        }
        if (tmp18 == 0) {
          __omcQ_24tmpVar2 = omc_NFExpression_applySubscripts(threadData, _subs, _e, 0 /* false */);
          *tmp16 = mmc_mk_cons(__omcQ_24tmpVar2,0);
          tmp16 = &MMC_CDR(*tmp16);
        } else if (tmp18 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp16 = mmc_mk_nil();
      tmpMeta15 = __omcQ_24tmpVar3;
    }
    tmpMeta19 = mmc_mk_box4(15, &NFExpression_RECORD__desc, omc_NFInstNode_InstNode_scopePath(threadData, _node, 1, 0 /* false */), _expectedType, tmpMeta15);
    _expression = tmpMeta19;

    {
      modelica_metatype __omcQ_24tmpVar5;
      modelica_metatype* tmp21;
      modelica_metatype tmpMeta22;
      modelica_metatype tmpMeta23;
      modelica_metatype __omcQ_24tmpVar4;
      modelica_integer tmp24;
      modelica_metatype _i_loopVar = 0;
      modelica_metatype _i;
      modelica_metatype _r_loopVar = 0;
      modelica_metatype _r;
      _i_loopVar = _iters;
      _r_loopVar = _ranges;
      tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar5 = tmpMeta22; /* defaultValue */
      tmp21 = &__omcQ_24tmpVar5;
      while(1) {
        tmp24 = 2;
        if (!listEmpty(_i_loopVar)) {
          _i = MMC_CAR(_i_loopVar);
          _i_loopVar = MMC_CDR(_i_loopVar);
          tmp24--;
        }if (!listEmpty(_r_loopVar)) {
          _r = MMC_CAR(_r_loopVar);
          _r_loopVar = MMC_CDR(_r_loopVar);
          tmp24--;
        }
        if (tmp24 == 0) {
          tmpMeta23 = mmc_mk_box2(0, _i, _r);
          __omcQ_24tmpVar4 = tmpMeta23;
          *tmp21 = mmc_mk_cons(__omcQ_24tmpVar4,0);
          tmp21 = &MMC_CDR(*tmp21);
        } else if (tmp24 == 2) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp21 = mmc_mk_nil();
      tmpMeta20 = __omcQ_24tmpVar5;
    }
    tmpMeta25 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, _ty, mmc_mk_integer(omc_NFExpression_variability(threadData, _expression)), mmc_mk_integer(omc_NFExpression_purity(threadData, _expression)), _expression, tmpMeta20);
    tmpMeta26 = mmc_mk_box2(16, &NFExpression_CALL__desc, tmpMeta25);
    _expression = tmpMeta26;
  }
  else
  {
    tmpMeta27 = mmc_mk_box4(15, &NFExpression_RECORD__desc, omc_NFInstNode_InstNode_scopePath(threadData, _node, 1, 0 /* false */), _expectedType, _expressions);
    _expression = tmpMeta27;
  }
  _return: OMC_LABEL_UNUSED
  return _expression;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchComplexComponents(threadData_t *threadData, modelica_metatype _actualComponents, modelica_metatype _expectedComponents, modelica_metatype _expressions, modelica_metatype _classTree, modelica_integer _options, modelica_integer *out_matchKind)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _matchedExpressions = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _matchKind;
  modelica_metatype _anode = NULL;
  modelica_metatype _enode = NULL;
  modelica_metatype _acomp = NULL;
  modelica_metatype _ecomp = NULL;
  modelica_integer _idx;
  modelica_metatype _e = NULL;
  modelica_integer _mk;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _matchedExpressions = tmpMeta1;
  _matchKind = 6;
  // _anode has no default value.
  // _enode has no default value.
  // _acomp has no default value.
  // _ecomp has no default value.
  // _idx has no default value.
  // _e has no default value.
  // _mk has no default value.
  if(((arrayLength(_actualComponents) != arrayLength(_expectedComponents)) || (arrayLength(_actualComponents) != arrayLength(_expressions))))
  {
    _matchKind = 7;

    goto _return;
  }

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = arrayLength(_actualComponents);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
    {
      _enode = arrayGet(_expectedComponents,_i) /* DAE.ASUB */;

      _ecomp = omc_NFInstNode_InstNode_component(threadData, _enode);

      _anode = arrayGet(_actualComponents,_i) /* DAE.ASUB */;

      if((stringEqual(omc_NFInstNode_InstNode_name(threadData, _anode), omc_NFInstNode_InstNode_name(threadData, _enode))))
      {
        _idx = _i;
      }
      else
      {
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
                _idx = omc_NFClassTree_ClassTree_lookupComponentIndex(threadData, omc_NFInstNode_InstNode_name(threadData, _enode), _classTree);
                goto tmp3_done;
              }
              case 1: {
                /* Pattern matching succeeded */
                _matchKind = 7;

                goto _return;
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

        _anode = arrayGet(_actualComponents,_idx) /* DAE.ASUB */;
      }

      if((_i != _idx))
      {
        _matchKind = 2;
      }

      _acomp = omc_NFInstNode_InstNode_component(threadData, _anode);

      _e = arrayGet(_expressions,_idx) /* DAE.ASUB */;

      _e = omc_NFTypeCheck_matchTypes(threadData, omc_NFComponent_getType(threadData, _acomp), omc_NFComponent_getType(threadData, _ecomp), _e, _options ,NULL ,&_mk);

      tmpMeta6 = mmc_mk_cons(_e, _matchedExpressions);
      _matchedExpressions = tmpMeta6;

      if(((modelica_integer)_mk == 2))
      {
        _matchKind = (modelica_integer)_mk;
      }
      else
      {
        if((!omc_NFTypeCheck_isValidPlugCompatibleMatch(threadData, (modelica_integer)_mk)))
        {
          _matchKind = 7;

          break;
        }
      }
    }
  }

  _matchedExpressions = listReverseInPlace(_matchedExpressions);
  _return: OMC_LABEL_UNUSED
  if (out_matchKind) { *out_matchKind = _matchKind; }
  threadData->mmc_jumper = old_mmc_jumper;
  return _matchedExpressions;
}
modelica_metatype boxptr_NFTypeCheck_matchComplexComponents(threadData_t *threadData, modelica_metatype _actualComponents, modelica_metatype _expectedComponents, modelica_metatype _expressions, modelica_metatype _classTree, modelica_metatype _options, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _matchedExpressions = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_options);
  _matchedExpressions = omc_NFTypeCheck_matchComplexComponents(threadData, _actualComponents, _expectedComponents, _expressions, _classTree, tmp1, &_matchKind);
  /* skip box _matchedExpressions; list<NFExpression> */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _matchedExpressions;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchComplexTypes(threadData_t *threadData, modelica_metatype _actualType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexpression, modelica_integer _options, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _expression = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _cls1 = NULL;
  modelica_metatype _cls2 = NULL;
  modelica_metatype _ctree = NULL;
  modelica_metatype _anode = NULL;
  modelica_metatype _enode = NULL;
  modelica_metatype _comps1 = NULL;
  modelica_metatype _comps2 = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _cty1 = NULL;
  modelica_metatype _cty2 = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _matched_elements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _elem_arr = NULL;
  modelica_integer _mk;
  modelica_metatype _comp1 = NULL;
  modelica_metatype _comp2 = NULL;
  modelica_integer _opt;
  modelica_integer _idx;
  modelica_metatype _dims = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _expression = __omcQ_24in_5Fexpression;
  _compatibleType = _actualType;
  _matchKind = 7;
  // _cls1 has no default value.
  // _cls2 has no default value.
  // _ctree has no default value.
  // _anode has no default value.
  // _enode has no default value.
  // _comps1 has no default value.
  // _comps2 has no default value.
  // _path has no default value.
  // _ty has no default value.
  // _cty1 has no default value.
  // _cty2 has no default value.
  // _e has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _matched_elements = tmpMeta1;
  // _elem_arr has no default value.
  // _mk has no default value.
  // _comp1 has no default value.
  // _comp2 has no default value.
  _opt = _options;
  // _idx has no default value.
  // _dims has no default value.
  /* Pattern-matching assignment */
  tmpMeta2 = _actualType;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,11,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  _anode = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _expectedType;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,11,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  _enode = tmpMeta5;

  if(omc_NFInstNode_InstNode_isSame(threadData, _anode, _enode))
  {
    _matchKind = 1;

    goto _return;
  }

  _cls1 = omc_NFInstNode_InstNode_getClass(threadData, _anode);

  _cls2 = omc_NFInstNode_InstNode_getClass(threadData, _enode);

  if(omc_NFTypeCheck_getOption(threadData, _opt, ((modelica_integer) 4)))
  {
    _opt = omc_NFTypeCheck_setOption(threadData, _opt, ((modelica_integer) 2));
  }

  { /* match expression */
    modelica_metatype tmp8_1;modelica_metatype tmp8_2;modelica_metatype tmp8_3;modelica_metatype tmp8_4;
    tmp8_1 = _cls1;
    tmp8_2 = _actualType;
    tmp8_3 = _cls2;
    tmp8_4 = _expectedType;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 3; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,11,2) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,3) == 0) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_4,11,2) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_4), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,3) == 0) goto tmp7_end;
          
          _cty1 = tmpMeta10;
          _cty2 = tmpMeta11;
          /* Pattern matching succeeded */
          _matchKind = omc_NFTypeCheck_matchComponentList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cty1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cty2), 2))), _options);

          if(((modelica_integer)_matchKind != 7))
          {
            _matchKind = omc_NFTypeCheck_matchComponentList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cty1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cty2), 3))), _options);

            if(((modelica_integer)_matchKind != 7))
            {
              _matchKind = omc_NFTypeCheck_matchComponentList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cty1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cty2), 4))), _options);
            }
          }

          if(((modelica_integer)_matchKind != 7))
          {
            _matchKind = 6;
          }
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,5,5) == 0) goto tmp7_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,3,5) == 0) goto tmp7_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_3,5,5) == 0) goto tmp7_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_3), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,3,5) == 0) goto tmp7_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 4));
          
          _ctree = tmpMeta12;
          _comps1 = tmpMeta13;
          _comps2 = tmpMeta15;
          /* Pattern matching succeeded */
          if((arrayLength(_comps1) != arrayLength(_comps2)))
          {
            _matchKind = 7;

            goto _return;
          }

          _matchKind = 6;

          { /* match expression */
            modelica_metatype tmp19_1;
            tmp19_1 = _expression;
            {
              volatile mmc_switch_type tmp19;
              int tmp20;
              tmp19 = 0;
              for (; tmp19 < 2; tmp19++) {
                switch (MMC_SWITCH_CAST(tmp19)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp19_1,12,3) == 0) goto tmp18_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta16 = listArray((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_expression), 4))));
                  goto tmp18_done;
                }
                case 1: {
                  modelica_metatype tmpMeta21;
                  modelica_integer tmp22;
                  modelica_integer tmp23;
                  modelica_integer tmp24;
                  
                  /* Pattern matching succeeded */
                  _elem_arr = arrayCreateNoInit(arrayLength(_comps1), _OMC_LIT41);

                  _dims = omc_NFType_arrayDims(threadData, omc_NFExpression_typeOf(threadData, _expression));

                  tmp22 = arrayLength(_comps1); tmp23 = ((modelica_integer) -1); tmp24 = ((modelica_integer) 1);
                  if(!(((tmp23 > 0) && (tmp22 > tmp24)) || ((tmp23 < 0) && (tmp22 < tmp24))))
                  {
                    modelica_integer _i;
                    for(_i = arrayLength(_comps1); in_range_integer(_i, tmp22, tmp24); _i += tmp23)
                    {
                      _ty = omc_NFComponent_getType(threadData, omc_NFInstNode_InstNode_component(threadData, arrayGet(_comps1,_i) /* DAE.ASUB */));

                      _ty = omc_NFType_liftArrayRightList(threadData, _ty, _dims);

                      tmpMeta21 = mmc_mk_box5(31, &NFExpression_RECORD__ELEMENT__desc, _expression, mmc_mk_integer(_i), omc_NFInstNode_InstNode_name(threadData, arrayGet(_comps1,_i) /* DAE.ASUB */), _ty);
                      arrayUpdate(_elem_arr,_i,tmpMeta21);
                    }
                  }
                  tmpMeta16 = _elem_arr;
                  goto tmp18_done;
                }
                }
                goto tmp18_end;
                tmp18_end: ;
              }
              goto goto_17;
              goto_17:;
              goto goto_6;
              goto tmp18_done;
              tmp18_done:;
            }
          }
          _elem_arr = tmpMeta16;

          _matched_elements = omc_NFTypeCheck_matchComplexComponents(threadData, _comps1, _comps2, _elem_arr, _ctree, _opt ,&_matchKind);

          if(((modelica_integer)_matchKind == 2))
          {
            _expression = omc_NFTypeCheck_typeCastRecord(threadData, _matched_elements, _enode, _expectedType, _expression);
          }
          goto tmp7_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          _matchKind = 7;
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
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _expression;
}
modelica_metatype boxptr_NFTypeCheck_matchComplexTypes(threadData_t *threadData, modelica_metatype _actualType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexpression, modelica_metatype _options, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _expression = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _expression = omc_NFTypeCheck_matchComplexTypes(threadData, _actualType, _expectedType, __omcQ_24in_5Fexpression, tmp1, out_compatibleType, &_matchKind);
  /* skip box _expression; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _expression;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchExpressions__cast(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp1, modelica_metatype _type1, modelica_metatype __omcQ_24in_5Fexp2, modelica_metatype _type2, modelica_integer _options, modelica_metatype *out_exp2, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _exp1 = NULL;
  modelica_metatype _exp2 = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype _before = NULL;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp1 = __omcQ_24in_5Fexp1;
  _exp2 = __omcQ_24in_5Fexp2;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  _before = _exp1;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _type1;
    tmp4_2 = _type2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 16; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          _exp1 = omc_NFExpression_typeCast(threadData, _exp1, _type2);
          tmpMeta[0+0] = _type2;
          tmp1_c1 = 2;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Flags_isConfigFlagSet(threadData, _OMC_LIT158, _OMC_LIT103)) goto tmp3_end;
          _exp1 = omc_NFExpression_typeCast(threadData, _exp1, _type2);

          tmpMeta6 = stringAppend(_OMC_LIT163,omc_NFExpression_toString(threadData, _before));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT164);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFExpression_toString(threadData, _exp1));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT94);
          tmpMeta10 = stringAppend(tmpMeta9,omc_NFExpression_toString(threadData, _before));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT95);
          omc_Error_addCompilerWarning(threadData, tmpMeta11);
          tmpMeta[0+0] = _type2;
          tmp1_c1 = 2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Flags_isConfigFlagSet(threadData, _OMC_LIT158, _OMC_LIT107)) goto tmp3_end;
          _exp1 = omc_NFExpression_typeCast(threadData, _exp1, _type2);

          tmpMeta12 = stringAppend(_OMC_LIT165,omc_NFExpression_toString(threadData, _before));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT166);
          tmpMeta14 = stringAppend(tmpMeta13,omc_NFExpression_toString(threadData, _exp1));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT161);
          omc_Error_addCompilerWarning(threadData, tmpMeta15);
          tmpMeta[0+0] = _type2;
          tmp1_c1 = 2;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          _exp2 = omc_NFExpression_typeCast(threadData, _exp2, _type1);
          tmpMeta[0+0] = _type1;
          tmp1_c1 = 2;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Flags_isSet(threadData, _OMC_LIT172)) goto tmp3_end;
          tmpMeta16 = stringAppend(_OMC_LIT167,omc_NFExpression_toString(threadData, _exp1));
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT168);
          omc_Error_addCompilerWarning(threadData, tmpMeta17);

          _exp1 = omc_NFExpression_typeCast(threadData, _exp1, _type2);
          tmpMeta[0+0] = _type2;
          tmp1_c1 = 2;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Flags_isSet(threadData, _OMC_LIT172)) goto tmp3_end;
          tmpMeta18 = stringAppend(_OMC_LIT167,omc_NFExpression_toString(threadData, _exp2));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT168);
          omc_Error_addCompilerWarning(threadData, tmpMeta19);

          _exp2 = omc_NFExpression_typeCast(threadData, _exp2, _type1);
          tmpMeta[0+0] = _type1;
          tmp1_c1 = 2;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta20)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmpMeta20);
          tmpMeta22 = MMC_CDR(tmpMeta20);
          
          _compatibleType = tmpMeta21;
          /* Pattern matching succeeded */
          _exp1 = omc_NFExpression_tupleElement(threadData, _exp1, _compatibleType, ((modelica_integer) 1));

          _exp1 = omc_NFTypeCheck_matchTypes(threadData, _compatibleType, _type2, _exp1, _options ,&_compatibleType ,&_matchKind);

          if(omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_matchKind))
          {
            _matchKind = 2;
          }
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _type2;
          tmp1_c1 = (omc_NFTypeCheck_getOption(threadData, _options, ((modelica_integer) 1))?1:7);
          goto tmp3_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,10,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _type1;
          tmp1_c1 = (omc_NFTypeCheck_getOption(threadData, _options, ((modelica_integer) 1))?1:7);
          goto tmp3_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _exp1 = omc_NFTypeCheck_matchExpressions(threadData, omc_NFExpression_unbox(threadData, _exp1), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_type1), 2))), _exp2, _type2, _options ,&_exp2 ,&_compatibleType ,&_matchKind);
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _exp1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _type1, omc_NFExpression_unbox(threadData, _exp2), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_type2), 2))), _options ,&_exp2 ,&_compatibleType ,&_matchKind);
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 11: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,14,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _exp1 = omc_NFExpression_box(threadData, _exp1);
          tmpMeta[0+0] = omc_NFType_box(threadData, _type1);
          tmp1_c1 = 5;
          goto tmp3_done;
        }
        case 12: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _exp2 = omc_NFExpression_box(threadData, _exp2);
          tmpMeta[0+0] = omc_NFType_box(threadData, _type2);
          tmp1_c1 = 5;
          goto tmp3_done;
        }
        case 13: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _exp1 = omc_NFTypeCheck_matchConditionalArrayExp(threadData, _exp1, _type1, _exp2, _type2, _options ,&_exp2 ,&_compatibleType ,&_matchKind);
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 14: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,16,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _exp2 = omc_NFTypeCheck_matchConditionalArrayExp(threadData, _exp2, _type2, _exp1, _type1, _options ,&_exp1 ,&_compatibleType ,&_matchKind);
          tmpMeta[0+0] = _compatibleType;
          tmp1_c1 = (modelica_integer)_matchKind;
          goto tmp3_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT162;
          tmp1_c1 = 7;
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
  _compatibleType = tmpMeta[0+0];
  _matchKind = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_exp2) { *out_exp2 = _exp2; }
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _exp1;
}
modelica_metatype boxptr_NFTypeCheck_matchExpressions__cast(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp1, modelica_metatype _type1, modelica_metatype __omcQ_24in_5Fexp2, modelica_metatype _type2, modelica_metatype _options, modelica_metatype *out_exp2, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _exp1 = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _exp1 = omc_NFTypeCheck_matchExpressions__cast(threadData, __omcQ_24in_5Fexp1, _type1, __omcQ_24in_5Fexp2, _type2, tmp1, out_exp2, out_compatibleType, &_matchKind);
  /* skip box _exp1; NFExpression */
  /* skip box _exp2; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _exp1;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchTypes(threadData_t *threadData, modelica_metatype _actualType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexpression, modelica_integer _options, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _expression = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _expression = __omcQ_24in_5Fexpression;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  if(referenceEq(_actualType, _expectedType))
  {
    _compatibleType = _actualType;

    _matchKind = 1;

    goto _return;
  }

  if((valueConstructor(_actualType) != valueConstructor(_expectedType)))
  {
    _expression = omc_NFTypeCheck_matchTypes__cast(threadData, _actualType, _expectedType, _expression, _options ,&_compatibleType ,&_matchKind);

    goto _return;
  }

  _matchKind = 1;

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _actualType;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _actualType;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _actualType;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _actualType;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _actualType;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _actualType;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          if(omc_NFType_isUnspecifiedEnumeration(threadData, _expectedType))
          {
            _matchKind = 1;
          }
          else
          {
            _matchKind = omc_NFTypeCheck_matchEnumerationTypes(threadData, _actualType, _expectedType);
          }
          tmpMeta1 = _actualType;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          _expression = omc_NFTypeCheck_matchArrayTypes(threadData, _actualType, _expectedType, _expression, _options ,&_compatibleType ,&_matchKind);
          tmpMeta1 = _compatibleType;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          _expression = omc_NFTypeCheck_matchTupleTypes(threadData, _actualType, _expectedType, _expression, _options ,&_compatibleType ,&_matchKind);
          tmpMeta1 = _compatibleType;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          _matchKind = (omc_NFTypeCheck_getOption(threadData, _options, ((modelica_integer) 1))?1:7);
          tmpMeta1 = _actualType;
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          _expression = omc_NFTypeCheck_matchComplexTypes(threadData, _actualType, _expectedType, _expression, _options ,&_compatibleType ,&_matchKind);
          tmpMeta1 = _compatibleType;
          goto tmp3_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          _expression = omc_NFTypeCheck_matchFunctionTypes(threadData, _actualType, _expectedType, _expression, _options ,&_compatibleType ,&_matchKind);
          tmpMeta1 = _compatibleType;
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          _expression = omc_NFTypeCheck_matchTypes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_actualType), 2))), omc_NFType_unbox(threadData, _expectedType), omc_NFExpression_unbox(threadData, _expression), _options ,&_compatibleType ,&_matchKind);

          _expression = omc_NFExpression_box(threadData, _expression);
          tmpMeta1 = omc_NFType_box(threadData, _compatibleType);
          goto tmp3_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          _expression = omc_NFTypeCheck_matchConditionalArrayTypes(threadData, _actualType, _expectedType, _expression, _options ,&_compatibleType ,&_matchKind);
          tmpMeta1 = _compatibleType;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT173, _OMC_LIT174);
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
  _compatibleType = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _expression;
}
modelica_metatype boxptr_NFTypeCheck_matchTypes(threadData_t *threadData, modelica_metatype _actualType, modelica_metatype _expectedType, modelica_metatype __omcQ_24in_5Fexpression, modelica_metatype _options, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _expression = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _expression = omc_NFTypeCheck_matchTypes(threadData, _actualType, _expectedType, __omcQ_24in_5Fexpression, tmp1, out_compatibleType, &_matchKind);
  /* skip box _expression; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _expression;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchExpressions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp1, modelica_metatype _type1, modelica_metatype __omcQ_24in_5Fexp2, modelica_metatype _type2, modelica_integer _options, modelica_metatype *out_exp2, modelica_metatype *out_compatibleType, modelica_integer *out_matchKind)
{
  modelica_metatype _exp1 = NULL;
  modelica_metatype _exp2 = NULL;
  modelica_metatype _compatibleType = NULL;
  modelica_integer _matchKind;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp1 = __omcQ_24in_5Fexp1;
  _exp2 = __omcQ_24in_5Fexp2;
  // _compatibleType has no default value.
  // _matchKind has no default value.
  if(referenceEq(_type1, _type2))
  {
    _compatibleType = _type1;

    _matchKind = 1;

    goto _return;
  }

  if((valueConstructor(_type1) != valueConstructor(_type2)))
  {
    _exp1 = omc_NFTypeCheck_matchExpressions__cast(threadData, _exp1, _type1, _exp2, _type2, _options ,&_exp2 ,&_compatibleType ,&_matchKind);

    goto _return;
  }

  _matchKind = 1;

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _type1;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _type1;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _type1;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _type1;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _type1;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _type1;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          _matchKind = omc_NFTypeCheck_matchEnumerationTypes(threadData, _type1, _type2);
          tmpMeta1 = _type1;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          _exp1 = omc_NFTypeCheck_matchArrayExpressions(threadData, _exp1, _type1, _exp2, _type2, _options ,&_exp2 ,&_compatibleType ,&_matchKind);
          tmpMeta1 = _compatibleType;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          _exp1 = omc_NFTypeCheck_matchTupleTypes(threadData, _type1, _type1, _exp1, _options ,&_compatibleType ,&_matchKind);
          tmpMeta1 = _compatibleType;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          _matchKind = (omc_NFTypeCheck_getOption(threadData, _options, ((modelica_integer) 1))?1:7);
          tmpMeta1 = _type1;
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          _exp1 = omc_NFTypeCheck_matchComplexTypes(threadData, _type1, _type2, _exp1, _options ,&_compatibleType ,&_matchKind);
          tmpMeta1 = _compatibleType;
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          _exp1 = omc_NFTypeCheck_matchBoxedExpressions(threadData, _exp1, _type1, _exp2, _type2, _options ,&_exp2 ,&_compatibleType ,&_matchKind);
          tmpMeta1 = _compatibleType;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT175, _OMC_LIT176);
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
  _compatibleType = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_exp2) { *out_exp2 = _exp2; }
  if (out_compatibleType) { *out_compatibleType = _compatibleType; }
  if (out_matchKind) { *out_matchKind = _matchKind; }
  return _exp1;
}
modelica_metatype boxptr_NFTypeCheck_matchExpressions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp1, modelica_metatype _type1, modelica_metatype __omcQ_24in_5Fexp2, modelica_metatype _type2, modelica_metatype _options, modelica_metatype *out_exp2, modelica_metatype *out_compatibleType, modelica_metatype *out_matchKind)
{
  modelica_integer tmp1;
  modelica_integer _matchKind;
  modelica_metatype _exp1 = NULL;
  tmp1 = mmc_unbox_integer(_options);
  _exp1 = omc_NFTypeCheck_matchExpressions(threadData, __omcQ_24in_5Fexp1, _type1, __omcQ_24in_5Fexp2, _type2, tmp1, out_exp2, out_compatibleType, &_matchKind);
  /* skip box _exp1; NFExpression */
  /* skip box _exp2; NFExpression */
  /* skip box _compatibleType; NFType */
  if (out_matchKind) { *out_matchKind = mmc_mk_icon(_matchKind); }
  return _exp1;
}

DLLDirection
void omc_NFTypeCheck_printUnresolvableTypeError(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _types, modelica_metatype _info, modelica_boolean _printError)
{
  modelica_string _exp_str = NULL;
  modelica_string _ty_str = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp_str has no default value.
  // _ty_str has no default value.
  if(_printError)
  {
    _exp_str = omc_NFExpression_toString(threadData, _exp);

    _ty_str = omc_List_toString(threadData, _types, boxvar_NFType_toString, _OMC_LIT10, _OMC_LIT10, _OMC_LIT177, _OMC_LIT10, 0 /* false */, ((modelica_integer) 0));

    tmpMeta1 = mmc_mk_cons(_exp_str, mmc_mk_cons(_ty_str, mmc_mk_cons(_OMC_LIT181, MMC_REFSTRUCTLIT(mmc_nil))));
    omc_Error_addSourceMessage(threadData, _OMC_LIT180, tmpMeta1, _info);
  }

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NFTypeCheck_printUnresolvableTypeError(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _types, modelica_metatype _info, modelica_metatype _printError)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_printError);
  omc_NFTypeCheck_printUnresolvableTypeError(threadData, _exp, _types, _info, tmp1);
  return;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_checkRelationOperation(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _operator, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_integer _index, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _mk;
  modelica_boolean _valid;
  modelica_integer _o;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2 = 0;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _resultType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _ty has no default value.
  // _mk has no default value.
  // _valid has no default value.
  // _o has no default value.
  if((omc_NFType_isComplex(threadData, omc_NFType_arrayElementType(threadData, _type1)) || omc_NFType_isComplex(threadData, omc_NFType_arrayElementType(threadData, _type2))))
  {
    _outExp = omc_NFTypeCheck_checkOverloadedBinaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _operator, _exp2, _type2, (modelica_integer)_var2, _context, _info ,&_resultType);

    goto _return;
  }

  _e1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _type1, _exp2, _type2, ((modelica_integer) 0) ,&_e2 ,&_ty ,&_mk);

  _valid = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk);

  _resultType = _OMC_LIT39;

  tmpMeta1 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _e1, omc_NFOperator_setType(threadData, _ty, _operator), _e2, mmc_mk_integer(_index));
  _outExp = tmpMeta1;

  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _ty;
    {
      int tmp5;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp5_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp2 = _valid;
          goto tmp4_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _o = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3))));

          if(((!omc_NFInstContext_inFunction(threadData, _context)) && (((modelica_integer)_o == 34) || ((modelica_integer)_o == 35))))
          {
            tmpMeta6 = mmc_mk_cons(omc_NFExpression_toString(threadData, _outExp), mmc_mk_cons(omc_NFOperator_symbol(threadData, _operator, _OMC_LIT10), MMC_REFSTRUCTLIT(mmc_nil)));
            omc_Error_addStrictMessage(threadData, _OMC_LIT185, tmpMeta6, _info);
          }
          tmp2 = _valid;
          goto tmp4_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp2 = _valid;
          goto tmp4_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp2 = _valid;
          goto tmp4_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp2 = _valid;
          goto tmp4_done;
        }
        default:
        tmp4_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp2 = 0 /* false */;
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
  _valid = tmp2;

  if((!_valid))
  {
    tmpMeta7 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _outExp, tmpMeta7, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _outExp;
}
modelica_metatype boxptr_NFTypeCheck_checkRelationOperation(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _operator, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _index, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_index);
  tmp4 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkRelationOperation(threadData, _exp1, _type1, tmp1, _operator, _exp2, _type2, tmp2, tmp3, tmp4, _info, out_resultType);
  /* skip box _outExp; NFExpression */
  /* skip box _resultType; NFType */
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_checkLogicalUnaryOperation(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _operator, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer _mk;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _resultType = _type1;
  // _e1 has no default value.
  // _e2 has no default value.
  // _mk has no default value.
  if(omc_NFType_isComplex(threadData, omc_NFType_arrayElementType(threadData, _type1)))
  {
    _outExp = omc_NFTypeCheck_checkOverloadedUnaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _operator, _context, _info ,&_resultType);

    goto _return;
  }

  tmpMeta1 = mmc_mk_box3(22, &NFExpression_LUNARY__desc, omc_NFOperator_setType(threadData, _type1, _operator), _exp1);
  _outExp = tmpMeta1;

  if((!omc_NFType_isBoolean(threadData, omc_NFType_arrayElementType(threadData, _type1))))
  {
    tmpMeta2 = mmc_mk_cons(_type1, MMC_REFSTRUCTLIT(mmc_nil));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _outExp, tmpMeta2, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _outExp;
}
modelica_metatype boxptr_NFTypeCheck_checkLogicalUnaryOperation(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _operator, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkLogicalUnaryOperation(threadData, _exp1, _type1, tmp1, _operator, tmp2, _info, out_resultType);
  /* skip box _outExp; NFExpression */
  /* skip box _resultType; NFType */
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_checkLogicalBinaryOperation(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _operator, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer _mk;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _resultType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _mk has no default value.
  if((omc_NFType_isComplex(threadData, omc_NFType_arrayElementType(threadData, _type1)) || omc_NFType_isComplex(threadData, omc_NFType_arrayElementType(threadData, _type2))))
  {
    _outExp = omc_NFTypeCheck_checkOverloadedBinaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _operator, _exp2, _type2, (modelica_integer)_var2, _context, _info ,&_resultType);

    goto _return;
  }

  _e1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _type1, _exp2, _type2, ((modelica_integer) 1) ,&_e2 ,&_resultType ,&_mk);

  tmpMeta1 = mmc_mk_box4(21, &NFExpression_LBINARY__desc, _e1, omc_NFOperator_setType(threadData, _resultType, _operator), _e2);
  _outExp = tmpMeta1;

  if(((!omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk)) || (!omc_NFType_isBoolean(threadData, omc_NFType_arrayElementType(threadData, _resultType)))))
  {
    tmpMeta2 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _outExp, tmpMeta2, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _outExp;
}
modelica_metatype boxptr_NFTypeCheck_checkLogicalBinaryOperation(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _operator, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkLogicalBinaryOperation(threadData, _exp1, _type1, tmp1, _operator, _exp2, _type2, tmp2, tmp3, _info, out_resultType);
  /* skip box _outExp; NFExpression */
  /* skip box _resultType; NFType */
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_checkOverloadedUnaryOperator(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inType1, modelica_integer _var, modelica_metatype _inOp, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_string _opstr = NULL;
  modelica_metatype _operfn = NULL;
  modelica_metatype _node1 = NULL;
  modelica_metatype _fn_node = NULL;
  modelica_metatype _fn_ref = NULL;
  modelica_metatype _candidates = NULL;
  modelica_boolean _matched;
  modelica_metatype _args = NULL;
  modelica_metatype _matchKind = NULL;
  modelica_metatype _matchedFunc = NULL;
  modelica_metatype _matchedFunctions = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _exactMatches = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _opstr has no default value.
  // _operfn has no default value.
  // _node1 has no default value.
  // _fn_node has no default value.
  // _fn_ref has no default value.
  // _candidates has no default value.
  // _matched has no default value.
  // _args has no default value.
  // _matchKind has no default value.
  // _matchedFunc has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _matchedFunctions = tmpMeta1;
  // _exactMatches has no default value.
  _opstr = omc_NFOperator_symbol(threadData, _inOp, _OMC_LIT186);

  _candidates = omc_NFOperatorOverloading_lookupOperatorFunctionsInType(threadData, _opstr, _inType1);

  tmpMeta3 = mmc_mk_box6(3, &NFFunction_TypedArg_TYPED__ARG__desc, mmc_mk_none(), _inExp1, _inType1, mmc_mk_integer((modelica_integer)_var), mmc_mk_integer(1));
  tmpMeta2 = mmc_mk_cons(tmpMeta3, MMC_REFSTRUCTLIT(mmc_nil));
  _args = tmpMeta2;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _matchedFunctions = omc_NFFunction_Function_matchFunctionsSilent(threadData, _candidates, _args, tmpMeta4, _context, _info, 0 /* false */);

  _exactMatches = omc_NFFunction_MatchedFunction_getExactMatches(threadData, _matchedFunctions);

  if(listEmpty(_exactMatches))
  {
    tmpMeta5 = mmc_mk_box3(20, &NFExpression_UNARY__desc, _inOp, _inExp1);
    tmpMeta6 = mmc_mk_cons(_inType1, MMC_REFSTRUCTLIT(mmc_nil));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta5, tmpMeta6, _info, 1 /* true */);

    MMC_THROW_INTERNAL();
  }

  if((listLength(_exactMatches) == ((modelica_integer) 1)))
  {
    /* Pattern-matching assignment */
    tmpMeta7 = _exactMatches;
    if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
    tmpMeta8 = MMC_CAR(tmpMeta7);
    tmpMeta9 = MMC_CDR(tmpMeta7);
    _matchedFunc = tmpMeta8;

    _outType = omc_NFFunction_Function_returnType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 2))));

    {
      modelica_metatype __omcQ_24tmpVar7;
      modelica_metatype* tmp11;
      modelica_metatype tmpMeta12;
      modelica_metatype __omcQ_24tmpVar6;
      modelica_integer tmp13;
      modelica_metatype _a_loopVar = 0;
      modelica_metatype _a;
      _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 3)));
      tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar7 = tmpMeta12; /* defaultValue */
      tmp11 = &__omcQ_24tmpVar7;
      while(1) {
        tmp13 = 1;
        if (!listEmpty(_a_loopVar)) {
          _a = MMC_CAR(_a_loopVar);
          _a_loopVar = MMC_CDR(_a_loopVar);
          tmp13--;
        }
        if (tmp13 == 0) {
          __omcQ_24tmpVar6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 3)));
          *tmp11 = mmc_mk_cons(__omcQ_24tmpVar6,0);
          tmp11 = &MMC_CDR(*tmp11);
        } else if (tmp13 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp11 = mmc_mk_nil();
      tmpMeta10 = __omcQ_24tmpVar7;
    }
    tmpMeta14 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 2))), tmpMeta10, (modelica_integer)_var, 1, _outType));
    _outExp = tmpMeta14;
  }
  else
  {
    tmpMeta16 = mmc_mk_box3(20, &NFExpression_UNARY__desc, _inOp, _inExp1);
    {
      modelica_metatype __omcQ_24tmpVar11;
      modelica_metatype* tmp18;
      modelica_metatype tmpMeta19;
      modelica_metatype __omcQ_24tmpVar10;
      modelica_integer tmp20;
      modelica_metatype _mfn_loopVar = 0;
      modelica_metatype _mfn;
      _mfn_loopVar = _matchedFunctions;
      tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar11 = tmpMeta19; /* defaultValue */
      tmp18 = &__omcQ_24tmpVar11;
      while(1) {
        tmp20 = 1;
        if (!listEmpty(_mfn_loopVar)) {
          _mfn = MMC_CAR(_mfn_loopVar);
          _mfn_loopVar = MMC_CDR(_mfn_loopVar);
          tmp20--;
        }
        if (tmp20 == 0) {
          __omcQ_24tmpVar10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mfn), 2)));
          *tmp18 = mmc_mk_cons(__omcQ_24tmpVar10,0);
          tmp18 = &MMC_CDR(*tmp18);
        } else if (tmp20 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp18 = mmc_mk_nil();
      tmpMeta17 = __omcQ_24tmpVar11;
    }
    tmpMeta15 = mmc_mk_cons(omc_NFExpression_toString(threadData, tmpMeta16), mmc_mk_cons(omc_NFFunction_Function_candidateFuncListString(threadData, tmpMeta17), MMC_REFSTRUCTLIT(mmc_nil)));
    omc_Error_addSourceMessage(threadData, _OMC_LIT189, tmpMeta15, _info);

    MMC_THROW_INTERNAL();
  }

  _outExp = omc_NFInline_inlineCallExp(threadData, _outExp, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
modelica_metatype boxptr_NFTypeCheck_checkOverloadedUnaryOperator(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inType1, modelica_metatype _var, modelica_metatype _inOp, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var);
  tmp2 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedUnaryOperator(threadData, _inExp1, _inType1, tmp1, _inOp, tmp2, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_checkUnaryOperation(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _operator, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_unaryType)
{
  modelica_metatype _unaryExp = NULL;
  modelica_metatype _unaryType = NULL;
  modelica_boolean _valid;
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _unaryExp has no default value.
  // _unaryType has no default value.
  _valid = 1 /* true */;
  // _op has no default value.
  if(omc_NFType_isComplex(threadData, omc_NFType_arrayElementType(threadData, _type1)))
  {
    _unaryExp = omc_NFTypeCheck_checkOverloadedUnaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _operator, _context, _info ,&_unaryType);

    goto _return;
  }

  _unaryType = _type1;

  _op = omc_NFOperator_setType(threadData, _unaryType, _operator);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          tmp6 = mmc_unbox_integer(tmp4_1);
          if (1 != tmp6) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _exp1;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box3(20, &NFExpression_UNARY__desc, _op, _exp1);
          tmpMeta1 = tmpMeta7;
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
  _unaryExp = tmpMeta1;

  if((!omc_NFType_isNumeric(threadData, _type1)))
  {
    tmpMeta8 = mmc_mk_cons(_type1, MMC_REFSTRUCTLIT(mmc_nil));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _unaryExp, tmpMeta8, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_unaryType) { *out_unaryType = _unaryType; }
  return _unaryExp;
}
modelica_metatype boxptr_NFTypeCheck_checkUnaryOperation(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _operator, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_unaryType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _unaryExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_context);
  _unaryExp = omc_NFTypeCheck_checkUnaryOperation(threadData, _exp1, _type1, tmp1, _operator, tmp2, _info, out_unaryType);
  /* skip box _unaryExp; NFExpression */
  /* skip box _unaryType; NFType */
  return _unaryExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _elemOp, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_metatype _binaryExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _ty1 = NULL;
  modelica_metatype _ty2 = NULL;
  modelica_integer _mk;
  modelica_boolean _valid;
  modelica_boolean _is_arr1;
  modelica_boolean _is_arr2;
  modelica_metatype _op = NULL;
  modelica_boolean tmp1 = 0;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binaryExp has no default value.
  // _resultType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _ty1 has no default value.
  // _ty2 has no default value.
  // _mk has no default value.
  // _valid has no default value.
  // _is_arr1 has no default value.
  // _is_arr2 has no default value.
  // _op has no default value.
  _is_arr1 = omc_NFType_isArray(threadData, _type1);

  _is_arr2 = omc_NFType_isArray(threadData, _type2);

  if((_is_arr1 && _is_arr2))
  {
    _e1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _type1, _exp2, _type2, ((modelica_integer) 1) ,&_e2 ,&_resultType ,&_mk);
  }
  else
  {
    _ty1 = omc_NFType_arrayElementType(threadData, _type1);

    _ty2 = omc_NFType_arrayElementType(threadData, _type2);

    _e1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _ty1, _exp2, _ty2, ((modelica_integer) 1) ,&_e2 ,&_resultType ,&_mk);
  }

  _valid = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk);

  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;
    tmp4_1 = omc_NFType_arrayElementType(threadData, _resultType);
    tmp4_2 = (modelica_integer)_elemOp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _valid;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _valid;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
          if (1 != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _valid;
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
  _valid = tmp1;

  
  
  { /* match expression */
    modelica_boolean tmp9_1;modelica_boolean tmp9_2;
    tmp9_1 = _is_arr1;
    tmp9_2 = _is_arr2;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 3; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (1 /* true */ != tmp9_1) goto tmp8_end;
          if (0 /* false */ != tmp9_2) goto tmp8_end;
          /* Pattern matching succeeded */
          _resultType = omc_NFType_copyDims(threadData, _type1, _resultType);

          _op = omc_NFOperator_makeArrayScalar(threadData, _resultType, (modelica_integer)_elemOp);
          tmpMeta[0+0] = _resultType;
          tmpMeta[0+1] = _op;
          goto tmp8_done;
        }
        case 1: {
          if (0 /* false */ != tmp9_1) goto tmp8_end;
          if (1 /* true */ != tmp9_2) goto tmp8_end;
          /* Pattern matching succeeded */
          _resultType = omc_NFType_copyDims(threadData, _type2, _resultType);

          _op = omc_NFOperator_makeScalarArray(threadData, _resultType, (modelica_integer)_elemOp);
          tmpMeta[0+0] = _resultType;
          tmpMeta[0+1] = _op;
          goto tmp8_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _resultType, mmc_mk_integer((modelica_integer)_elemOp));
          tmpMeta[0+0] = _resultType;
          tmpMeta[0+1] = tmpMeta11;
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
  _resultType = tmpMeta[0+0];
  _op = tmpMeta[0+1];

  tmpMeta12 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, _op, _e2);
  _binaryExp = tmpMeta12;

  if((!_valid))
  {
    tmpMeta13 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _binaryExp, tmpMeta13, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _binaryExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkBinaryOperationEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _elemOp, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_integer tmp1;
  modelica_metatype _binaryExp = NULL;
  tmp1 = mmc_unbox_integer(_elemOp);
  _binaryExp = omc_NFTypeCheck_checkBinaryOperationEW(threadData, _exp1, _type1, _exp2, _type2, tmp1, _info, out_resultType);
  /* skip box _binaryExp; NFExpression */
  /* skip box _resultType; NFType */
  return _binaryExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationPowEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_metatype _binaryExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _ty1 = NULL;
  modelica_metatype _ty2 = NULL;
  modelica_integer _mk;
  modelica_boolean _valid;
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binaryExp has no default value.
  // _resultType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _ty1 has no default value.
  // _ty2 has no default value.
  // _mk has no default value.
  // _valid has no default value.
  // _op has no default value.
  _e1 = omc_NFTypeCheck_matchTypes(threadData, _type1, omc_NFType_setArrayElementType(threadData, _type1, _OMC_LIT45), _exp1, ((modelica_integer) 1) ,&_ty1 ,&_mk);

  _valid = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk);

  _e2 = omc_NFTypeCheck_matchTypes(threadData, _type2, omc_NFType_setArrayElementType(threadData, _type2, _OMC_LIT45), _exp2, ((modelica_integer) 1) ,&_ty2 ,&_mk);

  _valid = (_valid && omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk));

  
  
  { /* match expression */
    modelica_boolean tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = omc_NFType_isArray(threadData, _ty1);
    tmp4_2 = omc_NFType_isArray(threadData, _ty2);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _ty1;
          tmpMeta[0+1] = omc_NFOperator_makePow(threadData, _ty1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty1, mmc_mk_integer(24));
          tmpMeta[0+0] = _ty1;
          tmpMeta[0+1] = tmpMeta6;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty2, mmc_mk_integer(23));
          tmpMeta[0+0] = _ty2;
          tmpMeta[0+1] = tmpMeta7;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_NFTypeCheck_matchArrayTypes(threadData, _ty1, _ty2, _e1, ((modelica_integer) 1) ,NULL ,&_mk);

          _valid = (_valid && omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk));
          tmpMeta[0+0] = _ty1;
          tmpMeta[0+1] = omc_NFOperator_makePow(threadData, _ty1);
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
  _resultType = tmpMeta[0+0];
  _op = tmpMeta[0+1];

  tmpMeta8 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, _op, _e2);
  _binaryExp = tmpMeta8;

  if((!_valid))
  {
    tmpMeta9 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _binaryExp, tmpMeta9, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _binaryExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationPow(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_metatype _binaryExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer _mk;
  modelica_boolean _valid;
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binaryExp has no default value.
  // _resultType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _mk has no default value.
  // _valid has no default value.
  // _op has no default value.
  _e1 = omc_NFTypeCheck_matchTypes(threadData, _type1, omc_NFType_setArrayElementType(threadData, _type1, _OMC_LIT45), _exp1, ((modelica_integer) 1) ,&_resultType ,&_mk);

  _valid = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk);

  if(omc_NFType_isArray(threadData, _resultType))
  {
    _valid = (_valid && omc_NFType_isSquareMatrix(threadData, _resultType));

    _valid = (_valid && omc_NFType_isInteger(threadData, _type2));

    _valid = (_valid && (!omc_NFExpression_isNegative(threadData, _exp2)));

    tmpMeta1 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _resultType, mmc_mk_integer(25));
    _op = tmpMeta1;

    _e2 = _exp2;
  }
  else
  {
    _e2 = omc_NFTypeCheck_matchTypes(threadData, _type2, _OMC_LIT45, _exp2, ((modelica_integer) 1) ,NULL ,&_mk);

    _valid = (_valid && omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk));

    tmpMeta2 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _resultType, mmc_mk_integer(5));
    _op = tmpMeta2;
  }

  tmpMeta3 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, _op, _e2);
  _binaryExp = tmpMeta3;

  if((!_valid))
  {
    tmpMeta4 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _binaryExp, tmpMeta4, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _binaryExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationDiv(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_boolean _isElementWise, modelica_metatype *out_resultType)
{
  modelica_metatype _binaryExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _ty1 = NULL;
  modelica_metatype _ty2 = NULL;
  modelica_integer _mk;
  modelica_boolean _valid;
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binaryExp has no default value.
  // _resultType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _ty1 has no default value.
  // _ty2 has no default value.
  // _mk has no default value.
  // _valid has no default value.
  // _op has no default value.
  _e1 = omc_NFTypeCheck_matchTypes(threadData, _type1, omc_NFType_setArrayElementType(threadData, _type1, _OMC_LIT45), _exp1, ((modelica_integer) 1) ,&_ty1 ,&_mk);

  _valid = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk);

  _e2 = omc_NFTypeCheck_matchTypes(threadData, _type2, omc_NFType_setArrayElementType(threadData, _type2, _OMC_LIT45), _exp2, ((modelica_integer) 1) ,&_ty2 ,&_mk);

  _valid = (_valid && omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk));

  
  
  { /* match expression */
    modelica_boolean tmp4_1;modelica_boolean tmp4_2;modelica_boolean tmp4_3;
    tmp4_1 = omc_NFType_isArray(threadData, _ty1);
    tmp4_2 = omc_NFType_isArray(threadData, _ty2);
    tmp4_3 = _isElementWise;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _ty1;
          tmpMeta[0+1] = omc_NFOperator_makeDiv(threadData, _ty1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty1, mmc_mk_integer(22));
          tmpMeta[0+0] = _ty1;
          tmpMeta[0+1] = tmpMeta6;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (1 /* true */ != tmp4_3) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty2, mmc_mk_integer(21));
          tmpMeta[0+0] = _ty2;
          tmpMeta[0+1] = tmpMeta7;
          goto tmp3_done;
        }
        case 3: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          if (1 /* true */ != tmp4_3) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_NFTypeCheck_matchArrayTypes(threadData, _ty1, _ty2, _e1, ((modelica_integer) 1) ,NULL ,&_mk);

          _valid = (_valid && omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk));
          tmpMeta[0+0] = _ty1;
          tmpMeta[0+1] = omc_NFOperator_makeDiv(threadData, _ty1);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _valid = 0 /* false */;
          tmpMeta[0+0] = _ty1;
          tmpMeta[0+1] = omc_NFOperator_makeDiv(threadData, _ty1);
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
  _resultType = tmpMeta[0+0];
  _op = tmpMeta[0+1];

  tmpMeta8 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, _op, _e2);
  _binaryExp = tmpMeta8;

  if((!_valid))
  {
    tmpMeta9 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _binaryExp, tmpMeta9, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _binaryExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkBinaryOperationDiv(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype _isElementWise, modelica_metatype *out_resultType)
{
  modelica_integer tmp1;
  modelica_metatype _binaryExp = NULL;
  tmp1 = mmc_unbox_integer(_isElementWise);
  _binaryExp = omc_NFTypeCheck_checkBinaryOperationDiv(threadData, _exp1, _type1, _exp2, _type2, _info, tmp1, out_resultType);
  /* skip box _binaryExp; NFExpression */
  /* skip box _resultType; NFType */
  return _binaryExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationMul(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_metatype _binaryExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _ty1 = NULL;
  modelica_metatype _ty2 = NULL;
  modelica_metatype _dims1 = NULL;
  modelica_metatype _dims2 = NULL;
  modelica_metatype _dim11 = NULL;
  modelica_metatype _dim12 = NULL;
  modelica_metatype _dim21 = NULL;
  modelica_metatype _dim22 = NULL;
  modelica_integer _mk;
  modelica_integer _op;
  modelica_boolean _valid;
  modelica_boolean tmp1 = 0;
  modelica_integer tmp5_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binaryExp has no default value.
  // _resultType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _ty1 has no default value.
  // _ty2 has no default value.
  // _dims1 has no default value.
  // _dims2 has no default value.
  // _dim11 has no default value.
  // _dim12 has no default value.
  // _dim21 has no default value.
  // _dim22 has no default value.
  // _mk has no default value.
  // _op has no default value.
  // _valid has no default value.
  _ty1 = omc_NFType_arrayElementType(threadData, _type1);

  _ty2 = omc_NFType_arrayElementType(threadData, _type2);

  _e1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _ty1, _exp2, _ty2, ((modelica_integer) 1) ,&_e2 ,&_resultType ,&_mk);

  _valid = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _resultType;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _valid;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _valid;
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
  _valid = tmp1;

  _dims1 = omc_NFType_arrayDims(threadData, _type1);

  _dims2 = omc_NFType_arrayDims(threadData, _type2);

  
  
  { /* match expression */
    modelica_metatype tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = _dims1;
    tmp8_2 = _dims2;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 8; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (!listEmpty(tmp8_1)) goto tmp7_end;
          if (!listEmpty(tmp8_2)) goto tmp7_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _resultType;
          tmp5_c1 = 3;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          if (!listEmpty(tmp8_1)) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box3(10, &NFType_ARRAY__desc, _resultType, _dims2);
          tmpMeta[0+0] = tmpMeta10;
          tmp5_c1 = 15;
          goto tmp7_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          if (!listEmpty(tmp8_2)) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box3(10, &NFType_ARRAY__desc, _resultType, _dims1);
          tmpMeta[0+0] = tmpMeta11;
          tmp5_c1 = 16;
          goto tmp7_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta12 = MMC_CAR(tmp8_1);
          tmpMeta13 = MMC_CDR(tmp8_1);
          if (!listEmpty(tmpMeta13)) goto tmp7_end;
          if (listEmpty(tmp8_2)) goto tmp7_end;
          tmpMeta14 = MMC_CAR(tmp8_2);
          tmpMeta15 = MMC_CDR(tmp8_2);
          if (!listEmpty(tmpMeta15)) goto tmp7_end;
          _dim11 = tmpMeta12;
          _dim21 = tmpMeta14;
          /* Pattern matching succeeded */
          _valid = omc_NFDimension_isEqual(threadData, _dim11, _dim21);
          tmpMeta[0+0] = _resultType;
          tmp5_c1 = 19;
          goto tmp7_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta16 = MMC_CAR(tmp8_1);
          tmpMeta17 = MMC_CDR(tmp8_1);
          if (!listEmpty(tmpMeta17)) goto tmp7_end;
          if (listEmpty(tmp8_2)) goto tmp7_end;
          tmpMeta18 = MMC_CAR(tmp8_2);
          tmpMeta19 = MMC_CDR(tmp8_2);
          if (listEmpty(tmpMeta19)) goto tmp7_end;
          tmpMeta20 = MMC_CAR(tmpMeta19);
          tmpMeta21 = MMC_CDR(tmpMeta19);
          if (!listEmpty(tmpMeta21)) goto tmp7_end;
          _dim11 = tmpMeta16;
          _dim21 = tmpMeta18;
          _dim22 = tmpMeta20;
          /* Pattern matching succeeded */
          _valid = omc_NFDimension_isEqual(threadData, _dim11, _dim21);
          tmpMeta22 = mmc_mk_cons(_dim22, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta23 = mmc_mk_box3(10, &NFType_ARRAY__desc, _resultType, tmpMeta22);
          tmpMeta[0+0] = tmpMeta23;
          tmp5_c1 = 17;
          goto tmp7_done;
        }
        case 5: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (listEmpty(tmp8_2)) goto tmp7_end;
          tmpMeta24 = MMC_CAR(tmp8_2);
          tmpMeta25 = MMC_CDR(tmp8_2);
          if (!listEmpty(tmpMeta25)) goto tmp7_end;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta26 = MMC_CAR(tmp8_1);
          tmpMeta27 = MMC_CDR(tmp8_1);
          if (listEmpty(tmpMeta27)) goto tmp7_end;
          tmpMeta28 = MMC_CAR(tmpMeta27);
          tmpMeta29 = MMC_CDR(tmpMeta27);
          if (!listEmpty(tmpMeta29)) goto tmp7_end;
          _dim21 = tmpMeta24;
          _dim11 = tmpMeta26;
          _dim12 = tmpMeta28;
          /* Pattern matching succeeded */
          _valid = omc_NFDimension_isEqual(threadData, _dim12, _dim21);
          tmpMeta30 = mmc_mk_cons(_dim11, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta31 = mmc_mk_box3(10, &NFType_ARRAY__desc, _resultType, tmpMeta30);
          tmpMeta[0+0] = tmpMeta31;
          tmp5_c1 = 18;
          goto tmp7_done;
        }
        case 6: {
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
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta32 = MMC_CAR(tmp8_1);
          tmpMeta33 = MMC_CDR(tmp8_1);
          if (listEmpty(tmpMeta33)) goto tmp7_end;
          tmpMeta34 = MMC_CAR(tmpMeta33);
          tmpMeta35 = MMC_CDR(tmpMeta33);
          if (!listEmpty(tmpMeta35)) goto tmp7_end;
          if (listEmpty(tmp8_2)) goto tmp7_end;
          tmpMeta36 = MMC_CAR(tmp8_2);
          tmpMeta37 = MMC_CDR(tmp8_2);
          if (listEmpty(tmpMeta37)) goto tmp7_end;
          tmpMeta38 = MMC_CAR(tmpMeta37);
          tmpMeta39 = MMC_CDR(tmpMeta37);
          if (!listEmpty(tmpMeta39)) goto tmp7_end;
          _dim11 = tmpMeta32;
          _dim12 = tmpMeta34;
          _dim21 = tmpMeta36;
          _dim22 = tmpMeta38;
          /* Pattern matching succeeded */
          _valid = omc_NFDimension_isEqual(threadData, _dim12, _dim21);
          tmpMeta40 = mmc_mk_cons(_dim11, mmc_mk_cons(_dim22, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta41 = mmc_mk_box3(10, &NFType_ARRAY__desc, _resultType, tmpMeta40);
          tmpMeta[0+0] = tmpMeta41;
          tmp5_c1 = 20;
          goto tmp7_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          _valid = 0 /* false */;
          tmpMeta[0+0] = _resultType;
          tmp5_c1 = 3;
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
  _resultType = tmpMeta[0+0];
  _op = tmp5_c1;

  tmpMeta42 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _resultType, mmc_mk_integer((modelica_integer)_op));
  tmpMeta43 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, tmpMeta42, _e2);
  _binaryExp = tmpMeta43;

  if((!_valid))
  {
    tmpMeta44 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _binaryExp, tmpMeta44, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _binaryExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationSub(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_metatype _binaryExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer _mk;
  modelica_boolean _valid;
  modelica_boolean tmp1 = 0;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binaryExp has no default value.
  // _resultType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _mk has no default value.
  // _valid has no default value.
  _e1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _type1, _exp2, _type2, ((modelica_integer) 1) ,&_e2 ,&_resultType ,&_mk);

  _valid = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NFType_arrayElementType(threadData, _resultType);
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _valid;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _valid;
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
  _valid = tmp1;

  tmpMeta5 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, omc_NFOperator_makeSub(threadData, _resultType), _e2);
  _binaryExp = tmpMeta5;

  if((!_valid))
  {
    tmpMeta6 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _binaryExp, tmpMeta6, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _binaryExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkBinaryOperationAdd(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _info, modelica_metatype *out_resultType)
{
  modelica_metatype _binaryExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer _mk;
  modelica_boolean _valid;
  modelica_boolean tmp1 = 0;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binaryExp has no default value.
  // _resultType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _mk has no default value.
  // _valid has no default value.
  _e1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _type1, _exp2, _type2, ((modelica_integer) 1) ,&_e2 ,&_resultType ,&_mk);

  _valid = omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NFType_arrayElementType(threadData, _resultType);
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _valid;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _valid;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _valid;
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
  _valid = tmp1;

  tmpMeta5 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, omc_NFOperator_makeAdd(threadData, _resultType), _e2);
  _binaryExp = tmpMeta5;

  if((!_valid))
  {
    tmpMeta6 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _binaryExp, tmpMeta6, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _binaryExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_implicitConstructAndMatch2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _paramType1, modelica_metatype _paramInfo1, modelica_metatype _paramType2, modelica_metatype _paramInfo2, modelica_metatype _scope, modelica_metatype _fn, modelica_boolean _reverseArgs, modelica_metatype __omcQ_24in_5FmatchedFns, modelica_boolean *out_matched)
{
  modelica_metatype _matchedFns = NULL;
  modelica_boolean _matched;
  modelica_metatype _fn_ref = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer _mk;
  modelica_integer _var;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_boolean tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _matchedFns = __omcQ_24in_5FmatchedFns;
  // _matched has no default value.
  // _fn_ref has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _mk has no default value.
  // _var has no default value.
  // _ty has no default value.
  _e1 = omc_NFTypeCheck_matchTypes(threadData, _paramType1, _type1, _exp1, ((modelica_integer) 0) ,NULL ,&_mk);

  if(((modelica_integer)_mk == 1))
  {
    _fn_ref = omc_NFFunction_Function_instFunction(threadData, _OMC_LIT191, _scope, ((modelica_integer) 0), _paramInfo2, NULL, NULL);

    tmpMeta1 = mmc_mk_cons(_exp2, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta3 = mmc_mk_box5(3, &NFCall_UNTYPED__CALL__desc, _fn_ref, tmpMeta1, tmpMeta2, _scope);
    tmpMeta4 = mmc_mk_box2(16, &NFExpression_CALL__desc, tmpMeta3);
    _e2 = tmpMeta4;

    _e2 = omc_NFCall_typeCall(threadData, _e2, ((modelica_integer) 0), _paramInfo1, 0 /* false */ ,&_ty ,&_var, NULL);

    omc_NFTypeCheck_matchTypes(threadData, _paramType2, _ty, _e2, ((modelica_integer) 0) ,NULL ,&_mk);

    if(((modelica_integer)_mk == 1))
    {
      tmp8 = (modelica_boolean)_reverseArgs;
      if(tmp8)
      {
        tmpMeta6 = mmc_mk_cons(_e2, mmc_mk_cons(_e1, MMC_REFSTRUCTLIT(mmc_nil)));
        tmpMeta9 = tmpMeta6;
      }
      else
      {
        tmpMeta7 = mmc_mk_cons(_e1, mmc_mk_cons(_e2, MMC_REFSTRUCTLIT(mmc_nil)));
        tmpMeta9 = tmpMeta7;
      }
      tmpMeta10 = mmc_mk_box3(0, _fn, tmpMeta9, mmc_mk_integer((modelica_integer)_var));
      tmpMeta5 = mmc_mk_cons(tmpMeta10, _matchedFns);
      _matchedFns = tmpMeta5;

      _matched = 1 /* true */;
    }
    else
    {
      _matched = 0 /* false */;
    }
  }
  else
  {
    _matched = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  if (out_matched) { *out_matched = _matched; }
  return _matchedFns;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_implicitConstructAndMatch2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _exp2, modelica_metatype _paramType1, modelica_metatype _paramInfo1, modelica_metatype _paramType2, modelica_metatype _paramInfo2, modelica_metatype _scope, modelica_metatype _fn, modelica_metatype _reverseArgs, modelica_metatype __omcQ_24in_5FmatchedFns, modelica_metatype *out_matched)
{
  modelica_integer tmp1;
  modelica_boolean _matched;
  modelica_metatype _matchedFns = NULL;
  tmp1 = mmc_unbox_integer(_reverseArgs);
  _matchedFns = omc_NFTypeCheck_implicitConstructAndMatch2(threadData, _exp1, _type1, _exp2, _paramType1, _paramInfo1, _paramType2, _paramInfo2, _scope, _fn, tmp1, __omcQ_24in_5FmatchedFns, &_matched);
  /* skip box _matchedFns; list<tuple<NFFunction.Function, list<NFExpression>, #enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS)>> */
  if (out_matched) { *out_matched = mmc_mk_icon(_matched); }
  return _matchedFns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_implicitConstructAndMatch(threadData_t *threadData, modelica_metatype _candidates, modelica_metatype _inExp1, modelica_metatype _inType1, modelica_metatype _op, modelica_metatype _inExp2, modelica_metatype _inType2, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype _inputs = NULL;
  modelica_metatype _in1 = NULL;
  modelica_metatype _in2 = NULL;
  modelica_metatype _scope = NULL;
  modelica_integer _mk1;
  modelica_integer _mk2;
  modelica_metatype _fn_ref = NULL;
  modelica_metatype _operfn = NULL;
  modelica_metatype _matchedfuncs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _exp1 = NULL;
  modelica_metatype _exp2 = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _arg1_ty = NULL;
  modelica_metatype _arg2_ty = NULL;
  modelica_integer _var;
  modelica_boolean _matched;
  modelica_metatype _arg1_info = NULL;
  modelica_metatype _arg2_info = NULL;
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
  modelica_integer tmp19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _inputs has no default value.
  // _in1 has no default value.
  // _in2 has no default value.
  // _scope has no default value.
  // _mk1 has no default value.
  // _mk2 has no default value.
  // _fn_ref has no default value.
  // _operfn has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _matchedfuncs = tmpMeta1;
  // _exp1 has no default value.
  // _exp2 has no default value.
  // _ty has no default value.
  // _arg1_ty has no default value.
  // _arg2_ty has no default value.
  // _var has no default value.
  // _matched has no default value.
  // _arg1_info has no default value.
  // _arg2_info has no default value.
  _exp1 = _inExp1;

  _exp2 = _inExp2;

  {
    modelica_metatype _fn;
    for (tmpMeta2 = _candidates; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _fn = MMC_CAR(tmpMeta2);
      if((listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 4)))) != ((modelica_integer) 2)))
      {
        continue;
      }

      /* Pattern-matching assignment */
      tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 4)));
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
      tmpMeta4 = MMC_CAR(tmpMeta3);
      tmpMeta5 = MMC_CDR(tmpMeta3);
      if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
      tmpMeta6 = MMC_CAR(tmpMeta5);
      tmpMeta7 = MMC_CDR(tmpMeta5);
      _in1 = tmpMeta4;
      _in2 = tmpMeta6;

      _arg1_ty = omc_NFInstNode_InstNode_getType(threadData, _in1);

      _arg2_ty = omc_NFInstNode_InstNode_getType(threadData, _in2);

      _arg1_info = omc_NFInstNode_InstNode_info(threadData, _in1);

      _arg2_info = omc_NFInstNode_InstNode_info(threadData, _in2);

      _matchedfuncs = omc_NFTypeCheck_implicitConstructAndMatch2(threadData, _inExp1, _inType1, _inExp2, _arg1_ty, _arg1_info, _arg2_ty, _arg2_info, omc_NFInstNode_InstNode_classScope(threadData, _in2), _fn, 0 /* false */, _matchedfuncs ,&_matched);

      if(_matched)
      {
        continue;
      }

      _matchedfuncs = omc_NFTypeCheck_implicitConstructAndMatch2(threadData, _inExp2, _inType2, _inExp1, _arg2_ty, _arg2_info, _arg1_ty, _arg1_info, omc_NFInstNode_InstNode_classScope(threadData, _in1), _fn, 1 /* true */, _matchedfuncs ,&_matched);
    }
  }

  if((listLength(_matchedfuncs) == ((modelica_integer) 1)))
  {
    /* Pattern-matching assignment */
    tmpMeta9 = _matchedfuncs;
    if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
    tmpMeta10 = MMC_CAR(tmpMeta9);
    tmpMeta11 = MMC_CDR(tmpMeta9);
    tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
    tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
    if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
    tmpMeta14 = MMC_CAR(tmpMeta13);
    tmpMeta15 = MMC_CDR(tmpMeta13);
    if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
    tmpMeta16 = MMC_CAR(tmpMeta15);
    tmpMeta17 = MMC_CDR(tmpMeta15);
    if (!listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
    tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
    tmp19 = mmc_unbox_integer(tmpMeta18);
    _operfn = tmpMeta12;
    _exp1 = tmpMeta14;
    _exp2 = tmpMeta16;
    _var = tmp19  /* pattern as ty=enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS) */;

    _outType = omc_NFFunction_Function_returnType(threadData, _operfn);

    tmpMeta20 = mmc_mk_cons(_exp1, mmc_mk_cons(_exp2, MMC_REFSTRUCTLIT(mmc_nil)));
    tmpMeta21 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, _operfn, tmpMeta20, (modelica_integer)_var, 1, _outType));
    _outExp = tmpMeta21;
  }
  else
  {
    tmpMeta23 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
    {
      modelica_metatype __omcQ_24tmpVar15;
      modelica_metatype* tmp25;
      modelica_metatype tmpMeta26;
      modelica_metatype __omcQ_24tmpVar14;
      modelica_integer tmp27;
      modelica_metatype _fn_loopVar = 0;
      modelica_metatype _fn;
      _fn_loopVar = _matchedfuncs;
      tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar15 = tmpMeta26; /* defaultValue */
      tmp25 = &__omcQ_24tmpVar15;
      while(1) {
        tmp27 = 1;
        if (!listEmpty(_fn_loopVar)) {
          _fn = MMC_CAR(_fn_loopVar);
          _fn_loopVar = MMC_CDR(_fn_loopVar);
          tmp27--;
        }
        if (tmp27 == 0) {
          __omcQ_24tmpVar14 = omc_Util_tuple31(threadData, _fn);
          *tmp25 = mmc_mk_cons(__omcQ_24tmpVar14,0);
          tmp25 = &MMC_CDR(*tmp25);
        } else if (tmp27 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp25 = mmc_mk_nil();
      tmpMeta24 = __omcQ_24tmpVar15;
    }
    tmpMeta22 = mmc_mk_cons(omc_NFExpression_toString(threadData, tmpMeta23), mmc_mk_cons(omc_NFFunction_Function_candidateFuncListString(threadData, tmpMeta24), MMC_REFSTRUCTLIT(mmc_nil)));
    omc_Error_addSourceMessage(threadData, _OMC_LIT189, tmpMeta22, _info);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayEW2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _expl = NULL;
  modelica_metatype _expl1 = NULL;
  modelica_metatype _expl2 = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _ty1 = NULL;
  modelica_metatype _ty2 = NULL;
  modelica_boolean _is_array1;
  modelica_boolean _is_array2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_integer tmp22;
  modelica_integer tmp23;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _expl has no default value.
  // _expl1 has no default value.
  // _expl2 has no default value.
  // _ty has no default value.
  // _ty1 has no default value.
  // _ty2 has no default value.
  // _is_array1 has no default value.
  // _is_array2 has no default value.
  _is_array1 = omc_NFType_isArray(threadData, _type1);

  _is_array2 = omc_NFType_isArray(threadData, _type2);

  if((_is_array1 || _is_array2))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _expl = tmpMeta1;

    if((omc_NFExpression_isEmptyArray(threadData, _exp1) || omc_NFExpression_isEmptyArray(threadData, _exp2)))
    {
      _ty1 = omc_NFType_arrayElementType(threadData, _type1);

      _ty2 = omc_NFType_arrayElementType(threadData, _type2);

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
              tmpMeta6 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, _ty1);
              tmpMeta7 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, _ty2);
              omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData, tmpMeta6, _ty1, (modelica_integer)_var1, _op, tmpMeta7, _ty2, (modelica_integer)_var2, _candidates, _context, _info, 1 /* true */ ,&_ty);
              goto tmp3_done;
            }
            case 1: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              /* Pattern matching succeeded */
              tmpMeta8 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
              tmpMeta9 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
              omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta8, tmpMeta9, _info, 1 /* true */);
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
    }
    else
    {
      if((_is_array1 && _is_array2))
      {
        _ty1 = omc_NFType_unliftArray(threadData, _type1);

        _ty2 = omc_NFType_unliftArray(threadData, _type2);

        _expl1 = omc_NFExpression_arrayElements(threadData, _exp1);

        _expl2 = omc_NFExpression_arrayElements(threadData, _exp2);

        if((arrayLength(_expl1) > arrayLength(_expl2)))
        {
          MMC_THROW_INTERNAL();
        }

        tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = arrayLength(_expl1);
        if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
          {
            _e1 = arrayGetNoBoundsChecking(_expl1, _i);

            _e2 = arrayGetNoBoundsChecking(_expl2, _i);

            _e1 = omc_NFTypeCheck_checkOverloadedBinaryArrayEW2(threadData, _e1, _ty1, (modelica_integer)_var1, _op, _e2, _ty2, (modelica_integer)_var2, _candidates, _context, _info ,&_ty);

            tmpMeta10 = mmc_mk_cons(_e1, _expl);
            _expl = tmpMeta10;
          }
        }
      }
      else
      {
        if(_is_array1)
        {
          _ty1 = omc_NFType_unliftArray(threadData, _type1);

          _expl1 = omc_NFExpression_arrayElements(threadData, _exp1);

          {
            modelica_metatype _e;
            for (tmpMeta14 = _expl1, tmp18 = arrayLength(tmpMeta14), tmp17 = 1; tmp17 <= tmp18; tmp17++)
            {
              _e = arrayGet(tmpMeta14,tmp17);
              _e = omc_NFTypeCheck_checkOverloadedBinaryArrayEW2(threadData, _e, _ty1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info ,&_ty);

              tmpMeta15 = mmc_mk_cons(_e, _expl);
              _expl = tmpMeta15;
            }
          }
        }
        else
        {
          if(_is_array2)
          {
            _ty2 = omc_NFType_unliftArray(threadData, _type2);

            _expl2 = omc_NFExpression_arrayElements(threadData, _exp2);

            {
              modelica_metatype _e;
              for (tmpMeta19 = _expl2, tmp23 = arrayLength(tmpMeta19), tmp22 = 1; tmp22 <= tmp23; tmp22++)
              {
                _e = arrayGet(tmpMeta19,tmp22);
                _e = omc_NFTypeCheck_checkOverloadedBinaryArrayEW2(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _e, _ty2, (modelica_integer)_var2, _candidates, _context, _info ,&_ty);

                tmpMeta20 = mmc_mk_cons(_e, _expl);
                _expl = tmpMeta20;
              }
            }
          }
        }
      }
    }

    _outType = omc_NFType_setArrayElementType(threadData, _type1, _ty);

    _outExp = omc_NFExpression_makeArray(threadData, _outType, listArray(listReverseInPlace(_expl)), 0 /* false */);
  }
  else
  {
    _outExp = omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, 1 /* true */ ,&_outType);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayEW2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayEW2(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer _mk;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _mk has no default value.
  // _ty has no default value.
  if((omc_NFType_isArray(threadData, _type1) && omc_NFType_isArray(threadData, _type2)))
  {
    _e1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _type1, _exp2, _type2, ((modelica_integer) 1) ,&_e2 ,NULL ,&_mk);
  }
  else
  {
    _e1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, omc_NFType_arrayElementType(threadData, _type1), _exp2, omc_NFType_arrayElementType(threadData, _type2), ((modelica_integer) 1) ,&_e2 ,NULL ,&_mk);
  }

  if((!omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk)))
  {
    tmpMeta1 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, _op, _e2);
    tmpMeta2 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta1, tmpMeta2, _info, 1 /* true */);
  }

  _e1 = omc_NFExpandExp_expand(threadData, _exp1, 0 /* false */, NULL);

  _e2 = omc_NFExpandExp_expand(threadData, _exp2, 0 /* false */, NULL);

  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayEW2(threadData, _e1, _type1, (modelica_integer)_var1, _op, _e2, _type2, (modelica_integer)_var2, _candidates, _context, _info ,&_outType);
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayEW(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayDiv(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  if((omc_NFType_isArray(threadData, _type1) && omc_NFType_isScalar(threadData, _type2)))
  {
    _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayScalar(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info ,&_outType);
  }
  else
  {
    tmpMeta1 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
    tmpMeta2 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta1, tmpMeta2, _info, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayDiv(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayDiv(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayScalar2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _expl = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _arr = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _e1 has no default value.
  // _expl has no default value.
  // _ty has no default value.
  // _arr has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp1;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp1), 3)))) == ((modelica_integer) 0))) goto tmp3_end;
          { /* matchcontinue expression */
            {
              volatile mmc_switch_type tmp8;
              int tmp9;
              tmp8 = 0;
              MMC_TRY_INTERNAL(mmc_jumper)
              tmp7_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp8 < 2; tmp8++) {
                switch (MMC_SWITCH_CAST(tmp8)) {
                case 0: {
                  modelica_metatype tmpMeta10;
                  /* Pattern matching succeeded */
                  _ty = omc_NFType_unliftArray(threadData, _type1);

                  tmpMeta10 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, _type1);
                  omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData, tmpMeta10, _ty, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, 0 /* false */ ,&_outType);
                  goto tmp7_done;
                }
                case 1: {
                  modelica_metatype tmpMeta11;
                  modelica_metatype tmpMeta12;
                  /* Pattern matching succeeded */
                  tmpMeta11 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
                  tmpMeta12 = mmc_mk_cons(_type1, mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp1), 2))), MMC_REFSTRUCTLIT(mmc_nil)));
                  omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta11, tmpMeta12, _info, 1 /* true */);
                  goto tmp7_done;
                }
                }
                goto tmp7_end;
                tmp7_end: ;
              }
              goto goto_6;
              tmp7_done:
              (void)tmp8;
              MMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp7_done2;
              goto_6:;
              MMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp8 < 2) {
                goto tmp7_top;
              }
              goto goto_2;
              tmp7_done2:;
            }
          }
          ;

          _outType = omc_NFType_setArrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp1), 2))), _outType);
          tmpMeta[0+0] = omc_NFExpression_makeEmptyArray(threadData, _outType);
          tmpMeta[0+1] = _outType;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _ty = omc_NFType_unliftArray(threadData, _type1);

          _arr = arrayCreateNoInit(arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp1), 3)))), _exp1);

          tmp13 = ((modelica_integer) 1); tmp14 = 1; tmp15 = arrayLength(_arr);
          if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp13, tmp15); _i += tmp14)
            {
              _e1 = arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp1), 3))), _i);

              arrayUpdateNoBoundsChecking(_arr, _i, omc_NFTypeCheck_checkOverloadedBinaryArrayScalar2(threadData, _e1, _ty, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, NULL));
            }
          }

          _outType = omc_NFType_setArrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp1), 2))), omc_NFExpression_typeOf(threadData, arrayGet(_arr,((modelica_integer) 1)) /* DAE.ASUB */));
          tmpMeta[0+0] = omc_NFExpression_makeArray(threadData, _outType, _arr, 0 /* false */);
          tmpMeta[0+1] = _outType;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, 1 /* true */, &tmpMeta[0+1]);
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
  _outExp = tmpMeta[0+0];
  _outType = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayScalar2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayScalar2(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayScalar(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayScalar2(threadData, omc_NFExpandExp_expand(threadData, _exp1, 0 /* false */, NULL), _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info ,&_outType);
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayScalar(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayScalar(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryScalarArray2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype _expl = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _arr = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _expl has no default value.
  // _ty has no default value.
  // _arr has no default value.
  // _e2 has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 3)))) == ((modelica_integer) 0))) goto tmp3_end;
          { /* matchcontinue expression */
            {
              volatile mmc_switch_type tmp8;
              int tmp9;
              tmp8 = 0;
              MMC_TRY_INTERNAL(mmc_jumper)
              tmp7_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp8 < 2; tmp8++) {
                switch (MMC_SWITCH_CAST(tmp8)) {
                case 0: {
                  modelica_metatype tmpMeta10;
                  /* Pattern matching succeeded */
                  _ty = omc_NFType_unliftArray(threadData, _type2);

                  tmpMeta10 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, _type2);
                  omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _op, tmpMeta10, _ty, (modelica_integer)_var2, _candidates, _context, _info, 0 /* false */ ,&_outType);
                  goto tmp7_done;
                }
                case 1: {
                  modelica_metatype tmpMeta11;
                  modelica_metatype tmpMeta12;
                  /* Pattern matching succeeded */
                  tmpMeta11 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
                  tmpMeta12 = mmc_mk_cons(_type1, mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 2))), MMC_REFSTRUCTLIT(mmc_nil)));
                  omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta11, tmpMeta12, _info, 1 /* true */);
                  goto tmp7_done;
                }
                }
                goto tmp7_end;
                tmp7_end: ;
              }
              goto goto_6;
              tmp7_done:
              (void)tmp8;
              MMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp7_done2;
              goto_6:;
              MMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp8 < 2) {
                goto tmp7_top;
              }
              goto goto_2;
              tmp7_done2:;
            }
          }
          ;

          _outType = omc_NFType_setArrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 2))), _outType);
          tmpMeta[0+0] = omc_NFExpression_makeEmptyArray(threadData, _outType);
          tmpMeta[0+1] = _outType;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _ty = omc_NFType_unliftArray(threadData, _type2);

          _arr = arrayCreateNoInit(arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 3)))), _exp2);

          tmp13 = ((modelica_integer) 1); tmp14 = 1; tmp15 = arrayLength(_arr);
          if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp13, tmp15); _i += tmp14)
            {
              _e2 = arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 3))), _i);

              arrayUpdateNoBoundsChecking(_arr, _i, omc_NFTypeCheck_checkOverloadedBinaryScalarArray2(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _e2, _ty, (modelica_integer)_var2, _candidates, _context, _info, NULL));
            }
          }

          _outType = omc_NFType_setArrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 2))), omc_NFExpression_typeOf(threadData, arrayGet(_arr,((modelica_integer) 1)) /* DAE.ASUB */));
          tmpMeta[0+0] = omc_NFExpression_makeArray(threadData, _outType, _arr, 0 /* false */);
          tmpMeta[0+1] = _outType;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, 1 /* true */, &tmpMeta[0+1]);
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
  _outExp = tmpMeta[0+0];
  _outType = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryScalarArray2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryScalarArray2(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryScalarArray(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryScalarArray2(threadData, _exp1, _type1, (modelica_integer)_var1, _op, omc_NFExpandExp_expand(threadData, _exp2, 0 /* false */, NULL), _type2, (modelica_integer)_var2, _candidates, _context, _info ,&_outType);
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryScalarArray(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryScalarArray(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayMul(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_boolean _valid;
  modelica_metatype _dims1 = NULL;
  modelica_metatype _dims2 = NULL;
  modelica_metatype _dim11 = NULL;
  modelica_metatype _dim12 = NULL;
  modelica_metatype _dim21 = NULL;
  modelica_metatype _dim22 = NULL;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _valid has no default value.
  // _dims1 has no default value.
  // _dims2 has no default value.
  // _dim11 has no default value.
  // _dim12 has no default value.
  // _dim21 has no default value.
  // _dim22 has no default value.
  _dims1 = omc_NFType_arrayDims(threadData, _type1);

  _dims2 = omc_NFType_arrayDims(threadData, _type2);

  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _dims1;
    tmp4_2 = _dims2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          /* Pattern matching succeeded */
          _outExp = omc_NFTypeCheck_checkOverloadedBinaryScalarArray(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, NULL);
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = _outExp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          /* Pattern matching succeeded */
          _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayScalar(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, NULL);
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = _outExp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          if (!listEmpty(tmpMeta11)) goto tmp3_end;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta13)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmpMeta13);
          tmpMeta15 = MMC_CDR(tmpMeta13);
          if (!listEmpty(tmpMeta15)) goto tmp3_end;
          _dim21 = tmpMeta10;
          _dim11 = tmpMeta12;
          _dim12 = tmpMeta14;
          /* Pattern matching succeeded */
          _valid = omc_NFDimension_isEqual(threadData, _dim12, _dim21);

          tmpMeta16 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
          _outExp = tmpMeta16;

          _valid = 0 /* false */;
          tmp1_c0 = _valid;
          tmpMeta[0+1] = _outExp;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmp4_1);
          tmpMeta18 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta18)) goto tmp3_end;
          tmpMeta19 = MMC_CAR(tmpMeta18);
          tmpMeta20 = MMC_CDR(tmpMeta18);
          if (!listEmpty(tmpMeta20)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmp4_2);
          tmpMeta22 = MMC_CDR(tmp4_2);
          if (listEmpty(tmpMeta22)) goto tmp3_end;
          tmpMeta23 = MMC_CAR(tmpMeta22);
          tmpMeta24 = MMC_CDR(tmpMeta22);
          if (!listEmpty(tmpMeta24)) goto tmp3_end;
          _dim11 = tmpMeta17;
          _dim12 = tmpMeta19;
          _dim21 = tmpMeta21;
          _dim22 = tmpMeta23;
          /* Pattern matching succeeded */
          _valid = omc_NFDimension_isEqual(threadData, _dim12, _dim21);

          tmpMeta25 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
          _outExp = tmpMeta25;

          _valid = 0 /* false */;
          tmp1_c0 = _valid;
          tmpMeta[0+1] = _outExp;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          tmpMeta26 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
          tmp1_c0 = 0 /* false */;
          tmpMeta[0+1] = tmpMeta26;
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
  _valid = tmp1_c0;
  _outExp = tmpMeta[0+1];

  if((!_valid))
  {
    tmpMeta27 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, _outExp, tmpMeta27, _info, 1 /* true */);
  }

  _outType = omc_NFExpression_typeOf(threadData, _outExp);
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayMul(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayMul(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayAddSub2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _exp1;
    tmp4_2 = _exp2;
    {
      modelica_metatype _ty = NULL;
      modelica_metatype _ty1 = NULL;
      modelica_metatype _ty2 = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _arr = NULL;
      modelica_metatype _arr1 = NULL;
      modelica_metatype _arr2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ty has no default value.
      // _ty1 has no default value.
      // _ty2 has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _arr has no default value.
      // _arr1 has no default value.
      // _arr2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp17;
          modelica_integer tmp18;
          modelica_integer tmp19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _arr1 = tmpMeta6;
          _arr2 = tmpMeta7;
          /* Pattern matching succeeded */
          if((arrayLength(_arr1) == ((modelica_integer) 0)))
          {
            _ty1 = omc_NFType_arrayElementType(threadData, _type1);

            _ty2 = omc_NFType_arrayElementType(threadData, _type2);

            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            _arr = listArray(tmpMeta8);

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
                    /* Pattern matching succeeded */
                    tmpMeta13 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, _ty1);
                    tmpMeta14 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, _ty2);
                    omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData, tmpMeta13, _ty1, (modelica_integer)_var1, _op, tmpMeta14, _ty2, (modelica_integer)_var2, _candidates, _context, _info, 0 /* false */ ,&_ty);
                    goto tmp10_done;
                  }
                  case 1: {
                    modelica_metatype tmpMeta15;
                    modelica_metatype tmpMeta16;
                    /* Pattern matching succeeded */
                    tmpMeta15 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
                    tmpMeta16 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
                    omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta15, tmpMeta16, _info, 1 /* true */);
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
          }
          else
          {
            _ty1 = omc_NFType_unliftArray(threadData, _type1);

            _ty2 = omc_NFType_unliftArray(threadData, _type2);

            _arr = arrayCreateNoInit(arrayLength(_arr1), arrayGet(_arr1,((modelica_integer) 1)) /* DAE.ASUB */);

            tmp17 = ((modelica_integer) 1); tmp18 = 1; tmp19 = arrayLength(_arr1);
            if(!(((tmp18 > 0) && (tmp17 > tmp19)) || ((tmp18 < 0) && (tmp17 < tmp19))))
            {
              modelica_integer _i;
              for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp17, tmp19); _i += tmp18)
              {
                _e1 = arrayGetNoBoundsChecking(_arr1, _i);

                _e2 = arrayGetNoBoundsChecking(_arr2, _i);

                _e = omc_NFTypeCheck_checkOverloadedBinaryArrayAddSub2(threadData, _e1, _ty1, (modelica_integer)_var1, _op, _e2, _ty2, (modelica_integer)_var2, _candidates, _context, _info ,&_ty);

                arrayUpdateNoBoundsChecking(_arr, _i, _e);
              }
            }
          }

          _outType = omc_NFType_setArrayElementType(threadData, _type1, _ty);

          _outExp = omc_NFExpression_makeArray(threadData, _outType, _arr, 0 /* false */);
          tmpMeta[0+0] = _outExp;
          tmpMeta[0+1] = _outType;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, 1 /* true */, &tmpMeta[0+1]);
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
  _outExp = tmpMeta[0+0];
  _outType = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayAddSub2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayAddSub2(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryArrayAddSub(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer _mk;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _mk has no default value.
  _e1 = omc_NFTypeCheck_matchExpressions(threadData, _exp1, _type1, _exp2, _type2, ((modelica_integer) 1) ,&_e2 ,NULL ,&_mk);

  if((!omc_NFTypeCheck_isCompatibleMatch(threadData, (modelica_integer)_mk)))
  {
    tmpMeta1 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, _op, _e2);
    tmpMeta2 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta1, tmpMeta2, _info, 1 /* true */);
  }

  _e1 = omc_NFExpandExp_expand(threadData, _e1, 0 /* false */, NULL);

  _e2 = omc_NFExpandExp_expand(threadData, _e2, 0 /* false */, NULL);

  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayAddSub2(threadData, _e1, _type1, (modelica_integer)_var1, _op, _e2, _type2, (modelica_integer)_var2, _candidates, _context, _info ,&_outType);
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryArrayAddSub(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayAddSub(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFTypeCheck_checkConditionalBinaryOperator(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_integer _context, modelica_metatype _info, modelica_boolean _retype, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype _tty1 = NULL;
  modelica_metatype _fty1 = NULL;
  modelica_metatype _tty2 = NULL;
  modelica_metatype _fty2 = NULL;
  modelica_metatype _ty1 = NULL;
  modelica_metatype _ty2 = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_boolean _valid1;
  modelica_boolean _valid2;
  modelica_integer _branch;
  modelica_integer tmp1_c4 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _tty1 has no default value.
  // _fty1 has no default value.
  // _tty2 has no default value.
  // _fty2 has no default value.
  // _ty1 has no default value.
  // _ty2 has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _valid1 has no default value.
  // _valid2 has no default value.
  // _branch has no default value.
  
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _type1;
    tmp4_2 = _type2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_type1), 2)));
          tmpMeta[0+1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_type1), 3)));
          tmpMeta[0+2] = _type2;
          tmpMeta[0+3] = _type2;
          tmp1_c4 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_type1), 4))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,16,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _type1;
          tmpMeta[0+1] = _type1;
          tmpMeta[0+2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_type2), 2)));
          tmpMeta[0+3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_type2), 3)));
          tmp1_c4 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_type2), 4))));
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
  _tty1 = tmpMeta[0+0];
  _fty1 = tmpMeta[0+1];
  _tty2 = tmpMeta[0+2];
  _fty2 = tmpMeta[0+3];
  _branch = tmp1_c4;

  omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT192);

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp7_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          /* Pattern matching succeeded */
          _e1 = omc_NFTypeCheck_checkBinaryOperation(threadData, _exp1, _tty1, (modelica_integer)_var1, _op, _exp2, _tty2, (modelica_integer)_var2, _context, _info, _retype ,&_ty1);

          _valid1 = 1 /* true */;
          goto tmp7_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _valid1 = 0 /* false */;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      tmp7_done:
      (void)tmp8;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp7_done2;
      goto_6:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp8 < 2) {
        goto tmp7_top;
      }
      MMC_THROW_INTERNAL();
      tmp7_done2:;
    }
  }
  ;

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp12;
      int tmp13;
      tmp12 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp11_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp12 < 2; tmp12++) {
        switch (MMC_SWITCH_CAST(tmp12)) {
        case 0: {
          /* Pattern matching succeeded */
          _e2 = omc_NFTypeCheck_checkBinaryOperation(threadData, _exp1, _fty1, (modelica_integer)_var1, _op, _exp2, _fty2, (modelica_integer)_var2, _context, _info, _retype ,&_ty2);

          _valid2 = 1 /* true */;
          goto tmp11_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _valid2 = 0 /* false */;
          goto tmp11_done;
        }
        }
        goto tmp11_end;
        tmp11_end: ;
      }
      goto goto_10;
      tmp11_done:
      (void)tmp12;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp11_done2;
      goto_10:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp12 < 2) {
        goto tmp11_top;
      }
      MMC_THROW_INTERNAL();
      tmp11_done2:;
    }
  }
  ;

  omc_ErrorExt_rollBack(threadData, _OMC_LIT192);

  if((_valid1 && _valid2))
  {
    tmpMeta14 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _ty1, _ty2, mmc_mk_integer((modelica_integer)_branch));
    _outType = tmpMeta14;

    _outExp = _e1;
  }
  else
  {
    if(_valid1)
    {
      tmpMeta15 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _ty1, _OMC_LIT162, mmc_mk_integer(2));
      _outType = tmpMeta15;

      _outExp = _e1;
    }
    else
    {
      if(_valid2)
      {
        tmpMeta16 = mmc_mk_box4(19, &NFType_CONDITIONAL__ARRAY__desc, _OMC_LIT162, _ty2, mmc_mk_integer(3));
        _outType = tmpMeta16;

        _outExp = _e2;
      }
      else
      {
        tmpMeta17 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
        omc_NFTypeCheck_printUnresolvableTypeError(threadData, _exp1, tmpMeta17, _info, 1 /* true */);
      }
    }
  }

  _outExp = omc_NFExpression_setType(threadData, _outType, _outExp);
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFTypeCheck_checkConditionalBinaryOperator(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _context, modelica_metatype _info, modelica_metatype _retype, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  tmp4 = mmc_unbox_integer(_retype);
  _outExp = omc_NFTypeCheck_checkConditionalBinaryOperator(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, tmp3, _info, tmp4, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_checkBinaryOperationBoxed(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_integer _context, modelica_metatype _info, modelica_boolean _retype, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _ty1 = NULL;
  modelica_metatype _ty2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _ty1 has no default value.
  // _ty2 has no default value.
  _e1 = omc_NFTypeCheck_matchTypes(threadData, _type1, omc_NFType_unbox(threadData, _type1), _exp1, ((modelica_integer) 0) ,&_ty1, NULL);

  _e2 = omc_NFTypeCheck_matchTypes(threadData, _type2, omc_NFType_unbox(threadData, _type2), _exp2, ((modelica_integer) 0) ,&_ty2, NULL);

  _outExp = omc_NFTypeCheck_checkBinaryOperation(threadData, _e1, _ty1, (modelica_integer)_var1, _op, _e2, _ty2, (modelica_integer)_var2, _context, _info, _retype ,&_outType);
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
modelica_metatype boxptr_NFTypeCheck_checkBinaryOperationBoxed(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _context, modelica_metatype _info, modelica_metatype _retype, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  tmp4 = mmc_unbox_integer(_retype);
  _outExp = omc_NFTypeCheck_checkBinaryOperationBoxed(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, tmp3, _info, tmp4, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_metatype _candidates, modelica_integer _context, modelica_metatype _info, modelica_boolean _showErrors, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype _matchKind = NULL;
  modelica_metatype _matchedFunc = NULL;
  modelica_metatype _matchedFunctions = NULL;
  modelica_metatype _exactMatches = NULL;
  modelica_metatype _fn = NULL;
  modelica_integer _oop;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _args has no default value.
  // _matchKind has no default value.
  // _matchedFunc has no default value.
  // _matchedFunctions has no default value.
  // _exactMatches has no default value.
  // _fn has no default value.
  // _oop has no default value.
  tmpMeta2 = mmc_mk_box6(3, &NFFunction_TypedArg_TYPED__ARG__desc, mmc_mk_none(), _exp1, _type1, mmc_mk_integer((modelica_integer)_var1), mmc_mk_integer(1));
  tmpMeta3 = mmc_mk_box6(3, &NFFunction_TypedArg_TYPED__ARG__desc, mmc_mk_none(), _exp2, _type2, mmc_mk_integer((modelica_integer)_var2), mmc_mk_integer(1));
  tmpMeta1 = mmc_mk_cons(tmpMeta2, mmc_mk_cons(tmpMeta3, MMC_REFSTRUCTLIT(mmc_nil)));
  _args = tmpMeta1;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _matchedFunctions = omc_NFFunction_Function_matchFunctionsSilent(threadData, _candidates, _args, tmpMeta4, _context, _info, 1 /* true */);

  _exactMatches = omc_NFFunction_MatchedFunction_getExactMatches(threadData, _matchedFunctions);

  if(listEmpty(_exactMatches))
  {
    omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT193);

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
            _outExp = omc_NFTypeCheck_implicitConstructAndMatch(threadData, _candidates, _exp1, _type1, _op, _exp2, _type2, _info ,&_outType);

            if(_showErrors)
            {
              omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT193);
            }
            else
            {
              omc_ErrorExt_rollBack(threadData, _OMC_LIT193);
            }
            goto tmp6_done;
          }
          case 1: {
            modelica_metatype tmpMeta19;
            modelica_metatype tmpMeta20;
            /* Pattern matching succeeded */
            omc_ErrorExt_rollBack(threadData, _OMC_LIT193);

            if((omc_NFType_isArray(threadData, _type1) || omc_NFType_isArray(threadData, _type2)))
            {
              
              
              { /* match expression */
                modelica_metatype tmp12_1;
                tmp12_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
                {
                  int tmp12;
                  {
                    switch (MMC_SWITCH_CAST(mmc_unbox_integer(tmp12_1))) {
                    case 1: {
                      modelica_integer tmp13;
                      tmp13 = mmc_unbox_integer(tmp12_1);
                      if (1 != tmp13) goto tmp11_end;
                      /* Pattern matching succeeded */
                      tmpMeta[0+0] = omc_NFTypeCheck_checkOverloadedBinaryArrayAddSub(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, &tmpMeta[0+1]);
                      goto tmp11_done;
                    }
                    case 2: {
                      modelica_integer tmp14;
                      tmp14 = mmc_unbox_integer(tmp12_1);
                      if (2 != tmp14) goto tmp11_end;
                      /* Pattern matching succeeded */
                      tmpMeta[0+0] = omc_NFTypeCheck_checkOverloadedBinaryArrayAddSub(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, &tmpMeta[0+1]);
                      goto tmp11_done;
                    }
                    case 3: {
                      modelica_integer tmp15;
                      tmp15 = mmc_unbox_integer(tmp12_1);
                      if (3 != tmp15) goto tmp11_end;
                      /* Pattern matching succeeded */
                      tmpMeta[0+0] = omc_NFTypeCheck_checkOverloadedBinaryArrayMul(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, &tmpMeta[0+1]);
                      goto tmp11_done;
                    }
                    case 4: {
                      modelica_integer tmp16;
                      tmp16 = mmc_unbox_integer(tmp12_1);
                      if (4 != tmp16) goto tmp11_end;
                      /* Pattern matching succeeded */
                      tmpMeta[0+0] = omc_NFTypeCheck_checkOverloadedBinaryArrayDiv(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, &tmpMeta[0+1]);
                      goto tmp11_done;
                    }
                    default:
                    tmp11_default: OMC_LABEL_UNUSED; {
                      modelica_metatype tmpMeta17;
                      modelica_metatype tmpMeta18;
                      
                      /* Pattern matching succeeded */
                      tmpMeta17 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
                      tmpMeta18 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
                      omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta17, tmpMeta18, _info, _showErrors);
                      goto goto_10;
                      goto tmp11_done;
                    }
                    }
                    goto tmp11_end;
                    tmp11_end: ;
                  }
                  goto goto_10;
                  goto_10:;
                  goto goto_5;
                  goto tmp11_done;
                  tmp11_done:;
                }
              }
              _outExp = tmpMeta[0+0];
              _outType = tmpMeta[0+1];
            }
            else
            {
              tmpMeta19 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
              tmpMeta20 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
              omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta19, tmpMeta20, _info, _showErrors);
            }
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
  }
  else
  {
    if((listLength(_exactMatches) == ((modelica_integer) 1)))
    {
      /* Pattern-matching assignment */
      tmpMeta21 = _exactMatches;
      if (listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
      tmpMeta22 = MMC_CAR(tmpMeta21);
      tmpMeta23 = MMC_CDR(tmpMeta21);
      _matchedFunc = tmpMeta22;

      _fn = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 2)));

      _outType = omc_NFFunction_Function_returnType(threadData, _fn);

      {
        modelica_metatype __omcQ_24tmpVar17;
        modelica_metatype* tmp25;
        modelica_metatype tmpMeta26;
        modelica_metatype __omcQ_24tmpVar16;
        modelica_integer tmp27;
        modelica_metatype _a_loopVar = 0;
        modelica_metatype _a;
        _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 3)));
        tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar17 = tmpMeta26; /* defaultValue */
        tmp25 = &__omcQ_24tmpVar17;
        while(1) {
          tmp27 = 1;
          if (!listEmpty(_a_loopVar)) {
            _a = MMC_CAR(_a_loopVar);
            _a_loopVar = MMC_CDR(_a_loopVar);
            tmp27--;
          }
          if (tmp27 == 0) {
            __omcQ_24tmpVar16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 3)));
            *tmp25 = mmc_mk_cons(__omcQ_24tmpVar16,0);
            tmp25 = &MMC_CDR(*tmp25);
          } else if (tmp27 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp25 = mmc_mk_nil();
        tmpMeta24 = __omcQ_24tmpVar17;
      }
      tmpMeta28 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 2))), tmpMeta24, omc_NFPrefixes_variabilityMax(threadData, (modelica_integer)_var1, (modelica_integer)_var2), 1, _outType));
      _outExp = tmpMeta28;
    }
    else
    {
      if(_showErrors)
      {
        tmpMeta30 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
        {
          modelica_metatype __omcQ_24tmpVar21;
          modelica_metatype* tmp32;
          modelica_metatype tmpMeta33;
          modelica_metatype __omcQ_24tmpVar20;
          modelica_integer tmp34;
          modelica_metatype _mfn_loopVar = 0;
          modelica_metatype _mfn;
          _mfn_loopVar = _matchedFunctions;
          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar21 = tmpMeta33; /* defaultValue */
          tmp32 = &__omcQ_24tmpVar21;
          while(1) {
            tmp34 = 1;
            if (!listEmpty(_mfn_loopVar)) {
              _mfn = MMC_CAR(_mfn_loopVar);
              _mfn_loopVar = MMC_CDR(_mfn_loopVar);
              tmp34--;
            }
            if (tmp34 == 0) {
              __omcQ_24tmpVar20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mfn), 2)));
              *tmp32 = mmc_mk_cons(__omcQ_24tmpVar20,0);
              tmp32 = &MMC_CDR(*tmp32);
            } else if (tmp34 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp32 = mmc_mk_nil();
          tmpMeta31 = __omcQ_24tmpVar21;
        }
        tmpMeta29 = mmc_mk_cons(omc_NFExpression_toString(threadData, tmpMeta30), mmc_mk_cons(omc_NFFunction_Function_candidateFuncListString(threadData, tmpMeta31), MMC_REFSTRUCTLIT(mmc_nil)));
        omc_Error_addSourceMessage(threadData, _OMC_LIT189, tmpMeta29, _info);
      }

      MMC_THROW_INTERNAL();
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
modelica_metatype boxptr_NFTypeCheck_matchOverloadedBinaryOperator(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _candidates, modelica_metatype _context, modelica_metatype _info, modelica_metatype _showErrors, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  tmp4 = mmc_unbox_integer(_showErrors);
  _outExp = omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, _candidates, tmp3, _info, tmp4, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_checkOverloadedBinaryOperator(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outType = NULL;
  modelica_string _op_str = NULL;
  modelica_metatype _candidates = NULL;
  modelica_metatype _ety1 = NULL;
  modelica_metatype _ety2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outType has no default value.
  // _op_str has no default value.
  // _candidates has no default value.
  // _ety1 has no default value.
  // _ety2 has no default value.
  _op_str = omc_NFOperator_symbol(threadData, omc_NFOperator_stripEW(threadData, _op), _OMC_LIT186);

  _ety1 = omc_NFType_arrayElementType(threadData, _type1);

  _ety2 = omc_NFType_arrayElementType(threadData, _type2);

  _candidates = omc_NFOperatorOverloading_lookupOperatorFunctionsInType(threadData, _op_str, _ety1);

  if((!omc_NFType_isEqual(threadData, _ety1, _ety2)))
  {
    _candidates = listAppend(omc_NFOperatorOverloading_lookupOperatorFunctionsInType(threadData, _op_str, _ety2), _candidates);
  }

  if(listEmpty(_candidates))
  {
    tmpMeta1 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
    tmpMeta2 = mmc_mk_cons(_type1, mmc_mk_cons(_type2, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_NFTypeCheck_printUnresolvableTypeError(threadData, tmpMeta1, tmpMeta2, _info, 1 /* true */);
  }

  if(omc_NFOperator_isElementWise(threadData, _op))
  {
    _outExp = omc_NFTypeCheck_checkOverloadedBinaryArrayEW(threadData, _exp1, _type1, (modelica_integer)_var1, omc_NFOperator_stripEW(threadData, _op), _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info ,&_outType);
  }
  else
  {
    _outExp = omc_NFTypeCheck_matchOverloadedBinaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _op, _exp2, _type2, (modelica_integer)_var2, _candidates, _context, _info, 1 /* true */ ,&_outType);
  }

  _outExp = omc_NFInline_inlineCallExp(threadData, _outExp, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  if (out_outType) { *out_outType = _outType; }
  return _outExp;
}
modelica_metatype boxptr_NFTypeCheck_checkOverloadedBinaryOperator(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  _outExp = omc_NFTypeCheck_checkOverloadedBinaryOperator(threadData, _exp1, _type1, tmp1, _op, _exp2, _type2, tmp2, tmp3, _info, out_outType);
  /* skip box _outExp; NFExpression */
  /* skip box _outType; NFType */
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFTypeCheck_checkBinaryOperation(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_integer _var1, modelica_metatype _operator, modelica_metatype _exp2, modelica_metatype _type2, modelica_integer _var2, modelica_integer _context, modelica_metatype _info, modelica_boolean _retype, modelica_metatype *out_resultType)
{
  modelica_metatype _binaryExp = NULL;
  modelica_metatype _resultType = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binaryExp has no default value.
  // _resultType has no default value.
  if((omc_NFType_isConditionalArray(threadData, _type1) || omc_NFType_isConditionalArray(threadData, _type2)))
  {
    _binaryExp = omc_NFTypeCheck_checkConditionalBinaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _operator, _exp2, _type2, (modelica_integer)_var2, _context, _info, _retype ,&_resultType);
  }
  else
  {
    if((omc_NFType_isComplex(threadData, omc_NFType_arrayElementType(threadData, _type1)) || omc_NFType_isComplex(threadData, omc_NFType_arrayElementType(threadData, _type2))))
    {
      _binaryExp = omc_NFTypeCheck_checkOverloadedBinaryOperator(threadData, _exp1, _type1, (modelica_integer)_var1, _operator, _exp2, _type2, (modelica_integer)_var2, _context, _info ,&_resultType);
    }
    else
    {
      if((omc_NFType_isBoxed(threadData, _type1) && omc_NFType_isBoxed(threadData, _type2)))
      {
        _binaryExp = omc_NFTypeCheck_checkBinaryOperationBoxed(threadData, _exp1, _type1, (modelica_integer)_var1, _operator, _exp2, _type2, (modelica_integer)_var2, _context, _info, _retype ,&_resultType);
      }
      else
      {
        
        
        { /* match expression */
          modelica_metatype tmp4_1;
          tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 3)));
          {
            int tmp4;
            {
              switch (MMC_SWITCH_CAST(mmc_unbox_integer(tmp4_1))) {
              case 1: {
                modelica_integer tmp5;
                tmp5 = mmc_unbox_integer(tmp4_1);
                if (1 != tmp5) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationAdd(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 2: {
                modelica_integer tmp6;
                tmp6 = mmc_unbox_integer(tmp4_1);
                if (2 != tmp6) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationSub(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 3: {
                modelica_integer tmp7;
                tmp7 = mmc_unbox_integer(tmp4_1);
                if (3 != tmp7) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationMul(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 4: {
                modelica_integer tmp8;
                tmp8 = mmc_unbox_integer(tmp4_1);
                if (4 != tmp8) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationDiv(threadData, _exp1, _type1, _exp2, _type2, _info, _retype, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 5: {
                modelica_integer tmp9;
                tmp9 = mmc_unbox_integer(tmp4_1);
                if (5 != tmp9) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationPow(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 6: {
                modelica_integer tmp10;
                tmp10 = mmc_unbox_integer(tmp4_1);
                if (6 != tmp10) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationEW(threadData, _exp1, _type1, _exp2, _type2, 1, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 7: {
                modelica_integer tmp11;
                tmp11 = mmc_unbox_integer(tmp4_1);
                if (7 != tmp11) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationEW(threadData, _exp1, _type1, _exp2, _type2, 2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 8: {
                modelica_integer tmp12;
                tmp12 = mmc_unbox_integer(tmp4_1);
                if (8 != tmp12) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationEW(threadData, _exp1, _type1, _exp2, _type2, 3, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 9: {
                modelica_integer tmp13;
                tmp13 = mmc_unbox_integer(tmp4_1);
                if (9 != tmp13) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationDiv(threadData, _exp1, _type1, _exp2, _type2, _info, 1 /* true */, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 10: {
                modelica_integer tmp14;
                tmp14 = mmc_unbox_integer(tmp4_1);
                if (10 != tmp14) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationPowEW(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 11: {
                modelica_integer tmp15;
                tmp15 = mmc_unbox_integer(tmp4_1);
                if (11 != tmp15) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationEW(threadData, _exp1, _type1, _exp2, _type2, 1, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 12: {
                modelica_integer tmp16;
                tmp16 = mmc_unbox_integer(tmp4_1);
                if (12 != tmp16) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationEW(threadData, _exp1, _type1, _exp2, _type2, 1, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 13: {
                modelica_integer tmp17;
                tmp17 = mmc_unbox_integer(tmp4_1);
                if (13 != tmp17) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationEW(threadData, _exp1, _type1, _exp2, _type2, 2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 14: {
                modelica_integer tmp18;
                tmp18 = mmc_unbox_integer(tmp4_1);
                if (14 != tmp18) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationEW(threadData, _exp1, _type1, _exp2, _type2, 2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 15: {
                modelica_integer tmp19;
                tmp19 = mmc_unbox_integer(tmp4_1);
                if (15 != tmp19) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationMul(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 16: {
                modelica_integer tmp20;
                tmp20 = mmc_unbox_integer(tmp4_1);
                if (16 != tmp20) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationMul(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 17: {
                modelica_integer tmp21;
                tmp21 = mmc_unbox_integer(tmp4_1);
                if (17 != tmp21) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationMul(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 18: {
                modelica_integer tmp22;
                tmp22 = mmc_unbox_integer(tmp4_1);
                if (18 != tmp22) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationMul(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 19: {
                modelica_integer tmp23;
                tmp23 = mmc_unbox_integer(tmp4_1);
                if (19 != tmp23) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationMul(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 20: {
                modelica_integer tmp24;
                tmp24 = mmc_unbox_integer(tmp4_1);
                if (20 != tmp24) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationMul(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 21: {
                modelica_integer tmp25;
                tmp25 = mmc_unbox_integer(tmp4_1);
                if (21 != tmp25) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationDiv(threadData, _exp1, _type1, _exp2, _type2, _info, _retype, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 22: {
                modelica_integer tmp26;
                tmp26 = mmc_unbox_integer(tmp4_1);
                if (22 != tmp26) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationDiv(threadData, _exp1, _type1, _exp2, _type2, _info, _retype, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 23: {
                modelica_integer tmp27;
                tmp27 = mmc_unbox_integer(tmp4_1);
                if (23 != tmp27) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationPowEW(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 24: {
                modelica_integer tmp28;
                tmp28 = mmc_unbox_integer(tmp4_1);
                if (24 != tmp28) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationPowEW(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
                goto tmp3_done;
              }
              case 25: {
                modelica_integer tmp29;
                tmp29 = mmc_unbox_integer(tmp4_1);
                if (25 != tmp29) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta[0+0] = omc_NFTypeCheck_checkBinaryOperationPow(threadData, _exp1, _type1, _exp2, _type2, _info, &tmpMeta[0+1]);
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
        _binaryExp = tmpMeta[0+0];
        _resultType = tmpMeta[0+1];
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_resultType) { *out_resultType = _resultType; }
  return _binaryExp;
}
modelica_metatype boxptr_NFTypeCheck_checkBinaryOperation(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _type1, modelica_metatype _var1, modelica_metatype _operator, modelica_metatype _exp2, modelica_metatype _type2, modelica_metatype _var2, modelica_metatype _context, modelica_metatype _info, modelica_metatype _retype, modelica_metatype *out_resultType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype _binaryExp = NULL;
  tmp1 = mmc_unbox_integer(_var1);
  tmp2 = mmc_unbox_integer(_var2);
  tmp3 = mmc_unbox_integer(_context);
  tmp4 = mmc_unbox_integer(_retype);
  _binaryExp = omc_NFTypeCheck_checkBinaryOperation(threadData, _exp1, _type1, tmp1, _operator, _exp2, _type2, tmp2, tmp3, _info, tmp4, out_resultType);
  /* skip box _binaryExp; NFExpression */
  /* skip box _resultType; NFType */
  return _binaryExp;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_getOption(threadData_t *threadData, modelica_integer _options, modelica_integer _option)
{
  modelica_boolean _isSet;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isSet = (((_options) & (_option)) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _isSet;
}
modelica_metatype boxptr_NFTypeCheck_getOption(threadData_t *threadData, modelica_metatype _options, modelica_metatype _option)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _isSet;
  modelica_metatype out_isSet;
  tmp1 = mmc_unbox_integer(_options);
  tmp2 = mmc_unbox_integer(_option);
  _isSet = omc_NFTypeCheck_getOption(threadData, tmp1, tmp2);
  out_isSet = mmc_mk_icon(_isSet);
  return out_isSet;
}

DLLDirection
modelica_integer omc_NFTypeCheck_setOption(threadData_t *threadData, modelica_integer _currentOptions, modelica_integer _newOption)
{
  modelica_integer _newOptions;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _newOptions = ((_currentOptions) | (_newOption));
  _return: OMC_LABEL_UNUSED
  return _newOptions;
}
modelica_metatype boxptr_NFTypeCheck_setOption(threadData_t *threadData, modelica_metatype _currentOptions, modelica_metatype _newOption)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _newOptions;
  modelica_metatype out_newOptions;
  tmp1 = mmc_unbox_integer(_currentOptions);
  tmp2 = mmc_unbox_integer(_newOption);
  _newOptions = omc_NFTypeCheck_setOption(threadData, tmp1, tmp2);
  out_newOptions = mmc_mk_icon(_newOptions);
  return out_newOptions;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_isValidPlugCompatibleMatch(threadData_t *threadData, modelica_integer _kind)
{
  modelica_boolean _v;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _v = (((modelica_integer)_kind == 1) || ((modelica_integer)_kind == 6));
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_NFTypeCheck_isValidPlugCompatibleMatch(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_boolean _v;
  modelica_metatype out_v;
  tmp1 = mmc_unbox_integer(_kind);
  _v = omc_NFTypeCheck_isValidPlugCompatibleMatch(threadData, tmp1);
  out_v = mmc_mk_icon(_v);
  return out_v;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_isValidArgumentMatch(threadData_t *threadData, modelica_integer _kind)
{
  modelica_boolean _v;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _v = (((((modelica_integer)_kind == 1) || ((modelica_integer)_kind == 2)) || ((modelica_integer)_kind == 5)) || ((modelica_integer)_kind == 6));
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_NFTypeCheck_isValidArgumentMatch(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_boolean _v;
  modelica_metatype out_v;
  tmp1 = mmc_unbox_integer(_kind);
  _v = omc_NFTypeCheck_isValidArgumentMatch(threadData, tmp1);
  out_v = mmc_mk_icon(_v);
  return out_v;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_isValidAssignmentMatch(threadData_t *threadData, modelica_integer _kind)
{
  modelica_boolean _v;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _v = ((((modelica_integer)_kind == 1) || ((modelica_integer)_kind == 2)) || ((modelica_integer)_kind == 6));
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_NFTypeCheck_isValidAssignmentMatch(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_boolean _v;
  modelica_metatype out_v;
  tmp1 = mmc_unbox_integer(_kind);
  _v = omc_NFTypeCheck_isValidAssignmentMatch(threadData, tmp1);
  out_v = mmc_mk_icon(_v);
  return out_v;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_isGenericMatch(threadData_t *threadData, modelica_integer _kind)
{
  modelica_boolean _isCast;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isCast = ((modelica_integer)_kind == 5);
  _return: OMC_LABEL_UNUSED
  return _isCast;
}
modelica_metatype boxptr_NFTypeCheck_isGenericMatch(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_boolean _isCast;
  modelica_metatype out_isCast;
  tmp1 = mmc_unbox_integer(_kind);
  _isCast = omc_NFTypeCheck_isGenericMatch(threadData, tmp1);
  out_isCast = mmc_mk_icon(_isCast);
  return out_isCast;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_isCastMatch(threadData_t *threadData, modelica_integer _kind)
{
  modelica_boolean _isCast;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isCast = ((modelica_integer)_kind == 2);
  _return: OMC_LABEL_UNUSED
  return _isCast;
}
modelica_metatype boxptr_NFTypeCheck_isCastMatch(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_boolean _isCast;
  modelica_metatype out_isCast;
  tmp1 = mmc_unbox_integer(_kind);
  _isCast = omc_NFTypeCheck_isCastMatch(threadData, tmp1);
  out_isCast = mmc_mk_icon(_isCast);
  return out_isCast;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_isExactMatch(threadData_t *threadData, modelica_integer _kind)
{
  modelica_boolean _isCompatible;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isCompatible = ((modelica_integer)_kind == 1);
  _return: OMC_LABEL_UNUSED
  return _isCompatible;
}
modelica_metatype boxptr_NFTypeCheck_isExactMatch(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_boolean _isCompatible;
  modelica_metatype out_isCompatible;
  tmp1 = mmc_unbox_integer(_kind);
  _isCompatible = omc_NFTypeCheck_isExactMatch(threadData, tmp1);
  out_isCompatible = mmc_mk_icon(_isCompatible);
  return out_isCompatible;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_isIncompatibleMatch(threadData_t *threadData, modelica_integer _kind)
{
  modelica_boolean _isIncompatible;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isIncompatible = ((modelica_integer)_kind == 7);
  _return: OMC_LABEL_UNUSED
  return _isIncompatible;
}
modelica_metatype boxptr_NFTypeCheck_isIncompatibleMatch(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_boolean _isIncompatible;
  modelica_metatype out_isIncompatible;
  tmp1 = mmc_unbox_integer(_kind);
  _isIncompatible = omc_NFTypeCheck_isIncompatibleMatch(threadData, tmp1);
  out_isIncompatible = mmc_mk_icon(_isIncompatible);
  return out_isIncompatible;
}

DLLDirection
modelica_boolean omc_NFTypeCheck_isCompatibleMatch(threadData_t *threadData, modelica_integer _kind)
{
  modelica_boolean _isCompatible;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isCompatible = ((modelica_integer)_kind != 7);
  _return: OMC_LABEL_UNUSED
  return _isCompatible;
}
modelica_metatype boxptr_NFTypeCheck_isCompatibleMatch(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_boolean _isCompatible;
  modelica_metatype out_isCompatible;
  tmp1 = mmc_unbox_integer(_kind);
  _isCompatible = omc_NFTypeCheck_isCompatibleMatch(threadData, tmp1);
  out_isCompatible = mmc_mk_icon(_isCompatible);
  return out_isCompatible;
}

