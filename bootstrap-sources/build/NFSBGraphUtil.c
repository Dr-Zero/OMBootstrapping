#include "omc_simulation_settings.h"
#include "NFSBGraphUtil.h"
#define _OMC_LIT0_data "NFSBGraphUtil.linearMapFromIntervals got incompatible connect"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,61,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "/projects/OpenModelica-session2/OMCompiler/Compiler/NFFrontEnd/NFSBGraphUtil.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,79,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2_6,1.782113391e9);
#define _OMC_LIT2_6 MMC_REFREALLIT(_OMC_LIT_STRUCT2_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(307)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(307)),MMC_IMMEDIATE(MMC_TAGFIXNUM(85)),_OMC_LIT2_6}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT3,0.0);
#define _OMC_LIT3 MMC_REFREALLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4_6,1.782113391e9);
#define _OMC_LIT4_6 MMC_REFREALLIT(_OMC_LIT_STRUCT4_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(323)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(323)),MMC_IMMEDIATE(MMC_TAGFIXNUM(87)),_OMC_LIT4_6}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "E"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "NFSBGraphUtil.intervalFromBinaryExp got unknown expression "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,59,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT8_6,1.782113391e9);
#define _OMC_LIT8_6 MMC_REFREALLIT(_OMC_LIT_STRUCT8_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(245)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(246)),MMC_IMMEDIATE(MMC_TAGFIXNUM(83)),_OMC_LIT8_6}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "NFSBGraphUtil.intervalFromBinaryExp got unknown operator "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,57,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT11_6,1.782113391e9);
#define _OMC_LIT11_6 MMC_REFREALLIT(_OMC_LIT_STRUCT11_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(239)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(240)),MMC_IMMEDIATE(MMC_TAGFIXNUM(76)),_OMC_LIT11_6}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,0,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT3}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT13,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "NFSBGraphUtil.intervalFromExp got unknown expression "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,53,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT16_6,1.782113391e9);
#define _OMC_LIT16_6 MMC_REFREALLIT(_OMC_LIT_STRUCT16_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(198)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(199)),MMC_IMMEDIATE(MMC_TAGFIXNUM(71)),_OMC_LIT16_6}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "NFSBGraphUtil.multiIntervalFromDimensions: unknown dimension "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,61,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT18_6,1.782113391e9);
#define _OMC_LIT18_6 MMC_REFREALLIT(_OMC_LIT_STRUCT18_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(82)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(83)),MMC_IMMEDIATE(MMC_TAGFIXNUM(47)),_OMC_LIT18_6}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#include "util/modelica.h"

#include "NFSBGraphUtil_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSBGraphUtil_evalCrefs_evalCref(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSBGraphUtil_evalCrefs_evalCref,2,0) {(void*) boxptr_NFSBGraphUtil_evalCrefs_evalCref,0}};
#define boxvar_NFSBGraphUtil_evalCrefs_evalCref MMC_REFSTRUCTLIT(boxvar_lit_NFSBGraphUtil_evalCrefs_evalCref)

DLLDirection
modelica_string omc_NFSBGraphUtil_linearMapFromIntervals(threadData_t *threadData, modelica_integer _d1, modelica_integer _d2, modelica_metatype _mi1, modelica_metatype _mi2, modelica_metatype _eCount, modelica_metatype *out_pw1, modelica_metatype *out_pw2)
{
  modelica_string _name = NULL;
  modelica_metatype _pw1 = NULL;
  modelica_metatype _pw2 = NULL;
  modelica_metatype _ints1 = NULL;
  modelica_metatype _ints2 = NULL;
  modelica_metatype _mi = NULL;
  modelica_integer _mi1_sz;
  modelica_integer _mi2_sz;
  modelica_integer _sz;
  modelica_integer _sz1;
  modelica_integer _sz2;
  modelica_integer _count;
  modelica_integer _aux_ec;
  modelica_metatype _g1 = NULL;
  modelica_metatype _g2 = NULL;
  modelica_metatype _o1 = NULL;
  modelica_metatype _o2 = NULL;
  modelica_real _g1i;
  modelica_real _g2i;
  modelica_real _o1i;
  modelica_real _o2i;
  modelica_metatype _i1 = NULL;
  modelica_metatype _i2 = NULL;
  modelica_metatype _new_ec = NULL;
  modelica_metatype _s = NULL;
  modelica_metatype _lm1 = NULL;
  modelica_metatype _lm2 = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  // _pw1 has no default value.
  // _pw2 has no default value.
  // _ints1 has no default value.
  // _ints2 has no default value.
  // _mi has no default value.
  // _mi1_sz has no default value.
  // _mi2_sz has no default value.
  // _sz has no default value.
  // _sz1 has no default value.
  // _sz2 has no default value.
  // _count has no default value.
  // _aux_ec has no default value.
  // _g1 has no default value.
  // _g2 has no default value.
  // _o1 has no default value.
  // _o2 has no default value.
  // _g1i has no default value.
  // _g2i has no default value.
  // _o1i has no default value.
  // _o2i has no default value.
  // _i1 has no default value.
  // _i2 has no default value.
  // _new_ec has no default value.
  // _s has no default value.
  // _lm1 has no default value.
  // _lm2 has no default value.
  _ints1 = omc_SBMultiInterval_intervals(threadData, _mi1);

  _mi1_sz = omc_SBMultiInterval_size(threadData, _mi1);

  _ints2 = omc_SBMultiInterval_intervals(threadData, _mi2);

  _mi2_sz = omc_SBMultiInterval_size(threadData, _mi2);

  if((((omc_SBMultiInterval_ndim(threadData, _mi1) != omc_SBMultiInterval_ndim(threadData, _mi2)) && (_mi1_sz != ((modelica_integer) 1))) && (_mi2_sz != ((modelica_integer) 1))))
  {
    omc_Error_terminate(threadData, _OMC_LIT0, _OMC_LIT2);
  }

  _sz = arrayLength(_ints1);

  _g1 = arrayCreateNoInit(_sz, _OMC_LIT3);

  _g2 = arrayCreateNoInit(_sz, _OMC_LIT3);

  _o1 = arrayCreateNoInit(_sz, _OMC_LIT3);

  _o2 = arrayCreateNoInit(_sz, _OMC_LIT3);

  _mi = arrayCreateNoInit(_sz, arrayGet(_ints1,((modelica_integer) 1)) /* DAE.ASUB */);

  _new_ec = omc_Vector_new(threadData, ((modelica_integer) 0));

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _sz;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _sz1 = omc_SBInterval_size(threadData, arrayGet(_ints1,_i) /* DAE.ASUB */);

      _sz2 = omc_SBInterval_size(threadData, arrayGet(_ints2,_i) /* DAE.ASUB */);

      if((((_sz1 != _sz2) && (_sz1 != ((modelica_integer) 1))) && (_sz2 != ((modelica_integer) 1))))
      {
        omc_Error_terminate(threadData, _OMC_LIT0, _OMC_LIT4);
      }

      _count = modelica_integer_max((modelica_integer)(_sz1),(modelica_integer)(_sz2));

      _aux_ec = mmc_unbox_integer(omc_Vector_get(threadData, _eCount, _i));

      arrayUpdate(_mi,_i,omc_SBInterval_new(threadData, _aux_ec, ((modelica_integer) 1), ((modelica_integer) -1) + _aux_ec + _count));

      _i1 = arrayGet(_ints1,_i) /* DAE.ASUB */;

      _i2 = arrayGet(_ints2,_i) /* DAE.ASUB */;

      if((_sz1 == ((modelica_integer) 1)))
      {
        arrayUpdate(_g1,_i,_OMC_LIT3);

        arrayUpdate(_o1,_i,mmc_mk_real(((modelica_real)omc_SBInterval_lowerBound(threadData, _i1))));
      }
      else
      {
        _g1i = ((modelica_real)omc_SBInterval_stepValue(threadData, _i1));

        _o1i = ((modelica_real)omc_SBInterval_lowerBound(threadData, _i1)) - ((_g1i) * (((modelica_real)_aux_ec)));

        arrayUpdate(_g1,_i,mmc_mk_real(_g1i));

        arrayUpdate(_o1,_i,mmc_mk_real(_o1i));
      }

      if((_sz2 == ((modelica_integer) 1)))
      {
        arrayUpdate(_g2,_i,_OMC_LIT3);

        arrayUpdate(_o2,_i,mmc_mk_real(((modelica_real)omc_SBInterval_lowerBound(threadData, _i2))));
      }
      else
      {
        _g2i = ((modelica_real)omc_SBInterval_stepValue(threadData, _i2));

        _o2i = ((modelica_real)omc_SBInterval_lowerBound(threadData, _i2)) - ((_g2i) * (((modelica_real)_aux_ec)));

        arrayUpdate(_g2,_i,mmc_mk_real(_g2i));

        arrayUpdate(_o2,_i,mmc_mk_real(_o2i));
      }

      omc_Vector_push(threadData, _new_ec, mmc_mk_integer(_aux_ec + _count));
    }
  }

  omc_Vector_swap(threadData, _eCount, _new_ec);

  _s = omc_SBSet_newEmpty(threadData);

  _s = omc_SBSet_addAtomicSet(threadData, omc_SBAtomicSet_new(threadData, omc_SBMultiInterval_fromArray(threadData, _mi)), _s);

  _lm1 = omc_SBLinearMap_new(threadData, _g1, _o1);

  _lm2 = omc_SBLinearMap_new(threadData, _g2, _o2);

  _pw1 = omc_SBPWLinearMap_newScalar(threadData, _s, _lm1);

  _pw2 = omc_SBPWLinearMap_newScalar(threadData, _s, _lm2);

  tmp4 = modelica_integer_to_modelica_string(omc_System_tmpTick(threadData), ((modelica_integer) 0), 1 /* true */);
  tmpMeta5 = stringAppend(_OMC_LIT5,tmp4);
  _name = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  if (out_pw1) { *out_pw1 = _pw1; }
  if (out_pw2) { *out_pw2 = _pw2; }
  return _name;
}
modelica_metatype boxptr_NFSBGraphUtil_linearMapFromIntervals(threadData_t *threadData, modelica_metatype _d1, modelica_metatype _d2, modelica_metatype _mi1, modelica_metatype _mi2, modelica_metatype _eCount, modelica_metatype *out_pw1, modelica_metatype *out_pw2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _name = NULL;
  tmp1 = mmc_unbox_integer(_d1);
  tmp2 = mmc_unbox_integer(_d2);
  _name = omc_NFSBGraphUtil_linearMapFromIntervals(threadData, tmp1, tmp2, _mi1, _mi2, _eCount, out_pw1, out_pw2);
  /* skip box _name; String */
  /* skip box _pw1; SBPWLinearMap */
  /* skip box _pw2; SBPWLinearMap */
  return _name;
}

DLLDirection
modelica_metatype omc_NFSBGraphUtil_intervalFromRange(threadData_t *threadData, modelica_metatype _e)
{
  modelica_metatype _i = NULL;
  modelica_metatype _start = NULL;
  modelica_metatype _stop = NULL;
  modelica_metatype _ostep = NULL;
  modelica_integer _lo;
  modelica_integer _step;
  modelica_integer _hi;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  // _start has no default value.
  // _stop has no default value.
  // _ostep has no default value.
  // _lo has no default value.
  // _step has no default value.
  // _hi has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_NFSimplifyExp_simplify(threadData, _e, 0 /* false */);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,10,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _start = tmpMeta2;
  _ostep = tmpMeta3;
  _stop = tmpMeta4;

  _lo = omc_NFExpression_toInteger(threadData, _start);

  _hi = omc_NFExpression_toInteger(threadData, _stop);

  if(isSome(_ostep))
  {
    _step = omc_NFExpression_toInteger(threadData, omc_Util_getOption(threadData, _ostep));
  }
  else
  {
    _step = ((modelica_integer) 1);
  }

  _i = omc_SBInterval_new(threadData, _lo, _step, _hi);
  _return: OMC_LABEL_UNUSED
  return _i;
}

DLLDirection
modelica_metatype omc_NFSBGraphUtil_intervalFromUnaryExp(threadData_t *threadData, modelica_metatype _e)
{
  modelica_metatype _i = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  _i = omc_NFSBGraphUtil_intervalFromExp(threadData, _e);

  _i = omc_SBInterval_new(threadData, (-omc_SBInterval_lowerBound(threadData, _i)), ((modelica_integer) 1), (-omc_SBInterval_upperBound(threadData, _i)));
  _return: OMC_LABEL_UNUSED
  return _i;
}

DLLDirection
modelica_metatype omc_NFSBGraphUtil_intervalFromBinaryExp(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _op, modelica_metatype _rhs)
{
  modelica_metatype _i = NULL;
  modelica_metatype _lhs_i = NULL;
  modelica_metatype _rhs_i = NULL;
  modelica_integer _lhs_sz;
  modelica_integer _rhs_sz;
  modelica_integer _res;
  modelica_integer _llo;
  modelica_integer _rlo;
  modelica_integer _lhi;
  modelica_integer _rhi;
  modelica_integer _step;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  // _lhs_i has no default value.
  // _rhs_i has no default value.
  // _lhs_sz has no default value.
  // _rhs_sz has no default value.
  // _res has no default value.
  // _llo has no default value.
  // _rlo has no default value.
  // _lhi has no default value.
  // _rhi has no default value.
  // _step has no default value.
  _lhs_i = omc_NFSBGraphUtil_intervalFromExp(threadData, _lhs);

  _rhs_i = omc_NFSBGraphUtil_intervalFromExp(threadData, _rhs);

  _lhs_sz = omc_SBInterval_size(threadData, _lhs_i);

  _rhs_sz = omc_SBInterval_size(threadData, _rhs_i);

  _llo = omc_SBInterval_lowerBound(threadData, _lhs_i);

  _rlo = omc_SBInterval_lowerBound(threadData, _rhs_i);

  if(((_lhs_sz == ((modelica_integer) 1)) && (_rhs_sz == ((modelica_integer) 1))))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_llo));
    tmpMeta2 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_rlo));
    tmpMeta3 = omc_NFCeval_evalBinaryOp__dispatch(threadData, tmpMeta1, _op, tmpMeta2, _OMC_LIT14);
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,0,1) == 0) MMC_THROW_INTERNAL();
    tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
    tmp5 = mmc_unbox_integer(tmpMeta4);
    _res = tmp5  /* pattern as ty=Integer */;

    _i = omc_SBInterval_new(threadData, _res, ((modelica_integer) 1), _res);
  }
  else
  {
    if(((_lhs_sz == ((modelica_integer) 1)) || (_rhs_sz == ((modelica_integer) 1))))
    {
      _lhi = omc_SBInterval_upperBound(threadData, _lhs_i);

      _rhi = omc_SBInterval_upperBound(threadData, _rhs_i);

      _step = omc_SBInterval_stepValue(threadData, ((_lhs_sz == ((modelica_integer) 1))?_rhs_i:_lhs_i));

      { /* match expression */
        modelica_metatype tmp9_1;
        tmp9_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
        {
          int tmp9;
          {
            switch (MMC_SWITCH_CAST(mmc_unbox_integer(tmp9_1))) {
            case 1: {
              modelica_integer tmp10;
              tmp10 = mmc_unbox_integer(tmp9_1);
              if (1 != tmp10) goto tmp8_end;
              /* Pattern matching succeeded */
              tmpMeta6 = omc_SBInterval_new(threadData, _llo + _rlo, _step, _lhi + _rhi);
              goto tmp8_done;
            }
            case 2: {
              modelica_integer tmp11;
              tmp11 = mmc_unbox_integer(tmp9_1);
              if (2 != tmp11) goto tmp8_end;
              /* Pattern matching succeeded */
              tmpMeta6 = omc_SBInterval_new(threadData, _llo - _rlo, _step, _lhi - _rhi);
              goto tmp8_done;
            }
            case 3: {
              modelica_integer tmp12;
              tmp12 = mmc_unbox_integer(tmp9_1);
              if (3 != tmp12) goto tmp8_end;
              /* Pattern matching succeeded */
              tmpMeta6 = omc_SBInterval_new(threadData, (_llo) * (_rlo), (_llo) * (_step), (_lhi) * (_rhi));
              goto tmp8_done;
            }
            default:
            tmp8_default: OMC_LABEL_UNUSED; {
              modelica_metatype tmpMeta13;
              
              /* Pattern matching succeeded */
              tmpMeta13 = stringAppend(_OMC_LIT9,omc_NFOperator_symbol(threadData, _op, _OMC_LIT10));
              omc_Error_terminate(threadData, tmpMeta13, _OMC_LIT11);
              goto goto_7;
              goto tmp8_done;
            }
            }
            goto tmp8_end;
            tmp8_end: ;
          }
          goto goto_7;
          goto_7:;
          MMC_THROW_INTERNAL();
          goto tmp8_done;
          tmp8_done:;
        }
      }
      _i = tmpMeta6;
    }
    else
    {
      tmpMeta14 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _lhs, _op, _rhs);
      tmpMeta15 = stringAppend(_OMC_LIT6,omc_NFExpression_toString(threadData, tmpMeta14));
      tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT7);
      omc_Error_terminate(threadData, tmpMeta16, _OMC_LIT8);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _i;
}

DLLDirection
modelica_metatype omc_NFSBGraphUtil_intervalFromExp(threadData_t *threadData, modelica_metatype _e)
{
  modelica_metatype _i = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _e;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_SBInterval_new(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2)))), ((modelica_integer) 1), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2)))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_SBInterval_new(threadData, omc_Util_boolInt(threadData, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))))), ((modelica_integer) 1), omc_Util_boolInt(threadData, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_SBInterval_new(threadData, ((modelica_integer)floor(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2)))))), ((modelica_integer) 1), ((modelica_integer)floor(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2)))))));
          goto tmp3_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSBGraphUtil_intervalFromBinaryExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 4))));
          goto tmp3_done;
        }
        case 20: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSBGraphUtil_intervalFromUnaryExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))));
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSBGraphUtil_intervalFromRange(threadData, _e);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT15,omc_NFExpression_toString(threadData, _e));
          omc_Error_terminate(threadData, tmpMeta5, _OMC_LIT16);
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
  _i = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _i;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSBGraphUtil_evalCrefs_evalCref(threadData_t *threadData, modelica_metatype _e)
{
  modelica_metatype _outExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  if(omc_NFExpression_isCref(threadData, _e))
  {
    _outExp = omc_NFCeval_evalExp(threadData, _e, omc_NFCeval_EvalTarget_new(threadData, _OMC_LIT13, ((modelica_integer) 131072), mmc_mk_none()));
  }
  else
  {
    _outExp = _e;
  }
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSBGraphUtil_evalCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe)
{
  modelica_metatype _e = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _e = __omcQ_24in_5Fe;
  _e = omc_NFExpression_map(threadData, _e, boxvar_NFSBGraphUtil_evalCrefs_evalCref);
  _return: OMC_LABEL_UNUSED
  return _e;
}

DLLDirection
modelica_metatype omc_NFSBGraphUtil_make__lo__interval(threadData_t *threadData, modelica_metatype _i)
{
  modelica_metatype _res = NULL;
  modelica_integer _lo;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _lo = omc_SBInterval_lowerBound(threadData, _i);
  _res = omc_SBInterval_new(threadData, _lo, ((modelica_integer) 1), _lo);
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_NFSBGraphUtil_multiIntervalFromSubscripts(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _vCount, modelica_metatype __omcQ_24in_5FmultiInt)
{
  modelica_metatype _multiInt = NULL;
  modelica_metatype _mi = NULL;
  modelica_metatype _miv = NULL;
  modelica_metatype _int = NULL;
  modelica_integer _index;
  modelica_integer _aux_lo;
  modelica_metatype _sub_exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _multiInt = __omcQ_24in_5FmultiInt;
  // _mi has no default value.
  // _miv has no default value.
  // _int has no default value.
  // _index has no default value.
  // _aux_lo has no default value.
  // _sub_exp has no default value.
  _miv = omc_SBMultiInterval_intervals(threadData, _multiInt);

  if(listEmpty(_subs))
  {
    _mi = omc_Array_map(threadData, _miv, boxvar_NFSBGraphUtil_make__lo__interval);
  }
  else
  {
    _index = ((modelica_integer) 1);

    _mi = arrayCopy(_miv);

    {
      modelica_metatype _s;
      for (tmpMeta1 = _subs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _s = MMC_CAR(tmpMeta1);
        _sub_exp = omc_NFSBGraphUtil_evalCrefs(threadData, omc_NFSubscript_toExp(threadData, _s));

        _int = omc_NFSBGraphUtil_intervalFromExp(threadData, _sub_exp);

        _aux_lo = ((modelica_integer) -1) + omc_SBInterval_lowerBound(threadData, arrayGet(_miv,_index) /* DAE.ASUB */);

        _int = omc_SBInterval_new(threadData, _aux_lo + omc_SBInterval_lowerBound(threadData, _int), omc_SBInterval_stepValue(threadData, _int), _aux_lo + omc_SBInterval_upperBound(threadData, _int));

        if((!omc_SBInterval_isEmpty(threadData, _int)))
        {
          arrayUpdate(_mi,_index,_int);
        }
        else
        {
          tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
          _mi = listArray(tmpMeta2);

          break;
        }

        _index = ((modelica_integer) 1) + _index;
      }
    }

    tmp4 = ((modelica_integer) 1) + listLength(_subs); tmp5 = 1; tmp6 = arrayLength(_mi);
    if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1) + listLength(_subs); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
      {
        _aux_lo = omc_SBInterval_lowerBound(threadData, arrayGet(_miv,_i) /* DAE.ASUB */);

        arrayUpdate(_mi,_index,omc_SBInterval_new(threadData, _aux_lo, ((modelica_integer) 1), _aux_lo));
      }
    }
  }

  _multiInt = omc_SBMultiInterval_fromArray(threadData, _mi);
  _return: OMC_LABEL_UNUSED
  return _multiInt;
}

DLLDirection
modelica_metatype omc_NFSBGraphUtil_multiIntervalFromDimensions(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _vCount)
{
  modelica_metatype _multiInt = NULL;
  modelica_metatype _new_vCount = NULL;
  modelica_integer _vc;
  modelica_integer _dim_size;
  modelica_integer _index;
  modelica_metatype _ints = NULL;
  modelica_metatype _int = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _multiInt has no default value.
  // _new_vCount has no default value.
  // _vc has no default value.
  // _dim_size has no default value.
  // _index has no default value.
  // _ints has no default value.
  // _int has no default value.
  if(listEmpty(_dims))
  {
    _vc = mmc_unbox_integer(omc_Vector_get(threadData, _vCount, ((modelica_integer) 1)));

    omc_Vector_update(threadData, _vCount, ((modelica_integer) 1), mmc_mk_integer(((modelica_integer) 1) + _vc));

    _multiInt = omc_SBMultiInterval_fromArray(threadData, arrayCreate(omc_Vector_size(threadData, _vCount), omc_SBInterval_new(threadData, _vc, ((modelica_integer) 1), _vc)));
  }
  else
  {
    _ints = arrayCreate(omc_Vector_size(threadData, _vCount), omc_SBInterval_newEmpty(threadData));

    _new_vCount = omc_Vector_copy(threadData, _vCount);

    _index = ((modelica_integer) 1);

    {
      modelica_metatype _dim;
      for (tmpMeta1 = _dims; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _dim = MMC_CAR(tmpMeta1);
        if((!omc_NFDimension_isKnown(threadData, _dim, 0 /* false */)))
        {
          tmpMeta2 = stringAppend(_OMC_LIT17,omc_NFDimension_toString(threadData, _dim));
          omc_Error_terminate(threadData, tmpMeta2, _OMC_LIT18);
        }

        _dim_size = omc_NFDimension_size(threadData, _dim, 0 /* false */);

        _vc = mmc_unbox_integer(omc_Vector_get(threadData, _vCount, _index));

        _int = omc_SBInterval_new(threadData, _vc, ((modelica_integer) 1), ((modelica_integer) -1) + _vc + _dim_size);

        if(omc_SBInterval_isEmpty(threadData, _int))
        {
          tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
          _ints = listArray(tmpMeta3);

          break;
        }
        else
        {
          arrayUpdate(_ints,_index,_int);

          omc_Vector_update(threadData, _new_vCount, _index, mmc_mk_integer(_vc + _dim_size));
        }

        _index = ((modelica_integer) 1) + _index;
      }
    }

    tmp5 = ((modelica_integer) 1) + listLength(_dims); tmp6 = 1; tmp7 = omc_Vector_size(threadData, _vCount);
    if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1) + listLength(_dims); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
      {
        _vc = mmc_unbox_integer(omc_Vector_get(threadData, _vCount, ((modelica_integer) 1)));

        arrayUpdate(_ints,_i,omc_SBInterval_new(threadData, _vc, ((modelica_integer) 1), _vc));
      }
    }

    _multiInt = omc_SBMultiInterval_fromArray(threadData, _ints);

    if((!omc_SBMultiInterval_isEmpty(threadData, _multiInt)))
    {
      omc_Vector_swap(threadData, _new_vCount, _vCount);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _multiInt;
}

