#include "omc_simulation_settings.h"
#include "SBPWAtomicLinearMap.h"
#define _OMC_LIT0_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " * x + "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,7,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "x"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#include "util/modelica.h"

#include "SBPWAtomicLinearMap_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_SBPWAtomicLinearMap_image_crop__inf(threadData_t *threadData, modelica_real _v);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SBPWAtomicLinearMap_image_crop__inf(threadData_t *threadData, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_image_crop__inf,2,0) {(void*) boxptr_SBPWAtomicLinearMap_image_crop__inf,0}};
#define boxvar_SBPWAtomicLinearMap_image_crop__inf MMC_REFSTRUCTLIT(boxvar_lit_SBPWAtomicLinearMap_image_crop__inf)

DLLDirection
modelica_string omc_SBPWAtomicLinearMap_toString(threadData_t *threadData, modelica_metatype _map)
{
  modelica_string _str = NULL;
  modelica_metatype _strl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _g = NULL;
  modelica_metatype _o = NULL;
  modelica_metatype _ints = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _strl = tmpMeta1;
  // _g has no default value.
  // _o has no default value.
  // _ints has no default value.
  _g = omc_SBLinearMap_gain(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3))));

  _o = omc_SBLinearMap_offset(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3))));

  _ints = omc_SBMultiInterval_intervals(threadData, omc_SBAtomicSet_aset(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)))));

  tmp11 = arrayLength(_ints); tmp12 = ((modelica_integer) -1); tmp13 = ((modelica_integer) 1);
  if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_ints); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
    {
      tmpMeta2 = stringAppend(_OMC_LIT0,omc_SBInterval_toString(threadData, arrayGet(_ints,_i) /* DAE.ASUB */));
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT1);
      tmp4 = modelica_real_to_modelica_string(mmc_unbox_real(arrayGet(_g,_i) /* DAE.ASUB */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta5 = stringAppend(tmpMeta3,tmp4);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT2);
      tmp7 = modelica_real_to_modelica_string(mmc_unbox_real(arrayGet(_o,_i) /* DAE.ASUB */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta8 = stringAppend(tmpMeta6,tmp7);
      tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT3);
      _str = tmpMeta9;

      tmpMeta10 = mmc_mk_cons(_str, _strl);
      _strl = tmpMeta10;
    }
  }

  _str = stringDelimitList(_strl, _OMC_LIT4);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_boolean omc_SBPWAtomicLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2)
{
  modelica_boolean _equal;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _equal has no default value.
  _equal = (omc_SBAtomicSet_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 2)))) && omc_SBLinearMap_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 3)))));
  _return: OMC_LABEL_UNUSED
  return _equal;
}
modelica_metatype boxptr_SBPWAtomicLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2)
{
  modelica_boolean _equal;
  modelica_metatype out_equal;
  _equal = omc_SBPWAtomicLinearMap_isEqual(threadData, _map1, _map2);
  out_equal = mmc_mk_icon(_equal);
  return out_equal;
}

DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_preImage(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set)
{
  modelica_metatype _outSet = NULL;
  modelica_metatype _full_im = NULL;
  modelica_metatype _actual_im = NULL;
  modelica_metatype _aux = NULL;
  modelica_metatype _inv = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSet has no default value.
  // _full_im has no default value.
  // _actual_im has no default value.
  // _aux has no default value.
  // _inv has no default value.
  _full_im = omc_SBPWAtomicLinearMap_image(threadData, _map, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))));

  _actual_im = omc_SBAtomicSet_intersection(threadData, _full_im, _set);

  _inv = omc_SBPWAtomicLinearMap_new(threadData, _actual_im, omc_SBLinearMap_inverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3)))));

  _aux = omc_SBPWAtomicLinearMap_image(threadData, _inv, _actual_im);

  _outSet = omc_SBAtomicSet_intersection(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))), _aux);
  _return: OMC_LABEL_UNUSED
  return _outSet;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_SBPWAtomicLinearMap_image_crop__inf(threadData_t *threadData, modelica_real _v)
{
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  _i = ((_v >= ((modelica_real)intMaxLit()))?intMaxLit():((modelica_integer)floor(_v)));
  _return: OMC_LABEL_UNUSED
  return _i;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SBPWAtomicLinearMap_image_crop__inf(threadData_t *threadData, modelica_metatype _v)
{
  modelica_real tmp1;
  modelica_integer _i;
  modelica_metatype out_i;
  tmp1 = mmc_unbox_real(_v);
  _i = omc_SBPWAtomicLinearMap_image_crop__inf(threadData, tmp1);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_image(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set)
{
  modelica_metatype _outSet = NULL;
  modelica_metatype _inters = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype _gains = NULL;
  modelica_metatype _offsets = NULL;
  modelica_metatype _set_int = NULL;
  modelica_metatype _int = NULL;
  modelica_real _gain;
  modelica_real _offset;
  modelica_integer _new_lo;
  modelica_integer _new_step;
  modelica_integer _new_hi;
  modelica_real _tmp_lo;
  modelica_real _tmp_step;
  modelica_real _tmp_hi;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSet has no default value.
  // _inters has no default value.
  // _res has no default value.
  // _gains has no default value.
  // _offsets has no default value.
  // _set_int has no default value.
  // _int has no default value.
  // _gain has no default value.
  // _offset has no default value.
  // _new_lo has no default value.
  // _new_step has no default value.
  // _new_hi has no default value.
  // _tmp_lo has no default value.
  // _tmp_step has no default value.
  // _tmp_hi has no default value.
  if(omc_SBAtomicSet_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)))))
  {
    _outSet = omc_SBAtomicSet_newEmpty(threadData);

    goto _return;
  }

  _set_int = omc_SBAtomicSet_intersection(threadData, _set, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))));

  _inters = omc_SBMultiInterval_intervals(threadData, omc_SBAtomicSet_aset(threadData, _set_int));

  if((arrayLength(_inters) == ((modelica_integer) 0)))
  {
    _outSet = omc_SBAtomicSet_newEmpty(threadData);

    goto _return;
  }

  _gains = omc_SBLinearMap_gain(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3))));

  _offsets = omc_SBLinearMap_offset(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3))));

  _res = arrayCreateNoInit(arrayLength(_inters), arrayGet(_inters,((modelica_integer) 1)) /* DAE.ASUB */);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_inters);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _int = arrayGetNoBoundsChecking(_inters, _i);

      _gain = mmc_unbox_real(arrayGet(_gains,_i) /* DAE.ASUB */);

      _offset = mmc_unbox_real(arrayGet(_offsets,_i) /* DAE.ASUB */);

      _tmp_lo = (((modelica_real)omc_SBInterval_lowerBound(threadData, _int))) * (_gain) + _offset;

      _tmp_step = (((modelica_real)omc_SBInterval_stepValue(threadData, _int))) * (_gain);

      _tmp_hi = (((modelica_real)omc_SBInterval_upperBound(threadData, _int))) * (_gain) + _offset;

      if((_gain < ((modelica_real)intMaxLit())))
      {
        _new_lo = omc_SBPWAtomicLinearMap_image_crop__inf(threadData, _tmp_lo);

        _new_step = omc_SBPWAtomicLinearMap_image_crop__inf(threadData, _tmp_step);

        _new_hi = omc_SBPWAtomicLinearMap_image_crop__inf(threadData, _tmp_hi);
      }
      else
      {
        _new_lo = ((modelica_integer) 1);

        _new_step = ((modelica_integer) 1);

        _new_hi = intMaxLit();
      }

      arrayUpdateNoBoundsChecking(_res, _i, omc_SBInterval_new(threadData, _new_lo, _new_step, _new_hi));
    }
  }

  _outSet = omc_SBAtomicSet_new(threadData, omc_SBMultiInterval_fromArray(threadData, _res));
  _return: OMC_LABEL_UNUSED
  return _outSet;
}

DLLDirection
modelica_boolean omc_SBPWAtomicLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map)
{
  modelica_boolean _empty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _empty has no default value.
  _empty = (omc_SBAtomicSet_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)))) && omc_SBLinearMap_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3)))));
  _return: OMC_LABEL_UNUSED
  return _empty;
}
modelica_metatype boxptr_SBPWAtomicLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_SBPWAtomicLinearMap_isEmpty(threadData, _map);
  out_empty = mmc_mk_icon(_empty);
  return out_empty;
}

DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_lmap(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _lmap = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lmap = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3)));
  _return: OMC_LABEL_UNUSED
  return _lmap;
}

DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_dom(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _dom = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dom = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)));
  _return: OMC_LABEL_UNUSED
  return _dom;
}

DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_newEmpty(threadData_t *threadData)
{
  modelica_metatype _map = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  tmpMeta1 = mmc_mk_box3(3, &SBPWAtomicLinearMap_PW__ATOMIC__LINEAR__MAP__desc, omc_SBAtomicSet_newEmpty(threadData), omc_SBLinearMap_newEmpty(threadData));
  _map = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _map;
}

DLLDirection
modelica_metatype omc_SBPWAtomicLinearMap_new(threadData_t *threadData, modelica_metatype _dom, modelica_metatype _lmap)
{
  modelica_metatype _map = NULL;
  modelica_boolean _compatible;
  modelica_metatype _ints = NULL;
  modelica_metatype _g = NULL;
  modelica_metatype _o = NULL;
  modelica_metatype _i = NULL;
  modelica_real _gain;
  modelica_real _offset;
  modelica_real _lo;
  modelica_real _step;
  modelica_real _hi;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  _compatible = 1 /* true */;
  // _ints has no default value.
  // _g has no default value.
  // _o has no default value.
  // _i has no default value.
  // _gain has no default value.
  // _offset has no default value.
  // _lo has no default value.
  // _step has no default value.
  // _hi has no default value.
  if((omc_SBAtomicSet_ndim(threadData, _dom) != omc_SBLinearMap_ndim(threadData, _lmap)))
  {
    _map = omc_SBPWAtomicLinearMap_newEmpty(threadData);

    goto _return;
  }

  _ints = omc_SBMultiInterval_intervals(threadData, omc_SBAtomicSet_aset(threadData, _dom));

  _g = omc_SBLinearMap_gain(threadData, _lmap);

  _o = omc_SBLinearMap_offset(threadData, _lmap);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_ints);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp1, tmp3); _j += tmp2)
    {
      _i = arrayGetNoBoundsChecking(_ints, _j);

      _gain = mmc_unbox_real(arrayGetNoBoundsChecking(_g, _j));

      _offset = mmc_unbox_real(arrayGetNoBoundsChecking(_g, _j));

      if((_gain < ((modelica_real)intMaxLit())))
      {
        _lo = (((modelica_real)omc_SBInterval_lowerBound(threadData, _i))) * (_gain) + _offset;

        _step = (((modelica_real)omc_SBInterval_stepValue(threadData, _i))) * (_gain);

        _hi = (((modelica_real)omc_SBInterval_upperBound(threadData, _i))) * (_gain) + _offset;

        if(((_lo != ((modelica_real)((modelica_integer)floor(_lo)))) && (omc_SBInterval_lowerBound(threadData, _i) > ((modelica_integer) 0))))
        {
          _compatible = 0 /* false */;

          break;
        }

        if(((_step != ((modelica_real)((modelica_integer)floor(_step)))) && (omc_SBInterval_stepValue(threadData, _i) > ((modelica_integer) 0))))
        {
          _compatible = 0 /* false */;

          break;
        }

        if(((_hi != ((modelica_real)((modelica_integer)floor(_hi)))) && (omc_SBInterval_upperBound(threadData, _i) > ((modelica_integer) 0))))
        {
          _compatible = 0 /* false */;

          break;
        }
      }
    }
  }

  if(_compatible)
  {
    tmpMeta4 = mmc_mk_box3(3, &SBPWAtomicLinearMap_PW__ATOMIC__LINEAR__MAP__desc, omc_SBAtomicSet_copy(threadData, _dom), omc_SBLinearMap_copy(threadData, _lmap));
    _map = tmpMeta4;
  }
  else
  {
    _map = omc_SBPWAtomicLinearMap_newEmpty(threadData);
  }
  _return: OMC_LABEL_UNUSED
  return _map;
}

