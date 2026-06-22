#include "omc_simulation_settings.h"
#include "SBPWLinearMap.h"
#define _OMC_LIT0_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "U"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT6,0.0);
#define _OMC_LIT6 MMC_REFREALLIT(_OMC_LIT_STRUCT6)
#include "util/modelica.h"

#include "SBPWLinearMap_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_SBPWLinearMap_toString_helper(threadData_t *threadData, modelica_metatype _set, modelica_metatype _lm);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_toString_helper,2,0) {(void*) boxptr_SBPWLinearMap_toString_helper,0}};
#define boxvar_SBPWLinearMap_toString_helper MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_toString_helper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SBPWLinearMap_preImage_add__set(threadData_t *threadData, modelica_metatype _aset, modelica_metatype _map, modelica_metatype _sets, modelica_metatype __omcQ_24in_5Fset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_preImage_add__set,2,0) {(void*) boxptr_SBPWLinearMap_preImage_add__set,0}};
#define boxvar_SBPWLinearMap_preImage_add__set MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_preImage_add__set)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SBPWLinearMap_image_add__set(threadData_t *threadData, modelica_metatype _aset, modelica_metatype _map, modelica_metatype __omcQ_24in_5Fset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBPWLinearMap_image_add__set,2,0) {(void*) boxptr_SBPWLinearMap_image_add__set,0}};
#define boxvar_SBPWLinearMap_image_add__set MMC_REFSTRUCTLIT(boxvar_lit_SBPWLinearMap_image_add__set)

PROTECTED_FUNCTION_STATIC modelica_string omc_SBPWLinearMap_toString_helper(threadData_t *threadData, modelica_metatype _set, modelica_metatype _lm)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = mmc_mk_box3(3, &SBPWAtomicLinearMap_PW__ATOMIC__LINEAR__MAP__desc, _set, _lm);
  tmpMeta2 = stringAppend(_OMC_LIT0,omc_SBPWAtomicLinearMap_toString(threadData, tmpMeta1));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT1);
  _str = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _str;
}

static modelica_metatype closure0_SBPWLinearMap_toString_helper(threadData_t *thData, modelica_metatype closure, modelica_metatype set)
{
  modelica_metatype lm = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_SBPWLinearMap_toString_helper(thData, set, lm);
}
DLLDirection
modelica_string omc_SBPWLinearMap_toString(threadData_t *threadData, modelica_metatype _map)
{
  modelica_string _str = NULL;
  modelica_metatype _dom = NULL;
  modelica_metatype _lmap = NULL;
  modelica_metatype _strl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _dom = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)));
  _lmap = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3)));
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _strl = tmpMeta1;
  tmp4 = arrayLength(_dom); tmp5 = ((modelica_integer) -1); tmp6 = ((modelica_integer) 1);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_dom); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
    {
      tmpMeta3 = mmc_mk_box1(0, arrayGet(_lmap,_i) /* DAE.ASUB */);
      tmpMeta2 = mmc_mk_cons(omc_UnorderedSet_toString(threadData, omc_SBSet_asets(threadData, arrayGet(_dom,_i) /* DAE.ASUB */), (modelica_fnptr) mmc_mk_box2(0,closure0_SBPWLinearMap_toString_helper,tmpMeta3), _OMC_LIT2), _strl);
      _strl = tmpMeta2;
    }
  }

  tmpMeta7 = stringAppend(_OMC_LIT3,stringDelimitList(_strl, _OMC_LIT4));
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT5);
  _str = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_boolean omc_SBPWLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2)
{
  modelica_boolean _equal;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _equal has no default value.
  _equal = (omc_Array_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 2))), boxvar_SBSet_isEqual) && omc_Array_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 3))), boxvar_SBLinearMap_isEqual));
  _return: OMC_LABEL_UNUSED
  return _equal;
}
modelica_metatype boxptr_SBPWLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2)
{
  modelica_boolean _equal;
  modelica_metatype out_equal;
  _equal = omc_SBPWLinearMap_isEqual(threadData, _map1, _map2);
  out_equal = mmc_mk_icon(_equal);
  return out_equal;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_atomize(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _outMap = NULL;
  modelica_metatype _dres = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _dom = NULL;
  modelica_metatype _lres = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _lm = NULL;
  modelica_metatype _d = NULL;
  modelica_metatype _aux = NULL;
  modelica_metatype _l = NULL;
  modelica_metatype _asets = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMap has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _dres = tmpMeta1;
  _dom = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)));
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _lres = tmpMeta2;
  _lm = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3)));
  // _d has no default value.
  // _aux has no default value.
  // _l has no default value.
  // _asets has no default value.
  tmp9 = ((modelica_integer) 1); tmp10 = 1; tmp11 = arrayLength(_dom);
  if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp9, tmp11); _i += tmp10)
    {
      _d = arrayGet(_dom,_i) /* DAE.ASUB */;

      _l = arrayGet(_lm,_i) /* DAE.ASUB */;

      _asets = omc_UnorderedSet_toArray(threadData, omc_SBSet_asets(threadData, _d));

      {
        modelica_metatype _s;
        for (tmpMeta3 = _asets, tmp8 = arrayLength(tmpMeta3), tmp7 = 1; tmp7 <= tmp8; tmp7++)
        {
          _s = arrayGet(tmpMeta3,tmp7);
          _aux = omc_SBSet_newEmpty(threadData);

          _aux = omc_SBSet_addAtomicSet(threadData, _s, _aux);

          tmpMeta4 = mmc_mk_cons(_aux, _dres);
          _dres = tmpMeta4;

          tmpMeta5 = mmc_mk_cons(_l, _lres);
          _lres = tmpMeta5;
        }
      }
    }
  }

  _outMap = omc_SBPWLinearMap_new(threadData, listArray(listReverseInPlace(_dres)), listArray(listReverseInPlace(_lres)));
  _return: OMC_LABEL_UNUSED
  return _outMap;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_combine(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2)
{
  modelica_metatype _outMap = NULL;
  modelica_metatype _sres = NULL;
  modelica_metatype _lres = NULL;
  modelica_metatype _dom2 = NULL;
  modelica_metatype _lm2 = NULL;
  modelica_metatype _aux1 = NULL;
  modelica_metatype _s2 = NULL;
  modelica_metatype _new_dom = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMap has no default value.
  // _sres has no default value.
  // _lres has no default value.
  // _dom2 has no default value.
  // _lm2 has no default value.
  // _aux1 has no default value.
  // _s2 has no default value.
  // _new_dom has no default value.
  if(omc_SBPWLinearMap_isEmpty(threadData, _map1))
  {
    _outMap = omc_SBPWLinearMap_copy(threadData, _map2);

    goto _return;
  }

  if(omc_SBPWLinearMap_isEmpty(threadData, _map2))
  {
    _outMap = omc_SBPWLinearMap_copy(threadData, _map1);

    goto _return;
  }

  _sres = omc_Vector_fromArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 2))));

  _lres = omc_Vector_fromArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 3))));

  _dom2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 2)));

  _lm2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 3)));

  _aux1 = omc_SBPWLinearMap_wholeDom(threadData, _map1);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_dom2);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _s2 = arrayGet(_dom2,_i) /* DAE.ASUB */;

      _new_dom = omc_SBSet_complement(threadData, _s2, _aux1);

      if((!omc_SBSet_isEmpty(threadData, _new_dom)))
      {
        omc_Vector_push(threadData, _sres, _new_dom);

        omc_Vector_push(threadData, _lres, arrayGet(_lm2,_i) /* DAE.ASUB */);
      }
    }
  }

  _outMap = omc_SBPWLinearMap_new(threadData, omc_Vector_toArray(threadData, _sres), omc_Vector_toArray(threadData, _lres));
  _return: OMC_LABEL_UNUSED
  return _outMap;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_wholeDom(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _set = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _set has no default value.
  _set = omc_SBSet_newEmpty(threadData);

  {
    modelica_metatype _s;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))), tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
    {
      _s = arrayGet(tmpMeta1,tmp3);
      _set = omc_SBSet_union(threadData, _set, _s);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _set;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_minInvCompact(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _outMap = NULL;
  modelica_metatype _aux_dom = NULL;
  modelica_metatype _dom_inv = NULL;
  modelica_metatype _aux_map = NULL;
  modelica_metatype _map_inv = NULL;
  modelica_metatype _min = NULL;
  modelica_metatype _resg = NULL;
  modelica_metatype _reso = NULL;
  modelica_metatype _g = NULL;
  modelica_metatype _o = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMap has no default value.
  // _aux_dom has no default value.
  // _dom_inv has no default value.
  // _aux_map has no default value.
  // _map_inv has no default value.
  // _min has no default value.
  // _resg has no default value.
  // _reso has no default value.
  // _g has no default value.
  // _o has no default value.
  if((arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)))) != ((modelica_integer) 1)))
  {
    _outMap = omc_SBPWLinearMap_newEmpty(threadData);

    goto _return;
  }

  _aux_dom = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))), ((modelica_integer) 1));

  _dom_inv = omc_SBPWLinearMap_image(threadData, _map, _aux_dom);

  _aux_map = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3))), ((modelica_integer) 1));

  _map_inv = omc_SBLinearMap_inverse(threadData, _aux_map);

  _min = omc_SBSet_minElem(threadData, _aux_dom);

  _g = omc_SBLinearMap_gain(threadData, _map_inv);

  _o = omc_SBLinearMap_offset(threadData, _map_inv);

  _resg = arrayCreateNoInit(arrayLength(_g), _OMC_LIT6);

  _reso = arrayCreateNoInit(arrayLength(_o), _OMC_LIT6);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_g);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      if((mmc_unbox_real(arrayGet(_g,_i) /* DAE.ASUB */) == ((modelica_real)intMaxLit())))
      {
        arrayUpdate(_resg,_i,_OMC_LIT6);

        arrayUpdate(_reso,_i,mmc_mk_real(((modelica_real)mmc_unbox_integer(arrayGet(_min,_i) /* DAE.ASUB */))));
      }
      else
      {
        arrayUpdate(_resg,_i,arrayGet(_g,_i) /* DAE.ASUB */);

        arrayUpdate(_reso,_i,arrayGet(_o,_i) /* DAE.ASUB */);
      }
    }
  }

  _outMap = omc_SBPWLinearMap_new(threadData, arrayCreate(((modelica_integer) 1), _dom_inv), arrayCreate(((modelica_integer) 1), omc_SBLinearMap_new(threadData, _resg, _reso)));
  _return: OMC_LABEL_UNUSED
  return _outMap;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_compPW(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2)
{
  modelica_metatype _outMap = NULL;
  modelica_metatype _dom1 = NULL;
  modelica_metatype _dom2 = NULL;
  modelica_metatype _ress = NULL;
  modelica_metatype _lmap1 = NULL;
  modelica_metatype _lmap2 = NULL;
  modelica_metatype _reslm = NULL;
  modelica_metatype _aux_dom = NULL;
  modelica_metatype _new_dom = NULL;
  modelica_metatype _d1 = NULL;
  modelica_metatype _d2 = NULL;
  modelica_metatype _l1 = NULL;
  modelica_metatype _l2 = NULL;
  modelica_metatype _new_lm = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMap has no default value.
  _dom1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 2)));
  _dom2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 2)));
  // _ress has no default value.
  _lmap1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map1), 3)));
  _lmap2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map2), 3)));
  // _reslm has no default value.
  // _aux_dom has no default value.
  // _new_dom has no default value.
  // _d1 has no default value.
  // _d2 has no default value.
  // _l1 has no default value.
  // _l2 has no default value.
  // _new_lm has no default value.
  if((omc_SBPWLinearMap_isEmpty(threadData, _map1) || omc_SBPWLinearMap_isEmpty(threadData, _map2)))
  {
    _outMap = omc_SBPWLinearMap_newEmpty(threadData);

    goto _return;
  }

  _ress = omc_Vector_new(threadData, ((modelica_integer) 0));

  _reslm = omc_Vector_new(threadData, ((modelica_integer) 0));

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = arrayLength(_dom1);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
    {
      _d1 = arrayGetNoBoundsChecking(_dom1, _i);

      tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_dom2);
      if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
      {
        modelica_integer _j;
        for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp1, tmp3); _j += tmp2)
        {
          _d2 = arrayGetNoBoundsChecking(_dom2, _j);

          _aux_dom = omc_SBPWLinearMap_image(threadData, _map2, _d2);

          _aux_dom = omc_SBSet_intersection(threadData, _aux_dom, _d1);

          _aux_dom = omc_SBPWLinearMap_preImage(threadData, _map2, _aux_dom);

          _new_dom = omc_SBSet_intersection(threadData, _aux_dom, _d2);

          if((!omc_SBSet_isEmpty(threadData, _new_dom)))
          {
            _l1 = arrayGet(_lmap1,_i) /* DAE.ASUB */;

            _l2 = arrayGet(_lmap2,_j) /* DAE.ASUB */;

            _new_lm = omc_SBLinearMap_compose(threadData, _l1, _l2);

            omc_Vector_push(threadData, _ress, _new_dom);

            omc_Vector_push(threadData, _reslm, _new_lm);
          }
        }
      }
    }
  }

  _outMap = omc_SBPWLinearMap_new(threadData, omc_Vector_toArray(threadData, _ress), omc_Vector_toArray(threadData, _reslm));
  _return: OMC_LABEL_UNUSED
  return _outMap;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SBPWLinearMap_preImage_add__set(threadData_t *threadData, modelica_metatype _aset, modelica_metatype _map, modelica_metatype _sets, modelica_metatype __omcQ_24in_5Fset)
{
  modelica_metatype _set = NULL;
  modelica_metatype _aux_map = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _set = __omcQ_24in_5Fset;
  // _aux_map has no default value.
  _aux_map = omc_SBPWAtomicLinearMap_new(threadData, _aset, _map);

  {
    modelica_metatype _as2;
    for (tmpMeta1 = _sets, tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
    {
      _as2 = arrayGet(tmpMeta1,tmp3);
      _set = omc_SBSet_addAtomicSet(threadData, omc_SBPWAtomicLinearMap_preImage(threadData, _aux_map, _as2), _set);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _set;
}

static modelica_metatype closure1_SBPWLinearMap_preImage_add__set(threadData_t *thData, modelica_metatype closure, modelica_metatype aset, modelica_metatype $in_set)
{
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype sets = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_SBPWLinearMap_preImage_add__set(thData, aset, map, sets, $in_set);
}
DLLDirection
modelica_metatype omc_SBPWLinearMap_preImage(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set)
{
  modelica_metatype _outSet = NULL;
  modelica_metatype _dom = NULL;
  modelica_metatype _lmap = NULL;
  modelica_metatype _ss = NULL;
  modelica_metatype _partial_res = NULL;
  modelica_metatype _sets = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outSet = omc_SBSet_newEmpty(threadData);
  _dom = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)));
  _lmap = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3)));
  // _ss has no default value.
  // _partial_res has no default value.
  // _sets has no default value.
  _sets = omc_UnorderedSet_toArray(threadData, omc_SBSet_asets(threadData, _set));

  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = arrayLength(_dom);
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {
      _ss = arrayGet(_dom,_i) /* DAE.ASUB */;

      _partial_res = omc_SBSet_newEmpty(threadData);

      tmpMeta1 = mmc_mk_box2(0, arrayGet(_lmap,_i) /* DAE.ASUB */, _sets);
      _partial_res = omc_UnorderedSet_fold(threadData, omc_SBSet_asets(threadData, _ss), (modelica_fnptr) mmc_mk_box2(0,closure1_SBPWLinearMap_preImage_add__set,tmpMeta1), omc_SBSet_newEmpty(threadData));

      _outSet = omc_SBSet_union(threadData, _outSet, _partial_res);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outSet;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SBPWLinearMap_image_add__set(threadData_t *threadData, modelica_metatype _aset, modelica_metatype _map, modelica_metatype __omcQ_24in_5Fset)
{
  modelica_metatype _set = NULL;
  modelica_metatype _aux_map = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _set = __omcQ_24in_5Fset;
  // _aux_map has no default value.
  _aux_map = omc_SBPWAtomicLinearMap_new(threadData, _aset, _map);

  _set = omc_SBSet_addAtomicSet(threadData, omc_SBPWAtomicLinearMap_image(threadData, _aux_map, _aset), _set);
  _return: OMC_LABEL_UNUSED
  return _set;
}

static modelica_metatype closure2_SBPWLinearMap_image_add__set(threadData_t *thData, modelica_metatype closure, modelica_metatype aset, modelica_metatype $in_set)
{
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_SBPWLinearMap_image_add__set(thData, aset, map, $in_set);
}
DLLDirection
modelica_metatype omc_SBPWLinearMap_image(threadData_t *threadData, modelica_metatype _map, modelica_metatype _set)
{
  modelica_metatype _outSet = NULL;
  modelica_metatype _dom = NULL;
  modelica_metatype _lmap = NULL;
  modelica_metatype _ss = NULL;
  modelica_metatype _partial_res = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outSet = omc_SBSet_newEmpty(threadData);
  _dom = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)));
  _lmap = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3)));
  // _ss has no default value.
  // _partial_res has no default value.
  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = arrayLength(_dom);
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {
      _ss = arrayGet(_dom,_i) /* DAE.ASUB */;

      _ss = omc_SBSet_intersection(threadData, _ss, _set);

      tmpMeta1 = mmc_mk_box1(0, arrayGet(_lmap,_i) /* DAE.ASUB */);
      _partial_res = omc_UnorderedSet_fold(threadData, omc_SBSet_asets(threadData, _ss), (modelica_fnptr) mmc_mk_box2(0,closure2_SBPWLinearMap_image_add__set,tmpMeta1), omc_SBSet_newEmpty(threadData));

      _outSet = omc_SBSet_union(threadData, _outSet, _partial_res);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outSet;
}

DLLDirection
modelica_boolean omc_SBPWLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map)
{
  modelica_boolean _empty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _empty = (arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)))) == ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _empty;
}
modelica_metatype boxptr_SBPWLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_SBPWLinearMap_isEmpty(threadData, _map);
  out_empty = mmc_mk_icon(_empty);
  return out_empty;
}

DLLDirection
modelica_integer omc_SBPWLinearMap_ndim(threadData_t *threadData, modelica_metatype _map)
{
  modelica_integer _ndim;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ndim = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 4))));
  _return: OMC_LABEL_UNUSED
  return _ndim;
}
modelica_metatype boxptr_SBPWLinearMap_ndim(threadData_t *threadData, modelica_metatype _map)
{
  modelica_integer _ndim;
  modelica_metatype out_ndim;
  _ndim = omc_SBPWLinearMap_ndim(threadData, _map);
  out_ndim = mmc_mk_icon(_ndim);
  return out_ndim;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_lmap(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _lmap = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lmap = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3)));
  _return: OMC_LABEL_UNUSED
  return _lmap;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_dom(threadData_t *threadData, modelica_metatype _map)
{
  modelica_metatype _dom = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dom = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2)));
  _return: OMC_LABEL_UNUSED
  return _dom;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_copy(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmap)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _map = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  _map = __omcQ_24in_5Fmap;
  __omcQ_24mrfa_5F0 = omc_Array_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 2))), boxvar_SBSet_copy);

  __omcQ_24mrfa_5F1 = omc_Array_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 3))), boxvar_SBLinearMap_copy);

  tmpMeta1 = mmc_mk_box4(3, &SBPWLinearMap_PW__LINEAR__MAP__desc, __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_map), 4))));
  _map = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _map;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_newIdentity(threadData_t *threadData, modelica_metatype _set)
{
  modelica_metatype _map = NULL;
  modelica_metatype _lmap = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  _lmap = omc_SBLinearMap_newIdentity(threadData, omc_SBSet_ndim(threadData, _set));
  tmpMeta1 = mmc_mk_box4(3, &SBPWLinearMap_PW__LINEAR__MAP__desc, arrayCreate(((modelica_integer) 1), _set), arrayCreate(((modelica_integer) 1), _lmap), mmc_mk_integer(((modelica_integer) 1)));
  _map = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _map;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_newEmpty(threadData_t *threadData)
{
  modelica_metatype _map = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = mmc_mk_box4(3, &SBPWLinearMap_PW__LINEAR__MAP__desc, listArray(tmpMeta1), listArray(tmpMeta2), mmc_mk_integer(((modelica_integer) 0)));
  _map = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _map;
}

DLLDirection
modelica_metatype omc_SBPWLinearMap_newScalar(threadData_t *threadData, modelica_metatype _dom, modelica_metatype _lmap)
{
  modelica_metatype _map = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  if((omc_SBSet_ndim(threadData, _dom) == omc_SBLinearMap_ndim(threadData, _lmap)))
  {
    tmpMeta1 = mmc_mk_box4(3, &SBPWLinearMap_PW__LINEAR__MAP__desc, arrayCreate(((modelica_integer) 1), _dom), arrayCreate(((modelica_integer) 1), _lmap), mmc_mk_integer(((modelica_integer) 1)));
    _map = tmpMeta1;
  }
  else
  {
    _map = omc_SBPWLinearMap_newEmpty(threadData);
  }
  _return: OMC_LABEL_UNUSED
  return _map;
}

static modelica_metatype closure3_SBSet_isDim(threadData_t *thData, modelica_metatype closure, modelica_metatype set)
{
  modelica_metatype dim = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_SBSet_isDim(thData, set, dim);
}static modelica_metatype closure4_SBLinearMap_isDim(threadData_t *thData, modelica_metatype closure, modelica_metatype map)
{
  modelica_metatype dim = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_SBLinearMap_isDim(thData, map, dim);
}
DLLDirection
modelica_metatype omc_SBPWLinearMap_new(threadData_t *threadData, modelica_metatype _dom, modelica_metatype _lmap)
{
  modelica_metatype _map = NULL;
  modelica_integer _dim;
  modelica_boolean _same_dims;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _map has no default value.
  _dim = ((modelica_integer) 0);
  _same_dims = 0 /* false */;
  if((arrayLength(_dom) != arrayLength(_lmap)))
  {
    _map = omc_SBPWLinearMap_newEmpty(threadData);

    goto _return;
  }

  if((!(arrayLength(_dom) == ((modelica_integer) 0))))
  {
    _dim = omc_SBSet_ndim(threadData, arrayGet(_dom,((modelica_integer) 1)) /* DAE.ASUB */);

    tmpMeta1 = mmc_mk_box1(0, mmc_mk_integer(_dim));
    tmpMeta2 = mmc_mk_box1(0, mmc_mk_integer(_dim));
    _same_dims = (omc_Array_all(threadData, _dom, (modelica_fnptr) mmc_mk_box2(0,closure3_SBSet_isDim,tmpMeta1)) && omc_Array_all(threadData, _lmap, (modelica_fnptr) mmc_mk_box2(0,closure4_SBLinearMap_isDim,tmpMeta2)));
  }

  if((!_same_dims))
  {
    _map = omc_SBPWLinearMap_newEmpty(threadData);
  }
  else
  {
    tmpMeta3 = mmc_mk_box4(3, &SBPWLinearMap_PW__LINEAR__MAP__desc, arrayCopy(_dom), arrayCopy(_lmap), mmc_mk_integer(_dim));
    _map = tmpMeta3;
  }
  _return: OMC_LABEL_UNUSED
  return _map;
}

