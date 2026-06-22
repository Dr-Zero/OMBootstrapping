#include "omc_simulation_settings.h"
#include "ExpandableArray.h"
#define _OMC_LIT0_data " ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,2,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,41,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,2,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "<empty>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,8,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#include "util/modelica.h"

#include "ExpandableArray_includes.h"



DLLDirection
modelica_metatype omc_ExpandableArray_getData(threadData_t *threadData, modelica_metatype _exarray)
{
  modelica_metatype _data = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  _return: OMC_LABEL_UNUSED
  return _data;
}

DLLDirection
modelica_integer omc_ExpandableArray_getCapacity(threadData_t *threadData, modelica_metatype _exarray)
{
  modelica_integer _capacity;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _capacity = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 4)))));
  _return: OMC_LABEL_UNUSED
  return _capacity;
}
modelica_metatype boxptr_ExpandableArray_getCapacity(threadData_t *threadData, modelica_metatype _exarray)
{
  modelica_integer _capacity;
  modelica_metatype out_capacity;
  _capacity = omc_ExpandableArray_getCapacity(threadData, _exarray);
  out_capacity = mmc_mk_icon(_capacity);
  return out_capacity;
}

DLLDirection
modelica_integer omc_ExpandableArray_getLastUsedIndex(threadData_t *threadData, modelica_metatype _exarray)
{
  modelica_integer _lastUsedIndex;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lastUsedIndex = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3)))));
  _return: OMC_LABEL_UNUSED
  return _lastUsedIndex;
}
modelica_metatype boxptr_ExpandableArray_getLastUsedIndex(threadData_t *threadData, modelica_metatype _exarray)
{
  modelica_integer _lastUsedIndex;
  modelica_metatype out_lastUsedIndex;
  _lastUsedIndex = omc_ExpandableArray_getLastUsedIndex(threadData, _exarray);
  out_lastUsedIndex = mmc_mk_icon(_lastUsedIndex);
  return out_lastUsedIndex;
}

DLLDirection
modelica_integer omc_ExpandableArray_getNumberOfElements(threadData_t *threadData, modelica_metatype _exarray)
{
  modelica_integer _numberOfElements;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _numberOfElements = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2)))));
  _return: OMC_LABEL_UNUSED
  return _numberOfElements;
}
modelica_metatype boxptr_ExpandableArray_getNumberOfElements(threadData_t *threadData, modelica_metatype _exarray)
{
  modelica_integer _numberOfElements;
  modelica_metatype out_numberOfElements;
  _numberOfElements = omc_ExpandableArray_getNumberOfElements(threadData, _exarray);
  out_numberOfElements = mmc_mk_icon(_numberOfElements);
  return out_numberOfElements;
}

DLLDirection
modelica_string omc_ExpandableArray_toString(threadData_t *threadData, modelica_metatype _exarray, modelica_string _header, modelica_fnptr _func, modelica_boolean _debug)
{
  modelica_string _str = NULL;
  modelica_integer _numberOfElements;
  modelica_integer _capacity;
  modelica_metatype _value = NULL;
  modelica_metatype _data = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_integer tmp19;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _numberOfElements = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2)))));
  _capacity = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 4)))));
  // _value has no default value.
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  if(_debug)
  {
    tmpMeta1 = stringAppend(_header,_OMC_LIT0);
    tmpMeta2 = stringAppend(tmpMeta1,intString(_numberOfElements));
    tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT2);
    tmpMeta4 = stringAppend(tmpMeta3,intString(_capacity));
    tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT1);
    _str = tmpMeta5;
  }
  else
  {
    tmpMeta6 = stringAppend(_header,_OMC_LIT0);
    tmpMeta7 = stringAppend(tmpMeta6,intString(_numberOfElements));
    tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT1);
    _str = tmpMeta8;
  }

  tmpMeta9 = stringAppend(_str,_OMC_LIT3);
  _str = tmpMeta9;

  if((_numberOfElements == ((modelica_integer) 0)))
  {
    tmpMeta10 = stringAppend(_str,_OMC_LIT6);
    _str = tmpMeta10;
  }
  else
  {
    tmp17 = ((modelica_integer) 1); tmp18 = 1; tmp19 = _capacity;
    if(!(((tmp18 > 0) && (tmp17 > tmp19)) || ((tmp18 < 0) && (tmp17 < tmp19))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp17, tmp19); _i += tmp18)
      {
        if(isSome(arrayGetNoBoundsChecking(_data, _i)))
        {
          /* Pattern-matching assignment */
          tmpMeta11 = arrayGetNoBoundsChecking(_data, _i);
          if (optionNone(tmpMeta11)) MMC_THROW_INTERNAL();
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          _value = tmpMeta12;

          _numberOfElements = ((modelica_integer) -1) + _numberOfElements;

          tmpMeta13 = stringAppend(_str,intString(_i));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT4);
          tmpMeta15 = stringAppend(tmpMeta14,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _value) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _value));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT5);
          _str = tmpMeta16;

          if((_numberOfElements == ((modelica_integer) 0)))
          {
            goto _return;
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_ExpandableArray_toString(threadData_t *threadData, modelica_metatype _exarray, modelica_metatype _header, modelica_fnptr _func, modelica_metatype _debug)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_debug);
  _str = omc_ExpandableArray_toString(threadData, _exarray, _header, _func, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_metatype omc_ExpandableArray_shrink(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_metatype _exarray = NULL;
  modelica_integer _numberOfElements;
  modelica_metatype _data = NULL;
  modelica_metatype _newData = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exarray = __omcQ_24in_5Fexarray;
  _numberOfElements = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2)))));
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  // _newData has no default value.
  _exarray = omc_ExpandableArray_compress(threadData, _exarray);

  omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 4))), mmc_mk_integer(_numberOfElements));

  _newData = arrayCreateNoInit(_numberOfElements, arrayGetNoBoundsChecking(_data, ((modelica_integer) 1)));

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _numberOfElements;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      arrayUpdateNoBoundsChecking(_newData, _i, arrayGetNoBoundsChecking(_data, _i));
    }
  }

  omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))), _newData);
  _return: OMC_LABEL_UNUSED
  return _exarray;
}

DLLDirection
modelica_metatype omc_ExpandableArray_compress(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_metatype _exarray = NULL;
  modelica_integer _numberOfElements;
  modelica_integer _lastUsedIndex;
  modelica_metatype _data = NULL;
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exarray = __omcQ_24in_5Fexarray;
  _numberOfElements = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2)))));
  _lastUsedIndex = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3)))));
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  _i = ((modelica_integer) 0);
  while(1)
  {
    if(!(_lastUsedIndex > _numberOfElements)) break;
    _i = ((modelica_integer) 1) + _i;

    if(isNone(arrayGetNoBoundsChecking(_data, _i)))
    {
      arrayUpdateNoBoundsChecking(_data, _i, arrayGetNoBoundsChecking(_data, _lastUsedIndex));

      arrayUpdateNoBoundsChecking(_data, _lastUsedIndex, mmc_mk_none());

      _lastUsedIndex = ((modelica_integer) -1) + _lastUsedIndex;

      while(1)
      {
        if(!isNone(arrayGetNoBoundsChecking(_data, _lastUsedIndex))) break;
        _lastUsedIndex = ((modelica_integer) -1) + _lastUsedIndex;
      }
    }
  }

  omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3))), mmc_mk_integer(_lastUsedIndex));
  _return: OMC_LABEL_UNUSED
  return _exarray;
}

DLLDirection
modelica_metatype omc_ExpandableArray_toList(threadData_t *threadData, modelica_metatype _exarray)
{
  modelica_metatype _listT = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _numberOfElements;
  modelica_integer _lastUsedIndex;
  modelica_metatype _data = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _listT = tmpMeta1;
  _numberOfElements = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2)))));
  _lastUsedIndex = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3)))));
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  if((_numberOfElements == ((modelica_integer) 0)))
  {
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    _listT = tmpMeta2;
  }
  else
  {
    if((_lastUsedIndex == ((modelica_integer) 1)))
    {
      tmpMeta3 = mmc_mk_cons(omc_Util_getOption(threadData, arrayGet(_data,((modelica_integer) 1)) /* DAE.ASUB */), MMC_REFSTRUCTLIT(mmc_nil));
      _listT = tmpMeta3;
    }
    else
    {
      {
        modelica_metatype __omcQ_24tmpVar1;
        modelica_metatype* tmp5;
        modelica_metatype tmpMeta6;
        modelica_metatype __omcQ_24tmpVar0;
        modelica_integer tmp7;
        modelica_integer tmp8;
        modelica_integer tmp9;
        modelica_integer _i;
        tmp8 = 1 /* Range step-value */;
        tmp9 = _lastUsedIndex /* Range stop-value */;
        _i = ((modelica_integer) 1) /* Range start-value */;
        _i = (((modelica_integer) 1) /* Range start-value */)-tmp8;
        tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar1 = tmpMeta6; /* defaultValue */
        tmp5 = &__omcQ_24tmpVar1;
        while(1) {
          tmp7 = 1;
          while (tmp8 > 0 ? _i+tmp8 <= tmp9 : _i+tmp8 >= tmp9) {
            _i += tmp8;
            if (isSome(arrayGet(_data,_i) /* DAE.ASUB */)) {
              tmp7--;
              break;
            }
          }
          if (tmp7 == 0) {
            __omcQ_24tmpVar0 = omc_Util_getOption(threadData, arrayGet(_data,_i) /* DAE.ASUB */);
            *tmp5 = mmc_mk_cons(__omcQ_24tmpVar0,0);
            tmp5 = &MMC_CDR(*tmp5);
          } else if (tmp7 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp5 = mmc_mk_nil();
        tmpMeta4 = __omcQ_24tmpVar1;
      }
      _listT = tmpMeta4;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _listT;
}

DLLDirection
modelica_metatype omc_ExpandableArray_update(threadData_t *threadData, modelica_integer _index, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_metatype _exarray = NULL;
  modelica_integer _lastUsedIndex;
  modelica_metatype _data = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exarray = __omcQ_24in_5Fexarray;
  _lastUsedIndex = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3)))));
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  if((((_index >= ((modelica_integer) 1)) && (_index <= _lastUsedIndex)) && isSome(arrayGetNoBoundsChecking(_data, _index))))
  {
    arrayUpdate(_data, _index, mmc_mk_some(_value));
  }
  else
  {
    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return _exarray;
}
modelica_metatype boxptr_ExpandableArray_update(threadData_t *threadData, modelica_metatype _index, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_integer tmp1;
  modelica_metatype _exarray = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _exarray = omc_ExpandableArray_update(threadData, tmp1, _value, __omcQ_24in_5Fexarray);
  /* skip box _exarray; ExpandableArray<polymorphic<T>> */
  return _exarray;
}

DLLDirection
modelica_metatype omc_ExpandableArray_delete(threadData_t *threadData, modelica_integer _index, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_metatype _exarray = NULL;
  modelica_integer _numberOfElements;
  modelica_integer _lastUsedIndex;
  modelica_metatype _data = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exarray = __omcQ_24in_5Fexarray;
  _numberOfElements = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2)))));
  _lastUsedIndex = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3)))));
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  if((((_index >= ((modelica_integer) 1)) && (_index <= _lastUsedIndex)) && isSome(arrayGetNoBoundsChecking(_data, _index))))
  {
    arrayUpdate(_data, _index, mmc_mk_none());

    omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2))), mmc_mk_integer(((modelica_integer) -1) + _numberOfElements));

    if((_index == _lastUsedIndex))
    {
      _lastUsedIndex = ((modelica_integer) -1) + _lastUsedIndex;

      while(1)
      {
        if(!((_lastUsedIndex > ((modelica_integer) 0)) && isNone(arrayGetNoBoundsChecking(_data, _lastUsedIndex)))) break;
        _lastUsedIndex = ((modelica_integer) -1) + _lastUsedIndex;
      }

      omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3))), mmc_mk_integer(_lastUsedIndex));
    }
  }
  else
  {
    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return _exarray;
}
modelica_metatype boxptr_ExpandableArray_delete(threadData_t *threadData, modelica_metatype _index, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_integer tmp1;
  modelica_metatype _exarray = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _exarray = omc_ExpandableArray_delete(threadData, tmp1, __omcQ_24in_5Fexarray);
  /* skip box _exarray; ExpandableArray<polymorphic<T>> */
  return _exarray;
}

DLLDirection
modelica_metatype omc_ExpandableArray_add(threadData_t *threadData, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray, modelica_integer *out_index)
{
  modelica_metatype _exarray = NULL;
  modelica_integer _index;
  modelica_integer _lastUsedIndex;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exarray = __omcQ_24in_5Fexarray;
  // _index has no default value.
  _lastUsedIndex = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3)))));
  _index = ((modelica_integer) 1) + _lastUsedIndex;

  _exarray = omc_ExpandableArray_set(threadData, _index, _value, _exarray);
  _return: OMC_LABEL_UNUSED
  if (out_index) { *out_index = _index; }
  return _exarray;
}
modelica_metatype boxptr_ExpandableArray_add(threadData_t *threadData, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray, modelica_metatype *out_index)
{
  modelica_integer _index;
  modelica_metatype _exarray = NULL;
  _exarray = omc_ExpandableArray_add(threadData, _value, __omcQ_24in_5Fexarray, &_index);
  /* skip box _exarray; ExpandableArray<polymorphic<T>> */
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  return _exarray;
}

DLLDirection
modelica_metatype omc_ExpandableArray_set(threadData_t *threadData, modelica_integer _index, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_metatype _exarray = NULL;
  modelica_integer _numberOfElements;
  modelica_integer _lastUsedIndex;
  modelica_integer _capacity;
  modelica_metatype _data = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exarray = __omcQ_24in_5Fexarray;
  _numberOfElements = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2)))));
  _lastUsedIndex = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3)))));
  _capacity = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 4)))));
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  if(((_index > ((modelica_integer) 0)) && ((_index > _capacity) || isNone(arrayGetNoBoundsChecking(_data, _index)))))
  {
    if((_index > _capacity))
    {
      _capacity = modelica_integer_max((modelica_integer)(_capacity),(modelica_integer)(((modelica_integer) 1)));

      while(1)
      {
        if(!(_index > _capacity)) break;
        _capacity = (((modelica_integer) 2)) * (_capacity);
      }

      omc_ExpandableArray_expandToSize(threadData, _capacity, _exarray);

      _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
    }

    arrayUpdate(_data, _index, mmc_mk_some(_value));

    omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2))), mmc_mk_integer(((modelica_integer) 1) + _numberOfElements));

    if((_index > _lastUsedIndex))
    {
      omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3))), mmc_mk_integer(_index));
    }
  }
  else
  {
    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return _exarray;
}
modelica_metatype boxptr_ExpandableArray_set(threadData_t *threadData, modelica_metatype _index, modelica_metatype _value, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_integer tmp1;
  modelica_metatype _exarray = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _exarray = omc_ExpandableArray_set(threadData, tmp1, _value, __omcQ_24in_5Fexarray);
  /* skip box _exarray; ExpandableArray<polymorphic<T>> */
  return _exarray;
}

DLLDirection
modelica_metatype omc_ExpandableArray_expandToSize(threadData_t *threadData, modelica_integer _minCapacity, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_metatype _exarray = NULL;
  modelica_integer _capacity;
  modelica_metatype _data = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exarray = __omcQ_24in_5Fexarray;
  _capacity = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 4)))));
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  if((_minCapacity > _capacity))
  {
    omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 4))), mmc_mk_integer(_minCapacity));

    _data = omc_Array_expandToSize(threadData, _minCapacity, _data, mmc_mk_none());

    omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))), _data);
  }
  _return: OMC_LABEL_UNUSED
  return _exarray;
}
modelica_metatype boxptr_ExpandableArray_expandToSize(threadData_t *threadData, modelica_metatype _minCapacity, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_integer tmp1;
  modelica_metatype _exarray = NULL;
  tmp1 = mmc_unbox_integer(_minCapacity);
  _exarray = omc_ExpandableArray_expandToSize(threadData, tmp1, __omcQ_24in_5Fexarray);
  /* skip box _exarray; ExpandableArray<polymorphic<T>> */
  return _exarray;
}

DLLDirection
modelica_metatype omc_ExpandableArray_get(threadData_t *threadData, modelica_integer _index, modelica_metatype _exarray)
{
  modelica_metatype _value = NULL;
  modelica_metatype _data = NULL;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  /* Pattern-matching assignment */
  tmp1 = ((_index >= ((modelica_integer) 1)) && (_index <= mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3)))))));
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmpMeta2 = arrayGetNoBoundsChecking(_data, _index);
  if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  _value = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _value;
}
modelica_metatype boxptr_ExpandableArray_get(threadData_t *threadData, modelica_metatype _index, modelica_metatype _exarray)
{
  modelica_integer tmp1;
  modelica_metatype _value = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _value = omc_ExpandableArray_get(threadData, tmp1, _exarray);
  /* skip box _value; polymorphic<T> */
  return _value;
}

DLLDirection
modelica_boolean omc_ExpandableArray_occupied(threadData_t *threadData, modelica_integer _index, modelica_metatype _exarray)
{
  modelica_boolean _b;
  modelica_integer _lastUsedIndex;
  modelica_metatype _data = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _lastUsedIndex = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3)))));
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  _b = (((_index >= ((modelica_integer) 1)) && (_index <= _lastUsedIndex)) && isSome(arrayGetNoBoundsChecking(_data, _index)));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_ExpandableArray_occupied(threadData_t *threadData, modelica_metatype _index, modelica_metatype _exarray)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_index);
  _b = omc_ExpandableArray_occupied(threadData, tmp1, _exarray);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_ExpandableArray_copy(threadData_t *threadData, modelica_metatype _inExarray, modelica_metatype _dummy)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype _outExarray = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // __omcQ_24mrfa_5F2 has no default value.
  // __omcQ_24mrfa_5F3 has no default value.
  // _outExarray has no default value.
  _outExarray = omc_ExpandableArray_new(threadData, mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExarray), 4))))), _dummy);

  __omcQ_24mrfa_5F0 = omc_Mutable_create(threadData, omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExarray), 2)))));

  __omcQ_24mrfa_5F1 = omc_Mutable_create(threadData, omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExarray), 3)))));

  __omcQ_24mrfa_5F2 = omc_Mutable_create(threadData, omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExarray), 4)))));

  __omcQ_24mrfa_5F3 = omc_Mutable_create(threadData, arrayCopy(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExarray), 5))))));

  tmpMeta1 = mmc_mk_box5(3, &ExpandableArray_EXPANDABLE__ARRAY__desc, __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, __omcQ_24mrfa_5F2, __omcQ_24mrfa_5F3);
  _outExarray = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outExarray;
}

DLLDirection
modelica_metatype omc_ExpandableArray_clear(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexarray)
{
  modelica_metatype _exarray = NULL;
  modelica_integer _n;
  modelica_integer _lastUsedIndex;
  modelica_metatype _data = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exarray = __omcQ_24in_5Fexarray;
  _n = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2)))));
  _lastUsedIndex = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3)))));
  _data = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 5))));
  omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 2))), mmc_mk_integer(((modelica_integer) 0)));

  omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exarray), 3))), mmc_mk_integer(((modelica_integer) 0)));

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _lastUsedIndex;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      if(isSome(arrayGetNoBoundsChecking(_data, _i)))
      {
        _n = ((modelica_integer) -1) + _n;

        arrayUpdateNoBoundsChecking(_data, _i, mmc_mk_none());

        if((_n == ((modelica_integer) 0)))
        {
          goto _return;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _exarray;
}

DLLDirection
modelica_metatype omc_ExpandableArray_new(threadData_t *threadData, modelica_integer _capacity, modelica_metatype _dummy)
{
  modelica_metatype _exarray = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exarray has no default value.
  tmpMeta1 = mmc_mk_box5(3, &ExpandableArray_EXPANDABLE__ARRAY__desc, omc_Mutable_create(threadData, mmc_mk_integer(((modelica_integer) 0))), omc_Mutable_create(threadData, mmc_mk_integer(((modelica_integer) 0))), omc_Mutable_create(threadData, mmc_mk_integer(_capacity)), omc_Mutable_create(threadData, arrayCreate(_capacity, mmc_mk_none())));
  _exarray = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exarray;
}
modelica_metatype boxptr_ExpandableArray_new(threadData_t *threadData, modelica_metatype _capacity, modelica_metatype _dummy)
{
  modelica_integer tmp1;
  modelica_metatype _exarray = NULL;
  tmp1 = mmc_unbox_integer(_capacity);
  _exarray = omc_ExpandableArray_new(threadData, tmp1, _dummy);
  /* skip box _exarray; ExpandableArray<polymorphic<T>> */
  return _exarray;
}

