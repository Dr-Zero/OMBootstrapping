#include "omc_simulation_settings.h"
#include "NFRangeIterator.h"
#define _OMC_LIT0_data "NFRangeIterator.hasNext got invalid range "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,42,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFRangeIterator.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,82,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2_6,1.770032059e9);
#define _OMC_LIT2_6 MMC_REFREALLIT(_OMC_LIT_STRUCT2_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(248)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(249)),MMC_IMMEDIATE(MMC_TAGFIXNUM(61)),_OMC_LIT2_6}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "NFRangeIterator.next got invalid range "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,39,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4_6,1.770032059e9);
#define _OMC_LIT4_6 MMC_REFREALLIT(_OMC_LIT_STRUCT4_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(229)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(230)),MMC_IMMEDIATE(MMC_TAGFIXNUM(61)),_OMC_LIT4_6}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,6) {&NFExpression_BOOLEAN__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,6) {&NFExpression_BOOLEAN__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,1) {_OMC_LIT6,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,1) {_OMC_LIT5,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "NFRangeIterator.fromDim got unknown dim"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,39,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10_6,1.770032059e9);
#define _OMC_LIT10_6 MMC_REFREALLIT(_OMC_LIT_STRUCT10_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(187)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(187)),MMC_IMMEDIATE(MMC_TAGFIXNUM(87)),_OMC_LIT10_6}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT11,1.0);
#define _OMC_LIT11 MMC_REFREALLIT(_OMC_LIT_STRUCT11)
#include "util/modelica.h"

#include "NFRangeIterator_includes.h"



DLLDirection
modelica_metatype omc_NFRangeIterator_fold(threadData_t *threadData, modelica_metatype _iterator, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg)
{
  modelica_metatype _arg = NULL;
  modelica_metatype _iter = NULL;
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  _iter = _iterator;
  // _exp has no default value.
  while(1)
  {
    if(!omc_NFRangeIterator_hasNext(threadData, _iter)) break;
    _iter = omc_NFRangeIterator_next(threadData, _iter ,&_exp);

    _arg = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _exp, _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _exp, _arg);
  }
  _return: OMC_LABEL_UNUSED
  return _arg;
}

DLLDirection
modelica_metatype omc_NFRangeIterator_map(threadData_t *threadData, modelica_metatype _iterator, modelica_fnptr _func)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _iter = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _lst = tmpMeta1;
  _iter = _iterator;
  // _exp has no default value.
  while(1)
  {
    if(!omc_NFRangeIterator_hasNext(threadData, _iter)) break;
    _iter = omc_NFRangeIterator_next(threadData, _iter ,&_exp);

    tmpMeta2 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _exp) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _exp), _lst);
    _lst = tmpMeta2;
  }

  _lst = listReverse(_lst);
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_NFRangeIterator_toListReverse(threadData_t *threadData, modelica_metatype _iterator)
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
  _iter = _iterator;
  // _exp has no default value.
  while(1)
  {
    if(!omc_NFRangeIterator_hasNext(threadData, _iter)) break;
    _iter = omc_NFRangeIterator_next(threadData, _iter ,&_exp);

    tmpMeta2 = mmc_mk_cons(_exp, _expl);
    _expl = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  return _expl;
}

DLLDirection
modelica_metatype omc_NFRangeIterator_toList(threadData_t *threadData, modelica_metatype _iterator)
{
  modelica_metatype _expl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _expl = listReverse(omc_NFRangeIterator_toListReverse(threadData, _iterator));
  _return: OMC_LABEL_UNUSED
  return _expl;
}

DLLDirection
modelica_boolean omc_NFRangeIterator_hasNext(threadData_t *threadData, modelica_metatype _iterator)
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
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)))) <= mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3)))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3)))) > ((modelica_integer) 0))?(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)))) <= mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 4))))):(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)))) >= mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 4))))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 4)))) < mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 5)))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3)))) <= arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)))));
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT0,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)))));
          omc_Error_assertion(threadData, 0 /* false */, tmpMeta5, _OMC_LIT2);
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
  _hasNext = tmp1;
  _return: OMC_LABEL_UNUSED
  return _hasNext;
}
modelica_metatype boxptr_NFRangeIterator_hasNext(threadData_t *threadData, modelica_metatype _iterator)
{
  modelica_boolean _hasNext;
  modelica_metatype out_hasNext;
  _hasNext = omc_NFRangeIterator_hasNext(threadData, _iterator);
  out_hasNext = mmc_mk_icon(_hasNext);
  return out_hasNext;
}

DLLDirection
modelica_metatype omc_NFRangeIterator_next(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fiterator, modelica_metatype *out_nextExp)
{
  modelica_metatype _iterator = NULL;
  modelica_metatype _nextExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _iterator = __omcQ_24in_5Fiterator;
  // _nextExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iterator;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2))));
          _nextExp = tmpMeta5;

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_iterator), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)))));
          _iterator = tmpMeta6;
          tmpMeta1 = _nextExp;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2))));
          _nextExp = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_iterator), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = mmc_mk_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3)))));
          _iterator = tmpMeta8;
          tmpMeta1 = _nextExp;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)))) + (mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3))))) * (((modelica_real)mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 4))))))));
          _nextExp = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_iterator), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[4] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 4)))));
          _iterator = tmpMeta10;
          tmpMeta1 = _nextExp;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _nextExp = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3)))));

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_iterator), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 3)))));
          _iterator = tmpMeta11;
          tmpMeta1 = _nextExp;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = stringAppend(_OMC_LIT3,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iterator), 2)))));
          omc_Error_assertion(threadData, 0 /* false */, tmpMeta12, _OMC_LIT4);
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
  _nextExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_nextExp) { *out_nextExp = _nextExp; }
  return _iterator;
}

DLLDirection
modelica_metatype omc_NFRangeIterator_fromDim(threadData_t *threadData, modelica_metatype _dim, modelica_boolean _resizable)
{
  modelica_metatype _iterator = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _iterator has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ty has no default value.
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(3, &NFRangeIterator_INT__RANGE__desc, mmc_mk_integer(((modelica_integer) 1)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box3(6, &NFRangeIterator_ARRAY__RANGE__desc, listArray(_OMC_LIT8), mmc_mk_integer(((modelica_integer) 1)));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,5,2) == 0) goto tmp3_end;
          
          _ty = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box3(6, &NFRangeIterator_ARRAY__RANGE__desc, listArray(omc_NFExpression_makeEnumLiterals(threadData, _ty)), mmc_mk_integer(((modelica_integer) 1)));
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFRangeIterator_fromExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box3(3, &NFRangeIterator_INT__RANGE__desc, mmc_mk_integer(((modelica_integer) 1)), (_resizable?omc_Util_getOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))):(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT9, _OMC_LIT10);
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
  _iterator = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _iterator;
}
modelica_metatype boxptr_NFRangeIterator_fromDim(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _resizable)
{
  modelica_integer tmp1;
  modelica_metatype _iterator = NULL;
  tmp1 = mmc_unbox_integer(_resizable);
  _iterator = omc_NFRangeIterator_fromDim(threadData, _dim, tmp1);
  /* skip box _iterator; NFRangeIterator */
  return _iterator;
}

DLLDirection
modelica_metatype omc_NFRangeIterator_fromExp(threadData_t *threadData, modelica_metatype _exp)
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
      modelica_integer _istart;
      modelica_integer _istep;
      modelica_integer _istop;
      modelica_real _rstart;
      modelica_real _rstep;
      modelica_real _rstop;
      modelica_boolean _bstart;
      modelica_boolean _bstop;
      modelica_metatype _ty = NULL;
      modelica_metatype _literals = NULL;
      modelica_metatype _values = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _istart has no default value.
      // _istep has no default value.
      // _istop has no default value.
      // _rstart has no default value.
      // _rstep has no default value.
      // _rstop has no default value.
      // _bstart has no default value.
      // _bstop has no default value.
      // _ty has no default value.
      // _literals has no default value.
      // _values has no default value.
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(6, &NFRangeIterator_ARRAY__RANGE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), mmc_mk_integer(((modelica_integer) 1)));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,0,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          _istart = tmp9  /* pattern as ty=Integer */;
          _istep = tmp13  /* pattern as ty=Integer */;
          _istop = tmp16  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_box4(4, &NFRangeIterator_INT__STEP__RANGE__desc, mmc_mk_integer(_istart), mmc_mk_integer(_istep), mmc_mk_integer(_istop));
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta21)) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,0,1) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          _istart = tmp20  /* pattern as ty=Integer */;
          _istop = tmp24  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta25 = mmc_mk_box3(3, &NFRangeIterator_INT__RANGE__desc, mmc_mk_integer(_istart), mmc_mk_integer(_istop));
          tmpMeta1 = tmpMeta25;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_real tmp28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_real tmp32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_real tmp35;
          modelica_metatype tmpMeta36;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,1,1) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          tmp28 = mmc_unbox_real(tmpMeta27);
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta29)) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,1,1) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          tmp32 = mmc_unbox_real(tmpMeta31);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,1,1) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 2));
          tmp35 = mmc_unbox_real(tmpMeta34);
          _rstart = tmp28  /* pattern as ty=Real */;
          _rstep = tmp32  /* pattern as ty=Real */;
          _rstop = tmp35  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta36 = mmc_mk_box5(5, &NFRangeIterator_REAL__RANGE__desc, mmc_mk_real(_rstart), mmc_mk_real(_rstep), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(omc_Util_realRangeSize(threadData, _rstart, _rstep, _rstop)));
          tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_real tmp39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_real tmp43;
          modelica_metatype tmpMeta44;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,1,1) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
          tmp39 = mmc_unbox_real(tmpMeta38);
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta40)) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,1,1) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 2));
          tmp43 = mmc_unbox_real(tmpMeta42);
          _rstart = tmp39  /* pattern as ty=Real */;
          _rstop = tmp43  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta44 = mmc_mk_box5(5, &NFRangeIterator_REAL__RANGE__desc, mmc_mk_real(_rstart), _OMC_LIT11, mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(omc_Util_realRangeSize(threadData, _rstart, 1.0, _rstop)));
          tmpMeta1 = tmpMeta44;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_integer tmp47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_integer tmp50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta58;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta45,3,1) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 2));
          tmp47 = mmc_unbox_integer(tmpMeta46);
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta48,3,1) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 2));
          tmp50 = mmc_unbox_integer(tmpMeta49);
          _bstart = tmp47  /* pattern as ty=Boolean */;
          _bstop = tmp50  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp52;
            modelica_metatype tmpMeta53;
            modelica_metatype tmpMeta54;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp55;
            modelica_boolean tmp56;
            modelica_boolean tmp57;
            modelica_boolean _b;
            tmp56 = 1 /* Range step-value */;
            tmp57 = _bstop /* Range stop-value */;
            _b = _bstart /* Range start-value */;
            _b = (_bstart /* Range start-value */)-tmp56;
            tmpMeta53 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta53; /* defaultValue */
            tmp52 = &__omcQ_24tmpVar3;
            while(1) {
              tmp55 = 1;
              if (tmp56 > 0 ? _b+tmp56 <= tmp57 : _b+tmp56 >= tmp57) {
                _b += tmp56;
                tmp55--;
              }
              if (tmp55 == 0) {
                tmpMeta54 = mmc_mk_box2(6, &NFExpression_BOOLEAN__desc, mmc_mk_boolean(_b));
                __omcQ_24tmpVar2 = tmpMeta54;
                *tmp52 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp52 = &MMC_CDR(*tmp52);
              } else if (tmp55 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp52 = mmc_mk_nil();
            tmpMeta51 = __omcQ_24tmpVar3;
          }
          tmpMeta58 = mmc_mk_box3(6, &NFRangeIterator_ARRAY__RANGE__desc, listArray(tmpMeta51), mmc_mk_integer(((modelica_integer) 1)));
          tmpMeta1 = tmpMeta58;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_integer tmp62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_integer tmp66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_integer tmp70;
          modelica_integer tmp71;
          modelica_integer tmp72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_integer tmp75;
          modelica_integer tmp76;
          modelica_integer tmp77;
          modelica_metatype tmpMeta78;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta59,4,3) == 0) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta59), 2));
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta59), 4));
          tmp62 = mmc_unbox_integer(tmpMeta61);
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta63)) goto tmp3_end;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta64,4,3) == 0) goto tmp3_end;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 4));
          tmp66 = mmc_unbox_integer(tmpMeta65);
          _ty = tmpMeta60;
          _istart = tmp62  /* pattern as ty=Integer */;
          _istop = tmp66  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta67 = _ty;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta67,5,2) == 0) goto goto_2;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta67), 3));
          _literals = tmpMeta68;

          tmpMeta69 = MMC_REFSTRUCTLIT(mmc_nil);
          _values = tmpMeta69;

          if((_istart <= _istop))
          {
            tmp70 = ((modelica_integer) 2); tmp71 = 1; tmp72 = _istart;
            if(!(((tmp71 > 0) && (tmp70 > tmp72)) || ((tmp71 < 0) && (tmp70 < tmp72))))
            {
              modelica_integer _i;
              for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp70, tmp72); _i += tmp71)
              {
                _literals = listRest(_literals);
              }
            }

            tmp75 = _istart; tmp76 = 1; tmp77 = _istop;
            if(!(((tmp76 > 0) && (tmp75 > tmp77)) || ((tmp76 < 0) && (tmp75 < tmp77))))
            {
              modelica_integer _i;
              for(_i = _istart; in_range_integer(_i, tmp75, tmp77); _i += tmp76)
              {
                tmpMeta74 = mmc_mk_box4(7, &NFExpression_ENUM__LITERAL__desc, _ty, listHead(_literals), mmc_mk_integer(_i));
                tmpMeta73 = mmc_mk_cons(tmpMeta74, _values);
                _values = tmpMeta73;

                _literals = listRest(_literals);
              }
            }

            _values = listReverse(_values);
          }
          tmpMeta78 = mmc_mk_box3(6, &NFRangeIterator_ARRAY__RANGE__desc, listArray(_values), mmc_mk_integer(((modelica_integer) 1)));
          tmpMeta1 = tmpMeta78;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,1) == 0) goto tmp3_end;
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta79,7,2) == 0) goto tmp3_end;
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta79), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta80,5,2) == 0) goto tmp3_end;
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta80), 3));
          
          _ty = tmpMeta80;
          _literals = tmpMeta81;
          /* Pattern matching succeeded */
          tmpMeta82 = MMC_REFSTRUCTLIT(mmc_nil);
          _values = tmpMeta82;

          _istep = ((modelica_integer) 0);

          {
            modelica_metatype _l;
            for (tmpMeta83 = _literals; !listEmpty(tmpMeta83); tmpMeta83=MMC_CDR(tmpMeta83))
            {
              _l = MMC_CAR(tmpMeta83);
              _istep = ((modelica_integer) 1) + _istep;

              tmpMeta85 = mmc_mk_box4(7, &NFExpression_ENUM__LITERAL__desc, _ty, _l, mmc_mk_integer(_istep));
              tmpMeta84 = mmc_mk_cons(tmpMeta85, _values);
              _values = tmpMeta84;
            }
          }
          tmpMeta87 = mmc_mk_box3(6, &NFRangeIterator_ARRAY__RANGE__desc, listArray(_values), mmc_mk_integer(((modelica_integer) 1)));
          tmpMeta1 = tmpMeta87;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta88;
          
          /* Pattern matching succeeded */
          tmpMeta88 = mmc_mk_box2(7, &NFRangeIterator_INVALID__RANGE__desc, _exp);
          tmpMeta1 = tmpMeta88;
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
modelica_boolean omc_NFRangeIterator_isValid(threadData_t *threadData, modelica_metatype _iterator)
{
  modelica_boolean _isValid;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isValid has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isValid = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isValid;
}
modelica_metatype boxptr_NFRangeIterator_isValid(threadData_t *threadData, modelica_metatype _iterator)
{
  modelica_boolean _isValid;
  modelica_metatype out_isValid;
  _isValid = omc_NFRangeIterator_isValid(threadData, _iterator);
  out_isValid = mmc_mk_icon(_isValid);
  return out_isValid;
}

