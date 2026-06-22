#include "omc_simulation_settings.h"
#include "SBSet.h"
#define _OMC_LIT0_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "U"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#include "util/modelica.h"

#include "SBSet_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SBSet_minElem_lessFn(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SBSet_minElem_lessFn(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_minElem_lessFn,2,0) {(void*) boxptr_SBSet_minElem_lessFn,0}};
#define boxvar_SBSet_minElem_lessFn MMC_REFSTRUCTLIT(boxvar_lit_SBSet_minElem_lessFn)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SBSet_new_is__equal__dim(threadData_t *threadData, modelica_metatype _set1, modelica_integer _dim);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SBSet_new_is__equal__dim(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBSet_new_is__equal__dim,2,0) {(void*) boxptr_SBSet_new_is__equal__dim,0}};
#define boxvar_SBSet_new_is__equal__dim MMC_REFSTRUCTLIT(boxvar_lit_SBSet_new_is__equal__dim)

DLLDirection
modelica_string omc_SBSet_toString(threadData_t *threadData, modelica_metatype _set)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT0,omc_UnorderedSet_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))), boxvar_SBAtomicSet_toString, _OMC_LIT1));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT2);
  _str = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_integer omc_SBSet_hash(threadData_t *threadData, modelica_metatype _set)
{
  modelica_integer _hash;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hash = omc_UnorderedSet_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
  _return: OMC_LABEL_UNUSED
  return _hash;
}
modelica_metatype boxptr_SBSet_hash(threadData_t *threadData, modelica_metatype _set)
{
  modelica_integer _hash;
  modelica_metatype out_hash;
  _hash = omc_SBSet_hash(threadData, _set);
  out_hash = mmc_mk_icon(_hash);
  return out_hash;
}

DLLDirection
modelica_boolean omc_SBSet_isEqual(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_boolean _equal;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equal = omc_UnorderedSet_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2))));
  _return: OMC_LABEL_UNUSED
  return _equal;
}
modelica_metatype boxptr_SBSet_isEqual(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_boolean _equal;
  modelica_metatype out_equal;
  _equal = omc_SBSet_isEqual(threadData, _set1, _set2);
  out_equal = mmc_mk_icon(_equal);
  return out_equal;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SBSet_minElem_lessFn(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = omc_Array_isLess(threadData, _set1, _set2, boxvar_intLt);
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SBSet_minElem_lessFn(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_SBSet_minElem_lessFn(threadData, _set1, _set2);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_SBSet_minElem(threadData_t *threadData, modelica_metatype _set)
{
  modelica_metatype _res = NULL;
  modelica_metatype _min_elems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _min_elems has no default value.
  if(omc_SBSet_isEmpty(threadData, _set))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _res = listArray(tmpMeta1);
  }
  else
  {
    {
      modelica_metatype __omcQ_24tmpVar1;
      modelica_metatype* tmp3;
      modelica_metatype tmpMeta4;
      modelica_metatype __omcQ_24tmpVar0;
      modelica_integer tmp5;
      modelica_metatype _e_loopVar = 0;
      modelica_integer tmp6;
      modelica_metatype _e;
      _e_loopVar = omc_UnorderedSet_toArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
      tmp6 = 1;
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar1 = tmpMeta4; /* defaultValue */
      tmp3 = &__omcQ_24tmpVar1;
      while(1) {
        tmp5 = 1;
        if (tmp6 <= arrayLength(_e_loopVar)) {
          _e = arrayGet(_e_loopVar, tmp6++);
          tmp5--;
        }
        if (tmp5 == 0) {
          __omcQ_24tmpVar0 = omc_SBAtomicSet_minElem(threadData, _e);
          *tmp3 = mmc_mk_cons(__omcQ_24tmpVar0,0);
          tmp3 = &MMC_CDR(*tmp3);
        } else if (tmp5 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp3 = mmc_mk_nil();
      tmpMeta2 = __omcQ_24tmpVar1;
    }
    _min_elems = tmpMeta2;

    _res = omc_List_minElement(threadData, _min_elems, boxvar_SBSet_minElem_lessFn);
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_boolean omc_SBSet_maxCardinality_maxCardinality__traverse(threadData_t *threadData, modelica_metatype _set, modelica_integer __omcQ_24in_5FmaxCard, modelica_integer *out_maxCard)
{
  modelica_boolean _res;
  modelica_integer _maxCard;
  modelica_integer _cardinality;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = 0 /* false */;
  _maxCard = __omcQ_24in_5FmaxCard;
  _cardinality = omc_SBSet_card(threadData, _set);
  if((_cardinality > _maxCard))
  {
    _res = 1 /* true */;

    _maxCard = _cardinality;
  }
  _return: OMC_LABEL_UNUSED
  if (out_maxCard) { *out_maxCard = _maxCard; }
  return _res;
}
modelica_metatype boxptr_SBSet_maxCardinality_maxCardinality__traverse(threadData_t *threadData, modelica_metatype _set, modelica_metatype __omcQ_24in_5FmaxCard, modelica_metatype *out_maxCard)
{
  modelica_integer tmp1;
  modelica_integer _maxCard;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5FmaxCard);
  _res = omc_SBSet_maxCardinality_maxCardinality__traverse(threadData, _set, tmp1, &_maxCard);
  out_res = mmc_mk_icon(_res);
  if (out_maxCard) { *out_maxCard = mmc_mk_icon(_maxCard); }
  return out_res;
}

DLLDirection
modelica_metatype omc_SBSet_maxCardinality(threadData_t *threadData, modelica_metatype _sets, modelica_integer *out_index)
{
  modelica_metatype _maxSet = NULL;
  modelica_integer _index;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _maxSet has no default value.
  // _index has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_integer tmp5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta6 = omc_Vector_findFold(threadData, _sets, boxvar_SBSet_maxCardinality_maxCardinality__traverse, mmc_mk_integer(((modelica_integer) 0)), &tmp5, NULL);
          if (optionNone(tmpMeta6)) goto goto_1;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          _maxSet = tmpMeta7;
          _index = tmp5;
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto goto_1;
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_index) { *out_index = _index; }
  return _maxSet;
}
modelica_metatype boxptr_SBSet_maxCardinality(threadData_t *threadData, modelica_metatype _sets, modelica_metatype *out_index)
{
  modelica_integer _index;
  modelica_metatype _maxSet = NULL;
  _maxSet = omc_SBSet_maxCardinality(threadData, _sets, &_index);
  /* skip box _maxSet; SBSet */
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  return _maxSet;
}

DLLDirection
modelica_integer omc_SBSet_card(threadData_t *threadData, modelica_metatype _set)
{
  modelica_integer _cardinality;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cardinality = mmc_unbox_integer(omc_UnorderedSet_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))), boxvar_SBAtomicSet_cardinality, mmc_mk_integer(((modelica_integer) 0))));
  _return: OMC_LABEL_UNUSED
  return _cardinality;
}
modelica_metatype boxptr_SBSet_card(threadData_t *threadData, modelica_metatype _set)
{
  modelica_integer _cardinality;
  modelica_metatype out_cardinality;
  _cardinality = omc_SBSet_card(threadData, _set);
  out_cardinality = mmc_mk_icon(_cardinality);
  return out_cardinality;
}

DLLDirection
modelica_metatype omc_SBSet_union(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_metatype _outSet = NULL;
  modelica_metatype _aux = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSet has no default value.
  // _aux has no default value.
  tmpMeta1 = mmc_mk_box3(3, &SBSet_SET__desc, omc_UnorderedSet_copy(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 3))));
  _outSet = tmpMeta1;

  _aux = omc_SBSet_complement(threadData, _set2, _outSet);

  if((!omc_SBSet_isEmpty(threadData, _aux)))
  {
    _outSet = omc_SBSet_addAtomicSets(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 2))), _outSet);
  }
  _return: OMC_LABEL_UNUSED
  return _outSet;
}

DLLDirection
modelica_metatype omc_SBSet_complement(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_metatype _outSet = NULL;
  modelica_metatype _int_res = NULL;
  modelica_metatype _aux = NULL;
  modelica_metatype _comp_res = NULL;
  modelica_metatype _new_sets = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSet has no default value.
  // _int_res has no default value.
  // _aux has no default value.
  // _comp_res has no default value.
  // _new_sets has no default value.
  _outSet = omc_SBSet_newEmpty(threadData);

  /* Pattern-matching assignment */
  tmpMeta1 = omc_SBSet_intersection(threadData, _set1, _set2);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _int_res = tmpMeta2;

  if((!omc_UnorderedSet_isEmpty(threadData, _int_res)))
  {
    {
      modelica_metatype _as1;
      for (tmpMeta3 = omc_UnorderedSet_toArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2)))), tmp14 = arrayLength(tmpMeta3), tmp13 = 1; tmp13 <= tmp14; tmp13++)
      {
        _as1 = arrayGet(tmpMeta3,tmp13);
        _aux = omc_UnorderedSet_new(threadData, boxvar_SBAtomicSet_hash, boxvar_SBAtomicSet_isEqual, ((modelica_integer) 13));

        omc_UnorderedSet_add(threadData, _as1, _aux);

        {
          modelica_metatype _as2;
          for (tmpMeta4 = omc_UnorderedSet_toArray(threadData, _int_res), tmp11 = arrayLength(tmpMeta4), tmp10 = 1; tmp10 <= tmp11; tmp10++)
          {
            _as2 = arrayGet(tmpMeta4,tmp10);
            _new_sets = omc_SBSet_newEmpty(threadData);

            {
              modelica_metatype _as3;
              for (tmpMeta5 = omc_UnorderedSet_toArray(threadData, _aux), tmp8 = arrayLength(tmpMeta5), tmp7 = 1; tmp7 <= tmp8; tmp7++)
              {
                _as3 = arrayGet(tmpMeta5,tmp7);
                _comp_res = omc_SBAtomicSet_complement(threadData, _as3, _as2);

                _new_sets = omc_SBSet_addAtomicSets(threadData, _comp_res, _new_sets);
              }
            }

            _aux = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_new_sets), 2)));
          }
        }

        _outSet = omc_SBSet_addAtomicSets(threadData, _aux, _outSet);
      }
    }
  }
  else
  {
    _outSet = omc_SBSet_addAtomicSets(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2))), _outSet);
  }
  _return: OMC_LABEL_UNUSED
  return _outSet;
}

DLLDirection
modelica_metatype omc_SBSet_intersection(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _set2)
{
  modelica_metatype _outSet = NULL;
  modelica_metatype _int_set = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSet has no default value.
  // _int_set has no default value.
  // _res has no default value.
  if((omc_UnorderedSet_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2)))) || omc_UnorderedSet_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2))))))
  {
    _outSet = omc_SBSet_newEmpty(threadData);

    goto _return;
  }

  _res = omc_UnorderedSet_new(threadData, boxvar_SBAtomicSet_hash, boxvar_SBAtomicSet_isEqual, ((modelica_integer) 13));

  {
    modelica_metatype _as1;
    for (tmpMeta1 = omc_UnorderedSet_toArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set1), 2)))), tmp8 = arrayLength(tmpMeta1), tmp7 = 1; tmp7 <= tmp8; tmp7++)
    {
      _as1 = arrayGet(tmpMeta1,tmp7);
      {
        modelica_metatype _as2;
        for (tmpMeta2 = omc_UnorderedSet_toArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set2), 2)))), tmp5 = arrayLength(tmpMeta2), tmp4 = 1; tmp4 <= tmp5; tmp4++)
        {
          _as2 = arrayGet(tmpMeta2,tmp4);
          _int_set = omc_SBAtomicSet_intersection(threadData, _as1, _as2);

          if((!omc_SBAtomicSet_isEmpty(threadData, _int_set)))
          {
            omc_UnorderedSet_add(threadData, _int_set, _res);
          }
        }
      }
    }
  }

  _outSet = omc_SBSet_new(threadData, _res);
  _return: OMC_LABEL_UNUSED
  return _outSet;
}

DLLDirection
modelica_metatype omc_SBSet_addAtomicSets(threadData_t *threadData, modelica_metatype _asets, modelica_metatype __omcQ_24in_5Fset)
{
  modelica_metatype _set = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _set = __omcQ_24in_5Fset;
  _set = omc_UnorderedSet_fold(threadData, _asets, boxvar_SBSet_addAtomicSet, _set);
  _return: OMC_LABEL_UNUSED
  return _set;
}

DLLDirection
modelica_metatype omc_SBSet_addAtomicSet(threadData_t *threadData, modelica_metatype _aset, modelica_metatype __omcQ_24in_5Fset)
{
  modelica_metatype _set = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _set = __omcQ_24in_5Fset;
  if(omc_SBAtomicSet_isEmpty(threadData, _aset))
  {
    goto _return;
  }

  if(omc_UnorderedSet_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2)))))
  {
    omc_UnorderedSet_add(threadData, _aset, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));

    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_set), 4*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = mmc_mk_integer(omc_SBAtomicSet_ndim(threadData, _aset));
    _set = tmpMeta1;
  }
  else
  {
    if((omc_SBAtomicSet_ndim(threadData, _aset) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3))))))
    {
      omc_UnorderedSet_add(threadData, _aset, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _set;
}

static modelica_metatype closure0_SBAtomicSet_contains(threadData_t *thData, modelica_metatype closure, modelica_metatype set)
{
  modelica_metatype vals = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_SBAtomicSet_contains(thData, vals, set);
}
DLLDirection
modelica_boolean omc_SBSet_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _set)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  tmpMeta1 = mmc_mk_box1(0, _vals);
  _res = omc_UnorderedSet_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))), (modelica_fnptr) mmc_mk_box2(0,closure0_SBAtomicSet_contains,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBSet_contains(threadData_t *threadData, modelica_metatype _vals, modelica_metatype _set)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_SBSet_contains(threadData, _vals, _set);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_SBSet_asets(threadData_t *threadData, modelica_metatype _set)
{
  modelica_metatype _asets = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _asets = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2)));
  _return: OMC_LABEL_UNUSED
  return _asets;
}

DLLDirection
modelica_boolean omc_SBSet_isDim(threadData_t *threadData, modelica_metatype _set, modelica_integer _dim)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3)))) == _dim);
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBSet_isDim(threadData_t *threadData, modelica_metatype _set, modelica_metatype _dim)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_dim);
  _res = omc_SBSet_isDim(threadData, _set, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_SBSet_isEmpty(threadData_t *threadData, modelica_metatype _set)
{
  modelica_boolean _empty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _empty = omc_UnorderedSet_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
  _return: OMC_LABEL_UNUSED
  return _empty;
}
modelica_metatype boxptr_SBSet_isEmpty(threadData_t *threadData, modelica_metatype _set)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_SBSet_isEmpty(threadData, _set);
  out_empty = mmc_mk_icon(_empty);
  return out_empty;
}

DLLDirection
modelica_integer omc_SBSet_ndim(threadData_t *threadData, modelica_metatype _set)
{
  modelica_integer _ndim;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ndim = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 3))));
  _return: OMC_LABEL_UNUSED
  return _ndim;
}
modelica_metatype boxptr_SBSet_ndim(threadData_t *threadData, modelica_metatype _set)
{
  modelica_integer _ndim;
  modelica_metatype out_ndim;
  _ndim = omc_SBSet_ndim(threadData, _set);
  out_ndim = mmc_mk_icon(_ndim);
  return out_ndim;
}

DLLDirection
modelica_metatype omc_SBSet_copy(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fset)
{
  modelica_metatype _set = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _set = __omcQ_24in_5Fset;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_set), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_UnorderedSet_copy(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_set), 2))));
  _set = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _set;
}

DLLDirection
modelica_metatype omc_SBSet_newEmpty(threadData_t *threadData)
{
  modelica_metatype _set = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _set has no default value.
  tmpMeta1 = mmc_mk_box3(3, &SBSet_SET__desc, omc_UnorderedSet_new(threadData, boxvar_SBAtomicSet_hash, boxvar_SBAtomicSet_isEqual, ((modelica_integer) 13)), mmc_mk_integer(((modelica_integer) 0)));
  _set = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _set;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SBSet_new_is__equal__dim(threadData_t *threadData, modelica_metatype _set1, modelica_integer _dim)
{
  modelica_boolean _equal;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equal = (omc_SBAtomicSet_ndim(threadData, _set1) == _dim);
  _return: OMC_LABEL_UNUSED
  return _equal;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SBSet_new_is__equal__dim(threadData_t *threadData, modelica_metatype _set1, modelica_metatype _dim)
{
  modelica_integer tmp1;
  modelica_boolean _equal;
  modelica_metatype out_equal;
  tmp1 = mmc_unbox_integer(_dim);
  _equal = omc_SBSet_new_is__equal__dim(threadData, _set1, tmp1);
  out_equal = mmc_mk_icon(_equal);
  return out_equal;
}

static modelica_metatype closure1_SBSet_new_is__equal__dim(threadData_t *thData, modelica_metatype closure, modelica_metatype set1)
{
  modelica_metatype dim = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_SBSet_new_is__equal__dim(thData, set1, dim);
}
DLLDirection
modelica_metatype omc_SBSet_new(threadData_t *threadData, modelica_metatype _ss)
{
  modelica_metatype _set = NULL;
  modelica_integer _dim;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _set has no default value.
  // _dim has no default value.
  if((!omc_UnorderedSet_isEmpty(threadData, _ss)))
  {
    _dim = omc_SBAtomicSet_ndim(threadData, omc_UnorderedSet_first(threadData, _ss));

    tmpMeta1 = mmc_mk_box1(0, mmc_mk_integer(_dim));
    if(((_dim != ((modelica_integer) 0)) && omc_UnorderedSet_all(threadData, _ss, (modelica_fnptr) mmc_mk_box2(0,closure1_SBSet_new_is__equal__dim,tmpMeta1))))
    {
      tmpMeta2 = mmc_mk_box3(3, &SBSet_SET__desc, omc_UnorderedSet_copy(threadData, _ss), mmc_mk_integer(_dim));
      _set = tmpMeta2;
    }
    else
    {
      _set = omc_SBSet_newEmpty(threadData);
    }
  }
  else
  {
    tmpMeta3 = mmc_mk_box3(3, &SBSet_SET__desc, omc_UnorderedSet_copy(threadData, _ss), mmc_mk_integer(((modelica_integer) 0)));
    _set = tmpMeta3;
  }
  _return: OMC_LABEL_UNUSED
  return _set;
}

