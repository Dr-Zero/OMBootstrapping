#include "omc_simulation_settings.h"
#include "SBLinearMap.h"
#define _OMC_LIT0_data " * x + "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,7,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2,0.0);
#define _OMC_LIT2 MMC_REFREALLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT3,1.0);
#define _OMC_LIT3 MMC_REFREALLIT(_OMC_LIT_STRUCT3)
#include "util/modelica.h"

#include "SBLinearMap_includes.h"



DLLDirection
modelica_string omc_SBLinearMap_toString(threadData_t *threadData, modelica_metatype _map)
{
  modelica_string _str = NULL;
  modelica_metatype _strl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _strl = tmpMeta1;
  tmp7 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)))); tmp8 = ((modelica_integer) -1); tmp9 = ((modelica_integer) 1);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer _i;
    for(_i = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)))); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
    {
      tmp3 = modelica_real_to_modelica_string(mmc_unbox_real(arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))), _i)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4 = stringAppend(tmp3,_OMC_LIT0);
      tmp5 = modelica_real_to_modelica_string(mmc_unbox_real(arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3))), _i)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta6 = stringAppend(tmpMeta4,tmp5);
      tmpMeta2 = mmc_mk_cons(tmpMeta6, _strl);
      _strl = tmpMeta2;
    }
  }

  _str = stringDelimitList(_strl, _OMC_LIT1);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_SBLinearMap_applyInterval(threadData_t *threadData, modelica_metatype __omcQ_24in_5Finterval, modelica_real _gain, modelica_real _offset)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype _interval = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // __omcQ_24mrfa_5F2 has no default value.
  _interval = __omcQ_24in_5Finterval;
  __omcQ_24mrfa_5F0 = mmc_mk_integer(((modelica_integer)floor((((modelica_real)mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_interval), 2)))))) * (_gain) + _offset)));

  __omcQ_24mrfa_5F1 = mmc_mk_integer(((modelica_integer)floor((((modelica_real)mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_interval), 3)))))) * (_gain))));

  __omcQ_24mrfa_5F2 = mmc_mk_integer(((modelica_integer)floor((((modelica_real)mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_interval), 4)))))) * (_gain) + _offset)));

  tmpMeta1 = mmc_mk_box4(3, &SBInterval_INTERVAL__desc, __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, __omcQ_24mrfa_5F2);
  _interval = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _interval;
}
modelica_metatype boxptr_SBLinearMap_applyInterval(threadData_t *threadData, modelica_metatype __omcQ_24in_5Finterval, modelica_metatype _gain, modelica_metatype _offset)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_metatype _interval = NULL;
  tmp1 = mmc_unbox_real(_gain);
  tmp2 = mmc_unbox_real(_offset);
  _interval = omc_SBLinearMap_applyInterval(threadData, __omcQ_24in_5Finterval, tmp1, tmp2);
  /* skip box _interval; SBInterval */
  return _interval;
}

DLLDirection
modelica_metatype omc_SBLinearMap_applyMultiInterval(threadData_t *threadData, modelica_metatype __omcQ_24in_5FmultiInt, modelica_metatype _map)
{
  modelica_metatype _multiInt = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _multiInt = __omcQ_24in_5FmultiInt;
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_multiInt), 3))));
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      arrayUpdate((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_multiInt), 2))),_i,omc_SBLinearMap_applyInterval(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_multiInt), 2))),_i) /* DAE.ASUB */, mmc_unbox_real(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))),_i) /* DAE.ASUB */), mmc_unbox_real(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3))),_i) /* DAE.ASUB */)));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _multiInt;
}

DLLDirection
modelica_metatype omc_SBLinearMap_applyAtomicSet(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fatomic, modelica_metatype _map)
{
  modelica_metatype _atomic = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _atomic = __omcQ_24in_5Fatomic;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_atomic), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_SBLinearMap_applyMultiInterval(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atomic), 2))), _map);
  _atomic = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _atomic;
}

static modelica_metatype closure0_SBLinearMap_applyAtomicSet(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_atomic)
{
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_SBLinearMap_applyAtomicSet(thData, $in_atomic, map);
}
DLLDirection
modelica_metatype omc_SBLinearMap_apply(threadData_t *threadData, modelica_metatype _domain, modelica_metatype _map)
{
  modelica_metatype _target = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _target = omc_SBSet_copy(threadData, _domain);
  if((!omc_SBLinearMap_isIdentity(threadData, _map)))
  {
    tmpMeta2 = mmc_mk_box1(0, _map);
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_target), 4*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_UnorderedSet_selfMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_target), 2))), (modelica_fnptr) mmc_mk_box2(0,closure0_SBLinearMap_applyAtomicSet,tmpMeta2));
    _target = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _target;
}

DLLDirection
modelica_metatype omc_SBLinearMap_inverse(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _inv = NULL;
  modelica_metatype _gain = NULL;
  modelica_metatype _offset = NULL;
  modelica_integer _len;
  modelica_real _g;
  modelica_real _o;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _inv has no default value.
  // _gain has no default value.
  // _offset has no default value.
  _len = omc_SBLinearMap_ndim(threadData, _map);
  // _g has no default value.
  // _o has no default value.
  _gain = arrayCreateNoInit(_len, _OMC_LIT2);

  _offset = arrayCreateNoInit(_len, _OMC_LIT2);

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _len;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {
      _g = mmc_unbox_real(arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))), _i));

      _o = mmc_unbox_real(arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3))), _i));

      if((_g != 0.0))
      {
        tmp1 = _g;
        if (tmp1 == 0) {MMC_THROW_INTERNAL();}
        arrayUpdateNoBoundsChecking(_gain, _i, mmc_mk_real((1.0) / tmp1));

        tmp2 = _g;
        if (tmp2 == 0) {MMC_THROW_INTERNAL();}
        arrayUpdateNoBoundsChecking(_offset, _i, mmc_mk_real(((-_o)) / tmp2));
      }
      else
      {
        arrayUpdateNoBoundsChecking(_gain, _i, mmc_mk_real(((modelica_real)intMaxLit())));

        arrayUpdateNoBoundsChecking(_offset, _i, mmc_mk_real(((modelica_real)intMaxLit())));
      }
    }
  }

  tmpMeta6 = mmc_mk_box3(3, &SBLinearMap_LINEAR__MAP__desc, _gain, _offset);
  _inv = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _inv;
}

DLLDirection
modelica_metatype omc_SBLinearMap_compose(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2)
{
  modelica_metatype _map = NULL;
  modelica_metatype _gain = NULL;
  modelica_metatype _offset = NULL;
  modelica_integer _len1;
  modelica_integer _len2;
  modelica_real _g1;
  modelica_real _g2;
  modelica_real _o1;
  modelica_real _o2;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  // _gain has no default value.
  // _offset has no default value.
  _len1 = omc_SBLinearMap_ndim(threadData, _map1);
  _len2 = omc_SBLinearMap_ndim(threadData, _map2);
  // _g1 has no default value.
  // _g2 has no default value.
  // _o1 has no default value.
  // _o2 has no default value.
  if((_len1 == _len2))
  {
    _gain = arrayCreateNoInit(_len1, _OMC_LIT2);

    _offset = arrayCreateNoInit(_len1, _OMC_LIT2);

    tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _len1;
    if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
      {
        _g1 = mmc_unbox_real(arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 2))), _i));

        _g2 = mmc_unbox_real(arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 2))), _i));

        _o1 = mmc_unbox_real(arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 3))), _i));

        _o2 = mmc_unbox_real(arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 3))), _i));

        arrayUpdateNoBoundsChecking(_gain, _i, mmc_mk_real((_g1) * (_g2)));

        arrayUpdateNoBoundsChecking(_offset, _i, mmc_mk_real((_o2) * (_g1) + _o1));
      }
    }

    tmpMeta4 = mmc_mk_box3(3, &SBLinearMap_LINEAR__MAP__desc, _gain, _offset);
    _map = tmpMeta4;
  }
  else
  {
    _map = omc_SBLinearMap_newEmpty(threadData);
  }
  _return: OMC_LABEL_UNUSED
  return _map;
}

DLLDirection
modelica_boolean omc_SBLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2)
{
  modelica_boolean _equal;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _equal has no default value.
  _equal = (omc_Array_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 2))), boxvar_realEq) && omc_Array_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 3))), boxvar_realEq));
  _return: OMC_LABEL_UNUSED
  return _equal;
}
modelica_metatype boxptr_SBLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2)
{
  modelica_boolean _equal;
  modelica_metatype out_equal;
  _equal = omc_SBLinearMap_isEqual(threadData, _map1, _map2);
  out_equal = mmc_mk_icon(_equal);
  return out_equal;
}

static modelica_metatype closure1_realEq(threadData_t *thData, modelica_metatype closure, modelica_metatype x2)
{
  modelica_metatype x1 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_realEq(thData, x1, x2);
}static modelica_metatype closure2_realEq(threadData_t *thData, modelica_metatype closure, modelica_metatype x2)
{
  modelica_metatype x1 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_realEq(thData, x1, x2);
}
DLLDirection
modelica_boolean omc_SBLinearMap_isIdentity(threadData_t *threadData, modelica_metatype _map)
{
  modelica_boolean _isIdentity;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isIdentity has no default value.
  tmpMeta1 = mmc_mk_box1(0, _OMC_LIT3);
  tmpMeta2 = mmc_mk_box1(0, _OMC_LIT2);
  _isIdentity = (omc_Array_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))), (modelica_fnptr) mmc_mk_box2(0,closure1_realEq,tmpMeta1)) && omc_Array_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3))), (modelica_fnptr) mmc_mk_box2(0,closure2_realEq,tmpMeta2)));
  _return: OMC_LABEL_UNUSED
  return _isIdentity;
}
modelica_metatype boxptr_SBLinearMap_isIdentity(threadData_t *threadData, modelica_metatype _map)
{
  modelica_boolean _isIdentity;
  modelica_metatype out_isIdentity;
  _isIdentity = omc_SBLinearMap_isIdentity(threadData, _map);
  out_isIdentity = mmc_mk_icon(_isIdentity);
  return out_isIdentity;
}

DLLDirection
modelica_boolean omc_SBLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map)
{
  modelica_boolean _empty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _empty = (arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)))) == ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _empty;
}
modelica_metatype boxptr_SBLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_SBLinearMap_isEmpty(threadData, _map);
  out_empty = mmc_mk_icon(_empty);
  return out_empty;
}

DLLDirection
modelica_metatype omc_SBLinearMap_offset(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _offset = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _offset = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3)));
  _return: OMC_LABEL_UNUSED
  return _offset;
}

DLLDirection
modelica_metatype omc_SBLinearMap_gain(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _gain = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _gain = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)));
  _return: OMC_LABEL_UNUSED
  return _gain;
}

DLLDirection
modelica_boolean omc_SBLinearMap_isDim(threadData_t *threadData, modelica_metatype _map, modelica_integer _dim)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)))) == _dim);
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBLinearMap_isDim(threadData_t *threadData, modelica_metatype _map, modelica_metatype _dim)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_dim);
  _res = omc_SBLinearMap_isDim(threadData, _map, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_integer omc_SBLinearMap_ndim(threadData_t *threadData, modelica_metatype _map)
{
  modelica_integer _ndim;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ndim = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))));
  _return: OMC_LABEL_UNUSED
  return _ndim;
}
modelica_metatype boxptr_SBLinearMap_ndim(threadData_t *threadData, modelica_metatype _map)
{
  modelica_integer _ndim;
  modelica_metatype out_ndim;
  _ndim = omc_SBLinearMap_ndim(threadData, _map);
  out_ndim = mmc_mk_icon(_ndim);
  return out_ndim;
}

DLLDirection
modelica_metatype omc_SBLinearMap_copy(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _outMap = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMap has no default value.
  tmpMeta1 = mmc_mk_box3(3, &SBLinearMap_LINEAR__MAP__desc, arrayCopy((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)))), arrayCopy((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3)))));
  _outMap = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outMap;
}

DLLDirection
modelica_metatype omc_SBLinearMap_newIdentity(threadData_t *threadData, modelica_integer _dim)
{
  modelica_metatype _map = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  tmpMeta1 = mmc_mk_box3(3, &SBLinearMap_LINEAR__MAP__desc, arrayCreate(_dim, _OMC_LIT3), arrayCreate(_dim, _OMC_LIT2));
  _map = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _map;
}
modelica_metatype boxptr_SBLinearMap_newIdentity(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_integer tmp1;
  modelica_metatype _map = NULL;
  tmp1 = mmc_unbox_integer(_dim);
  _map = omc_SBLinearMap_newIdentity(threadData, tmp1);
  /* skip box _map; SBLinearMap */
  return _map;
}

DLLDirection
modelica_metatype omc_SBLinearMap_newEmpty(threadData_t *threadData)
{
  modelica_metatype _map = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = mmc_mk_box3(3, &SBLinearMap_LINEAR__MAP__desc, listArray(tmpMeta1), listArray(tmpMeta2));
  _map = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _map;
}

DLLDirection
modelica_metatype omc_SBLinearMap_new(threadData_t *threadData, modelica_metatype _gain, modelica_metatype _offset)
{
  modelica_metatype _map = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  if(omc_Array_any(threadData, _gain, boxvar_Util_realNegative))
  {
    _map = omc_SBLinearMap_newEmpty(threadData);
  }
  else
  {
    if((arrayLength(_gain) == arrayLength(_offset)))
    {
      tmpMeta1 = mmc_mk_box3(3, &SBLinearMap_LINEAR__MAP__desc, arrayCopy(_gain), arrayCopy(_offset));
      _map = tmpMeta1;
    }
    else
    {
      _map = omc_SBLinearMap_newEmpty(threadData);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _map;
}

