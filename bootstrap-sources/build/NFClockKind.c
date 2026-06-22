#include "omc_simulation_settings.h"
#include "NFClockKind.h"
#define _OMC_LIT0_data "Clock("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,6,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "kind"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,4,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "clock"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,5,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "type"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,4,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "inferred"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,8,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "rational"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,8,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "intervalCounter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,15,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "resolution"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,10,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "real"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,4,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "interval"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,8,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "event"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,5,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "condition"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,9,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "startInterval"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,13,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "solver"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,6,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "c"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,1,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "solverMethod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,12,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,0,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "INFERRED_CLOCK("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,15,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "RATIONAL_CLOCK("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,15,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "REAL_CLOCK("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,11,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "EVENT_CLOCK("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,12,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "SOLVER_CLOCK("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,13,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,3) {&DAE_ClockKind_INFERRED__CLOCK__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Clock"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,5,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,3,5) {&Absyn_ComponentRef_CREF__IDENT__desc,_OMC_LIT25,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#include "util/modelica.h"

#include "NFClockKind_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFClockKind_compare_compareInt(threadData_t *threadData, modelica_metatype _kind);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFClockKind_compare_compareInt(threadData_t *threadData, modelica_metatype _kind);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_compare_compareInt,2,0) {(void*) boxptr_NFClockKind_compare_compareInt,0}};
#define boxvar_NFClockKind_compare_compareInt MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_compare_compareInt)

DLLDirection
modelica_integer omc_NFClockKind_hashContinue(threadData_t *threadData, modelica_metatype _clk, modelica_integer __omcQ_24in_5Fhash)
{
  modelica_integer _hash;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hash = __omcQ_24in_5Fhash;
  _hash = stringHashDjb2Continue(_OMC_LIT0, _hash);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clk;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _hash + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _hash = omc_NFExpression_hashContinue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2))), _hash);

          _hash = stringHashDjb2Continue(_OMC_LIT1, _hash);
          tmp1 = omc_NFExpression_hashContinue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 3))), _hash);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_hashContinue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2))), _hash);
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          _hash = omc_NFExpression_hashContinue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2))), _hash);

          _hash = stringHashDjb2Continue(_OMC_LIT1, _hash);
          tmp1 = omc_NFExpression_hashContinue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 3))), _hash);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          _hash = omc_NFExpression_hashContinue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2))), _hash);

          _hash = stringHashDjb2Continue(_OMC_LIT1, _hash);
          tmp1 = omc_NFExpression_hashContinue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 3))), _hash);
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
  _hash = tmp1;

  _hash = stringHashDjb2Continue(_OMC_LIT2, _hash);
  _return: OMC_LABEL_UNUSED
  return _hash;
}
modelica_metatype boxptr_NFClockKind_hashContinue(threadData_t *threadData, modelica_metatype _clk, modelica_metatype __omcQ_24in_5Fhash)
{
  modelica_integer tmp1;
  modelica_integer _hash;
  modelica_metatype out_hash;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fhash);
  _hash = omc_NFClockKind_hashContinue(threadData, _clk, tmp1);
  out_hash = mmc_mk_icon(_hash);
  return out_hash;
}

DLLDirection
modelica_metatype omc_NFClockKind_toJSON(threadData_t *threadData, modelica_metatype _clk)
{
  modelica_metatype _json = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_emptyListObject(threadData);
  _json = omc_JSON_addPair(threadData, _OMC_LIT3, omc_JSON_makeString(threadData, _OMC_LIT4), _json);

  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _clk;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT5, omc_JSON_makeString(threadData, _OMC_LIT6), _json);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT5, omc_JSON_makeString(threadData, _OMC_LIT7), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT8, omc_NFExpression_toJSON(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2)))), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT9, omc_NFExpression_toJSON(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 3)))), _json);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT5, omc_JSON_makeString(threadData, _OMC_LIT10), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT11, omc_NFExpression_toJSON(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2)))), _json);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT5, omc_JSON_makeString(threadData, _OMC_LIT12), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT13, omc_NFExpression_toJSON(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2)))), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT14, omc_NFExpression_toJSON(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 3)))), _json);
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT5, omc_JSON_makeString(threadData, _OMC_LIT15), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT16, omc_NFExpression_toJSON(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2)))), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT17, omc_NFExpression_toJSON(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 3)))), _json);
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
modelica_string omc_NFClockKind_toFlatString(threadData_t *threadData, modelica_metatype _ck, modelica_metatype _format)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ck;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      int tmp4;
      // _e1 has no default value.
      // _e2 has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT18;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta5;
          _e2 = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(omc_NFExpression_toFlatString(threadData, _e1, _format),_OMC_LIT1);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFExpression_toFlatString(threadData, _e2, _format));
          tmp1 = tmpMeta8;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _e1 = tmpMeta9;
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_toFlatString(threadData, _e1, _format);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta10;
          _e2 = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = stringAppend(omc_NFExpression_toFlatString(threadData, _e1, _format),_OMC_LIT1);
          tmpMeta13 = stringAppend(tmpMeta12,omc_NFExpression_toFlatString(threadData, _e2, _format));
          tmp1 = tmpMeta13;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta14;
          _e2 = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta16 = stringAppend(omc_NFExpression_toFlatString(threadData, _e1, _format),_OMC_LIT1);
          tmpMeta17 = stringAppend(tmpMeta16,omc_NFExpression_toFlatString(threadData, _e2, _format));
          tmp1 = tmpMeta17;
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

  tmpMeta18 = stringAppend(_OMC_LIT0,_str);
  tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT2);
  _str = tmpMeta19;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NFClockKind_toString(threadData_t *threadData, modelica_metatype _ck)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ck;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      int tmp4;
      // _e1 has no default value.
      // _e2 has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT18;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta5;
          _e2 = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(omc_NFExpression_toString(threadData, _e1),_OMC_LIT1);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFExpression_toString(threadData, _e2));
          tmp1 = tmpMeta8;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _e1 = tmpMeta9;
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_toString(threadData, _e1);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta10;
          _e2 = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = stringAppend(omc_NFExpression_toString(threadData, _e1),_OMC_LIT1);
          tmpMeta13 = stringAppend(tmpMeta12,omc_NFExpression_toString(threadData, _e2));
          tmp1 = tmpMeta13;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta14;
          _e2 = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta16 = stringAppend(omc_NFExpression_toString(threadData, _e1),_OMC_LIT1);
          tmpMeta17 = stringAppend(tmpMeta16,omc_NFExpression_toString(threadData, _e2));
          tmp1 = tmpMeta17;
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

  tmpMeta18 = stringAppend(_OMC_LIT0,_str);
  tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT2);
  _str = tmpMeta19;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NFClockKind_toDebugString(threadData_t *threadData, modelica_metatype _ick)
{
  modelica_string _ock = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ock has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ick;
    {
      modelica_metatype _i = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _c = NULL;
      modelica_metatype _si = NULL;
      modelica_metatype _sm = NULL;
      int tmp4;
      // _i has no default value.
      // _r has no default value.
      // _c has no default value.
      // _si has no default value.
      // _sm has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT19,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ick), 2))))));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT2);
          tmp1 = tmpMeta6;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _i = tmpMeta7;
          _r = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT20,omc_NFExpression_toString(threadData, _i));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT1);
          tmpMeta11 = stringAppend(tmpMeta10,omc_NFExpression_toString(threadData, _r));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT2);
          tmp1 = tmpMeta12;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _i = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = stringAppend(_OMC_LIT21,omc_NFExpression_toString(threadData, _i));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT2);
          tmp1 = tmpMeta15;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _c = tmpMeta16;
          _si = tmpMeta17;
          /* Pattern matching succeeded */
          tmpMeta18 = stringAppend(_OMC_LIT22,omc_NFExpression_toString(threadData, _c));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT1);
          tmpMeta20 = stringAppend(tmpMeta19,omc_NFExpression_toString(threadData, _si));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT2);
          tmp1 = tmpMeta21;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _c = tmpMeta22;
          _sm = tmpMeta23;
          /* Pattern matching succeeded */
          tmpMeta24 = stringAppend(_OMC_LIT23,omc_NFExpression_toString(threadData, _c));
          tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT1);
          tmpMeta26 = stringAppend(tmpMeta25,omc_NFExpression_toString(threadData, _sm));
          tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT2);
          tmp1 = tmpMeta27;
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
  _ock = tmp1;
  _return: OMC_LABEL_UNUSED
  return _ock;
}

DLLDirection
modelica_metatype omc_NFClockKind_toDAE(threadData_t *threadData, modelica_metatype _ick)
{
  modelica_metatype _ock = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ock has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ick;
    {
      modelica_metatype _i = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _c = NULL;
      modelica_metatype _si = NULL;
      modelica_metatype _sm = NULL;
      int tmp4;
      // _i has no default value.
      // _r has no default value.
      // _c has no default value.
      // _si has no default value.
      // _sm has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT24;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _i = tmpMeta5;
          _r = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box3(4, &DAE_ClockKind_RATIONAL__CLOCK__desc, omc_NFExpression_toDAE(threadData, _i, 0 /* false */), omc_NFExpression_toDAE(threadData, _r, 0 /* false */));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _i = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box2(5, &DAE_ClockKind_REAL__CLOCK__desc, omc_NFExpression_toDAE(threadData, _i, 0 /* false */));
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _c = tmpMeta10;
          _si = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box3(6, &DAE_ClockKind_EVENT__CLOCK__desc, omc_NFExpression_toDAE(threadData, _c, 0 /* false */), omc_NFExpression_toDAE(threadData, _si, 0 /* false */));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _c = tmpMeta13;
          _sm = tmpMeta14;
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box3(7, &DAE_ClockKind_SOLVER__CLOCK__desc, omc_NFExpression_toDAE(threadData, _c, 0 /* false */), omc_NFExpression_toDAE(threadData, _sm, 0 /* false */));
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
  _ock = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ock;
}

DLLDirection
modelica_metatype omc_NFClockKind_toAbsyn(threadData_t *threadData, modelica_metatype _clk)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _args has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clk;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(omc_NFExpression_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2)))), mmc_mk_cons(omc_NFExpression_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 3)))), MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(omc_NFExpression_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2)))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(omc_NFExpression_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2)))), mmc_mk_cons(omc_NFExpression_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 3)))), MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(omc_NFExpression_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 2)))), mmc_mk_cons(omc_NFExpression_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clk), 3)))), MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta9;
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
  _args = tmpMeta1;

  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _exp = omc_AbsynUtil_makeCall(threadData, _OMC_LIT26, _args, tmpMeta10);
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFClockKind_mapFoldExpShallow(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg)
{
  modelica_metatype _outCk = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype _e4 = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCk has no default value.
  _arg = __omcQ_24in_5Farg;
  // _e1 has no default value.
  // _e2 has no default value.
  // _e3 has no default value.
  // _e4 has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta5;
          _e2 = tmpMeta6;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_mapFoldShallow(threadData, _e1, ((modelica_fnptr) _func), _arg ,&_arg);

          _e4 = omc_NFExpression_mapFoldShallow(threadData, _e2, ((modelica_fnptr) _func), _arg ,&_arg);
          tmp8 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp8)
          {
            tmpMeta9 = _ck;
          }
          else
          {
            tmpMeta7 = mmc_mk_box3(4, &NFClockKind_RATIONAL__CLOCK__desc, _e3, _e4);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _e1 = tmpMeta10;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_mapFoldShallow(threadData, _e1, ((modelica_fnptr) _func), _arg ,&_arg);
          tmp12 = (modelica_boolean)referenceEq(_e1, _e3);
          if(tmp12)
          {
            tmpMeta13 = _ck;
          }
          else
          {
            tmpMeta11 = mmc_mk_box2(5, &NFClockKind_REAL__CLOCK__desc, _e3);
            tmpMeta13 = tmpMeta11;
          }
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta14;
          _e2 = tmpMeta15;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_mapFoldShallow(threadData, _e1, ((modelica_fnptr) _func), _arg ,&_arg);

          _e4 = omc_NFExpression_mapFoldShallow(threadData, _e2, ((modelica_fnptr) _func), _arg ,&_arg);
          tmp17 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp17)
          {
            tmpMeta18 = _ck;
          }
          else
          {
            tmpMeta16 = mmc_mk_box3(6, &NFClockKind_EVENT__CLOCK__desc, _e3, _e4);
            tmpMeta18 = tmpMeta16;
          }
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta19;
          _e2 = tmpMeta20;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_mapFoldShallow(threadData, _e1, ((modelica_fnptr) _func), _arg ,&_arg);

          _e4 = omc_NFExpression_mapFoldShallow(threadData, _e2, ((modelica_fnptr) _func), _arg ,&_arg);
          tmp22 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp22)
          {
            tmpMeta23 = _ck;
          }
          else
          {
            tmpMeta21 = mmc_mk_box3(7, &NFClockKind_SOLVER__CLOCK__desc, _e3, _e4);
            tmpMeta23 = tmpMeta21;
          }
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ck;
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
  _outCk = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_arg) { *out_arg = _arg; }
  return _outCk;
}

DLLDirection
modelica_metatype omc_NFClockKind_mapFoldExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg)
{
  modelica_metatype _outCk = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype _e4 = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCk has no default value.
  _arg = __omcQ_24in_5Farg;
  // _e1 has no default value.
  // _e2 has no default value.
  // _e3 has no default value.
  // _e4 has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta5;
          _e2 = tmpMeta6;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_mapFold(threadData, _e1, ((modelica_fnptr) _func), _arg ,&_arg);

          _e4 = omc_NFExpression_mapFold(threadData, _e2, ((modelica_fnptr) _func), _arg ,&_arg);
          tmp8 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp8)
          {
            tmpMeta9 = _ck;
          }
          else
          {
            tmpMeta7 = mmc_mk_box3(4, &NFClockKind_RATIONAL__CLOCK__desc, _e3, _e4);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _e1 = tmpMeta10;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_mapFold(threadData, _e1, ((modelica_fnptr) _func), _arg ,&_arg);
          tmp12 = (modelica_boolean)referenceEq(_e1, _e3);
          if(tmp12)
          {
            tmpMeta13 = _ck;
          }
          else
          {
            tmpMeta11 = mmc_mk_box2(5, &NFClockKind_REAL__CLOCK__desc, _e3);
            tmpMeta13 = tmpMeta11;
          }
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta14;
          _e2 = tmpMeta15;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_mapFold(threadData, _e1, ((modelica_fnptr) _func), _arg ,&_arg);

          _e4 = omc_NFExpression_mapFold(threadData, _e2, ((modelica_fnptr) _func), _arg ,&_arg);
          tmp17 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp17)
          {
            tmpMeta18 = _ck;
          }
          else
          {
            tmpMeta16 = mmc_mk_box3(6, &NFClockKind_EVENT__CLOCK__desc, _e3, _e4);
            tmpMeta18 = tmpMeta16;
          }
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta19;
          _e2 = tmpMeta20;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_mapFold(threadData, _e1, ((modelica_fnptr) _func), _arg ,&_arg);

          _e4 = omc_NFExpression_mapFold(threadData, _e2, ((modelica_fnptr) _func), _arg ,&_arg);
          tmp22 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp22)
          {
            tmpMeta23 = _ck;
          }
          else
          {
            tmpMeta21 = mmc_mk_box3(7, &NFClockKind_SOLVER__CLOCK__desc, _e3, _e4);
            tmpMeta23 = tmpMeta21;
          }
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ck;
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
  _outCk = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_arg) { *out_arg = _arg; }
  return _outCk;
}

DLLDirection
modelica_metatype omc_NFClockKind_mapExpShallow(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func)
{
  modelica_metatype _outCk = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype _e4 = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCk has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _e3 has no default value.
  // _e4 has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta5;
          _e2 = tmpMeta6;
          /* Pattern matching succeeded */
          _e3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e1);

          _e4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e2);
          tmp8 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp8)
          {
            tmpMeta9 = _ck;
          }
          else
          {
            tmpMeta7 = mmc_mk_box3(4, &NFClockKind_RATIONAL__CLOCK__desc, _e3, _e4);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _e1 = tmpMeta10;
          /* Pattern matching succeeded */
          _e3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e1);
          tmp12 = (modelica_boolean)referenceEq(_e1, _e3);
          if(tmp12)
          {
            tmpMeta13 = _ck;
          }
          else
          {
            tmpMeta11 = mmc_mk_box2(5, &NFClockKind_REAL__CLOCK__desc, _e3);
            tmpMeta13 = tmpMeta11;
          }
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta14;
          _e2 = tmpMeta15;
          /* Pattern matching succeeded */
          _e3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e1);

          _e4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e2);
          tmp17 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp17)
          {
            tmpMeta18 = _ck;
          }
          else
          {
            tmpMeta16 = mmc_mk_box3(6, &NFClockKind_EVENT__CLOCK__desc, _e3, _e4);
            tmpMeta18 = tmpMeta16;
          }
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta19;
          _e2 = tmpMeta20;
          /* Pattern matching succeeded */
          _e3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e1);

          _e4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e2);
          tmp22 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp22)
          {
            tmpMeta23 = _ck;
          }
          else
          {
            tmpMeta21 = mmc_mk_box3(7, &NFClockKind_SOLVER__CLOCK__desc, _e3, _e4);
            tmpMeta23 = tmpMeta21;
          }
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ck;
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
  _outCk = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outCk;
}

DLLDirection
modelica_metatype omc_NFClockKind_mapExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func)
{
  modelica_metatype _outCk = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype _e4 = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCk has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _e3 has no default value.
  // _e4 has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta5;
          _e2 = tmpMeta6;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_map(threadData, _e1, ((modelica_fnptr) _func));

          _e4 = omc_NFExpression_map(threadData, _e2, ((modelica_fnptr) _func));
          tmp8 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp8)
          {
            tmpMeta9 = _ck;
          }
          else
          {
            tmpMeta7 = mmc_mk_box3(4, &NFClockKind_RATIONAL__CLOCK__desc, _e3, _e4);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _e1 = tmpMeta10;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_map(threadData, _e1, ((modelica_fnptr) _func));
          tmp12 = (modelica_boolean)referenceEq(_e1, _e3);
          if(tmp12)
          {
            tmpMeta13 = _ck;
          }
          else
          {
            tmpMeta11 = mmc_mk_box2(5, &NFClockKind_REAL__CLOCK__desc, _e3);
            tmpMeta13 = tmpMeta11;
          }
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta14;
          _e2 = tmpMeta15;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_map(threadData, _e1, ((modelica_fnptr) _func));

          _e4 = omc_NFExpression_map(threadData, _e2, ((modelica_fnptr) _func));
          tmp17 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp17)
          {
            tmpMeta18 = _ck;
          }
          else
          {
            tmpMeta16 = mmc_mk_box3(6, &NFClockKind_EVENT__CLOCK__desc, _e3, _e4);
            tmpMeta18 = tmpMeta16;
          }
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta19;
          _e2 = tmpMeta20;
          /* Pattern matching succeeded */
          _e3 = omc_NFExpression_map(threadData, _e1, ((modelica_fnptr) _func));

          _e4 = omc_NFExpression_map(threadData, _e2, ((modelica_fnptr) _func));
          tmp22 = (modelica_boolean)(referenceEq(_e1, _e3) && referenceEq(_e2, _e4));
          if(tmp22)
          {
            tmpMeta23 = _ck;
          }
          else
          {
            tmpMeta21 = mmc_mk_box3(7, &NFClockKind_SOLVER__CLOCK__desc, _e3, _e4);
            tmpMeta23 = tmpMeta21;
          }
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ck;
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
  _outCk = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outCk;
}

DLLDirection
modelica_metatype omc_NFClockKind_foldExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func, modelica_metatype _arg)
{
  modelica_metatype _result = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          _result = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func), _arg);
          tmpMeta1 = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))), ((modelica_fnptr) _func), _result);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func), _arg);
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          _result = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func), _arg);
          tmpMeta1 = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))), ((modelica_fnptr) _func), _result);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          _result = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func), _arg);
          tmpMeta1 = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))), ((modelica_fnptr) _func), _result);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _arg;
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

DLLDirection
void omc_NFClockKind_applyExpShallow(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _ck;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))));
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))));
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))));
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))));
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
  return;
}

DLLDirection
void omc_NFClockKind_applyExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _ck;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func));

          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))), ((modelica_fnptr) _func));
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func));
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func));

          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))), ((modelica_fnptr) _func));
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func));

          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))), ((modelica_fnptr) _func));
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
  return;
}

DLLDirection
modelica_boolean omc_NFClockKind_containsExpShallow(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))))) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2)))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))))) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))))) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))))));
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFClockKind_containsExpShallow(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFClockKind_containsExpShallow(threadData, _ck, _func);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFClockKind_containsExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ck;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func)) || omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))), ((modelica_fnptr) _func)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func)) || omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))), ((modelica_fnptr) _func)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 2))), ((modelica_fnptr) _func)) || omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck), 3))), ((modelica_fnptr) _func)));
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFClockKind_containsExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFClockKind_containsExp(threadData, _ck, _func);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFClockKind_compare_compareInt(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer _i;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _kind;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 3);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 4);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 5);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFClockKind_compare_compareInt(threadData_t *threadData, modelica_metatype _kind)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NFClockKind_compare_compareInt(threadData, _kind);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_integer omc_NFClockKind_compare(threadData_t *threadData, modelica_metatype _ck1, modelica_metatype _ck2)
{
  modelica_integer _comp;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _ck1;
    tmp4_2 = _ck2;
    {
      modelica_metatype _i1 = NULL;
      modelica_metatype _r1 = NULL;
      modelica_metatype _c1 = NULL;
      modelica_metatype _si1 = NULL;
      modelica_metatype _sm1 = NULL;
      modelica_metatype _i2 = NULL;
      modelica_metatype _r2 = NULL;
      modelica_metatype _c2 = NULL;
      modelica_metatype _si2 = NULL;
      modelica_metatype _sm2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1 has no default value.
      // _r1 has no default value.
      // _c1 has no default value.
      // _si1 has no default value.
      // _sm1 has no default value.
      // _i2 has no default value.
      // _r2 has no default value.
      // _c2 has no default value.
      // _si2 has no default value.
      // _sm2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_Util_intCompare(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck1), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ck2), 2)))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _i1 = tmpMeta6;
          _r1 = tmpMeta7;
          _i2 = tmpMeta8;
          _r2 = tmpMeta9;
          /* Pattern matching succeeded */
          _comp = omc_NFExpression_compare(threadData, _i1, _i2);

          if((_comp == ((modelica_integer) 0)))
          {
            _comp = omc_NFExpression_compare(threadData, _r1, _r2);
          }
          tmp1 = _comp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _i1 = tmpMeta10;
          _i2 = tmpMeta11;
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_compare(threadData, _i1, _i2);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _c1 = tmpMeta12;
          _si1 = tmpMeta13;
          _c2 = tmpMeta14;
          _si2 = tmpMeta15;
          /* Pattern matching succeeded */
          _comp = omc_NFExpression_compare(threadData, _c1, _c2);

          if((_comp == ((modelica_integer) 0)))
          {
            _comp = omc_NFExpression_compare(threadData, _si1, _si2);
          }
          tmp1 = _comp;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,2) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _c1 = tmpMeta16;
          _sm2 = tmpMeta17;
          _c2 = tmpMeta18;
          _sm1 = tmpMeta19;
          /* Pattern matching succeeded */
          _comp = omc_NFExpression_compare(threadData, _c1, _c2);

          if((_comp == ((modelica_integer) 0)))
          {
            _comp = omc_NFExpression_compare(threadData, _sm1, _sm2);
          }
          tmp1 = _comp;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = ((omc_NFClockKind_compare_compareInt(threadData, _ck1) < omc_NFClockKind_compare_compareInt(threadData, _ck2))?((modelica_integer) -1):((modelica_integer) 1));
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
  _comp = tmp1;
  _return: OMC_LABEL_UNUSED
  return _comp;
}
modelica_metatype boxptr_NFClockKind_compare(threadData_t *threadData, modelica_metatype _ck1, modelica_metatype _ck2)
{
  modelica_integer _comp;
  modelica_metatype out_comp;
  _comp = omc_NFClockKind_compare(threadData, _ck1, _ck2);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

DLLDirection
modelica_boolean omc_NFClockKind_isInferred(threadData_t *threadData, modelica_metatype _ck)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ck;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
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
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFClockKind_isInferred(threadData_t *threadData, modelica_metatype _ck)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFClockKind_isInferred(threadData, _ck);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

