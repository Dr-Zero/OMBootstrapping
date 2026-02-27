#include "omc_simulation_settings.h"
#include "NFAlgorithm.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,4) {&Gettext_TranslatableContent_notrans__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(5999)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Trying to assign to time."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,25,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,1) {_OMC_LIT5,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "Trying to assign to iterator "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,29,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6000)),_OMC_LIT0,_OMC_LIT9,_OMC_LIT3}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Using output variable in RHS before it is assigned (former occurences will be set to initial value): "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,101,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,9,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,41,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,17,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "NFAlgorithm.expressionOutput failed due to wrong expression type in LHS of algorithm statement: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,96,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "NFAlgorithm.statementInputsOutputs failed due to wrong Statement Type: FUNCTION_ARRAY_INIT."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,91,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,1) {_OMC_LIT20,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "NFAlgorithm.statementInputsOutputs failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,46,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,0,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "NFAlgorithm.getInputsOutputs failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,36,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,2,1) {_OMC_LIT24,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#include "util/modelica.h"

#include "NFAlgorithm_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_NFAlgorithm_expressionOutput(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _inputs_set, modelica_metatype _outputs_set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_expressionOutput,2,0) {(void*) boxptr_NFAlgorithm_expressionOutput,0}};
#define boxvar_NFAlgorithm_expressionOutput MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_expressionOutput)
PROTECTED_FUNCTION_STATIC void omc_NFAlgorithm_expressionInputs(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _inputs_set, modelica_metatype _outputs_set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_expressionInputs,2,0) {(void*) boxptr_NFAlgorithm_expressionInputs,0}};
#define boxvar_NFAlgorithm_expressionInputs MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_expressionInputs)
PROTECTED_FUNCTION_STATIC void omc_NFAlgorithm_statementInputsOutputs(threadData_t *threadData, modelica_metatype _statement, modelica_metatype _inputs_set, modelica_metatype _outputs_set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_statementInputsOutputs,2,0) {(void*) boxptr_NFAlgorithm_statementInputsOutputs,0}};
#define boxvar_NFAlgorithm_statementInputsOutputs MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_statementInputsOutputs)

PROTECTED_FUNCTION_STATIC void omc_NFAlgorithm_expressionOutput(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _inputs_set, modelica_metatype _outputs_set)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _cr has no default value.
      // _ty has no default value.
      tmp3 = 0;
      for (; tmp3 < 6; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,2,0) == 0) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _cr = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponentRef_isTime(threadData, _cr)) goto tmp2_end;
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT6);
          goto goto_1;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _cr = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponentRef_isIterator(threadData, _cr)) goto tmp2_end;
          tmpMeta9 = stringAppend(_OMC_LIT7,omc_NFComponentRef_toString(threadData, _cr));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT8);
          tmpMeta8 = mmc_mk_cons(tmpMeta10, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta8);
          goto goto_1;
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _ty = tmpMeta11;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isExternalObject(threadData, _ty)) goto tmp2_end;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _cr = tmpMeta12;
          /* Pattern matching succeeded */
          _cr = omc_NFComponentRef_stripSubscriptsAll(threadData, _cr);

          if(omc_UnorderedSet_remove(threadData, _cr, _inputs_set))
          {
            if(omc_Flags_isSet(threadData, _OMC_LIT15))
            {
              tmpMeta14 = stringAppend(_OMC_LIT11,omc_NFExpression_toString(threadData, _exp));
              tmpMeta13 = mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil));
              omc_Error_addMessage(threadData, _OMC_LIT10, tmpMeta13);
            }
          }

          omc_UnorderedSet_add(threadData, _cr, _outputs_set);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta16 = stringAppend(_OMC_LIT19,omc_NFExpression_toString(threadData, _exp));
          tmpMeta15 = mmc_mk_cons(tmpMeta16, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT18, tmpMeta15);
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

PROTECTED_FUNCTION_STATIC void omc_NFAlgorithm_expressionInputs(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _inputs_set, modelica_metatype _outputs_set)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _cr has no default value.
      // _ty has no default value.
      tmp3 = 0;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _cr = tmpMeta5;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponentRef_isTime(threadData, _cr)) goto tmp2_end;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _cr = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponentRef_isIterator(threadData, _cr)) goto tmp2_end;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _ty = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isExternalObject(threadData, _ty)) goto tmp2_end;
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _cr = tmpMeta8;
          /* Pattern matching succeeded */
          _cr = omc_NFComponentRef_stripSubscriptsAll(threadData, _cr);

          if((!omc_UnorderedSet_contains(threadData, _cr, _outputs_set)))
          {
            omc_UnorderedSet_add(threadData, _cr, _inputs_set);
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

static void closure0_NFAlgorithm_expressionInputs(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype inputs_set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype outputs_set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_NFAlgorithm_expressionInputs(thData, exp, inputs_set, outputs_set);
}static void closure1_NFAlgorithm_expressionInputs(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype inputs_set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype outputs_set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  boxptr_NFAlgorithm_expressionInputs(thData, exp, inputs_set, outputs_set);
}
PROTECTED_FUNCTION_STATIC void omc_NFAlgorithm_statementInputsOutputs(threadData_t *threadData, modelica_metatype _statement, modelica_metatype _inputs_set, modelica_metatype _outputs_set)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _statement;
    {
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _elements = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _branches = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _lhs has no default value.
      // _rhs has no default value.
      // _elements has no default value.
      // _stmts has no default value.
      // _branches has no default value.
      tmp3 = 0;
      for (; tmp3 < 15; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,4) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,6,2) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          
          _lhs = tmpMeta5;
          _rhs = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(0, _inputs_set, _outputs_set);
          omc_NFExpression_apply(threadData, _rhs, (modelica_fnptr) mmc_mk_box2(0,closure0_NFAlgorithm_expressionInputs,tmpMeta7));

          omc_NFAlgorithm_expressionOutput(threadData, _lhs, _inputs_set, _outputs_set);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,4) == 0) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,11,2) == 0) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          
          _elements = tmpMeta9;
          _rhs = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(0, _inputs_set, _outputs_set);
          omc_NFExpression_apply(threadData, _rhs, (modelica_fnptr) mmc_mk_box2(0,closure1_NFAlgorithm_expressionInputs,tmpMeta11));

          {
            modelica_metatype _exp;
            for (tmpMeta12 = _elements; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _exp = MMC_CAR(tmpMeta12);
              omc_NFAlgorithm_expressionOutput(threadData, _exp, _inputs_set, _outputs_set);
            }
          }
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,5) == 0) goto tmp2_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          
          _stmts = tmpMeta14;
          /* Pattern matching succeeded */
          {
            modelica_metatype _stmt;
            for (tmpMeta15 = _stmts; !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
            {
              _stmt = MMC_CAR(tmpMeta15);
              omc_NFAlgorithm_statementInputsOutputs(threadData, _stmt, _inputs_set, _outputs_set);
            }
          }
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,2) == 0) goto tmp2_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _branches = tmpMeta17;
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta18 = _branches; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
            {
              _branch = MMC_CAR(tmpMeta18);
              /* Pattern-matching assignment */
              tmpMeta19 = _branch;
              tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
              _stmts = tmpMeta20;

              {
                modelica_metatype _stmt;
                for (tmpMeta21 = _stmts; !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
                {
                  _stmt = MMC_CAR(tmpMeta21);
                  omc_NFAlgorithm_statementInputsOutputs(threadData, _stmt, _inputs_set, _outputs_set);
                }
              }
            }
          }
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,2) == 0) goto tmp2_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _branches = tmpMeta24;
          /* Pattern matching succeeded */
          {
            modelica_metatype _branch;
            for (tmpMeta25 = _branches; !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
            {
              _branch = MMC_CAR(tmpMeta25);
              /* Pattern-matching assignment */
              tmpMeta26 = _branch;
              tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
              _stmts = tmpMeta27;

              {
                modelica_metatype _stmt;
                for (tmpMeta28 = _stmts; !listEmpty(tmpMeta28); tmpMeta28=MMC_CDR(tmpMeta28))
                {
                  _stmt = MMC_CAR(tmpMeta28);
                  omc_NFAlgorithm_statementInputsOutputs(threadData, _stmt, _inputs_set, _outputs_set);
                }
              }
            }
          }
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,9,3) == 0) goto tmp2_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          
          _stmts = tmpMeta31;
          /* Pattern matching succeeded */
          {
            modelica_metatype _stmt;
            for (tmpMeta32 = _stmts; !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
            {
              _stmt = MMC_CAR(tmpMeta32);
              omc_NFAlgorithm_statementInputsOutputs(threadData, _stmt, _inputs_set, _outputs_set);
            }
          }
          goto tmp2_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,4) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,8,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,10,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 11: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,11,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 12: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,12,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 13: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT18, _OMC_LIT21);
          goto goto_1;
          goto tmp2_done;
        }
        case 14: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT15))
          {
            tmpMeta35 = stringAppend(_OMC_LIT22,omc_NFStatement_toString(threadData, _statement, _OMC_LIT23));
            tmpMeta34 = mmc_mk_cons(tmpMeta35, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT18, tmpMeta34);
          }
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
modelica_boolean omc_NFAlgorithm_isDiscrete(threadData_t *threadData, modelica_metatype _alg)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = omc_List_any(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 4))), boxvar_NFComponentRef_isDiscrete);

  _b = (_b?_b:omc_List_any(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), boxvar_NFStatement_isDiscrete));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFAlgorithm_isDiscrete(threadData_t *threadData, modelica_metatype _alg)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFAlgorithm_isDiscrete(threadData, _alg);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFAlgorithm_isEmpty(threadData_t *threadData, modelica_metatype _alg)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFAlgorithm_isEmpty(threadData_t *threadData, modelica_metatype _alg)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFAlgorithm_isEmpty(threadData, _alg);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NFAlgorithm_isEqual(threadData_t *threadData, modelica_metatype _alg1, modelica_metatype _alg2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = ((omc_List_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg2), 3))), boxvar_NFComponentRef_isEqual) && omc_List_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg2), 4))), boxvar_NFComponentRef_isEqual)) && omc_List_isEqualOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg2), 2))), boxvar_NFStatement_isEqual));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFAlgorithm_isEqual(threadData_t *threadData, modelica_metatype _alg1, modelica_metatype _alg2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFAlgorithm_isEqual(threadData, _alg1, _alg2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NFAlgorithm_getInputsOutputs(threadData_t *threadData, modelica_metatype _statements, modelica_metatype *out_outputs_lst)
{
  modelica_metatype _inputs_lst = NULL;
  modelica_metatype _outputs_lst = NULL;
  modelica_metatype _inputs_set = NULL;
  modelica_metatype _outputs_set = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _inputs_lst has no default value.
  // _outputs_lst has no default value.
  _inputs_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _outputs_set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
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
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_metatype _statement;
            for (tmpMeta5 = _statements; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _statement = MMC_CAR(tmpMeta5);
              omc_NFAlgorithm_statementInputsOutputs(threadData, _statement, _inputs_set, _outputs_set);
            }
          }

          _inputs_lst = omc_UnorderedSet_toList(threadData, _inputs_set);

          _outputs_lst = omc_UnorderedSet_toList(threadData, _outputs_set);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT18, _OMC_LIT25);
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
  if (out_outputs_lst) { *out_outputs_lst = _outputs_lst; }
  return _inputs_lst;
}

DLLDirection
modelica_metatype omc_NFAlgorithm_setInputsOutputs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg)
{
  modelica_metatype _alg = NULL;
  modelica_metatype _inputs = NULL;
  modelica_metatype _outputs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = __omcQ_24in_5Falg;
  // _inputs has no default value.
  // _outputs has no default value.
  _inputs = omc_NFAlgorithm_getInputsOutputs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))) ,&_outputs);

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_alg), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = _inputs;
  _alg = tmpMeta1;

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_alg), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[4] = _outputs;
  _alg = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _alg;
}

DLLDirection
modelica_string omc_NFAlgorithm_toString(threadData_t *threadData, modelica_metatype _alg, modelica_string _indent)
{
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _str = omc_NFStatement_toStringList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _indent);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NFAlgorithm_foldExpList(threadData_t *threadData, modelica_metatype _algs, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg)
{
  modelica_metatype _arg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  {
    modelica_metatype _alg;
    for (tmpMeta1 = _algs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _alg = MMC_CAR(tmpMeta1);
      _arg = omc_NFAlgorithm_foldExp(threadData, _alg, ((modelica_fnptr) _func), _arg);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _arg;
}

DLLDirection
modelica_metatype omc_NFAlgorithm_foldExp(threadData_t *threadData, modelica_metatype _alg, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg)
{
  modelica_metatype _arg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  {
    modelica_metatype _s;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _s = MMC_CAR(tmpMeta1);
      _arg = omc_NFStatement_foldExp(threadData, _s, ((modelica_fnptr) _func), _arg);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _arg;
}

DLLDirection
modelica_metatype omc_NFAlgorithm_mapExpList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falgs, modelica_fnptr _func)
{
  modelica_metatype _algs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _algs = __omcQ_24in_5Falgs;
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _alg_loopVar = 0;
    modelica_metatype _alg;
    _alg_loopVar = _algs;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_alg_loopVar)) {
        _alg = MMC_CAR(_alg_loopVar);
        _alg_loopVar = MMC_CDR(_alg_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = omc_NFAlgorithm_mapExp(threadData, _alg, ((modelica_fnptr) _func));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  _algs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _algs;
}

DLLDirection
modelica_metatype omc_NFAlgorithm_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_fnptr _func)
{
  modelica_metatype _alg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = __omcQ_24in_5Falg;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_alg), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFStatement_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), ((modelica_fnptr) _func));
  _alg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _alg;
}

DLLDirection
modelica_metatype omc_NFAlgorithm_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_fnptr _fn)
{
  modelica_metatype _alg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = __omcQ_24in_5Falg;
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp5;
    modelica_metatype _s_loopVar = 0;
    modelica_metatype _s;
    _s_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar5;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_s_loopVar)) {
        _s = MMC_CAR(_s_loopVar);
        _s_loopVar = MMC_CDR(_s_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar4 = omc_NFStatement_map(threadData, _s, ((modelica_fnptr) _fn));
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar5;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_alg), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = tmpMeta2;
  _alg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _alg;
}

DLLDirection
void omc_NFAlgorithm_applyExpList(threadData_t *threadData, modelica_metatype _algs, modelica_fnptr _func)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _alg;
    for (tmpMeta1 = _algs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _alg = MMC_CAR(tmpMeta1);
      omc_NFAlgorithm_applyExp(threadData, _alg, ((modelica_fnptr) _func));
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFAlgorithm_applyExp(threadData_t *threadData, modelica_metatype _alg, modelica_fnptr _func)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _s;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _s = MMC_CAR(tmpMeta1);
      omc_NFStatement_applyExp(threadData, _s, ((modelica_fnptr) _func));
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFAlgorithm_apply(threadData_t *threadData, modelica_metatype _alg, modelica_fnptr _func)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _s;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _s = MMC_CAR(tmpMeta1);
      omc_NFStatement_apply(threadData, _s, ((modelica_fnptr) _func));
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFAlgorithm_applyList(threadData_t *threadData, modelica_metatype _algs, modelica_fnptr _func)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _alg;
    for (tmpMeta1 = _algs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _alg = MMC_CAR(tmpMeta1);
      {
        modelica_metatype _s;
        for (tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _s = MMC_CAR(tmpMeta2);
          omc_NFStatement_apply(threadData, _s, ((modelica_fnptr) _func));
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

