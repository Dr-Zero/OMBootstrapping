#include "omc_simulation_settings.h"
#include "NFStateMachineFlatten.h"
#define _OMC_LIT0_data "start"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,5,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2,0.0);
#define _OMC_LIT2 MMC_REFREALLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,4) {&NFExpression_REAL__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,2,6) {&NFExpression_BOOLEAN__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,5) {&NFExpression_STRING__desc,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,4) {&NFType_REAL__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "time"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,4,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,7) {&NFInstNode_InstNode_NAME__NODE__desc,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "sample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,6,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,1,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT16,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT2}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT13,_OMC_LIT7,_OMC_LIT15,_OMC_LIT15,_OMC_LIT17,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,1) {_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,9) {&NFInstNode_InstNodeType_NORMAL__COMP__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT14,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT21,_OMC_LIT13,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,7) {&NFType_CLOCK__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT13,_OMC_LIT25,_OMC_LIT15,_OMC_LIT15,_OMC_LIT17,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT19}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,1,1) {_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT24,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT27,_OMC_LIT13,_OMC_LIT22}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,1) {_OMC_LIT28,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,1) {_OMC_LIT23,_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,1) {_OMC_LIT23,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,3,4) {&DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,1,3) {&DAE_FunctionParallelism_FP__NON__PARALLEL__desc,}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,8,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT32,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT33,_OMC_LIT34,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,3,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "i"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,1,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT13,_OMC_LIT38,_OMC_LIT15,_OMC_LIT15,_OMC_LIT17,_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT19}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,1,1) {_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT41,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT43,_OMC_LIT13,_OMC_LIT22}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,1) {_OMC_LIT44,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,8,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT32,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT33,_OMC_LIT34,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,7,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT47}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,1,6) {&NFType_BOOLEAN__desc,}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "previous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,8,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT19,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT53,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "fixed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,5,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,6) {&NFExpression_BOOLEAN__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,1,35) {&NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc,}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,17,3) {&NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,5,3) {&NFBackendExtension_Annotations_ANNOTATIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,10,3) {&NFBackendExtension_BackendInfo_BACKEND__INFO__desc,_OMC_LIT57,_OMC_LIT58,_OMC_LIT59,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "smOf"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,4,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,2,7) {&NFInstNode_InstNode_NAME__NODE__desc,_OMC_LIT61}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,1,3) {&DAE_Prefix_NOPRE__desc,}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT5,_OMC_LIT64,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,2,0) {_OMC_LIT65,_OMC_LIT65}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "initialState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,12,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "transition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,10,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "_previous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,9,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "activeState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,11,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "active"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,6,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "activeReset"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,11,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "activeResetStates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,17,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "$timeInState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,12,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "$timeEnteredState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,17,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "$ticksInState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,13,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "cImmediate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,10,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "ticksInState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,12,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "Found 'ticksInState()' within a state of a hierarchical state machine."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,70,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "timeInState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,11,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "Found 'timeInState()' within a state of a hierarchical state machine."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,69,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "reset"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,5,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "init"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,4,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "nState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,6,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "tFrom"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,5,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "tTo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,3,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "tImmediate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,10,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "tReset"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,6,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "tSynchronize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,12,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "tPriority"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,9,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "c"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,1,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "selectedState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,13,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "selectedReset"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,13,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "fired"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,5,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "nextState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,9,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "nextReset"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,9,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "nextResetStates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,15,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "finalStates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,11,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "stateMachineInFinalState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,24,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "NFStateMachineFlatten.flatten"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,29,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#include "util/modelica.h"

#include "NFStateMachineFlatten_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_crefHasPrefix(threadData_t *threadData, modelica_metatype _prefix, modelica_metatype _cref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_crefHasPrefix(threadData_t *threadData, modelica_metatype _prefix, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_crefHasPrefix,2,0) {(void*) boxptr_NFStateMachineFlatten_crefHasPrefix,0}};
#define boxvar_NFStateMachineFlatten_crefHasPrefix MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_crefHasPrefix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_getStartValue(threadData_t *threadData, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_getStartValue,2,0) {(void*) boxptr_NFStateMachineFlatten_getStartValue,0}};
#define boxvar_NFStateMachineFlatten_getStartValue MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_getStartValue)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeRelationGt(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeRelationGt,2,0) {(void*) boxptr_NFStateMachineFlatten_makeRelationGt,0}};
#define boxvar_NFStateMachineFlatten_makeRelationGt MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeRelationGt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeRelationEq(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeRelationEq,2,0) {(void*) boxptr_NFStateMachineFlatten_makeRelationEq,0}};
#define boxvar_NFStateMachineFlatten_makeRelationEq MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeRelationEq)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeSampleTimeCall(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeSampleTimeCall,2,0) {(void*) boxptr_NFStateMachineFlatten_makeSampleTimeCall,0}};
#define boxvar_NFStateMachineFlatten_makeSampleTimeCall MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeSampleTimeCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeMaxIntArrCall(threadData_t *threadData, modelica_metatype _exps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeMaxIntArrCall,2,0) {(void*) boxptr_NFStateMachineFlatten_makeMaxIntArrCall,0}};
#define boxvar_NFStateMachineFlatten_makeMaxIntArrCall MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeMaxIntArrCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeInitialCall(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeInitialCall,2,0) {(void*) boxptr_NFStateMachineFlatten_makeInitialCall,0}};
#define boxvar_NFStateMachineFlatten_makeInitialCall MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeInitialCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makePreviousCall(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makePreviousCall,2,0) {(void*) boxptr_NFStateMachineFlatten_makePreviousCall,0}};
#define boxvar_NFStateMachineFlatten_makePreviousCall MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makePreviousCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeIfExp(threadData_t *threadData, modelica_metatype _cond, modelica_metatype _thenExp, modelica_metatype _elseExp, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeIfExp,2,0) {(void*) boxptr_NFStateMachineFlatten_makeIfExp,0}};
#define boxvar_NFStateMachineFlatten_makeIfExp MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeIfExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeCrefExp(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeCrefExp,2,0) {(void*) boxptr_NFStateMachineFlatten_makeCrefExp,0}};
#define boxvar_NFStateMachineFlatten_makeCrefExp MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeCrefExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeEq(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeEq,2,0) {(void*) boxptr_NFStateMachineFlatten_makeEq,0}};
#define boxvar_NFStateMachineFlatten_makeEq MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeEq)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeVarWithBinding(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_integer _var, modelica_metatype _bindExp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_makeVarWithBinding(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_metatype _var, modelica_metatype _bindExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeVarWithBinding,2,0) {(void*) boxptr_NFStateMachineFlatten_makeVarWithBinding,0}};
#define boxvar_NFStateMachineFlatten_makeVarWithBinding MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeVarWithBinding)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeVarWithStart(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_integer _var, modelica_metatype _startExp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_makeVarWithStart(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_metatype _var, modelica_metatype _startExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeVarWithStart,2,0) {(void*) boxptr_NFStateMachineFlatten_makeVarWithStart,0}};
#define boxvar_NFStateMachineFlatten_makeVarWithStart MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeVarWithStart)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeVar(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_integer _var);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_makeVar(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeVar,2,0) {(void*) boxptr_NFStateMachineFlatten_makeVar,0}};
#define boxvar_NFStateMachineFlatten_makeVar MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeSMSPrefix(threadData_t *threadData, modelica_metatype _initStateCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeSMSPrefix,2,0) {(void*) boxptr_NFStateMachineFlatten_makeSMSPrefix,0}};
#define boxvar_NFStateMachineFlatten_makeSMSPrefix MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_makeSMSPrefix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_qCref(threadData_t *threadData, modelica_string _name, modelica_metatype _ty, modelica_metatype _subs, modelica_metatype _prefixCr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_qCref,2,0) {(void*) boxptr_NFStateMachineFlatten_qCref,0}};
#define boxvar_NFStateMachineFlatten_qCref MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_qCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_generateMergeEquation(threadData_t *threadData, modelica_metatype _outerVarCref, modelica_metatype _outerVarMap, modelica_metatype _allVariables, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype *out_accVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_generateMergeEquation,2,0) {(void*) boxptr_NFStateMachineFlatten_generateMergeEquation,0}};
#define boxvar_NFStateMachineFlatten_generateMergeEquation MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_generateMergeEquation)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isOuterStateEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCrefs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isOuterStateEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isOuterStateEquation,2,0) {(void*) boxptr_NFStateMachineFlatten_isOuterStateEquation,0}};
#define boxvar_NFStateMachineFlatten_isOuterStateEquation MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isOuterStateEquation)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isVariableOfState(threadData_t *threadData, modelica_metatype _var, modelica_metatype _stateCref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isVariableOfState(threadData_t *threadData, modelica_metatype _var, modelica_metatype _stateCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isVariableOfState,2,0) {(void*) boxptr_NFStateMachineFlatten_isVariableOfState,0}};
#define boxvar_NFStateMachineFlatten_isVariableOfState MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isVariableOfState)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isEquationOfState(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isEquationOfState(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isEquationOfState,2,0) {(void*) boxptr_NFStateMachineFlatten_isEquationOfState,0}};
#define boxvar_NFStateMachineFlatten_isEquationOfState MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isEquationOfState)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isInitialStateForGroup(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _initStateCref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isInitialStateForGroup(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _initStateCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isInitialStateForGroup,2,0) {(void*) boxptr_NFStateMachineFlatten_isInitialStateForGroup,0}};
#define boxvar_NFStateMachineFlatten_isInitialStateForGroup MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isInitialStateForGroup)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isTransitionForGroup(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCrefs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isTransitionForGroup(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isTransitionForGroup,2,0) {(void*) boxptr_NFStateMachineFlatten_isTransitionForGroup,0}};
#define boxvar_NFStateMachineFlatten_isTransitionForGroup MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isTransitionForGroup)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isTransitionOrInitialState(threadData_t *threadData, modelica_metatype _eq);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isTransitionOrInitialState(threadData_t *threadData, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isTransitionOrInitialState,2,0) {(void*) boxptr_NFStateMachineFlatten_isTransitionOrInitialState,0}};
#define boxvar_NFStateMachineFlatten_isTransitionOrInitialState MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isTransitionOrInitialState)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_priorityGt(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_priorityGt(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_priorityGt,2,0) {(void*) boxptr_NFStateMachineFlatten_priorityGt,0}};
#define boxvar_NFStateMachineFlatten_priorityGt MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_priorityGt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_extractTransition(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_extractTransition,2,0) {(void*) boxptr_NFStateMachineFlatten_extractTransition,0}};
#define boxvar_NFStateMachineFlatten_extractTransition MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_extractTransition)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createTandC(threadData_t *threadData, modelica_metatype _stateCrefs, modelica_metatype _transitionEqs, modelica_metatype *out_c);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createTandC,2,0) {(void*) boxptr_NFStateMachineFlatten_createTandC,0}};
#define boxvar_NFStateMachineFlatten_createTandC MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createTandC)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsPreviousCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _stateVarCrefs, modelica_boolean __omcQ_24in_5Ffound, modelica_boolean *out_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_subsPreviousCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _stateVarCrefs, modelica_metatype __omcQ_24in_5Ffound, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsPreviousCrefs,2,0) {(void*) boxptr_NFStateMachineFlatten_subsPreviousCrefs,0}};
#define boxvar_NFStateMachineFlatten_subsPreviousCrefs MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsPreviousCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsActiveStateHelper(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsActiveStateHelper,2,0) {(void*) boxptr_NFStateMachineFlatten_subsActiveStateHelper,0}};
#define boxvar_NFStateMachineFlatten_subsActiveStateHelper MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsActiveStateHelper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsActiveStateInExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsActiveStateInExp,2,0) {(void*) boxptr_NFStateMachineFlatten_subsActiveStateInExp,0}};
#define boxvar_NFStateMachineFlatten_subsActiveStateInExp MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsActiveStateInExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsActiveStateInEq(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsActiveStateInEq,2,0) {(void*) boxptr_NFStateMachineFlatten_subsActiveStateInEq,0}};
#define boxvar_NFStateMachineFlatten_subsActiveStateInEq MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsActiveStateInEq)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createResetEquation(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _lhsTy, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createResetEquation,2,0) {(void*) boxptr_NFStateMachineFlatten_createResetEquation,0}};
#define boxvar_NFStateMachineFlatten_createResetEquation MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createResetEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_wrapInStateActivationConditional(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _stateCref, modelica_boolean _isResetEquation);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_wrapInStateActivationConditional(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _stateCref, modelica_metatype _isResetEquation);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_wrapInStateActivationConditional,2,0) {(void*) boxptr_NFStateMachineFlatten_wrapInStateActivationConditional,0}};
#define boxvar_NFStateMachineFlatten_wrapInStateActivationConditional MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_wrapInStateActivationConditional)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createTimeInStateIndicator(threadData_t *threadData, modelica_metatype _stateRef, modelica_metatype _stateActiveRef, modelica_metatype _timeEnteredVar, modelica_metatype *out_timeInEq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createTimeInStateIndicator,2,0) {(void*) boxptr_NFStateMachineFlatten_createTimeInStateIndicator,0}};
#define boxvar_NFStateMachineFlatten_createTimeInStateIndicator MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createTimeInStateIndicator)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createTimeEnteredStateIndicator(threadData_t *threadData, modelica_metatype _stateRef, modelica_metatype _stateActiveRef, modelica_metatype *out_timeEnteredEq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createTimeEnteredStateIndicator,2,0) {(void*) boxptr_NFStateMachineFlatten_createTimeEnteredStateIndicator,0}};
#define boxvar_NFStateMachineFlatten_createTimeEnteredStateIndicator MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createTimeEnteredStateIndicator)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createTicksInStateIndicator(threadData_t *threadData, modelica_metatype _stateRef, modelica_metatype _stateActiveRef, modelica_metatype *out_ticksEq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createTicksInStateIndicator,2,0) {(void*) boxptr_NFStateMachineFlatten_createTicksInStateIndicator,0}};
#define boxvar_NFStateMachineFlatten_createTicksInStateIndicator MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createTicksInStateIndicator)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createActiveIndicator(threadData_t *threadData, modelica_metatype _stateRef, modelica_metatype _preRef, modelica_integer _i, modelica_metatype *out_eqn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_createActiveIndicator(threadData_t *threadData, modelica_metatype _stateRef, modelica_metatype _preRef, modelica_metatype _i, modelica_metatype *out_eqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createActiveIndicator,2,0) {(void*) boxptr_NFStateMachineFlatten_createActiveIndicator,0}};
#define boxvar_NFStateMachineFlatten_createActiveIndicator MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_createActiveIndicator)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_smeqsSubsXInState(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _initStateComp, modelica_integer _i, modelica_integer _nTransitions, modelica_metatype _substExp, modelica_string _xInState);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_smeqsSubsXInState(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _initStateComp, modelica_metatype _i, modelica_metatype _nTransitions, modelica_metatype _substExp, modelica_metatype _xInState);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_smeqsSubsXInState,2,0) {(void*) boxptr_NFStateMachineFlatten_smeqsSubsXInState,0}};
#define boxvar_NFStateMachineFlatten_smeqsSubsXInState MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_smeqsSubsXInState)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsXInStateHelper(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_string _funcName, modelica_metatype _substExp, modelica_boolean __omcQ_24in_5Ffound, modelica_boolean *out_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_subsXInStateHelper(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _funcName, modelica_metatype _substExp, modelica_metatype __omcQ_24in_5Ffound, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsXInStateHelper,2,0) {(void*) boxptr_NFStateMachineFlatten_subsXInStateHelper,0}};
#define boxvar_NFStateMachineFlatten_subsXInStateHelper MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsXInStateHelper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsXInState(threadData_t *threadData, modelica_metatype _inExp, modelica_string _funcName, modelica_metatype _substExp, modelica_boolean *out_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_subsXInState(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _funcName, modelica_metatype _substExp, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsXInState,2,0) {(void*) boxptr_NFStateMachineFlatten_subsXInState,0}};
#define boxvar_NFStateMachineFlatten_subsXInState MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_subsXInState)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_elabXInStateOps(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsem, modelica_metatype _enclosingStateCrefOpt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_elabXInStateOps,2,0) {(void*) boxptr_NFStateMachineFlatten_elabXInStateOps,0}};
#define boxvar_NFStateMachineFlatten_elabXInStateOps MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_elabXInStateOps)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_addPropagationEquations(threadData_t *threadData, modelica_metatype _inSem, modelica_metatype _enclosingStateCrefOpt, modelica_metatype _enclosingSmSemOpt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_addPropagationEquations,2,0) {(void*) boxptr_NFStateMachineFlatten_addPropagationEquations,0}};
#define boxvar_NFStateMachineFlatten_addPropagationEquations MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_addPropagationEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_basicFlatSmSemantics(threadData_t *threadData, modelica_metatype _initStateCref, modelica_metatype _stateCrefs, modelica_metatype _transitionEqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_basicFlatSmSemantics,2,0) {(void*) boxptr_NFStateMachineFlatten_basicFlatSmSemantics,0}};
#define boxvar_NFStateMachineFlatten_basicFlatSmSemantics MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_basicFlatSmSemantics)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_getDefaultStart(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_getDefaultStart,2,0) {(void*) boxptr_NFStateMachineFlatten_getDefaultStart,0}};
#define boxvar_NFStateMachineFlatten_getDefaultStart MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_getDefaultStart)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isPreviousOfCref(threadData_t *threadData, modelica_metatype _e, modelica_metatype _varCref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isPreviousOfCref(threadData_t *threadData, modelica_metatype _e, modelica_metatype _varCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isPreviousOfCref,2,0) {(void*) boxptr_NFStateMachineFlatten_isPreviousOfCref,0}};
#define boxvar_NFStateMachineFlatten_isPreviousOfCref MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isPreviousOfCref)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_equationHasPrevious(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _varCref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_equationHasPrevious(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _varCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_equationHasPrevious,2,0) {(void*) boxptr_NFStateMachineFlatten_equationHasPrevious,0}};
#define boxvar_NFStateMachineFlatten_equationHasPrevious MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_equationHasPrevious)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_addStateActivationAndReset1(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype _outerVarMap, modelica_metatype *out_accVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_addStateActivationAndReset1,2,0) {(void*) boxptr_NFStateMachineFlatten_addStateActivationAndReset1,0}};
#define boxvar_NFStateMachineFlatten_addStateActivationAndReset1 MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_addStateActivationAndReset1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_transformWhenBranches(threadData_t *threadData, modelica_metatype _whenEq, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart, modelica_metatype _outerVarMap, modelica_metatype *out_extraVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_transformWhenBranches,2,0) {(void*) boxptr_NFStateMachineFlatten_transformWhenBranches,0}};
#define boxvar_NFStateMachineFlatten_transformWhenBranches MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_transformWhenBranches)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_transformWhenInnerAsPlain(threadData_t *threadData, modelica_metatype _whenEq, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart, modelica_metatype _outerVarMap, modelica_metatype *out_outVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_transformWhenInnerAsPlain,2,0) {(void*) boxptr_NFStateMachineFlatten_transformWhenInnerAsPlain,0}};
#define boxvar_NFStateMachineFlatten_transformWhenInnerAsPlain MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_transformWhenInnerAsPlain)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_transformWhenBranchesAndAccumulate(threadData_t *threadData, modelica_metatype _whenEq, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart, modelica_metatype _outerVarMap, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype *out_accVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_transformWhenBranchesAndAccumulate,2,0) {(void*) boxptr_NFStateMachineFlatten_transformWhenBranchesAndAccumulate,0}};
#define boxvar_NFStateMachineFlatten_transformWhenBranchesAndAccumulate MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_transformWhenBranchesAndAccumulate)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_addStateActivationAndReset(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype _outerVarMap, modelica_metatype *out_accVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_addStateActivationAndReset,2,0) {(void*) boxptr_NFStateMachineFlatten_addStateActivationAndReset,0}};
#define boxvar_NFStateMachineFlatten_addStateActivationAndReset MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_addStateActivationAndReset)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isSimpleVarNamed(threadData_t *threadData, modelica_metatype _v, modelica_string _name);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isSimpleVarNamed(threadData_t *threadData, modelica_metatype _v, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isSimpleVarNamed,2,0) {(void*) boxptr_NFStateMachineFlatten_isSimpleVarNamed,0}};
#define boxvar_NFStateMachineFlatten_isSimpleVarNamed MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_isSimpleVarNamed)
PROTECTED_FUNCTION_STATIC void omc_NFStateMachineFlatten_addHierarchicalPassThroughs(threadData_t *threadData, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _allVariables, modelica_metatype _outerVarMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_addHierarchicalPassThroughs,2,0) {(void*) boxptr_NFStateMachineFlatten_addHierarchicalPassThroughs,0}};
#define boxvar_NFStateMachineFlatten_addHierarchicalPassThroughs MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_addHierarchicalPassThroughs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_smCompToDataFlow(threadData_t *threadData, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _allEquations, modelica_metatype _allVariables, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype _outerVarMap, modelica_metatype *out_accVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_smCompToDataFlow,2,0) {(void*) boxptr_NFStateMachineFlatten_smCompToDataFlow,0}};
#define boxvar_NFStateMachineFlatten_smCompToDataFlow MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_smCompToDataFlow)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_qualifyOuterVarCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype _parentPrefix, modelica_metatype _varCrefStrings);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_qualifyOuterVarCref,2,0) {(void*) boxptr_NFStateMachineFlatten_qualifyOuterVarCref,0}};
#define boxvar_NFStateMachineFlatten_qualifyOuterVarCref MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_qualifyOuterVarCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_qualifyOuterVarExpr(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype _parentPrefix, modelica_metatype _varCrefStrings);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_qualifyOuterVarExpr,2,0) {(void*) boxptr_NFStateMachineFlatten_qualifyOuterVarExpr,0}};
#define boxvar_NFStateMachineFlatten_qualifyOuterVarExpr MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_qualifyOuterVarExpr)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_flatSmToDataFlow(threadData_t *threadData, modelica_metatype _initStateCref, modelica_metatype _stateCrefs, modelica_metatype _allEquations, modelica_metatype _allVariables, modelica_metatype _enclosingStateCrefOpt, modelica_metatype _enclosingSmSemOpt, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype _outerVarMap, modelica_metatype *out_accVars, modelica_metatype *out_outSem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_flatSmToDataFlow,2,0) {(void*) boxptr_NFStateMachineFlatten_flatSmToDataFlow,0}};
#define boxvar_NFStateMachineFlatten_flatSmToDataFlow MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_flatSmToDataFlow)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_smGroupDepthLt(threadData_t *threadData, modelica_metatype _g1, modelica_metatype _g2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_smGroupDepthLt(threadData_t *threadData, modelica_metatype _g1, modelica_metatype _g2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_smGroupDepthLt,2,0) {(void*) boxptr_NFStateMachineFlatten_smGroupDepthLt,0}};
#define boxvar_NFStateMachineFlatten_smGroupDepthLt MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_smGroupDepthLt)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_statePriorityGt(threadData_t *threadData, modelica_metatype _cr1, modelica_metatype _cr2, modelica_metatype _initCref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_statePriorityGt(threadData_t *threadData, modelica_metatype _cr1, modelica_metatype _cr2, modelica_metatype _initCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_statePriorityGt,2,0) {(void*) boxptr_NFStateMachineFlatten_statePriorityGt,0}};
#define boxvar_NFStateMachineFlatten_statePriorityGt MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_statePriorityGt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_collectReachableStates(threadData_t *threadData, modelica_metatype _initCref, modelica_metatype _froms, modelica_metatype _tos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_collectReachableStates,2,0) {(void*) boxptr_NFStateMachineFlatten_collectReachableStates,0}};
#define boxvar_NFStateMachineFlatten_collectReachableStates MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_collectReachableStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_groupStateMachines(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype *out_smGroups);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_groupStateMachines,2,0) {(void*) boxptr_NFStateMachineFlatten_groupStateMachines,0}};
#define boxvar_NFStateMachineFlatten_groupStateMachines MMC_REFSTRUCTLIT(boxvar_lit_NFStateMachineFlatten_groupStateMachines)

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_crefHasPrefix(threadData_t *threadData, modelica_metatype _prefix, modelica_metatype _cref)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
  if(omc_NFComponentRef_isEqual(threadData, _prefix, _cref))
  {
    _res = 1 /* true */;
  }
  else
  {
    if(omc_NFComponentRef_isEmpty(threadData, _cref))
    {
      _res = 0 /* false */;
    }
    else
    {
      /* Tail recursive call */
      _cref = omc_NFComponentRef_rest(threadData, _cref);
      goto _tailrecursive;
      /* TODO: Make sure any eventual dead code below is never generated */
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_crefHasPrefix(threadData_t *threadData, modelica_metatype _prefix, modelica_metatype _cref)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStateMachineFlatten_crefHasPrefix(threadData, _prefix, _cref);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_getStartValue(threadData_t *threadData, modelica_metatype _var)
{
  modelica_metatype _startExp = NULL;
  modelica_string _attrName = NULL;
  modelica_metatype _attrBinding = NULL;
  modelica_metatype _startOpt = NULL;
  modelica_metatype _ty = NULL;
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
  // _startExp has no default value.
  // _attrName has no default value.
  // _attrBinding has no default value.
  // _startOpt has no default value.
  // _ty has no default value.
  {
    modelica_metatype _attr;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _attr = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _attr;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _attrName = tmpMeta3;
      _attrBinding = tmpMeta4;

      if((stringEqual(_attrName, _OMC_LIT0)))
      {
        _startOpt = omc_NFBinding_typedExp(threadData, _attrBinding);

        if(isSome(_startOpt))
        {
          /* Pattern-matching assignment */
          tmpMeta5 = _startOpt;
          if (optionNone(tmpMeta5)) MMC_THROW_INTERNAL();
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          _startExp = tmpMeta6;

          goto _return;
        }
      }
    }
  }

  _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3)));

  { /* match expression */
    modelica_metatype tmp11_1;
    tmp11_1 = _ty;
    {
      int tmp11;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp11_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta8 = _OMC_LIT1;
          goto tmp10_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta8 = _OMC_LIT3;
          goto tmp10_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta8 = _OMC_LIT4;
          goto tmp10_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta8 = _OMC_LIT6;
          goto tmp10_done;
        }
        default:
        tmp10_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta8 = _OMC_LIT1;
          goto tmp10_done;
        }
        }
        goto tmp10_end;
        tmp10_end: ;
      }
      goto goto_9;
      goto_9:;
      MMC_THROW_INTERNAL();
      goto tmp10_done;
      tmp10_done:;
    }
  }
  _startExp = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _startExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeRelationGt(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2, modelica_metatype _ty)
{
  modelica_metatype _result = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  tmpMeta1 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _exp1, omc_NFOperator_makeGreater(threadData, _ty), _exp2, mmc_mk_integer(((modelica_integer) 0)));
  _result = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _result;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeRelationEq(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2, modelica_metatype _ty)
{
  modelica_metatype _result = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  tmpMeta1 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _exp1, omc_NFOperator_makeEqual(threadData, _ty), _exp2, mmc_mk_integer(((modelica_integer) 0)));
  _result = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _result;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeSampleTimeCall(threadData_t *threadData)
{
  modelica_metatype _result = NULL;
  modelica_metatype _timeExp = NULL;
  modelica_metatype _clockExp = NULL;
  modelica_metatype _ty = NULL;
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
  // _result has no default value.
  // _timeExp has no default value.
  // _clockExp has no default value.
  // _ty has no default value.
  _ty = _OMC_LIT7;

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box3(9, &NFExpression_CREF__desc, _ty, omc_NFComponentRef_prefixCref(threadData, _OMC_LIT9, _ty, tmpMeta1, _OMC_LIT10));
  _timeExp = tmpMeta2;

  tmpMeta3 = mmc_mk_box2(3, &NFClockKind_INFERRED__CLOCK__desc, mmc_mk_integer(omc_System_tmpTickIndex(threadData, ((modelica_integer) 31))));
  tmpMeta4 = mmc_mk_box2(8, &NFExpression_CLKCONST__desc, tmpMeta3);
  _clockExp = tmpMeta4;

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta10 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT12, _OMC_LIT13, _OMC_LIT30, _OMC_LIT31, tmpMeta5, mmc_mk_none(), tmpMeta6, _OMC_LIT7, _OMC_LIT35, tmpMeta7, tmpMeta8, listArray(tmpMeta9), _OMC_LIT36, _OMC_LIT37);
  tmpMeta11 = mmc_mk_cons(_timeExp, mmc_mk_cons(_clockExp, MMC_REFSTRUCTLIT(mmc_nil)));
  tmpMeta12 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta10, tmpMeta11, 7, 2, _ty));
  _result = tmpMeta12;
  _return: OMC_LABEL_UNUSED
  return _result;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeMaxIntArrCall(threadData_t *threadData, modelica_metatype _exps)
{
  modelica_metatype _result = NULL;
  modelica_metatype _arrTy = NULL;
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
  // _result has no default value.
  // _arrTy has no default value.
  tmpMeta2 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(listLength(_exps)), mmc_mk_integer(2));
  tmpMeta1 = mmc_mk_cons(tmpMeta2, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta3 = mmc_mk_box3(10, &NFType_ARRAY__desc, _OMC_LIT38, tmpMeta1);
  _arrTy = tmpMeta3;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta9 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT40, _OMC_LIT13, _OMC_LIT45, _OMC_LIT45, tmpMeta4, mmc_mk_none(), tmpMeta5, _OMC_LIT38, _OMC_LIT46, tmpMeta6, tmpMeta7, listArray(tmpMeta8), _OMC_LIT36, _OMC_LIT37);
  tmpMeta11 = mmc_mk_box4(11, &NFExpression_ARRAY__desc, _arrTy, listArray(_exps), mmc_mk_boolean(1 /* true */));
  tmpMeta10 = mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta12 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta9, tmpMeta10, 5, 1, _OMC_LIT38));
  _result = tmpMeta12;
  _return: OMC_LABEL_UNUSED
  return _result;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeInitialCall(threadData_t *threadData)
{
  modelica_metatype _result = NULL;
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
  // _result has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta8 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT48, _OMC_LIT13, tmpMeta1, tmpMeta2, tmpMeta3, mmc_mk_none(), tmpMeta4, _OMC_LIT49, _OMC_LIT35, tmpMeta5, tmpMeta6, listArray(tmpMeta7), _OMC_LIT36, _OMC_LIT37);
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta10 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta8, tmpMeta9, 5, 2, _OMC_LIT49));
  _result = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _result;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makePreviousCall(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty)
{
  modelica_metatype _result = NULL;
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
  // _result has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta8 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT51, _OMC_LIT13, tmpMeta1, tmpMeta2, tmpMeta3, mmc_mk_none(), tmpMeta4, _OMC_LIT52, _OMC_LIT35, tmpMeta5, tmpMeta6, listArray(tmpMeta7), _OMC_LIT36, _OMC_LIT37);
  tmpMeta9 = mmc_mk_cons(_exp, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta10 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta8, tmpMeta9, 5, 2, _ty));
  _result = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _result;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeIfExp(threadData_t *threadData, modelica_metatype _cond, modelica_metatype _thenExp, modelica_metatype _elseExp, modelica_metatype _ty)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  tmpMeta1 = mmc_mk_box5(25, &NFExpression_IF__desc, _ty, _cond, _thenExp, _elseExp);
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeCrefExp(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _ty)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  tmpMeta1 = mmc_mk_box3(9, &NFExpression_CREF__desc, _ty, _cref);
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeEq(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _ty)
{
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eq has no default value.
  tmpMeta1 = mmc_mk_box7(3, &NFEquation_EQUALITY__desc, _lhs, _rhs, _ty, _OMC_LIT13, _OMC_LIT54, mmc_mk_integer(3));
  _eq = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeVarWithBinding(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_integer _var, modelica_metatype _bindExp)
{
  modelica_metatype _v = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  _v = omc_NFStateMachineFlatten_makeVar(threadData, _name, _ty, (modelica_integer)_var);

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_v), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = omc_NFBinding_makeFlat(threadData, _bindExp, (modelica_integer)_var, 4, ((modelica_integer) 99999));
  _v = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _v;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_makeVarWithBinding(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_metatype _var, modelica_metatype _bindExp)
{
  modelica_integer tmp1;
  modelica_metatype _v = NULL;
  tmp1 = mmc_unbox_integer(_var);
  _v = omc_NFStateMachineFlatten_makeVarWithBinding(threadData, _name, _ty, tmp1, _bindExp);
  /* skip box _v; NFVariable */
  return _v;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeVarWithStart(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_integer _var, modelica_metatype _startExp)
{
  modelica_metatype _v = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  _v = omc_NFStateMachineFlatten_makeVar(threadData, _name, _ty, (modelica_integer)_var);

  tmpMeta3 = mmc_mk_box2(0, _OMC_LIT0, omc_NFBinding_makeFlat(threadData, _startExp, 1, 4, ((modelica_integer) 99999)));
  tmpMeta4 = mmc_mk_box2(0, _OMC_LIT55, omc_NFBinding_makeFlat(threadData, _OMC_LIT56, 1, 4, ((modelica_integer) 99999)));
  tmpMeta2 = mmc_mk_cons(tmpMeta3, mmc_mk_cons(tmpMeta4, MMC_REFSTRUCTLIT(mmc_nil)));
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_v), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[7] = tmpMeta2;
  _v = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _v;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_makeVarWithStart(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_metatype _var, modelica_metatype _startExp)
{
  modelica_integer tmp1;
  modelica_metatype _v = NULL;
  tmp1 = mmc_unbox_integer(_var);
  _v = omc_NFStateMachineFlatten_makeVarWithStart(threadData, _name, _ty, tmp1, _startExp);
  /* skip box _v; NFVariable */
  return _v;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeVar(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_integer _var)
{
  modelica_metatype _v = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  // _attr has no default value.
  _attr = _OMC_LIT17;

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_attr), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = mmc_mk_integer((modelica_integer)_var);
  _attr = tmpMeta1;

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = mmc_mk_box11(3, &NFVariable_VARIABLE__desc, _name, _ty, _OMC_LIT15, mmc_mk_integer(1), _attr, tmpMeta2, tmpMeta3, _OMC_LIT18, _OMC_LIT19, _OMC_LIT60);
  _v = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _v;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_makeVar(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_metatype _var)
{
  modelica_integer tmp1;
  modelica_metatype _v = NULL;
  tmp1 = mmc_unbox_integer(_var);
  _v = omc_NFStateMachineFlatten_makeVar(threadData, _name, _ty, tmp1);
  /* skip box _v; NFVariable */
  return _v;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_makeSMSPrefix(threadData_t *threadData, modelica_metatype _initStateCref)
{
  modelica_metatype _preRef = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _preRef has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _preRef = omc_NFComponentRef_fromNode(threadData, _OMC_LIT62, _OMC_LIT52, tmpMeta1, 1);

  _preRef = omc_NFComponentRef_append(threadData, _initStateCref, _preRef);
  _return: OMC_LABEL_UNUSED
  return _preRef;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_qCref(threadData_t *threadData, modelica_string _name, modelica_metatype _ty, modelica_metatype _subs, modelica_metatype _prefixCr)
{
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cref has no default value.
  tmpMeta1 = mmc_mk_box2(7, &NFInstNode_InstNode_NAME__NODE__desc, _name);
  _cref = omc_NFComponentRef_fromNode(threadData, tmpMeta1, _ty, _subs, 1);

  _cref = omc_NFComponentRef_prepend(threadData, _prefixCr, _cref);
  _return: OMC_LABEL_UNUSED
  return _cref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_generateMergeEquation(threadData_t *threadData, modelica_metatype _outerVarCref, modelica_metatype _outerVarMap, modelica_metatype _allVariables, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype *out_accVars)
{
  modelica_metatype _accEqs = NULL;
  modelica_metatype _accVars = NULL;
  modelica_metatype _stateEntries = NULL;
  modelica_metatype _mergeRhs = NULL;
  modelica_metatype _outerVarExp = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _activeRef = NULL;
  modelica_metatype _perStateVarRef = NULL;
  modelica_metatype _src = NULL;
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
  _accEqs = __omcQ_24in_5FaccEqs;
  _accVars = __omcQ_24in_5FaccVars;
  // _stateEntries has no default value.
  // _mergeRhs has no default value.
  // _outerVarExp has no default value.
  // _ty has no default value.
  // _activeRef has no default value.
  // _perStateVarRef has no default value.
  // _src has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _stateEntries = omc_UnorderedMap_getOrDefault(threadData, _outerVarCref, _outerVarMap, tmpMeta1);

  if(listEmpty(_stateEntries))
  {
    goto _return;
  }

  _ty = _OMC_LIT38;

  {
    modelica_metatype _v;
    for (tmpMeta2 = _allVariables; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      if(omc_NFComponentRef_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2))), _outerVarCref))
      {
        _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 3)));

        break;
      }
    }
  }

  _outerVarExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, _outerVarCref, _ty);

  _mergeRhs = omc_NFStateMachineFlatten_makePreviousCall(threadData, _outerVarExp, _ty);

  {
    modelica_metatype _entry;
    for (tmpMeta4 = _stateEntries; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _entry = MMC_CAR(tmpMeta4);
      /* Pattern-matching assignment */
      tmpMeta5 = _entry;
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
      _activeRef = tmpMeta6;
      _perStateVarRef = tmpMeta7;

      _mergeRhs = omc_NFStateMachineFlatten_makeIfExp(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeRef, _OMC_LIT49), omc_NFStateMachineFlatten_makeCrefExp(threadData, _perStateVarRef, _ty), _mergeRhs, _ty);
    }
  }

  _src = omc_ElementSource_createElementSource(threadData, _OMC_LIT19, mmc_mk_none(), _OMC_LIT63, _OMC_LIT66);

  tmpMeta10 = mmc_mk_box7(3, &NFEquation_EQUALITY__desc, _outerVarExp, _mergeRhs, _ty, _OMC_LIT13, _src, mmc_mk_integer(3));
  tmpMeta9 = mmc_mk_cons(tmpMeta10, _accEqs);
  _accEqs = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  if (out_accVars) { *out_accVars = _accVars; }
  return _accEqs;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isOuterStateEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCrefs)
{
  modelica_boolean _res;
  modelica_metatype _eqScope = NULL;
  modelica_string _scopeName = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
  // _eqScope has no default value.
  // _scopeName has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 5));
          
          _eqScope = tmpMeta4;
          /* Pattern matching succeeded */
          _scopeName = omc_NFInstNode_InstNode_name(threadData, _eqScope);

          {
            modelica_metatype _stateCref;
            for (tmpMeta5 = _stateCrefs; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _stateCref = MMC_CAR(tmpMeta5);
              if((stringEqual(_scopeName, omc_NFComponentRef_firstName(threadData, _stateCref, 0 /* false */))))
              {
                _res = 1 /* true */;

                goto _return;
              }
            }
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,3) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          
          _eqScope = tmpMeta7;
          /* Pattern matching succeeded */
          _scopeName = omc_NFInstNode_InstNode_name(threadData, _eqScope);

          {
            modelica_metatype _stateCref;
            for (tmpMeta8 = _stateCrefs; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _stateCref = MMC_CAR(tmpMeta8);
              if((stringEqual(_scopeName, omc_NFComponentRef_firstName(threadData, _stateCref, 0 /* false */))))
              {
                _res = 1 /* true */;

                goto _return;
              }
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
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isOuterStateEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCrefs)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStateMachineFlatten_isOuterStateEquation(threadData, _eq, _stateCrefs);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isVariableOfState(threadData_t *threadData, modelica_metatype _var, modelica_metatype _stateCref)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = omc_NFStateMachineFlatten_crefHasPrefix(threadData, _stateCref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))));
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isVariableOfState(threadData_t *threadData, modelica_metatype _var, modelica_metatype _stateCref)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStateMachineFlatten_isVariableOfState(threadData, _var, _stateCref);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isEquationOfState(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCref)
{
  modelica_boolean _res;
  modelica_metatype _eqScope = NULL;
  modelica_string _stateName = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
  // _eqScope has no default value.
  // _stateName has no default value.
  _stateName = omc_NFComponentRef_firstName(threadData, _stateCref, 0 /* false */);

  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 5));
          
          _eqScope = tmpMeta4;
          /* Pattern matching succeeded */
          _res = (stringEqual(omc_NFInstNode_InstNode_name(threadData, _eqScope), _stateName));
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          
          _eqScope = tmpMeta5;
          /* Pattern matching succeeded */
          _res = (stringEqual(omc_NFInstNode_InstNode_name(threadData, _eqScope), _stateName));
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
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isEquationOfState(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCref)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStateMachineFlatten_isEquationOfState(threadData, _eq, _stateCref);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isInitialStateForGroup(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _initStateCref)
{
  modelica_boolean _res;
  modelica_metatype _cr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
  // _cr has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      modelica_metatype _eqCall = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _eqCall has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,8,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,13,1) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          
          _eqCall = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(omc_NFCall_functionNameLast(threadData, _eqCall), _OMC_LIT67))) goto tmp2_end;
          /* Pattern-matching assignment */
          tmpMeta7 = listHead(omc_NFCall_arguments(threadData, _eqCall));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto goto_1;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          _cr = tmpMeta8;

          _res = omc_NFComponentRef_isEqual(threadData, _cr, _initStateCref);
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
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isInitialStateForGroup(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _initStateCref)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStateMachineFlatten_isInitialStateForGroup(threadData, _eq, _initStateCref);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isTransitionForGroup(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCrefs)
{
  modelica_boolean _res;
  modelica_metatype _cr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
  // _cr has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      modelica_metatype _eqCall = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _eqCall has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,8,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,13,1) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          
          _eqCall = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(omc_NFCall_functionNameLast(threadData, _eqCall), _OMC_LIT68))) goto tmp2_end;
          /* Pattern-matching assignment */
          tmpMeta7 = listHead(omc_NFCall_arguments(threadData, _eqCall));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto goto_1;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          _cr = tmpMeta8;

          {
            modelica_metatype _sc;
            for (tmpMeta9 = _stateCrefs; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _sc = MMC_CAR(tmpMeta9);
              if(omc_NFComponentRef_isEqual(threadData, _cr, _sc))
              {
                _res = 1 /* true */;

                break;
              }
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
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isTransitionForGroup(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCrefs)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStateMachineFlatten_isTransitionForGroup(threadData, _eq, _stateCrefs);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isTransitionOrInitialState(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      modelica_metatype _eqCall = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _eqCall has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,8,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,13,1) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          
          _eqCall = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp10_1;
            tmp10_1 = omc_NFCall_functionNameLast(threadData, _eqCall);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 3; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (10 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT68), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 1: {
                  if (12 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT67), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 2: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = 0 /* false */;
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_1;
              goto tmp9_done;
              tmp9_done:;
            }
          }
          _res = tmp7;
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
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isTransitionOrInitialState(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStateMachineFlatten_isTransitionOrInitialState(threadData, _eq);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_priorityGt(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _gt;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _gt has no default value.
  _gt = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_t1), 8)))) > mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_t2), 8)))));
  _return: OMC_LABEL_UNUSED
  return _gt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_priorityGt(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _gt;
  modelica_metatype out_gt;
  _gt = omc_NFStateMachineFlatten_priorityGt(threadData, _t1, _t2);
  out_gt = mmc_mk_icon(_gt);
  return out_gt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_extractTransition(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _stateCrefs)
{
  modelica_metatype _trans = NULL;
  modelica_metatype _crFrom = NULL;
  modelica_metatype _crTo = NULL;
  modelica_metatype _cond = NULL;
  modelica_boolean _imm;
  modelica_boolean _rst;
  modelica_boolean _syn;
  modelica_integer _prio;
  modelica_integer _from;
  modelica_integer _to;
  modelica_metatype _args = NULL;
  modelica_metatype _eqCall = NULL;
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
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
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
  // _trans has no default value.
  // _crFrom has no default value.
  // _crTo has no default value.
  // _cond has no default value.
  _imm = 1 /* true */;
  _rst = 1 /* true */;
  _syn = 0 /* false */;
  _prio = ((modelica_integer) 1);
  // _from has no default value.
  // _to has no default value.
  // _args has no default value.
  // _eqCall has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _eq;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,8,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,13,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  _eqCall = tmpMeta3;

  if((!(stringEqual(omc_NFCall_functionNameLast(threadData, _eqCall), _OMC_LIT68))))
  {
    MMC_THROW_INTERNAL();
  }

  _args = omc_NFCall_arguments(threadData, _eqCall);

  /* Pattern-matching assignment */
  tmpMeta4 = listGet(_args, ((modelica_integer) 1));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,6,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  _crFrom = tmpMeta5;

  /* Pattern-matching assignment */
  tmpMeta6 = listGet(_args, ((modelica_integer) 2));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
  _crTo = tmpMeta7;

  _cond = listGet(_args, ((modelica_integer) 3));

  if((listLength(_args) >= ((modelica_integer) 4)))
  {
    /* Pattern-matching assignment */
    tmpMeta8 = listGet(_args, ((modelica_integer) 4));
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,3,1) == 0) MMC_THROW_INTERNAL();
    tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
    tmp10 = mmc_unbox_integer(tmpMeta9);
    _imm = tmp10  /* pattern as ty=Boolean */;
  }

  if((listLength(_args) >= ((modelica_integer) 5)))
  {
    /* Pattern-matching assignment */
    tmpMeta11 = listGet(_args, ((modelica_integer) 5));
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,1) == 0) MMC_THROW_INTERNAL();
    tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
    tmp13 = mmc_unbox_integer(tmpMeta12);
    _rst = tmp13  /* pattern as ty=Boolean */;
  }

  if((listLength(_args) >= ((modelica_integer) 6)))
  {
    /* Pattern-matching assignment */
    tmpMeta14 = listGet(_args, ((modelica_integer) 6));
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,3,1) == 0) MMC_THROW_INTERNAL();
    tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
    tmp16 = mmc_unbox_integer(tmpMeta15);
    _syn = tmp16  /* pattern as ty=Boolean */;
  }

  if((listLength(_args) >= ((modelica_integer) 7)))
  {
    /* Pattern-matching assignment */
    tmpMeta17 = listGet(_args, ((modelica_integer) 7));
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,1) == 0) MMC_THROW_INTERNAL();
    tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
    tmp19 = mmc_unbox_integer(tmpMeta18);
    _prio = tmp19  /* pattern as ty=Integer */;
  }

  _from = ((modelica_integer) 1);

  {
    modelica_metatype _sc;
    for (tmpMeta20 = _stateCrefs; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
    {
      _sc = MMC_CAR(tmpMeta20);
      if(omc_NFComponentRef_isEqual(threadData, _sc, _crFrom))
      {
        break;
      }

      _from = ((modelica_integer) 1) + _from;
    }
  }

  _to = ((modelica_integer) 1);

  {
    modelica_metatype _sc;
    for (tmpMeta22 = _stateCrefs; !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
    {
      _sc = MMC_CAR(tmpMeta22);
      if(omc_NFComponentRef_isEqual(threadData, _sc, _crTo))
      {
        break;
      }

      _to = ((modelica_integer) 1) + _to;
    }
  }

  tmpMeta24 = mmc_mk_box8(3, &NFStateMachineFlatten_Transition_TRANSITION__desc, mmc_mk_integer(_from), mmc_mk_integer(_to), _cond, mmc_mk_boolean(_imm), mmc_mk_boolean(_rst), mmc_mk_boolean(_syn), mmc_mk_integer(_prio));
  _trans = tmpMeta24;
  _return: OMC_LABEL_UNUSED
  return _trans;
}

static modelica_metatype closure0_NFStateMachineFlatten_extractTransition(threadData_t *thData, modelica_metatype closure, modelica_metatype eq)
{
  modelica_metatype stateCrefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_extractTransition(thData, eq, stateCrefs);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createTandC(threadData_t *threadData, modelica_metatype _stateCrefs, modelica_metatype _transitionEqs, modelica_metatype *out_c)
{
  modelica_metatype _t = NULL;
  modelica_metatype _c = NULL;
  modelica_metatype _transitions = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _t has no default value.
  // _c has no default value.
  // _transitions has no default value.
  tmpMeta1 = mmc_mk_box1(0, _stateCrefs);
  _transitions = omc_List_filterMap(threadData, _transitionEqs, (modelica_fnptr) mmc_mk_box2(0,closure0_NFStateMachineFlatten_extractTransition,tmpMeta1));

  _t = omc_List_sort(threadData, _transitions, boxvar_NFStateMachineFlatten_priorityGt);

  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar0;
    modelica_integer tmp5;
    modelica_metatype _tr_loopVar = 0;
    modelica_metatype _tr;
    _tr_loopVar = _t;
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar1;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_tr_loopVar)) {
        _tr = MMC_CAR(_tr_loopVar);
        _tr_loopVar = MMC_CDR(_tr_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar0 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tr), 4)));
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar0,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar1;
  }
  _c = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  if (out_c) { *out_c = _c; }
  return _t;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsPreviousCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _stateVarCrefs, modelica_boolean __omcQ_24in_5Ffound, modelica_boolean *out_found)
{
  modelica_metatype _exp = NULL;
  modelica_boolean _found;
  modelica_metatype _args = NULL;
  modelica_metatype _arg1 = NULL;
  modelica_metatype _argTy = NULL;
  modelica_metatype _argCref = NULL;
  modelica_metatype _expCall = NULL;
  modelica_metatype _newExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _found = __omcQ_24in_5Ffound;
  // _args has no default value.
  // _arg1 has no default value.
  // _argTy has no default value.
  // _argCref has no default value.
  // _expCall has no default value.
  // _newExp has no default value.
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
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _exp;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,13,1) == 0) goto goto_1;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          _expCall = tmpMeta6;

          if((!(stringEqual(omc_NFCall_functionNameLast(threadData, _expCall), _OMC_LIT50))))
          {
            goto goto_1;
          }

          _args = omc_NFCall_arguments(threadData, _expCall);

          if((listLength(_args) != ((modelica_integer) 1)))
          {
            goto goto_1;
          }

          _arg1 = listHead(_args);

          /* Pattern-matching assignment */
          tmpMeta7 = _arg1;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto goto_1;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          _argTy = tmpMeta8;
          _argCref = tmpMeta9;

          {
            modelica_metatype _svc;
            for (tmpMeta10 = _stateVarCrefs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _svc = MMC_CAR(tmpMeta10);
              if(omc_NFComponentRef_isEqual(threadData, _svc, _argCref))
              {
                tmpMeta11 = stringAppend(omc_NFComponentRef_firstName(threadData, _argCref, 0 /* false */),_OMC_LIT69);
                tmpMeta12 = mmc_mk_box2(7, &NFInstNode_InstNode_NAME__NODE__desc, tmpMeta11);
                tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
                _newExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFComponentRef_prefixCref(threadData, tmpMeta12, _argTy, tmpMeta13, omc_NFComponentRef_rest(threadData, _argCref)), _argTy);

                _exp = _newExp;

                _found = 1 /* true */;

                break;
              }
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
  if (out_found) { *out_found = _found; }
  return _exp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_subsPreviousCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _stateVarCrefs, modelica_metatype __omcQ_24in_5Ffound, modelica_metatype *out_found)
{
  modelica_integer tmp1;
  modelica_boolean _found;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Ffound);
  _exp = omc_NFStateMachineFlatten_subsPreviousCrefs(threadData, __omcQ_24in_5Fexp, _stateVarCrefs, tmp1, &_found);
  /* skip box _exp; NFExpression */
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsActiveStateHelper(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _expCall = NULL;
  modelica_metatype _argCref = NULL;
  modelica_metatype _newExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _expCall has no default value.
  // _argCref has no default value.
  // _newExp has no default value.
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
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _exp;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,13,1) == 0) goto goto_1;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          _expCall = tmpMeta6;

          if((!(stringEqual(omc_NFCall_functionNameLast(threadData, _expCall), _OMC_LIT70))))
          {
            goto goto_1;
          }

          /* Pattern-matching assignment */
          tmpMeta7 = omc_NFCall_arguments(threadData, _expCall);
          if (listEmpty(tmpMeta7)) goto goto_1;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,2) == 0) goto goto_1;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          if (!listEmpty(tmpMeta9)) goto goto_1;
          _argCref = tmpMeta10;

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _newExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT71, _OMC_LIT49, tmpMeta11, _argCref), _OMC_LIT49);

          _exp = _newExp;
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
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsActiveStateInExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _exp = omc_NFExpression_map(threadData, _exp, boxvar_NFStateMachineFlatten_subsActiveStateHelper);
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsActiveStateInEq(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq)
{
  modelica_metatype _eq = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  _eq = omc_NFEquation_mapExp(threadData, _eq, boxvar_NFStateMachineFlatten_subsActiveStateInExp);
  _return: OMC_LABEL_UNUSED
  return _eq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createResetEquation(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _lhsTy, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart)
{
  modelica_metatype _outEq = NULL;
  modelica_metatype _preRef = NULL;
  modelica_metatype _initStateRef = NULL;
  modelica_metatype _activeExp = NULL;
  modelica_metatype _activeResetExp = NULL;
  modelica_metatype _activeResetStatesExp = NULL;
  modelica_metatype _orExp = NULL;
  modelica_metatype _andExp = NULL;
  modelica_metatype _prevExp = NULL;
  modelica_metatype _startExp = NULL;
  modelica_metatype _ifExp = NULL;
  modelica_metatype _lhsPrevExp = NULL;
  modelica_integer _i;
  modelica_integer _nStates;
  modelica_metatype _tArrayBool = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEq has no default value.
  // _preRef has no default value.
  // _initStateRef has no default value.
  // _activeExp has no default value.
  // _activeResetExp has no default value.
  // _activeResetStatesExp has no default value.
  // _orExp has no default value.
  // _andExp has no default value.
  // _prevExp has no default value.
  // _startExp has no default value.
  // _ifExp has no default value.
  // _lhsPrevExp has no default value.
  // _i has no default value.
  // _nStates has no default value.
  // _tArrayBool has no default value.
  _initStateRef = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 3))), ((modelica_integer) 1));

  _preRef = omc_NFStateMachineFlatten_makeSMSPrefix(threadData, _initStateRef);

  _i = ((modelica_integer) 1);

  {
    modelica_metatype _sc;
    for (tmpMeta1 = arrayList((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 3)))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _sc = MMC_CAR(tmpMeta1);
      if(omc_NFComponentRef_isEqual(threadData, _sc, _stateCref))
      {
        break;
      }

      _i = ((modelica_integer) 1) + _i;
    }
  }

  _nStates = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 3))));

  tmpMeta4 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(_nStates), mmc_mk_integer(2));
  tmpMeta3 = mmc_mk_cons(tmpMeta4, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta5 = mmc_mk_box3(10, &NFType_ARRAY__desc, _OMC_LIT49, tmpMeta3);
  _tArrayBool = tmpMeta5;

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeResetExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT72, _OMC_LIT49, tmpMeta6, _preRef), _OMC_LIT49);

  tmpMeta8 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
  tmpMeta9 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta8);
  tmpMeta7 = mmc_mk_cons(tmpMeta9, MMC_REFSTRUCTLIT(mmc_nil));
  _activeResetStatesExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT73, _tArrayBool, tmpMeta7, _preRef), _OMC_LIT49);

  tmpMeta10 = mmc_mk_box4(21, &NFExpression_LBINARY__desc, _activeResetExp, omc_NFOperator_makeOr(threadData, _OMC_LIT49), _activeResetStatesExp);
  _orExp = tmpMeta10;

  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT71, _OMC_LIT49, tmpMeta11, _stateCref), _OMC_LIT49);

  tmpMeta12 = mmc_mk_box4(21, &NFExpression_LBINARY__desc, _activeExp, omc_NFOperator_makeAnd(threadData, _OMC_LIT49), _orExp);
  _andExp = tmpMeta12;

  _prevExp = omc_NFStateMachineFlatten_makePreviousCall(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _lhsCref, _lhsTy), _lhsTy);

  _startExp = omc_UnorderedMap_getOrDefault(threadData, _lhsCref, _crToStart, _OMC_LIT1);

  _ifExp = omc_NFStateMachineFlatten_makeIfExp(threadData, _andExp, _startExp, _prevExp, _lhsTy);

  tmpMeta13 = stringAppend(omc_NFComponentRef_firstName(threadData, _lhsCref, 0 /* false */),_OMC_LIT69);
  tmpMeta14 = mmc_mk_box2(7, &NFInstNode_InstNode_NAME__NODE__desc, tmpMeta13);
  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
  _lhsPrevExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFComponentRef_prefixCref(threadData, tmpMeta14, _lhsTy, tmpMeta15, omc_NFComponentRef_rest(threadData, _lhsCref)), _lhsTy);

  _outEq = omc_NFStateMachineFlatten_makeEq(threadData, _lhsPrevExp, _ifExp, _lhsTy);
  _return: OMC_LABEL_UNUSED
  return _outEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_wrapInStateActivationConditional(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _stateCref, modelica_boolean _isResetEquation)
{
  modelica_metatype _outEq = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _activeRef = NULL;
  modelica_metatype _expElse = NULL;
  modelica_metatype _lhsCref = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _eqScope = NULL;
  modelica_metatype _eqSource = NULL;
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
  // _outEq has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  // _activeRef has no default value.
  // _expElse has no default value.
  // _lhsCref has no default value.
  // _ty has no default value.
  // _eqScope has no default value.
  // _eqSource has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inEq;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,6) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  _lhs = tmpMeta2;
  _rhs = tmpMeta3;
  _ty = tmpMeta4;
  _eqScope = tmpMeta5;
  _eqSource = tmpMeta6;

  /* Pattern-matching assignment */
  tmpMeta7 = _lhs;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
  _ty = tmpMeta8;
  _lhsCref = tmpMeta9;

  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeRef = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT71, _OMC_LIT49, tmpMeta10, _stateCref), _OMC_LIT49);

  if(_isResetEquation)
  {
    tmpMeta11 = stringAppend(omc_NFComponentRef_firstName(threadData, _lhsCref, 0 /* false */),_OMC_LIT69);
    tmpMeta12 = mmc_mk_box2(7, &NFInstNode_InstNode_NAME__NODE__desc, tmpMeta11);
    tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
    _expElse = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFComponentRef_prefixCref(threadData, tmpMeta12, _ty, tmpMeta13, omc_NFComponentRef_rest(threadData, _lhsCref)), _ty);
  }
  else
  {
    _expElse = omc_NFStateMachineFlatten_makePreviousCall(threadData, _lhs, _ty);
  }

  tmpMeta14 = mmc_mk_box7(3, &NFEquation_EQUALITY__desc, _lhs, omc_NFStateMachineFlatten_makeIfExp(threadData, _activeRef, _rhs, _expElse, _ty), _ty, _eqScope, _eqSource, mmc_mk_integer(3));
  _outEq = tmpMeta14;
  _return: OMC_LABEL_UNUSED
  return _outEq;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_wrapInStateActivationConditional(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _stateCref, modelica_metatype _isResetEquation)
{
  modelica_integer tmp1;
  modelica_metatype _outEq = NULL;
  tmp1 = mmc_unbox_integer(_isResetEquation);
  _outEq = omc_NFStateMachineFlatten_wrapInStateActivationConditional(threadData, _inEq, _stateCref, tmp1);
  /* skip box _outEq; NFEquation */
  return _outEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createTimeInStateIndicator(threadData_t *threadData, modelica_metatype _stateRef, modelica_metatype _stateActiveRef, modelica_metatype _timeEnteredVar, modelica_metatype *out_timeInEq)
{
  modelica_metatype _timeInVar = NULL;
  modelica_metatype _timeInEq = NULL;
  modelica_metatype _timeInRef = NULL;
  modelica_metatype _timeInExp = NULL;
  modelica_metatype _expCond = NULL;
  modelica_metatype _expThen = NULL;
  modelica_metatype _expElse = NULL;
  modelica_metatype _timeEnteredExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _timeInVar has no default value.
  // _timeInEq has no default value.
  // _timeInRef has no default value.
  // _timeInExp has no default value.
  // _expCond has no default value.
  // _expThen has no default value.
  // _expElse has no default value.
  // _timeEnteredExp has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _timeInRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT74, _OMC_LIT7, tmpMeta1, _stateRef);

  _timeInVar = omc_NFStateMachineFlatten_makeVarWithStart(threadData, _timeInRef, _OMC_LIT7, 7, _OMC_LIT3);

  _timeInExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, _timeInRef, _OMC_LIT7);

  _timeEnteredExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_timeEnteredVar), 2))), _OMC_LIT7);

  _expCond = omc_NFStateMachineFlatten_makeCrefExp(threadData, _stateActiveRef, _OMC_LIT49);

  tmpMeta2 = mmc_mk_box4(19, &NFExpression_BINARY__desc, omc_NFStateMachineFlatten_makeSampleTimeCall(threadData), omc_NFOperator_makeSub(threadData, _OMC_LIT7), _timeEnteredExp);
  _expThen = tmpMeta2;

  _expElse = _OMC_LIT3;

  _timeInEq = omc_NFStateMachineFlatten_makeEq(threadData, _timeInExp, omc_NFStateMachineFlatten_makeIfExp(threadData, _expCond, _expThen, _expElse, _OMC_LIT7), _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  if (out_timeInEq) { *out_timeInEq = _timeInEq; }
  return _timeInVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createTimeEnteredStateIndicator(threadData_t *threadData, modelica_metatype _stateRef, modelica_metatype _stateActiveRef, modelica_metatype *out_timeEnteredEq)
{
  modelica_metatype _timeEnteredVar = NULL;
  modelica_metatype _timeEnteredEq = NULL;
  modelica_metatype _timeEnteredRef = NULL;
  modelica_metatype _timeEnteredExp = NULL;
  modelica_metatype _expCond = NULL;
  modelica_metatype _expThen = NULL;
  modelica_metatype _expElse = NULL;
  modelica_metatype _activeExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _timeEnteredVar has no default value.
  // _timeEnteredEq has no default value.
  // _timeEnteredRef has no default value.
  // _timeEnteredExp has no default value.
  // _expCond has no default value.
  // _expThen has no default value.
  // _expElse has no default value.
  // _activeExp has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _timeEnteredRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT75, _OMC_LIT7, tmpMeta1, _stateRef);

  _timeEnteredVar = omc_NFStateMachineFlatten_makeVarWithStart(threadData, _timeEnteredRef, _OMC_LIT7, 7, _OMC_LIT3);

  _timeEnteredExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, _timeEnteredRef, _OMC_LIT7);

  _activeExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, _stateActiveRef, _OMC_LIT49);

  tmpMeta2 = mmc_mk_box4(21, &NFExpression_LBINARY__desc, omc_NFStateMachineFlatten_makeRelationEq(threadData, omc_NFStateMachineFlatten_makePreviousCall(threadData, _activeExp, _OMC_LIT49), _OMC_LIT4, _OMC_LIT49), omc_NFOperator_makeAnd(threadData, _OMC_LIT49), omc_NFStateMachineFlatten_makeRelationEq(threadData, _activeExp, _OMC_LIT56, _OMC_LIT49));
  _expCond = tmpMeta2;

  _expThen = omc_NFStateMachineFlatten_makeSampleTimeCall(threadData);

  _expElse = omc_NFStateMachineFlatten_makePreviousCall(threadData, _timeEnteredExp, _OMC_LIT7);

  _timeEnteredEq = omc_NFStateMachineFlatten_makeEq(threadData, _timeEnteredExp, omc_NFStateMachineFlatten_makeIfExp(threadData, _expCond, _expThen, _expElse, _OMC_LIT7), _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  if (out_timeEnteredEq) { *out_timeEnteredEq = _timeEnteredEq; }
  return _timeEnteredVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createTicksInStateIndicator(threadData_t *threadData, modelica_metatype _stateRef, modelica_metatype _stateActiveRef, modelica_metatype *out_ticksEq)
{
  modelica_metatype _ticksVar = NULL;
  modelica_metatype _ticksEq = NULL;
  modelica_metatype _ticksRef = NULL;
  modelica_metatype _ticksExp = NULL;
  modelica_metatype _expCond = NULL;
  modelica_metatype _expThen = NULL;
  modelica_metatype _expElse = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ticksVar has no default value.
  // _ticksEq has no default value.
  // _ticksRef has no default value.
  // _ticksExp has no default value.
  // _expCond has no default value.
  // _expThen has no default value.
  // _expElse has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _ticksRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT76, _OMC_LIT38, tmpMeta1, _stateRef);

  _ticksVar = omc_NFStateMachineFlatten_makeVarWithStart(threadData, _ticksRef, _OMC_LIT38, 5, _OMC_LIT1);

  _ticksExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, _ticksRef, _OMC_LIT38);

  tmpMeta2 = mmc_mk_box3(22, &NFExpression_LUNARY__desc, omc_NFOperator_makeNot(threadData, _OMC_LIT49), omc_NFStateMachineFlatten_makeCrefExp(threadData, _stateActiveRef, _OMC_LIT49));
  _expCond = tmpMeta2;

  _expThen = _OMC_LIT1;

  tmpMeta3 = mmc_mk_box4(19, &NFExpression_BINARY__desc, omc_NFStateMachineFlatten_makePreviousCall(threadData, _ticksExp, _OMC_LIT38), omc_NFOperator_makeAdd(threadData, _OMC_LIT38), _OMC_LIT77);
  _expElse = tmpMeta3;

  _ticksEq = omc_NFStateMachineFlatten_makeEq(threadData, _ticksExp, omc_NFStateMachineFlatten_makeIfExp(threadData, _expCond, _expThen, _expElse, _OMC_LIT38), _OMC_LIT38);
  _return: OMC_LABEL_UNUSED
  if (out_ticksEq) { *out_ticksEq = _ticksEq; }
  return _ticksVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_createActiveIndicator(threadData_t *threadData, modelica_metatype _stateRef, modelica_metatype _preRef, modelica_integer _i, modelica_metatype *out_eqn)
{
  modelica_metatype _activePlotVar = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _activePlotRef = NULL;
  modelica_metatype _activeRef = NULL;
  modelica_metatype _activeStateRef = NULL;
  modelica_metatype _andExp = NULL;
  modelica_metatype _eqExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _activePlotVar has no default value.
  // _eqn has no default value.
  // _activePlotRef has no default value.
  // _activeRef has no default value.
  // _activeStateRef has no default value.
  // _andExp has no default value.
  // _eqExp has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _activePlotRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT71, _OMC_LIT49, tmpMeta1, _stateRef);

  _activePlotVar = omc_NFStateMachineFlatten_makeVarWithStart(threadData, _activePlotRef, _OMC_LIT49, 5, _OMC_LIT4);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT71, _OMC_LIT49, tmpMeta2, _preRef);

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeStateRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT70, _OMC_LIT38, tmpMeta3, _preRef);

  tmpMeta4 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
  _eqExp = omc_NFStateMachineFlatten_makeRelationEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeStateRef, _OMC_LIT38), tmpMeta4, _OMC_LIT38);

  tmpMeta5 = mmc_mk_box4(21, &NFExpression_LBINARY__desc, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeRef, _OMC_LIT49), omc_NFOperator_makeAnd(threadData, _OMC_LIT49), _eqExp);
  _andExp = tmpMeta5;

  _eqn = omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activePlotRef, _OMC_LIT49), _andExp, _OMC_LIT49);
  _return: OMC_LABEL_UNUSED
  if (out_eqn) { *out_eqn = _eqn; }
  return _activePlotVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_createActiveIndicator(threadData_t *threadData, modelica_metatype _stateRef, modelica_metatype _preRef, modelica_metatype _i, modelica_metatype *out_eqn)
{
  modelica_integer tmp1;
  modelica_metatype _activePlotVar = NULL;
  tmp1 = mmc_unbox_integer(_i);
  _activePlotVar = omc_NFStateMachineFlatten_createActiveIndicator(threadData, _stateRef, _preRef, tmp1, out_eqn);
  /* skip box _activePlotVar; NFVariable */
  /* skip box _eqn; NFEquation */
  return _activePlotVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_smeqsSubsXInState(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _initStateComp, modelica_integer _i, modelica_integer _nTransitions, modelica_metatype _substExp, modelica_string _xInState)
{
  modelica_metatype _outEq = NULL;
  modelica_metatype _preRef = NULL;
  modelica_metatype _lhsRef = NULL;
  modelica_metatype _cRef = NULL;
  modelica_metatype _tArrayBool = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _newRhs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outEq = _eq;
  // _preRef has no default value.
  // _lhsRef has no default value.
  // _cRef has no default value.
  // _tArrayBool has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  // _newRhs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
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
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _preRef = omc_NFStateMachineFlatten_makeSMSPrefix(threadData, _initStateComp);

          tmpMeta7 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(_nTransitions), mmc_mk_integer(2));
          tmpMeta6 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta8 = mmc_mk_box3(10, &NFType_ARRAY__desc, _OMC_LIT49, tmpMeta6);
          _tArrayBool = tmpMeta8;

          tmpMeta10 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
          tmpMeta11 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta10);
          tmpMeta9 = mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil));
          _cRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT78, _tArrayBool, tmpMeta9, _preRef);

          /* Pattern-matching assignment */
          tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,6,2) == 0) goto goto_2;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          _lhsRef = tmpMeta13;

          if(omc_NFComponentRef_isEqual(threadData, _cRef, _lhsRef))
          {
            _newRhs = omc_NFStateMachineFlatten_subsXInState(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _xInState, _substExp, NULL);

            tmpMeta14 = mmc_mk_box7(3, &NFEquation_EQUALITY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _newRhs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), mmc_mk_integer(3));
            _outEq = tmpMeta14;
          }
          tmpMeta1 = _outEq;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _eq;
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
  _outEq = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outEq;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_smeqsSubsXInState(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _initStateComp, modelica_metatype _i, modelica_metatype _nTransitions, modelica_metatype _substExp, modelica_metatype _xInState)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outEq = NULL;
  tmp1 = mmc_unbox_integer(_i);
  tmp2 = mmc_unbox_integer(_nTransitions);
  _outEq = omc_NFStateMachineFlatten_smeqsSubsXInState(threadData, _eq, _initStateComp, tmp1, tmp2, _substExp, _xInState);
  /* skip box _outEq; NFEquation */
  return _outEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsXInStateHelper(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_string _funcName, modelica_metatype _substExp, modelica_boolean __omcQ_24in_5Ffound, modelica_boolean *out_found)
{
  modelica_metatype _exp = NULL;
  modelica_boolean _found;
  modelica_metatype _expCall = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _found = __omcQ_24in_5Ffound;
  // _expCall has no default value.
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
          /* Pattern-matching assignment */
          tmpMeta5 = _exp;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,13,1) == 0) goto goto_1;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          _expCall = tmpMeta6;

          if((!(stringEqual(omc_NFCall_functionNameLast(threadData, _expCall), _funcName))))
          {
            goto goto_1;
          }

          if((!listEmpty(omc_NFCall_arguments(threadData, _expCall))))
          {
            goto goto_1;
          }

          _exp = _substExp;

          _found = 1 /* true */;
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
  if (out_found) { *out_found = _found; }
  return _exp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_subsXInStateHelper(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _funcName, modelica_metatype _substExp, modelica_metatype __omcQ_24in_5Ffound, modelica_metatype *out_found)
{
  modelica_integer tmp1;
  modelica_boolean _found;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Ffound);
  _exp = omc_NFStateMachineFlatten_subsXInStateHelper(threadData, __omcQ_24in_5Fexp, _funcName, _substExp, tmp1, &_found);
  /* skip box _exp; NFExpression */
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  return _exp;
}

static modelica_metatype closure1_NFStateMachineFlatten_subsXInStateHelper(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp, modelica_metatype $in_found, modelica_metatype tmp3)
{
  modelica_string funcName = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype substExp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFStateMachineFlatten_subsXInStateHelper(thData, $in_exp, funcName, substExp, $in_found, tmp3);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_subsXInState(threadData_t *threadData, modelica_metatype _inExp, modelica_string _funcName, modelica_metatype _substExp, modelica_boolean *out_found)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _found;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _found = 0 /* false */;
  /* Pattern-matching tuple assignment */
  tmpMeta4 = mmc_mk_box2(0, _funcName, _substExp);
  tmpMeta5 = omc_NFExpression_mapFold(threadData, _inExp, (modelica_fnptr) mmc_mk_box2(0,closure1_NFStateMachineFlatten_subsXInStateHelper,tmpMeta4), mmc_mk_boolean(0 /* false */), &tmpMeta1);
  _outExp = tmpMeta5;
  tmp2 = mmc_unbox_integer(tmpMeta1);
  _found = tmp2  /* pattern as ty=Boolean */;
  _return: OMC_LABEL_UNUSED
  if (out_found) { *out_found = _found; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_subsXInState(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _funcName, modelica_metatype _substExp, modelica_metatype *out_found)
{
  modelica_boolean _found;
  modelica_metatype _outExp = NULL;
  _outExp = omc_NFStateMachineFlatten_subsXInState(threadData, _inExp, _funcName, _substExp, &_found);
  /* skip box _outExp; NFExpression */
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_elabXInStateOps(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsem, modelica_metatype _enclosingStateCrefOpt)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _sem = NULL;
  modelica_metatype _tElab = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _cElab = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _i;
  modelica_metatype _stateRef = NULL;
  modelica_metatype _substTickExp = NULL;
  modelica_metatype _substTimeExp = NULL;
  modelica_metatype _c3 = NULL;
  modelica_metatype _c4 = NULL;
  modelica_boolean _found;
  modelica_metatype _curT = NULL;
  modelica_integer _curFrom;
  modelica_integer _curTo;
  modelica_integer _curPriority;
  modelica_boolean _curImmediate;
  modelica_boolean _curReset;
  modelica_boolean _curSynchronize;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  _sem = __omcQ_24in_5Fsem;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tElab = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _cElab = tmpMeta2;
  // _i has no default value.
  // _stateRef has no default value.
  // _substTickExp has no default value.
  // _substTimeExp has no default value.
  // _c3 has no default value.
  // _c4 has no default value.
  // _found has no default value.
  // _curT has no default value.
  // _curFrom has no default value.
  // _curTo has no default value.
  // _curPriority has no default value.
  // _curImmediate has no default value.
  // _curReset has no default value.
  // _curSynchronize has no default value.
  _i = ((modelica_integer) 0);

  {
    modelica_metatype _tc;
    for (tmpMeta3 = omc_List_zip(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 5)))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _tc = MMC_CAR(tmpMeta3);
      _i = ((modelica_integer) 1) + _i;

      /* Pattern-matching assignment */
      tmpMeta4 = _tc;
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      _c3 = tmpMeta5;

      _curT = listGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 4))), _i);

      /* Pattern-matching assignment */
      tmpMeta6 = _curT;
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
      tmp8 = mmc_unbox_integer(tmpMeta7);
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
      tmp10 = mmc_unbox_integer(tmpMeta9);
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
      tmp12 = mmc_unbox_integer(tmpMeta11);
      tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
      tmp14 = mmc_unbox_integer(tmpMeta13);
      tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
      tmp16 = mmc_unbox_integer(tmpMeta15);
      tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 8));
      tmp18 = mmc_unbox_integer(tmpMeta17);
      _curFrom = tmp8  /* pattern as ty=Integer */;
      _curTo = tmp10  /* pattern as ty=Integer */;
      _curImmediate = tmp12  /* pattern as ty=Boolean */;
      _curReset = tmp14  /* pattern as ty=Boolean */;
      _curSynchronize = tmp16  /* pattern as ty=Boolean */;
      _curPriority = tmp18  /* pattern as ty=Integer */;

      _stateRef = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 3))), _curFrom);

      tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
      _substTickExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT76, _OMC_LIT38, tmpMeta19, _stateRef), _OMC_LIT38);

      _c4 = omc_NFStateMachineFlatten_subsXInState(threadData, _c3, _OMC_LIT79, _substTickExp ,&_found);

      if((_found && isSome(_enclosingStateCrefOpt)))
      {
        omc_Error_addCompilerError(threadData, _OMC_LIT80);

        MMC_THROW_INTERNAL();
      }

      if(_found)
      {
        {
          modelica_metatype __omcQ_24tmpVar3;
          modelica_metatype* tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype __omcQ_24tmpVar2;
          modelica_integer tmp24;
          modelica_metatype _eq_loopVar = 0;
          modelica_metatype _eq;
          _eq_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 8)));
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar3 = tmpMeta23; /* defaultValue */
          tmp22 = &__omcQ_24tmpVar3;
          while(1) {
            tmp24 = 1;
            if (!listEmpty(_eq_loopVar)) {
              _eq = MMC_CAR(_eq_loopVar);
              _eq_loopVar = MMC_CDR(_eq_loopVar);
              tmp24--;
            }
            if (tmp24 == 0) {
              __omcQ_24tmpVar2 = omc_NFStateMachineFlatten_smeqsSubsXInState(threadData, _eq, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 3))), ((modelica_integer) 1)), _i, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 4)))), _substTickExp, _OMC_LIT79);
              *tmp22 = mmc_mk_cons(__omcQ_24tmpVar2,0);
              tmp22 = &MMC_CDR(*tmp22);
            } else if (tmp24 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp22 = mmc_mk_nil();
          tmpMeta21 = __omcQ_24tmpVar3;
        }
        tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(12));
        memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_sem), 12*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[8] = tmpMeta21;
        _sem = tmpMeta20;
      }

      tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
      _substTimeExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT74, _OMC_LIT7, tmpMeta25, _stateRef), _OMC_LIT7);

      _c4 = omc_NFStateMachineFlatten_subsXInState(threadData, _c4, _OMC_LIT81, _substTimeExp ,&_found);

      if((_found && isSome(_enclosingStateCrefOpt)))
      {
        omc_Error_addCompilerError(threadData, _OMC_LIT82);

        MMC_THROW_INTERNAL();
      }

      if(_found)
      {
        {
          modelica_metatype __omcQ_24tmpVar5;
          modelica_metatype* tmp28;
          modelica_metatype tmpMeta29;
          modelica_metatype __omcQ_24tmpVar4;
          modelica_integer tmp30;
          modelica_metatype _eq_loopVar = 0;
          modelica_metatype _eq;
          _eq_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 8)));
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar5 = tmpMeta29; /* defaultValue */
          tmp28 = &__omcQ_24tmpVar5;
          while(1) {
            tmp30 = 1;
            if (!listEmpty(_eq_loopVar)) {
              _eq = MMC_CAR(_eq_loopVar);
              _eq_loopVar = MMC_CDR(_eq_loopVar);
              tmp30--;
            }
            if (tmp30 == 0) {
              __omcQ_24tmpVar4 = omc_NFStateMachineFlatten_smeqsSubsXInState(threadData, _eq, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 3))), ((modelica_integer) 1)), _i, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 4)))), _substTimeExp, _OMC_LIT81);
              *tmp28 = mmc_mk_cons(__omcQ_24tmpVar4,0);
              tmp28 = &MMC_CDR(*tmp28);
            } else if (tmp30 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp28 = mmc_mk_nil();
          tmpMeta27 = __omcQ_24tmpVar5;
        }
        tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(12));
        memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_sem), 12*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[8] = tmpMeta27;
        _sem = tmpMeta26;
      }

      tmpMeta32 = mmc_mk_box8(3, &NFStateMachineFlatten_Transition_TRANSITION__desc, mmc_mk_integer(_curFrom), mmc_mk_integer(_curTo), _c4, mmc_mk_boolean(_curImmediate), mmc_mk_boolean(_curReset), mmc_mk_boolean(_curSynchronize), mmc_mk_integer(_curPriority));
      tmpMeta31 = mmc_mk_cons(tmpMeta32, _tElab);
      _tElab = tmpMeta31;

      tmpMeta33 = mmc_mk_cons(_c4, _cElab);
      _cElab = tmpMeta33;
    }
  }

  __omcQ_24mrfa_5F0 = listReverse(_tElab);

  __omcQ_24mrfa_5F1 = listReverse(_cElab);

  tmpMeta35 = mmc_mk_box11(3, &NFStateMachineFlatten_FlatSmSemantics_FLAT__SM__SEMANTICS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 3))), __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 10))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sem), 11))));
  _sem = tmpMeta35;
  _return: OMC_LABEL_UNUSED
  return _sem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_addPropagationEquations(threadData_t *threadData, modelica_metatype _inSem, modelica_metatype _enclosingStateCrefOpt, modelica_metatype _enclosingSmSemOpt)
{
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype __omcQ_24mrfa_5F4 = NULL;
  modelica_metatype _outSem = NULL;
  modelica_metatype _preRef = NULL;
  modelica_metatype _initStateRef = NULL;
  modelica_metatype _activeRef = NULL;
  modelica_metatype _resetRef = NULL;
  modelica_metatype _initRef = NULL;
  modelica_metatype _pvars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _peqs = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _nStates;
  modelica_integer _posOfEnclosing;
  modelica_metatype _tArrayBool = NULL;
  modelica_metatype _enclosingStateCref = NULL;
  modelica_metatype _enclosingPreRef = NULL;
  modelica_metatype _enclosingActiveResetStateRef = NULL;
  modelica_metatype _enclosingActiveResetRef = NULL;
  modelica_metatype _enclosingActiveStateRef = NULL;
  modelica_metatype _enclosingInitStateRef = NULL;
  modelica_metatype _enclosingSem = NULL;
  modelica_metatype _enclosingComps = NULL;
  modelica_metatype _stateRef = NULL;
  modelica_metatype _activePlotRef = NULL;
  modelica_metatype _activePlotVar = NULL;
  modelica_metatype _ticksVar = NULL;
  modelica_metatype _timeEnteredVar = NULL;
  modelica_metatype _timeInVar = NULL;
  modelica_metatype _activePlotEq = NULL;
  modelica_metatype _ticksEq = NULL;
  modelica_metatype _timeEnteredEq = NULL;
  modelica_metatype _timeInEq = NULL;
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
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_integer tmp38;
  modelica_integer tmp39;
  modelica_integer tmp40;
  modelica_metatype tmpMeta41;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F2 has no default value.
  // __omcQ_24mrfa_5F3 has no default value.
  // __omcQ_24mrfa_5F4 has no default value.
  _outSem = _inSem;
  // _preRef has no default value.
  // _initStateRef has no default value.
  // _activeRef has no default value.
  // _resetRef has no default value.
  // _initRef has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _pvars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _peqs = tmpMeta2;
  // _nStates has no default value.
  // _posOfEnclosing has no default value.
  // _tArrayBool has no default value.
  // _enclosingStateCref has no default value.
  // _enclosingPreRef has no default value.
  // _enclosingActiveResetStateRef has no default value.
  // _enclosingActiveResetRef has no default value.
  // _enclosingActiveStateRef has no default value.
  // _enclosingInitStateRef has no default value.
  // _enclosingSem has no default value.
  // _enclosingComps has no default value.
  // _stateRef has no default value.
  // _activePlotRef has no default value.
  // _activePlotVar has no default value.
  // _ticksVar has no default value.
  // _timeEnteredVar has no default value.
  // _timeInVar has no default value.
  // _activePlotEq has no default value.
  // _ticksEq has no default value.
  // _timeEnteredEq has no default value.
  // _timeInEq has no default value.
  _initStateRef = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSem), 2)));

  _preRef = omc_NFStateMachineFlatten_makeSMSPrefix(threadData, _initStateRef);

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT71, _OMC_LIT49, tmpMeta3, _preRef);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _resetRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT83, _OMC_LIT49, tmpMeta4, _preRef);

  _nStates = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSem), 3))));

  tmpMeta6 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(_nStates), mmc_mk_integer(2));
  tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta7 = mmc_mk_box3(10, &NFType_ARRAY__desc, _OMC_LIT49, tmpMeta5);
  _tArrayBool = tmpMeta7;

  if(isNone(_enclosingSmSemOpt))
  {
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    _initRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT84, _OMC_LIT49, tmpMeta8, _preRef);

    tmpMeta9 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithStart(threadData, _initRef, _OMC_LIT49, 5, _OMC_LIT56), _pvars);
    _pvars = tmpMeta9;

    tmpMeta10 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _initRef, _OMC_LIT49), _OMC_LIT4, _OMC_LIT49), _peqs);
    _peqs = tmpMeta10;

    tmpMeta11 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _resetRef, _OMC_LIT49), omc_NFStateMachineFlatten_makePreviousCall(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _initRef, _OMC_LIT49), _OMC_LIT49), _OMC_LIT49), _peqs);
    _peqs = tmpMeta11;

    tmpMeta12 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeRef, _OMC_LIT49), _OMC_LIT56, _OMC_LIT49), _peqs);
    _peqs = tmpMeta12;
  }
  else
  {
    /* Pattern-matching assignment */
    tmpMeta13 = _enclosingStateCrefOpt;
    if (optionNone(tmpMeta13)) MMC_THROW_INTERNAL();
    tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
    _enclosingStateCref = tmpMeta14;

    /* Pattern-matching assignment */
    tmpMeta15 = _enclosingSmSemOpt;
    if (optionNone(tmpMeta15)) MMC_THROW_INTERNAL();
    tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
    _enclosingSem = tmpMeta16;

    _enclosingComps = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_enclosingSem), 3)));

    _enclosingInitStateRef = arrayGet(_enclosingComps, ((modelica_integer) 1));

    _enclosingPreRef = omc_NFStateMachineFlatten_makeSMSPrefix(threadData, _enclosingInitStateRef);

    _posOfEnclosing = ((modelica_integer) 1);

    {
      modelica_metatype _sc;
      for (tmpMeta17 = arrayList(_enclosingComps); !listEmpty(tmpMeta17); tmpMeta17=MMC_CDR(tmpMeta17))
      {
        _sc = MMC_CAR(tmpMeta17);
        if(omc_NFComponentRef_isEqual(threadData, _sc, _enclosingStateCref))
        {
          break;
        }

        _posOfEnclosing = ((modelica_integer) 1) + _posOfEnclosing;
      }
    }

    tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
    _enclosingActiveStateRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT70, _OMC_LIT38, tmpMeta19, _enclosingPreRef);

    tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
    _enclosingActiveResetRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT72, _OMC_LIT49, tmpMeta20, _enclosingPreRef);

    tmpMeta22 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_posOfEnclosing));
    tmpMeta23 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta22);
    tmpMeta21 = mmc_mk_cons(tmpMeta23, MMC_REFSTRUCTLIT(mmc_nil));
    _enclosingActiveResetStateRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT73, _tArrayBool, tmpMeta21, _enclosingPreRef);

    tmpMeta25 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_posOfEnclosing));
    tmpMeta26 = mmc_mk_box4(21, &NFExpression_LBINARY__desc, omc_NFStateMachineFlatten_makeCrefExp(threadData, _enclosingActiveResetRef, _OMC_LIT49), omc_NFOperator_makeAnd(threadData, _OMC_LIT49), omc_NFStateMachineFlatten_makeRelationEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _enclosingActiveStateRef, _OMC_LIT38), tmpMeta25, _OMC_LIT38));
    tmpMeta27 = mmc_mk_box4(21, &NFExpression_LBINARY__desc, omc_NFStateMachineFlatten_makeCrefExp(threadData, _enclosingActiveResetStateRef, _OMC_LIT49), omc_NFOperator_makeOr(threadData, _OMC_LIT49), tmpMeta26);
    tmpMeta24 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _resetRef, _OMC_LIT49), tmpMeta27, _OMC_LIT49), _peqs);
    _peqs = tmpMeta24;

    tmpMeta29 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_posOfEnclosing));
    tmpMeta28 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeRef, _OMC_LIT49), omc_NFStateMachineFlatten_makeRelationEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _enclosingActiveStateRef, _OMC_LIT38), tmpMeta29, _OMC_LIT38), _OMC_LIT49), _peqs);
    _peqs = tmpMeta28;
  }

  tmp38 = ((modelica_integer) 1); tmp39 = 1; tmp40 = _nStates;
  if(!(((tmp39 > 0) && (tmp38 > tmp40)) || ((tmp39 < 0) && (tmp38 < tmp40))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp38, tmp40); _j += tmp39)
    {
      _stateRef = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSem), 3))), _j);

      _activePlotVar = omc_NFStateMachineFlatten_createActiveIndicator(threadData, _stateRef, _preRef, _j ,&_activePlotEq);

      tmpMeta30 = mmc_mk_cons(_activePlotVar, _pvars);
      _pvars = tmpMeta30;

      tmpMeta31 = mmc_mk_cons(_activePlotEq, _peqs);
      _peqs = tmpMeta31;

      _activePlotRef = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_activePlotVar), 2)));

      _ticksVar = omc_NFStateMachineFlatten_createTicksInStateIndicator(threadData, _stateRef, _activePlotRef ,&_ticksEq);

      tmpMeta32 = mmc_mk_cons(_ticksVar, _pvars);
      _pvars = tmpMeta32;

      tmpMeta33 = mmc_mk_cons(_ticksEq, _peqs);
      _peqs = tmpMeta33;

      _timeEnteredVar = omc_NFStateMachineFlatten_createTimeEnteredStateIndicator(threadData, _stateRef, _activePlotRef ,&_timeEnteredEq);

      _timeInVar = omc_NFStateMachineFlatten_createTimeInStateIndicator(threadData, _stateRef, _activePlotRef, _timeEnteredVar ,&_timeInEq);

      tmpMeta35 = mmc_mk_cons(_timeInVar, _pvars);
      tmpMeta34 = mmc_mk_cons(_timeEnteredVar, tmpMeta35);
      _pvars = tmpMeta34;

      tmpMeta37 = mmc_mk_cons(_timeInEq, _peqs);
      tmpMeta36 = mmc_mk_cons(_timeEnteredEq, tmpMeta37);
      _peqs = tmpMeta36;
    }
  }

  __omcQ_24mrfa_5F2 = _pvars;

  __omcQ_24mrfa_5F3 = _peqs;

  __omcQ_24mrfa_5F4 = _enclosingStateCrefOpt;

  tmpMeta41 = mmc_mk_box11(3, &NFStateMachineFlatten_FlatSmSemantics_FLAT__SM__SEMANTICS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSem), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSem), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSem), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSem), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSem), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSem), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSem), 8))), __omcQ_24mrfa_5F2, __omcQ_24mrfa_5F3, __omcQ_24mrfa_5F4);
  _outSem = tmpMeta41;
  _return: OMC_LABEL_UNUSED
  return _outSem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_basicFlatSmSemantics(threadData_t *threadData, modelica_metatype _initStateCref, modelica_metatype _stateCrefs, modelica_metatype _transitionEqs)
{
  modelica_metatype _sem = NULL;
  modelica_metatype _preRef = NULL;
  modelica_integer _nStates;
  modelica_integer _nTransitions;
  modelica_integer _i;
  modelica_metatype _t = NULL;
  modelica_metatype _cExps = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _knowns = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _eqs = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _nStatesRef = NULL;
  modelica_metatype _activeRef = NULL;
  modelica_metatype _resetRef = NULL;
  modelica_metatype _selectedStateRef = NULL;
  modelica_metatype _selectedResetRef = NULL;
  modelica_metatype _firedRef = NULL;
  modelica_metatype _activeStateRef = NULL;
  modelica_metatype _activeResetRef = NULL;
  modelica_metatype _nextStateRef = NULL;
  modelica_metatype _nextResetRef = NULL;
  modelica_metatype _stateMachineInFinalStateRef = NULL;
  modelica_metatype _tArrayBool = NULL;
  modelica_metatype _tArrayInt = NULL;
  modelica_metatype _activeResetStatesRefs = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _nextResetStatesRefs = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _finalStatesRefs = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype _cRefs = NULL;
  modelica_metatype tmpMeta7;
  modelica_metatype _cImmediateRefs = NULL;
  modelica_metatype tmpMeta8;
  modelica_metatype _tTArrayBool = NULL;
  modelica_metatype _tTArrayInt = NULL;
  modelica_metatype _tFromRefs = NULL;
  modelica_metatype tmpMeta9;
  modelica_metatype _tToRefs = NULL;
  modelica_metatype tmpMeta10;
  modelica_metatype _tImmediateRefs = NULL;
  modelica_metatype tmpMeta11;
  modelica_metatype _tResetRefs = NULL;
  modelica_metatype tmpMeta12;
  modelica_metatype _tSynchronizeRefs = NULL;
  modelica_metatype tmpMeta13;
  modelica_metatype _tPriorityRefs = NULL;
  modelica_metatype tmpMeta14;
  modelica_metatype _rhs = NULL;
  modelica_metatype _expCond = NULL;
  modelica_metatype _expThen = NULL;
  modelica_metatype _expElse = NULL;
  modelica_metatype _exp1 = NULL;
  modelica_metatype _exp2 = NULL;
  modelica_metatype _expIf = NULL;
  modelica_metatype _expLst = NULL;
  modelica_boolean _immediateVal;
  modelica_metatype _tDim = NULL;
  modelica_metatype _nStatesDim = NULL;
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
  modelica_metatype tmpMeta56;
  modelica_metatype tmpMeta57;
  modelica_metatype tmpMeta58;
  modelica_metatype tmpMeta59;
  modelica_metatype tmpMeta60;
  modelica_metatype tmpMeta61;
  modelica_metatype tmpMeta62;
  modelica_metatype tmpMeta63;
  modelica_metatype tmpMeta64;
  modelica_metatype tmpMeta65;
  modelica_metatype tmpMeta66;
  modelica_metatype tmpMeta67;
  modelica_metatype tmpMeta68;
  modelica_metatype tmpMeta69;
  modelica_metatype tmpMeta70;
  modelica_metatype tmpMeta71;
  modelica_metatype tmpMeta72;
  modelica_metatype tmpMeta73;
  modelica_metatype tmpMeta74;
  modelica_metatype tmpMeta75;
  modelica_metatype tmpMeta76;
  modelica_metatype tmpMeta77;
  modelica_metatype tmpMeta78;
  modelica_metatype tmpMeta79;
  modelica_metatype tmpMeta80;
  modelica_metatype tmpMeta81;
  modelica_metatype tmpMeta82;
  modelica_metatype tmpMeta83;
  modelica_metatype tmpMeta84;
  modelica_metatype tmpMeta85;
  modelica_metatype tmpMeta86;
  modelica_metatype tmpMeta87;
  modelica_metatype tmpMeta88;
  modelica_metatype tmpMeta89;
  modelica_metatype tmpMeta90;
  modelica_metatype tmpMeta91;
  modelica_metatype tmpMeta92;
  modelica_metatype tmpMeta93;
  modelica_metatype tmpMeta94;
  modelica_metatype tmpMeta95;
  modelica_metatype tmpMeta96;
  modelica_metatype tmpMeta97;
  modelica_metatype tmpMeta98;
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
  modelica_integer tmp111;
  modelica_integer tmp112;
  modelica_integer tmp113;
  modelica_metatype tmpMeta114;
  modelica_metatype tmpMeta115;
  modelica_metatype tmpMeta116;
  modelica_metatype tmpMeta117;
  modelica_metatype tmpMeta118;
  modelica_metatype tmpMeta119;
  modelica_integer tmp120;
  modelica_metatype tmpMeta121;
  modelica_metatype tmpMeta122;
  modelica_metatype tmpMeta123;
  modelica_metatype tmpMeta124;
  modelica_metatype tmpMeta125;
  modelica_metatype tmpMeta126;
  modelica_metatype tmpMeta127;
  modelica_integer tmp128;
  modelica_integer tmp129;
  modelica_integer tmp130;
  modelica_metatype tmpMeta131;
  modelica_metatype tmpMeta132;
  modelica_metatype tmpMeta133;
  modelica_metatype tmpMeta134;
  modelica_metatype tmpMeta135;
  modelica_metatype tmpMeta136;
  modelica_metatype tmpMeta137;
  modelica_metatype tmpMeta138;
  modelica_metatype tmpMeta139;
  modelica_metatype tmpMeta140;
  modelica_integer tmp141;
  modelica_integer tmp142;
  modelica_integer tmp143;
  modelica_metatype tmpMeta144;
  modelica_metatype tmpMeta145;
  modelica_integer tmp146;
  modelica_integer tmp147;
  modelica_integer tmp148;
  modelica_metatype tmpMeta149;
  modelica_metatype tmpMeta150;
  modelica_metatype tmpMeta151;
  modelica_integer tmp152;
  modelica_integer tmp153;
  modelica_integer tmp154;
  modelica_metatype tmpMeta155;
  modelica_integer tmp156;
  modelica_integer tmp157;
  modelica_integer tmp158;
  modelica_metatype tmpMeta159;
  modelica_metatype tmpMeta160;
  modelica_metatype tmpMeta161;
  modelica_metatype tmpMeta162;
  modelica_metatype tmpMeta163;
  modelica_metatype tmpMeta164;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sem has no default value.
  // _preRef has no default value.
  // _nStates has no default value.
  // _nTransitions has no default value.
  // _i has no default value.
  // _t has no default value.
  // _cExps has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _vars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _knowns = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqs = tmpMeta3;
  // _nStatesRef has no default value.
  // _activeRef has no default value.
  // _resetRef has no default value.
  // _selectedStateRef has no default value.
  // _selectedResetRef has no default value.
  // _firedRef has no default value.
  // _activeStateRef has no default value.
  // _activeResetRef has no default value.
  // _nextStateRef has no default value.
  // _nextResetRef has no default value.
  // _stateMachineInFinalStateRef has no default value.
  // _tArrayBool has no default value.
  // _tArrayInt has no default value.
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeResetStatesRefs = tmpMeta4;
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _nextResetStatesRefs = tmpMeta5;
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _finalStatesRefs = tmpMeta6;
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _cRefs = tmpMeta7;
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _cImmediateRefs = tmpMeta8;
  // _tTArrayBool has no default value.
  // _tTArrayInt has no default value.
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  _tFromRefs = tmpMeta9;
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _tToRefs = tmpMeta10;
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  _tImmediateRefs = tmpMeta11;
  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  _tResetRefs = tmpMeta12;
  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
  _tSynchronizeRefs = tmpMeta13;
  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  _tPriorityRefs = tmpMeta14;
  // _rhs has no default value.
  // _expCond has no default value.
  // _expThen has no default value.
  // _expElse has no default value.
  // _exp1 has no default value.
  // _exp2 has no default value.
  // _expIf has no default value.
  // _expLst has no default value.
  // _immediateVal has no default value.
  // _tDim has no default value.
  // _nStatesDim has no default value.
  _preRef = omc_NFStateMachineFlatten_makeSMSPrefix(threadData, _initStateCref);

  _t = omc_NFStateMachineFlatten_createTandC(threadData, _stateCrefs, _transitionEqs ,&_cExps);

  _nStates = listLength(_stateCrefs);

  _nTransitions = listLength(_t);

  tmpMeta15 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(_nTransitions), mmc_mk_integer(2));
  _tDim = tmpMeta15;

  tmpMeta16 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(_nStates), mmc_mk_integer(2));
  _nStatesDim = tmpMeta16;

  tmpMeta17 = mmc_mk_cons(_tDim, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta18 = mmc_mk_box3(10, &NFType_ARRAY__desc, _OMC_LIT49, tmpMeta17);
  _tTArrayBool = tmpMeta18;

  tmpMeta19 = mmc_mk_cons(_tDim, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta20 = mmc_mk_box3(10, &NFType_ARRAY__desc, _OMC_LIT38, tmpMeta19);
  _tTArrayInt = tmpMeta20;

  tmpMeta21 = mmc_mk_cons(_nStatesDim, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta22 = mmc_mk_box3(10, &NFType_ARRAY__desc, _OMC_LIT49, tmpMeta21);
  _tArrayBool = tmpMeta22;

  tmpMeta23 = mmc_mk_cons(_nStatesDim, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta24 = mmc_mk_box3(10, &NFType_ARRAY__desc, _OMC_LIT38, tmpMeta23);
  _tArrayInt = tmpMeta24;

  tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
  _nStatesRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT85, _OMC_LIT38, tmpMeta25, _preRef);

  tmpMeta27 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_nStates));
  tmpMeta26 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithBinding(threadData, _nStatesRef, _OMC_LIT38, 2, tmpMeta27), _knowns);
  _knowns = tmpMeta26;

  _i = ((modelica_integer) 0);

  {
    modelica_metatype _tr;
    for (tmpMeta28 = _t; !listEmpty(tmpMeta28); tmpMeta28=MMC_CDR(tmpMeta28))
    {
      _tr = MMC_CAR(tmpMeta28);
      _i = ((modelica_integer) 1) + _i;

      tmpMeta31 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
      tmpMeta32 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta31);
      tmpMeta30 = mmc_mk_cons(tmpMeta32, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta29 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT86, _tTArrayInt, tmpMeta30, _preRef), _tFromRefs);
      _tFromRefs = tmpMeta29;

      tmpMeta34 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tr), 2))));
      tmpMeta33 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithBinding(threadData, listHead(_tFromRefs), _OMC_LIT38, 2, tmpMeta34), _knowns);
      _knowns = tmpMeta33;

      tmpMeta37 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
      tmpMeta38 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta37);
      tmpMeta36 = mmc_mk_cons(tmpMeta38, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta35 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT87, _tTArrayInt, tmpMeta36, _preRef), _tToRefs);
      _tToRefs = tmpMeta35;

      tmpMeta40 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tr), 3))));
      tmpMeta39 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithBinding(threadData, listHead(_tToRefs), _OMC_LIT38, 2, tmpMeta40), _knowns);
      _knowns = tmpMeta39;

      tmpMeta43 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
      tmpMeta44 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta43);
      tmpMeta42 = mmc_mk_cons(tmpMeta44, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta41 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT88, _tTArrayBool, tmpMeta42, _preRef), _tImmediateRefs);
      _tImmediateRefs = tmpMeta41;

      tmpMeta46 = mmc_mk_box2(6, &NFExpression_BOOLEAN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tr), 5))));
      tmpMeta45 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithBinding(threadData, listHead(_tImmediateRefs), _OMC_LIT49, 2, tmpMeta46), _knowns);
      _knowns = tmpMeta45;

      tmpMeta49 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
      tmpMeta50 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta49);
      tmpMeta48 = mmc_mk_cons(tmpMeta50, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta47 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT89, _tTArrayBool, tmpMeta48, _preRef), _tResetRefs);
      _tResetRefs = tmpMeta47;

      tmpMeta52 = mmc_mk_box2(6, &NFExpression_BOOLEAN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tr), 6))));
      tmpMeta51 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithBinding(threadData, listHead(_tResetRefs), _OMC_LIT49, 2, tmpMeta52), _knowns);
      _knowns = tmpMeta51;

      tmpMeta55 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
      tmpMeta56 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta55);
      tmpMeta54 = mmc_mk_cons(tmpMeta56, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta53 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT90, _tTArrayBool, tmpMeta54, _preRef), _tSynchronizeRefs);
      _tSynchronizeRefs = tmpMeta53;

      tmpMeta58 = mmc_mk_box2(6, &NFExpression_BOOLEAN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tr), 7))));
      tmpMeta57 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithBinding(threadData, listHead(_tSynchronizeRefs), _OMC_LIT49, 2, tmpMeta58), _knowns);
      _knowns = tmpMeta57;

      tmpMeta61 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
      tmpMeta62 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta61);
      tmpMeta60 = mmc_mk_cons(tmpMeta62, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta59 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT91, _tTArrayInt, tmpMeta60, _preRef), _tPriorityRefs);
      _tPriorityRefs = tmpMeta59;

      tmpMeta64 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tr), 8))));
      tmpMeta63 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithBinding(threadData, listHead(_tPriorityRefs), _OMC_LIT38, 2, tmpMeta64), _knowns);
      _knowns = tmpMeta63;
    }
  }

  _tFromRefs = listReverse(_tFromRefs);

  _tToRefs = listReverse(_tToRefs);

  _tImmediateRefs = listReverse(_tImmediateRefs);

  _tResetRefs = listReverse(_tResetRefs);

  _tSynchronizeRefs = listReverse(_tSynchronizeRefs);

  _tPriorityRefs = listReverse(_tPriorityRefs);

  _i = ((modelica_integer) 0);

  {
    modelica_metatype _cExp;
    for (tmpMeta66 = _cExps; !listEmpty(tmpMeta66); tmpMeta66=MMC_CDR(tmpMeta66))
    {
      _cExp = MMC_CAR(tmpMeta66);
      _i = ((modelica_integer) 1) + _i;

      tmpMeta69 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
      tmpMeta70 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta69);
      tmpMeta68 = mmc_mk_cons(tmpMeta70, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta67 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT78, _tTArrayBool, tmpMeta68, _preRef), _cImmediateRefs);
      _cImmediateRefs = tmpMeta67;

      tmpMeta73 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_i));
      tmpMeta74 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta73);
      tmpMeta72 = mmc_mk_cons(tmpMeta74, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta71 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT92, _tTArrayBool, tmpMeta72, _preRef), _cRefs);
      _cRefs = tmpMeta71;

      tmpMeta75 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithStart(threadData, listHead(_cImmediateRefs), _OMC_LIT49, 5, _OMC_LIT4), _vars);
      _vars = tmpMeta75;

      tmpMeta76 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, listHead(_cRefs), _OMC_LIT49, 5), _vars);
      _vars = tmpMeta76;
    }
  }

  _cImmediateRefs = listReverse(_cImmediateRefs);

  _cRefs = listReverse(_cRefs);

  tmpMeta78 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT71, _OMC_LIT49, tmpMeta78, _preRef);

  tmpMeta79 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, _activeRef, _OMC_LIT49, 5), _vars);
  _vars = tmpMeta79;

  tmpMeta80 = MMC_REFSTRUCTLIT(mmc_nil);
  _resetRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT83, _OMC_LIT49, tmpMeta80, _preRef);

  tmpMeta81 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, _resetRef, _OMC_LIT49, 5), _vars);
  _vars = tmpMeta81;

  tmpMeta82 = MMC_REFSTRUCTLIT(mmc_nil);
  _selectedStateRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT93, _OMC_LIT38, tmpMeta82, _preRef);

  tmpMeta83 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, _selectedStateRef, _OMC_LIT38, 5), _vars);
  _vars = tmpMeta83;

  tmpMeta84 = MMC_REFSTRUCTLIT(mmc_nil);
  _selectedResetRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT94, _OMC_LIT49, tmpMeta84, _preRef);

  tmpMeta85 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, _selectedResetRef, _OMC_LIT49, 5), _vars);
  _vars = tmpMeta85;

  tmpMeta86 = MMC_REFSTRUCTLIT(mmc_nil);
  _firedRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT95, _OMC_LIT38, tmpMeta86, _preRef);

  tmpMeta87 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, _firedRef, _OMC_LIT38, 5), _vars);
  _vars = tmpMeta87;

  tmpMeta88 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeStateRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT70, _OMC_LIT38, tmpMeta88, _preRef);

  tmpMeta89 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, _activeStateRef, _OMC_LIT38, 5), _vars);
  _vars = tmpMeta89;

  tmpMeta90 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeResetRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT72, _OMC_LIT49, tmpMeta90, _preRef);

  tmpMeta91 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, _activeResetRef, _OMC_LIT49, 5), _vars);
  _vars = tmpMeta91;

  tmpMeta92 = MMC_REFSTRUCTLIT(mmc_nil);
  _nextStateRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT96, _OMC_LIT38, tmpMeta92, _preRef);

  tmpMeta93 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithStart(threadData, _nextStateRef, _OMC_LIT38, 5, _OMC_LIT1), _vars);
  _vars = tmpMeta93;

  tmpMeta94 = MMC_REFSTRUCTLIT(mmc_nil);
  _nextResetRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT97, _OMC_LIT49, tmpMeta94, _preRef);

  tmpMeta95 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithStart(threadData, _nextResetRef, _OMC_LIT49, 5, _OMC_LIT4), _vars);
  _vars = tmpMeta95;

  tmp111 = ((modelica_integer) 1); tmp112 = 1; tmp113 = _nStates;
  if(!(((tmp112 > 0) && (tmp111 > tmp113)) || ((tmp112 < 0) && (tmp111 < tmp113))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp111, tmp113); _j += tmp112)
    {
      tmpMeta98 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_j));
      tmpMeta99 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta98);
      tmpMeta97 = mmc_mk_cons(tmpMeta99, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta96 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT73, _tArrayBool, tmpMeta97, _preRef), _activeResetStatesRefs);
      _activeResetStatesRefs = tmpMeta96;

      tmpMeta100 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, listHead(_activeResetStatesRefs), _OMC_LIT49, 5), _vars);
      _vars = tmpMeta100;

      tmpMeta103 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_j));
      tmpMeta104 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta103);
      tmpMeta102 = mmc_mk_cons(tmpMeta104, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta101 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT98, _tArrayBool, tmpMeta102, _preRef), _nextResetStatesRefs);
      _nextResetStatesRefs = tmpMeta101;

      tmpMeta105 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVarWithStart(threadData, listHead(_nextResetStatesRefs), _OMC_LIT49, 5, _OMC_LIT4), _vars);
      _vars = tmpMeta105;

      tmpMeta108 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_j));
      tmpMeta109 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta108);
      tmpMeta107 = mmc_mk_cons(tmpMeta109, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta106 = mmc_mk_cons(omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT99, _tArrayBool, tmpMeta107, _preRef), _finalStatesRefs);
      _finalStatesRefs = tmpMeta106;

      tmpMeta110 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, listHead(_finalStatesRefs), _OMC_LIT49, 5), _vars);
      _vars = tmpMeta110;
    }
  }

  _activeResetStatesRefs = listReverse(_activeResetStatesRefs);

  _nextResetStatesRefs = listReverse(_nextResetStatesRefs);

  _finalStatesRefs = listReverse(_finalStatesRefs);

  tmpMeta114 = MMC_REFSTRUCTLIT(mmc_nil);
  _stateMachineInFinalStateRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT100, _OMC_LIT49, tmpMeta114, _preRef);

  tmpMeta115 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, _stateMachineInFinalStateRef, _OMC_LIT49, 5), _vars);
  _vars = tmpMeta115;

  _i = ((modelica_integer) 0);

  {
    modelica_metatype _cExp;
    for (tmpMeta116 = _cExps; !listEmpty(tmpMeta116); tmpMeta116=MMC_CDR(tmpMeta116))
    {
      _cExp = MMC_CAR(tmpMeta116);
      _i = ((modelica_integer) 1) + _i;

      tmpMeta117 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_cImmediateRefs, _i), _OMC_LIT49), _cExp, _OMC_LIT49), _eqs);
      _eqs = tmpMeta117;

      /* Pattern-matching assignment */
      tmpMeta118 = listGet(_t, _i);
      tmpMeta119 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta118), 5));
      tmp120 = mmc_unbox_integer(tmpMeta119);
      _immediateVal = tmp120  /* pattern as ty=Boolean */;

      _rhs = (_immediateVal?omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_cImmediateRefs, _i), _OMC_LIT49):omc_NFStateMachineFlatten_makePreviousCall(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_cImmediateRefs, _i), _OMC_LIT49), _OMC_LIT49));

      tmpMeta121 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_cRefs, _i), _OMC_LIT49), _rhs, _OMC_LIT49), _eqs);
      _eqs = tmpMeta121;
    }
  }

  tmpMeta123 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _selectedStateRef, _OMC_LIT38), omc_NFStateMachineFlatten_makeIfExp(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _resetRef, _OMC_LIT49), _OMC_LIT77, omc_NFStateMachineFlatten_makePreviousCall(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _nextStateRef, _OMC_LIT38), _OMC_LIT38), _OMC_LIT38), _OMC_LIT38), _eqs);
  _eqs = tmpMeta123;

  tmpMeta124 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _selectedResetRef, _OMC_LIT49), omc_NFStateMachineFlatten_makeIfExp(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _resetRef, _OMC_LIT49), _OMC_LIT56, omc_NFStateMachineFlatten_makePreviousCall(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _nextResetRef, _OMC_LIT49), _OMC_LIT49), _OMC_LIT49), _OMC_LIT49), _eqs);
  _eqs = tmpMeta124;

  tmpMeta125 = MMC_REFSTRUCTLIT(mmc_nil);
  _expLst = tmpMeta125;

  tmp128 = ((modelica_integer) 1); tmp129 = 1; tmp130 = _nTransitions;
  if(!(((tmp129 > 0) && (tmp128 > tmp130)) || ((tmp129 < 0) && (tmp128 < tmp130))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp128, tmp130); _j += tmp129)
    {
      _expCond = omc_NFStateMachineFlatten_makeRelationEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_tFromRefs, _j), _OMC_LIT38), omc_NFStateMachineFlatten_makeCrefExp(threadData, _selectedStateRef, _OMC_LIT38), _OMC_LIT38);

      _expIf = omc_NFStateMachineFlatten_makeIfExp(threadData, _expCond, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_cRefs, _j), _OMC_LIT49), _OMC_LIT4, _OMC_LIT49);

      tmpMeta127 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_j));
      tmpMeta126 = mmc_mk_cons(omc_NFStateMachineFlatten_makeIfExp(threadData, _expIf, tmpMeta127, _OMC_LIT1, _OMC_LIT38), _expLst);
      _expLst = tmpMeta126;
    }
  }

  _expLst = listReverse(_expLst);

  _rhs = ((listLength(_expLst) > ((modelica_integer) 1))?omc_NFStateMachineFlatten_makeMaxIntArrCall(threadData, _expLst):((listLength(_expLst) == ((modelica_integer) 1))?listHead(_expLst):_OMC_LIT1));

  tmpMeta131 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _firedRef, _OMC_LIT38), _rhs, _OMC_LIT38), _eqs);
  _eqs = tmpMeta131;

  _exp1 = omc_NFStateMachineFlatten_makeRelationGt(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _firedRef, _OMC_LIT38), _OMC_LIT1, _OMC_LIT38);

  tmpMeta133 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, omc_NFStateMachineFlatten_makeCrefExp(threadData, _firedRef, _OMC_LIT38));
  tmpMeta132 = mmc_mk_cons(tmpMeta133, MMC_REFSTRUCTLIT(mmc_nil));
  _exp2 = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT87, _tTArrayInt, tmpMeta132, _preRef), _OMC_LIT38);

  _expElse = omc_NFStateMachineFlatten_makeIfExp(threadData, _exp1, _exp2, omc_NFStateMachineFlatten_makeCrefExp(threadData, _selectedStateRef, _OMC_LIT38), _OMC_LIT38);

  tmpMeta134 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeStateRef, _OMC_LIT38), omc_NFStateMachineFlatten_makeIfExp(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _resetRef, _OMC_LIT49), _OMC_LIT77, _expElse, _OMC_LIT38), _OMC_LIT38), _eqs);
  _eqs = tmpMeta134;

  _exp1 = omc_NFStateMachineFlatten_makeRelationGt(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _firedRef, _OMC_LIT38), _OMC_LIT1, _OMC_LIT38);

  tmpMeta136 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, omc_NFStateMachineFlatten_makeCrefExp(threadData, _firedRef, _OMC_LIT38));
  tmpMeta135 = mmc_mk_cons(tmpMeta136, MMC_REFSTRUCTLIT(mmc_nil));
  _exp2 = omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT89, _tTArrayBool, tmpMeta135, _preRef), _OMC_LIT49);

  _expElse = omc_NFStateMachineFlatten_makeIfExp(threadData, _exp1, _exp2, omc_NFStateMachineFlatten_makeCrefExp(threadData, _selectedResetRef, _OMC_LIT49), _OMC_LIT49);

  tmpMeta137 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeResetRef, _OMC_LIT49), omc_NFStateMachineFlatten_makeIfExp(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _resetRef, _OMC_LIT49), _OMC_LIT56, _expElse, _OMC_LIT49), _OMC_LIT49), _eqs);
  _eqs = tmpMeta137;

  tmpMeta138 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _nextStateRef, _OMC_LIT38), omc_NFStateMachineFlatten_makeIfExp(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeRef, _OMC_LIT49), omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeStateRef, _OMC_LIT38), omc_NFStateMachineFlatten_makePreviousCall(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _nextStateRef, _OMC_LIT38), _OMC_LIT38), _OMC_LIT38), _OMC_LIT38), _eqs);
  _eqs = tmpMeta138;

  tmpMeta139 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _nextResetRef, _OMC_LIT49), omc_NFStateMachineFlatten_makeIfExp(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeRef, _OMC_LIT49), _OMC_LIT4, omc_NFStateMachineFlatten_makePreviousCall(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _nextResetRef, _OMC_LIT49), _OMC_LIT49), _OMC_LIT49), _OMC_LIT49), _eqs);
  _eqs = tmpMeta139;

  tmp141 = ((modelica_integer) 1); tmp142 = 1; tmp143 = _nStates;
  if(!(((tmp142 > 0) && (tmp141 > tmp143)) || ((tmp142 < 0) && (tmp141 < tmp143))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp141, tmp143); _j += tmp142)
    {
      tmpMeta140 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_activeResetStatesRefs, _j), _OMC_LIT49), omc_NFStateMachineFlatten_makeIfExp(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _resetRef, _OMC_LIT49), _OMC_LIT56, omc_NFStateMachineFlatten_makePreviousCall(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_nextResetStatesRefs, _j), _OMC_LIT49), _OMC_LIT49), _OMC_LIT49), _OMC_LIT49), _eqs);
      _eqs = tmpMeta140;
    }
  }

  tmp146 = ((modelica_integer) 1); tmp147 = 1; tmp148 = _nStates;
  if(!(((tmp147 > 0) && (tmp146 > tmp148)) || ((tmp147 < 0) && (tmp146 < tmp148))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp146, tmp148); _j += tmp147)
    {
      tmpMeta144 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_j));
      _exp1 = omc_NFStateMachineFlatten_makeRelationEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeStateRef, _OMC_LIT38), tmpMeta144, _OMC_LIT38);

      _expThen = omc_NFStateMachineFlatten_makeIfExp(threadData, _exp1, _OMC_LIT4, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_activeResetStatesRefs, _j), _OMC_LIT49), _OMC_LIT49);

      _expElse = omc_NFStateMachineFlatten_makePreviousCall(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_nextResetStatesRefs, _j), _OMC_LIT49), _OMC_LIT49);

      tmpMeta145 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_nextResetStatesRefs, _j), _OMC_LIT49), omc_NFStateMachineFlatten_makeIfExp(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeRef, _OMC_LIT49), _expThen, _expElse, _OMC_LIT49), _OMC_LIT49), _eqs);
      _eqs = tmpMeta145;
    }
  }

  tmp156 = ((modelica_integer) 1); tmp157 = 1; tmp158 = _nStates;
  if(!(((tmp157 > 0) && (tmp156 > tmp158)) || ((tmp157 < 0) && (tmp156 < tmp158))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp156, tmp158); _j += tmp157)
    {
      tmpMeta149 = MMC_REFSTRUCTLIT(mmc_nil);
      _expLst = tmpMeta149;

      tmp152 = ((modelica_integer) 1); tmp153 = 1; tmp154 = _nTransitions;
      if(!(((tmp153 > 0) && (tmp152 > tmp154)) || ((tmp153 < 0) && (tmp152 < tmp154))))
      {
        modelica_integer _k;
        for(_k = ((modelica_integer) 1); in_range_integer(_k, tmp152, tmp154); _k += tmp153)
        {
          tmpMeta150 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_j));
          _expCond = omc_NFStateMachineFlatten_makeRelationEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_tFromRefs, _k), _OMC_LIT38), tmpMeta150, _OMC_LIT38);

          tmpMeta151 = mmc_mk_cons(omc_NFStateMachineFlatten_makeIfExp(threadData, _expCond, _OMC_LIT77, _OMC_LIT1, _OMC_LIT38), _expLst);
          _expLst = tmpMeta151;
        }
      }

      _expLst = listReverse(_expLst);

      _rhs = ((listLength(_expLst) > ((modelica_integer) 1))?omc_NFStateMachineFlatten_makeRelationEq(threadData, omc_NFStateMachineFlatten_makeMaxIntArrCall(threadData, _expLst), _OMC_LIT1, _OMC_LIT38):((listLength(_expLst) == ((modelica_integer) 1))?omc_NFStateMachineFlatten_makeRelationEq(threadData, listHead(_expLst), _OMC_LIT1, _OMC_LIT38):_OMC_LIT56));

      tmpMeta155 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, listGet(_finalStatesRefs, _j), _OMC_LIT49), _rhs, _OMC_LIT49), _eqs);
      _eqs = tmpMeta155;
    }
  }

  tmpMeta161 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, omc_NFStateMachineFlatten_makeCrefExp(threadData, _activeStateRef, _OMC_LIT38));
  tmpMeta160 = mmc_mk_cons(tmpMeta161, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta159 = mmc_mk_cons(omc_NFStateMachineFlatten_makeEq(threadData, omc_NFStateMachineFlatten_makeCrefExp(threadData, _stateMachineInFinalStateRef, _OMC_LIT49), omc_NFStateMachineFlatten_makeCrefExp(threadData, omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT99, _tArrayBool, tmpMeta160, _preRef), _OMC_LIT49), _OMC_LIT49), _eqs);
  _eqs = tmpMeta159;

  tmpMeta162 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta163 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta164 = mmc_mk_box11(3, &NFStateMachineFlatten_FlatSmSemantics_FLAT__SM__SEMANTICS__desc, _initStateCref, listArray(_stateCrefs), _t, _cExps, _vars, _knowns, _eqs, tmpMeta162, tmpMeta163, mmc_mk_none());
  _sem = tmpMeta164;
  _return: OMC_LABEL_UNUSED
  return _sem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_getDefaultStart(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _result = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ty;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT1;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT3;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT4;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT6;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT1;
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
  _result = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _result;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isPreviousOfCref(threadData_t *threadData, modelica_metatype _e, modelica_metatype _varCref)
{
  modelica_boolean _res;
  modelica_metatype _expCall = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype _argCref = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _expCall has no default value.
  // _args has no default value.
  // _argCref has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _e;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _expCall = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(omc_NFCall_functionNameLast(threadData, _expCall), _OMC_LIT50))) goto tmp3_end;
          _args = omc_NFCall_arguments(threadData, _expCall);

          _res = 0 /* false */;

          if((listLength(_args) == ((modelica_integer) 1)))
          {
            { /* match expression */
              modelica_metatype tmp10_1;
              tmp10_1 = listHead(_args);
              {
                volatile mmc_switch_type tmp10;
                int tmp11;
                tmp10 = 0;
                for (; tmp10 < 2; tmp10++) {
                  switch (MMC_SWITCH_CAST(tmp10)) {
                  case 0: {
                    modelica_metatype tmpMeta12;
                    if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,6,2) == 0) goto tmp9_end;
                    tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 3));
                    _argCref = tmpMeta12;
                    /* Pattern matching succeeded */
                    tmp7 = omc_NFComponentRef_isEqual(threadData, _argCref, _varCref);
                    goto tmp9_done;
                  }
                  case 1: {
                    
                    /* Pattern matching succeeded */
                    tmp7 = 0 /* false */;
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
            _res = tmp7;
          }
          tmp1 = _res;
          goto tmp3_done;
        }
        case 1: {
          
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isPreviousOfCref(threadData_t *threadData, modelica_metatype _e, modelica_metatype _varCref)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStateMachineFlatten_isPreviousOfCref(threadData, _e, _varCref);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

static modelica_metatype closure3_NFStateMachineFlatten_isPreviousOfCref(threadData_t *thData, modelica_metatype closure, modelica_metatype e)
{
  modelica_metatype varCref = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_isPreviousOfCref(thData, e, varCref);
}static modelica_metatype closure2_NFExpression_contains(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFExpression_contains(thData, exp, func);
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_equationHasPrevious(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _varCref)
{
  modelica_boolean _found;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _found has no default value.
  tmpMeta2 = mmc_mk_box1(0, _varCref);
  tmpMeta1 = mmc_mk_box1(0, (modelica_fnptr) mmc_mk_box2(0,closure3_NFStateMachineFlatten_isPreviousOfCref,tmpMeta2));
  _found = omc_NFEquation_containsExp(threadData, _eq, (modelica_fnptr) mmc_mk_box2(0,closure2_NFExpression_contains,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _found;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_equationHasPrevious(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _varCref)
{
  modelica_boolean _found;
  modelica_metatype out_found;
  _found = omc_NFStateMachineFlatten_equationHasPrevious(threadData, _eq, _varCref);
  out_found = mmc_mk_icon(_found);
  return out_found;
}

static modelica_metatype closure4_NFStateMachineFlatten_subsPreviousCrefs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp, modelica_metatype $in_found, modelica_metatype tmp14)
{
  modelica_metatype stateVarCrefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_subsPreviousCrefs(thData, $in_exp, stateVarCrefs, $in_found, tmp14);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_addStateActivationAndReset1(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype _outerVarMap, modelica_metatype *out_accVars)
{
  modelica_metatype _accEqs = NULL;
  modelica_metatype _accVars = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _lhsCref = NULL;
  modelica_metatype _perStateVarCref = NULL;
  modelica_metatype _stateActiveCref = NULL;
  modelica_metatype _lhsTy = NULL;
  modelica_metatype _eqScope = NULL;
  modelica_metatype _eqSource = NULL;
  modelica_metatype _stateVarCrefs = NULL;
  modelica_boolean _hasStateVarOnLHS;
  modelica_boolean _isOuterOutput;
  modelica_metatype _newRhs = NULL;
  modelica_metatype _perStateVarExp = NULL;
  modelica_metatype _eq1 = NULL;
  modelica_metatype _eq2 = NULL;
  modelica_metatype _perStateVar = NULL;
  modelica_metatype _prevList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _accEqs = __omcQ_24in_5FaccEqs;
  _accVars = __omcQ_24in_5FaccVars;
  // _lhs has no default value.
  // _rhs has no default value.
  // _lhsCref has no default value.
  // _perStateVarCref has no default value.
  // _stateActiveCref has no default value.
  // _lhsTy has no default value.
  // _eqScope has no default value.
  // _eqSource has no default value.
  // _stateVarCrefs has no default value.
  // _hasStateVarOnLHS has no default value.
  // _isOuterOutput has no default value.
  // _newRhs has no default value.
  // _perStateVarExp has no default value.
  // _eq1 has no default value.
  // _eq2 has no default value.
  // _perStateVar has no default value.
  // _prevList has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inEq;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,6) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  _lhs = tmpMeta2;
  _rhs = tmpMeta3;
  _lhsTy = tmpMeta4;
  _eqScope = tmpMeta5;
  _eqSource = tmpMeta6;

  _stateVarCrefs = omc_UnorderedMap_keyList(threadData, _crToStart);

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
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta11 = _lhs;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,6,2) == 0) goto goto_7;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          _lhsTy = tmpMeta12;
          _lhsCref = tmpMeta13;

          tmpMeta15 = mmc_mk_box1(0, _stateVarCrefs);
          _newRhs = omc_NFExpression_mapFold(threadData, _rhs, (modelica_fnptr) mmc_mk_box2(0,closure4_NFStateMachineFlatten_subsPreviousCrefs,tmpMeta15), mmc_mk_boolean(0 /* false */), NULL);

          tmpMeta16 = mmc_mk_box7(3, &NFEquation_EQUALITY__desc, _lhs, _newRhs, _lhsTy, _eqScope, _eqSource, mmc_mk_integer(3));
          _eq1 = tmpMeta16;

          _isOuterOutput = ((!omc_NFStateMachineFlatten_crefHasPrefix(threadData, _stateCref, _lhsCref)) && (stringEqual(omc_NFInstNode_InstNode_name(threadData, _eqScope), omc_NFComponentRef_firstName(threadData, _stateCref, 0 /* false */))));

          if(_isOuterOutput)
          {
            tmpMeta17 = mmc_mk_box2(7, &NFInstNode_InstNode_NAME__NODE__desc, omc_NFComponentRef_firstName(threadData, _lhsCref, 0 /* false */));
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            _perStateVarCref = omc_NFComponentRef_prefixCref(threadData, tmpMeta17, _lhsTy, tmpMeta18, _stateCref);

            _perStateVar = omc_NFStateMachineFlatten_makeVarWithStart(threadData, _perStateVarCref, _lhsTy, 5, omc_NFStateMachineFlatten_getDefaultStart(threadData, _lhsTy));

            _perStateVarExp = omc_NFStateMachineFlatten_makeCrefExp(threadData, _perStateVarCref, _lhsTy);

            tmpMeta19 = mmc_mk_box7(3, &NFEquation_EQUALITY__desc, _perStateVarExp, _newRhs, _lhsTy, _eqScope, _eqSource, mmc_mk_integer(3));
            _eq1 = tmpMeta19;

            _eq1 = omc_NFStateMachineFlatten_wrapInStateActivationConditional(threadData, _eq1, _stateCref, 0 /* false */);

            tmpMeta20 = mmc_mk_cons(_eq1, _accEqs);
            _accEqs = tmpMeta20;

            tmpMeta21 = mmc_mk_cons(_perStateVar, _accVars);
            _accVars = tmpMeta21;

            tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
            _stateActiveCref = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT71, _OMC_LIT49, tmpMeta22, _stateCref);

            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            _prevList = omc_UnorderedMap_getOrDefault(threadData, _lhsCref, _outerVarMap, tmpMeta23);

            tmpMeta25 = mmc_mk_box2(0, _stateActiveCref, _perStateVarCref);
            tmpMeta24 = mmc_mk_cons(tmpMeta25, _prevList);
            omc_UnorderedMap_add(threadData, _lhsCref, tmpMeta24, _outerVarMap);
          }
          else
          {
            _hasStateVarOnLHS = 0 /* false */;

            {
              modelica_metatype _svc;
              for (tmpMeta26 = _stateVarCrefs; !listEmpty(tmpMeta26); tmpMeta26=MMC_CDR(tmpMeta26))
              {
                _svc = MMC_CAR(tmpMeta26);
                _hasStateVarOnLHS = omc_NFComponentRef_isEqual(threadData, _svc, _lhsCref);

                if(_hasStateVarOnLHS)
                {
                  break;
                }
              }
            }

            if(_hasStateVarOnLHS)
            {
              _eq1 = omc_NFStateMachineFlatten_wrapInStateActivationConditional(threadData, _eq1, _stateCref, 1 /* true */);

              _eq2 = omc_NFStateMachineFlatten_createResetEquation(threadData, _lhsCref, _lhsTy, _stateCref, _sem, _crToStart);

              tmpMeta29 = mmc_mk_cons(_eq2, _accEqs);
              tmpMeta28 = mmc_mk_cons(_eq1, tmpMeta29);
              _accEqs = tmpMeta28;

              tmpMeta31 = stringAppend(omc_NFComponentRef_firstName(threadData, _lhsCref, 0 /* false */),_OMC_LIT69);
              tmpMeta32 = mmc_mk_box2(7, &NFInstNode_InstNode_NAME__NODE__desc, tmpMeta31);
              tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta30 = mmc_mk_cons(omc_NFStateMachineFlatten_makeVar(threadData, omc_NFComponentRef_prefixCref(threadData, tmpMeta32, _lhsTy, tmpMeta33, omc_NFComponentRef_rest(threadData, _lhsCref)), _lhsTy, 7), _accVars);
              _accVars = tmpMeta30;
            }
            else
            {
              tmpMeta34 = mmc_mk_cons(omc_NFStateMachineFlatten_wrapInStateActivationConditional(threadData, _eq1, _stateCref, 0 /* false */), _accEqs);
              _accEqs = tmpMeta34;
            }
          }
          goto tmp8_done;
        }
        case 1: {
          modelica_metatype tmpMeta35;
          /* Pattern matching succeeded */
          tmpMeta35 = mmc_mk_cons(_inEq, _accEqs);
          _accEqs = tmpMeta35;
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
  _return: OMC_LABEL_UNUSED
  if (out_accVars) { *out_accVars = _accVars; }
  return _accEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_transformWhenBranches(threadData_t *threadData, modelica_metatype _whenEq, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart, modelica_metatype _outerVarMap, modelica_metatype *out_extraVars)
{
  modelica_metatype _outEq = NULL;
  modelica_metatype _extraVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _branches = NULL;
  modelica_metatype _newBranches = NULL;
  modelica_metatype _transformedBody = NULL;
  modelica_metatype _branchVars = NULL;
  modelica_metatype _whenScope = NULL;
  modelica_metatype _whenSource = NULL;
  modelica_metatype _branchCond = NULL;
  modelica_integer _branchCondVar;
  modelica_metatype _branchBody = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEq has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _extraVars = tmpMeta1;
  // _branches has no default value.
  // _newBranches has no default value.
  // _transformedBody has no default value.
  // _branchVars has no default value.
  // _whenScope has no default value.
  // _whenSource has no default value.
  // _branchCond has no default value.
  // _branchCondVar has no default value.
  // _branchBody has no default value.
  /* Pattern-matching assignment */
  tmpMeta2 = _whenEq;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,4,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  _branches = tmpMeta3;
  _whenScope = tmpMeta4;
  _whenSource = tmpMeta5;

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _newBranches = tmpMeta6;

  {
    modelica_metatype _branch;
    for (tmpMeta7 = _branches; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _branch = MMC_CAR(tmpMeta7);
      { /* match expression */
        modelica_metatype tmp11_1;
        tmp11_1 = _branch;
        {
          volatile mmc_switch_type tmp11;
          int tmp12;
          tmp11 = 0;
          for (; tmp11 < 2; tmp11++) {
            switch (MMC_SWITCH_CAST(tmp11)) {
            case 0: {
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              modelica_integer tmp15;
              modelica_metatype tmpMeta16;
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,0,3) == 0) goto tmp10_end;
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 2));
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 3));
              tmp15 = mmc_unbox_integer(tmpMeta14);
              tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 4));
              _branchCond = tmpMeta13;
              _branchCondVar = tmp15  /* pattern as ty=enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS) */;
              _branchBody = tmpMeta16;
              /* Pattern matching succeeded */
              tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
              _transformedBody = tmpMeta17;

              tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
              _branchVars = tmpMeta18;

              {
                modelica_metatype _eq;
                for (tmpMeta19 = _branchBody; !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
                {
                  _eq = MMC_CAR(tmpMeta19);
                  _transformedBody = omc_NFStateMachineFlatten_addStateActivationAndReset(threadData, _eq, _stateCref, _sem, _crToStart, _transformedBody, _branchVars, _outerVarMap ,&_branchVars);
                }
              }

              _extraVars = listAppend(_branchVars, _extraVars);
              tmpMeta21 = mmc_mk_box4(3, &NFEquation_Branch_BRANCH__desc, _branchCond, mmc_mk_integer((modelica_integer)_branchCondVar), listReverse(_transformedBody));
              tmpMeta8 = tmpMeta21;
              goto tmp10_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmpMeta8 = _branch;
              goto tmp10_done;
            }
            }
            goto tmp10_end;
            tmp10_end: ;
          }
          goto goto_9;
          goto_9:;
          MMC_THROW_INTERNAL();
          goto tmp10_done;
          tmp10_done:;
        }
      }
      _branch = tmpMeta8;

      tmpMeta22 = mmc_mk_cons(_branch, _newBranches);
      _newBranches = tmpMeta22;
    }
  }

  tmpMeta24 = mmc_mk_box4(7, &NFEquation_WHEN__desc, listReverse(_newBranches), _whenScope, _whenSource);
  _outEq = tmpMeta24;
  _return: OMC_LABEL_UNUSED
  if (out_extraVars) { *out_extraVars = _extraVars; }
  return _outEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_transformWhenInnerAsPlain(threadData_t *threadData, modelica_metatype _whenEq, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart, modelica_metatype _outerVarMap, modelica_metatype *out_outVars)
{
  modelica_metatype _outEqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outVars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _branches = NULL;
  modelica_metatype _branchBody = NULL;
  modelica_metatype _transformedBody = NULL;
  modelica_metatype _branchVars = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEqs = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outVars = tmpMeta2;
  // _branches has no default value.
  // _branchBody has no default value.
  // _transformedBody has no default value.
  // _branchVars has no default value.
  /* Pattern-matching assignment */
  tmpMeta3 = _whenEq;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,4,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  _branches = tmpMeta4;

  {
    modelica_metatype _branch;
    for (tmpMeta5 = _branches; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _branch = MMC_CAR(tmpMeta5);
      { /* match expression */
        modelica_metatype tmp8_1;
        tmp8_1 = _branch;
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
              if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,3) == 0) goto tmp7_end;
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
              _branchBody = tmpMeta10;
              /* Pattern matching succeeded */
              tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
              _transformedBody = tmpMeta11;

              tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
              _branchVars = tmpMeta12;

              {
                modelica_metatype _eq;
                for (tmpMeta13 = _branchBody; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
                {
                  _eq = MMC_CAR(tmpMeta13);
                  _transformedBody = omc_NFStateMachineFlatten_addStateActivationAndReset(threadData, _eq, _stateCref, _sem, _crToStart, _transformedBody, _branchVars, _outerVarMap ,&_branchVars);
                }
              }

              _outEqs = listAppend(listReverse(_transformedBody), _outEqs);

              _outVars = listAppend(_branchVars, _outVars);
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
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outVars) { *out_outVars = _outVars; }
  return _outEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_transformWhenBranchesAndAccumulate(threadData_t *threadData, modelica_metatype _whenEq, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart, modelica_metatype _outerVarMap, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype *out_accVars)
{
  modelica_metatype _accEqs = NULL;
  modelica_metatype _accVars = NULL;
  modelica_metatype _branches = NULL;
  modelica_metatype _firstBranch = NULL;
  modelica_metatype _branchCond = NULL;
  modelica_metatype _outEq = NULL;
  modelica_metatype _extraVars = NULL;
  modelica_metatype _innerEqs = NULL;
  modelica_metatype _innerVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _accEqs = __omcQ_24in_5FaccEqs;
  _accVars = __omcQ_24in_5FaccVars;
  // _branches has no default value.
  // _firstBranch has no default value.
  // _branchCond has no default value.
  // _outEq has no default value.
  // _extraVars has no default value.
  // _innerEqs has no default value.
  // _innerVars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _whenEq;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,4,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _branches = tmpMeta2;

  _firstBranch = listHead(_branches);

  /* Pattern-matching assignment */
  tmpMeta3 = _firstBranch;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,0,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  _branchCond = tmpMeta4;

  if(omc_NFType_isClock(threadData, omc_NFExpression_typeOf(threadData, _branchCond)))
  {
    _innerEqs = omc_NFStateMachineFlatten_transformWhenInnerAsPlain(threadData, _whenEq, _stateCref, _sem, _crToStart, _outerVarMap ,&_innerVars);

    _accEqs = listAppend(_innerEqs, _accEqs);

    _accVars = listAppend(_innerVars, _accVars);
  }
  else
  {
    _outEq = omc_NFStateMachineFlatten_transformWhenBranches(threadData, _whenEq, _stateCref, _sem, _crToStart, _outerVarMap ,&_extraVars);

    tmpMeta5 = mmc_mk_cons(_outEq, _accEqs);
    _accEqs = tmpMeta5;

    _accVars = listAppend(_extraVars, _accVars);
  }
  _return: OMC_LABEL_UNUSED
  if (out_accVars) { *out_accVars = _accVars; }
  return _accEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_addStateActivationAndReset(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _crToStart, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype _outerVarMap, modelica_metatype *out_accVars)
{
  modelica_metatype _accEqs = NULL;
  modelica_metatype _accVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _accEqs = __omcQ_24in_5FaccEqs;
  _accVars = __omcQ_24in_5FaccVars;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _inEq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _accEqs = omc_NFStateMachineFlatten_addStateActivationAndReset1(threadData, _inEq, _stateCref, _sem, _crToStart, _accEqs, _accVars, _outerVarMap ,&_accVars);
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          _accEqs = omc_NFStateMachineFlatten_transformWhenBranchesAndAccumulate(threadData, _inEq, _stateCref, _sem, _crToStart, _outerVarMap, _accEqs, _accVars ,&_accVars);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = mmc_mk_cons(_inEq, _accEqs);
          _accEqs = tmpMeta4;
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
  if (out_accVars) { *out_accVars = _accVars; }
  return _accEqs;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_isSimpleVarNamed(threadData_t *threadData, modelica_metatype _v, modelica_string _name)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = (omc_NFComponentRef_isSimple(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2)))) && (stringEqual(omc_NFComponentRef_firstName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2))), 0 /* false */), _name)));
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_isSimpleVarNamed(threadData_t *threadData, modelica_metatype _v, modelica_metatype _name)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStateMachineFlatten_isSimpleVarNamed(threadData, _v, _name);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

static modelica_metatype closure5_NFStateMachineFlatten_isSimpleVarNamed(threadData_t *thData, modelica_metatype closure, modelica_metatype v)
{
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_isSimpleVarNamed(thData, v, name);
}
PROTECTED_FUNCTION_STATIC void omc_NFStateMachineFlatten_addHierarchicalPassThroughs(threadData_t *threadData, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _allVariables, modelica_metatype _outerVarMap)
{
  modelica_string _stateStr = NULL;
  modelica_string _leafName = NULL;
  modelica_metatype _activeRef = NULL;
  modelica_metatype _topVarCref = NULL;
  modelica_metatype _topVar = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stateStr has no default value.
  // _leafName has no default value.
  // _activeRef has no default value.
  // _topVarCref has no default value.
  // _topVar has no default value.
  _stateStr = omc_NFComponentRef_toString(threadData, _stateCref);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _activeRef = omc_NFStateMachineFlatten_qCref(threadData, _OMC_LIT71, _OMC_LIT49, tmpMeta1, _stateCref);

  {
    modelica_metatype _v;
    for (tmpMeta2 = _allVariables; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      if(((!omc_NFComponentRef_isSimple(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2))))) && (stringEqual(omc_NFComponentRef_toString(threadData, omc_NFComponentRef_rest(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2))))), _stateStr))))
      {
        _leafName = omc_NFComponentRef_firstName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2))), 0 /* false */);

        { /* matchcontinue expression */
          {
            volatile mmc_switch_type tmp5;
            int tmp6;
            tmp5 = 0;
            MMC_TRY_INTERNAL(mmc_jumper)
            tmp4_top:
            threadData->mmc_jumper = &new_mmc_jumper;
            for (; tmp5 < 2; tmp5++) {
              switch (MMC_SWITCH_CAST(tmp5)) {
              case 0: {
                modelica_metatype tmpMeta7;
                modelica_metatype tmpMeta8;
                modelica_metatype tmpMeta9;
                /* Pattern matching succeeded */
                tmpMeta7 = mmc_mk_box1(0, _leafName);
                _topVar = omc_List_find(threadData, _allVariables, (modelica_fnptr) mmc_mk_box2(0,closure5_NFStateMachineFlatten_isSimpleVarNamed,tmpMeta7));

                _topVarCref = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_topVar), 2)));

                if((!omc_UnorderedMap_contains(threadData, _topVarCref, _outerVarMap)))
                {
                  tmpMeta9 = mmc_mk_box2(0, _activeRef, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2))));
                  tmpMeta8 = mmc_mk_cons(tmpMeta9, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_UnorderedMap_add(threadData, _topVarCref, tmpMeta8, _outerVarMap);
                }
                goto tmp4_done;
              }
              case 1: {
                /* Pattern matching succeeded */
                goto tmp4_done;
              }
              }
              goto tmp4_end;
              tmp4_end: ;
            }
            goto goto_3;
            tmp4_done:
            (void)tmp5;
            MMC_RESTORE_INTERNAL(mmc_jumper);
            goto tmp4_done2;
            goto_3:;
            MMC_CATCH_INTERNAL(mmc_jumper);
            if (++tmp5 < 2) {
              goto tmp4_top;
            }
            MMC_THROW_INTERNAL();
            tmp4_done2:;
          }
        }
        ;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

static modelica_metatype closure6_NFStateMachineFlatten_isEquationOfState(threadData_t *thData, modelica_metatype closure, modelica_metatype eq)
{
  modelica_metatype stateCref = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_isEquationOfState(thData, eq, stateCref);
}static modelica_metatype closure7_NFStateMachineFlatten_isVariableOfState(threadData_t *thData, modelica_metatype closure, modelica_metatype var)
{
  modelica_metatype stateCref = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_isVariableOfState(thData, var, stateCref);
}static modelica_metatype closure8_NFStateMachineFlatten_equationHasPrevious(threadData_t *thData, modelica_metatype closure, modelica_metatype eq)
{
  modelica_metatype varCref = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_equationHasPrevious(thData, eq, varCref);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_smCompToDataFlow(threadData_t *threadData, modelica_metatype _stateCref, modelica_metatype _sem, modelica_metatype _allEquations, modelica_metatype _allVariables, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype _outerVarMap, modelica_metatype *out_accVars)
{
  modelica_metatype _accEqs = NULL;
  modelica_metatype _accVars = NULL;
  modelica_metatype _stateEqs = NULL;
  modelica_metatype _stateVars = NULL;
  modelica_metatype _crToStart = NULL;
  modelica_metatype _transformedEqs = NULL;
  modelica_metatype _extraVars = NULL;
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
  _accEqs = __omcQ_24in_5FaccEqs;
  _accVars = __omcQ_24in_5FaccVars;
  // _stateEqs has no default value.
  // _stateVars has no default value.
  // _crToStart has no default value.
  // _transformedEqs has no default value.
  // _extraVars has no default value.
  tmpMeta1 = mmc_mk_box1(0, _stateCref);
  _stateEqs = omc_List_filterOnTrue(threadData, _allEquations, (modelica_fnptr) mmc_mk_box2(0,closure6_NFStateMachineFlatten_isEquationOfState,tmpMeta1));

  tmpMeta2 = mmc_mk_box1(0, _stateCref);
  _stateVars = omc_List_filterOnTrue(threadData, _allVariables, (modelica_fnptr) mmc_mk_box2(0,closure7_NFStateMachineFlatten_isVariableOfState,tmpMeta2));

  _crToStart = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

  {
    modelica_metatype _v;
    for (tmpMeta3 = _stateVars; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _v = MMC_CAR(tmpMeta3);
      tmpMeta4 = mmc_mk_box1(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2))));
      if(omc_List_any(threadData, _stateEqs, (modelica_fnptr) mmc_mk_box2(0,closure8_NFStateMachineFlatten_equationHasPrevious,tmpMeta4)))
      {
        omc_UnorderedMap_addUnique(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2))), omc_NFStateMachineFlatten_getStartValue(threadData, _v), _crToStart);
      }
    }
  }

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _transformedEqs = tmpMeta6;

  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _extraVars = tmpMeta7;

  {
    modelica_metatype _eq;
    for (tmpMeta8 = _stateEqs; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
    {
      _eq = MMC_CAR(tmpMeta8);
      _transformedEqs = omc_NFStateMachineFlatten_addStateActivationAndReset(threadData, _eq, _stateCref, _sem, _crToStart, _transformedEqs, _extraVars, _outerVarMap ,&_extraVars);
    }
  }

  _accEqs = listAppend(listReverse(_transformedEqs), _accEqs);

  _accVars = listAppend(listReverse(_extraVars), _accVars);

  omc_NFStateMachineFlatten_addHierarchicalPassThroughs(threadData, _stateCref, _sem, _allVariables, _outerVarMap);
  _return: OMC_LABEL_UNUSED
  if (out_accVars) { *out_accVars = _accVars; }
  return _accEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_qualifyOuterVarCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype _parentPrefix, modelica_metatype _varCrefStrings)
{
  modelica_metatype _e = NULL;
  modelica_metatype _qualCref = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _e = __omcQ_24in_5Fe;
  // _qualCref has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _e;
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
          /* Check guard condition after assignments */
          if (!omc_NFComponentRef_isSimple(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))))) goto tmp2_end;
          _qualCref = omc_NFComponentRef_append(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))), _parentPrefix);

          if(listMember(omc_NFComponentRef_toString(threadData, _qualCref), _varCrefStrings))
          {
            tmpMeta5 = mmc_mk_box3(9, &NFExpression_CREF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))), _qualCref);
            _e = tmpMeta5;
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
  return _e;
}

static modelica_metatype closure9_NFStateMachineFlatten_qualifyOuterVarCref(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_e)
{
  modelica_metatype parentPrefix = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype varCrefStrings = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFStateMachineFlatten_qualifyOuterVarCref(thData, $in_e, parentPrefix, varCrefStrings);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_qualifyOuterVarExpr(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype _parentPrefix, modelica_metatype _varCrefStrings)
{
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _e = __omcQ_24in_5Fe;
  tmpMeta1 = mmc_mk_box2(0, _parentPrefix, _varCrefStrings);
  _e = omc_NFExpression_map(threadData, _e, (modelica_fnptr) mmc_mk_box2(0,closure9_NFStateMachineFlatten_qualifyOuterVarCref,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _e;
}

static modelica_metatype closure10_NFStateMachineFlatten_isTransitionForGroup(threadData_t *thData, modelica_metatype closure, modelica_metatype eq)
{
  modelica_metatype stateCrefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_isTransitionForGroup(thData, eq, stateCrefs);
}static modelica_metatype closure11_NFStateMachineFlatten_isInitialStateForGroup(threadData_t *thData, modelica_metatype closure, modelica_metatype eq)
{
  modelica_metatype initStateCref = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_isInitialStateForGroup(thData, eq, initStateCref);
}static modelica_metatype closure13_NFStateMachineFlatten_qualifyOuterVarExpr(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_e)
{
  modelica_metatype parentPrefix = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype varCrefStrings = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFStateMachineFlatten_qualifyOuterVarExpr(thData, $in_e, parentPrefix, varCrefStrings);
}static modelica_metatype closure12_NFEquation_mapExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eq)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEquation_mapExp(thData, $in_eq, func);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_flatSmToDataFlow(threadData_t *threadData, modelica_metatype _initStateCref, modelica_metatype _stateCrefs, modelica_metatype _allEquations, modelica_metatype _allVariables, modelica_metatype _enclosingStateCrefOpt, modelica_metatype _enclosingSmSemOpt, modelica_metatype __omcQ_24in_5FaccEqs, modelica_metatype __omcQ_24in_5FaccVars, modelica_metatype _outerVarMap, modelica_metatype *out_accVars, modelica_metatype *out_outSem)
{
  modelica_metatype _accEqs = NULL;
  modelica_metatype _accVars = NULL;
  modelica_metatype _outSem = NULL;
  modelica_metatype _transitionEqs = NULL;
  modelica_metatype _initialStateEqs = NULL;
  modelica_metatype _sem = NULL;
  modelica_metatype _semWithProp = NULL;
  modelica_metatype _semFinal = NULL;
  modelica_metatype _parentPrefix = NULL;
  modelica_metatype _varCrefStrings = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _accEqs = __omcQ_24in_5FaccEqs;
  _accVars = __omcQ_24in_5FaccVars;
  // _outSem has no default value.
  // _transitionEqs has no default value.
  // _initialStateEqs has no default value.
  // _sem has no default value.
  // _semWithProp has no default value.
  // _semFinal has no default value.
  // _parentPrefix has no default value.
  // _varCrefStrings has no default value.
  tmpMeta1 = mmc_mk_box1(0, _stateCrefs);
  _transitionEqs = omc_List_filterOnTrue(threadData, _allEquations, (modelica_fnptr) mmc_mk_box2(0,closure10_NFStateMachineFlatten_isTransitionForGroup,tmpMeta1));

  tmpMeta2 = mmc_mk_box1(0, _initStateCref);
  _initialStateEqs = omc_List_filterOnTrue(threadData, _allEquations, (modelica_fnptr) mmc_mk_box2(0,closure11_NFStateMachineFlatten_isInitialStateForGroup,tmpMeta2));

  _sem = omc_NFStateMachineFlatten_basicFlatSmSemantics(threadData, _initStateCref, _stateCrefs, _transitionEqs);

  _semWithProp = omc_NFStateMachineFlatten_addPropagationEquations(threadData, _sem, _enclosingStateCrefOpt, _enclosingSmSemOpt);

  _semFinal = omc_NFStateMachineFlatten_elabXInStateOps(threadData, _semWithProp, _enclosingStateCrefOpt);

  _parentPrefix = omc_NFComponentRef_rest(threadData, listHead(_stateCrefs));

  if((!omc_NFComponentRef_isEmpty(threadData, _parentPrefix)))
  {
    {
      modelica_metatype __omcQ_24tmpVar7;
      modelica_metatype* tmp4;
      modelica_metatype tmpMeta5;
      modelica_string __omcQ_24tmpVar6;
      modelica_integer tmp6;
      modelica_metatype _v_loopVar = 0;
      modelica_metatype _v;
      _v_loopVar = _allVariables;
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar7 = tmpMeta5; /* defaultValue */
      tmp4 = &__omcQ_24tmpVar7;
      while(1) {
        tmp6 = 1;
        if (!listEmpty(_v_loopVar)) {
          _v = MMC_CAR(_v_loopVar);
          _v_loopVar = MMC_CDR(_v_loopVar);
          tmp6--;
        }
        if (tmp6 == 0) {
          __omcQ_24tmpVar6 = omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2))));
          *tmp4 = mmc_mk_cons(__omcQ_24tmpVar6,0);
          tmp4 = &MMC_CDR(*tmp4);
        } else if (tmp6 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp4 = mmc_mk_nil();
      tmpMeta3 = __omcQ_24tmpVar7;
    }
    _varCrefStrings = tmpMeta3;

    tmpMeta9 = mmc_mk_box2(0, _parentPrefix, _varCrefStrings);
    tmpMeta8 = mmc_mk_box1(0, (modelica_fnptr) mmc_mk_box2(0,closure13_NFStateMachineFlatten_qualifyOuterVarExpr,tmpMeta9));
    tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(12));
    memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_semFinal), 12*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[8] = omc_List_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_semFinal), 8))), (modelica_fnptr) mmc_mk_box2(0,closure12_NFEquation_mapExp,tmpMeta8));
    _semFinal = tmpMeta7;
  }

  tmpMeta10 = mmc_mk_cons(_accVars, mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_semFinal), 6))), mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_semFinal), 7))), mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_semFinal), 9))), MMC_REFSTRUCTLIT(mmc_nil)))));
  _accVars = omc_List_flatten(threadData, tmpMeta10);

  tmpMeta11 = mmc_mk_cons(_accEqs, mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_semFinal), 8))), mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_semFinal), 10))), MMC_REFSTRUCTLIT(mmc_nil))));
  _accEqs = omc_List_flatten(threadData, tmpMeta11);

  {
    modelica_metatype _stateCref;
    for (tmpMeta12 = _stateCrefs; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _stateCref = MMC_CAR(tmpMeta12);
      _accEqs = omc_NFStateMachineFlatten_smCompToDataFlow(threadData, _stateCref, _semFinal, _allEquations, _allVariables, _accEqs, _accVars, _outerVarMap ,&_accVars);
    }
  }

  _outSem = _semFinal;
  _return: OMC_LABEL_UNUSED
  if (out_accVars) { *out_accVars = _accVars; }
  if (out_outSem) { *out_outSem = _outSem; }
  return _accEqs;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_smGroupDepthLt(threadData_t *threadData, modelica_metatype _g1, modelica_metatype _g2)
{
  modelica_boolean _lt;
  modelica_metatype _c1 = NULL;
  modelica_metatype _c2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lt has no default value.
  // _c1 has no default value.
  // _c2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _g1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _c1 = tmpMeta2;

  /* Pattern-matching assignment */
  tmpMeta3 = _g2;
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
  _c2 = tmpMeta4;

  _lt = (omc_NFComponentRef_depth(threadData, _c1) < omc_NFComponentRef_depth(threadData, _c2));
  _return: OMC_LABEL_UNUSED
  return _lt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_smGroupDepthLt(threadData_t *threadData, modelica_metatype _g1, modelica_metatype _g2)
{
  modelica_boolean _lt;
  modelica_metatype out_lt;
  _lt = omc_NFStateMachineFlatten_smGroupDepthLt(threadData, _g1, _g2);
  out_lt = mmc_mk_icon(_lt);
  return out_lt;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStateMachineFlatten_statePriorityGt(threadData_t *threadData, modelica_metatype _cr1, modelica_metatype _cr2, modelica_metatype _initCref)
{
  modelica_boolean _gt;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _gt has no default value.
  if(omc_NFComponentRef_isEqual(threadData, _cr2, _initCref))
  {
    _gt = 1 /* true */;
  }
  else
  {
    if(omc_NFComponentRef_isEqual(threadData, _cr1, _initCref))
    {
      _gt = 0 /* false */;
    }
    else
    {
      _gt = (stringCompare(omc_NFComponentRef_toString(threadData, _cr1), omc_NFComponentRef_toString(threadData, _cr2)) > 0);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _gt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStateMachineFlatten_statePriorityGt(threadData_t *threadData, modelica_metatype _cr1, modelica_metatype _cr2, modelica_metatype _initCref)
{
  modelica_boolean _gt;
  modelica_metatype out_gt;
  _gt = omc_NFStateMachineFlatten_statePriorityGt(threadData, _cr1, _cr2, _initCref);
  out_gt = mmc_mk_icon(_gt);
  return out_gt;
}

static modelica_metatype closure14_NFStateMachineFlatten_statePriorityGt(threadData_t *thData, modelica_metatype closure, modelica_metatype cr1, modelica_metatype cr2)
{
  modelica_metatype initCref = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_statePriorityGt(thData, cr1, cr2, initCref);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_collectReachableStates(threadData_t *threadData, modelica_metatype _initCref, modelica_metatype _froms, modelica_metatype _tos)
{
  modelica_metatype _states = NULL;
  modelica_metatype _queue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _visited = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _cur = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _states has no default value.
  tmpMeta1 = mmc_mk_cons(_initCref, MMC_REFSTRUCTLIT(mmc_nil));
  _queue = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _visited = tmpMeta2;
  // _cur has no default value.
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _states = tmpMeta3;

  while(1)
  {
    if(!(!listEmpty(_queue))) break;
    /* Pattern-matching assignment */
    tmpMeta4 = _queue;
    if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
    tmpMeta5 = MMC_CAR(tmpMeta4);
    tmpMeta6 = MMC_CDR(tmpMeta4);
    _cur = tmpMeta5;
    _queue = tmpMeta6;

    if((!omc_List_isMemberOnTrue(threadData, _cur, _visited, boxvar_NFComponentRef_isEqual)))
    {
      tmpMeta7 = mmc_mk_cons(_cur, _visited);
      _visited = tmpMeta7;

      tmpMeta8 = mmc_mk_cons(_cur, _states);
      _states = tmpMeta8;

      tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = listLength(_froms);
      if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
      {
        modelica_integer _i;
        for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
        {
          if(omc_NFComponentRef_isEqual(threadData, listGet(_froms, _i), _cur))
          {
            tmpMeta9 = mmc_mk_cons(listGet(_tos, _i), _queue);
            _queue = tmpMeta9;
          }

          if(omc_NFComponentRef_isEqual(threadData, listGet(_tos, _i), _cur))
          {
            tmpMeta10 = mmc_mk_cons(listGet(_froms, _i), _queue);
            _queue = tmpMeta10;
          }
        }
      }
    }
  }

  tmpMeta14 = mmc_mk_box1(0, _initCref);
  _states = omc_List_sort(threadData, _states, (modelica_fnptr) mmc_mk_box2(0,closure14_NFStateMachineFlatten_statePriorityGt,tmpMeta14));
  _return: OMC_LABEL_UNUSED
  return _states;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFStateMachineFlatten_groupStateMachines(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype *out_smGroups)
{
  modelica_metatype _initStates = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _smGroups = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _allFroms = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _allTos = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _allInits = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _cr1 = NULL;
  modelica_metatype _cr2 = NULL;
  modelica_metatype _group = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _initStates = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _smGroups = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _allFroms = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _allTos = tmpMeta4;
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _allInits = tmpMeta5;
  // _cr1 has no default value.
  // _cr2 has no default value.
  // _group has no default value.
  {
    modelica_metatype _eq;
    for (tmpMeta6 = listAppend(_equations, _initialEquations); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _eq = MMC_CAR(tmpMeta6);
      { /* match expression */
        modelica_metatype tmp9_1;
        tmp9_1 = _eq;
        {
          modelica_metatype _eqCall = NULL;
          modelica_string _fname = NULL;
          volatile mmc_switch_type tmp9;
          int tmp10;
          // _eqCall has no default value.
          // _fname has no default value.
          tmp9 = 0;
          for (; tmp9 < 2; tmp9++) {
            switch (MMC_SWITCH_CAST(tmp9)) {
            case 0: {
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
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,8,3) == 0) goto tmp8_end;
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,13,1) == 0) goto tmp8_end;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
              
              _eqCall = tmpMeta12;
              /* Pattern matching succeeded */
              _fname = omc_NFCall_functionNameLast(threadData, _eqCall);

              if((stringEqual(_fname, _OMC_LIT68)))
              {
                /* Pattern-matching assignment */
                tmpMeta13 = omc_List_firstN(threadData, omc_NFCall_arguments(threadData, _eqCall), ((modelica_integer) 2));
                if (listEmpty(tmpMeta13)) goto goto_7;
                tmpMeta14 = MMC_CAR(tmpMeta13);
                tmpMeta15 = MMC_CDR(tmpMeta13);
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,6,2) == 0) goto goto_7;
                tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 3));
                if (listEmpty(tmpMeta15)) goto goto_7;
                tmpMeta17 = MMC_CAR(tmpMeta15);
                tmpMeta18 = MMC_CDR(tmpMeta15);
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,6,2) == 0) goto goto_7;
                tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 3));
                if (!listEmpty(tmpMeta18)) goto goto_7;
                _cr1 = tmpMeta16;
                _cr2 = tmpMeta19;

                tmpMeta20 = mmc_mk_cons(_cr1, _allFroms);
                _allFroms = tmpMeta20;

                tmpMeta21 = mmc_mk_cons(_cr2, _allTos);
                _allTos = tmpMeta21;
              }
              else
              {
                if((stringEqual(_fname, _OMC_LIT67)))
                {
                  /* Pattern-matching assignment */
                  tmpMeta22 = omc_List_firstN(threadData, omc_NFCall_arguments(threadData, _eqCall), ((modelica_integer) 1));
                  if (listEmpty(tmpMeta22)) goto goto_7;
                  tmpMeta23 = MMC_CAR(tmpMeta22);
                  tmpMeta24 = MMC_CDR(tmpMeta22);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,6,2) == 0) goto goto_7;
                  tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
                  if (!listEmpty(tmpMeta24)) goto goto_7;
                  _cr1 = tmpMeta25;

                  tmpMeta26 = mmc_mk_cons(_cr1, _allInits);
                  _allInits = tmpMeta26;
                }
              }
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
          MMC_THROW_INTERNAL();
          goto tmp8_done;
          tmp8_done:;
        }
      }
      ;
    }
  }

  {
    modelica_metatype _initCref;
    for (tmpMeta28 = _allInits; !listEmpty(tmpMeta28); tmpMeta28=MMC_CDR(tmpMeta28))
    {
      _initCref = MMC_CAR(tmpMeta28);
      _group = omc_NFStateMachineFlatten_collectReachableStates(threadData, _initCref, _allFroms, _allTos);

      tmpMeta29 = mmc_mk_cons(_initCref, _initStates);
      _initStates = tmpMeta29;

      tmpMeta30 = mmc_mk_cons(_group, _smGroups);
      _smGroups = tmpMeta30;
    }
  }

  _initStates = listReverse(_initStates);

  _smGroups = listReverse(_smGroups);
  _return: OMC_LABEL_UNUSED
  if (out_smGroups) { *out_smGroups = _smGroups; }
  return _initStates;
}

static modelica_metatype closure15_NFStateMachineFlatten_isOuterStateEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype eq)
{
  modelica_metatype stateCrefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStateMachineFlatten_isOuterStateEquation(thData, eq, stateCrefs);
}
DLLDirection
modelica_metatype omc_NFStateMachineFlatten_flatten(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel)
{
  modelica_metatype __omcQ_24mrfa_5F5 = NULL;
  modelica_metatype __omcQ_24mrfa_5F6 = NULL;
  modelica_metatype __omcQ_24mrfa_5F7 = NULL;
  modelica_metatype _flatModel = NULL;
  modelica_metatype _initStates = NULL;
  modelica_metatype _smGroups = NULL;
  modelica_metatype _smEqs = NULL;
  modelica_metatype _otherEqs = NULL;
  modelica_metatype _resultEqs = NULL;
  modelica_metatype _smVars = NULL;
  modelica_metatype _resultVars = NULL;
  modelica_metatype _allStateCrefs = NULL;
  modelica_metatype _outerVarMap = NULL;
  modelica_metatype _stateToSem = NULL;
  modelica_metatype _smGroupPairs = NULL;
  modelica_metatype _smGroupsSorted = NULL;
  modelica_metatype _sem = NULL;
  modelica_metatype _initState = NULL;
  modelica_metatype _parentPrefix = NULL;
  modelica_metatype _stateCrefs = NULL;
  modelica_metatype _enclosingStateCrefOpt = NULL;
  modelica_metatype _enclosingSmSemOpt = NULL;
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
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta21;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F5 has no default value.
  // __omcQ_24mrfa_5F6 has no default value.
  // __omcQ_24mrfa_5F7 has no default value.
  _flatModel = __omcQ_24in_5FflatModel;
  // _initStates has no default value.
  // _smGroups has no default value.
  // _smEqs has no default value.
  // _otherEqs has no default value.
  // _resultEqs has no default value.
  // _smVars has no default value.
  // _resultVars has no default value.
  // _allStateCrefs has no default value.
  // _outerVarMap has no default value.
  // _stateToSem has no default value.
  // _smGroupPairs has no default value.
  // _smGroupsSorted has no default value.
  // _sem has no default value.
  // _initState has no default value.
  // _parentPrefix has no default value.
  // _stateCrefs has no default value.
  // _enclosingStateCrefOpt has no default value.
  // _enclosingSmSemOpt has no default value.
  if(((!omc_List_any(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), boxvar_NFStateMachineFlatten_isTransitionOrInitialState)) && (!omc_List_any(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))), boxvar_NFStateMachineFlatten_isTransitionOrInitialState))))
  {
    goto _return;
  }

  _initStates = omc_NFStateMachineFlatten_groupStateMachines(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))) ,&_smGroups);

  if(listEmpty(_initStates))
  {
    goto _return;
  }

  _allStateCrefs = omc_List_flatten(threadData, _smGroups);

  _otherEqs = omc_List_filterOnFalse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), boxvar_NFStateMachineFlatten_isTransitionOrInitialState);

  tmpMeta1 = mmc_mk_box1(0, _allStateCrefs);
  _otherEqs = omc_List_filterOnFalse(threadData, _otherEqs, (modelica_fnptr) mmc_mk_box2(0,closure15_NFStateMachineFlatten_isOuterStateEquation,tmpMeta1));

  _outerVarMap = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

  _smGroupPairs = omc_List_zip(threadData, _initStates, _smGroups);

  _smGroupsSorted = omc_List_sort(threadData, _smGroupPairs, boxvar_NFStateMachineFlatten_smGroupDepthLt);

  _stateToSem = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _smVars = tmpMeta2;

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _smEqs = tmpMeta3;

  {
    modelica_metatype _smPair;
    for (tmpMeta4 = _smGroupsSorted; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _smPair = MMC_CAR(tmpMeta4);
      /* Pattern-matching assignment */
      tmpMeta5 = _smPair;
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
      _initState = tmpMeta6;
      _stateCrefs = tmpMeta7;

      _parentPrefix = omc_NFComponentRef_rest(threadData, _initState);

      if(omc_NFComponentRef_isEmpty(threadData, _parentPrefix))
      {
        _enclosingStateCrefOpt = mmc_mk_none();

        _enclosingSmSemOpt = mmc_mk_none();
      }
      else
      {
        _enclosingSmSemOpt = omc_UnorderedMap_get(threadData, _parentPrefix, _stateToSem);

        _enclosingStateCrefOpt = (isSome(_enclosingSmSemOpt)?mmc_mk_some(_parentPrefix):mmc_mk_none());
      }

      _smEqs = omc_NFStateMachineFlatten_flatSmToDataFlow(threadData, _initState, _stateCrefs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))), _enclosingStateCrefOpt, _enclosingSmSemOpt, _smEqs, _smVars, _outerVarMap ,&_smVars ,&_sem);

      {
        modelica_metatype _sc;
        for (tmpMeta8 = _stateCrefs; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
        {
          _sc = MMC_CAR(tmpMeta8);
          omc_UnorderedMap_addUnique(threadData, _sc, _sem, _stateToSem);
        }
      }
    }
  }

  {
    modelica_metatype _outerVarCref;
    for (tmpMeta11 = omc_UnorderedMap_keyList(threadData, _outerVarMap); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
    {
      _outerVarCref = MMC_CAR(tmpMeta11);
      _smEqs = omc_NFStateMachineFlatten_generateMergeEquation(threadData, _outerVarCref, _outerVarMap, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))), _smEqs, _smVars ,&_smVars);
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp14;
    modelica_metatype tmpMeta15;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp16;
    modelica_metatype _eq_loopVar = 0;
    modelica_metatype _eq;
    _eq_loopVar = _smEqs;
    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta15; /* defaultValue */
    tmp14 = &__omcQ_24tmpVar9;
    while(1) {
      tmp16 = 1;
      if (!listEmpty(_eq_loopVar)) {
        _eq = MMC_CAR(_eq_loopVar);
        _eq_loopVar = MMC_CDR(_eq_loopVar);
        tmp16--;
      }
      if (tmp16 == 0) {
        __omcQ_24tmpVar8 = omc_NFStateMachineFlatten_subsActiveStateInEq(threadData, _eq);
        *tmp14 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp14 = &MMC_CDR(*tmp14);
      } else if (tmp16 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp14 = mmc_mk_nil();
    tmpMeta13 = __omcQ_24tmpVar9;
  }
  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp18;
    modelica_metatype tmpMeta19;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp20;
    modelica_metatype _eq_loopVar = 0;
    modelica_metatype _eq;
    _eq_loopVar = _otherEqs;
    tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta19; /* defaultValue */
    tmp18 = &__omcQ_24tmpVar11;
    while(1) {
      tmp20 = 1;
      if (!listEmpty(_eq_loopVar)) {
        _eq = MMC_CAR(_eq_loopVar);
        _eq_loopVar = MMC_CDR(_eq_loopVar);
        tmp20--;
      }
      if (tmp20 == 0) {
        __omcQ_24tmpVar10 = omc_NFStateMachineFlatten_subsActiveStateInEq(threadData, _eq);
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
  _resultEqs = listAppend(tmpMeta13, tmpMeta17);

  _resultVars = listAppend(_smVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))));

  __omcQ_24mrfa_5F5 = _resultEqs;

  __omcQ_24mrfa_5F6 = omc_List_filterOnFalse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))), boxvar_NFStateMachineFlatten_isTransitionOrInitialState);

  __omcQ_24mrfa_5F7 = _resultVars;

  tmpMeta21 = mmc_mk_box8(3, &NFFlatModel_FLAT__MODEL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 2))), __omcQ_24mrfa_5F7, __omcQ_24mrfa_5F5, __omcQ_24mrfa_5F6, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 8))));
  _flatModel = tmpMeta21;

  omc_ExecStat_execStat(threadData, _OMC_LIT101);
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

