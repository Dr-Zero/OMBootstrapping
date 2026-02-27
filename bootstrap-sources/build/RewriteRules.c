#include "omc_simulation_settings.h"
#include "RewriteRules.h"
#define _OMC_LIT0_data "FrontEnd rule: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,15,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data " -> "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,4,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "BackEnd rule: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,14,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Unable to parse rewrite rule: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,30,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/Script/RewriteRules.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,75,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT6_6,1.770032059e9);
#define _OMC_LIT6_6 MMC_REFREALLIT(_OMC_LIT_STRUCT6_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1214)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1214)),MMC_IMMEDIATE(MMC_TAGFIXNUM(115)),_OMC_LIT6_6}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "rewrite"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,7,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "rewriteFrontEnd"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,15,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "rewriteBackEnd"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,14,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "-------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,14,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Unable to parse rewrite rules file: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,36,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT12_6,1.770032059e9);
#define _OMC_LIT12_6 MMC_REFREALLIT(_OMC_LIT_STRUCT12_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1095)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1095)),MMC_IMMEDIATE(MMC_TAGFIXNUM(94)),_OMC_LIT12_6}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,0,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "rewriteRulesFile"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,16,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT13}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "Activates user given rewrite rules for Absyn expressions. The rules are read from the given file and are of the form rewrite(fromExp, toExp);"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,141,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(49)),_OMC_LIT14,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT15,_OMC_LIT16,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "'$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,2,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "BackEnd Exp:     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,17,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "BackEnd From:    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,17,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "BackEnd To:      "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,17,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "BackEnd Rewrite: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,17,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "\n---------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,11,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "FrontEnd Exp:     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,18,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "FrontEnd From:    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,18,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "FrontEnd To:      "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,18,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "FrontEnd Rewrite: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,18,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#include "util/modelica.h"

#include "RewriteRules_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_RewriteRules_stmtsToRules(threadData_t *threadData, modelica_metatype _inStmts, modelica_metatype _inAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RewriteRules_stmtsToRules,2,0) {(void*) boxptr_RewriteRules_stmtsToRules,0}};
#define boxvar_RewriteRules_stmtsToRules MMC_REFSTRUCTLIT(boxvar_lit_RewriteRules_stmtsToRules)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_RewriteRules_operatorMatches(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_RewriteRules_operatorMatches(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RewriteRules_operatorMatches,2,0) {(void*) boxptr_RewriteRules_operatorMatches,0}};
#define boxvar_RewriteRules_operatorMatches MMC_REFSTRUCTLIT(boxvar_lit_RewriteRules_operatorMatches)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_RewriteRules_expEqual(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_RewriteRules_expEqual(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RewriteRules_expEqual,2,0) {(void*) boxptr_RewriteRules_expEqual,0}};
#define boxvar_RewriteRules_expEqual MMC_REFSTRUCTLIT(boxvar_lit_RewriteRules_expEqual)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_RewriteRules_stmtsToRules(threadData_t *threadData, modelica_metatype _inStmts, modelica_metatype _inAcc)
{
  modelica_metatype _outRules = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRules has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inStmts;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _s = NULL;
      modelica_metatype _from = NULL;
      modelica_metatype _to = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _s has no default value.
      // _from has no default value.
      // _to has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = listReverse(_inAcc);
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,11,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (7 != MMC_STRLEN(tmpMeta10) || strcmp(MMC_STRINGDATA(_OMC_LIT7), MMC_STRINGDATA(tmpMeta10)) != 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (listEmpty(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          if (!listEmpty(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          if (!listEmpty(tmpMeta17)) goto tmp3_end;
          
          _from = tmpMeta13;
          _to = tmpMeta15;
          _rest = tmpMeta7;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta18 = stringAppend(_OMC_LIT0,omc_Dump_printExpStr(threadData, _from));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT1);
          tmpMeta20 = stringAppend(tmpMeta19,omc_Dump_printExpStr(threadData, _to));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT2);
          fputs(MMC_STRINGDATA(tmpMeta21),stdout);
          tmpMeta23 = mmc_mk_box3(3, &RewriteRules_Rule_FRONTEND__RULE__desc, _from, _to);
          tmpMeta22 = mmc_mk_cons(tmpMeta23, _inAcc);
          tmpMeta1 = omc_RewriteRules_stmtsToRules(threadData, _rest, tmpMeta22);
          goto tmp3_done;
        }
        case 2: {
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmp4_1);
          tmpMeta25 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,1,2) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,11,3) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,2,2) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
          if (15 != MMC_STRLEN(tmpMeta28) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmpMeta28)) != 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,0,2) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          if (listEmpty(tmpMeta30)) goto tmp3_end;
          tmpMeta31 = MMC_CAR(tmpMeta30);
          tmpMeta32 = MMC_CDR(tmpMeta30);
          if (listEmpty(tmpMeta32)) goto tmp3_end;
          tmpMeta33 = MMC_CAR(tmpMeta32);
          tmpMeta34 = MMC_CDR(tmpMeta32);
          if (!listEmpty(tmpMeta34)) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 3));
          if (!listEmpty(tmpMeta35)) goto tmp3_end;
          
          _from = tmpMeta31;
          _to = tmpMeta33;
          _rest = tmpMeta25;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta36 = stringAppend(_OMC_LIT0,omc_Dump_printExpStr(threadData, _from));
          tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT1);
          tmpMeta38 = stringAppend(tmpMeta37,omc_Dump_printExpStr(threadData, _to));
          tmpMeta39 = stringAppend(tmpMeta38,_OMC_LIT2);
          fputs(MMC_STRINGDATA(tmpMeta39),stdout);
          tmpMeta41 = mmc_mk_box3(3, &RewriteRules_Rule_FRONTEND__RULE__desc, _from, _to);
          tmpMeta40 = mmc_mk_cons(tmpMeta41, _inAcc);
          tmpMeta1 = omc_RewriteRules_stmtsToRules(threadData, _rest, tmpMeta40);
          goto tmp3_done;
        }
        case 3: {
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta42 = MMC_CAR(tmp4_1);
          tmpMeta43 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,1,2) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,11,3) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta45,2,2) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 2));
          if (14 != MMC_STRLEN(tmpMeta46) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmpMeta46)) != 0) goto tmp3_end;
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,0,2) == 0) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 2));
          if (listEmpty(tmpMeta48)) goto tmp3_end;
          tmpMeta49 = MMC_CAR(tmpMeta48);
          tmpMeta50 = MMC_CDR(tmpMeta48);
          if (listEmpty(tmpMeta50)) goto tmp3_end;
          tmpMeta51 = MMC_CAR(tmpMeta50);
          tmpMeta52 = MMC_CDR(tmpMeta50);
          if (!listEmpty(tmpMeta52)) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 3));
          if (!listEmpty(tmpMeta53)) goto tmp3_end;
          
          _from = tmpMeta49;
          _to = tmpMeta51;
          _rest = tmpMeta43;
          /* Pattern matching succeeded */
          tmpMeta54 = stringAppend(_OMC_LIT3,omc_Dump_printExpStr(threadData, _from));
          tmpMeta55 = stringAppend(tmpMeta54,_OMC_LIT1);
          tmpMeta56 = stringAppend(tmpMeta55,omc_Dump_printExpStr(threadData, _to));
          tmpMeta57 = stringAppend(tmpMeta56,_OMC_LIT2);
          fputs(MMC_STRINGDATA(tmpMeta57),stdout);
          tmpMeta59 = mmc_mk_box3(4, &RewriteRules_Rule_BACKEND__RULE__desc, _from, _to);
          tmpMeta58 = mmc_mk_cons(tmpMeta59, _inAcc);
          tmpMeta1 = omc_RewriteRules_stmtsToRules(threadData, _rest, tmpMeta58);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta60 = MMC_CAR(tmp4_1);
          tmpMeta61 = MMC_CDR(tmp4_1);
          _s = tmpMeta60;
          /* Pattern matching succeeded */
          tmpMeta62 = stringAppend(_OMC_LIT4,omc_GlobalScriptDump_printIstmtStr(threadData, _s));
          omc_Error_addInternalError(threadData, tmpMeta62, _OMC_LIT6);
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
  _outRules = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outRules;
}

DLLDirection
modelica_metatype omc_RewriteRules_getRulesBackEnd(threadData_t *threadData, modelica_metatype _inRules)
{
  modelica_metatype _outRules = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRules has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inRules;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _r = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _lst has no default value.
      // _r has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
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
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _r = tmpMeta7;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          _lst = omc_RewriteRules_getRulesBackEnd(threadData, _rest);
          tmpMeta9 = mmc_mk_cons(_r, _lst);
          tmpMeta1 = tmpMeta9;
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
          _inRules = _rest;
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
  _outRules = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outRules;
}

DLLDirection
modelica_metatype omc_RewriteRules_getRulesFrontEnd(threadData_t *threadData, modelica_metatype _inRules)
{
  modelica_metatype _outRules = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRules has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inRules;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _r = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _lst has no default value.
      // _r has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
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
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,2) == 0) goto tmp3_end;
          
          _r = tmpMeta7;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          _lst = omc_RewriteRules_getRulesFrontEnd(threadData, _rest);
          tmpMeta9 = mmc_mk_cons(_r, _lst);
          tmpMeta1 = tmpMeta9;
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
          _inRules = _rest;
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
  _outRules = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outRules;
}

DLLDirection
modelica_metatype omc_RewriteRules_getAllRules(threadData_t *threadData)
{
  modelica_metatype _outRules = NULL;
  modelica_metatype _orules = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRules has no default value.
  // _orules has no default value.
  _orules = getGlobalRoot(((modelica_integer) 19));

  /* Pattern-matching assignment */
  tmpMeta1 = _orules;
  if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _outRules = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outRules;
}

DLLDirection
void omc_RewriteRules_clearRules(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  setGlobalRoot(((modelica_integer) 19), mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_RewriteRules_loadRulesFromFile(threadData_t *threadData, modelica_string _inFile)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_string tmp3_1;
    tmp3_1 = _inFile;
    {
      modelica_metatype _stmts = NULL;
      modelica_metatype _rules = NULL;
      modelica_metatype _oR = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _stmts has no default value.
      // _rules has no default value.
      // _oR has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 4; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (0 != MMC_STRLEN(tmp3_1) || strcmp(MMC_STRINGDATA(_OMC_LIT13), MMC_STRINGDATA(tmp3_1)) != 0) goto tmp2_end;
          /* Pattern matching succeeded */
          setGlobalRoot(((modelica_integer) 19), mmc_mk_none());
          goto tmp2_done;
        }
        case 1: {
          modelica_boolean tmp5;
          
          /* Pattern matching succeeded */
          _oR = getGlobalRoot(((modelica_integer) 19));

          /* Pattern-matching assignment */
          tmp5 = isSome(_oR);
          if (1 /* true */ != tmp5) goto goto_1;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = getGlobalRoot(((modelica_integer) 19));
          if (!optionNone(tmpMeta6)) goto goto_1;

          /* Pattern-matching assignment */
          tmpMeta7 = omc_Parser_parseexp(threadData, _inFile);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _stmts = tmpMeta8;

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _rules = omc_RewriteRules_stmtsToRules(threadData, _stmts, tmpMeta9);

          fputs(MMC_STRINGDATA(_OMC_LIT10),stdout);

          setGlobalRoot(((modelica_integer) 19), mmc_mk_some(_rules));
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_OMC_LIT11,_inFile);
          omc_Error_addInternalError(threadData, tmpMeta10, _OMC_LIT12);

          setGlobalRoot(((modelica_integer) 19), mmc_mk_none());
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

DLLDirection
modelica_boolean omc_RewriteRules_noRewriteRulesBackEnd(threadData_t *threadData)
{
  modelica_boolean _noRules;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _noRules has no default value.
  { /* matchcontinue expression */
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = getGlobalRoot(((modelica_integer) 19));
          if (!optionNone(tmpMeta6)) goto goto_2;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = omc_RewriteRules_getRulesBackEnd(threadData, omc_RewriteRules_getAllRules(threadData));
          if (!listEmpty(tmpMeta7)) goto goto_2;
          tmp1 = 1 /* true */;
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
  _noRules = tmp1;
  _return: OMC_LABEL_UNUSED
  return _noRules;
}
modelica_metatype boxptr_RewriteRules_noRewriteRulesBackEnd(threadData_t *threadData)
{
  modelica_boolean _noRules;
  modelica_metatype out_noRules;
  _noRules = omc_RewriteRules_noRewriteRulesBackEnd(threadData);
  out_noRules = mmc_mk_icon(_noRules);
  return out_noRules;
}

DLLDirection
modelica_boolean omc_RewriteRules_noRewriteRulesFrontEnd(threadData_t *threadData)
{
  modelica_boolean _noRules;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _noRules has no default value.
  { /* matchcontinue expression */
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = getGlobalRoot(((modelica_integer) 19));
          if (!optionNone(tmpMeta6)) goto goto_2;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = omc_RewriteRules_getRulesFrontEnd(threadData, omc_RewriteRules_getAllRules(threadData));
          if (!listEmpty(tmpMeta7)) goto goto_2;
          tmp1 = 1 /* true */;
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
  _noRules = tmp1;
  _return: OMC_LABEL_UNUSED
  return _noRules;
}
modelica_metatype boxptr_RewriteRules_noRewriteRulesFrontEnd(threadData_t *threadData)
{
  modelica_boolean _noRules;
  modelica_metatype out_noRules;
  _noRules = omc_RewriteRules_noRewriteRulesFrontEnd(threadData);
  out_noRules = mmc_mk_icon(_noRules);
  return out_noRules;
}

DLLDirection
modelica_boolean omc_RewriteRules_noRewriteRules(threadData_t *threadData)
{
  modelica_boolean _noRules;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _noRules has no default value.
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = getGlobalRoot(((modelica_integer) 19));
          if (!optionNone(tmpMeta6)) goto goto_2;
          tmp1 = 1 /* true */;
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
  _noRules = tmp1;
  _return: OMC_LABEL_UNUSED
  return _noRules;
}
modelica_metatype boxptr_RewriteRules_noRewriteRules(threadData_t *threadData)
{
  modelica_boolean _noRules;
  modelica_metatype out_noRules;
  _noRules = omc_RewriteRules_noRewriteRules(threadData);
  out_noRules = mmc_mk_icon(_noRules);
  return out_noRules;
}

DLLDirection
void omc_RewriteRules_loadRules(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    {
      modelica_string _file = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _file has no default value.
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          /* Pattern matching succeeded */
          _file = omc_Flags_getConfigString(threadData, _OMC_LIT19);

          omc_RewriteRules_loadRulesFromFile(threadData, _file);
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

PROTECTED_FUNCTION_STATIC modelica_boolean omc_RewriteRules_operatorMatches(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _op1;
    tmp4_2 = _op2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 17; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,1) == 0) goto tmp3_end;
          
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,1) == 0) goto tmp3_end;
          
          tmp4 += 14; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          
          tmp4 += 12; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,1) == 0) goto tmp3_end;
          
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,1) == 0) goto tmp3_end;
          
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,1) == 0) goto tmp3_end;
          
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 11: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,1) == 0) goto tmp3_end;
          
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,1) == 0) goto tmp3_end;
          
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 13: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,1) == 0) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 14: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,20,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,1) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 15: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_Expression_operatorEqual(threadData, _op1, _op2);
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
      if (++tmp4 < 17) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_RewriteRules_operatorMatches(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_RewriteRules_operatorMatches(threadData, _op1, _op2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_RewriteRules_expEqual(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2)
{
  modelica_boolean _isEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEqual has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _e1;
    tmp4_2 = _e2;
    {
      modelica_integer _i;
      modelica_real _r;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _r has no default value.
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
          modelica_real tmp9;
          modelica_boolean tmp10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp9 = mmc_unbox_real(tmpMeta8);
          _i = tmp7  /* pattern as ty=Integer */;
          _r = tmp9  /* pattern as ty=Real */;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp10 = (((modelica_real)_i) == _r);
          if (1 /* true */ != tmp10) goto goto_2;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_real tmp12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_boolean tmp15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp12 = mmc_unbox_real(tmpMeta11);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          _r = tmp12  /* pattern as ty=Real */;
          _i = tmp14  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp15 = (((modelica_real)_i) == _r);
          if (1 /* true */ != tmp15) goto goto_2;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_Expression_expEqual(threadData, _e1, _e2);
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
  _isEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_RewriteRules_expEqual(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_RewriteRules_expEqual(threadData, _e1, _e2);
  out_isEqual = mmc_mk_icon(_isEqual);
  return out_isEqual;
}

DLLDirection
modelica_boolean omc_RewriteRules_isPlaceHolderBackEnd(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _isHolder;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isHolder has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_string _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _name = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = (omc_System_stringFind(threadData, _name, _OMC_LIT20) == ((modelica_integer) 0));
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
  _isHolder = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isHolder;
}
modelica_metatype boxptr_RewriteRules_isPlaceHolderBackEnd(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _isHolder;
  modelica_metatype out_isHolder;
  _isHolder = omc_RewriteRules_isPlaceHolderBackEnd(threadData, _inExp);
  out_isHolder = mmc_mk_icon(_isHolder);
  return out_isHolder;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchesExpLstLstBackEnd(threadData_t *threadData, modelica_metatype _inExps1, modelica_metatype _inExps2, modelica_metatype _inAcc)
{
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinds has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExps1;
    tmp4_2 = _inExps2;
    {
      modelica_metatype _e1a = NULL;
      modelica_metatype _e1b = NULL;
      modelica_metatype _exps1a = NULL;
      modelica_metatype _exps1b = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1a has no default value.
      // _e1b has no default value.
      // _exps1a has no default value.
      // _exps1b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1a = tmpMeta6;
          _exps1a = tmpMeta7;
          _e1b = tmpMeta8;
          _exps1b = tmpMeta9;
          /* Pattern matching succeeded */
          _outBinds = omc_RewriteRules_matchesExpLstBackEnd(threadData, _e1a, _e1b, _inAcc);
          /* Tail recursive call */
          _inExps1 = _exps1a;
          _inExps2 = _exps1b;
          _inAcc = _outBinds;
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
  _outBinds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinds;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchesExpLstBackEnd(threadData_t *threadData, modelica_metatype _inExps1, modelica_metatype _inExps2, modelica_metatype _inAcc)
{
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinds has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExps1;
    tmp4_2 = _inExps2;
    {
      modelica_metatype _e1a = NULL;
      modelica_metatype _e1b = NULL;
      modelica_metatype _exps1a = NULL;
      modelica_metatype _exps1b = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1a has no default value.
      // _e1b has no default value.
      // _exps1a has no default value.
      // _exps1b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1a = tmpMeta6;
          _exps1a = tmpMeta7;
          _e1b = tmpMeta8;
          _exps1b = tmpMeta9;
          /* Pattern matching succeeded */
          _outBinds = omc_RewriteRules_matchesBackEnd(threadData, _e1a, _e1b, _inAcc);
          /* Tail recursive call */
          _inExps1 = _exps1a;
          _inExps2 = _exps1b;
          _inAcc = _outBinds;
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
  _outBinds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinds;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchesExpOptBackEnd(threadData_t *threadData, modelica_metatype _inOExp1, modelica_metatype _inOExp2, modelica_metatype _inAcc)
{
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinds has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inOExp1;
    tmp4_2 = _inOExp2;
    {
      modelica_metatype _e1a = NULL;
      modelica_metatype _e1b = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1a has no default value.
      // _e1b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _e1a = tmpMeta6;
          _e1b = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_RewriteRules_matchesBackEnd(threadData, _e1a, _e1b, _inAcc);
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
  _outBinds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinds;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchesBackEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inUnifyWith, modelica_metatype _inAcc)
{
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinds has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inUnifyWith;
    {
      modelica_metatype _e1a = NULL;
      modelica_metatype _e2a = NULL;
      modelica_metatype _e1b = NULL;
      modelica_metatype _e2b = NULL;
      modelica_metatype _cond1a = NULL;
      modelica_metatype _cond1b = NULL;
      modelica_metatype _op1a = NULL;
      modelica_metatype _op1b = NULL;
      modelica_metatype _p1a = NULL;
      modelica_metatype _p1b = NULL;
      modelica_metatype _exps1a = NULL;
      modelica_metatype _exps1b = NULL;
      modelica_metatype _expsLst1a = NULL;
      modelica_metatype _expsLst1b = NULL;
      modelica_metatype _oe1a = NULL;
      modelica_metatype _oe1b = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1a has no default value.
      // _e2a has no default value.
      // _e1b has no default value.
      // _e2b has no default value.
      // _cond1a has no default value.
      // _cond1b has no default value.
      // _op1a has no default value.
      // _op1b has no default value.
      // _p1a has no default value.
      // _p1b has no default value.
      // _exps1a has no default value.
      // _exps1b has no default value.
      // _expsLst1a has no default value.
      // _expsLst1b has no default value.
      // _oe1a has no default value.
      // _oe1b has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 21; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_RewriteRules_isPlaceHolderBackEnd(threadData, _inUnifyWith);
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta8 = mmc_mk_box3(4, &RewriteRules_Bind_BACKEND__BIND__desc, _inUnifyWith, _inExp);
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _inAcc);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          tmp4 += 19; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp9 = omc_RewriteRules_expEqual(threadData, _inExp, _inUnifyWith);
          if (1 /* true */ != tmp9) goto goto_2;
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          tmp4 += 18; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp10 = omc_RewriteRules_expEqual(threadData, _inExp, _inUnifyWith);
          if (1 /* true */ != tmp10) goto goto_2;
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          tmp4 += 17; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp11 = omc_RewriteRules_expEqual(threadData, _inExp, _inUnifyWith);
          if (1 /* true */ != tmp11) goto goto_2;
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 4: {
          modelica_boolean tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          tmp4 += 16; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp12 = omc_RewriteRules_expEqual(threadData, _inExp, _inUnifyWith);
          if (1 /* true */ != tmp12) goto goto_2;
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 5: {
          modelica_boolean tmp13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp13 = omc_RewriteRules_expEqual(threadData, _inExp, _inUnifyWith);
          if (1 /* true */ != tmp13) goto goto_2;
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_boolean tmp20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _e1a = tmpMeta14;
          _op1a = tmpMeta15;
          _e2a = tmpMeta16;
          _e1b = tmpMeta17;
          _op1b = tmpMeta18;
          _e2b = tmpMeta19;
          tmp4 += 14; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp20 = omc_RewriteRules_operatorMatches(threadData, _op1a, _op1b);
          if (1 /* true */ != tmp20) goto goto_2;

          _outBinds = omc_RewriteRules_matchesBackEnd(threadData, _e1a, _e1b, _inAcc);
          tmpMeta1 = omc_RewriteRules_matchesBackEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_boolean tmp25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _op1a = tmpMeta21;
          _e1a = tmpMeta22;
          _op1b = tmpMeta23;
          _e1b = tmpMeta24;
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp25 = omc_RewriteRules_operatorMatches(threadData, _op1a, _op1b);
          if (1 /* true */ != tmp25) goto goto_2;
          tmpMeta1 = omc_RewriteRules_matchesBackEnd(threadData, _e1a, _e1b, _inAcc);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_boolean tmp32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,9,3) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _e1a = tmpMeta26;
          _op1a = tmpMeta27;
          _e2a = tmpMeta28;
          _e1b = tmpMeta29;
          _op1b = tmpMeta30;
          _e2b = tmpMeta31;
          tmp4 += 12; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp32 = omc_RewriteRules_operatorMatches(threadData, _op1a, _op1b);
          if (1 /* true */ != tmp32) goto goto_2;

          _outBinds = omc_RewriteRules_matchesBackEnd(threadData, _e1a, _e1b, _inAcc);
          tmpMeta1 = omc_RewriteRules_matchesBackEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_boolean tmp37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,2) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,10,2) == 0) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _op1a = tmpMeta33;
          _e1a = tmpMeta34;
          _op1b = tmpMeta35;
          _e1b = tmpMeta36;
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp37 = omc_RewriteRules_operatorMatches(threadData, _op1a, _op1b);
          if (1 /* true */ != tmp37) goto goto_2;
          tmpMeta1 = omc_RewriteRules_matchesBackEnd(threadData, _e1a, _e1b, _inAcc);
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_boolean tmp44;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,5) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,11,5) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          
          _e1a = tmpMeta38;
          _op1a = tmpMeta39;
          _e2a = tmpMeta40;
          _e1b = tmpMeta41;
          _op1b = tmpMeta42;
          _e2b = tmpMeta43;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp44 = omc_RewriteRules_operatorMatches(threadData, _op1a, _op1b);
          if (1 /* true */ != tmp44) goto goto_2;

          _outBinds = omc_RewriteRules_matchesBackEnd(threadData, _e1a, _e1b, _inAcc);
          tmpMeta1 = omc_RewriteRules_matchesBackEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,12,3) == 0) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _cond1a = tmpMeta45;
          _e1a = tmpMeta46;
          _e2a = tmpMeta47;
          _cond1b = tmpMeta48;
          _e1b = tmpMeta49;
          _e2b = tmpMeta50;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          _outBinds = omc_RewriteRules_matchesBackEnd(threadData, _cond1a, _cond1b, _inAcc);

          _outBinds = omc_RewriteRules_matchesBackEnd(threadData, _e1a, _e1b, _outBinds);
          tmpMeta1 = omc_RewriteRules_matchesBackEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_boolean tmp55;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _p1a = tmpMeta51;
          _exps1a = tmpMeta52;
          _p1b = tmpMeta53;
          _exps1b = tmpMeta54;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp55 = omc_AbsynUtil_pathEqual(threadData, _p1a, _p1b);
          if (1 /* true */ != tmp55) goto goto_2;
          tmpMeta1 = omc_RewriteRules_matchesExpLstBackEnd(threadData, _exps1a, _exps1b, _inAcc);
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_boolean tmp60;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,4) == 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,15,4) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _p1a = tmpMeta56;
          _exps1a = tmpMeta57;
          _p1b = tmpMeta58;
          _exps1b = tmpMeta59;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp60 = omc_AbsynUtil_pathEqual(threadData, _p1a, _p1b);
          if (1 /* true */ != tmp60) goto goto_2;
          tmpMeta1 = omc_RewriteRules_matchesExpLstBackEnd(threadData, _exps1a, _exps1b, _inAcc);
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,16,3) == 0) goto tmp3_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _exps1a = tmpMeta61;
          _exps1b = tmpMeta62;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_RewriteRules_matchesExpLstBackEnd(threadData, _exps1a, _exps1b, _inAcc);
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,3) == 0) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,17,3) == 0) goto tmp3_end;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _expsLst1a = tmpMeta63;
          _expsLst1b = tmpMeta64;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_RewriteRules_matchesExpLstLstBackEnd(threadData, _expsLst1a, _expsLst1b, _inAcc);
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,4) == 0) goto tmp3_end;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,18,4) == 0) goto tmp3_end;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          _e1a = tmpMeta65;
          _oe1a = tmpMeta66;
          _e2a = tmpMeta67;
          _e1b = tmpMeta68;
          _oe1b = tmpMeta69;
          _e2b = tmpMeta70;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          _outBinds = omc_RewriteRules_matchesBackEnd(threadData, _e1a, _e1b, _inAcc);

          _outBinds = omc_RewriteRules_matchesExpOptBackEnd(threadData, _oe1a, _oe1b, _outBinds);
          tmpMeta1 = omc_RewriteRules_matchesBackEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,19,1) == 0) goto tmp3_end;
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _exps1a = tmpMeta71;
          _exps1b = tmpMeta72;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_RewriteRules_matchesExpLstBackEnd(threadData, _exps1a, _exps1b, _inAcc);
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,29,2) == 0) goto tmp3_end;
          tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,29,2) == 0) goto tmp3_end;
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _e1a = tmpMeta73;
          _e2a = tmpMeta74;
          _e1b = tmpMeta75;
          _e2b = tmpMeta76;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _outBinds = omc_RewriteRules_matchesBackEnd(threadData, _e1a, _e1b, _inAcc);
          tmpMeta1 = omc_RewriteRules_matchesBackEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 19: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,33,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,33,6) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,28,1) == 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,28,1) == 0) goto tmp3_end;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _exps1a = tmpMeta77;
          _exps1b = tmpMeta78;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_RewriteRules_matchesExpLstBackEnd(threadData, _exps1a, _exps1b, _inAcc);
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
      if (++tmp4 < 21) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outBinds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinds;
}

DLLDirection
modelica_metatype omc_RewriteRules_replaceBindBackEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inBinds)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _found;
  modelica_metatype _e = NULL;
  modelica_metatype _to = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _found has no default value.
  // _e has no default value.
  // _to has no default value.
  {
    modelica_metatype _bind;
    for (tmpMeta1 = _inBinds; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _bind = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _bind;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,1,2) == 0) MMC_THROW_INTERNAL();
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
      _e = tmpMeta3;
      _to = tmpMeta4;

      if(omc_RewriteRules_expEqual(threadData, _inExp, _e))
      {
        _outExp = _to;

        goto _return;
      }
    }
  }

  _outExp = _inExp;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_RewriteRules_replaceBindsBackEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inBinds, modelica_metatype *out_outBinds)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outBinds has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inBinds;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _bnds = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _bnds has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          _e1 = tmp4_1;
          _bnds = tmp4_2;
          /* Pattern matching succeeded */
          _e2 = omc_RewriteRules_replaceBindBackEnd(threadData, _e1, _bnds);
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = _bnds;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inBinds;
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
  _outBinds = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outBinds) { *out_outBinds = _outBinds; }
  return _outExp;
}

DLLDirection
modelica_metatype omc_RewriteRules_rewriteExpBackEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inBinds)
{
  modelica_metatype _outExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_RewriteRules_replaceBindsBackEnd, _inBinds, NULL);
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchAndRewriteExpBackEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inRules, modelica_boolean *out_changed)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _changed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _changed has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inRules;
    {
      modelica_metatype _afrom = NULL;
      modelica_metatype _ato = NULL;
      modelica_metatype _from = NULL;
      modelica_metatype _to = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _binds = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _afrom has no default value.
      // _ato has no default value.
      // _from has no default value.
      // _to has no default value.
      // _rest has no default value.
      // _binds has no default value.
      // _b has no default value.
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
          tmp1_c1 = 0 /* false */;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          _afrom = tmpMeta8;
          _ato = tmpMeta9;
          /* Pattern matching succeeded */
          _from = omc_Expression_fromAbsynExp(threadData, _afrom);

          _to = omc_Expression_fromAbsynExp(threadData, _ato);

          /* Pattern-matching assignment */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = omc_RewriteRules_matchesBackEnd(threadData, _inExp, _from, tmpMeta10);
          if (listEmpty(tmpMeta11)) goto goto_2;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          _binds = tmpMeta11;

          _outExp = omc_RewriteRules_rewriteExpBackEnd(threadData, _to, _binds);

          _b = (!referenceEq(_inExp, _outExp));

          tmpMeta14 = stringAppend(_OMC_LIT21,omc_ExpressionDump_printExpStr(threadData, _inExp));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT2);
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT22);
          tmpMeta17 = stringAppend(tmpMeta16,omc_ExpressionDump_printExpStr(threadData, _from));
          tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT2);
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT23);
          tmpMeta20 = stringAppend(tmpMeta19,omc_ExpressionDump_printExpStr(threadData, _to));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT2);
          tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT24);
          tmpMeta23 = stringAppend(tmpMeta22,omc_ExpressionDump_printExpStr(threadData, _outExp));
          tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT25);
          fputs(MMC_STRINGDATA(tmpMeta24),stdout);
          tmpMeta[0+0] = _outExp;
          tmp1_c1 = _b;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmp4_1);
          tmpMeta26 = MMC_CDR(tmp4_1);
          _rest = tmpMeta26;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_RewriteRules_matchAndRewriteExpBackEnd(threadData, _inExp, _rest, &tmp1_c1);
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
  _changed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_changed) { *out_changed = _changed; }
  return _outExp;
}
modelica_metatype boxptr_RewriteRules_matchAndRewriteExpBackEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inRules, modelica_metatype *out_changed)
{
  modelica_boolean _changed;
  modelica_metatype _outExp = NULL;
  _outExp = omc_RewriteRules_matchAndRewriteExpBackEnd(threadData, _inExp, _inRules, &_changed);
  /* skip box _outExp; DAE.Exp */
  if (out_changed) { *out_changed = mmc_mk_icon(_changed); }
  return _outExp;
}

DLLDirection
modelica_metatype omc_RewriteRules_rewriteBackEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_isChanged)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _isChanged;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _isChanged has no default value.
  
  
  { /* match expression */
    {
      modelica_metatype _rules = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rules has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          _rules = omc_RewriteRules_getRulesBackEnd(threadData, omc_RewriteRules_getAllRules(threadData));
          tmpMeta[0+0] = omc_RewriteRules_matchAndRewriteExpBackEnd(threadData, _inExp, _rules, &tmp1_c1);
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
  _isChanged = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_isChanged) { *out_isChanged = _isChanged; }
  return _outExp;
}
modelica_metatype boxptr_RewriteRules_rewriteBackEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_isChanged)
{
  modelica_boolean _isChanged;
  modelica_metatype _outExp = NULL;
  _outExp = omc_RewriteRules_rewriteBackEnd(threadData, _inExp, &_isChanged);
  /* skip box _outExp; DAE.Exp */
  if (out_isChanged) { *out_isChanged = mmc_mk_icon(_isChanged); }
  return _outExp;
}

DLLDirection
modelica_boolean omc_RewriteRules_isPlaceHolderFrontEnd(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _isHolder;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isHolder has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_string _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _name = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = (omc_System_stringFind(threadData, _name, _OMC_LIT20) == ((modelica_integer) 0));
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
  _isHolder = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isHolder;
}
modelica_metatype boxptr_RewriteRules_isPlaceHolderFrontEnd(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _isHolder;
  modelica_metatype out_isHolder;
  _isHolder = omc_RewriteRules_isPlaceHolderFrontEnd(threadData, _inExp);
  out_isHolder = mmc_mk_icon(_isHolder);
  return out_isHolder;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchesExpLstLstFrontEnd(threadData_t *threadData, modelica_metatype _inExps1, modelica_metatype _inExps2, modelica_metatype _inAcc)
{
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinds has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExps1;
    tmp4_2 = _inExps2;
    {
      modelica_metatype _e1a = NULL;
      modelica_metatype _e1b = NULL;
      modelica_metatype _exps1a = NULL;
      modelica_metatype _exps1b = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1a has no default value.
      // _e1b has no default value.
      // _exps1a has no default value.
      // _exps1b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1a = tmpMeta6;
          _exps1a = tmpMeta7;
          _e1b = tmpMeta8;
          _exps1b = tmpMeta9;
          /* Pattern matching succeeded */
          _outBinds = omc_RewriteRules_matchesExpLstFrontEnd(threadData, _e1a, _e1b, _inAcc);
          /* Tail recursive call */
          _inExps1 = _exps1a;
          _inExps2 = _exps1b;
          _inAcc = _outBinds;
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
  _outBinds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinds;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchesNargsFrontEnd(threadData_t *threadData, modelica_metatype _inNargs1, modelica_metatype _inNargs2, modelica_metatype _inAcc)
{
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinds has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inNargs1;
    tmp4_2 = _inNargs2;
    {
      modelica_string _n1a = NULL;
      modelica_string _n1b = NULL;
      modelica_metatype _e1a = NULL;
      modelica_metatype _e1b = NULL;
      modelica_metatype _nargs1a = NULL;
      modelica_metatype _nargs1b = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _n1a has no default value.
      // _n1b has no default value.
      // _e1a has no default value.
      // _e1b has no default value.
      // _nargs1a has no default value.
      // _nargs1b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inAcc;
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
          modelica_boolean tmp14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          _n1a = tmpMeta8;
          _e1a = tmpMeta9;
          _nargs1a = tmpMeta7;
          _n1b = tmpMeta12;
          _e1b = tmpMeta13;
          _nargs1b = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (stringEqual(_n1a, _n1b));
          if (1 /* true */ != tmp14) goto goto_2;

          _outBinds = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
          /* Tail recursive call */
          _inNargs1 = _nargs1a;
          _inNargs2 = _nargs1b;
          _inAcc = _outBinds;
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
  _outBinds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinds;
}

DLLDirection
modelica_boolean omc_RewriteRules_inNargComp(threadData_t *threadData, modelica_metatype _inNarg1, modelica_metatype _inNarg2)
{
  modelica_boolean _isGreater;
  modelica_string _id1 = NULL;
  modelica_string _id2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isGreater has no default value.
  // _id1 has no default value.
  // _id2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inNarg1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _id1 = tmpMeta2;

  /* Pattern-matching assignment */
  tmpMeta3 = _inNarg2;
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  _id2 = tmpMeta4;

  _isGreater = (stringCompare(_id1, _id2) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _isGreater;
}
modelica_metatype boxptr_RewriteRules_inNargComp(threadData_t *threadData, modelica_metatype _inNarg1, modelica_metatype _inNarg2)
{
  modelica_boolean _isGreater;
  modelica_metatype out_isGreater;
  _isGreater = omc_RewriteRules_inNargComp(threadData, _inNarg1, _inNarg2);
  out_isGreater = mmc_mk_icon(_isGreater);
  return out_isGreater;
}

DLLDirection
modelica_metatype omc_RewriteRules_sortNargsFrontEnd(threadData_t *threadData, modelica_metatype _inNargs)
{
  modelica_metatype _outNargs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNargs has no default value.
  _outNargs = omc_List_sort(threadData, _inNargs, boxvar_RewriteRules_inNargComp);
  _return: OMC_LABEL_UNUSED
  return _outNargs;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchesFargsFrontEnd(threadData_t *threadData, modelica_metatype _inFargs1, modelica_metatype _inFargs2, modelica_metatype _inAcc)
{
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinds has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inFargs1;
    tmp4_2 = _inFargs2;
    {
      modelica_metatype _exps1a = NULL;
      modelica_metatype _exps1b = NULL;
      modelica_metatype _nargs1a = NULL;
      modelica_metatype _nargs1b = NULL;
      modelica_metatype _e1a = NULL;
      modelica_metatype _e1b = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exps1a has no default value.
      // _exps1b has no default value.
      // _nargs1a has no default value.
      // _nargs1b has no default value.
      // _e1a has no default value.
      // _e1b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _exps1a = tmpMeta6;
          _nargs1a = tmpMeta7;
          _exps1b = tmpMeta8;
          _nargs1b = tmpMeta9;
          /* Pattern matching succeeded */
          _outBinds = omc_RewriteRules_matchesExpLstFrontEnd(threadData, _exps1a, _exps1b, _inAcc);

          /* Pattern-matching assignment */
          tmp10 = (listLength(_nargs1a) == listLength(_nargs1b));
          if (1 /* true */ != tmp10) goto goto_2;
          tmpMeta1 = omc_RewriteRules_matchesNargsFrontEnd(threadData, omc_RewriteRules_sortNargsFrontEnd(threadData, _nargs1a), omc_RewriteRules_sortNargsFrontEnd(threadData, _nargs1b), _outBinds);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _e1a = tmpMeta11;
          _e1b = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
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
  _outBinds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinds;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchesExpLstFrontEnd(threadData_t *threadData, modelica_metatype _inExps1, modelica_metatype _inExps2, modelica_metatype _inAcc)
{
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinds has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExps1;
    tmp4_2 = _inExps2;
    {
      modelica_metatype _e1a = NULL;
      modelica_metatype _e1b = NULL;
      modelica_metatype _exps1a = NULL;
      modelica_metatype _exps1b = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1a has no default value.
      // _e1b has no default value.
      // _exps1a has no default value.
      // _exps1b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1a = tmpMeta6;
          _exps1a = tmpMeta7;
          _e1b = tmpMeta8;
          _exps1b = tmpMeta9;
          /* Pattern matching succeeded */
          _outBinds = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
          /* Tail recursive call */
          _inExps1 = _exps1a;
          _inExps2 = _exps1b;
          _inAcc = _outBinds;
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
  _outBinds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinds;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchesExpOptFrontEnd(threadData_t *threadData, modelica_metatype _inOExp1, modelica_metatype _inOExp2, modelica_metatype _inAcc)
{
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinds has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inOExp1;
    tmp4_2 = _inOExp2;
    {
      modelica_metatype _e1a = NULL;
      modelica_metatype _e1b = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1a has no default value.
      // _e1b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _e1a = tmpMeta6;
          _e1b = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
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
  _outBinds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinds;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchesFrontEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inUnifyWith, modelica_metatype _inAcc)
{
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinds has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inUnifyWith;
    {
      modelica_metatype _e1a = NULL;
      modelica_metatype _e2a = NULL;
      modelica_metatype _e1b = NULL;
      modelica_metatype _e2b = NULL;
      modelica_metatype _cond1a = NULL;
      modelica_metatype _cond1b = NULL;
      modelica_metatype _op1a = NULL;
      modelica_metatype _op1b = NULL;
      modelica_metatype _cr1a = NULL;
      modelica_metatype _cr1b = NULL;
      modelica_metatype _fargs1a = NULL;
      modelica_metatype _fargs1b = NULL;
      modelica_metatype _exps1a = NULL;
      modelica_metatype _exps1b = NULL;
      modelica_metatype _expsLst1a = NULL;
      modelica_metatype _expsLst1b = NULL;
      modelica_metatype _oe1a = NULL;
      modelica_metatype _oe1b = NULL;
      modelica_string _id1a = NULL;
      modelica_string _id1b = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1a has no default value.
      // _e2a has no default value.
      // _e1b has no default value.
      // _e2b has no default value.
      // _cond1a has no default value.
      // _cond1b has no default value.
      // _op1a has no default value.
      // _op1b has no default value.
      // _cr1a has no default value.
      // _cr1b has no default value.
      // _fargs1a has no default value.
      // _fargs1b has no default value.
      // _exps1a has no default value.
      // _exps1b has no default value.
      // _expsLst1a has no default value.
      // _expsLst1b has no default value.
      // _oe1a has no default value.
      // _oe1b has no default value.
      // _id1a has no default value.
      // _id1b has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 24; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_RewriteRules_isPlaceHolderFrontEnd(threadData, _inUnifyWith);
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta8 = mmc_mk_box3(3, &RewriteRules_Bind_FRONTEND__BIND__desc, _inUnifyWith, _inExp);
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _inAcc);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          tmp4 += 22; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp9 = omc_AbsynUtil_expEqual(threadData, _inExp, _inUnifyWith);
          if (1 /* true */ != tmp9) goto goto_2;
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          tmp4 += 21; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp10 = omc_AbsynUtil_expEqual(threadData, _inExp, _inUnifyWith);
          if (1 /* true */ != tmp10) goto goto_2;
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          tmp4 += 20; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp11 = omc_AbsynUtil_expEqual(threadData, _inExp, _inUnifyWith);
          if (1 /* true */ != tmp11) goto goto_2;
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 4: {
          modelica_boolean tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          
          tmp4 += 19; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp12 = omc_AbsynUtil_expEqual(threadData, _inExp, _inUnifyWith);
          if (1 /* true */ != tmp12) goto goto_2;
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 5: {
          modelica_boolean tmp13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          tmp4 += 18; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp13 = omc_AbsynUtil_expEqual(threadData, _inExp, _inUnifyWith);
          if (1 /* true */ != tmp13) goto goto_2;
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_boolean tmp20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,3) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _e1a = tmpMeta14;
          _op1a = tmpMeta15;
          _e2a = tmpMeta16;
          _e1b = tmpMeta17;
          _op1b = tmpMeta18;
          _e2b = tmpMeta19;
          tmp4 += 17; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp20 = omc_AbsynUtil_opEqual(threadData, _op1a, _op1b);
          if (1 /* true */ != tmp20) goto goto_2;

          _outBinds = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_boolean tmp25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _op1a = tmpMeta21;
          _e1a = tmpMeta22;
          _op1b = tmpMeta23;
          _e1b = tmpMeta24;
          tmp4 += 16; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp25 = omc_AbsynUtil_opEqual(threadData, _op1a, _op1b);
          if (1 /* true */ != tmp25) goto goto_2;
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_boolean tmp32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _e1a = tmpMeta26;
          _op1a = tmpMeta27;
          _e2a = tmpMeta28;
          _e1b = tmpMeta29;
          _op1b = tmpMeta30;
          _e2b = tmpMeta31;
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp32 = omc_AbsynUtil_opEqual(threadData, _op1a, _op1b);
          if (1 /* true */ != tmp32) goto goto_2;

          _outBinds = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_boolean tmp37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _op1a = tmpMeta33;
          _e1a = tmpMeta34;
          _op1b = tmpMeta35;
          _e1b = tmpMeta36;
          tmp4 += 14; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp37 = omc_AbsynUtil_opEqual(threadData, _op1a, _op1b);
          if (1 /* true */ != tmp37) goto goto_2;
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_boolean tmp44;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,9,3) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _e1a = tmpMeta38;
          _op1a = tmpMeta39;
          _e2a = tmpMeta40;
          _e1b = tmpMeta41;
          _op1b = tmpMeta42;
          _e2b = tmpMeta43;
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp44 = omc_AbsynUtil_opEqual(threadData, _op1a, _op1b);
          if (1 /* true */ != tmp44) goto goto_2;

          _outBinds = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,10,4) == 0) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          
          _cond1a = tmpMeta45;
          _e1a = tmpMeta46;
          _e2a = tmpMeta47;
          _cond1b = tmpMeta48;
          _e1b = tmpMeta49;
          _e2b = tmpMeta50;
          tmp4 += 12; /* Pattern matching succeeded; we may skip some cases if we fail */
          _outBinds = omc_RewriteRules_matchesFrontEnd(threadData, _cond1a, _cond1b, _inAcc);

          _outBinds = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _outBinds);
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_boolean tmp55;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,3) == 0) goto tmp3_end;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,11,3) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _cr1a = tmpMeta51;
          _fargs1a = tmpMeta52;
          _cr1b = tmpMeta53;
          _fargs1b = tmpMeta54;
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp55 = omc_AbsynUtil_crefEqual(threadData, _cr1a, _cr1b);
          if (1 /* true */ != tmp55) goto goto_2;
          tmpMeta1 = omc_RewriteRules_matchesFargsFrontEnd(threadData, _fargs1a, _fargs1b, _inAcc);
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_boolean tmp60;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,2) == 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,12,2) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _cr1a = tmpMeta56;
          _fargs1a = tmpMeta57;
          _cr1b = tmpMeta58;
          _fargs1b = tmpMeta59;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp60 = omc_AbsynUtil_crefEqual(threadData, _cr1a, _cr1b);
          if (1 /* true */ != tmp60) goto goto_2;
          tmpMeta1 = omc_RewriteRules_matchesFargsFrontEnd(threadData, _fargs1a, _fargs1b, _inAcc);
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,1) == 0) goto tmp3_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _exps1a = tmpMeta61;
          _exps1b = tmpMeta62;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_RewriteRules_matchesExpLstFrontEnd(threadData, _exps1a, _exps1b, _inAcc);
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,1) == 0) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,14,1) == 0) goto tmp3_end;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _expsLst1a = tmpMeta63;
          _expsLst1b = tmpMeta64;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_RewriteRules_matchesExpLstLstFrontEnd(threadData, _expsLst1a, _expsLst1b, _inAcc);
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,3) == 0) goto tmp3_end;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,15,3) == 0) goto tmp3_end;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _e1a = tmpMeta65;
          _oe1a = tmpMeta66;
          _e2a = tmpMeta67;
          _e1b = tmpMeta68;
          _oe1b = tmpMeta69;
          _e2b = tmpMeta70;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          _outBinds = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);

          _outBinds = omc_RewriteRules_matchesExpOptFrontEnd(threadData, _oe1a, _oe1b, _outBinds);
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,1) == 0) goto tmp3_end;
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,16,1) == 0) goto tmp3_end;
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _exps1a = tmpMeta71;
          _exps1b = tmpMeta72;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_RewriteRules_matchesExpLstFrontEnd(threadData, _exps1a, _exps1b, _inAcc);
          goto tmp3_done;
        }
        case 18: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,17,0) == 0) goto tmp3_end;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 19: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,18,1) == 0) goto tmp3_end;
          
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_boolean tmp77;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,2) == 0) goto tmp3_end;
          tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,19,2) == 0) goto tmp3_end;
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _id1a = tmpMeta73;
          _e1a = tmpMeta74;
          _id1b = tmpMeta75;
          _e1b = tmpMeta76;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp77 = (stringEqual(_id1a, _id1b));
          if (1 /* true */ != tmp77) goto goto_2;
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,20,2) == 0) goto tmp3_end;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,20,2) == 0) goto tmp3_end;
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _e1a = tmpMeta78;
          _e2a = tmpMeta79;
          _e1b = tmpMeta80;
          _e2b = tmpMeta81;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _outBinds = omc_RewriteRules_matchesFrontEnd(threadData, _e1a, _e1b, _inAcc);
          tmpMeta1 = omc_RewriteRules_matchesFrontEnd(threadData, _e2a, _e2b, _outBinds);
          goto tmp3_done;
        }
        case 22: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,5) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,21,5) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _inAcc;
          goto tmp3_done;
        }
        case 23: {
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,22,1) == 0) goto tmp3_end;
          tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,22,1) == 0) goto tmp3_end;
          tmpMeta83 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _exps1a = tmpMeta82;
          _exps1b = tmpMeta83;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_RewriteRules_matchesExpLstFrontEnd(threadData, _exps1a, _exps1b, _inAcc);
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
      if (++tmp4 < 24) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outBinds = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinds;
}

DLLDirection
modelica_metatype omc_RewriteRules_replaceBindFrontEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inBinds)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _found;
  modelica_metatype _e = NULL;
  modelica_metatype _to = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _found has no default value.
  // _e has no default value.
  // _to has no default value.
  {
    modelica_metatype _bind;
    for (tmpMeta1 = _inBinds; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _bind = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _bind;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,2) == 0) MMC_THROW_INTERNAL();
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
      _e = tmpMeta3;
      _outExp = tmpMeta4;

      if(omc_AbsynUtil_expEqual(threadData, _inExp, _e))
      {
        goto _return;
      }
    }
  }

  _outExp = _inExp;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_RewriteRules_replaceBindsFrontEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inBinds, modelica_metatype *out_outBinds)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outBinds = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outBinds has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inBinds;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _bnds = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _bnds has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          _e1 = tmp4_1;
          _bnds = tmp4_2;
          /* Pattern matching succeeded */
          _e2 = omc_RewriteRules_replaceBindFrontEnd(threadData, _e1, _bnds);
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = _bnds;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inBinds;
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
  _outBinds = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outBinds) { *out_outBinds = _outBinds; }
  return _outExp;
}

DLLDirection
modelica_metatype omc_RewriteRules_rewriteExpFrontEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inBinds)
{
  modelica_metatype _outExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outExp = omc_AbsynUtil_traverseExp(threadData, _inExp, boxvar_RewriteRules_replaceBindsFrontEnd, _inBinds, NULL);
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_RewriteRules_matchAndRewriteExpFrontEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inRules, modelica_boolean *out_changed)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _changed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _changed has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inRules;
    {
      modelica_metatype _from = NULL;
      modelica_metatype _to = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _binds = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _from has no default value.
      // _to has no default value.
      // _rest has no default value.
      // _binds has no default value.
      // _b has no default value.
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
          tmp1_c1 = 0 /* false */;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          _from = tmpMeta8;
          _to = tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = omc_RewriteRules_matchesFrontEnd(threadData, _inExp, _from, tmpMeta10);
          if (listEmpty(tmpMeta11)) goto goto_2;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          _binds = tmpMeta11;

          _outExp = omc_RewriteRules_rewriteExpFrontEnd(threadData, _to, _binds);

          _b = (!referenceEq(_inExp, _outExp));

          tmpMeta14 = stringAppend(_OMC_LIT26,omc_Dump_printExpStr(threadData, _inExp));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT2);
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT27);
          tmpMeta17 = stringAppend(tmpMeta16,omc_Dump_printExpStr(threadData, _from));
          tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT2);
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT28);
          tmpMeta20 = stringAppend(tmpMeta19,omc_Dump_printExpStr(threadData, _to));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT2);
          tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT29);
          tmpMeta23 = stringAppend(tmpMeta22,omc_Dump_printExpStr(threadData, _outExp));
          tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT25);
          fputs(MMC_STRINGDATA(tmpMeta24),stdout);
          tmpMeta[0+0] = _outExp;
          tmp1_c1 = _b;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmp4_1);
          tmpMeta26 = MMC_CDR(tmp4_1);
          _rest = tmpMeta26;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_RewriteRules_matchAndRewriteExpFrontEnd(threadData, _inExp, _rest, &tmp1_c1);
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
  _changed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_changed) { *out_changed = _changed; }
  return _outExp;
}
modelica_metatype boxptr_RewriteRules_matchAndRewriteExpFrontEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inRules, modelica_metatype *out_changed)
{
  modelica_boolean _changed;
  modelica_metatype _outExp = NULL;
  _outExp = omc_RewriteRules_matchAndRewriteExpFrontEnd(threadData, _inExp, _inRules, &_changed);
  /* skip box _outExp; Absyn.Exp */
  if (out_changed) { *out_changed = mmc_mk_icon(_changed); }
  return _outExp;
}

DLLDirection
modelica_metatype omc_RewriteRules_rewriteFrontEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_isChanged)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _isChanged;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _isChanged has no default value.
  
  
  { /* match expression */
    {
      modelica_metatype _rules = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rules has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          _rules = omc_RewriteRules_getRulesFrontEnd(threadData, omc_RewriteRules_getAllRules(threadData));
          tmpMeta[0+0] = omc_RewriteRules_matchAndRewriteExpFrontEnd(threadData, _inExp, _rules, &tmp1_c1);
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
  _isChanged = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_isChanged) { *out_isChanged = _isChanged; }
  return _outExp;
}
modelica_metatype boxptr_RewriteRules_rewriteFrontEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_isChanged)
{
  modelica_boolean _isChanged;
  modelica_metatype _outExp = NULL;
  _outExp = omc_RewriteRules_rewriteFrontEnd(threadData, _inExp, &_isChanged);
  /* skip box _outExp; Absyn.Exp */
  if (out_isChanged) { *out_isChanged = mmc_mk_icon(_isChanged); }
  return _outExp;
}

