#include "omc_simulation_settings.h"
#include "NBMatching.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "NBMatching.scalarMatching failed because the partition is structurally singular. Index Reduction is not yet supported"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,117,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,1) {_OMC_LIT5,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "equation to variable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,20,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "variable to equation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,20,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "eqn"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,3,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "var"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,3,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data " --> "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,5,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,1,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "NBMatching.continue_ failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,28,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,1) {_OMC_LIT15,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "NBMatching.singular failed to match partition:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,47,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "partition vars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,14,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "partition eqns"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,14,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,0,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "NBMatching.regular failed because the partition is structurally singular."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,73,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,1) {_OMC_LIT22,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "Scalar Matching"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,15,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#include "util/modelica.h"

#include "NBMatching_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBMatching_PFPlusExternal(threadData_t *threadData, modelica_metatype _m, modelica_metatype __omcQ_24in_5Fass1, modelica_metatype __omcQ_24in_5Fass2, modelica_boolean _clear, modelica_metatype *out_ass2, modelica_metatype *out_marked_eqns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBMatching_PFPlusExternal(threadData_t *threadData, modelica_metatype _m, modelica_metatype __omcQ_24in_5Fass1, modelica_metatype __omcQ_24in_5Fass2, modelica_metatype _clear, modelica_metatype *out_ass2, modelica_metatype *out_marked_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_PFPlusExternal,2,0) {(void*) boxptr_NBMatching_PFPlusExternal,0}};
#define boxvar_NBMatching_PFPlusExternal MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_PFPlusExternal)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBMatching_augmentPath(threadData_t *threadData, modelica_integer _eqn, modelica_metatype _m, modelica_metatype _mT, modelica_metatype __omcQ_24in_5Fvar_5Fto_5Feqn, modelica_metatype __omcQ_24in_5Fvar_5Fmarks, modelica_metatype __omcQ_24in_5Feqn_5Fmarks, modelica_metatype *out_var_marks, modelica_metatype *out_eqn_marks, modelica_boolean *out_pathFound);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBMatching_augmentPath(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _m, modelica_metatype _mT, modelica_metatype __omcQ_24in_5Fvar_5Fto_5Feqn, modelica_metatype __omcQ_24in_5Fvar_5Fmarks, modelica_metatype __omcQ_24in_5Feqn_5Fmarks, modelica_metatype *out_var_marks, modelica_metatype *out_eqn_marks, modelica_metatype *out_pathFound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_augmentPath,2,0) {(void*) boxptr_NBMatching_augmentPath,0}};
#define boxvar_NBMatching_augmentPath MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_augmentPath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBMatching_scalarMatching(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_boolean _transposed, modelica_boolean _partially, modelica_metatype *out_marked_eqns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBMatching_scalarMatching(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _transposed, modelica_metatype _partially, modelica_metatype *out_marked_eqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_scalarMatching,2,0) {(void*) boxptr_NBMatching_scalarMatching,0}};
#define boxvar_NBMatching_scalarMatching MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_scalarMatching)
PROTECTED_FUNCTION_STATIC modelica_string omc_NBMatching_toStringSingle(threadData_t *threadData, modelica_metatype _mapping, modelica_boolean _inverse);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBMatching_toStringSingle(threadData_t *threadData, modelica_metatype _mapping, modelica_metatype _inverse);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_toStringSingle,2,0) {(void*) boxptr_NBMatching_toStringSingle,0}};
#define boxvar_NBMatching_toStringSingle MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_toStringSingle)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBMatching_PFPlusExternal(threadData_t *threadData, modelica_metatype _m, modelica_metatype __omcQ_24in_5Fass1, modelica_metatype __omcQ_24in_5Fass2, modelica_boolean _clear, modelica_metatype *out_ass2, modelica_metatype *out_marked_eqns)
{
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _marked_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _n1;
  modelica_integer _n2;
  modelica_integer _nonZero;
  modelica_integer _cheap;
  modelica_integer _algIndx;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ass1 = __omcQ_24in_5Fass1;
  _ass2 = __omcQ_24in_5Fass2;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _marked_eqns = tmpMeta1;
  _n1 = arrayLength(_ass1);
  _n2 = arrayLength(_ass2);
  _nonZero = omc_NBBackendUtil_countElem(threadData, _m);
  _cheap = ((modelica_integer) 0);
  _algIndx = ((modelica_integer) 5);
  omc_BackendDAEEXT_setAssignment(threadData, _n2, _n1, _ass2, _ass1);

  omc_BackendDAEEXT_setAdjacencyMatrix(threadData, _n1, _n2, _nonZero, _m);

  omc_BackendDAEEXT_matching(threadData, _n1, _n2, _algIndx, _cheap, 1.0, (_clear?((modelica_integer) 1):((modelica_integer) 0)));

  omc_BackendDAEEXT_getAssignment(threadData, _ass2, _ass1);
  _return: OMC_LABEL_UNUSED
  if (out_ass2) { *out_ass2 = _ass2; }
  if (out_marked_eqns) { *out_marked_eqns = _marked_eqns; }
  return _ass1;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBMatching_PFPlusExternal(threadData_t *threadData, modelica_metatype _m, modelica_metatype __omcQ_24in_5Fass1, modelica_metatype __omcQ_24in_5Fass2, modelica_metatype _clear, modelica_metatype *out_ass2, modelica_metatype *out_marked_eqns)
{
  modelica_integer tmp1;
  modelica_metatype _ass1 = NULL;
  tmp1 = mmc_unbox_integer(_clear);
  _ass1 = omc_NBMatching_PFPlusExternal(threadData, _m, __omcQ_24in_5Fass1, __omcQ_24in_5Fass2, tmp1, out_ass2, out_marked_eqns);
  /* skip box _ass1; array<#Integer> */
  /* skip box _ass2; array<#Integer> */
  /* skip box _marked_eqns; list<list<#Integer>> */
  return _ass1;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBMatching_augmentPath(threadData_t *threadData, modelica_integer _eqn, modelica_metatype _m, modelica_metatype _mT, modelica_metatype __omcQ_24in_5Fvar_5Fto_5Feqn, modelica_metatype __omcQ_24in_5Fvar_5Fmarks, modelica_metatype __omcQ_24in_5Feqn_5Fmarks, modelica_metatype *out_var_marks, modelica_metatype *out_eqn_marks, modelica_boolean *out_pathFound)
{
  modelica_metatype _var_to_eqn = NULL;
  modelica_metatype _var_marks = NULL;
  modelica_metatype _eqn_marks = NULL;
  modelica_boolean _pathFound;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var_to_eqn = __omcQ_24in_5Fvar_5Fto_5Feqn;
  _var_marks = __omcQ_24in_5Fvar_5Fmarks;
  _eqn_marks = __omcQ_24in_5Feqn_5Fmarks;
  _pathFound = 0 /* false */;
  arrayUpdate(_eqn_marks,_eqn,mmc_mk_boolean(1 /* true */));

  {
    modelica_metatype _var;
    for (tmpMeta1 = arrayGet(_m,_eqn) /* DAE.ASUB */; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      if((mmc_unbox_integer(arrayGet(_var_to_eqn,mmc_unbox_integer(_var)) /* DAE.ASUB */) <= ((modelica_integer) 0)))
      {
        _pathFound = 1 /* true */;

        arrayUpdate(_var_to_eqn,mmc_unbox_integer(_var),mmc_mk_integer(_eqn));

        goto _return;
      }
    }
  }

  {
    modelica_metatype _var;
    for (tmpMeta3 = arrayGet(_m,_eqn) /* DAE.ASUB */; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _var = MMC_CAR(tmpMeta3);
      if((!mmc_unbox_boolean(arrayGet(_var_marks,mmc_unbox_integer(_var)) /* DAE.ASUB */)))
      {
        arrayUpdate(_var_marks,mmc_unbox_integer(_var),mmc_mk_boolean(1 /* true */));

        _var_to_eqn = omc_NBMatching_augmentPath(threadData, mmc_unbox_integer(arrayGet(_var_to_eqn,mmc_unbox_integer(_var)) /* DAE.ASUB */), _m, _mT, _var_to_eqn, _var_marks, _eqn_marks ,&_var_marks ,&_eqn_marks ,&_pathFound);

        if(_pathFound)
        {
          arrayUpdate(_var_to_eqn,mmc_unbox_integer(_var),mmc_mk_integer(_eqn));

          goto _return;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_var_marks) { *out_var_marks = _var_marks; }
  if (out_eqn_marks) { *out_eqn_marks = _eqn_marks; }
  if (out_pathFound) { *out_pathFound = _pathFound; }
  return _var_to_eqn;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBMatching_augmentPath(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _m, modelica_metatype _mT, modelica_metatype __omcQ_24in_5Fvar_5Fto_5Feqn, modelica_metatype __omcQ_24in_5Fvar_5Fmarks, modelica_metatype __omcQ_24in_5Feqn_5Fmarks, modelica_metatype *out_var_marks, modelica_metatype *out_eqn_marks, modelica_metatype *out_pathFound)
{
  modelica_integer tmp1;
  modelica_boolean _pathFound;
  modelica_metatype _var_to_eqn = NULL;
  tmp1 = mmc_unbox_integer(_eqn);
  _var_to_eqn = omc_NBMatching_augmentPath(threadData, tmp1, _m, _mT, __omcQ_24in_5Fvar_5Fto_5Feqn, __omcQ_24in_5Fvar_5Fmarks, __omcQ_24in_5Feqn_5Fmarks, out_var_marks, out_eqn_marks, &_pathFound);
  /* skip box _var_to_eqn; array<#Integer> */
  /* skip box _var_marks; array<#Boolean> */
  /* skip box _eqn_marks; array<#Boolean> */
  if (out_pathFound) { *out_pathFound = mmc_mk_icon(_pathFound); }
  return _var_to_eqn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBMatching_scalarMatching(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_boolean _transposed, modelica_boolean _partially, modelica_metatype *out_marked_eqns)
{
  modelica_metatype _matching = NULL;
  modelica_metatype _marked_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _nVars;
  modelica_integer _nEqns;
  modelica_metatype _var_to_eqn = NULL;
  modelica_metatype _eqn_to_var = NULL;
  modelica_metatype _var_marks = NULL;
  modelica_metatype _eqn_marks = NULL;
  modelica_boolean _pathFound;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_boolean tmp12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matching has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _marked_eqns = tmpMeta1;
  _nVars = arrayLength(_mT);
  _nEqns = arrayLength(_m);
  // _var_to_eqn has no default value.
  // _eqn_to_var has no default value.
  // _var_marks has no default value.
  // _eqn_marks has no default value.
  // _pathFound has no default value.
  _var_to_eqn = arrayCreate(_nVars, mmc_mk_integer(((modelica_integer) -1)));

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = _nEqns;
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _eqn;
    for(_eqn = ((modelica_integer) 1); in_range_integer(_eqn, tmp4, tmp6); _eqn += tmp5)
    {
      _var_marks = arrayCreate(_nVars, mmc_mk_boolean(0 /* false */));

      _eqn_marks = arrayCreate(_nEqns, mmc_mk_boolean(0 /* false */));

      _var_to_eqn = omc_NBMatching_augmentPath(threadData, _eqn, _m, _mT, _var_to_eqn, _var_marks, _eqn_marks ,&_var_marks ,&_eqn_marks ,&_pathFound);

      if((!_pathFound))
      {
        if((!_partially))
        {
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT6);
        }
        else
        {
          if(_transposed)
          {
            tmpMeta2 = mmc_mk_cons(omc_NBBackendUtil_findTrueIndices(threadData, _var_marks), _marked_eqns);
            _marked_eqns = tmpMeta2;
          }
          else
          {
            tmpMeta3 = mmc_mk_cons(omc_NBBackendUtil_findTrueIndices(threadData, _eqn_marks), _marked_eqns);
            _marked_eqns = tmpMeta3;
          }
        }
      }
    }
  }

  _eqn_to_var = arrayCreate(_nEqns, mmc_mk_integer(((modelica_integer) -1)));

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _nVars;
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer _var;
    for(_var = ((modelica_integer) 1); in_range_integer(_var, tmp7, tmp9); _var += tmp8)
    {
      if((mmc_unbox_integer(arrayGet(_var_to_eqn,_var) /* DAE.ASUB */) > ((modelica_integer) 0)))
      {
        arrayUpdate(_eqn_to_var,mmc_unbox_integer(arrayGet(_var_to_eqn,_var) /* DAE.ASUB */),mmc_mk_integer(_var));
      }
    }
  }

  if((_nEqns > ((modelica_integer) 0)))
  {
    omc_GCExt_free(threadData, _var_marks);

    omc_GCExt_free(threadData, _eqn_marks);
  }

  tmp12 = (modelica_boolean)_transposed;
  if(tmp12)
  {
    tmpMeta10 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, _eqn_to_var, _var_to_eqn);
    tmpMeta13 = tmpMeta10;
  }
  else
  {
    tmpMeta11 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, _var_to_eqn, _eqn_to_var);
    tmpMeta13 = tmpMeta11;
  }
  _matching = tmpMeta13;
  _return: OMC_LABEL_UNUSED
  if (out_marked_eqns) { *out_marked_eqns = _marked_eqns; }
  return _matching;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBMatching_scalarMatching(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _transposed, modelica_metatype _partially, modelica_metatype *out_marked_eqns)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _matching = NULL;
  tmp1 = mmc_unbox_integer(_transposed);
  tmp2 = mmc_unbox_integer(_partially);
  _matching = omc_NBMatching_scalarMatching(threadData, _m, _mT, tmp1, tmp2, out_marked_eqns);
  /* skip box _matching; NBMatching */
  /* skip box _marked_eqns; list<list<#Integer>> */
  return _matching;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NBMatching_toStringSingle(threadData_t *threadData, modelica_metatype _mapping, modelica_boolean _inverse)
{
  modelica_string _str = NULL;
  modelica_string _head = NULL;
  modelica_string _from = NULL;
  modelica_string _to = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _head = (_inverse?_OMC_LIT7:_OMC_LIT8);
  _from = (_inverse?_OMC_LIT9:_OMC_LIT10);
  _to = (_inverse?_OMC_LIT10:_OMC_LIT9);
  _str = omc_StringUtil_headline__4(threadData, _head);

  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = arrayLength(_mapping);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
    {
      tmpMeta1 = stringAppend(_str,_OMC_LIT11);
      tmpMeta2 = stringAppend(tmpMeta1,_from);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT12);
      tmpMeta4 = stringAppend(tmpMeta3,intString(_i));
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT13);
      tmpMeta6 = stringAppend(tmpMeta5,_to);
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT12);
      tmpMeta8 = stringAppend(tmpMeta7,intString(mmc_unbox_integer(arrayGet(_mapping,_i) /* DAE.ASUB */)));
      tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT14);
      _str = tmpMeta9;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBMatching_toStringSingle(threadData_t *threadData, modelica_metatype _mapping, modelica_metatype _inverse)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_inverse);
  _str = omc_NBMatching_toStringSingle(threadData, _mapping, tmp1);
  /* skip box _str; String */
  return _str;
}

static modelica_metatype closure0_NBVariable_size(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype resize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_size(thData, var_ptr, resize);
}static modelica_metatype closure1_NBVariable_size(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype resize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_size(thData, var_ptr, resize);
}static modelica_metatype closure2_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}static modelica_metatype closure3_NBEquation_Equation_size(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_metatype resize = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_size(thData, eqn_ptr, resize);
}
DLLDirection
modelica_metatype omc_NBMatching_getMatches(threadData_t *threadData, modelica_metatype _matching, modelica_metatype _mapping_opt, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype *out_unmatched_vars, modelica_metatype *out_matched_eqns, modelica_metatype *out_unmatched_eqns)
{
  modelica_metatype _matched_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _unmatched_vars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _matched_eqns = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _unmatched_eqns = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _mapping = NULL;
  modelica_metatype _var_map_matched = NULL;
  modelica_metatype _var_map_unmatched = NULL;
  modelica_metatype _eqn_map_matched = NULL;
  modelica_metatype _eqn_map_unmatched = NULL;
  modelica_metatype _arr_var = NULL;
  modelica_metatype _arr_eqn = NULL;
  modelica_integer _start_idx;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta37;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_integer tmp43;
  modelica_integer tmp44;
  modelica_integer tmp45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta51;
  modelica_integer tmp52;
  modelica_integer tmp53;
  modelica_integer tmp54;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _matched_vars = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _unmatched_vars = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _matched_eqns = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _unmatched_eqns = tmpMeta4;
  // _mapping has no default value.
  // _var_map_matched has no default value.
  // _var_map_unmatched has no default value.
  // _eqn_map_matched has no default value.
  // _eqn_map_unmatched has no default value.
  // _arr_var has no default value.
  // _arr_eqn has no default value.
  // _start_idx has no default value.
  if(isSome(_mapping_opt))
  {
    _mapping = omc_Util_getOption(threadData, _mapping_opt);

    _var_map_matched = omc_UnorderedMap_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 1));

    _var_map_unmatched = omc_UnorderedMap_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 1));

    _eqn_map_matched = omc_UnorderedMap_new(threadData, boxvar_NBEquation_Equation_hash, boxvar_NBEquation_Equation_equalName, ((modelica_integer) 1));

    _eqn_map_unmatched = omc_UnorderedMap_new(threadData, boxvar_NBEquation_Equation_hash, boxvar_NBEquation_Equation_equalName, ((modelica_integer) 1));

    tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))));
    if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
    {
      modelica_integer _var;
      for(_var = ((modelica_integer) 1); in_range_integer(_var, tmp8, tmp10); _var += tmp9)
      {
        _arr_var = omc_ExpandableArray_get(threadData, mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 3))),_var) /* DAE.ASUB */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 3))));

        /* Pattern-matching assignment */
        tmpMeta5 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 5))),mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 3))),_var) /* DAE.ASUB */)) /* DAE.ASUB */;
        tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
        tmp7 = mmc_unbox_integer(tmpMeta6);
        _start_idx = tmp7  /* pattern as ty=Integer */;

        if((mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))),_var) /* DAE.ASUB */) > ((modelica_integer) 0)))
        {
          omc_NBSlice_addToSliceMap(threadData, _arr_var, _var - _start_idx, _var_map_matched);
        }
        else
        {
          omc_NBSlice_addToSliceMap(threadData, _arr_var, _var - _start_idx, _var_map_unmatched);
        }
      }
    }

    tmp14 = ((modelica_integer) 1); tmp15 = 1; tmp16 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))));
    if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
    {
      modelica_integer _eqn;
      for(_eqn = ((modelica_integer) 1); in_range_integer(_eqn, tmp14, tmp16); _eqn += tmp15)
      {
        _arr_eqn = omc_ExpandableArray_get(threadData, mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),_eqn) /* DAE.ASUB */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 3))));

        /* Pattern-matching assignment */
        tmpMeta11 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 4))),mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),_eqn) /* DAE.ASUB */)) /* DAE.ASUB */;
        tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
        tmp13 = mmc_unbox_integer(tmpMeta12);
        _start_idx = tmp13  /* pattern as ty=Integer */;

        if((mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))),_eqn) /* DAE.ASUB */) > ((modelica_integer) 0)))
        {
          omc_NBSlice_addToSliceMap(threadData, _arr_eqn, _eqn - _start_idx, _eqn_map_matched);
        }
        else
        {
          omc_NBSlice_addToSliceMap(threadData, _arr_eqn, _eqn - _start_idx, _eqn_map_unmatched);
        }
      }
    }

    {
      modelica_metatype __omcQ_24tmpVar3;
      modelica_metatype* tmp18;
      modelica_metatype tmpMeta19;
      modelica_metatype tmpMeta20;
      modelica_metatype __omcQ_24tmpVar2;
      modelica_integer tmp21;
      modelica_metatype _slice_loopVar = 0;
      modelica_metatype _slice;
      _slice_loopVar = omc_NBSlice_fromMap(threadData, _var_map_matched);
      tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar3 = tmpMeta19; /* defaultValue */
      tmp18 = &__omcQ_24tmpVar3;
      while(1) {
        tmp21 = 1;
        if (!listEmpty(_slice_loopVar)) {
          _slice = MMC_CAR(_slice_loopVar);
          _slice_loopVar = MMC_CDR(_slice_loopVar);
          tmp21--;
        }
        if (tmp21 == 0) {
          tmpMeta20 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
          __omcQ_24tmpVar2 = omc_NBSlice_simplify(threadData, _slice, (modelica_fnptr) mmc_mk_box2(0,closure0_NBVariable_size,tmpMeta20));
          *tmp18 = mmc_mk_cons(__omcQ_24tmpVar2,0);
          tmp18 = &MMC_CDR(*tmp18);
        } else if (tmp21 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp18 = mmc_mk_nil();
      tmpMeta17 = __omcQ_24tmpVar3;
    }
    _matched_vars = tmpMeta17;

    {
      modelica_metatype __omcQ_24tmpVar5;
      modelica_metatype* tmp23;
      modelica_metatype tmpMeta24;
      modelica_metatype tmpMeta25;
      modelica_metatype __omcQ_24tmpVar4;
      modelica_integer tmp26;
      modelica_metatype _slice_loopVar = 0;
      modelica_metatype _slice;
      _slice_loopVar = omc_NBSlice_fromMap(threadData, _var_map_unmatched);
      tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar5 = tmpMeta24; /* defaultValue */
      tmp23 = &__omcQ_24tmpVar5;
      while(1) {
        tmp26 = 1;
        if (!listEmpty(_slice_loopVar)) {
          _slice = MMC_CAR(_slice_loopVar);
          _slice_loopVar = MMC_CDR(_slice_loopVar);
          tmp26--;
        }
        if (tmp26 == 0) {
          tmpMeta25 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
          __omcQ_24tmpVar4 = omc_NBSlice_simplify(threadData, _slice, (modelica_fnptr) mmc_mk_box2(0,closure1_NBVariable_size,tmpMeta25));
          *tmp23 = mmc_mk_cons(__omcQ_24tmpVar4,0);
          tmp23 = &MMC_CDR(*tmp23);
        } else if (tmp26 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp23 = mmc_mk_nil();
      tmpMeta22 = __omcQ_24tmpVar5;
    }
    _unmatched_vars = tmpMeta22;

    {
      modelica_metatype __omcQ_24tmpVar7;
      modelica_metatype* tmp28;
      modelica_metatype tmpMeta29;
      modelica_metatype tmpMeta30;
      modelica_metatype __omcQ_24tmpVar6;
      modelica_integer tmp31;
      modelica_metatype _slice_loopVar = 0;
      modelica_metatype _slice;
      _slice_loopVar = omc_NBSlice_fromMap(threadData, _eqn_map_matched);
      tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar7 = tmpMeta29; /* defaultValue */
      tmp28 = &__omcQ_24tmpVar7;
      while(1) {
        tmp31 = 1;
        if (!listEmpty(_slice_loopVar)) {
          _slice = MMC_CAR(_slice_loopVar);
          _slice_loopVar = MMC_CDR(_slice_loopVar);
          tmp31--;
        }
        if (tmp31 == 0) {
          tmpMeta30 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
          __omcQ_24tmpVar6 = omc_NBSlice_simplify(threadData, _slice, (modelica_fnptr) mmc_mk_box2(0,closure2_NBEquation_Equation_size,tmpMeta30));
          *tmp28 = mmc_mk_cons(__omcQ_24tmpVar6,0);
          tmp28 = &MMC_CDR(*tmp28);
        } else if (tmp31 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp28 = mmc_mk_nil();
      tmpMeta27 = __omcQ_24tmpVar7;
    }
    _matched_eqns = tmpMeta27;

    {
      modelica_metatype __omcQ_24tmpVar9;
      modelica_metatype* tmp33;
      modelica_metatype tmpMeta34;
      modelica_metatype tmpMeta35;
      modelica_metatype __omcQ_24tmpVar8;
      modelica_integer tmp36;
      modelica_metatype _slice_loopVar = 0;
      modelica_metatype _slice;
      _slice_loopVar = omc_NBSlice_fromMap(threadData, _eqn_map_unmatched);
      tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar9 = tmpMeta34; /* defaultValue */
      tmp33 = &__omcQ_24tmpVar9;
      while(1) {
        tmp36 = 1;
        if (!listEmpty(_slice_loopVar)) {
          _slice = MMC_CAR(_slice_loopVar);
          _slice_loopVar = MMC_CDR(_slice_loopVar);
          tmp36--;
        }
        if (tmp36 == 0) {
          tmpMeta35 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
          __omcQ_24tmpVar8 = omc_NBSlice_simplify(threadData, _slice, (modelica_fnptr) mmc_mk_box2(0,closure3_NBEquation_Equation_size,tmpMeta35));
          *tmp33 = mmc_mk_cons(__omcQ_24tmpVar8,0);
          tmp33 = &MMC_CDR(*tmp33);
        } else if (tmp36 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp33 = mmc_mk_nil();
      tmpMeta32 = __omcQ_24tmpVar9;
    }
    _unmatched_eqns = tmpMeta32;
  }
  else
  {
    tmp43 = ((modelica_integer) 1); tmp44 = 1; tmp45 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))));
    if(!(((tmp44 > 0) && (tmp43 > tmp45)) || ((tmp44 < 0) && (tmp43 < tmp45))))
    {
      modelica_integer _var;
      for(_var = ((modelica_integer) 1); in_range_integer(_var, tmp43, tmp45); _var += tmp44)
      {
        if((mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))),_var) /* DAE.ASUB */) > ((modelica_integer) 0)))
        {
          tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta39 = mmc_mk_box3(3, &NBSlice_SLICE__desc, omc_ExpandableArray_get(threadData, _var, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 3)))), tmpMeta38);
          tmpMeta37 = mmc_mk_cons(tmpMeta39, _matched_vars);
          _matched_vars = tmpMeta37;
        }
        else
        {
          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta42 = mmc_mk_box3(3, &NBSlice_SLICE__desc, omc_ExpandableArray_get(threadData, _var, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 3)))), tmpMeta41);
          tmpMeta40 = mmc_mk_cons(tmpMeta42, _unmatched_vars);
          _unmatched_vars = tmpMeta40;
        }
      }
    }

    tmp52 = ((modelica_integer) 1); tmp53 = 1; tmp54 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))));
    if(!(((tmp53 > 0) && (tmp52 > tmp54)) || ((tmp53 < 0) && (tmp52 < tmp54))))
    {
      modelica_integer _eqn;
      for(_eqn = ((modelica_integer) 1); in_range_integer(_eqn, tmp52, tmp54); _eqn += tmp53)
      {
        if((mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))),_eqn) /* DAE.ASUB */) > ((modelica_integer) 0)))
        {
          tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta48 = mmc_mk_box3(3, &NBSlice_SLICE__desc, omc_ExpandableArray_get(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 3)))), tmpMeta47);
          tmpMeta46 = mmc_mk_cons(tmpMeta48, _matched_eqns);
          _matched_eqns = tmpMeta46;
        }
        else
        {
          tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta51 = mmc_mk_box3(3, &NBSlice_SLICE__desc, omc_ExpandableArray_get(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 3)))), tmpMeta50);
          tmpMeta49 = mmc_mk_cons(tmpMeta51, _unmatched_eqns);
          _unmatched_eqns = tmpMeta49;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_unmatched_vars) { *out_unmatched_vars = _unmatched_vars; }
  if (out_matched_eqns) { *out_matched_eqns = _matched_eqns; }
  if (out_unmatched_eqns) { *out_unmatched_eqns = _unmatched_eqns; }
  return _matched_vars;
}

DLLDirection
modelica_metatype omc_NBMatching_getAssignments(threadData_t *threadData, modelica_metatype _matching, modelica_metatype _m, modelica_metatype _mT, modelica_metatype *out_eqn_to_var)
{
  modelica_metatype _var_to_eqn = NULL;
  modelica_metatype _eqn_to_var = NULL;
  modelica_integer _nVars;
  modelica_integer _nEqns;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var_to_eqn has no default value.
  // _eqn_to_var has no default value.
  _nVars = arrayLength(_mT);
  _nEqns = arrayLength(_m);
  _var_to_eqn = omc_Array_expandToSize(threadData, _nVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))), mmc_mk_integer(((modelica_integer) -1)));

  _eqn_to_var = omc_Array_expandToSize(threadData, _nEqns, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))), mmc_mk_integer(((modelica_integer) -1)));
  _return: OMC_LABEL_UNUSED
  if (out_eqn_to_var) { *out_eqn_to_var = _eqn_to_var; }
  return _var_to_eqn;
}

static modelica_metatype closure4_intGt(threadData_t *thData, modelica_metatype closure, modelica_metatype i1)
{
  modelica_metatype i2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_intGt(thData, i1, i2);
}static modelica_metatype closure5_intGt(threadData_t *thData, modelica_metatype closure, modelica_metatype i1)
{
  modelica_metatype i2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_intGt(thData, i1, i2);
}
DLLDirection
modelica_boolean omc_NBMatching_isPerfect(threadData_t *threadData, modelica_metatype _matching)
{
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  if((arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2)))) > arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))))))
  {
    tmpMeta1 = mmc_mk_box1(0, mmc_mk_integer(((modelica_integer) 0)));
    _b = omc_Array_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))), (modelica_fnptr) mmc_mk_box2(0,closure4_intGt,tmpMeta1));
  }
  else
  {
    tmpMeta2 = mmc_mk_box1(0, mmc_mk_integer(((modelica_integer) 0)));
    _b = omc_Array_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))), (modelica_fnptr) mmc_mk_box2(0,closure5_intGt,tmpMeta2));
  }
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBMatching_isPerfect(threadData_t *threadData, modelica_metatype _matching)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBMatching_isPerfect(threadData, _matching);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NBMatching_isEmpty(threadData_t *threadData, modelica_metatype _matching)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = ((arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3)))) == ((modelica_integer) 0)) && (arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2)))) == ((modelica_integer) 0)));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBMatching_isEmpty(threadData_t *threadData, modelica_metatype _matching)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBMatching_isEmpty(threadData, _matching);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NBMatching_continue__(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype _adj, modelica_boolean _transposed, modelica_boolean _clear, modelica_metatype *out_marked_eqns, modelica_metatype *out_mapping, modelica_integer *out_matrixStrictness)
{
  modelica_metatype _matching = NULL;
  modelica_metatype _marked_eqns = NULL;
  modelica_metatype _mapping = NULL;
  modelica_integer _matrixStrictness;
  modelica_metatype _var_to_eqn = NULL;
  modelica_metatype _eqn_to_var = NULL;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _matching = __omcQ_24in_5Fmatching;
  // _marked_eqns has no default value.
  // _mapping has no default value.
  // _matrixStrictness has no default value.
  // _var_to_eqn has no default value.
  // _eqn_to_var has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _adj;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          _var_to_eqn = omc_NBMatching_getAssignments(threadData, _matching, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 3))) ,&_eqn_to_var);

          _var_to_eqn = omc_NBMatching_PFPlusExternal(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 2))), _var_to_eqn, _eqn_to_var, _clear ,&_eqn_to_var ,&_marked_eqns);

          tmpMeta5 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, _var_to_eqn, _eqn_to_var);
          _matching = tmpMeta5;
          tmpMeta[0+0] = _matching;
          tmpMeta[0+1] = _marked_eqns;
          tmpMeta[0+2] = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 4))));
          tmp1_c3 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 6))));
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, listArray(tmpMeta6), listArray(tmpMeta7));
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta8;
          tmpMeta[0+1] = tmpMeta9;
          tmpMeta[0+2] = mmc_mk_none();
          tmp1_c3 = 4;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT16);
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
  _matching = tmpMeta[0+0];
  _marked_eqns = tmpMeta[0+1];
  _mapping = tmpMeta[0+2];
  _matrixStrictness = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_marked_eqns) { *out_marked_eqns = _marked_eqns; }
  if (out_mapping) { *out_mapping = _mapping; }
  if (out_matrixStrictness) { *out_matrixStrictness = _matrixStrictness; }
  return _matching;
}
modelica_metatype boxptr_NBMatching_continue__(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype _adj, modelica_metatype _transposed, modelica_metatype _clear, modelica_metatype *out_marked_eqns, modelica_metatype *out_mapping, modelica_metatype *out_matrixStrictness)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _matrixStrictness;
  modelica_metatype _matching = NULL;
  tmp1 = mmc_unbox_integer(_transposed);
  tmp2 = mmc_unbox_integer(_clear);
  _matching = omc_NBMatching_continue__(threadData, __omcQ_24in_5Fmatching, _adj, tmp1, tmp2, out_marked_eqns, out_mapping, &_matrixStrictness);
  /* skip box _matching; NBMatching */
  /* skip box _marked_eqns; list<list<#Integer>> */
  /* skip box _mapping; Option<NBAdjacency.Mapping> */
  if (out_matrixStrictness) { *out_matrixStrictness = mmc_mk_icon(_matrixStrictness); }
  return _matching;
}

DLLDirection
modelica_metatype omc_NBMatching_singular(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvars, modelica_metatype __omcQ_24in_5Feqns, modelica_metatype _funcMap, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_integer _kind, modelica_boolean _transposed, modelica_boolean _clear, modelica_metatype *out_adj, modelica_metatype *out_full, modelica_metatype *out_vars, modelica_metatype *out_eqns, modelica_metatype *out_varData, modelica_metatype *out_eqData)
{
  modelica_metatype _matching = NULL;
  modelica_metatype _adj = NULL;
  modelica_metatype _full = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _varData = NULL;
  modelica_metatype _eqData = NULL;
  modelica_metatype _marked_eqns = NULL;
  modelica_metatype _mapping = NULL;
  modelica_integer _matrixStrictness;
  modelica_boolean _changed;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _matching = __omcQ_24in_5Fmatching;
  _adj = __omcQ_24in_5Fadj;
  _full = __omcQ_24in_5Ffull;
  _vars = __omcQ_24in_5Fvars;
  _eqns = __omcQ_24in_5Feqns;
  _varData = __omcQ_24in_5FvarData;
  _eqData = __omcQ_24in_5FeqData;
  // _marked_eqns has no default value.
  // _mapping has no default value.
  // _matrixStrictness has no default value.
  // _changed has no default value.
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
          /* Pattern matching succeeded */
          _matching = omc_NBMatching_continue__(threadData, _matching, _adj, _transposed, _clear ,&_marked_eqns ,&_mapping ,&_matrixStrictness);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT17,omc_NBVariable_VariablePointers_toString(threadData, _vars, _OMC_LIT18, mmc_mk_none(), 1 /* true */));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT14);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NBEquation_EquationPointers_toString(threadData, _eqns, _OMC_LIT19, mmc_mk_none(), 1 /* true */, mmc_mk_none()));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT14);
          tmpMeta10 = stringAppend(tmpMeta9,omc_NBAdjacency_Matrix_toString(threadData, _adj, _OMC_LIT20));
          tmpMeta5 = mmc_mk_cons(tmpMeta10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta5);

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

  if(((modelica_integer)_kind == 5))
  {
    _adj = omc_NBResolveSingularities_balanceInitialization(threadData, _adj, _full, _vars, _eqns, _varData, _eqData, (modelica_integer)_kind, _funcMap, _matching, _mapping ,&_full ,&_vars ,&_eqns ,&_varData ,&_eqData ,&_changed);
  }
  else
  {
    _adj = omc_NBResolveSingularities_indexReduction(threadData, _adj, _full, _vars, _eqns, _varData, _eqData, (modelica_integer)_kind, _funcMap, _matching, _mapping ,&_full ,&_vars ,&_eqns ,&_varData ,&_eqData ,&_changed);
  }

  if(_changed)
  {
    _full = omc_NBAdjacency_Matrix_createFull(threadData, _vars, _eqns, (modelica_integer)_kind);

    _adj = omc_NBAdjacency_Matrix_fullToFinal(threadData, _full, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqns), 2))), _eqns, (modelica_integer)_matrixStrictness, _OMC_LIT21);

    if(((modelica_integer)_kind == 5))
    {
      tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta13 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, listArray(tmpMeta11), listArray(tmpMeta12));
      _matching = omc_NBMatching_regular(threadData, tmpMeta13, _adj, 0 /* false */, 0 /* false */, 1 /* true */);
    }
    else
    {
      tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta16 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, listArray(tmpMeta14), listArray(tmpMeta15));
      /* Tail recursive call */
      __omcQ_24in_5Fmatching = tmpMeta16;
      __omcQ_24in_5Fadj = _adj;
      __omcQ_24in_5Ffull = _full;
      __omcQ_24in_5Fvars = _vars;
      __omcQ_24in_5Feqns = _eqns;
      __omcQ_24in_5FvarData = _varData;
      __omcQ_24in_5FeqData = _eqData;
      _kind = (modelica_integer)_kind;
      _clear = 1 /* true */;
      goto _tailrecursive;
      /* TODO: Make sure any eventual dead code below is never generated */
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_adj) { *out_adj = _adj; }
  if (out_full) { *out_full = _full; }
  if (out_vars) { *out_vars = _vars; }
  if (out_eqns) { *out_eqns = _eqns; }
  if (out_varData) { *out_varData = _varData; }
  if (out_eqData) { *out_eqData = _eqData; }
  return _matching;
}
modelica_metatype boxptr_NBMatching_singular(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvars, modelica_metatype __omcQ_24in_5Feqns, modelica_metatype _funcMap, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _kind, modelica_metatype _transposed, modelica_metatype _clear, modelica_metatype *out_adj, modelica_metatype *out_full, modelica_metatype *out_vars, modelica_metatype *out_eqns, modelica_metatype *out_varData, modelica_metatype *out_eqData)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _matching = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  tmp2 = mmc_unbox_integer(_transposed);
  tmp3 = mmc_unbox_integer(_clear);
  _matching = omc_NBMatching_singular(threadData, __omcQ_24in_5Fmatching, __omcQ_24in_5Fadj, __omcQ_24in_5Ffull, __omcQ_24in_5Fvars, __omcQ_24in_5Feqns, _funcMap, __omcQ_24in_5FvarData, __omcQ_24in_5FeqData, tmp1, tmp2, tmp3, out_adj, out_full, out_vars, out_eqns, out_varData, out_eqData);
  /* skip box _matching; NBMatching */
  /* skip box _adj; NBAdjacency.Matrix */
  /* skip box _full; NBAdjacency.Matrix */
  /* skip box _vars; NBVariable.VariablePointers */
  /* skip box _eqns; NBEquation.EquationPointers */
  /* skip box _varData; NBVariable.VarData */
  /* skip box _eqData; NBEquation.EqData */
  return _matching;
}

DLLDirection
modelica_metatype omc_NBMatching_regular(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype _adj, modelica_boolean _transposed, modelica_boolean _partially, modelica_boolean _clear)
{
  modelica_metatype _matching = NULL;
  modelica_metatype _marked_eqns = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _matching = __omcQ_24in_5Fmatching;
  // _marked_eqns has no default value.
  _matching = omc_NBMatching_continue__(threadData, _matching, _adj, _transposed, _clear ,&_marked_eqns ,NULL ,NULL);

  if(((!_partially) && (!listEmpty(omc_List_flatten(threadData, _marked_eqns)))))
  {
    omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT23);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return _matching;
}
modelica_metatype boxptr_NBMatching_regular(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype _adj, modelica_metatype _transposed, modelica_metatype _partially, modelica_metatype _clear)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _matching = NULL;
  tmp1 = mmc_unbox_integer(_transposed);
  tmp2 = mmc_unbox_integer(_partially);
  tmp3 = mmc_unbox_integer(_clear);
  _matching = omc_NBMatching_regular(threadData, __omcQ_24in_5Fmatching, _adj, tmp1, tmp2, tmp3);
  /* skip box _matching; NBMatching */
  return _matching;
}

DLLDirection
modelica_metatype omc_NBMatching_trivial(threadData_t *threadData, modelica_integer _n)
{
  modelica_metatype _matching = NULL;
  modelica_metatype _arr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matching has no default value.
  _arr = omc_Array_createIntRange(threadData, _n);
  tmpMeta1 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, _arr, _arr);
  _matching = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _matching;
}
modelica_metatype boxptr_NBMatching_trivial(threadData_t *threadData, modelica_metatype _n)
{
  modelica_integer tmp1;
  modelica_metatype _matching = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _matching = omc_NBMatching_trivial(threadData, tmp1);
  /* skip box _matching; NBMatching */
  return _matching;
}

DLLDirection
modelica_string omc_NBMatching_toString(threadData_t *threadData, modelica_metatype _matching, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  tmpMeta1 = stringAppend(_str,_OMC_LIT24);
  tmpMeta2 = stringAppend(omc_StringUtil_headline__2(threadData, tmpMeta1),_OMC_LIT14);
  _str = tmpMeta2;

  tmpMeta3 = stringAppend(_str,omc_NBMatching_toStringSingle(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))), 0 /* false */));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT14);
  _str = tmpMeta4;

  tmpMeta5 = stringAppend(_str,omc_NBMatching_toStringSingle(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))), 1 /* true */));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT14);
  _str = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _str;
}

