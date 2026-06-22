#include "omc_simulation_settings.h"
#include "NFStructural.h"
#define _OMC_LIT0_data "start"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,5,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Parameter %s has annotation(Evaluate=true) and no binding."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,58,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(596)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#include "util/modelica.h"

#include "NFStructural_includes.h"



DLLDirection
void omc_NFStructural_markSubscript(threadData_t *threadData, modelica_metatype _sub)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _sub;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          omc_NFStructural_markExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sub), 2))));
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_NFStructural_markExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sub), 2))));
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_NFStructural_markExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sub), 2))));
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFStructural_markSubscripts(threadData_t *threadData, modelica_metatype _exp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_NFComponentRef_applySubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), boxvar_NFStructural_markSubscript, 0 /* false */);
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFStructural_markExpSize__traverser(threadData_t *threadData, modelica_metatype _exp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      modelica_metatype _iters = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _iters has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,13,1) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,3,2) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          _iters = tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_metatype _iter;
            for (tmpMeta7 = _iters; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _iter = MMC_CAR(tmpMeta7);
              omc_NFStructural_markExp(threadData, omc_Util_tuple22(threadData, _iter));
            }
          }
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFStructural_markExpSize(threadData_t *threadData, modelica_metatype _exp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_NFExpression_apply(threadData, _exp, boxvar_NFStructural_markExpSize__traverser);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFStructural_markComponent(threadData_t *threadData, modelica_metatype _component, modelica_metatype _node)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _binding = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  // _binding has no default value.
  _comp = omc_NFComponent_setVariability(threadData, 2, _component);

  _comp = omc_NFComponent_setFinal(threadData, _comp, 1 /* true */);

  omc_NFInstNode_InstNode_updateComponent(threadData, _comp, _node);

  _binding = omc_NFBinding_getExpOpt(threadData, omc_NFComponent_getBinding(threadData, _comp));

  if(isSome(_binding))
  {
    omc_NFStructural_markExp(threadData, omc_Util_getOption(threadData, _binding));
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFStructural_markSubscriptsInExp(threadData_t *threadData, modelica_metatype _exp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_NFComponentRef_applySubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), boxvar_NFStructural_markSubscript, 0 /* false */);
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_NFExpression_applyShallow(threadData, _exp, boxvar_NFStructural_markSubscriptsInExp);
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFStructural_markExp(threadData_t *threadData, modelica_metatype _exp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _comp = NULL;
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _node has no default value.
      // _comp has no default value.
      // _e has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,5) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 5));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (1 != tmp8) goto tmp2_end;
          
          _node = tmpMeta6;
          /* Pattern matching succeeded */
          if(omc_NFInstNode_InstNode_isComponent(threadData, _node))
          {
            _comp = omc_NFInstNode_InstNode_component(threadData, _node);

            if((omc_NFComponent_variability(threadData, _comp) == 3))
            {
              omc_NFStructural_markComponent(threadData, _comp, _node);
            }
          }

          omc_NFExpression_applyShallow(threadData, _exp, boxvar_NFStructural_markExp);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,14,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_NFStructural_markSubscriptsInExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))))
          {
            /* Pattern-matching assignment */
            tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
            if (optionNone(tmpMeta9)) goto goto_1;
            tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
            _e = tmpMeta10;

            omc_NFStructural_markExp(threadData, _e);
          }
          goto tmp2_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_NFExpression_applyShallow(threadData, _exp, boxvar_NFStructural_markExp);
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFStructural_markDimension(threadData_t *threadData, modelica_metatype _dimension)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _dimension;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          omc_NFStructural_markExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dimension), 2))));
          goto tmp2_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_NFStructural_markExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dimension), 2))));
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

static modelica_metatype closure0_NFStructural_isExpressionNotFixed(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype requireFinal = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype maxDepth = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFStructural_isExpressionNotFixed(thData, exp, requireFinal, maxDepth);
}static modelica_metatype closure1_NFStructural_isExpressionNotFixed(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype requireFinal = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype maxDepth = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFStructural_isExpressionNotFixed(thData, exp, requireFinal, maxDepth);
}static modelica_metatype closure2_NFStructural_isExpressionNotFixed(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype requireFinal = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype maxDepth = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFStructural_isExpressionNotFixed(thData, exp, requireFinal, maxDepth);
}
DLLDirection
modelica_boolean omc_NFStructural_isExpressionNotFixed(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _requireFinal, modelica_integer _maxDepth)
{
  modelica_boolean _isNotFixed;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isNotFixed has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _c = NULL;
      modelica_integer _var;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _c has no default value.
      // _var has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFComponentRef_isCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))) && (!omc_NFComponentRef_isIterator(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))))) goto tmp3_end;
          _node = omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));

          if(omc_NFInstNode_InstNode_isComponent(threadData, _node))
          {
            _c = omc_NFInstNode_InstNode_component(threadData, _node);

            _var = omc_NFComponent_variability(threadData, _c);

            if(((modelica_integer)_var <= 2))
            {
              _isNotFixed = 0 /* false */;
            }
            else
            {
              if((((((modelica_integer)_var == 3) && ((!_requireFinal) || omc_NFComponent_isFinal(threadData, _c))) && (!omc_NFComponent_isExternalObject(threadData, _c))) && omc_NFComponent_isFixed(threadData, _c)))
              {
                _isNotFixed = omc_NFStructural_isComponentBindingNotFixed(threadData, _c, _node, _requireFinal, ((modelica_integer) -1) + _maxDepth, 0 /* false */);
              }
              else
              {
                _isNotFixed = 1 /* true */;
              }
            }
          }
          else
          {
            _isNotFixed = 1 /* true */;
          }
          tmpMeta6 = mmc_mk_box2(0, mmc_mk_boolean(_requireFinal), mmc_mk_integer(_maxDepth));
          tmp1 = (_isNotFixed || omc_NFExpression_containsShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure0_NFStructural_isExpressionNotFixed,tmpMeta6)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))))
          {
            _isNotFixed = omc_NFStructural_isExpressionNotFixed(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))), _requireFinal, _maxDepth);
          }
          else
          {
            _isNotFixed = 0 /* false */;
          }
          tmp1 = _isNotFixed;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if((omc_NFCall_isImpure(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))) || omc_NFCall_isExternal(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))))))
          {
            _isNotFixed = 1 /* true */;
          }
          else
          {
            tmpMeta7 = mmc_mk_box2(0, mmc_mk_boolean(_requireFinal), mmc_mk_integer(_maxDepth));
            _isNotFixed = omc_NFExpression_containsShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure1_NFStructural_isExpressionNotFixed,tmpMeta7));
          }
          tmp1 = _isNotFixed;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(0, mmc_mk_boolean(_requireFinal), mmc_mk_integer(_maxDepth));
          tmp1 = omc_NFExpression_containsShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure2_NFStructural_isExpressionNotFixed,tmpMeta8));
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
  _isNotFixed = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isNotFixed;
}
modelica_metatype boxptr_NFStructural_isExpressionNotFixed(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _requireFinal, modelica_metatype _maxDepth)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _isNotFixed;
  modelica_metatype out_isNotFixed;
  tmp1 = mmc_unbox_integer(_requireFinal);
  tmp2 = mmc_unbox_integer(_maxDepth);
  _isNotFixed = omc_NFStructural_isExpressionNotFixed(threadData, _exp, tmp1, tmp2);
  out_isNotFixed = mmc_mk_icon(_isNotFixed);
  return out_isNotFixed;
}

DLLDirection
modelica_boolean omc_NFStructural_isComponentBindingNotFixed(threadData_t *threadData, modelica_metatype _component, modelica_metatype _node, modelica_boolean _requireFinal, modelica_integer _maxDepth, modelica_boolean _isRecord)
{
  modelica_boolean _isNotFixed;
  modelica_metatype _binding = NULL;
  modelica_metatype _parent = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isNotFixed has no default value.
  // _binding has no default value.
  // _parent has no default value.
  _binding = omc_NFComponent_getBinding(threadData, _component);

  if(omc_NFBinding_isUnbound(threadData, _binding))
  {
    if((_isRecord || omc_NFInstNode_InstNode_isRecord(threadData, _node)))
    {
      _isNotFixed = 0 /* false */;
    }
    else
    {
      _parent = omc_NFInstNode_InstNode_parent(threadData, _node);

      if((omc_NFInstNode_InstNode_isComponent(threadData, _parent) && omc_NFInstNode_InstNode_isRecord(threadData, _parent)))
      {
        /* Tail recursive call */
        _component = omc_NFInstNode_InstNode_component(threadData, _parent);
        _node = _parent;
        _isRecord = 1 /* true */;
        goto _tailrecursive;
        /* TODO: Make sure any eventual dead code below is never generated */
        ;
      }
      else
      {
        _binding = omc_NFComponent_getTypeAttributeBinding(threadData, _component, _OMC_LIT0);

        _isNotFixed = omc_NFStructural_isBindingNotFixed(threadData, _binding, _requireFinal, _maxDepth);
      }
    }
  }
  else
  {
    _isNotFixed = omc_NFStructural_isBindingNotFixed(threadData, _binding, _requireFinal, _maxDepth);
  }
  _return: OMC_LABEL_UNUSED
  return _isNotFixed;
}
modelica_metatype boxptr_NFStructural_isComponentBindingNotFixed(threadData_t *threadData, modelica_metatype _component, modelica_metatype _node, modelica_metatype _requireFinal, modelica_metatype _maxDepth, modelica_metatype _isRecord)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_boolean _isNotFixed;
  modelica_metatype out_isNotFixed;
  tmp1 = mmc_unbox_integer(_requireFinal);
  tmp2 = mmc_unbox_integer(_maxDepth);
  tmp3 = mmc_unbox_integer(_isRecord);
  _isNotFixed = omc_NFStructural_isComponentBindingNotFixed(threadData, _component, _node, tmp1, tmp2, tmp3);
  out_isNotFixed = mmc_mk_icon(_isNotFixed);
  return out_isNotFixed;
}

DLLDirection
modelica_boolean omc_NFStructural_isBindingNotFixed(threadData_t *threadData, modelica_metatype _binding, modelica_boolean _requireFinal, modelica_integer _maxDepth)
{
  modelica_boolean _isNotFixed;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isNotFixed has no default value.
  if((_maxDepth == ((modelica_integer) 0)))
  {
    _isNotFixed = 1 /* true */;

    goto _return;
  }

  if(omc_NFBinding_hasExp(threadData, _binding))
  {
    _isNotFixed = omc_NFStructural_isExpressionNotFixed(threadData, omc_NFBinding_getExp(threadData, _binding), _requireFinal, _maxDepth);
  }
  else
  {
    _isNotFixed = 1 /* true */;
  }
  _return: OMC_LABEL_UNUSED
  return _isNotFixed;
}
modelica_metatype boxptr_NFStructural_isBindingNotFixed(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _requireFinal, modelica_metatype _maxDepth)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _isNotFixed;
  modelica_metatype out_isNotFixed;
  tmp1 = mmc_unbox_integer(_requireFinal);
  tmp2 = mmc_unbox_integer(_maxDepth);
  _isNotFixed = omc_NFStructural_isBindingNotFixed(threadData, _binding, tmp1, tmp2);
  out_isNotFixed = mmc_mk_icon(_isNotFixed);
  return out_isNotFixed;
}

DLLDirection
modelica_boolean omc_NFStructural_isStructuralComponent(threadData_t *threadData, modelica_metatype _component, modelica_metatype _compAttrs, modelica_metatype _compBinding, modelica_metatype _compNode, modelica_boolean _compEval, modelica_boolean _parentEval, modelica_integer _context)
{
  modelica_boolean _isStructural;
  modelica_metatype _binding = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isStructural has no default value.
  // _binding has no default value.
  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_compAttrs), 4)))) != 3))
  {
    _isStructural = 0 /* false */;
  }
  else
  {
    if((_compEval || _parentEval))
    {
      _binding = (omc_NFBinding_isBound(threadData, _compBinding)?_compBinding:omc_NFComponent_getTypeAttributeBinding(threadData, _component, _OMC_LIT0));

      if((!omc_NFComponent_isFixed(threadData, _component)))
      {
        _isStructural = 0 /* false */;
      }
      else
      {
        if(omc_NFComponent_isExternalObject(threadData, _component))
        {
          _isStructural = 0 /* false */;
        }
        else
        {
          if((!(omc_NFBinding_isBound(threadData, _binding) || omc_NFInstNode_InstNode_hasBinding(threadData, _compNode))))
          {
            if(((!_parentEval) && (!omc_NFInstContext_inRelaxed(threadData, _context))))
            {
              tmpMeta1 = mmc_mk_cons(omc_NFInstNode_InstNode_name(threadData, _compNode), MMC_REFSTRUCTLIT(mmc_nil));
              omc_Error_addSourceMessage(threadData, _OMC_LIT4, tmpMeta1, omc_NFInstNode_InstNode_info(threadData, _compNode));
            }

            _isStructural = 0 /* false */;
          }
          else
          {
            if(omc_NFStructural_isBindingNotFixed(threadData, _binding, 0 /* false */, ((modelica_integer) 4)))
            {
              _isStructural = 0 /* false */;
            }
            else
            {
              _isStructural = 1 /* true */;
            }
          }
        }
      }
    }
    else
    {
      _isStructural = 0 /* false */;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _isStructural;
}
modelica_metatype boxptr_NFStructural_isStructuralComponent(threadData_t *threadData, modelica_metatype _component, modelica_metatype _compAttrs, modelica_metatype _compBinding, modelica_metatype _compNode, modelica_metatype _compEval, modelica_metatype _parentEval, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_boolean _isStructural;
  modelica_metatype out_isStructural;
  tmp1 = mmc_unbox_integer(_compEval);
  tmp2 = mmc_unbox_integer(_parentEval);
  tmp3 = mmc_unbox_integer(_context);
  _isStructural = omc_NFStructural_isStructuralComponent(threadData, _component, _compAttrs, _compBinding, _compNode, tmp1, tmp2, tmp3);
  out_isStructural = mmc_mk_icon(_isStructural);
  return out_isStructural;
}

