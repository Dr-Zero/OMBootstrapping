#include "omc_simulation_settings.h"
#include "NFScalarize.h"
#define _OMC_LIT0_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,3,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,3,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "nominal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,7,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,1) {_OMC_LIT2,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,2,1) {_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,1) {_OMC_LIT0,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "NFScalarize.scalarizeEquation could not expand rhs "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,51,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,6) {&NFExpressionIterator_NONE__ITERATOR__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "NFScalarize.scalarizeBackendVariable failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,49,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,0,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFScalarize.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,78,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT11_6,1.770759947e9);
#define _OMC_LIT11_6 MMC_REFREALLIT(_OMC_LIT_STRUCT11_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT10,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(215)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(215)),MMC_IMMEDIATE(MMC_TAGFIXNUM(103)),_OMC_LIT11_6}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,3) {&Flags_FlagVisibility_INTERNAL__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Is true when building an FMU (so the compiler can look for URIs to package as FMI resources)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,93,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(114)),_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT12,_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "NFScalarize.scalarizeVariable failed on "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,40,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "NFScalarize.scalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,21,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#include "util/modelica.h"

#include "NFScalarize_includes.h"



DLLDirection
modelica_boolean omc_NFScalarize_variableHasForcedScalarAttribute(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  {
    modelica_metatype _attribute;
    for (tmpMeta1 = _OMC_LIT5; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _attribute = MMC_CAR(tmpMeta1);
      if(omc_NFBinding_isBound(threadData, omc_NFVariable_lookupTypeAttribute(threadData, _attribute, _var)))
      {
        _res = 1 /* true */;

        goto _return;
      }
    }
  }

  _res = 0 /* false */;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFScalarize_variableHasForcedScalarAttribute(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFScalarize_variableHasForcedScalarAttribute(threadData, _var);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeWhenStatement(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fstatements)
{
  modelica_metatype _statements = NULL;
  modelica_metatype _bl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _cond = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _statements = __omcQ_24in_5Fstatements;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _bl = tmpMeta1;
  // _cond has no default value.
  // _body has no default value.
  {
    modelica_metatype _b;
    for (tmpMeta2 = _branches; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _b = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _b;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _cond = tmpMeta4;
      _body = tmpMeta5;

      _body = omc_NFScalarize_scalarizeStatements(threadData, _body);

      if(omc_NFType_isArray(threadData, omc_NFExpression_typeOf(threadData, _cond)))
      {
        _cond = omc_NFExpandExp_expand(threadData, _cond, 0 /* false */, NULL);
      }

      tmpMeta7 = mmc_mk_box2(0, _cond, _body);
      tmpMeta6 = mmc_mk_cons(tmpMeta7, _bl);
      _bl = tmpMeta6;
    }
  }

  tmpMeta10 = mmc_mk_box3(7, &NFStatement_WHEN__desc, listReverseInPlace(_bl), _source);
  tmpMeta9 = mmc_mk_cons(tmpMeta10, _statements);
  _statements = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _statements;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeIfStatement(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fstatements)
{
  modelica_metatype _statements = NULL;
  modelica_metatype _bl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _cond = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _statements = __omcQ_24in_5Fstatements;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _bl = tmpMeta1;
  // _cond has no default value.
  // _body has no default value.
  {
    modelica_metatype _b;
    for (tmpMeta2 = _branches; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _b = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _b;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _cond = tmpMeta4;
      _body = tmpMeta5;

      _body = omc_NFScalarize_scalarizeStatements(threadData, _body);

      if((!listEmpty(_body)))
      {
        tmpMeta7 = mmc_mk_box2(0, _cond, _body);
        tmpMeta6 = mmc_mk_cons(tmpMeta7, _bl);
        _bl = tmpMeta6;
      }
    }
  }

  if((!listEmpty(_bl)))
  {
    tmpMeta10 = mmc_mk_box3(6, &NFStatement_IF__desc, listReverseInPlace(_bl), _source);
    tmpMeta9 = mmc_mk_cons(tmpMeta10, _statements);
    _statements = tmpMeta9;
  }
  _return: OMC_LABEL_UNUSED
  return _statements;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeStatement(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype __omcQ_24in_5Fstatements)
{
  modelica_metatype _statements = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _statements = __omcQ_24in_5Fstatements;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box6(5, &NFStatement_FOR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), omc_NFScalarize_scalarizeStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 6))));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, _statements);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFScalarize_scalarizeIfStatement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _statements);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFScalarize_scalarizeWhenStatement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _statements);
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box4(12, &NFStatement_WHILE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), omc_NFScalarize_scalarizeStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _statements);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(_stmt, _statements);
          tmpMeta1 = tmpMeta9;
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
  _statements = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _statements;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeStatements(threadData_t *threadData, modelica_metatype _stmts)
{
  modelica_metatype _statements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _statements = tmpMeta1;
  {
    modelica_metatype _s;
    for (tmpMeta2 = _stmts; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _s = MMC_CAR(tmpMeta2);
      _statements = omc_NFScalarize_scalarizeStatement(threadData, _s, _statements);
    }
  }

  _statements = listReverseInPlace(_statements);
  _return: OMC_LABEL_UNUSED
  return _statements;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeAlgorithm(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg)
{
  modelica_metatype _alg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = __omcQ_24in_5Falg;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_alg), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFScalarize_scalarizeStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))));
  _alg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _alg;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeWhenEquation(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _scope, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fequations)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _bl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _cond = NULL;
  modelica_metatype _body = NULL;
  modelica_integer _var;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equations = __omcQ_24in_5Fequations;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _bl = tmpMeta1;
  // _cond has no default value.
  // _body has no default value.
  // _var has no default value.
  {
    modelica_metatype _b;
    for (tmpMeta2 = _branches; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _b = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _b;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,0,3) == 0) MMC_THROW_INTERNAL();
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 4));
      _cond = tmpMeta4;
      _var = tmp6  /* pattern as ty=enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS) */;
      _body = tmpMeta7;

      _body = omc_NFScalarize_scalarizeEquations(threadData, _body, 0 /* false */);

      if(omc_NFType_isArray(threadData, omc_NFExpression_typeOf(threadData, _cond)))
      {
        _cond = omc_NFExpandExp_expand(threadData, _cond, 0 /* false */, NULL);
      }

      tmpMeta8 = mmc_mk_cons(omc_NFEquation_makeBranch(threadData, _cond, _body, (modelica_integer)_var), _bl);
      _bl = tmpMeta8;
    }
  }

  tmpMeta11 = mmc_mk_box4(8, &NFEquation_WHEN__desc, listReverseInPlace(_bl), _scope, _source);
  tmpMeta10 = mmc_mk_cons(tmpMeta11, _equations);
  _equations = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _equations;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeIfEquation(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _scope, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fequations)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _bl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _cond = NULL;
  modelica_metatype _body = NULL;
  modelica_integer _var;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equations = __omcQ_24in_5Fequations;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _bl = tmpMeta1;
  // _cond has no default value.
  // _body has no default value.
  // _var has no default value.
  {
    modelica_metatype _b;
    for (tmpMeta2 = _branches; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _b = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _b;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,0,3) == 0) MMC_THROW_INTERNAL();
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 4));
      _cond = tmpMeta4;
      _var = tmp6  /* pattern as ty=enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS) */;
      _body = tmpMeta7;

      _body = omc_NFScalarize_scalarizeEquations(threadData, _body, 0 /* false */);

      if((!listEmpty(_body)))
      {
        tmpMeta8 = mmc_mk_cons(omc_NFEquation_makeBranch(threadData, _cond, _body, (modelica_integer)_var), _bl);
        _bl = tmpMeta8;
      }
    }
  }

  if((!listEmpty(_bl)))
  {
    tmpMeta11 = mmc_mk_box4(7, &NFEquation_IF__desc, listReverseInPlace(_bl), _scope, _source);
    tmpMeta10 = mmc_mk_cons(tmpMeta11, _equations);
    _equations = tmpMeta10;
  }
  _return: OMC_LABEL_UNUSED
  return _equations;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Fequations, modelica_boolean _forceScalarize)
{
  modelica_metatype _equations = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equations = __omcQ_24in_5Fequations;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _lhs_iter = NULL;
      modelica_metatype _rhs_iter = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _src = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lhs_iter has no default value.
      // _rhs_iter has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _ty has no default value.
      // _src has no default value.
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _lhs = tmpMeta6;
          _rhs = tmpMeta7;
          _ty = tmpMeta8;
          _src = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isArray(threadData, _ty)) goto tmp3_end;
          if(((!_forceScalarize) && (omc_NFExpression_hasArrayCall(threadData, _lhs) || omc_NFExpression_hasArrayCall(threadData, _rhs))))
          {
            tmpMeta11 = mmc_mk_box6(4, &NFEquation_ARRAY__EQUALITY__desc, _lhs, _rhs, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _src);
            tmpMeta10 = mmc_mk_cons(tmpMeta11, _equations);
            _equations = tmpMeta10;
          }
          else
          {
            _lhs_iter = omc_NFExpressionIterator_fromExp(threadData, _lhs, 0 /* false */);

            _rhs_iter = omc_NFExpressionIterator_fromExp(threadData, _rhs, 0 /* false */);

            _ty = omc_NFType_arrayElementType(threadData, _ty);

            while(1)
            {
              if(!omc_NFExpressionIterator_hasNext(threadData, _lhs_iter)) break;
              if((!omc_NFExpressionIterator_hasNext(threadData, _rhs_iter)))
              {
                tmpMeta12 = stringAppend(_OMC_LIT6,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))));
                omc_Error_addInternalError(threadData, tmpMeta12, omc_ElementSource_getInfo(threadData, _src));
              }

              _lhs_iter = omc_NFExpressionIterator_next(threadData, _lhs_iter ,&_lhs);

              _rhs_iter = omc_NFExpressionIterator_next(threadData, _rhs_iter ,&_rhs);

              tmpMeta14 = mmc_mk_box6(3, &NFEquation_EQUALITY__desc, _lhs, _rhs, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _src);
              tmpMeta13 = mmc_mk_cons(tmpMeta14, _equations);
              _equations = tmpMeta13;
            }
          }
          tmpMeta1 = _equations;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!_forceScalarize) goto tmp3_end;
          tmpMeta15 = mmc_mk_box6(3, &NFEquation_EQUALITY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
          /* Tail recursive call */
          _eq = tmpMeta15;
          __omcQ_24in_5Fequations = _equations;
          _forceScalarize = 1 /* true */;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _equations;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFScalarize_scalarizeIfEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _equations);
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFScalarize_scalarizeWhenEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _equations);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_cons(_eq, _equations);
          tmpMeta1 = tmpMeta16;
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
  _equations = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _equations;
}
modelica_metatype boxptr_NFScalarize_scalarizeEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype _forceScalarize)
{
  modelica_integer tmp1;
  modelica_metatype _equations = NULL;
  tmp1 = mmc_unbox_integer(_forceScalarize);
  _equations = omc_NFScalarize_scalarizeEquation(threadData, _eq, __omcQ_24in_5Fequations, tmp1);
  /* skip box _equations; list<NFEquation> */
  return _equations;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeEquations(threadData_t *threadData, modelica_metatype _eql, modelica_boolean _forceScalarize)
{
  modelica_metatype _equations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _equations = tmpMeta1;
  {
    modelica_metatype _eq;
    for (tmpMeta2 = _eql; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      _equations = omc_NFScalarize_scalarizeEquation(threadData, _eq, _equations, _forceScalarize);
    }
  }

  _equations = listReverseInPlace(_equations);
  _return: OMC_LABEL_UNUSED
  return _equations;
}
modelica_metatype boxptr_NFScalarize_scalarizeEquations(threadData_t *threadData, modelica_metatype _eql, modelica_metatype _forceScalarize)
{
  modelica_integer tmp1;
  modelica_metatype _equations = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_forceScalarize);
  _equations = omc_NFScalarize_scalarizeEquations(threadData, _eql, tmp1);
  /* skip box _equations; list<NFEquation> */
  return _equations;
}

DLLDirection
modelica_metatype omc_NFScalarize_expandComplexCref__traverser(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
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
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,7,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          if(omc_NFComponentRef_isComplexArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))))
          {
            _exp = omc_NFExpandExp_expand(threadData, _exp, 0 /* false */, NULL);
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
  return _exp;
}

DLLDirection
modelica_metatype omc_NFScalarize_expandComplexCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _exp = omc_NFExpression_map(threadData, _exp, boxvar_NFScalarize_expandComplexCref__traverser);
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFScalarize_nextTypeAttributes(threadData_t *threadData, modelica_metatype _names, modelica_metatype _iters)
{
  modelica_metatype _attrs = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _i;
  modelica_metatype _iter = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _attrs = tmpMeta1;
  _i = ((modelica_integer) 1);
  // _iter has no default value.
  // _exp has no default value.
  {
    modelica_metatype _name;
    for (tmpMeta2 = _names; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _name = MMC_CAR(tmpMeta2);
      _iter = omc_NFExpressionIterator_next(threadData, arrayGet(_iters,_i) /* DAE.ASUB */ ,&_exp);

      arrayUpdate(_iters, _i, _iter);

      _i = ((modelica_integer) 1) + _i;

      tmpMeta4 = mmc_mk_box2(0, _name, omc_NFBinding_makeFlat(threadData, _exp, 3, 1));
      tmpMeta3 = mmc_mk_cons(tmpMeta4, _attrs);
      _attrs = tmpMeta3;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _attrs;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeTypeAttributes(threadData_t *threadData, modelica_metatype _attrs, modelica_metatype *out_iters)
{
  modelica_metatype _names = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _iters = NULL;
  modelica_integer _len;
  modelica_integer _i;
  modelica_string _name = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _names = tmpMeta1;
  // _iters has no default value.
  // _len has no default value.
  // _i has no default value.
  // _name has no default value.
  // _binding has no default value.
  _len = listLength(_attrs);

  _iters = arrayCreateNoInit(_len, _OMC_LIT7);

  _i = _len;

  {
    modelica_metatype _attr;
    for (tmpMeta2 = _attrs; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _attr = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _attr;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _name = tmpMeta4;
      _binding = tmpMeta5;

      tmpMeta6 = mmc_mk_cons(_name, _names);
      _names = tmpMeta6;

      arrayUpdate(_iters, _i, omc_NFExpressionIterator_fromBinding(threadData, _binding));

      _i = ((modelica_integer) -1) + _i;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_iters) { *out_iters = _iters; }
  return _names;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeComplexVariable(threadData_t *threadData, modelica_metatype _var, modelica_metatype __omcQ_24in_5Fvars)
{
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vars = __omcQ_24in_5Fvars;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11)))), 3)));
    {
      modelica_metatype _attr = NULL;
      modelica_string _name = NULL;
      modelica_integer _index;
      modelica_metatype _elem_var = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _attr has no default value.
      // _name has no default value.
      // _index has no default value.
      // _elem_var has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          _attr = tmp4_1;
          /* Pattern matching succeeded */
          {
            modelica_metatype _tpl;
            for (tmpMeta6 = omc_UnorderedMap_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 2)))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _tpl = MMC_CAR(tmpMeta6);
              /* Pattern-matching assignment */
              tmpMeta7 = _tpl;
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
              tmp10 = mmc_unbox_integer(tmpMeta9);
              _name = tmpMeta8;
              _index = tmp10  /* pattern as ty=Integer */;

              _elem_var = _var;

              tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(12));
              memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_elem_var), 12*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = omc_NFComponentRef_prepend(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem_var), 2))), omc_NFComponentRef_rename(threadData, _name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem_var), 2)))));
              _elem_var = tmpMeta11;

              tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(12));
              memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_elem_var), 12*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[11] = omc_NFBackendExtension_BackendInfo_setAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem_var), 11))), arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 3))),_index) /* DAE.ASUB */, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11)))), 4))));
              _elem_var = tmpMeta12;

              tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(12));
              memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_elem_var), 12*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = omc_NFBackendExtension_VariableAttributes_elemType(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 3))),_index) /* DAE.ASUB */);
              _elem_var = tmpMeta13;

              tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(12));
              memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_elem_var), 12*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = omc_NFComponentRef_setNodeType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem_var), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem_var), 2))));
              _elem_var = tmpMeta14;

              tmpMeta15 = mmc_mk_cons(_elem_var, _vars);
              _vars = tmpMeta15;
            }
          }
          tmpMeta1 = listReverse(_vars);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta17;
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
  _vars = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _vars;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeBackendVariable(threadData_t *threadData, modelica_metatype _var, modelica_metatype _indices)
{
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _crefs = NULL;
  modelica_metatype _binding_iter = NULL;
  modelica_metatype _binding = NULL;
  modelica_integer _bind_var;
  modelica_integer _bind_src;
  modelica_metatype _exp = NULL;
  modelica_metatype _elem_ty = NULL;
  modelica_metatype _binfo = NULL;
  modelica_metatype _backend_attributes = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _vars = tmpMeta1;
  // _crefs has no default value.
  // _binding_iter has no default value.
  // _binding has no default value.
  // _bind_var has no default value.
  // _bind_src has no default value.
  // _exp has no default value.
  // _elem_ty has no default value.
  // _binfo has no default value.
  // _backend_attributes has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta21;
          /* Pattern matching succeeded */
          _crefs = listReverse(omc_NFComponentRef_scalarizeAll(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))), 0 /* false */));

          _elem_ty = omc_NFType_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))));

          _backend_attributes = omc_NFBackendExtension_BackendInfo_scalarize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11))), listLength(_crefs));

          if(omc_NFBinding_isBound(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4)))))
          {
            _binding_iter = omc_NFExpressionIterator_fromExp(threadData, omc_NFBinding_getTypedExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4)))), 1 /* true */);

            _bind_var = omc_NFBinding_variability(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))));

            _bind_src = omc_NFBinding_source(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))));

            {
              modelica_metatype __omcQ_24tmpVar3;
              modelica_metatype* tmp7;
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              modelica_metatype __omcQ_24tmpVar2;
              modelica_integer tmp20;
              modelica_metatype _cr_loopVar = 0;
              modelica_metatype _cr;
              _cr_loopVar = _crefs;
              tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar3 = tmpMeta8; /* defaultValue */
              tmp7 = &__omcQ_24tmpVar3;
              while(1) {
                tmp20 = 1;
                if (!listEmpty(_cr_loopVar)) {
                  _cr = MMC_CAR(_cr_loopVar);
                  _cr_loopVar = MMC_CDR(_cr_loopVar);
                  tmp20--;
                }
                if (tmp20 == 0) {
                  { /* match expression */
                    {
                      volatile mmc_switch_type tmp12;
                      int tmp13;
                      tmp12 = 0;
                      for (; tmp12 < 1; tmp12++) {
                        switch (MMC_SWITCH_CAST(tmp12)) {
                        case 0: {
                          modelica_metatype tmpMeta14;
                          modelica_metatype tmpMeta15;
                          modelica_metatype tmpMeta16;
                          modelica_metatype tmpMeta17;
                          modelica_metatype tmpMeta18;
                          modelica_metatype tmpMeta19;
                          /* Pattern matching succeeded */
                          _binding_iter = omc_NFExpressionIterator_next(threadData, _binding_iter ,&_exp);

                          _binding = omc_NFBinding_makeFlat(threadData, _exp, (modelica_integer)_bind_var, (modelica_integer)_bind_src);

                          /* Pattern-matching assignment */
                          tmpMeta14 = _backend_attributes;
                          if (listEmpty(tmpMeta14)) goto goto_10;
                          tmpMeta15 = MMC_CAR(tmpMeta14);
                          tmpMeta16 = MMC_CDR(tmpMeta14);
                          _binfo = tmpMeta15;
                          _backend_attributes = tmpMeta16;
                          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
                          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
                          tmpMeta19 = mmc_mk_box11(3, &NFVariable_VARIABLE__desc, _cr, _elem_ty, _binding, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6))), tmpMeta17, tmpMeta18, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))), _binfo);
                          tmpMeta9 = tmpMeta19;
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
                  }__omcQ_24tmpVar2 = tmpMeta9;
                  *tmp7 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                  tmp7 = &MMC_CDR(*tmp7);
                } else if (tmp20 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp7 = mmc_mk_nil();
              tmpMeta6 = __omcQ_24tmpVar3;
            }
            _vars = tmpMeta6;
          }
          else
          {
            {
              modelica_metatype __omcQ_24tmpVar5;
              modelica_metatype* tmp22;
              modelica_metatype tmpMeta23;
              modelica_metatype tmpMeta24;
              modelica_metatype __omcQ_24tmpVar4;
              modelica_integer tmp35;
              modelica_metatype _cr_loopVar = 0;
              modelica_metatype _cr;
              _cr_loopVar = _crefs;
              tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar5 = tmpMeta23; /* defaultValue */
              tmp22 = &__omcQ_24tmpVar5;
              while(1) {
                tmp35 = 1;
                if (!listEmpty(_cr_loopVar)) {
                  _cr = MMC_CAR(_cr_loopVar);
                  _cr_loopVar = MMC_CDR(_cr_loopVar);
                  tmp35--;
                }
                if (tmp35 == 0) {
                  { /* match expression */
                    {
                      volatile mmc_switch_type tmp27;
                      int tmp28;
                      tmp27 = 0;
                      for (; tmp27 < 1; tmp27++) {
                        switch (MMC_SWITCH_CAST(tmp27)) {
                        case 0: {
                          modelica_metatype tmpMeta29;
                          modelica_metatype tmpMeta30;
                          modelica_metatype tmpMeta31;
                          modelica_metatype tmpMeta32;
                          modelica_metatype tmpMeta33;
                          modelica_metatype tmpMeta34;
                          /* Pattern matching succeeded */
                          /* Pattern-matching assignment */
                          tmpMeta29 = _backend_attributes;
                          if (listEmpty(tmpMeta29)) goto goto_25;
                          tmpMeta30 = MMC_CAR(tmpMeta29);
                          tmpMeta31 = MMC_CDR(tmpMeta29);
                          _binfo = tmpMeta30;
                          _backend_attributes = tmpMeta31;
                          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
                          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
                          tmpMeta34 = mmc_mk_box11(3, &NFVariable_VARIABLE__desc, _cr, _elem_ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6))), tmpMeta32, tmpMeta33, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))), _binfo);
                          tmpMeta24 = tmpMeta34;
                          goto tmp26_done;
                        }
                        }
                        goto tmp26_end;
                        tmp26_end: ;
                      }
                      goto goto_25;
                      goto_25:;
                      goto goto_2;
                      goto tmp26_done;
                      tmp26_done:;
                    }
                  }__omcQ_24tmpVar4 = tmpMeta24;
                  *tmp22 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                  tmp22 = &MMC_CDR(*tmp22);
                } else if (tmp35 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp22 = mmc_mk_nil();
              tmpMeta21 = __omcQ_24tmpVar5;
            }
            _vars = tmpMeta21;
          }

          if((!(listEmpty(_indices) || (listLength(_indices) == listLength(_vars)))))
          {
            _vars = omc_List_keepPositions(threadData, _vars, _indices, 1 /* true */);
          }
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta36;
          /* Pattern matching succeeded */
          tmpMeta36 = stringAppend(_OMC_LIT8,omc_NFVariable_toString(threadData, _var, _OMC_LIT9, 0 /* false */));
          omc_Error_assertion(threadData, 0 /* false */, tmpMeta36, _OMC_LIT11);
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
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _vars;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeVariable(threadData_t *threadData, modelica_metatype _var, modelica_metatype __omcQ_24in_5Fvars, modelica_boolean _forceScalarize)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _vars = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _elem_ty = NULL;
  modelica_integer _vis;
  modelica_metatype _attr = NULL;
  modelica_metatype _ty_attr = NULL;
  modelica_metatype _cmt = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype _binding_iter = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _ty_attr_names = NULL;
  modelica_metatype _ty_attr_iters = NULL;
  modelica_metatype _backend_attributes = NULL;
  modelica_integer _bind_var;
  modelica_metatype _binfo = NULL;
  modelica_integer _bind_src;
  modelica_boolean _has_binding;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta27;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vars = __omcQ_24in_5Fvars;
  // _name has no default value.
  // _binding has no default value.
  // _ty has no default value.
  // _elem_ty has no default value.
  // _vis has no default value.
  // _attr has no default value.
  // _ty_attr has no default value.
  // _cmt has no default value.
  // _info has no default value.
  // _binding_iter has no default value.
  // _crefs has no default value.
  // _exp has no default value.
  // _ty_attr_names has no default value.
  // _ty_attr_iters has no default value.
  // _backend_attributes has no default value.
  // _bind_var has no default value.
  // _binfo has no default value.
  // _bind_src has no default value.
  // _has_binding has no default value.
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = omc_NFBinding_mapExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))), boxvar_NFScalarize_expandComplexCref__traverser);
  _var = tmpMeta1;

  if((omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3)))) && omc_NFType_hasKnownSize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))))))
  {
    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        MMC_TRY_INTERNAL(mmc_jumper)
        tmp3_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            modelica_metatype tmpMeta6;
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            modelica_metatype tmpMeta9;
            modelica_metatype tmpMeta10;
            modelica_integer tmp11;
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
            /* Pattern matching succeeded */
            /* Pattern-matching assignment */
            tmpMeta6 = _var;
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,10) == 0) goto goto_2;
            tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
            tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
            tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
            tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
            tmp11 = mmc_unbox_integer(tmpMeta10);
            tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
            tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
            tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 9));
            tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 10));
            tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 11));
            _name = tmpMeta7;
            _ty = tmpMeta8;
            _binding = tmpMeta9;
            _vis = tmp11  /* pattern as ty=enumeration(PUBLIC, PROTECTED) */;
            _attr = tmpMeta12;
            _ty_attr = tmpMeta13;
            _cmt = tmpMeta14;
            _info = tmpMeta15;
            _binfo = tmpMeta16;

            _crefs = omc_NFComponentRef_scalarize(threadData, _name, 0 /* false */);

            if(listEmpty(_crefs))
            {
              goto _return;
            }

            _has_binding = omc_NFBinding_isBound(threadData, _binding);

            _bind_src = omc_NFBinding_source(threadData, _binding);

            if(_has_binding)
            {
              _binding_iter = omc_NFExpressionIterator_fromExp(threadData, omc_NFBinding_getTypedExp(threadData, _binding), 0 /* false */);

              _bind_var = omc_NFBinding_variability(threadData, _binding);

              if(((((!_forceScalarize) && omc_NFExpressionIterator_isSubscriptedArrayCall(threadData, _binding_iter, 1 /* true */)) && (!omc_Flags_getConfigBool(threadData, _OMC_LIT16))) && (!omc_NFScalarize_variableHasForcedScalarAttribute(threadData, _var))))
              {
                tmpMeta17 = mmc_mk_cons(_var, _vars);
                _vars = tmpMeta17;

                goto _return;
              }
            }
            else
            {
              _bind_var = 1;
            }

            _elem_ty = omc_NFType_arrayElementType(threadData, _ty);

            _ty_attr_names = omc_NFScalarize_scalarizeTypeAttributes(threadData, _ty_attr ,&_ty_attr_iters);

            _backend_attributes = omc_NFBackendExtension_BackendInfo_scalarize(threadData, _binfo, listLength(_crefs));

            {
              modelica_metatype _cr;
              for (tmpMeta18 = _crefs; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
              {
                _cr = MMC_CAR(tmpMeta18);
                if(_has_binding)
                {
                  _binding_iter = omc_NFExpressionIterator_next(threadData, _binding_iter ,&_exp);

                  _binding = omc_NFBinding_makeFlat(threadData, _exp, (modelica_integer)_bind_var, (modelica_integer)_bind_src);
                }

                _ty_attr = omc_NFScalarize_nextTypeAttributes(threadData, _ty_attr_names, _ty_attr_iters);

                /* Pattern-matching assignment */
                tmpMeta19 = _backend_attributes;
                if (listEmpty(tmpMeta19)) goto goto_2;
                tmpMeta20 = MMC_CAR(tmpMeta19);
                tmpMeta21 = MMC_CDR(tmpMeta19);
                _binfo = tmpMeta20;
                _backend_attributes = tmpMeta21;

                tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
                tmpMeta24 = mmc_mk_box11(3, &NFVariable_VARIABLE__desc, _cr, _elem_ty, _binding, mmc_mk_integer((modelica_integer)_vis), _attr, _ty_attr, tmpMeta23, _cmt, _info, _binfo);
                tmpMeta22 = mmc_mk_cons(tmpMeta24, _vars);
                _vars = tmpMeta22;
              }
            }
            goto tmp3_done;
          }
          case 1: {
            modelica_metatype tmpMeta26;
            /* Pattern matching succeeded */
            tmpMeta26 = stringAppend(_OMC_LIT17,omc_NFVariable_toString(threadData, _var, _OMC_LIT9, 1 /* true */));
            omc_Error_assertion(threadData, 0 /* false */, tmpMeta26, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))));
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
        if (++tmp4 < 2) {
          goto tmp3_top;
        }
        MMC_THROW_INTERNAL();
        tmp3_done2:;
      }
    }
    ;
  }
  else
  {
    tmpMeta27 = mmc_mk_cons(_var, _vars);
    _vars = tmpMeta27;
  }
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _vars;
}
modelica_metatype boxptr_NFScalarize_scalarizeVariable(threadData_t *threadData, modelica_metatype _var, modelica_metatype __omcQ_24in_5Fvars, modelica_metatype _forceScalarize)
{
  modelica_integer tmp1;
  modelica_metatype _vars = NULL;
  tmp1 = mmc_unbox_integer(_forceScalarize);
  _vars = omc_NFScalarize_scalarizeVariable(threadData, _var, __omcQ_24in_5Fvars, tmp1);
  /* skip box _vars; list<NFVariable> */
  return _vars;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarizeVariables(threadData_t *threadData, modelica_metatype _vars, modelica_boolean _forceScalarize)
{
  modelica_metatype _outVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outVars = tmpMeta1;
  {
    modelica_metatype _v;
    for (tmpMeta2 = _vars; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      _outVars = omc_NFScalarize_scalarizeVariable(threadData, _v, _outVars, _forceScalarize);
    }
  }

  _outVars = listReverseInPlace(_outVars);
  _return: OMC_LABEL_UNUSED
  return _outVars;
}
modelica_metatype boxptr_NFScalarize_scalarizeVariables(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _forceScalarize)
{
  modelica_integer tmp1;
  modelica_metatype _outVars = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_forceScalarize);
  _outVars = omc_NFScalarize_scalarizeVariables(threadData, _vars, tmp1);
  /* skip box _outVars; list<NFVariable> */
  return _outVars;
}

DLLDirection
modelica_metatype omc_NFScalarize_scalarize(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = omc_NFScalarize_scalarizeVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))), 0 /* false */);
  _flatModel = tmpMeta1;

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[4] = omc_NFEquation_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), boxvar_NFScalarize_expandComplexCref);
  _flatModel = tmpMeta2;

  tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[4] = omc_NFScalarize_scalarizeEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), 0 /* false */);
  _flatModel = tmpMeta3;

  tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[5] = omc_NFEquation_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))), boxvar_NFScalarize_expandComplexCref);
  _flatModel = tmpMeta4;

  tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[5] = omc_NFScalarize_scalarizeEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))), 0 /* false */);
  _flatModel = tmpMeta5;

  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp8;
    modelica_metatype tmpMeta9;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp10;
    modelica_metatype _a_loopVar = 0;
    modelica_metatype _a;
    _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6)));
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta9; /* defaultValue */
    tmp8 = &__omcQ_24tmpVar7;
    while(1) {
      tmp10 = 1;
      if (!listEmpty(_a_loopVar)) {
        _a = MMC_CAR(_a_loopVar);
        _a_loopVar = MMC_CDR(_a_loopVar);
        tmp10--;
      }
      if (tmp10 == 0) {
        __omcQ_24tmpVar6 = omc_NFScalarize_scalarizeAlgorithm(threadData, _a);
        *tmp8 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp8 = &MMC_CDR(*tmp8);
      } else if (tmp10 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp8 = mmc_mk_nil();
    tmpMeta7 = __omcQ_24tmpVar7;
  }
  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[6] = tmpMeta7;
  _flatModel = tmpMeta6;

  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp13;
    modelica_metatype tmpMeta14;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp15;
    modelica_metatype _a_loopVar = 0;
    modelica_metatype _a;
    _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7)));
    tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta14; /* defaultValue */
    tmp13 = &__omcQ_24tmpVar9;
    while(1) {
      tmp15 = 1;
      if (!listEmpty(_a_loopVar)) {
        _a = MMC_CAR(_a_loopVar);
        _a_loopVar = MMC_CDR(_a_loopVar);
        tmp15--;
      }
      if (tmp15 == 0) {
        __omcQ_24tmpVar8 = omc_NFScalarize_scalarizeAlgorithm(threadData, _a);
        *tmp13 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp13 = &MMC_CDR(*tmp13);
      } else if (tmp15 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp13 = mmc_mk_nil();
    tmpMeta12 = __omcQ_24tmpVar9;
  }
  tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[7] = tmpMeta12;
  _flatModel = tmpMeta11;

  omc_ExecStat_execStat(threadData, _OMC_LIT18);
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

