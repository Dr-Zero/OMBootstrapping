#include "omc_simulation_settings.h"
#include "NBReplacements.h"
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
#define _OMC_LIT5_data "NBReplacements.getFunctionBody failed because the body of the function is not a single assignment:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,99,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,0,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,5) {&NFComponentRef_WILD__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,3,9) {&NFExpression_CREF__desc,_OMC_LIT9,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NBackEnd/Util/NBReplacements.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,84,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT13_6,1.772102377e9);
#define _OMC_LIT13_6 MMC_REFREALLIT(_OMC_LIT_STRUCT13_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(358)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(358)),MMC_IMMEDIATE(MMC_TAGFIXNUM(86)),_OMC_LIT13_6}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "NBReplacements.applyFuncExp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,27,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "[NBReplacements.applyFuncExp] Inlining: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,40,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "-- Result: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,11,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,2,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "dumpBackendInline"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,17,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "Dumps debug output while inline function."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,41,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(151)),_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "	 ==> 	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,7,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "[dumprepl] Constant Replacements:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,33,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "[dumprepl] Trivial Alias Replacements:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,38,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "[dumprepl] Nontrivial Alias Replacements:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,41,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT26_6,1.772102377e9);
#define _OMC_LIT26_6 MMC_REFREALLIT(_OMC_LIT_STRUCT26_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(262)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(262)),MMC_IMMEDIATE(MMC_TAGFIXNUM(77)),_OMC_LIT26_6}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT27_6,1.772102377e9);
#define _OMC_LIT27_6 MMC_REFREALLIT(_OMC_LIT_STRUCT27_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(198)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(198)),MMC_IMMEDIATE(MMC_TAGFIXNUM(66)),_OMC_LIT27_6}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "NBReplacements.addSimple failed because strong component cannot be solved explicitly: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,86,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "NBReplacements.addSimple"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,24,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "NBReplacements.addSimple failed because strong component is not simple: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,72,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#include "util/modelica.h"

#include "NBReplacements_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBReplacements_single_traverse(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _old, modelica_metatype _new);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBReplacements_single_traverse,2,0) {(void*) boxptr_NBReplacements_single_traverse,0}};
#define boxvar_NBReplacements_single_traverse MMC_REFSTRUCTLIT(boxvar_lit_NBReplacements_single_traverse)

static modelica_metatype closure0_NFStatement_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype stmt)
{
  modelica_string indent = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFStatement_toString(thData, stmt, indent);
}
DLLDirection
modelica_metatype omc_NBReplacements_getFunctionBody(threadData_t *threadData, modelica_metatype _fn)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _body has no default value.
  _body = omc_NFFunction_Function_getBody(threadData, _fn);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _body;
    {
      modelica_metatype _stmt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _stmt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,4) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _stmt = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box1(0, _OMC_LIT6);
          tmpMeta10 = stringAppend(_OMC_LIT5,omc_List_toString(threadData, _body, (modelica_fnptr) mmc_mk_box2(0,closure0_NFStatement_toString,tmpMeta9), _OMC_LIT7, _OMC_LIT7, _OMC_LIT8, _OMC_LIT7, 1 /* true */, ((modelica_integer) 0)));
          tmpMeta8 = mmc_mk_cons(tmpMeta10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta8);
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
void omc_NBReplacements_addInputArgTpl(threadData_t *threadData, modelica_metatype _tpl, modelica_metatype _replacements, modelica_boolean _lowered_lhs)
{
  modelica_metatype _cref = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _children_args = NULL;
  modelica_metatype _children = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _fn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cref has no default value.
  // _arg has no default value.
  // _children_args has no default value.
  // _children has no default value.
  // _tmp has no default value.
  // _call has no default value.
  // _fn has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _cref = tmpMeta2;
  _arg = tmpMeta3;

  omc_UnorderedMap_add(threadData, _cref, _arg, _replacements);

  _children = (_lowered_lhs?omc_NBVariable_getRecordChildrenCref(threadData, _cref):omc_NFComponentRef_getRecordChildren(threadData, _cref));

  if((!listEmpty(_children)))
  {
    { /* match expression */
      modelica_metatype tmp7_1;
      tmp7_1 = _arg;
      {
        volatile mmc_switch_type tmp7;
        int tmp8;
        tmp7 = 0;
        for (; tmp7 < 5; tmp7++) {
          switch (MMC_SWITCH_CAST(tmp7)) {
          case 0: {
            modelica_metatype tmpMeta9;
            if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,6,2) == 0) goto tmp6_end;
            
            /* Pattern matching succeeded */
            _tmp = omc_NBVariable_getRecordChildrenCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))));
            {
              modelica_metatype __omcQ_24tmpVar3;
              modelica_metatype* tmp10;
              modelica_metatype tmpMeta11;
              modelica_metatype __omcQ_24tmpVar2;
              modelica_integer tmp12;
              modelica_metatype _child_loopVar = 0;
              modelica_metatype _child;
              _child_loopVar = _tmp;
              tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar3 = tmpMeta11; /* defaultValue */
              tmp10 = &__omcQ_24tmpVar3;
              while(1) {
                tmp12 = 1;
                if (!listEmpty(_child_loopVar)) {
                  _child = MMC_CAR(_child_loopVar);
                  _child_loopVar = MMC_CDR(_child_loopVar);
                  tmp12--;
                }
                if (tmp12 == 0) {
                  __omcQ_24tmpVar2 = omc_NFExpression_fromCref(threadData, _child, 0 /* false */);
                  *tmp10 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                  tmp10 = &MMC_CDR(*tmp10);
                } else if (tmp12 == 1) {
                  break;
                } else {
                  goto goto_5;
                }
              }
              *tmp10 = mmc_mk_nil();
              tmpMeta9 = __omcQ_24tmpVar3;
            }
            tmpMeta4 = tmpMeta9;
            goto tmp6_done;
          }
          case 1: {
            if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,12,3) == 0) goto tmp6_end;
            
            /* Pattern matching succeeded */
            tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 4)));
            goto tmp6_done;
          }
          case 2: {
            if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,11,2) == 0) goto tmp6_end;
            
            /* Pattern matching succeeded */
            tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)));
            goto tmp6_done;
          }
          case 3: {
            modelica_metatype tmpMeta13;
            modelica_metatype tmpMeta14;
            if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,13,1) == 0) goto tmp6_end;
            tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,2,6) == 0) goto tmp6_end;
            tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
            
            _call = tmpMeta13;
            _fn = tmpMeta14;
            /* Pattern matching succeeded */
            if(omc_NFFunction_Function_isDefaultRecordConstructor(threadData, _fn))
            {
              _children_args = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            }
            else
            {
              if(omc_NFFunction_Function_isNonDefaultRecordConstructor(threadData, _fn))
              {
                _children_args = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
              }
              else
              {
                _children_args = omc_NFExpression_getRecordElements(threadData, _arg);
              }
            }
            tmpMeta4 = _children_args;
            goto tmp6_done;
          }
          case 4: {
            
            /* Pattern matching succeeded */
            tmpMeta4 = omc_NFExpression_getRecordElements(threadData, _arg);
            goto tmp6_done;
          }
          }
          goto tmp6_end;
          tmp6_end: ;
        }
        goto goto_5;
        goto_5:;
        MMC_THROW_INTERNAL();
        goto tmp6_done;
        tmp6_done:;
      }
    }
    _children_args = tmpMeta4;

    if((omc_List_compareLength(threadData, _children, _children_args) == ((modelica_integer) 0)))
    {
      {
        modelica_metatype _child_tpl;
        for (tmpMeta15 = omc_List_zip(threadData, _children, _children_args); !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
        {
          _child_tpl = MMC_CAR(tmpMeta15);
          omc_NBReplacements_addInputArgTpl(threadData, _child_tpl, _replacements, _lowered_lhs);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NBReplacements_addInputArgTpl(threadData_t *threadData, modelica_metatype _tpl, modelica_metatype _replacements, modelica_metatype _lowered_lhs)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_lowered_lhs);
  omc_NBReplacements_addInputArgTpl(threadData, _tpl, _replacements, tmp1);
  return;
}

static modelica_metatype closure1_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}static modelica_metatype closure2_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}static modelica_metatype closure3_NBReplacements_applyFuncExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBReplacements_applyFuncExp(thData, $in_exp, replacements, variables);
}
DLLDirection
modelica_metatype omc_NBReplacements_applyFuncExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _replacements, modelica_metatype _variables)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _call = NULL;
      modelica_metatype _fn = NULL;
      modelica_metatype _local_replacements = NULL;
      modelica_metatype _input_crefs = NULL;
      modelica_metatype _local_cref = NULL;
      modelica_metatype _binding_exp_opt = NULL;
      modelica_metatype _binding_exp = NULL;
      modelica_metatype _body_exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
      // _fn has no default value.
      // _local_replacements has no default value.
      // _input_crefs has no default value.
      // _local_cref has no default value.
      // _binding_exp_opt has no default value.
      // _binding_exp has no default value.
      // _body_exp has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _call = tmpMeta6;
          _fn = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_UnorderedMap_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), _replacements)) goto tmp3_end;
          _fn = omc_UnorderedMap_getOrFail(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), _replacements);

          _local_replacements = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp9;
            modelica_metatype tmpMeta10;
            modelica_metatype tmpMeta11;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp12;
            modelica_metatype _node_loopVar = 0;
            modelica_metatype _node;
            _node_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 4)));
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta10; /* defaultValue */
            tmp9 = &__omcQ_24tmpVar5;
            while(1) {
              tmp12 = 1;
              if (!listEmpty(_node_loopVar)) {
                _node = MMC_CAR(_node_loopVar);
                _node_loopVar = MMC_CDR(_node_loopVar);
                tmp12--;
              }
              if (tmp12 == 0) {
                tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar4 = omc_NFComponentRef_fromNode(threadData, _node, omc_NFInstNode_InstNode_getType(threadData, _node), tmpMeta11, 1);
                *tmp9 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp9 = &MMC_CDR(*tmp9);
              } else if (tmp12 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp9 = mmc_mk_nil();
            tmpMeta8 = __omcQ_24tmpVar5;
          }
          _input_crefs = tmpMeta8;

          {
            modelica_metatype _tpl;
            for (tmpMeta13 = omc_List_zip(threadData, _input_crefs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))); !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
            {
              _tpl = MMC_CAR(tmpMeta13);
              omc_NBReplacements_addInputArgTpl(threadData, _tpl, _local_replacements, 0 /* false */);
            }
          }

          {
            modelica_metatype _local_node;
            for (tmpMeta15 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 6))); !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
            {
              _local_node = MMC_CAR(tmpMeta15);
              tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
              _local_cref = omc_NFComponentRef_fromNode(threadData, _local_node, omc_NFInstNode_InstNode_getType(threadData, _local_node), tmpMeta16, 1);

              _binding_exp_opt = omc_NFInstNode_InstNode_getBindingExpOpt(threadData, _local_node);

              if(isSome(_binding_exp_opt))
              {
                tmpMeta17 = mmc_mk_box1(0, _local_replacements);
                _binding_exp = omc_NFExpression_map(threadData, omc_Util_getOption(threadData, _binding_exp_opt), (modelica_fnptr) mmc_mk_box2(0,closure1_NBReplacements_applySimpleExp,tmpMeta17));
              }
              else
              {
                _binding_exp = _OMC_LIT11;
              }

              tmpMeta18 = mmc_mk_box2(0, _local_cref, _binding_exp);
              omc_NBReplacements_addInputArgTpl(threadData, tmpMeta18, _local_replacements, 0 /* false */);
            }
          }

          _body_exp = omc_NBReplacements_getFunctionBody(threadData, _fn);

          tmpMeta20 = mmc_mk_box1(0, _local_replacements);
          _body_exp = omc_NFExpression_map(threadData, _body_exp, (modelica_fnptr) mmc_mk_box2(0,closure2_NBReplacements_applySimpleExp,tmpMeta20));

          if((!omc_List_all(threadData, _input_crefs, boxvar_NFComponentRef_sizeKnown)))
          {
            _body_exp = omc_NFTyping_typeExp(threadData, _body_exp, ((modelica_integer) 1024), _OMC_LIT13, 1 /* true */, NULL, NULL, NULL);
          }

          _body_exp = omc_NFSimplifyExp_combineBinaries(threadData, _body_exp);

          _body_exp = omc_NFSimplifyExp_simplifyDump(threadData, _body_exp, 1 /* true */, _OMC_LIT14, _OMC_LIT7);

          tmpMeta21 = mmc_mk_box2(0, _replacements, _variables);
          _body_exp = omc_NFExpression_map(threadData, _body_exp, (modelica_fnptr) mmc_mk_box2(0,closure3_NBReplacements_applyFuncExp,tmpMeta21));

          if(omc_Flags_isSet(threadData, _OMC_LIT21))
          {
            tmpMeta22 = stringAppend(_OMC_LIT15,omc_NFExpression_toString(threadData, _exp));
            tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT8);
            fputs(MMC_STRINGDATA(tmpMeta23),stdout);

            tmpMeta24 = stringAppend(_OMC_LIT16,omc_NFExpression_toString(threadData, _body_exp));
            tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT17);
            fputs(MMC_STRINGDATA(tmpMeta25),stdout);
          }
          tmpMeta1 = _body_exp;
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
  _return: OMC_LABEL_UNUSED
  return _exp;
}

static modelica_metatype closure4_NBReplacements_applyFuncExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBReplacements_applyFuncExp(thData, $in_exp, replacements, variables);
}
DLLDirection
modelica_metatype omc_NBReplacements_replaceFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_metatype _eqData = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqData = __omcQ_24in_5FeqData;
  if(omc_UnorderedMap_isEmpty(threadData, _replacements))
  {
    goto _return;
  }

  tmpMeta1 = mmc_mk_box2(0, _replacements, _variables);
  _eqData = omc_NBEquation_EqData_mapExp(threadData, _eqData, (modelica_fnptr) mmc_mk_box2(0,closure4_NBReplacements_applyFuncExp,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _eqData;
}

DLLDirection
modelica_string omc_NBReplacements_simpleToString(threadData_t *threadData, modelica_metatype _replacements)
{
  modelica_string _str = NULL;
  modelica_metatype _entries = NULL;
  modelica_string _constStr = NULL;
  modelica_string _aliasStr = NULL;
  modelica_string _nonTrivialStr = NULL;
  modelica_metatype _key = NULL;
  modelica_metatype _value = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT7;
  // _entries has no default value.
  _constStr = _OMC_LIT7;
  _aliasStr = _OMC_LIT7;
  _nonTrivialStr = _OMC_LIT7;
  // _key has no default value.
  // _value has no default value.
  _entries = omc_UnorderedMap_toList(threadData, _replacements);

  {
    modelica_metatype _entry;
    for (tmpMeta1 = _entries; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _entry = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _entry;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      if(omc_NFExpression_isConstNumber(threadData, _value))
      {
        tmpMeta5 = stringAppend(_constStr,_OMC_LIT6);
        tmpMeta6 = stringAppend(tmpMeta5,omc_NFComponentRef_toString(threadData, _key));
        tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT22);
        tmpMeta8 = stringAppend(tmpMeta7,omc_NFExpression_toString(threadData, _value));
        tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT8);
        _constStr = tmpMeta9;
      }
      else
      {
        if((!omc_NFExpression_isTrivialCref(threadData, _value)))
        {
          tmpMeta10 = stringAppend(_nonTrivialStr,_OMC_LIT6);
          tmpMeta11 = stringAppend(tmpMeta10,omc_NFComponentRef_toString(threadData, _key));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT22);
          tmpMeta13 = stringAppend(tmpMeta12,omc_NFExpression_toString(threadData, _value));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT8);
          _nonTrivialStr = tmpMeta14;
        }
        else
        {
          tmpMeta15 = stringAppend(_aliasStr,_OMC_LIT6);
          tmpMeta16 = stringAppend(tmpMeta15,omc_NFComponentRef_toString(threadData, _key));
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT22);
          tmpMeta18 = stringAppend(tmpMeta17,omc_NFExpression_toString(threadData, _value));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT8);
          _aliasStr = tmpMeta19;
        }
      }
    }
  }

  tmpMeta21 = stringAppend(_str,omc_StringUtil_headline__4(threadData, _OMC_LIT23));
  tmpMeta22 = stringAppend(tmpMeta21,_constStr);
  _str = tmpMeta22;

  tmpMeta23 = stringAppend(_str,omc_StringUtil_headline__4(threadData, _OMC_LIT24));
  tmpMeta24 = stringAppend(tmpMeta23,_aliasStr);
  _str = tmpMeta24;

  tmpMeta25 = stringAppend(_str,omc_StringUtil_headline__4(threadData, _OMC_LIT25));
  tmpMeta26 = stringAppend(tmpMeta25,_nonTrivialStr);
  _str = tmpMeta26;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NBReplacements_replaceVarPtr(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar_5Fptr, modelica_metatype _replacements)
{
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _cref = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var_ptr = __omcQ_24in_5Fvar_5Fptr;
  // _cref has no default value.
  _cref = omc_UnorderedMap_get(threadData, omc_NBVariable_getVarName(threadData, _var_ptr), _replacements);

  if(isSome(_cref))
  {
    _var_ptr = omc_NBVariable_getVarPointer(threadData, omc_Util_getOption(threadData, _cref), _OMC_LIT26);
  }
  _return: OMC_LABEL_UNUSED
  return _var_ptr;
}

static modelica_metatype closure5_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}
DLLDirection
modelica_metatype omc_NBReplacements_applySimpleVar(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _replacements)
{
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      modelica_metatype _binding = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _binding has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,10) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,9) == 0) goto tmp3_end;
          
          _binding = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box1(0, _replacements);
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_binding), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 2))), (modelica_fnptr) mmc_mk_box2(0,closure5_NBReplacements_applySimpleExp,tmpMeta8));
          _binding = tmpMeta7;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[4] = _binding;
          _var = tmpMeta9;
          tmpMeta1 = _var;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _var;
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
  _var = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _var;
}

DLLDirection
modelica_metatype omc_NBReplacements_applySimpleExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _replacements)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _res = NULL;
      modelica_metatype _stripped = NULL;
      modelica_metatype _subs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _res has no default value.
      // _stripped has no default value.
      // _subs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(omc_UnorderedMap_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _replacements))
          {
            _res = omc_UnorderedMap_getOrFail(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _replacements);
          }
          else
          {
            _stripped = omc_NFComponentRef_stripSubscriptsAll(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));

            if(omc_UnorderedMap_contains(threadData, _stripped, _replacements))
            {
              _subs = omc_NFComponentRef_subscriptsAllWithWholeFlat(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));

              _res = omc_UnorderedMap_getOrFail(threadData, _stripped, _replacements);

              _res = omc_NFExpression_applySubscripts(threadData, _subs, _res, 1 /* true */);
            }
            else
            {
              _res = _exp;
            }
          }
          tmpMeta1 = _res;
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
  _return: OMC_LABEL_UNUSED
  return _exp;
}

static modelica_metatype closure6_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}static modelica_metatype closure7_NBReplacements_applySimpleVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleVar(thData, $in_var, replacements);
}static modelica_metatype closure8_NBReplacements_applySimpleVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleVar(thData, $in_var, replacements);
}static modelica_metatype closure9_NBReplacements_applySimpleVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleVar(thData, $in_var, replacements);
}static modelica_metatype closure10_NBReplacements_applySimpleVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleVar(thData, $in_var, replacements);
}
DLLDirection
modelica_metatype omc_NBReplacements_applySimple(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype _replacements, modelica_metatype *out_varData)
{
  modelica_metatype _eqData = NULL;
  modelica_metatype _varData = NULL;
  modelica_metatype _entries = NULL;
  modelica_metatype _aliasCref = NULL;
  modelica_metatype _replacement = NULL;
  modelica_metatype _var_ptr = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqData = __omcQ_24in_5FeqData;
  _varData = __omcQ_24in_5FvarData;
  // _entries has no default value.
  // _aliasCref has no default value.
  // _replacement has no default value.
  // _var_ptr has no default value.
  // _var has no default value.
  if(omc_UnorderedMap_isEmpty(threadData, _replacements))
  {
    goto _return;
  }

  tmpMeta1 = mmc_mk_box1(0, _replacements);
  _eqData = omc_NBEquation_EqData_mapExp(threadData, _eqData, (modelica_fnptr) mmc_mk_box2(0,closure6_NBReplacements_applySimpleExp,tmpMeta1));

  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _varData;
    {
      int tmp5;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp5_1))) {
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box1(0, _replacements);
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = omc_NBVariable_VariablePointers_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 2))), (modelica_fnptr) mmc_mk_box2(0,closure7_NBReplacements_applySimpleVar,tmpMeta7));
          _varData = tmpMeta6;

          tmpMeta9 = mmc_mk_box1(0, _replacements);
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(25));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_varData), 25*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[7] = omc_NBVariable_VariablePointers_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 7))), (modelica_fnptr) mmc_mk_box2(0,closure8_NBReplacements_applySimpleVar,tmpMeta9));
          _varData = tmpMeta8;
          tmpMeta2 = _varData;
          goto tmp4_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box1(0, _replacements);
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_varData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = omc_NBVariable_VariablePointers_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 2))), (modelica_fnptr) mmc_mk_box2(0,closure9_NBReplacements_applySimpleVar,tmpMeta11));
          _varData = tmpMeta10;
          tmpMeta2 = _varData;
          goto tmp4_done;
        }
        case 5: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box1(0, _replacements);
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_varData), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = omc_NBVariable_VariablePointers_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 2))), (modelica_fnptr) mmc_mk_box2(0,closure10_NBReplacements_applySimpleVar,tmpMeta13));
          _varData = tmpMeta12;
          tmpMeta2 = _varData;
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
  _varData = tmpMeta2;

  _entries = omc_UnorderedMap_toList(threadData, _replacements);

  {
    modelica_metatype _entry;
    for (tmpMeta14 = _entries; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
    {
      _entry = MMC_CAR(tmpMeta14);
      /* Pattern-matching assignment */
      tmpMeta15 = _entry;
      tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
      tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
      _aliasCref = tmpMeta16;
      _replacement = tmpMeta17;

      _var_ptr = omc_NBVariable_getVarPointer(threadData, _aliasCref, _OMC_LIT27);

      _var = omc_Pointer_access(threadData, _var_ptr);

      tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(12));
      memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
      ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[4] = omc_NFBinding_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))), _replacement);
      _var = tmpMeta18;

      omc_Pointer_update(threadData, _var_ptr, _var);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_varData) { *out_varData = _varData; }
  return _eqData;
}

static modelica_metatype closure11_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}static modelica_metatype closure12_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}
DLLDirection
void omc_NBReplacements_addSimple(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _replacements)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _comp;
    {
      modelica_metatype _varName = NULL;
      modelica_metatype _solvedEq = NULL;
      modelica_integer _status;
      modelica_metatype _replace_exp = NULL;
      int tmp3;
      // _varName has no default value.
      // _solvedEq has no default value.
      // _status has no default value.
      // _replace_exp has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          _varName = omc_NBVariable_getVarName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))));

          _solvedEq = omc_NBSolve_solveBody(threadData, omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))), _varName, omc_UnorderedMap_new(threadData, boxvar_AbsynUtil_pathHash, boxvar_AbsynUtil_pathEqual, ((modelica_integer) 1)) ,&_status ,NULL);

          if(((modelica_integer)_status == 2))
          {
            /* Pattern-matching assignment */
            tmpMeta4 = omc_NBEquation_Equation_getRHS(threadData, _solvedEq);
            if (optionNone(tmpMeta4)) goto goto_1;
            tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
            _replace_exp = tmpMeta5;

            tmpMeta6 = mmc_mk_box1(0, _replacements);
            _replace_exp = omc_NFExpression_map(threadData, _replace_exp, (modelica_fnptr) mmc_mk_box2(0,closure11_NBReplacements_applySimpleExp,tmpMeta6));

            _replace_exp = omc_NFSimplifyExp_simplifyDump(threadData, _replace_exp, 1 /* true */, _OMC_LIT29, _OMC_LIT7);

            tmpMeta7 = mmc_mk_box2(0, _varName, _replace_exp);
            omc_NBReplacements_addInputArgTpl(threadData, tmpMeta7, _replacements, 1 /* true */);
          }
          else
          {
            tmpMeta9 = stringAppend(_OMC_LIT28,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
            tmpMeta8 = mmc_mk_cons(tmpMeta9, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta8);

            goto goto_1;
          }
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          _varName = omc_NBVariable_getVarName(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3)))));

          _solvedEq = omc_NBSolve_solveBody(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))))), _varName, omc_UnorderedMap_new(threadData, boxvar_AbsynUtil_pathHash, boxvar_AbsynUtil_pathEqual, ((modelica_integer) 1)) ,&_status ,NULL);

          if(((modelica_integer)_status == 2))
          {
            /* Pattern-matching assignment */
            tmpMeta10 = omc_NBEquation_Equation_getRHS(threadData, _solvedEq);
            if (optionNone(tmpMeta10)) goto goto_1;
            tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
            _replace_exp = tmpMeta11;

            tmpMeta12 = mmc_mk_box1(0, _replacements);
            _replace_exp = omc_NFExpression_map(threadData, _replace_exp, (modelica_fnptr) mmc_mk_box2(0,closure12_NBReplacements_applySimpleExp,tmpMeta12));

            _replace_exp = omc_NFSimplifyExp_simplifyDump(threadData, _replace_exp, 1 /* true */, _OMC_LIT29, _OMC_LIT7);

            tmpMeta13 = mmc_mk_box2(0, _varName, _replace_exp);
            omc_NBReplacements_addInputArgTpl(threadData, tmpMeta13, _replacements, 1 /* true */);
          }
          else
          {
            tmpMeta15 = stringAppend(_OMC_LIT28,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
            tmpMeta14 = mmc_mk_cons(tmpMeta15, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta14);

            goto goto_1;
          }
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          tmpMeta17 = stringAppend(_OMC_LIT30,omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)));
          tmpMeta16 = mmc_mk_cons(tmpMeta17, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta16);
          goto goto_1;
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
void omc_NBReplacements_simple(threadData_t *threadData, modelica_metatype _comps, modelica_metatype _replacements)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _comp;
    for (tmpMeta1 = _comps; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _comp = MMC_CAR(tmpMeta1);
      omc_NBReplacements_addSimple(threadData, _comp, _replacements);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBReplacements_single_traverse(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _old, modelica_metatype _new)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _exp = (omc_NFExpression_isEqual(threadData, _exp, _old)?_new:_exp);
  _return: OMC_LABEL_UNUSED
  return _exp;
}

static modelica_metatype closure13_NBReplacements_single_traverse(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype old = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype new = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBReplacements_single_traverse(thData, $in_exp, old, new);
}
DLLDirection
modelica_metatype omc_NBReplacements_single(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _old, modelica_metatype _new)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  tmpMeta1 = mmc_mk_box2(0, _old, _new);
  _exp = omc_NFExpression_map(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure13_NBReplacements_single_traverse,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _exp;
}

