#include "omc_simulation_settings.h"
#include "NFEvalConstants.h"
#define _OMC_LIT0_data "NFEvalConstants.evaluateFuncExpTraverser"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,40,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,0,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2,0.0);
#define _OMC_LIT2 MMC_REFREALLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "NFEvalConstants.evaluateExpTraverser"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,36,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "fixed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,5,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "stateSelect"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,11,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "nfScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,11,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Run scalarization in NF, default true."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,38,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(168)),_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "NFEvalConstants.evaluate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,24,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#include "util/modelica.h"

#include "NFEvalConstants_includes.h"



static modelica_metatype closure0_NFEvalConstants_evaluateFuncExp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype fnNode = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype evaluateAll = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFEvalConstants_evaluateFuncExp(thData, exp, fnNode, evaluateAll);
}static void closure1_NFEvalConstants_evaluateRecordDeclarationField(threadData_t *thData, modelica_metatype closure, modelica_metatype fieldNode)
{
  modelica_metatype recordNode = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  boxptr_NFEvalConstants_evaluateRecordDeclarationField(thData, fieldNode, recordNode);
}
DLLDirection
void omc_NFEvalConstants_evaluateRecordDeclarationField(threadData_t *threadData, modelica_metatype _fieldNode, modelica_metatype _recordNode)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _cls_inst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  // _binding has no default value.
  // _cls_inst has no default value.
  _comp = omc_NFInstNode_InstNode_component(threadData, _fieldNode);

  _binding = omc_NFComponent_getBinding(threadData, _comp);

  if(omc_NFBinding_isBound(threadData, _binding))
  {
    tmpMeta1 = mmc_mk_box2(0, _fieldNode, mmc_mk_boolean(0 /* false */));
    _binding = omc_NFBinding_mapExp(threadData, _binding, (modelica_fnptr) mmc_mk_box2(0,closure0_NFEvalConstants_evaluateFuncExp,tmpMeta1));

    _comp = omc_NFComponent_setBinding(threadData, _binding, _comp);
  }

  _cls_inst = omc_NFComponent_classInstance(threadData, _comp);

  if((!omc_NFInstNode_InstNode_isEmpty(threadData, _cls_inst)))
  {
    tmpMeta2 = mmc_mk_box1(0, _recordNode);
    omc_NFClassTree_ClassTree_applyComponents(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _cls_inst)), (modelica_fnptr) mmc_mk_box2(0,closure1_NFEvalConstants_evaluateRecordDeclarationField,tmpMeta2));
  }

  omc_NFInstNode_InstNode_updateComponent(threadData, _comp, _fieldNode);
  _return: OMC_LABEL_UNUSED
  return;
}

static void closure2_NFEvalConstants_evaluateRecordDeclarationField(threadData_t *thData, modelica_metatype closure, modelica_metatype fieldNode)
{
  modelica_metatype recordNode = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  boxptr_NFEvalConstants_evaluateRecordDeclarationField(thData, fieldNode, recordNode);
}
DLLDirection
void omc_NFEvalConstants_evaluateRecordDeclaration(threadData_t *threadData, modelica_metatype _recordNode)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box1(0, _recordNode);
  omc_NFClassTree_ClassTree_applyComponents(threadData, omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _recordNode)), (modelica_fnptr) mmc_mk_box2(0,closure2_NFEvalConstants_evaluateRecordDeclarationField,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_NFEvalConstants_isLocalFunctionVariable(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _fnNode)
{
  modelica_boolean _res;
  modelica_metatype _node = NULL;
  modelica_metatype _fnl = NULL;
  modelica_metatype _fn = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _node has no default value.
  // _fnl has no default value.
  // _fn has no default value.
  if(omc_NFComponentRef_isPackageConstant(threadData, _cref))
  {
    _res = 0 /* false */;
  }
  else
  {
    if(((omc_NFComponentRef_nodeVariability(threadData, _cref) <= 3) && omc_NFComponentRef_isCref(threadData, _cref)))
    {
      _node = omc_NFInstNode_InstNode_instanceParent(threadData, omc_NFComponentRef_node(threadData, omc_NFComponentRef_last(threadData, _cref)));

      if(omc_NFInstNode_InstNode_isClass(threadData, _node))
      {
        _fnl = omc_NFFunction_Function_getCachedFuncs(threadData, _node);

        if(listEmpty(_fnl))
        {
          _res = 0 /* false */;
        }
        else
        {
          _fn = listHead(_fnl);

          _res = omc_NFInstNode_InstNode_refEqual(threadData, _fnNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 3))));
        }
      }
      else
      {
        _res = 0 /* false */;
      }
    }
    else
    {
      _res = 1 /* true */;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFEvalConstants_isLocalFunctionVariable(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _fnNode)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFEvalConstants_isLocalFunctionVariable(threadData, _cref, _fnNode);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

static modelica_metatype closure3_NFEvalConstants_evaluateFuncExpTraverser(threadData_t *thData, modelica_metatype closure, modelica_metatype exp, modelica_metatype changed, modelica_metatype tmp3)
{
  modelica_metatype fnNode = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype evaluateAll = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFEvalConstants_evaluateFuncExpTraverser(thData, exp, fnNode, evaluateAll, changed, tmp3);
}
DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateFuncExpTraverser(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _fnNode, modelica_boolean _evaluateAll, modelica_boolean _changed, modelica_boolean *out_outChanged)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _outChanged;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outChanged has no default value.
  // _e has no default value.
  /* Pattern-matching tuple assignment */
  tmpMeta4 = mmc_mk_box2(0, _fnNode, mmc_mk_boolean(_evaluateAll));
  tmpMeta5 = omc_NFExpression_mapFoldShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure3_NFEvalConstants_evaluateFuncExpTraverser,tmpMeta4), mmc_mk_boolean(0 /* false */), &tmpMeta1);
  _e = tmpMeta5;
  tmp2 = mmc_unbox_integer(tmpMeta1);
  _outChanged = tmp2  /* pattern as ty=Boolean */;

  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _e;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,6,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          if((_evaluateAll || (!omc_NFEvalConstants_isLocalFunctionVariable(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))), _fnNode))))
          {
            omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT0);

            { /* matchcontinue expression */
              {
                volatile mmc_switch_type tmp13;
                int tmp14;
                tmp13 = 0;
                MMC_TRY_INTERNAL(mmc_jumper)
                tmp12_top:
                threadData->mmc_jumper = &new_mmc_jumper;
                for (; tmp13 < 2; tmp13++) {
                  switch (MMC_SWITCH_CAST(tmp13)) {
                  case 0: {
                    /* Pattern matching succeeded */
                    _outExp = omc_NFCeval_evalCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))), _e, _OMC_LIT4, 0 /* false */, 1 /* true */);
                    goto tmp12_done;
                  }
                  case 1: {
                    /* Pattern matching succeeded */
                    _outExp = _e;
                    goto tmp12_done;
                  }
                  }
                  goto tmp12_end;
                  tmp12_end: ;
                }
                goto goto_11;
                tmp12_done:
                (void)tmp13;
                MMC_RESTORE_INTERNAL(mmc_jumper);
                goto tmp12_done2;
                goto_11:;
                MMC_CATCH_INTERNAL(mmc_jumper);
                if (++tmp13 < 2) {
                  goto tmp12_top;
                }
                goto goto_7;
                tmp12_done2:;
              }
            }
            ;

            omc_ErrorExt_rollBack(threadData, _OMC_LIT0);

            _outChanged = 1 /* true */;
          }
          else
          {
            if(_outChanged)
            {
              tmpMeta15 = mmc_mk_box3(9, &NFExpression_CREF__desc, omc_NFComponentRef_getSubscriptedType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))), 0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))));
              _outExp = tmpMeta15;
            }
            else
            {
              _outExp = _e;
            }
          }
          tmpMeta6 = _outExp;
          goto tmp8_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta6 = (_outChanged?omc_NFExpression_retype(threadData, _e):_e);
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
  _outExp = tmpMeta6;

  _outChanged = (_changed || _outChanged);
  _return: OMC_LABEL_UNUSED
  if (out_outChanged) { *out_outChanged = _outChanged; }
  return _outExp;
}
modelica_metatype boxptr_NFEvalConstants_evaluateFuncExpTraverser(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _fnNode, modelica_metatype _evaluateAll, modelica_metatype _changed, modelica_metatype *out_outChanged)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _outChanged;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_evaluateAll);
  tmp2 = mmc_unbox_integer(_changed);
  _outExp = omc_NFEvalConstants_evaluateFuncExpTraverser(threadData, _exp, _fnNode, tmp1, tmp2, &_outChanged);
  /* skip box _outExp; NFExpression */
  if (out_outChanged) { *out_outChanged = mmc_mk_icon(_outChanged); }
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateFuncExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _fnNode, modelica_boolean _evaluateAll)
{
  modelica_metatype _outExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outExp = omc_NFEvalConstants_evaluateFuncExpTraverser(threadData, _exp, _fnNode, _evaluateAll, 0 /* false */, NULL);
  _return: OMC_LABEL_UNUSED
  return _outExp;
}
modelica_metatype boxptr_NFEvalConstants_evaluateFuncExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _fnNode, modelica_metatype _evaluateAll)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_evaluateAll);
  _outExp = omc_NFEvalConstants_evaluateFuncExp(threadData, _exp, _fnNode, tmp1);
  /* skip box _outExp; NFExpression */
  return _outExp;
}

static modelica_metatype closure4_NFEvalConstants_evaluateFuncExp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype fnNode = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype evaluateAll = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFEvalConstants_evaluateFuncExp(thData, exp, fnNode, evaluateAll);
}static modelica_metatype closure5_NFEvalConstants_evaluateFuncExp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype fnNode = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype evaluateAll = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFEvalConstants_evaluateFuncExp(thData, exp, fnNode, evaluateAll);
}
DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateFunction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ffunc)
{
  modelica_metatype _func = NULL;
  modelica_boolean _is_con;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _func = __omcQ_24in_5Ffunc;
  // _is_con has no default value.
  if((!omc_NFFunction_Function_isEvaluated(threadData, _func)))
  {
    omc_NFFunction_Function_markEvaluated(threadData, _func);

    _is_con = omc_NFFunction_Function_isDefaultRecordConstructor(threadData, _func);

    tmpMeta1 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))), mmc_mk_boolean(_is_con));
    tmpMeta2 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))), mmc_mk_boolean(1 /* true */));
    _func = omc_NFFunction_Function_mapExp(threadData, _func, (modelica_fnptr) mmc_mk_box2(0,closure4_NFEvalConstants_evaluateFuncExp,tmpMeta1), (modelica_fnptr) mmc_mk_box2(0,closure5_NFEvalConstants_evaluateFuncExp,tmpMeta2), 1 /* true */, 1 /* true */);

    if(_is_con)
    {
      omc_NFRecord_checkLocalFieldOrder(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))), omc_NFInstNode_InstNode_info(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3)))));
    }

    {
      modelica_metatype _fn_der;
      for (tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 11))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
      {
        _fn_der = MMC_CAR(tmpMeta3);
        {
          modelica_metatype _der_fn;
          for (tmpMeta4 = omc_NFFunction_Function_getCachedFuncs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn_der), 2)))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
          {
            _der_fn = MMC_CAR(tmpMeta4);
            omc_NFEvalConstants_evaluateFunction(threadData, _der_fn);
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _func;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateStmtBranch(threadData_t *threadData, modelica_metatype _branch, modelica_metatype _info)
{
  modelica_metatype _outBranch = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBranch has no default value.
  // _cond has no default value.
  // _body has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _branch;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _cond = tmpMeta2;
  _body = tmpMeta3;

  _cond = omc_NFEvalConstants_evaluateExp(threadData, _cond, _info);

  _body = omc_NFEvalConstants_evaluateStatements(threadData, _body);

  tmpMeta4 = mmc_mk_box2(0, _cond, _body);
  _outBranch = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _outBranch;
}

static modelica_metatype closure6_NFEvalConstants_evaluateDimension(threadData_t *thData, modelica_metatype closure, modelica_metatype dim)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEvalConstants_evaluateDimension(thData, dim, info);
}static modelica_metatype closure7_NFEvalConstants_evaluateExp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEvalConstants_evaluateExp(thData, exp, info);
}
DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateStatement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt)
{
  modelica_metatype _stmt = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmt = __omcQ_24in_5Fstmt;
  _info = omc_NFStatement_info(threadData, _stmt);
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _ty = NULL;
      int tmp4;
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box1(0, _info);
          _ty = omc_NFType_mapDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), (modelica_fnptr) mmc_mk_box2(0,closure6_NFEvalConstants_evaluateDimension,tmpMeta5));

          _e1 = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _info);

          _e2 = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _info);
          tmpMeta6 = mmc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, _e1, _e2, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box1(0, _info);
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), (modelica_fnptr) mmc_mk_box2(0,closure7_NFEvalConstants_evaluateExp,tmpMeta8));
          _stmt = tmpMeta7;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[4] = omc_NFEvalConstants_evaluateStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
          _stmt = tmpMeta9;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp14;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta13; /* defaultValue */
            tmp12 = &__omcQ_24tmpVar3;
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                __omcQ_24tmpVar2 = omc_NFEvalConstants_evaluateStmtBranch(threadData, _b, _info);
                *tmp12 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp12 = &MMC_CDR(*tmp12);
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp12 = mmc_mk_nil();
            tmpMeta11 = __omcQ_24tmpVar3;
          }
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = tmpMeta11;
          _stmt = tmpMeta10;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp17;
            modelica_metatype tmpMeta18;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp19;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2)));
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta18; /* defaultValue */
            tmp17 = &__omcQ_24tmpVar5;
            while(1) {
              tmp19 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp19--;
              }
              if (tmp19 == 0) {
                __omcQ_24tmpVar4 = omc_NFEvalConstants_evaluateStmtBranch(threadData, _b, _info);
                *tmp17 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp17 = &MMC_CDR(*tmp17);
              } else if (tmp19 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp17 = mmc_mk_nil();
            tmpMeta16 = __omcQ_24tmpVar5;
          }
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = tmpMeta16;
          _stmt = tmpMeta15;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          _e1 = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _info);

          _e2 = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _info);

          _e3 = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _info);
          tmpMeta20 = mmc_mk_box5(8, &NFStatement_ASSERT__desc, _e1, _e2, _e3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))));
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[2] = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _info);
          _stmt = tmpMeta21;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_stmt), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[3] = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _info);
          _stmt = tmpMeta22;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[2] = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _info);
          _stmt = tmpMeta23;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          
          /* Pattern matching succeeded */
          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_stmt), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[2] = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _info);
          _stmt = tmpMeta24;

          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_stmt), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[3] = omc_NFEvalConstants_evaluateStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
          _stmt = tmpMeta25;
          tmpMeta1 = _stmt;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _stmt;
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
  _stmt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmt;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateStatements(threadData_t *threadData, modelica_metatype _stmts)
{
  modelica_metatype _outStmts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp4;
    modelica_metatype _s_loopVar = 0;
    modelica_metatype _s;
    _s_loopVar = _stmts;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar7;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_s_loopVar)) {
        _s = MMC_CAR(_s_loopVar);
        _s_loopVar = MMC_CDR(_s_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar6 = omc_NFEvalConstants_evaluateStatement(threadData, _s);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar7;
  }
  _outStmts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outStmts;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateAlgorithm(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg)
{
  modelica_metatype _alg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = __omcQ_24in_5Falg;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(8));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_alg), 8*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFEvalConstants_evaluateStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))));
  _alg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _alg;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateAlgorithms(threadData_t *threadData, modelica_metatype _algs)
{
  modelica_metatype _outAlgs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp4;
    modelica_metatype _a_loopVar = 0;
    modelica_metatype _a;
    _a_loopVar = _algs;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar9;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_a_loopVar)) {
        _a = MMC_CAR(_a_loopVar);
        _a_loopVar = MMC_CDR(_a_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar8 = omc_NFEvalConstants_evaluateAlgorithm(threadData, _a);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar9;
  }
  _outAlgs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outAlgs;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateEqBranch(threadData_t *threadData, modelica_metatype _branch, modelica_metatype _info)
{
  modelica_metatype _outBranch = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBranch has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _branch;
    {
      modelica_metatype _condition = NULL;
      modelica_metatype _body = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _condition has no default value.
      // _body has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _condition = tmpMeta6;
          _body = tmpMeta7;
          /* Pattern matching succeeded */
          _condition = omc_NFEvalConstants_evaluateExp(threadData, _condition, _info);

          _body = omc_NFEvalConstants_evaluateEquations(threadData, _body);
          tmpMeta8 = mmc_mk_box4(3, &NFEquation_Branch_BRANCH__desc, _condition, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 3))), _body);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _branch;
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
  _outBranch = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBranch;
}

static modelica_metatype closure8_NFEvalConstants_evaluateDimension(threadData_t *thData, modelica_metatype closure, modelica_metatype dim)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEvalConstants_evaluateDimension(thData, dim, info);
}static modelica_metatype closure9_NFEvalConstants_evaluateExp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEvalConstants_evaluateExp(thData, exp, info);
}
DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq)
{
  modelica_metatype _eq = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  _info = omc_NFEquation_info(threadData, _eq);
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _ty = NULL;
      int tmp4;
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box1(0, _info);
          _ty = omc_NFType_mapDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (modelica_fnptr) mmc_mk_box2(0,closure8_NFEvalConstants_evaluateDimension,tmpMeta5));

          _e1 = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _info);

          _e2 = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _info);
          tmpMeta6 = mmc_mk_box7(3, &NFEquation_EQUALITY__desc, _e1, _e2, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box1(0, _info);
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (modelica_fnptr) mmc_mk_box2(0,closure9_NFEvalConstants_evaluateExp,tmpMeta8));
          _eq = tmpMeta7;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[4] = omc_NFEvalConstants_evaluateEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
          _eq = tmpMeta9;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp14;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta13; /* defaultValue */
            tmp12 = &__omcQ_24tmpVar13;
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                __omcQ_24tmpVar12 = omc_NFEvalConstants_evaluateEqBranch(threadData, _b, _info);
                *tmp12 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp12 = &MMC_CDR(*tmp12);
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp12 = mmc_mk_nil();
            tmpMeta11 = __omcQ_24tmpVar13;
          }
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = tmpMeta11;
          _eq = tmpMeta10;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp17;
            modelica_metatype tmpMeta18;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp19;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta18; /* defaultValue */
            tmp17 = &__omcQ_24tmpVar15;
            while(1) {
              tmp19 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp19--;
              }
              if (tmp19 == 0) {
                __omcQ_24tmpVar14 = omc_NFEvalConstants_evaluateEqBranch(threadData, _b, _info);
                *tmp17 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp17 = &MMC_CDR(*tmp17);
              } else if (tmp19 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp17 = mmc_mk_nil();
            tmpMeta16 = __omcQ_24tmpVar15;
          }
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = tmpMeta16;
          _eq = tmpMeta15;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          _e1 = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _info);

          _e2 = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _info);

          _e3 = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _info);
          tmpMeta20 = mmc_mk_box6(8, &NFEquation_ASSERT__desc, _e1, _e2, _e3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[2] = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _info);
          _eq = tmpMeta21;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_eq), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[3] = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _info);
          _eq = tmpMeta22;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[2] = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _info);
          _eq = tmpMeta23;
          tmpMeta1 = _eq;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _eq;
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
  _eq = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eq;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateEquations(threadData_t *threadData, modelica_metatype _eql)
{
  modelica_metatype _outEql = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar17;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar16;
    modelica_integer tmp4;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _eql;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar17 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar17;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar16 = omc_NFEvalConstants_evaluateEquation(threadData, _e);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar16,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar17;
  }
  _outEql = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outEql;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateIfExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _info, modelica_boolean *out_outChanged)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _outChanged;
  modelica_metatype _ty = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _tb = NULL;
  modelica_metatype _fb = NULL;
  modelica_boolean _c1;
  modelica_boolean _c2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_boolean tmp6_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outChanged has no default value.
  // _ty has no default value.
  // _cond has no default value.
  // _tb has no default value.
  // _fb has no default value.
  // _c1 has no default value.
  // _c2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _exp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,22,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _ty = tmpMeta2;
  _cond = tmpMeta3;
  _tb = tmpMeta4;
  _fb = tmpMeta5;

  _cond = omc_NFEvalConstants_evaluateExpTraverser(threadData, _cond, _info, 0 /* false */ ,&_outChanged);

  _cond = omc_NFSimplifyExp_simplify(threadData, _cond, 0 /* false */);

  
  
  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _cond;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,3,1) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          _outExp = omc_NFEvalConstants_evaluateExpTraverser(threadData, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cond), 2))))?_tb:_fb), _info, 0 /* false */, NULL);
          tmpMeta[0+0] = _outExp;
          tmp6_c1 = 1 /* true */;
          goto tmp8_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _tb = omc_NFEvalConstants_evaluateExpTraverser(threadData, _tb, _info, 0 /* false */ ,&_c1);

          _fb = omc_NFEvalConstants_evaluateExpTraverser(threadData, _fb, _info, 0 /* false */ ,&_c2);
          tmpMeta11 = mmc_mk_box5(25, &NFExpression_IF__desc, _ty, _cond, _tb, _fb);
          tmpMeta[0+0] = tmpMeta11;
          tmp6_c1 = ((_outChanged || _c1) || _c2);
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
  _outExp = tmpMeta[0+0];
  _outChanged = tmp6_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outChanged) { *out_outChanged = _outChanged; }
  return _outExp;
}
modelica_metatype boxptr_NFEvalConstants_evaluateIfExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _info, modelica_metatype *out_outChanged)
{
  modelica_boolean _outChanged;
  modelica_metatype _outExp = NULL;
  _outExp = omc_NFEvalConstants_evaluateIfExp(threadData, _exp, _info, &_outChanged);
  /* skip box _outExp; NFExpression */
  if (out_outChanged) { *out_outChanged = mmc_mk_icon(_outChanged); }
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateDimension(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _info)
{
  modelica_metatype _outDim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDim has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _e = omc_NFEvalConstants_evaluateExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), _info);
          tmpMeta1 = (referenceEq(_e, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))))?_dim:omc_NFDimension_fromExp(threadData, _e, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 3))))));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _dim;
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
  _outDim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outDim;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _info)
{
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ty = __omcQ_24in_5Fty;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ty;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 10: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp9;
            modelica_metatype _d_loopVar = 0;
            modelica_metatype _d;
            _d_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar19;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_d_loopVar)) {
                _d = MMC_CAR(_d_loopVar);
                _d_loopVar = MMC_CDR(_d_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar18 = omc_NFEvalConstants_evaluateDimension(threadData, _d, _info);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar19;
          }
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_ty), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = tmpMeta6;
          _ty = tmpMeta5;
          tmpMeta1 = _ty;
          goto tmp3_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFType_simplifyConditionalArray(threadData, _ty);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ty;
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
  _ty = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ty;
}

static modelica_metatype closure10_NFEvalConstants_evaluateExpTraverser(threadData_t *thData, modelica_metatype closure, modelica_metatype exp, modelica_metatype changed, modelica_metatype tmp8)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEvalConstants_evaluateExpTraverser(thData, exp, info, changed, tmp8);
}static modelica_metatype closure11_NFEvalConstants_evaluateExpTraverser(threadData_t *thData, modelica_metatype closure, modelica_metatype exp, modelica_metatype changed, modelica_metatype tmp25)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEvalConstants_evaluateExpTraverser(thData, exp, info, changed, tmp25);
}static modelica_metatype closure12_NFEvalConstants_evaluateExpTraverser(threadData_t *thData, modelica_metatype closure, modelica_metatype exp, modelica_metatype changed, modelica_metatype tmp31)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEvalConstants_evaluateExpTraverser(thData, exp, info, changed, tmp31);
}static modelica_metatype closure13_NFEvalConstants_evaluateExpTraverser(threadData_t *thData, modelica_metatype closure, modelica_metatype exp, modelica_metatype changed, modelica_metatype tmp36)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEvalConstants_evaluateExpTraverser(thData, exp, info, changed, tmp36);
}
DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateExpTraverser(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _info, modelica_boolean _changed, modelica_boolean *out_outChanged)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _outChanged;
  modelica_metatype _e = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _ty2 = NULL;
  modelica_integer _var;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outChanged = _changed;
  // _e has no default value.
  // _cref has no default value.
  // _ty has no default value.
  // _ty2 has no default value.
  // _var has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta9 = mmc_mk_box1(0, _info);
          tmpMeta10 = omc_NFExpression_mapFoldShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure10_NFEvalConstants_evaluateExpTraverser,tmpMeta9), mmc_mk_boolean(0 /* false */), &tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,2) == 0) goto goto_2;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          _outExp = tmpMeta10;
          _ty = tmpMeta11;
          _cref = tmpMeta12;
          tmp7 = mmc_unbox_integer(tmpMeta6);
          _outChanged = tmp7  /* pattern as ty=Boolean */;

          _var = omc_NFComponentRef_nodeVariability(threadData, _cref);

          if((((modelica_integer)_var <= 2) && (!omc_NFType_isExternalObject(threadData, _ty))))
          {
            if(((modelica_integer)_var > 1))
            {
              omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT6);

              { /* matchcontinue expression */
                {
                  volatile mmc_switch_type tmp15;
                  int tmp16;
                  tmp15 = 0;
                  MMC_TRY_INTERNAL(mmc_jumper)
                  tmp14_top:
                  threadData->mmc_jumper = &new_mmc_jumper;
                  for (; tmp15 < 2; tmp15++) {
                    switch (MMC_SWITCH_CAST(tmp15)) {
                    case 0: {
                      modelica_metatype tmpMeta17;
                      /* Pattern matching succeeded */
                      _e = omc_NFCeval_evalCref(threadData, _cref, _outExp, _OMC_LIT4, 0 /* false */, 1 /* true */);

                      tmpMeta17 = mmc_mk_box3(3, &NFFlatten_Prefix_PREFIX__desc, _OMC_LIT5, _cref);
                      _e = omc_NFFlatten_flattenExp(threadData, _e, tmpMeta17, _info);

                      _outExp = _e;

                      _outChanged = 1 /* true */;
                      goto tmp14_done;
                    }
                    case 1: {
                      /* Pattern matching succeeded */
                      goto tmp14_done;
                    }
                    }
                    goto tmp14_end;
                    tmp14_end: ;
                  }
                  goto goto_13;
                  tmp14_done:
                  (void)tmp15;
                  MMC_RESTORE_INTERNAL(mmc_jumper);
                  goto tmp14_done2;
                  goto_13:;
                  MMC_CATCH_INTERNAL(mmc_jumper);
                  if (++tmp15 < 2) {
                    goto tmp14_top;
                  }
                  goto goto_2;
                  tmp14_done2:;
                }
              }
              ;

              omc_ErrorExt_rollBack(threadData, _OMC_LIT6);
            }
            else
            {
              _outExp = omc_NFCeval_evalCref(threadData, _cref, _outExp, omc_NFCeval_EvalTarget_new(threadData, _info, ((modelica_integer) 0), mmc_mk_none()), 0 /* false */, 1 /* true */);

              tmpMeta18 = mmc_mk_box3(3, &NFFlatten_Prefix_PREFIX__desc, _OMC_LIT5, _cref);
              _outExp = omc_NFFlatten_flattenExp(threadData, _outExp, tmpMeta18, _info);

              _outChanged = 1 /* true */;
            }
          }
          else
          {
            if(_outChanged)
            {
              _ty = omc_NFComponentRef_getSubscriptedType(threadData, _cref, 0 /* false */);
            }
          }

          _ty2 = omc_NFEvalConstants_evaluateType(threadData, _ty, _info);

          if((!referenceEq(_ty, _ty2)))
          {
            _outExp = omc_NFExpression_setType(threadData, _ty2, _outExp);
          }
          tmpMeta[0+0] = _outExp;
          tmp1_c1 = _outChanged;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          if (1 /* true */ != tmp20) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _exp;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,22,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFEvalConstants_evaluateIfExp(threadData, _exp, _info, &tmp1_c1);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))))
          {
            /* Pattern-matching assignment */
            tmpMeta21 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
            if (optionNone(tmpMeta21)) goto goto_2;
            tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 1));
            _e = tmpMeta22;

            /* Pattern-matching tuple assignment */
            tmpMeta26 = mmc_mk_box1(0, _info);
            tmpMeta27 = omc_NFExpression_mapFoldShallow(threadData, _e, (modelica_fnptr) mmc_mk_box2(0,closure11_NFEvalConstants_evaluateExpTraverser,tmpMeta26), mmc_mk_boolean(0 /* false */), &tmpMeta23);
            _e = tmpMeta27;
            tmp24 = mmc_unbox_integer(tmpMeta23);
            _outChanged = tmp24  /* pattern as ty=Boolean */;

            if(_outChanged)
            {
              tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(4));
              memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[3] = mmc_mk_some(_e);
              _exp = tmpMeta28;
            }
          }
          tmpMeta[0+0] = _exp;
          tmp1_c1 = _outChanged;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta32 = mmc_mk_box1(0, _info);
          tmpMeta33 = omc_NFExpression_mapFoldShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure12_NFEvalConstants_evaluateExpTraverser,tmpMeta32), mmc_mk_boolean(0 /* false */), &tmpMeta29);
          _outExp = tmpMeta33;
          tmp30 = mmc_unbox_integer(tmpMeta29);
          _outChanged = tmp30  /* pattern as ty=Boolean */;

          if(_outChanged)
          {
            _outExp = omc_NFExpression_retype(threadData, _outExp);
          }
          tmpMeta[0+0] = _outExp;
          tmp1_c1 = _outChanged;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta34;
          modelica_integer tmp35;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta37 = mmc_mk_box1(0, _info);
          tmpMeta38 = omc_NFExpression_mapFoldShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure13_NFEvalConstants_evaluateExpTraverser,tmpMeta37), mmc_mk_boolean(0 /* false */), &tmpMeta34);
          _outExp = tmpMeta38;
          tmp35 = mmc_unbox_integer(tmpMeta34);
          _outChanged = tmp35  /* pattern as ty=Boolean */;

          _ty = omc_NFExpression_typeOf(threadData, _outExp);

          _ty2 = omc_NFEvalConstants_evaluateType(threadData, _ty, _info);
          tmpMeta[0+0] = (referenceEq(_ty, _ty2)?_outExp:omc_NFExpression_setType(threadData, _ty2, _outExp));
          tmp1_c1 = _outChanged;
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
  _outExp = tmpMeta[0+0];
  _outChanged = tmp1_c1;

  _outChanged = (_changed || _outChanged);
  _return: OMC_LABEL_UNUSED
  if (out_outChanged) { *out_outChanged = _outChanged; }
  return _outExp;
}
modelica_metatype boxptr_NFEvalConstants_evaluateExpTraverser(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _info, modelica_metatype _changed, modelica_metatype *out_outChanged)
{
  modelica_integer tmp1;
  modelica_boolean _outChanged;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_changed);
  _outExp = omc_NFEvalConstants_evaluateExpTraverser(threadData, _exp, _info, tmp1, &_outChanged);
  /* skip box _outExp; NFExpression */
  if (out_outChanged) { *out_outChanged = mmc_mk_icon(_outChanged); }
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _info)
{
  modelica_metatype _outExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outExp = omc_NFEvalConstants_evaluateExpTraverser(threadData, _exp, _info, 0 /* false */, NULL);
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateTypeAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattribute, modelica_metatype _prefix, modelica_integer _context)
{
  modelica_metatype _attribute = NULL;
  modelica_string _name = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _sbinding = NULL;
  modelica_boolean _structural;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _attribute = __omcQ_24in_5Fattribute;
  // _name has no default value.
  // _binding has no default value.
  // _sbinding has no default value.
  // _structural has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _attribute;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _name = tmpMeta2;
  _binding = tmpMeta3;

  _structural = ((stringEqual(_name, _OMC_LIT7)) || (stringEqual(_name, _OMC_LIT8)));

  _sbinding = omc_NFEvalConstants_evaluateBinding(threadData, _binding, _prefix, _structural, 3, _context);

  if((!referenceEq(_binding, _sbinding)))
  {
    tmpMeta4 = mmc_mk_box2(0, _name, _sbinding);
    _attribute = tmpMeta4;
  }
  _return: OMC_LABEL_UNUSED
  return _attribute;
}
modelica_metatype boxptr_NFEvalConstants_evaluateTypeAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattribute, modelica_metatype _prefix, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_metatype _attribute = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _attribute = omc_NFEvalConstants_evaluateTypeAttribute(threadData, __omcQ_24in_5Fattribute, _prefix, tmp1);
  /* skip box _attribute; tuple<String, NFBinding> */
  return _attribute;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype _prefix, modelica_boolean _structural, modelica_integer _variability, modelica_integer _context)
{
  modelica_metatype _binding = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _eexp = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _binding = __omcQ_24in_5Fbinding;
  // _exp has no default value.
  // _eexp has no default value.
  // _info has no default value.
  if(omc_NFBinding_isBound(threadData, _binding))
  {
    _exp = omc_NFBinding_getTypedExp(threadData, _binding);

    if(_structural)
    {
      _info = omc_NFBinding_getInfo(threadData, _binding);

      _eexp = omc_NFEvalConstants_evaluateExp(threadData, _exp, _info);

      _eexp = omc_NFSimplifyExp_simplify(threadData, _eexp, 0 /* false */);

      if((!(omc_NFExpression_isLiteral(threadData, _eexp) || omc_NFExpression_isKnownSizeFill(threadData, _eexp))))
      {
        if((((modelica_integer)_variability > 1) || omc_NFInstContext_inRelaxed(threadData, _context)))
        {
          _eexp = omc_NFCeval_tryEvalExp(threadData, _eexp, _OMC_LIT4);
        }
        else
        {
          _eexp = omc_NFCeval_evalExp(threadData, _eexp, omc_NFCeval_EvalTarget_new(threadData, _info, _context, mmc_mk_none()));
        }
      }

      tmpMeta1 = mmc_mk_box3(3, &NFFlatten_Prefix_PREFIX__desc, _OMC_LIT5, _prefix);
      _eexp = omc_NFFlatten_flattenExp(threadData, _eexp, tmpMeta1, _info);
    }
    else
    {
      _eexp = omc_NFEvalConstants_evaluateExp(threadData, _exp, omc_NFBinding_getInfo(threadData, _binding));
    }

    if((!referenceEq(_exp, _eexp)))
    {
      _binding = omc_NFBinding_setTypedExp(threadData, _eexp, _binding);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _binding;
}
modelica_metatype boxptr_NFEvalConstants_evaluateBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype _prefix, modelica_metatype _structural, modelica_metatype _variability, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _binding = NULL;
  tmp1 = mmc_unbox_integer(_structural);
  tmp2 = mmc_unbox_integer(_variability);
  tmp3 = mmc_unbox_integer(_context);
  _binding = omc_NFEvalConstants_evaluateBinding(threadData, __omcQ_24in_5Fbinding, _prefix, tmp1, tmp2, tmp3);
  /* skip box _binding; NFBinding */
  return _binding;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluateVariable(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_integer _context, modelica_metatype _settings)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _binding = NULL;
  modelica_boolean _structural;
  modelica_integer _variability;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  _var = __omcQ_24in_5Fvar;
  // _binding has no default value.
  // _structural has no default value.
  // _variability has no default value.
  _variability = omc_NFVariable_variability(threadData, _var);

  _structural = (((modelica_integer)_variability <= 2) && (!omc_NFType_isExternalObject(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))))));

  _binding = omc_NFEvalConstants_evaluateBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _structural, (modelica_integer)_variability, _context);

  if((!referenceEq(_binding, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))))))
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(12));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = _binding;
    _var = tmpMeta1;
  }

  {
    modelica_metatype __omcQ_24tmpVar21;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar20;
    modelica_integer tmp5;
    modelica_metatype _a_loopVar = 0;
    modelica_metatype _a;
    _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar21 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar21;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_a_loopVar)) {
        _a = MMC_CAR(_a_loopVar);
        _a_loopVar = MMC_CDR(_a_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar20 = omc_NFEvalConstants_evaluateTypeAttribute(threadData, _a, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _context);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar20,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar21;
  }
  __omcQ_24mrfa_5F0 = tmpMeta2;

  {
    modelica_metatype __omcQ_24tmpVar23;
    modelica_metatype* tmp7;
    modelica_metatype tmpMeta8;
    modelica_metatype __omcQ_24tmpVar22;
    modelica_integer tmp9;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 8)));
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar23 = tmpMeta8; /* defaultValue */
    tmp7 = &__omcQ_24tmpVar23;
    while(1) {
      tmp9 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp9--;
      }
      if (tmp9 == 0) {
        __omcQ_24tmpVar22 = omc_NFEvalConstants_evaluateVariable(threadData, _v, _context, _settings);
        *tmp7 = mmc_mk_cons(__omcQ_24tmpVar22,0);
        tmp7 = &MMC_CDR(*tmp7);
      } else if (tmp9 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp7 = mmc_mk_nil();
    tmpMeta6 = __omcQ_24tmpVar23;
  }
  __omcQ_24mrfa_5F1 = tmpMeta6;

  tmpMeta10 = mmc_mk_box11(3, &NFVariable_VARIABLE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6))), __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11))));
  _var = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _var;
}
modelica_metatype boxptr_NFEvalConstants_evaluateVariable(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _context, modelica_metatype _settings)
{
  modelica_integer tmp1;
  modelica_metatype _var = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _var = omc_NFEvalConstants_evaluateVariable(threadData, __omcQ_24in_5Fvar, tmp1, _settings);
  /* skip box _var; NFVariable */
  return _var;
}

DLLDirection
modelica_metatype omc_NFEvalConstants_evaluate(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_integer _context)
{
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype __omcQ_24mrfa_5F4 = NULL;
  modelica_metatype __omcQ_24mrfa_5F5 = NULL;
  modelica_metatype __omcQ_24mrfa_5F6 = NULL;
  modelica_metatype _flatModel = NULL;
  modelica_metatype _settings = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F2 has no default value.
  // __omcQ_24mrfa_5F3 has no default value.
  // __omcQ_24mrfa_5F4 has no default value.
  // __omcQ_24mrfa_5F5 has no default value.
  // __omcQ_24mrfa_5F6 has no default value.
  _flatModel = __omcQ_24in_5FflatModel;
  // _settings has no default value.
  tmpMeta1 = mmc_mk_box2(3, &NFEvalConstants_EvalSettings_SETTINGS__desc, mmc_mk_boolean(omc_Flags_isSet(threadData, _OMC_LIT11)));
  _settings = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar25;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar24;
    modelica_integer tmp5;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar25 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar25;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar24 = omc_NFEvalConstants_evaluateVariable(threadData, _v, _context, _settings);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar24,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar25;
  }
  __omcQ_24mrfa_5F2 = tmpMeta2;

  __omcQ_24mrfa_5F3 = omc_NFEvalConstants_evaluateEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))));

  __omcQ_24mrfa_5F4 = omc_NFEvalConstants_evaluateEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))));

  __omcQ_24mrfa_5F5 = omc_NFEvalConstants_evaluateAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))));

  __omcQ_24mrfa_5F6 = omc_NFEvalConstants_evaluateAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7))));

  tmpMeta6 = mmc_mk_box8(3, &NFFlatModel_FLAT__MODEL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 2))), __omcQ_24mrfa_5F2, __omcQ_24mrfa_5F3, __omcQ_24mrfa_5F4, __omcQ_24mrfa_5F5, __omcQ_24mrfa_5F6, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 8))));
  _flatModel = tmpMeta6;

  omc_ExecStat_execStat(threadData, _OMC_LIT12);
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}
modelica_metatype boxptr_NFEvalConstants_evaluate(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_metatype _flatModel = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _flatModel = omc_NFEvalConstants_evaluate(threadData, __omcQ_24in_5FflatModel, tmp1);
  /* skip box _flatModel; NFFlatModel */
  return _flatModel;
}

