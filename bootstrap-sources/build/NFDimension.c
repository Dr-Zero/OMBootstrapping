#include "omc_simulation_settings.h"
#include "NFDimension.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,6) {&NFType_BOOLEAN__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,0,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4,0.0);
#define _OMC_LIT4 MMC_REFREALLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,6) {&NFExpression_BOOLEAN__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,6) {&NFExpression_BOOLEAN__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,2,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,1,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Boolean"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,7,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "(R)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,3,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,1,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "NFDimension.size could not get size of: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,40,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,9,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,41,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT19,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,3,3) {&NFOperator_OPERATOR__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,10) {&NFDimension_UNKNOWN__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,4) {&DAE_Dimension_DIM__BOOLEAN__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,7) {&DAE_Dimension_DIM__UNKNOWN__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "NFDimension.fromRange got non-range expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,48,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "/projects/OpenModelica-session2/OMCompiler/Compiler/NFFrontEnd/NFDimension.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,77,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT28_6,1.782113391e9);
#define _OMC_LIT28_6 MMC_REFREALLIT(_OMC_LIT_STRUCT28_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT27,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(173)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(173)),MMC_IMMEDIATE(MMC_TAGFIXNUM(118)),_OMC_LIT28_6}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,6) {&NFDimension_BOOLEAN__desc,}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "NFDimension.fromExp got invalid typename"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,40,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT31_6,1.782113391e9);
#define _OMC_LIT31_6 MMC_REFREALLIT(_OMC_LIT_STRUCT31_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT27,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(119)),MMC_IMMEDIATE(MMC_TAGFIXNUM(17)),MMC_IMMEDIATE(MMC_TAGFIXNUM(119)),MMC_IMMEDIATE(MMC_TAGFIXNUM(91)),_OMC_LIT31_6}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#include "util/modelica.h"

#include "NFDimension_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFDimension_add_addOpt(threadData_t *threadData, modelica_metatype _s1, modelica_metatype _s2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_add_addOpt,2,0) {(void*) boxptr_NFDimension_add_addOpt,0}};
#define boxvar_NFDimension_add_addOpt MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_add_addOpt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFDimension_add_addExp(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_add_addExp,2,0) {(void*) boxptr_NFDimension_add_addExp,0}};
#define boxvar_NFDimension_add_addExp MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_add_addExp)

DLLDirection
modelica_metatype omc_NFDimension_typeOf(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT0;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT1;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT2;
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
modelica_metatype omc_NFDimension_simplify(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdim)
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
      modelica_metatype _simple = NULL;
      int tmp4;
      // _simple has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 8: {
          
          /* Pattern matching succeeded */
          _simple = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), 0 /* false */);
          tmpMeta1 = omc_NFDimension_fromExp(threadData, _simple, omc_NFExpression_variability(threadData, _simple));
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_dim), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4))), 0 /* false */);
          _dim = tmpMeta5;
          tmpMeta1 = _dim;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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

DLLDirection
modelica_metatype omc_NFDimension_eval(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _target)
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
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFDimension_fromExp(threadData, omc_NFCeval_evalExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), _target), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 3)))));
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_dim), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = omc_NFCeval_evalExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4))), _target);
          _dim = tmpMeta5;
          tmpMeta1 = _dim;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
modelica_metatype omc_NFDimension_foldExpList(threadData_t *threadData, modelica_metatype _dims, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg)
{
  modelica_metatype _arg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  {
    modelica_metatype _dim;
    for (tmpMeta1 = _dims; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _dim = MMC_CAR(tmpMeta1);
      _arg = omc_NFDimension_foldExp(threadData, _dim, ((modelica_fnptr) _func), _arg);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _arg;
}

DLLDirection
modelica_metatype omc_NFDimension_foldExp(threadData_t *threadData, modelica_metatype _dim, modelica_fnptr _func, modelica_metatype _arg)
{
  modelica_metatype _outArg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outArg has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), ((modelica_fnptr) _func), _arg);
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), ((modelica_fnptr) _func), _arg);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4))), ((modelica_fnptr) _func), _arg);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _arg;
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
  _outArg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outArg;
}

DLLDirection
modelica_metatype omc_NFDimension_mapExp(threadData_t *threadData, modelica_metatype _dim, modelica_fnptr _func)
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
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      int tmp4;
      // _e1 has no default value.
      // _e2 has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _e1 = tmpMeta5;
          /* Pattern matching succeeded */
          _e2 = omc_NFExpression_map(threadData, _e1, ((modelica_fnptr) _func));
          tmp7 = (modelica_boolean)referenceEq(_e1, _e2);
          if(tmp7)
          {
            tmpMeta8 = _dim;
          }
          else
          {
            tmpMeta6 = mmc_mk_box3(4, &NFDimension_UNTYPED__desc, _e2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 3))));
            tmpMeta8 = tmpMeta6;
          }
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _e1 = tmpMeta9;
          /* Pattern matching succeeded */
          _e2 = omc_NFExpression_map(threadData, _e1, ((modelica_fnptr) _func));
          tmpMeta1 = (referenceEq(_e1, _e2)?_dim:omc_NFDimension_fromExp(threadData, _e2, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 3))))));
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e1 = tmpMeta10;
          /* Pattern matching succeeded */
          _e2 = omc_NFExpression_map(threadData, _e1, ((modelica_fnptr) _func));
          tmpMeta1 = (referenceEq(_e1, _e2)?_dim:omc_NFDimension_fromExp(threadData, _e2, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 5))))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
modelica_integer omc_NFDimension_variability(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_integer _var;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 3))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 3))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 5))));
          goto tmp3_done;
        }
        case 10: {
          
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
  _var = tmp1;
  _return: OMC_LABEL_UNUSED
  return _var;
}
modelica_metatype boxptr_NFDimension_variability(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_integer _var;
  modelica_metatype out_var;
  _var = omc_NFDimension_variability(threadData, _dim);
  out_var = mmc_mk_icon(_var);
  return out_var;
}

DLLDirection
modelica_boolean omc_NFDimension_expIsUpperBound(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _dim)
{
  modelica_boolean _isEnd;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEnd has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _exp;
    tmp4_2 = _dim;
    {
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ty has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))) == !1 /* true */);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,2) == 0) goto tmp3_end;
          
          _ty = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))) == listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3)))));
          goto tmp3_done;
        }
        case 3: {
          
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
  _isEnd = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEnd;
}
modelica_metatype boxptr_NFDimension_expIsUpperBound(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _dim)
{
  modelica_boolean _isEnd;
  modelica_metatype out_isEnd;
  _isEnd = omc_NFDimension_expIsUpperBound(threadData, _exp, _dim);
  out_isEnd = mmc_mk_icon(_isEnd);
  return out_isEnd;
}

DLLDirection
modelica_metatype omc_NFDimension_upperBoundExp(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _ty = NULL;
      int tmp4;
      // _ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT7;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,2) == 0) goto tmp3_end;
          
          _ty = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_makeEnumLiteral(threadData, _ty, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3)))));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4)));
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
modelica_boolean omc_NFDimension_expIsLowerBound(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_boolean _isStart;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isStart has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))) == ((modelica_integer) 1));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))) == !0 /* false */);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))) == ((modelica_integer) 1));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _isStart = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isStart;
}
modelica_metatype boxptr_NFDimension_expIsLowerBound(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_boolean _isStart;
  modelica_metatype out_isStart;
  _isStart = omc_NFDimension_expIsLowerBound(threadData, _exp);
  out_isStart = mmc_mk_icon(_isStart);
  return out_isStart;
}

DLLDirection
modelica_metatype omc_NFDimension_lowerBoundExp(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT8;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_makeEnumLiteral(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), ((modelica_integer) 1));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT9;
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
modelica_metatype omc_NFDimension_sizeExp(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_metatype _sizeExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sizeExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _ty = NULL;
      int tmp4;
      // _ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT10;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,2) == 0) goto tmp3_end;
          
          _ty = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))))));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4)));
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
  _sizeExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sizeExp;
}

DLLDirection
modelica_metatype omc_NFDimension_endExp(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _subscriptedExp, modelica_integer _index)
{
  modelica_metatype _sizeExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sizeExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _ty = NULL;
      int tmp4;
      // _ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT7;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,2) == 0) goto tmp3_end;
          
          _ty = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_makeEnumLiteral(threadData, _ty, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3)))));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4)));
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = _subscriptedExp;
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 2; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  modelica_metatype tmpMeta12;
                  modelica_metatype tmpMeta13;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,6,2) == 0) goto tmp9_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta12 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_index));
                  tmpMeta13 = mmc_mk_box3(17, &NFExpression_SIZE__desc, omc_NFExpression_fromCref(threadData, omc_NFComponentRef_stripSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subscriptedExp), 3))), NULL), 0 /* false */), mmc_mk_some(tmpMeta12));
                  tmpMeta7 = tmpMeta13;
                  goto tmp9_done;
                }
                case 1: {
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,26,4) == 0) goto tmp9_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta14 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_index));
                  tmpMeta15 = mmc_mk_box3(17, &NFExpression_SIZE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subscriptedExp), 2))), mmc_mk_some(tmpMeta14));
                  tmpMeta7 = tmpMeta15;
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
          }tmpMeta1 = tmpMeta7;
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
  _sizeExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sizeExp;
}
modelica_metatype boxptr_NFDimension_endExp(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _subscriptedExp, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_metatype _sizeExp = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _sizeExp = omc_NFDimension_endExp(threadData, _dim, _subscriptedExp, tmp1);
  /* skip box _sizeExp; NFExpression */
  return _sizeExp;
}

static modelica_metatype closure0_NFDimension_toFlatString(threadData_t *thData, modelica_metatype closure, modelica_metatype dim)
{
  modelica_metatype format = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFDimension_toFlatString(thData, dim, format);
}
DLLDirection
modelica_string omc_NFDimension_toFlatStringList(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _format, modelica_string _name)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = mmc_mk_box1(0, _format);
  _str = omc_List_toString(threadData, _dims, (modelica_fnptr) mmc_mk_box2(0,closure0_NFDimension_toFlatString,tmpMeta1), _name, _OMC_LIT11, _OMC_LIT12, _OMC_LIT13, 0 /* false */, ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NFDimension_toFlatString(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _format)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_string tmp5;
          
          /* Pattern matching succeeded */
          tmp5 = modelica_integer_to_modelica_string(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))), ((modelica_integer) 0), 1 /* true */);
          tmp1 = tmp5;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFType_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), _format);
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), _format);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4))), _format),_OMC_LIT15);
          tmp1 = tmpMeta6;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT16;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), _format);
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
modelica_string omc_NFDimension_toStringList(threadData_t *threadData, modelica_metatype _dims, modelica_boolean _brackets)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_string __omcQ_24tmpVar0;
    modelica_integer tmp4;
    modelica_metatype _d_loopVar = 0;
    modelica_metatype _d;
    _d_loopVar = _dims;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar1;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_d_loopVar)) {
        _d = MMC_CAR(_d_loopVar);
        _d_loopVar = MMC_CDR(_d_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar0 = omc_NFDimension_toString(threadData, _d);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar0,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar1;
  }
  _str = stringDelimitList(tmpMeta1, _OMC_LIT12);

  if(_brackets)
  {
    tmpMeta5 = stringAppend(_OMC_LIT11,_str);
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT13);
    _str = tmpMeta6;
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NFDimension_toStringList(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _brackets)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_brackets);
  _str = omc_NFDimension_toStringList(threadData, _dims, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_integer omc_NFDimension_hashList(threadData_t *threadData, modelica_metatype _dims)
{
  modelica_integer _hash;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hash = ((modelica_integer) 5381);
  {
    modelica_metatype _dim;
    for (tmpMeta1 = _dims; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _dim = MMC_CAR(tmpMeta1);
      _hash = stringHashDjb2Continue(omc_NFDimension_toString(threadData, _dim), _hash);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _hash;
}
modelica_metatype boxptr_NFDimension_hashList(threadData_t *threadData, modelica_metatype _dims)
{
  modelica_integer _hash;
  modelica_metatype out_hash;
  _hash = omc_NFDimension_hashList(threadData, _dims);
  out_hash = mmc_mk_icon(_hash);
  return out_hash;
}

DLLDirection
modelica_string omc_NFDimension_toString(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _ty = NULL;
      int tmp4;
      // _ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_Dump_printSubscriptStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          goto tmp3_done;
        }
        case 5: {
          modelica_string tmp5;
          
          /* Pattern matching succeeded */
          tmp5 = modelica_integer_to_modelica_string(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))), ((modelica_integer) 0), 1 /* true */);
          tmp1 = tmp5;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,2) == 0) goto tmp3_end;
          
          _ty = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_AbsynUtil_pathString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))), _OMC_LIT17, 1 /* true */, 0 /* false */);
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4)))),_OMC_LIT15);
          tmp1 = tmpMeta7;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT16;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
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
modelica_metatype omc_NFDimension_subscriptType(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT0;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT1;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT2;
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
modelica_boolean omc_NFDimension_isOne(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_boolean _isOne;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isOne has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))) == ((modelica_integer) 1));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFType_enumSize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))) == ((modelica_integer) 1));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _isOne = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isOne;
}
modelica_metatype boxptr_NFDimension_isOne(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_boolean _isOne;
  modelica_metatype out_isOne;
  _isOne = omc_NFDimension_isOne(threadData, _dim);
  out_isOne = mmc_mk_icon(_isOne);
  return out_isOne;
}

DLLDirection
modelica_boolean omc_NFDimension_isZero(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_boolean _isZero;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isZero has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))) == ((modelica_integer) 0));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFType_enumSize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))) == ((modelica_integer) 0));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _isZero = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isZero;
}
modelica_metatype boxptr_NFDimension_isZero(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_boolean _isZero;
  modelica_metatype out_isZero;
  _isZero = omc_NFDimension_isZero(threadData, _dim);
  out_isZero = mmc_mk_icon(_isZero);
  return out_isZero;
}

DLLDirection
modelica_boolean omc_NFDimension_isUnknown(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_boolean _isUnknown;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isUnknown has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,0) == 0) goto tmp3_end;
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
  _isUnknown = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isUnknown;
}
modelica_metatype boxptr_NFDimension_isUnknown(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_boolean _isUnknown;
  modelica_metatype out_isUnknown;
  _isUnknown = omc_NFDimension_isUnknown(threadData, _dim);
  out_isUnknown = mmc_mk_icon(_isUnknown);
  return out_isUnknown;
}

DLLDirection
modelica_boolean omc_NFDimension_isKnown(threadData_t *threadData, modelica_metatype _dim, modelica_boolean _allowExp)
{
  modelica_boolean _known;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _known has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = _allowExp;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _known = tmp1;
  _return: OMC_LABEL_UNUSED
  return _known;
}
modelica_metatype boxptr_NFDimension_isKnown(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _allowExp)
{
  modelica_integer tmp1;
  modelica_boolean _known;
  modelica_metatype out_known;
  tmp1 = mmc_unbox_integer(_allowExp);
  _known = omc_NFDimension_isKnown(threadData, _dim, tmp1);
  out_known = mmc_mk_icon(_known);
  return out_known;
}

DLLDirection
modelica_boolean omc_NFDimension_allEqualKnown(threadData_t *threadData, modelica_metatype _dims1, modelica_metatype _dims2)
{
  modelica_boolean _allEqual;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _allEqual = omc_List_isEqualOnTrue(threadData, _dims1, _dims2, boxvar_NFDimension_isEqualKnown);
  _return: OMC_LABEL_UNUSED
  return _allEqual;
}
modelica_metatype boxptr_NFDimension_allEqualKnown(threadData_t *threadData, modelica_metatype _dims1, modelica_metatype _dims2)
{
  modelica_boolean _allEqual;
  modelica_metatype out_allEqual;
  _allEqual = omc_NFDimension_allEqualKnown(threadData, _dims1, _dims2);
  out_allEqual = mmc_mk_icon(_allEqual);
  return out_allEqual;
}

DLLDirection
modelica_boolean omc_NFDimension_isResizable(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFDimension_isResizable(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFDimension_isResizable(threadData, _dim);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFDimension_isSizeOf(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _node, modelica_integer _index)
{
  modelica_boolean _res;
  modelica_metatype _cref_exp = NULL;
  modelica_metatype _index_exp = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _cref_exp has no default value.
  // _index_exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
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
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,14,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          _cref_exp = tmpMeta7;
          _index_exp = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_index));
          tmp1 = (omc_NFInstNode_InstNode_refEqual(threadData, omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref_exp), 3)))), _node) && omc_NFExpression_isEqual(threadData, _index_exp, tmpMeta10));
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFDimension_isSizeOf(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _node, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_index);
  _res = omc_NFDimension_isSizeOf(threadData, _dim, _node, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFDimension_isEqualKnownSize(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _node1, modelica_integer _index1, modelica_metatype _dim2, modelica_metatype _node2, modelica_integer _index2)
{
  modelica_boolean _isEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEqual has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _dim1;
    tmp4_2 = _dim2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFDimension_isSizeOf(threadData, _dim1, _node2, _index2)) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFDimension_isSizeOf(threadData, _dim2, _node1, _index1)) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim2), 2))));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim2), 4))));
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFDimension_size(threadData, _dim1, 0 /* false */) == omc_NFDimension_size(threadData, _dim2, 0 /* false */));
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
  _isEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEqual;
}
modelica_metatype boxptr_NFDimension_isEqualKnownSize(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _node1, modelica_metatype _index1, modelica_metatype _dim2, modelica_metatype _node2, modelica_metatype _index2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  tmp1 = mmc_unbox_integer(_index1);
  tmp2 = mmc_unbox_integer(_index2);
  _isEqual = omc_NFDimension_isEqualKnownSize(threadData, _dim1, _node1, tmp1, _dim2, _node2, tmp2);
  out_isEqual = mmc_mk_icon(_isEqual);
  return out_isEqual;
}

DLLDirection
modelica_boolean omc_NFDimension_isEqualKnown(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2)
{
  modelica_boolean _isEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEqual has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _dim1;
    tmp4_2 = _dim2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim2), 2))));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim2), 4))));
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFDimension_size(threadData, _dim1, 0 /* false */) == omc_NFDimension_size(threadData, _dim2, 0 /* false */));
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
  _isEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEqual;
}
modelica_metatype boxptr_NFDimension_isEqualKnown(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_NFDimension_isEqualKnown(threadData, _dim1, _dim2);
  out_isEqual = mmc_mk_icon(_isEqual);
  return out_isEqual;
}

DLLDirection
modelica_boolean omc_NFDimension_isEqual(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2)
{
  modelica_boolean _isEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEqual has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _dim1;
    tmp4_2 = _dim2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim2), 4))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFDimension_size(threadData, _dim1, 0 /* false */) == omc_NFDimension_size(threadData, _dim2, 0 /* false */));
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
  _isEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEqual;
}
modelica_metatype boxptr_NFDimension_isEqual(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_NFDimension_isEqual(threadData, _dim1, _dim2);
  out_isEqual = mmc_mk_icon(_isEqual);
  return out_isEqual;
}

DLLDirection
modelica_integer omc_NFDimension_sizesProduct(threadData_t *threadData, modelica_metatype _dims, modelica_boolean _resize)
{
  modelica_integer _outSize;
  modelica_integer tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_integer __omcQ_24tmpVar3;
    modelica_integer __omcQ_24tmpVar2;
    modelica_integer tmp2;
    modelica_metatype _d_loopVar = 0;
    modelica_metatype _d;
    _d_loopVar = _dims;
    __omcQ_24tmpVar3 = ((modelica_integer) 1); /* defaultValue */
    while(1) {
      tmp2 = 1;
      if (!listEmpty(_d_loopVar)) {
        _d = MMC_CAR(_d_loopVar);
        _d_loopVar = MMC_CDR(_d_loopVar);
        tmp2--;
      }
      if (tmp2 == 0) {
        __omcQ_24tmpVar2 = omc_NFDimension_size(threadData, _d, _resize);
        __omcQ_24tmpVar3 = (__omcQ_24tmpVar3) * (__omcQ_24tmpVar2);
      } else if (tmp2 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmp1 = __omcQ_24tmpVar3;
  }
  _outSize = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outSize;
}
modelica_metatype boxptr_NFDimension_sizesProduct(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _resize)
{
  modelica_integer tmp1;
  modelica_integer _outSize;
  modelica_integer tmp2;
  modelica_metatype out_outSize;
  tmp1 = mmc_unbox_integer(_resize);
  _outSize = omc_NFDimension_sizesProduct(threadData, _dims, tmp1);
  out_outSize = mmc_mk_icon(_outSize);
  return out_outSize;
}

DLLDirection
modelica_metatype omc_NFDimension_sizes(threadData_t *threadData, modelica_metatype _dims, modelica_boolean _resize)
{
  modelica_metatype _outSizes = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp4;
    modelica_metatype _d_loopVar = 0;
    modelica_metatype _d;
    _d_loopVar = _dims;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar5;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_d_loopVar)) {
        _d = MMC_CAR(_d_loopVar);
        _d_loopVar = MMC_CDR(_d_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar4 = mmc_mk_integer(omc_NFDimension_size(threadData, _d, _resize));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar5;
  }
  _outSizes = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outSizes;
}
modelica_metatype boxptr_NFDimension_sizes(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _resize)
{
  modelica_integer tmp1;
  modelica_metatype _outSizes = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_resize);
  _outSizes = omc_NFDimension_sizes(threadData, _dims, tmp1);
  /* skip box _outSizes; list<#Integer> */
  return _outSizes;
}

DLLDirection
modelica_integer omc_NFDimension_size(threadData_t *threadData, modelica_metatype _dim, modelica_boolean _resize)
{
  modelica_integer _size;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _size has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ty has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((_resize?omc_Util_getOptionOrDefault(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))):(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2)))));
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,2) == 0) goto tmp3_end;
          
          _ty = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT21))
          {
            tmpMeta7 = stringAppend(_OMC_LIT18,omc_NFDimension_toString(threadData, _dim));
            omc_Error_addCompilerWarning(threadData, tmpMeta7);
          }
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
  _size = tmp1;
  _return: OMC_LABEL_UNUSED
  return _size;
}
modelica_metatype boxptr_NFDimension_size(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _resize)
{
  modelica_integer tmp1;
  modelica_integer _size;
  modelica_metatype out_size;
  tmp1 = mmc_unbox_integer(_resize);
  _size = omc_NFDimension_size(threadData, _dim, tmp1);
  out_size = mmc_mk_icon(_size);
  return out_size;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFDimension_add_addOpt(threadData_t *threadData, modelica_metatype _s1, modelica_metatype _s2)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _s1;
    tmp4_2 = _s2;
    {
      modelica_integer _i1;
      modelica_integer _i2;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1 has no default value.
      // _i2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _i1 = tmp7  /* pattern as ty=Integer */;
          _i2 = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(mmc_mk_integer(_i1 + _i2));
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
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFDimension_add_addExp(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, _OMC_LIT22, _e2);
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_NFDimension_add(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b)
{
  modelica_metatype _c = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _c has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _a;
    tmp4_2 = _b;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 12; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT23;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT23;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 2)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))))), mmc_mk_integer(omc_NFPrefixes_variabilityMax(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 3)))))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 2))));
          tmpMeta8 = mmc_mk_box3(8, &NFDimension_EXP__desc, omc_NFDimension_add_addExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))), tmpMeta7), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 3))));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))));
          tmpMeta10 = mmc_mk_box3(8, &NFDimension_EXP__desc, omc_NFDimension_add_addExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 2))), tmpMeta9), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 3))));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box3(8, &NFDimension_EXP__desc, omc_NFDimension_add_addExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2)))), mmc_mk_integer(omc_NFPrefixes_variabilityMax(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 3)))))));
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 2))));
          tmpMeta13 = mmc_mk_box5(9, &NFDimension_RESIZABLE__desc, mmc_mk_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 2)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))))), omc_NFDimension_add_addOpt(threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 2)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 3)))), omc_NFDimension_add_addExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))), tmpMeta12), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 5))));
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))));
          tmpMeta15 = mmc_mk_box5(9, &NFDimension_RESIZABLE__desc, mmc_mk_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 2)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))))), omc_NFDimension_add_addOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 3))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))))), omc_NFDimension_add_addExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 4))), tmpMeta14), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 5))));
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_box3(8, &NFDimension_EXP__desc, omc_NFDimension_add_addExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4)))), mmc_mk_integer(omc_NFPrefixes_variabilityMax(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 3)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 5)))))));
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_box3(8, &NFDimension_EXP__desc, omc_NFDimension_add_addExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2)))), mmc_mk_integer(omc_NFPrefixes_variabilityMax(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 5)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 3)))))));
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_box5(9, &NFDimension_RESIZABLE__desc, mmc_mk_integer(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 2)))) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))))), omc_NFDimension_add_addOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 3)))), omc_NFDimension_add_addExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4)))), mmc_mk_integer(omc_NFPrefixes_variabilityMax(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_a), 5)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 5)))))));
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT23;
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
  _c = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _c;
}

DLLDirection
modelica_metatype omc_NFDimension_toDAE(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_metatype _daeDim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _daeDim has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _ty = NULL;
      int tmp4;
      // _ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT24;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,2) == 0) goto tmp3_end;
          
          _ty = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box4(5, &DAE_Dimension_DIM__ENUM__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))), mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))))));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(6, &DAE_Dimension_DIM__EXP__desc, omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), 0 /* false */));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box2(6, &DAE_Dimension_DIM__EXP__desc, omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 4))), 0 /* false */));
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT25;
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
  _daeDim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _daeDim;
}

DLLDirection
modelica_metatype omc_NFDimension_toRange(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_metatype _range = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _range has no default value.
  tmpMeta1 = mmc_mk_box5(13, &NFExpression_RANGE__desc, omc_NFType_liftArrayLeft(threadData, omc_NFDimension_typeOf(threadData, _dim), _dim), omc_NFDimension_lowerBoundExp(threadData, _dim), mmc_mk_none(), omc_NFDimension_upperBoundExp(threadData, _dim));
  _range = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _range;
}

DLLDirection
modelica_metatype omc_NFDimension_fromExpList(threadData_t *threadData, modelica_metatype _expl)
{
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(listLength(_expl)), mmc_mk_integer(1));
  _dim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dim;
}

DLLDirection
modelica_metatype omc_NFDimension_fromExpArray(threadData_t *threadData, modelica_metatype _expl)
{
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(arrayLength(_expl)), mmc_mk_integer(1));
  _dim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dim;
}

DLLDirection
modelica_metatype omc_NFDimension_fromInteger(threadData_t *threadData, modelica_integer _n, modelica_integer _var)
{
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(_n), mmc_mk_integer((modelica_integer)_var));
  _dim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dim;
}
modelica_metatype boxptr_NFDimension_fromInteger(threadData_t *threadData, modelica_metatype _n, modelica_metatype _var)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_n);
  tmp2 = mmc_unbox_integer(_var);
  _dim = omc_NFDimension_fromInteger(threadData, tmp1, tmp2);
  /* skip box _dim; NFDimension */
  return _dim;
}

DLLDirection
modelica_metatype omc_NFDimension_fromRange(threadData_t *threadData, modelica_metatype _range)
{
  modelica_metatype _dim = NULL;
  modelica_integer _start;
  modelica_integer _step;
  modelica_integer _stop;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_integer tmp24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dim has no default value.
  // _start has no default value.
  // _step has no default value.
  // _stop has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _range;
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
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          _start = tmp8  /* pattern as ty=Integer */;
          _stop = tmp12  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1_c0 = _start;
          tmp1_c1 = ((modelica_integer) 1);
          tmp1_c2 = _stop;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,1) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          _start = tmp15  /* pattern as ty=Integer */;
          _step = tmp19  /* pattern as ty=Integer */;
          _stop = tmp22  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1_c0 = _start;
          tmp1_c1 = _step;
          tmp1_c2 = _stop;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          tmpMeta23 = stringAppend(_OMC_LIT26,omc_NFExpression_toString(threadData, _range));
          omc_Error_terminate(threadData, tmpMeta23, _OMC_LIT28);
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
  _start = tmp1_c0;
  _step = tmp1_c1;
  _stop = tmp1_c2;

  tmp24 = _step;
  if (tmp24 == 0) {MMC_THROW_INTERNAL();}
  tmpMeta25 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(((modelica_integer) 1) + modelica_div_integer(_stop - _start,tmp24).quot), mmc_mk_integer(1));
  _dim = tmpMeta25;
  _return: OMC_LABEL_UNUSED
  return _dim;
}

DLLDirection
modelica_metatype omc_NFDimension_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_integer _var)
{
  modelica_metatype _dim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dim has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _exp_simple = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_integer _value;
      modelica_integer _value_original;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp_simple has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _value has no default value.
      // _value_original has no default value.
      // _ty has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_integer((modelica_integer)_var));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,7,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _ty = tmpMeta8;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp12_1;
            tmp12_1 = _ty;
            {
              int tmp12;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp12_1))) {
                case 6: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta9 = _OMC_LIT29;
                  goto tmp11_done;
                }
                case 8: {
                  modelica_metatype tmpMeta13;
                  
                  /* Pattern matching succeeded */
                  tmpMeta13 = mmc_mk_box2(7, &NFDimension_ENUM__desc, _ty);
                  tmpMeta9 = tmpMeta13;
                  goto tmp11_done;
                }
                default:
                tmp11_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  omc_Error_terminate(threadData, _OMC_LIT30, _OMC_LIT31);
                  goto goto_10;
                  goto tmp11_done;
                }
                }
                goto tmp11_end;
                tmp11_end: ;
              }
              goto goto_10;
              goto_10:;
              goto goto_2;
              goto tmp11_done;
              tmp11_done:;
            }
          }tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_arrayAllEqual(threadData, _exp)) goto tmp3_end;
          /* Tail recursive call */
          _exp = omc_NFExpression_arrayFirstScalar(threadData, _exp);
          _var = (modelica_integer)_var;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,26,4) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          if (1 /* true */ != tmp15) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFExpression_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))) && omc_NFExpression_arrayAllEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))))) goto tmp3_end;
          /* Tail recursive call */
          _exp = omc_NFExpression_arrayFirstScalar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          _var = (modelica_integer)_var;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          _exp_simple = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);
          { /* match expression */
            modelica_metatype tmp19_1;
            tmp19_1 = _exp_simple;
            {
              volatile mmc_switch_type tmp19;
              int tmp20;
              tmp19 = 0;
              for (; tmp19 < 2; tmp19++) {
                switch (MMC_SWITCH_CAST(tmp19)) {
                case 0: {
                  modelica_metatype tmpMeta21;
                  modelica_integer tmp22;
                  modelica_metatype tmpMeta23;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp19_1,0,1) == 0) goto tmp18_end;
                  tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp19_1), 2));
                  tmp22 = mmc_unbox_integer(tmpMeta21);
                  _value = tmp22  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  tmpMeta23 = mmc_mk_box3(5, &NFDimension_INTEGER__desc, mmc_mk_integer(_value), mmc_mk_integer((modelica_integer)_var));
                  tmpMeta16 = tmpMeta23;
                  goto tmp18_done;
                }
                case 1: {
                  modelica_metatype tmpMeta24;
                  
                  /* Pattern matching succeeded */
                  _e1 = omc_NFExpression_map(threadData, _exp_simple, boxvar_NFExpression_replaceResizableParameter);

                  _e1 = omc_NFSimplifyExp_simplify(threadData, _e1, 0 /* false */);
                  { /* match expression */
                    modelica_metatype tmp27_1;
                    tmp27_1 = _e1;
                    {
                      volatile mmc_switch_type tmp27;
                      int tmp28;
                      tmp27 = 0;
                      for (; tmp27 < 2; tmp27++) {
                        switch (MMC_SWITCH_CAST(tmp27)) {
                        case 0: {
                          modelica_metatype tmpMeta29;
                          modelica_integer tmp30;
                          modelica_metatype tmpMeta31;
                          if (mmc__uniontype__metarecord__typedef__equal(tmp27_1,0,1) == 0) goto tmp26_end;
                          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp27_1), 2));
                          tmp30 = mmc_unbox_integer(tmpMeta29);
                          _value = tmp30  /* pattern as ty=Integer */;
                          /* Pattern matching succeeded */
                          _e2 = omc_NFExpression_map(threadData, _exp_simple, boxvar_NFExpression_replaceResizableParameterWithOriginal);

                          _e2 = omc_NFSimplifyExp_simplify(threadData, _e2, 0 /* false */);
                          { /* match expression */
                            modelica_metatype tmp34_1;
                            tmp34_1 = _e2;
                            {
                              volatile mmc_switch_type tmp34;
                              int tmp35;
                              tmp34 = 0;
                              for (; tmp34 < 2; tmp34++) {
                                switch (MMC_SWITCH_CAST(tmp34)) {
                                case 0: {
                                  modelica_metatype tmpMeta36;
                                  modelica_integer tmp37;
                                  modelica_metatype tmpMeta38;
                                  if (mmc__uniontype__metarecord__typedef__equal(tmp34_1,0,1) == 0) goto tmp33_end;
                                  tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp34_1), 2));
                                  tmp37 = mmc_unbox_integer(tmpMeta36);
                                  _value_original = tmp37  /* pattern as ty=Integer */;
                                  /* Pattern matching succeeded */
                                  /* Check guard condition after assignments */
                                  if (!(_value != _value_original)) goto tmp33_end;
                                  tmpMeta38 = mmc_mk_box5(9, &NFDimension_RESIZABLE__desc, mmc_mk_integer(_value_original), mmc_mk_some(mmc_mk_integer(_value)), _exp, mmc_mk_integer((modelica_integer)_var));
                                  tmpMeta31 = tmpMeta38;
                                  goto tmp33_done;
                                }
                                case 1: {
                                  modelica_metatype tmpMeta39;
                                  
                                  /* Pattern matching succeeded */
                                  tmpMeta39 = mmc_mk_box5(9, &NFDimension_RESIZABLE__desc, mmc_mk_integer(_value), mmc_mk_none(), _exp, mmc_mk_integer((modelica_integer)_var));
                                  tmpMeta31 = tmpMeta39;
                                  goto tmp33_done;
                                }
                                }
                                goto tmp33_end;
                                tmp33_end: ;
                              }
                              goto goto_32;
                              goto_32:;
                              goto goto_25;
                              goto tmp33_done;
                              tmp33_done:;
                            }
                          }tmpMeta24 = tmpMeta31;
                          goto tmp26_done;
                        }
                        case 1: {
                          modelica_metatype tmpMeta40;
                          
                          /* Pattern matching succeeded */
                          tmpMeta40 = mmc_mk_box3(8, &NFDimension_EXP__desc, _exp, mmc_mk_integer((modelica_integer)_var));
                          tmpMeta24 = tmpMeta40;
                          goto tmp26_done;
                        }
                        }
                        goto tmp26_end;
                        tmp26_end: ;
                      }
                      goto goto_25;
                      goto_25:;
                      goto goto_17;
                      goto tmp26_done;
                      tmp26_done:;
                    }
                  }tmpMeta16 = tmpMeta24;
                  goto tmp18_done;
                }
                }
                goto tmp18_end;
                tmp18_end: ;
              }
              goto goto_17;
              goto_17:;
              goto goto_2;
              goto tmp18_done;
              tmp18_done:;
            }
          }tmpMeta1 = tmpMeta16;
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
modelica_metatype boxptr_NFDimension_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _var)
{
  modelica_integer tmp1;
  modelica_metatype _dim = NULL;
  tmp1 = mmc_unbox_integer(_var);
  _dim = omc_NFDimension_fromExp(threadData, _exp, tmp1);
  /* skip box _dim; NFDimension */
  return _dim;
}

