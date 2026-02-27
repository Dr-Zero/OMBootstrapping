#include "omc_simulation_settings.h"
#include "NFVerifyModel.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Following variable is discrete, but does not appear on the LHS of a when-statement: '%s'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,89,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(368)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Subscript '%s' for dimension %s (size = %s) of %s is out of bounds."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,67,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(99)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "The branches of an if-equation inside a when-equation must have the same set of component references on the left-hand side."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,123,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(350)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,6) {&ErrorTypes_MessageType_SYMBOLIC__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "The same variables must be solved in elsewhen clause as in the when clause."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,75,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(95)),_OMC_LIT12,_OMC_LIT2,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "NFVerifyModel.verify"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,20,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#include "util/modelica.h"

#include "NFVerifyModel_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkDiscreteRealRecord(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _cls, modelica_metatype _discreteReals);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteRealRecord,2,0) {(void*) boxptr_NFVerifyModel_checkDiscreteRealRecord,0}};
#define boxvar_NFVerifyModel_checkDiscreteRealRecord MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteRealRecord)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkDiscreteRealExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _discreteReals);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteRealExp,2,0) {(void*) boxptr_NFVerifyModel_checkDiscreteRealExp,0}};
#define boxvar_NFVerifyModel_checkDiscreteRealExp MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteRealExp)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkDiscreteRealStatement(threadData_t *threadData, modelica_metatype _statement, modelica_metatype _discreteReals, modelica_boolean _when_found);
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_checkDiscreteRealStatement(threadData_t *threadData, modelica_metatype _statement, modelica_metatype _discreteReals, modelica_metatype _when_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteRealStatement,2,0) {(void*) boxptr_NFVerifyModel_checkDiscreteRealStatement,0}};
#define boxvar_NFVerifyModel_checkDiscreteRealStatement MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteRealStatement)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkDiscreteRealEquation(threadData_t *threadData, modelica_metatype _body_eqn, modelica_metatype _discreteReals, modelica_boolean _when_found);
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_checkDiscreteRealEquation(threadData_t *threadData, modelica_metatype _body_eqn, modelica_metatype _discreteReals, modelica_metatype _when_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteRealEquation,2,0) {(void*) boxptr_NFVerifyModel_checkDiscreteRealEquation,0}};
#define boxvar_NFVerifyModel_checkDiscreteRealEquation MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteRealEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFVerifyModel_checkDiscreteRealBranch(threadData_t *threadData, modelica_metatype _branch, modelica_metatype __omcQ_24in_5FdiscreteReals, modelica_boolean _when_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFVerifyModel_checkDiscreteRealBranch(threadData_t *threadData, modelica_metatype _branch, modelica_metatype __omcQ_24in_5FdiscreteReals, modelica_metatype _when_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteRealBranch,2,0) {(void*) boxptr_NFVerifyModel_checkDiscreteRealBranch,0}};
#define boxvar_NFVerifyModel_checkDiscreteRealBranch MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteRealBranch)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkDiscreteReal(threadData_t *threadData, modelica_metatype _flatModel);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteReal,2,0) {(void*) boxptr_NFVerifyModel_checkDiscreteReal,0}};
#define boxvar_NFVerifyModel_checkDiscreteReal MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkDiscreteReal)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkSubscriptBoundsCref(threadData_t *threadData, modelica_metatype _cref, modelica_boolean _isPartial, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_checkSubscriptBoundsCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _isPartial, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkSubscriptBoundsCref,2,0) {(void*) boxptr_NFVerifyModel_checkSubscriptBoundsCref,0}};
#define boxvar_NFVerifyModel_checkSubscriptBoundsCref MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkSubscriptBoundsCref)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkSubscriptBounds__traverser(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _isPartial, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_checkSubscriptBounds__traverser(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _isPartial, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkSubscriptBounds__traverser,2,0) {(void*) boxptr_NFVerifyModel_checkSubscriptBounds__traverser,0}};
#define boxvar_NFVerifyModel_checkSubscriptBounds__traverser MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkSubscriptBounds__traverser)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkSubscriptBounds(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _isPartial, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_checkSubscriptBounds(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _isPartial, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkSubscriptBounds,2,0) {(void*) boxptr_NFVerifyModel_checkSubscriptBounds,0}};
#define boxvar_NFVerifyModel_checkSubscriptBounds MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkSubscriptBounds)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyStatement(threadData_t *threadData, modelica_metatype _stmt, modelica_boolean _isPartial);
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_verifyStatement(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _isPartial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyStatement,2,0) {(void*) boxptr_NFVerifyModel_verifyStatement,0}};
#define boxvar_NFVerifyModel_verifyStatement MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyStatement)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyAlgorithm(threadData_t *threadData, modelica_metatype _alg, modelica_boolean _isPartial);
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_verifyAlgorithm(threadData_t *threadData, modelica_metatype _alg, modelica_metatype _isPartial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyAlgorithm,2,0) {(void*) boxptr_NFVerifyModel_verifyAlgorithm,0}};
#define boxvar_NFVerifyModel_verifyAlgorithm MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyAlgorithm)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFVerifyModel_expandCrefSet(threadData_t *threadData, modelica_metatype _crefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_expandCrefSet,2,0) {(void*) boxptr_NFVerifyModel_expandCrefSet,0}};
#define boxvar_NFVerifyModel_expandCrefSet MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_expandCrefSet)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkCrefSetEquality(threadData_t *threadData, modelica_metatype _crefs1, modelica_metatype _crefs2, modelica_metatype _errMsg, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkCrefSetEquality,2,0) {(void*) boxptr_NFVerifyModel_checkCrefSetEquality,0}};
#define boxvar_NFVerifyModel_checkCrefSetEquality MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_checkCrefSetEquality)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFVerifyModel_whenEquationIfCrefs(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fcrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_whenEquationIfCrefs,2,0) {(void*) boxptr_NFVerifyModel_whenEquationIfCrefs,0}};
#define boxvar_NFVerifyModel_whenEquationIfCrefs MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_whenEquationIfCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFVerifyModel_whenEquationEqualityCrefs(threadData_t *threadData, modelica_metatype _lhsExp, modelica_metatype __omcQ_24in_5Fcrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_whenEquationEqualityCrefs,2,0) {(void*) boxptr_NFVerifyModel_whenEquationEqualityCrefs,0}};
#define boxvar_NFVerifyModel_whenEquationEqualityCrefs MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_whenEquationEqualityCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFVerifyModel_whenEquationBranchCrefs(threadData_t *threadData, modelica_metatype _eql);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_whenEquationBranchCrefs,2,0) {(void*) boxptr_NFVerifyModel_whenEquationBranchCrefs,0}};
#define boxvar_NFVerifyModel_whenEquationBranchCrefs MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_whenEquationBranchCrefs)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyWhenEquation(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyWhenEquation,2,0) {(void*) boxptr_NFVerifyModel_verifyWhenEquation,0}};
#define boxvar_NFVerifyModel_verifyWhenEquation MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyWhenEquation)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyEquation(threadData_t *threadData, modelica_metatype _eq, modelica_boolean _isPartial);
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_verifyEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _isPartial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyEquation,2,0) {(void*) boxptr_NFVerifyModel_verifyEquation,0}};
#define boxvar_NFVerifyModel_verifyEquation MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyEquation)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyBinding(threadData_t *threadData, modelica_metatype _binding, modelica_boolean _isPartial);
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_verifyBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _isPartial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyBinding,2,0) {(void*) boxptr_NFVerifyModel_verifyBinding,0}};
#define boxvar_NFVerifyModel_verifyBinding MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyBinding)
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyVariable(threadData_t *threadData, modelica_metatype _var, modelica_boolean _isPartial);
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_verifyVariable(threadData_t *threadData, modelica_metatype _var, modelica_metatype _isPartial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyVariable,2,0) {(void*) boxptr_NFVerifyModel_verifyVariable,0}};
#define boxvar_NFVerifyModel_verifyVariable MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_verifyVariable)

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkDiscreteRealRecord(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _cls, modelica_metatype _discreteReals)
{
  modelica_metatype _element = NULL;
  modelica_metatype _inputs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _element has no default value.
  // _inputs has no default value.
  omc_UnorderedSet_add(threadData, _cref, _discreteReals);

  _inputs = omc_NFRecord_collectRecordParams(threadData, _cls, NULL, NULL);

  {
    modelica_metatype _node;
    for (tmpMeta1 = _inputs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _node = MMC_CAR(tmpMeta1);
      tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
      _element = omc_NFComponentRef_prefixCref(threadData, _node, omc_NFInstNode_InstNode_getType(threadData, _node), tmpMeta2, _cref);

      omc_UnorderedSet_add(threadData, _element, _discreteReals);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkDiscreteRealExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _discreteReals)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      modelica_metatype _ty = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _elements = NULL;
      modelica_metatype _cls = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _ty has no default value.
      // _cref has no default value.
      // _elements has no default value.
      // _cls has no default value.
      tmp3 = 0;
      for (; tmp3 < 4; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _ty = tmpMeta5;
          _cref = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isReal(threadData, omc_NFType_arrayElementType(threadData, _ty))) goto tmp2_end;
          omc_UnorderedSet_add(threadData, _cref, _discreteReals);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,11,2) == 0) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _ty = tmpMeta7;
          _cls = tmpMeta8;
          _cref = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isRecord(threadData, _ty)) goto tmp2_end;
          omc_NFVerifyModel_checkDiscreteRealRecord(threadData, _cref, _cls, _discreteReals);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,11,2) == 0) goto tmp2_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _elements = tmpMeta10;
          /* Pattern matching succeeded */
          {
            modelica_metatype _element;
            for (tmpMeta11 = _elements; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _element = MMC_CAR(tmpMeta11);
              omc_NFVerifyModel_checkDiscreteRealExp(threadData, _element, _discreteReals);
            }
          }
          goto tmp2_done;
        }
        case 3: {
          
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

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkDiscreteRealStatement(threadData_t *threadData, modelica_metatype _statement, modelica_metatype _discreteReals, modelica_boolean _when_found)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _statement;
    {
      modelica_metatype _lhs = NULL;
      modelica_metatype _branches = NULL;
      modelica_metatype _body = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _lhs has no default value.
      // _branches has no default value.
      // _body has no default value.
      tmp3 = 0;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _branches = tmpMeta5;
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta6 = _branches; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _branch = MMC_CAR(tmpMeta6);
              /* Pattern-matching assignment */
              tmpMeta7 = _branch;
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
              _body = tmpMeta8;

              {
                modelica_metatype _statement;
                for (tmpMeta9 = _body; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
                {
                  _statement = MMC_CAR(tmpMeta9);
                  omc_NFVerifyModel_checkDiscreteRealStatement(threadData, _statement, _discreteReals, 1 /* true */);
                }
              }
            }
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,4) == 0) goto tmp2_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _lhs = tmpMeta12;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!_when_found) goto tmp2_end;
          omc_NFVerifyModel_checkDiscreteRealExp(threadData, _lhs, _discreteReals);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,2) == 0) goto tmp2_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _branches = tmpMeta13;
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta14 = _branches; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _branch = MMC_CAR(tmpMeta14);
              /* Pattern-matching assignment */
              tmpMeta15 = _branch;
              tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
              _body = tmpMeta16;

              {
                modelica_metatype _stmt;
                for (tmpMeta17 = _body; !listEmpty(tmpMeta17); tmpMeta17=MMC_CDR(tmpMeta17))
                {
                  _stmt = MMC_CAR(tmpMeta17);
                  omc_NFVerifyModel_checkDiscreteRealStatement(threadData, _stmt, _discreteReals, _when_found);
                }
              }
            }
          }
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,5) == 0) goto tmp2_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          
          _body = tmpMeta20;
          /* Pattern matching succeeded */
          {
            modelica_metatype _statement;
            for (tmpMeta21 = _body; !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
            {
              _statement = MMC_CAR(tmpMeta21);
              omc_NFVerifyModel_checkDiscreteRealStatement(threadData, _statement, _discreteReals, _when_found);
            }
          }
          goto tmp2_done;
        }
        case 4: {
          
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
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_checkDiscreteRealStatement(threadData_t *threadData, modelica_metatype _statement, modelica_metatype _discreteReals, modelica_metatype _when_found)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_when_found);
  omc_NFVerifyModel_checkDiscreteRealStatement(threadData, _statement, _discreteReals, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkDiscreteRealEquation(threadData_t *threadData, modelica_metatype _body_eqn, modelica_metatype _discreteReals, modelica_boolean _when_found)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _body_eqn;
    {
      modelica_metatype _lhs = NULL;
      modelica_metatype _body = NULL;
      modelica_metatype _branches = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _lhs has no default value.
      // _body has no default value.
      // _branches has no default value.
      tmp3 = 0;
      for (; tmp3 < 6; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,5) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _lhs = tmpMeta5;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!_when_found) goto tmp2_end;
          omc_NFVerifyModel_checkDiscreteRealExp(threadData, _lhs, _discreteReals);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,5) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _lhs = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!_when_found) goto tmp2_end;
          omc_NFVerifyModel_checkDiscreteRealExp(threadData, _lhs, _discreteReals);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,3) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _branches = tmpMeta7;
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta8 = _branches; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _branch = MMC_CAR(tmpMeta8);
              omc_NFVerifyModel_checkDiscreteRealBranch(threadData, _branch, _discreteReals, _when_found);
            }
          }
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,3) == 0) goto tmp2_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _branches = tmpMeta10;
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta11 = _branches; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _branch = MMC_CAR(tmpMeta11);
              omc_NFVerifyModel_checkDiscreteRealBranch(threadData, _branch, _discreteReals, 1 /* true */);
            }
          }
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,5) == 0) goto tmp2_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          
          _body = tmpMeta13;
          /* Pattern matching succeeded */
          {
            modelica_metatype _eqn;
            for (tmpMeta14 = _body; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _eqn = MMC_CAR(tmpMeta14);
              omc_NFVerifyModel_checkDiscreteRealEquation(threadData, _eqn, _discreteReals, _when_found);
            }
          }
          goto tmp2_done;
        }
        case 5: {
          
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
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_checkDiscreteRealEquation(threadData_t *threadData, modelica_metatype _body_eqn, modelica_metatype _discreteReals, modelica_metatype _when_found)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_when_found);
  omc_NFVerifyModel_checkDiscreteRealEquation(threadData, _body_eqn, _discreteReals, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFVerifyModel_checkDiscreteRealBranch(threadData_t *threadData, modelica_metatype _branch, modelica_metatype __omcQ_24in_5FdiscreteReals, modelica_boolean _when_found)
{
  modelica_metatype _discreteReals = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _discreteReals = __omcQ_24in_5FdiscreteReals;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _branch;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!_when_found) goto tmp2_end;
          {
            modelica_metatype _eqn;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_branch), 4))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _eqn = MMC_CAR(tmpMeta5);
              omc_NFVerifyModel_checkDiscreteRealEquation(threadData, _eqn, _discreteReals, _when_found);
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
  return _discreteReals;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFVerifyModel_checkDiscreteRealBranch(threadData_t *threadData, modelica_metatype _branch, modelica_metatype __omcQ_24in_5FdiscreteReals, modelica_metatype _when_found)
{
  modelica_integer tmp1;
  modelica_metatype _discreteReals = NULL;
  tmp1 = mmc_unbox_integer(_when_found);
  _discreteReals = omc_NFVerifyModel_checkDiscreteRealBranch(threadData, _branch, __omcQ_24in_5FdiscreteReals, tmp1);
  /* skip box _discreteReals; UnorderedSet<NFComponentRef> */
  return _discreteReals;
}

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkDiscreteReal(threadData_t *threadData, modelica_metatype _flatModel)
{
  modelica_metatype _discrete_reals = NULL;
  modelica_metatype _illegal_discrete_vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_string _err_str = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _discrete_reals has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _illegal_discrete_vars = tmpMeta1;
  _err_str = _OMC_LIT0;
  _discrete_reals = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hashStrip, boxvar_NFComponentRef_isEqualStrip, ((modelica_integer) 13));

  {
    modelica_metatype _eqn;
    for (tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eqn = MMC_CAR(tmpMeta2);
      omc_NFVerifyModel_checkDiscreteRealEquation(threadData, _eqn, _discrete_reals, 0 /* false */);
    }
  }

  {
    modelica_metatype _alg;
    for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _alg = MMC_CAR(tmpMeta4);
      {
        modelica_metatype _statement;
        for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
        {
          _statement = MMC_CAR(tmpMeta5);
          omc_NFVerifyModel_checkDiscreteRealStatement(threadData, _statement, _discrete_reals, 0 /* false */);
        }
      }
    }
  }

  {
    modelica_metatype _variable;
    for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
    {
      _variable = MMC_CAR(tmpMeta8);
      if((((omc_NFVariable_variability(threadData, _variable) == 5) && omc_NFType_isReal(threadData, omc_NFType_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variable), 3)))))) && (!omc_UnorderedSet_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variable), 2))), _discrete_reals))))
      {
        tmpMeta9 = mmc_mk_cons(_variable, _illegal_discrete_vars);
        _illegal_discrete_vars = tmpMeta9;
      }
    }
  }

  if((!listEmpty(_illegal_discrete_vars)))
  {
    {
      modelica_metatype _var;
      for (tmpMeta11 = _illegal_discrete_vars; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
      {
        _var = MMC_CAR(tmpMeta11);
        tmpMeta12 = mmc_mk_cons(omc_NFComponentRef_toString(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))))), MMC_REFSTRUCTLIT(mmc_nil));
        omc_Error_addSourceMessage(threadData, _OMC_LIT5, tmpMeta12, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))));
      }
    }

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkSubscriptBoundsCref(threadData_t *threadData, modelica_metatype _cref, modelica_boolean _isPartial, modelica_metatype _info)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cref;
    {
      modelica_metatype _dims = NULL;
      modelica_metatype _subs = NULL;
      modelica_metatype _d = NULL;
      modelica_integer _int_sub;
      modelica_integer _index;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _dims has no default value.
      // _subs has no default value.
      // _d has no default value.
      // _int_sub has no default value.
      // _index has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
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
          modelica_string tmp15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,5) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (listEmpty(tmpMeta5)) goto tmp2_end;
          tmpMeta6 = MMC_CAR(tmpMeta5);
          tmpMeta7 = MMC_CDR(tmpMeta5);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,7,2) == 0) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          
          _subs = tmpMeta5;
          _dims = tmpMeta9;
          /* Pattern matching succeeded */
          _index = ((modelica_integer) 1);

          {
            modelica_metatype _s;
            for (tmpMeta10 = _subs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _s = MMC_CAR(tmpMeta10);
              /* Pattern-matching assignment */
              tmpMeta11 = _dims;
              if (listEmpty(tmpMeta11)) goto goto_1;
              tmpMeta12 = MMC_CAR(tmpMeta11);
              tmpMeta13 = MMC_CDR(tmpMeta11);
              _d = tmpMeta12;
              _dims = tmpMeta13;

              if((omc_NFSubscript_isScalarLiteral(threadData, _s) && omc_NFDimension_isKnown(threadData, _d, 0 /* false */)))
              {
                _int_sub = omc_NFSubscript_toInteger(threadData, _s);

                if(((_int_sub < ((modelica_integer) 1)) || (_int_sub > omc_NFDimension_size(threadData, _d, 0 /* false */))))
                {
                  tmp15 = modelica_integer_to_modelica_string(_index, ((modelica_integer) 0), 1 /* true */);
                  tmpMeta14 = mmc_mk_cons(omc_NFSubscript_toString(threadData, _s), mmc_mk_cons(tmp15, mmc_mk_cons(omc_NFDimension_toString(threadData, _d), mmc_mk_cons(omc_NFComponentRef_firstName(threadData, _cref, 0 /* false */), MMC_REFSTRUCTLIT(mmc_nil)))));
                  omc_Error_addSourceMessage(threadData, _OMC_LIT8, tmpMeta14, _info);

                  if((!_isPartial))
                  {
                    goto goto_1;
                  }
                }
              }

              _index = ((modelica_integer) 1) + _index;
            }
          }

          /* Tail recursive call */
          _cref = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
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
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_checkSubscriptBoundsCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _isPartial, modelica_metatype _info)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isPartial);
  omc_NFVerifyModel_checkSubscriptBoundsCref(threadData, _cref, tmp1, _info);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkSubscriptBounds__traverser(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _isPartial, modelica_metatype _info)
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
          omc_NFVerifyModel_checkSubscriptBoundsCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _isPartial, _info);
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
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_checkSubscriptBounds__traverser(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _isPartial, modelica_metatype _info)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isPartial);
  omc_NFVerifyModel_checkSubscriptBounds__traverser(threadData, _exp, tmp1, _info);
  return;
}

static void closure0_NFVerifyModel_checkSubscriptBounds__traverser(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype isPartial = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_NFVerifyModel_checkSubscriptBounds__traverser(thData, exp, isPartial, info);
}
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkSubscriptBounds(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _isPartial, modelica_metatype _info)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(0, mmc_mk_boolean(_isPartial), _info);
  omc_NFExpression_apply(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure0_NFVerifyModel_checkSubscriptBounds__traverser,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_checkSubscriptBounds(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _isPartial, modelica_metatype _info)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isPartial);
  omc_NFVerifyModel_checkSubscriptBounds(threadData, _exp, tmp1, _info);
  return;
}

static void closure1_NFVerifyModel_checkSubscriptBounds(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype isPartial = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_NFVerifyModel_checkSubscriptBounds(thData, exp, isPartial, info);
}
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyStatement(threadData_t *threadData, modelica_metatype _stmt, modelica_boolean _isPartial)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(0, mmc_mk_boolean(_isPartial), omc_NFStatement_info(threadData, _stmt));
  omc_NFStatement_applyExp(threadData, _stmt, (modelica_fnptr) mmc_mk_box2(0,closure1_NFVerifyModel_checkSubscriptBounds,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_verifyStatement(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _isPartial)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isPartial);
  omc_NFVerifyModel_verifyStatement(threadData, _stmt, tmp1);
  return;
}

static void closure2_NFVerifyModel_verifyStatement(threadData_t *thData, modelica_metatype closure, modelica_metatype stmt)
{
  modelica_metatype isPartial = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  boxptr_NFVerifyModel_verifyStatement(thData, stmt, isPartial);
}
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyAlgorithm(threadData_t *threadData, modelica_metatype _alg, modelica_boolean _isPartial)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box1(0, mmc_mk_boolean(_isPartial));
  omc_NFAlgorithm_apply(threadData, _alg, (modelica_fnptr) mmc_mk_box2(0,closure2_NFVerifyModel_verifyStatement,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_verifyAlgorithm(threadData_t *threadData, modelica_metatype _alg, modelica_metatype _isPartial)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isPartial);
  omc_NFVerifyModel_verifyAlgorithm(threadData, _alg, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFVerifyModel_expandCrefSet(threadData_t *threadData, modelica_metatype _crefs)
{
  modelica_metatype _outCrefs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _exp = NULL;
  modelica_metatype _expl = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outCrefs = tmpMeta1;
  // _exp has no default value.
  // _expl has no default value.
  {
    modelica_metatype _cref;
    for (tmpMeta2 = _crefs; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _cref = MMC_CAR(tmpMeta2);
      _exp = omc_NFExpression_fromCref(threadData, _cref, 0 /* false */);

      _exp = omc_NFExpandExp_expandCref(threadData, _exp, 0 /* false */, NULL);

      if(omc_NFExpression_isArray(threadData, _exp))
      {
        _expl = omc_NFExpression_arrayElements(threadData, _exp);

        {
          modelica_metatype __omcQ_24tmpVar3;
          modelica_metatype* tmp4;
          modelica_metatype tmpMeta5;
          modelica_metatype __omcQ_24tmpVar2;
          modelica_integer tmp6;
          modelica_metatype _e_loopVar = 0;
          modelica_integer tmp7;
          modelica_metatype _e;
          _e_loopVar = _expl;
          tmp7 = 1;
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar3 = tmpMeta5; /* defaultValue */
          tmp4 = &__omcQ_24tmpVar3;
          while(1) {
            tmp6 = 1;
            if (tmp7 <= arrayLength(_e_loopVar)) {
              _e = arrayGet(_e_loopVar, tmp7++);
              tmp6--;
            }
            if (tmp6 == 0) {
              __omcQ_24tmpVar2 = omc_NFExpression_toCref(threadData, _e);
              *tmp4 = mmc_mk_cons(__omcQ_24tmpVar2,0);
              tmp4 = &MMC_CDR(*tmp4);
            } else if (tmp6 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp4 = mmc_mk_nil();
          tmpMeta3 = __omcQ_24tmpVar3;
        }
        _outCrefs = listAppend(tmpMeta3, _outCrefs);
      }
      else
      {
        tmpMeta8 = mmc_mk_cons(_cref, _outCrefs);
        _outCrefs = tmpMeta8;
      }
    }
  }

  _outCrefs = omc_List_sort(threadData, _outCrefs, boxvar_NFComponentRef_isGreater);

  _outCrefs = omc_List_sortedUnique(threadData, _outCrefs, boxvar_NFComponentRef_isEqual);
  _return: OMC_LABEL_UNUSED
  return _outCrefs;
}

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_checkCrefSetEquality(threadData_t *threadData, modelica_metatype _crefs1, modelica_metatype _crefs2, modelica_metatype _errMsg, modelica_metatype _source)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if(omc_List_isEqualOnTrue(threadData, _crefs1, _crefs2, boxvar_NFComponentRef_isEqual))
  {
    goto _return;
  }

  if(omc_List_isEqualOnTrue(threadData, omc_NFVerifyModel_expandCrefSet(threadData, _crefs1), omc_NFVerifyModel_expandCrefSet(threadData, _crefs2), boxvar_NFComponentRef_isEqual))
  {
    goto _return;
  }

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  omc_Error_addSourceMessage(threadData, _errMsg, tmpMeta1, omc_ElementSource_getInfo(threadData, _source));

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFVerifyModel_whenEquationIfCrefs(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fcrefs)
{
  modelica_metatype _crefs = NULL;
  modelica_metatype _crefs1 = NULL;
  modelica_metatype _crefs2 = NULL;
  modelica_metatype _rest_branches = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _crefs = __omcQ_24in_5Fcrefs;
  // _crefs1 has no default value.
  // _crefs2 has no default value.
  // _rest_branches has no default value.
  // _body has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _branches;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  _body = tmpMeta4;
  _rest_branches = tmpMeta3;

  _crefs1 = omc_NFVerifyModel_whenEquationBranchCrefs(threadData, _body);

  {
    modelica_metatype _branch;
    for (tmpMeta5 = _rest_branches; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _branch = MMC_CAR(tmpMeta5);
      /* Pattern-matching assignment */
      tmpMeta6 = _branch;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,3) == 0) MMC_THROW_INTERNAL();
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
      _body = tmpMeta7;

      _crefs2 = omc_NFVerifyModel_whenEquationBranchCrefs(threadData, _body);

      omc_NFVerifyModel_checkCrefSetEquality(threadData, _crefs1, _crefs2, _OMC_LIT11, _source);
    }
  }

  _crefs = listAppend(_crefs1, _crefs);
  _return: OMC_LABEL_UNUSED
  return _crefs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFVerifyModel_whenEquationEqualityCrefs(threadData_t *threadData, modelica_metatype _lhsExp, modelica_metatype __omcQ_24in_5Fcrefs)
{
  modelica_metatype _crefs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _crefs = __omcQ_24in_5Fcrefs;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _lhsExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhsExp), 3))), _crefs);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhsExp), 3))), boxvar_NFVerifyModel_whenEquationEqualityCrefs, _crefs);
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
  _crefs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _crefs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFVerifyModel_whenEquationBranchCrefs(threadData_t *threadData, modelica_metatype _eql)
{
  modelica_metatype _crefs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _crefs = tmpMeta1;
  {
    modelica_metatype _eq;
    for (tmpMeta2 = _eql; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp6_1;
        tmp6_1 = _eq;
        {
          int tmp6;
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp6_1))) {
            case 3: {
              
              /* Pattern matching succeeded */
              tmpMeta3 = omc_NFVerifyModel_whenEquationEqualityCrefs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _crefs);
              goto tmp5_done;
            }
            case 4: {
              
              /* Pattern matching succeeded */
              tmpMeta3 = omc_NFVerifyModel_whenEquationEqualityCrefs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _crefs);
              goto tmp5_done;
            }
            case 7: {
              
              /* Pattern matching succeeded */
              tmpMeta3 = omc_NFVerifyModel_whenEquationIfCrefs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _crefs);
              goto tmp5_done;
            }
            default:
            tmp5_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
              tmpMeta3 = _crefs;
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
      _crefs = tmpMeta3;
    }
  }

  _crefs = omc_List_sort(threadData, _crefs, boxvar_NFComponentRef_isGreater);

  _crefs = omc_List_sortedUnique(threadData, _crefs, boxvar_NFComponentRef_isEqual);
  _return: OMC_LABEL_UNUSED
  return _crefs;
}

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyWhenEquation(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _source)
{
  modelica_metatype _crefs1 = NULL;
  modelica_metatype _crefs2 = NULL;
  modelica_metatype _rest_branches = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefs1 has no default value.
  // _crefs2 has no default value.
  // _rest_branches has no default value.
  // _body has no default value.
  if(omc_List_hasOneElement(threadData, _branches))
  {
    goto _return;
  }

  /* Pattern-matching assignment */
  tmpMeta1 = _branches;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  _body = tmpMeta4;
  _rest_branches = tmpMeta3;

  _crefs1 = omc_NFVerifyModel_whenEquationBranchCrefs(threadData, _body);

  {
    modelica_metatype _branch;
    for (tmpMeta5 = _rest_branches; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _branch = MMC_CAR(tmpMeta5);
      /* Pattern-matching assignment */
      tmpMeta6 = _branch;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,3) == 0) MMC_THROW_INTERNAL();
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
      _body = tmpMeta7;

      _crefs2 = omc_NFVerifyModel_whenEquationBranchCrefs(threadData, _body);

      omc_NFVerifyModel_checkCrefSetEquality(threadData, _crefs1, _crefs2, _OMC_LIT15, _source);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

static void closure3_NFVerifyModel_checkSubscriptBounds(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype isPartial = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_NFVerifyModel_checkSubscriptBounds(thData, exp, isPartial, info);
}
PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyEquation(threadData_t *threadData, modelica_metatype _eq, modelica_boolean _isPartial)
{
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!_isPartial)) goto tmp2_end;
          omc_NFVerifyModel_verifyWhenEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
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

  tmpMeta5 = mmc_mk_box2(0, mmc_mk_boolean(_isPartial), omc_NFEquation_info(threadData, _eq));
  omc_NFEquation_applyExpShallow(threadData, _eq, (modelica_fnptr) mmc_mk_box2(0,closure3_NFVerifyModel_checkSubscriptBounds,tmpMeta5));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_verifyEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _isPartial)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isPartial);
  omc_NFVerifyModel_verifyEquation(threadData, _eq, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyBinding(threadData_t *threadData, modelica_metatype _binding, modelica_boolean _isPartial)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if(omc_NFBinding_isBound(threadData, _binding))
  {
    omc_NFVerifyModel_checkSubscriptBounds(threadData, omc_NFBinding_getTypedExp(threadData, _binding), _isPartial, omc_NFBinding_getInfo(threadData, _binding));
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_verifyBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _isPartial)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isPartial);
  omc_NFVerifyModel_verifyBinding(threadData, _binding, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NFVerifyModel_verifyVariable(threadData_t *threadData, modelica_metatype _var, modelica_boolean _isPartial)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_NFVerifyModel_verifyBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))), _isPartial);

  {
    modelica_metatype _attr;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _attr = MMC_CAR(tmpMeta1);
      omc_NFVerifyModel_verifyBinding(threadData, omc_Util_tuple22(threadData, _attr), _isPartial);
    }
  }

  {
    modelica_metatype _v;
    for (tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 8))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _v = MMC_CAR(tmpMeta3);
      omc_NFVerifyModel_verifyVariable(threadData, _v, _isPartial);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NFVerifyModel_verifyVariable(threadData_t *threadData, modelica_metatype _var, modelica_metatype _isPartial)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isPartial);
  omc_NFVerifyModel_verifyVariable(threadData, _var, tmp1);
  return;
}

DLLDirection
void omc_NFVerifyModel_verify(threadData_t *threadData, modelica_metatype _flatModel, modelica_boolean _isPartial)
{
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _var;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      omc_NFVerifyModel_verifyVariable(threadData, _var, _isPartial);
    }
  }

  {
    modelica_metatype _eq;
    for (tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _eq = MMC_CAR(tmpMeta3);
      omc_NFVerifyModel_verifyEquation(threadData, _eq, _isPartial);
    }
  }

  {
    modelica_metatype _ieq;
    for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _ieq = MMC_CAR(tmpMeta5);
      omc_NFVerifyModel_verifyEquation(threadData, _ieq, _isPartial);
    }
  }

  {
    modelica_metatype _alg;
    for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _alg = MMC_CAR(tmpMeta7);
      omc_NFVerifyModel_verifyAlgorithm(threadData, _alg, _isPartial);
    }
  }

  {
    modelica_metatype _ialg;
    for (tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7))); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
    {
      _ialg = MMC_CAR(tmpMeta9);
      omc_NFVerifyModel_verifyAlgorithm(threadData, _ialg, _isPartial);
    }
  }

  if((!_isPartial))
  {
    omc_NFVerifyModel_checkDiscreteReal(threadData, _flatModel);
  }

  omc_ExecStat_execStat(threadData, _OMC_LIT16);
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NFVerifyModel_verify(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _isPartial)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_isPartial);
  omc_NFVerifyModel_verify(threadData, _flatModel, tmp1);
  return;
}

