#include "omc_simulation_settings.h"
#include "UnitChecker.h"
#define _OMC_LIT0_data "\n---\nThe system of units is consistent.\n---\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,44,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n---\nThe system of units is inconsistent. \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,43,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\" != \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,6,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\"\n---\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,6,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "test"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,4,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "(\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,2,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ")^("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,3,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "),"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,2,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data " \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,2,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "\" {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,3,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "}\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,2,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,9,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,41,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT13,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "UnitChecker::mulSpecUnitWithNorm() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,42,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "UnitChecker::normalizeParamsValues() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,44,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "UnitChecker::getParam() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,31,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "UnitChecker::normalizeParamsExponents() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,47,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,4) {&UnitAbsyn_Unit_UNSPECIFIED__desc,}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "UnitChecker::normalizeOnUnit() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,38,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "UnitChecker::negParamList() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,35,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "UnitChecker::powUnitVec() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,33,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "UnitChecker::powUnitParams() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,36,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "UnitChecker::powSpecUnit() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,34,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "UnitChecker::divSpecUnit() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,34,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "UnitChecker::mulSpecUnit() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,34,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "UnitChecker::hasUnknown() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,33,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "UnitChecker::getUnknown() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,33,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,1,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,1,3) {&UnitAbsyn_UnitCheckResult_CONSISTENT__desc,}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,3,3) {&UnitAbsyn_SpecUnit_SPECUNIT__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "UnitChecker::chooseResult() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,35,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,0,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "UnitChecker::checkTerm() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,32,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,1,1) {_OMC_LIT34}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "The system of units is inconsistent in term %s with the units %s and %s respectively."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,85,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(517)),_OMC_LIT40,_OMC_LIT41,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "UnitChecker::check() failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,28,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "check failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,13,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#include "util/modelica.h"

#include "UnitChecker_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_mulSpecUnitWithNorm(threadData_t *threadData, modelica_metatype _suin, modelica_metatype _normunit, modelica_string _name, modelica_integer _loc, modelica_metatype _expo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnitChecker_mulSpecUnitWithNorm(threadData_t *threadData, modelica_metatype _suin, modelica_metatype _normunit, modelica_metatype _name, modelica_metatype _loc, modelica_metatype _expo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_mulSpecUnitWithNorm,2,0) {(void*) boxptr_UnitChecker_mulSpecUnitWithNorm,0}};
#define boxvar_UnitChecker_mulSpecUnitWithNorm MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_mulSpecUnitWithNorm)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_normalizeParamsValues(threadData_t *threadData, modelica_metatype _inparams, modelica_metatype _suin, modelica_metatype _st, modelica_metatype *out_outSt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_normalizeParamsValues,2,0) {(void*) boxptr_UnitChecker_normalizeParamsValues,0}};
#define boxvar_UnitChecker_normalizeParamsValues MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_normalizeParamsValues)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_UnitChecker_getParam(threadData_t *threadData, modelica_metatype _inparams, modelica_integer _loc, modelica_metatype *out_outexpo, modelica_metatype *out_outparams);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnitChecker_getParam(threadData_t *threadData, modelica_metatype _inparams, modelica_metatype _loc, modelica_metatype *out_outexpo, modelica_metatype *out_outparams);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_getParam,2,0) {(void*) boxptr_UnitChecker_getParam,0}};
#define boxvar_UnitChecker_getParam MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_getParam)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_normalizeParamsExponents(threadData_t *threadData, modelica_metatype _inparams);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_normalizeParamsExponents,2,0) {(void*) boxptr_UnitChecker_normalizeParamsExponents,0}};
#define boxvar_UnitChecker_normalizeParamsExponents MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_normalizeParamsExponents)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_negParamList(threadData_t *threadData, modelica_metatype _ine, modelica_metatype _ac);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_negParamList,2,0) {(void*) boxptr_UnitChecker_negParamList,0}};
#define boxvar_UnitChecker_negParamList MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_negParamList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_unifyunits(threadData_t *threadData, modelica_metatype _insu1, modelica_metatype _insu2, modelica_metatype _st, modelica_metatype *out_outSt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_unifyunits,2,0) {(void*) boxptr_UnitChecker_unifyunits,0}};
#define boxvar_UnitChecker_unifyunits MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_unifyunits)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_UnitChecker_isSpecUnitEq(threadData_t *threadData, modelica_metatype _insu1, modelica_metatype _insu2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnitChecker_isSpecUnitEq(threadData_t *threadData, modelica_metatype _insu1, modelica_metatype _insu2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_isSpecUnitEq,2,0) {(void*) boxptr_UnitChecker_isSpecUnitEq,0}};
#define boxvar_UnitChecker_isSpecUnitEq MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_isSpecUnitEq)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_unify(threadData_t *threadData, modelica_metatype _insu1, modelica_metatype _insu2, modelica_metatype _st, modelica_metatype *out_outSt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_unify,2,0) {(void*) boxptr_UnitChecker_unify,0}};
#define boxvar_UnitChecker_unify MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_unify)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_chooseResult(threadData_t *threadData, modelica_metatype _res1, modelica_metatype _res2, modelica_metatype _res3);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_chooseResult,2,0) {(void*) boxptr_UnitChecker_chooseResult,0}};
#define boxvar_UnitChecker_chooseResult MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_chooseResult)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_UnitChecker_completeCheck(threadData_t *threadData, modelica_metatype _ilst, modelica_integer _indx, modelica_metatype _st, modelica_metatype *out_stout);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnitChecker_completeCheck(threadData_t *threadData, modelica_metatype _ilst, modelica_metatype _indx, modelica_metatype _st, modelica_metatype *out_stout);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_completeCheck,2,0) {(void*) boxptr_UnitChecker_completeCheck,0}};
#define boxvar_UnitChecker_completeCheck MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_completeCheck)

DLLDirection
void omc_UnitChecker_printResult(threadData_t *threadData, modelica_metatype _res)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _res;
    {
      modelica_metatype _u1 = NULL;
      modelica_metatype _u2 = NULL;
      modelica_string _str1 = NULL;
      modelica_string _str2 = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _u1 has no default value.
      // _u2 has no default value.
      // _str1 has no default value.
      // _str2 has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,0) == 0) goto tmp2_end;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT0),stdout);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _u1 = tmpMeta5;
          _u2 = tmpMeta6;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT1),stdout);

          tmpMeta7 = mmc_mk_box2(3, &UnitAbsyn_Unit_SPECIFIED__desc, _u1);
          _str1 = omc_UnitAbsynBuilder_unit2str(threadData, tmpMeta7);

          fputs(MMC_STRINGDATA(_str1),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);

          tmpMeta8 = mmc_mk_box2(3, &UnitAbsyn_Unit_SPECIFIED__desc, _u2);
          _str2 = omc_UnitAbsynBuilder_unit2str(threadData, tmpMeta8);

          fputs(MMC_STRINGDATA(_str2),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);
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
void omc_UnitChecker_testUnitOp(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(MMC_STRINGDATA(_OMC_LIT4),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_UnitChecker_printSpecUnitParams(threadData_t *threadData, modelica_metatype _params)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _params;
    {
      modelica_string _name = NULL;
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _loc;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _name has no default value.
      // _i1 has no default value.
      // _i2 has no default value.
      // _loc has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          _i1 = tmp9  /* pattern as ty=Integer */;
          _i2 = tmp11  /* pattern as ty=Integer */;
          _name = tmpMeta13;
          _loc = tmp15  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT5),stdout);

          fputs(MMC_STRINGDATA(_name),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT6),stdout);

          fputs(MMC_STRINGDATA(intString(_loc)),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT7),stdout);

          fputs(MMC_STRINGDATA(intString(_i1)),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT8),stdout);

          fputs(MMC_STRINGDATA(intString(_i2)),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT9),stdout);

          /* Tail recursive call */
          _params = _rest;
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

DLLDirection
void omc_UnitChecker_printSpecUnit(threadData_t *threadData, modelica_string _text, modelica_metatype _su)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_string tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _text;
    tmp3_2 = _su;
    {
      modelica_metatype _params = NULL;
      modelica_string _str = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _params has no default value.
      // _str has no default value.
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 2));
          
          _str = tmp3_1;
          _params = tmpMeta5;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_str),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT10),stdout);

          tmpMeta6 = mmc_mk_box2(3, &UnitAbsyn_Unit_SPECIFIED__desc, _su);
          fputs(MMC_STRINGDATA(omc_UnitAbsynBuilder_unit2str(threadData, tmpMeta6)),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT11),stdout);

          omc_UnitChecker_printSpecUnitParams(threadData, _params);

          fputs(MMC_STRINGDATA(_OMC_LIT12),stdout);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_mulSpecUnitWithNorm(threadData_t *threadData, modelica_metatype _suin, modelica_metatype _normunit, modelica_string _name, modelica_integer _loc, modelica_metatype _expo)
{
  modelica_metatype _suout = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _suout has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _suin;
    tmp4_2 = _normunit;
    {
      modelica_metatype _params = NULL;
      modelica_metatype _unitvec = NULL;
      modelica_metatype _su2 = NULL;
      modelica_metatype _sunorm = NULL;
      modelica_metatype _su3 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _params has no default value.
      // _unitvec has no default value.
      // _su2 has no default value.
      // _sunorm has no default value.
      // _su3 has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,0) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _params = tmpMeta6;
          _unitvec = tmpMeta7;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta9 = mmc_mk_box3(3, &UnitAbsyn_TypeParameter_TYPEPARAMETER__desc, _name, mmc_mk_integer(_loc));
          tmpMeta10 = mmc_mk_box2(0, _expo, tmpMeta9);
          tmpMeta8 = mmc_mk_cons(tmpMeta10, _params);
          tmpMeta11 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, tmpMeta8, _unitvec);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _sunorm = tmpMeta12;
          _su2 = tmp4_1;
          /* Pattern matching succeeded */
          _su3 = omc_UnitChecker_powSpecUnit(threadData, _sunorm, _expo);
          tmpMeta1 = omc_UnitChecker_mulSpecUnit(threadData, _su2, _su3);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp13;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp13) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT16);
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
  _suout = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _suout;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnitChecker_mulSpecUnitWithNorm(threadData_t *threadData, modelica_metatype _suin, modelica_metatype _normunit, modelica_metatype _name, modelica_metatype _loc, modelica_metatype _expo)
{
  modelica_integer tmp1;
  modelica_metatype _suout = NULL;
  tmp1 = mmc_unbox_integer(_loc);
  _suout = omc_UnitChecker_mulSpecUnitWithNorm(threadData, _suin, _normunit, _name, tmp1, _expo);
  /* skip box _suout; UnitAbsyn.SpecUnit */
  return _suout;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_normalizeParamsValues(threadData_t *threadData, modelica_metatype _inparams, modelica_metatype _suin, modelica_metatype _st, modelica_metatype *out_outSt)
{
  modelica_metatype _uout = NULL;
  modelica_metatype _outSt = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _uout has no default value.
  // _outSt has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inparams;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _st2 = NULL;
      modelica_metatype _u2 = NULL;
      modelica_metatype _su2 = NULL;
      modelica_string _name = NULL;
      modelica_integer _loc;
      modelica_metatype _expo = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _st2 has no default value.
      // _u2 has no default value.
      // _su2 has no default value.
      // _name has no default value.
      // _loc has no default value.
      // _expo has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _suin;
          tmpMeta[0+1] = _st;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          _expo = tmpMeta8;
          _name = tmpMeta10;
          _loc = tmp12  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _u2 = omc_UnitChecker_normalize(threadData, _loc, _st ,&_st2);

          _su2 = omc_UnitChecker_mulSpecUnitWithNorm(threadData, _suin, _u2, _name, _loc, _expo);
          tmpMeta[0+0] = omc_UnitChecker_normalizeParamsValues(threadData, _rest, _su2, _st2, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp13;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp13) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT17);
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
  _uout = tmpMeta[0+0];
  _outSt = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outSt) { *out_outSt = _outSt; }
  return _uout;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_UnitChecker_getParam(threadData_t *threadData, modelica_metatype _inparams, modelica_integer _loc, modelica_metatype *out_outexpo, modelica_metatype *out_outparams)
{
  modelica_boolean _found;
  modelica_metatype _outexpo = NULL;
  modelica_metatype _outparams = NULL;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _found has no default value.
  // _outexpo has no default value.
  // _outparams has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inparams;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_integer _loc2;
      modelica_metatype _expo = NULL;
      modelica_boolean _found2;
      modelica_metatype _param = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _rest2 has no default value.
      // _loc2 has no default value.
      // _expo has no default value.
      // _found2 has no default value.
      // _param has no default value.
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
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmp1_c0 = 0 /* false */;
          tmpMeta[0+1] = _OMC_LIT18;
          tmpMeta[0+2] = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_boolean tmp13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          _expo = tmpMeta9;
          _loc2 = tmp12  /* pattern as ty=Integer */;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = (_loc2 == _loc);
          if (1 /* true */ != tmp13) goto goto_2;
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = _expo;
          tmpMeta[0+2] = _rest;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          _param = tmpMeta14;
          _rest = tmpMeta15;
          /* Pattern matching succeeded */
          _found2 = omc_UnitChecker_getParam(threadData, _rest, _loc ,&_expo ,&_rest2);
          tmpMeta16 = mmc_mk_cons(_param, _rest2);
          tmp1_c0 = _found2;
          tmpMeta[0+1] = _expo;
          tmpMeta[0+2] = tmpMeta16;
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp17;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp17 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp17) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT19);
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
  _found = tmp1_c0;
  _outexpo = tmpMeta[0+1];
  _outparams = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outexpo) { *out_outexpo = _outexpo; }
  if (out_outparams) { *out_outparams = _outparams; }
  return _found;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnitChecker_getParam(threadData_t *threadData, modelica_metatype _inparams, modelica_metatype _loc, modelica_metatype *out_outexpo, modelica_metatype *out_outparams)
{
  modelica_integer tmp1;
  modelica_boolean _found;
  modelica_metatype out_found;
  tmp1 = mmc_unbox_integer(_loc);
  _found = omc_UnitChecker_getParam(threadData, _inparams, tmp1, out_outexpo, out_outparams);
  out_found = mmc_mk_icon(_found);
  /* skip box _outexpo; MMath.Rational */
  /* skip box _outparams; list<tuple<MMath.Rational, UnitAbsyn.TypeParameter>> */
  return out_found;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_normalizeParamsExponents(threadData_t *threadData, modelica_metatype _inparams)
{
  modelica_metatype _outparams = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outparams has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inparams;
    {
      modelica_metatype _rest1 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_string _name = NULL;
      modelica_integer _loc1;
      modelica_metatype _expo1 = NULL;
      modelica_metatype _expo2 = NULL;
      modelica_metatype _expo3 = NULL;
      modelica_metatype _param = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest1 has no default value.
      // _rest2 has no default value.
      // _name has no default value.
      // _loc1 has no default value.
      // _expo1 has no default value.
      // _expo2 has no default value.
      // _expo3 has no default value.
      // _param has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          _expo1 = tmpMeta9;
          _name = tmpMeta11;
          _loc1 = tmp13  /* pattern as ty=Integer */;
          _rest1 = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmp16 = omc_UnitChecker_getParam(threadData, _rest1, _loc1, &tmpMeta14, &tmpMeta15);
          if (1 /* true */ != tmp16) goto goto_2;
          _expo2 = tmpMeta14;
          _rest2 = tmpMeta15;

          _expo3 = omc_MMath_addRational(threadData, _expo1, _expo2);
          tmpMeta18 = mmc_mk_box3(3, &UnitAbsyn_TypeParameter_TYPEPARAMETER__desc, _name, mmc_mk_integer(_loc1));
          tmpMeta19 = mmc_mk_box2(0, _expo3, tmpMeta18);
          tmpMeta17 = mmc_mk_cons(tmpMeta19, _rest2);
          tmpMeta1 = omc_UnitChecker_normalizeParamsExponents(threadData, tmpMeta17);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta20 = MMC_CAR(tmp4_1);
          tmpMeta21 = MMC_CDR(tmp4_1);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          if (0 != tmp24) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 3));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          if (1 != tmp26) goto tmp3_end;
          
          _rest1 = tmpMeta21;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_UnitChecker_normalizeParamsExponents(threadData, _rest1);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta27 = MMC_CAR(tmp4_1);
          tmpMeta28 = MMC_CDR(tmp4_1);
          _param = tmpMeta27;
          _rest1 = tmpMeta28;
          /* Pattern matching succeeded */
          _rest2 = omc_UnitChecker_normalizeParamsExponents(threadData, _rest1);
          tmpMeta29 = mmc_mk_cons(_param, _rest2);
          tmpMeta1 = tmpMeta29;
          goto tmp3_done;
        }
        case 4: {
          modelica_boolean tmp30;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp30 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp30) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT20);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outparams = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outparams;
}

DLLDirection
modelica_metatype omc_UnitChecker_normalizeOnUnit(threadData_t *threadData, modelica_metatype _u, modelica_metatype _st, modelica_metatype *out_outSt)
{
  modelica_metatype _unit = NULL;
  modelica_metatype _outSt = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _unit has no default value.
  // _outSt has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _u;
    {
      modelica_metatype _params1 = NULL;
      modelica_metatype _params2 = NULL;
      modelica_metatype _params3 = NULL;
      modelica_metatype _unitvec1 = NULL;
      modelica_metatype _unitvec2 = NULL;
      modelica_metatype _st2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _params1 has no default value.
      // _params2 has no default value.
      // _params3 has no default value.
      // _unitvec1 has no default value.
      // _unitvec2 has no default value.
      // _st2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _OMC_LIT21;
          tmpMeta[0+1] = _st;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          _params1 = tmpMeta7;
          _unitvec1 = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, tmpMeta10, _unitvec1);
          tmpMeta12 = omc_UnitChecker_normalizeParamsValues(threadData, _params1, tmpMeta11, _st, &tmpMeta9);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          _params2 = tmpMeta13;
          _unitvec2 = tmpMeta14;
          _st2 = tmpMeta9;

          _params3 = omc_UnitChecker_normalizeParamsExponents(threadData, _params2);
          tmpMeta15 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, _params3, _unitvec2);
          tmpMeta16 = mmc_mk_box2(3, &UnitAbsyn_Unit_SPECIFIED__desc, tmpMeta15);
          tmpMeta[0+0] = tmpMeta16;
          tmpMeta[0+1] = _st2;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp17;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp17 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp17) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT22);
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
  _unit = tmpMeta[0+0];
  _outSt = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outSt) { *out_outSt = _outSt; }
  return _unit;
}

DLLDirection
modelica_metatype omc_UnitChecker_normalize(threadData_t *threadData, modelica_integer _loc, modelica_metatype _st, modelica_metatype *out_outSt)
{
  modelica_metatype _unit = NULL;
  modelica_metatype _outSt = NULL;
  modelica_metatype _u1 = NULL;
  modelica_metatype _u2 = NULL;
  modelica_metatype _st2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _unit has no default value.
  // _outSt has no default value.
  // _u1 has no default value.
  // _u2 has no default value.
  // _st2 has no default value.
  _u1 = omc_UnitAbsynBuilder_find(threadData, _loc, _st);

  _u2 = omc_UnitChecker_normalizeOnUnit(threadData, _u1, _st ,&_st2);

  _outSt = omc_UnitAbsynBuilder_update(threadData, _u2, _loc, _st2);

  _unit = _u2;
  _return: OMC_LABEL_UNUSED
  if (out_outSt) { *out_outSt = _outSt; }
  return _unit;
}
modelica_metatype boxptr_UnitChecker_normalize(threadData_t *threadData, modelica_metatype _loc, modelica_metatype _st, modelica_metatype *out_outSt)
{
  modelica_integer tmp1;
  modelica_metatype _unit = NULL;
  tmp1 = mmc_unbox_integer(_loc);
  _unit = omc_UnitChecker_normalize(threadData, tmp1, _st, out_outSt);
  /* skip box _unit; UnitAbsyn.Unit */
  /* skip box _outSt; UnitAbsyn.Store */
  return _unit;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_negParamList(threadData_t *threadData, modelica_metatype _ine, modelica_metatype _ac)
{
  modelica_metatype _oute = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oute has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _ine;
    tmp4_2 = _ac;
    {
      modelica_metatype _qr = NULL;
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _indx;
      modelica_string _name = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _ac2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _qr has no default value.
      // _i1 has no default value.
      // _i2 has no default value.
      // _indx has no default value.
      // _name has no default value.
      // _rest has no default value.
      // _ac2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _ac2 = tmp4_2;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _ac2;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          
          _i1 = tmp10  /* pattern as ty=Integer */;
          _i2 = tmp12  /* pattern as ty=Integer */;
          _name = tmpMeta14;
          _indx = tmp16  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          _ac2 = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_i1), mmc_mk_integer(_i2));
          _qr = omc_MMath_multRational(threadData, _OMC_LIT23, tmpMeta17);
          tmpMeta19 = mmc_mk_box3(3, &UnitAbsyn_TypeParameter_TYPEPARAMETER__desc, _name, mmc_mk_integer(_indx));
          tmpMeta20 = mmc_mk_box2(0, _qr, tmpMeta19);
          tmpMeta18 = mmc_mk_cons(tmpMeta20, _ac2);
          tmpMeta1 = omc_UnitChecker_negParamList(threadData, _rest, tmpMeta18);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp21;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp21 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp21) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT24);
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
  _oute = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oute;
}

DLLDirection
modelica_metatype omc_UnitChecker_powUnitVec(threadData_t *threadData, modelica_metatype _inunitvec, modelica_metatype _expo)
{
  modelica_metatype _outunitvec = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outunitvec has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inunitvec;
    tmp4_2 = _expo;
    {
      modelica_metatype _expo1 = NULL;
      modelica_metatype _expo2 = NULL;
      modelica_metatype _expo3 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _rest2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expo1 has no default value.
      // _expo2 has no default value.
      // _expo3 has no default value.
      // _rest1 has no default value.
      // _rest2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          
          _expo1 = tmpMeta7;
          _rest1 = tmpMeta8;
          _expo2 = tmp4_2;
          /* Pattern matching succeeded */
          _expo3 = omc_MMath_multRational(threadData, _expo1, _expo2);

          _rest2 = omc_UnitChecker_powUnitVec(threadData, _rest1, _expo2);
          tmpMeta9 = mmc_mk_cons(_expo3, _rest2);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp10;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp10) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT25);
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
  _outunitvec = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outunitvec;
}

DLLDirection
modelica_metatype omc_UnitChecker_powUnitParams(threadData_t *threadData, modelica_metatype _inparams, modelica_metatype _expo)
{
  modelica_metatype _outparams = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outparams has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inparams;
    tmp4_2 = _expo;
    {
      modelica_metatype _expo1 = NULL;
      modelica_metatype _expo2 = NULL;
      modelica_metatype _expo3 = NULL;
      modelica_metatype _param = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _rest2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expo1 has no default value.
      // _expo2 has no default value.
      // _expo3 has no default value.
      // _param has no default value.
      // _rest1 has no default value.
      // _rest2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _expo1 = tmpMeta9;
          _param = tmpMeta10;
          _rest1 = tmpMeta8;
          _expo2 = tmp4_2;
          /* Pattern matching succeeded */
          _expo3 = omc_MMath_multRational(threadData, _expo1, _expo2);

          _rest2 = omc_UnitChecker_powUnitParams(threadData, _rest1, _expo2);
          tmpMeta12 = mmc_mk_box2(0, _expo3, _param);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _rest2);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp13;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp13) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT26);
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
  _outparams = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outparams;
}

DLLDirection
modelica_metatype omc_UnitChecker_powSpecUnit(threadData_t *threadData, modelica_metatype _suin, modelica_metatype _expo)
{
  modelica_metatype _uout = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _uout has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _suin;
    {
      modelica_metatype _params1 = NULL;
      modelica_metatype _params2 = NULL;
      modelica_metatype _unitvec1 = NULL;
      modelica_metatype _unitvec2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _params1 has no default value.
      // _params2 has no default value.
      // _unitvec1 has no default value.
      // _unitvec2 has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _params1 = tmpMeta6;
          _unitvec1 = tmpMeta7;
          /* Pattern matching succeeded */
          _params2 = omc_UnitChecker_powUnitParams(threadData, _params1, _expo);

          _unitvec2 = omc_UnitChecker_powUnitVec(threadData, _unitvec1, _expo);
          tmpMeta8 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, _params2, _unitvec2);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp9;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp9) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT27);
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
  _uout = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _uout;
}

DLLDirection
modelica_metatype omc_UnitChecker_divUnitVec(threadData_t *threadData, modelica_metatype _inunitvec1, modelica_metatype _inunitvec2)
{
  modelica_metatype _outunitvec = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outunitvec has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inunitvec1;
    tmp4_2 = _inunitvec2;
    {
      modelica_metatype _expo1 = NULL;
      modelica_metatype _expo2 = NULL;
      modelica_metatype _expo3 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _rest3 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expo1 has no default value.
      // _expo2 has no default value.
      // _expo3 has no default value.
      // _rest1 has no default value.
      // _rest2 has no default value.
      // _rest3 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_2);
          tmpMeta10 = MMC_CDR(tmp4_2);
          _expo1 = tmpMeta7;
          _rest1 = tmpMeta8;
          _expo2 = tmpMeta9;
          _rest2 = tmpMeta10;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _expo3 = omc_MMath_subRational(threadData, _expo1, _expo2);

          _rest3 = omc_UnitChecker_divUnitVec(threadData, _rest1, _rest2);
          tmpMeta11 = mmc_mk_cons(_expo3, _rest3);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          _expo1 = tmpMeta12;
          _rest1 = tmpMeta13;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          _rest3 = omc_UnitChecker_divUnitVec(threadData, _rest1, tmpMeta14);
          tmpMeta15 = mmc_mk_cons(_expo1, _rest3);
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_2);
          tmpMeta17 = MMC_CDR(tmp4_2);
          _expo1 = tmpMeta16;
          _rest1 = tmpMeta17;
          /* Pattern matching succeeded */
          _expo2 = omc_MMath_subRational(threadData, _OMC_LIT28, _expo1);

          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          _rest3 = omc_UnitChecker_divUnitVec(threadData, tmpMeta18, _rest1);
          tmpMeta19 = mmc_mk_cons(_expo2, _rest3);
          tmpMeta1 = tmpMeta19;
          goto tmp3_done;
        }
        case 4: {
          modelica_boolean tmp20;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp20 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp20) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT25);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outunitvec = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outunitvec;
}

DLLDirection
modelica_metatype omc_UnitChecker_divSpecUnit(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2)
{
  modelica_metatype _u = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _u1;
    tmp4_2 = _u2;
    {
      modelica_metatype _tparams1 = NULL;
      modelica_metatype _tparams2 = NULL;
      modelica_metatype _tparams3 = NULL;
      modelica_metatype _tparams4 = NULL;
      modelica_metatype _tparams5 = NULL;
      modelica_metatype _units = NULL;
      modelica_metatype _units1 = NULL;
      modelica_metatype _units2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tparams1 has no default value.
      // _tparams2 has no default value.
      // _tparams3 has no default value.
      // _tparams4 has no default value.
      // _tparams5 has no default value.
      // _units has no default value.
      // _units1 has no default value.
      // _units2 has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _tparams1 = tmpMeta6;
          _units1 = tmpMeta7;
          _tparams2 = tmpMeta8;
          _units2 = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _tparams3 = omc_UnitChecker_negParamList(threadData, _tparams2, tmpMeta10);

          _tparams4 = listAppend(_tparams1, _tparams3);

          _tparams5 = omc_UnitChecker_normalizeParamsExponents(threadData, _tparams4);

          _units = omc_UnitChecker_divUnitVec(threadData, _units1, _units2);
          tmpMeta11 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, _tparams5, _units);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp12;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp12) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT29);
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
  _u = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _u;
}

DLLDirection
modelica_metatype omc_UnitChecker_mulUnitVec(threadData_t *threadData, modelica_metatype _inunitvec1, modelica_metatype _inunitvec2)
{
  modelica_metatype _outunitvec = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outunitvec has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inunitvec1;
    tmp4_2 = _inunitvec2;
    {
      modelica_metatype _expo1 = NULL;
      modelica_metatype _expo2 = NULL;
      modelica_metatype _expo3 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _rest2 = NULL;
      modelica_metatype _rest3 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expo1 has no default value.
      // _expo2 has no default value.
      // _expo3 has no default value.
      // _rest1 has no default value.
      // _rest2 has no default value.
      // _rest3 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_2);
          tmpMeta10 = MMC_CDR(tmp4_2);
          _expo1 = tmpMeta7;
          _rest1 = tmpMeta8;
          _expo2 = tmpMeta9;
          _rest2 = tmpMeta10;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _expo3 = omc_MMath_addRational(threadData, _expo1, _expo2);

          _rest3 = omc_UnitChecker_mulUnitVec(threadData, _rest1, _rest2);
          tmpMeta11 = mmc_mk_cons(_expo3, _rest3);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          _expo1 = tmpMeta12;
          _rest1 = tmpMeta13;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          _rest3 = omc_UnitChecker_mulUnitVec(threadData, _rest1, tmpMeta14);
          tmpMeta15 = mmc_mk_cons(_expo1, _rest3);
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_2);
          tmpMeta17 = MMC_CDR(tmp4_2);
          _expo1 = tmpMeta16;
          _rest1 = tmpMeta17;
          /* Pattern matching succeeded */
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          _rest3 = omc_UnitChecker_mulUnitVec(threadData, tmpMeta18, _rest1);
          tmpMeta19 = mmc_mk_cons(_expo1, _rest3);
          tmpMeta1 = tmpMeta19;
          goto tmp3_done;
        }
        case 4: {
          modelica_boolean tmp20;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp20 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp20) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT25);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outunitvec = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outunitvec;
}

DLLDirection
modelica_metatype omc_UnitChecker_mulSpecUnit(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2)
{
  modelica_metatype _u = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _u1;
    tmp4_2 = _u2;
    {
      modelica_metatype _tparams1 = NULL;
      modelica_metatype _tparams2 = NULL;
      modelica_metatype _tparams3 = NULL;
      modelica_metatype _tparams4 = NULL;
      modelica_metatype _units = NULL;
      modelica_metatype _units1 = NULL;
      modelica_metatype _units2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tparams1 has no default value.
      // _tparams2 has no default value.
      // _tparams3 has no default value.
      // _tparams4 has no default value.
      // _units has no default value.
      // _units1 has no default value.
      // _units2 has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _tparams1 = tmpMeta6;
          _units1 = tmpMeta7;
          _tparams2 = tmpMeta8;
          _units2 = tmpMeta9;
          /* Pattern matching succeeded */
          _tparams3 = listAppend(_tparams1, _tparams2);

          _tparams4 = omc_UnitChecker_normalizeParamsExponents(threadData, _tparams3);

          _units = omc_UnitChecker_mulUnitVec(threadData, _units1, _units2);
          tmpMeta10 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, _tparams4, _units);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp11;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp11) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT30);
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
  _u = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _u;
}

DLLDirection
modelica_boolean omc_UnitChecker_unitHasUnknown(threadData_t *threadData, modelica_metatype _u)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _u;
    {
      modelica_metatype _su = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _su has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _su = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_UnitChecker_hasUnknown(threadData, _su);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
modelica_metatype boxptr_UnitChecker_unitHasUnknown(threadData_t *threadData, modelica_metatype _u)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_UnitChecker_unitHasUnknown(threadData, _u);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_UnitChecker_hasUnknown(threadData_t *threadData, modelica_metatype _su)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _su;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (!listEmpty(tmpMeta6)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp7) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT31);
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_UnitChecker_hasUnknown(threadData_t *threadData, modelica_metatype _su)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_UnitChecker_hasUnknown(threadData, _su);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_integer omc_UnitChecker_getUnknown(threadData_t *threadData, modelica_metatype _suin, modelica_metatype *out_suout)
{
  modelica_integer _loc;
  modelica_metatype _suout = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _loc has no default value.
  // _suout has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _suin;
    {
      modelica_metatype _su1 = NULL;
      modelica_metatype _su2 = NULL;
      modelica_metatype _expo1 = NULL;
      modelica_metatype _expo2 = NULL;
      modelica_integer _loc1;
      modelica_metatype _unitvec1 = NULL;
      modelica_metatype _rest1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _su1 has no default value.
      // _su2 has no default value.
      // _expo1 has no default value.
      // _expo2 has no default value.
      // _loc1 has no default value.
      // _unitvec1 has no default value.
      // _rest1 has no default value.
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
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _expo1 = tmpMeta9;
          _loc1 = tmp12  /* pattern as ty=Integer */;
          _rest1 = tmpMeta8;
          _unitvec1 = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, _rest1, _unitvec1);
          _su1 = omc_UnitChecker_divSpecUnit(threadData, omc_UnitChecker_newDimlessSpecUnit(threadData), tmpMeta14);

          _expo2 = omc_MMath_divRational(threadData, _OMC_LIT18, _expo1);

          _su2 = omc_UnitChecker_powSpecUnit(threadData, _su1, _expo2);
          tmp1_c0 = _loc1;
          tmpMeta[0+1] = _su2;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp15;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp15 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp15) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT32);
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
  _loc = tmp1_c0;
  _suout = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_suout) { *out_suout = _suout; }
  return _loc;
}
modelica_metatype boxptr_UnitChecker_getUnknown(threadData_t *threadData, modelica_metatype _suin, modelica_metatype *out_suout)
{
  modelica_integer _loc;
  modelica_metatype out_loc;
  _loc = omc_UnitChecker_getUnknown(threadData, _suin, out_suout);
  out_loc = mmc_mk_icon(_loc);
  /* skip box _suout; UnitAbsyn.SpecUnit */
  return out_loc;
}

DLLDirection
modelica_metatype omc_UnitChecker_newDimlessSpecUnit(threadData_t *threadData)
{
  modelica_metatype _su = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _su has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_UnitAbsynBuilder_str2unit(threadData, _OMC_LIT33, mmc_mk_none());
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _su = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _su;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_unifyunits(threadData_t *threadData, modelica_metatype _insu1, modelica_metatype _insu2, modelica_metatype _st, modelica_metatype *out_outSt)
{
  modelica_metatype _outresult = NULL;
  modelica_metatype _outSt = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outresult has no default value.
  // _outSt has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _insu1;
    tmp4_2 = _insu2;
    tmp4_3 = _st;
    {
      modelica_metatype _su1 = NULL;
      modelica_metatype _su2 = NULL;
      modelica_metatype _su3 = NULL;
      modelica_metatype _su4 = NULL;
      modelica_metatype _st1 = NULL;
      modelica_metatype _st2 = NULL;
      modelica_integer _loc1;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _su1 has no default value.
      // _su2 has no default value.
      // _su3 has no default value.
      // _su4 has no default value.
      // _st1 has no default value.
      // _st2 has no default value.
      // _loc1 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          modelica_boolean tmp8;
          
          _su1 = tmp4_1;
          _su2 = tmp4_2;
          _st1 = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_UnitChecker_hasUnknown(threadData, _su1);
          if (0 /* false */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmp7 = omc_UnitChecker_hasUnknown(threadData, _su2);
          if (0 /* false */ != tmp7) goto goto_2;

          /* Pattern-matching assignment */
          tmp8 = omc_UnitChecker_isSpecUnitEq(threadData, _su1, _su2);
          if (1 /* true */ != tmp8) goto goto_2;
          tmpMeta[0+0] = _OMC_LIT34;
          tmpMeta[0+1] = _st1;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          
          _su1 = tmp4_1;
          _su2 = tmp4_2;
          _st1 = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_UnitChecker_hasUnknown(threadData, _su1);
          if (0 /* false */ != tmp9) goto goto_2;

          /* Pattern-matching assignment */
          tmp10 = omc_UnitChecker_hasUnknown(threadData, _su2);
          if (0 /* false */ != tmp10) goto goto_2;
          tmpMeta11 = mmc_mk_box3(4, &UnitAbsyn_UnitCheckResult_INCONSISTENT__desc, _su1, _su2);
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = _st1;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          
          _su1 = tmp4_1;
          _su2 = tmp4_2;
          _st1 = tmp4_3;
          /* Pattern matching succeeded */
          _su3 = omc_UnitChecker_divSpecUnit(threadData, _su2, _su1);

          _loc1 = omc_UnitChecker_getUnknown(threadData, _su3 ,&_su4);

          tmpMeta12 = mmc_mk_box2(3, &UnitAbsyn_Unit_SPECIFIED__desc, _su4);
          _st2 = omc_UnitAbsynBuilder_update(threadData, tmpMeta12, _loc1, _st1);
          tmpMeta[0+0] = _OMC_LIT34;
          tmpMeta[0+1] = _st2;
          goto tmp3_done;
        }
        case 3: {
          
          _st1 = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT34;
          tmpMeta[0+1] = _st1;
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
  _outresult = tmpMeta[0+0];
  _outSt = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outSt) { *out_outSt = _outSt; }
  return _outresult;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_UnitChecker_isSpecUnitEq(threadData_t *threadData, modelica_metatype _insu1, modelica_metatype _insu2)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _insu1;
    tmp4_2 = _insu2;
    {
      modelica_integer _i1a;
      modelica_integer _i1b;
      modelica_integer _i2a;
      modelica_integer _i2b;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _rest2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1a has no default value.
      // _i1b has no default value.
      // _i2a has no default value.
      // _i2b has no default value.
      // _rest1 has no default value.
      // _rest2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (listEmpty(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          if (0 != tmp13) goto tmp3_end;
          
          _rest1 = tmpMeta11;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, tmpMeta14, _rest1);
          tmp1 = omc_UnitChecker_isSpecUnitEq(threadData, _OMC_LIT35, tmpMeta15);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (!listEmpty(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta17)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmpMeta17);
          tmpMeta19 = MMC_CDR(tmpMeta17);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          if (0 != tmp21) goto tmp3_end;
          
          _rest1 = tmpMeta19;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta23 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, tmpMeta22, _rest1);
          tmp1 = omc_UnitChecker_isSpecUnitEq(threadData, tmpMeta23, _OMC_LIT35);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_integer tmp35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_boolean tmp38;
          modelica_boolean tmp39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta24)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmpMeta24);
          tmpMeta26 = MMC_CDR(tmpMeta24);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 3));
          tmp30 = mmc_unbox_integer(tmpMeta29);
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (listEmpty(tmpMeta31)) goto tmp3_end;
          tmpMeta32 = MMC_CAR(tmpMeta31);
          tmpMeta33 = MMC_CDR(tmpMeta31);
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          tmp35 = mmc_unbox_integer(tmpMeta34);
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 3));
          tmp37 = mmc_unbox_integer(tmpMeta36);
          _i1a = tmp28  /* pattern as ty=Integer */;
          _i1b = tmp30  /* pattern as ty=Integer */;
          _rest1 = tmpMeta26;
          _i2a = tmp35  /* pattern as ty=Integer */;
          _i2b = tmp37  /* pattern as ty=Integer */;
          _rest2 = tmpMeta33;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp38 = (_i1a == _i2a);
          if (1 /* true */ != tmp38) goto goto_2;

          /* Pattern-matching assignment */
          tmp39 = (_i1b == _i2b);
          if (1 /* true */ != tmp39) goto goto_2;
          tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta41 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, tmpMeta40, _rest1);
          tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta43 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, tmpMeta42, _rest2);
          tmp1 = omc_UnitChecker_isSpecUnitEq(threadData, tmpMeta41, tmpMeta43);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnitChecker_isSpecUnitEq(threadData_t *threadData, modelica_metatype _insu1, modelica_metatype _insu2)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_UnitChecker_isSpecUnitEq(threadData, _insu1, _insu2);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_unify(threadData_t *threadData, modelica_metatype _insu1, modelica_metatype _insu2, modelica_metatype _st, modelica_metatype *out_outSt)
{
  modelica_metatype _outresult = NULL;
  modelica_metatype _outSt = NULL;
  modelica_metatype _su1 = NULL;
  modelica_metatype _su2 = NULL;
  modelica_metatype _st1 = NULL;
  modelica_metatype _st2 = NULL;
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
  // _outresult has no default value.
  // _outSt has no default value.
  // _su1 has no default value.
  // _su2 has no default value.
  // _st1 has no default value.
  // _st2 has no default value.
  /* Pattern-matching tuple assignment */
  tmpMeta2 = mmc_mk_box2(3, &UnitAbsyn_Unit_SPECIFIED__desc, _insu1);
  tmpMeta3 = omc_UnitChecker_normalizeOnUnit(threadData, tmpMeta2, _st, &tmpMeta1);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,0,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  _su1 = tmpMeta4;
  _st1 = tmpMeta1;

  /* Pattern-matching tuple assignment */
  tmpMeta6 = mmc_mk_box2(3, &UnitAbsyn_Unit_SPECIFIED__desc, _insu2);
  tmpMeta7 = omc_UnitChecker_normalizeOnUnit(threadData, tmpMeta6, _st1, &tmpMeta5);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  _su2 = tmpMeta8;
  _st2 = tmpMeta5;

  _outresult = omc_UnitChecker_unifyunits(threadData, _su1, _su2, _st2 ,&_outSt);
  _return: OMC_LABEL_UNUSED
  if (out_outSt) { *out_outSt = _outSt; }
  return _outresult;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_UnitChecker_chooseResult(threadData_t *threadData, modelica_metatype _res1, modelica_metatype _res2, modelica_metatype _res3)
{
  modelica_metatype _resout = NULL;
  modelica_metatype _incon = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _resout has no default value.
  // _incon has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _res1;
    tmp4_2 = _res2;
    tmp4_3 = _res3;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT34;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,0) == 0) goto tmp3_end;
          
          _incon = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta1 = _incon;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          
          _incon = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta1 = _incon;
          goto tmp3_done;
        }
        case 3: {
          
          _incon = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _incon;
          goto tmp3_done;
        }
        case 4: {
          modelica_boolean tmp6;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp6) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT36);
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
  _resout = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _resout;
}

DLLDirection
modelica_metatype omc_UnitChecker_checkTerm(threadData_t *threadData, modelica_metatype _tm, modelica_metatype _st, modelica_metatype *out_outUnit, modelica_metatype *out_outSt)
{
  modelica_metatype _result = NULL;
  modelica_metatype _outUnit = NULL;
  modelica_metatype _outSt = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _outUnit has no default value.
  // _outSt has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _tm;
    tmp4_2 = _st;
    {
      modelica_metatype _st1 = NULL;
      modelica_metatype _st2 = NULL;
      modelica_metatype _st3 = NULL;
      modelica_metatype _st4 = NULL;
      modelica_metatype _res1 = NULL;
      modelica_metatype _res2 = NULL;
      modelica_metatype _res3 = NULL;
      modelica_metatype _res4 = NULL;
      modelica_metatype _ut1 = NULL;
      modelica_metatype _ut2 = NULL;
      modelica_metatype _su1 = NULL;
      modelica_metatype _su2 = NULL;
      modelica_metatype _su3 = NULL;
      modelica_metatype _expo1 = NULL;
      modelica_integer _loc;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _st1 has no default value.
      // _st2 has no default value.
      // _st3 has no default value.
      // _st4 has no default value.
      // _res1 has no default value.
      // _res2 has no default value.
      // _res3 has no default value.
      // _res4 has no default value.
      // _ut1 has no default value.
      // _ut2 has no default value.
      // _su1 has no default value.
      // _su2 has no default value.
      // _su3 has no default value.
      // _expo1 has no default value.
      // _loc has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _ut1 = tmpMeta6;
          _ut2 = tmpMeta7;
          _st1 = tmp4_2;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          _res1 = omc_UnitChecker_checkTerm(threadData, _ut1, _st1 ,&_su1 ,&_st2);

          _res2 = omc_UnitChecker_checkTerm(threadData, _ut2, _st2 ,&_su2 ,&_st3);

          _res3 = omc_UnitChecker_unify(threadData, _su1, _su2, _st3 ,&_st4);

          _res4 = omc_UnitChecker_chooseResult(threadData, _res1, _res2, _res3);
          tmpMeta[0+0] = _res4;
          tmpMeta[0+1] = _su1;
          tmpMeta[0+2] = _st4;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _ut1 = tmpMeta8;
          _ut2 = tmpMeta9;
          _st1 = tmp4_2;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          _res1 = omc_UnitChecker_checkTerm(threadData, _ut1, _st1 ,&_su1 ,&_st2);

          _res2 = omc_UnitChecker_checkTerm(threadData, _ut2, _st2 ,&_su2 ,&_st3);

          _res3 = omc_UnitChecker_unify(threadData, _su1, _su2, _st3 ,&_st4);

          _res4 = omc_UnitChecker_chooseResult(threadData, _res1, _res2, _res3);
          tmpMeta[0+0] = _res4;
          tmpMeta[0+1] = _su1;
          tmpMeta[0+2] = _st4;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _ut1 = tmpMeta10;
          _ut2 = tmpMeta11;
          _st1 = tmp4_2;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          _res1 = omc_UnitChecker_checkTerm(threadData, _ut1, _st1 ,&_su1 ,&_st2);

          _res2 = omc_UnitChecker_checkTerm(threadData, _ut2, _st2 ,&_su2 ,&_st3);

          _su3 = omc_UnitChecker_mulSpecUnit(threadData, _su1, _su2);

          _res4 = omc_UnitChecker_chooseResult(threadData, _res1, _res2, _OMC_LIT34);
          tmpMeta[0+0] = _res4;
          tmpMeta[0+1] = _su3;
          tmpMeta[0+2] = _st3;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _ut1 = tmpMeta12;
          _ut2 = tmpMeta13;
          _st1 = tmp4_2;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          _res1 = omc_UnitChecker_checkTerm(threadData, _ut1, _st1 ,&_su1 ,&_st2);

          _res2 = omc_UnitChecker_checkTerm(threadData, _ut2, _st2 ,&_su2 ,&_st3);

          _su3 = omc_UnitChecker_divSpecUnit(threadData, _su1, _su2);

          _res4 = omc_UnitChecker_chooseResult(threadData, _res1, _res2, _OMC_LIT34);
          tmpMeta[0+0] = _res4;
          tmpMeta[0+1] = _su3;
          tmpMeta[0+2] = _st3;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _ut1 = tmpMeta14;
          _ut2 = tmpMeta15;
          _st1 = tmp4_2;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _res1 = omc_UnitChecker_checkTerm(threadData, _ut1, _st1 ,&_su1 ,&_st2);

          _res2 = omc_UnitChecker_checkTerm(threadData, _ut2, _st2 ,&_su2 ,&_st3);

          _res3 = omc_UnitChecker_unify(threadData, _su1, _su2, _st3 ,&_st4);

          _res4 = omc_UnitChecker_chooseResult(threadData, _res1, _res2, _res3);
          tmpMeta[0+0] = _res4;
          tmpMeta[0+1] = _su1;
          tmpMeta[0+2] = _st4;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          
          _loc = tmp17  /* pattern as ty=Integer */;
          _st1 = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta18 = omc_UnitAbsynBuilder_find(threadData, _loc, _st1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,1,0) == 0) goto goto_2;
          tmpMeta20 = mmc_mk_box3(3, &UnitAbsyn_TypeParameter_TYPEPARAMETER__desc, _OMC_LIT37, mmc_mk_integer(_loc));
          tmpMeta21 = mmc_mk_box2(0, _OMC_LIT18, tmpMeta20);
          tmpMeta19 = mmc_mk_cons(tmpMeta21, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta23 = mmc_mk_box3(3, &UnitAbsyn_SpecUnit_SPECUNIT__desc, tmpMeta19, tmpMeta22);
          tmpMeta[0+0] = _OMC_LIT34;
          tmpMeta[0+1] = tmpMeta23;
          tmpMeta[0+2] = _st1;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          
          _loc = tmp25  /* pattern as ty=Integer */;
          _st1 = tmp4_2;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmpMeta26 = omc_UnitAbsynBuilder_find(threadData, _loc, _st1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,1) == 0) goto goto_2;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          _su1 = tmpMeta27;
          tmpMeta[0+0] = _OMC_LIT34;
          tmpMeta[0+1] = _su1;
          tmpMeta[0+2] = _st1;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,3) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _ut1 = tmpMeta28;
          _expo1 = tmpMeta29;
          _st1 = tmp4_2;
          /* Pattern matching succeeded */
          _res1 = omc_UnitChecker_checkTerm(threadData, _ut1, _st1 ,&_su1 ,&_st2);

          _su2 = omc_UnitChecker_powSpecUnit(threadData, _su1, _expo1);
          tmpMeta[0+0] = _res1;
          tmpMeta[0+1] = _su2;
          tmpMeta[0+2] = _st2;
          goto tmp3_done;
        }
        case 8: {
          modelica_boolean tmp30;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp30 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp30) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT38);
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
      if (++tmp4 < 9) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _result = tmpMeta[0+0];
  _outUnit = tmpMeta[0+1];
  _outSt = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outUnit) { *out_outUnit = _outUnit; }
  if (out_outSt) { *out_outSt = _outSt; }
  return _result;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_UnitChecker_completeCheck(threadData_t *threadData, modelica_metatype _ilst, modelica_integer _indx, modelica_metatype _st, modelica_metatype *out_stout)
{
  modelica_boolean _isComplete;
  modelica_metatype _stout = NULL;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isComplete has no default value.
  // _stout has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _ilst;
    tmp4_2 = _st;
    {
      modelica_metatype _u2 = NULL;
      modelica_boolean _comp1;
      modelica_metatype _st2 = NULL;
      modelica_metatype _st3 = NULL;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _u2 has no default value.
      // _comp1 has no default value.
      // _st2 has no default value.
      // _st3 has no default value.
      // _lst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _st2 = tmp4_2;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = _st2;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _lst = tmpMeta7;
          _st2 = tmp4_2;
          /* Pattern matching succeeded */
          _u2 = omc_UnitChecker_normalize(threadData, _indx, _st2 ,&_st3);

          /* Pattern-matching assignment */
          tmp9 = omc_UnitChecker_unitHasUnknown(threadData, _u2);
          if (0 /* false */ != tmp9) goto goto_2;

          _comp1 = omc_UnitChecker_completeCheck(threadData, _lst, ((modelica_integer) 1) + _indx, _st3, NULL);
          tmp1_c0 = _comp1;
          tmpMeta[0+1] = _st3;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          
          _st2 = tmp4_2;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _u2 = omc_UnitChecker_normalize(threadData, _indx, _st2, NULL);

          /* Pattern-matching assignment */
          tmp13 = omc_UnitChecker_unitHasUnknown(threadData, _u2);
          if (1 /* true */ != tmp13) goto goto_2;
          tmp1_c0 = 0 /* false */;
          tmpMeta[0+1] = _st2;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          if (!optionNone(tmpMeta14)) goto tmp3_end;
          
          _st2 = tmp4_2;
          /* Pattern matching succeeded */
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = _st2;
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
  _isComplete = tmp1_c0;
  _stout = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_stout) { *out_stout = _stout; }
  return _isComplete;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_UnitChecker_completeCheck(threadData_t *threadData, modelica_metatype _ilst, modelica_metatype _indx, modelica_metatype _st, modelica_metatype *out_stout)
{
  modelica_integer tmp1;
  modelica_boolean _isComplete;
  modelica_metatype out_isComplete;
  tmp1 = mmc_unbox_integer(_indx);
  _isComplete = omc_UnitChecker_completeCheck(threadData, _ilst, tmp1, _st, out_stout);
  out_isComplete = mmc_mk_icon(_isComplete);
  /* skip box _stout; UnitAbsyn.Store */
  return out_isComplete;
}

DLLDirection
modelica_boolean omc_UnitChecker_isComplete(threadData_t *threadData, modelica_metatype _st, modelica_metatype *out_stout)
{
  modelica_boolean _complete;
  modelica_metatype _stout = NULL;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _complete has no default value.
  // _stout has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _st;
    {
      modelica_metatype _vector = NULL;
      modelica_integer _indx;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vector has no default value.
      // _indx has no default value.
      // _lst has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          _vector = tmpMeta6;
          _indx = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _lst = arrayList(_vector);
          tmpMeta9 = mmc_mk_box3(3, &UnitAbsyn_Store_STORE__desc, _vector, mmc_mk_integer(_indx));
          tmp1_c0 = omc_UnitChecker_completeCheck(threadData, _lst, ((modelica_integer) 1), tmpMeta9, &tmpMeta[0+1]);
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
  _complete = tmp1_c0;
  _stout = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_stout) { *out_stout = _stout; }
  return _complete;
}
modelica_metatype boxptr_UnitChecker_isComplete(threadData_t *threadData, modelica_metatype _st, modelica_metatype *out_stout)
{
  modelica_boolean _complete;
  modelica_metatype out_complete;
  _complete = omc_UnitChecker_isComplete(threadData, _st, out_stout);
  out_complete = mmc_mk_icon(_complete);
  /* skip box _stout; UnitAbsyn.Store */
  return out_complete;
}

DLLDirection
modelica_metatype omc_UnitChecker_check(threadData_t *threadData, modelica_metatype _tms, modelica_metatype _ist)
{
  modelica_metatype _outSt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSt has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _tms;
    tmp4_2 = _ist;
    {
      modelica_metatype _st1 = NULL;
      modelica_metatype _st2 = NULL;
      modelica_metatype _rest1 = NULL;
      modelica_metatype _tm1 = NULL;
      modelica_metatype _su1 = NULL;
      modelica_metatype _su2 = NULL;
      modelica_string _s1 = NULL;
      modelica_string _s2 = NULL;
      modelica_string _s3 = NULL;
      modelica_metatype _ht = NULL;
      modelica_metatype _st = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _st1 has no default value.
      // _st2 has no default value.
      // _rest1 has no default value.
      // _tm1 has no default value.
      // _su1 has no default value.
      // _su2 has no default value.
      // _s1 has no default value.
      // _s2 has no default value.
      // _s3 has no default value.
      // _ht has no default value.
      // _st has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _st = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta1 = _st;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _st1 = tmpMeta6;
          _ht = tmpMeta7;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta8 = mmc_mk_box4(3, &UnitAbsyn_InstStore_INSTSTORE__desc, _st1, _ht, _OMC_LIT39);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,3) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _tm1 = tmpMeta9;
          _rest1 = tmpMeta10;
          _st1 = tmpMeta11;
          _ht = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta14 = omc_UnitChecker_checkTerm(threadData, _tm1, _st1, NULL, &tmpMeta13);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,0,0) == 0) goto goto_2;
          _st2 = tmpMeta13;
          tmpMeta15 = mmc_mk_box4(3, &UnitAbsyn_InstStore_INSTSTORE__desc, _st2, _ht, _OMC_LIT39);
          tmpMeta1 = omc_UnitChecker_check(threadData, _rest1, tmpMeta15);
          goto tmp3_done;
        }
        case 3: {
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,3) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _tm1 = tmpMeta16;
          _st1 = tmpMeta18;
          _ht = tmpMeta19;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta20 = omc_UnitChecker_checkTerm(threadData, _tm1, _st1, NULL, NULL);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,1,2) == 0) goto goto_2;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 3));
          _su1 = tmpMeta21;
          _su2 = tmpMeta22;

          tmpMeta23 = mmc_mk_cons(_tm1, MMC_REFSTRUCTLIT(mmc_nil));
          _s1 = omc_UnitAbsynBuilder_printTermsStr(threadData, tmpMeta23);

          tmpMeta24 = mmc_mk_box2(3, &UnitAbsyn_Unit_SPECIFIED__desc, _su1);
          _s2 = omc_UnitAbsynBuilder_unit2str(threadData, tmpMeta24);

          tmpMeta25 = mmc_mk_box2(3, &UnitAbsyn_Unit_SPECIFIED__desc, _su2);
          _s3 = omc_UnitAbsynBuilder_unit2str(threadData, tmpMeta25);

          tmpMeta26 = mmc_mk_cons(_s1, mmc_mk_cons(_s2, mmc_mk_cons(_s3, MMC_REFSTRUCTLIT(mmc_nil))));
          omc_Error_addMessage(threadData, _OMC_LIT43, tmpMeta26);
          tmpMeta27 = mmc_mk_box3(4, &UnitAbsyn_UnitCheckResult_INCONSISTENT__desc, _su1, _su2);
          tmpMeta28 = mmc_mk_box4(3, &UnitAbsyn_InstStore_INSTSTORE__desc, _st1, _ht, mmc_mk_some(tmpMeta27));
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 4: {
          modelica_boolean tmp29;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp29 = omc_Flags_isSet(threadData, _OMC_LIT15);
          if (1 /* true */ != tmp29) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT44);

          fputs(MMC_STRINGDATA(_OMC_LIT45),stdout);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outSt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outSt;
}

