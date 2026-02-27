#include "omc_simulation_settings.h"
#include "NFEquation.h"
#define _OMC_LIT0_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ";\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,3,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "connect("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,8,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,2,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,4,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data " in "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,4,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data " loop\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,6,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,2,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "end for"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,7,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "if "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,3,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "elseif "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,7,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "end if"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,6,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "when "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,5,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "elsewhen "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,9,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "end when"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,8,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "assert("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,7,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "terminate("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,10,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "reinit("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,7,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "#UNKNOWN EQUATION#"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,18,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,0,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "NFEquation.toStringList"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,23,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,4) {&IOStream_IOStreamType_LIST__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "NFEquation.toString"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,19,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "NFEquation.Branch.toString"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,26,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data " then\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,6,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#include "util/modelica.h"

#include "NFEquation_includes.h"



DLLDirection
modelica_metatype omc_NFEquation_splitRecordEquationBranch(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbranch)
{
  modelica_metatype _branch = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _branch = __omcQ_24in_5Fbranch;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _branch;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_branch), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = omc_NFEquation_splitRecordEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 4))));
          _branch = tmpMeta5;
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
  return _branch;
}

DLLDirection
modelica_metatype omc_NFEquation_splitRecordEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Fequations)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equations = __omcQ_24in_5Fequations;
  // _lhs has no default value.
  // _rhs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_integer tmp11;
          modelica_integer tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isRecord(threadData, omc_NFType_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))))) goto tmp3_end;
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = omc_NFExpandExp_expand(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), 0 /* false */, NULL);
          _eq = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = omc_NFExpandExp_expand(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 0 /* false */, NULL);
          _eq = tmpMeta7;

          tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = omc_NFType_recordFieldCount(threadData, omc_NFType_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))));
          if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
            {
              _lhs = omc_NFExpression_nthRecordElement(threadData, _i, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

              _rhs = omc_NFExpression_nthRecordElement(threadData, _i, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));

              tmpMeta9 = mmc_mk_box6(3, &NFEquation_EQUALITY__desc, _lhs, _rhs, omc_NFExpression_typeOf(threadData, _lhs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
              tmpMeta8 = mmc_mk_cons(tmpMeta9, _equations);
              _equations = tmpMeta8;
            }
          }
          tmpMeta1 = _equations;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isRecord(threadData, omc_NFType_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))))) goto tmp3_end;
          tmpMeta13 = mmc_mk_box6(3, &NFEquation_EQUALITY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
          /* Tail recursive call */
          _eq = tmpMeta13;
          __omcQ_24in_5Fequations = _equations;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[4] = omc_NFEquation_splitRecordEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
          _eq = tmpMeta14;
          tmpMeta15 = mmc_mk_cons(_eq, _equations);
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp20;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta19; /* defaultValue */
            tmp18 = &__omcQ_24tmpVar3;
            while(1) {
              tmp20 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp20--;
              }
              if (tmp20 == 0) {
                __omcQ_24tmpVar2 = omc_NFEquation_splitRecordEquationBranch(threadData, _b);
                *tmp18 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp18 = &MMC_CDR(*tmp18);
              } else if (tmp20 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp18 = mmc_mk_nil();
            tmpMeta17 = __omcQ_24tmpVar3;
          }
          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[2] = tmpMeta17;
          _eq = tmpMeta16;
          tmpMeta21 = mmc_mk_cons(_eq, _equations);
          tmpMeta1 = tmpMeta21;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp24;
            modelica_metatype tmpMeta25;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp26;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta25; /* defaultValue */
            tmp24 = &__omcQ_24tmpVar5;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                __omcQ_24tmpVar4 = omc_NFEquation_splitRecordEquationBranch(threadData, _b);
                *tmp24 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp24 = &MMC_CDR(*tmp24);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp24 = mmc_mk_nil();
            tmpMeta23 = __omcQ_24tmpVar5;
          }
          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[2] = tmpMeta23;
          _eq = tmpMeta22;
          tmpMeta27 = mmc_mk_cons(_eq, _equations);
          tmpMeta1 = tmpMeta27;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta28;
          
          /* Pattern matching succeeded */
          tmpMeta28 = mmc_mk_cons(_eq, _equations);
          tmpMeta1 = tmpMeta28;
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
  _equations = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _equations;
}

DLLDirection
modelica_metatype omc_NFEquation_splitRecordEquations(threadData_t *threadData, modelica_metatype _equations)
{
  modelica_metatype _outEquations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEquations = tmpMeta1;
  {
    modelica_metatype _eq;
    for (tmpMeta2 = _equations; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      _outEquations = omc_NFEquation_splitRecordEquation(threadData, _eq, _outEquations);
    }
  }

  _outEquations = listReverseInPlace(_outEquations);
  _return: OMC_LABEL_UNUSED
  return _outEquations;
}

DLLDirection
modelica_boolean omc_NFEquation_isMultiLine(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_boolean _singleLine;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _singleLine has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _singleLine = tmp1;
  _return: OMC_LABEL_UNUSED
  return _singleLine;
}
modelica_metatype boxptr_NFEquation_isMultiLine(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_boolean _singleLine;
  modelica_metatype out_singleLine;
  _singleLine = omc_NFEquation_isMultiLine(threadData, _eq);
  out_singleLine = mmc_mk_icon(_singleLine);
  return out_singleLine;
}

DLLDirection
modelica_metatype omc_NFEquation_toFlatStreamList(threadData_t *threadData, modelica_metatype _eql, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_boolean _prev_multi_line;
  modelica_boolean _multi_line;
  modelica_boolean _first;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  _prev_multi_line = 0 /* false */;
  // _multi_line has no default value.
  _first = 1 /* true */;
  {
    modelica_metatype _eq;
    for (tmpMeta1 = _eql; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      _multi_line = omc_NFEquation_isMultiLine(threadData, _eq);

      if(_first)
      {
        _first = 0 /* false */;
      }
      else
      {
        if((_prev_multi_line || _multi_line))
        {
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT0);
        }
      }

      _prev_multi_line = _multi_line;

      _s = omc_NFEquation_toFlatStream(threadData, _eq, _format, _indent, _s);

      _s = omc_IOStream_append(threadData, _s, _OMC_LIT1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_NFEquation_toFlatStream(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  _s = omc_IOStream_append(threadData, _s, _indent);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT2);
          tmpMeta1 = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _format));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT2);
          tmpMeta1 = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _format));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT3);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _format));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT5);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT6);

          _s = omc_IOStream_append(threadData, _s, omc_Util_makeQuotedIdentifier(threadData, omc_NFInstNode_InstNode_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))))));

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))))
          {
            _s = omc_IOStream_append(threadData, _s, _OMC_LIT7);

            _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))), _format));
          }

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT8);

          tmpMeta5 = stringAppend(_indent,_OMC_LIT9);
          _s = omc_NFEquation_toFlatStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _format, tmpMeta5, _s);

          _s = omc_IOStream_append(threadData, _s, _indent);
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT10);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT11);

          _s = omc_NFEquation_Branch_toFlatStream(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _format, _indent, _s);

          {
            modelica_metatype _b;
            for (tmpMeta6 = listRest((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _b = MMC_CAR(tmpMeta6);
              _s = omc_IOStream_append(threadData, _s, _indent);

              _s = omc_IOStream_append(threadData, _s, _OMC_LIT12);

              _s = omc_NFEquation_Branch_toFlatStream(threadData, _b, _format, _indent, _s);
            }
          }

          _s = omc_IOStream_append(threadData, _s, _indent);
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT13);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT14);

          _s = omc_NFEquation_Branch_toFlatStream(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _format, _indent, _s);

          {
            modelica_metatype _b;
            for (tmpMeta8 = listRest((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _b = MMC_CAR(tmpMeta8);
              _s = omc_IOStream_append(threadData, _s, _indent);

              _s = omc_IOStream_append(threadData, _s, _OMC_LIT15);

              _s = omc_NFEquation_Branch_toFlatStream(threadData, _b, _format, _indent, _s);
            }
          }

          _s = omc_IOStream_append(threadData, _s, _indent);
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT16);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT17);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _format));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT5);
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT18);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _format));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT5);
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT19);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _format));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT5);
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _format));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT20);
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
  _s = tmpMeta1;

  _s = omc_NFFlatModelicaUtil_appendElementSourceComment(threadData, omc_NFEquation_source(threadData, _eq), 5, _s);
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_NFEquation_toStreamList(threadData_t *threadData, modelica_metatype _eql, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_boolean _prev_multi_line;
  modelica_boolean _multi_line;
  modelica_boolean _first;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  _prev_multi_line = 0 /* false */;
  // _multi_line has no default value.
  _first = 1 /* true */;
  {
    modelica_metatype _eq;
    for (tmpMeta1 = _eql; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      _multi_line = omc_NFEquation_isMultiLine(threadData, _eq);

      if(_first)
      {
        _first = 0 /* false */;
      }
      else
      {
        if((_prev_multi_line || _multi_line))
        {
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT0);
        }
      }

      _prev_multi_line = _multi_line;

      _s = omc_NFEquation_toStream(threadData, _eq, _indent, _s);

      _s = omc_IOStream_append(threadData, _s, _OMC_LIT1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_NFEquation_toStream(threadData_t *threadData, modelica_metatype _eq, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  _s = omc_IOStream_append(threadData, _s, _indent);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT2);
          tmpMeta1 = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT2);
          tmpMeta1 = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT3);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT5);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT6);

          _s = omc_IOStream_append(threadData, _s, omc_NFInstNode_InstNode_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))))
          {
            _s = omc_IOStream_append(threadData, _s, _OMC_LIT7);

            _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))));
          }

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT8);

          tmpMeta5 = stringAppend(_indent,_OMC_LIT9);
          _s = omc_NFEquation_toStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), tmpMeta5, _s);

          _s = omc_IOStream_append(threadData, _s, _indent);
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT10);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT11);

          _s = omc_NFEquation_Branch_toStream(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _indent, _s);

          {
            modelica_metatype _b;
            for (tmpMeta6 = listRest((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _b = MMC_CAR(tmpMeta6);
              _s = omc_IOStream_append(threadData, _s, _indent);

              _s = omc_IOStream_append(threadData, _s, _OMC_LIT12);

              _s = omc_NFEquation_Branch_toStream(threadData, _b, _indent, _s);
            }
          }

          _s = omc_IOStream_append(threadData, _s, _indent);
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT13);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT14);

          _s = omc_NFEquation_Branch_toStream(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _indent, _s);

          {
            modelica_metatype _b;
            for (tmpMeta8 = listRest((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _b = MMC_CAR(tmpMeta8);
              _s = omc_IOStream_append(threadData, _s, _indent);

              _s = omc_IOStream_append(threadData, _s, _OMC_LIT15);

              _s = omc_NFEquation_Branch_toStream(threadData, _b, _indent, _s);
            }
          }

          _s = omc_IOStream_append(threadData, _s, _indent);
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT16);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT17);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT5);
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT18);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT5);
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT19);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT5);
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT20);
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
  _s = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_string omc_NFEquation_toStringList(threadData_t *threadData, modelica_metatype _eql, modelica_string _indent)
{
  modelica_string _str = NULL;
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _s has no default value.
  _s = omc_IOStream_create(threadData, _OMC_LIT22, _OMC_LIT23);

  _s = omc_NFEquation_toStreamList(threadData, _eql, _indent, _s);

  _str = omc_IOStream_string(threadData, _s);

  omc_IOStream_delete(threadData, _s);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NFEquation_toString(threadData_t *threadData, modelica_metatype _eq, modelica_string _indent)
{
  modelica_string _str = NULL;
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _s has no default value.
  _s = omc_IOStream_create(threadData, _OMC_LIT24, _OMC_LIT23);

  _s = omc_NFEquation_toStream(threadData, _eq, _indent, _s);

  _str = omc_IOStream_string(threadData, _s);

  omc_IOStream_delete(threadData, _s);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_integer omc_NFEquation_sizeOf(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_integer _size;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _size has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_NFType_sizeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_NFType_sizeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 0 /* false */);
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_NFType_sizeOf(threadData, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), 0 /* false */);
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _size = omc_NFType_sizeOf(threadData, omc_NFExpression_typeOf(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))), 0 /* false */);
          tmp1 = (_size) * (omc_NFEquation_sizeOfList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))));
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_NFEquation_Branch_sizeOf(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFEquation_Branch_sizeOf(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
      if (++tmp4 < 7) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _size = tmp1;
  _return: OMC_LABEL_UNUSED
  return _size;
}
modelica_metatype boxptr_NFEquation_sizeOf(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_integer _size;
  modelica_metatype out_size;
  _size = omc_NFEquation_sizeOf(threadData, _eq);
  out_size = mmc_mk_icon(_size);
  return out_size;
}

DLLDirection
modelica_integer omc_NFEquation_sizeOfList(threadData_t *threadData, modelica_metatype _eqs)
{
  modelica_integer _size;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _size = ((modelica_integer) 0);
  {
    modelica_metatype _eq;
    for (tmpMeta1 = _eqs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      _size = _size + omc_NFEquation_sizeOf(threadData, _eq);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _size;
}
modelica_metatype boxptr_NFEquation_sizeOfList(threadData_t *threadData, modelica_metatype _eqs)
{
  modelica_integer _size;
  modelica_metatype out_size;
  _size = omc_NFEquation_sizeOfList(threadData, _eqs);
  out_size = mmc_mk_icon(_size);
  return out_size;
}

DLLDirection
modelica_boolean omc_NFEquation_isConnection(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_boolean _res;
  modelica_metatype _call = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _call has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,13,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _call = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_NFCall_isConnectionsOperator(threadData, _call);
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
modelica_metatype boxptr_NFEquation_isConnection(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFEquation_isConnection(threadData, _eq);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFEquation_isConnect(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_boolean _isConnect;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isConnect has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          
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
  _isConnect = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isConnect;
}
modelica_metatype boxptr_NFEquation_isConnect(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_boolean _isConnect;
  modelica_metatype out_isConnect;
  _isConnect = omc_NFEquation_isConnect(threadData, _eq);
  out_isConnect = mmc_mk_icon(_isConnect);
  return out_isConnect;
}

static modelica_metatype closure0_NFExpression_replaceIterator(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype iterator = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iteratorValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFExpression_replaceIterator(thData, $in_exp, iterator, iteratorValue);
}
DLLDirection
modelica_metatype omc_NFEquation_replaceIteratorList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feql, modelica_metatype _iterator, modelica_metatype _value)
{
  modelica_metatype _eql = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eql = __omcQ_24in_5Feql;
  tmpMeta1 = mmc_mk_box2(0, _iterator, _value);
  _eql = omc_NFEquation_mapExpList(threadData, _eql, (modelica_fnptr) mmc_mk_box2(0,closure0_NFExpression_replaceIterator,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _eql;
}

DLLDirection
modelica_boolean omc_NFEquation_containsExpList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  {
    modelica_metatype _eq;
    for (tmpMeta1 = _eql; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      if(omc_NFEquation_containsExp(threadData, _eq, ((modelica_fnptr) _func)))
      {
        _res = 1 /* true */;

        goto _return;
      }
    }
  }

  _res = 0 /* false */;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFEquation_containsExpList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFEquation_containsExpList(threadData, _eql, _func);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFEquation_containsExp(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _fn)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))))) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))))) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))))) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          _res = (isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))?mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))))):0 /* false */);

          if((!_res))
          {
            _res = omc_NFEquation_containsExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), ((modelica_fnptr) _fn));
          }
          tmp1 = _res;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          _res = 0 /* false */;

          {
            modelica_metatype _b;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _b = MMC_CAR(tmpMeta5);
              { /* match expression */
                modelica_metatype tmp8_1;
                tmp8_1 = _b;
                {
                  volatile mmc_switch_type tmp8;
                  int tmp9;
                  tmp8 = 0;
                  for (; tmp8 < 2; tmp8++) {
                    switch (MMC_SWITCH_CAST(tmp8)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,3) == 0) goto tmp7_end;
                      
                      /* Pattern matching succeeded */
                      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))))))
                      {
                        _res = 1 /* true */;

                        goto _return;
                      }

                      if(omc_NFEquation_containsExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))), ((modelica_fnptr) _fn)))
                      {
                        _res = 1 /* true */;

                        goto _return;
                      }
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
                  goto goto_2;
                  goto tmp7_done;
                  tmp7_done:;
                }
              }
              ;
            }
          }
          tmp1 = _res;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          _res = 0 /* false */;

          {
            modelica_metatype _b;
            for (tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _b = MMC_CAR(tmpMeta11);
              { /* match expression */
                modelica_metatype tmp14_1;
                tmp14_1 = _b;
                {
                  volatile mmc_switch_type tmp14;
                  int tmp15;
                  tmp14 = 0;
                  for (; tmp14 < 2; tmp14++) {
                    switch (MMC_SWITCH_CAST(tmp14)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,0,3) == 0) goto tmp13_end;
                      
                      /* Pattern matching succeeded */
                      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))))))
                      {
                        _res = 1 /* true */;

                        goto _return;
                      }

                      if(omc_NFEquation_containsExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))), ((modelica_fnptr) _fn)))
                      {
                        _res = 1 /* true */;

                        goto _return;
                      }
                      goto tmp13_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp13_done;
                    }
                    }
                    goto tmp13_end;
                    tmp13_end: ;
                  }
                  goto goto_12;
                  goto_12:;
                  goto goto_2;
                  goto tmp13_done;
                  tmp13_done:;
                }
              }
              ;
            }
          }
          tmp1 = _res;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = ((mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))))) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))))) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))))));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))))) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))));
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))));
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
modelica_metatype boxptr_NFEquation_containsExp(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _fn)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFEquation_containsExp(threadData, _eq, _fn);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFEquation_containsList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  {
    modelica_metatype _eq;
    for (tmpMeta1 = _eql; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      if(omc_NFEquation_contains(threadData, _eq, ((modelica_fnptr) _func)))
      {
        _res = 1 /* true */;

        goto _return;
      }
    }
  }

  _res = 0 /* false */;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFEquation_containsList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFEquation_containsList(threadData, _eql, _func);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFEquation_contains(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _eq) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _eq)))
  {
    _res = 1 /* true */;

    goto _return;
  }

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFEquation_containsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), ((modelica_fnptr) _func));
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _b = MMC_CAR(tmpMeta5);
              { /* match expression */
                modelica_metatype tmp8_1;
                tmp8_1 = _b;
                {
                  volatile mmc_switch_type tmp8;
                  int tmp9;
                  tmp8 = 0;
                  for (; tmp8 < 2; tmp8++) {
                    switch (MMC_SWITCH_CAST(tmp8)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,3) == 0) goto tmp7_end;
                      
                      /* Pattern matching succeeded */
                      if(omc_NFEquation_containsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))), ((modelica_fnptr) _func)))
                      {
                        _res = 1 /* true */;

                        goto _return;
                      }
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
                  goto goto_2;
                  goto tmp7_done;
                  tmp7_done:;
                }
              }
              ;
            }
          }
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _b = MMC_CAR(tmpMeta11);
              { /* match expression */
                modelica_metatype tmp14_1;
                tmp14_1 = _b;
                {
                  volatile mmc_switch_type tmp14;
                  int tmp15;
                  tmp14 = 0;
                  for (; tmp14 < 2; tmp14++) {
                    switch (MMC_SWITCH_CAST(tmp14)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,0,3) == 0) goto tmp13_end;
                      
                      /* Pattern matching succeeded */
                      if(omc_NFEquation_containsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))), ((modelica_fnptr) _func)))
                      {
                        _res = 1 /* true */;

                        goto _return;
                      }
                      goto tmp13_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp13_done;
                    }
                    }
                    goto tmp13_end;
                    tmp13_end: ;
                  }
                  goto goto_12;
                  goto_12:;
                  goto goto_2;
                  goto tmp13_done;
                  tmp13_done:;
                }
              }
              ;
            }
          }
          tmp1 = 0 /* false */;
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
modelica_metatype boxptr_NFEquation_contains(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFEquation_contains(threadData, _eq, _func);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_NFEquation_foldExp(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg)
{
  modelica_metatype _arg = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg);

          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _arg);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg);

          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _arg);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg);

          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _arg);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          _arg = omc_NFEquation_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), ((modelica_fnptr) _func), _arg);

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))))
          {
            _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))), _arg);
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _b = MMC_CAR(tmpMeta4);
              { /* match expression */
                modelica_metatype tmp7_1;
                tmp7_1 = _b;
                {
                  volatile mmc_switch_type tmp7;
                  int tmp8;
                  tmp7 = 0;
                  for (; tmp7 < 2; tmp7++) {
                    switch (MMC_SWITCH_CAST(tmp7)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,0,3) == 0) goto tmp6_end;
                      
                      /* Pattern matching succeeded */
                      _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))), _arg);

                      _arg = omc_NFEquation_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))), ((modelica_fnptr) _func), _arg);
                      goto tmp6_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp6_done;
                    }
                    }
                    goto tmp6_end;
                    tmp6_end: ;
                  }
                  goto goto_5;
                  goto_5:;
                  goto goto_1;
                  goto tmp6_done;
                  tmp6_done:;
                }
              }
              ;
            }
          }
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _b = MMC_CAR(tmpMeta10);
              { /* match expression */
                modelica_metatype tmp13_1;
                tmp13_1 = _b;
                {
                  volatile mmc_switch_type tmp13;
                  int tmp14;
                  tmp13 = 0;
                  for (; tmp13 < 2; tmp13++) {
                    switch (MMC_SWITCH_CAST(tmp13)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,0,3) == 0) goto tmp12_end;
                      
                      /* Pattern matching succeeded */
                      _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))), _arg);

                      _arg = omc_NFEquation_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))), ((modelica_fnptr) _func), _arg);
                      goto tmp12_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp12_done;
                    }
                    }
                    goto tmp12_end;
                    tmp12_end: ;
                  }
                  goto goto_11;
                  goto_11:;
                  goto goto_1;
                  goto tmp12_done;
                  tmp12_done:;
                }
              }
              ;
            }
          }
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg);

          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _arg);

          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _arg);
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg);
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg);

          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _arg);
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _arg);
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
  return _arg;
}

DLLDirection
modelica_metatype omc_NFEquation_foldExpList(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg)
{
  modelica_metatype _arg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  {
    modelica_metatype _e;
    for (tmpMeta1 = _eq; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      _arg = omc_NFEquation_foldExp(threadData, _e, ((modelica_fnptr) _func), _arg);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _arg;
}

DLLDirection
modelica_metatype omc_NFEquation_mapExpShallow(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_fnptr _func)
{
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      int tmp4;
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          tmp6 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          if(tmp6)
          {
            tmpMeta7 = _eq;
          }
          else
          {
            tmpMeta5 = mmc_mk_box6(3, &NFEquation_EQUALITY__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
            tmpMeta7 = tmpMeta5;
          }
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          tmp9 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          if(tmp9)
          {
            tmpMeta10 = _eq;
          }
          else
          {
            tmpMeta8 = mmc_mk_box6(4, &NFEquation_ARRAY__EQUALITY__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
            tmpMeta10 = tmpMeta8;
          }
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          tmp12 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          if(tmp12)
          {
            tmpMeta13 = _eq;
          }
          else
          {
            tmpMeta11 = mmc_mk_box5(5, &NFEquation_CONNECT__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))));
            tmpMeta13 = tmpMeta11;
          }
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), ((modelica_fnptr) _func));
          _eq = tmpMeta14;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp17;
            modelica_metatype tmpMeta18;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp19;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta18; /* defaultValue */
            tmp17 = &__omcQ_24tmpVar7;
            while(1) {
              tmp19 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp19--;
              }
              if (tmp19 == 0) {
                __omcQ_24tmpVar6 = omc_NFEquation_Branch_mapExp(threadData, _b, ((modelica_fnptr) _func), 0 /* false */);
                *tmp17 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp17 = &MMC_CDR(*tmp17);
              } else if (tmp19 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp17 = mmc_mk_nil();
            tmpMeta16 = __omcQ_24tmpVar7;
          }
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = tmpMeta16;
          _eq = tmpMeta15;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp22;
            modelica_metatype tmpMeta23;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp24;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta23; /* defaultValue */
            tmp22 = &__omcQ_24tmpVar9;
            while(1) {
              tmp24 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp24--;
              }
              if (tmp24 == 0) {
                __omcQ_24tmpVar8 = omc_NFEquation_Branch_mapExp(threadData, _b, ((modelica_fnptr) _func), 0 /* false */);
                *tmp22 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp22 = &MMC_CDR(*tmp22);
              } else if (tmp24 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp22 = mmc_mk_nil();
            tmpMeta21 = __omcQ_24tmpVar9;
          }
          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[2] = tmpMeta21;
          _eq = tmpMeta20;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta25;
          modelica_boolean tmp26;
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));

          _e3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
          tmp26 = (modelica_boolean)((referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))) && referenceEq(_e3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))));
          if(tmp26)
          {
            tmpMeta27 = _eq;
          }
          else
          {
            tmpMeta25 = mmc_mk_box6(9, &NFEquation_ASSERT__desc, _e1, _e2, _e3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
            tmpMeta27 = tmpMeta25;
          }
          tmpMeta1 = tmpMeta27;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta28;
          modelica_boolean tmp29;
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          tmp29 = (modelica_boolean)referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          if(tmp29)
          {
            tmpMeta30 = _eq;
          }
          else
          {
            tmpMeta28 = mmc_mk_box4(10, &NFEquation_TERMINATE__desc, _e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
            tmpMeta30 = tmpMeta28;
          }
          tmpMeta1 = tmpMeta30;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta31;
          modelica_boolean tmp32;
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          tmp32 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          if(tmp32)
          {
            tmpMeta33 = _eq;
          }
          else
          {
            tmpMeta31 = mmc_mk_box5(11, &NFEquation_REINIT__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))));
            tmpMeta33 = tmpMeta31;
          }
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta34;
          modelica_boolean tmp35;
          modelica_metatype tmpMeta36;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          tmp35 = (modelica_boolean)referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          if(tmp35)
          {
            tmpMeta36 = _eq;
          }
          else
          {
            tmpMeta34 = mmc_mk_box4(12, &NFEquation_NORETCALL__desc, _e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
            tmpMeta36 = tmpMeta34;
          }
          tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _eq = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eq;
}

DLLDirection
modelica_metatype omc_NFEquation_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_fnptr _func)
{
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      int tmp4;
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          tmp6 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          if(tmp6)
          {
            tmpMeta7 = _eq;
          }
          else
          {
            tmpMeta5 = mmc_mk_box6(3, &NFEquation_EQUALITY__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
            tmpMeta7 = tmpMeta5;
          }
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          tmp9 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          if(tmp9)
          {
            tmpMeta10 = _eq;
          }
          else
          {
            tmpMeta8 = mmc_mk_box6(4, &NFEquation_ARRAY__EQUALITY__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
            tmpMeta10 = tmpMeta8;
          }
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          tmp12 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          if(tmp12)
          {
            tmpMeta13 = _eq;
          }
          else
          {
            tmpMeta11 = mmc_mk_box5(5, &NFEquation_CONNECT__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))));
            tmpMeta13 = tmpMeta11;
          }
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp16;
            modelica_metatype tmpMeta17;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp18;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta17; /* defaultValue */
            tmp16 = &__omcQ_24tmpVar11;
            while(1) {
              tmp18 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp18--;
              }
              if (tmp18 == 0) {
                __omcQ_24tmpVar10 = omc_NFEquation_mapExp(threadData, _e, ((modelica_fnptr) _func));
                *tmp16 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp16 = &MMC_CDR(*tmp16);
              } else if (tmp18 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp16 = mmc_mk_nil();
            tmpMeta15 = __omcQ_24tmpVar11;
          }
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[4] = tmpMeta15;
          _eq = tmpMeta14;

          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[3] = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), ((modelica_fnptr) _func));
          _eq = tmpMeta19;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp22;
            modelica_metatype tmpMeta23;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp24;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta23; /* defaultValue */
            tmp22 = &__omcQ_24tmpVar13;
            while(1) {
              tmp24 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp24--;
              }
              if (tmp24 == 0) {
                __omcQ_24tmpVar12 = omc_NFEquation_Branch_mapExp(threadData, _b, ((modelica_fnptr) _func), 1 /* true */);
                *tmp22 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp22 = &MMC_CDR(*tmp22);
              } else if (tmp24 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp22 = mmc_mk_nil();
            tmpMeta21 = __omcQ_24tmpVar13;
          }
          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[2] = tmpMeta21;
          _eq = tmpMeta20;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp29;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta28; /* defaultValue */
            tmp27 = &__omcQ_24tmpVar15;
            while(1) {
              tmp29 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp29--;
              }
              if (tmp29 == 0) {
                __omcQ_24tmpVar14 = omc_NFEquation_Branch_mapExp(threadData, _b, ((modelica_fnptr) _func), 1 /* true */);
                *tmp27 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp27 = &MMC_CDR(*tmp27);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp27 = mmc_mk_nil();
            tmpMeta26 = __omcQ_24tmpVar15;
          }
          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[2] = tmpMeta26;
          _eq = tmpMeta25;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta30;
          modelica_boolean tmp31;
          modelica_metatype tmpMeta32;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));

          _e3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
          tmp31 = (modelica_boolean)((referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))) && referenceEq(_e3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))));
          if(tmp31)
          {
            tmpMeta32 = _eq;
          }
          else
          {
            tmpMeta30 = mmc_mk_box6(9, &NFEquation_ASSERT__desc, _e1, _e2, _e3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
            tmpMeta32 = tmpMeta30;
          }
          tmpMeta1 = tmpMeta32;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta33;
          modelica_boolean tmp34;
          modelica_metatype tmpMeta35;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          tmp34 = (modelica_boolean)referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          if(tmp34)
          {
            tmpMeta35 = _eq;
          }
          else
          {
            tmpMeta33 = mmc_mk_box4(10, &NFEquation_TERMINATE__desc, _e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
            tmpMeta35 = tmpMeta33;
          }
          tmpMeta1 = tmpMeta35;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta36;
          modelica_boolean tmp37;
          modelica_metatype tmpMeta38;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          tmp37 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          if(tmp37)
          {
            tmpMeta38 = _eq;
          }
          else
          {
            tmpMeta36 = mmc_mk_box5(11, &NFEquation_REINIT__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))));
            tmpMeta38 = tmpMeta36;
          }
          tmpMeta1 = tmpMeta38;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta39;
          modelica_boolean tmp40;
          modelica_metatype tmpMeta41;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          tmp40 = (modelica_boolean)referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          if(tmp40)
          {
            tmpMeta41 = _eq;
          }
          else
          {
            tmpMeta39 = mmc_mk_box4(12, &NFEquation_NORETCALL__desc, _e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
            tmpMeta41 = tmpMeta39;
          }
          tmpMeta1 = tmpMeta41;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _eq = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eq;
}

DLLDirection
modelica_metatype omc_NFEquation_mapExpList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feql, modelica_fnptr _func)
{
  modelica_metatype _eql = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eql = __omcQ_24in_5Feql;
  {
    modelica_metatype __omcQ_24tmpVar17;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar16;
    modelica_integer tmp4;
    modelica_metatype _eq_loopVar = 0;
    modelica_metatype _eq;
    _eq_loopVar = _eql;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar17 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar17;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_eq_loopVar)) {
        _eq = MMC_CAR(_eq_loopVar);
        _eq_loopVar = MMC_CDR(_eq_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar16 = omc_NFEquation_mapExp(threadData, _eq, ((modelica_fnptr) _func));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar16,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar17;
  }
  _eql = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eql;
}

DLLDirection
void omc_NFEquation_applyExpShallow(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))))
          {
            (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _b = MMC_CAR(tmpMeta4);
              { /* match expression */
                modelica_metatype tmp7_1;
                tmp7_1 = _b;
                {
                  volatile mmc_switch_type tmp7;
                  int tmp8;
                  tmp7 = 0;
                  for (; tmp7 < 2; tmp7++) {
                    switch (MMC_SWITCH_CAST(tmp7)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,0,3) == 0) goto tmp6_end;
                      
                      /* Pattern matching succeeded */
                      (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))));
                      goto tmp6_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp6_done;
                    }
                    }
                    goto tmp6_end;
                    tmp6_end: ;
                  }
                  goto goto_5;
                  goto_5:;
                  goto goto_1;
                  goto tmp6_done;
                  tmp6_done:;
                }
              }
              ;
            }
          }
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _b = MMC_CAR(tmpMeta10);
              { /* match expression */
                modelica_metatype tmp13_1;
                tmp13_1 = _b;
                {
                  volatile mmc_switch_type tmp13;
                  int tmp14;
                  tmp13 = 0;
                  for (; tmp13 < 2; tmp13++) {
                    switch (MMC_SWITCH_CAST(tmp13)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,0,3) == 0) goto tmp12_end;
                      
                      /* Pattern matching succeeded */
                      (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))));
                      goto tmp12_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp12_done;
                    }
                    }
                    goto tmp12_end;
                    tmp12_end: ;
                  }
                  goto goto_11;
                  goto_11:;
                  goto goto_1;
                  goto tmp12_done;
                  tmp12_done:;
                }
              }
              ;
            }
          }
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
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
void omc_NFEquation_applyExp(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_NFEquation_applyExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), ((modelica_fnptr) _func));

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))))
          {
            (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _b = MMC_CAR(tmpMeta4);
              { /* match expression */
                modelica_metatype tmp7_1;
                tmp7_1 = _b;
                {
                  volatile mmc_switch_type tmp7;
                  int tmp8;
                  tmp7 = 0;
                  for (; tmp7 < 2; tmp7++) {
                    switch (MMC_SWITCH_CAST(tmp7)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,0,3) == 0) goto tmp6_end;
                      
                      /* Pattern matching succeeded */
                      (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))));

                      omc_NFEquation_applyExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))), ((modelica_fnptr) _func));
                      goto tmp6_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp6_done;
                    }
                    }
                    goto tmp6_end;
                    tmp6_end: ;
                  }
                  goto goto_5;
                  goto_5:;
                  goto goto_1;
                  goto tmp6_done;
                  tmp6_done:;
                }
              }
              ;
            }
          }
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _b = MMC_CAR(tmpMeta10);
              { /* match expression */
                modelica_metatype tmp13_1;
                tmp13_1 = _b;
                {
                  volatile mmc_switch_type tmp13;
                  int tmp14;
                  tmp13 = 0;
                  for (; tmp13 < 2; tmp13++) {
                    switch (MMC_SWITCH_CAST(tmp13)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,0,3) == 0) goto tmp12_end;
                      
                      /* Pattern matching succeeded */
                      (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))));

                      omc_NFEquation_applyExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))), ((modelica_fnptr) _func));
                      goto tmp12_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp12_done;
                    }
                    }
                    goto tmp12_end;
                    tmp12_end: ;
                  }
                  goto goto_11;
                  goto_11:;
                  goto goto_1;
                  goto tmp12_done;
                  tmp12_done:;
                }
              }
              ;
            }
          }
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
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
void omc_NFEquation_applyExpList(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _e;
    for (tmpMeta1 = _eq; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      omc_NFEquation_applyExp(threadData, _e, ((modelica_fnptr) _func));
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFEquation_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_fnptr _func)
{
  modelica_metatype _eq = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 6: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp8;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar19;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar18 = omc_NFEquation_map(threadData, _e, ((modelica_fnptr) _func));
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar19;
          }
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[4] = tmpMeta5;
          _eq = tmpMeta4;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp23;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar23;
            while(1) {
              tmp23 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp23--;
              }
              if (tmp23 == 0) {
                { /* match expression */
                  modelica_metatype tmp16_1;
                  tmp16_1 = _b;
                  {
                    volatile mmc_switch_type tmp16;
                    int tmp17;
                    tmp16 = 0;
                    for (; tmp16 < 2; tmp16++) {
                      switch (MMC_SWITCH_CAST(tmp16)) {
                      case 0: {
                        modelica_metatype tmpMeta18;
                        modelica_metatype tmpMeta19;
                        if (mmc__uniontype__metarecord__typedef__equal(tmp16_1,0,3) == 0) goto tmp15_end;
                        
                        /* Pattern matching succeeded */
                        {
                          modelica_metatype __omcQ_24tmpVar21;
                          modelica_metatype* tmp20;
                          modelica_metatype tmpMeta21;
                          modelica_metatype __omcQ_24tmpVar20;
                          modelica_integer tmp22;
                          modelica_metatype _e_loopVar = 0;
                          modelica_metatype _e;
                          _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4)));
                          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
                          __omcQ_24tmpVar21 = tmpMeta21; /* defaultValue */
                          tmp20 = &__omcQ_24tmpVar21;
                          while(1) {
                            tmp22 = 1;
                            if (!listEmpty(_e_loopVar)) {
                              _e = MMC_CAR(_e_loopVar);
                              _e_loopVar = MMC_CDR(_e_loopVar);
                              tmp22--;
                            }
                            if (tmp22 == 0) {
                              __omcQ_24tmpVar20 = omc_NFEquation_map(threadData, _e, ((modelica_fnptr) _func));
                              *tmp20 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                              tmp20 = &MMC_CDR(*tmp20);
                            } else if (tmp22 == 1) {
                              break;
                            } else {
                              goto goto_14;
                            }
                          }
                          *tmp20 = mmc_mk_nil();
                          tmpMeta19 = __omcQ_24tmpVar21;
                        }
                        tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(5));
                        memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_b), 5*sizeof(modelica_metatype));
                        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[4] = tmpMeta19;
                        _b = tmpMeta18;
                        tmpMeta13 = _b;
                        goto tmp15_done;
                      }
                      case 1: {
                        
                        /* Pattern matching succeeded */
                        tmpMeta13 = _b;
                        goto tmp15_done;
                      }
                      }
                      goto tmp15_end;
                      tmp15_end: ;
                    }
                    goto goto_14;
                    goto_14:;
                    goto goto_1;
                    goto tmp15_done;
                    tmp15_done:;
                  }
                }__omcQ_24tmpVar22 = tmpMeta13;
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp23 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar23;
          }
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = tmpMeta10;
          _eq = tmpMeta9;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp26;
            modelica_metatype tmpMeta27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp38;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta27; /* defaultValue */
            tmp26 = &__omcQ_24tmpVar27;
            while(1) {
              tmp38 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp38--;
              }
              if (tmp38 == 0) {
                { /* match expression */
                  modelica_metatype tmp31_1;
                  tmp31_1 = _b;
                  {
                    volatile mmc_switch_type tmp31;
                    int tmp32;
                    tmp31 = 0;
                    for (; tmp31 < 2; tmp31++) {
                      switch (MMC_SWITCH_CAST(tmp31)) {
                      case 0: {
                        modelica_metatype tmpMeta33;
                        modelica_metatype tmpMeta34;
                        if (mmc__uniontype__metarecord__typedef__equal(tmp31_1,0,3) == 0) goto tmp30_end;
                        
                        /* Pattern matching succeeded */
                        {
                          modelica_metatype __omcQ_24tmpVar25;
                          modelica_metatype* tmp35;
                          modelica_metatype tmpMeta36;
                          modelica_metatype __omcQ_24tmpVar24;
                          modelica_integer tmp37;
                          modelica_metatype _e_loopVar = 0;
                          modelica_metatype _e;
                          _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4)));
                          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
                          __omcQ_24tmpVar25 = tmpMeta36; /* defaultValue */
                          tmp35 = &__omcQ_24tmpVar25;
                          while(1) {
                            tmp37 = 1;
                            if (!listEmpty(_e_loopVar)) {
                              _e = MMC_CAR(_e_loopVar);
                              _e_loopVar = MMC_CDR(_e_loopVar);
                              tmp37--;
                            }
                            if (tmp37 == 0) {
                              __omcQ_24tmpVar24 = omc_NFEquation_map(threadData, _e, ((modelica_fnptr) _func));
                              *tmp35 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                              tmp35 = &MMC_CDR(*tmp35);
                            } else if (tmp37 == 1) {
                              break;
                            } else {
                              goto goto_29;
                            }
                          }
                          *tmp35 = mmc_mk_nil();
                          tmpMeta34 = __omcQ_24tmpVar25;
                        }
                        tmpMeta33 = MMC_TAGPTR(mmc_alloc_words(5));
                        memcpy(MMC_UNTAGPTR(tmpMeta33), MMC_UNTAGPTR(_b), 5*sizeof(modelica_metatype));
                        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta33))[4] = tmpMeta34;
                        _b = tmpMeta33;
                        tmpMeta28 = _b;
                        goto tmp30_done;
                      }
                      case 1: {
                        
                        /* Pattern matching succeeded */
                        tmpMeta28 = _b;
                        goto tmp30_done;
                      }
                      }
                      goto tmp30_end;
                      tmp30_end: ;
                    }
                    goto goto_29;
                    goto_29:;
                    goto goto_1;
                    goto tmp30_done;
                    tmp30_done:;
                  }
                }__omcQ_24tmpVar26 = tmpMeta28;
                *tmp26 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp26 = &MMC_CDR(*tmp26);
              } else if (tmp38 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp26 = mmc_mk_nil();
            tmpMeta25 = __omcQ_24tmpVar27;
          }
          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[2] = tmpMeta25;
          _eq = tmpMeta24;
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

  _eq = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _eq) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _eq);
  _return: OMC_LABEL_UNUSED
  return _eq;
}

DLLDirection
void omc_NFEquation_apply(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 6: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _e;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _e = MMC_CAR(tmpMeta4);
              omc_NFEquation_apply(threadData, _e, ((modelica_fnptr) _func));
            }
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _b = MMC_CAR(tmpMeta6);
              { /* match expression */
                modelica_metatype tmp9_1;
                tmp9_1 = _b;
                {
                  volatile mmc_switch_type tmp9;
                  int tmp10;
                  tmp9 = 0;
                  for (; tmp9 < 2; tmp9++) {
                    switch (MMC_SWITCH_CAST(tmp9)) {
                    case 0: {
                      modelica_metatype tmpMeta11;
                      modelica_metatype tmpMeta12;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,3) == 0) goto tmp8_end;
                      
                      /* Pattern matching succeeded */
                      {
                        modelica_metatype _e;
                        for (tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
                        {
                          _e = MMC_CAR(tmpMeta11);
                          omc_NFEquation_apply(threadData, _e, ((modelica_fnptr) _func));
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
                  goto goto_1;
                  goto tmp8_done;
                  tmp8_done:;
                }
              }
              ;
            }
          }
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _b = MMC_CAR(tmpMeta14);
              { /* match expression */
                modelica_metatype tmp17_1;
                tmp17_1 = _b;
                {
                  volatile mmc_switch_type tmp17;
                  int tmp18;
                  tmp17 = 0;
                  for (; tmp17 < 2; tmp17++) {
                    switch (MMC_SWITCH_CAST(tmp17)) {
                    case 0: {
                      modelica_metatype tmpMeta19;
                      modelica_metatype tmpMeta20;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp17_1,0,3) == 0) goto tmp16_end;
                      
                      /* Pattern matching succeeded */
                      {
                        modelica_metatype _e;
                        for (tmpMeta19 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))); !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
                        {
                          _e = MMC_CAR(tmpMeta19);
                          omc_NFEquation_apply(threadData, _e, ((modelica_fnptr) _func));
                        }
                      }
                      goto tmp16_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp16_done;
                    }
                    }
                    goto tmp16_end;
                    tmp16_end: ;
                  }
                  goto goto_15;
                  goto_15:;
                  goto goto_1;
                  goto tmp16_done;
                  tmp16_done:;
                }
              }
              ;
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

  (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _eq) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _eq);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEquation_applyList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _eq;
    for (tmpMeta1 = _eql; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      omc_NFEquation_apply(threadData, _eq, ((modelica_fnptr) _func));
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFEquation_info(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_metatype _info = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _info = omc_ElementSource_getInfo(threadData, omc_NFEquation_source(threadData, _eq));
  _return: OMC_LABEL_UNUSED
  return _info;
}

DLLDirection
modelica_metatype omc_NFEquation_scope(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_metatype _scope = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scope has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)));
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)));
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
  _scope = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _scope;
}

DLLDirection
modelica_metatype omc_NFEquation_setSource(threadData_t *threadData, modelica_metatype _source, modelica_metatype __omcQ_24in_5Feq)
{
  modelica_metatype _eq = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[6] = _source;
          _eq = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[6] = _source;
          _eq = tmpMeta5;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_eq), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = _source;
          _eq = tmpMeta6;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = _source;
          _eq = tmpMeta7;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[4] = _source;
          _eq = tmpMeta8;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[4] = _source;
          _eq = tmpMeta9;
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[6] = _source;
          _eq = tmpMeta10;
          goto tmp2_done;
        }
        case 10: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[4] = _source;
          _eq = tmpMeta11;
          goto tmp2_done;
        }
        case 11: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_eq), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[5] = _source;
          _eq = tmpMeta12;
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[4] = _source;
          _eq = tmpMeta13;
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
  return _eq;
}

DLLDirection
modelica_metatype omc_NFEquation_source(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_metatype _source = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _source has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5)));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5)));
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
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
  _source = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _source;
}

DLLDirection
modelica_metatype omc_NFEquation_makeIf(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _scope, modelica_metatype _src)
{
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eq has no default value.
  tmpMeta1 = mmc_mk_box4(7, &NFEquation_IF__desc, _branches, _scope, _src);
  _eq = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eq;
}

DLLDirection
modelica_metatype omc_NFEquation_makeBranch(threadData_t *threadData, modelica_metatype _condition, modelica_metatype _body, modelica_integer _condVar)
{
  modelica_metatype _branch = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _branch has no default value.
  tmpMeta1 = mmc_mk_box4(3, &NFEquation_Branch_BRANCH__desc, _condition, mmc_mk_integer((modelica_integer)_condVar), _body);
  _branch = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _branch;
}
modelica_metatype boxptr_NFEquation_makeBranch(threadData_t *threadData, modelica_metatype _condition, modelica_metatype _body, modelica_metatype _condVar)
{
  modelica_integer tmp1;
  modelica_metatype _branch = NULL;
  tmp1 = mmc_unbox_integer(_condVar);
  _branch = omc_NFEquation_makeBranch(threadData, _condition, _body, tmp1);
  /* skip box _branch; NFEquation.Branch */
  return _branch;
}

DLLDirection
modelica_metatype omc_NFEquation_makeCrefEquality(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _rhsCref, modelica_metatype _scope, modelica_metatype _src)
{
  modelica_metatype _eq = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eq has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  _e1 = omc_NFExpression_fromCref(threadData, _lhsCref, 0 /* false */);

  _e2 = omc_NFExpression_fromCref(threadData, _rhsCref, 0 /* false */);

  _eq = omc_NFEquation_makeEquality(threadData, _e1, _e2, omc_NFExpression_typeOf(threadData, _e1), _scope, _src);
  _return: OMC_LABEL_UNUSED
  return _eq;
}

DLLDirection
modelica_metatype omc_NFEquation_makeEquality(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _ty, modelica_metatype _scope, modelica_metatype _src)
{
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eq has no default value.
  tmpMeta1 = mmc_mk_box6(3, &NFEquation_EQUALITY__desc, _lhs, _rhs, _ty, _scope, _src);
  _eq = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eq;
}

DLLDirection
void omc_NFEquation_Branch_triggerErrors(threadData_t *threadData, modelica_metatype _branch)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _branch;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_Error_addTotalMessages(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 3))));
          goto goto_1;
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
  return;
}

DLLDirection
modelica_string omc_NFEquation_Branch_toString(threadData_t *threadData, modelica_metatype _branch, modelica_string _indent)
{
  modelica_string _str = NULL;
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _s has no default value.
  _s = omc_IOStream_create(threadData, _OMC_LIT25, _OMC_LIT23);

  _s = omc_NFEquation_Branch_toStream(threadData, _branch, _indent, _s);

  _str = omc_IOStream_string(threadData, _s);

  omc_IOStream_delete(threadData, _s);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NFEquation_Branch_toFlatStream(threadData_t *threadData, modelica_metatype _branch, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _branch;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT26);
          tmpMeta6 = stringAppend(_indent,_OMC_LIT9);
          tmpMeta1 = omc_NFEquation_toFlatStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 4))), _format, tmpMeta6, _s);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _branch = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)));
          __omcQ_24in_5Fs = _s;
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
  _s = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_NFEquation_Branch_toStream(threadData_t *threadData, modelica_metatype _branch, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _branch;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT26);
          tmpMeta6 = stringAppend(_indent,_OMC_LIT9);
          tmpMeta1 = omc_NFEquation_toStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 4))), tmpMeta6, _s);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _branch = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)));
          __omcQ_24in_5Fs = _s;
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
  _s = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_integer omc_NFEquation_Branch_sizeOf(threadData_t *threadData, modelica_metatype _branch)
{
  modelica_integer _size;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _size has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _branch;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFEquation_sizeOfList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 4))));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
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
  _size = tmp1;
  _return: OMC_LABEL_UNUSED
  return _size;
}
modelica_metatype boxptr_NFEquation_Branch_sizeOf(threadData_t *threadData, modelica_metatype _branch)
{
  modelica_integer _size;
  modelica_metatype out_size;
  _size = omc_NFEquation_Branch_sizeOf(threadData, _branch);
  out_size = mmc_mk_icon(_size);
  return out_size;
}

DLLDirection
modelica_boolean omc_NFEquation_Branch_isEmpty(threadData_t *threadData, modelica_metatype _branch)
{
  modelica_boolean _empty;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _empty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _branch;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 4))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _branch = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)));
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
  _empty = tmp1;
  _return: OMC_LABEL_UNUSED
  return _empty;
}
modelica_metatype boxptr_NFEquation_Branch_isEmpty(threadData_t *threadData, modelica_metatype _branch)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_NFEquation_Branch_isEmpty(threadData, _branch);
  out_empty = mmc_mk_icon(_empty);
  return out_empty;
}

DLLDirection
modelica_metatype omc_NFEquation_Branch_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbranch, modelica_fnptr _func, modelica_boolean _mapBody)
{
  modelica_metatype _branch = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _eql = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _branch = __omcQ_24in_5Fbranch;
  // _cond has no default value.
  // _eql has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _branch;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          _cond = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2))));

          if(_mapBody)
          {
            {
              modelica_metatype __omcQ_24tmpVar29;
              modelica_metatype* tmp6;
              modelica_metatype tmpMeta7;
              modelica_metatype __omcQ_24tmpVar28;
              modelica_integer tmp8;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 4)));
              tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar29 = tmpMeta7; /* defaultValue */
              tmp6 = &__omcQ_24tmpVar29;
              while(1) {
                tmp8 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp8--;
                }
                if (tmp8 == 0) {
                  __omcQ_24tmpVar28 = omc_NFEquation_mapExp(threadData, _e, ((modelica_fnptr) _func));
                  *tmp6 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                  tmp6 = &MMC_CDR(*tmp6);
                } else if (tmp8 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp6 = mmc_mk_nil();
              tmpMeta5 = __omcQ_24tmpVar29;
            }
            _eql = tmpMeta5;
          }
          else
          {
            _eql = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 4)));
          }
          tmpMeta9 = mmc_mk_box4(3, &NFEquation_Branch_BRANCH__desc, _cond, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 3))), _eql);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_branch), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = omc_NFEquation_Branch_mapExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 2))), ((modelica_fnptr) _func), 0 /* false */);
          _branch = tmpMeta10;
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
modelica_metatype boxptr_NFEquation_Branch_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbranch, modelica_fnptr _func, modelica_metatype _mapBody)
{
  modelica_integer tmp1;
  modelica_metatype _branch = NULL;
  tmp1 = mmc_unbox_integer(_mapBody);
  _branch = omc_NFEquation_Branch_mapExp(threadData, __omcQ_24in_5Fbranch, _func, tmp1);
  /* skip box _branch; NFEquation.Branch */
  return _branch;
}

