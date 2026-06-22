#include "omc_simulation_settings.h"
#include "Rational.h"
#define _OMC_LIT0_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#include "util/modelica.h"

#include "Rational_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Rational_reduce(threadData_t *threadData, modelica_integer _i1, modelica_integer _i2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Rational_reduce(threadData_t *threadData, modelica_metatype _i1, modelica_metatype _i2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_reduce,2,0) {(void*) boxptr_Rational_reduce,0}};
#define boxvar_Rational_reduce MMC_REFSTRUCTLIT(boxvar_lit_Rational_reduce)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Rational_reduce(threadData_t *threadData, modelica_integer _i1, modelica_integer _i2)
{
  modelica_metatype _r = NULL;
  modelica_integer _d;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  _d = omc_Util_gcd(threadData, _i1, _i2);
  tmp1 = _d;
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  tmp2 = _d;
  if (tmp2 == 0) {MMC_THROW_INTERNAL();}
  tmpMeta3 = mmc_mk_box3(3, &Rational_RATIONAL__desc, mmc_mk_integer(modelica_div_integer(_i1,tmp1).quot), mmc_mk_integer(modelica_div_integer(_i2,tmp2).quot));
  _r = omc_Rational_normalize(threadData, tmpMeta3);
  _return: OMC_LABEL_UNUSED
  return _r;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Rational_reduce(threadData_t *threadData, modelica_metatype _i1, modelica_metatype _i2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _r = NULL;
  tmp1 = mmc_unbox_integer(_i1);
  tmp2 = mmc_unbox_integer(_i2);
  _r = omc_Rational_reduce(threadData, tmp1, tmp2);
  /* skip box _r; Rational */
  return _r;
}

DLLDirection
modelica_metatype omc_Rational_div(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_metatype _r = NULL;
  modelica_integer _g1;
  modelica_integer _g2;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  _g1 = omc_Util_gcd(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 2)))));
  _g2 = omc_Util_gcd(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))));
  tmp1 = _g1;
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  tmp2 = _g2;
  if (tmp2 == 0) {MMC_THROW_INTERNAL();}
  tmp3 = _g2;
  if (tmp3 == 0) {MMC_THROW_INTERNAL();}
  tmp4 = _g1;
  if (tmp4 == 0) {MMC_THROW_INTERNAL();}
  _r = omc_Rational_reduce(threadData, (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 2)))),tmp1).quot) * (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3)))),tmp2).quot), (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))),tmp3).quot) * (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 2)))),tmp4).quot));
  _return: OMC_LABEL_UNUSED
  return _r;
}

DLLDirection
modelica_metatype omc_Rational_inv(threadData_t *threadData, modelica_metatype _r)
{
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &Rational_RATIONAL__desc, mmc_mk_integer((omc_Util_intSign(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 2)))))) * (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 3)))))), mmc_mk_integer(labs(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 2)))))));
  _s = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_Rational_mul(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_metatype _r = NULL;
  modelica_integer _g1;
  modelica_integer _g2;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  _g1 = omc_Util_gcd(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3)))));
  _g2 = omc_Util_gcd(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))));
  tmp1 = _g1;
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  tmp2 = _g2;
  if (tmp2 == 0) {MMC_THROW_INTERNAL();}
  tmp3 = _g2;
  if (tmp3 == 0) {MMC_THROW_INTERNAL();}
  tmp4 = _g1;
  if (tmp4 == 0) {MMC_THROW_INTERNAL();}
  _r = omc_Rational_reduce(threadData, (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 2)))),tmp1).quot) * (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 2)))),tmp2).quot), (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))),tmp3).quot) * (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3)))),tmp4).quot));
  _return: OMC_LABEL_UNUSED
  return _r;
}

DLLDirection
modelica_metatype omc_Rational_sub(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_metatype _r = NULL;
  modelica_integer _g;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  _g = omc_Util_gcd(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3)))));
  tmp1 = _g;
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  tmp2 = _g;
  if (tmp2 == 0) {MMC_THROW_INTERNAL();}
  tmp3 = _g;
  if (tmp3 == 0) {MMC_THROW_INTERNAL();}
  _r = omc_Rational_reduce(threadData, (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 2))))) * (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3)))),tmp1).quot) - ((modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))),tmp2).quot) * (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 2)))))), (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))),tmp3).quot) * (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3))))));
  _return: OMC_LABEL_UNUSED
  return _r;
}

DLLDirection
modelica_metatype omc_Rational_neg(threadData_t *threadData, modelica_metatype _r)
{
  modelica_metatype _s = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &Rational_RATIONAL__desc, mmc_mk_integer((-(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 2))))))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 3))));
  _s = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_Rational_add(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_metatype _r = NULL;
  modelica_integer _g;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  _g = omc_Util_gcd(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3)))));
  tmp1 = _g;
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  tmp2 = _g;
  if (tmp2 == 0) {MMC_THROW_INTERNAL();}
  tmp3 = _g;
  if (tmp3 == 0) {MMC_THROW_INTERNAL();}
  _r = omc_Rational_reduce(threadData, (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 2))))) * (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3)))),tmp1).quot) + (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))),tmp2).quot) * (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 2))))), (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))),tmp3).quot) * (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3))))));
  _return: OMC_LABEL_UNUSED
  return _r;
}

DLLDirection
modelica_metatype omc_Rational_normalize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fr)
{
  modelica_metatype _r = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _r = __omcQ_24in_5Fr;
  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 2)))) == ((modelica_integer) 0)))
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_r), 4*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = mmc_mk_integer(((modelica_integer) 1));
    _r = tmpMeta1;
  }
  else
  {
    if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 3)))) < ((modelica_integer) 0)))
    {
      tmpMeta2 = mmc_mk_box3(3, &Rational_RATIONAL__desc, mmc_mk_integer((-(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 2))))))), mmc_mk_integer((-(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 3))))))));
      _r = tmpMeta2;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _r;
}

DLLDirection
modelica_string omc_Rational_toString(threadData_t *threadData, modelica_metatype _r)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 2))))),_OMC_LIT0);
  tmpMeta2 = stringAppend(tmpMeta1,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 3))))));
  _str = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_integer omc_Rational_compare(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_integer _i;
  modelica_integer _gn;
  modelica_integer _gd;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  _gn = omc_Util_gcd(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 2)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 2)))));
  _gd = omc_Util_gcd(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3)))));
  tmp1 = _gn;
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  tmp2 = _gd;
  if (tmp2 == 0) {MMC_THROW_INTERNAL();}
  tmp3 = _gn;
  if (tmp3 == 0) {MMC_THROW_INTERNAL();}
  tmp4 = _gd;
  if (tmp4 == 0) {MMC_THROW_INTERNAL();}
  _i = omc_Util_intCompare(threadData, (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 2)))),tmp1).quot) * (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3)))),tmp2).quot), (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 2)))),tmp3).quot) * (modelica_div_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))),tmp4).quot));
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_Rational_compare(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_Rational_compare(threadData, _r1, _r2);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_boolean omc_Rational_isEqual(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = ((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 2)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 2))))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r1), 3)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r2), 3))))));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_Rational_isEqual(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Rational_isEqual(threadData, _r1, _r2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

