#include "omc_simulation_settings.h"
#include "NFOperatorOverloading.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Operator %s must have exactly one output."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,41,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(340)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Output '%s' in operator %s must be of type %s, got type %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,59,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(341)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Operator %s is not encapsulated."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,32,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(342)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "NFOperatorOverloading.instOperatorFunctions got non-instantiated function"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,73,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFOperatorOverloading.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,88,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT14_6,1.770032059e9);
#define _OMC_LIT14_6 MMC_REFREALLIT(_OMC_LIT_STRUCT14_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT13,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(115)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(115)),MMC_IMMEDIATE(MMC_TAGFIXNUM(101)),_OMC_LIT14_6}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "'constructor'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,13,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#include "util/modelica.h"

#include "NFOperatorOverloading_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFOperatorOverloading_patchOperatorRecordConstructorBinding__traverser(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _constructorFn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperatorOverloading_patchOperatorRecordConstructorBinding__traverser,2,0) {(void*) boxptr_NFOperatorOverloading_patchOperatorRecordConstructorBinding__traverser,0}};
#define boxvar_NFOperatorOverloading_patchOperatorRecordConstructorBinding__traverser MMC_REFSTRUCTLIT(boxvar_lit_NFOperatorOverloading_patchOperatorRecordConstructorBinding__traverser)
PROTECTED_FUNCTION_STATIC void omc_NFOperatorOverloading_checkOperatorConstructorOutput(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _recordNode, modelica_metatype _path, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperatorOverloading_checkOperatorConstructorOutput,2,0) {(void*) boxptr_NFOperatorOverloading_checkOperatorConstructorOutput,0}};
#define boxvar_NFOperatorOverloading_checkOperatorConstructorOutput MMC_REFSTRUCTLIT(boxvar_lit_NFOperatorOverloading_checkOperatorConstructorOutput)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFOperatorOverloading_patchOperatorRecordConstructorBinding__traverser(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _constructorFn)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _fn = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _fn has no default value.
  // _args has no default value.
  // _ty has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          
          _fn = tmpMeta7;
          _ty = tmpMeta8;
          _args = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_constructorFn), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 3))))) goto tmp3_end;
          tmpMeta1 = omc_NFExpression_makeRecord(threadData, omc_NFFunction_Function_name(threadData, _constructorFn), _ty, _args);
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
  _outExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC void omc_NFOperatorOverloading_checkOperatorConstructorOutput(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _recordNode, modelica_metatype _path, modelica_metatype _info)
{
  modelica_metatype _output_node = NULL;
  modelica_metatype _output_ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _output_node has no default value.
  // _output_ty has no default value.
  if((listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 5)))) != ((modelica_integer) 1)))
  {
    tmpMeta1 = mmc_mk_cons(omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT5, 1 /* true */, 0 /* false */), MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addSourceMessage(threadData, _OMC_LIT4, tmpMeta1, _info);

    MMC_THROW_INTERNAL();
  }

  _output_node = listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 5))));

  _output_ty = omc_NFInstNode_InstNode_classScope(threadData, _output_node);

  if((!omc_NFInstNode_InstNode_isSame(threadData, _output_ty, _recordNode)))
  {
    tmpMeta2 = mmc_mk_cons(omc_NFInstNode_InstNode_name(threadData, _output_node), mmc_mk_cons(omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT5, 1 /* true */, 0 /* false */), mmc_mk_cons(omc_NFInstNode_InstNode_name(threadData, _recordNode), mmc_mk_cons(omc_NFInstNode_InstNode_name(threadData, _output_ty), MMC_REFSTRUCTLIT(mmc_nil)))));
    omc_Error_addSourceMessage(threadData, _OMC_LIT8, tmpMeta2, _info);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}

static modelica_metatype closure0_NFOperatorOverloading_patchOperatorRecordConstructorBinding__traverser(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype constructorFn = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFOperatorOverloading_patchOperatorRecordConstructorBinding__traverser(thData, exp, constructorFn);
}
DLLDirection
modelica_metatype omc_NFOperatorOverloading_patchOperatorRecordConstructorBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ffn)
{
  modelica_metatype _fn = NULL;
  modelica_metatype _output_node = NULL;
  modelica_metatype _output_comp = NULL;
  modelica_metatype _output_binding = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _fn = __omcQ_24in_5Ffn;
  // _output_node has no default value.
  // _output_comp has no default value.
  // _output_binding has no default value.
  if((listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 5)))) != ((modelica_integer) 1)))
  {
    goto _return;
  }

  _output_node = listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 5))));

  _output_comp = omc_NFInstNode_InstNode_component(threadData, _output_node);

  _output_binding = omc_NFComponent_getBinding(threadData, _output_comp);

  if((!omc_NFBinding_isBound(threadData, _output_binding)))
  {
    goto _return;
  }

  tmpMeta1 = mmc_mk_box1(0, _fn);
  _output_binding = omc_NFBinding_mapExp(threadData, _output_binding, (modelica_fnptr) mmc_mk_box2(0,closure0_NFOperatorOverloading_patchOperatorRecordConstructorBinding__traverser,tmpMeta1));

  _output_comp = omc_NFComponent_setBinding(threadData, _output_binding, _output_comp);

  _output_node = omc_NFInstNode_InstNode_updateComponent(threadData, _output_comp, _output_node);
  _return: OMC_LABEL_UNUSED
  return _fn;
}

DLLDirection
modelica_metatype omc_NFOperatorOverloading_lookupOperatorFunctionsInType(threadData_t *threadData, modelica_string _operatorName, modelica_metatype _ty)
{
  modelica_metatype _functions = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _fn_ref = NULL;
  modelica_boolean _is_defined;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _functions has no default value.
  // _node has no default value.
  // _fn_ref has no default value.
  // _is_defined has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NFType_arrayElementType(threadData, _ty);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _node = tmpMeta6;
          /* Pattern matching succeeded */
          { /* matchcontinue expression */
            {
              volatile mmc_switch_type tmp9;
              int tmp10;
              tmp9 = 0;
              MMC_TRY_INTERNAL(mmc_jumper)
              tmp8_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp9 < 2; tmp9++) {
                switch (MMC_SWITCH_CAST(tmp9)) {
                case 0: {
                  /* Pattern matching succeeded */
                  _fn_ref = omc_NFFunction_Function_lookupFunctionSimple(threadData, _operatorName, _node, ((modelica_integer) 0));

                  _is_defined = 1 /* true */;
                  goto tmp8_done;
                }
                case 1: {
                  /* Pattern matching succeeded */
                  _is_defined = 0 /* false */;
                  goto tmp8_done;
                }
                }
                goto tmp8_end;
                tmp8_end: ;
              }
              goto goto_7;
              tmp8_done:
              (void)tmp9;
              MMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp8_done2;
              goto_7:;
              MMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp9 < 2) {
                goto tmp8_top;
              }
              goto goto_2;
              tmp8_done2:;
            }
          }
          ;

          if(_is_defined)
          {
            _fn_ref = omc_NFFunction_Function_instFunctionRef(threadData, _fn_ref, ((modelica_integer) 0), omc_NFInstNode_InstNode_info(threadData, _node), NULL, NULL);

            _functions = omc_NFFunction_Function_typeRefCache(threadData, _fn_ref, ((modelica_integer) 16));
          }
          else
          {
            tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
            _functions = tmpMeta11;
          }
          tmpMeta1 = _functions;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta12;
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
  _functions = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _functions;
}

DLLDirection
void omc_NFOperatorOverloading_checkOperatorRestrictions(threadData_t *threadData, modelica_metatype _operatorNode)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((!omc_SCodeUtil_isElementEncapsulated(threadData, omc_NFInstNode_InstNode_definition(threadData, _operatorNode))))
  {
    tmpMeta1 = mmc_mk_cons(omc_AbsynUtil_pathString(threadData, omc_NFInstNode_InstNode_fullPath(threadData, _operatorNode, 0 /* false */), _OMC_LIT5, 1 /* true */, 0 /* false */), MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addSourceMessage(threadData, _OMC_LIT11, tmpMeta1, omc_NFInstNode_InstNode_info(threadData, _operatorNode));

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFOperatorOverloading_instOperatorFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_integer _context, modelica_metatype _info)
{
  modelica_metatype _node = NULL;
  modelica_metatype _tree = NULL;
  modelica_metatype _mclss = NULL;
  modelica_metatype _allfuncs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _funcs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _node = __omcQ_24in_5Fnode;
  // _tree has no default value.
  // _mclss has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _allfuncs = tmpMeta1;
  // _funcs has no default value.
  omc_NFOperatorOverloading_checkOperatorRestrictions(threadData, _node);

  _tree = omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _node));

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _mclss = tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_metatype _op;
            for (tmpMeta7 = _mclss, tmp10 = arrayLength(tmpMeta7), tmp9 = 1; tmp9 <= tmp10; tmp9++)
            {
              _op = arrayGet(tmpMeta7,tmp9);
              omc_NFFunction_Function_instFunctionNode(threadData, _op, _context, _info);

              _funcs = omc_NFFunction_Function_getCachedFuncs(threadData, _op);

              _allfuncs = listAppend(_funcs, _allfuncs);
            }
          }

          {
            modelica_metatype _f;
            for (tmpMeta11 = _allfuncs; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _f = MMC_CAR(tmpMeta11);
              _node = omc_NFInstNode_InstNode_cacheAddFunc(threadData, _node, _f, 0 /* false */);
            }
          }
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT12, _OMC_LIT14);
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
  ;
  _return: OMC_LABEL_UNUSED
  return _node;
}
modelica_metatype boxptr_NFOperatorOverloading_instOperatorFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _node = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _node = omc_NFOperatorOverloading_instOperatorFunctions(threadData, __omcQ_24in_5Fnode, tmp1, _info);
  /* skip box _node; NFInstNode.InstNode */
  return _node;
}

DLLDirection
modelica_metatype omc_NFOperatorOverloading_instConstructor(threadData_t *threadData, modelica_metatype _path, modelica_metatype __omcQ_24in_5FrecordNode, modelica_integer _context, modelica_metatype _info)
{
  modelica_metatype _recordNode = NULL;
  modelica_metatype _ctor_ref = NULL;
  modelica_metatype _ctor_path = NULL;
  modelica_boolean _ctor_overloaded;
  modelica_metatype _ctor_node = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _recordNode = __omcQ_24in_5FrecordNode;
  // _ctor_ref has no default value.
  // _ctor_path has no default value.
  // _ctor_overloaded has no default value.
  // _ctor_node has no default value.
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
          _ctor_ref = omc_NFFunction_Function_lookupFunctionSimple(threadData, _OMC_LIT15, _recordNode, _context);

          _ctor_overloaded = 1 /* true */;
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _ctor_overloaded = 0 /* false */;
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

  if(_ctor_overloaded)
  {
    omc_NFFunction_Function_instFunctionRef(threadData, _ctor_ref, _context, _info ,&_ctor_node, NULL);

    _ctor_path = omc_NFInstNode_InstNode_fullPath(threadData, _ctor_node, 0 /* false */);

    {
      modelica_metatype _f;
      for (tmpMeta5 = omc_NFFunction_Function_getCachedFuncs(threadData, _ctor_node); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
      {
        _f = MMC_CAR(tmpMeta5);
        omc_NFOperatorOverloading_checkOperatorConstructorOutput(threadData, _f, omc_NFClass_lastBaseClass(threadData, _recordNode), _ctor_path, _info);

        _recordNode = omc_NFInstNode_InstNode_cacheAddFunc(threadData, _recordNode, _f, 0 /* false */);
      }
    }
  }

  _recordNode = omc_NFRecord_instDefaultConstructor(threadData, _path, _recordNode, _context, _info);
  _return: OMC_LABEL_UNUSED
  return _recordNode;
}
modelica_metatype boxptr_NFOperatorOverloading_instConstructor(threadData_t *threadData, modelica_metatype _path, modelica_metatype __omcQ_24in_5FrecordNode, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _recordNode = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _recordNode = omc_NFOperatorOverloading_instConstructor(threadData, _path, __omcQ_24in_5FrecordNode, tmp1, _info);
  /* skip box _recordNode; NFInstNode.InstNode */
  return _recordNode;
}

