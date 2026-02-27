#include "omc_simulation_settings.h"
#include "AdjacencyMatrix.h"
#define _OMC_LIT0_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,9,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,41,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "- BackendDAEOptimize.traverseAdjacencyMatrixList failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,56,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#include "util/modelica.h"

#include "AdjacencyMatrix_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AdjacencyMatrix_transposeRow(threadData_t *threadData, modelica_metatype _row, modelica_metatype __omcQ_24in_5Fmt, modelica_integer __omcQ_24in_5Findx, modelica_integer *out_indx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AdjacencyMatrix_transposeRow(threadData_t *threadData, modelica_metatype _row, modelica_metatype __omcQ_24in_5Fmt, modelica_metatype __omcQ_24in_5Findx, modelica_metatype *out_indx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AdjacencyMatrix_transposeRow,2,0) {(void*) boxptr_AdjacencyMatrix_transposeRow,0}};
#define boxvar_AdjacencyMatrix_transposeRow MMC_REFSTRUCTLIT(boxvar_lit_AdjacencyMatrix_transposeRow)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_AdjacencyMatrix_isAssigned(threadData_t *threadData, modelica_metatype _ass, modelica_integer _i);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AdjacencyMatrix_isAssigned(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AdjacencyMatrix_isAssigned,2,0) {(void*) boxptr_AdjacencyMatrix_isAssigned,0}};
#define boxvar_AdjacencyMatrix_isAssigned MMC_REFSTRUCTLIT(boxvar_lit_AdjacencyMatrix_isAssigned)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AdjacencyMatrix_traverseAdjacencyMatrixList(threadData_t *threadData, modelica_metatype _inLst, modelica_metatype _inM, modelica_fnptr _func, modelica_integer _len, modelica_integer _maxpos, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AdjacencyMatrix_traverseAdjacencyMatrixList(threadData_t *threadData, modelica_metatype _inLst, modelica_metatype _inM, modelica_fnptr _func, modelica_metatype _len, modelica_metatype _maxpos, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AdjacencyMatrix_traverseAdjacencyMatrixList,2,0) {(void*) boxptr_AdjacencyMatrix_traverseAdjacencyMatrixList,0}};
#define boxvar_AdjacencyMatrix_traverseAdjacencyMatrixList MMC_REFSTRUCTLIT(boxvar_lit_AdjacencyMatrix_traverseAdjacencyMatrixList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AdjacencyMatrix_traverseAdjacencyMatrix2(threadData_t *threadData, modelica_metatype _inM, modelica_fnptr _func, modelica_integer _pos, modelica_integer _len, modelica_boolean _stop, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AdjacencyMatrix_traverseAdjacencyMatrix2(threadData_t *threadData, modelica_metatype _inM, modelica_fnptr _func, modelica_metatype _pos, modelica_metatype _len, modelica_metatype _stop, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AdjacencyMatrix_traverseAdjacencyMatrix2,2,0) {(void*) boxptr_AdjacencyMatrix_traverseAdjacencyMatrix2,0}};
#define boxvar_AdjacencyMatrix_traverseAdjacencyMatrix2 MMC_REFSTRUCTLIT(boxvar_lit_AdjacencyMatrix_traverseAdjacencyMatrix2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_AdjacencyMatrix_traverseAdjacencyMatrix1(threadData_t *threadData, modelica_metatype _inM, modelica_fnptr _func, modelica_integer _pos, modelica_integer _len, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AdjacencyMatrix_traverseAdjacencyMatrix1(threadData_t *threadData, modelica_metatype _inM, modelica_fnptr _func, modelica_metatype _pos, modelica_metatype _len, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AdjacencyMatrix_traverseAdjacencyMatrix1,2,0) {(void*) boxptr_AdjacencyMatrix_traverseAdjacencyMatrix1,0}};
#define boxvar_AdjacencyMatrix_traverseAdjacencyMatrix1 MMC_REFSTRUCTLIT(boxvar_lit_AdjacencyMatrix_traverseAdjacencyMatrix1)

DLLDirection
modelica_boolean omc_AdjacencyMatrix_isEmpty(threadData_t *threadData, modelica_metatype _m)
{
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = 1 /* true */;
  {
    modelica_metatype _element;
    for (tmpMeta1 = _m, tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
    {
      _element = arrayGet(tmpMeta1,tmp3);
      if((!listEmpty(_element)))
      {
        _b = 0 /* false */;

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_AdjacencyMatrix_isEmpty(threadData_t *threadData, modelica_metatype _m)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_AdjacencyMatrix_isEmpty(threadData, _m);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_AdjacencyMatrix_absAdjacencyMatrix(threadData_t *threadData, modelica_metatype _m)
{
  modelica_metatype _res = NULL;
  modelica_metatype _lst = NULL;
  modelica_metatype _lst_1 = NULL;
  modelica_integer _i;
  modelica_integer _minn;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _lst has no default value.
  // _lst_1 has no default value.
  _i = ((modelica_integer) 1);
  // _minn has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _res = arrayCreateNoInit(arrayLength(_m), tmpMeta1);

  {
    modelica_metatype _v;
    for (tmpMeta2 = _m, tmp5 = arrayLength(tmpMeta2), tmp4 = 1; tmp4 <= tmp5; tmp4++)
    {
      _v = arrayGet(tmpMeta2,tmp4);
      _minn = mmc_unbox_integer(omc_List_fold(threadData, _v, boxvar_intMin, mmc_mk_integer(((modelica_integer) 0))));

      if((_minn < ((modelica_integer) 0)))
      {
        arrayUpdateNoBoundsChecking(_res, _i, omc_List_map(threadData, _v, boxvar_intAbs));
      }
      else
      {
        arrayUpdateNoBoundsChecking(_res, _i, _v);
      }

      _i = ((modelica_integer) 1) + _i;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AdjacencyMatrix_transposeRow(threadData_t *threadData, modelica_metatype _row, modelica_metatype __omcQ_24in_5Fmt, modelica_integer __omcQ_24in_5Findx, modelica_integer *out_indx)
{
  modelica_metatype _mt = NULL;
  modelica_integer _indx;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mt = __omcQ_24in_5Fmt;
  _indx = __omcQ_24in_5Findx;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _row;
    {
      modelica_integer _i;
      modelica_integer _indx1;
      modelica_integer _iabs;
      modelica_metatype _res = NULL;
      modelica_metatype _col = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _indx1 has no default value.
      // _iabs has no default value.
      // _res has no default value.
      // _col has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _mt;
          tmp1_c1 = ((modelica_integer) 1) + _indx;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _i = tmp8  /* pattern as ty=Integer */;
          _res = tmpMeta7;
          /* Pattern matching succeeded */
          _iabs = labs(_i);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _mt = omc_Array_expand(threadData, _iabs - arrayLength(_mt), _mt, tmpMeta9);

          _col = arrayGet(_mt,_iabs) /* DAE.ASUB */;

          _indx1 = ((_i < ((modelica_integer) 0))?(-_indx):_indx);

          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_indx1), _col);
          arrayUpdate(_mt, _iabs, tmpMeta10);
          /* Tail recursive call */
          _row = _res;
          __omcQ_24in_5Fmt = _mt;
          __omcQ_24in_5Findx = _indx;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _mt = tmpMeta[0+0];
  _indx = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_indx) { *out_indx = _indx; }
  return _mt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AdjacencyMatrix_transposeRow(threadData_t *threadData, modelica_metatype _row, modelica_metatype __omcQ_24in_5Fmt, modelica_metatype __omcQ_24in_5Findx, modelica_metatype *out_indx)
{
  modelica_integer tmp1;
  modelica_integer _indx;
  modelica_metatype _mt = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Findx);
  _mt = omc_AdjacencyMatrix_transposeRow(threadData, _row, __omcQ_24in_5Fmt, tmp1, &_indx);
  /* skip box _mt; array<list<#Integer>> */
  if (out_indx) { *out_indx = mmc_mk_icon(_indx); }
  return _mt;
}

DLLDirection
modelica_metatype omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData_t *threadData, modelica_metatype _m, modelica_integer _nRowsMt)
{
  modelica_metatype _mt = NULL;
  modelica_integer _i;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mt has no default value.
  _i = ((modelica_integer) 1);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _mt = arrayCreate(_nRowsMt, tmpMeta1);

  {
    modelica_metatype _e;
    for (tmpMeta2 = _m, tmp5 = arrayLength(tmpMeta2), tmp4 = 1; tmp4 <= tmp5; tmp4++)
    {
      _e = arrayGet(tmpMeta2,tmp4);
      _mt = omc_AdjacencyMatrix_transposeRow(threadData, _e, _mt, _i ,&_i);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _mt;
}
modelica_metatype boxptr_AdjacencyMatrix_transposeAdjacencyMatrix(threadData_t *threadData, modelica_metatype _m, modelica_metatype _nRowsMt)
{
  modelica_integer tmp1;
  modelica_metatype _mt = NULL;
  tmp1 = mmc_unbox_integer(_nRowsMt);
  _mt = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _m, tmp1);
  /* skip box _mt; array<list<#Integer>> */
  return _mt;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_AdjacencyMatrix_isAssigned(threadData_t *threadData, modelica_metatype _ass, modelica_integer _i)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = (mmc_unbox_integer(arrayGet(_ass,_i) /* DAE.ASUB */) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AdjacencyMatrix_isAssigned(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _i)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_i);
  _b = omc_AdjacencyMatrix_isAssigned(threadData, _ass, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_AdjacencyMatrix_getOtherEqSysAdjacencyMatrix(threadData_t *threadData, modelica_metatype _m, modelica_integer _size, modelica_integer _index, modelica_metatype _skip, modelica_metatype _rowskip, modelica_metatype _mnew)
{
  modelica_metatype _outMNew = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMNew has no default value.
  { /* match expression */
    {
      modelica_metatype _row = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _row has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_index > _size)) goto tmp3_end;
          tmpMeta1 = _mnew;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(mmc_unbox_integer(arrayGet(_skip,_index) /* DAE.ASUB */) > ((modelica_integer) 0))) goto tmp3_end;
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp9;
            modelica_metatype _r_loopVar = 0;
            modelica_metatype _r;
            _r_loopVar = arrayGet(_m,_index) /* DAE.ASUB */;
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar3;
            while(1) {
              tmp9 = 1;
              while (!listEmpty(_r_loopVar)) {
                _r = MMC_CAR(_r_loopVar);
                _r_loopVar = MMC_CDR(_r_loopVar);
                if (((mmc_unbox_integer(_r) > ((modelica_integer) 0)) && (mmc_unbox_integer(arrayGet(_rowskip,mmc_unbox_integer(_r)) /* DAE.ASUB */) > ((modelica_integer) 0)))) {
                  tmp9--;
                  break;
                }
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar2 = _r;
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar3;
          }
          _row = tmpMeta6;

          arrayUpdate(_mnew, _index, _row);
          /* Tail recursive call */
          _index = ((modelica_integer) 1) + _index;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          arrayUpdate(_mnew, _index, tmpMeta10);
          /* Tail recursive call */
          _index = ((modelica_integer) 1) + _index;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _outMNew = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outMNew;
}
modelica_metatype boxptr_AdjacencyMatrix_getOtherEqSysAdjacencyMatrix(threadData_t *threadData, modelica_metatype _m, modelica_metatype _size, modelica_metatype _index, modelica_metatype _skip, modelica_metatype _rowskip, modelica_metatype _mnew)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outMNew = NULL;
  tmp1 = mmc_unbox_integer(_size);
  tmp2 = mmc_unbox_integer(_index);
  _outMNew = omc_AdjacencyMatrix_getOtherEqSysAdjacencyMatrix(threadData, _m, tmp1, tmp2, _skip, _rowskip, _mnew);
  /* skip box _outMNew; array<list<#Integer>> */
  return _outMNew;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AdjacencyMatrix_traverseAdjacencyMatrixList(threadData_t *threadData, modelica_metatype _inLst, modelica_metatype _inM, modelica_fnptr _func, modelica_integer _len, modelica_integer _maxpos, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA)
{
  modelica_metatype _outM = NULL;
  modelica_metatype _outTypeA = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outM has no default value.
  // _outTypeA has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inLst;
    {
      modelica_metatype _extArg = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqns1 = NULL;
      modelica_metatype _alleqns = NULL;
      modelica_integer _pos;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _extArg has no default value.
      // _rest has no default value.
      // _eqns has no default value.
      // _eqns1 has no default value.
      // _alleqns has no default value.
      // _pos has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inM;
          tmpMeta[0+1] = _inTypeA;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _pos = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (_pos < ((modelica_integer) 1) + _len);
          if (1 /* true */ != tmp9) goto goto_2;

          /* Pattern-matching assignment */
          tmp10 = (_pos < _maxpos);
          if (1 /* true */ != tmp10) goto goto_2;

          _eqns = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), arrayGet(_inM,_pos) /* DAE.ASUB */, mmc_mk_integer(_pos), _inTypeA ,&_extArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, arrayGet(_inM,_pos) /* DAE.ASUB */, mmc_mk_integer(_pos), _inTypeA ,&_extArg);

          _eqns1 = omc_List_removeOnTrue(threadData, mmc_mk_integer(_maxpos), boxvar_intLt, _eqns);

          tmpMeta11 = mmc_mk_cons(_rest, mmc_mk_cons(_eqns1, MMC_REFSTRUCTLIT(mmc_nil)));
          _alleqns = omc_List_unionOnTrueList(threadData, tmpMeta11, boxvar_intEq);
          tmpMeta[0+0] = omc_AdjacencyMatrix_traverseAdjacencyMatrixList(threadData, _alleqns, _inM, ((modelica_fnptr) _func), _len, _maxpos, _extArg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_boolean tmp15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          tmp14 = mmc_unbox_integer(tmpMeta12);
          _pos = tmp14  /* pattern as ty=Integer */;
          _rest = tmpMeta13;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp15 = (_pos < ((modelica_integer) 1) + _len);
          if (1 /* true */ != tmp15) goto goto_2;
          tmpMeta[0+0] = omc_AdjacencyMatrix_traverseAdjacencyMatrixList(threadData, _rest, _inM, ((modelica_fnptr) _func), _len, _maxpos, _inTypeA, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp16;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp16 = omc_Flags_isSet(threadData, _OMC_LIT3);
          if (1 /* true */ != tmp16) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT4);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outM = tmpMeta[0+0];
  _outTypeA = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTypeA) { *out_outTypeA = _outTypeA; }
  return _outM;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AdjacencyMatrix_traverseAdjacencyMatrixList(threadData_t *threadData, modelica_metatype _inLst, modelica_metatype _inM, modelica_fnptr _func, modelica_metatype _len, modelica_metatype _maxpos, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outM = NULL;
  tmp1 = mmc_unbox_integer(_len);
  tmp2 = mmc_unbox_integer(_maxpos);
  _outM = omc_AdjacencyMatrix_traverseAdjacencyMatrixList(threadData, _inLst, _inM, _func, tmp1, tmp2, _inTypeA, out_outTypeA);
  /* skip box _outM; array<list<#Integer>> */
  /* skip box _outTypeA; polymorphic<T> */
  return _outM;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AdjacencyMatrix_traverseAdjacencyMatrix2(threadData_t *threadData, modelica_metatype _inM, modelica_fnptr _func, modelica_integer _pos, modelica_integer _len, modelica_boolean _stop, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA)
{
  modelica_metatype _outM = NULL;
  modelica_metatype _outTypeA = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outM has no default value.
  // _outTypeA has no default value.
  
  
  { /* match expression */
    modelica_boolean tmp4_1;
    tmp4_1 = _stop;
    {
      modelica_metatype _m1 = NULL;
      modelica_metatype _extArg = NULL;
      modelica_metatype _extArg1 = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqns1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _m1 has no default value.
      // _extArg has no default value.
      // _extArg1 has no default value.
      // _eqns has no default value.
      // _eqns1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inM;
          tmpMeta[0+1] = _inTypeA;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp6;
          modelica_integer tmp7;
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _eqns = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), arrayGet(_inM,_pos) /* DAE.ASUB */, mmc_mk_integer(_pos), _inTypeA ,&_extArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, arrayGet(_inM,_pos) /* DAE.ASUB */, mmc_mk_integer(_pos), _inTypeA ,&_extArg);

          _eqns1 = omc_List_removeOnTrue(threadData, mmc_mk_integer(_pos), boxvar_intLt, _eqns);

          _m1 = omc_AdjacencyMatrix_traverseAdjacencyMatrixList(threadData, _eqns1, _inM, ((modelica_fnptr) _func), arrayLength(_inM), _pos, _extArg ,&_extArg1);
          /* Tail recursive call */
          _inM = _m1;
          tmp6 = ((modelica_integer) 1) + _pos;
          tmp7 = _len;
          _stop = (((modelica_integer) 1) + _pos > _len);
          _inTypeA = _extArg1;
          _pos = tmp6;
          _len = tmp7;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _outM = tmpMeta[0+0];
  _outTypeA = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTypeA) { *out_outTypeA = _outTypeA; }
  return _outM;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AdjacencyMatrix_traverseAdjacencyMatrix2(threadData_t *threadData, modelica_metatype _inM, modelica_fnptr _func, modelica_metatype _pos, modelica_metatype _len, modelica_metatype _stop, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _outM = NULL;
  tmp1 = mmc_unbox_integer(_pos);
  tmp2 = mmc_unbox_integer(_len);
  tmp3 = mmc_unbox_integer(_stop);
  _outM = omc_AdjacencyMatrix_traverseAdjacencyMatrix2(threadData, _inM, _func, tmp1, tmp2, tmp3, _inTypeA, out_outTypeA);
  /* skip box _outM; array<list<#Integer>> */
  /* skip box _outTypeA; polymorphic<T> */
  return _outM;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_AdjacencyMatrix_traverseAdjacencyMatrix1(threadData_t *threadData, modelica_metatype _inM, modelica_fnptr _func, modelica_integer _pos, modelica_integer _len, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA)
{
  modelica_metatype _outM = NULL;
  modelica_metatype _outTypeA = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outM has no default value.
  // _outTypeA has no default value.
  _outM = omc_AdjacencyMatrix_traverseAdjacencyMatrix2(threadData, _inM, ((modelica_fnptr) _func), _pos, _len, (_pos > _len), _inTypeA ,&_outTypeA);
  _return: OMC_LABEL_UNUSED
  if (out_outTypeA) { *out_outTypeA = _outTypeA; }
  return _outM;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_AdjacencyMatrix_traverseAdjacencyMatrix1(threadData_t *threadData, modelica_metatype _inM, modelica_fnptr _func, modelica_metatype _pos, modelica_metatype _len, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outM = NULL;
  tmp1 = mmc_unbox_integer(_pos);
  tmp2 = mmc_unbox_integer(_len);
  _outM = omc_AdjacencyMatrix_traverseAdjacencyMatrix1(threadData, _inM, _func, tmp1, tmp2, _inTypeA, out_outTypeA);
  /* skip box _outM; array<list<#Integer>> */
  /* skip box _outTypeA; polymorphic<T> */
  return _outM;
}

DLLDirection
modelica_metatype omc_AdjacencyMatrix_traverseAdjacencyMatrix(threadData_t *threadData, modelica_metatype _inM, modelica_fnptr _func, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA)
{
  modelica_metatype _outM = NULL;
  modelica_metatype _outTypeA = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outM has no default value.
  // _outTypeA has no default value.
  _outM = omc_AdjacencyMatrix_traverseAdjacencyMatrix2(threadData, _inM, ((modelica_fnptr) _func), ((modelica_integer) 1), arrayLength(_inM), (((modelica_integer) 1) > arrayLength(_inM)), _inTypeA ,&_outTypeA);
  _return: OMC_LABEL_UNUSED
  if (out_outTypeA) { *out_outTypeA = _outTypeA; }
  return _outM;
}

DLLDirection
modelica_metatype omc_AdjacencyMatrix_copyAdjacencyMatrixT(threadData_t *threadData, modelica_metatype _inAdjacencyMatrix)
{
  modelica_metatype _outAdjacencyMatrix = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAdjacencyMatrix has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inAdjacencyMatrix;
    {
      modelica_metatype _m = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _m has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _m = tmpMeta6;
          /* Pattern matching succeeded */
          _m = arrayCopy(_m);
          tmpMeta1 = mmc_mk_some(_m);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
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
  _outAdjacencyMatrix = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outAdjacencyMatrix;
}

DLLDirection
modelica_metatype omc_AdjacencyMatrix_copyAdjacencyMatrix(threadData_t *threadData, modelica_metatype _inAdjacencyMatrix)
{
  modelica_metatype _outAdjacencyMatrix = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAdjacencyMatrix has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inAdjacencyMatrix;
    {
      modelica_metatype _m = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _m has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _m = tmpMeta6;
          /* Pattern matching succeeded */
          _m = arrayCopy(_m);
          tmpMeta1 = mmc_mk_some(_m);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
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
  _outAdjacencyMatrix = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outAdjacencyMatrix;
}

