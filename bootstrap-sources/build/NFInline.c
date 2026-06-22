#include "omc_simulation_settings.h"
#include "NFInline.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1,0.0);
#define _OMC_LIT1 MMC_REFREALLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT2,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT3,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,3,15) {&NFStatement_FAILURE__desc,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "'constructor'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,13,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "NFInline.inlineCall got wrong number of arguments for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,54,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "/projects/OpenModelica-session2/OMCompiler/Compiler/NFFrontEnd/NFInline.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,74,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT11_6,1.782113391e9);
#define _OMC_LIT11_6 MMC_REFREALLIT(_OMC_LIT_STRUCT11_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT10,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(156)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(158)),MMC_IMMEDIATE(MMC_TAGFIXNUM(65)),_OMC_LIT11_6}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "inlineFunctions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,15,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Controls if function inlining should be performed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,50,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(87)),_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "frontendInline"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,14,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Enables inlining of functions in the frontend."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,46,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(151)),_OMC_LIT15,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT16,_OMC_LIT17,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#include "util/modelica.h"

#include "NFInline_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_getOutputExp(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _outputNode, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInline_getOutputExp,2,0) {(void*) boxptr_NFInline_getOutputExp,0}};
#define boxvar_NFInline_getOutputExp MMC_REFSTRUCTLIT(boxvar_lit_NFInline_getOutputExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_makeOutputStatement(threadData_t *threadData, modelica_metatype _outputNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInline_makeOutputStatement,2,0) {(void*) boxptr_NFInline_makeOutputStatement,0}};
#define boxvar_NFInline_makeOutputStatement MMC_REFSTRUCTLIT(boxvar_lit_NFInline_makeOutputStatement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_convertIfToAssignment(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInline_convertIfToAssignment,2,0) {(void*) boxptr_NFInline_convertIfToAssignment,0}};
#define boxvar_NFInline_convertIfToAssignment MMC_REFSTRUCTLIT(boxvar_lit_NFInline_convertIfToAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_convertToAssignment(threadData_t *threadData, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInline_convertToAssignment,2,0) {(void*) boxptr_NFInline_convertToAssignment,0}};
#define boxvar_NFInline_convertToAssignment MMC_REFSTRUCTLIT(boxvar_lit_NFInline_convertToAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_removeDeadCode(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInline_removeDeadCode,2,0) {(void*) boxptr_NFInline_removeDeadCode,0}};
#define boxvar_NFInline_removeDeadCode MMC_REFSTRUCTLIT(boxvar_lit_NFInline_removeDeadCode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_replaceDimExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdim, modelica_metatype _node, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInline_replaceDimExp,2,0) {(void*) boxptr_NFInline_replaceDimExp,0}};
#define boxvar_NFInline_replaceDimExp MMC_REFSTRUCTLIT(boxvar_lit_NFInline_replaceDimExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_replaceCrefNode2(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _node, modelica_metatype __omcQ_24in_5Fvalue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInline_replaceCrefNode2,2,0) {(void*) boxptr_NFInline_replaceCrefNode2,0}};
#define boxvar_NFInline_replaceCrefNode2 MMC_REFSTRUCTLIT(boxvar_lit_NFInline_replaceCrefNode2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_replaceCrefNode(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _node, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInline_replaceCrefNode,2,0) {(void*) boxptr_NFInline_replaceCrefNode,0}};
#define boxvar_NFInline_replaceCrefNode MMC_REFSTRUCTLIT(boxvar_lit_NFInline_replaceCrefNode)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_getOutputExp(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _outputNode, modelica_metatype _call)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      modelica_metatype _cr_node = NULL;
      modelica_metatype _rest_cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr_node has no default value.
      // _rest_cr has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,5) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 6));
          
          _cr_node = tmpMeta8;
          _rest_cr = tmpMeta10;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFInstNode_InstNode_refEqual(threadData, _outputNode, _cr_node) && (!omc_NFComponentRef_isFromCref(threadData, _rest_cr)))) goto tmp3_end;
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
          tmpMeta1 = tmpMeta11;
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_makeOutputStatement(threadData_t *threadData, modelica_metatype _outputNode)
{
  modelica_metatype _stmt = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _cref_exp = NULL;
  modelica_metatype _binding_exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmt has no default value.
  // _binding has no default value.
  // _cref_exp has no default value.
  // _binding_exp has no default value.
  _binding = omc_NFComponent_getImplicitBinding(threadData, omc_NFInstNode_InstNode_component(threadData, _outputNode), omc_NFInstNode_InstNode_instanceParent(threadData, _outputNode));

  if(omc_NFBinding_isBound(threadData, _binding))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _cref_exp = omc_NFExpression_fromCref(threadData, omc_NFComponentRef_fromNode(threadData, _outputNode, _OMC_LIT6, tmpMeta1, 1), 0 /* false */);

    _binding_exp = omc_NFBinding_getExp(threadData, _binding);

    _stmt = omc_NFStatement_makeAssignment(threadData, _cref_exp, _binding_exp, _OMC_LIT6, _OMC_LIT4);
  }
  else
  {
    _stmt = _OMC_LIT5;
  }
  _return: OMC_LABEL_UNUSED
  return _stmt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_convertIfToAssignment(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt)
{
  modelica_metatype _stmt = NULL;
  modelica_metatype _branches = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _if_exp = NULL;
  modelica_metatype _output_exp = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype _s = NULL;
  modelica_metatype _source = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmt = __omcQ_24in_5Fstmt;
  // _branches has no default value.
  // _cond has no default value.
  // _if_exp has no default value.
  // _output_exp has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  _ty = _OMC_LIT6;
  // _body has no default value.
  // _s has no default value.
  // _source has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _stmt;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,3,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _branches = tmpMeta2;
  _source = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = listReverse(_branches);
  if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_CAR(tmpMeta4);
  tmpMeta6 = MMC_CDR(tmpMeta4);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
  _cond = tmpMeta7;
  _body = tmpMeta8;
  _branches = tmpMeta6;

  if(((!listEmpty(_branches)) && (!omc_NFExpression_isTrue(threadData, _cond))))
  {
    goto _return;
  }

  if((listLength(_body) != ((modelica_integer) 1)))
  {
    goto _return;
  }

  _s = omc_NFInline_convertToAssignment(threadData, listHead(_body));

  if((!omc_NFStatement_isAssignment(threadData, _s)))
  {
    goto _return;
  }

  /* Pattern-matching assignment */
  tmpMeta9 = _s;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
  _output_exp = tmpMeta10;
  _if_exp = tmpMeta11;

  {
    modelica_metatype _b;
    for (tmpMeta12 = _branches; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _b = MMC_CAR(tmpMeta12);
      /* Pattern-matching assignment */
      tmpMeta13 = _branches;
      if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
      tmpMeta14 = MMC_CAR(tmpMeta13);
      tmpMeta15 = MMC_CDR(tmpMeta13);
      tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
      tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
      _cond = tmpMeta16;
      _body = tmpMeta17;
      _branches = tmpMeta15;

      if((listLength(_body) != ((modelica_integer) 1)))
      {
        goto _return;
      }

      _s = omc_NFInline_convertToAssignment(threadData, listHead(_body));

      if((!omc_NFStatement_isAssignment(threadData, _s)))
      {
        goto _return;
      }

      /* Pattern-matching assignment */
      tmpMeta18 = _s;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,4) == 0) MMC_THROW_INTERNAL();
      tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
      tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 3));
      tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 4));
      _lhs = tmpMeta19;
      _rhs = tmpMeta20;
      _ty = tmpMeta21;

      if((!omc_NFExpression_isEqual(threadData, _lhs, _output_exp)))
      {
        goto _return;
      }

      tmpMeta22 = mmc_mk_box5(25, &NFExpression_IF__desc, _ty, _cond, _rhs, _if_exp);
      _if_exp = tmpMeta22;
    }
  }

  tmpMeta24 = mmc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, _output_exp, _if_exp, _ty, _source);
  _stmt = tmpMeta24;
  _return: OMC_LABEL_UNUSED
  return _stmt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_convertToAssignment(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_metatype _outStmt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStmt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInline_convertIfToAssignment(threadData, _stmt);
          goto tmp3_done;
        }
        case 1: {
          
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
  _outStmt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outStmt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_removeDeadCode(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody)
{
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _body = __omcQ_24in_5Fbody;
  if(((listLength(_body) > ((modelica_integer) 1)) && omc_NFStatement_isReturn(threadData, listGet(_body, ((modelica_integer) 2)))))
  {
    tmpMeta1 = mmc_mk_cons(listHead(_body), MMC_REFSTRUCTLIT(mmc_nil));
    _body = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _body;
}

static modelica_metatype closure0_NFInline_replaceCrefNode(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype node = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype value = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFInline_replaceCrefNode(thData, $in_exp, node, value);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_replaceDimExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdim, modelica_metatype _node, modelica_metatype _value)
{
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dim = __omcQ_24in_5Fdim;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(0, _node, _value);
          _exp = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), (modelica_fnptr) mmc_mk_box2(0,closure0_NFInline_replaceCrefNode,tmpMeta6));
          tmpMeta1 = omc_NFDimension_fromExp(threadData, _exp, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 3)))));
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
  _dim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dim;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_replaceCrefNode2(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _node, modelica_metatype __omcQ_24in_5Fvalue)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = __omcQ_24in_5Fvalue;
  if((!omc_NFInstNode_InstNode_refEqual(threadData, _node, omc_NFComponentRef_node(threadData, _cref))))
  {
    _value = omc_NFInline_replaceCrefNode2(threadData, omc_NFComponentRef_rest(threadData, _cref), _node, _value);

    _value = omc_NFExpression_recordElement(threadData, omc_NFInstNode_InstNode_name(threadData, omc_NFComponentRef_node(threadData, _cref)), _value);
  }

  _value = omc_NFExpression_applySubscripts(threadData, omc_NFComponentRef_getSubscripts(threadData, _cref), _value, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _value;
}

static modelica_metatype closure1_NFInline_replaceDimExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_dim)
{
  modelica_metatype node = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype value = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFInline_replaceDimExp(thData, $in_dim, node, value);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFInline_replaceCrefNode(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _node, modelica_metatype _value)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _repl_ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _ty has no default value.
  // _repl_ty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFInstNode_InstNode_refEqual(threadData, omc_NFComponentRef_node(threadData, omc_NFComponentRef_firstNonScope(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))), _node)) goto tmp3_end;
          tmpMeta1 = omc_NFInline_replaceCrefNode2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _node, _value);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp;
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
  _exp = tmpMeta1;

  _ty = omc_NFExpression_typeOf(threadData, _exp);

  tmpMeta6 = mmc_mk_box2(0, _node, _value);
  _repl_ty = omc_NFType_mapDims(threadData, _ty, (modelica_fnptr) mmc_mk_box2(0,closure1_NFInline_replaceDimExp,tmpMeta6));

  if((!referenceEq(_ty, _repl_ty)))
  {
    _exp = omc_NFExpression_setType(threadData, _repl_ty, _exp);
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

static modelica_metatype closure2_NFInline_replaceCrefNode(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype node = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype value = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFInline_replaceCrefNode(thData, $in_exp, node, value);
}static modelica_metatype closure4_NFInline_replaceCrefNode(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype node = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype value = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFInline_replaceCrefNode(thData, $in_exp, node, value);
}static modelica_metatype closure3_NFExpression_map(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFExpression_map(thData, exp, func);
}static modelica_metatype closure5_NFInline_inlineCallExp(threadData_t *thData, modelica_metatype closure, modelica_metatype callExp)
{
  modelica_metatype forceInline = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFInline_inlineCallExp(thData, callExp, forceInline);
}
DLLDirection
modelica_metatype omc_NFInline_inlineCall(threadData_t *threadData, modelica_metatype _callExp, modelica_boolean _forceInline)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _fn = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype _inputs = NULL;
  modelica_metatype _outputs = NULL;
  modelica_metatype _locals = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype _stmt = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _call has no default value.
  // _fn has no default value.
  // _arg has no default value.
  // _args has no default value.
  // _inputs has no default value.
  // _outputs has no default value.
  // _locals has no default value.
  // _body has no default value.
  // _stmt has no default value.
  // _binding has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _callExp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,13,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _call = tmpMeta2;

  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _call;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 3; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,6) == 0) goto tmp5_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 6));
          
          _fn = tmpMeta8;
          _args = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((!omc_NFInstNode_InstNode_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 3))))) && omc_NFInstNode_InstNode_isNamed(threadData, omc_NFInstNode_InstNode_parentScope(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 3))), 0 /* false */), _OMC_LIT7))) goto tmp5_end;
          _body = omc_NFFunction_Function_getBody(threadData, _fn);

          if((!(listEmpty(_body) && listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 6)))))))
          {
            _exp = _callExp;

            goto _return;
          }

          _binding = omc_NFComponent_getBinding(threadData, omc_NFInstNode_InstNode_component(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 5))))));

          if(omc_NFBinding_hasExp(threadData, _binding))
          {
            _exp = omc_NFBinding_getExp(threadData, _binding);

            /* Pattern-matching assignment */
            tmp10 = omc_NFExpression_isRecord(threadData, _exp);
            if (1 /* true */ != tmp10) goto goto_4;
          }
          else
          {
            _exp = omc_NFClass_makeRecordExp(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 3))), 1 /* true */);
          }

          {
            modelica_metatype _i;
            for (tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 4))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _i = MMC_CAR(tmpMeta11);
              /* Pattern-matching assignment */
              tmpMeta12 = _args;
              if (listEmpty(tmpMeta12)) goto goto_4;
              tmpMeta13 = MMC_CAR(tmpMeta12);
              tmpMeta14 = MMC_CDR(tmpMeta12);
              _arg = tmpMeta13;
              _args = tmpMeta14;

              _arg = omc_NFInline_inlineCallExp(threadData, _arg, _forceInline);

              tmpMeta15 = mmc_mk_box2(0, _i, _arg);
              _exp = omc_NFExpression_map(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure2_NFInline_replaceCrefNode,tmpMeta15));
            }
          }
          tmpMeta3 = _exp;
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,6) == 0) goto tmp5_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,14) == 0) goto tmp5_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 4));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 5));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 6));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 6));
          
          _fn = tmpMeta17;
          _inputs = tmpMeta18;
          _outputs = tmpMeta19;
          _locals = tmpMeta20;
          _args = tmpMeta21;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFFunction_Function_hasSingleOrEmptyBody(threadData, _fn)) goto tmp5_end;
          _body = omc_NFFunction_Function_getBody(threadData, _fn);

          _body = omc_NFInline_removeDeadCode(threadData, _body);

          if((((listLength(_body) > ((modelica_integer) 1)) || (listLength(_outputs) != ((modelica_integer) 1))) || (!listEmpty(_locals))))
          {
            _exp = _callExp;

            goto _return;
          }

          if(listEmpty(_body))
          {
            _stmt = omc_NFInline_makeOutputStatement(threadData, listHead(_outputs));
          }
          else
          {
            _stmt = omc_NFInline_convertToAssignment(threadData, listHead(_body));
          }

          if((!omc_NFStatement_isAssignment(threadData, _stmt)))
          {
            _exp = _callExp;

            goto _return;
          }

          tmpMeta22 = stringAppend(_OMC_LIT8,omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_name(threadData, _fn), _OMC_LIT9, 1 /* true */, 0 /* false */));
          omc_Error_assertion(threadData, (listLength(_inputs) == listLength(_args)), tmpMeta22, _OMC_LIT11);

          { /* matchcontinue expression */
            {
              volatile mmc_switch_type tmp25;
              int tmp26;
              tmp25 = 0;
              MMC_TRY_INTERNAL(mmc_jumper)
              tmp24_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp25 < 2; tmp25++) {
                switch (MMC_SWITCH_CAST(tmp25)) {
                case 0: {
                  modelica_metatype tmpMeta27;
                  modelica_metatype tmpMeta28;
                  modelica_metatype tmpMeta29;
                  modelica_metatype tmpMeta30;
                  modelica_metatype tmpMeta31;
                  modelica_metatype tmpMeta32;
                  modelica_metatype tmpMeta33;
                  modelica_metatype tmpMeta34;
                  /* Pattern matching succeeded */
                  {
                    modelica_metatype _i;
                    for (tmpMeta27 = _inputs; !listEmpty(tmpMeta27); tmpMeta27=MMC_CDR(tmpMeta27))
                    {
                      _i = MMC_CAR(tmpMeta27);
                      /* Pattern-matching assignment */
                      tmpMeta28 = _args;
                      if (listEmpty(tmpMeta28)) goto goto_23;
                      tmpMeta29 = MMC_CAR(tmpMeta28);
                      tmpMeta30 = MMC_CDR(tmpMeta28);
                      _arg = tmpMeta29;
                      _args = tmpMeta30;

                      _arg = omc_NFInline_inlineCallExp(threadData, _arg, _forceInline);

                      tmpMeta32 = mmc_mk_box2(0, _i, _arg);
                      tmpMeta31 = mmc_mk_box1(0, (modelica_fnptr) mmc_mk_box2(0,closure4_NFInline_replaceCrefNode,tmpMeta32));
                      _stmt = omc_NFStatement_mapExp(threadData, _stmt, (modelica_fnptr) mmc_mk_box2(0,closure3_NFExpression_map,tmpMeta31));
                    }
                  }

                  _exp = omc_NFInline_getOutputExp(threadData, _stmt, listHead(_outputs), _call);

                  tmpMeta34 = mmc_mk_box1(0, mmc_mk_boolean(_forceInline));
                  _exp = omc_NFExpression_map(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure5_NFInline_inlineCallExp,tmpMeta34));
                  goto tmp24_done;
                }
                case 1: {
                  /* Pattern matching succeeded */
                  _exp = _callExp;
                  goto tmp24_done;
                }
                }
                goto tmp24_end;
                tmp24_end: ;
              }
              goto goto_23;
              tmp24_done:
              (void)tmp25;
              MMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp24_done2;
              goto_23:;
              MMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp25 < 2) {
                goto tmp24_top;
              }
              goto goto_4;
              tmp24_done2:;
            }
          }
          ;
          tmpMeta3 = _exp;
          goto tmp5_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta3 = _callExp;
          goto tmp5_done;
        }
        }
        goto tmp5_end;
        tmp5_end: ;
      }
      goto goto_4;
      goto_4:;
      MMC_THROW_INTERNAL();
      goto tmp5_done;
      tmp5_done:;
    }
  }
  _exp = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _exp;
}
modelica_metatype boxptr_NFInline_inlineCall(threadData_t *threadData, modelica_metatype _callExp, modelica_metatype _forceInline)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_forceInline);
  _exp = omc_NFInline_inlineCall(threadData, _callExp, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

DLLDirection
modelica_metatype omc_NFInline_inlineCallExp(threadData_t *threadData, modelica_metatype _callExp, modelica_boolean _forceInline)
{
  modelica_metatype _result = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _callExp;
    {
      modelica_metatype _call = NULL;
      modelica_boolean _shouldInline;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
      // _shouldInline has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = omc_NFCall_inlineType(threadData, _call);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 4; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,1,0) == 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 1: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,2,0) == 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!omc_Flags_isSet(threadData, _OMC_LIT14)) goto tmp9_end;
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 2: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,0) == 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmp7 = (_forceInline || omc_Flags_getConfigBool(threadData, _OMC_LIT19));
                  goto tmp9_done;
                }
                case 3: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = _forceInline;
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_2;
              goto tmp9_done;
              tmp9_done:;
            }
          }
          _shouldInline = tmp7;
          tmpMeta1 = (_shouldInline?omc_NFInline_inlineCall(threadData, _callExp, _forceInline):_callExp);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _callExp;
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
  _result = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_NFInline_inlineCallExp(threadData_t *threadData, modelica_metatype _callExp, modelica_metatype _forceInline)
{
  modelica_integer tmp1;
  modelica_metatype _result = NULL;
  tmp1 = mmc_unbox_integer(_forceInline);
  _result = omc_NFInline_inlineCallExp(threadData, _callExp, tmp1);
  /* skip box _result; NFExpression */
  return _result;
}

