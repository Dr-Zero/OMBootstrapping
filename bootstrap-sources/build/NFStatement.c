#include "omc_simulation_settings.h"
#include "NFStatement.h"
#define _OMC_LIT0_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ";\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " := "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "array init"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,10,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,4,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data " in "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,4,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data " loop\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,6,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "end for"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,7,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "if "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,3,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "elseif "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,7,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data " then\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,6,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "else\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,5,_OMC_LIT12_data);
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
#define _OMC_LIT18_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,2,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,1,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "terminate("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,10,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "reinit("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,7,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "while "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,6,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "end while"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,9,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "return"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,6,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "break"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,5,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "#UNKNOWN STATEMENT#"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,19,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,0,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "NFStatement.toStringList"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,24,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,4) {&IOStream_IOStreamType_LIST__desc,}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "NFStatement.toString"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,20,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#include "util/modelica.h"

#include "NFStatement_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStatement_isEqual_branchEqual(threadData_t *threadData, modelica_metatype _branch1, modelica_metatype _branch2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStatement_isEqual_branchEqual(threadData_t *threadData, modelica_metatype _branch1, modelica_metatype _branch2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_isEqual_branchEqual,2,0) {(void*) boxptr_NFStatement_isEqual_branchEqual,0}};
#define boxvar_NFStatement_isEqual_branchEqual MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_isEqual_branchEqual)

DLLDirection
modelica_boolean omc_NFStatement_isMultiLine(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _multiLine;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _multiLine has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
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
        case 12: {
          
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
  _multiLine = tmp1;
  _return: OMC_LABEL_UNUSED
  return _multiLine;
}
modelica_metatype boxptr_NFStatement_isMultiLine(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _multiLine;
  modelica_metatype out_multiLine;
  _multiLine = omc_NFStatement_isMultiLine(threadData, _stmt);
  out_multiLine = mmc_mk_icon(_multiLine);
  return out_multiLine;
}

DLLDirection
modelica_metatype omc_NFStatement_toFlatStreamList(threadData_t *threadData, modelica_metatype _stmtl, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
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
    modelica_metatype _stmt;
    for (tmpMeta1 = _stmtl; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _stmt = MMC_CAR(tmpMeta1);
      _multi_line = omc_NFStatement_isMultiLine(threadData, _stmt);

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

      _s = omc_NFStatement_toFlatStream(threadData, _stmt, _format, _indent, _s);

      _s = omc_IOStream_append(threadData, _s, _OMC_LIT1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_NFStatement_toFlatStream(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype _branches = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _body = NULL;
  modelica_boolean _first;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _branches has no default value.
  // _cond has no default value.
  // _body has no default value.
  // _first has no default value.
  _s = omc_IOStream_append(threadData, _s, _indent);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT2);
          tmpMeta1 = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _format));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT3);
          tmpMeta1 = omc_IOStream_append(threadData, _s, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

          _s = omc_IOStream_append(threadData, _s, omc_Util_makeQuotedIdentifier(threadData, omc_NFInstNode_InstNode_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))))));

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))))
          {
            _s = omc_IOStream_append(threadData, _s, _OMC_LIT5);

            _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))), _format));
          }

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT6);

          tmpMeta5 = stringAppend(_indent,_OMC_LIT7);
          _s = omc_NFStatement_toFlatStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _format, tmpMeta5, _s);

          _s = omc_IOStream_append(threadData, _s, _indent);
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT8);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _first = 1 /* true */;

          _branches = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));

          while(1)
          {
            if(!(!listEmpty(_branches))) break;
            /* Pattern-matching assignment */
            tmpMeta6 = _branches;
            if (listEmpty(tmpMeta6)) goto goto_2;
            tmpMeta7 = MMC_CAR(tmpMeta6);
            tmpMeta8 = MMC_CDR(tmpMeta6);
            tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
            tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
            _cond = tmpMeta9;
            _body = tmpMeta10;
            _branches = tmpMeta8;

            if((((!_first) && listEmpty(_branches)) && omc_NFExpression_isTrue(threadData, _cond)))
            {
              _s = omc_IOStream_append(threadData, _s, _OMC_LIT12);
            }
            else
            {
              _s = omc_IOStream_append(threadData, _s, (_first?_OMC_LIT9:_OMC_LIT10));

              _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, _cond, _format));

              _s = omc_IOStream_append(threadData, _s, _OMC_LIT11);
            }

            tmpMeta11 = stringAppend(_indent,_OMC_LIT7);
            _s = omc_NFStatement_toFlatStreamList(threadData, _body, _format, tmpMeta11, _s);

            _s = omc_IOStream_append(threadData, _s, _indent);

            _first = 0 /* false */;
          }
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT13);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          _first = 1 /* true */;

          {
            modelica_metatype _b;
            for (tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _b = MMC_CAR(tmpMeta12);
              /* Pattern-matching assignment */
              tmpMeta13 = _b;
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
              _cond = tmpMeta14;
              _body = tmpMeta15;

              _s = omc_IOStream_append(threadData, _s, (_first?_OMC_LIT14:_OMC_LIT15));

              _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, _cond, _format));

              _s = omc_IOStream_append(threadData, _s, _OMC_LIT11);

              tmpMeta16 = stringAppend(_indent,_OMC_LIT7);
              _s = omc_NFStatement_toFlatStreamList(threadData, _body, _format, tmpMeta16, _s);

              _s = omc_IOStream_append(threadData, _s, _indent);

              _first = 0 /* false */;
            }
          }
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT16);
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT17);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT18);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT18);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _format));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT19);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT20);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _format));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT19);
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT21);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT18);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _format));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT19);
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _format));
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT22);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT6);

          tmpMeta18 = stringAppend(_indent,_OMC_LIT7);
          _s = omc_NFStatement_toFlatStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _format, tmpMeta18, _s);

          _s = omc_IOStream_append(threadData, _s, _indent);
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT23);
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT24);
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT25);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT26);
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

  _s = omc_NFFlatModelicaUtil_appendElementSourceComment(threadData, omc_NFStatement_source(threadData, _stmt), 6, _s);
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_NFStatement_toStreamList(threadData_t *threadData, modelica_metatype _stmtl, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
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
    modelica_metatype _stmt;
    for (tmpMeta1 = _stmtl; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _stmt = MMC_CAR(tmpMeta1);
      _multi_line = omc_NFStatement_isMultiLine(threadData, _stmt);

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

      _s = omc_NFStatement_toStream(threadData, _stmt, _indent, _s);

      _s = omc_IOStream_append(threadData, _s, _OMC_LIT1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_NFStatement_toStream(threadData_t *threadData, modelica_metatype _stmt, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype _branches = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _body = NULL;
  modelica_boolean _first;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _branches has no default value.
  // _cond has no default value.
  // _body has no default value.
  // _first has no default value.
  _s = omc_IOStream_append(threadData, _s, _indent);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 13; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT2);
          tmpMeta1 = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT3);
          tmpMeta1 = omc_IOStream_append(threadData, _s, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

          _s = omc_IOStream_append(threadData, _s, omc_NFInstNode_InstNode_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))));

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))))
          {
            _s = omc_IOStream_append(threadData, _s, _OMC_LIT5);

            _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))))));
          }

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT6);

          tmpMeta6 = stringAppend(_indent,_OMC_LIT7);
          _s = omc_NFStatement_toStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), tmpMeta6, _s);

          _s = omc_IOStream_append(threadData, _s, _indent);
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT8);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _first = 1 /* true */;

          _branches = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));

          while(1)
          {
            if(!(!listEmpty(_branches))) break;
            /* Pattern-matching assignment */
            tmpMeta7 = _branches;
            if (listEmpty(tmpMeta7)) goto goto_2;
            tmpMeta8 = MMC_CAR(tmpMeta7);
            tmpMeta9 = MMC_CDR(tmpMeta7);
            tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
            tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
            _cond = tmpMeta10;
            _body = tmpMeta11;
            _branches = tmpMeta9;

            if((((!_first) && listEmpty(_branches)) && omc_NFExpression_isTrue(threadData, _cond)))
            {
              _s = omc_IOStream_append(threadData, _s, _OMC_LIT12);
            }
            else
            {
              _s = omc_IOStream_append(threadData, _s, (_first?_OMC_LIT9:_OMC_LIT10));

              _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, _cond));

              _s = omc_IOStream_append(threadData, _s, _OMC_LIT11);
            }

            tmpMeta12 = stringAppend(_indent,_OMC_LIT7);
            _s = omc_NFStatement_toStreamList(threadData, _body, tmpMeta12, _s);

            _s = omc_IOStream_append(threadData, _s, _indent);

            _first = 0 /* false */;
          }
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT13);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _first = 1 /* true */;

          {
            modelica_metatype _b;
            for (tmpMeta13 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
            {
              _b = MMC_CAR(tmpMeta13);
              /* Pattern-matching assignment */
              tmpMeta14 = _b;
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
              tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
              _cond = tmpMeta15;
              _body = tmpMeta16;

              _s = omc_IOStream_append(threadData, _s, (_first?_OMC_LIT14:_OMC_LIT15));

              _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, _cond));

              _s = omc_IOStream_append(threadData, _s, _OMC_LIT11);

              tmpMeta17 = stringAppend(_indent,_OMC_LIT7);
              _s = omc_NFStatement_toStreamList(threadData, _body, tmpMeta17, _s);

              _s = omc_IOStream_append(threadData, _s, _indent);

              _first = 0 /* false */;
            }
          }
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT16);
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT17);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT18);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT18);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)))));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT19);
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT20);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT19);
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT21);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT18);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))));
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT19);
          goto tmp3_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))));
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT22);

          _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT11);

          tmpMeta19 = stringAppend(_indent,_OMC_LIT7);
          _s = omc_NFStatement_toStreamList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), tmpMeta19, _s);

          _s = omc_IOStream_append(threadData, _s, _indent);
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT23);
          goto tmp3_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT24);
          goto tmp3_done;
        }
        case 11: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT25);
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_IOStream_append(threadData, _s, _OMC_LIT26);
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
modelica_string omc_NFStatement_toStringList(threadData_t *threadData, modelica_metatype _stmtl, modelica_string _indent)
{
  modelica_string _str = NULL;
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _s has no default value.
  _s = omc_IOStream_create(threadData, _OMC_LIT28, _OMC_LIT29);

  _s = omc_NFStatement_toStreamList(threadData, _stmtl, _indent, _s);

  _str = omc_IOStream_string(threadData, _s);

  omc_IOStream_delete(threadData, _s);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NFStatement_toString(threadData_t *threadData, modelica_metatype _stmt, modelica_string _indent)
{
  modelica_string _str = NULL;
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _s has no default value.
  _s = omc_IOStream_create(threadData, _OMC_LIT30, _OMC_LIT29);

  _s = omc_NFStatement_toStream(threadData, _stmt, _indent, _s);

  _str = omc_IOStream_string(threadData, _s);

  omc_IOStream_delete(threadData, _s);
  _return: OMC_LABEL_UNUSED
  return _str;
}

static modelica_metatype closure0_NFExpression_replaceIterator(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype iterator = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iteratorValue = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFExpression_replaceIterator(thData, $in_exp, iterator, iteratorValue);
}
DLLDirection
modelica_metatype omc_NFStatement_replaceIteratorList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmtl, modelica_metatype _iterator, modelica_metatype _value)
{
  modelica_metatype _stmtl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmtl = __omcQ_24in_5Fstmtl;
  tmpMeta1 = mmc_mk_box2(0, _iterator, _value);
  _stmtl = omc_NFStatement_mapExpList(threadData, _stmtl, (modelica_fnptr) mmc_mk_box2(0,closure0_NFExpression_replaceIterator,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _stmtl;
}

DLLDirection
modelica_boolean omc_NFStatement_containsList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func)
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
      if(omc_NFStatement_contains(threadData, _eq, ((modelica_fnptr) _func)))
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
modelica_metatype boxptr_NFStatement_containsList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStatement_containsList(threadData, _eql, _func);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFStatement_contains(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _fn)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), _stmt) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, _stmt)))
  {
    _res = 1 /* true */;

    goto _return;
  }

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFStatement_containsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), ((modelica_fnptr) _fn));
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _b = MMC_CAR(tmpMeta5);
              if(omc_NFStatement_containsList(threadData, omc_Util_tuple22(threadData, _b), ((modelica_fnptr) _fn)))
              {
                _res = 1 /* true */;

                goto _return;
              }
            }
          }
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _b = MMC_CAR(tmpMeta7);
              if(omc_NFStatement_containsList(threadData, omc_Util_tuple22(threadData, _b), ((modelica_fnptr) _fn)))
              {
                _res = 1 /* true */;

                goto _return;
              }
            }
          }
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFStatement_containsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), ((modelica_fnptr) _fn));
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
modelica_metatype boxptr_NFStatement_contains(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _fn)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStatement_contains(threadData, _stmt, _fn);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_NFStatement_foldExp(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg)
{
  modelica_metatype _arg = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _stmt;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg);

          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _arg);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          _arg = omc_NFStatement_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), ((modelica_fnptr) _func), _arg);

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))))
          {
            _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))), _arg);
          }
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _b = MMC_CAR(tmpMeta4);
              _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple21(threadData, _b), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple21(threadData, _b), _arg);

              _arg = omc_NFStatement_foldExpList(threadData, omc_Util_tuple22(threadData, _b), ((modelica_fnptr) _func), _arg);
            }
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _b = MMC_CAR(tmpMeta6);
              _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple21(threadData, _b), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple21(threadData, _b), _arg);

              _arg = omc_NFStatement_foldExpList(threadData, omc_Util_tuple22(threadData, _b), ((modelica_fnptr) _func), _arg);
            }
          }
          goto tmp2_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg);

          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _arg);

          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _arg);
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg);
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg);

          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _arg);
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg);
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _arg);

          _arg = omc_NFStatement_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), ((modelica_fnptr) _func), _arg);
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
modelica_metatype omc_NFStatement_foldExpList(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg)
{
  modelica_metatype _arg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  {
    modelica_metatype _s;
    for (tmpMeta1 = _stmt; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _s = MMC_CAR(tmpMeta1);
      _arg = omc_NFStatement_foldExp(threadData, _s, ((modelica_fnptr) _func), _arg);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _arg;
}

DLLDirection
modelica_metatype omc_NFStatement_mapExpShallow(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt, modelica_fnptr _func)
{
  modelica_metatype _stmt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmt = __omcQ_24in_5Fstmt;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
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
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
          tmp6 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))));
          if(tmp6)
          {
            tmpMeta7 = _stmt;
          }
          else
          {
            tmpMeta5 = mmc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))));
            tmpMeta7 = tmpMeta5;
          }
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), ((modelica_fnptr) _func));
          _stmt = tmpMeta8;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp14;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar1;
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                tmpMeta13 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple21(threadData, _b)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple21(threadData, _b)), omc_Util_tuple22(threadData, _b));
                __omcQ_24tmpVar0 = tmpMeta13;
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar1;
          }
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = tmpMeta10;
          _stmt = tmpMeta9;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp17;
            modelica_metatype tmpMeta18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp20;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta18; /* defaultValue */
            tmp17 = &__omcQ_24tmpVar3;
            while(1) {
              tmp20 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp20--;
              }
              if (tmp20 == 0) {
                tmpMeta19 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple21(threadData, _b)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple21(threadData, _b)), omc_Util_tuple22(threadData, _b));
                __omcQ_24tmpVar2 = tmpMeta19;
                *tmp17 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp17 = &MMC_CDR(*tmp17);
              } else if (tmp20 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp17 = mmc_mk_nil();
            tmpMeta16 = __omcQ_24tmpVar3;
          }
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = tmpMeta16;
          _stmt = tmpMeta15;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));

          _e3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
          tmp22 = (modelica_boolean)((referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))))) && referenceEq(_e3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)))));
          if(tmp22)
          {
            tmpMeta23 = _stmt;
          }
          else
          {
            tmpMeta21 = mmc_mk_box5(8, &NFStatement_ASSERT__desc, _e1, _e2, _e3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))));
            tmpMeta23 = tmpMeta21;
          }
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta24;
          modelica_boolean tmp25;
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          tmp25 = (modelica_boolean)referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          if(tmp25)
          {
            tmpMeta26 = _stmt;
          }
          else
          {
            tmpMeta24 = mmc_mk_box3(9, &NFStatement_TERMINATE__desc, _e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
            tmpMeta26 = tmpMeta24;
          }
          tmpMeta1 = tmpMeta26;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta27;
          modelica_boolean tmp28;
          modelica_metatype tmpMeta29;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
          tmp28 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))));
          if(tmp28)
          {
            tmpMeta29 = _stmt;
          }
          else
          {
            tmpMeta27 = mmc_mk_box4(10, &NFStatement_REINIT__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
            tmpMeta29 = tmpMeta27;
          }
          tmpMeta1 = tmpMeta29;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta30;
          modelica_boolean tmp31;
          modelica_metatype tmpMeta32;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          tmp31 = (modelica_boolean)referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          if(tmp31)
          {
            tmpMeta32 = _stmt;
          }
          else
          {
            tmpMeta30 = mmc_mk_box3(11, &NFStatement_NORETCALL__desc, _e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
            tmpMeta32 = tmpMeta30;
          }
          tmpMeta1 = tmpMeta32;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          tmpMeta33 = mmc_mk_box4(12, &NFStatement_WHILE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _stmt;
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
  _stmt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmt;
}

DLLDirection
modelica_metatype omc_NFStatement_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt, modelica_fnptr _func)
{
  modelica_metatype _stmt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmt = __omcQ_24in_5Fstmt;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
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
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
          tmp6 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))));
          if(tmp6)
          {
            tmpMeta7 = _stmt;
          }
          else
          {
            tmpMeta5 = mmc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))));
            tmpMeta7 = tmpMeta5;
          }
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[4] = omc_NFStatement_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), ((modelica_fnptr) _func));
          _stmt = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), ((modelica_fnptr) _func));
          _stmt = tmpMeta9;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype tmpMeta14;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp15;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta13; /* defaultValue */
            tmp12 = &__omcQ_24tmpVar5;
            while(1) {
              tmp15 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp15--;
              }
              if (tmp15 == 0) {
                tmpMeta14 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple21(threadData, _b)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple21(threadData, _b)), omc_NFStatement_mapExpList(threadData, omc_Util_tuple22(threadData, _b), ((modelica_fnptr) _func)));
                __omcQ_24tmpVar4 = tmpMeta14;
                *tmp12 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp12 = &MMC_CDR(*tmp12);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp12 = mmc_mk_nil();
            tmpMeta11 = __omcQ_24tmpVar5;
          }
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = tmpMeta11;
          _stmt = tmpMeta10;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp18;
            modelica_metatype tmpMeta19;
            modelica_metatype tmpMeta20;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp21;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta19; /* defaultValue */
            tmp18 = &__omcQ_24tmpVar7;
            while(1) {
              tmp21 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp21--;
              }
              if (tmp21 == 0) {
                tmpMeta20 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple21(threadData, _b)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple21(threadData, _b)), omc_NFStatement_mapExpList(threadData, omc_Util_tuple22(threadData, _b), ((modelica_fnptr) _func)));
                __omcQ_24tmpVar6 = tmpMeta20;
                *tmp18 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp18 = &MMC_CDR(*tmp18);
              } else if (tmp21 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp18 = mmc_mk_nil();
            tmpMeta17 = __omcQ_24tmpVar7;
          }
          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[2] = tmpMeta17;
          _stmt = tmpMeta16;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta22;
          modelica_boolean tmp23;
          modelica_metatype tmpMeta24;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));

          _e3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
          tmp23 = (modelica_boolean)((referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))))) && referenceEq(_e3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)))));
          if(tmp23)
          {
            tmpMeta24 = _stmt;
          }
          else
          {
            tmpMeta22 = mmc_mk_box5(8, &NFStatement_ASSERT__desc, _e1, _e2, _e3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))));
            tmpMeta24 = tmpMeta22;
          }
          tmpMeta1 = tmpMeta24;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta25;
          modelica_boolean tmp26;
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          tmp26 = (modelica_boolean)referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          if(tmp26)
          {
            tmpMeta27 = _stmt;
          }
          else
          {
            tmpMeta25 = mmc_mk_box3(9, &NFStatement_TERMINATE__desc, _e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
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
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));

          _e2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
          tmp29 = (modelica_boolean)(referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) && referenceEq(_e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))));
          if(tmp29)
          {
            tmpMeta30 = _stmt;
          }
          else
          {
            tmpMeta28 = mmc_mk_box4(10, &NFStatement_REINIT__desc, _e1, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
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
          _e1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          tmp32 = (modelica_boolean)referenceEq(_e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          if(tmp32)
          {
            tmpMeta33 = _stmt;
          }
          else
          {
            tmpMeta31 = mmc_mk_box3(11, &NFStatement_NORETCALL__desc, _e1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
            tmpMeta33 = tmpMeta31;
          }
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta34;
          
          /* Pattern matching succeeded */
          tmpMeta34 = mmc_mk_box4(12, &NFStatement_WHILE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))), omc_NFStatement_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), ((modelica_fnptr) _func)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
          tmpMeta1 = tmpMeta34;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _stmt;
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
  _stmt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmt;
}

DLLDirection
modelica_metatype omc_NFStatement_mapExpList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmtl, modelica_fnptr _func)
{
  modelica_metatype _stmtl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmtl = __omcQ_24in_5Fstmtl;
  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp4;
    modelica_metatype _s_loopVar = 0;
    modelica_metatype _s;
    _s_loopVar = _stmtl;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar9;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_s_loopVar)) {
        _s = MMC_CAR(_s_loopVar);
        _s_loopVar = MMC_CDR(_s_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar8 = omc_NFStatement_mapExp(threadData, _s, ((modelica_fnptr) _func));
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
  _stmtl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmtl;
}

DLLDirection
void omc_NFStatement_applyExp(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _stmt;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_NFStatement_applyExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), ((modelica_fnptr) _func));

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))))
          {
            (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))));
          }
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _b = MMC_CAR(tmpMeta4);
              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple21(threadData, _b)) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple21(threadData, _b));

              omc_NFStatement_applyExpList(threadData, omc_Util_tuple22(threadData, _b), ((modelica_fnptr) _func));
            }
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _b = MMC_CAR(tmpMeta6);
              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple21(threadData, _b)) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple21(threadData, _b));

              omc_NFStatement_applyExpList(threadData, omc_Util_tuple22(threadData, _b), ((modelica_fnptr) _func));
            }
          }
          goto tmp2_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));

          omc_NFStatement_applyExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), ((modelica_fnptr) _func));
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
void omc_NFStatement_applyExpList(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _s;
    for (tmpMeta1 = _stmt; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _s = MMC_CAR(tmpMeta1);
      omc_NFStatement_applyExp(threadData, _s, ((modelica_fnptr) _func));
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFStatement_fold(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg)
{
  modelica_metatype _arg = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _stmt;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 5: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _s;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _s = MMC_CAR(tmpMeta4);
              _arg = omc_NFStatement_fold(threadData, _s, ((modelica_fnptr) _func), _arg);
            }
          }
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _b = MMC_CAR(tmpMeta6);
              {
                modelica_metatype _s;
                for (tmpMeta7 = omc_Util_tuple22(threadData, _b); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
                {
                  _s = MMC_CAR(tmpMeta7);
                  _arg = omc_NFStatement_fold(threadData, _s, ((modelica_fnptr) _func), _arg);
                }
              }
            }
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _b = MMC_CAR(tmpMeta10);
              {
                modelica_metatype _s;
                for (tmpMeta11 = omc_Util_tuple22(threadData, _b); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
                {
                  _s = MMC_CAR(tmpMeta11);
                  _arg = omc_NFStatement_fold(threadData, _s, ((modelica_fnptr) _func), _arg);
                }
              }
            }
          }
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _s;
            for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _s = MMC_CAR(tmpMeta14);
              _arg = omc_NFStatement_fold(threadData, _s, ((modelica_fnptr) _func), _arg);
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

  _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _stmt, _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _stmt, _arg);
  _return: OMC_LABEL_UNUSED
  return _arg;
}

DLLDirection
modelica_metatype omc_NFStatement_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt, modelica_fnptr _func)
{
  modelica_metatype _stmt = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmt = __omcQ_24in_5Fstmt;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _stmt;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 5: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp8;
            modelica_metatype _s_loopVar = 0;
            modelica_metatype _s;
            _s_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar11;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_s_loopVar)) {
                _s = MMC_CAR(_s_loopVar);
                _s_loopVar = MMC_CDR(_s_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar10 = omc_NFStatement_map(threadData, _s, ((modelica_fnptr) _func));
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar11;
          }
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[4] = tmpMeta5;
          _stmt = tmpMeta4;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype tmpMeta13;
            modelica_metatype tmpMeta17;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp18;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar15;
            while(1) {
              tmp18 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp18--;
              }
              if (tmp18 == 0) {
                {
                  modelica_metatype __omcQ_24tmpVar13;
                  modelica_metatype* tmp14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype __omcQ_24tmpVar12;
                  modelica_integer tmp16;
                  modelica_metatype _s_loopVar = 0;
                  modelica_metatype _s;
                  _s_loopVar = omc_Util_tuple22(threadData, _b);
                  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar13 = tmpMeta15; /* defaultValue */
                  tmp14 = &__omcQ_24tmpVar13;
                  while(1) {
                    tmp16 = 1;
                    if (!listEmpty(_s_loopVar)) {
                      _s = MMC_CAR(_s_loopVar);
                      _s_loopVar = MMC_CDR(_s_loopVar);
                      tmp16--;
                    }
                    if (tmp16 == 0) {
                      __omcQ_24tmpVar12 = omc_NFStatement_map(threadData, _s, ((modelica_fnptr) _func));
                      *tmp14 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                      tmp14 = &MMC_CDR(*tmp14);
                    } else if (tmp16 == 1) {
                      break;
                    } else {
                      goto goto_1;
                    }
                  }
                  *tmp14 = mmc_mk_nil();
                  tmpMeta13 = __omcQ_24tmpVar13;
                }
                tmpMeta17 = mmc_mk_box2(0, omc_Util_tuple21(threadData, _b), tmpMeta13);
                __omcQ_24tmpVar14 = tmpMeta17;
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp18 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar15;
          }
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = tmpMeta10;
          _stmt = tmpMeta9;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp21;
            modelica_metatype tmpMeta22;
            modelica_metatype tmpMeta23;
            modelica_metatype tmpMeta27;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp28;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
            tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta22; /* defaultValue */
            tmp21 = &__omcQ_24tmpVar19;
            while(1) {
              tmp28 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp28--;
              }
              if (tmp28 == 0) {
                {
                  modelica_metatype __omcQ_24tmpVar17;
                  modelica_metatype* tmp24;
                  modelica_metatype tmpMeta25;
                  modelica_metatype __omcQ_24tmpVar16;
                  modelica_integer tmp26;
                  modelica_metatype _s_loopVar = 0;
                  modelica_metatype _s;
                  _s_loopVar = omc_Util_tuple22(threadData, _b);
                  tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar17 = tmpMeta25; /* defaultValue */
                  tmp24 = &__omcQ_24tmpVar17;
                  while(1) {
                    tmp26 = 1;
                    if (!listEmpty(_s_loopVar)) {
                      _s = MMC_CAR(_s_loopVar);
                      _s_loopVar = MMC_CDR(_s_loopVar);
                      tmp26--;
                    }
                    if (tmp26 == 0) {
                      __omcQ_24tmpVar16 = omc_NFStatement_map(threadData, _s, ((modelica_fnptr) _func));
                      *tmp24 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                      tmp24 = &MMC_CDR(*tmp24);
                    } else if (tmp26 == 1) {
                      break;
                    } else {
                      goto goto_1;
                    }
                  }
                  *tmp24 = mmc_mk_nil();
                  tmpMeta23 = __omcQ_24tmpVar17;
                }
                tmpMeta27 = mmc_mk_box2(0, omc_Util_tuple21(threadData, _b), tmpMeta23);
                __omcQ_24tmpVar18 = tmpMeta27;
                *tmp21 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp21 = &MMC_CDR(*tmp21);
              } else if (tmp28 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp21 = mmc_mk_nil();
            tmpMeta20 = __omcQ_24tmpVar19;
          }
          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[2] = tmpMeta20;
          _stmt = tmpMeta19;
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp31;
            modelica_metatype tmpMeta32;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp33;
            modelica_metatype _s_loopVar = 0;
            modelica_metatype _s;
            _s_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)));
            tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta32; /* defaultValue */
            tmp31 = &__omcQ_24tmpVar21;
            while(1) {
              tmp33 = 1;
              if (!listEmpty(_s_loopVar)) {
                _s = MMC_CAR(_s_loopVar);
                _s_loopVar = MMC_CDR(_s_loopVar);
                tmp33--;
              }
              if (tmp33 == 0) {
                __omcQ_24tmpVar20 = omc_NFStatement_map(threadData, _s, ((modelica_fnptr) _func));
                *tmp31 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp31 = &MMC_CDR(*tmp31);
              } else if (tmp33 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp31 = mmc_mk_nil();
            tmpMeta30 = __omcQ_24tmpVar21;
          }
          tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_stmt), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[3] = tmpMeta30;
          _stmt = tmpMeta29;
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

  _stmt = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _stmt) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _stmt);
  _return: OMC_LABEL_UNUSED
  return _stmt;
}

DLLDirection
void omc_NFStatement_apply(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _stmt;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 5: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _e;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _e = MMC_CAR(tmpMeta4);
              omc_NFStatement_apply(threadData, _e, ((modelica_fnptr) _func));
            }
          }
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _b = MMC_CAR(tmpMeta6);
              {
                modelica_metatype _e;
                for (tmpMeta7 = omc_Util_tuple22(threadData, _b); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
                {
                  _e = MMC_CAR(tmpMeta7);
                  omc_NFStatement_apply(threadData, _e, ((modelica_fnptr) _func));
                }
              }
            }
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _b = MMC_CAR(tmpMeta10);
              {
                modelica_metatype _e;
                for (tmpMeta11 = omc_Util_tuple22(threadData, _b); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
                {
                  _e = MMC_CAR(tmpMeta11);
                  omc_NFStatement_apply(threadData, _e, ((modelica_fnptr) _func));
                }
              }
            }
          }
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _e;
            for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _e = MMC_CAR(tmpMeta14);
              omc_NFStatement_apply(threadData, _e, ((modelica_fnptr) _func));
            }
          }
          goto tmp2_done;
        }
        case 15: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _e;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _e = MMC_CAR(tmpMeta16);
              omc_NFStatement_apply(threadData, _e, ((modelica_fnptr) _func));
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

  (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _stmt) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _stmt);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFStatement_info(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_metatype _info = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _info = omc_ElementSource_getInfo(threadData, omc_NFStatement_source(threadData, _stmt));
  _return: OMC_LABEL_UNUSED
  return _info;
}

DLLDirection
modelica_metatype omc_NFStatement_setSource(threadData_t *threadData, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fstmt)
{
  modelica_metatype _stmt = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmt = __omcQ_24in_5Fstmt;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _stmt;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_stmt), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[5] = _source;
          _stmt = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_stmt), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = _source;
          _stmt = tmpMeta5;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[6] = _source;
          _stmt = tmpMeta6;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = _source;
          _stmt = tmpMeta7;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = _source;
          _stmt = tmpMeta8;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_stmt), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[5] = _source;
          _stmt = tmpMeta9;
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _source;
          _stmt = tmpMeta10;
          goto tmp2_done;
        }
        case 11: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = _source;
          _stmt = tmpMeta11;
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_stmt), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[4] = _source;
          _stmt = tmpMeta12;
          goto tmp2_done;
        }
        case 13: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_stmt), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = _source;
          _stmt = tmpMeta13;
          goto tmp2_done;
        }
        case 14: {
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_stmt), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = _source;
          _stmt = tmpMeta14;
          goto tmp2_done;
        }
        case 15: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = _source;
          _stmt = tmpMeta15;
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
  return _stmt;
}

DLLDirection
modelica_metatype omc_NFStatement_source(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_metatype _source = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _source has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 6)));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5)));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)));
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)));
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)));
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)));
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
          goto tmp3_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)));
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
modelica_metatype omc_NFStatement_makeIf(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _src)
{
  modelica_metatype _stmt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmt has no default value.
  tmpMeta1 = mmc_mk_box3(6, &NFStatement_IF__desc, _branches, _src);
  _stmt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmt;
}

DLLDirection
modelica_boolean omc_NFStatement_isReturn(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,1) == 0) goto tmp3_end;
          
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFStatement_isReturn(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStatement_isReturn(threadData, _stmt);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFStatement_isFor(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,5) == 0) goto tmp3_end;
          
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFStatement_isFor(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStatement_isFor(threadData, _stmt);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFStatement_isAssignment(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFStatement_isAssignment(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFStatement_isAssignment(threadData, _stmt);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_NFStatement_makeAssignment(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _ty, modelica_metatype _src)
{
  modelica_metatype _stmt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmt has no default value.
  tmpMeta1 = mmc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, _lhs, _rhs, _ty, _src);
  _stmt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmt;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFStatement_isEqual_branchEqual(threadData_t *threadData, modelica_metatype _branch1, modelica_metatype _branch2)
{
  modelica_boolean _b;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _b1 = NULL;
  modelica_metatype _b2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _b1 has no default value.
  // _b2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _branch1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _e1 = tmpMeta2;
  _b1 = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _branch2;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  _e2 = tmpMeta5;
  _b2 = tmpMeta6;

  _b = (omc_NFExpression_isEqual(threadData, _e1, _e2) && omc_List_isEqualOnTrue(threadData, _b1, _b2, boxvar_NFStatement_isEqual));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFStatement_isEqual_branchEqual(threadData_t *threadData, modelica_metatype _branch1, modelica_metatype _branch2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFStatement_isEqual_branchEqual(threadData, _branch1, _branch2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFStatement_isEqual(threadData_t *threadData, modelica_metatype _stmt1, modelica_metatype _stmt2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _stmt1;
    tmp4_2 = _stmt2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 14; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2)))) && omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 3)))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2)))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,5) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((omc_NFInstNode_InstNode_nameEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2)))) && omc_Util_optionEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 3))), boxvar_NFExpression_isEqual)) && omc_List_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 4))), boxvar_NFStatement_isEqual));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2))), boxvar_NFStatement_isEqual_branchEqual);
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2))), boxvar_NFStatement_isEqual_branchEqual);
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2)))) && omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 3))))) && omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 4)))));
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2))));
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2)))) && omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 3)))));
          goto tmp3_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2))));
          goto tmp3_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,9,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2)))) && omc_List_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 3))), boxvar_NFStatement_isEqual));
          goto tmp3_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,10,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 11: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,11,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,12,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt2), 2))), boxvar_NFStatement_isEqual);
          goto tmp3_done;
        }
        case 13: {
          
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
modelica_metatype boxptr_NFStatement_isEqual(threadData_t *threadData, modelica_metatype _stmt1, modelica_metatype _stmt2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFStatement_isEqual(threadData, _stmt1, _stmt2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NFStatement_hash(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_integer _hash;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hash = stringHashDjb2(omc_NFStatement_toString(threadData, _stmt, _OMC_LIT27));
  _return: OMC_LABEL_UNUSED
  return _hash;
}
modelica_metatype boxptr_NFStatement_hash(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_integer _hash;
  modelica_metatype out_hash;
  _hash = omc_NFStatement_hash(threadData, _stmt);
  out_hash = mmc_mk_icon(_hash);
  return out_hash;
}

DLLDirection
modelica_metatype omc_NFStatement_filterDiscrete(threadData_t *threadData, modelica_metatype _stmts, modelica_metatype __omcQ_24in_5Fout_5Fstmts)
{
  modelica_metatype _out_stmts = NULL;
  modelica_metatype _stmt = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _out_stmts = __omcQ_24in_5Fout_5Fstmts;
  // _stmt has no default value.
  // _rest has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmts;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,5) == 0) goto tmp3_end;
          
          _stmt = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[4] = omc_NFStatement_filterDiscrete(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), tmpMeta9);
          _stmt = tmpMeta8;

          tmp11 = (modelica_boolean)(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)))) == ((modelica_integer) 0));
          if(tmp11)
          {
            tmpMeta12 = _out_stmts;
          }
          else
          {
            tmpMeta10 = mmc_mk_cons(_stmt, _out_stmts);
            tmpMeta12 = tmpMeta10;
          }
          _out_stmts = tmpMeta12;
          /* Tail recursive call */
          _stmts = _rest;
          __omcQ_24in_5Fout_5Fstmts = _out_stmts;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta22;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_1);
          tmpMeta14 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,3,2) == 0) goto tmp3_end;
          
          _stmt = tmpMeta13;
          _rest = tmpMeta14;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp17;
            modelica_metatype tmpMeta18;
            modelica_metatype tmpMeta19;
            modelica_metatype tmpMeta20;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp21;
            modelica_metatype _tpl_loopVar = 0;
            modelica_metatype _tpl;
            _tpl_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta18; /* defaultValue */
            tmp17 = &__omcQ_24tmpVar23;
            while(1) {
              tmp21 = 1;
              if (!listEmpty(_tpl_loopVar)) {
                _tpl = MMC_CAR(_tpl_loopVar);
                _tpl_loopVar = MMC_CDR(_tpl_loopVar);
                tmp21--;
              }
              if (tmp21 == 0) {
                tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
                tmpMeta20 = mmc_mk_box2(0, omc_Util_tuple21(threadData, _tpl), omc_NFStatement_filterDiscrete(threadData, omc_Util_tuple22(threadData, _tpl), tmpMeta19));
                __omcQ_24tmpVar22 = tmpMeta20;
                *tmp17 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp17 = &MMC_CDR(*tmp17);
              } else if (tmp21 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp17 = mmc_mk_nil();
            tmpMeta16 = __omcQ_24tmpVar23;
          }
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = tmpMeta16;
          _stmt = tmpMeta15;
          tmpMeta22 = mmc_mk_cons(_stmt, _out_stmts);
          /* Tail recursive call */
          _stmts = _rest;
          __omcQ_24in_5Fout_5Fstmts = tmpMeta22;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta23 = MMC_CAR(tmp4_1);
          tmpMeta24 = MMC_CDR(tmp4_1);
          _stmt = tmpMeta23;
          _rest = tmpMeta24;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFStatement_isDiscrete(threadData, _stmt)) goto tmp3_end;
          /* Tail recursive call */
          _stmts = _rest;
          __omcQ_24in_5Fout_5Fstmts = _out_stmts;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmp4_1);
          tmpMeta26 = MMC_CDR(tmp4_1);
          _stmt = tmpMeta25;
          _rest = tmpMeta26;
          /* Pattern matching succeeded */
          tmpMeta27 = mmc_mk_cons(_stmt, _out_stmts);
          /* Tail recursive call */
          _stmts = _rest;
          __omcQ_24in_5Fout_5Fstmts = tmpMeta27;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = listReverse(_out_stmts);
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
  _out_stmts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_stmts;
}

DLLDirection
modelica_boolean omc_NFStatement_isDiscrete(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = 0 /* false */;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFType_isDiscrete(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFType_isDiscrete(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_any(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), boxvar_NFStatement_isDiscrete);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _branch = MMC_CAR(tmpMeta5);
              _b = omc_List_any(threadData, omc_Util_tuple22(threadData, _branch), boxvar_NFStatement_isDiscrete);

              if(_b)
              {
                break;
              }
            }
          }
          tmp1 = _b;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_any(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), boxvar_NFStatement_isDiscrete);
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFStatement_isDiscrete(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFStatement_isDiscrete(threadData, _stmt);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

