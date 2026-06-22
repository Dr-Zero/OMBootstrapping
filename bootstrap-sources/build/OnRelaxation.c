#include "omc_simulation_settings.h"
#include "OnRelaxation.h"
#define _OMC_LIT0_data "getOrphansPairsConstraints Process Orphan "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,42,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ";... % "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,7,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "0, "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,3,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,2,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "gaussElimination failt because of non diagonal Entry for col "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,61,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "$tmp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,4,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,0,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT11,0.0);
#define _OMC_LIT11 MMC_REFREALLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT10,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT12,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,9) {&BackendDAE_EquationKind_UNKNOWN__EQUATION__KIND__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT15,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,1,3) {&BackendDAE_VarKind_VARIABLE__desc,}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,5) {&DAE_VarDirection_BIDIR__desc,}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,1,5) {&DAE_VarParallelism_NON__PARALLEL__desc,}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,6) {&DAE_ConnectorType_NON__CONNECTOR__desc,}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,6) {&DAE_VarInnerOuter_NOT__INNER__OUTER__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,1,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,2,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT11}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "Error in getLinkPosition1! Found Orphan with more than one parents "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,67,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "try to relax\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,13,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,3) {&BackendDAE_BaseClockPartitionKind_UNKNOWN__PARTITION__desc,}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,1,3) {&BackendDAE_IndexType_ABSOLUTE__desc,}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Matching  time: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,16,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Identifikation  time: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,22,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Reihenfolge  time: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,19,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "Paarung  time: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,15,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Indizierung  time: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,19,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "Gaus Elimination time: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,23,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "Gesamt  time: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,14,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "Ok system relaxed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,18,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#include "util/modelica.h"

#include "OnRelaxation_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getConstOneVariable(threadData_t *threadData, modelica_metatype _vlst, modelica_metatype _e, modelica_metatype _vec1, modelica_metatype _vars, modelica_integer *out_i);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getConstOneVariable(threadData_t *threadData, modelica_metatype _vlst, modelica_metatype _e, modelica_metatype _vec1, modelica_metatype _vars, modelica_metatype *out_i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getConstOneVariable,2,0) {(void*) boxptr_OnRelaxation_getConstOneVariable,0}};
#define boxvar_OnRelaxation_getConstOneVariable MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getConstOneVariable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_naturalMatching2(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _vars, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_naturalMatching2,2,0) {(void*) boxptr_OnRelaxation_naturalMatching2,0}};
#define boxvar_OnRelaxation_naturalMatching2 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_naturalMatching2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_naturalMatching1(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _vars, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_naturalMatching1,2,0) {(void*) boxptr_OnRelaxation_naturalMatching1,0}};
#define boxvar_OnRelaxation_naturalMatching1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_naturalMatching1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_naturalMatching(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _vars, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_naturalMatching,2,0) {(void*) boxptr_OnRelaxation_naturalMatching,0}};
#define boxvar_OnRelaxation_naturalMatching MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_naturalMatching)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_aliasMatching1(threadData_t *threadData, modelica_integer _i1, modelica_integer _i2, modelica_boolean _b1, modelica_boolean _b2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_aliasMatching1(threadData_t *threadData, modelica_metatype _i1, modelica_metatype _i2, modelica_metatype _b1, modelica_metatype _b2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_aliasMatching1,2,0) {(void*) boxptr_OnRelaxation_aliasMatching1,0}};
#define boxvar_OnRelaxation_aliasMatching1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_aliasMatching1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_aliasMatching(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _vars, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_aliasMatching,2,0) {(void*) boxptr_OnRelaxation_aliasMatching,0}};
#define boxvar_OnRelaxation_aliasMatching MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_aliasMatching)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_vectorMatching1(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_integer _size, modelica_metatype _vars, modelica_metatype _inTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_vectorMatching1(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype _size, modelica_metatype _vars, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_vectorMatching1,2,0) {(void*) boxptr_OnRelaxation_vectorMatching1,0}};
#define boxvar_OnRelaxation_vectorMatching1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_vectorMatching1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_vectorMatching(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _vars, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_vectorMatching,2,0) {(void*) boxptr_OnRelaxation_vectorMatching,0}};
#define boxvar_OnRelaxation_vectorMatching MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_vectorMatching)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_onefreeMatchingBFS1(threadData_t *threadData, modelica_metatype _rows, modelica_integer _c, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_integer _mark, modelica_metatype _inNextQeue);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_onefreeMatchingBFS1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _c, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_metatype _mark, modelica_metatype _inNextQeue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_onefreeMatchingBFS1,2,0) {(void*) boxptr_OnRelaxation_onefreeMatchingBFS1,0}};
#define boxvar_OnRelaxation_onefreeMatchingBFS1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_onefreeMatchingBFS1)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isAssignedSaveEnhanced(threadData_t *threadData, modelica_metatype _ass, modelica_integer _inTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isAssignedSaveEnhanced(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_isAssignedSaveEnhanced,2,0) {(void*) boxptr_OnRelaxation_isAssignedSaveEnhanced,0}};
#define boxvar_OnRelaxation_isAssignedSaveEnhanced MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_isAssignedSaveEnhanced)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_onefreeMatchingBFS(threadData_t *threadData, modelica_metatype _queue, modelica_metatype _m, modelica_metatype _mt, modelica_integer _size, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_integer _mark, modelica_metatype _nextQeue);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_onefreeMatchingBFS(threadData_t *threadData, modelica_metatype _queue, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _size, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_metatype _mark, modelica_metatype _nextQeue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_onefreeMatchingBFS,2,0) {(void*) boxptr_OnRelaxation_onefreeMatchingBFS,0}};
#define boxvar_OnRelaxation_onefreeMatchingBFS MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_onefreeMatchingBFS)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_unassignedLst(threadData_t *threadData, modelica_metatype _vlst, modelica_metatype _ass1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_unassignedLst,2,0) {(void*) boxptr_OnRelaxation_unassignedLst,0}};
#define boxvar_OnRelaxation_unassignedLst MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_unassignedLst)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_assignLst(threadData_t *threadData, modelica_metatype _vlst, modelica_integer _e, modelica_metatype _ass1, modelica_metatype _ass2);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_assignLst(threadData_t *threadData, modelica_metatype _vlst, modelica_metatype _e, modelica_metatype _ass1, modelica_metatype _ass2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_assignLst,2,0) {(void*) boxptr_OnRelaxation_assignLst,0}};
#define boxvar_OnRelaxation_assignLst MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_assignLst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_expHasCreftraverser(threadData_t *threadData, modelica_metatype _e, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_expHasCreftraverser(threadData_t *threadData, modelica_metatype _e, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_expHasCreftraverser,2,0) {(void*) boxptr_OnRelaxation_expHasCreftraverser,0}};
#define boxvar_OnRelaxation_expHasCreftraverser MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_expHasCreftraverser)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_addCrefandParentsToSet(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _ihs, modelica_metatype _oprecr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_addCrefandParentsToSet,2,0) {(void*) boxptr_OnRelaxation_addCrefandParentsToSet,0}};
#define boxvar_OnRelaxation_addCrefandParentsToSet MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_addCrefandParentsToSet)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_expHasCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _cr);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_expHasCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _cr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_expHasCref,2,0) {(void*) boxptr_OnRelaxation_expHasCref,0}};
#define boxvar_OnRelaxation_expHasCref MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_expHasCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getOrphans(threadData_t *threadData, modelica_integer _indx, modelica_integer _size, modelica_metatype _ass, modelica_metatype _inOrphans);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphans(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _size, modelica_metatype _ass, modelica_metatype _inOrphans);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphans,2,0) {(void*) boxptr_OnRelaxation_getOrphans,0}};
#define boxvar_OnRelaxation_getOrphans MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphans)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_markIndexdColums(threadData_t *threadData, modelica_integer _i, modelica_integer _size, modelica_integer _mark, modelica_metatype _colummarks, modelica_metatype _vec2);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_markIndexdColums(threadData_t *threadData, modelica_metatype _i, modelica_metatype _size, modelica_metatype _mark, modelica_metatype _colummarks, modelica_metatype _vec2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_markIndexdColums,2,0) {(void*) boxptr_OnRelaxation_markIndexdColums,0}};
#define boxvar_OnRelaxation_markIndexdColums MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_markIndexdColums)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getIndexesForEqnsRest(threadData_t *threadData, modelica_integer _i, modelica_integer _size, modelica_integer _id, modelica_integer _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec1, modelica_metatype _vec2);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_getIndexesForEqnsRest(threadData_t *threadData, modelica_metatype _i, modelica_metatype _size, modelica_metatype _id, modelica_metatype _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec1, modelica_metatype _vec2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getIndexesForEqnsRest,2,0) {(void*) boxptr_OnRelaxation_getIndexesForEqnsRest,0}};
#define boxvar_OnRelaxation_getIndexesForEqnsRest MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getIndexesForEqnsRest)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_markIndexSubgraph(threadData_t *threadData, modelica_boolean _b, modelica_metatype _r, modelica_integer _mark, modelica_metatype _rowmarks);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_markIndexSubgraph(threadData_t *threadData, modelica_metatype _b, modelica_metatype _r, modelica_metatype _mark, modelica_metatype _rowmarks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_markIndexSubgraph,2,0) {(void*) boxptr_OnRelaxation_markIndexSubgraph,0}};
#define boxvar_OnRelaxation_markIndexSubgraph MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_markIndexSubgraph)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_getIndexSubGraph(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _vorphan, modelica_metatype _m, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orowmarks, modelica_metatype _ocolummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_boolean _ifound);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getIndexSubGraph(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _vorphan, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orowmarks, modelica_metatype _ocolummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _ifound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getIndexSubGraph,2,0) {(void*) boxptr_OnRelaxation_getIndexSubGraph,0}};
#define boxvar_OnRelaxation_getIndexSubGraph MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getIndexSubGraph)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_doMark(threadData_t *threadData, modelica_integer _index, modelica_metatype _arr, modelica_integer _mark);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_doMark(threadData_t *threadData, modelica_metatype _index, modelica_metatype _arr, modelica_metatype _mark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_doMark,2,0) {(void*) boxptr_OnRelaxation_doMark,0}};
#define boxvar_OnRelaxation_doMark MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_doMark)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_doAssign(threadData_t *threadData, modelica_integer _index, modelica_metatype _arr, modelica_metatype _assign);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_doAssign(threadData_t *threadData, modelica_metatype _index, modelica_metatype _arr, modelica_metatype _assign);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_doAssign,2,0) {(void*) boxptr_OnRelaxation_doAssign,0}};
#define boxvar_OnRelaxation_doAssign MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_doAssign)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isNoResOrphan(threadData_t *threadData, modelica_integer _indx, modelica_metatype _ass);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isNoResOrphan(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _ass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_isNoResOrphan,2,0) {(void*) boxptr_OnRelaxation_isNoResOrphan,0}};
#define boxvar_OnRelaxation_isNoResOrphan MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_isNoResOrphan)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isResOrphan(threadData_t *threadData, modelica_integer _indx, modelica_metatype _ass);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isResOrphan(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _ass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_isResOrphan,2,0) {(void*) boxptr_OnRelaxation_isResOrphan,0}};
#define boxvar_OnRelaxation_isResOrphan MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_isResOrphan)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isNoOrphan(threadData_t *threadData, modelica_integer _indx, modelica_metatype _ass);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isNoOrphan(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _ass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_isNoOrphan,2,0) {(void*) boxptr_OnRelaxation_isNoOrphan,0}};
#define boxvar_OnRelaxation_isNoOrphan MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_isNoOrphan)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isOrphan(threadData_t *threadData, modelica_integer _indx, modelica_metatype _ass);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isOrphan(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _ass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_isOrphan,2,0) {(void*) boxptr_OnRelaxation_isOrphan,0}};
#define boxvar_OnRelaxation_isOrphan MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_isOrphan)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_marked(threadData_t *threadData, modelica_integer _indx, modelica_metatype _markarray, modelica_integer _mark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_marked(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _markarray, modelica_metatype _mark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_marked,2,0) {(void*) boxptr_OnRelaxation_marked,0}};
#define boxvar_OnRelaxation_marked MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_marked)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_unmarked(threadData_t *threadData, modelica_integer _indx, modelica_metatype _markarray, modelica_integer _mark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_unmarked(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _markarray, modelica_metatype _mark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_unmarked,2,0) {(void*) boxptr_OnRelaxation_unmarked,0}};
#define boxvar_OnRelaxation_unmarked MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_unmarked)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getIndexQueque1(threadData_t *threadData, modelica_metatype _rows, modelica_integer _c, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _rowmarks, modelica_boolean *out_ob);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getIndexQueque1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _c, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype *out_ob);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getIndexQueque1,2,0) {(void*) boxptr_OnRelaxation_getIndexQueque1,0}};
#define boxvar_OnRelaxation_getIndexQueque1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getIndexQueque1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getIndexQueque(threadData_t *threadData, modelica_metatype _colums, modelica_metatype _m, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec2, modelica_metatype _queuemark, modelica_metatype _nextqueue, modelica_metatype _iqueue, modelica_metatype _iqueue1);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getIndexQueque(threadData_t *threadData, modelica_metatype _colums, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec2, modelica_metatype _queuemark, modelica_metatype _nextqueue, modelica_metatype _iqueue, modelica_metatype _iqueue1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getIndexQueque,2,0) {(void*) boxptr_OnRelaxation_getIndexQueque,0}};
#define boxvar_OnRelaxation_getIndexQueque MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getIndexQueque)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_setIndexQueue(threadData_t *threadData, modelica_integer _col, modelica_metatype _tpl, modelica_metatype _itpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_setIndexQueue(threadData_t *threadData, modelica_metatype _col, modelica_metatype _tpl, modelica_metatype _itpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_setIndexQueue,2,0) {(void*) boxptr_OnRelaxation_setIndexQueue,0}};
#define boxvar_OnRelaxation_setIndexQueue MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_setIndexQueue)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_setBoarderElemts(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _m, modelica_integer _mark, modelica_metatype _arr, modelica_integer _orphan);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_setBoarderElemts(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _m, modelica_metatype _mark, modelica_metatype _arr, modelica_metatype _orphan);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_setBoarderElemts,2,0) {(void*) boxptr_OnRelaxation_setBoarderElemts,0}};
#define boxvar_OnRelaxation_setBoarderElemts MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_setBoarderElemts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getBorderElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _m, modelica_integer _mark, modelica_metatype _arr, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getBorderElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _m, modelica_metatype _mark, modelica_metatype _arr, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getBorderElements,2,0) {(void*) boxptr_OnRelaxation_getBorderElements,0}};
#define boxvar_OnRelaxation_getBorderElements MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getBorderElements)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getIndexesForEqnsAdvanced(threadData_t *threadData, modelica_metatype _orphans, modelica_integer _index, modelica_metatype _m, modelica_metatype _mT, modelica_integer _imark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orowmarks, modelica_metatype _ocolummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec1, modelica_metatype _vec2, modelica_metatype _queuemark, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _shared, modelica_integer _size);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getIndexesForEqnsAdvanced(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _index, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _imark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orowmarks, modelica_metatype _ocolummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec1, modelica_metatype _vec2, modelica_metatype _queuemark, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _shared, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getIndexesForEqnsAdvanced,2,0) {(void*) boxptr_OnRelaxation_getIndexesForEqnsAdvanced,0}};
#define boxvar_OnRelaxation_getIndexesForEqnsAdvanced MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getIndexesForEqnsAdvanced)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getOrphansPairsConstraints1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _eqnsarr, modelica_integer _orphan, modelica_metatype _nextQueue);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_getOrphansPairsConstraints1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _eqnsarr, modelica_metatype _orphan, modelica_metatype _nextQueue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansPairsConstraints1,2,0) {(void*) boxptr_OnRelaxation_getOrphansPairsConstraints1,0}};
#define boxvar_OnRelaxation_getOrphansPairsConstraints1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansPairsConstraints1)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getOrphansPairsConstraints(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _eqns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansPairsConstraints(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansPairsConstraints,2,0) {(void*) boxptr_OnRelaxation_getOrphansPairsConstraints,0}};
#define boxvar_OnRelaxation_getOrphansPairsConstraints MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansPairsConstraints)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getOrphansPairs1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_integer _orphan, modelica_metatype _nextQueue);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_getOrphansPairs1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphan, modelica_metatype _nextQueue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansPairs1,2,0) {(void*) boxptr_OnRelaxation_getOrphansPairs1,0}};
#define boxvar_OnRelaxation_getOrphansPairs1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansPairs1)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getOrphansPairs(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansPairs(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansPairs,2,0) {(void*) boxptr_OnRelaxation_getOrphansPairs,0}};
#define boxvar_OnRelaxation_getOrphansPairs MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansPairs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_sortVarsforOrder2(threadData_t *threadData, modelica_integer _index, modelica_metatype _inVarLst, modelica_metatype _vararray, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_sortVarsforOrder2(threadData_t *threadData, modelica_metatype _index, modelica_metatype _inVarLst, modelica_metatype _vararray, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_sortVarsforOrder2,2,0) {(void*) boxptr_OnRelaxation_sortVarsforOrder2,0}};
#define boxvar_OnRelaxation_sortVarsforOrder2 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_sortVarsforOrder2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_sortVarsforOrder1(threadData_t *threadData, modelica_metatype _crlst, modelica_integer _index, modelica_metatype _inVarLst, modelica_metatype _vindxs, modelica_metatype _vararray, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_sortVarsforOrder1(threadData_t *threadData, modelica_metatype _crlst, modelica_metatype _index, modelica_metatype _inVarLst, modelica_metatype _vindxs, modelica_metatype _vararray, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_sortVarsforOrder1,2,0) {(void*) boxptr_OnRelaxation_sortVarsforOrder1,0}};
#define boxvar_OnRelaxation_sortVarsforOrder1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_sortVarsforOrder1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_sortVarsforOrder(threadData_t *threadData, modelica_metatype _inEqn, modelica_metatype _inVarLst, modelica_metatype _vindxs, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_sortVarsforOrder,2,0) {(void*) boxptr_OnRelaxation_sortVarsforOrder,0}};
#define boxvar_OnRelaxation_sortVarsforOrder MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_sortVarsforOrder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getEqnsinOrder(threadData_t *threadData, modelica_integer _indx, modelica_metatype _inTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getEqnsinOrder(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getEqnsinOrder,2,0) {(void*) boxptr_OnRelaxation_getEqnsinOrder,0}};
#define boxvar_OnRelaxation_getEqnsinOrder MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getEqnsinOrder)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_dumpJacMatrix(threadData_t *threadData, modelica_metatype _jac, modelica_integer _row, modelica_integer _col, modelica_integer _size, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_dumpJacMatrix(threadData_t *threadData, modelica_metatype _jac, modelica_metatype _row, modelica_metatype _col, modelica_metatype _size, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_dumpJacMatrix,2,0) {(void*) boxptr_OnRelaxation_dumpJacMatrix,0}};
#define boxvar_OnRelaxation_dumpJacMatrix MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_dumpJacMatrix)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_transformJacToMatrix(threadData_t *threadData, modelica_metatype _jac, modelica_integer _row, modelica_integer _col, modelica_integer _size, modelica_metatype _b, modelica_metatype _matrix);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_transformJacToMatrix(threadData_t *threadData, modelica_metatype _jac, modelica_metatype _row, modelica_metatype _col, modelica_metatype _size, modelica_metatype _b, modelica_metatype _matrix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_transformJacToMatrix,2,0) {(void*) boxptr_OnRelaxation_transformJacToMatrix,0}};
#define boxvar_OnRelaxation_transformJacToMatrix MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_transformJacToMatrix)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_transformJacToAdjacencyMatrix(threadData_t *threadData, modelica_metatype _jac, modelica_metatype _m, modelica_metatype _mT, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_transformJacToAdjacencyMatrix,2,0) {(void*) boxptr_OnRelaxation_transformJacToAdjacencyMatrix,0}};
#define boxvar_OnRelaxation_transformJacToAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_transformJacToAdjacencyMatrix)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_transformJacToAdjacencyMatrix1(threadData_t *threadData, modelica_metatype _jac, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _ass2, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_transformJacToAdjacencyMatrix1,2,0) {(void*) boxptr_OnRelaxation_transformJacToAdjacencyMatrix1,0}};
#define boxvar_OnRelaxation_transformJacToAdjacencyMatrix1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_transformJacToAdjacencyMatrix1)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_transformJacToAdjacencyMatrix2(threadData_t *threadData, modelica_metatype _jac, modelica_metatype _m, modelica_metatype _mapIncRowEqn, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_transformJacToAdjacencyMatrix2,2,0) {(void*) boxptr_OnRelaxation_transformJacToAdjacencyMatrix2,0}};
#define boxvar_OnRelaxation_transformJacToAdjacencyMatrix2 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_transformJacToAdjacencyMatrix2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isConstOneMinusOne(threadData_t *threadData, modelica_metatype _inExp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isConstOneMinusOne(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_isConstOneMinusOne,2,0) {(void*) boxptr_OnRelaxation_isConstOneMinusOne,0}};
#define boxvar_OnRelaxation_isConstOneMinusOne MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_isConstOneMinusOne)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_diagonalEntry(threadData_t *threadData, modelica_integer _col, modelica_metatype _row);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_diagonalEntry(threadData_t *threadData, modelica_metatype _col, modelica_metatype _row);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_diagonalEntry,2,0) {(void*) boxptr_OnRelaxation_diagonalEntry,0}};
#define boxvar_OnRelaxation_diagonalEntry MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_diagonalEntry)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_gaussElimination(threadData_t *threadData, modelica_integer _col, modelica_integer _size, modelica_metatype _matrix, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype *out_outEqns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_gaussElimination(threadData_t *threadData, modelica_metatype _col, modelica_metatype _size, modelica_metatype _matrix, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype *out_outEqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_gaussElimination,2,0) {(void*) boxptr_OnRelaxation_gaussElimination,0}};
#define boxvar_OnRelaxation_gaussElimination MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_gaussElimination)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_gaussElimination1(threadData_t *threadData, modelica_integer _col, modelica_integer _row, modelica_integer _size, modelica_metatype _ce, modelica_metatype _matrix, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype *out_outEqns, modelica_metatype *out_outTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_gaussElimination1(threadData_t *threadData, modelica_metatype _col, modelica_metatype _row, modelica_metatype _size, modelica_metatype _ce, modelica_metatype _matrix, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype *out_outEqns, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_gaussElimination1,2,0) {(void*) boxptr_OnRelaxation_gaussElimination1,0}};
#define boxvar_OnRelaxation_gaussElimination1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_gaussElimination1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_makeDummyVar(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _e, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype *out_outEqns, modelica_metatype *out_outExp, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_makeDummyVar,2,0) {(void*) boxptr_OnRelaxation_makeDummyVar,0}};
#define boxvar_OnRelaxation_makeDummyVar MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_makeDummyVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_removeFromCol(threadData_t *threadData, modelica_integer _i, modelica_metatype _inTpl, modelica_metatype _inAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_removeFromCol(threadData_t *threadData, modelica_metatype _i, modelica_metatype _inTpl, modelica_metatype _inAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_removeFromCol,2,0) {(void*) boxptr_OnRelaxation_removeFromCol,0}};
#define boxvar_OnRelaxation_removeFromCol MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_removeFromCol)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_mulRow(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _e1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_mulRow,2,0) {(void*) boxptr_OnRelaxation_mulRow,0}};
#define boxvar_OnRelaxation_mulRow MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_mulRow)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_addRows(threadData_t *threadData, modelica_metatype _inA, modelica_metatype _inB, modelica_integer _col, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype _inElst, modelica_metatype *out_outVars, modelica_metatype *out_outEqns, modelica_metatype *out_outTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_addRows(threadData_t *threadData, modelica_metatype _inA, modelica_metatype _inB, modelica_metatype _col, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype _inElst, modelica_metatype *out_outVars, modelica_metatype *out_outEqns, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_addRows,2,0) {(void*) boxptr_OnRelaxation_addRows,0}};
#define boxvar_OnRelaxation_addRows MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_addRows)
PROTECTED_FUNCTION_STATIC modelica_string omc_OnRelaxation_dumpMatrix1(threadData_t *threadData, modelica_metatype _inTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_dumpMatrix1,2,0) {(void*) boxptr_OnRelaxation_dumpMatrix1,0}};
#define boxvar_OnRelaxation_dumpMatrix1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_dumpMatrix1)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_dumpMatrix(threadData_t *threadData, modelica_integer _row, modelica_integer _size, modelica_metatype _matrix);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_dumpMatrix(threadData_t *threadData, modelica_metatype _row, modelica_metatype _size, modelica_metatype _matrix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_dumpMatrix,2,0) {(void*) boxptr_OnRelaxation_dumpMatrix,0}};
#define boxvar_OnRelaxation_dumpMatrix MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_dumpMatrix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_makeGausElimination(threadData_t *threadData, modelica_integer _row, modelica_integer _size, modelica_metatype _matrix, modelica_metatype _vars, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_makeGausElimination(threadData_t *threadData, modelica_metatype _row, modelica_metatype _size, modelica_metatype _matrix, modelica_metatype _vars, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_makeGausElimination,2,0) {(void*) boxptr_OnRelaxation_makeGausElimination,0}};
#define boxvar_OnRelaxation_makeGausElimination MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_makeGausElimination)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_makeGausEliminationRow(threadData_t *threadData, modelica_metatype _lst, modelica_integer _size, modelica_metatype _vars, modelica_metatype _inExp, modelica_metatype *out_outExp1);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_makeGausEliminationRow(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _size, modelica_metatype _vars, modelica_metatype _inExp, modelica_metatype *out_outExp1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_makeGausEliminationRow,2,0) {(void*) boxptr_OnRelaxation_makeGausEliminationRow,0}};
#define boxvar_OnRelaxation_makeGausEliminationRow MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_makeGausEliminationRow)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_makeCrefExps(threadData_t *threadData, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_makeCrefExps,2,0) {(void*) boxptr_OnRelaxation_makeCrefExps,0}};
#define boxvar_OnRelaxation_makeCrefExps MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_makeCrefExps)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_hasResidualOrphan(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_hasResidualOrphan(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_hasResidualOrphan,2,0) {(void*) boxptr_OnRelaxation_hasResidualOrphan,0}};
#define boxvar_OnRelaxation_hasResidualOrphan MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_hasResidualOrphan)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_hasResidualOrphan1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass, modelica_metatype _eqnsarr);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_hasResidualOrphan1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass, modelica_metatype _eqnsarr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_hasResidualOrphan1,2,0) {(void*) boxptr_OnRelaxation_hasResidualOrphan1,0}};
#define boxvar_OnRelaxation_hasResidualOrphan1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_hasResidualOrphan1)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_reduceOrphancMatrix1(threadData_t *threadData, modelica_metatype _comps, modelica_metatype _comps1, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_reduceOrphancMatrix1,2,0) {(void*) boxptr_OnRelaxation_reduceOrphancMatrix1,0}};
#define boxvar_OnRelaxation_reduceOrphancMatrix1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_reduceOrphancMatrix1)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_reduceOrphancMatrix(threadData_t *threadData, modelica_metatype _comps, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_reduceOrphancMatrix,2,0) {(void*) boxptr_OnRelaxation_reduceOrphancMatrix,0}};
#define boxvar_OnRelaxation_reduceOrphancMatrix MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_reduceOrphancMatrix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getOrphansOrderEdvanced3(threadData_t *threadData, modelica_metatype _roots, modelica_metatype _otherorphans, modelica_metatype _constraints, modelica_metatype _vorphans, modelica_metatype _vorphansarray, modelica_integer _mark, modelica_metatype _rowmarks, modelica_integer *out_omark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansOrderEdvanced3(threadData_t *threadData, modelica_metatype _roots, modelica_metatype _otherorphans, modelica_metatype _constraints, modelica_metatype _vorphans, modelica_metatype _vorphansarray, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype *out_omark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced3,2,0) {(void*) boxptr_OnRelaxation_getOrphansOrderEdvanced3,0}};
#define boxvar_OnRelaxation_getOrphansOrderEdvanced3 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getOrder(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _inorder);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrder,2,0) {(void*) boxptr_OnRelaxation_getOrder,0}};
#define boxvar_OnRelaxation_getOrder MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getOrphansAdjacencyMatrix(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _invmap, modelica_metatype _vorphansarray, modelica_metatype _mT, modelica_boolean _addself, modelica_metatype *out_outMT);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansAdjacencyMatrix(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _invmap, modelica_metatype _vorphansarray, modelica_metatype _mT, modelica_metatype _addself, modelica_metatype *out_outMT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansAdjacencyMatrix,2,0) {(void*) boxptr_OnRelaxation_getOrphansAdjacencyMatrix,0}};
#define boxvar_OnRelaxation_getOrphansAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansAdjacencyMatrix)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getInvMap(threadData_t *threadData, modelica_integer _orphan, modelica_metatype _invmap, modelica_integer _index);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getInvMap(threadData_t *threadData, modelica_metatype _orphan, modelica_metatype _invmap, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getInvMap,2,0) {(void*) boxptr_OnRelaxation_getInvMap,0}};
#define boxvar_OnRelaxation_getInvMap MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getInvMap)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getOrphansOrderEdvanced4(threadData_t *threadData, modelica_metatype _linklst, modelica_metatype _m, modelica_metatype _mt, modelica_integer _imark, modelica_metatype _rowmarks, modelica_metatype _iorder, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansOrderEdvanced4(threadData_t *threadData, modelica_metatype _linklst, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _imark, modelica_metatype _rowmarks, modelica_metatype _iorder, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced4,2,0) {(void*) boxptr_OnRelaxation_getOrphansOrderEdvanced4,0}};
#define boxvar_OnRelaxation_getOrphansOrderEdvanced4 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced4)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getOrphansOrderEdvanced6(threadData_t *threadData, modelica_metatype _linklst, modelica_metatype _childslst, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced6,2,0) {(void*) boxptr_OnRelaxation_getOrphansOrderEdvanced6,0}};
#define boxvar_OnRelaxation_getOrphansOrderEdvanced6 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced6)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getOrphansOrderEdvanced5(threadData_t *threadData, modelica_metatype _linklst, modelica_metatype _m, modelica_metatype _mt, modelica_integer _imark, modelica_metatype _rowmarks, modelica_metatype _iAcc, modelica_integer *out_omark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansOrderEdvanced5(threadData_t *threadData, modelica_metatype _linklst, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _imark, modelica_metatype _rowmarks, modelica_metatype _iAcc, modelica_metatype *out_omark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced5,2,0) {(void*) boxptr_OnRelaxation_getOrphansOrderEdvanced5,0}};
#define boxvar_OnRelaxation_getOrphansOrderEdvanced5 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced5)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getLinkPosition1(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_integer _preorphan, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getLinkPosition1(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _preorphan, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getLinkPosition1,2,0) {(void*) boxptr_OnRelaxation_getLinkPosition1,0}};
#define boxvar_OnRelaxation_getLinkPosition1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getLinkPosition1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getLinkPosition(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getLinkPosition(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getLinkPosition,2,0) {(void*) boxptr_OnRelaxation_getLinkPosition,0}};
#define boxvar_OnRelaxation_getLinkPosition MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getLinkPosition)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_mergeOrphanParents(threadData_t *threadData, modelica_metatype _links, modelica_metatype _m, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_mergeOrphanParents,2,0) {(void*) boxptr_OnRelaxation_mergeOrphanParents,0}};
#define boxvar_OnRelaxation_mergeOrphanParents MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_mergeOrphanParents)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getConstraintesOrphansOrderEdvanced1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_integer _preorphan, modelica_metatype _orphans, modelica_metatype _nextQueue);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_getConstraintesOrphansOrderEdvanced1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _preorphan, modelica_metatype _orphans, modelica_metatype _nextQueue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getConstraintesOrphansOrderEdvanced1,2,0) {(void*) boxptr_OnRelaxation_getConstraintesOrphansOrderEdvanced1,0}};
#define boxvar_OnRelaxation_getConstraintesOrphansOrderEdvanced1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getConstraintesOrphansOrderEdvanced1)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getConstraintesOrphansOrderEdvanced(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mc, modelica_metatype _mct, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getConstraintesOrphansOrderEdvanced(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mc, modelica_metatype _mct, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getConstraintesOrphansOrderEdvanced,2,0) {(void*) boxptr_OnRelaxation_getConstraintesOrphansOrderEdvanced,0}};
#define boxvar_OnRelaxation_getConstraintesOrphansOrderEdvanced MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getConstraintesOrphansOrderEdvanced)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getOrphansOrderEdvanced1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_integer _preorphan, modelica_metatype _orphans, modelica_metatype _nextQueue);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_getOrphansOrderEdvanced1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _preorphan, modelica_metatype _orphans, modelica_metatype _nextQueue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced1,2,0) {(void*) boxptr_OnRelaxation_getOrphansOrderEdvanced1,0}};
#define boxvar_OnRelaxation_getOrphansOrderEdvanced1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced1)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_addPreOrphans(threadData_t *threadData, modelica_integer _orphan, modelica_metatype _preorphans, modelica_metatype _arr);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_addPreOrphans(threadData_t *threadData, modelica_metatype _orphan, modelica_metatype _preorphans, modelica_metatype _arr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_addPreOrphans,2,0) {(void*) boxptr_OnRelaxation_addPreOrphans,0}};
#define boxvar_OnRelaxation_addPreOrphans MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_addPreOrphans)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_addPreOrphan(threadData_t *threadData, modelica_integer _orphan, modelica_integer _preorphan, modelica_metatype _arr);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_addPreOrphan(threadData_t *threadData, modelica_metatype _orphan, modelica_metatype _preorphan, modelica_metatype _arr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_addPreOrphan,2,0) {(void*) boxptr_OnRelaxation_addPreOrphan,0}};
#define boxvar_OnRelaxation_addPreOrphan MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_addPreOrphan)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_hasOrphanAdvanced(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _ass1, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_hasOrphanAdvanced,2,0) {(void*) boxptr_OnRelaxation_hasOrphanAdvanced,0}};
#define boxvar_OnRelaxation_hasOrphanAdvanced MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_hasOrphanAdvanced)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getOrphansOrderEdvanced(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mc, modelica_metatype _mct, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansOrderEdvanced(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mc, modelica_metatype _mct, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced,2,0) {(void*) boxptr_OnRelaxation_getOrphansOrderEdvanced,0}};
#define boxvar_OnRelaxation_getOrphansOrderEdvanced MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_getOrphansOrderEdvanced)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_generateResidualClique(threadData_t *threadData, modelica_integer _r, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _orphans, modelica_integer _e);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_generateResidualClique(threadData_t *threadData, modelica_metatype _r, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _orphans, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_generateResidualClique,2,0) {(void*) boxptr_OnRelaxation_generateResidualClique,0}};
#define boxvar_OnRelaxation_generateResidualClique MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_generateResidualClique)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_generateClique(threadData_t *threadData, modelica_integer _r, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _orphans, modelica_integer _e);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_generateClique(threadData_t *threadData, modelica_metatype _r, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _orphans, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_generateClique,2,0) {(void*) boxptr_OnRelaxation_generateClique,0}};
#define boxvar_OnRelaxation_generateClique MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_generateClique)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_prepairOrphansOrder3(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_integer _preorphan, modelica_metatype _partner, modelica_metatype _orphans, modelica_metatype _prer);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_prepairOrphansOrder3(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _preorphan, modelica_metatype _partner, modelica_metatype _orphans, modelica_metatype _prer);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_prepairOrphansOrder3,2,0) {(void*) boxptr_OnRelaxation_prepairOrphansOrder3,0}};
#define boxvar_OnRelaxation_prepairOrphansOrder3 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_prepairOrphansOrder3)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_prepairOrphansOrder2(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _imark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_prepairOrphansOrder2(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _imark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_prepairOrphansOrder2,2,0) {(void*) boxptr_OnRelaxation_prepairOrphansOrder2,0}};
#define boxvar_OnRelaxation_prepairOrphansOrder2 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_prepairOrphansOrder2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_prepairOrphansOrder1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_integer _preorphan, modelica_metatype _orphans, modelica_metatype _prer, modelica_boolean _ifoundFlow, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_prepairOrphansOrder1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _preorphan, modelica_metatype _orphans, modelica_metatype _prer, modelica_metatype _ifoundFlow, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_prepairOrphansOrder1,2,0) {(void*) boxptr_OnRelaxation_prepairOrphansOrder1,0}};
#define boxvar_OnRelaxation_prepairOrphansOrder1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_prepairOrphansOrder1)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_prepairOrphansOrder(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans, modelica_metatype _vars, modelica_metatype _iroots, modelica_metatype _iconstraints, modelica_metatype *out_oroots, modelica_metatype *out_oconstraints);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_prepairOrphansOrder(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans, modelica_metatype _vars, modelica_metatype _iroots, modelica_metatype _iconstraints, modelica_metatype *out_oroots, modelica_metatype *out_oconstraints);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_prepairOrphansOrder,2,0) {(void*) boxptr_OnRelaxation_prepairOrphansOrder,0}};
#define boxvar_OnRelaxation_prepairOrphansOrder MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_prepairOrphansOrder)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_generateCliquesResidual2(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphan);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_generateCliquesResidual2(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphan);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_generateCliquesResidual2,2,0) {(void*) boxptr_OnRelaxation_generateCliquesResidual2,0}};
#define boxvar_OnRelaxation_generateCliquesResidual2 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_generateCliquesResidual2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_selectNonFlows(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _flowFlag);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_selectNonFlows,2,0) {(void*) boxptr_OnRelaxation_selectNonFlows,0}};
#define boxvar_OnRelaxation_selectNonFlows MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_selectNonFlows)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_generateCliquesResidual1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_boolean _ifoundFlow, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_generateCliquesResidual1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _ifoundFlow, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_generateCliquesResidual1,2,0) {(void*) boxptr_OnRelaxation_generateCliquesResidual1,0}};
#define boxvar_OnRelaxation_generateCliquesResidual1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_generateCliquesResidual1)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_generateCliquesResidual(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _vars, modelica_metatype _iconstraints, modelica_metatype *out_oconstraints);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_generateCliquesResidual(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _vars, modelica_metatype _iconstraints, modelica_metatype *out_oconstraints);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_generateCliquesResidual,2,0) {(void*) boxptr_OnRelaxation_generateCliquesResidual,0}};
#define boxvar_OnRelaxation_generateCliquesResidual MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_generateCliquesResidual)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_markOrphans(threadData_t *threadData, modelica_integer _o, modelica_integer _mark, modelica_metatype _rowmark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_markOrphans(threadData_t *threadData, modelica_metatype _o, modelica_metatype _mark, modelica_metatype _rowmark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_markOrphans,2,0) {(void*) boxptr_OnRelaxation_markOrphans,0}};
#define boxvar_OnRelaxation_markOrphans MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_markOrphans)
PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_transposeOrphanVec(threadData_t *threadData, modelica_integer _c, modelica_metatype _vec3, modelica_integer _inId);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_transposeOrphanVec(threadData_t *threadData, modelica_metatype _c, modelica_metatype _vec3, modelica_metatype _inId);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_transposeOrphanVec,2,0) {(void*) boxptr_OnRelaxation_transposeOrphanVec,0}};
#define boxvar_OnRelaxation_transposeOrphanVec MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_transposeOrphanVec)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_dumpVar(threadData_t *threadData, modelica_integer _id, modelica_metatype _vars);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_dumpVar(threadData_t *threadData, modelica_metatype _id, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_dumpVar,2,0) {(void*) boxptr_OnRelaxation_dumpVar,0}};
#define boxvar_OnRelaxation_dumpVar MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_dumpVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_replaceEquationsAddNew(threadData_t *threadData, modelica_metatype _inEqnIndxes, modelica_metatype _inEqns, modelica_metatype _inEqSystem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_replaceEquationsAddNew,2,0) {(void*) boxptr_OnRelaxation_replaceEquationsAddNew,0}};
#define boxvar_OnRelaxation_replaceEquationsAddNew MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_replaceEquationsAddNew)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_traverserExpreplaceFinalParameter(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_traverserExpreplaceFinalParameter,2,0) {(void*) boxptr_OnRelaxation_traverserExpreplaceFinalParameter,0}};
#define boxvar_OnRelaxation_traverserExpreplaceFinalParameter MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_traverserExpreplaceFinalParameter)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_replaceFinalParameter(threadData_t *threadData, modelica_metatype _itpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_replaceFinalParameter,2,0) {(void*) boxptr_OnRelaxation_replaceFinalParameter,0}};
#define boxvar_OnRelaxation_replaceFinalParameter MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_replaceFinalParameter)
PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_removeRootConnections(threadData_t *threadData, modelica_integer _orphan, modelica_metatype _orphansarray, modelica_metatype _roots);
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_removeRootConnections(threadData_t *threadData, modelica_metatype _orphan, modelica_metatype _orphansarray, modelica_metatype _roots);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_removeRootConnections,2,0) {(void*) boxptr_OnRelaxation_removeRootConnections,0}};
#define boxvar_OnRelaxation_removeRootConnections MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_removeRootConnections)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_relaxSystem1(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inComps, modelica_metatype *out_oshared, modelica_boolean *out_outRunMatching);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_relaxSystem1(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inComps, modelica_metatype *out_oshared, modelica_metatype *out_outRunMatching);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_relaxSystem1,2,0) {(void*) boxptr_OnRelaxation_relaxSystem1,0}};
#define boxvar_OnRelaxation_relaxSystem1 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_relaxSystem1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_relaxSystem0(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_boolean _inChanged, modelica_metatype *out_outShared, modelica_boolean *out_outChanged);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_relaxSystem0(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_metatype _inChanged, modelica_metatype *out_outShared, modelica_metatype *out_outChanged);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OnRelaxation_relaxSystem0,2,0) {(void*) boxptr_OnRelaxation_relaxSystem0,0}};
#define boxvar_OnRelaxation_relaxSystem0 MMC_REFSTRUCTLIT(boxvar_lit_OnRelaxation_relaxSystem0)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getConstOneVariable(threadData_t *threadData, modelica_metatype _vlst, modelica_metatype _e, modelica_metatype _vec1, modelica_metatype _vars, modelica_integer *out_i)
{
  modelica_metatype _outCr = NULL;
  modelica_integer _i;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCr has no default value.
  // _i has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _vlst;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _rest has no default value.
      // _cr has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
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
          modelica_integer tmp11;
          modelica_boolean tmp12;
          modelica_boolean tmp13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _v = tmpMeta6;
          /* Pattern matching succeeded */
          _cr = omc_BackendVariable_varCref(threadData, _v);

          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cr, _vars, &tmpMeta8);
          if (listEmpty(tmpMeta8)) goto goto_2;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          tmp11 = mmc_unbox_integer(tmpMeta9);
          _i = tmp11  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmp12 = (mmc_unbox_integer(arrayGet(_vec1,_i) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp12) goto goto_2;

          _e1 = omc_Differentiate_differentiateExpSolve(threadData, _e, _cr, mmc_mk_none());

          _e2 = omc_ExpressionSimplify_simplify(threadData, _e1, NULL);

          /* Pattern-matching assignment */
          tmp13 = (omc_Expression_isConstOne(threadData, _e2) || omc_Expression_isConstMinusOne(threadData, _e2));
          if (1 /* true */ != tmp13) goto goto_2;
          tmpMeta[0+0] = _cr;
          tmp1_c1 = _i;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          _rest = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_OnRelaxation_getConstOneVariable(threadData, _rest, _e, _vec1, _vars, &tmp1_c1);
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
  _outCr = tmpMeta[0+0];
  _i = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_i) { *out_i = _i; }
  return _outCr;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getConstOneVariable(threadData_t *threadData, modelica_metatype _vlst, modelica_metatype _e, modelica_metatype _vec1, modelica_metatype _vars, modelica_metatype *out_i)
{
  modelica_integer _i;
  modelica_metatype _outCr = NULL;
  _outCr = omc_OnRelaxation_getConstOneVariable(threadData, _vlst, _e, _vec1, _vars, &_i);
  /* skip box _outCr; DAE.ComponentRef */
  if (out_i) { *out_i = mmc_mk_icon(_i); }
  return _outCr;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_naturalMatching2(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _vars, modelica_metatype _inTpl)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _eqn;
    tmp4_2 = _inTpl;
    {
      modelica_integer _id;
      modelica_integer _i;
      modelica_metatype _vec1 = NULL;
      modelica_metatype _vec2 = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _vlst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _id has no default value.
      // _i has no default value.
      // _vec1 has no default value.
      // _vec2 has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _vlst has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _e1 = tmpMeta6;
          _e2 = tmpMeta7;
          _id = tmp9  /* pattern as ty=Integer */;
          _vec1 = tmpMeta10;
          _vec2 = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = (mmc_unbox_integer(arrayGet(_vec2,_id) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp12) goto goto_2;

          _e = omc_Expression_expSub(threadData, _e1, _e2);

          _vlst = omc_BackendEquation_equationVars(threadData, _eqn, _vars);

          omc_OnRelaxation_getConstOneVariable(threadData, _vlst, _e, _vec1, _vars ,&_i);

          _vec1 = arrayUpdate(_vec1, _i, mmc_mk_integer(_id));

          _vec2 = arrayUpdate(_vec2, _id, mmc_mk_integer(_i));
          tmpMeta13 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _id), _vec1, _vec2);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _id = tmp15  /* pattern as ty=Integer */;
          _vec1 = tmpMeta16;
          _vec2 = tmpMeta17;
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _id), _vec1, _vec2);
          tmpMeta1 = tmpMeta18;
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
  _outTpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_naturalMatching1(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _vars, modelica_metatype _inTpl)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _eqn;
    tmp4_2 = _inTpl;
    {
      modelica_integer _id;
      modelica_integer _i;
      modelica_metatype _vec1 = NULL;
      modelica_metatype _vec2 = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _id has no default value.
      // _i has no default value.
      // _vec1 has no default value.
      // _vec2 has no default value.
      // _cr has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _cr = tmpMeta7;
          _id = tmp9  /* pattern as ty=Integer */;
          _vec1 = tmpMeta10;
          _vec2 = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = (mmc_unbox_integer(arrayGet(_vec2,_id) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp12) goto goto_2;

          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cr, _vars, &tmpMeta13);
          if (listEmpty(tmpMeta13)) goto goto_2;
          tmpMeta14 = MMC_CAR(tmpMeta13);
          tmpMeta15 = MMC_CDR(tmpMeta13);
          tmp16 = mmc_unbox_integer(tmpMeta14);
          _i = tmp16  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmp17 = (mmc_unbox_integer(arrayGet(_vec1,_i) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp17) goto goto_2;

          _vec1 = arrayUpdate(_vec1, _i, mmc_mk_integer(_id));

          _vec2 = arrayUpdate(_vec2, _id, mmc_mk_integer(_i));
          tmpMeta18 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _id), _vec1, _vec2);
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _id = tmp20  /* pattern as ty=Integer */;
          _vec1 = tmpMeta21;
          _vec2 = tmpMeta22;
          /* Pattern matching succeeded */
          tmpMeta23 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _id), _vec1, _vec2);
          tmpMeta1 = tmpMeta23;
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
  _outTpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_naturalMatching(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _vars, modelica_metatype _inTpl)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _eqn;
    tmp4_2 = _inTpl;
    {
      modelica_integer _id;
      modelica_integer _i;
      modelica_metatype _vec1 = NULL;
      modelica_metatype _vec2 = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _id has no default value.
      // _i has no default value.
      // _vec1 has no default value.
      // _vec2 has no default value.
      // _cr has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _cr = tmpMeta7;
          _id = tmp9  /* pattern as ty=Integer */;
          _vec1 = tmpMeta10;
          _vec2 = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = (mmc_unbox_integer(arrayGet(_vec2,_id) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp12) goto goto_2;

          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cr, _vars, &tmpMeta13);
          if (listEmpty(tmpMeta13)) goto goto_2;
          tmpMeta14 = MMC_CAR(tmpMeta13);
          tmpMeta15 = MMC_CDR(tmpMeta13);
          tmp16 = mmc_unbox_integer(tmpMeta14);
          _i = tmp16  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmp17 = (mmc_unbox_integer(arrayGet(_vec1,_i) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp17) goto goto_2;

          _vec1 = arrayUpdate(_vec1, _i, mmc_mk_integer(_id));

          _vec2 = arrayUpdate(_vec2, _id, mmc_mk_integer(_i));
          tmpMeta18 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _id), _vec1, _vec2);
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _id = tmp20  /* pattern as ty=Integer */;
          _vec1 = tmpMeta21;
          _vec2 = tmpMeta22;
          /* Pattern matching succeeded */
          tmpMeta23 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _id), _vec1, _vec2);
          tmpMeta1 = tmpMeta23;
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
  _outTpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_aliasMatching1(threadData_t *threadData, modelica_integer _i1, modelica_integer _i2, modelica_boolean _b1, modelica_boolean _b2)
{
  modelica_integer _i;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  { /* match expression */
    modelica_boolean tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _b1;
    tmp4_2 = _b2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _i1;
          goto tmp3_done;
        }
        case 1: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _i2;
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
  _i = tmp1;
  _return: OMC_LABEL_UNUSED
  return _i;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_aliasMatching1(threadData_t *threadData, modelica_metatype _i1, modelica_metatype _i2, modelica_metatype _b1, modelica_metatype _b2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer _i;
  modelica_metatype out_i;
  tmp1 = mmc_unbox_integer(_i1);
  tmp2 = mmc_unbox_integer(_i2);
  tmp3 = mmc_unbox_integer(_b1);
  tmp4 = mmc_unbox_integer(_b2);
  _i = omc_OnRelaxation_aliasMatching1(threadData, tmp1, tmp2, tmp3, tmp4);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_aliasMatching(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _vars, modelica_metatype _inTpl)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _eqn;
    tmp4_2 = _inTpl;
    {
      modelica_integer _id;
      modelica_integer _i;
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _size;
      modelica_metatype _vec1 = NULL;
      modelica_metatype _vec2 = NULL;
      modelica_metatype _cr1 = NULL;
      modelica_metatype _cr2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _id has no default value.
      // _i has no default value.
      // _i1 has no default value.
      // _i2 has no default value.
      // _size has no default value.
      // _vec1 has no default value.
      // _vec2 has no default value.
      // _cr1 has no default value.
      // _cr2 has no default value.
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
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _cr1 = tmpMeta7;
          _cr2 = tmpMeta9;
          _id = tmp11  /* pattern as ty=Integer */;
          _vec1 = tmpMeta12;
          _vec2 = tmpMeta13;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (mmc_unbox_integer(arrayGet(_vec2,_id) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp14) goto goto_2;

          omc_BackendVariable_getVarSingle(threadData, _cr1, _vars ,&_i1);

          omc_BackendVariable_getVarSingle(threadData, _cr2, _vars ,&_i2);

          _i = omc_OnRelaxation_aliasMatching1(threadData, _i1, _i2, (mmc_unbox_integer(arrayGet(_vec1,_i1) /* DAE.ASUB */) > ((modelica_integer) 0)), (mmc_unbox_integer(arrayGet(_vec1,_i2) /* DAE.ASUB */) > ((modelica_integer) 0)));

          _vec1 = arrayUpdate(_vec1, _i, mmc_mk_integer(_id));

          _vec2 = arrayUpdate(_vec2, _id, mmc_mk_integer(_i));
          tmpMeta15 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _id), _vec1, _vec2);
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _id = tmp17  /* pattern as ty=Integer */;
          _vec1 = tmpMeta18;
          _vec2 = tmpMeta19;
          /* Pattern matching succeeded */
          _size = omc_BackendEquation_equationSize(threadData, _eqn);
          tmpMeta20 = mmc_mk_box3(0, mmc_mk_integer(_id + _size), _vec1, _vec2);
          tmpMeta1 = tmpMeta20;
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
  _outTpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}

static modelica_metatype closure0_ComponentReferenceBasics_crefEqualWithoutLastSubs(threadData_t *thData, modelica_metatype closure, modelica_metatype cr1)
{
  modelica_metatype cr2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_ComponentReferenceBasics_crefEqualWithoutLastSubs(thData, cr1, cr2);
}static modelica_metatype closure1_ComponentReferenceBasics_crefEqualWithoutLastSubs(threadData_t *thData, modelica_metatype closure, modelica_metatype cr1)
{
  modelica_metatype cr2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_ComponentReferenceBasics_crefEqualWithoutLastSubs(thData, cr1, cr2);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_vectorMatching1(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_integer _size, modelica_metatype _vars, modelica_metatype _inTpl)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _e1;
    tmp4_2 = _e2;
    tmp4_3 = _inTpl;
    {
      modelica_integer _id;
      modelica_metatype _vec1 = NULL;
      modelica_metatype _vec2 = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _crnosubs = NULL;
      modelica_metatype _crlst = NULL;
      modelica_metatype _crlst1 = NULL;
      modelica_metatype _elst = NULL;
      modelica_metatype _ilst = NULL;
      modelica_metatype _set = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _id has no default value.
      // _vec1 has no default value.
      // _vec2 has no default value.
      // _cr has no default value.
      // _crnosubs has no default value.
      // _crlst has no default value.
      // _crlst1 has no default value.
      // _elst has no default value.
      // _ilst has no default value.
      // _set has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          _cr = tmpMeta6;
          _id = tmp8  /* pattern as ty=Integer */;
          _vec1 = tmpMeta9;
          _vec2 = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = omc_OnRelaxation_expHasCref(threadData, _e2, _cr);
          if (0 /* false */ != tmp11) goto goto_2;

          omc_BackendVariable_getVar(threadData, _cr, _vars ,&_ilst);

          /* Pattern-matching assignment */
          tmp12 = (_size == listLength(_ilst));
          if (1 /* true */ != tmp12) goto goto_2;

          omc_OnRelaxation_unassignedLst(threadData, _ilst, _vec1);

          omc_OnRelaxation_assignLst(threadData, _ilst, _id, _vec1, _vec2);
          tmpMeta13 = mmc_mk_box3(0, mmc_mk_integer(_id + _size), _vec1, _vec2);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_boolean tmp19;
          modelica_boolean tmp20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          _cr = tmpMeta14;
          _id = tmp16  /* pattern as ty=Integer */;
          _vec1 = tmpMeta17;
          _vec2 = tmpMeta18;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp19 = omc_OnRelaxation_expHasCref(threadData, _e1, _cr);
          if (0 /* false */ != tmp19) goto goto_2;

          omc_BackendVariable_getVar(threadData, _cr, _vars ,&_ilst);

          /* Pattern-matching assignment */
          tmp20 = (_size == listLength(_ilst));
          if (1 /* true */ != tmp20) goto goto_2;

          omc_OnRelaxation_unassignedLst(threadData, _ilst, _vec1);

          omc_OnRelaxation_assignLst(threadData, _ilst, _id, _vec1, _vec2);
          tmpMeta21 = mmc_mk_box3(0, mmc_mk_integer(_id + _size), _vec1, _vec2);
          tmpMeta1 = tmpMeta21;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_boolean tmp29;
          modelica_boolean tmp30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,6,1) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,6,2) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          _cr = tmpMeta24;
          _id = tmp26  /* pattern as ty=Integer */;
          _vec1 = tmpMeta27;
          _vec2 = tmpMeta28;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp29 = omc_OnRelaxation_expHasCref(threadData, _e2, _cr);
          if (0 /* false */ != tmp29) goto goto_2;

          omc_BackendVariable_getVar(threadData, _cr, _vars ,&_ilst);

          /* Pattern-matching assignment */
          tmp30 = (_size == listLength(_ilst));
          if (1 /* true */ != tmp30) goto goto_2;

          omc_OnRelaxation_unassignedLst(threadData, _ilst, _vec1);

          omc_OnRelaxation_assignLst(threadData, _ilst, _id, _vec1, _vec2);
          tmpMeta31 = mmc_mk_box3(0, mmc_mk_integer(_id + _size), _vec1, _vec2);
          tmpMeta1 = tmpMeta31;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_integer tmp36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_boolean tmp39;
          modelica_boolean tmp40;
          modelica_metatype tmpMeta41;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,6,1) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,6,2) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 2));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmp36 = mmc_unbox_integer(tmpMeta35);
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          _cr = tmpMeta34;
          _id = tmp36  /* pattern as ty=Integer */;
          _vec1 = tmpMeta37;
          _vec2 = tmpMeta38;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp39 = omc_OnRelaxation_expHasCref(threadData, _e1, _cr);
          if (0 /* false */ != tmp39) goto goto_2;

          omc_BackendVariable_getVar(threadData, _cr, _vars ,&_ilst);

          /* Pattern-matching assignment */
          tmp40 = (_size == listLength(_ilst));
          if (1 /* true */ != tmp40) goto goto_2;

          omc_OnRelaxation_unassignedLst(threadData, _ilst, _vec1);

          omc_OnRelaxation_assignLst(threadData, _ilst, _id, _vec1, _vec2);
          tmpMeta41 = mmc_mk_box3(0, mmc_mk_integer(_id + _size), _vec1, _vec2);
          tmpMeta1 = tmpMeta41;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta42;
          modelica_integer tmp43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_boolean tmp46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_boolean tmp51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_integer tmp54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmp43 = mmc_unbox_integer(tmpMeta42);
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          _id = tmp43  /* pattern as ty=Integer */;
          _vec1 = tmpMeta44;
          _vec2 = tmpMeta45;
          /* Pattern matching succeeded */
          _elst = omc_Expression_flattenArrayExpToList(threadData, _e1);

          _crlst = omc_List_map(threadData, _elst, boxvar_Expression_expCrefNegCref);

          _crlst = omc_List_uniqueOnTrue(threadData, _crlst, boxvar_ComponentReferenceBasics_crefEqualNoStringCompare);

          /* Pattern-matching assignment */
          tmp46 = (_size == listLength(_crlst));
          if (1 /* true */ != tmp46) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta47 = _crlst;
          if (listEmpty(tmpMeta47)) goto goto_2;
          tmpMeta48 = MMC_CAR(tmpMeta47);
          tmpMeta49 = MMC_CDR(tmpMeta47);
          _cr = tmpMeta48;
          _crlst1 = tmpMeta49;

          /* Pattern-matching assignment */
          tmpMeta50 = mmc_mk_box1(0, _cr);
          tmp51 = omc_List_all(threadData, _crlst1, (modelica_fnptr) mmc_mk_box2(0,closure0_ComponentReferenceBasics_crefEqualWithoutLastSubs,tmpMeta50));
          if (1 /* true */ != tmp51) goto goto_2;

          _set = omc_HashSet_emptyHashSet(threadData);

          _crnosubs = omc_ComponentReferenceBasics_crefStripLastSubs(threadData, _cr);

          _set = omc_OnRelaxation_addCrefandParentsToSet(threadData, _crnosubs, _set, mmc_mk_none());

          _set = omc_List_fold(threadData, _crlst, boxvar_BaseHashSet_add, _set);

          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta55 = mmc_mk_box2(0, _set, mmc_mk_boolean(0 /* false */));
          omc_Expression_traverseExpTopDown(threadData, _e2, boxvar_OnRelaxation_expHasCreftraverser, tmpMeta55, &tmpMeta52);
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 2));
          tmp54 = mmc_unbox_integer(tmpMeta53);
          if (0 /* false */ != tmp54) goto goto_2;

          omc_BackendVariable_getVarLst(threadData, _crlst, _vars ,&_ilst);

          omc_OnRelaxation_unassignedLst(threadData, _ilst, _vec1);

          omc_OnRelaxation_assignLst(threadData, _ilst, _id, _vec1, _vec2);
          tmpMeta56 = mmc_mk_box3(0, mmc_mk_integer(_id + _size), _vec1, _vec2);
          tmpMeta1 = tmpMeta56;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta57;
          modelica_integer tmp58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_boolean tmp61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_boolean tmp66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_integer tmp69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmp58 = mmc_unbox_integer(tmpMeta57);
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          _id = tmp58  /* pattern as ty=Integer */;
          _vec1 = tmpMeta59;
          _vec2 = tmpMeta60;
          /* Pattern matching succeeded */
          _elst = omc_Expression_flattenArrayExpToList(threadData, _e2);

          _crlst = omc_List_map(threadData, _elst, boxvar_Expression_expCrefNegCref);

          _crlst = omc_List_uniqueOnTrue(threadData, _crlst, boxvar_ComponentReferenceBasics_crefEqualNoStringCompare);

          /* Pattern-matching assignment */
          tmp61 = (_size == listLength(_crlst));
          if (1 /* true */ != tmp61) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta62 = _crlst;
          if (listEmpty(tmpMeta62)) goto goto_2;
          tmpMeta63 = MMC_CAR(tmpMeta62);
          tmpMeta64 = MMC_CDR(tmpMeta62);
          _cr = tmpMeta63;
          _crlst1 = tmpMeta64;

          /* Pattern-matching assignment */
          tmpMeta65 = mmc_mk_box1(0, _cr);
          tmp66 = omc_List_all(threadData, _crlst1, (modelica_fnptr) mmc_mk_box2(0,closure1_ComponentReferenceBasics_crefEqualWithoutLastSubs,tmpMeta65));
          if (1 /* true */ != tmp66) goto goto_2;

          _set = omc_HashSet_emptyHashSet(threadData);

          _crnosubs = omc_ComponentReferenceBasics_crefStripLastSubs(threadData, _cr);

          _set = omc_OnRelaxation_addCrefandParentsToSet(threadData, _crnosubs, _set, mmc_mk_none());

          _set = omc_List_fold(threadData, _crlst, boxvar_BaseHashSet_add, _set);

          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta70 = mmc_mk_box2(0, _set, mmc_mk_boolean(0 /* false */));
          omc_Expression_traverseExpTopDown(threadData, _e1, boxvar_OnRelaxation_expHasCreftraverser, tmpMeta70, &tmpMeta67);
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta67), 2));
          tmp69 = mmc_unbox_integer(tmpMeta68);
          if (0 /* false */ != tmp69) goto goto_2;

          omc_BackendVariable_getVarLst(threadData, _crlst, _vars ,&_ilst);

          omc_OnRelaxation_unassignedLst(threadData, _ilst, _vec1);

          omc_OnRelaxation_assignLst(threadData, _ilst, _id, _vec1, _vec2);
          tmpMeta71 = mmc_mk_box3(0, mmc_mk_integer(_id + _size), _vec1, _vec2);
          tmpMeta1 = tmpMeta71;
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
  _outTpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_vectorMatching1(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype _size, modelica_metatype _vars, modelica_metatype _inTpl)
{
  modelica_integer tmp1;
  modelica_metatype _outTpl = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _outTpl = omc_OnRelaxation_vectorMatching1(threadData, _e1, _e2, tmp1, _vars, _inTpl);
  /* skip box _outTpl; tuple<#Integer, array<#Integer>, array<#Integer>> */
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_vectorMatching(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _vars, modelica_metatype _inTpl)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _eqn;
    tmp4_2 = _inTpl;
    {
      modelica_integer _id;
      modelica_integer _size;
      modelica_metatype _vec1 = NULL;
      modelica_metatype _vec2 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _ds = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _id has no default value.
      // _size has no default value.
      // _vec1 has no default value.
      // _vec2 has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _ds has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _ds = tmpMeta6;
          _e1 = tmpMeta7;
          _e2 = tmpMeta8;
          /* Pattern matching succeeded */
          _size = mmc_unbox_integer(omc_List_fold(threadData, _ds, boxvar_intMul, mmc_mk_integer(((modelica_integer) 1))));
          tmpMeta1 = omc_OnRelaxation_vectorMatching1(threadData, _e1, _e2, _size, _vars, _inTpl);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _ds = tmpMeta9;
          _e2 = tmpMeta10;
          _e1 = tmpMeta11;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _size = mmc_unbox_integer(omc_List_fold(threadData, _ds, boxvar_intMul, mmc_mk_integer(((modelica_integer) 1))));
          tmpMeta1 = omc_OnRelaxation_vectorMatching1(threadData, _e2, _e1, _size, _vars, _inTpl);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _size = tmp13  /* pattern as ty=Integer */;
          _e1 = tmpMeta14;
          _e2 = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_OnRelaxation_vectorMatching1(threadData, _e1, _e2, _size, _vars, _inTpl);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _size = tmp17  /* pattern as ty=Integer */;
          _e2 = tmpMeta18;
          _e1 = tmpMeta19;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_OnRelaxation_vectorMatching1(threadData, _e2, _e1, _size, _vars, _inTpl);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _id = tmp21  /* pattern as ty=Integer */;
          _vec1 = tmpMeta22;
          _vec2 = tmpMeta23;
          /* Pattern matching succeeded */
          _size = omc_BackendEquation_equationSize(threadData, _eqn);
          tmpMeta24 = mmc_mk_box3(0, mmc_mk_integer(_id + _size), _vec1, _vec2);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outTpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_onefreeMatchingBFS1(threadData_t *threadData, modelica_metatype _rows, modelica_integer _c, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_integer _mark, modelica_metatype _inNextQeue)
{
  modelica_metatype _outNextQeue = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNextQeue has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _rows;
    {
      modelica_integer _r;
      modelica_metatype _vareqns = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _vareqns has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _r = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          arrayUpdate(_ass1, _r, mmc_mk_integer(_c));

          arrayUpdate(_ass2, _c, mmc_mk_integer(_r));

          _vareqns = omc_List_removeOnTrue(threadData, _ass2, boxvar_OnRelaxation_isAssignedSaveEnhanced, arrayGet(_mt,_r) /* DAE.ASUB */);
          tmpMeta1 = listAppend(_inNextQeue, _vareqns);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNextQeue;
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
  _outNextQeue = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNextQeue;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_onefreeMatchingBFS1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _c, modelica_metatype _mt, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_metatype _mark, modelica_metatype _inNextQeue)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outNextQeue = NULL;
  tmp1 = mmc_unbox_integer(_c);
  tmp2 = mmc_unbox_integer(_mark);
  _outNextQeue = omc_OnRelaxation_onefreeMatchingBFS1(threadData, _rows, tmp1, _mt, _ass1, _ass2, _columark, tmp2, _inNextQeue);
  /* skip box _outNextQeue; list<#Integer> */
  return _outNextQeue;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isAssignedSaveEnhanced(threadData_t *threadData, modelica_metatype _ass, modelica_integer _inTpl)
{
  modelica_boolean _outB;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outB has no default value.
  _outB = ((_inTpl > ((modelica_integer) 0))?(mmc_unbox_integer(arrayGet(_ass,_inTpl) /* DAE.ASUB */) > ((modelica_integer) 0)):1 /* true */);
  _return: OMC_LABEL_UNUSED
  return _outB;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isAssignedSaveEnhanced(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _inTpl)
{
  modelica_integer tmp1;
  modelica_boolean _outB;
  modelica_metatype out_outB;
  tmp1 = mmc_unbox_integer(_inTpl);
  _outB = omc_OnRelaxation_isAssignedSaveEnhanced(threadData, _ass, tmp1);
  out_outB = mmc_mk_icon(_outB);
  return out_outB;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_onefreeMatchingBFS(threadData_t *threadData, modelica_metatype _queue, modelica_metatype _m, modelica_metatype _mt, modelica_integer _size, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_integer _mark, modelica_metatype _nextQeue)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _queue;
    tmp3_2 = _nextQeue;
    {
      modelica_integer _c;
      modelica_metatype _rest = NULL;
      modelica_metatype _newqueue = NULL;
      modelica_metatype _rows = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _c has no default value.
      // _rest has no default value.
      // _newqueue has no default value.
      // _rows has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (!listEmpty(tmp3_2)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          /* Tail recursive call */
          _queue = _nextQeue;
          _nextQeue = tmpMeta5;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta6 = MMC_CAR(tmp3_1);
          tmpMeta7 = MMC_CDR(tmp3_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          
          _c = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _rows = omc_List_removeOnTrue(threadData, _ass1, boxvar_OnRelaxation_isAssignedSaveEnhanced, arrayGet(_m,_c) /* DAE.ASUB */);

          _newqueue = omc_OnRelaxation_onefreeMatchingBFS1(threadData, _rows, _c, _mt, _ass1, _ass2, _columark, _mark, _nextQeue);

          /* Tail recursive call */
          _queue = _rest;
          _nextQeue = _newqueue;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_onefreeMatchingBFS(threadData_t *threadData, modelica_metatype _queue, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _size, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _columark, modelica_metatype _mark, modelica_metatype _nextQeue)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_size);
  tmp2 = mmc_unbox_integer(_mark);
  omc_OnRelaxation_onefreeMatchingBFS(threadData, _queue, _m, _mt, tmp1, _ass1, _ass2, _columark, tmp2, _nextQeue);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_unassignedLst(threadData_t *threadData, modelica_metatype _vlst, modelica_metatype _ass1)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _vlst;
    {
      modelica_integer _v;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _v has no default value.
      // _rest has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_boolean tmp8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _v = tmp7  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (mmc_unbox_integer(arrayGet(_ass1,_v) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp8) goto goto_1;

          /* Tail recursive call */
          _vlst = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_assignLst(threadData_t *threadData, modelica_metatype _vlst, modelica_integer _e, modelica_metatype _ass1, modelica_metatype _ass2)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _vlst;
    {
      modelica_integer _v;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _v has no default value.
      // _rest has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _v = tmp7  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          arrayUpdate(_ass1, _v, mmc_mk_integer(_e));

          arrayUpdate(_ass2, _e, mmc_mk_integer(_v));

          /* Tail recursive call */
          _vlst = _rest;
          _e = ((modelica_integer) 1) + _e;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_assignLst(threadData_t *threadData, modelica_metatype _vlst, modelica_metatype _e, modelica_metatype _ass1, modelica_metatype _ass2)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_e);
  omc_OnRelaxation_assignLst(threadData, _vlst, tmp1, _ass1, _ass2);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_expHasCreftraverser(threadData_t *threadData, modelica_metatype _e, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outTpl = NULL;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cont has no default value.
  // _outTpl has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _e;
    tmp4_2 = _inTpl;
    {
      modelica_boolean _b;
      modelica_metatype _cr = NULL;
      modelica_metatype _set = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _b has no default value.
      // _cr has no default value.
      // _set has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (0 /* false */ != tmp8) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _set = tmpMeta6;
          _cr = tmpMeta9;
          /* Pattern matching succeeded */
          _b = omc_BaseHashSet_has(threadData, _cr, _set);
          tmpMeta10 = mmc_mk_box2(0, _set, mmc_mk_boolean(_b));
          tmpMeta[0+0] = _e;
          tmp1_c1 = (!_b);
          tmpMeta[0+2] = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          _set = tmpMeta11;
          _b = tmp13  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box2(0, _set, mmc_mk_boolean(_b));
          tmpMeta[0+0] = _e;
          tmp1_c1 = (!_b);
          tmpMeta[0+2] = tmpMeta14;
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
  _outExp = tmpMeta[0+0];
  _cont = tmp1_c1;
  _outTpl = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_expHasCreftraverser(threadData_t *threadData, modelica_metatype _e, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_OnRelaxation_expHasCreftraverser(threadData, _e, _inTpl, &_cont, out_outTpl);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTpl; tuple<tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<DAE.ComponentRef>>>, #Integer, #Integer, tuple<.HashSet.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashSet.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashSet.FuncCrefStr<function>(DAE.ComponentRef cr) => String>>, #Boolean> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_addCrefandParentsToSet(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _ihs, modelica_metatype _oprecr)
{
  modelica_metatype _ohs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ohs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inCref;
    tmp4_2 = _oprecr;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _idcr = NULL;
      modelica_metatype _precr = NULL;
      modelica_metatype _subcr = NULL;
      modelica_metatype _crlst = NULL;
      modelica_metatype _set = NULL;
      modelica_metatype _ty = NULL;
      modelica_string _ident = NULL;
      modelica_metatype _subscriptLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _idcr has no default value.
      // _precr has no default value.
      // _subcr has no default value.
      // _crlst has no default value.
      // _set has no default value.
      // _ty has no default value.
      // _ident has no default value.
      // _subscriptLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          _cr = tmp4_1;
          /* Pattern matching succeeded */
          _crlst = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);
          tmpMeta6 = mmc_mk_cons(_cr, _crlst);
          tmpMeta1 = omc_List_fold(threadData, tmpMeta6, boxvar_BaseHashSet_add, _ihs);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _cr = tmp4_1;
          _precr = tmpMeta7;
          /* Pattern matching succeeded */
          _crlst = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          tmpMeta8 = mmc_mk_cons(_cr, _crlst);
          _crlst = omc_List_map1r(threadData, tmpMeta8, boxvar_ComponentReference_joinCrefs, _precr);
          tmpMeta1 = omc_List_fold(threadData, _crlst, boxvar_BaseHashSet_add, _ihs);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (!optionNone(tmp4_2)) goto tmp3_end;
          _ident = tmpMeta9;
          _ty = tmpMeta10;
          _subscriptLst = tmpMeta11;
          _subcr = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          _idcr = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _ident, _ty, tmpMeta13);

          _set = omc_BaseHashSet_add(threadData, _idcr, _ihs);

          _idcr = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _ident, _ty, _subscriptLst);

          _set = omc_BaseHashSet_add(threadData, _idcr, _set);
          /* Tail recursive call */
          _inCref = _subcr;
          _ihs = _set;
          _oprecr = mmc_mk_some(_idcr);
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _ident = tmpMeta14;
          _ty = tmpMeta15;
          _subscriptLst = tmpMeta16;
          _subcr = tmpMeta17;
          _precr = tmpMeta18;
          /* Pattern matching succeeded */
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          _idcr = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _ident, _ty, tmpMeta19);

          _idcr = omc_ComponentReference_joinCrefs(threadData, _precr, _idcr);

          _set = omc_BaseHashSet_add(threadData, _idcr, _ihs);

          _idcr = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _ident, _ty, _subscriptLst);

          _precr = omc_ComponentReference_joinCrefs(threadData, _precr, _idcr);

          _set = omc_BaseHashSet_add(threadData, _precr, _ihs);
          /* Tail recursive call */
          _inCref = _subcr;
          _ihs = _set;
          _oprecr = mmc_mk_some(_precr);
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
  _ohs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ohs;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_expHasCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _cr)
{
  modelica_boolean _isthere;
  modelica_metatype _set = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isthere has no default value.
  // _set has no default value.
  _set = omc_HashSet_emptyHashSet(threadData);

  _set = omc_OnRelaxation_addCrefandParentsToSet(threadData, _cr, _set, mmc_mk_none());

  /* Pattern-matching tuple assignment, wild first pattern */
  tmpMeta4 = mmc_mk_box2(0, _set, mmc_mk_boolean(0 /* false */));
  omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_OnRelaxation_expHasCreftraverser, tmpMeta4, &tmpMeta1);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _isthere = tmp3  /* pattern as ty=Boolean */;
  _return: OMC_LABEL_UNUSED
  return _isthere;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_expHasCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _cr)
{
  modelica_boolean _isthere;
  modelica_metatype out_isthere;
  _isthere = omc_OnRelaxation_expHasCref(threadData, _inExp, _cr);
  out_isthere = mmc_mk_icon(_isthere);
  return out_isthere;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getOrphans(threadData_t *threadData, modelica_integer _indx, modelica_integer _size, modelica_metatype _ass, modelica_metatype _inOrphans)
{
  modelica_metatype _outOrphans = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOrphans has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _orphans = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _orphans has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_indx > _size);
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta1 = _inOrphans;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _orphans = omc_List_consOnTrue(threadData, (mmc_unbox_integer(arrayGet(_ass,_indx) /* DAE.ASUB */) < ((modelica_integer) 1)), mmc_mk_integer(_indx), _inOrphans);
          tmpMeta1 = omc_OnRelaxation_getOrphans(threadData, ((modelica_integer) 1) + _indx, _size, _ass, _orphans);
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
  _outOrphans = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outOrphans;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphans(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _size, modelica_metatype _ass, modelica_metatype _inOrphans)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outOrphans = NULL;
  tmp1 = mmc_unbox_integer(_indx);
  tmp2 = mmc_unbox_integer(_size);
  _outOrphans = omc_OnRelaxation_getOrphans(threadData, tmp1, tmp2, _ass, _inOrphans);
  /* skip box _outOrphans; list<#Integer> */
  return _outOrphans;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_markIndexdColums(threadData_t *threadData, modelica_integer _i, modelica_integer _size, modelica_integer _mark, modelica_metatype _colummarks, modelica_metatype _vec2)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_boolean tmp5;
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = (_i > _size);
          if (0 /* false */ != tmp5) goto goto_1;

          /* Pattern-matching assignment */
          tmp6 = (mmc_unbox_integer(arrayGet(_vec2,_i) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (1 /* true */ != tmp6) goto goto_1;

          arrayUpdate(_colummarks, mmc_unbox_integer(arrayGet(_vec2,_i) /* DAE.ASUB */), mmc_mk_integer(_mark));

          omc_OnRelaxation_markIndexdColums(threadData, ((modelica_integer) 1) + _i, _size, _mark, _colummarks, _vec2);
          goto tmp2_done;
        }
        case 1: {
          modelica_boolean tmp7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = (_i > _size);
          if (0 /* false */ != tmp7) goto goto_1;

          omc_OnRelaxation_markIndexdColums(threadData, ((modelica_integer) 1) + _i, _size, _mark, _colummarks, _vec2);
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
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 3) {
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_markIndexdColums(threadData_t *threadData, modelica_metatype _i, modelica_metatype _size, modelica_metatype _mark, modelica_metatype _colummarks, modelica_metatype _vec2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  tmp1 = mmc_unbox_integer(_i);
  tmp2 = mmc_unbox_integer(_size);
  tmp3 = mmc_unbox_integer(_mark);
  omc_OnRelaxation_markIndexdColums(threadData, tmp1, tmp2, tmp3, _colummarks, _vec2);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getIndexesForEqnsRest(threadData_t *threadData, modelica_integer _i, modelica_integer _size, modelica_integer _id, modelica_integer _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec1, modelica_metatype _vec2)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_boolean tmp5;
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = (_i > _size);
          if (0 /* false */ != tmp5) goto goto_1;

          /* Pattern-matching assignment */
          tmp6 = (_mark == mmc_unbox_integer(arrayGet(_colummarks,_i) /* DAE.ASUB */));
          if (1 /* true */ != tmp6) goto goto_1;

          omc_OnRelaxation_getIndexesForEqnsRest(threadData, ((modelica_integer) 1) + _i, _size, _id, _mark, _colummarks, _ass1, _ass2, _vec1, _vec2);
          goto tmp2_done;
        }
        case 1: {
          modelica_boolean tmp7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = (_i > _size);
          if (0 /* false */ != tmp7) goto goto_1;

          arrayUpdate(_vec1, _id, arrayGet(_ass2,_i) /* DAE.ASUB */);

          arrayUpdate(_vec2, _id, mmc_mk_integer(_i));

          omc_OnRelaxation_getIndexesForEqnsRest(threadData, ((modelica_integer) 1) + _i, _size, ((modelica_integer) 1) + _id, _mark, _colummarks, _ass1, _ass2, _vec1, _vec2);
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
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 3) {
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_getIndexesForEqnsRest(threadData_t *threadData, modelica_metatype _i, modelica_metatype _size, modelica_metatype _id, modelica_metatype _mark, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec1, modelica_metatype _vec2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  tmp1 = mmc_unbox_integer(_i);
  tmp2 = mmc_unbox_integer(_size);
  tmp3 = mmc_unbox_integer(_id);
  tmp4 = mmc_unbox_integer(_mark);
  omc_OnRelaxation_getIndexesForEqnsRest(threadData, tmp1, tmp2, tmp3, tmp4, _colummarks, _ass1, _ass2, _vec1, _vec2);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_markIndexSubgraph(threadData_t *threadData, modelica_boolean _b, modelica_metatype _r, modelica_integer _mark, modelica_metatype _rowmarks)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_boolean tmp3_1;
    tmp3_1 = _b;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (0 /* false */ != tmp3_1) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          if (1 /* true */ != tmp3_1) goto tmp2_end;
          /* Pattern matching succeeded */
          omc_List_map2__0(threadData, _r, boxvar_OnRelaxation_doMark, _rowmarks, mmc_mk_integer(_mark));
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_markIndexSubgraph(threadData_t *threadData, modelica_metatype _b, modelica_metatype _r, modelica_metatype _mark, modelica_metatype _rowmarks)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_b);
  tmp2 = mmc_unbox_integer(_mark);
  omc_OnRelaxation_markIndexSubgraph(threadData, tmp1, _r, tmp2, _rowmarks);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_getIndexSubGraph(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _vorphan, modelica_metatype _m, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orowmarks, modelica_metatype _ocolummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_boolean _ifound)
{
  modelica_boolean _found;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _found has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _rows;
    {
      modelica_integer _r;
      modelica_integer _e;
      modelica_metatype _rest = NULL;
      modelica_metatype _nextrows = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _e has no default value.
      // _rest has no default value.
      // _nextrows has no default value.
      // _b has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = _ifound;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _r = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = listMember(mmc_mk_integer(_r), _vorphan);
          if (1 /* true */ != tmp9) goto goto_2;

          omc_OnRelaxation_getIndexSubGraph(threadData, _rest, _vorphan, _m, _mT, _mark, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass2, 0 /* false */);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_boolean tmp13;
          modelica_boolean tmp14;
          modelica_boolean tmp15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          tmp12 = mmc_unbox_integer(tmpMeta10);
          _r = tmp12  /* pattern as ty=Integer */;
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = listMember(mmc_mk_integer(_r), _vorphan);
          if (0 /* false */ != tmp13) goto goto_2;

          /* Pattern-matching assignment */
          tmp14 = (mmc_unbox_integer(arrayGet(_orowmarks,_r) /* DAE.ASUB */) == ((modelica_integer) 1));
          if (0 /* false */ != tmp14) goto goto_2;

          /* Pattern-matching assignment */
          tmp15 = (mmc_unbox_integer(arrayGet(_rowmarks,_r) /* DAE.ASUB */) == _mark);
          if (1 /* true */ != tmp15) goto goto_2;

          _e = mmc_unbox_integer(arrayGet(_ass1,_r) /* DAE.ASUB */);

          omc_List_map2__0(threadData, arrayGet(_ass2,_e) /* DAE.ASUB */, boxvar_OnRelaxation_doMark, _rowmarks, mmc_mk_integer(_mark));
          tmp1 = omc_OnRelaxation_getIndexSubGraph(threadData, _rest, _vorphan, _m, _mT, _mark, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass2, 1 /* true */);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_boolean tmp19;
          modelica_boolean tmp20;
          modelica_boolean tmp21;
          modelica_boolean tmp22;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          tmp18 = mmc_unbox_integer(tmpMeta16);
          _r = tmp18  /* pattern as ty=Integer */;
          _rest = tmpMeta17;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp19 = listMember(mmc_mk_integer(_r), _vorphan);
          if (0 /* false */ != tmp19) goto goto_2;

          /* Pattern-matching assignment */
          tmp20 = (mmc_unbox_integer(arrayGet(_orowmarks,_r) /* DAE.ASUB */) == ((modelica_integer) 1));
          if (0 /* false */ != tmp20) goto goto_2;

          _e = mmc_unbox_integer(arrayGet(_ass1,_r) /* DAE.ASUB */);

          /* Pattern-matching assignment */
          tmp21 = (mmc_unbox_integer(arrayGet(_ocolummarks,_e) /* DAE.ASUB */) == ((modelica_integer) 1));
          if (0 /* false */ != tmp21) goto goto_2;

          /* Pattern-matching assignment */
          tmp22 = (mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp22) goto goto_2;

          _nextrows = omc_List_select(threadData, arrayGet(_m,_e) /* DAE.ASUB */, boxvar_Util_intPositive);

          _nextrows = omc_List_setDifferenceOnTrue(threadData, _nextrows, arrayGet(_ass2,_e) /* DAE.ASUB */, boxvar_intEq);

          arrayUpdate(_colummarks, _e, mmc_mk_integer(_mark));

          _b = omc_OnRelaxation_getIndexSubGraph(threadData, _nextrows, _vorphan, _m, _mT, _mark, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass2, 0 /* false */);

          omc_OnRelaxation_markIndexSubgraph(threadData, _b, arrayGet(_ass2,_e) /* DAE.ASUB */, _mark, _rowmarks);
          tmp1 = omc_OnRelaxation_getIndexSubGraph(threadData, _rest, _vorphan, _m, _mT, _mark, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass2, (_b || _ifound));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta23 = MMC_CAR(tmp4_1);
          tmpMeta24 = MMC_CDR(tmp4_1);
          _rest = tmpMeta24;
          /* Pattern matching succeeded */
          tmp1 = omc_OnRelaxation_getIndexSubGraph(threadData, _rest, _vorphan, _m, _mT, _mark, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass2, _ifound);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _found = tmp1;
  _return: OMC_LABEL_UNUSED
  return _found;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getIndexSubGraph(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _vorphan, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orowmarks, modelica_metatype _ocolummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _ifound)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _found;
  modelica_metatype out_found;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_ifound);
  _found = omc_OnRelaxation_getIndexSubGraph(threadData, _rows, _vorphan, _m, _mT, tmp1, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass2, tmp2);
  out_found = mmc_mk_icon(_found);
  return out_found;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_doMark(threadData_t *threadData, modelica_integer _index, modelica_metatype _arr, modelica_integer _mark)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  arrayUpdate(_arr, _index, mmc_mk_integer(_mark));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_doMark(threadData_t *threadData, modelica_metatype _index, modelica_metatype _arr, modelica_metatype _mark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_index);
  tmp2 = mmc_unbox_integer(_mark);
  omc_OnRelaxation_doMark(threadData, tmp1, _arr, tmp2);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_doAssign(threadData_t *threadData, modelica_integer _index, modelica_metatype _arr, modelica_metatype _assign)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  arrayUpdate(_arr, _index, _assign);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_doAssign(threadData_t *threadData, modelica_metatype _index, modelica_metatype _arr, modelica_metatype _assign)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_index);
  omc_OnRelaxation_doAssign(threadData, tmp1, _arr, _assign);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isNoResOrphan(threadData_t *threadData, modelica_integer _indx, modelica_metatype _ass)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = (!listEmpty(arrayGet(_ass,_indx) /* DAE.ASUB */));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isNoResOrphan(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _ass)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_indx);
  _b = omc_OnRelaxation_isNoResOrphan(threadData, tmp1, _ass);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isResOrphan(threadData_t *threadData, modelica_integer _indx, modelica_metatype _ass)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = listEmpty(arrayGet(_ass,_indx) /* DAE.ASUB */);
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isResOrphan(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _ass)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_indx);
  _b = omc_OnRelaxation_isResOrphan(threadData, tmp1, _ass);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isNoOrphan(threadData_t *threadData, modelica_integer _indx, modelica_metatype _ass)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = (mmc_unbox_integer(arrayGet(_ass,_indx) /* DAE.ASUB */) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isNoOrphan(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _ass)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_indx);
  _b = omc_OnRelaxation_isNoOrphan(threadData, tmp1, _ass);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isOrphan(threadData_t *threadData, modelica_integer _indx, modelica_metatype _ass)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = (mmc_unbox_integer(arrayGet(_ass,_indx) /* DAE.ASUB */) < ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isOrphan(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _ass)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_indx);
  _b = omc_OnRelaxation_isOrphan(threadData, tmp1, _ass);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_marked(threadData_t *threadData, modelica_integer _indx, modelica_metatype _markarray, modelica_integer _mark)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = (mmc_unbox_integer(arrayGet(_markarray,_indx) /* DAE.ASUB */) == _mark);
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_marked(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _markarray, modelica_metatype _mark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_indx);
  tmp2 = mmc_unbox_integer(_mark);
  _b = omc_OnRelaxation_marked(threadData, tmp1, _markarray, tmp2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_unmarked(threadData_t *threadData, modelica_integer _indx, modelica_metatype _markarray, modelica_integer _mark)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = (mmc_unbox_integer(arrayGet(_markarray,_indx) /* DAE.ASUB */) != _mark);
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_unmarked(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _markarray, modelica_metatype _mark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_indx);
  tmp2 = mmc_unbox_integer(_mark);
  _b = omc_OnRelaxation_unmarked(threadData, tmp1, _markarray, tmp2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getIndexQueque1(threadData_t *threadData, modelica_metatype _rows, modelica_integer _c, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _rowmarks, modelica_boolean *out_ob)
{
  modelica_metatype _ocolums = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _ob;
  modelica_metatype _colums = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _ocolums = tmpMeta1;
  _ob = 0 /* false */;
  // _colums has no default value.
  {
    modelica_metatype _r;
    for (tmpMeta2 = _rows; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _r = MMC_CAR(tmpMeta2);
      if((mmc_unbox_integer(arrayGet(_rowmarks,mmc_unbox_integer(_r)) /* DAE.ASUB */) == _mark))
      {
        _ob = 1 /* true */;

        _colums = omc_List_select(threadData, arrayGet(_mT,mmc_unbox_integer(_r)) /* DAE.ASUB */, boxvar_Util_intPositive);

        _colums = omc_List_removeOnTrue(threadData, mmc_mk_integer(_c), boxvar_intEq, _colums);

        _ocolums = listAppend(_colums, _ocolums);
      }
    }
  }

  _ocolums = omc_List_unique(threadData, _ocolums);
  _return: OMC_LABEL_UNUSED
  if (out_ob) { *out_ob = _ob; }
  return _ocolums;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getIndexQueque1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _c, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype *out_ob)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _ob;
  modelica_metatype _ocolums = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_c);
  tmp2 = mmc_unbox_integer(_mark);
  _ocolums = omc_OnRelaxation_getIndexQueque1(threadData, _rows, tmp1, _mT, tmp2, _rowmarks, &_ob);
  /* skip box _ocolums; list<#Integer> */
  if (out_ob) { *out_ob = mmc_mk_icon(_ob); }
  return _ocolums;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getIndexQueque(threadData_t *threadData, modelica_metatype _colums, modelica_metatype _m, modelica_metatype _mT, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec2, modelica_metatype _queuemark, modelica_metatype _nextqueue, modelica_metatype _iqueue, modelica_metatype _iqueue1)
{
  modelica_metatype _oqueue = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oqueue has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _colums;
    tmp4_2 = _nextqueue;
    {
      modelica_integer _c;
      modelica_metatype _rest = NULL;
      modelica_metatype _queue = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _queue1 = NULL;
      modelica_metatype _colums1 = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _c has no default value.
      // _rest has no default value.
      // _queue has no default value.
      // _r has no default value.
      // _queue1 has no default value.
      // _colums1 has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _iqueue1;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _queue = omc_List_unique(threadData, _iqueue);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = mmc_mk_cons(_queue, _iqueue1);
          /* Tail recursive call */
          _colums = _nextqueue;
          _nextqueue = tmpMeta6;
          _iqueue = tmpMeta7;
          _iqueue1 = tmpMeta8;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          tmp11 = mmc_unbox_integer(tmpMeta9);
          
          _c = tmp11  /* pattern as ty=Integer */;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          _r = arrayGet(_ass2,_c) /* DAE.ASUB */;

          _colums1 = omc_OnRelaxation_getIndexQueque1(threadData, _r, _c, _mT, _mark, _rowmarks ,&_b2);

          _b1 = (!listEmpty(_colums));

          _queue = (_b1?omc_List_unionOnTrue(threadData, _colums1, _nextqueue, boxvar_intEq):_nextqueue);

          _queue1 = omc_List_consOnTrue(threadData, _b2, mmc_mk_integer(_c), _iqueue);
          /* Tail recursive call */
          _colums = _rest;
          _nextqueue = _queue;
          _iqueue = _queue1;
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
  _oqueue = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oqueue;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getIndexQueque(threadData_t *threadData, modelica_metatype _colums, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec2, modelica_metatype _queuemark, modelica_metatype _nextqueue, modelica_metatype _iqueue, modelica_metatype _iqueue1)
{
  modelica_integer tmp1;
  modelica_metatype _oqueue = NULL;
  tmp1 = mmc_unbox_integer(_mark);
  _oqueue = omc_OnRelaxation_getIndexQueque(threadData, _colums, _m, _mT, tmp1, _rowmarks, _colummarks, _ass1, _ass2, _vec2, _queuemark, _nextqueue, _iqueue, _iqueue1);
  /* skip box _oqueue; list<list<#Integer>> */
  return _oqueue;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_setIndexQueue(threadData_t *threadData, modelica_integer _col, modelica_metatype _tpl, modelica_metatype _itpl)
{
  modelica_metatype _otpl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _otpl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _tpl;
    tmp4_2 = _itpl;
    {
      modelica_metatype _vec2 = NULL;
      modelica_metatype _colummark = NULL;
      modelica_metatype _vec1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _rlst = NULL;
      modelica_metatype _elst = NULL;
      modelica_metatype _queuemark = NULL;
      modelica_integer _index;
      modelica_integer _mark;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vec2 has no default value.
      // _colummark has no default value.
      // _vec1 has no default value.
      // _ass2 has no default value.
      // _r has no default value.
      // _rlst has no default value.
      // _elst has no default value.
      // _queuemark has no default value.
      // _index has no default value.
      // _mark has no default value.
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
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _vec1 = tmpMeta6;
          _vec2 = tmpMeta7;
          _ass2 = tmpMeta8;
          _queuemark = tmpMeta9;
          _colummark = tmpMeta10;
          _mark = tmp12  /* pattern as ty=Integer */;
          _index = tmp14  /* pattern as ty=Integer */;
          _elst = tmpMeta15;
          _rlst = tmpMeta16;
          /* Pattern matching succeeded */
          _r = arrayGet(_ass2,_col) /* DAE.ASUB */;

          /* Pattern-matching assignment */
          tmpMeta17 = arrayGet(_queuemark,_col) /* DAE.ASUB */;
          tmp18 = mmc_unbox_integer(tmpMeta17);
          if (0 /* false */ != tmp18) goto goto_2;

          arrayUpdate(_vec1, _index, _r);

          arrayUpdate(_vec2, _index, mmc_mk_integer(_col));

          arrayUpdate(_queuemark, _col, mmc_mk_boolean(1 /* true */));

          arrayUpdate(_colummark, _col, mmc_mk_integer(_mark));
          tmpMeta19 = mmc_mk_cons(mmc_mk_integer(_col), _elst);
          tmpMeta20 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _index), tmpMeta19, listAppend(_r, _rlst));
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_boolean tmp29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _ass2 = tmpMeta21;
          _colummark = tmpMeta22;
          _mark = tmp24  /* pattern as ty=Integer */;
          _index = tmp26  /* pattern as ty=Integer */;
          _elst = tmpMeta27;
          _rlst = tmpMeta28;
          /* Pattern matching succeeded */
          _r = arrayGet(_ass2,_col) /* DAE.ASUB */;

          /* Pattern-matching assignment */
          tmp29 = (mmc_unbox_integer(arrayGet(_colummark,_col) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp29) goto goto_2;

          arrayUpdate(_colummark, _col, mmc_mk_integer(_mark));
          tmpMeta30 = mmc_mk_cons(mmc_mk_integer(_col), _elst);
          tmpMeta31 = mmc_mk_box3(0, mmc_mk_integer(_index), tmpMeta30, listAppend(_r, _rlst));
          tmpMeta1 = tmpMeta31;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _itpl;
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
  _otpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _otpl;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_setIndexQueue(threadData_t *threadData, modelica_metatype _col, modelica_metatype _tpl, modelica_metatype _itpl)
{
  modelica_integer tmp1;
  modelica_metatype _otpl = NULL;
  tmp1 = mmc_unbox_integer(_col);
  _otpl = omc_OnRelaxation_setIndexQueue(threadData, tmp1, _tpl, _itpl);
  /* skip box _otpl; tuple<#Integer, list<#Integer>, list<#Integer>> */
  return _otpl;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_setBoarderElemts(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _m, modelica_integer _mark, modelica_metatype _arr, modelica_integer _orphan)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _elements;
    {
      modelica_integer _elem;
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _elem has no default value.
      // _rest has no default value.
      // _lst has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _elem = tmp7  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          _lst = omc_List_select2(threadData, arrayGet(_m,_elem) /* DAE.ASUB */, boxvar_OnRelaxation_unmarked, _arr, mmc_mk_integer(_mark));

          tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_orphan), _lst);
          arrayUpdate(_m, _elem, tmpMeta8);

          /* Tail recursive call */
          _elements = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_setBoarderElemts(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _m, modelica_metatype _mark, modelica_metatype _arr, modelica_metatype _orphan)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_orphan);
  omc_OnRelaxation_setBoarderElemts(threadData, _elements, _m, tmp1, _arr, tmp2);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getBorderElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _m, modelica_integer _mark, modelica_metatype _arr, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _elements;
    {
      modelica_integer _elem;
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _lst1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _elem has no default value.
      // _rest has no default value.
      // _lst has no default value.
      // _lst1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _iAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _elem = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _lst = omc_List_split2OnTrue(threadData, arrayGet(_m,_elem) /* DAE.ASUB */, boxvar_OnRelaxation_unmarked, _arr, mmc_mk_integer(_mark) ,&_lst1);

          arrayUpdate(_m, _elem, _lst1);

          _lst = omc_List_select2(threadData, _lst, boxvar_OnRelaxation_unmarked, _arr, mmc_mk_integer(((modelica_integer) 1) + _mark));

          omc_List_map2__0(threadData, _lst, boxvar_OnRelaxation_doMark, _arr, mmc_mk_integer(((modelica_integer) 1) + _mark));
          /* Tail recursive call */
          _elements = _rest;
          _iAcc = listAppend(_lst, _iAcc);
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
  _oAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getBorderElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _m, modelica_metatype _mark, modelica_metatype _arr, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_metatype _oAcc = NULL;
  tmp1 = mmc_unbox_integer(_mark);
  _oAcc = omc_OnRelaxation_getBorderElements(threadData, _elements, _m, tmp1, _arr, _iAcc);
  /* skip box _oAcc; list<#Integer> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getIndexesForEqnsAdvanced(threadData_t *threadData, modelica_metatype _orphans, modelica_integer _index, modelica_metatype _m, modelica_metatype _mT, modelica_integer _imark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orowmarks, modelica_metatype _ocolummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec1, modelica_metatype _vec2, modelica_metatype _queuemark, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _shared, modelica_integer _size)
{
  modelica_integer _outMark;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMark has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _orphans;
    {
      modelica_integer _vorphan;
      modelica_integer _eorphan;
      modelica_integer _index1;
      modelica_integer _mark;
      modelica_metatype _rest = NULL;
      modelica_metatype _rows = NULL;
      modelica_metatype _queue = NULL;
      modelica_metatype _rqueue = NULL;
      modelica_metatype _bvars = NULL;
      modelica_metatype _beqns = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _vorphans = NULL;
      modelica_metatype _vorphanseqns = NULL;
      modelica_metatype _queuelst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vorphan has no default value.
      // _eorphan has no default value.
      // _index1 has no default value.
      // _mark has no default value.
      // _rest has no default value.
      // _rows has no default value.
      // _queue has no default value.
      // _rqueue has no default value.
      // _bvars has no default value.
      // _beqns has no default value.
      // _lst has no default value.
      // _vorphans has no default value.
      // _vorphanseqns has no default value.
      // _queuelst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = _imark;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
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
          modelica_metatype tmpMeta25;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _vorphan = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_orowmarks,_vorphan) /* DAE.ASUB */) == ((modelica_integer) 1));
          if (1 /* true */ != tmp9) goto goto_2;

          _eorphan = mmc_unbox_integer(arrayGet(_ass1,_vorphan) /* DAE.ASUB */);

          _vorphans = arrayGet(_ass2,_eorphan) /* DAE.ASUB */;

          _rows = omc_List_select(threadData, arrayGet(_m,_eorphan) /* DAE.ASUB */, boxvar_Util_intPositive);

          _rows = omc_List_fold1(threadData, arrayGet(_ass2,_eorphan) /* DAE.ASUB */, boxvar_List_removeOnTrue, boxvar_intEq, _rows);

          omc_OnRelaxation_getIndexSubGraph(threadData, _rows, _vorphans, _m, _mT, _imark, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass2, 0 /* false */);

          _vorphanseqns = omc_List_unique(threadData, omc_List_flatten(threadData, omc_List_map1r(threadData, _vorphans, boxvar_arrayGet, _mT)));

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _queuelst = omc_OnRelaxation_getIndexQueque(threadData, _vorphanseqns, _m, _mT, _imark, _rowmarks, _colummarks, _ass1, _ass2, _vec2, _queuemark, tmpMeta10, tmpMeta11, tmpMeta12);

          _queue = omc_List_flatten(threadData, _queuelst);

          _mark = ((modelica_integer) 2) + _imark;

          /* Pattern-matching assignment */
          tmpMeta13 = mmc_mk_box6(0, _vec1, _vec2, _ass2, _queuemark, _colummarks, mmc_mk_integer(_mark));
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box3(0, mmc_mk_integer(_index), tmpMeta14, tmpMeta15);
          tmpMeta17 = omc_List_fold1(threadData, _queue, boxvar_OnRelaxation_setIndexQueue, tmpMeta13, tmpMeta16);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 1));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 3));
          _index1 = tmp19  /* pattern as ty=Integer */;
          _queue = tmpMeta20;
          _rqueue = tmpMeta21;

          arrayUpdate(_vec1, _index1, _vorphans);

          arrayUpdate(_vec2, _index1, mmc_mk_integer(_eorphan));

          arrayUpdate(_queuemark, _eorphan, mmc_mk_boolean(1 /* true */));

          _mark = ((modelica_integer) 1) + _mark;

          omc_List_map2__0(threadData, _rqueue, boxvar_OnRelaxation_doMark, _rowmarks, mmc_mk_integer(_mark));

          omc_List_map2__0(threadData, _queue, boxvar_OnRelaxation_doMark, _colummarks, mmc_mk_integer(_mark));

          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          _bvars = omc_OnRelaxation_getBorderElements(threadData, _queue, _m, _mark, _rowmarks, tmpMeta22);

          _bvars = omc_List_fold1(threadData, _vorphans, boxvar_List_removeOnTrue, boxvar_intEq, _bvars);

          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          _beqns = omc_OnRelaxation_getBorderElements(threadData, _rqueue, _mT, _mark, _colummarks, tmpMeta23);

          _beqns = omc_List_removeOnTrue(threadData, mmc_mk_integer(_eorphan), boxvar_intEq, _beqns);

          _lst = omc_List_select2(threadData, arrayGet(_m,_eorphan) /* DAE.ASUB */, boxvar_OnRelaxation_unmarked, _rowmarks, mmc_mk_integer(_mark));

          _lst = listAppend(_vorphans, listAppend(_lst, _bvars));

          arrayUpdate(_m, _eorphan, _lst);

          _lst = omc_List_select2(threadData, _vorphanseqns, boxvar_OnRelaxation_unmarked, _colummarks, mmc_mk_integer(_mark));

          tmpMeta24 = mmc_mk_cons(mmc_mk_integer(_eorphan), _lst);
          _lst = listAppend(tmpMeta24, _beqns);

          arrayUpdate(_mT, _vorphan, _lst);

          omc_OnRelaxation_setBoarderElemts(threadData, _bvars, _mT, _mark, _colummarks, _eorphan);

          omc_OnRelaxation_setBoarderElemts(threadData, _beqns, _m, _mark, _rowmarks, _vorphan);

          omc_List_fold1(threadData, _vorphans, boxvar_OnRelaxation_markOrphans, mmc_mk_integer(((modelica_integer) -1)), _orowmarks);

          arrayUpdate(_ocolummarks, _eorphan, mmc_mk_integer(((modelica_integer) -1)));

          _vorphans = omc_List_removeOnTrue(threadData, mmc_mk_integer(_vorphan), boxvar_intEq, _vorphans);

          omc_List_fold1(threadData, _vorphans, boxvar_OnRelaxation_markOrphans, mmc_mk_integer(((modelica_integer) -1)), _orowmarks);

          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_List_fold1r(threadData, _vorphans, boxvar_arrayUpdate, tmpMeta25, _mT);
          tmp1 = omc_OnRelaxation_getIndexesForEqnsAdvanced(threadData, _rest, ((modelica_integer) 1) + _index1, _m, _mT, ((modelica_integer) 2) + _mark, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass2, _vec1, _vec2, _queuemark, _vars, _eqns, _shared, _size);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta26 = MMC_CAR(tmp4_1);
          tmpMeta27 = MMC_CDR(tmp4_1);
          _rest = tmpMeta27;
          /* Pattern matching succeeded */
          tmp1 = omc_OnRelaxation_getIndexesForEqnsAdvanced(threadData, _rest, _index, _m, _mT, _imark, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass2, _vec1, _vec2, _queuemark, _vars, _eqns, _shared, _size);
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
  _outMark = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outMark;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getIndexesForEqnsAdvanced(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _index, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _imark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orowmarks, modelica_metatype _ocolummarks, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _vec1, modelica_metatype _vec2, modelica_metatype _queuemark, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _shared, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _outMark;
  modelica_metatype out_outMark;
  tmp1 = mmc_unbox_integer(_index);
  tmp2 = mmc_unbox_integer(_imark);
  tmp3 = mmc_unbox_integer(_size);
  _outMark = omc_OnRelaxation_getIndexesForEqnsAdvanced(threadData, _orphans, tmp1, _m, _mT, tmp2, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass2, _vec1, _vec2, _queuemark, _vars, _eqns, _shared, tmp3);
  out_outMark = mmc_mk_icon(_outMark);
  return out_outMark;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getOrphansPairsConstraints1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _eqnsarr, modelica_integer _orphan, modelica_metatype _nextQueue)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;
    tmp3_1 = _eqns;
    tmp3_2 = _nextQueue;
    {
      modelica_integer _e;
      modelica_integer _o;
      modelica_metatype _rest = NULL;
      modelica_metatype _next = NULL;
      modelica_metatype _rlst = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _ass2lst = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _e has no default value.
      // _o has no default value.
      // _rest has no default value.
      // _next has no default value.
      // _rlst has no default value.
      // _lst has no default value.
      // _ass2lst has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (!listEmpty(tmp3_2)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_OnRelaxation_getOrphansPairsConstraints1(threadData, _nextQueue, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _eqnsarr, _orphan, tmpMeta5);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta6 = MMC_CAR(tmp3_1);
          tmpMeta7 = MMC_CDR(tmp3_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          
          _e = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp9) goto goto_1;

          _rlst = omc_List_select1(threadData, arrayGet(_m,_e) /* DAE.ASUB */, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _rlst = omc_List_fold1(threadData, arrayGet(_ass2,_e) /* DAE.ASUB */, boxvar_List_removeOnTrue, boxvar_intEq, _rlst);

          _next = omc_List_select1(threadData, omc_List_flatten(threadData, omc_List_map1r(threadData, _rlst, boxvar_arrayGet, _mt)), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _o = omc_OnRelaxation_hasResidualOrphan1(threadData, _next, _ass2, _eqnsarr);

          arrayUpdate(_ass1, _orphan, mmc_mk_integer(_o));

          _ass2lst = arrayGet(_ass2,_o) /* DAE.ASUB */;

          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_orphan), _ass2lst);
          _ass2lst = tmpMeta10;

          arrayUpdate(_ass2, _o, _ass2lst);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_boolean tmp14;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta11 = MMC_CAR(tmp3_1);
          tmpMeta12 = MMC_CDR(tmp3_1);
          tmp13 = mmc_unbox_integer(tmpMeta11);
          
          _e = tmp13  /* pattern as ty=Integer */;
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp14) goto goto_1;

          _rlst = omc_List_select1(threadData, arrayGet(_m,_e) /* DAE.ASUB */, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _lst = omc_List_select1(threadData, omc_List_map1r(threadData, _rlst, boxvar_arrayGet, _ass1), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _rlst = omc_List_fold1(threadData, _lst, boxvar_List_removeOnTrue, boxvar_intEq, _rlst);

          _next = omc_List_select1(threadData, omc_List_map1r(threadData, _rlst, boxvar_arrayGet, _ass1), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _next = listAppend(_nextQueue, _next);

          arrayUpdate(_colummarks, _e, mmc_mk_integer(_mark));

          omc_OnRelaxation_getOrphansPairsConstraints1(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _eqnsarr, _orphan, _next);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta15 = MMC_CAR(tmp3_1);
          tmpMeta16 = MMC_CDR(tmp3_1);
          
          _rest = tmpMeta16;
          /* Pattern matching succeeded */
          omc_OnRelaxation_getOrphansPairsConstraints1(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _eqnsarr, _orphan, _nextQueue);
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
      if (++tmp3 < 5) {
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_getOrphansPairsConstraints1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _eqnsarr, modelica_metatype _orphan, modelica_metatype _nextQueue)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_orphan);
  omc_OnRelaxation_getOrphansPairsConstraints1(threadData, _eqns, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, _eqnsarr, tmp2, _nextQueue);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getOrphansPairsConstraints(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _eqns)
{
  modelica_integer _omark;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _omark has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inOrphans;
    {
      modelica_metatype _rest = NULL;
      modelica_integer _o;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _o has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = _mark;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _o = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_colummarks,_o) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp9) goto goto_2;

          arrayUpdate(_colummarks, _o, mmc_mk_integer(_mark));

          tmpMeta10 = stringAppend(_OMC_LIT0,intString(_o));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT1);
          fputs(MMC_STRINGDATA(tmpMeta11),stdout);

          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_OnRelaxation_getOrphansPairsConstraints1(threadData, arrayGet(_mt,_o) /* DAE.ASUB */, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _eqns, _o, tmpMeta12);
          tmp1 = omc_OnRelaxation_getOrphansPairsConstraints(threadData, _rest, _ass1, _ass2, _m, _mt, ((modelica_integer) 1) + _mark, _rowmarks, _colummarks, _eqns);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_1);
          tmpMeta14 = MMC_CDR(tmp4_1);
          _rest = tmpMeta14;
          /* Pattern matching succeeded */
          tmp1 = omc_OnRelaxation_getOrphansPairsConstraints(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _eqns);
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
  _omark = tmp1;
  _return: OMC_LABEL_UNUSED
  return _omark;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansPairsConstraints(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _eqns)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype out_omark;
  tmp1 = mmc_unbox_integer(_mark);
  _omark = omc_OnRelaxation_getOrphansPairsConstraints(threadData, _inOrphans, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, _eqns);
  out_omark = mmc_mk_icon(_omark);
  return out_omark;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getOrphansPairs1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_integer _orphan, modelica_metatype _nextQueue)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;
    tmp3_1 = _rows;
    tmp3_2 = _nextQueue;
    {
      modelica_integer _r;
      modelica_integer _o;
      modelica_metatype _rest = NULL;
      modelica_metatype _next = NULL;
      modelica_metatype _elst = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _r has no default value.
      // _o has no default value.
      // _rest has no default value.
      // _next has no default value.
      // _elst has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (!listEmpty(tmp3_2)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_OnRelaxation_getOrphansPairs1(threadData, _nextQueue, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _orphan, tmpMeta5);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta6 = MMC_CAR(tmp3_1);
          tmpMeta7 = MMC_CDR(tmp3_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          
          _r = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_rowmarks,_r) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp9) goto goto_1;

          _elst = omc_List_select1(threadData, arrayGet(_mt,_r) /* DAE.ASUB */, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _o = omc_OnRelaxation_hasResidualOrphan(threadData, _elst, _ass2);

          arrayUpdate(_ass1, _orphan, mmc_mk_integer(_o));

          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_orphan), MMC_REFSTRUCTLIT(mmc_nil));
          arrayUpdate(_ass2, _o, tmpMeta10);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_boolean tmp14;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta11 = MMC_CAR(tmp3_1);
          tmpMeta12 = MMC_CDR(tmp3_1);
          tmp13 = mmc_unbox_integer(tmpMeta11);
          
          _r = tmp13  /* pattern as ty=Integer */;
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (mmc_unbox_integer(arrayGet(_rowmarks,_r) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp14) goto goto_1;

          _elst = omc_List_select1(threadData, arrayGet(_mt,_r) /* DAE.ASUB */, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _next = omc_List_select1(threadData, omc_List_flatten(threadData, omc_List_map1r(threadData, _elst, boxvar_arrayGet, _ass2)), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _next = listAppend(_nextQueue, _next);

          arrayUpdate(_rowmarks, _r, mmc_mk_integer(_mark));

          omc_OnRelaxation_getOrphansPairs1(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _orphan, _next);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta15 = MMC_CAR(tmp3_1);
          tmpMeta16 = MMC_CDR(tmp3_1);
          
          _rest = tmpMeta16;
          /* Pattern matching succeeded */
          omc_OnRelaxation_getOrphansPairs1(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _orphan, _nextQueue);
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
      if (++tmp3 < 5) {
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_getOrphansPairs1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphan, modelica_metatype _nextQueue)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_orphan);
  omc_OnRelaxation_getOrphansPairs1(threadData, _rows, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, tmp2, _nextQueue);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getOrphansPairs(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks)
{
  modelica_integer _omark;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _omark has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inOrphans;
    {
      modelica_metatype _rest = NULL;
      modelica_integer _o;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _o has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = _mark;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _o = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_rowmarks,_o) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp9) goto goto_2;

          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_o), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_OnRelaxation_getOrphansPairs1(threadData, tmpMeta10, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _o, tmpMeta11);
          tmp1 = omc_OnRelaxation_getOrphansPairs(threadData, _rest, _ass1, _ass2, _m, _mt, ((modelica_integer) 1) + _mark, _rowmarks, _colummarks);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          _rest = tmpMeta13;
          /* Pattern matching succeeded */
          tmp1 = omc_OnRelaxation_getOrphansPairs(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks);
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
  _omark = tmp1;
  _return: OMC_LABEL_UNUSED
  return _omark;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansPairs(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype out_omark;
  tmp1 = mmc_unbox_integer(_mark);
  _omark = omc_OnRelaxation_getOrphansPairs(threadData, _inOrphans, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks);
  out_omark = mmc_mk_icon(_omark);
  return out_omark;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_sortVarsforOrder2(threadData_t *threadData, modelica_integer _index, modelica_metatype _inVarLst, modelica_metatype _vararray, modelica_metatype _iAcc)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inVarLst;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _vlst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _vlst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_index > arrayLength(_vararray));
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta1 = listReverse(_iAcc);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = arrayGet(_vararray,_index) /* DAE.ASUB */;
          if (optionNone(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          _v = tmpMeta8;
          tmpMeta9 = mmc_mk_cons(_v, _iAcc);
          tmpMeta1 = omc_OnRelaxation_sortVarsforOrder2(threadData, ((modelica_integer) 1) + _index, _inVarLst, _vararray, tmpMeta9);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _v = tmpMeta10;
          _vlst = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_cons(_v, _iAcc);
          tmpMeta1 = omc_OnRelaxation_sortVarsforOrder2(threadData, ((modelica_integer) 1) + _index, _vlst, _vararray, tmpMeta12);
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
  _outVarLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVarLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_sortVarsforOrder2(threadData_t *threadData, modelica_metatype _index, modelica_metatype _inVarLst, modelica_metatype _vararray, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_metatype _outVarLst = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _outVarLst = omc_OnRelaxation_sortVarsforOrder2(threadData, tmp1, _inVarLst, _vararray, _iAcc);
  /* skip box _outVarLst; list<BackendDAE.Var> */
  return _outVarLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_sortVarsforOrder1(threadData_t *threadData, modelica_metatype _crlst, modelica_integer _index, modelica_metatype _inVarLst, modelica_metatype _vindxs, modelica_metatype _vararray, modelica_metatype _vars)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _crlst;
    {
      modelica_integer _i;
      modelica_integer _p;
      modelica_metatype _ilst = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _vlst = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _p has no default value.
      // _ilst has no default value.
      // _v has no default value.
      // _vlst has no default value.
      // _cr has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _vlst = omc_List_sort(threadData, _inVarLst, boxvar_BackendVariable_varSortFunc);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_OnRelaxation_sortVarsforOrder2(threadData, ((modelica_integer) 1), _vlst, _vararray, tmpMeta6);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _cr = tmpMeta7;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          _v = omc_BackendVariable_getVarSingle(threadData, _cr, _vars ,&_i);

          _p = omc_List_position(threadData, mmc_mk_integer(_i), _vindxs);

          _ilst = listDelete(_vindxs, _p);

          _vlst = listDelete(_inVarLst, _p);

          arrayUpdate(_vararray, _index, mmc_mk_some(_v));
          tmpMeta1 = omc_OnRelaxation_sortVarsforOrder1(threadData, _rest, ((modelica_integer) 1) + _index, _vlst, _ilst, _vararray, _vars);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_OnRelaxation_sortVarsforOrder1(threadData, _rest, ((modelica_integer) 1) + _index, _inVarLst, _vindxs, _vararray, _vars);
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
  _outVarLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVarLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_sortVarsforOrder1(threadData_t *threadData, modelica_metatype _crlst, modelica_metatype _index, modelica_metatype _inVarLst, modelica_metatype _vindxs, modelica_metatype _vararray, modelica_metatype _vars)
{
  modelica_integer tmp1;
  modelica_metatype _outVarLst = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _outVarLst = omc_OnRelaxation_sortVarsforOrder1(threadData, _crlst, tmp1, _inVarLst, _vindxs, _vararray, _vars);
  /* skip box _outVarLst; list<BackendDAE.Var> */
  return _outVarLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_sortVarsforOrder(threadData_t *threadData, modelica_metatype _inEqn, modelica_metatype _inVarLst, modelica_metatype _vindxs, modelica_metatype _vars)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEqn;
    {
      modelica_metatype _crlst = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _elst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _crlst has no default value.
      // _e1 has no default value.
      // _elst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e1 = tmpMeta6;
          /* Pattern matching succeeded */
          _elst = omc_Expression_flattenArrayExpToList(threadData, _e1);

          _crlst = omc_List_map(threadData, _elst, boxvar_Expression_expCrefNegCref);
          tmpMeta1 = omc_OnRelaxation_sortVarsforOrder1(threadData, _crlst, ((modelica_integer) 1), _inVarLst, _vindxs, arrayCreate(listLength(_vindxs), mmc_mk_none()), _vars);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e1 = tmpMeta7;
          /* Pattern matching succeeded */
          _elst = omc_Expression_flattenArrayExpToList(threadData, _e1);

          _crlst = omc_List_map(threadData, _elst, boxvar_Expression_expCrefNegCref);
          tmpMeta1 = omc_OnRelaxation_sortVarsforOrder1(threadData, _crlst, ((modelica_integer) 1), _inVarLst, _vindxs, arrayCreate(listLength(_vindxs), mmc_mk_none()), _vars);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_sort(threadData, _inVarLst, boxvar_BackendVariable_varSortFunc);
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
  _outVarLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVarLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getEqnsinOrder(threadData_t *threadData, modelica_integer _indx, modelica_metatype _inTpl)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _eqnssort = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _vlst = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _varssort = NULL;
  modelica_metatype _vindxs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  // _e has no default value.
  // _eqns has no default value.
  // _eqnssort has no default value.
  // _ass2 has no default value.
  // _vlst has no default value.
  // _vars has no default value.
  // _varssort has no default value.
  // _vindxs has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _eqns = tmpMeta2;
  _vars = tmpMeta3;
  _ass2 = tmpMeta4;
  _eqnssort = tmpMeta5;
  _varssort = tmpMeta6;

  _e = omc_BackendEquation_get(threadData, _eqns, _indx);

  _eqnssort = omc_BackendEquation_add(threadData, _e, _eqnssort);

  _vindxs = arrayGet(_ass2,_indx) /* DAE.ASUB */;

  _vlst = omc_List_map1r(threadData, _vindxs, boxvar_BackendVariable_getVarAt, _vars);

  _vlst = omc_OnRelaxation_sortVarsforOrder(threadData, _e, _vlst, _vindxs, _vars);

  _varssort = omc_BackendVariable_addVars(threadData, _vlst, _varssort);

  tmpMeta7 = mmc_mk_box5(0, _eqns, _vars, _ass2, _eqnssort, _varssort);
  _outTpl = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getEqnsinOrder(threadData_t *threadData, modelica_metatype _indx, modelica_metatype _inTpl)
{
  modelica_integer tmp1;
  modelica_metatype _outTpl = NULL;
  tmp1 = mmc_unbox_integer(_indx);
  _outTpl = omc_OnRelaxation_getEqnsinOrder(threadData, tmp1, _inTpl);
  /* skip box _outTpl; tuple<ExpandableArray<BackendDAE.Equation>, BackendDAE.Variables, array<list<#Integer>>, ExpandableArray<BackendDAE.Equation>, BackendDAE.Variables> */
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_dumpJacMatrix(threadData_t *threadData, modelica_metatype _jac, modelica_integer _row, modelica_integer _col, modelica_integer _size, modelica_metatype _vars)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _jac;
    {
      modelica_string _estr = NULL;
      modelica_integer _c;
      modelica_integer _r;
      modelica_metatype _e = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _estr has no default value.
      // _c has no default value.
      // _r has no default value.
      // _e has no default value.
      // _v has no default value.
      // _rest has no default value.
      // _cr has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 6; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_boolean tmp5;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = (_row > _size);
          if (1 /* true */ != tmp5) goto goto_1;
          goto tmp2_done;
        }
        case 1: {
          modelica_boolean tmp6;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_col > _size);
          if (1 /* true */ != tmp6) goto goto_1;

          _v = omc_BackendVariable_getVarAt(threadData, _vars, _row);

          _cr = omc_BackendVariable_varCref(threadData, _v);

          fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);

          fputs(MMC_STRINGDATA(intString(_row)),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);

          fputs(MMC_STRINGDATA(omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cr)),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT1),stdout);

          omc_OnRelaxation_dumpJacMatrix(threadData, _jac, ((modelica_integer) 1) + _row, ((modelica_integer) 1), _size, _vars);
          goto tmp2_done;
        }
        case 2: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          fputs(MMC_STRINGDATA(_OMC_LIT4),stdout);

          omc_OnRelaxation_dumpJacMatrix(threadData, _jac, _row, ((modelica_integer) 1) + _col, _size, _vars);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_boolean tmp15;
          modelica_boolean tmp16;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_1);
          tmpMeta8 = MMC_CDR(tmp3_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,3,3) == 0) goto tmp2_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          
          _r = tmp10  /* pattern as ty=Integer */;
          _c = tmp12  /* pattern as ty=Integer */;
          _e = tmpMeta14;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp15 = (_r == _row);
          if (1 /* true */ != tmp15) goto goto_1;

          /* Pattern-matching assignment */
          tmp16 = (_c == _col);
          if (1 /* true */ != tmp16) goto goto_1;

          _estr = omc_ExpressionBasics_printExpStr(threadData, _e);

          fputs(MMC_STRINGDATA(_estr),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT5),stdout);

          omc_OnRelaxation_dumpJacMatrix(threadData, _rest, _row, ((modelica_integer) 1) + _col, _size, _vars);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_boolean tmp23;
          modelica_boolean tmp24;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta17 = MMC_CAR(tmp3_1);
          tmpMeta18 = MMC_CDR(tmp3_1);
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 1));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          
          _r = tmp20  /* pattern as ty=Integer */;
          _c = tmp22  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp23 = (_r == _row);
          if (1 /* true */ != tmp23) goto goto_1;

          /* Pattern-matching assignment */
          tmp24 = (_col < _c);
          if (1 /* true */ != tmp24) goto goto_1;

          fputs(MMC_STRINGDATA(_OMC_LIT4),stdout);

          omc_OnRelaxation_dumpJacMatrix(threadData, _jac, _row, ((modelica_integer) 1) + _col, _size, _vars);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_boolean tmp29;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta25 = MMC_CAR(tmp3_1);
          tmpMeta26 = MMC_CDR(tmp3_1);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 1));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          
          _r = tmp28  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp29 = (_r == _row);
          if (0 /* false */ != tmp29) goto goto_1;

          fputs(MMC_STRINGDATA(_OMC_LIT4),stdout);

          omc_OnRelaxation_dumpJacMatrix(threadData, _jac, _row, ((modelica_integer) 1) + _col, _size, _vars);
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
      if (++tmp3 < 6) {
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_dumpJacMatrix(threadData_t *threadData, modelica_metatype _jac, modelica_metatype _row, modelica_metatype _col, modelica_metatype _size, modelica_metatype _vars)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  tmp1 = mmc_unbox_integer(_row);
  tmp2 = mmc_unbox_integer(_col);
  tmp3 = mmc_unbox_integer(_size);
  omc_OnRelaxation_dumpJacMatrix(threadData, _jac, tmp1, tmp2, tmp3, _vars);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_transformJacToMatrix(threadData_t *threadData, modelica_metatype _jac, modelica_integer _row, modelica_integer _col, modelica_integer _size, modelica_metatype _b, modelica_metatype _matrix)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _jac;
    {
      modelica_integer _c;
      modelica_integer _r;
      modelica_metatype _e = NULL;
      modelica_metatype _be = NULL;
      modelica_metatype _b1 = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _c has no default value.
      // _r has no default value.
      // _e has no default value.
      // _be has no default value.
      // _b1 has no default value.
      // _rest has no default value.
      // _lst has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 6; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_boolean tmp5;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = (_row > _size);
          if (1 /* true */ != tmp5) goto goto_1;
          goto tmp2_done;
        }
        case 1: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_col > _size);
          if (1 /* true */ != tmp6) goto goto_1;

          /* Pattern-matching assignment */
          tmpMeta7 = _b;
          if (listEmpty(tmpMeta7)) goto goto_1;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          _be = tmpMeta8;
          _b1 = tmpMeta9;

          _lst = arrayGet(_matrix,_row) /* DAE.ASUB */;

          tmpMeta10 = mmc_mk_box2(0, mmc_mk_integer(_col), _be);
          _lst = omc_List_consOnTrue(threadData, (!omc_Expression_isZero(threadData, _be)), tmpMeta10, _lst);

          _lst = listReverse(_lst);

          arrayUpdate(_matrix, _row, _lst);

          omc_OnRelaxation_transformJacToMatrix(threadData, _jac, ((modelica_integer) 1) + _row, ((modelica_integer) 1), _size, _b1, _matrix);
          goto tmp2_done;
        }
        case 2: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          omc_OnRelaxation_transformJacToMatrix(threadData, _jac, _row, ((modelica_integer) 1) + _col, _size, _b, _matrix);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_boolean tmp19;
          modelica_boolean tmp20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta11 = MMC_CAR(tmp3_1);
          tmpMeta12 = MMC_CDR(tmp3_1);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,3,3) == 0) goto tmp2_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          
          _r = tmp14  /* pattern as ty=Integer */;
          _c = tmp16  /* pattern as ty=Integer */;
          _e = tmpMeta18;
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp19 = (_r == _row);
          if (1 /* true */ != tmp19) goto goto_1;

          /* Pattern-matching assignment */
          tmp20 = (_c == _col);
          if (1 /* true */ != tmp20) goto goto_1;

          _lst = arrayGet(_matrix,_r) /* DAE.ASUB */;

          tmpMeta22 = mmc_mk_box2(0, mmc_mk_integer(_c), _e);
          tmpMeta21 = mmc_mk_cons(tmpMeta22, _lst);
          _lst = tmpMeta21;

          arrayUpdate(_matrix, _row, _lst);

          omc_OnRelaxation_transformJacToMatrix(threadData, _rest, _row, ((modelica_integer) 1) + _col, _size, _b, _matrix);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_boolean tmp29;
          modelica_boolean tmp30;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta23 = MMC_CAR(tmp3_1);
          tmpMeta24 = MMC_CDR(tmp3_1);
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          
          _r = tmp26  /* pattern as ty=Integer */;
          _c = tmp28  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp29 = (_r == _row);
          if (1 /* true */ != tmp29) goto goto_1;

          /* Pattern-matching assignment */
          tmp30 = (_col < _c);
          if (1 /* true */ != tmp30) goto goto_1;

          omc_OnRelaxation_transformJacToMatrix(threadData, _jac, _row, ((modelica_integer) 1) + _col, _size, _b, _matrix);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_integer tmp34;
          modelica_boolean tmp35;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta31 = MMC_CAR(tmp3_1);
          tmpMeta32 = MMC_CDR(tmp3_1);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 1));
          tmp34 = mmc_unbox_integer(tmpMeta33);
          
          _r = tmp34  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp35 = (_r >= _row);
          if (1 /* true */ != tmp35) goto goto_1;

          omc_OnRelaxation_transformJacToMatrix(threadData, _jac, _row, ((modelica_integer) 1) + _col, _size, _b, _matrix);
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
      if (++tmp3 < 6) {
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_transformJacToMatrix(threadData_t *threadData, modelica_metatype _jac, modelica_metatype _row, modelica_metatype _col, modelica_metatype _size, modelica_metatype _b, modelica_metatype _matrix)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  tmp1 = mmc_unbox_integer(_row);
  tmp2 = mmc_unbox_integer(_col);
  tmp3 = mmc_unbox_integer(_size);
  omc_OnRelaxation_transformJacToMatrix(threadData, _jac, tmp1, tmp2, tmp3, _b, _matrix);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_transformJacToAdjacencyMatrix(threadData_t *threadData, modelica_metatype _jac, modelica_metatype _m, modelica_metatype _mT, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _jac;
    {
      modelica_integer _c;
      modelica_integer _r;
      modelica_metatype _e = NULL;
      modelica_boolean _b;
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _lst1 = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _c has no default value.
      // _r has no default value.
      // _e has no default value.
      // _b has no default value.
      // _rest has no default value.
      // _lst has no default value.
      // _lst1 has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,3) == 0) goto tmp2_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          
          _r = tmp8  /* pattern as ty=Integer */;
          _c = tmp10  /* pattern as ty=Integer */;
          _e = tmpMeta12;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          _b = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e));

          _lst = omc_List_consOnTrue(threadData, _b, mmc_mk_integer(_c), arrayGet(_m,_r) /* DAE.ASUB */);

          _lst1 = omc_List_consOnTrue(threadData, _b, mmc_mk_integer(_r), arrayGet(_mT,_c) /* DAE.ASUB */);

          arrayUpdate(_m, _r, _lst);

          arrayUpdate(_mT, _c, _lst1);

          /* Tail recursive call */
          _jac = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_transformJacToAdjacencyMatrix1(threadData_t *threadData, modelica_metatype _jac, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _ass2, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _jac;
    {
      modelica_integer _c;
      modelica_integer _r;
      modelica_metatype _e = NULL;
      modelica_boolean _b;
      modelica_boolean _b1;
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _c has no default value.
      // _r has no default value.
      // _e has no default value.
      // _b has no default value.
      // _b1 has no default value.
      // _rest has no default value.
      // _lst has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,3) == 0) goto tmp2_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          
          _r = tmp8  /* pattern as ty=Integer */;
          _c = tmp10  /* pattern as ty=Integer */;
          _e = tmpMeta12;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          _b1 = (mmc_unbox_integer(arrayGet(_ass1,_c) /* DAE.ASUB */) < ((modelica_integer) 1));

          _b = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e));

          _lst = omc_List_consOnTrue(threadData, (_b && _b1), mmc_mk_integer(_c), arrayGet(_m,_r) /* DAE.ASUB */);

          arrayUpdate(_m, _r, _lst);

          /* Tail recursive call */
          _jac = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_transformJacToAdjacencyMatrix2(threadData_t *threadData, modelica_metatype _jac, modelica_metatype _m, modelica_metatype _mapIncRowEqn, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _jac;
    {
      modelica_integer _c;
      modelica_integer _r;
      modelica_integer _i;
      modelica_metatype _e = NULL;
      modelica_boolean _b;
      modelica_boolean _b1;
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _eqn = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _c has no default value.
      // _r has no default value.
      // _i has no default value.
      // _e has no default value.
      // _b has no default value.
      // _b1 has no default value.
      // _rest has no default value.
      // _lst has no default value.
      // _eqn has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,3) == 0) goto tmp2_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          
          _r = tmp8  /* pattern as ty=Integer */;
          _c = tmp10  /* pattern as ty=Integer */;
          _e = tmpMeta12;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          _i = mmc_unbox_integer(arrayGet(_mapIncRowEqn,_r) /* DAE.ASUB */);

          _eqn = omc_BackendEquation_get(threadData, _eqns, _i);

          _b1 = omc_BackendEquation_isArrayEquation(threadData, _eqn);

          _b = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e));

          _lst = omc_List_consOnTrue(threadData, (_b && _b1), mmc_mk_integer(_c), arrayGet(_m,_r) /* DAE.ASUB */);

          arrayUpdate(_m, _r, _lst);

          /* Tail recursive call */
          _jac = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_isConstOneMinusOne(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = (omc_Expression_isConstOne(threadData, _inExp) || omc_Expression_isConstMinusOne(threadData, _inExp));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_isConstOneMinusOne(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_OnRelaxation_isConstOneMinusOne(threadData, _inExp);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_diagonalEntry(threadData_t *threadData, modelica_integer _col, modelica_metatype _row)
{
  modelica_metatype _oe = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oe has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _row;
    {
      modelica_metatype _rest = NULL;
      modelica_integer _r;
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _r has no default value.
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _r = tmp9  /* pattern as ty=Integer */;
          _e = tmpMeta10;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmp13 = (modelica_boolean)((_r == _col) && (!omc_Expression_isZero(threadData, _e)));
          if(tmp13)
          {
            tmpMeta14 = mmc_mk_some(_e);
          }
          else
          {
            tmp11 = (modelica_boolean)(_r > _col);
            if(tmp11)
            {
              tmpMeta12 = mmc_mk_none();
            }
            else
            {
              /* Tail recursive call */
              _row = _rest;
              goto _tailrecursive;
              /* TODO: Make sure any eventual dead code below is never generated */
            }
            tmpMeta14 = tmpMeta12;
          }
          tmpMeta1 = tmpMeta14;
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
  _oe = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oe;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_diagonalEntry(threadData_t *threadData, modelica_metatype _col, modelica_metatype _row)
{
  modelica_integer tmp1;
  modelica_metatype _oe = NULL;
  tmp1 = mmc_unbox_integer(_col);
  _oe = omc_OnRelaxation_diagonalEntry(threadData, tmp1, _row);
  /* skip box _oe; Option<DAE.Exp> */
  return _oe;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_gaussElimination(threadData_t *threadData, modelica_integer _col, modelica_integer _size, modelica_metatype _matrix, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype *out_outEqns)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype _outEqns = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVars has no default value.
  // _outEqns has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _tpl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _eqns has no default value.
      // _e has no default value.
      // _tpl has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_col > _size);
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta[0+0] = _inVars;
          tmpMeta[0+1] = _inEqns;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = omc_OnRelaxation_diagonalEntry(threadData, _col, arrayGet(_matrix,_col) /* DAE.ASUB */);
          if (optionNone(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          _e = tmpMeta8;

          _vars = omc_OnRelaxation_gaussElimination1(threadData, _col, ((modelica_integer) 1) + _col, _size, _e, _matrix, _inVars, _inEqns, _inTpl ,&_eqns ,&_tpl);
          tmpMeta[0+0] = omc_OnRelaxation_gaussElimination(threadData, ((modelica_integer) 1) + _col, _size, _matrix, _vars, _eqns, _tpl, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta9 = omc_OnRelaxation_diagonalEntry(threadData, _col, arrayGet(_matrix,_col) /* DAE.ASUB */);
          if (!optionNone(tmpMeta9)) goto goto_2;

          tmpMeta10 = stringAppend(_OMC_LIT6,intString(_col));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT1);
          fputs(MMC_STRINGDATA(tmpMeta11),stdout);
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
  _outVars = tmpMeta[0+0];
  _outEqns = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEqns) { *out_outEqns = _outEqns; }
  return _outVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_gaussElimination(threadData_t *threadData, modelica_metatype _col, modelica_metatype _size, modelica_metatype _matrix, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype *out_outEqns)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outVars = NULL;
  tmp1 = mmc_unbox_integer(_col);
  tmp2 = mmc_unbox_integer(_size);
  _outVars = omc_OnRelaxation_gaussElimination(threadData, tmp1, tmp2, _matrix, _inVars, _inEqns, _inTpl, out_outEqns);
  /* skip box _outVars; BackendDAE.Variables */
  /* skip box _outEqns; ExpandableArray<BackendDAE.Equation> */
  return _outVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_gaussElimination1(threadData_t *threadData, modelica_integer _col, modelica_integer _row, modelica_integer _size, modelica_metatype _ce, modelica_metatype _matrix, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype *out_outEqns, modelica_metatype *out_outTpl)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype _outEqns = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVars has no default value.
  // _outEqns has no default value.
  // _outTpl has no default value.
  
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _vars = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _cexp = NULL;
      modelica_metatype _elst = NULL;
      modelica_metatype _tpl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars has no default value.
      // _eqns has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _cexp has no default value.
      // _elst has no default value.
      // _tpl has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_row > _size);
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta[0+0] = _inVars;
          tmpMeta[0+1] = _inEqns;
          tmpMeta[0+2] = _inTpl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = omc_OnRelaxation_diagonalEntry(threadData, _col, arrayGet(_matrix,_row) /* DAE.ASUB */);
          if (optionNone(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          _e = tmpMeta8;

          _e1 = omc_Expression_expDiv(threadData, _e, _ce);

          _e1 = omc_ExpressionSimplify_simplify(threadData, _e1, NULL);

          _vars = omc_OnRelaxation_makeDummyVar(threadData, _inTpl, _e1, _inVars, _inEqns ,&_eqns ,&_cexp ,&_tpl);

          _elst = arrayGet(_matrix,_col) /* DAE.ASUB */;

          _elst = omc_List_map1(threadData, _elst, boxvar_OnRelaxation_mulRow, _cexp);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _elst = omc_OnRelaxation_addRows(threadData, arrayGet(_matrix,_row) /* DAE.ASUB */, _elst, _col, _vars, _eqns, _tpl, tmpMeta9 ,&_vars ,&_eqns ,&_tpl);

          arrayUpdate(_matrix, _row, _elst);
          tmpMeta[0+0] = omc_OnRelaxation_gaussElimination1(threadData, _col, ((modelica_integer) 1) + _row, _size, _ce, _matrix, _vars, _eqns, _tpl, &tmpMeta[0+1], &tmpMeta[0+2]);
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_OnRelaxation_gaussElimination1(threadData, _col, ((modelica_integer) 1) + _row, _size, _ce, _matrix, _inVars, _inEqns, _inTpl, &tmpMeta[0+1], &tmpMeta[0+2]);
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
  _outVars = tmpMeta[0+0];
  _outEqns = tmpMeta[0+1];
  _outTpl = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outEqns) { *out_outEqns = _outEqns; }
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_gaussElimination1(threadData_t *threadData, modelica_metatype _col, modelica_metatype _row, modelica_metatype _size, modelica_metatype _ce, modelica_metatype _matrix, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype *out_outEqns, modelica_metatype *out_outTpl)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outVars = NULL;
  tmp1 = mmc_unbox_integer(_col);
  tmp2 = mmc_unbox_integer(_row);
  tmp3 = mmc_unbox_integer(_size);
  _outVars = omc_OnRelaxation_gaussElimination1(threadData, tmp1, tmp2, tmp3, _ce, _matrix, _inVars, _inEqns, _inTpl, out_outEqns, out_outTpl);
  /* skip box _outVars; BackendDAE.Variables */
  /* skip box _outEqns; ExpandableArray<BackendDAE.Equation> */
  /* skip box _outTpl; tuple<#Integer, #Integer> */
  return _outVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_makeDummyVar(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _e, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype *out_outEqns, modelica_metatype *out_outExp, modelica_metatype *out_outTpl)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype _outEqns = NULL;
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVars has no default value.
  // _outEqns has no default value.
  // _outExp has no default value.
  // _outTpl has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inTpl;
    tmp4_2 = _e;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _v = NULL;
      modelica_string _sa = NULL;
      modelica_string _sb = NULL;
      modelica_integer _a;
      modelica_integer _b;
      modelica_metatype _eqns = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _cexp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _v has no default value.
      // _sa has no default value.
      // _sb has no default value.
      // _a has no default value.
      // _b has no default value.
      // _eqns has no default value.
      // _vars has no default value.
      // _cexp has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inVars;
          tmpMeta[0+1] = _inEqns;
          tmpMeta[0+2] = _e;
          tmpMeta[0+3] = _inTpl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inVars;
          tmpMeta[0+1] = _inEqns;
          tmpMeta[0+2] = _e;
          tmpMeta[0+3] = _inTpl;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inVars;
          tmpMeta[0+1] = _inEqns;
          tmpMeta[0+2] = _e;
          tmpMeta[0+3] = _inTpl;
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_Expression_isConst(threadData, _e);
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta[0+0] = _inVars;
          tmpMeta[0+1] = _inEqns;
          tmpMeta[0+2] = _e;
          tmpMeta[0+3] = _inTpl;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          
          _a = tmp9  /* pattern as ty=Integer */;
          _b = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _sa = intString(_a);

          _sb = intString(_b);

          tmpMeta12 = mmc_mk_cons(_OMC_LIT7, mmc_mk_cons(_sa, mmc_mk_cons(_OMC_LIT8, mmc_mk_cons(_sb, MMC_REFSTRUCTLIT(mmc_nil)))));
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          _cr = omc_ComponentReferenceBasics_makeCrefIdent(threadData, stringAppendList(tmpMeta12), _OMC_LIT9, tmpMeta13);

          _cexp = omc_Expression_crefExp(threadData, _cr);

          tmpMeta14 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _cexp, _e, _OMC_LIT14, _OMC_LIT17);
          _eqns = omc_BackendEquation_add(threadData, tmpMeta14, _inEqns);

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _cr, _OMC_LIT18, _OMC_LIT19, _OMC_LIT20, _OMC_LIT9, mmc_mk_none(), mmc_mk_none(), tmpMeta15, _OMC_LIT14, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT21, _OMC_LIT22, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          _v = tmpMeta16;

          _vars = omc_BackendVariable_addVar(threadData, _v, _inVars);
          tmpMeta17 = mmc_mk_box2(0, mmc_mk_integer(_a), mmc_mk_integer(((modelica_integer) 1) + _b));
          tmpMeta[0+0] = _vars;
          tmpMeta[0+1] = _eqns;
          tmpMeta[0+2] = _cexp;
          tmpMeta[0+3] = tmpMeta17;
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outVars = tmpMeta[0+0];
  _outEqns = tmpMeta[0+1];
  _outExp = tmpMeta[0+2];
  _outTpl = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outEqns) { *out_outEqns = _outEqns; }
  if (out_outExp) { *out_outExp = _outExp; }
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_removeFromCol(threadData_t *threadData, modelica_integer _i, modelica_metatype _inTpl, modelica_metatype _inAcc)
{
  modelica_metatype _outAcc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAcc has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTpl;
    {
      modelica_metatype _e = NULL;
      modelica_integer _c;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _c has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = listReverse(_inAcc);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _c = tmp9  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_i == _c)) goto tmp3_end;
          tmpMeta1 = listAppend(listReverse(_inAcc), _rest);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          _c = tmp13  /* pattern as ty=Integer */;
          _e = tmpMeta14;
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_box2(0, mmc_mk_integer(_c), _e);
          tmpMeta15 = mmc_mk_cons(tmpMeta16, _inAcc);
          /* Tail recursive call */
          _inTpl = _rest;
          _inAcc = tmpMeta15;
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
  _outAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_removeFromCol(threadData_t *threadData, modelica_metatype _i, modelica_metatype _inTpl, modelica_metatype _inAcc)
{
  modelica_integer tmp1;
  modelica_metatype _outAcc = NULL;
  tmp1 = mmc_unbox_integer(_i);
  _outAcc = omc_OnRelaxation_removeFromCol(threadData, tmp1, _inTpl, _inAcc);
  /* skip box _outAcc; list<tuple<#Integer, DAE.Exp>> */
  return _outAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_mulRow(threadData_t *threadData, modelica_metatype _inTpl, modelica_metatype _e1)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype _e = NULL;
  modelica_integer _c;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  // _e has no default value.
  // _c has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _c = tmp3  /* pattern as ty=Integer */;
  _e = tmpMeta4;

  _e = omc_Expression_negate(threadData, omc_Expression_expMul(threadData, _e, _e1));

  tmpMeta5 = mmc_mk_box2(0, mmc_mk_integer(_c), _e);
  _outTpl = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_addRows(threadData_t *threadData, modelica_metatype _inA, modelica_metatype _inB, modelica_integer _col, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype _inElst, modelica_metatype *out_outVars, modelica_metatype *out_outEqns, modelica_metatype *out_outTpl)
{
  modelica_metatype _outElst = NULL;
  modelica_metatype _outVars = NULL;
  modelica_metatype _outEqns = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElst has no default value.
  // _outVars has no default value.
  // _outEqns has no default value.
  // _outTpl has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inA;
    tmp4_2 = _inB;
    {
      modelica_integer _ca;
      modelica_integer _cb;
      modelica_metatype _ea = NULL;
      modelica_metatype _eb = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _resta = NULL;
      modelica_metatype _restb = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _tpl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ca has no default value.
      // _cb has no default value.
      // _ea has no default value.
      // _eb has no default value.
      // _e has no default value.
      // _resta has no default value.
      // _restb has no default value.
      // _vars has no default value.
      // _eqns has no default value.
      // _tpl has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = listReverse(_inElst);
          tmpMeta[0+1] = _inVars;
          tmpMeta[0+2] = _inEqns;
          tmpMeta[0+3] = _inTpl;
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_List_append__reverse(threadData, _inElst, _inB);
          tmpMeta[0+1] = _inVars;
          tmpMeta[0+2] = _inEqns;
          tmpMeta[0+3] = _inTpl;
          goto tmp3_done;
        }
        case 2: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = omc_List_append__reverse(threadData, _inElst, _inA);
          tmpMeta[0+1] = _inVars;
          tmpMeta[0+2] = _inEqns;
          tmpMeta[0+3] = _inTpl;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_boolean tmp14;
          modelica_boolean tmp15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          
          _ca = tmp9  /* pattern as ty=Integer */;
          _resta = tmpMeta7;
          _cb = tmp13  /* pattern as ty=Integer */;
          _restb = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (_ca == _cb);
          if (1 /* true */ != tmp14) goto goto_2;

          /* Pattern-matching assignment */
          tmp15 = (_ca == _col);
          if (1 /* true */ != tmp15) goto goto_2;
          tmpMeta[0+0] = omc_OnRelaxation_addRows(threadData, _resta, _restb, _col, _inVars, _inEqns, _inTpl, _inElst, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_boolean tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmp4_2);
          tmpMeta22 = MMC_CDR(tmp4_2);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 1));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          _ca = tmp19  /* pattern as ty=Integer */;
          _ea = tmpMeta20;
          _resta = tmpMeta17;
          _cb = tmp24  /* pattern as ty=Integer */;
          _eb = tmpMeta25;
          _restb = tmpMeta22;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp26 = (_ca == _cb);
          if (1 /* true */ != tmp26) goto goto_2;

          _e = omc_Expression_expAdd(threadData, _ea, _eb);

          _e = omc_ExpressionSimplify_simplify(threadData, _e, NULL);

          _vars = omc_OnRelaxation_makeDummyVar(threadData, _inTpl, _e, _inVars, _inEqns ,&_eqns ,&_e ,&_tpl);
          tmpMeta28 = mmc_mk_box2(0, mmc_mk_integer(_ca), _e);
          tmpMeta27 = mmc_mk_cons(tmpMeta28, _inElst);
          tmpMeta[0+0] = omc_OnRelaxation_addRows(threadData, _resta, _restb, _col, _vars, _eqns, _tpl, tmpMeta27, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_integer tmp36;
          modelica_boolean tmp37;
          modelica_boolean tmp38;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta29 = MMC_CAR(tmp4_1);
          tmpMeta30 = MMC_CDR(tmp4_1);
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 1));
          tmp32 = mmc_unbox_integer(tmpMeta31);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta33 = MMC_CAR(tmp4_2);
          tmpMeta34 = MMC_CDR(tmp4_2);
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 1));
          tmp36 = mmc_unbox_integer(tmpMeta35);
          
          _ca = tmp32  /* pattern as ty=Integer */;
          _cb = tmp36  /* pattern as ty=Integer */;
          _restb = tmpMeta34;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp37 = (_ca > _cb);
          if (1 /* true */ != tmp37) goto goto_2;

          /* Pattern-matching assignment */
          tmp38 = (_cb == _col);
          if (1 /* true */ != tmp38) goto goto_2;
          tmpMeta[0+0] = omc_OnRelaxation_addRows(threadData, _inA, _restb, _col, _inVars, _inEqns, _inTpl, _inElst, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_integer tmp42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_integer tmp46;
          modelica_metatype tmpMeta47;
          modelica_boolean tmp48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta39 = MMC_CAR(tmp4_1);
          tmpMeta40 = MMC_CDR(tmp4_1);
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 1));
          tmp42 = mmc_unbox_integer(tmpMeta41);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta43 = MMC_CAR(tmp4_2);
          tmpMeta44 = MMC_CDR(tmp4_2);
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 1));
          tmp46 = mmc_unbox_integer(tmpMeta45);
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 2));
          _ca = tmp42  /* pattern as ty=Integer */;
          _cb = tmp46  /* pattern as ty=Integer */;
          _eb = tmpMeta47;
          _restb = tmpMeta44;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp48 = (_ca > _cb);
          if (1 /* true */ != tmp48) goto goto_2;
          tmpMeta50 = mmc_mk_box2(0, mmc_mk_integer(_cb), _eb);
          tmpMeta49 = mmc_mk_cons(tmpMeta50, _inElst);
          tmpMeta[0+0] = omc_OnRelaxation_addRows(threadData, _inA, _restb, _col, _inVars, _inEqns, _inTpl, tmpMeta49, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_integer tmp54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_integer tmp58;
          modelica_boolean tmp59;
          modelica_boolean tmp60;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta51 = MMC_CAR(tmp4_1);
          tmpMeta52 = MMC_CDR(tmp4_1);
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 1));
          tmp54 = mmc_unbox_integer(tmpMeta53);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta55 = MMC_CAR(tmp4_2);
          tmpMeta56 = MMC_CDR(tmp4_2);
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta55), 1));
          tmp58 = mmc_unbox_integer(tmpMeta57);
          
          _ca = tmp54  /* pattern as ty=Integer */;
          _resta = tmpMeta52;
          _cb = tmp58  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp59 = (_ca < _cb);
          if (1 /* true */ != tmp59) goto goto_2;

          /* Pattern-matching assignment */
          tmp60 = (_ca == _col);
          if (1 /* true */ != tmp60) goto goto_2;
          tmpMeta[0+0] = omc_OnRelaxation_addRows(threadData, _resta, _inB, _col, _inVars, _inEqns, _inTpl, _inElst, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_integer tmp64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_integer tmp69;
          modelica_boolean tmp70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta61 = MMC_CAR(tmp4_1);
          tmpMeta62 = MMC_CDR(tmp4_1);
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 1));
          tmp64 = mmc_unbox_integer(tmpMeta63);
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 2));
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta66 = MMC_CAR(tmp4_2);
          tmpMeta67 = MMC_CDR(tmp4_2);
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta66), 1));
          tmp69 = mmc_unbox_integer(tmpMeta68);
          
          _ca = tmp64  /* pattern as ty=Integer */;
          _ea = tmpMeta65;
          _resta = tmpMeta62;
          _cb = tmp69  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp70 = (_ca < _cb);
          if (1 /* true */ != tmp70) goto goto_2;
          tmpMeta72 = mmc_mk_box2(0, mmc_mk_integer(_ca), _ea);
          tmpMeta71 = mmc_mk_cons(tmpMeta72, _inElst);
          tmpMeta[0+0] = omc_OnRelaxation_addRows(threadData, _resta, _inB, _col, _inVars, _inEqns, _inTpl, tmpMeta71, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
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
      if (++tmp4 < 9) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outElst = tmpMeta[0+0];
  _outVars = tmpMeta[0+1];
  _outEqns = tmpMeta[0+2];
  _outTpl = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_outVars) { *out_outVars = _outVars; }
  if (out_outEqns) { *out_outEqns = _outEqns; }
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outElst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_addRows(threadData_t *threadData, modelica_metatype _inA, modelica_metatype _inB, modelica_metatype _col, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inTpl, modelica_metatype _inElst, modelica_metatype *out_outVars, modelica_metatype *out_outEqns, modelica_metatype *out_outTpl)
{
  modelica_integer tmp1;
  modelica_metatype _outElst = NULL;
  tmp1 = mmc_unbox_integer(_col);
  _outElst = omc_OnRelaxation_addRows(threadData, _inA, _inB, tmp1, _inVars, _inEqns, _inTpl, _inElst, out_outVars, out_outEqns, out_outTpl);
  /* skip box _outElst; list<tuple<#Integer, DAE.Exp>> */
  /* skip box _outVars; BackendDAE.Variables */
  /* skip box _outEqns; ExpandableArray<BackendDAE.Equation> */
  /* skip box _outTpl; tuple<#Integer, #Integer> */
  return _outElst;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_OnRelaxation_dumpMatrix1(threadData_t *threadData, modelica_metatype _inTpl)
{
  modelica_string _s = NULL;
  modelica_integer _c;
  modelica_metatype _e = NULL;
  modelica_string _cs = NULL;
  modelica_string _es = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  // _c has no default value.
  // _e has no default value.
  // _cs has no default value.
  // _es has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _c = tmp3  /* pattern as ty=Integer */;
  _e = tmpMeta4;

  _cs = intString(_c);

  _es = omc_ExpressionBasics_printExpStr(threadData, _e);

  tmpMeta5 = mmc_mk_cons(_cs, mmc_mk_cons(_OMC_LIT23, mmc_mk_cons(_es, MMC_REFSTRUCTLIT(mmc_nil))));
  _s = stringAppendList(tmpMeta5);
  _return: OMC_LABEL_UNUSED
  return _s;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_dumpMatrix(threadData_t *threadData, modelica_integer _row, modelica_integer _size, modelica_metatype _matrix)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = (_row > _size);
          if (1 /* true */ != tmp5) goto goto_1;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(intString(_row),_OMC_LIT24);
          fputs(MMC_STRINGDATA(tmpMeta6),stdout);

          omc_BackendDump_debuglst(threadData, arrayGet(_matrix,_row) /* DAE.ASUB */, boxvar_OnRelaxation_dumpMatrix1, _OMC_LIT5, _OMC_LIT1);

          omc_OnRelaxation_dumpMatrix(threadData, ((modelica_integer) 1) + _row, _size, _matrix);
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_dumpMatrix(threadData_t *threadData, modelica_metatype _row, modelica_metatype _size, modelica_metatype _matrix)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_row);
  tmp2 = mmc_unbox_integer(_size);
  omc_OnRelaxation_dumpMatrix(threadData, tmp1, tmp2, _matrix);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_makeGausElimination(threadData_t *threadData, modelica_integer _row, modelica_integer _size, modelica_metatype _matrix, modelica_metatype _vars, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _e = NULL;
      modelica_metatype _b = NULL;
      modelica_metatype _eqn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _b has no default value.
      // _eqn has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_row > _size);
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta1 = listReverse(_iAcc);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          _e = omc_OnRelaxation_makeGausEliminationRow(threadData, arrayGet(_matrix,_row) /* DAE.ASUB */, _size, _vars, _OMC_LIT25 ,&_b);

          tmpMeta7 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _e, _b, _OMC_LIT14, _OMC_LIT17);
          _eqn = tmpMeta7;
          tmpMeta8 = mmc_mk_cons(_eqn, _iAcc);
          tmpMeta1 = omc_OnRelaxation_makeGausElimination(threadData, ((modelica_integer) 1) + _row, _size, _matrix, _vars, tmpMeta8);
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
  _oAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_makeGausElimination(threadData_t *threadData, modelica_metatype _row, modelica_metatype _size, modelica_metatype _matrix, modelica_metatype _vars, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oAcc = NULL;
  tmp1 = mmc_unbox_integer(_row);
  tmp2 = mmc_unbox_integer(_size);
  _oAcc = omc_OnRelaxation_makeGausElimination(threadData, tmp1, tmp2, _matrix, _vars, _iAcc);
  /* skip box _oAcc; list<BackendDAE.Equation> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_makeGausEliminationRow(threadData_t *threadData, modelica_metatype _lst, modelica_integer _size, modelica_metatype _vars, modelica_metatype _inExp, modelica_metatype *out_outExp1)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outExp1 = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outExp1 has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _lst;
    {
      modelica_integer _c;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _c has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _OMC_LIT25;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _c = tmp9  /* pattern as ty=Integer */;
          _e = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = (_c > _size);
          if (1 /* true */ != tmp11) goto goto_2;
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _e;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          _c = tmp15  /* pattern as ty=Integer */;
          _e = tmpMeta16;
          _rest = tmpMeta13;
          /* Pattern matching succeeded */
          _e1 = omc_Expression_expMul(threadData, _e, arrayGet(_vars,_c) /* DAE.ASUB */);

          _e1 = omc_Expression_expAdd(threadData, _e1, _inExp);
          tmpMeta[0+0] = omc_OnRelaxation_makeGausEliminationRow(threadData, _rest, _size, _vars, _e1, &tmpMeta[0+1]);
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
  _outExp1 = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outExp1) { *out_outExp1 = _outExp1; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_makeGausEliminationRow(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _size, modelica_metatype _vars, modelica_metatype _inExp, modelica_metatype *out_outExp1)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _outExp = omc_OnRelaxation_makeGausEliminationRow(threadData, _lst, tmp1, _vars, _inExp, out_outExp1);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outExp1; DAE.Exp */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_makeCrefExps(threadData_t *threadData, modelica_metatype _v)
{
  modelica_metatype _e = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _e has no default value.
  _e = omc_Expression_crefExp(threadData, omc_BackendVariable_varCref(threadData, _v));
  _return: OMC_LABEL_UNUSED
  return _e;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_hasResidualOrphan(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass)
{
  modelica_integer _Orphan;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _Orphan has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _eqns;
    {
      modelica_metatype _rest = NULL;
      modelica_integer _e;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _e has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _e = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta9 = arrayGet(_ass,_e) /* DAE.ASUB */;
          if (!listEmpty(tmpMeta9)) goto goto_2;
          tmp1 = _e;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          tmp1 = omc_OnRelaxation_hasResidualOrphan(threadData, _rest, _ass);
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
  _Orphan = tmp1;
  _return: OMC_LABEL_UNUSED
  return _Orphan;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_hasResidualOrphan(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass)
{
  modelica_integer _Orphan;
  modelica_metatype out_Orphan;
  _Orphan = omc_OnRelaxation_hasResidualOrphan(threadData, _eqns, _ass);
  out_Orphan = mmc_mk_icon(_Orphan);
  return out_Orphan;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_hasResidualOrphan1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass, modelica_metatype _eqnsarr)
{
  modelica_integer _Orphan;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _Orphan has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _eqns;
    {
      modelica_metatype _rest = NULL;
      modelica_integer _e;
      modelica_integer _len;
      modelica_integer _size;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _e has no default value.
      // _len has no default value.
      // _size has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _e = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _len = listLength(arrayGet(_ass,_e) /* DAE.ASUB */);

          _size = omc_BackendEquation_equationSize(threadData, omc_BackendEquation_get(threadData, _eqnsarr, _e));

          /* Pattern-matching assignment */
          tmp9 = (_len < _size);
          if (1 /* true */ != tmp9) goto goto_2;
          tmp1 = _e;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          tmp1 = omc_OnRelaxation_hasResidualOrphan1(threadData, _rest, _ass, _eqnsarr);
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
  _Orphan = tmp1;
  _return: OMC_LABEL_UNUSED
  return _Orphan;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_hasResidualOrphan1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass, modelica_metatype _eqnsarr)
{
  modelica_integer _Orphan;
  modelica_metatype out_Orphan;
  _Orphan = omc_OnRelaxation_hasResidualOrphan1(threadData, _eqns, _ass, _eqnsarr);
  out_Orphan = mmc_mk_icon(_Orphan);
  return out_Orphan;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_reduceOrphancMatrix1(threadData_t *threadData, modelica_metatype _comps, modelica_metatype _comps1, modelica_metatype _m)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _comps;
    {
      modelica_integer _c;
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _c has no default value.
      // _rest has no default value.
      // _lst has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _c = tmp7  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          _lst = arrayGet(_m,_c) /* DAE.ASUB */;

          _lst = omc_List_setDifference(threadData, _lst, _comps1);

          arrayUpdate(_m, _c, listReverse(_lst));

          /* Tail recursive call */
          _comps = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_reduceOrphancMatrix(threadData_t *threadData, modelica_metatype _comps, modelica_metatype _m)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _comps;
    {
      modelica_metatype _comp = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _comp has no default value.
      // _rest has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (listEmpty(tmpMeta5)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmpMeta5);
          tmpMeta8 = MMC_CDR(tmpMeta5);
          if (!listEmpty(tmpMeta8)) goto tmp2_end;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comps = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta9 = MMC_CAR(tmp3_1);
          tmpMeta10 = MMC_CDR(tmp3_1);
          _comp = tmpMeta9;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          omc_OnRelaxation_reduceOrphancMatrix1(threadData, _comp, _comp, _m);

          /* Tail recursive call */
          _comps = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getOrphansOrderEdvanced3(threadData_t *threadData, modelica_metatype _roots, modelica_metatype _otherorphans, modelica_metatype _constraints, modelica_metatype _vorphans, modelica_metatype _vorphansarray, modelica_integer _mark, modelica_metatype _rowmarks, modelica_integer *out_omark)
{
  modelica_metatype _sortvorphans = NULL;
  modelica_integer _omark;
  modelica_metatype _order = NULL;
  modelica_integer _size;
  modelica_metatype _map = NULL;
  modelica_metatype _ass = NULL;
  modelica_metatype _invmap = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mt = NULL;
  modelica_metatype _range = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _linkslst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sortvorphans has no default value.
  // _omark has no default value.
  // _order has no default value.
  // _size has no default value.
  // _map has no default value.
  // _ass has no default value.
  // _invmap has no default value.
  // _m has no default value.
  // _mt has no default value.
  // _range has no default value.
  // _comps has no default value.
  // _linkslst has no default value.
  _map = listArray(_vorphans);

  _size = arrayLength(_map);

  _invmap = arrayCreate(arrayLength(_vorphansarray), mmc_mk_integer(((modelica_integer) 0)));

  omc_List_fold1(threadData, _vorphans, boxvar_OnRelaxation_getInvMap, _invmap, mmc_mk_integer(((modelica_integer) 1)));

  _range = omc_List_intRange(threadData, _size);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _m = omc_OnRelaxation_getOrphansAdjacencyMatrix(threadData, _vorphans, _invmap, _vorphansarray, arrayCreate(_size, tmpMeta1), 1 /* true */ ,&_mt);

  _ass = listArray(_range);

  _comps = omc_Sorting_TarjanTransposed(threadData, _mt, _ass);

  /* Pattern-matching assignment */
  tmpMeta2 = omc_List_fold(threadData, _comps, boxvar_OnRelaxation_getOrder, _OMC_LIT26);
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  _order = tmpMeta3;
  _linkslst = tmpMeta4;

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _m = omc_OnRelaxation_getOrphansAdjacencyMatrix(threadData, _vorphans, _invmap, _vorphansarray, arrayCreate(_size, tmpMeta5), 0 /* false */ ,&_mt);

  omc_OnRelaxation_reduceOrphancMatrix(threadData, listReverse(_comps), _m);

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _omark = omc_OnRelaxation_getOrphansOrderEdvanced4(threadData, _linkslst, _m, _mt, _mark, _rowmarks, _order, tmpMeta6);

  _mt = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _m, arrayLength(_mt));

  _comps = omc_Sorting_TarjanTransposed(threadData, _mt, _ass);

  _sortvorphans = omc_List_flattenReverse(threadData, _comps);

  _sortvorphans = omc_List_map1r(threadData, _sortvorphans, boxvar_arrayGet, _map);
  _return: OMC_LABEL_UNUSED
  if (out_omark) { *out_omark = _omark; }
  return _sortvorphans;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansOrderEdvanced3(threadData_t *threadData, modelica_metatype _roots, modelica_metatype _otherorphans, modelica_metatype _constraints, modelica_metatype _vorphans, modelica_metatype _vorphansarray, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype *out_omark)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype _sortvorphans = NULL;
  tmp1 = mmc_unbox_integer(_mark);
  _sortvorphans = omc_OnRelaxation_getOrphansOrderEdvanced3(threadData, _roots, _otherorphans, _constraints, _vorphans, _vorphansarray, tmp1, _rowmarks, &_omark);
  /* skip box _sortvorphans; list<#Integer> */
  if (out_omark) { *out_omark = mmc_mk_icon(_omark); }
  return _sortvorphans;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getOrder(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _inorder)
{
  modelica_metatype _outorder = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outorder has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _comp;
    tmp4_2 = _inorder;
    {
      modelica_integer _o;
      modelica_metatype _order = NULL;
      modelica_metatype _links = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _o has no default value.
      // _order has no default value.
      // _links has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _o = tmp8  /* pattern as ty=Integer */;
          _order = tmpMeta9;
          _links = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_o), _order);
          tmpMeta12 = mmc_mk_box2(0, tmpMeta11, _links);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _order = tmpMeta13;
          _links = tmpMeta14;
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_cons(_comp, _links);
          tmpMeta16 = mmc_mk_box2(0, _order, tmpMeta15);
          tmpMeta1 = tmpMeta16;
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
  _outorder = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outorder;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getOrphansAdjacencyMatrix(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _invmap, modelica_metatype _vorphansarray, modelica_metatype _mT, modelica_boolean _addself, modelica_metatype *out_outMT)
{
  modelica_metatype _outM = NULL;
  modelica_metatype _outMT = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _lst = NULL;
  modelica_integer _i;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outM has no default value.
  _outMT = _mT;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _m = tmpMeta1;
  // _lst has no default value.
  // _i has no default value.
  {
    modelica_metatype _o;
    for (tmpMeta2 = _orphans; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _o = MMC_CAR(tmpMeta2);
      _lst = omc_List_map1r(threadData, arrayGet(_vorphansarray,mmc_unbox_integer(_o)) /* DAE.ASUB */, boxvar_arrayGet, _invmap);

      _i = mmc_unbox_integer(arrayGet(_invmap,mmc_unbox_integer(_o)) /* DAE.ASUB */);

      _lst = omc_List_consOnTrue(threadData, _addself, mmc_mk_integer(_i), _lst);

      _outMT = omc_List_fold1(threadData, _lst, boxvar_Array_consToElement, mmc_mk_integer(_i), _outMT);

      tmpMeta3 = mmc_mk_cons(_lst, _m);
      _m = tmpMeta3;
    }
  }

  _outM = omc_List_listArrayReverse(threadData, _m);

  _outMT = _mT;
  _return: OMC_LABEL_UNUSED
  if (out_outMT) { *out_outMT = _outMT; }
  return _outM;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansAdjacencyMatrix(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _invmap, modelica_metatype _vorphansarray, modelica_metatype _mT, modelica_metatype _addself, modelica_metatype *out_outMT)
{
  modelica_integer tmp1;
  modelica_metatype _outM = NULL;
  tmp1 = mmc_unbox_integer(_addself);
  _outM = omc_OnRelaxation_getOrphansAdjacencyMatrix(threadData, _orphans, _invmap, _vorphansarray, _mT, tmp1, out_outMT);
  /* skip box _outM; array<list<#Integer>> */
  /* skip box _outMT; array<list<#Integer>> */
  return _outM;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getInvMap(threadData_t *threadData, modelica_integer _orphan, modelica_metatype _invmap, modelica_integer _index)
{
  modelica_integer _oindex;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oindex has no default value.
  arrayUpdate(_invmap, _orphan, mmc_mk_integer(_index));

  _oindex = ((modelica_integer) 1) + _index;
  _return: OMC_LABEL_UNUSED
  return _oindex;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getInvMap(threadData_t *threadData, modelica_metatype _orphan, modelica_metatype _invmap, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oindex;
  modelica_metatype out_oindex;
  tmp1 = mmc_unbox_integer(_orphan);
  tmp2 = mmc_unbox_integer(_index);
  _oindex = omc_OnRelaxation_getInvMap(threadData, tmp1, _invmap, tmp2);
  out_oindex = mmc_mk_icon(_oindex);
  return out_oindex;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getOrphansOrderEdvanced4(threadData_t *threadData, modelica_metatype _linklst, modelica_metatype _m, modelica_metatype _mt, modelica_integer _imark, modelica_metatype _rowmarks, modelica_metatype _iorder, modelica_metatype _iAcc)
{
  modelica_integer _omark;
  modelica_metatype _childs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _omark has no default value.
  // _childs has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _childs = omc_OnRelaxation_getOrphansOrderEdvanced5(threadData, _linklst, _m, _mt, _imark, _rowmarks, tmpMeta1 ,&_omark);

  omc_OnRelaxation_getOrphansOrderEdvanced6(threadData, _linklst, _childs, _m);
  _return: OMC_LABEL_UNUSED
  return _omark;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansOrderEdvanced4(threadData_t *threadData, modelica_metatype _linklst, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _imark, modelica_metatype _rowmarks, modelica_metatype _iorder, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype out_omark;
  tmp1 = mmc_unbox_integer(_imark);
  _omark = omc_OnRelaxation_getOrphansOrderEdvanced4(threadData, _linklst, _m, _mt, tmp1, _rowmarks, _iorder, _iAcc);
  out_omark = mmc_mk_icon(_omark);
  return out_omark;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getOrphansOrderEdvanced6(threadData_t *threadData, modelica_metatype _linklst, modelica_metatype _childslst, modelica_metatype _m)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _linklst;
    tmp3_2 = _childslst;
    {
      modelica_metatype _links = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _childs = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _acc = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _links has no default value.
      // _lst has no default value.
      // _childs has no default value.
      // _rest has no default value.
      // _acc has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_2);
          tmpMeta8 = MMC_CDR(tmp3_2);
          _links = tmpMeta5;
          _rest = tmpMeta6;
          _childs = tmpMeta7;
          _acc = tmpMeta8;
          /* Pattern matching succeeded */
          _lst = omc_List_unique(threadData, omc_List_flatten(threadData, omc_List_map1r(threadData, _childs, boxvar_arrayGet, _m)));

          omc_List_map2__0(threadData, _links, boxvar_OnRelaxation_doAssign, _m, _lst);

          omc_List_map2__0(threadData, _childs, boxvar_OnRelaxation_doAssign, _m, _links);

          /* Tail recursive call */
          _linklst = _rest;
          _childslst = _acc;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getOrphansOrderEdvanced5(threadData_t *threadData, modelica_metatype _linklst, modelica_metatype _m, modelica_metatype _mt, modelica_integer _imark, modelica_metatype _rowmarks, modelica_metatype _iAcc, modelica_integer *out_omark)
{
  modelica_metatype _oAcc = NULL;
  modelica_integer _omark;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  // _omark has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _linklst;
    {
      modelica_metatype _links = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _childs = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _links has no default value.
      // _lst has no default value.
      // _childs has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = listReverse(_iAcc);
          tmp1_c1 = _imark;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _links = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _lst = omc_OnRelaxation_mergeOrphanParents(threadData, _links, _m, tmpMeta8);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _childs = omc_OnRelaxation_getLinkPosition(threadData, _lst, _m, _mt, _imark, _rowmarks, tmpMeta9);
          tmpMeta10 = mmc_mk_cons(_childs, _iAcc);
          /* Tail recursive call */
          _linklst = _rest;
          _imark = ((modelica_integer) 1) + _imark;
          _iAcc = tmpMeta10;
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
  _oAcc = tmpMeta[0+0];
  _omark = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_omark) { *out_omark = _omark; }
  return _oAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansOrderEdvanced5(threadData_t *threadData, modelica_metatype _linklst, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _imark, modelica_metatype _rowmarks, modelica_metatype _iAcc, modelica_metatype *out_omark)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype _oAcc = NULL;
  tmp1 = mmc_unbox_integer(_imark);
  _oAcc = omc_OnRelaxation_getOrphansOrderEdvanced5(threadData, _linklst, _m, _mt, tmp1, _rowmarks, _iAcc, &_omark);
  /* skip box _oAcc; list<list<#Integer>> */
  if (out_omark) { *out_omark = mmc_mk_icon(_omark); }
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getLinkPosition1(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_integer _preorphan, modelica_metatype _iAcc)
{
  modelica_metatype _childs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _childs has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _orphans;
    {
      modelica_integer _o;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _o has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = mmc_mk_cons(mmc_mk_integer(_preorphan), _iAcc);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_boolean tmp10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmp9 = mmc_unbox_integer(tmpMeta7);
          if (!listEmpty(tmpMeta8)) goto tmp3_end;
          _o = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (mmc_unbox_integer(arrayGet(_rowmarks,_o) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp10) goto goto_2;

          arrayUpdate(_rowmarks, _o, mmc_mk_integer(_mark));
          tmpMeta1 = omc_OnRelaxation_getLinkPosition1(threadData, arrayGet(_m,_o) /* DAE.ASUB */, _m, _mt, _mark, _rowmarks, _o, _iAcc);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_boolean tmp14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          tmp13 = mmc_unbox_integer(tmpMeta11);
          if (!listEmpty(tmpMeta12)) goto tmp3_end;
          _o = tmp13  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (mmc_unbox_integer(arrayGet(_rowmarks,_o) /* DAE.ASUB */) == _mark);
          if (1 /* true */ != tmp14) goto goto_2;
          tmpMeta1 = listAppend(arrayGet(_mt,((modelica_integer) 0)) /* DAE.ASUB */, _iAcc);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta15 = stringAppend(_OMC_LIT27,stringDelimitList(omc_List_map(threadData, _orphans, boxvar_intString), _OMC_LIT5));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT1);
          fputs(MMC_STRINGDATA(tmpMeta16),stdout);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _childs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _childs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getLinkPosition1(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _preorphan, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _childs = NULL;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_preorphan);
  _childs = omc_OnRelaxation_getLinkPosition1(threadData, _orphans, _m, _mt, tmp1, _rowmarks, tmp2, _iAcc);
  /* skip box _childs; list<#Integer> */
  return _childs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_getLinkPosition(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _iAcc)
{
  modelica_metatype _ochilds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ochilds has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _orphans;
    {
      modelica_integer _o;
      modelica_metatype _rest = NULL;
      modelica_metatype _childs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _o has no default value.
      // _rest has no default value.
      // _childs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _o = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_rowmarks,_o) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp9) goto goto_2;

          arrayUpdate(_rowmarks, _o, mmc_mk_integer(_mark));

          _childs = omc_OnRelaxation_getLinkPosition1(threadData, arrayGet(_m,_o) /* DAE.ASUB */, _m, _mt, _mark, _rowmarks, _o, _iAcc);
          tmpMeta1 = omc_OnRelaxation_getLinkPosition(threadData, _rest, _m, _mt, _mark, _rowmarks, _childs);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_OnRelaxation_getLinkPosition(threadData, _rest, _m, _mt, _mark, _rowmarks, _iAcc);
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
  _ochilds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ochilds;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getLinkPosition(threadData_t *threadData, modelica_metatype _orphans, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_metatype _ochilds = NULL;
  tmp1 = mmc_unbox_integer(_mark);
  _ochilds = omc_OnRelaxation_getLinkPosition(threadData, _orphans, _m, _mt, tmp1, _rowmarks, _iAcc);
  /* skip box _ochilds; list<#Integer> */
  return _ochilds;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_mergeOrphanParents(threadData_t *threadData, modelica_metatype _links, modelica_metatype _m, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _links;
    {
      modelica_integer _l;
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _l has no default value.
      // _rest has no default value.
      // _lst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _l = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta9 = arrayGet(_m,_l) /* DAE.ASUB */;
          if (!listEmpty(tmpMeta9)) goto goto_2;
          tmpMeta1 = omc_OnRelaxation_mergeOrphanParents(threadData, _rest, _m, _iAcc);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          tmp12 = mmc_unbox_integer(tmpMeta10);
          _l = tmp12  /* pattern as ty=Integer */;
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          _lst = arrayGet(_m,_l) /* DAE.ASUB */;
          tmpMeta1 = omc_OnRelaxation_mergeOrphanParents(threadData, _rest, _m, listAppend(_lst, _iAcc));
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
  _oAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getConstraintesOrphansOrderEdvanced1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_integer _preorphan, modelica_metatype _orphans, modelica_metatype _nextQueue)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;
    tmp3_1 = _eqns;
    tmp3_2 = _nextQueue;
    {
      modelica_integer _e;
      modelica_metatype _rest = NULL;
      modelica_metatype _next = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _r1 = NULL;
      modelica_metatype _elst = NULL;
      modelica_metatype _olst = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _e has no default value.
      // _rest has no default value.
      // _next has no default value.
      // _r has no default value.
      // _r1 has no default value.
      // _elst has no default value.
      // _olst has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (!listEmpty(tmp3_2)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_OnRelaxation_getConstraintesOrphansOrderEdvanced1(threadData, _nextQueue, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _orphans, tmpMeta5);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta6 = MMC_CAR(tmp3_1);
          tmpMeta7 = MMC_CDR(tmp3_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          
          _e = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp9) goto goto_1;

          _r = omc_List_removeOnTrue(threadData, mmc_mk_integer(_preorphan), boxvar_intEq, arrayGet(_m,_e) /* DAE.ASUB */);

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _olst = omc_OnRelaxation_hasOrphanAdvanced(threadData, _r, _ass1, tmpMeta10);

          arrayUpdate(_colummarks, _e, mmc_mk_integer(_mark));

          omc_OnRelaxation_addPreOrphans(threadData, _preorphan, _olst, _orphans);

          _r1 = arrayGet(_ass2,_e) /* DAE.ASUB */;

          _r = omc_List_fold1(threadData, _r1, boxvar_List_removeOnTrue, boxvar_intEq, _r);

          _elst = omc_List_select1(threadData, omc_List_map1r(threadData, _r, boxvar_arrayGet, _ass1), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _next = listAppend(_nextQueue, _elst);

          omc_OnRelaxation_getConstraintesOrphansOrderEdvanced1(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _orphans, _next);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_boolean tmp14;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta11 = MMC_CAR(tmp3_1);
          tmpMeta12 = MMC_CDR(tmp3_1);
          tmp13 = mmc_unbox_integer(tmpMeta11);
          
          _e = tmp13  /* pattern as ty=Integer */;
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp14) goto goto_1;

          _r = omc_List_removeOnTrue(threadData, mmc_mk_integer(_preorphan), boxvar_intEq, arrayGet(_m,_e) /* DAE.ASUB */);

          _r1 = arrayGet(_ass2,_e) /* DAE.ASUB */;

          _r = omc_List_fold1(threadData, _r1, boxvar_List_removeOnTrue, boxvar_intEq, _r);

          _elst = omc_List_select1(threadData, omc_List_map1r(threadData, _r, boxvar_arrayGet, _ass1), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _next = listAppend(_nextQueue, _elst);

          arrayUpdate(_colummarks, _e, mmc_mk_integer(_mark));

          omc_OnRelaxation_getConstraintesOrphansOrderEdvanced1(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _orphans, _next);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta15 = MMC_CAR(tmp3_1);
          tmpMeta16 = MMC_CDR(tmp3_1);
          
          _rest = tmpMeta16;
          /* Pattern matching succeeded */
          omc_OnRelaxation_getConstraintesOrphansOrderEdvanced1(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _orphans, _nextQueue);
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
      if (++tmp3 < 5) {
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_getConstraintesOrphansOrderEdvanced1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _preorphan, modelica_metatype _orphans, modelica_metatype _nextQueue)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_preorphan);
  omc_OnRelaxation_getConstraintesOrphansOrderEdvanced1(threadData, _eqns, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, tmp2, _orphans, _nextQueue);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getConstraintesOrphansOrderEdvanced(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mc, modelica_metatype _mct, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans)
{
  modelica_integer _omark;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _omark has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inOrphans;
    {
      modelica_metatype _rest = NULL;
      modelica_integer _o;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _o has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = _mark;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _o = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_rowmarks,_o) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp9) goto goto_2;

          arrayUpdate(_rowmarks, _o, mmc_mk_integer(_mark));

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_OnRelaxation_getConstraintesOrphansOrderEdvanced1(threadData, arrayGet(_mct,_o) /* DAE.ASUB */, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _o, _orphans, tmpMeta10);
          tmp1 = omc_OnRelaxation_getConstraintesOrphansOrderEdvanced(threadData, _rest, _ass1, _ass2, _m, _mt, _mc, _mct, ((modelica_integer) 1) + _mark, _rowmarks, _colummarks, _orphans);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = omc_OnRelaxation_getConstraintesOrphansOrderEdvanced(threadData, _rest, _ass1, _ass2, _m, _mt, _mc, _mct, _mark, _rowmarks, _colummarks, _orphans);
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
  _omark = tmp1;
  _return: OMC_LABEL_UNUSED
  return _omark;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getConstraintesOrphansOrderEdvanced(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mc, modelica_metatype _mct, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype out_omark;
  tmp1 = mmc_unbox_integer(_mark);
  _omark = omc_OnRelaxation_getConstraintesOrphansOrderEdvanced(threadData, _inOrphans, _ass1, _ass2, _m, _mt, _mc, _mct, tmp1, _rowmarks, _colummarks, _orphans);
  out_omark = mmc_mk_icon(_omark);
  return out_omark;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_getOrphansOrderEdvanced1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_integer _preorphan, modelica_metatype _orphans, modelica_metatype _nextQueue)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;
    tmp3_1 = _eqns;
    tmp3_2 = _nextQueue;
    {
      modelica_integer _e;
      modelica_metatype _rest = NULL;
      modelica_metatype _next = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _r1 = NULL;
      modelica_metatype _elst = NULL;
      modelica_metatype _olst = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _e has no default value.
      // _rest has no default value.
      // _next has no default value.
      // _r has no default value.
      // _r1 has no default value.
      // _elst has no default value.
      // _olst has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (!listEmpty(tmp3_2)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_OnRelaxation_getOrphansOrderEdvanced1(threadData, _nextQueue, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _orphans, tmpMeta5);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta6 = MMC_CAR(tmp3_1);
          tmpMeta7 = MMC_CDR(tmp3_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          
          _e = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp9) goto goto_1;

          _r = omc_List_removeOnTrue(threadData, mmc_mk_integer(_preorphan), boxvar_intEq, arrayGet(_m,_e) /* DAE.ASUB */);

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _olst = omc_OnRelaxation_hasOrphanAdvanced(threadData, _r, _ass1, tmpMeta10);

          arrayUpdate(_colummarks, _e, mmc_mk_integer(_mark));

          omc_OnRelaxation_addPreOrphans(threadData, _preorphan, _olst, _orphans);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_boolean tmp14;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta11 = MMC_CAR(tmp3_1);
          tmpMeta12 = MMC_CDR(tmp3_1);
          tmp13 = mmc_unbox_integer(tmpMeta11);
          
          _e = tmp13  /* pattern as ty=Integer */;
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp14) goto goto_1;

          _r = omc_List_removeOnTrue(threadData, mmc_mk_integer(_preorphan), boxvar_intEq, arrayGet(_m,_e) /* DAE.ASUB */);

          _r1 = omc_List_select1(threadData, arrayGet(_ass2,_e) /* DAE.ASUB */, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _r = omc_List_fold1(threadData, _r1, boxvar_List_removeOnTrue, boxvar_intEq, _r);

          _elst = omc_List_select1(threadData, omc_List_map1r(threadData, _r, boxvar_arrayGet, _ass1), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _next = listAppend(_nextQueue, _elst);

          arrayUpdate(_colummarks, _e, mmc_mk_integer(_mark));

          omc_OnRelaxation_getOrphansOrderEdvanced1(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _orphans, _next);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta15 = MMC_CAR(tmp3_1);
          tmpMeta16 = MMC_CDR(tmp3_1);
          
          _rest = tmpMeta16;
          /* Pattern matching succeeded */
          omc_OnRelaxation_getOrphansOrderEdvanced1(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _orphans, _nextQueue);
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
      if (++tmp3 < 5) {
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_getOrphansOrderEdvanced1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _preorphan, modelica_metatype _orphans, modelica_metatype _nextQueue)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_preorphan);
  omc_OnRelaxation_getOrphansOrderEdvanced1(threadData, _eqns, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, tmp2, _orphans, _nextQueue);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_addPreOrphans(threadData_t *threadData, modelica_integer _orphan, modelica_metatype _preorphans, modelica_metatype _arr)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _preorphans;
    {
      modelica_integer _o;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _o has no default value.
      // _rest has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _o = tmp7  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          omc_OnRelaxation_addPreOrphan(threadData, _orphan, _o, _arr);

          /* Tail recursive call */
          _preorphans = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_addPreOrphans(threadData_t *threadData, modelica_metatype _orphan, modelica_metatype _preorphans, modelica_metatype _arr)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_orphan);
  omc_OnRelaxation_addPreOrphans(threadData, tmp1, _preorphans, _arr);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_addPreOrphan(threadData_t *threadData, modelica_integer _orphan, modelica_integer _preorphan, modelica_metatype _arr)
{
  modelica_metatype _olst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _olst has no default value.
  _olst = arrayGet(_arr,_orphan) /* DAE.ASUB */;

  _olst = omc_List_unionElt(threadData, mmc_mk_integer(_preorphan), _olst);

  arrayUpdate(_arr, _orphan, _olst);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_addPreOrphan(threadData_t *threadData, modelica_metatype _orphan, modelica_metatype _preorphan, modelica_metatype _arr)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_orphan);
  tmp2 = mmc_unbox_integer(_preorphan);
  omc_OnRelaxation_addPreOrphan(threadData, tmp1, tmp2, _arr);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_hasOrphanAdvanced(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _ass1, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _rows;
    tmp4_2 = _iAcc;
    {
      modelica_metatype _rest = NULL;
      modelica_integer _r;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _r has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          /* Pattern matching succeeded */
          tmpMeta1 = _iAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          tmp10 = mmc_unbox_integer(tmpMeta8);
          
          _r = tmp10  /* pattern as ty=Integer */;
          _rest = tmpMeta9;
          /* Pattern matching succeeded */
          tmp12 = (modelica_boolean)(!(mmc_unbox_integer(arrayGet(_ass1,_r) /* DAE.ASUB */) > ((modelica_integer) 0)));
          if(tmp12)
          {
            tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_r), _iAcc);
            /* Tail recursive call */
            _rows = _rest;
            _iAcc = tmpMeta11;
            goto _tailrecursive;
            /* TODO: Make sure any eventual dead code below is never generated */
          }
          else
          {
            /* Tail recursive call */
            _rows = _rest;
            goto _tailrecursive;
            /* TODO: Make sure any eventual dead code below is never generated */
          }
          tmpMeta1 = tmpMeta13;
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
  _oAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_getOrphansOrderEdvanced(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mc, modelica_metatype _mct, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans)
{
  modelica_integer _omark;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _omark has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inOrphans;
    {
      modelica_metatype _rest = NULL;
      modelica_integer _o;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _o has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = _mark;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _o = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_rowmarks,_o) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp9) goto goto_2;

          arrayUpdate(_rowmarks, _o, mmc_mk_integer(_mark));

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_OnRelaxation_getOrphansOrderEdvanced1(threadData, arrayGet(_mct,_o) /* DAE.ASUB */, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _o, _orphans, tmpMeta10);
          tmp1 = omc_OnRelaxation_getOrphansOrderEdvanced(threadData, _rest, _ass1, _ass2, _m, _mt, _mc, _mct, ((modelica_integer) 1) + _mark, _rowmarks, _colummarks, _orphans);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = omc_OnRelaxation_getOrphansOrderEdvanced(threadData, _rest, _ass1, _ass2, _m, _mt, _mc, _mct, _mark, _rowmarks, _colummarks, _orphans);
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
  _omark = tmp1;
  _return: OMC_LABEL_UNUSED
  return _omark;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_getOrphansOrderEdvanced(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mc, modelica_metatype _mct, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype out_omark;
  tmp1 = mmc_unbox_integer(_mark);
  _omark = omc_OnRelaxation_getOrphansOrderEdvanced(threadData, _inOrphans, _ass1, _ass2, _m, _mt, _mc, _mct, tmp1, _rowmarks, _colummarks, _orphans);
  out_omark = mmc_mk_icon(_omark);
  return out_omark;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_generateResidualClique(threadData_t *threadData, modelica_integer _r, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _orphans, modelica_integer _e)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _orphans;
    {
      modelica_integer _orphan;
      modelica_metatype _lst = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _orphan has no default value.
      // _lst has no default value.
      // _rest has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _orphan = tmp7  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          _lst = arrayGet(_m,_e) /* DAE.ASUB */;

          _lst = omc_List_removeOnTrue(threadData, mmc_mk_integer(_r), boxvar_intEq, _lst);

          arrayUpdate(_m, _e, _lst);

          _lst = arrayGet(_m,_orphan) /* DAE.ASUB */;

          tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_r), _lst);
          _lst = omc_List_unique(threadData, tmpMeta8);

          arrayUpdate(_m, _orphan, _lst);

          _lst = arrayGet(_mt,_r) /* DAE.ASUB */;

          _lst = omc_List_removeOnTrue(threadData, mmc_mk_integer(_e), boxvar_intEq, _lst);

          tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_orphan), _lst);
          _lst = omc_List_unique(threadData, tmpMeta9);

          arrayUpdate(_mt, _r, _lst);

          /* Tail recursive call */
          _orphans = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_generateResidualClique(threadData_t *threadData, modelica_metatype _r, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _orphans, modelica_metatype _e)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_r);
  tmp2 = mmc_unbox_integer(_e);
  omc_OnRelaxation_generateResidualClique(threadData, tmp1, _m, _mt, _orphans, tmp2);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_generateClique(threadData_t *threadData, modelica_integer _r, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _orphans, modelica_integer _e)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _orphans;
    {
      modelica_integer _orphan;
      modelica_metatype _lst = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _orphan has no default value.
      // _lst has no default value.
      // _rest has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _orphan = tmp7  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          _lst = arrayGet(_mt,_r) /* DAE.ASUB */;

          _lst = omc_List_removeOnTrue(threadData, mmc_mk_integer(_e), boxvar_intEq, _lst);

          arrayUpdate(_mt, _r, _lst);

          _lst = arrayGet(_mt,_orphan) /* DAE.ASUB */;

          tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_e), _lst);
          _lst = omc_List_unique(threadData, tmpMeta8);

          arrayUpdate(_mt, _orphan, _lst);

          _lst = arrayGet(_m,_e) /* DAE.ASUB */;

          _lst = omc_List_removeOnTrue(threadData, mmc_mk_integer(_r), boxvar_intEq, _lst);

          tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_orphan), _lst);
          _lst = omc_List_unique(threadData, tmpMeta9);

          arrayUpdate(_m, _e, _lst);

          /* Tail recursive call */
          _orphans = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_generateClique(threadData_t *threadData, modelica_metatype _r, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _orphans, modelica_metatype _e)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_r);
  tmp2 = mmc_unbox_integer(_e);
  omc_OnRelaxation_generateClique(threadData, tmp1, _m, _mt, _orphans, tmp2);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_prepairOrphansOrder3(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_integer _preorphan, modelica_metatype _partner, modelica_metatype _orphans, modelica_metatype _prer)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _eqns;
    {
      modelica_integer _e;
      modelica_metatype _rest = NULL;
      modelica_metatype _next = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _elst = NULL;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _e has no default value.
      // _rest has no default value.
      // _next has no default value.
      // _r has no default value.
      // _elst has no default value.
      // _lst has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 4; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_boolean tmp8;
          modelica_boolean tmp9;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _e = tmp7  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp8) goto goto_1;

          _r = arrayGet(_ass2,_e) /* DAE.ASUB */;

          _lst = omc_List_unique(threadData, omc_List_flatten(threadData, omc_List_map1r(threadData, _r, boxvar_arrayGet, _orphans)));

          /* Pattern-matching assignment */
          tmp9 = listMember(mmc_mk_integer(_preorphan), _lst);
          if (1 /* true */ != tmp9) goto goto_1;

          arrayUpdate(_colummarks, _e, mmc_mk_integer(_mark));

          omc_List_map2__0(threadData, _r, boxvar_OnRelaxation_doMark, _rowmarks, mmc_mk_integer(_mark));

          _elst = omc_List_select1(threadData, omc_List_map1r(threadData, _r, boxvar_arrayGet, _ass1), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _next = omc_List_flatten(threadData, omc_List_map1r(threadData, _r, boxvar_arrayGet, _mt));

          _next = omc_List_fold1(threadData, _elst, boxvar_List_removeOnTrue, boxvar_intEq, _next);

          omc_OnRelaxation_prepairOrphansOrder3(threadData, _next, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _partner, _orphans, _r);

          omc_OnRelaxation_prepairOrphansOrder3(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _partner, _orphans, _prer);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_boolean tmp13;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta10 = MMC_CAR(tmp3_1);
          tmpMeta11 = MMC_CDR(tmp3_1);
          tmp12 = mmc_unbox_integer(tmpMeta10);
          _e = tmp12  /* pattern as ty=Integer */;
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = (mmc_unbox_integer(arrayGet(_colummarks,_e) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp13) goto goto_1;

          omc_List_map4__0(threadData, _prer, boxvar_OnRelaxation_generateClique, _m, _mt, _partner, mmc_mk_integer(_e));

          omc_OnRelaxation_prepairOrphansOrder3(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _partner, _orphans, _prer);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta14 = MMC_CAR(tmp3_1);
          tmpMeta15 = MMC_CDR(tmp3_1);
          _rest = tmpMeta15;
          /* Pattern matching succeeded */
          omc_OnRelaxation_prepairOrphansOrder3(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _partner, _orphans, _prer);
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
      if (++tmp3 < 4) {
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_prepairOrphansOrder3(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _preorphan, modelica_metatype _partner, modelica_metatype _orphans, modelica_metatype _prer)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_preorphan);
  omc_OnRelaxation_prepairOrphansOrder3(threadData, _eqns, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, tmp2, _partner, _orphans, _prer);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_prepairOrphansOrder2(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _imark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans)
{
  modelica_integer _omark;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _omark has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inOrphans;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _elst = NULL;
      modelica_metatype _rlst = NULL;
      modelica_metatype _partner = NULL;
      modelica_integer _o;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _elst has no default value.
      // _rlst has no default value.
      // _partner has no default value.
      // _o has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = ((modelica_integer) 1) + _imark;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _o = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_rowmarks,_o) /* DAE.ASUB */) == _imark);
          if (0 /* false */ != tmp9) goto goto_2;

          arrayUpdate(_rowmarks, _o, mmc_mk_integer(_imark));

          _elst = omc_List_select1(threadData, arrayGet(_mt,_o) /* DAE.ASUB */, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _rlst = omc_List_select1(threadData, omc_List_flatten(threadData, omc_List_map1r(threadData, _elst, boxvar_arrayGet, _m)), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _partner = omc_List_select1(threadData, _rlst, boxvar_OnRelaxation_isOrphan, _ass1);

          _partner = omc_List_unique(threadData, _partner);

          omc_List_map2__0(threadData, _partner, boxvar_OnRelaxation_doMark, _rowmarks, mmc_mk_integer(_imark));

          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_o), MMC_REFSTRUCTLIT(mmc_nil));
          omc_OnRelaxation_prepairOrphansOrder3(threadData, arrayGet(_mt,_o) /* DAE.ASUB */, _ass1, _ass2, _m, _mt, _imark, _rowmarks, _colummarks, _o, _partner, _orphans, tmpMeta10);
          tmp1 = omc_OnRelaxation_prepairOrphansOrder2(threadData, _rest, _ass1, _ass2, _m, _mt, _imark, _rowmarks, _colummarks, _orphans);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = omc_OnRelaxation_prepairOrphansOrder2(threadData, _rest, _ass1, _ass2, _m, _mt, _imark, _rowmarks, _colummarks, _orphans);
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
  _omark = tmp1;
  _return: OMC_LABEL_UNUSED
  return _omark;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_prepairOrphansOrder2(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _imark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype out_omark;
  tmp1 = mmc_unbox_integer(_imark);
  _omark = omc_OnRelaxation_prepairOrphansOrder2(threadData, _inOrphans, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, _orphans);
  out_omark = mmc_mk_icon(_omark);
  return out_omark;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_prepairOrphansOrder1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_integer _preorphan, modelica_metatype _orphans, modelica_metatype _prer, modelica_boolean _ifoundFlow, modelica_metatype _vars)
{
  modelica_boolean _ofoundFlow;
  modelica_metatype _next = NULL;
  modelica_metatype _r = NULL;
  modelica_metatype _elst = NULL;
  modelica_boolean _b1;
  modelica_metatype _vlst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ofoundFlow = _ifoundFlow;
  // _next has no default value.
  // _r has no default value.
  // _elst has no default value.
  // _b1 has no default value.
  // _vlst has no default value.
  {
    modelica_metatype _e;
    for (tmpMeta1 = _eqns; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      if((!(mmc_unbox_integer(arrayGet(_colummarks,mmc_unbox_integer(_e)) /* DAE.ASUB */) == _mark)))
      {
        _next = omc_List_select1(threadData, arrayGet(_m,mmc_unbox_integer(_e)) /* DAE.ASUB */, boxvar_OnRelaxation_isNoOrphan, _ass1);

        _next = omc_List_select2(threadData, _next, boxvar_OnRelaxation_unmarked, _rowmarks, mmc_mk_integer(_mark));

        _next = omc_List_fold1(threadData, arrayGet(_ass2,mmc_unbox_integer(_e)) /* DAE.ASUB */, boxvar_List_removeOnTrue, boxvar_intEq, _next);

        if(listEmpty(_next))
        {
          arrayUpdate(_colummarks, mmc_unbox_integer(_e), mmc_mk_integer(_mark));

          _r = arrayGet(_ass2,mmc_unbox_integer(_e)) /* DAE.ASUB */;

          omc_List_map2__0(threadData, _r, boxvar_OnRelaxation_doMark, _rowmarks, mmc_mk_integer(_mark));

          _elst = omc_List_select1(threadData, omc_List_map1r(threadData, _r, boxvar_arrayGet, _ass1), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _next = omc_List_flatten(threadData, omc_List_map1r(threadData, _r, boxvar_arrayGet, _mt));

          _next = omc_List_fold1(threadData, _elst, boxvar_List_removeOnTrue, boxvar_intEq, _next);

          omc_List_map2__0(threadData, _r, boxvar_OnRelaxation_addPreOrphan, mmc_mk_integer(_preorphan), _orphans);

          _vlst = omc_List_map1r(threadData, _r, boxvar_BackendVariable_getVarAt, _vars);

          _b1 = omc_List_any(threadData, _vlst, boxvar_BackendVariable_isFlowVar);

          _ofoundFlow = omc_OnRelaxation_prepairOrphansOrder1(threadData, _next, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _preorphan, _orphans, _r, (_b1 || _ofoundFlow), _vars);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _ofoundFlow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_prepairOrphansOrder1(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _preorphan, modelica_metatype _orphans, modelica_metatype _prer, modelica_metatype _ifoundFlow, modelica_metatype _vars)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_boolean _ofoundFlow;
  modelica_metatype out_ofoundFlow;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_preorphan);
  tmp3 = mmc_unbox_integer(_ifoundFlow);
  _ofoundFlow = omc_OnRelaxation_prepairOrphansOrder1(threadData, _eqns, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, tmp2, _orphans, _prer, tmp3, _vars);
  out_ofoundFlow = mmc_mk_icon(_ofoundFlow);
  return out_ofoundFlow;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_prepairOrphansOrder(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans, modelica_metatype _vars, modelica_metatype _iroots, modelica_metatype _iconstraints, modelica_metatype *out_oroots, modelica_metatype *out_oconstraints)
{
  modelica_integer _omark;
  modelica_metatype _oroots = NULL;
  modelica_metatype _oconstraints = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _omark has no default value.
  // _oroots has no default value.
  // _oconstraints has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inOrphans;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _roots = NULL;
      modelica_metatype _constraints = NULL;
      modelica_metatype _elst = NULL;
      modelica_metatype _rlst = NULL;
      modelica_integer _o;
      modelica_boolean _foundflow;
      modelica_boolean _constr;
      modelica_metatype _vlst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _roots has no default value.
      // _constraints has no default value.
      // _elst has no default value.
      // _rlst has no default value.
      // _o has no default value.
      // _foundflow has no default value.
      // _constr has no default value.
      // _vlst has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1_c0 = _mark;
          tmpMeta[0+1] = _iroots;
          tmpMeta[0+2] = _iconstraints;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _o = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!(mmc_unbox_integer(arrayGet(_rowmarks,_o) /* DAE.ASUB */) == _mark))) goto tmp3_end;
          arrayUpdate(_rowmarks, _o, mmc_mk_integer(_mark));

          _elst = arrayGet(_mt,_o) /* DAE.ASUB */;

          _rlst = omc_List_flatten(threadData, omc_List_map1r(threadData, _elst, boxvar_arrayGet, _ass2));

          _vlst = omc_List_map1r(threadData, _rlst, boxvar_BackendVariable_getVarAt, _vars);

          _constr = omc_List_all(threadData, _vlst, boxvar_BackendVariable_isFlowVar);

          _constraints = omc_List_consOnTrue(threadData, _constr, mmc_mk_integer(_o), _iconstraints);

          tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_o), MMC_REFSTRUCTLIT(mmc_nil));
          _foundflow = omc_OnRelaxation_prepairOrphansOrder1(threadData, arrayGet(_mt,_o) /* DAE.ASUB */, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _o, _orphans, tmpMeta9, 0 /* false */, _vars);

          _roots = omc_List_consOnTrue(threadData, (_foundflow && (!_constr)), mmc_mk_integer(_o), _iroots);
          /* Tail recursive call */
          _inOrphans = _rest;
          _mark = ((modelica_integer) 1) + _mark;
          _iroots = _roots;
          _iconstraints = _constraints;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inOrphans = _rest;
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
  _omark = tmp1_c0;
  _oroots = tmpMeta[0+1];
  _oconstraints = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_oroots) { *out_oroots = _oroots; }
  if (out_oconstraints) { *out_oconstraints = _oconstraints; }
  return _omark;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_prepairOrphansOrder(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphans, modelica_metatype _vars, modelica_metatype _iroots, modelica_metatype _iconstraints, modelica_metatype *out_oroots, modelica_metatype *out_oconstraints)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype out_omark;
  tmp1 = mmc_unbox_integer(_mark);
  _omark = omc_OnRelaxation_prepairOrphansOrder(threadData, _inOrphans, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, _orphans, _vars, _iroots, _iconstraints, out_oroots, out_oconstraints);
  out_omark = mmc_mk_icon(_omark);
  /* skip box _oroots; list<#Integer> */
  /* skip box _oconstraints; list<#Integer> */
  return out_omark;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_generateCliquesResidual2(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphan)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eqns;
    {
      modelica_integer _e;
      modelica_integer _r;
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _rlst = NULL;
      modelica_metatype _lst1 = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _e has no default value.
      // _r has no default value.
      // _rest has no default value.
      // _lst has no default value.
      // _rlst has no default value.
      // _lst1 has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _r = tmp7  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!(mmc_unbox_integer(arrayGet(_rowmarks,_r) /* DAE.ASUB */) == _mark))) goto tmp2_end;
          _e = mmc_unbox_integer(arrayGet(_ass1,_r) /* DAE.ASUB */);

          _rlst = arrayGet(_ass2,_e) /* DAE.ASUB */;

          _lst = omc_List_fold1(threadData, _rlst, boxvar_List_removeOnTrue, boxvar_intEq, arrayGet(_m,_e) /* DAE.ASUB */);

          /* Pattern-matching assignment */
          tmpMeta8 = omc_List_select2(threadData, _lst, boxvar_OnRelaxation_unmarked, _rowmarks, mmc_mk_integer(((modelica_integer) -1) + _mark));
          if (listEmpty(tmpMeta8)) goto goto_1;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          _lst1 = tmpMeta8;

          omc_List_map4__0(threadData, _lst1, boxvar_OnRelaxation_generateResidualClique, _m, _mt, _orphan, mmc_mk_integer(_e));

          omc_List_map2__0(threadData, _rlst, boxvar_OnRelaxation_doMark, _rowmarks, mmc_mk_integer(_mark));

          _lst = omc_List_select2(threadData, _lst, boxvar_OnRelaxation_marked, _rowmarks, mmc_mk_integer(((modelica_integer) -1) + _mark));

          arrayUpdate(_colummarks, _e, mmc_mk_integer(_mark));

          omc_OnRelaxation_generateCliquesResidual2(threadData, _lst, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _orphan);

          /* Tail recursive call */
          _eqns = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta11 = MMC_CAR(tmp3_1);
          tmpMeta12 = MMC_CDR(tmp3_1);
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _eqns = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_generateCliquesResidual2(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _orphan)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_mark);
  omc_OnRelaxation_generateCliquesResidual2(threadData, _eqns, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, _orphan);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_selectNonFlows(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _flowFlag)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _brest = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _oAcc = tmpMeta1;
  _brest = _flowFlag;
  // _b has no default value.
  {
    modelica_metatype _r;
    for (tmpMeta2 = _rows; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _r = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _brest;
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
      tmpMeta4 = MMC_CAR(tmpMeta3);
      tmpMeta5 = MMC_CDR(tmpMeta3);
      tmp6 = mmc_unbox_integer(tmpMeta4);
      _b = tmp6  /* pattern as ty=Boolean */;
      _brest = tmpMeta5;

      if((!_b))
      {
        tmpMeta7 = mmc_mk_cons(_r, _oAcc);
        _oAcc = tmpMeta7;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_OnRelaxation_generateCliquesResidual1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_boolean _ifoundFlow, modelica_metatype _vars)
{
  modelica_boolean _ofoundFlow;
  modelica_integer _e;
  modelica_metatype _next = NULL;
  modelica_metatype _rlst = NULL;
  modelica_boolean _b1;
  modelica_metatype _blst = NULL;
  modelica_metatype _vlst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ofoundFlow = _ifoundFlow;
  // _e has no default value.
  // _next has no default value.
  // _rlst has no default value.
  // _b1 has no default value.
  // _blst has no default value.
  // _vlst has no default value.
  {
    modelica_metatype _r;
    for (tmpMeta1 = _rows; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _r = MMC_CAR(tmpMeta1);
      if((!(mmc_unbox_integer(arrayGet(_rowmarks,mmc_unbox_integer(_r)) /* DAE.ASUB */) == _mark)))
      {
        _next = omc_List_select1(threadData, arrayGet(_mt,mmc_unbox_integer(_r)) /* DAE.ASUB */, boxvar_OnRelaxation_isNoResOrphan, _ass2);

        _next = omc_List_select2(threadData, _next, boxvar_OnRelaxation_unmarked, _colummarks, mmc_mk_integer(_mark));

        _next = omc_List_removeOnTrue(threadData, arrayGet(_ass1,mmc_unbox_integer(_r)) /* DAE.ASUB */, boxvar_intEq, _next);

        if(listEmpty(_next))
        {
          arrayUpdate(_rowmarks, mmc_unbox_integer(_r), mmc_mk_integer(_mark));

          _e = mmc_unbox_integer(arrayGet(_ass1,mmc_unbox_integer(_r)) /* DAE.ASUB */);

          arrayUpdate(_colummarks, _e, mmc_mk_integer(_mark));

          _rlst = arrayGet(_ass2,_e) /* DAE.ASUB */;

          _next = omc_List_fold1(threadData, _rlst, boxvar_List_removeOnTrue, boxvar_intEq, arrayGet(_m,_e) /* DAE.ASUB */);

          _vlst = omc_List_map1r(threadData, _next, boxvar_BackendVariable_getVarAt, _vars);

          _blst = omc_List_map(threadData, _vlst, boxvar_BackendVariable_isFlowVar);

          _b1 = omc_List_any(threadData, _blst, boxvar_Util_id);

          _next = omc_OnRelaxation_selectNonFlows(threadData, _next, _blst);

          _ofoundFlow = omc_OnRelaxation_generateCliquesResidual1(threadData, _next, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, (_b1 || _ofoundFlow), _vars);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _ofoundFlow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_generateCliquesResidual1(threadData_t *threadData, modelica_metatype _rows, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _ifoundFlow, modelica_metatype _vars)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _ofoundFlow;
  modelica_metatype out_ofoundFlow;
  tmp1 = mmc_unbox_integer(_mark);
  tmp2 = mmc_unbox_integer(_ifoundFlow);
  _ofoundFlow = omc_OnRelaxation_generateCliquesResidual1(threadData, _rows, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, tmp2, _vars);
  out_ofoundFlow = mmc_mk_icon(_ofoundFlow);
  return out_ofoundFlow;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_generateCliquesResidual(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_integer _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _vars, modelica_metatype _iconstraints, modelica_metatype *out_oconstraints)
{
  modelica_integer _omark;
  modelica_metatype _oconstraints = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _omark has no default value.
  // _oconstraints has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inOrphans;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _constraints = NULL;
      modelica_metatype _rlst = NULL;
      modelica_metatype _elst = NULL;
      modelica_metatype _partner = NULL;
      modelica_integer _o;
      modelica_boolean _foundflow;
      modelica_metatype _blst = NULL;
      modelica_metatype _vlst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _constraints has no default value.
      // _rlst has no default value.
      // _elst has no default value.
      // _partner has no default value.
      // _o has no default value.
      // _foundflow has no default value.
      // _blst has no default value.
      // _vlst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1_c0 = ((modelica_integer) 2) + _mark;
          tmpMeta[0+1] = _iconstraints;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _o = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_colummarks,_o) /* DAE.ASUB */) == _mark);
          if (0 /* false */ != tmp9) goto goto_2;

          arrayUpdate(_colummarks, _o, mmc_mk_integer(_mark));

          _rlst = arrayGet(_m,_o) /* DAE.ASUB */;

          _elst = omc_List_select1(threadData, omc_List_flatten(threadData, omc_List_map1r(threadData, _rlst, boxvar_arrayGet, _mt)), boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _partner = omc_List_select1(threadData, _elst, boxvar_OnRelaxation_isResOrphan, _ass2);

          _partner = omc_List_uniqueIntN(threadData, omc_List_removeOnTrue(threadData, mmc_mk_integer(_o), boxvar_intEq, _partner), arrayLength(_colummarks));

          omc_List_map2__0(threadData, _partner, boxvar_OnRelaxation_doMark, _colummarks, mmc_mk_integer(_mark));

          _vlst = omc_List_map1r(threadData, _rlst, boxvar_BackendVariable_getVarAt, _vars);

          _blst = omc_List_map(threadData, _vlst, boxvar_BackendVariable_isFlowVar);

          _foundflow = omc_List_any(threadData, _blst, boxvar_Util_id);

          _rlst = omc_OnRelaxation_selectNonFlows(threadData, _rlst, _blst);

          _foundflow = omc_OnRelaxation_generateCliquesResidual1(threadData, _rlst, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _foundflow, _vars);

          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_o), _partner);
          omc_OnRelaxation_generateCliquesResidual2(threadData, _rlst, _ass1, _ass2, _m, _mt, ((modelica_integer) 1) + _mark, _rowmarks, _colummarks, tmpMeta10);

          tmp12 = (modelica_boolean)(!_foundflow);
          if(tmp12)
          {
            tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_o), _partner);
            tmpMeta13 = listAppend(tmpMeta11, _iconstraints);
          }
          else
          {
            tmpMeta13 = _iconstraints;
          }
          _constraints = tmpMeta13;
          tmp1_c0 = omc_OnRelaxation_generateCliquesResidual(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _vars, _constraints, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          _rest = tmpMeta15;
          /* Pattern matching succeeded */
          tmp1_c0 = omc_OnRelaxation_generateCliquesResidual(threadData, _rest, _ass1, _ass2, _m, _mt, _mark, _rowmarks, _colummarks, _vars, _iconstraints, &tmpMeta[0+1]);
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
  _omark = tmp1_c0;
  _oconstraints = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oconstraints) { *out_oconstraints = _oconstraints; }
  return _omark;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_generateCliquesResidual(threadData_t *threadData, modelica_metatype _inOrphans, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _mark, modelica_metatype _rowmarks, modelica_metatype _colummarks, modelica_metatype _vars, modelica_metatype _iconstraints, modelica_metatype *out_oconstraints)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype out_omark;
  tmp1 = mmc_unbox_integer(_mark);
  _omark = omc_OnRelaxation_generateCliquesResidual(threadData, _inOrphans, _ass1, _ass2, _m, _mt, tmp1, _rowmarks, _colummarks, _vars, _iconstraints, out_oconstraints);
  out_omark = mmc_mk_icon(_omark);
  /* skip box _oconstraints; list<#Integer> */
  return out_omark;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_markOrphans(threadData_t *threadData, modelica_integer _o, modelica_integer _mark, modelica_metatype _rowmark)
{
  modelica_metatype _orowmark = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _orowmark has no default value.
  _orowmark = arrayUpdate(_rowmark, _o, mmc_mk_integer(_mark));
  _return: OMC_LABEL_UNUSED
  return _orowmark;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_markOrphans(threadData_t *threadData, modelica_metatype _o, modelica_metatype _mark, modelica_metatype _rowmark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _orowmark = NULL;
  tmp1 = mmc_unbox_integer(_o);
  tmp2 = mmc_unbox_integer(_mark);
  _orowmark = omc_OnRelaxation_markOrphans(threadData, tmp1, tmp2, _rowmark);
  /* skip box _orowmark; array<#Integer> */
  return _orowmark;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_OnRelaxation_transposeOrphanVec(threadData_t *threadData, modelica_integer _c, modelica_metatype _vec3, modelica_integer _inId)
{
  modelica_integer _outId;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outId has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_c > ((modelica_integer) 0));
          if (1 /* true */ != tmp6) goto goto_2;

          _lst = arrayGet(_vec3,_c) /* DAE.ASUB */;

          tmpMeta7 = mmc_mk_cons(mmc_mk_integer(_inId), _lst);
          arrayUpdate(_vec3, _c, tmpMeta7);
          tmp1 = ((modelica_integer) 1) + _inId;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1) + _inId;
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
  _outId = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outId;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_transposeOrphanVec(threadData_t *threadData, modelica_metatype _c, modelica_metatype _vec3, modelica_metatype _inId)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outId;
  modelica_metatype out_outId;
  tmp1 = mmc_unbox_integer(_c);
  tmp2 = mmc_unbox_integer(_inId);
  _outId = omc_OnRelaxation_transposeOrphanVec(threadData, tmp1, _vec3, tmp2);
  out_outId = mmc_mk_icon(_outId);
  return out_outId;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_dumpVar(threadData_t *threadData, modelica_integer _id, modelica_metatype _vars)
{
  modelica_metatype _v = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  _v = omc_BackendVariable_getVarAt(threadData, _vars, _id);

  fputs(MMC_STRINGDATA(omc_ComponentReferenceBasics_printComponentRefStr(threadData, omc_BackendVariable_varCref(threadData, _v))),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT1),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_dumpVar(threadData_t *threadData, modelica_metatype _id, modelica_metatype _vars)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_id);
  omc_OnRelaxation_dumpVar(threadData, tmp1, _vars);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_replaceEquationsAddNew(threadData_t *threadData, modelica_metatype _inEqnIndxes, modelica_metatype _inEqns, modelica_metatype _inEqSystem)
{
  modelica_metatype _outEqSystem = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqSystem has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _inEqnIndxes;
    tmp4_2 = _inEqns;
    tmp4_3 = _inEqSystem;
    {
      modelica_integer _index;
      modelica_metatype _indices = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqSystem = NULL;
      modelica_metatype _orderedEqs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _index has no default value.
      // _indices has no default value.
      // _eqn has no default value.
      // _eqns has no default value.
      // _eqSystem has no default value.
      // _orderedEqs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_BackendEquation_equationsAddDAE(threadData, _inEqns, _inEqSystem);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_2);
          tmpMeta10 = MMC_CDR(tmp4_2);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          
          _index = tmp8  /* pattern as ty=Integer */;
          _indices = tmpMeta7;
          _eqn = tmpMeta9;
          _eqns = tmpMeta10;
          _orderedEqs = tmpMeta11;
          /* Pattern matching succeeded */
          _eqSystem = omc_BackendDAEUtil_setEqSystEqs(threadData, _inEqSystem, omc_BackendEquation_setAtIndex(threadData, _orderedEqs, _index, _eqn));
          /* Tail recursive call */
          _inEqnIndxes = _indices;
          _inEqns = _eqns;
          _inEqSystem = _eqSystem;
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
  _outEqSystem = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outEqSystem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_traverserExpreplaceFinalParameter(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _tpl;
    {
      modelica_metatype _knvars = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _v = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _knvars has no default value.
      // _e1 has no default value.
      // _cr has no default value.
      // _v has no default value.
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
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          
          _cr = tmpMeta6;
          _knvars = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta8 = omc_BackendVariable_getVar(threadData, _cr, _knvars, NULL);
          if (listEmpty(tmpMeta8)) goto goto_2;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          _v = tmpMeta9;

          /* Pattern-matching assignment */
          tmp11 = omc_BackendVariable_isFinalVar(threadData, _v);
          if (1 /* true */ != tmp11) goto goto_2;

          _e1 = omc_BackendVariable_varBindExpStartValue(threadData, _v);
          tmpMeta12 = mmc_mk_box2(0, _knvars, mmc_mk_boolean(1 /* true */));
          tmpMeta[0+0] = _e1;
          tmpMeta[0+1] = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _tpl;
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
  _outExp = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_replaceFinalParameter(threadData_t *threadData, modelica_metatype _itpl)
{
  modelica_metatype _outTpl = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _knvars = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  // _e has no default value.
  // _knvars has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _itpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _e = tmpMeta2;
  _knvars = tmpMeta3;

  /* Pattern-matching tuple assignment */
  tmpMeta8 = mmc_mk_box2(0, _knvars, mmc_mk_boolean(0 /* false */));
  tmpMeta9 = omc_Expression_traverseExpBottomUp(threadData, _e, boxvar_OnRelaxation_traverserExpreplaceFinalParameter, tmpMeta8, &tmpMeta4);
  _e = tmpMeta9;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  _knvars = tmpMeta5;
  _b = tmp7  /* pattern as ty=Boolean */;

  _e = omc_ExpressionSimplify_condsimplify(threadData, _b, _e, NULL);

  tmpMeta10 = mmc_mk_box2(0, _e, _knvars);
  _outTpl = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC void omc_OnRelaxation_removeRootConnections(threadData_t *threadData, modelica_integer _orphan, modelica_metatype _orphansarray, modelica_metatype _roots)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    {
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _lst has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_boolean tmp5;
          /* Pattern matching succeeded */
          _lst = arrayGet(_orphansarray,_orphan) /* DAE.ASUB */;

          /* Pattern-matching assignment */
          tmp5 = (listLength(_lst) > ((modelica_integer) 1));
          if (1 /* true */ != tmp5) goto goto_1;

          _lst = omc_List_fold1(threadData, _roots, boxvar_List_removeOnTrue, boxvar_intEq, _lst);

          arrayUpdate(_orphansarray, _orphan, _lst);
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
PROTECTED_FUNCTION_STATIC void boxptr_OnRelaxation_removeRootConnections(threadData_t *threadData, modelica_metatype _orphan, modelica_metatype _orphansarray, modelica_metatype _roots)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_orphan);
  omc_OnRelaxation_removeRootConnections(threadData, tmp1, _orphansarray, _roots);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_relaxSystem1(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inComps, modelica_metatype *out_oshared, modelica_boolean *out_outRunMatching)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _oshared = NULL;
  modelica_boolean _outRunMatching;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _oshared has no default value.
  // _outRunMatching has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _ishared;
    tmp4_2 = _inComps;
    {
      modelica_metatype _eindex = NULL;
      modelica_metatype _vindx = NULL;
      modelica_metatype _eorphans = NULL;
      modelica_metatype _vorphans = NULL;
      modelica_metatype _unassigned = NULL;
      modelica_metatype _otherorphans = NULL;
      modelica_metatype _roots = NULL;
      modelica_metatype _constraints = NULL;
      modelica_metatype _constraintresidual = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _subsyst = NULL;
      modelica_metatype _shared = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _vec2 = NULL;
      modelica_metatype _rowmarks = NULL;
      modelica_metatype _colummarks = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_metatype _orowmarks = NULL;
      modelica_metatype _ocolummarks = NULL;
      modelica_integer _size;
      modelica_integer _mark;
      modelica_integer _esize;
      modelica_metatype _eqn_lst = NULL;
      modelica_metatype _var_lst = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _tvars = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _teqns = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _m1 = NULL;
      modelica_metatype _mc = NULL;
      modelica_metatype _mt = NULL;
      modelica_metatype _mct = NULL;
      modelica_metatype _jac = NULL;
      modelica_metatype _beqs = NULL;
      modelica_metatype _matrix = NULL;
      modelica_metatype _crefexps = NULL;
      modelica_metatype _crefexplst = NULL;
      modelica_metatype _vorphansarray1 = NULL;
      modelica_metatype _mapEqnIncRow = NULL;
      modelica_metatype _ass22 = NULL;
      modelica_metatype _vec1 = NULL;
      modelica_metatype _neweqns = NULL;
      modelica_metatype _funcs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eindex has no default value.
      // _vindx has no default value.
      // _eorphans has no default value.
      // _vorphans has no default value.
      // _unassigned has no default value.
      // _otherorphans has no default value.
      // _roots has no default value.
      // _constraints has no default value.
      // _constraintresidual has no default value.
      // _syst has no default value.
      // _subsyst has no default value.
      // _shared has no default value.
      // _comps has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _vec2 has no default value.
      // _rowmarks has no default value.
      // _colummarks has no default value.
      // _mapIncRowEqn has no default value.
      // _orowmarks has no default value.
      // _ocolummarks has no default value.
      // _size has no default value.
      // _mark has no default value.
      // _esize has no default value.
      // _eqn_lst has no default value.
      // _var_lst has no default value.
      // _vars has no default value.
      // _tvars has no default value.
      // _eqns has no default value.
      // _teqns has no default value.
      // _m has no default value.
      // _m1 has no default value.
      // _mc has no default value.
      // _mt has no default value.
      // _mct has no default value.
      // _jac has no default value.
      // _beqs has no default value.
      // _matrix has no default value.
      // _crefexps has no default value.
      // _crefexplst has no default value.
      // _vorphansarray1 has no default value.
      // _mapEqnIncRow has no default value.
      // _ass22 has no default value.
      // _vec1 has no default value.
      // _neweqns has no default value.
      // _funcs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _isyst;
          tmpMeta[0+1] = _ishared;
          tmp1_c2 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
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
          modelica_boolean tmp25;
          modelica_metatype tmpMeta26;
          modelica_boolean tmp27;
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
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,5) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (optionNone(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,1,0) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          
          _eindex = tmpMeta8;
          _vindx = tmpMeta9;
          _jac = tmpMeta12;
          _comps = tmpMeta7;
          _shared = tmp4_1;
          _funcs = tmpMeta14;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT28),stdout);

          omc_Util_profilerinit(threadData);

          omc_Util_profilerstart2(threadData);

          omc_Util_profilerstart1(threadData);

          _size = listLength(_vindx);

          _esize = listLength(_eindex);

          _ass1 = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

          _ass2 = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

          _eqn_lst = omc_BackendEquation_getList(threadData, _eindex, omc_BackendEquation_getEqnsFromEqSystem(threadData, _isyst));

          _eqns = omc_BackendEquation_listEquation(threadData, _eqn_lst);

          _var_lst = omc_List_map1r(threadData, _vindx, boxvar_BackendVariable_getVarAt, omc_BackendVariable_daeVars(threadData, _isyst));

          _vars = omc_BackendVariable_listVar1(threadData, _var_lst);

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          _subsyst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta15, _OMC_LIT29, omc_BackendEquation_emptyEqns(threadData));

          _subsyst = omc_BackendDAEUtil_getAdjacencyMatrixScalar(threadData, _subsyst, _OMC_LIT30, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_m ,&_mt ,&_mapEqnIncRow ,&_mapIncRowEqn);

          /* Pattern-matching assignment */
          tmpMeta16 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1)), _ass1, _ass2);
          tmpMeta17 = omc_List_fold1(threadData, _eqn_lst, boxvar_OnRelaxation_vectorMatching, _vars, tmpMeta16);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 3));
          _ass1 = tmpMeta18;
          _ass2 = tmpMeta19;

          /* Pattern-matching assignment */
          tmpMeta20 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1)), _ass1, _ass2);
          tmpMeta21 = omc_List_fold1(threadData, _eqn_lst, boxvar_OnRelaxation_aliasMatching, _vars, tmpMeta20);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
          _ass1 = tmpMeta22;
          _ass2 = tmpMeta23;

          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          _m1 = arrayCreate(_size, tmpMeta24);

          omc_OnRelaxation_transformJacToAdjacencyMatrix2(threadData, _jac, _m1, _mapIncRowEqn, _eqns, _ass1, _ass2, boxvar_OnRelaxation_isConstOneMinusOne);

          omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _size, _size, _m1);

          /* Pattern-matching assignment */
          tmp25 = omc_BackendDAEEXT_setAssignment(threadData, _size, _size, _ass2, _ass1);
          if (1 /* true */ != tmp25) goto goto_2;

          omc_BackendDAEEXT_matching(threadData, _size, _size, ((modelica_integer) 5), ((modelica_integer) -1), 1.0, ((modelica_integer) 0));

          omc_BackendDAEEXT_getAssignment(threadData, _ass2, _ass1);

          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          _m1 = arrayCreate(_size, tmpMeta26);

          omc_OnRelaxation_transformJacToAdjacencyMatrix1(threadData, _jac, _m1, _ass1, _ass2, boxvar_OnRelaxation_isConstOneMinusOne);

          omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _size, _size, _m1);

          /* Pattern-matching assignment */
          tmp27 = omc_BackendDAEEXT_setAssignment(threadData, _size, _size, _ass2, _ass1);
          if (1 /* true */ != tmp27) goto goto_2;

          omc_BackendDAEEXT_matching(threadData, _size, _size, ((modelica_integer) 1), ((modelica_integer) -1), 1.0, ((modelica_integer) 0));

          omc_BackendDAEEXT_getAssignment(threadData, _ass2, _ass1);

          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          _unassigned = omc_Matching_getUnassigned(threadData, _size, _ass2, tmpMeta28);

          _colummarks = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_OnRelaxation_onefreeMatchingBFS(threadData, _unassigned, _m, _mt, _size, _ass1, _ass2, _colummarks, ((modelica_integer) 1), tmpMeta29);

          omc_Util_profilerstop1(threadData);

          tmpMeta30 = stringAppend(_OMC_LIT31,realString(omc_Util_profilertime1(threadData)));
          tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT1);
          fputs(MMC_STRINGDATA(tmpMeta31),stdout);

          omc_Util_profilerreset1(threadData);

          omc_Util_profilerstart1(threadData);

          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
          _vorphans = omc_OnRelaxation_getOrphans(threadData, ((modelica_integer) 1), _size, _ass1, tmpMeta32);

          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          _eorphans = omc_OnRelaxation_getOrphans(threadData, ((modelica_integer) 1), _size, _ass2, tmpMeta33);

          _ass1 = omc_BackendDAETransform_varAssignmentNonScalar(threadData, _ass1, _mapIncRowEqn);

          _ass22 = omc_BackendDAETransform_eqnAssignmentNonScalar(threadData, _mapEqnIncRow, _ass2);

          _eorphans = omc_List_uniqueIntN(threadData, omc_List_map1r(threadData, _eorphans, boxvar_arrayGet, _mapIncRowEqn), arrayLength(_mapIncRowEqn));

          _subsyst = omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _subsyst, _OMC_LIT30, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_m ,&_mt);

          _rowmarks = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

          _colummarks = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

          _orowmarks = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

          _ocolummarks = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          _vorphansarray1 = arrayCreate(_size, tmpMeta34);

          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          _mc = arrayCreate(_esize, tmpMeta35);

          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          _mct = arrayCreate(_size, tmpMeta36);

          _mc = omc_Array_copy(threadData, _m, _mc);

          _mct = omc_Array_copy(threadData, _mt, _mct);

          _mark = ((modelica_integer) 1);

          tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
          _mark = omc_OnRelaxation_generateCliquesResidual(threadData, _eorphans, _ass1, _ass22, _mc, _mct, _mark, _rowmarks, _colummarks, _vars, tmpMeta37 ,&_constraintresidual);

          tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
          _mark = omc_OnRelaxation_prepairOrphansOrder(threadData, _vorphans, _ass1, _ass22, _mc, _mct, _mark, _rowmarks, _colummarks, _vorphansarray1, _vars, tmpMeta38, tmpMeta39 ,&_roots ,&_constraints);

          _mark = omc_OnRelaxation_prepairOrphansOrder2(threadData, _vorphans, _ass1, _ass22, _mc, _mct, _mark, _rowmarks, _colummarks, _vorphansarray1);

          omc_Util_profilerstop1(threadData);

          tmpMeta40 = stringAppend(_OMC_LIT32,realString(omc_Util_profilertime1(threadData)));
          tmpMeta41 = stringAppend(tmpMeta40,_OMC_LIT1);
          fputs(MMC_STRINGDATA(tmpMeta41),stdout);

          omc_Util_profilerreset1(threadData);

          omc_Util_profilerstart1(threadData);

          tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
          _vorphansarray1 = arrayCreate(_size, tmpMeta42);

          omc_List_map2__0(threadData, _roots, boxvar_OnRelaxation_doMark, _rowmarks, mmc_mk_integer(_mark));

          omc_List_map2__0(threadData, _constraints, boxvar_OnRelaxation_doMark, _rowmarks, mmc_mk_integer(_mark));

          _otherorphans = omc_List_select2(threadData, _vorphans, boxvar_OnRelaxation_unmarked, _rowmarks, mmc_mk_integer(_mark));

          _mark = omc_OnRelaxation_getOrphansOrderEdvanced(threadData, _otherorphans, _ass1, _ass22, _m, _mt, _mc, _mct, _mark, _rowmarks, _colummarks, _vorphansarray1);

          omc_List_map2__0(threadData, _otherorphans, boxvar_OnRelaxation_removeRootConnections, _vorphansarray1, _roots);

          _mark = omc_OnRelaxation_getConstraintesOrphansOrderEdvanced(threadData, _constraints, _ass1, _ass22, _m, _mt, _mc, _mct, _mark, _rowmarks, _colummarks, _vorphansarray1);

          _vorphans = omc_OnRelaxation_getOrphansOrderEdvanced3(threadData, _roots, _otherorphans, _constraints, _vorphans, _vorphansarray1, _mark, _rowmarks ,&_mark);

          omc_Util_profilerstop1(threadData);

          tmpMeta43 = stringAppend(_OMC_LIT33,realString(omc_Util_profilertime1(threadData)));
          tmpMeta44 = stringAppend(tmpMeta43,_OMC_LIT1);
          fputs(MMC_STRINGDATA(tmpMeta44),stdout);

          omc_Util_profilerreset1(threadData);

          omc_Util_profilerstart1(threadData);

          omc_List_map2__0(threadData, _constraints, boxvar_OnRelaxation_doMark, _rowmarks, mmc_mk_integer(_mark));

          _otherorphans = omc_List_select2(threadData, _vorphans, boxvar_OnRelaxation_unmarked, _rowmarks, mmc_mk_integer(_mark));

          omc_List_map2__0(threadData, _constraintresidual, boxvar_OnRelaxation_doAssign, _ass22, _OMC_LIT34);

          _mark = omc_OnRelaxation_getOrphansPairs(threadData, _otherorphans, _ass1, _ass22, _m, _mt, ((modelica_integer) 1) + _mark, _rowmarks, _colummarks);

          tmpMeta45 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_List_map2__0(threadData, _constraintresidual, boxvar_OnRelaxation_doAssign, _ass22, tmpMeta45);

          _mark = omc_OnRelaxation_getOrphansPairsConstraints(threadData, _constraints, _ass1, _ass22, _mc, _mct, _mark, _rowmarks, _colummarks, _eqns);

          omc_Util_profilerstop1(threadData);

          tmpMeta46 = stringAppend(_OMC_LIT35,realString(omc_Util_profilertime1(threadData)));
          tmpMeta47 = stringAppend(tmpMeta46,_OMC_LIT1);
          fputs(MMC_STRINGDATA(tmpMeta47),stdout);

          omc_Util_profilerreset1(threadData);

          omc_Util_profilerstart1(threadData);

          tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
          _vec1 = arrayCreate(_esize, tmpMeta48);

          _vec2 = arrayCreate(_esize, mmc_mk_integer(((modelica_integer) -1)));

          _orowmarks = omc_List_fold1(threadData, _vorphans, boxvar_OnRelaxation_markOrphans, mmc_mk_integer(((modelica_integer) 1)), _orowmarks);

          _ocolummarks = omc_List_fold1(threadData, _eorphans, boxvar_OnRelaxation_markOrphans, mmc_mk_integer(((modelica_integer) 1)), _ocolummarks);

          _mark = omc_OnRelaxation_getIndexesForEqnsAdvanced(threadData, _vorphans, ((modelica_integer) 1), _m, _mt, _mark, _rowmarks, _colummarks, _orowmarks, _ocolummarks, _ass1, _ass22, _vec1, _vec2, arrayCreate(_esize, mmc_mk_boolean(0 /* false */)), _vars, _eqns, _shared, _size);

          /* Pattern-matching assignment */
          tmpMeta49 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta50 = mmc_mk_box5(0, _eqns, _vars, _ass22, omc_BackendEquation_listEquation(threadData, tmpMeta49), omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013)));
          tmpMeta51 = omc_Array_fold(threadData, _vec2, boxvar_OnRelaxation_getEqnsinOrder, tmpMeta50);
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 4));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 5));
          _eqns = tmpMeta52;
          _vars = tmpMeta53;

          omc_Util_profilerstop1(threadData);

          tmpMeta54 = stringAppend(_OMC_LIT36,realString(omc_Util_profilertime1(threadData)));
          tmpMeta55 = stringAppend(tmpMeta54,_OMC_LIT1);
          fputs(MMC_STRINGDATA(tmpMeta55),stdout);

          omc_Util_profilerreset1(threadData);

          omc_Util_profilerstart1(threadData);

          tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
          _subsyst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqns, tmpMeta56, _OMC_LIT29, omc_BackendEquation_emptyEqns(threadData));

          _subsyst = omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _subsyst, _OMC_LIT30, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_m ,NULL);

          /* Pattern-matching tuple assignment */
          tmpMeta57 = omc_SymbolicJacobian_calculateJacobian(threadData, _vars, _eqns, _m, 1 /* true */, _ishared, NULL);
          if (optionNone(tmpMeta57)) goto goto_2;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 1));
          _jac = tmpMeta58;

          _beqs = omc_BackendDAEUtil_getEqnSysRhs(threadData, _eqns, _vars, mmc_mk_some(_funcs), NULL);

          _beqs = listReverse(_beqs);

          tmpMeta59 = MMC_REFSTRUCTLIT(mmc_nil);
          _matrix = arrayCreate(_size, tmpMeta59);

          omc_OnRelaxation_transformJacToMatrix(threadData, _jac, ((modelica_integer) 1), ((modelica_integer) 1), _size, _beqs, _matrix);

          tmpMeta60 = MMC_REFSTRUCTLIT(mmc_nil);
          _tvars = omc_OnRelaxation_gaussElimination(threadData, ((modelica_integer) 1), _size, _matrix, omc_BackendVariable_emptyVars(threadData, ((modelica_integer) 4013)), omc_BackendEquation_listEquation(threadData, tmpMeta60), _OMC_LIT37 ,&_teqns);

          _eqn_lst = omc_BackendEquation_equationList(threadData, _teqns);

          _var_lst = omc_BackendVariable_varList(threadData, _tvars);

          _syst = omc_List_fold(threadData, _eqn_lst, boxvar_BackendEquation_equationAddDAE, _isyst);

          _syst = omc_List_fold(threadData, _var_lst, boxvar_BackendVariable_addVarDAE, _syst);

          _crefexplst = omc_List_map(threadData, omc_BackendVariable_varList(threadData, _vars), boxvar_OnRelaxation_makeCrefExps);

          _crefexps = listArray(_crefexplst);

          tmpMeta61 = MMC_REFSTRUCTLIT(mmc_nil);
          _neweqns = omc_OnRelaxation_makeGausElimination(threadData, ((modelica_integer) 1), _size, _matrix, _crefexps, tmpMeta61);

          omc_Util_profilerstop1(threadData);

          tmpMeta62 = stringAppend(_OMC_LIT38,realString(omc_Util_profilertime1(threadData)));
          tmpMeta63 = stringAppend(tmpMeta62,_OMC_LIT1);
          fputs(MMC_STRINGDATA(tmpMeta63),stdout);

          omc_Util_profilerreset1(threadData);

          omc_Util_profilerstart1(threadData);

          _syst = omc_OnRelaxation_replaceEquationsAddNew(threadData, _eindex, _neweqns, _syst);

          omc_Util_profilerstop2(threadData);

          tmpMeta64 = stringAppend(_OMC_LIT39,realString(omc_Util_profilertime2(threadData)));
          tmpMeta65 = stringAppend(tmpMeta64,_OMC_LIT1);
          fputs(MMC_STRINGDATA(tmpMeta65),stdout);

          omc_Util_profilerreset1(threadData);

          omc_Util_profilerstart1(threadData);

          fputs(MMC_STRINGDATA(_OMC_LIT40),stdout);

          _syst = omc_OnRelaxation_relaxSystem1(threadData, _syst, _shared, _comps ,&_shared ,NULL);
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _shared;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta66 = MMC_CAR(tmp4_2);
          tmpMeta67 = MMC_CDR(tmp4_2);
          
          _comps = tmpMeta67;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_OnRelaxation_relaxSystem1(threadData, _isyst, _ishared, _comps, &tmpMeta[0+1], &tmp1_c2);
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
  _osyst = tmpMeta[0+0];
  _oshared = tmpMeta[0+1];
  _outRunMatching = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_oshared) { *out_oshared = _oshared; }
  if (out_outRunMatching) { *out_outRunMatching = _outRunMatching; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_relaxSystem1(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inComps, modelica_metatype *out_oshared, modelica_metatype *out_outRunMatching)
{
  modelica_boolean _outRunMatching;
  modelica_metatype _osyst = NULL;
  _osyst = omc_OnRelaxation_relaxSystem1(threadData, _isyst, _ishared, _inComps, out_oshared, &_outRunMatching);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _oshared; BackendDAE.Shared */
  if (out_outRunMatching) { *out_outRunMatching = mmc_mk_icon(_outRunMatching); }
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_OnRelaxation_relaxSystem0(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_boolean _inChanged, modelica_metatype *out_outShared, modelica_boolean *out_outChanged)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _outShared = NULL;
  modelica_boolean _outChanged;
  modelica_metatype _comps = NULL;
  modelica_boolean _b2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _outShared has no default value.
  // _outChanged has no default value.
  // _comps has no default value.
  // _b2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _isyst;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  _comps = tmpMeta3;

  _osyst = omc_OnRelaxation_relaxSystem1(threadData, _isyst, _inShared, _comps ,&_outShared ,&_b2);

  _outChanged = (_inChanged || _b2);
  _return: OMC_LABEL_UNUSED
  if (out_outShared) { *out_outShared = _outShared; }
  if (out_outChanged) { *out_outChanged = _outChanged; }
  return _osyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_OnRelaxation_relaxSystem0(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inShared, modelica_metatype _inChanged, modelica_metatype *out_outShared, modelica_metatype *out_outChanged)
{
  modelica_integer tmp1;
  modelica_boolean _outChanged;
  modelica_metatype _osyst = NULL;
  tmp1 = mmc_unbox_integer(_inChanged);
  _osyst = omc_OnRelaxation_relaxSystem0(threadData, _isyst, _inShared, tmp1, out_outShared, &_outChanged);
  /* skip box _osyst; BackendDAE.EqSystem */
  /* skip box _outShared; BackendDAE.Shared */
  if (out_outChanged) { *out_outChanged = mmc_mk_icon(_outChanged); }
  return _osyst;
}

DLLDirection
modelica_metatype omc_OnRelaxation_relaxSystem(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  _outDAE = omc_BackendDAEUtil_mapEqSystemAndFold(threadData, _inDAE, boxvar_OnRelaxation_relaxSystem0, mmc_mk_boolean(0 /* false */), NULL);
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

