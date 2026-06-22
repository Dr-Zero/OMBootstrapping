#include "omc_simulation_settings.h"
#include "SBMultiInterval.h"
#define _OMC_LIT0_data "x"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "emptyInterval"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,13,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#include "util/modelica.h"

#include "SBMultiInterval_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SBMultiInterval_complement_add__interval(threadData_t *threadData, modelica_metatype _i, modelica_integer _count, modelica_integer _size, modelica_metatype _ints1, modelica_metatype _ints2, modelica_metatype __omcQ_24in_5Fres);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SBMultiInterval_complement_add__interval(threadData_t *threadData, modelica_metatype _i, modelica_metatype _count, modelica_metatype _size, modelica_metatype _ints1, modelica_metatype _ints2, modelica_metatype __omcQ_24in_5Fres);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBMultiInterval_complement_add__interval,2,0) {(void*) boxptr_SBMultiInterval_complement_add__interval,0}};
#define boxvar_SBMultiInterval_complement_add__interval MMC_REFSTRUCTLIT(boxvar_lit_SBMultiInterval_complement_add__interval)

DLLDirection
modelica_string omc_SBMultiInterval_toString(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  if(omc_SBMultiInterval_isEmpty(threadData, _mi))
  {
    _str = _OMC_LIT1;
  }
  else
  {
    {
      modelica_metatype __omcQ_24tmpVar1;
      modelica_metatype* tmp2;
      modelica_metatype tmpMeta3;
      modelica_string __omcQ_24tmpVar0;
      modelica_integer tmp4;
      modelica_metatype _i_loopVar = 0;
      modelica_integer tmp5;
      modelica_metatype _i;
      _i_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2)));
      tmp5 = 1;
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar1 = tmpMeta3; /* defaultValue */
      tmp2 = &__omcQ_24tmpVar1;
      while(1) {
        tmp4 = 1;
        if (tmp5 <= arrayLength(_i_loopVar)) {
          _i = arrayGet(_i_loopVar, tmp5++);
          tmp4--;
        }
        if (tmp4 == 0) {
          __omcQ_24tmpVar0 = omc_SBInterval_toString(threadData, _i);
          *tmp2 = mmc_mk_cons(__omcQ_24tmpVar0,0);
          tmp2 = &MMC_CDR(*tmp2);
        } else if (tmp4 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp2 = mmc_mk_nil();
      tmpMeta1 = __omcQ_24tmpVar1;
    }
    _str = stringDelimitList(tmpMeta1, _OMC_LIT0);
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_integer omc_SBMultiInterval_size(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_integer _sz;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sz = ((modelica_integer) 1);
  {
    modelica_metatype _i;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))), tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
    {
      _i = arrayGet(tmpMeta1,tmp3);
      _sz = (_sz) * (omc_SBInterval_size(threadData, _i));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _sz;
}
modelica_metatype boxptr_SBMultiInterval_size(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_integer _sz;
  modelica_metatype out_sz;
  _sz = omc_SBMultiInterval_size(threadData, _mi);
  out_sz = mmc_mk_icon(_sz);
  return out_sz;
}

DLLDirection
modelica_integer omc_SBMultiInterval_hash(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_integer _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBMultiInterval_hash(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_integer _res;
  modelica_metatype out_res;
  _res = omc_SBMultiInterval_hash(threadData, _mi);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_SBMultiInterval_isEqual(threadData_t *threadData, modelica_metatype _mi1, modelica_metatype _mi2)
{
  modelica_boolean _equal;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _equal has no default value.
  _equal = omc_Array_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi2), 2))), boxvar_SBInterval_isEqual);
  _return: OMC_LABEL_UNUSED
  return _equal;
}
modelica_metatype boxptr_SBMultiInterval_isEqual(threadData_t *threadData, modelica_metatype _mi1, modelica_metatype _mi2)
{
  modelica_boolean _equal;
  modelica_metatype out_equal;
  _equal = omc_SBMultiInterval_isEqual(threadData, _mi1, _mi2);
  out_equal = mmc_mk_icon(_equal);
  return out_equal;
}

DLLDirection
modelica_metatype omc_SBMultiInterval_replace(threadData_t *threadData, modelica_metatype _i, modelica_integer _dim, modelica_metatype _mi)
{
  modelica_metatype _res = NULL;
  modelica_metatype _ints = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _ints has no default value.
  _ints = arrayCopy((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))));

  arrayUpdate(_ints,_dim,_i);

  _res = omc_SBMultiInterval_fromArray(threadData, _ints);
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBMultiInterval_replace(threadData_t *threadData, modelica_metatype _i, modelica_metatype _dim, modelica_metatype _mi)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_integer(_dim);
  _res = omc_SBMultiInterval_replace(threadData, _i, tmp1, _mi);
  /* skip box _res; SBMultiInterval */
  return _res;
}

DLLDirection
modelica_metatype omc_SBMultiInterval_minElem(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))), tmp5 = arrayLength(tmpMeta1), tmp4 = 1; tmp4 <= tmp5; tmp4++)
    {
      _i = arrayGet(tmpMeta1,tmp4);
      if(omc_SBInterval_isEmpty(threadData, _i))
      {
        tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
        _res = listArray(tmpMeta2);

        goto _return;
      }
    }
  }

  _res = omc_Array_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))), boxvar_SBInterval_lowerBound);
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_integer omc_SBMultiInterval_ndim(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_integer _ndim;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ndim = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))));
  _return: OMC_LABEL_UNUSED
  return _ndim;
}
modelica_metatype boxptr_SBMultiInterval_ndim(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_integer _ndim;
  modelica_metatype out_ndim;
  _ndim = omc_SBMultiInterval_ndim(threadData, _mi);
  out_ndim = mmc_mk_icon(_ndim);
  return out_ndim;
}

DLLDirection
modelica_metatype omc_SBMultiInterval_intervals(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_metatype _ints = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ints = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2)));
  _return: OMC_LABEL_UNUSED
  return _ints;
}

DLLDirection
modelica_integer omc_SBMultiInterval_cardinality(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_integer _card;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _card = ((modelica_integer) 0);
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 3))));
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _card = _card + omc_SBInterval_cardinality(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))),_i) /* DAE.ASUB */);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _card;
}
modelica_metatype boxptr_SBMultiInterval_cardinality(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_integer _card;
  modelica_metatype out_card;
  _card = omc_SBMultiInterval_cardinality(threadData, _mi);
  out_card = mmc_mk_icon(_card);
  return out_card;
}

DLLDirection
modelica_metatype omc_SBMultiInterval_crossProd(threadData_t *threadData, modelica_metatype _mi1, modelica_metatype _mi2)
{
  modelica_metatype _res = NULL;
  modelica_metatype _ints = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _ints has no default value.
  _ints = omc_Array_join(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi2), 2))));

  tmpMeta1 = mmc_mk_box3(3, &SBMultiInterval_MULTI__INTERVAL__desc, _ints, mmc_mk_integer(arrayLength(_ints)));
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SBMultiInterval_complement_add__interval(threadData_t *threadData, modelica_metatype _i, modelica_integer _count, modelica_integer _size, modelica_metatype _ints1, modelica_metatype _ints2, modelica_metatype __omcQ_24in_5Fres)
{
  modelica_metatype _res = NULL;
  modelica_metatype _dummyi = NULL;
  modelica_metatype _resi = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = __omcQ_24in_5Fres;
  _dummyi = _dummyi;
  // _resi has no default value.
  if((!omc_SBInterval_isEmpty(threadData, _i)))
  {
    _resi = arrayCreateNoInit(_size, _dummyi);

    omc_Array_copyN(threadData, _ints1, _resi, _count, ((modelica_integer) 0), ((modelica_integer) 0));

    arrayUpdate(_resi,((modelica_integer) 1) + _count,_i);

    omc_Array_copyN(threadData, _ints2, _resi, ((modelica_integer) -1) + arrayLength(_ints2) - _count, ((modelica_integer) 1) + _count, ((modelica_integer) 1) + _count);

    omc_UnorderedSet_add(threadData, omc_SBMultiInterval_fromArray(threadData, _resi), _res);
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SBMultiInterval_complement_add__interval(threadData_t *threadData, modelica_metatype _i, modelica_metatype _count, modelica_metatype _size, modelica_metatype _ints1, modelica_metatype _ints2, modelica_metatype __omcQ_24in_5Fres)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_integer(_count);
  tmp2 = mmc_unbox_integer(_size);
  _res = omc_SBMultiInterval_complement_add__interval(threadData, _i, tmp1, tmp2, _ints1, _ints2, __omcQ_24in_5Fres);
  /* skip box _res; UnorderedSet<SBMultiInterval> */
  return _res;
}

static modelica_metatype closure0_SBMultiInterval_complement_add__interval(threadData_t *thData, modelica_metatype closure, modelica_metatype i, modelica_metatype $in_res)
{
  modelica_metatype count = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype size = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype ints1 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype ints2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  return boxptr_SBMultiInterval_complement_add__interval(thData, i, count, size, ints1, ints2, $in_res);
}
DLLDirection
modelica_metatype omc_SBMultiInterval_complement(threadData_t *threadData, modelica_metatype _mi1, modelica_metatype _mi2)
{
  modelica_metatype _res = NULL;
  modelica_metatype _tmp_mi = NULL;
  modelica_metatype _dummys = NULL;
  modelica_metatype _diffs = NULL;
  modelica_integer _count;
  modelica_integer _mi1_size;
  modelica_metatype _resi = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _tmp_mi has no default value.
  _dummys = _dummys;
  // _diffs has no default value.
  // _count has no default value.
  // _mi1_size has no default value.
  // _resi has no default value.
  _res = omc_UnorderedSet_new(threadData, boxvar_SBMultiInterval_hash, boxvar_SBMultiInterval_isEqual, ((modelica_integer) 13));

  if((omc_SBMultiInterval_isEmpty(threadData, _mi1) || (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi1), 3)))) != mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi2), 3)))))))
  {
    goto _return;
  }

  _tmp_mi = omc_SBMultiInterval_intersection(threadData, _mi1, _mi2);

  if(omc_SBMultiInterval_isEmpty(threadData, _tmp_mi))
  {
    omc_UnorderedSet_add(threadData, _mi1, _res);

    goto _return;
  }

  if(omc_SBMultiInterval_isEqual(threadData, _mi1, _tmp_mi))
  {
    goto _return;
  }

  _mi1_size = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi1), 2))));

  _diffs = arrayCreateNoInit(_mi1_size, _dummys);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _mi1_size;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      arrayUpdate(_diffs,_i,omc_SBInterval_complement(threadData, arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi1), 2))), _i), arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmp_mi), 2))), _i)));
    }
  }

  _count = ((modelica_integer) 0);

  {
    modelica_metatype _vdiff;
    for (tmpMeta4 = _diffs, tmp8 = arrayLength(tmpMeta4), tmp7 = 1; tmp7 <= tmp8; tmp7++)
    {
      _vdiff = arrayGet(tmpMeta4,tmp7);
      tmpMeta5 = mmc_mk_box4(0, mmc_mk_integer(_count), mmc_mk_integer(_mi1_size), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmp_mi), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi1), 2))));
      omc_UnorderedSet_fold(threadData, _vdiff, (modelica_fnptr) mmc_mk_box2(0,closure0_SBMultiInterval_complement_add__interval,tmpMeta5), _res);

      _count = ((modelica_integer) 1) + _count;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_SBMultiInterval_intersection(threadData_t *threadData, modelica_metatype _mi1, modelica_metatype _mi2)
{
  modelica_metatype _outMI = NULL;
  modelica_metatype _ints = NULL;
  modelica_metatype _ires = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMI has no default value.
  // _ints has no default value.
  // _ires has no default value.
  if(((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi1), 3)))) != mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi2), 3))))) || omc_SBMultiInterval_isEmpty(threadData, _mi1)))
  {
    _outMI = omc_SBMultiInterval_newEmpty(threadData);

    goto _return;
  }

  _ints = arrayCreateNoInit(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi1), 3)))), arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi1), 2))), ((modelica_integer) 1)));

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_ints);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _ires = omc_SBInterval_intersection(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi1), 2))), _i), arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi2), 2))), _i));

      if(omc_SBInterval_isEmpty(threadData, _ires))
      {
        _outMI = omc_SBMultiInterval_newEmpty(threadData);

        goto _return;
      }

      arrayUpdateNoBoundsChecking(_ints, _i, _ires);
    }
  }

  _outMI = omc_SBMultiInterval_fromArray(threadData, _ints);
  _return: OMC_LABEL_UNUSED
  return _outMI;
}

DLLDirection
modelica_boolean omc_SBMultiInterval_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _mi)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  if((arrayLength(_vals) != mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 3))))))
  {
    _res = 0 /* false */;
  }
  else
  {
    _res = omc_Array_isEqualOnTrue(threadData, _vals, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))), boxvar_SBInterval_contains);
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBMultiInterval_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _mi)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_SBMultiInterval_contains(threadData, _vals, _mi);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_SBMultiInterval_isEmpty(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_boolean _empty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _empty has no default value.
  _empty = (arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2)))) == ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _empty;
}
modelica_metatype boxptr_SBMultiInterval_isEmpty(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_SBMultiInterval_isEmpty(threadData, _mi);
  out_empty = mmc_mk_icon(_empty);
  return out_empty;
}

DLLDirection
modelica_metatype omc_SBMultiInterval_fromArray(threadData_t *threadData, modelica_metatype _ints)
{
  modelica_metatype _outMI = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMI has no default value.
  if(omc_Array_any(threadData, _ints, boxvar_SBInterval_isEmpty))
  {
    _outMI = omc_SBMultiInterval_newEmpty(threadData);
  }
  else
  {
    tmpMeta1 = mmc_mk_box3(3, &SBMultiInterval_MULTI__INTERVAL__desc, arrayCopy(_ints), mmc_mk_integer(arrayLength(_ints)));
    _outMI = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _outMI;
}

DLLDirection
modelica_metatype omc_SBMultiInterval_fromList(threadData_t *threadData, modelica_metatype _ints)
{
  modelica_metatype _outMI = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMI has no default value.
  if(omc_List_any(threadData, _ints, boxvar_SBInterval_isEmpty))
  {
    _outMI = omc_SBMultiInterval_newEmpty(threadData);
  }
  else
  {
    tmpMeta1 = mmc_mk_box3(3, &SBMultiInterval_MULTI__INTERVAL__desc, listArray(_ints), mmc_mk_integer(listLength(_ints)));
    _outMI = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _outMI;
}

DLLDirection
modelica_metatype omc_SBMultiInterval_copy(threadData_t *threadData, modelica_metatype _mi)
{
  modelica_metatype _outMI = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMI has no default value.
  tmpMeta1 = mmc_mk_box3(3, &SBMultiInterval_MULTI__INTERVAL__desc, arrayCopy((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 3))));
  _outMI = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outMI;
}

DLLDirection
modelica_metatype omc_SBMultiInterval_newEmpty(threadData_t *threadData)
{
  modelica_metatype _mi = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mi has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box3(3, &SBMultiInterval_MULTI__INTERVAL__desc, listArray(tmpMeta1), mmc_mk_integer(((modelica_integer) 0)));
  _mi = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _mi;
}

