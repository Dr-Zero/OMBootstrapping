#include "omc_simulation_settings.h"
#include "SBInterval.h"
#define _OMC_LIT0_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,4,3) {&SBInterval_INTERVAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,4,3) {&SBInterval_INTERVAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(-1))}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#include "util/modelica.h"

#include "SBInterval_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_SBInterval_euclid(threadData_t *threadData, modelica_integer _a, modelica_integer _b, modelica_integer *out_m, modelica_integer *out_ua, modelica_integer *out_vb);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SBInterval_euclid(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b, modelica_metatype *out_m, modelica_metatype *out_ua, modelica_metatype *out_vb);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBInterval_euclid,2,0) {(void*) boxptr_SBInterval_euclid,0}};
#define boxvar_SBInterval_euclid MMC_REFSTRUCTLIT(boxvar_lit_SBInterval_euclid)

DLLDirection
modelica_string omc_SBInterval_toString(threadData_t *threadData, modelica_metatype _interval)
{
  modelica_string _str = NULL;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmp1 = modelica_integer_to_modelica_string(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_interval), 2)))), ((modelica_integer) 0), 1 /* true */);
  tmpMeta2 = stringAppend(_OMC_LIT0,tmp1);
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT1);
  tmp4 = modelica_integer_to_modelica_string(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_interval), 3)))), ((modelica_integer) 0), 1 /* true */);
  tmpMeta5 = stringAppend(tmpMeta3,tmp4);
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT1);
  tmp7 = modelica_integer_to_modelica_string(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_interval), 4)))), ((modelica_integer) 0), 1 /* true */);
  tmpMeta8 = stringAppend(tmpMeta6,tmp7);
  tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT2);
  _str = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_integer omc_SBInterval_hash(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _hash;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hash = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 2))));
  _return: OMC_LABEL_UNUSED
  return _hash;
}
modelica_metatype boxptr_SBInterval_hash(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _hash;
  modelica_metatype out_hash;
  _hash = omc_SBInterval_hash(threadData, _int);
  out_hash = mmc_mk_icon(_hash);
  return out_hash;
}

DLLDirection
modelica_boolean omc_SBInterval_isEqual(threadData_t *threadData, modelica_metatype _int1, modelica_metatype _int2)
{
  modelica_boolean _equal;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _equal has no default value.
  _equal = (((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 2)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int2), 2))))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int2), 3)))))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 4)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int2), 4))))));
  _return: OMC_LABEL_UNUSED
  return _equal;
}
modelica_metatype boxptr_SBInterval_isEqual(threadData_t *threadData, modelica_metatype _int1, modelica_metatype _int2)
{
  modelica_boolean _equal;
  modelica_metatype out_equal;
  _equal = omc_SBInterval_isEqual(threadData, _int1, _int2);
  out_equal = mmc_mk_icon(_equal);
  return out_equal;
}

DLLDirection
modelica_integer omc_SBInterval_size(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _res;
  modelica_integer tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 3))));
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  _res = ((modelica_integer) 1) + modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 4)))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 2))))),tmp1).quot;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBInterval_size(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _res;
  modelica_integer tmp1;
  modelica_metatype out_res;
  _res = omc_SBInterval_size(threadData, _int);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_SBInterval_isEmpty(threadData_t *threadData, modelica_metatype _int)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 3)))) == ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBInterval_isEmpty(threadData_t *threadData, modelica_metatype _int)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_SBInterval_isEmpty(threadData, _int);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_SBInterval_contains(threadData_t *threadData, modelica_integer _c, modelica_metatype _int)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = ((((!omc_SBInterval_isEmpty(threadData, _int)) && (_c >= mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 2)))))) && (_c <= mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 4)))))) && (modelica_integer_mod(_c - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 2))))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 3))))) == ((modelica_integer) 0)));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBInterval_contains(threadData_t *threadData, modelica_metatype _c, modelica_metatype _int)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_c);
  _res = omc_SBInterval_contains(threadData, tmp1, _int);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_integer omc_SBInterval_cardinality(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _card;
  modelica_real tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = ((modelica_real)mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 3)))));
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  _card = ((modelica_integer)floor((((modelica_real)mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 4)))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 2))))))) / tmp1));
  _return: OMC_LABEL_UNUSED
  return _card;
}
modelica_metatype boxptr_SBInterval_cardinality(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _card;
  modelica_real tmp1;
  modelica_metatype out_card;
  _card = omc_SBInterval_cardinality(threadData, _int);
  out_card = mmc_mk_icon(_card);
  return out_card;
}

DLLDirection
modelica_metatype omc_SBInterval_affine(threadData_t *threadData, modelica_metatype _int, modelica_real _gain, modelica_integer _offset)
{
  modelica_metatype _res = NULL;
  modelica_real _lo;
  modelica_real _step;
  modelica_real _hi;
  modelica_integer _ilo;
  modelica_integer _istep;
  modelica_integer _ihi;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  modelica_real tmp8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _lo has no default value.
  // _step has no default value.
  // _hi has no default value.
  // _ilo has no default value.
  // _istep has no default value.
  // _ihi has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _int;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp7 = mmc_unbox_real(tmpMeta6);
  _lo = tmp3  /* pattern as ty=Real */;
  _step = tmp5  /* pattern as ty=Real */;
  _hi = tmp7  /* pattern as ty=Real */;

  if((_gain > 0.0))
  {
    _lo = (_lo) * (_gain) + ((modelica_real)_offset);

    _hi = (_hi) * (_gain) + ((modelica_real)_offset);

    _step = (_step) * (_gain);

    if((_step < 1.0))
    {
      _step = 1.0;

      _lo = ceil(_lo);

      _hi = floor(_hi);
    }

    if((_lo < 0.0))
    {
      tmp8 = _step;
      if (tmp8 == 0) {MMC_THROW_INTERNAL();}
      _lo = _lo + (_step) * (1.0 + floor((fabs(_lo)) / tmp8));
    }

    if((_hi < _lo))
    {
      _res = omc_SBInterval_newEmpty(threadData);
    }
    else
    {
      _ilo = ((modelica_integer)floor(_lo));

      _ihi = ((modelica_integer)floor(_hi));

      _istep = ((_ilo == _ihi)?((modelica_integer) 1):((modelica_integer)floor(_step)));

      _res = omc_SBInterval_new(threadData, _ilo, _istep, _ihi);
    }
  }
  else
  {
    if((_offset > ((modelica_integer) 0)))
    {
      _res = omc_SBInterval_new(threadData, _offset, ((modelica_integer) 1), _offset);
    }
    else
    {
      _res = omc_SBInterval_newEmpty(threadData);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_SBInterval_affine(threadData_t *threadData, modelica_metatype _int, modelica_metatype _gain, modelica_metatype _offset)
{
  modelica_real tmp1;
  modelica_integer tmp2;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_real(_gain);
  tmp2 = mmc_unbox_integer(_offset);
  _res = omc_SBInterval_affine(threadData, _int, tmp1, tmp2);
  /* skip box _res; SBInterval */
  return _res;
}

DLLDirection
modelica_metatype omc_SBInterval_complement(threadData_t *threadData, modelica_metatype _int1, modelica_metatype _int2)
{
  modelica_metatype _ints = NULL;
  modelica_metatype _i2 = NULL;
  modelica_integer _count_r;
  modelica_integer _count_s;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ints has no default value.
  // _i2 has no default value.
  // _count_r has no default value.
  // _count_s has no default value.
  _ints = omc_UnorderedSet_new(threadData, boxvar_SBInterval_hash, boxvar_SBInterval_isEqual, ((modelica_integer) 13));

  _i2 = omc_SBInterval_intersection(threadData, _int1, _int2);

  if(omc_SBInterval_isEmpty(threadData, _i2))
  {
    omc_UnorderedSet_add(threadData, _int1, _ints);
  }
  else
  {
    if((!omc_SBInterval_isEqual(threadData, _int1, _i2)))
    {
      if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 4)))) < mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 4))))))
      {
        omc_UnorderedSet_add(threadData, omc_SBInterval_new(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 4)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 4))))), _ints);
      }

      tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3))));
      if (tmp1 == 0) {MMC_THROW_INTERNAL();}
      _count_r = ((modelica_integer) -1) + modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 3)))),tmp1).quot;

      tmp3 = (modelica_boolean)(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 4)))) < intMaxLit());
      if(tmp3)
      {
        tmp2 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 3))));
        if (tmp2 == 0) {MMC_THROW_INTERNAL();}
        tmp4 = modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 4)))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 2))))),tmp2).quot;
      }
      else
      {
        tmp4 = intMaxLit();
      }
      _count_s = tmp4;

      if((_count_r < _count_s))
      {
        if((_count_s < intMaxLit()))
        {
          tmp5 = _count_r; tmp6 = ((modelica_integer) -1); tmp7 = ((modelica_integer) 1);
          if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
          {
            modelica_integer _i;
            for(_i = _count_r; in_range_integer(_i, tmp5, tmp7); _i += tmp6)
            {
              omc_UnorderedSet_add(threadData, omc_SBInterval_new(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 2)))) + (_i) * (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3))))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 4)))) + (_i) * (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3))))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 3)))))), _ints);
            }
          }
        }
        else
        {
          tmp8 = _count_r; tmp9 = ((modelica_integer) -1); tmp10 = ((modelica_integer) 1);
          if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
          {
            modelica_integer _i;
            for(_i = _count_r; in_range_integer(_i, tmp8, tmp10); _i += tmp9)
            {
              omc_UnorderedSet_add(threadData, omc_SBInterval_new(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 2)))) + (_i) * (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3))))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 3)))), intMaxLit()), _ints);
            }
          }
        }
      }
      else
      {
        tmp11 = _count_s; tmp12 = ((modelica_integer) -1); tmp13 = ((modelica_integer) 1);
        if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
        {
          modelica_integer _i;
          for(_i = _count_s; in_range_integer(_i, tmp11, tmp13); _i += tmp12)
          {
            omc_UnorderedSet_add(threadData, omc_SBInterval_new(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 2)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3)))) + (((modelica_integer) -1) + _i) * (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 3))))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 2)))) + (_i) * (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 3))))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3)))))), _ints);
          }
        }
      }

      if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 2)))) > mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 2))))))
      {
        omc_UnorderedSet_add(threadData, omc_SBInterval_new(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i2), 2)))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3)))))), _ints);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _ints;
}

DLLDirection
modelica_metatype omc_SBInterval_intersection(threadData_t *threadData, modelica_metatype _int1, modelica_metatype _int2)
{
  modelica_metatype _int = NULL;
  modelica_integer _new_lo;
  modelica_integer _new_step;
  modelica_integer _new_hi;
  modelica_integer _gcd_;
  modelica_integer _ua;
  modelica_integer _vb;
  modelica_integer _x;
  modelica_integer tmp1;
  modelica_integer tmp2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _int has no default value.
  // _new_lo has no default value.
  // _new_step has no default value.
  // _new_hi has no default value.
  // _gcd_ has no default value.
  // _ua has no default value.
  // _vb has no default value.
  // _x has no default value.
  if(((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 4)))) < mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int2), 2))))) || (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int2), 4)))) < mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 2)))))))
  {
    _int = omc_SBInterval_newEmpty(threadData);
  }
  else
  {
    _gcd_ = omc_SBInterval_euclid(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int2), 3)))) ,&_new_step ,&_ua ,&_vb);

    if((((modelica_integer) 0) != modelica_integer_mod(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 2)))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int2), 2))))), _gcd_)))
    {
      _int = omc_SBInterval_newEmpty(threadData);
    }
    else
    {
      tmp1 = _gcd_;
      if (tmp1 == 0) {MMC_THROW_INTERNAL();}
      tmp2 = _gcd_;
      if (tmp2 == 0) {MMC_THROW_INTERNAL();}
      _x = (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 2)))),tmp1).quot) * (_vb) + (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int2), 2)))),tmp2).quot) * (_ua) + modelica_integer_mod(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 2)))), _gcd_);

      _new_lo = modelica_integer_max((modelica_integer)(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 2))))),(modelica_integer)(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int2), 2))))));

      _new_hi = modelica_integer_min((modelica_integer)(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int1), 4))))),(modelica_integer)(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int2), 4))))));

      _new_lo = _new_lo + modelica_integer_mod(_x - _new_lo, _new_step);

      if((_new_hi < intMaxLit()))
      {
        _new_hi = _new_hi - modelica_integer_mod(_new_hi - _x, _new_step);
      }

      if((_new_hi < _new_lo))
      {
        _int = omc_SBInterval_newEmpty(threadData);
      }
      else
      {
        _int = omc_SBInterval_new(threadData, _new_lo, _new_step, _new_hi);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _int;
}

DLLDirection
modelica_metatype omc_SBInterval_crop(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fint)
{
  modelica_metatype _int = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _int = __omcQ_24in_5Fint;
  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 4)))) < intMaxLit()))
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_int), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = mmc_mk_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 4)))) - modelica_integer_mod(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 4)))) - (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 2))))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 3))))));
    _int = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _int;
}

DLLDirection
modelica_integer omc_SBInterval_upperBound(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _hi;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hi = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 4))));
  _return: OMC_LABEL_UNUSED
  return _hi;
}
modelica_metatype boxptr_SBInterval_upperBound(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _hi;
  modelica_metatype out_hi;
  _hi = omc_SBInterval_upperBound(threadData, _int);
  out_hi = mmc_mk_icon(_hi);
  return out_hi;
}

DLLDirection
modelica_integer omc_SBInterval_stepValue(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _step;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _step = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 3))));
  _return: OMC_LABEL_UNUSED
  return _step;
}
modelica_metatype boxptr_SBInterval_stepValue(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _step;
  modelica_metatype out_step;
  _step = omc_SBInterval_stepValue(threadData, _int);
  out_step = mmc_mk_icon(_step);
  return out_step;
}

DLLDirection
modelica_integer omc_SBInterval_lowerBound(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _lo;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lo = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_int), 2))));
  _return: OMC_LABEL_UNUSED
  return _lo;
}
modelica_metatype boxptr_SBInterval_lowerBound(threadData_t *threadData, modelica_metatype _int)
{
  modelica_integer _lo;
  modelica_metatype out_lo;
  _lo = omc_SBInterval_lowerBound(threadData, _int);
  out_lo = mmc_mk_icon(_lo);
  return out_lo;
}

DLLDirection
modelica_metatype omc_SBInterval_newFull(threadData_t *threadData)
{
  modelica_metatype _int = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box4(3, &SBInterval_INTERVAL__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(intMaxLit()));
  _int = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _int;
}

DLLDirection
modelica_metatype omc_SBInterval_newUnit(threadData_t *threadData)
{
  modelica_metatype _int = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _int = _OMC_LIT3;
  _return: OMC_LABEL_UNUSED
  return _int;
}

DLLDirection
modelica_metatype omc_SBInterval_newEmpty(threadData_t *threadData)
{
  modelica_metatype _int = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _int = _OMC_LIT4;
  _return: OMC_LABEL_UNUSED
  return _int;
}

DLLDirection
modelica_metatype omc_SBInterval_new(threadData_t *threadData, modelica_integer _lo, modelica_integer _step, modelica_integer _hi)
{
  modelica_metatype _int = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _int has no default value.
  if((((_lo >= ((modelica_integer) 0)) && (_step > ((modelica_integer) 0))) && (_hi >= ((modelica_integer) 0))))
  {
    if(((_lo <= _hi) && (_hi < intMaxLit())))
    {
      tmpMeta1 = mmc_mk_box4(3, &SBInterval_INTERVAL__desc, mmc_mk_integer(_lo), mmc_mk_integer(_step), mmc_mk_integer(_hi - modelica_integer_mod(_hi - _lo, _step)));
      _int = tmpMeta1;
    }
    else
    {
      if(((_lo <= _hi) && (_hi == intMaxLit())))
      {
        tmpMeta2 = mmc_mk_box4(3, &SBInterval_INTERVAL__desc, mmc_mk_integer(_lo), mmc_mk_integer(_step), mmc_mk_integer(intMaxLit()));
        _int = tmpMeta2;
      }
      else
      {
        tmpMeta3 = mmc_mk_box4(3, &SBInterval_INTERVAL__desc, mmc_mk_integer(_lo), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(_hi));
        _int = tmpMeta3;
      }
    }
  }
  else
  {
    if((((_lo >= ((modelica_integer) 0)) && (_step == ((modelica_integer) 0))) && (_hi == _lo)))
    {
      tmpMeta4 = mmc_mk_box4(3, &SBInterval_INTERVAL__desc, mmc_mk_integer(_lo), mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_hi));
      _int = tmpMeta4;
    }
    else
    {
      _int = omc_SBInterval_newEmpty(threadData);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _int;
}
modelica_metatype boxptr_SBInterval_new(threadData_t *threadData, modelica_metatype _lo, modelica_metatype _step, modelica_metatype _hi)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _int = NULL;
  tmp1 = mmc_unbox_integer(_lo);
  tmp2 = mmc_unbox_integer(_step);
  tmp3 = mmc_unbox_integer(_hi);
  _int = omc_SBInterval_new(threadData, tmp1, tmp2, tmp3);
  /* skip box _int; SBInterval */
  return _int;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_SBInterval_euclid(threadData_t *threadData, modelica_integer _a, modelica_integer _b, modelica_integer *out_m, modelica_integer *out_ua, modelica_integer *out_vb)
{
  modelica_integer _d;
  modelica_integer _m;
  modelica_integer _ua;
  modelica_integer _vb;
  modelica_integer _q;
  modelica_integer _r1;
  modelica_integer _r2;
  modelica_integer _s1;
  modelica_integer _s2;
  modelica_integer _tmp;
  modelica_integer tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _m has no default value.
  // _ua has no default value.
  // _vb has no default value.
  // _q has no default value.
  _r1 = _a;
  _r2 = _b;
  _s1 = _a;
  _s2 = ((modelica_integer) 0);
  // _tmp has no default value.
  while(1)
  {
    if(!(_r2 != ((modelica_integer) 0))) break;
    tmp1 = _r2;
    if (tmp1 == 0) {MMC_THROW_INTERNAL();}
    _q = modelica_div_integer(_r1,tmp1).quot;

    _tmp = _r2;

    _r2 = _r1 - ((_q) * (_r2));

    _r1 = _tmp;

    _tmp = _s2;

    _s2 = _s1 - ((_q) * (_s2));

    _s1 = _tmp;
  }

  _d = _r1;

  _m = labs(_s2);

  _ua = _s1;

  _vb = _r1 - _s1;
  _return: OMC_LABEL_UNUSED
  if (out_m) { *out_m = _m; }
  if (out_ua) { *out_ua = _ua; }
  if (out_vb) { *out_vb = _vb; }
  return _d;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SBInterval_euclid(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b, modelica_metatype *out_m, modelica_metatype *out_ua, modelica_metatype *out_vb)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _m;
  modelica_integer _ua;
  modelica_integer _vb;
  modelica_integer _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_integer(_a);
  tmp2 = mmc_unbox_integer(_b);
  _d = omc_SBInterval_euclid(threadData, tmp1, tmp2, &_m, &_ua, &_vb);
  out_d = mmc_mk_icon(_d);
  if (out_m) { *out_m = mmc_mk_icon(_m); }
  if (out_ua) { *out_ua = mmc_mk_icon(_ua); }
  if (out_vb) { *out_vb = mmc_mk_icon(_vb); }
  return out_d;
}

