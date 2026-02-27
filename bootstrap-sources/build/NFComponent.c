#include "omc_simulation_settings.h"
#include "NFComponent.h"
#define _OMC_LIT0_data "equalityConstraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,18,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,0,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "unit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "fixed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,5,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,4) {&IOStream_IOStreamType_LIST__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "each "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,5,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,3,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,2,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,10,3) {&SCodeDump_SCodeDumpOptions_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,10) {&NFBinding_WILD__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT16,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,5) {&NFModifier_Modifier_NOMOD__desc,}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#include "util/modelica.h"

#include "NFComponent_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFComponent_hasBinding_has__missing__binding(threadData_t *threadData, modelica_metatype _component);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFComponent_hasBinding_has__missing__binding(threadData_t *threadData, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFComponent_hasBinding_has__missing__binding,2,0) {(void*) boxptr_NFComponent_hasBinding_has__missing__binding,0}};
#define boxvar_NFComponent_hasBinding_has__missing__binding MMC_REFSTRUCTLIT(boxvar_lit_NFComponent_hasBinding_has__missing__binding)

DLLDirection
modelica_integer omc_NFComponent_countConnectorVars(threadData_t *threadData, modelica_metatype _component, modelica_boolean _isRoot, modelica_integer *out_flows, modelica_integer *out_streams, modelica_boolean *out_knownSize)
{
  modelica_integer _potentials;
  modelica_integer _flows;
  modelica_integer _streams;
  modelica_boolean _knownSize;
  modelica_metatype _ty = NULL;
  modelica_integer _cty;
  modelica_metatype _cls = NULL;
  modelica_metatype _eq_node_opt = NULL;
  modelica_metatype _eq_node = NULL;
  modelica_integer _comp_size;
  modelica_integer _p;
  modelica_integer _f;
  modelica_integer _s;
  modelica_metatype _fn = NULL;
  modelica_boolean _known_size;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _potentials = ((modelica_integer) 0);
  _flows = ((modelica_integer) 0);
  _streams = ((modelica_integer) 0);
  _knownSize = 1 /* true */;
  // _ty has no default value.
  // _cty has no default value.
  // _cls has no default value.
  // _eq_node_opt has no default value.
  // _eq_node has no default value.
  _comp_size = ((modelica_integer) 0);
  // _p has no default value.
  // _f has no default value.
  // _s has no default value.
  // _fn has no default value.
  // _known_size has no default value.
  _cls = omc_NFInstNode_InstNode_getClass(threadData, omc_NFComponent_classInstance(threadData, _component));

  _eq_node_opt = omc_NFClass_tryLookupElement(threadData, _OMC_LIT0, _cls, NULL);

  if((isSome(_eq_node_opt) && omc_SCodeUtil_isFunction(threadData, omc_NFInstNode_InstNode_definition(threadData, omc_Util_getOption(threadData, _eq_node_opt)))))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _eq_node_opt;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _eq_node = tmpMeta2;

    omc_NFFunction_Function_instFunctionNode(threadData, _eq_node, ((modelica_integer) 0), omc_NFComponent_info(threadData, _component));

    _fn = listHead(omc_NFFunction_Function_typeNodeCache(threadData, _eq_node, ((modelica_integer) 16)));

    _ty = omc_NFFunction_Function_returnType(threadData, _fn);

    if(omc_NFType_hasKnownSize(threadData, _ty))
    {
      _comp_size = omc_NFType_sizeOf(threadData, _ty, 0 /* false */);
    }
    else
    {
      _comp_size = ((modelica_integer) 0);

      _knownSize = 0 /* false */;
    }
  }
  else
  {
    _ty = omc_NFComponent_getType(threadData, _component);

    if(_isRoot)
    {
      _comp_size = ((modelica_integer) 1);
    }
    else
    {
      if(omc_NFType_hasKnownSize(threadData, _ty))
      {
        _comp_size = omc_NFDimension_sizesProduct(threadData, omc_NFType_arrayDims(threadData, _ty), 0 /* false */);
      }
      else
      {
        _comp_size = ((modelica_integer) 0);

        _knownSize = 0 /* false */;
      }
    }

    _ty = omc_NFType_arrayElementType(threadData, _ty);

    if(omc_NFType_isComplex(threadData, _ty))
    {
      if((omc_NFType_isRecord(threadData, _ty) || _isRoot))
      {
        {
          modelica_metatype _c;
          for (tmpMeta3 = omc_NFClassTree_ClassTree_getComponents(threadData, omc_NFClass_classTree(threadData, _cls)), tmp6 = arrayLength(tmpMeta3), tmp5 = 1; tmp5 <= tmp6; tmp5++)
          {
            _c = arrayGet(tmpMeta3,tmp5);
            _p = omc_NFComponent_countConnectorVars(threadData, omc_NFInstNode_InstNode_component(threadData, _c), 0 /* false */ ,&_f ,&_s ,&_known_size);

            _potentials = _potentials + (_p) * (_comp_size);

            _flows = _flows + (_f) * (_comp_size);

            _streams = _streams + (_s) * (_comp_size);

            _knownSize = (_known_size && _knownSize);
          }
        }
      }

      _comp_size = ((modelica_integer) 0);
    }
  }

  if((_comp_size > ((modelica_integer) 0)))
  {
    _cty = omc_NFComponent_connectorType(threadData, _component);

    if(omc_NFPrefixes_ConnectorType_isFlow(threadData, _cty))
    {
      _flows = _flows + _comp_size;
    }
    else
    {
      if(omc_NFPrefixes_ConnectorType_isStream(threadData, _cty))
      {
        _streams = _streams + _comp_size;
      }
      else
      {
        if(((omc_NFComponent_variability(threadData, _component) >= 5) && (omc_NFComponent_direction(threadData, _component) == 1)))
        {
          _potentials = _potentials + _comp_size;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_flows) { *out_flows = _flows; }
  if (out_streams) { *out_streams = _streams; }
  if (out_knownSize) { *out_knownSize = _knownSize; }
  return _potentials;
}
modelica_metatype boxptr_NFComponent_countConnectorVars(threadData_t *threadData, modelica_metatype _component, modelica_metatype _isRoot, modelica_metatype *out_flows, modelica_metatype *out_streams, modelica_metatype *out_knownSize)
{
  modelica_integer tmp1;
  modelica_integer _flows;
  modelica_integer _streams;
  modelica_boolean _knownSize;
  modelica_integer _potentials;
  modelica_metatype out_potentials;
  tmp1 = mmc_unbox_integer(_isRoot);
  _potentials = omc_NFComponent_countConnectorVars(threadData, _component, tmp1, &_flows, &_streams, &_knownSize);
  out_potentials = mmc_mk_icon(_potentials);
  if (out_flows) { *out_flows = mmc_mk_icon(_flows); }
  if (out_streams) { *out_streams = mmc_mk_icon(_streams); }
  if (out_knownSize) { *out_knownSize = mmc_mk_icon(_knownSize); }
  return out_potentials;
}

DLLDirection
modelica_boolean omc_NFComponent_isTypeAttribute(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isAttribute;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isAttribute has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isAttribute = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isAttribute;
}
modelica_metatype boxptr_NFComponent_isTypeAttribute(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isAttribute;
  modelica_metatype out_isAttribute;
  _isAttribute = omc_NFComponent_isTypeAttribute(threadData, _component);
  out_isAttribute = mmc_mk_icon(_isAttribute);
  return out_isAttribute;
}

DLLDirection
modelica_boolean omc_NFComponent_isInvalid(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _invalid;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _invalid has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _invalid = tmp1;
  _return: OMC_LABEL_UNUSED
  return _invalid;
}
modelica_metatype boxptr_NFComponent_isInvalid(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _invalid;
  modelica_metatype out_invalid;
  _invalid = omc_NFComponent_isInvalid(threadData, _component);
  out_invalid = mmc_mk_icon(_invalid);
  return out_invalid;
}

DLLDirection
modelica_boolean omc_NFComponent_isDeleted(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isDeleted;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isDeleted has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      modelica_metatype _condition = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _condition has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _condition = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = (omc_NFBinding_isTyped(threadData, _condition) && omc_NFExpression_isFalse(threadData, omc_NFBinding_getTypedExp(threadData, _condition)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isDeleted = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isDeleted;
}
modelica_metatype boxptr_NFComponent_isDeleted(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isDeleted;
  modelica_metatype out_isDeleted;
  _isDeleted = omc_NFComponent_isDeleted(threadData, _component);
  out_isDeleted = mmc_mk_icon(_isDeleted);
  return out_isDeleted;
}

DLLDirection
modelica_string omc_NFComponent_getUnitAttribute(threadData_t *threadData, modelica_metatype _component, modelica_string _defaultUnit)
{
  modelica_string _unitString = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _unit = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _unitString has no default value.
  // _binding has no default value.
  // _unit has no default value.
  _binding = omc_NFClass_lookupAttributeBinding(threadData, _OMC_LIT2, omc_NFInstNode_InstNode_getClass(threadData, omc_NFComponent_classInstance(threadData, _component)));

  if(omc_NFBinding_isUnbound(threadData, _binding))
  {
    _unitString = _defaultUnit;

    goto _return;
  }

  _unit = omc_NFBinding_getExp(threadData, _binding);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _unit;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_unit), 2)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _defaultUnit;
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
  _unitString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _unitString;
}

DLLDirection
modelica_boolean omc_NFComponent_isFixed(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _fixed;
  modelica_metatype _typeAttrs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _binding = NULL;
  modelica_boolean tmp2 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fixed has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _typeAttrs = tmpMeta1;
  // _binding has no default value.
  _fixed = (omc_NFComponent_isParameter(threadData, _component) || omc_NFComponent_isStructuralParameter(threadData, _component));

  _binding = omc_NFClass_lookupAttributeBinding(threadData, _OMC_LIT3, omc_NFInstNode_InstNode_getClass(threadData, omc_NFComponent_classInstance(threadData, _component)));

  if(omc_NFBinding_isUnbound(threadData, _binding))
  {
    goto _return;
  }

  if(omc_NFBinding_hasExp(threadData, _binding))
  {
    _fixed = (_fixed && omc_NFExpression_isTrue(threadData, omc_NFBinding_getExp(threadData, _binding)));
  }
  else
  {
    { /* match expression */
      modelica_metatype tmp5_1;
      tmp5_1 = _binding;
      {
        volatile mmc_switch_type tmp5;
        int tmp6;
        tmp5 = 0;
        for (; tmp5 < 2; tmp5++) {
          switch (MMC_SWITCH_CAST(tmp5)) {
          case 0: {
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            modelica_integer tmp9;
            if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,6) == 0) goto tmp4_end;
            tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,4,1) == 0) goto tmp4_end;
            tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
            tmp9 = mmc_unbox_integer(tmpMeta8);
            if (1 /* true */ != tmp9) goto tmp4_end;
            
            /* Pattern matching succeeded */
            tmp2 = 1 /* true */;
            goto tmp4_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmp2 = 0 /* false */;
            goto tmp4_done;
          }
          }
          goto tmp4_end;
          tmp4_end: ;
        }
        goto goto_3;
        goto_3:;
        MMC_THROW_INTERNAL();
        goto tmp4_done;
        tmp4_done:;
      }
    }
    _fixed = tmp2;
  }
  _return: OMC_LABEL_UNUSED
  return _fixed;
}
modelica_metatype boxptr_NFComponent_isFixed(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _fixed;
  modelica_metatype out_fixed;
  _fixed = omc_NFComponent_isFixed(threadData, _component);
  out_fixed = mmc_mk_icon(_fixed);
  return out_fixed;
}

DLLDirection
modelica_metatype omc_NFComponent_getEvaluateAnnotation(threadData_t *threadData, modelica_metatype _component)
{
  modelica_metatype _evaluate = NULL;
  modelica_metatype _cmt = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _evaluate has no default value.
  // _cmt has no default value.
  _evaluate = omc_SCodeUtil_getEvaluateAnnotation(threadData, omc_NFComponent_comment(threadData, _component));
  _return: OMC_LABEL_UNUSED
  return _evaluate;
}

DLLDirection
modelica_metatype omc_NFComponent_comment(threadData_t *threadData, modelica_metatype _component)
{
  modelica_metatype _comment = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comment has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Util_getOption(threadData, omc_SCodeUtil_getElementComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2)))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 7)));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT4;
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
  _comment = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _comment;
}

DLLDirection
modelica_integer omc_NFComponent_dimensionCount(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _count;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _count has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFType_dimensionCount(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _count = tmp1;
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_NFComponent_dimensionCount(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_NFComponent_dimensionCount(threadData, _component);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
modelica_string omc_NFComponent_toFlatString(threadData_t *threadData, modelica_string _name, modelica_metatype _component, modelica_metatype _format, modelica_string _indent)
{
  modelica_string _str = NULL;
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _s has no default value.
  _s = omc_IOStream_create(threadData, _name, _OMC_LIT5);

  _s = omc_NFComponent_toFlatStream(threadData, _name, _component, _format, _indent, _s);

  _str = omc_IOStream_string(threadData, _s);

  omc_IOStream_delete(threadData, _s);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NFComponent_typeAttrsToFlatStream(threadData_t *threadData, modelica_metatype _typeAttrs, modelica_metatype _componentType, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_integer _var_dims;
  modelica_integer _binding_dims;
  modelica_metatype _ty_attrs = NULL;
  modelica_string _name = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _bind_exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _var_dims has no default value.
  // _binding_dims has no default value.
  _ty_attrs = _typeAttrs;
  // _name has no default value.
  // _binding has no default value.
  // _bind_exp has no default value.
  if(listEmpty(_ty_attrs))
  {
    goto _return;
  }

  _s = omc_IOStream_append(threadData, _s, _OMC_LIT6);

  _var_dims = omc_NFType_dimensionCount(threadData, _componentType);

  while(1)
  {
    if(!1 /* true */) break;
    /* Pattern-matching assignment */
    tmpMeta1 = listHead(_ty_attrs);
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
    _name = tmpMeta2;
    _binding = tmpMeta3;

    _bind_exp = omc_NFExpression_expandSplitIndices(threadData, omc_NFBinding_getExp(threadData, _binding));

    _binding_dims = omc_NFType_dimensionCount(threadData, omc_NFExpression_typeOf(threadData, _bind_exp));

    if((_var_dims > _binding_dims))
    {
      _s = omc_IOStream_append(threadData, _s, _OMC_LIT7);
    }

    _s = omc_IOStream_append(threadData, _s, _name);

    _s = omc_IOStream_append(threadData, _s, _OMC_LIT8);

    _s = omc_IOStream_append(threadData, _s, omc_NFExpression_toFlatString(threadData, _bind_exp, _format));

    _ty_attrs = listRest(_ty_attrs);

    if(listEmpty(_ty_attrs))
    {
      break;
    }
    else
    {
      _s = omc_IOStream_append(threadData, _s, _OMC_LIT9);
    }
  }

  _s = omc_IOStream_append(threadData, _s, _OMC_LIT10);
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_NFComponent_toFlatStream(threadData_t *threadData, modelica_string _name, modelica_metatype _component, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype _ty_attrs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _ty_attrs has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _indent);

          _s = omc_NFAttributes_toFlatStream(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))), _s, 1 /* true */);

          _s = omc_IOStream_append(threadData, _s, omc_NFType_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))), _format));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT11);

          _s = omc_IOStream_append(threadData, _s, omc_Util_makeQuotedIdentifier(threadData, _name));

          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp9;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = omc_NFClass_getTypeAttributes(threadData, omc_NFInstNode_InstNode_getClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2)))));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar3;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                tmpMeta8 = mmc_mk_box2(0, omc_NFModifier_Modifier_name(threadData, _a), omc_NFModifier_Modifier_binding(threadData, _a));
                __omcQ_24tmpVar2 = tmpMeta8;
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar3;
          }
          _ty_attrs = tmpMeta5;

          _s = omc_NFComponent_typeAttrsToFlatStream(threadData, _ty_attrs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))), _format, _s);

          _s = omc_IOStream_append(threadData, _s, omc_NFBinding_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 4))), _format, _OMC_LIT8));
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _name);

          _s = omc_IOStream_append(threadData, _s, omc_NFModifier_Modifier_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))), _format, 0 /* false */));
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
  return _s;
}

DLLDirection
modelica_string omc_NFComponent_toString(threadData_t *threadData, modelica_string _name, modelica_metatype _component)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      modelica_metatype _def = NULL;
      int tmp4;
      // _def has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,3,8) == 0) goto tmp3_end;
          
          _def = tmpMeta5;
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeDump_unparseElementStr(threadData, _def, _OMC_LIT12);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(omc_NFAttributes_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3)))),omc_NFType_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3)))));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT11);
          tmpMeta8 = stringAppend(tmpMeta7,_name);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NFBinding_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 4))), _OMC_LIT8));
          tmp1 = tmpMeta9;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_name,omc_NFModifier_Modifier_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))), 0 /* false */));
          tmp1 = tmpMeta10;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_boolean omc_NFComponent_isIdentical(threadData_t *threadData, modelica_metatype _comp1, modelica_metatype _comp2)
{
  modelica_boolean _identical;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _identical = 0 /* false */;
  if(referenceEq(_comp1, _comp2))
  {
    _identical = 1 /* true */;
  }
  else
  {
    { /* match expression */
      modelica_metatype tmp4_1;modelica_metatype tmp4_2;
      tmp4_1 = _comp1;
      tmp4_2 = _comp2;
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
            if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,8) == 0) goto tmp3_end;
            
            /* Pattern matching succeeded */
            if((!omc_NFClass_isIdentical(threadData, omc_NFInstNode_InstNode_getClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 2)))), omc_NFInstNode_InstNode_getClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 2)))))))
            {
              goto _return;
            }

            if((!omc_NFBinding_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp2), 4))))))
            {
              goto _return;
            }
            tmp1 = 1 /* true */;
            goto tmp3_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmp1 = 1 /* true */;
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
    _identical = tmp1;
  }
  _return: OMC_LABEL_UNUSED
  return _identical;
}
modelica_metatype boxptr_NFComponent_isIdentical(threadData_t *threadData, modelica_metatype _comp1, modelica_metatype _comp2)
{
  modelica_boolean _identical;
  modelica_metatype out_identical;
  _identical = omc_NFComponent_isIdentical(threadData, _comp1, _comp2);
  out_identical = mmc_mk_icon(_identical);
  return out_identical;
}

DLLDirection
modelica_boolean omc_NFComponent_isExternalObject(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isEO;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEO has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,17,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFClass_isExternalObject(threadData, omc_NFInstNode_InstNode_getClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2)))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFType_isExternalObject(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))));
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isEO = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEO;
}
modelica_metatype boxptr_NFComponent_isExternalObject(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isEO;
  modelica_metatype out_isEO;
  _isEO = omc_NFComponent_isExternalObject(threadData, _component);
  out_isEO = mmc_mk_icon(_isEO);
  return out_isEO;
}

DLLDirection
modelica_boolean omc_NFComponent_isExpandableConnector(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isConnector;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isConnector = omc_NFPrefixes_ConnectorType_isExpandable(threadData, omc_NFComponent_connectorType(threadData, _component));
  _return: OMC_LABEL_UNUSED
  return _isConnector;
}
modelica_metatype boxptr_NFComponent_isExpandableConnector(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isConnector;
  modelica_metatype out_isConnector;
  _isConnector = omc_NFComponent_isExpandableConnector(threadData, _component);
  out_isConnector = mmc_mk_icon(_isConnector);
  return out_isConnector;
}

DLLDirection
modelica_boolean omc_NFComponent_isConnector(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isConnector;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isConnector = omc_NFPrefixes_ConnectorType_isConnectorType(threadData, omc_NFComponent_connectorType(threadData, _component));
  _return: OMC_LABEL_UNUSED
  return _isConnector;
}
modelica_metatype boxptr_NFComponent_isConnector(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isConnector;
  modelica_metatype out_isConnector;
  _isConnector = omc_NFComponent_isConnector(threadData, _component);
  out_isConnector = mmc_mk_icon(_isConnector);
  return out_isConnector;
}

DLLDirection
modelica_boolean omc_NFComponent_isFlow(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isFlow;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isFlow = omc_NFPrefixes_ConnectorType_isFlow(threadData, omc_NFComponent_connectorType(threadData, _component));
  _return: OMC_LABEL_UNUSED
  return _isFlow;
}
modelica_metatype boxptr_NFComponent_isFlow(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isFlow;
  modelica_metatype out_isFlow;
  _isFlow = omc_NFComponent_isFlow(threadData, _component);
  out_isFlow = mmc_mk_icon(_isFlow);
  return out_isFlow;
}

DLLDirection
modelica_metatype omc_NFComponent_setConnectorType(threadData_t *threadData, modelica_integer _cty, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      modelica_metatype _attr = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _attr has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 6));
          
          _attr = tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_attr), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = mmc_mk_integer(_cty);
          _attr = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_component), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = _attr;
          _component = tmpMeta7;
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
  return _component;
}
modelica_metatype boxptr_NFComponent_setConnectorType(threadData_t *threadData, modelica_metatype _cty, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_integer tmp1;
  modelica_metatype _component = NULL;
  tmp1 = mmc_unbox_integer(_cty);
  _component = omc_NFComponent_setConnectorType(threadData, tmp1, __omcQ_24in_5Fcomponent);
  /* skip box _component; NFComponent */
  return _component;
}

DLLDirection
modelica_integer omc_NFComponent_connectorType(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _cty;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,9) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _cty = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = _cty;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _cty = tmp1;
  _return: OMC_LABEL_UNUSED
  return _cty;
}
modelica_metatype boxptr_NFComponent_connectorType(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _cty;
  modelica_metatype out_cty;
  _cty = omc_NFComponent_connectorType(threadData, _component);
  out_cty = mmc_mk_icon(_cty);
  return out_cty;
}

DLLDirection
modelica_boolean omc_NFComponent_isOnlyOuter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isOuter;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isOuter = (omc_NFComponent_innerOuter(threadData, _component) == 3);
  _return: OMC_LABEL_UNUSED
  return _isOuter;
}
modelica_metatype boxptr_NFComponent_isOnlyOuter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isOuter;
  modelica_metatype out_isOuter;
  _isOuter = omc_NFComponent_isOnlyOuter(threadData, _component);
  out_isOuter = mmc_mk_icon(_isOuter);
  return out_isOuter;
}

DLLDirection
modelica_boolean omc_NFComponent_isOuter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isOuter;
  modelica_integer _io;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isOuter has no default value.
  _io = omc_NFComponent_innerOuter(threadData, _component);
  _isOuter = (((modelica_integer)_io == 3) || ((modelica_integer)_io == 4));
  _return: OMC_LABEL_UNUSED
  return _isOuter;
}
modelica_metatype boxptr_NFComponent_isOuter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isOuter;
  modelica_metatype out_isOuter;
  _isOuter = omc_NFComponent_isOuter(threadData, _component);
  out_isOuter = mmc_mk_icon(_isOuter);
  return out_isOuter;
}

DLLDirection
modelica_boolean omc_NFComponent_isInner(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isInner;
  modelica_integer _io;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isInner has no default value.
  _io = omc_NFComponent_innerOuter(threadData, _component);
  _isInner = (((modelica_integer)_io == 2) || ((modelica_integer)_io == 4));
  _return: OMC_LABEL_UNUSED
  return _isInner;
}
modelica_metatype boxptr_NFComponent_isInner(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isInner;
  modelica_metatype out_isInner;
  _isInner = omc_NFComponent_isInner(threadData, _component);
  out_isInner = mmc_mk_icon(_isInner);
  return out_isInner;
}

DLLDirection
modelica_boolean omc_NFComponent_isInnerOuter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isInnerOuter;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isInnerOuter has no default value.
  _isInnerOuter = (omc_NFComponent_innerOuter(threadData, _component) != 1);
  _return: OMC_LABEL_UNUSED
  return _isInnerOuter;
}
modelica_metatype boxptr_NFComponent_isInnerOuter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isInnerOuter;
  modelica_metatype out_isInnerOuter;
  _isInnerOuter = omc_NFComponent_isInnerOuter(threadData, _component);
  out_isInnerOuter = mmc_mk_icon(_isInnerOuter);
  return out_isInnerOuter;
}

DLLDirection
modelica_integer omc_NFComponent_innerOuter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _io;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _io has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,9) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _io = tmp8  /* pattern as ty=enumeration(NOT_INNER_OUTER, INNER, OUTER, INNER_OUTER) */;
          /* Pattern matching succeeded */
          tmp1 = (modelica_integer)_io;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFPrefixes_innerOuterFromSCode(threadData, omc_SCodeUtil_prefixesInnerOuter(threadData, omc_SCodeUtil_elementPrefixes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2))))));
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = 1;
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
  _io = tmp1;
  _return: OMC_LABEL_UNUSED
  return _io;
}
modelica_metatype boxptr_NFComponent_innerOuter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _io;
  modelica_metatype out_io;
  _io = omc_NFComponent_innerOuter(threadData, _component);
  out_io = mmc_mk_icon(_io);
  return out_io;
}

DLLDirection
modelica_boolean omc_NFComponent_isResizable(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,9) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 10));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _b = tmp8  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _b;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFComponent_isResizable(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFComponent_isResizable(threadData, _component);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NFComponent_setFinal(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomponent, modelica_boolean _isFinal)
{
  modelica_metatype _component = NULL;
  modelica_metatype _attr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  // _attr has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 6));
          
          _attr = tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_attr), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[7] = mmc_mk_boolean(_isFinal);
          _attr = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_component), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = _attr;
          _component = tmpMeta7;
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
  return _component;
}
modelica_metatype boxptr_NFComponent_setFinal(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomponent, modelica_metatype _isFinal)
{
  modelica_integer tmp1;
  modelica_metatype _component = NULL;
  tmp1 = mmc_unbox_integer(_isFinal);
  _component = omc_NFComponent_setFinal(threadData, __omcQ_24in_5Fcomponent, tmp1);
  /* skip box _component; NFComponent */
  return _component;
}

DLLDirection
modelica_boolean omc_NFComponent_isFinal(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isFinal;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isFinal has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_finalBool(threadData, omc_SCodeUtil_prefixesFinal(threadData, omc_SCodeUtil_elementPrefixes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2))))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,9) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _isFinal = tmp8  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmp1 = _isFinal;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isFinal = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isFinal;
}
modelica_metatype boxptr_NFComponent_isFinal(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isFinal;
  modelica_metatype out_isFinal;
  _isFinal = omc_NFComponent_isFinal(threadData, _component);
  out_isFinal = mmc_mk_icon(_isFinal);
  return out_isFinal;
}

DLLDirection
modelica_boolean omc_NFComponent_isRedeclare(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isRedeclare;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isRedeclare has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_isElementRedeclare(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2))));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isRedeclare = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isRedeclare;
}
modelica_metatype boxptr_NFComponent_isRedeclare(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isRedeclare;
  modelica_metatype out_isRedeclare;
  _isRedeclare = omc_NFComponent_isRedeclare(threadData, _component);
  out_isRedeclare = mmc_mk_icon(_isRedeclare);
  return out_isRedeclare;
}

DLLDirection
modelica_boolean omc_NFComponent_isVar(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isVar;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isVar = (omc_NFComponent_variability(threadData, _component) == 7);
  _return: OMC_LABEL_UNUSED
  return _isVar;
}
modelica_metatype boxptr_NFComponent_isVar(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isVar;
  modelica_metatype out_isVar;
  _isVar = omc_NFComponent_isVar(threadData, _component);
  out_isVar = mmc_mk_icon(_isVar);
  return out_isVar;
}

DLLDirection
modelica_boolean omc_NFComponent_isStructuralParameter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (omc_NFComponent_variability(threadData, _component) == 2);
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFComponent_isStructuralParameter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFComponent_isStructuralParameter(threadData, _component);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFComponent_isParameter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (omc_NFComponent_variability(threadData, _component) == 3);
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFComponent_isParameter(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFComponent_isParameter(threadData, _component);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFComponent_isConst(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isConst;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isConst = (omc_NFComponent_variability(threadData, _component) == 1);
  _return: OMC_LABEL_UNUSED
  return _isConst;
}
modelica_metatype boxptr_NFComponent_isConst(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isConst;
  modelica_metatype out_isConst;
  _isConst = omc_NFComponent_isConst(threadData, _component);
  out_isConst = mmc_mk_icon(_isConst);
  return out_isConst;
}

DLLDirection
modelica_metatype omc_NFComponent_setVariability(threadData_t *threadData, modelica_integer _variability, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      modelica_metatype _attr = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _attr has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 6));
          
          _attr = tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_attr), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = mmc_mk_integer((modelica_integer)_variability);
          _attr = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_component), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = _attr;
          _component = tmpMeta7;
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
  return _component;
}
modelica_metatype boxptr_NFComponent_setVariability(threadData_t *threadData, modelica_metatype _variability, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_integer tmp1;
  modelica_metatype _component = NULL;
  tmp1 = mmc_unbox_integer(_variability);
  _component = omc_NFComponent_setVariability(threadData, tmp1, __omcQ_24in_5Fcomponent);
  /* skip box _component; NFComponent */
  return _component;
}

DLLDirection
modelica_integer omc_NFComponent_variability(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _variability;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _variability has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,9) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _variability = tmp8  /* pattern as ty=enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS) */;
          /* Pattern matching succeeded */
          tmp1 = (modelica_integer)_variability;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _component = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = 7;
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
  _variability = tmp1;
  _return: OMC_LABEL_UNUSED
  return _variability;
}
modelica_metatype boxptr_NFComponent_variability(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _variability;
  modelica_metatype out_variability;
  _variability = omc_NFComponent_variability(threadData, _component);
  out_variability = mmc_mk_icon(_variability);
  return out_variability;
}

DLLDirection
modelica_integer omc_NFComponent_parallelism(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _parallelism;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _parallelism has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,9) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _parallelism = tmp8  /* pattern as ty=enumeration(NON_PARALLEL, GLOBAL, LOCAL) */;
          /* Pattern matching succeeded */
          tmp1 = (modelica_integer)_parallelism;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 1;
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
  _parallelism = tmp1;
  _return: OMC_LABEL_UNUSED
  return _parallelism;
}
modelica_metatype boxptr_NFComponent_parallelism(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _parallelism;
  modelica_metatype out_parallelism;
  _parallelism = omc_NFComponent_parallelism(threadData, _component);
  out_parallelism = mmc_mk_icon(_parallelism);
  return out_parallelism;
}

DLLDirection
modelica_boolean omc_NFComponent_isOutput(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isOutput;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isOutput = (omc_NFComponent_direction(threadData, _component) == 3);
  _return: OMC_LABEL_UNUSED
  return _isOutput;
}
modelica_metatype boxptr_NFComponent_isOutput(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isOutput;
  modelica_metatype out_isOutput;
  _isOutput = omc_NFComponent_isOutput(threadData, _component);
  out_isOutput = mmc_mk_icon(_isOutput);
  return out_isOutput;
}

DLLDirection
modelica_metatype omc_NFComponent_setDirection(threadData_t *threadData, modelica_integer _direction, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  modelica_metatype _attr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  // _attr has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 6));
          
          _attr = tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_attr), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = mmc_mk_integer((modelica_integer)_direction);
          _attr = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_component), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = _attr;
          _component = tmpMeta7;
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
  return _component;
}
modelica_metatype boxptr_NFComponent_setDirection(threadData_t *threadData, modelica_metatype _direction, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_integer tmp1;
  modelica_metatype _component = NULL;
  tmp1 = mmc_unbox_integer(_direction);
  _component = omc_NFComponent_setDirection(threadData, tmp1, __omcQ_24in_5Fcomponent);
  /* skip box _component; NFComponent */
  return _component;
}

DLLDirection
modelica_boolean omc_NFComponent_isInput(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isInput;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isInput = (omc_NFComponent_direction(threadData, _component) == 2);
  _return: OMC_LABEL_UNUSED
  return _isInput;
}
modelica_metatype boxptr_NFComponent_isInput(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isInput;
  modelica_metatype out_isInput;
  _isInput = omc_NFComponent_isInput(threadData, _component);
  out_isInput = mmc_mk_icon(_isInput);
  return out_isInput;
}

DLLDirection
modelica_integer omc_NFComponent_direction(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _direction;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _direction has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,9) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _direction = tmp8  /* pattern as ty=enumeration(NONE, INPUT, OUTPUT) */;
          /* Pattern matching succeeded */
          tmp1 = (modelica_integer)_direction;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 1;
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
  _direction = tmp1;
  _return: OMC_LABEL_UNUSED
  return _direction;
}
modelica_metatype boxptr_NFComponent_direction(threadData_t *threadData, modelica_metatype _component)
{
  modelica_integer _direction;
  modelica_metatype out_direction;
  _direction = omc_NFComponent_direction(threadData, _component);
  out_direction = mmc_mk_icon(_direction);
  return out_direction;
}

DLLDirection
modelica_boolean omc_NFComponent_hasCondition(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = omc_NFBinding_isBound(threadData, omc_NFComponent_getCondition(threadData, _component));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFComponent_hasCondition(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFComponent_hasCondition(threadData, _component);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NFComponent_getCondition(threadData_t *threadData, modelica_metatype _component)
{
  modelica_metatype _cond = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cond has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 5)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT13;
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
  _cond = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _cond;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFComponent_hasBinding_has__missing__binding(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _noBinding;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _noBinding has no default value.
  _noBinding = (omc_NFInstNode_InstNode_isComponent(threadData, _component) && (!omc_NFComponent_hasBinding(threadData, omc_NFInstNode_InstNode_component(threadData, _component), _OMC_LIT14)));
  _return: OMC_LABEL_UNUSED
  return _noBinding;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFComponent_hasBinding_has__missing__binding(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _noBinding;
  modelica_metatype out_noBinding;
  _noBinding = omc_NFComponent_hasBinding_has__missing__binding(threadData, _component);
  out_noBinding = mmc_mk_icon(_noBinding);
  return out_noBinding;
}

DLLDirection
modelica_boolean omc_NFComponent_hasBinding(threadData_t *threadData, modelica_metatype _component, modelica_metatype _parent)
{
  modelica_boolean _b;
  modelica_metatype _cls = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _cls has no default value.
  if(omc_NFBinding_isBound(threadData, omc_NFComponent_getBinding(threadData, _component)))
  {
    _b = 1 /* true */;

    goto _return;
  }

  _cls = omc_NFInstNode_InstNode_getClass(threadData, omc_NFComponent_classInstance(threadData, _component));

  if((!omc_NFRestriction_isRecord(threadData, omc_NFClass_restriction(threadData, _cls))))
  {
    _b = 0 /* false */;

    goto _return;
  }

  if(isSome(omc_NFClassTree_ClassTree_findComponent(threadData, omc_NFClass_classTree(threadData, _cls), boxvar_NFComponent_hasBinding_has__missing__binding)))
  {
    _b = 0 /* false */;
  }

  _b = 1 /* true */;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFComponent_hasBinding(threadData_t *threadData, modelica_metatype _component, modelica_metatype _parent)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFComponent_hasBinding(threadData, _component, _parent);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NFComponent_setBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_component), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = _binding;
          _component = tmpMeta5;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_component), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = omc_NFModifier_Modifier_setBinding(threadData, _binding, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))));
          _component = tmpMeta6;
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
  return _component;
}

DLLDirection
modelica_metatype omc_NFComponent_getTypeAttributeBinding(threadData_t *threadData, modelica_metatype _component, modelica_string _attrName)
{
  modelica_metatype _binding = NULL;
  modelica_metatype _start_node = NULL;
  modelica_metatype _start_comp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binding has no default value.
  // _start_node has no default value.
  // _start_comp has no default value.
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
          modelica_boolean tmp5;
          /* Pattern matching succeeded */
          _start_node = omc_NFClass_lookupElement(threadData, _attrName, omc_NFInstNode_InstNode_getClass(threadData, omc_NFComponent_classInstance(threadData, _component)), NULL);

          _start_comp = omc_NFInstNode_InstNode_component(threadData, _start_node);

          /* Pattern-matching assignment */
          tmp5 = omc_NFComponent_isTypeAttribute(threadData, _start_comp);
          if (1 /* true */ != tmp5) goto goto_1;

          _binding = omc_NFComponent_getBinding(threadData, _start_comp);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _binding = _OMC_LIT13;
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
  return _binding;
}

DLLDirection
modelica_metatype omc_NFComponent_getImplicitBinding(threadData_t *threadData, modelica_metatype _component, modelica_metatype _scope)
{
  modelica_metatype _binding = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _record_exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binding has no default value.
  // _cls_node has no default value.
  // _record_exp has no default value.
  _binding = omc_NFComponent_getBinding(threadData, _component);

  if(omc_NFBinding_isUnbound(threadData, _binding))
  {
    _cls_node = omc_NFComponent_classInstance(threadData, _component);

    if(omc_NFInstNode_InstNode_isRecord(threadData, _cls_node))
    {
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
              if(omc_NFComponent_isTyped(threadData, _component))
              {
                _record_exp = omc_NFClass_makeRecordExp(threadData, _cls_node, _scope, 1 /* true */);

                _binding = omc_NFBinding_makeTyped(threadData, _record_exp, 1, 4, omc_NFComponent_info(threadData, _component), 1);
              }
              else
              {
                _record_exp = omc_NFClass_makeRecordExp(threadData, _cls_node, _scope, 0 /* false */);

                _binding = omc_NFBinding_makeUntyped(threadData, _record_exp, _scope, 1, 4, omc_NFComponent_info(threadData, _component));
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
    }
  }
  _return: OMC_LABEL_UNUSED
  return _binding;
}

DLLDirection
modelica_metatype omc_NFComponent_getBinding(threadData_t *threadData, modelica_metatype _component)
{
  modelica_metatype _b = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 4)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFModifier_Modifier_binding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT15;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT13;
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
  _b = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _b;
}

DLLDirection
modelica_metatype omc_NFComponent_setComment(threadData_t *threadData, modelica_metatype _comment, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_component), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[7] = _comment;
          _component = tmpMeta5;
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
  return _component;
}

DLLDirection
modelica_metatype omc_NFComponent_setAttributes(threadData_t *threadData, modelica_metatype _attr, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_component), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[6] = _attr;
          _component = tmpMeta5;
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
  return _component;
}

DLLDirection
modelica_metatype omc_NFComponent_getAttributes(threadData_t *threadData, modelica_metatype _component)
{
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _attr has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 6)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT17;
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
  _attr = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _attr;
}

DLLDirection
modelica_metatype omc_NFComponent_unliftType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _ty has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,7,2) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          
          _ty = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_component), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = _ty;
          _component = tmpMeta7;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,3) == 0) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,7,2) == 0) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          
          _ty = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_component), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = _ty;
          _component = tmpMeta10;
          goto tmp2_done;
        }
        case 2: {
          
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
  return _component;
}

DLLDirection
modelica_boolean omc_NFComponent_isTyped(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isTyped;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isTyped has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 8)))) >= 3);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,10,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isTyped = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isTyped;
}
modelica_metatype boxptr_NFComponent_isTyped(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isTyped;
  modelica_metatype out_isTyped;
  _isTyped = omc_NFComponent_isTyped(threadData, _component);
  out_isTyped = mmc_mk_icon(_isTyped);
  return out_isTyped;
}

DLLDirection
modelica_metatype omc_NFComponent_setType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_component), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = _ty;
          _component = tmpMeta6;
          tmpMeta1 = _component;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_component), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = _ty;
          _component = tmpMeta7;
          tmpMeta1 = _component;
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
  _component = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _component;
}

DLLDirection
modelica_metatype omc_NFComponent_getType(threadData_t *threadData, modelica_metatype _component)
{
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,17,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstNode_InstNode_getType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3)));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2)));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2)));
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _component = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT18;
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

DLLDirection
modelica_metatype omc_NFComponent_mergeModifier(threadData_t *threadData, modelica_metatype _modifier, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_component), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = omc_NFModifier_Modifier_merge(threadData, _modifier, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))), _OMC_LIT1);
          _component = tmpMeta6;
          tmpMeta1 = _component;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box3(7, &NFComponent_TYPE__ATTRIBUTE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2))), omc_NFModifier_Modifier_merge(threadData, _modifier, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))), _OMC_LIT1));
          tmpMeta1 = tmpMeta7;
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
  _component = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _component;
}

DLLDirection
modelica_metatype omc_NFComponent_setModifier(threadData_t *threadData, modelica_metatype _modifier, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_component), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = _modifier;
          _component = tmpMeta5;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_component), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = _modifier;
          _component = tmpMeta6;
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
  return _component;
}

DLLDirection
modelica_metatype omc_NFComponent_getModifier(threadData_t *threadData, modelica_metatype _component)
{
  modelica_metatype _modifier = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _modifier has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT19;
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
  _modifier = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _modifier;
}

DLLDirection
modelica_metatype omc_NFComponent_setClassInstance(threadData_t *threadData, modelica_metatype _classInst, modelica_metatype __omcQ_24in_5Fcomponent)
{
  modelica_metatype _component = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _component = __omcQ_24in_5Fcomponent;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _component;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_component), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = _classInst;
          _component = tmpMeta5;
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
  return _component;
}

DLLDirection
modelica_metatype omc_NFComponent_classInstance(threadData_t *threadData, modelica_metatype _component)
{
  modelica_metatype _classInst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _classInst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,11,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _classInst = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = _classInst;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2))));
          tmpMeta9 = mmc_mk_box2(9, &NFInstNode_InstNode_ITERATOR__NODE__desc, tmpMeta8);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT14;
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
  _classInst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _classInst;
}

DLLDirection
modelica_metatype omc_NFComponent_info(threadData_t *threadData, modelica_metatype _component)
{
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_SCodeUtil_elementInfo(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 2))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 9)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 4)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFModifier_Modifier_info(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_component), 3))));
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
  _info = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _info;
}

DLLDirection
modelica_boolean omc_NFComponent_isDefinition(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isDefinition;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isDefinition has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _component;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isDefinition = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isDefinition;
}
modelica_metatype boxptr_NFComponent_isDefinition(threadData_t *threadData, modelica_metatype _component)
{
  modelica_boolean _isDefinition;
  modelica_metatype out_isDefinition;
  _isDefinition = omc_NFComponent_isDefinition(threadData, _component);
  out_isDefinition = mmc_mk_icon(_isDefinition);
  return out_isDefinition;
}

DLLDirection
modelica_metatype omc_NFComponent_definition(threadData_t *threadData, modelica_metatype _component)
{
  modelica_metatype _definition = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _definition has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _component;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _definition = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _definition;
}

DLLDirection
modelica_metatype omc_NFComponent_newIterator(threadData_t *threadData, modelica_metatype _iterType, modelica_metatype _info)
{
  modelica_metatype _component = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _component has no default value.
  tmpMeta1 = mmc_mk_box4(5, &NFComponent_ITERATOR__desc, _iterType, mmc_mk_integer(6), _info);
  _component = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _component;
}

DLLDirection
modelica_metatype omc_NFComponent_newEnum(threadData_t *threadData, modelica_metatype _enumType, modelica_string _literalName, modelica_metatype _comment, modelica_integer _literalIndex)
{
  modelica_metatype _component = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _component has no default value.
  tmpMeta1 = mmc_mk_box4(7, &NFExpression_ENUM__LITERAL__desc, _enumType, _literalName, mmc_mk_integer(_literalIndex));
  tmpMeta2 = mmc_mk_box3(6, &NFComponent_ENUM__LITERAL__desc, tmpMeta1, _comment);
  _component = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _component;
}
modelica_metatype boxptr_NFComponent_newEnum(threadData_t *threadData, modelica_metatype _enumType, modelica_metatype _literalName, modelica_metatype _comment, modelica_metatype _literalIndex)
{
  modelica_integer tmp1;
  modelica_metatype _component = NULL;
  tmp1 = mmc_unbox_integer(_literalIndex);
  _component = omc_NFComponent_newEnum(threadData, _enumType, _literalName, _comment, tmp1);
  /* skip box _component; NFComponent */
  return _component;
}

DLLDirection
modelica_metatype omc_NFComponent_new(threadData_t *threadData, modelica_metatype _definition)
{
  modelica_metatype _component = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _component has no default value.
  tmpMeta1 = mmc_mk_box3(3, &NFComponent_COMPONENT__DEF__desc, _definition, _OMC_LIT19);
  _component = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _component;
}

