#include "omc_simulation_settings.h"
#include "NFExpressionIterator.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,6) {&NFExpressionIterator_NONE__ITERATOR__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "NFExpressionIterator.fromExp got unexpandable expression `"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,58,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "`"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFExpressionIterator.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,87,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4_6,1.770032059e9);
#define _OMC_LIT4_6 MMC_REFREALLIT(_OMC_LIT_STRUCT4_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(107)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(108)),MMC_IMMEDIATE(MMC_TAGFIXNUM(60)),_OMC_LIT4_6}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "[ARRY] array iterator:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,23,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "[REAP] repeat iterator:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,24,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "[SCAL] scalar iterator: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,24,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "[EACH] each iterator: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,22,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "[NONE] no iterator.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,20,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#include "util/modelica.h"

#include "NFExpressionIterator_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpressionIterator_flattenArray__impl(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Farrays);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpressionIterator_flattenArray__impl,2,0) {(void*) boxptr_NFExpressionIterator_flattenArray__impl,0}};
#define boxvar_NFExpressionIterator_flattenArray__impl MMC_REFSTRUCTLIT(boxvar_lit_NFExpressionIterator_flattenArray__impl)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpressionIterator_flattenArray(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Farrays);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpressionIterator_flattenArray,2,0) {(void*) boxptr_NFExpressionIterator_flattenArray,0}};
#define boxvar_NFExpressionIterator_flattenArray MMC_REFSTRUCTLIT(boxvar_lit_NFExpressionIterator_flattenArray)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpressionIterator_makeArrayIterator(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpressionIterator_makeArrayIterator,2,0) {(void*) boxptr_NFExpressionIterator_makeArrayIterator,0}};
#define boxvar_NFExpressionIterator_makeArrayIterator MMC_REFSTRUCTLIT(boxvar_lit_NFExpressionIterator_makeArrayIterator)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFExpressionIterator_isSubscriptedArrayCall_is__sub__call(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _trySimplify);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFExpressionIterator_isSubscriptedArrayCall_is__sub__call(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _trySimplify);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpressionIterator_isSubscriptedArrayCall_is__sub__call,2,0) {(void*) boxptr_NFExpressionIterator_isSubscriptedArrayCall_is__sub__call,0}};
#define boxvar_NFExpressionIterator_isSubscriptedArrayCall_is__sub__call MMC_REFSTRUCTLIT(boxvar_lit_NFExpressionIterator_isSubscriptedArrayCall_is__sub__call)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpressionIterator_flattenArray__impl(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Farrays)
{
  modelica_metatype _arrays = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arrays = __omcQ_24in_5Farrays;
  if(omc_NFExpression_isVector(threadData, _exp))
  {
    tmpMeta1 = mmc_mk_cons(omc_NFExpression_arrayElements(threadData, _exp), _arrays);
    _arrays = tmpMeta1;
  }
  else
  {
    {
      modelica_metatype _e;
      for (tmpMeta2 = omc_NFExpression_arrayElements(threadData, _exp), tmp5 = arrayLength(tmpMeta2), tmp4 = 1; tmp4 <= tmp5; tmp4++)
      {
        _e = arrayGet(tmpMeta2,tmp4);
        _arrays = omc_NFExpressionIterator_flattenArray__impl(threadData, _e, _arrays);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _arrays;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpressionIterator_flattenArray(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Farrays)
{
  modelica_metatype _arrays = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arrays = __omcQ_24in_5Farrays;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _arrays = omc_NFExpressionIterator_flattenArray__impl(threadData, _exp, tmpMeta1);

  _arrays = listReverseInPlace(_arrays);

  while(1)
  {
    if(!((!listEmpty(_arrays)) && (arrayLength(listHead(_arrays)) == ((modelica_integer) 0)))) break;
    _arrays = listRest(_arrays);
  }
  _return: OMC_LABEL_UNUSED
  return _arrays;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpressionIterator_makeArrayIterator(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_metatype _iterator = NULL;
  modelica_metatype _arr = NULL;
  modelica_metatype _arrays = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _iterator has no default value.
  // _arr has no default value.
  // _arrays has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _arrays = omc_NFExpressionIterator_flattenArray(threadData, _exp, tmpMeta1);

  if(listEmpty(_arrays))
  {
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta3 = mmc_mk_box4(3, &NFExpressionIterator_ARRAY__ITERATOR__desc, listArray(tmpMeta2), mmc_mk_integer(((modelica_integer) 1)), _arrays);
    _iterator = tmpMeta3;
  }
  else
  {
    tmpMeta4 = mmc_mk_box4(3, &NFExpressionIterator_ARRAY__ITERATOR__desc, listHead(_arrays), mmc_mk_integer(((modelica_integer) 1)), listRest(_arrays));
    _iterator = tmpMeta4;
  }
  _return: OMC_LABEL_UNUSED
  return _iterator;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFExpressionIterator_isSubscriptedArrayCall_is__sub__call(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _trySimplify)
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
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,26,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((!_trySimplify) || omc_NFExpression_isCall(threadData, omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), 0 /* false */)));
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFExpressionIterator_isSubscriptedArrayCall_is__sub__call(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _trySimplify)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_trySimplify);
  _res = omc_NFExpressionIterator_isSubscriptedArrayCall_is__sub__call(threadData, _exp, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFExpressionIterator_isSubscriptedArrayCall(threadData_t *threadData, modelica_metatype _iterator, modelica_boolean _trySimplify)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iterator;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpressionIterator_isSubscriptedArrayCall_is__sub__call(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2))), ((modelica_integer) 1)), _trySimplify);
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
modelica_metatype boxptr_NFExpressionIterator_isSubscriptedArrayCall(threadData_t *threadData, modelica_metatype _iterator, modelica_metatype _trySimplify)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_trySimplify);
  _b = omc_NFExpressionIterator_isSubscriptedArrayCall(threadData, _iterator, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NFExpressionIterator_toList(threadData_t *threadData, modelica_metatype _iterator)
{
  modelica_metatype _expl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _iter = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _expl = tmpMeta1;
  // _iter has no default value.
  // _exp has no default value.
  _iter = _iterator;

  while(1)
  {
    if(!omc_NFExpressionIterator_hasNext(threadData, _iter)) break;
    _iter = omc_NFExpressionIterator_next(threadData, _iter ,&_exp);

    tmpMeta2 = mmc_mk_cons(_exp, _expl);
    _expl = tmpMeta2;
  }

  _expl = listReverse(_expl);
  _return: OMC_LABEL_UNUSED
  return _expl;
}

DLLDirection
modelica_metatype omc_NFExpressionIterator_nextOpt(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fiterator, modelica_metatype *out_nextExp)
{
  modelica_metatype _iterator = NULL;
  modelica_metatype _nextExp = NULL;
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _iterator = __omcQ_24in_5Fiterator;
  // _nextExp has no default value.
  // _exp has no default value.
  if(omc_NFExpressionIterator_hasNext(threadData, _iterator))
  {
    _iterator = omc_NFExpressionIterator_next(threadData, _iterator ,&_exp);

    _nextExp = mmc_mk_some(_exp);
  }
  else
  {
    _nextExp = mmc_mk_none();
  }
  _return: OMC_LABEL_UNUSED
  if (out_nextExp) { *out_nextExp = _nextExp; }
  return _iterator;
}

DLLDirection
modelica_metatype omc_NFExpressionIterator_next(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fiterator, modelica_metatype *out_nextExp)
{
  modelica_metatype _iterator = NULL;
  modelica_metatype _nextExp = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _iterator = __omcQ_24in_5Fiterator;
  // _nextExp has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iterator;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _arr = NULL;
      modelica_metatype _next = NULL;
      modelica_metatype _arrs = NULL;
      int tmp4;
      // _rest has no default value.
      // _arr has no default value.
      // _next has no default value.
      // _arrs has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          _next = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3)))));

          if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3)))) >= arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2))))))
          {
            _arrs = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 4)));

            while(1)
            {
              if(!((!listEmpty(_arrs)) && (arrayLength(listHead(_arrs)) == ((modelica_integer) 0)))) break;
              _arrs = listRest(_arrs);
            }

            if(listEmpty(_arrs))
            {
              tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta7 = mmc_mk_box4(3, &NFExpressionIterator_ARRAY__ITERATOR__desc, listArray(tmpMeta5), mmc_mk_integer(((modelica_integer) 1)), tmpMeta6);
              _iterator = tmpMeta7;
            }
            else
            {
              tmpMeta8 = mmc_mk_box4(3, &NFExpressionIterator_ARRAY__ITERATOR__desc, listHead(_arrs), mmc_mk_integer(((modelica_integer) 1)), listRest(_arrs));
              _iterator = tmpMeta8;
            }
          }
          else
          {
            tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_iterator), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3)))));
            _iterator = tmpMeta9;
          }
          tmpMeta[0+0] = _iterator;
          tmpMeta[0+1] = _next;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT0;
          tmpMeta[0+1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _iterator;
          tmpMeta[0+1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)));
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _rest = tmpMeta10;
          _arr = tmpMeta11;
          /* Pattern matching succeeded */
          if((!listEmpty(_rest)))
          {
            /* Pattern-matching assignment */
            tmpMeta12 = _rest;
            if (listEmpty(tmpMeta12)) goto goto_2;
            tmpMeta13 = MMC_CAR(tmpMeta12);
            tmpMeta14 = MMC_CDR(tmpMeta12);
            _next = tmpMeta13;
            _rest = tmpMeta14;
          }
          else
          {
            /* Pattern-matching assignment */
            tmpMeta15 = _arr;
            if (listEmpty(tmpMeta15)) goto goto_2;
            tmpMeta16 = MMC_CAR(tmpMeta15);
            tmpMeta17 = MMC_CDR(tmpMeta15);
            _next = tmpMeta16;
            _rest = tmpMeta17;
          }
          tmpMeta18 = mmc_mk_box3(7, &NFExpressionIterator_REPEAT__ITERATOR__desc, _rest, _arr);
          tmpMeta[0+0] = tmpMeta18;
          tmpMeta[0+1] = _next;
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
  _iterator = tmpMeta[0+0];
  _nextExp = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_nextExp) { *out_nextExp = _nextExp; }
  return _iterator;
}

DLLDirection
modelica_boolean omc_NFExpressionIterator_hasNext(threadData_t *threadData, modelica_metatype _iterator)
{
  modelica_boolean _hasNext;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasNext has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iterator;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3)))) <= arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 7: {
          
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
  _hasNext = tmp1;
  _return: OMC_LABEL_UNUSED
  return _hasNext;
}
modelica_metatype boxptr_NFExpressionIterator_hasNext(threadData_t *threadData, modelica_metatype _iterator)
{
  modelica_boolean _hasNext;
  modelica_metatype out_hasNext;
  _hasNext = omc_NFExpressionIterator_hasNext(threadData, _iterator);
  out_hasNext = mmc_mk_icon(_hasNext);
  return out_hasNext;
}

DLLDirection
modelica_metatype omc_NFExpressionIterator_fromBinding(threadData_t *threadData, modelica_metatype _binding)
{
  modelica_metatype _iterator = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _iterator has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _binding;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,9) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (2 != tmp7) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(5, &NFExpressionIterator_EACH__ITERATOR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 2))));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,9) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpressionIterator_fromExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 2))), 0 /* false */);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box2(5, &NFExpressionIterator_EACH__ITERATOR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 2))));
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
  _iterator = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _iterator;
}

DLLDirection
modelica_metatype omc_NFExpressionIterator_fromExpOpt(threadData_t *threadData, modelica_metatype _optExp)
{
  modelica_metatype _iterator = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _iterator has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _optExp;
    {
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _exp = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpressionIterator_fromExp(threadData, _exp, 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT0;
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
  _iterator = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _iterator;
}

DLLDirection
modelica_metatype omc_NFExpressionIterator_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _backend)
{
  modelica_metatype _iterator = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _iterator has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _e = NULL;
      modelica_boolean _expanded;
      int tmp4;
      // _e has no default value.
      // _expanded has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 11: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpandExp_expand(threadData, _exp, _backend ,&_expanded);

          if((!_expanded))
          {
            tmpMeta5 = stringAppend(_OMC_LIT1,omc_NFExpression_toString(threadData, _exp));
            tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT2);
            omc_Error_assertion(threadData, 0 /* false */, tmpMeta6, _OMC_LIT4);
          }
          tmpMeta1 = omc_NFExpressionIterator_makeArrayIterator(threadData, _e);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpandExp_expandCref(threadData, _exp, _backend, NULL);
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = _e;
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 2; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,8,3) == 0) goto tmp9_end;
                  
                  /* Pattern matching succeeded */
                  /* Tail recursive call */
                  _exp = _e;
                  goto _tailrecursive;
                  /* TODO: Make sure any eventual dead code below is never generated */
                  goto tmp9_done;
                }
                case 1: {
                  modelica_metatype tmpMeta12;
                  
                  /* Pattern matching succeeded */
                  tmpMeta12 = mmc_mk_box2(4, &NFExpressionIterator_SCALAR__ITERATOR__desc, _e);
                  tmpMeta7 = tmpMeta12;
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
          }tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpandExp_expand(threadData, _exp, _backend ,&_expanded);
          tmp16 = (modelica_boolean)_expanded;
          if(tmp16)
          {
            tmp14 = (modelica_boolean)omc_NFExpression_isEqual(threadData, _e, _exp);
            if(tmp14)
            {
              tmpMeta13 = mmc_mk_box2(4, &NFExpressionIterator_SCALAR__ITERATOR__desc, _exp);
              tmpMeta15 = tmpMeta13;
            }
            else
            {
              /* Tail recursive call */
              _exp = _e;
              goto _tailrecursive;
              /* TODO: Make sure any eventual dead code below is never generated */
            }
            tmpMeta17 = tmpMeta15;
          }
          else
          {
            tmpMeta17 = _OMC_LIT0;
          }
          tmpMeta1 = tmpMeta17;
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
  _iterator = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _iterator;
}
modelica_metatype boxptr_NFExpressionIterator_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _backend)
{
  modelica_integer tmp1;
  modelica_metatype _iterator = NULL;
  tmp1 = mmc_unbox_integer(_backend);
  _iterator = omc_NFExpressionIterator_fromExp(threadData, _exp, tmp1);
  /* skip box _iterator; NFExpressionIterator */
  return _iterator;
}

static modelica_metatype closure0_Array_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype inArray)
{
  modelica_fnptr inPrintFunc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string inNameStr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_string inBeginStr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_string inDelimitStr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_string inEndStr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype inPrintEmpty = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  modelica_metatype maxLength = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),7));
  return boxptr_Array_toString(thData, inArray, inPrintFunc, inNameStr, inBeginStr, inDelimitStr, inEndStr, inPrintEmpty, maxLength);
}
DLLDirection
modelica_string omc_NFExpressionIterator_toString(threadData_t *threadData, modelica_metatype _iter)
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
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box7(0, boxvar_NFExpression_toString, _OMC_LIT5, _OMC_LIT6, _OMC_LIT7, _OMC_LIT8, mmc_mk_boolean(0 /* false */), mmc_mk_integer(((modelica_integer) 0)));
          tmp1 = omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 4))), (modelica_fnptr) mmc_mk_box2(0,closure0_Array_toString,tmpMeta5), _OMC_LIT9, _OMC_LIT5, _OMC_LIT10, _OMC_LIT5, 1 /* true */, ((modelica_integer) 0));
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT11,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 3))), boxvar_NFExpression_toString, _OMC_LIT5, _OMC_LIT6, _OMC_LIT7, _OMC_LIT8, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta6;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT12,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 2)))));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT10);
          tmp1 = tmpMeta8;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT13,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 2)))));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT10);
          tmp1 = tmpMeta10;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
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

