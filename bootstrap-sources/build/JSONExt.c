#include "omc_simulation_settings.h"
#include "JSONExt.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "{\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\":{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,3,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,2,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "}}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "[]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "{\"Tuple\":{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,10,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "}} "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,3,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "UNKNOWN("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,8,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,1,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#include "util/modelica.h"

#include "JSONExt_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_JSONExt_getSome(threadData_t *threadData, modelica_metatype _a);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_getSome,2,0) {(void*) boxptr_JSONExt_getSome,0}};
#define boxvar_JSONExt_getSome MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_getSome)
PROTECTED_FUNCTION_STATIC modelica_string omc_JSONExt_getString(threadData_t *threadData, modelica_metatype _a);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_getString,2,0) {(void*) boxptr_JSONExt_getString,0}};
#define boxvar_JSONExt_getString MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_getString)
PROTECTED_FUNCTION_STATIC modelica_real omc_JSONExt_getReal(threadData_t *threadData, modelica_metatype _a);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_JSONExt_getReal(threadData_t *threadData, modelica_metatype _a);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_getReal,2,0) {(void*) boxptr_JSONExt_getReal,0}};
#define boxvar_JSONExt_getReal MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_getReal)
PROTECTED_FUNCTION_STATIC modelica_integer omc_JSONExt_getInteger(threadData_t *threadData, modelica_metatype _a);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_JSONExt_getInteger(threadData_t *threadData, modelica_metatype _a);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_getInteger,2,0) {(void*) boxptr_JSONExt_getInteger,0}};
#define boxvar_JSONExt_getInteger MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_getInteger)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_JSONExt_getRecordNamesHelper(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_getRecordNamesHelper,2,0) {(void*) boxptr_JSONExt_getRecordNamesHelper,0}};
#define boxvar_JSONExt_getRecordNamesHelper MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_getRecordNamesHelper)

modelica_metatype omc_JSONExt_getListElement(threadData_t *threadData, modelica_metatype _iany, modelica_integer _offset)
{
  modelica_metatype _iany_ext;
  int _offset_ext;
  modelica_metatype _oany_ext;
  modelica_metatype _oany = NULL;
  // _oany has no default value.
  _iany_ext = (modelica_metatype) _iany;
  _offset_ext = (int) _offset;
  _oany_ext = omc_get_list_element(_iany_ext, _offset_ext);
  _oany = (modelica_metatype)_oany_ext;
  return _oany;
}
modelica_metatype boxptr_JSONExt_getListElement(threadData_t *threadData, modelica_metatype _iany, modelica_metatype _offset)
{
  modelica_integer tmp1;
  modelica_metatype _oany = NULL;
  tmp1 = mmc_unbox_integer(_offset);
  _oany = omc_JSONExt_getListElement(threadData, _iany, tmp1);
  /* skip box _oany; polymorphic<TOUT> */
  return _oany;
}

modelica_metatype omc_JSONExt_getList(threadData_t *threadData, modelica_metatype _iany)
{
  modelica_metatype _iany_ext;
  modelica_metatype _oany_ext;
  modelica_metatype _oany = NULL;
  // _oany has no default value.
  _iany_ext = (modelica_metatype) _iany;
  _oany_ext = omc_get_list(_iany_ext);
  _oany = (modelica_metatype)_oany_ext;
  return _oany;
}

modelica_integer omc_JSONExt_getTupleSize(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _sz_ext;
  modelica_integer _sz;
  // _sz has no default value.
  _any_ext = (modelica_metatype) _any;
  _sz_ext = omc_get_tuple_size(_any_ext);
  _sz = (modelica_integer)_sz_ext;
  return _sz;
}
modelica_metatype boxptr_JSONExt_getTupleSize(threadData_t *threadData, modelica_metatype _any)
{
  modelica_integer _sz;
  modelica_metatype out_sz;
  _sz = omc_JSONExt_getTupleSize(threadData, _any);
  out_sz = mmc_mk_icon(_sz);
  return out_sz;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_JSONExt_getSome(threadData_t *threadData, modelica_metatype _a)
{
  modelica_metatype _a_ext;
  modelica_metatype _o_ext;
  modelica_metatype _o = NULL;
  // _o has no default value.
  _a_ext = (modelica_metatype) _a;
  _o_ext = omc_get_some(_a_ext);
  _o = (modelica_metatype)_o_ext;
  return _o;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_JSONExt_getString(threadData_t *threadData, modelica_metatype _a)
{
  modelica_metatype _a_ext;
  const char* _s_ext;
  modelica_string _s = NULL;
  // _s has no default value.
  _a_ext = (modelica_metatype) _a;
  _s_ext = omc_cast_string(_a_ext);
  _s = (modelica_string)mmc_mk_scon(_s_ext);
  return _s;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_JSONExt_getReal(threadData_t *threadData, modelica_metatype _a)
{
  modelica_metatype _a_ext;
  double _r_ext;
  modelica_real _r;
  // _r has no default value.
  _a_ext = (modelica_metatype) _a;
  _r_ext = omc_cast_real(_a_ext);
  _r = (modelica_real)_r_ext;
  return _r;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_JSONExt_getReal(threadData_t *threadData, modelica_metatype _a)
{
  modelica_real _r;
  modelica_metatype out_r;
  _r = omc_JSONExt_getReal(threadData, _a);
  out_r = mmc_mk_rcon(_r);
  return out_r;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_JSONExt_getInteger(threadData_t *threadData, modelica_metatype _a)
{
  modelica_metatype _a_ext;
  int _i_ext;
  modelica_integer _i;
  // _i has no default value.
  _a_ext = (modelica_metatype) _a;
  _i_ext = omc_cast_int(_a_ext);
  _i = (modelica_integer)_i_ext;
  return _i;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_JSONExt_getInteger(threadData_t *threadData, modelica_metatype _a)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_JSONExt_getInteger(threadData, _a);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

modelica_metatype omc_JSONExt_getRecordComponent(threadData_t *threadData, modelica_metatype _iany, modelica_integer _offset)
{
  modelica_metatype _iany_ext;
  int _offset_ext;
  modelica_metatype _oany_ext;
  modelica_metatype _oany = NULL;
  // _oany has no default value.
  _iany_ext = (modelica_metatype) _iany;
  _offset_ext = (int) _offset;
  _oany_ext = omc_get_record_component(_iany_ext, _offset_ext);
  _oany = (modelica_metatype)_oany_ext;
  return _oany;
}
modelica_metatype boxptr_JSONExt_getRecordComponent(threadData_t *threadData, modelica_metatype _iany, modelica_metatype _offset)
{
  modelica_integer tmp1;
  modelica_metatype _oany = NULL;
  tmp1 = mmc_unbox_integer(_offset);
  _oany = omc_JSONExt_getRecordComponent(threadData, _iany, tmp1);
  /* skip box _oany; polymorphic<TOUT> */
  return _oany;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_JSONExt_getRecordNamesHelper(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  modelica_metatype _nameAndComponentsNames_ext;
  modelica_metatype _nameAndComponentsNames = NULL;
  // _nameAndComponentsNames has no default value.
  _any_ext = (modelica_metatype) _any;
  _nameAndComponentsNames_ext = omc_get_record_names(_any_ext);
  _nameAndComponentsNames = (modelica_metatype)_nameAndComponentsNames_ext;
  return _nameAndComponentsNames;
}

DLLDirection
modelica_metatype omc_JSONExt_getRecordNames(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _nameAndComponentsNames = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _nameAndComponentsNames = listReverse(omc_JSONExt_getRecordNamesHelper(threadData, _any));
  _return: OMC_LABEL_UNUSED
  return _nameAndComponentsNames;
}

modelica_boolean omc_JSONExt_isCons(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _b_ext;
  modelica_boolean _b;
  // _b has no default value.
  _any_ext = (modelica_metatype) _any;
  _b_ext = omc_is_cons(_any_ext);
  _b = (modelica_boolean)_b_ext;
  return _b;
}
modelica_metatype boxptr_JSONExt_isCons(threadData_t *threadData, modelica_metatype _any)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSONExt_isCons(threadData, _any);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

modelica_boolean omc_JSONExt_isNil(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _b_ext;
  modelica_boolean _b;
  // _b has no default value.
  _any_ext = (modelica_metatype) _any;
  _b_ext = omc_is_nil(_any_ext);
  _b = (modelica_boolean)_b_ext;
  return _b;
}
modelica_metatype boxptr_JSONExt_isNil(threadData_t *threadData, modelica_metatype _any)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSONExt_isNil(threadData, _any);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

modelica_boolean omc_JSONExt_isSOME(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _b_ext;
  modelica_boolean _b;
  // _b has no default value.
  _any_ext = (modelica_metatype) _any;
  _b_ext = omc_is_some(_any_ext);
  _b = (modelica_boolean)_b_ext;
  return _b;
}
modelica_metatype boxptr_JSONExt_isSOME(threadData_t *threadData, modelica_metatype _any)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSONExt_isSOME(threadData, _any);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

modelica_boolean omc_JSONExt_isNONE(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _b_ext;
  modelica_boolean _b;
  // _b has no default value.
  _any_ext = (modelica_metatype) _any;
  _b_ext = omc_is_none(_any_ext);
  _b = (modelica_boolean)_b_ext;
  return _b;
}
modelica_metatype boxptr_JSONExt_isNONE(threadData_t *threadData, modelica_metatype _any)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSONExt_isNONE(threadData, _any);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

modelica_boolean omc_JSONExt_isTuple(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _b_ext;
  modelica_boolean _b;
  // _b has no default value.
  _any_ext = (modelica_metatype) _any;
  _b_ext = omc_is_tuple(_any_ext);
  _b = (modelica_boolean)_b_ext;
  return _b;
}
modelica_metatype boxptr_JSONExt_isTuple(threadData_t *threadData, modelica_metatype _any)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSONExt_isTuple(threadData, _any);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

modelica_boolean omc_JSONExt_isRecord(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _b_ext;
  modelica_boolean _b;
  // _b has no default value.
  _any_ext = (modelica_metatype) _any;
  _b_ext = omc_is_record(_any_ext);
  _b = (modelica_boolean)_b_ext;
  return _b;
}
modelica_metatype boxptr_JSONExt_isRecord(threadData_t *threadData, modelica_metatype _any)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSONExt_isRecord(threadData, _any);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

modelica_boolean omc_JSONExt_isArray(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _b_ext;
  modelica_boolean _b;
  // _b has no default value.
  _any_ext = (modelica_metatype) _any;
  _b_ext = omc_is_array(_any_ext);
  _b = (modelica_boolean)_b_ext;
  return _b;
}
modelica_metatype boxptr_JSONExt_isArray(threadData_t *threadData, modelica_metatype _any)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSONExt_isArray(threadData, _any);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

modelica_boolean omc_JSONExt_isString(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _b_ext;
  modelica_boolean _b;
  // _b has no default value.
  _any_ext = (modelica_metatype) _any;
  _b_ext = omc_is_string(_any_ext);
  _b = (modelica_boolean)_b_ext;
  return _b;
}
modelica_metatype boxptr_JSONExt_isString(threadData_t *threadData, modelica_metatype _any)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSONExt_isString(threadData, _any);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

modelica_boolean omc_JSONExt_isReal(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _b_ext;
  modelica_boolean _b;
  // _b has no default value.
  _any_ext = (modelica_metatype) _any;
  _b_ext = omc_is_real(_any_ext);
  _b = (modelica_boolean)_b_ext;
  return _b;
}
modelica_metatype boxptr_JSONExt_isReal(threadData_t *threadData, modelica_metatype _any)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSONExt_isReal(threadData, _any);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

modelica_boolean omc_JSONExt_isInteger(threadData_t *threadData, modelica_metatype _any)
{
  modelica_metatype _any_ext;
  int _b_ext;
  modelica_boolean _b;
  // _b has no default value.
  _any_ext = (modelica_metatype) _any;
  _b_ext = omc_is_integer(_any_ext);
  _b = (modelica_boolean)_b_ext;
  return _b;
}
modelica_metatype boxptr_JSONExt_isInteger(threadData_t *threadData, modelica_metatype _any)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSONExt_isInteger(threadData, _any);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_string omc_JSONExt_serialize(threadData_t *threadData, modelica_metatype _any, modelica_metatype _filter)
{
  modelica_string _s = NULL;
  modelica_string _name = NULL;
  modelica_metatype _components = NULL;
  modelica_metatype _lst = NULL;
  modelica_integer _no;
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
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_integer tmp34;
  modelica_integer tmp35;
  modelica_integer tmp36;
  modelica_metatype tmpMeta37;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = _OMC_LIT0;
  // _name has no default value.
  // _components has no default value.
  // _lst has no default value.
  _no = ((modelica_integer) 1);
  if(omc_JSONExt_isInteger(threadData, _any))
  {
    _s = intString(omc_JSONExt_getInteger(threadData, _any));

    goto _return;
  }

  if(omc_JSONExt_isReal(threadData, _any))
  {
    _s = realString(omc_JSONExt_getReal(threadData, _any));

    goto _return;
  }

  if(omc_JSONExt_isString(threadData, _any))
  {
    tmpMeta1 = stringAppend(_OMC_LIT1,omc_JSONExt_getString(threadData, _any));
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT1);
    _s = tmpMeta2;

    goto _return;
  }

  if(omc_JSONExt_isRecord(threadData, _any))
  {
    _components = omc_JSONExt_getRecordNames(threadData, _any);

    /* Pattern-matching assignment */
    tmpMeta3 = _components;
    if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
    tmpMeta4 = MMC_CAR(tmpMeta3);
    tmpMeta5 = MMC_CDR(tmpMeta3);
    _name = tmpMeta4;
    _components = tmpMeta5;

    tmpMeta6 = stringAppend(_OMC_LIT2,_name);
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT3);
    _s = tmpMeta7;

    _no = ((modelica_integer) 1);

    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    _lst = tmpMeta8;

    {
      modelica_metatype _c;
      for (tmpMeta9 = _components; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
      {
        _c = MMC_CAR(tmpMeta9);
        if((!listMember(_c, _filter)))
        {
          tmpMeta11 = stringAppend(_OMC_LIT1,_c);
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT4);
          tmpMeta13 = stringAppend(tmpMeta12,omc_JSONExt_serialize(threadData, omc_JSONExt_getRecordComponent(threadData, _any, _no), _filter));
          tmpMeta10 = mmc_mk_cons(tmpMeta13, _lst);
          _lst = tmpMeta10;
        }

        _no = ((modelica_integer) 1) + _no;
      }
    }

    _lst = listReverse(_lst);

    tmpMeta15 = stringAppend(_s,stringDelimitList(_lst, _OMC_LIT5));
    tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT6);
    _s = tmpMeta16;

    goto _return;
  }

  if(omc_JSONExt_isNil(threadData, _any))
  {
    _s = _OMC_LIT7;

    goto _return;
  }

  if(omc_JSONExt_isCons(threadData, _any))
  {
    tmpMeta17 = stringAppend(_s,_OMC_LIT8);
    _s = tmpMeta17;

    _no = ((modelica_integer) 1);

    tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
    _lst = tmpMeta18;

    {
      modelica_metatype _c;
      for (tmpMeta19 = omc_JSONExt_getList(threadData, _any); !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
      {
        _c = MMC_CAR(tmpMeta19);
        tmpMeta20 = mmc_mk_cons(omc_JSONExt_serialize(threadData, _c, _filter), _lst);
        _lst = tmpMeta20;
      }
    }

    _lst = listReverse(_lst);

    tmpMeta22 = stringAppend(_s,stringDelimitList(_lst, _OMC_LIT5));
    tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT9);
    _s = tmpMeta23;

    goto _return;
  }

  if(omc_JSONExt_isNONE(threadData, _any))
  {
    tmpMeta24 = stringAppend(_s,_OMC_LIT7);
    _s = tmpMeta24;

    goto _return;
  }

  if(omc_JSONExt_isSOME(threadData, _any))
  {
    tmpMeta25 = stringAppend(_s,_OMC_LIT8);
    tmpMeta26 = stringAppend(tmpMeta25,omc_JSONExt_serialize(threadData, omc_JSONExt_getSome(threadData, _any), _filter));
    tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT9);
    _s = tmpMeta27;

    goto _return;
  }

  if(omc_JSONExt_isTuple(threadData, _any))
  {
    tmpMeta28 = stringAppend(_s,_OMC_LIT10);
    _s = tmpMeta28;

    _no = ((modelica_integer) 1);

    tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
    _lst = tmpMeta29;

    tmp34 = ((modelica_integer) 1); tmp35 = 1; tmp36 = omc_JSONExt_getTupleSize(threadData, _any);
    if(!(((tmp35 > 0) && (tmp34 > tmp36)) || ((tmp35 < 0) && (tmp34 < tmp36))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp34, tmp36); _i += tmp35)
      {
        tmpMeta31 = stringAppend(_OMC_LIT1,intString(_i));
        tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT4);
        tmpMeta33 = stringAppend(tmpMeta32,omc_JSONExt_serialize(threadData, omc_JSONExt_getListElement(threadData, _any, _no), _filter));
        tmpMeta30 = mmc_mk_cons(tmpMeta33, _lst);
        _lst = tmpMeta30;
      }
    }

    _lst = listReverse(_lst);

    tmpMeta37 = stringAppend(_s,stringDelimitList(_lst, _OMC_LIT5));
    tmpMeta38 = stringAppend(tmpMeta37,_OMC_LIT11);
    _s = tmpMeta38;

    goto _return;
  }

  tmpMeta39 = stringAppend(_OMC_LIT12,mmc_anyString(_any));
  tmpMeta40 = stringAppend(tmpMeta39,_OMC_LIT13);
  _s = tmpMeta40;
  _return: OMC_LABEL_UNUSED
  return _s;
}

