#include "omc_simulation_settings.h"
#include "NSimGenericCall.h"
#define _OMC_LIT0_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "if "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,3,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " then\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,6,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "	  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,3,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,3,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "when "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,5,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,0,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "SIM BRANCH NOT KNOWN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,20,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,17,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT8,_OMC_LIT9,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "NSimGenericCall.SimIterator.subIterators failed for incorrect iterator domain: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,79,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "NSimGenericCall.SimIterator.fromIterator failed for incorrect iterator domain: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,79,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,1,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,2,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,1,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data " | start:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,9,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data ", step:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,7,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data ", stop:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,7,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ", size: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,8,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data " | list: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,9,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "NSimGenericCall.convert failed for incorrect call: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,51,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "NSimGenericCall.fromIdentifier failed for incorrect equation: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,62,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data ") [SNGL]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,10,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,2,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data ") [-IF-]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,10,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "	else"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,5,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data ") [WHEN]: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,10,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "CALL_NOT_SUPPORTED"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,18,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#include "util/modelica.h"

#include "NSimGenericCall_includes.h"



DLLDirection
modelica_metatype omc_NSimGenericCall_SimBranch_convert(threadData_t *threadData, modelica_metatype _branch)
{
  modelica_metatype _old_branch = NULL;
  modelica_metatype _old_condition = NULL;
  modelica_metatype _old_body = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _old_branch has no default value.
  // _old_condition has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _old_body = tmpMeta1;
  // _lhs has no default value.
  // _rhs has no default value.
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _branch;
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,2) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)));
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 2; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,15,0) == 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = mmc_mk_none();
                  goto tmp9_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta7 = mmc_mk_some(omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)))));
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_3;
              goto tmp9_done;
              tmp9_done:;
            }
          }
          _old_condition = tmpMeta7;

          {
            modelica_metatype _tpl;
            for (tmpMeta12 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 3)))); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _tpl = MMC_CAR(tmpMeta12);
              /* Pattern-matching assignment */
              tmpMeta13 = _tpl;
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
              _lhs = tmpMeta14;
              _rhs = tmpMeta15;

              tmpMeta17 = mmc_mk_box2(0, omc_NFExpression_toDAE(threadData, _lhs), omc_NFExpression_toDAE(threadData, _rhs));
              tmpMeta16 = mmc_mk_cons(tmpMeta17, _old_body);
              _old_body = tmpMeta16;
            }
          }
          tmpMeta19 = mmc_mk_box3(3, &SimCode_SimBranch_SIM__BRANCH__desc, _old_condition, _old_body);
          tmpMeta2 = tmpMeta19;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,2) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp23_1;
            tmp23_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)));
            {
              volatile mmc_switch_type tmp23;
              int tmp24;
              tmp23 = 0;
              for (; tmp23 < 2; tmp23++) {
                switch (MMC_SWITCH_CAST(tmp23)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp23_1,15,0) == 0) goto tmp22_end;
                  /* Pattern matching succeeded */
                  tmpMeta20 = mmc_mk_none();
                  goto tmp22_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta20 = mmc_mk_some(omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)))));
                  goto tmp22_done;
                }
                }
                goto tmp22_end;
                tmp22_end: ;
              }
              goto goto_21;
              goto_21:;
              goto goto_3;
              goto tmp22_done;
              tmp22_done:;
            }
          }
          _old_condition = tmpMeta20;
          tmpMeta25 = mmc_mk_box3(4, &SimCode_SimBranch_SIM__BRANCH__STMT__desc, _old_condition, omc_NFConvertDAE_convertStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 3)))));
          tmpMeta2 = tmpMeta25;
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
  _old_branch = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _old_branch;
}

DLLDirection
modelica_metatype omc_NSimGenericCall_SimBranch_fromWhenBody(threadData_t *threadData, modelica_metatype _when_body)
{
  modelica_metatype _branches = NULL;
  modelica_metatype _branch = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _branches has no default value.
  // _branch has no default value.
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _stmt_loopVar = 0;
    modelica_metatype _stmt;
    _stmt_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_when_body), 3)));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_stmt_loopVar)) {
        _stmt = MMC_CAR(_stmt_loopVar);
        _stmt_loopVar = MMC_CDR(_stmt_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = omc_NBEquation_WhenStatement_toStatement(threadData, _stmt);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  tmpMeta5 = mmc_mk_box3(4, &NSimGenericCall_SimBranch_SIM__BRANCH__STMT__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_when_body), 2))), tmpMeta1);
  _branch = tmpMeta5;

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_when_body), 4)))))
  {
    tmpMeta6 = mmc_mk_cons(_branch, omc_NSimGenericCall_SimBranch_fromWhenBody(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_when_body), 4))))));
    _branches = tmpMeta6;
  }
  else
  {
    tmpMeta7 = mmc_mk_cons(_branch, MMC_REFSTRUCTLIT(mmc_nil));
    _branches = tmpMeta7;
  }
  _return: OMC_LABEL_UNUSED
  return _branches;
}

DLLDirection
modelica_metatype omc_NSimGenericCall_SimBranch_fromIfBody(threadData_t *threadData, modelica_metatype _if_body)
{
  modelica_metatype _branches = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _branch = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _branches has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _body = tmpMeta1;
  // _branch has no default value.
  {
    modelica_metatype _eqn;
    for (tmpMeta2 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_if_body), 3)))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eqn = MMC_CAR(tmpMeta2);
      tmpMeta4 = mmc_mk_box2(0, omc_Util_getOption(threadData, omc_NBEquation_Equation_getLHS(threadData, omc_Pointer_access(threadData, _eqn))), omc_Util_getOption(threadData, omc_NBEquation_Equation_getRHS(threadData, omc_Pointer_access(threadData, _eqn))));
      tmpMeta3 = mmc_mk_cons(tmpMeta4, _body);
      _body = tmpMeta3;
    }
  }

  tmpMeta6 = mmc_mk_box3(3, &NSimGenericCall_SimBranch_SIM__BRANCH__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_if_body), 2))), _body);
  _branch = tmpMeta6;

  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_if_body), 4)))))
  {
    tmpMeta7 = mmc_mk_cons(_branch, omc_NSimGenericCall_SimBranch_fromIfBody(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_if_body), 4))))));
    _branches = tmpMeta7;
  }
  else
  {
    tmpMeta8 = mmc_mk_cons(_branch, MMC_REFSTRUCTLIT(mmc_nil));
    _branches = tmpMeta8;
  }
  _return: OMC_LABEL_UNUSED
  return _branches;
}

static modelica_metatype closure0_NFStatement_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype stmt)
{
  modelica_string indent = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStatement_toString(thData, stmt, indent);
}
DLLDirection
modelica_string omc_NSimGenericCall_SimBranch_toString(threadData_t *threadData, modelica_metatype _branch)
{
  modelica_string _str = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _branch;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7;
          modelica_string tmp8;
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
          
          /* Pattern matching succeeded */
          tmp7 = (modelica_boolean)omc_NFExpression_isEnd(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2))));
          if(tmp7)
          {
            tmp8 = _OMC_LIT0;
          }
          else
          {
            tmpMeta5 = stringAppend(_OMC_LIT1,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)))));
            tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT2);
            tmp8 = tmpMeta6;
          }
          _str = tmp8;

          {
            modelica_metatype _tpl;
            for (tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 3))); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _tpl = MMC_CAR(tmpMeta9);
              /* Pattern-matching assignment */
              tmpMeta10 = _tpl;
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
              _lhs = tmpMeta11;
              _rhs = tmpMeta12;

              tmpMeta13 = stringAppend(_str,_OMC_LIT3);
              tmpMeta14 = stringAppend(tmpMeta13,omc_NFExpression_toString(threadData, _lhs));
              tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT4);
              tmpMeta16 = stringAppend(tmpMeta15,omc_NFExpression_toString(threadData, _rhs));
              tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT0);
              _str = tmpMeta17;
            }
          }
          tmp1 = _str;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_boolean tmp21;
          modelica_string tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          
          /* Pattern matching succeeded */
          tmp21 = (modelica_boolean)omc_NFExpression_isEnd(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2))));
          if(tmp21)
          {
            tmp22 = _OMC_LIT0;
          }
          else
          {
            tmpMeta19 = stringAppend(_OMC_LIT5,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)))));
            tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT2);
            tmp22 = tmpMeta20;
          }
          _str = tmp22;
          tmpMeta23 = mmc_mk_box1(0, _OMC_LIT6);
          tmpMeta24 = stringAppend(_str,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 3))), (modelica_fnptr) mmc_mk_box2(0,closure0_NFStatement_toString,tmpMeta23), _OMC_LIT3, _OMC_LIT3, _OMC_LIT0, _OMC_LIT6, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta24;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT7;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NSimGenericCall_SimBranch_mapShallow(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbranch, modelica_fnptr _func)
{
  modelica_metatype _branch = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _branch = __omcQ_24in_5Fbranch;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _branch;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp10;
            modelica_metatype _tpl_loopVar = 0;
            modelica_metatype _tpl;
            _tpl_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 3)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar5;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_tpl_loopVar)) {
                _tpl = MMC_CAR(_tpl_loopVar);
                _tpl_loopVar = MMC_CDR(_tpl_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                tmpMeta9 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple21(threadData, _tpl)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple21(threadData, _tpl)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple22(threadData, _tpl)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple22(threadData, _tpl)));
                __omcQ_24tmpVar4 = tmpMeta9;
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar5;
          }
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_branch), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = tmpMeta6;
          _branch = tmpMeta5;
          tmpMeta1 = _branch;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp13;
            modelica_metatype tmpMeta14;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp15;
            modelica_metatype _stmt_loopVar = 0;
            modelica_metatype _stmt;
            _stmt_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 3)));
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta14; /* defaultValue */
            tmp13 = &__omcQ_24tmpVar7;
            while(1) {
              tmp15 = 1;
              if (!listEmpty(_stmt_loopVar)) {
                _stmt = MMC_CAR(_stmt_loopVar);
                _stmt_loopVar = MMC_CDR(_stmt_loopVar);
                tmp15--;
              }
              if (tmp15 == 0) {
                __omcQ_24tmpVar6 = omc_NFStatement_mapExp(threadData, _stmt, ((modelica_fnptr) _func));
                *tmp13 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp13 = &MMC_CDR(*tmp13);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp13 = mmc_mk_nil();
            tmpMeta12 = __omcQ_24tmpVar7;
          }
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_branch), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = tmpMeta12;
          _branch = tmpMeta11;
          tmpMeta1 = _branch;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _branch;
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
  _branch = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _branch;
}

DLLDirection
modelica_metatype omc_NSimGenericCall_SimIterator_convert_convertSubIterator(threadData_t *threadData, modelica_metatype _sub_iter)
{
  modelica_metatype _old_sub_iter = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp4;
    modelica_metatype _e_loopVar = 0;
    modelica_integer tmp5;
    modelica_metatype _e;
    _e_loopVar = omc_Util_tuple22(threadData, _sub_iter);
    tmp5 = 1;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar9;
    while(1) {
      tmp4 = 1;
      if (tmp5 <= arrayLength(_e_loopVar)) {
        _e = arrayGet(_e_loopVar, tmp5++);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar8 = omc_NFExpression_toDAE(threadData, _e);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar9;
  }
  tmpMeta6 = mmc_mk_box2(0, omc_NFComponentRef_toDAE(threadData, omc_Util_tuple21(threadData, _sub_iter)), listArray(tmpMeta1));
  _old_sub_iter = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _old_sub_iter;
}

DLLDirection
modelica_metatype omc_NSimGenericCall_SimIterator_convert(threadData_t *threadData, modelica_metatype _iter)
{
  modelica_metatype _old_iter = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _old_iter has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iter;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp9;
            modelica_metatype _si_loopVar = 0;
            modelica_metatype _si;
            _si_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 7)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar13;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_si_loopVar)) {
                _si = MMC_CAR(_si_loopVar);
                _si_loopVar = MMC_CDR(_si_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar12 = omc_NSimGenericCall_SimIterator_convert_convertSubIterator(threadData, _si);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar13;
          }
          tmpMeta10 = mmc_mk_box8(3, &BackendDAE_SimIterator_SIM__ITERATOR__RANGE__desc, omc_NFComponentRef_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 2)))), omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 3)))), omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 4)))), omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 5)))), omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 6)))), mmc_mk_integer(omc_NFExpression_getInteger(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 6))))), tmpMeta6);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp14;
            modelica_metatype _si_loopVar = 0;
            modelica_metatype _si;
            _si_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 5)));
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta13; /* defaultValue */
            tmp12 = &__omcQ_24tmpVar15;
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_si_loopVar)) {
                _si = MMC_CAR(_si_loopVar);
                _si_loopVar = MMC_CDR(_si_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                __omcQ_24tmpVar14 = omc_NSimGenericCall_SimIterator_convert_convertSubIterator(threadData, _si);
                *tmp12 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp12 = &MMC_CDR(*tmp12);
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp12 = mmc_mk_nil();
            tmpMeta11 = __omcQ_24tmpVar15;
          }
          tmpMeta15 = mmc_mk_box5(4, &BackendDAE_SimIterator_SIM__ITERATOR__LIST__desc, omc_NFComponentRef_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 2)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 4))), tmpMeta11);
          tmpMeta1 = tmpMeta15;
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
  _old_iter = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _old_iter;
}

DLLDirection
modelica_metatype omc_NSimGenericCall_SimIterator_subIterators(threadData_t *threadData, modelica_metatype _iter)
{
  modelica_metatype _sub_iter = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _names = NULL;
  modelica_metatype _ranges = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _range = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _sub_iter = tmpMeta1;
  // _names has no default value.
  // _ranges has no default value.
  // _name has no default value.
  // _range has no default value.
  _names = omc_NBEquation_Iterator_getFrames(threadData, _iter ,&_ranges ,NULL);

  {
    modelica_metatype _tpl;
    for (tmpMeta2 = listReverse(omc_List_zip(threadData, _names, _ranges)); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _tpl = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _tpl;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _name = tmpMeta4;
      _range = tmpMeta5;

      { /* match expression */
        modelica_metatype tmp9_1;
        tmp9_1 = _range;
        {
          volatile mmc_switch_type tmp9;
          int tmp10;
          tmp9 = 0;
          for (; tmp9 < 2; tmp9++) {
            switch (MMC_SWITCH_CAST(tmp9)) {
            case 0: {
              modelica_metatype tmpMeta11;
              modelica_metatype tmpMeta12;
              if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,8,3) == 0) goto tmp8_end;
              
              /* Pattern matching succeeded */
              tmpMeta12 = mmc_mk_box2(0, _name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_range), 3))));
              tmpMeta11 = mmc_mk_cons(tmpMeta12, _sub_iter);
              tmpMeta6 = tmpMeta11;
              goto tmp8_done;
            }
            case 1: {
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              
              /* Pattern matching succeeded */
              tmpMeta14 = stringAppend(_OMC_LIT13,omc_NFExpression_toString(threadData, _range));
              tmpMeta13 = mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil));
              omc_Error_addMessage(threadData, _OMC_LIT12, tmpMeta13);
              goto goto_7;
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
      _sub_iter = tmpMeta6;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _sub_iter;
}

DLLDirection
modelica_metatype omc_NSimGenericCall_SimIterator_fromIterator(threadData_t *threadData, modelica_metatype _iter)
{
  modelica_metatype _sim_iter = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _names = NULL;
  modelica_metatype _ranges = NULL;
  modelica_metatype _maps = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _addOp = NULL;
  modelica_metatype _mulOp = NULL;
  modelica_metatype _range = NULL;
  modelica_metatype _step = NULL;
  modelica_metatype _size = NULL;
  modelica_metatype _map = NULL;
  modelica_metatype _lst = NULL;
  modelica_metatype _sub_iter = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta38;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _sim_iter = tmpMeta1;
  // _names has no default value.
  // _ranges has no default value.
  // _maps has no default value.
  // _name has no default value.
  // _addOp has no default value.
  // _mulOp has no default value.
  // _range has no default value.
  // _step has no default value.
  // _size has no default value.
  // _map has no default value.
  // _lst has no default value.
  // _sub_iter has no default value.
  _names = omc_NBEquation_Iterator_getFrames(threadData, _iter ,&_ranges ,&_maps);

  {
    modelica_metatype _tpl;
    for (tmpMeta2 = omc_List_zip3(threadData, _names, _ranges, _maps); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _tpl = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _tpl;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
      _name = tmpMeta4;
      _range = tmpMeta5;
      _map = tmpMeta6;

      { /* match expression */
        modelica_metatype tmp10_1;
        tmp10_1 = _range;
        {
          volatile mmc_switch_type tmp10;
          int tmp11;
          tmp10 = 0;
          for (; tmp10 < 3; tmp10++) {
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
              modelica_metatype tmpMeta21;
              modelica_boolean tmp22;
              modelica_metatype tmpMeta23;
              modelica_metatype tmpMeta24;
              modelica_metatype tmpMeta25;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,10,4) == 0) goto tmp9_end;
              
              /* Pattern matching succeeded */
              _step = omc_Util_getOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_range), 4))), _OMC_LIT14);

              _addOp = omc_NFOperator_makeAdd(threadData, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_range), 3)))));

              _mulOp = omc_NFOperator_makeMul(threadData, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_range), 3)))));

              tmpMeta12 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_range), 5))), MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta13 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_range), 3))), MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta14 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta12, tmpMeta13, _addOp);
              _size = tmpMeta14;

              tmpMeta15 = mmc_mk_cons(_size, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta16 = mmc_mk_cons(_step, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta17 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta15, tmpMeta16, _mulOp);
              _size = tmpMeta17;

              tmpMeta18 = mmc_mk_cons(_size, mmc_mk_cons(_OMC_LIT14, MMC_REFSTRUCTLIT(mmc_nil)));
              tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta20 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta18, tmpMeta19, _addOp);
              _size = tmpMeta20;

              _size = omc_NFSimplifyExp_simplify(threadData, _size, 0 /* false */);

              tmp22 = (modelica_boolean)isSome(_map);
              if(tmp22)
              {
                tmpMeta23 = omc_NSimGenericCall_SimIterator_subIterators(threadData, omc_Util_getOption(threadData, _map));
              }
              else
              {
                tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
                tmpMeta23 = tmpMeta21;
              }
              _sub_iter = tmpMeta23;
              tmpMeta25 = mmc_mk_box7(3, &NSimGenericCall_SimIterator_SIM__ITERATOR__RANGE__desc, _name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_range), 3))), _step, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_range), 5))), _size, _sub_iter);
              tmpMeta24 = mmc_mk_cons(tmpMeta25, _sim_iter);
              tmpMeta7 = tmpMeta24;
              goto tmp9_done;
            }
            case 1: {
              modelica_metatype tmpMeta26;
              modelica_metatype tmpMeta31;
              modelica_boolean tmp32;
              modelica_metatype tmpMeta33;
              modelica_metatype tmpMeta34;
              modelica_metatype tmpMeta35;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,8,3) == 0) goto tmp9_end;
              
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_range), 4))))) goto tmp9_end;
              {
                modelica_metatype __omcQ_24tmpVar17;
                modelica_metatype* tmp27;
                modelica_metatype tmpMeta28;
                modelica_metatype __omcQ_24tmpVar16;
                modelica_integer tmp29;
                modelica_metatype _e_loopVar = 0;
                modelica_integer tmp30;
                modelica_metatype _e;
                _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_range), 3)));
                tmp30 = 1;
                tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar17 = tmpMeta28; /* defaultValue */
                tmp27 = &__omcQ_24tmpVar17;
                while(1) {
                  tmp29 = 1;
                  if (tmp30 <= arrayLength(_e_loopVar)) {
                    _e = arrayGet(_e_loopVar, tmp30++);
                    tmp29--;
                  }
                  if (tmp29 == 0) {
                    __omcQ_24tmpVar16 = mmc_mk_integer(omc_NFExpression_integerValue(threadData, _e));
                    *tmp27 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                    tmp27 = &MMC_CDR(*tmp27);
                  } else if (tmp29 == 1) {
                    break;
                  } else {
                    goto goto_8;
                  }
                }
                *tmp27 = mmc_mk_nil();
                tmpMeta26 = __omcQ_24tmpVar17;
              }
              _lst = tmpMeta26;

              tmp32 = (modelica_boolean)isSome(_map);
              if(tmp32)
              {
                tmpMeta33 = omc_NSimGenericCall_SimIterator_subIterators(threadData, omc_Util_getOption(threadData, _map));
              }
              else
              {
                tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
                tmpMeta33 = tmpMeta31;
              }
              _sub_iter = tmpMeta33;
              tmpMeta35 = mmc_mk_box5(4, &NSimGenericCall_SimIterator_SIM__ITERATOR__LIST__desc, _name, _lst, mmc_mk_integer(listLength(_lst)), _sub_iter);
              tmpMeta34 = mmc_mk_cons(tmpMeta35, _sim_iter);
              tmpMeta7 = tmpMeta34;
              goto tmp9_done;
            }
            case 2: {
              modelica_metatype tmpMeta36;
              modelica_metatype tmpMeta37;
              
              /* Pattern matching succeeded */
              tmpMeta37 = stringAppend(_OMC_LIT15,omc_NFExpression_toString(threadData, _range));
              tmpMeta36 = mmc_mk_cons(tmpMeta37, MMC_REFSTRUCTLIT(mmc_nil));
              omc_Error_addMessage(threadData, _OMC_LIT12, tmpMeta36);
              goto goto_8;
              goto tmp9_done;
            }
            }
            goto tmp9_end;
            tmp9_end: ;
          }
          goto goto_8;
          goto_8:;
          MMC_THROW_INTERNAL();
          goto tmp9_done;
          tmp9_done:;
        }
      }
      _sim_iter = tmpMeta7;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _sim_iter;
}

DLLDirection
modelica_string omc_NSimGenericCall_SimIterator_toString_subIterString(threadData_t *threadData, modelica_metatype _sub_iter)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar19;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar18;
    modelica_integer tmp4;
    modelica_metatype _tpl_loopVar = 0;
    modelica_metatype _tpl;
    _tpl_loopVar = _sub_iter;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar19 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar19;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_tpl_loopVar)) {
        _tpl = MMC_CAR(_tpl_loopVar);
        _tpl_loopVar = MMC_CDR(_tpl_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar18 = omc_Util_tuple21(threadData, _tpl);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar18,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar19;
  }
  _str = omc_List_toString(threadData, tmpMeta1, boxvar_NFComponentRef_toString, _OMC_LIT6, _OMC_LIT16, _OMC_LIT17, _OMC_LIT18, 0 /* false */, ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NSimGenericCall_SimIterator_toString(threadData_t *threadData, modelica_metatype _iter)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iter;
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
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT19,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 2)))));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT20);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 3)))));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT21);
          tmpMeta10 = stringAppend(tmpMeta9,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 4)))));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT22);
          tmpMeta12 = stringAppend(tmpMeta11,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 5)))));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT23);
          tmpMeta14 = stringAppend(tmpMeta13,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 6)))));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT24);
          tmpMeta16 = stringAppend(tmpMeta15,omc_NSimGenericCall_SimIterator_toString_subIterString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 7)))));
          tmp1 = tmpMeta16;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta17 = stringAppend(_OMC_LIT19,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 2)))));
          tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT25);
          tmpMeta19 = stringAppend(tmpMeta18,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 3))), boxvar_intString, _OMC_LIT6, _OMC_LIT19, _OMC_LIT17, _OMC_LIT24, 1 /* true */, ((modelica_integer) 10)));
          tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT24);
          tmpMeta21 = stringAppend(tmpMeta20,omc_NSimGenericCall_SimIterator_toString_subIterString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 5)))));
          tmp1 = tmpMeta21;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NSimGenericCall_convert(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _old_call = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _old_call has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp8;
            modelica_metatype _iter_loopVar = 0;
            modelica_metatype _iter;
            _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar23;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_iter_loopVar)) {
                _iter = MMC_CAR(_iter_loopVar);
                _iter_loopVar = MMC_CDR(_iter_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar22 = omc_NSimGenericCall_SimIterator_convert(threadData, _iter);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar23;
          }
          tmpMeta9 = mmc_mk_box6(3, &SimCode_SimGenericCall_SINGLE__GENERIC__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), tmpMeta5, omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))), omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))));
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar25;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar24;
            modelica_integer tmp13;
            modelica_metatype _iter_loopVar = 0;
            modelica_metatype _iter;
            _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar25 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar25;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_iter_loopVar)) {
                _iter = MMC_CAR(_iter_loopVar);
                _iter_loopVar = MMC_CDR(_iter_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar24 = omc_NSimGenericCall_SimIterator_convert(threadData, _iter);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar25;
          }
          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp17;
            modelica_metatype _branch_loopVar = 0;
            modelica_metatype _branch;
            _branch_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar27;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_branch_loopVar)) {
                _branch = MMC_CAR(_branch_loopVar);
                _branch_loopVar = MMC_CDR(_branch_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar26 = omc_NSimGenericCall_SimBranch_convert(threadData, _branch);
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar27;
          }
          tmpMeta18 = mmc_mk_box5(4, &SimCode_SimGenericCall_IF__GENERIC__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), tmpMeta10, tmpMeta14, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar29;
            modelica_metatype* tmp20;
            modelica_metatype tmpMeta21;
            modelica_metatype __omcQ_24tmpVar28;
            modelica_integer tmp22;
            modelica_metatype _iter_loopVar = 0;
            modelica_metatype _iter;
            _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar29 = tmpMeta21; /* defaultValue */
            tmp20 = &__omcQ_24tmpVar29;
            while(1) {
              tmp22 = 1;
              if (!listEmpty(_iter_loopVar)) {
                _iter = MMC_CAR(_iter_loopVar);
                _iter_loopVar = MMC_CDR(_iter_loopVar);
                tmp22--;
              }
              if (tmp22 == 0) {
                __omcQ_24tmpVar28 = omc_NSimGenericCall_SimIterator_convert(threadData, _iter);
                *tmp20 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                tmp20 = &MMC_CDR(*tmp20);
              } else if (tmp22 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp20 = mmc_mk_nil();
            tmpMeta19 = __omcQ_24tmpVar29;
          }
          {
            modelica_metatype __omcQ_24tmpVar31;
            modelica_metatype* tmp24;
            modelica_metatype tmpMeta25;
            modelica_metatype __omcQ_24tmpVar30;
            modelica_integer tmp26;
            modelica_metatype _branch_loopVar = 0;
            modelica_metatype _branch;
            _branch_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)));
            tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar31 = tmpMeta25; /* defaultValue */
            tmp24 = &__omcQ_24tmpVar31;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_branch_loopVar)) {
                _branch = MMC_CAR(_branch_loopVar);
                _branch_loopVar = MMC_CDR(_branch_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                __omcQ_24tmpVar30 = omc_NSimGenericCall_SimBranch_convert(threadData, _branch);
                *tmp24 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                tmp24 = &MMC_CDR(*tmp24);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp24 = mmc_mk_nil();
            tmpMeta23 = __omcQ_24tmpVar31;
          }
          tmpMeta27 = mmc_mk_box5(5, &SimCode_SimGenericCall_WHEN__GENERIC__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), tmpMeta19, tmpMeta23, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta27;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          
          /* Pattern matching succeeded */
          tmpMeta29 = stringAppend(_OMC_LIT26,omc_NSimGenericCall_toString(threadData, _call));
          tmpMeta28 = mmc_mk_cons(tmpMeta29, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT12, tmpMeta28);
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
  _old_call = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _old_call;
}

DLLDirection
modelica_metatype omc_NSimGenericCall_fromIdentifier(threadData_t *threadData, modelica_metatype _ident_tpl)
{
  modelica_metatype _call = NULL;
  modelica_metatype _eqn_ptr = NULL;
  modelica_integer _index;
  modelica_boolean _resizable;
  modelica_metatype _body = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _call has no default value.
  // _eqn_ptr has no default value.
  // _index has no default value.
  // _resizable has no default value.
  // _body has no default value.
  // _eqn has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _ident_tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  _eqn_ptr = tmpMeta3;
  _resizable = tmp5  /* pattern as ty=Boolean */;
  _index = tmp7  /* pattern as ty=Integer */;

  _eqn = omc_Pointer_access(threadData, _eqn_ptr);

  { /* match expression */
    modelica_metatype tmp11_1;
    tmp11_1 = _eqn;
    {
      modelica_metatype _iters = NULL;
      volatile mmc_switch_type tmp11;
      int tmp12;
      // _iters has no default value.
      tmp11 = 0;
      for (; tmp11 < 4; tmp11++) {
        switch (MMC_SWITCH_CAST(tmp11)) {
        case 0: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,5,5) == 0) goto tmp10_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 4));
          if (listEmpty(tmpMeta13)) goto tmp10_end;
          tmpMeta14 = MMC_CAR(tmpMeta13);
          tmpMeta15 = MMC_CDR(tmpMeta13);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,4,4) == 0) goto tmp10_end;
          if (!listEmpty(tmpMeta15)) goto tmp10_end;
          
          _body = tmpMeta14;
          /* Pattern matching succeeded */
          _iters = omc_NSimGenericCall_SimIterator_fromIterator(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))));
          tmpMeta16 = mmc_mk_box5(4, &NSimGenericCall_IF__GENERIC__CALL__desc, mmc_mk_integer(_index), _iters, omc_NSimGenericCall_SimBranch_fromIfBody(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 3)))), mmc_mk_boolean(_resizable));
          tmpMeta8 = tmpMeta16;
          goto tmp10_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,5,5) == 0) goto tmp10_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 4));
          if (listEmpty(tmpMeta17)) goto tmp10_end;
          tmpMeta18 = MMC_CAR(tmpMeta17);
          tmpMeta19 = MMC_CDR(tmpMeta17);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,6,4) == 0) goto tmp10_end;
          if (!listEmpty(tmpMeta19)) goto tmp10_end;
          
          _body = tmpMeta18;
          /* Pattern matching succeeded */
          _iters = omc_NSimGenericCall_SimIterator_fromIterator(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))));
          tmpMeta20 = mmc_mk_box5(5, &NSimGenericCall_WHEN__GENERIC__CALL__desc, mmc_mk_integer(_index), _iters, omc_NSimGenericCall_SimBranch_fromWhenBody(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 3)))), mmc_mk_boolean(_resizable));
          tmpMeta8 = tmpMeta20;
          goto tmp10_done;
        }
        case 2: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,5,5) == 0) goto tmp10_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 4));
          if (listEmpty(tmpMeta21)) goto tmp10_end;
          tmpMeta22 = MMC_CAR(tmpMeta21);
          tmpMeta23 = MMC_CDR(tmpMeta21);
          if (!listEmpty(tmpMeta23)) goto tmp10_end;
          
          _body = tmpMeta22;
          /* Pattern matching succeeded */
          _iters = omc_NSimGenericCall_SimIterator_fromIterator(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))));
          tmpMeta24 = mmc_mk_box6(3, &NSimGenericCall_SINGLE__GENERIC__CALL__desc, mmc_mk_integer(_index), _iters, omc_Util_getOption(threadData, omc_NBEquation_Equation_getLHS(threadData, _body)), omc_Util_getOption(threadData, omc_NBEquation_Equation_getRHS(threadData, _body)), mmc_mk_boolean(_resizable));
          tmpMeta8 = tmpMeta24;
          goto tmp10_done;
        }
        case 3: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          tmpMeta26 = stringAppend(_OMC_LIT27,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT6));
          tmpMeta25 = mmc_mk_cons(tmpMeta26, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT12, tmpMeta25);
          goto goto_9;
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
  _call = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _call;
}

DLLDirection
modelica_string omc_NSimGenericCall_toString(threadData_t *threadData, modelica_metatype _call)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
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
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT16,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT28);
          tmpMeta7 = stringAppend(tmpMeta6,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), boxvar_NSimGenericCall_SimIterator_toString, _OMC_LIT6, _OMC_LIT19, _OMC_LIT17, _OMC_LIT24, 1 /* true */, ((modelica_integer) 0)));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT29);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT4);
          tmpMeta11 = stringAppend(tmpMeta10,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))));
          tmp1 = tmpMeta11;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta12 = stringAppend(_OMC_LIT16,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT30);
          tmpMeta14 = stringAppend(tmpMeta13,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), boxvar_NSimGenericCall_SimIterator_toString, _OMC_LIT6, _OMC_LIT19, _OMC_LIT17, _OMC_LIT24, 1 /* true */, ((modelica_integer) 0)));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT29);
          tmpMeta16 = stringAppend(tmpMeta15,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), boxvar_NSimGenericCall_SimBranch_toString, _OMC_LIT6, _OMC_LIT6, _OMC_LIT31, _OMC_LIT6, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta16;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta17 = stringAppend(_OMC_LIT16,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))));
          tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT32);
          tmpMeta19 = stringAppend(tmpMeta18,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), boxvar_NSimGenericCall_SimIterator_toString, _OMC_LIT6, _OMC_LIT19, _OMC_LIT17, _OMC_LIT24, 1 /* true */, ((modelica_integer) 0)));
          tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT29);
          tmpMeta21 = stringAppend(tmpMeta20,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), boxvar_NSimGenericCall_SimBranch_toString, _OMC_LIT6, _OMC_LIT6, _OMC_LIT31, _OMC_LIT6, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta21;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT33;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NSimGenericCall_mapShallow(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_fnptr _func)
{
  modelica_metatype _call = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_call), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))));
          _call = tmpMeta5;

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_call), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          _call = tmpMeta6;
          tmpMeta1 = _call;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar33;
            modelica_metatype* tmp9;
            modelica_metatype tmpMeta10;
            modelica_metatype __omcQ_24tmpVar32;
            modelica_integer tmp11;
            modelica_metatype _branch_loopVar = 0;
            modelica_metatype _branch;
            _branch_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)));
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar33 = tmpMeta10; /* defaultValue */
            tmp9 = &__omcQ_24tmpVar33;
            while(1) {
              tmp11 = 1;
              if (!listEmpty(_branch_loopVar)) {
                _branch = MMC_CAR(_branch_loopVar);
                _branch_loopVar = MMC_CDR(_branch_loopVar);
                tmp11--;
              }
              if (tmp11 == 0) {
                __omcQ_24tmpVar32 = omc_NSimGenericCall_SimBranch_mapShallow(threadData, _branch, ((modelica_fnptr) _func));
                *tmp9 = mmc_mk_cons(__omcQ_24tmpVar32,0);
                tmp9 = &MMC_CDR(*tmp9);
              } else if (tmp11 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp9 = mmc_mk_nil();
            tmpMeta8 = __omcQ_24tmpVar33;
          }
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_call), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[4] = tmpMeta8;
          _call = tmpMeta7;
          tmpMeta1 = _call;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar35;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar34;
            modelica_integer tmp16;
            modelica_metatype _branch_loopVar = 0;
            modelica_metatype _branch;
            _branch_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)));
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar35 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar35;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_branch_loopVar)) {
                _branch = MMC_CAR(_branch_loopVar);
                _branch_loopVar = MMC_CDR(_branch_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar34 = omc_NSimGenericCall_SimBranch_mapShallow(threadData, _branch, ((modelica_fnptr) _func));
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar34,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar35;
          }
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_call), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[4] = tmpMeta13;
          _call = tmpMeta12;
          tmpMeta1 = _call;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _call;
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
  _call = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _call;
}

