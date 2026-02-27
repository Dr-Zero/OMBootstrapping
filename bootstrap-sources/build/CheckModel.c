#include "omc_simulation_settings.h"
#include "CheckModel.h"
#define _OMC_LIT0_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,3,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "time"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,4,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,3) {&DAE_Subscript_WHOLEDIM__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,3) {&DAE_Expand_EXPAND__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,9,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,41,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT4,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "- CheckModel.statementOutputs failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,41,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,4) {&DAE_Expand_NOT__EXPAND__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,17,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT10,_OMC_LIT11,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "checkAndGetAlgorithmOutputs failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,35,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,1) {_OMC_LIT15,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "- CheckModel.countVarEqnSize failed on: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,40,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "CheckModel - start counting"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,27,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "CheckModel - end counting"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,25,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#include "util/modelica.h"

#include "CheckModel_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_CheckModel_simpleEquations(threadData_t *threadData, modelica_metatype _e1lst, modelica_metatype _e2lst, modelica_integer _isimpleEqnSize, modelica_metatype _ihs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CheckModel_simpleEquations(threadData_t *threadData, modelica_metatype _e1lst, modelica_metatype _e2lst, modelica_metatype _isimpleEqnSize, modelica_metatype _ihs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_simpleEquations,2,0) {(void*) boxptr_CheckModel_simpleEquations,0}};
#define boxvar_CheckModel_simpleEquations MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_simpleEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_getcr(threadData_t *threadData, modelica_metatype _crefs, modelica_metatype _hs, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_getcr,2,0) {(void*) boxptr_CheckModel_getcr,0}};
#define boxvar_CheckModel_getcr MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_getcr)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_traversingComponentRefFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_traversingComponentRefFinder,2,0) {(void*) boxptr_CheckModel_traversingComponentRefFinder,0}};
#define boxvar_CheckModel_traversingComponentRefFinder MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_traversingComponentRefFinder)
PROTECTED_FUNCTION_STATIC modelica_integer omc_CheckModel_simpleEquation(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype _ihs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CheckModel_simpleEquation(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype _ihs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_simpleEquation,2,0) {(void*) boxptr_CheckModel_simpleEquation,0}};
#define boxvar_CheckModel_simpleEquation MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_simpleEquation)
PROTECTED_FUNCTION_STATIC modelica_integer omc_CheckModel_countSimpleEqnSizeWork(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _ihs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CheckModel_countSimpleEqnSizeWork(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _ihs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_countSimpleEqnSizeWork,2,0) {(void*) boxptr_CheckModel_countSimpleEqnSizeWork,0}};
#define boxvar_CheckModel_countSimpleEqnSizeWork MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_countSimpleEqnSizeWork)
PROTECTED_FUNCTION_STATIC modelica_integer omc_CheckModel_countSimpleEqnSize(threadData_t *threadData, modelica_metatype _inEqns, modelica_integer _isimpleEqnSize, modelica_metatype _ihs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CheckModel_countSimpleEqnSize(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _isimpleEqnSize, modelica_metatype _ihs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_countSimpleEqnSize,2,0) {(void*) boxptr_CheckModel_countSimpleEqnSize,0}};
#define boxvar_CheckModel_countSimpleEqnSize MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_countSimpleEqnSize)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_statementOutputsCrefFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CheckModel_statementOutputsCrefFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_statementOutputsCrefFinder,2,0) {(void*) boxptr_CheckModel_statementOutputsCrefFinder,0}};
#define boxvar_CheckModel_statementOutputsCrefFinder MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_statementOutputsCrefFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_statementElseOutputs(threadData_t *threadData, modelica_metatype _inElseBranch, modelica_metatype _inCrefExpansion, modelica_metatype _iht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_statementElseOutputs,2,0) {(void*) boxptr_CheckModel_statementElseOutputs,0}};
#define boxvar_CheckModel_statementElseOutputs MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_statementElseOutputs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_statementOutputs(threadData_t *threadData, modelica_metatype _inStatement, modelica_metatype _inCrefExpansion, modelica_metatype _iht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_statementOutputs,2,0) {(void*) boxptr_CheckModel_statementOutputs,0}};
#define boxvar_CheckModel_statementOutputs MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_statementOutputs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_algorithmOutputs(threadData_t *threadData, modelica_metatype _inAlgorithm, modelica_metatype _inCrefExpansion);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_algorithmOutputs,2,0) {(void*) boxptr_CheckModel_algorithmOutputs,0}};
#define boxvar_CheckModel_algorithmOutputs MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_algorithmOutputs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_countVarEqnSize(threadData_t *threadData, modelica_metatype _element, modelica_metatype _inArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CheckModel_countVarEqnSize,2,0) {(void*) boxptr_CheckModel_countVarEqnSize,0}};
#define boxvar_CheckModel_countVarEqnSize MMC_REFSTRUCTLIT(boxvar_lit_CheckModel_countVarEqnSize)

PROTECTED_FUNCTION_STATIC modelica_integer omc_CheckModel_simpleEquations(threadData_t *threadData, modelica_metatype _e1lst, modelica_metatype _e2lst, modelica_integer _isimpleEqnSize, modelica_metatype _ihs)
{
  modelica_integer _osimpleEqnSize;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osimpleEqnSize has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _e1lst;
    tmp4_2 = _e2lst;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _r1 = NULL;
      modelica_metatype _r2 = NULL;
      modelica_integer _size;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _r1 has no default value.
      // _r2 has no default value.
      // _size has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _isimpleEqnSize;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _e1 = tmpMeta6;
          _r1 = tmpMeta7;
          _e2 = tmpMeta8;
          _r2 = tmpMeta9;
          /* Pattern matching succeeded */
          _size = omc_CheckModel_simpleEquation(threadData, _e1, _e2, _ihs);
          /* Tail recursive call */
          _e1lst = _r1;
          _e2lst = _r2;
          _isimpleEqnSize = _size + _isimpleEqnSize;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _osimpleEqnSize = tmp1;
  _return: OMC_LABEL_UNUSED
  return _osimpleEqnSize;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CheckModel_simpleEquations(threadData_t *threadData, modelica_metatype _e1lst, modelica_metatype _e2lst, modelica_metatype _isimpleEqnSize, modelica_metatype _ihs)
{
  modelica_integer tmp1;
  modelica_integer _osimpleEqnSize;
  modelica_metatype out_osimpleEqnSize;
  tmp1 = mmc_unbox_integer(_isimpleEqnSize);
  _osimpleEqnSize = omc_CheckModel_simpleEquations(threadData, _e1lst, _e2lst, tmp1, _ihs);
  out_osimpleEqnSize = mmc_mk_icon(_osimpleEqnSize);
  return out_osimpleEqnSize;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_getcr(threadData_t *threadData, modelica_metatype _crefs, modelica_metatype _hs, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _crefs;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _crlst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _rest has no default value.
      // _crlst has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _iAcc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _cr = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BaseHashSet_has(threadData, _cr, _hs)) goto tmp3_end;
          _crlst = omc_List_unionEltOnTrue(threadData, _cr, _iAcc, boxvar_ComponentReference_crefEqual);
          /* Tail recursive call */
          _crefs = _rest;
          _iAcc = _crlst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _rest = tmpMeta9;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _crefs = _rest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _oAcc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_traversingComponentRefFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _hs = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _crlst = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _hs has no default value.
      // _crefs has no default value.
      // _crlst has no default value.
      // _cr has no default value.
      // _e has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTpl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _e = tmp4_1;
          _cr = tmpMeta7;
          _hs = tmpMeta8;
          _crefs = tmpMeta9;
          /* Pattern matching succeeded */
          _crlst = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          _crefs = omc_CheckModel_getcr(threadData, _crlst, _hs, _crefs);
          tmpMeta10 = mmc_mk_box2(0, _hs, _crefs);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta10;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTpl;
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_CheckModel_simpleEquation(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype _ihs)
{
  modelica_integer _osimpleEqnSize;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osimpleEqnSize has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _e1;
    tmp4_2 = _e2;
    {
      modelica_metatype _ea1 = NULL;
      modelica_metatype _ea2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ea1 has no default value.
      // _ea2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 44; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
          tmp4 += 34; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,5,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto tmp3_end;
          
          tmp4 += 33; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          
          tmp4 += 32; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,5,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,6,2) == 0) goto tmp3_end;
          
          tmp4 += 32; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,6,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,6,2) == 0) goto tmp3_end;
          
          tmp4 += 31; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,6,2) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,0,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,6,2) == 0) goto tmp3_end;
          
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp17 = omc_Expression_isZero(threadData, _e2);
          if (1 /* true */ != tmp17) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_boolean tmp21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,6,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,7,1) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,6,2) == 0) goto tmp3_end;
          
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp21 = omc_Expression_isZero(threadData, _e2);
          if (1 /* true */ != tmp21) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_boolean tmp25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,6,2) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,1,1) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,6,2) == 0) goto tmp3_end;
          
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp25 = omc_Expression_isZero(threadData, _e2);
          if (1 /* true */ != tmp25) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_boolean tmp29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,6,2) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,8,1) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,6,2) == 0) goto tmp3_end;
          
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp29 = omc_Expression_isZero(threadData, _e2);
          if (1 /* true */ != tmp29) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_boolean tmp35;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,8,2) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,5,1) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,6,2) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,0,1) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,6,2) == 0) goto tmp3_end;
          
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp35 = omc_Expression_isZero(threadData, _e2);
          if (1 /* true */ != tmp35) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_boolean tmp41;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta36,8,2) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,6,1) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,6,2) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta39,7,1) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,6,2) == 0) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp41 = omc_Expression_isZero(threadData, _e2);
          if (1 /* true */ != tmp41) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_boolean tmp47;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,8,2) == 0) goto tmp3_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta43,5,1) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,6,2) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta45,1,1) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta46,6,2) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp47 = omc_Expression_isZero(threadData, _e2);
          if (1 /* true */ != tmp47) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_boolean tmp53;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta48,8,2) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta49,6,1) == 0) goto tmp3_end;
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta50,6,2) == 0) goto tmp3_end;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta51,8,1) == 0) goto tmp3_end;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta52,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp53 = omc_Expression_isZero(threadData, _e2);
          if (1 /* true */ != tmp53) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_boolean tmp57;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta54,6,2) == 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta55,0,1) == 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta56,6,2) == 0) goto tmp3_end;
          
          tmp4 += 21; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp57 = omc_Expression_isZero(threadData, _e1);
          if (1 /* true */ != tmp57) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_boolean tmp61;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta58,6,2) == 0) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta59,7,1) == 0) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta60,6,2) == 0) goto tmp3_end;
          
          tmp4 += 20; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp61 = omc_Expression_isZero(threadData, _e1);
          if (1 /* true */ != tmp61) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_boolean tmp65;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta62,6,2) == 0) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta63,1,1) == 0) goto tmp3_end;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta64,6,2) == 0) goto tmp3_end;
          
          tmp4 += 19; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp65 = omc_Expression_isZero(threadData, _e1);
          if (1 /* true */ != tmp65) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_boolean tmp69;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta66,6,2) == 0) goto tmp3_end;
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta67,8,1) == 0) goto tmp3_end;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta68,6,2) == 0) goto tmp3_end;
          
          tmp4 += 18; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp69 = omc_Expression_isZero(threadData, _e1);
          if (1 /* true */ != tmp69) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_boolean tmp75;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta70,8,2) == 0) goto tmp3_end;
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta70), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta71,5,1) == 0) goto tmp3_end;
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta70), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta72,6,2) == 0) goto tmp3_end;
          tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta73,0,1) == 0) goto tmp3_end;
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta74,6,2) == 0) goto tmp3_end;
          
          tmp4 += 17; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp75 = omc_Expression_isZero(threadData, _e1);
          if (1 /* true */ != tmp75) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_boolean tmp81;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta76,8,2) == 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta76), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta77,6,1) == 0) goto tmp3_end;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta76), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta78,6,2) == 0) goto tmp3_end;
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta79,7,1) == 0) goto tmp3_end;
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta80,6,2) == 0) goto tmp3_end;
          
          tmp4 += 16; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp81 = omc_Expression_isZero(threadData, _e1);
          if (1 /* true */ != tmp81) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_boolean tmp87;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta82,8,2) == 0) goto tmp3_end;
          tmpMeta83 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta82), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta83,5,1) == 0) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta82), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta84,6,2) == 0) goto tmp3_end;
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta85,1,1) == 0) goto tmp3_end;
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta86,6,2) == 0) goto tmp3_end;
          
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp87 = omc_Expression_isZero(threadData, _e1);
          if (1 /* true */ != tmp87) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_boolean tmp93;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,7,3) == 0) goto tmp3_end;
          tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta88,8,2) == 0) goto tmp3_end;
          tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta88), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta89,6,1) == 0) goto tmp3_end;
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta88), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta90,6,2) == 0) goto tmp3_end;
          tmpMeta91 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta91,8,1) == 0) goto tmp3_end;
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta92,6,2) == 0) goto tmp3_end;
          
          tmp4 += 14; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp93 = omc_Expression_isZero(threadData, _e1);
          if (1 /* true */ != tmp93) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          tmpMeta94 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta94,1,1) == 0) goto tmp3_end;
          tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta94), 2));
          if (3 != MMC_STRLEN(tmpMeta95) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta95)) != 0) goto tmp3_end;
          tmpMeta96 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (listEmpty(tmpMeta96)) goto tmp3_end;
          tmpMeta97 = MMC_CAR(tmpMeta96);
          tmpMeta98 = MMC_CDR(tmpMeta96);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta97,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta98)) goto tmp3_end;
          
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta99 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta99,1,1) == 0) goto tmp3_end;
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta99), 2));
          if (3 != MMC_STRLEN(tmpMeta100) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta100)) != 0) goto tmp3_end;
          tmpMeta101 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta101)) goto tmp3_end;
          tmpMeta102 = MMC_CAR(tmpMeta101);
          tmpMeta103 = MMC_CDR(tmpMeta101);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta102,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta103)) goto tmp3_end;
          
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e2));
          goto tmp3_done;
        }
        case 23: {
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta104 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta104,5,1) == 0) goto tmp3_end;
          tmpMeta105 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta105,13,3) == 0) goto tmp3_end;
          tmpMeta106 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta105), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta106,1,1) == 0) goto tmp3_end;
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta106), 2));
          if (3 != MMC_STRLEN(tmpMeta107) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta107)) != 0) goto tmp3_end;
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta105), 3));
          if (listEmpty(tmpMeta108)) goto tmp3_end;
          tmpMeta109 = MMC_CAR(tmpMeta108);
          tmpMeta110 = MMC_CDR(tmpMeta108);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta109,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta110)) goto tmp3_end;
          
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 24: {
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta111,6,1) == 0) goto tmp3_end;
          tmpMeta112 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta112,13,3) == 0) goto tmp3_end;
          tmpMeta113 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta112), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta113,1,1) == 0) goto tmp3_end;
          tmpMeta114 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 2));
          if (3 != MMC_STRLEN(tmpMeta114) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta114)) != 0) goto tmp3_end;
          tmpMeta115 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta112), 3));
          if (listEmpty(tmpMeta115)) goto tmp3_end;
          tmpMeta116 = MMC_CAR(tmpMeta115);
          tmpMeta117 = MMC_CDR(tmpMeta115);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta116,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta117)) goto tmp3_end;
          
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 25: {
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          modelica_metatype tmpMeta121;
          modelica_metatype tmpMeta122;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta118 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta118,5,1) == 0) goto tmp3_end;
          tmpMeta119 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta119,13,3) == 0) goto tmp3_end;
          tmpMeta120 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta119), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta120,1,1) == 0) goto tmp3_end;
          tmpMeta121 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta120), 2));
          if (3 != MMC_STRLEN(tmpMeta121) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta121)) != 0) goto tmp3_end;
          tmpMeta122 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta119), 3));
          if (listEmpty(tmpMeta122)) goto tmp3_end;
          tmpMeta123 = MMC_CAR(tmpMeta122);
          tmpMeta124 = MMC_CDR(tmpMeta122);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta123,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta124)) goto tmp3_end;
          
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e2));
          goto tmp3_done;
        }
        case 26: {
          modelica_metatype tmpMeta125;
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta125 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta125,6,1) == 0) goto tmp3_end;
          tmpMeta126 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta126,13,3) == 0) goto tmp3_end;
          tmpMeta127 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta126), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta127,1,1) == 0) goto tmp3_end;
          tmpMeta128 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta127), 2));
          if (3 != MMC_STRLEN(tmpMeta128) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta128)) != 0) goto tmp3_end;
          tmpMeta129 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta126), 3));
          if (listEmpty(tmpMeta129)) goto tmp3_end;
          tmpMeta130 = MMC_CAR(tmpMeta129);
          tmpMeta131 = MMC_CDR(tmpMeta129);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta130,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta131)) goto tmp3_end;
          
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e2));
          goto tmp3_done;
        }
        case 27: {
          modelica_metatype tmpMeta132;
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          modelica_metatype tmpMeta137;
          modelica_metatype tmpMeta138;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta132 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta132,5,1) == 0) goto tmp3_end;
          tmpMeta133 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta133,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          tmpMeta134 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta134,1,1) == 0) goto tmp3_end;
          tmpMeta135 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta134), 2));
          if (3 != MMC_STRLEN(tmpMeta135) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta135)) != 0) goto tmp3_end;
          tmpMeta136 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (listEmpty(tmpMeta136)) goto tmp3_end;
          tmpMeta137 = MMC_CAR(tmpMeta136);
          tmpMeta138 = MMC_CDR(tmpMeta136);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta137,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta138)) goto tmp3_end;
          
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 28: {
          modelica_metatype tmpMeta139;
          modelica_metatype tmpMeta140;
          modelica_metatype tmpMeta141;
          modelica_metatype tmpMeta142;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          modelica_metatype tmpMeta145;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta139 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta139,6,1) == 0) goto tmp3_end;
          tmpMeta140 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta140,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          tmpMeta141 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta141,1,1) == 0) goto tmp3_end;
          tmpMeta142 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta141), 2));
          if (3 != MMC_STRLEN(tmpMeta142) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta142)) != 0) goto tmp3_end;
          tmpMeta143 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (listEmpty(tmpMeta143)) goto tmp3_end;
          tmpMeta144 = MMC_CAR(tmpMeta143);
          tmpMeta145 = MMC_CDR(tmpMeta143);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta144,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta145)) goto tmp3_end;
          
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 29: {
          modelica_metatype tmpMeta146;
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          modelica_metatype tmpMeta149;
          modelica_metatype tmpMeta150;
          modelica_metatype tmpMeta151;
          modelica_metatype tmpMeta152;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta146 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta146,5,1) == 0) goto tmp3_end;
          tmpMeta147 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta147,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta148 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta148,1,1) == 0) goto tmp3_end;
          tmpMeta149 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta148), 2));
          if (3 != MMC_STRLEN(tmpMeta149) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta149)) != 0) goto tmp3_end;
          tmpMeta150 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta150)) goto tmp3_end;
          tmpMeta151 = MMC_CAR(tmpMeta150);
          tmpMeta152 = MMC_CDR(tmpMeta150);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta151,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta152)) goto tmp3_end;
          
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e2));
          goto tmp3_done;
        }
        case 30: {
          modelica_metatype tmpMeta153;
          modelica_metatype tmpMeta154;
          modelica_metatype tmpMeta155;
          modelica_metatype tmpMeta156;
          modelica_metatype tmpMeta157;
          modelica_metatype tmpMeta158;
          modelica_metatype tmpMeta159;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta153 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta153,6,1) == 0) goto tmp3_end;
          tmpMeta154 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta154,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta155 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta155,1,1) == 0) goto tmp3_end;
          tmpMeta156 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta155), 2));
          if (3 != MMC_STRLEN(tmpMeta156) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta156)) != 0) goto tmp3_end;
          tmpMeta157 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta157)) goto tmp3_end;
          tmpMeta158 = MMC_CAR(tmpMeta157);
          tmpMeta159 = MMC_CDR(tmpMeta157);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta158,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta159)) goto tmp3_end;
          
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e2));
          goto tmp3_done;
        }
        case 31: {
          modelica_metatype tmpMeta160;
          modelica_metatype tmpMeta161;
          modelica_metatype tmpMeta162;
          modelica_metatype tmpMeta163;
          modelica_metatype tmpMeta164;
          modelica_metatype tmpMeta165;
          modelica_metatype tmpMeta166;
          modelica_metatype tmpMeta167;
          modelica_metatype tmpMeta168;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta160 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta160,5,1) == 0) goto tmp3_end;
          tmpMeta161 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta161,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta162 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta162,5,1) == 0) goto tmp3_end;
          tmpMeta163 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta163,13,3) == 0) goto tmp3_end;
          tmpMeta164 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta163), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta164,1,1) == 0) goto tmp3_end;
          tmpMeta165 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta164), 2));
          if (3 != MMC_STRLEN(tmpMeta165) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta165)) != 0) goto tmp3_end;
          tmpMeta166 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta163), 3));
          if (listEmpty(tmpMeta166)) goto tmp3_end;
          tmpMeta167 = MMC_CAR(tmpMeta166);
          tmpMeta168 = MMC_CDR(tmpMeta166);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta167,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta168)) goto tmp3_end;
          
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 32: {
          modelica_metatype tmpMeta169;
          modelica_metatype tmpMeta170;
          modelica_metatype tmpMeta171;
          modelica_metatype tmpMeta172;
          modelica_metatype tmpMeta173;
          modelica_metatype tmpMeta174;
          modelica_metatype tmpMeta175;
          modelica_metatype tmpMeta176;
          modelica_metatype tmpMeta177;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta169 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta169,6,1) == 0) goto tmp3_end;
          tmpMeta170 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta170,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta171 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta171,6,1) == 0) goto tmp3_end;
          tmpMeta172 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta172,13,3) == 0) goto tmp3_end;
          tmpMeta173 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta172), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta173,1,1) == 0) goto tmp3_end;
          tmpMeta174 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta173), 2));
          if (3 != MMC_STRLEN(tmpMeta174) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta174)) != 0) goto tmp3_end;
          tmpMeta175 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta172), 3));
          if (listEmpty(tmpMeta175)) goto tmp3_end;
          tmpMeta176 = MMC_CAR(tmpMeta175);
          tmpMeta177 = MMC_CDR(tmpMeta175);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta176,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta177)) goto tmp3_end;
          
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 33: {
          modelica_metatype tmpMeta178;
          modelica_metatype tmpMeta179;
          modelica_metatype tmpMeta180;
          modelica_metatype tmpMeta181;
          modelica_metatype tmpMeta182;
          modelica_metatype tmpMeta183;
          modelica_metatype tmpMeta184;
          modelica_metatype tmpMeta185;
          modelica_metatype tmpMeta186;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta178 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta178,5,1) == 0) goto tmp3_end;
          tmpMeta179 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta179,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta180 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta180,5,1) == 0) goto tmp3_end;
          tmpMeta181 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta181,13,3) == 0) goto tmp3_end;
          tmpMeta182 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta181), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta182,1,1) == 0) goto tmp3_end;
          tmpMeta183 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta182), 2));
          if (3 != MMC_STRLEN(tmpMeta183) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta183)) != 0) goto tmp3_end;
          tmpMeta184 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta181), 3));
          if (listEmpty(tmpMeta184)) goto tmp3_end;
          tmpMeta185 = MMC_CAR(tmpMeta184);
          tmpMeta186 = MMC_CDR(tmpMeta184);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta185,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta186)) goto tmp3_end;
          
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e2));
          goto tmp3_done;
        }
        case 34: {
          modelica_metatype tmpMeta187;
          modelica_metatype tmpMeta188;
          modelica_metatype tmpMeta189;
          modelica_metatype tmpMeta190;
          modelica_metatype tmpMeta191;
          modelica_metatype tmpMeta192;
          modelica_metatype tmpMeta193;
          modelica_metatype tmpMeta194;
          modelica_metatype tmpMeta195;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta187 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta187,6,1) == 0) goto tmp3_end;
          tmpMeta188 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta188,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta189 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta189,6,1) == 0) goto tmp3_end;
          tmpMeta190 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta190,13,3) == 0) goto tmp3_end;
          tmpMeta191 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta190), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta191,1,1) == 0) goto tmp3_end;
          tmpMeta192 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta191), 2));
          if (3 != MMC_STRLEN(tmpMeta192) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta192)) != 0) goto tmp3_end;
          tmpMeta193 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta190), 3));
          if (listEmpty(tmpMeta193)) goto tmp3_end;
          tmpMeta194 = MMC_CAR(tmpMeta193);
          tmpMeta195 = MMC_CDR(tmpMeta193);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta194,6,2) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta195)) goto tmp3_end;
          
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e2));
          goto tmp3_done;
        }
        case 35: {
          modelica_boolean tmp196;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp196 = omc_Expression_isConst(threadData, _e2);
          if (1 /* true */ != tmp196) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 36: {
          modelica_boolean tmp197;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp197 = omc_Expression_isConst(threadData, _e1);
          if (1 /* true */ != tmp197) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e2));
          goto tmp3_done;
        }
        case 37: {
          modelica_metatype tmpMeta198;
          modelica_metatype tmpMeta199;
          modelica_boolean tmp200;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta198 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta198,5,1) == 0) goto tmp3_end;
          tmpMeta199 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta199,6,2) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp200 = omc_Expression_isConst(threadData, _e2);
          if (1 /* true */ != tmp200) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 38: {
          modelica_metatype tmpMeta201;
          modelica_metatype tmpMeta202;
          modelica_boolean tmp203;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta201 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta201,6,1) == 0) goto tmp3_end;
          tmpMeta202 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta202,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp203 = omc_Expression_isConst(threadData, _e2);
          if (1 /* true */ != tmp203) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 39: {
          modelica_metatype tmpMeta204;
          modelica_metatype tmpMeta205;
          modelica_boolean tmp206;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta204 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta204,5,1) == 0) goto tmp3_end;
          tmpMeta205 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta205,6,2) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp206 = omc_Expression_isConst(threadData, _e1);
          if (1 /* true */ != tmp206) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e2));
          goto tmp3_done;
        }
        case 40: {
          modelica_metatype tmpMeta207;
          modelica_metatype tmpMeta208;
          modelica_boolean tmp209;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,2) == 0) goto tmp3_end;
          tmpMeta207 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta207,6,1) == 0) goto tmp3_end;
          tmpMeta208 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta208,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp209 = omc_Expression_isConst(threadData, _e1);
          if (1 /* true */ != tmp209) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e2));
          goto tmp3_done;
        }
        case 41: {
          modelica_boolean tmp210;
          modelica_boolean tmp211;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp210 = (omc_Expression_isArray(threadData, _e1) || omc_Expression_isMatrix(threadData, _e1));
          if (1 /* true */ != tmp210) goto goto_2;

          /* Pattern-matching assignment */
          tmp211 = (omc_Expression_isArray(threadData, _e2) || omc_Expression_isMatrix(threadData, _e2));
          if (1 /* true */ != tmp211) goto goto_2;

          _ea1 = omc_Expression_flattenArrayExpToList(threadData, _e1);

          _ea2 = omc_Expression_flattenArrayExpToList(threadData, _e2);
          tmp1 = omc_CheckModel_simpleEquations(threadData, _ea1, _ea2, ((modelica_integer) 0), _ihs);
          goto tmp3_done;
        }
        case 42: {
          modelica_metatype tmpMeta212;
          modelica_metatype tmpMeta213;
          modelica_metatype tmpMeta214;
          modelica_metatype tmpMeta215;
          modelica_metatype tmpMeta216;
          modelica_metatype tmpMeta217;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta216 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta217 = mmc_mk_box2(0, _ihs, tmpMeta216);
          omc_Expression_traverseExpBottomUp(threadData, omc_Expression_expSub(threadData, _e1, _e2), boxvar_CheckModel_traversingComponentRefFinder, tmpMeta217, &tmpMeta212);
          tmpMeta213 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta212), 2));
          if (listEmpty(tmpMeta213)) goto goto_2;
          tmpMeta214 = MMC_CAR(tmpMeta213);
          tmpMeta215 = MMC_CDR(tmpMeta213);
          if (!listEmpty(tmpMeta215)) goto goto_2;
          tmp1 = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e1));
          goto tmp3_done;
        }
        case 43: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
      if (++tmp4 < 44) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _osimpleEqnSize = tmp1;
  _return: OMC_LABEL_UNUSED
  return _osimpleEqnSize;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CheckModel_simpleEquation(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2, modelica_metatype _ihs)
{
  modelica_integer _osimpleEqnSize;
  modelica_metatype out_osimpleEqnSize;
  _osimpleEqnSize = omc_CheckModel_simpleEquation(threadData, _e1, _e2, _ihs);
  out_osimpleEqnSize = mmc_mk_icon(_osimpleEqnSize);
  return out_osimpleEqnSize;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_CheckModel_countSimpleEqnSizeWork(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _ihs)
{
  modelica_integer _osimpleEqnSize;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osimpleEqnSize has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEqns;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _tp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _cr has no default value.
      // _tp has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e1 = tmpMeta6;
          _e2 = tmpMeta7;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_CheckModel_simpleEquation(threadData, _e1, _e2, _ihs);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta8;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _tp = omc_ComponentReference_crefTypeConsiderSubs(threadData, _cr);
          tmp1 = omc_Expression_sizeOf(threadData, _tp);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _cr = tmpMeta9;
          _e2 = tmpMeta10;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1 = omc_Expression_crefExp(threadData, _cr);
          tmp1 = omc_CheckModel_simpleEquation(threadData, _e1, _e2, _ihs);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e1 = tmpMeta11;
          _e2 = tmpMeta12;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_CheckModel_simpleEquation(threadData, _e1, _e2, _ihs);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e1 = tmpMeta13;
          _e2 = tmpMeta14;
          /* Pattern matching succeeded */
          tmp1 = omc_CheckModel_simpleEquation(threadData, _e1, _e2, _ihs);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
      if (++tmp4 < 6) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _osimpleEqnSize = tmp1;
  _return: OMC_LABEL_UNUSED
  return _osimpleEqnSize;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CheckModel_countSimpleEqnSizeWork(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _ihs)
{
  modelica_integer _osimpleEqnSize;
  modelica_metatype out_osimpleEqnSize;
  _osimpleEqnSize = omc_CheckModel_countSimpleEqnSizeWork(threadData, _inEqns, _ihs);
  out_osimpleEqnSize = mmc_mk_icon(_osimpleEqnSize);
  return out_osimpleEqnSize;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_CheckModel_countSimpleEqnSize(threadData_t *threadData, modelica_metatype _inEqns, modelica_integer _isimpleEqnSize, modelica_metatype _ihs)
{
  modelica_integer _osimpleEqnSize;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osimpleEqnSize has no default value.
  _osimpleEqnSize = mmc_unbox_integer(omc_List_applyAndFold1(threadData, _inEqns, boxvar_intAdd, boxvar_CheckModel_countSimpleEqnSizeWork, _ihs, mmc_mk_integer(((modelica_integer) 0))));
  _return: OMC_LABEL_UNUSED
  return _osimpleEqnSize;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CheckModel_countSimpleEqnSize(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _isimpleEqnSize, modelica_metatype _ihs)
{
  modelica_integer tmp1;
  modelica_integer _osimpleEqnSize;
  modelica_metatype out_osimpleEqnSize;
  tmp1 = mmc_unbox_integer(_isimpleEqnSize);
  _osimpleEqnSize = omc_CheckModel_countSimpleEqnSize(threadData, _inEqns, tmp1, _ihs);
  out_osimpleEqnSize = mmc_mk_icon(_osimpleEqnSize);
  return out_osimpleEqnSize;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_statementOutputsCrefFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outTpl = NULL;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cont has no default value.
  // _outTpl has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _ht = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _first_cref = NULL;
      modelica_metatype _crlst = NULL;
      modelica_metatype _expand = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _exp has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _ht has no default value.
      // _cr has no default value.
      // _first_cref has no default value.
      // _crlst has no default value.
      // _expand has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 12; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,0) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTpl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (4 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT1), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          
          _e = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTpl;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,9,4) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,17,1) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTpl;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,9,4) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,3,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _e = tmp4_1;
          _cr = tmpMeta12;
          _expand = tmpMeta15;
          _ht = tmpMeta16;
          /* Pattern matching succeeded */
          _cr = omc_ComponentReference_crefStripSubs(threadData, _cr);

          _crlst = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          _ht = omc_List_fold(threadData, _crlst, boxvar_BaseHashSet_add, _ht);
          tmpMeta17 = mmc_mk_box2(0, _expand, _ht);
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = tmpMeta17;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,1,0) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _e = tmp4_1;
          _cr = tmpMeta18;
          _expand = tmpMeta19;
          _ht = tmpMeta20;
          /* Pattern matching succeeded */
          tmpMeta21 = mmc_mk_cons(_cr, MMC_REFSTRUCTLIT(mmc_nil));
          _ht = omc_List_fold(threadData, tmpMeta21, boxvar_BaseHashSet_add, _ht);
          tmpMeta22 = mmc_mk_box2(0, _expand, _ht);
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = tmpMeta22;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _e = tmp4_1;
          _cr = tmpMeta23;
          _expand = tmpMeta24;
          _ht = tmpMeta25;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cr = omc_ComponentReference_crefStripSubsExceptModelSubs(threadData, _cr);

          _first_cref = omc_ComponentReference_crefArrayGetFirstCref(threadData, _cr);

          if((!omc_BaseHashSet_has(threadData, _first_cref, _ht)))
          {
            _crlst = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

            _ht = omc_List_fold(threadData, _crlst, boxvar_BaseHashSet_add, _ht);
          }
          tmpMeta26 = mmc_mk_box2(0, _expand, _ht);
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = tmpMeta26;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,2) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _e = tmp4_1;
          _exp = tmpMeta27;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          omc_Expression_traverseExpTopDown(threadData, _exp, boxvar_CheckModel_statementOutputsCrefFinder, _inTpl ,&_outTpl);
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _outTpl;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,22,3) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _e = tmp4_1;
          _exp = tmpMeta28;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          omc_Expression_traverseExpTopDown(threadData, _exp, boxvar_CheckModel_statementOutputsCrefFinder, _inTpl ,&_outTpl);
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _outTpl;
          goto tmp3_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,5) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTpl;
          goto tmp3_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,4) == 0) goto tmp3_end;
          
          _e = tmp4_1;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTpl;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta29;
          _e2 = tmpMeta30;
          /* Pattern matching succeeded */
          omc_Expression_traverseExpTopDown(threadData, _e1, boxvar_CheckModel_statementOutputsCrefFinder, _inTpl ,&_outTpl);

          omc_Expression_traverseExpTopDown(threadData, _e2, boxvar_CheckModel_statementOutputsCrefFinder, _outTpl ,&_outTpl);
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _outTpl;
          goto tmp3_done;
        }
        case 11: {
          
          _e = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _inTpl;
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
      if (++tmp4 < 12) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _cont = tmp1_c1;
  _outTpl = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CheckModel_statementOutputsCrefFinder(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_CheckModel_statementOutputsCrefFinder(threadData, _inExp, _inTpl, &_cont, out_outTpl);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTpl; tuple<DAE.Expand, tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<DAE.ComponentRef>>>, #Integer, #Integer, tuple<.HashSet.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashSet.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashSet.FuncCrefStr<function>(DAE.ComponentRef cr) => String>>> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_statementElseOutputs(threadData_t *threadData, modelica_metatype _inElseBranch, modelica_metatype _inCrefExpansion, modelica_metatype _iht)
{
  modelica_metatype _oht = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oht has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElseBranch;
    {
      modelica_metatype _stmts = NULL;
      modelica_metatype _elseBranch = NULL;
      modelica_metatype _ht = NULL;
      int tmp4;
      // _stmts has no default value.
      // _elseBranch has no default value.
      // _ht has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iht;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _stmts = tmpMeta5;
          _elseBranch = tmpMeta6;
          /* Pattern matching succeeded */
          _ht = omc_List_fold1(threadData, _stmts, boxvar_CheckModel_statementOutputs, _inCrefExpansion, _iht);
          /* Tail recursive call */
          _inElseBranch = _elseBranch;
          _iht = _ht;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _stmts = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold1(threadData, _stmts, boxvar_CheckModel_statementOutputs, _inCrefExpansion, _iht);
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
  _oht = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oht;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_statementOutputs(threadData_t *threadData, modelica_metatype _inStatement, modelica_metatype _inCrefExpansion, modelica_metatype _iht)
{
  modelica_metatype _oht = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oht has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inStatement;
    {
      modelica_metatype _ht = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _crlst = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _stmt = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _elsebranch = NULL;
      modelica_metatype _expl = NULL;
      modelica_metatype _tp = NULL;
      modelica_string _iteratorName = NULL;
      modelica_string _str = NULL;
      modelica_metatype _subs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ht has no default value.
      // _cr has no default value.
      // _crlst has no default value.
      // _e has no default value.
      // _exp1 has no default value.
      // _stmt has no default value.
      // _stmts has no default value.
      // _elsebranch has no default value.
      // _expl has no default value.
      // _tp has no default value.
      // _iteratorName has no default value.
      // _str has no default value.
      // _subs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 19; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _exp1 = tmpMeta6;
          tmp4 += 17; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta9 = mmc_mk_box2(0, _inCrefExpansion, _iht);
          omc_Expression_traverseExpTopDown(threadData, _exp1, boxvar_CheckModel_statementOutputsCrefFinder, tmpMeta9, &tmpMeta7);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _ht = tmpMeta8;
          tmpMeta1 = _ht;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _expl = tmpMeta10;
          tmp4 += 16; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta13 = mmc_mk_box2(0, _inCrefExpansion, _iht);
          omc_Expression_traverseExpListTopDown(threadData, _expl, boxvar_CheckModel_statementOutputsCrefFinder, tmpMeta13, &tmpMeta11);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          _ht = tmpMeta12;
          tmpMeta1 = _ht;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _exp1 = tmpMeta14;
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cr = omc_Expression_expCref(threadData, _exp1);

          _subs = omc_ComponentReference_crefLastSubs(threadData, _cr);

          if((!listEmpty(_subs)))
          {
            _subs = omc_List_fill(threadData, _OMC_LIT2, listLength(_subs));

            _cr = omc_ComponentReference_crefSetLastSubs(threadData, _cr, _subs);
          }

          _crlst = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);
          tmpMeta1 = omc_List_fold(threadData, _crlst, boxvar_BaseHashSet_add, _iht);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,4) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _stmts = tmpMeta15;
          _elsebranch = tmpMeta16;
          tmp4 += 14; /* Pattern matching succeeded; we may skip some cases if we fail */
          _ht = omc_List_fold1(threadData, _stmts, boxvar_CheckModel_statementOutputs, _inCrefExpansion, _iht);
          tmpMeta1 = omc_CheckModel_statementElseOutputs(threadData, _elsebranch, _inCrefExpansion, _ht);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,6) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _tp = tmpMeta17;
          _iteratorName = tmpMeta18;
          _e = tmpMeta19;
          _stmts = tmpMeta20;
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          _cr = omc_ComponentReference_makeCrefIdent(threadData, _iteratorName, _tp, tmpMeta21);

          tmpMeta22 = mmc_mk_box2(0, _cr, _e);
          tmpMeta23 = mmc_mk_box2(0, boxvar_Expression_replaceCref, tmpMeta22);
          _stmts = omc_DAEUtil_traverseDAEEquationsStmts(threadData, _stmts, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta23, NULL);
          tmpMeta1 = omc_List_fold1(threadData, _stmts, boxvar_CheckModel_statementOutputs, _OMC_LIT3, _iht);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,7) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _tp = tmpMeta24;
          _iteratorName = tmpMeta25;
          _e = tmpMeta26;
          _stmts = tmpMeta27;
          tmp4 += 12; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          _cr = omc_ComponentReference_makeCrefIdent(threadData, _iteratorName, _tp, tmpMeta28);

          tmpMeta29 = mmc_mk_box2(0, _cr, _e);
          tmpMeta30 = mmc_mk_box2(0, boxvar_Expression_replaceCref, tmpMeta29);
          _stmts = omc_DAEUtil_traverseDAEEquationsStmts(threadData, _stmts, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta30, NULL);
          tmpMeta1 = omc_List_fold1(threadData, _stmts, boxvar_CheckModel_statementOutputs, _OMC_LIT3, _iht);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _stmts = tmpMeta31;
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_List_fold1(threadData, _stmts, boxvar_CheckModel_statementOutputs, _inCrefExpansion, _iht);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,6) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (!optionNone(tmpMeta33)) goto tmp3_end;
          
          _stmts = tmpMeta32;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_List_fold1(threadData, _stmts, boxvar_CheckModel_statementOutputs, _inCrefExpansion, _iht);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,6) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (optionNone(tmpMeta35)) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 1));
          
          _stmts = tmpMeta34;
          _stmt = tmpMeta36;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          _ht = omc_List_fold1(threadData, _stmts, boxvar_CheckModel_statementOutputs, _inCrefExpansion, _iht);
          tmpMeta1 = omc_CheckModel_statementOutputs(threadData, _stmt, _inCrefExpansion, _ht);
          goto tmp3_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,4) == 0) goto tmp3_end;
          
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iht;
          goto tmp3_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,2) == 0) goto tmp3_end;
          
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iht;
          goto tmp3_done;
        }
        case 11: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,3) == 0) goto tmp3_end;
          
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iht;
          goto tmp3_done;
        }
        case 12: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,2) == 0) goto tmp3_end;
          
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iht;
          goto tmp3_done;
        }
        case 13: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,1) == 0) goto tmp3_end;
          
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iht;
          goto tmp3_done;
        }
        case 14: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iht;
          goto tmp3_done;
        }
        case 15: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,1) == 0) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iht;
          goto tmp3_done;
        }
        case 16: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,3) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iht;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,2) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _stmts = tmpMeta37;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold1(threadData, _stmts, boxvar_CheckModel_statementOutputs, _inCrefExpansion, _iht);
          goto tmp3_done;
        }
        case 18: {
          modelica_boolean tmp38;
          modelica_metatype tmpMeta39;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp38 = omc_Flags_isSet(threadData, _OMC_LIT7);
          if (1 /* true */ != tmp38) goto goto_2;

          _str = omc_DAEDump_ppStatementStr(threadData, _inStatement);

          tmpMeta39 = stringAppend(_OMC_LIT8,_str);
          omc_Debug_traceln(threadData, tmpMeta39);
          goto goto_2;
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
      if (++tmp4 < 19) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oht = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oht;
}

DLLDirection
modelica_metatype omc_CheckModel_algorithmStatementListOutputs(threadData_t *threadData, modelica_metatype _inStmts, modelica_metatype _inCrefExpansion)
{
  modelica_metatype _outCrefLst = NULL;
  modelica_metatype _hs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCrefLst has no default value.
  // _hs has no default value.
  _hs = omc_HashSet_emptyHashSet(threadData);

  _hs = omc_List_fold1(threadData, _inStmts, boxvar_CheckModel_statementOutputs, _inCrefExpansion, _hs);

  _outCrefLst = omc_BaseHashSet_hashSetList(threadData, _hs);
  _return: OMC_LABEL_UNUSED
  return _outCrefLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_algorithmOutputs(threadData_t *threadData, modelica_metatype _inAlgorithm, modelica_metatype _inCrefExpansion)
{
  modelica_metatype _outCrefLst = NULL;
  modelica_metatype _stmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCrefLst has no default value.
  // _stmts has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inAlgorithm;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _stmts = tmpMeta2;

  _outCrefLst = omc_CheckModel_algorithmStatementListOutputs(threadData, _stmts, _inCrefExpansion);
  _return: OMC_LABEL_UNUSED
  return _outCrefLst;
}

DLLDirection
modelica_boolean omc_CheckModel_isCrefListAlgorithmOutput(threadData_t *threadData, modelica_metatype _crefList, modelica_metatype _inAlgorithm, modelica_metatype _inSource, modelica_metatype _inCrefExpansionRule)
{
  modelica_boolean _outResult;
  modelica_metatype _ht = NULL;
  modelica_metatype _algOutCrefs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = 0 /* false */;
  _ht = omc_HashSet_emptyHashSet(threadData);
  // _algOutCrefs has no default value.
  _algOutCrefs = omc_CheckModel_checkAndGetAlgorithmOutputs(threadData, _inAlgorithm, _inSource, _inCrefExpansionRule);

  _ht = omc_List_fold(threadData, _algOutCrefs, boxvar_BaseHashSet_add, _ht);

  {
    modelica_metatype _cr;
    for (tmpMeta1 = _crefList; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _cr = MMC_CAR(tmpMeta1);
      if((!omc_BaseHashSet_has(threadData, _cr, _ht)))
      {
        goto _return;
      }
    }
  }

  _outResult = 1 /* true */;
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_CheckModel_isCrefListAlgorithmOutput(threadData_t *threadData, modelica_metatype _crefList, modelica_metatype _inAlgorithm, modelica_metatype _inSource, modelica_metatype _inCrefExpansionRule)
{
  modelica_boolean _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_CheckModel_isCrefListAlgorithmOutput(threadData, _crefList, _inAlgorithm, _inSource, _inCrefExpansionRule);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_metatype omc_CheckModel_checkAndGetAlgorithmOutputs(threadData_t *threadData, modelica_metatype _inAlgorithm, modelica_metatype _inSource, modelica_metatype _inCrefExpansionRule)
{
  modelica_metatype _outCrefLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCrefLst has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inSource;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_CheckModel_algorithmOutputs(threadData, _inAlgorithm, _inCrefExpansionRule);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (omc_PrefixUtil_hasSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSource), 4))))?omc_CheckModel_algorithmOutputs(threadData, _inAlgorithm, _OMC_LIT9):omc_CheckModel_algorithmOutputs(threadData, _inAlgorithm, _inCrefExpansionRule));
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT14, _OMC_LIT16);
          goto goto_2;
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outCrefLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outCrefLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CheckModel_countVarEqnSize(threadData_t *threadData, modelica_metatype _element, modelica_metatype _inArg)
{
  modelica_metatype _outArg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outArg has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _source = NULL;
      modelica_integer _varSize;
      modelica_integer _eqnSize;
      modelica_integer _size;
      modelica_metatype _eqns = NULL;
      modelica_metatype _daeElts = NULL;
      modelica_metatype _hs = NULL;
      modelica_metatype _alg = NULL;
      modelica_metatype _crlst = NULL;
      modelica_metatype _tp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _cr has no default value.
      // _source has no default value.
      // _varSize has no default value.
      // _eqnSize has no default value.
      // _size has no default value.
      // _eqns has no default value.
      // _daeElts has no default value.
      // _hs has no default value.
      // _alg has no default value.
      // _crlst has no default value.
      // _tp has no default value.
      tmp4 = 0;
      for (; tmp4 < 34; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,9,4) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,17,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta11 = _inArg;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 4));
          _varSize = tmp13  /* pattern as ty=Integer */;
          _eqnSize = tmp15  /* pattern as ty=Integer */;
          _eqns = tmpMeta16;
          _hs = tmpMeta17;

          _size = omc_Expression_sizeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 7))));

          _varSize = _varSize + _size;

          if((omc_DAEUtil_isInput(threadData, _element) && omc_DAEUtil_isPublicVar(threadData, _element)))
          {
            _eqnSize = _eqnSize + _size;
          }
          else
          {
            if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 8)))))
            {
              _eqnSize = _eqnSize + _size;

              tmpMeta19 = mmc_mk_box4(6, &DAE_Element_EQUATION__desc, omc_Expression_crefExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2)))), omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 8)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 11))));
              tmpMeta18 = mmc_mk_cons(tmpMeta19, _eqns);
              _eqns = tmpMeta18;
            }

            _hs = omc_BaseHashSet_add(threadData, _cr, _hs);
          }
          tmpMeta20 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize), _eqns, _hs);
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _e = tmpMeta21;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta22 = _inArg;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 1));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 3));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 4));
          _varSize = tmp24  /* pattern as ty=Integer */;
          _eqnSize = tmp26  /* pattern as ty=Integer */;
          _eqns = tmpMeta27;
          _hs = tmpMeta28;

          _size = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e));
          tmpMeta29 = mmc_mk_cons(_element, _eqns);
          tmpMeta30 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize + _size), tmpMeta29, _hs);
          tmpMeta1 = tmpMeta30;
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_integer tmp34;
          modelica_metatype tmpMeta35;
          modelica_integer tmp36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta31;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta32 = _inArg;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
          tmp34 = mmc_unbox_integer(tmpMeta33);
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          tmp36 = mmc_unbox_integer(tmpMeta35);
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 3));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 4));
          _varSize = tmp34  /* pattern as ty=Integer */;
          _eqnSize = tmp36  /* pattern as ty=Integer */;
          _eqns = tmpMeta37;
          _hs = tmpMeta38;

          _tp = omc_ComponentReference_crefTypeConsiderSubs(threadData, _cr);

          _size = omc_Expression_sizeOf(threadData, _tp);
          tmpMeta39 = mmc_mk_cons(_element, _eqns);
          tmpMeta40 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize + _size), tmpMeta39, _hs);
          tmpMeta1 = tmpMeta40;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_integer tmp44;
          modelica_metatype tmpMeta45;
          modelica_integer tmp46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta41;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta42 = _inArg;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 1));
          tmp44 = mmc_unbox_integer(tmpMeta43);
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 2));
          tmp46 = mmc_unbox_integer(tmpMeta45);
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 3));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 4));
          _varSize = tmp44  /* pattern as ty=Integer */;
          _eqnSize = tmp46  /* pattern as ty=Integer */;
          _eqns = tmpMeta47;
          _hs = tmpMeta48;

          _tp = omc_ComponentReference_crefTypeConsiderSubs(threadData, _cr);

          _size = omc_Expression_sizeOf(threadData, _tp);
          tmpMeta49 = mmc_mk_cons(_element, _eqns);
          tmpMeta50 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize + _size), tmpMeta49, _hs);
          tmpMeta1 = tmpMeta50;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_integer tmp54;
          modelica_metatype tmpMeta55;
          modelica_integer tmp56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _e = tmpMeta51;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta52 = _inArg;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 1));
          tmp54 = mmc_unbox_integer(tmpMeta53);
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 2));
          tmp56 = mmc_unbox_integer(tmpMeta55);
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 3));
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 4));
          _varSize = tmp54  /* pattern as ty=Integer */;
          _eqnSize = tmp56  /* pattern as ty=Integer */;
          _eqns = tmpMeta57;
          _hs = tmpMeta58;

          _size = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, _e));
          tmpMeta59 = mmc_mk_cons(_element, _eqns);
          tmpMeta60 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize + _size), tmpMeta59, _hs);
          tmpMeta1 = tmpMeta60;
          goto tmp3_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_integer tmp63;
          modelica_metatype tmpMeta64;
          modelica_integer tmp65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta61 = _inArg;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 1));
          tmp63 = mmc_unbox_integer(tmpMeta62);
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 2));
          tmp65 = mmc_unbox_integer(tmpMeta64);
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 3));
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 4));
          _varSize = tmp63  /* pattern as ty=Integer */;
          _eqnSize = tmp65  /* pattern as ty=Integer */;
          _eqns = tmpMeta66;
          _hs = tmpMeta67;

          _size = omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 3)))));
          tmpMeta68 = mmc_mk_cons(_element, _eqns);
          tmpMeta69 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize + _size), tmpMeta68, _hs);
          tmpMeta1 = tmpMeta69;
          goto tmp3_done;
        }
        case 12: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_integer tmp73;
          modelica_metatype tmpMeta74;
          modelica_integer tmp75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_integer tmp82;
          modelica_metatype tmpMeta83;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _daeElts = tmpMeta70;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta71 = _inArg;
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta71), 1));
          tmp73 = mmc_unbox_integer(tmpMeta72);
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta71), 2));
          tmp75 = mmc_unbox_integer(tmpMeta74);
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta71), 3));
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta71), 4));
          _varSize = tmp73  /* pattern as ty=Integer */;
          _eqnSize = tmp75  /* pattern as ty=Integer */;
          _eqns = tmpMeta76;
          _hs = tmpMeta77;

          /* Pattern-matching assignment */
          tmpMeta78 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta79 = mmc_mk_box4(0, mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), tmpMeta78, _hs);
          tmpMeta80 = omc_List_fold(threadData, _daeElts, boxvar_CheckModel_countVarEqnSize, tmpMeta79);
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta80), 2));
          tmp82 = mmc_unbox_integer(tmpMeta81);
          _size = tmp82  /* pattern as ty=Integer */;
          tmpMeta83 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize + _size), _eqns, _hs);
          tmpMeta1 = tmpMeta83;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_integer tmp86;
          modelica_metatype tmpMeta87;
          modelica_integer tmp88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_integer tmp95;
          modelica_metatype tmpMeta96;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta84 = _inArg;
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 1));
          tmp86 = mmc_unbox_integer(tmpMeta85);
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 2));
          tmp88 = mmc_unbox_integer(tmpMeta87);
          tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 3));
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 4));
          _varSize = tmp86  /* pattern as ty=Integer */;
          _eqnSize = tmp88  /* pattern as ty=Integer */;
          _eqns = tmpMeta89;
          _hs = tmpMeta90;

          /* Pattern-matching assignment */
          tmpMeta91 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta92 = mmc_mk_box4(0, mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), tmpMeta91, _hs);
          tmpMeta93 = omc_List_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 7))), boxvar_CheckModel_countVarEqnSize, tmpMeta92);
          tmpMeta94 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta93), 2));
          tmp95 = mmc_unbox_integer(tmpMeta94);
          _size = tmp95  /* pattern as ty=Integer */;

          _size = (_size) * (omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 6))))));
          tmpMeta96 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize + _size), _eqns, _hs);
          tmpMeta1 = tmpMeta96;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_integer tmp99;
          modelica_metatype tmpMeta100;
          modelica_integer tmp101;
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_integer tmp108;
          modelica_metatype tmpMeta109;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta97 = _inArg;
          tmpMeta98 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta97), 1));
          tmp99 = mmc_unbox_integer(tmpMeta98);
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta97), 2));
          tmp101 = mmc_unbox_integer(tmpMeta100);
          tmpMeta102 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta97), 3));
          tmpMeta103 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta97), 4));
          _varSize = tmp99  /* pattern as ty=Integer */;
          _eqnSize = tmp101  /* pattern as ty=Integer */;
          _eqns = tmpMeta102;
          _hs = tmpMeta103;

          /* Pattern-matching assignment */
          tmpMeta104 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta105 = mmc_mk_box4(0, mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), tmpMeta104, _hs);
          tmpMeta106 = omc_List_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 7))), boxvar_CheckModel_countVarEqnSize, tmpMeta105);
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta106), 2));
          tmp108 = mmc_unbox_integer(tmpMeta107);
          _size = tmp108  /* pattern as ty=Integer */;

          _size = (_size) * (omc_Expression_sizeOf(threadData, omc_Expression_typeof(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 6))))));
          tmpMeta109 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize + _size), _eqns, _hs);
          tmpMeta1 = tmpMeta109;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_integer tmp114;
          modelica_metatype tmpMeta115;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,4) == 0) goto tmp3_end;
          tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta110)) goto tmp3_end;
          tmpMeta111 = MMC_CAR(tmpMeta110);
          tmpMeta112 = MMC_CDR(tmpMeta110);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta111,3,1) == 0) goto tmp3_end;
          tmpMeta113 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta111), 2));
          tmp114 = mmc_unbox_integer(tmpMeta113);
          if (0 /* false */ != tmp114) goto tmp3_end;
          if (!listEmpty(tmpMeta112)) goto tmp3_end;
          tmpMeta115 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!listEmpty(tmpMeta115)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          modelica_integer tmp121;
          modelica_metatype tmpMeta122;
          modelica_integer tmp123;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_integer tmp130;
          modelica_metatype tmpMeta131;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,4) == 0) goto tmp3_end;
          tmpMeta116 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta116)) goto tmp3_end;
          tmpMeta117 = MMC_CAR(tmpMeta116);
          tmpMeta118 = MMC_CDR(tmpMeta116);
          
          _daeElts = tmpMeta117;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta119 = _inArg;
          tmpMeta120 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta119), 1));
          tmp121 = mmc_unbox_integer(tmpMeta120);
          tmpMeta122 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta119), 2));
          tmp123 = mmc_unbox_integer(tmpMeta122);
          tmpMeta124 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta119), 3));
          tmpMeta125 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta119), 4));
          _varSize = tmp121  /* pattern as ty=Integer */;
          _eqnSize = tmp123  /* pattern as ty=Integer */;
          _eqns = tmpMeta124;
          _hs = tmpMeta125;

          /* Pattern-matching assignment */
          tmpMeta126 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta127 = mmc_mk_box4(0, mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), tmpMeta126, _hs);
          tmpMeta128 = omc_List_fold(threadData, _daeElts, boxvar_CheckModel_countVarEqnSize, tmpMeta127);
          tmpMeta129 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta128), 2));
          tmp130 = mmc_unbox_integer(tmpMeta129);
          _size = tmp130  /* pattern as ty=Integer */;
          tmpMeta131 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize + _size), _eqns, _hs);
          tmpMeta1 = tmpMeta131;
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta132;
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_integer tmp136;
          modelica_metatype tmpMeta137;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,4) == 0) goto tmp3_end;
          tmpMeta132 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta132)) goto tmp3_end;
          tmpMeta133 = MMC_CAR(tmpMeta132);
          tmpMeta134 = MMC_CDR(tmpMeta132);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta133,3,1) == 0) goto tmp3_end;
          tmpMeta135 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta133), 2));
          tmp136 = mmc_unbox_integer(tmpMeta135);
          if (0 /* false */ != tmp136) goto tmp3_end;
          if (!listEmpty(tmpMeta134)) goto tmp3_end;
          tmpMeta137 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!listEmpty(tmpMeta137)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 19: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          modelica_metatype tmpMeta140;
          modelica_metatype tmpMeta141;
          modelica_integer tmp142;
          modelica_metatype tmpMeta143;
          modelica_integer tmp144;
          modelica_metatype tmpMeta145;
          modelica_metatype tmpMeta146;
          modelica_metatype tmpMeta147;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,2) == 0) goto tmp3_end;
          tmpMeta138 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta139 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _alg = tmpMeta138;
          _source = tmpMeta139;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta140 = _inArg;
          tmpMeta141 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta140), 1));
          tmp142 = mmc_unbox_integer(tmpMeta141);
          tmpMeta143 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta140), 2));
          tmp144 = mmc_unbox_integer(tmpMeta143);
          tmpMeta145 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta140), 3));
          tmpMeta146 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta140), 4));
          _varSize = tmp142  /* pattern as ty=Integer */;
          _eqnSize = tmp144  /* pattern as ty=Integer */;
          _eqns = tmpMeta145;
          _hs = tmpMeta146;

          _crlst = omc_CheckModel_checkAndGetAlgorithmOutputs(threadData, _alg, _source, _OMC_LIT3);

          _size = listLength(_crlst);
          tmpMeta147 = mmc_mk_box4(0, mmc_mk_integer(_varSize), mmc_mk_integer(_eqnSize + _size), _eqns, _hs);
          tmpMeta1 = tmpMeta147;
          goto tmp3_done;
        }
        case 21: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta148;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,4) == 0) goto tmp3_end;
          tmpMeta148 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _daeElts = tmpMeta148;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _daeElts, boxvar_CheckModel_countVarEqnSize, _inArg);
          goto tmp3_done;
        }
        case 23: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,24,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 24: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,20,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 25: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 26: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,22,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 27: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,23,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 28: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,25,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 29: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,26,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 30: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,27,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inArg;
          goto tmp3_done;
        }
        case 31: {
          modelica_metatype tmpMeta149;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,29,2) == 0) goto tmp3_end;
          tmpMeta149 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _daeElts = tmpMeta149;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _daeElts, boxvar_CheckModel_countVarEqnSize, _inArg);
          goto tmp3_done;
        }
        case 32: {
          modelica_metatype tmpMeta150;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,30,2) == 0) goto tmp3_end;
          tmpMeta150 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _daeElts = tmpMeta150;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _daeElts, boxvar_CheckModel_countVarEqnSize, _inArg);
          goto tmp3_done;
        }
        case 33: {
          modelica_boolean tmp151;
          modelica_metatype tmpMeta152;
          modelica_metatype tmpMeta153;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp151 = omc_Flags_isSet(threadData, _OMC_LIT7);
          if (1 /* true */ != tmp151) goto goto_2;

          tmpMeta152 = mmc_mk_cons(_element, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta153 = stringAppend(_OMC_LIT17,omc_DAEDump_dumpElementsStr(threadData, tmpMeta152));
          omc_Debug_traceln(threadData, tmpMeta153);
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
  _outArg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outArg;
}

DLLDirection
modelica_integer omc_CheckModel_checkModel(threadData_t *threadData, modelica_metatype _inDAELst, modelica_integer *out_eqnSize, modelica_integer *out_simpleEqnSize)
{
  modelica_integer _varSize;
  modelica_integer _eqnSize;
  modelica_integer _simpleEqnSize;
  modelica_metatype _eqns = NULL;
  modelica_metatype _lst = NULL;
  modelica_metatype _hs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varSize has no default value.
  // _eqnSize has no default value.
  // _simpleEqnSize has no default value.
  // _eqns has no default value.
  // _lst has no default value.
  // _hs has no default value.
  omc_ExecStat_execStat(threadData, _OMC_LIT18);

  /* Pattern-matching assignment */
  tmpMeta1 = _inDAELst;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _lst = tmpMeta2;

  _hs = omc_HashSet_emptyHashSet(threadData);

  /* Pattern-matching assignment */
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = mmc_mk_box4(0, mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), tmpMeta3, _hs);
  tmpMeta5 = omc_List_fold(threadData, _lst, boxvar_CheckModel_countVarEqnSize, tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
  tmp9 = mmc_unbox_integer(tmpMeta8);
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 4));
  _varSize = tmp7  /* pattern as ty=Integer */;
  _eqnSize = tmp9  /* pattern as ty=Integer */;
  _eqns = tmpMeta10;
  _hs = tmpMeta11;

  _simpleEqnSize = omc_CheckModel_countSimpleEqnSize(threadData, _eqns, ((modelica_integer) 0), _hs);

  omc_ExecStat_execStat(threadData, _OMC_LIT19);
  _return: OMC_LABEL_UNUSED
  if (out_eqnSize) { *out_eqnSize = _eqnSize; }
  if (out_simpleEqnSize) { *out_simpleEqnSize = _simpleEqnSize; }
  return _varSize;
}
modelica_metatype boxptr_CheckModel_checkModel(threadData_t *threadData, modelica_metatype _inDAELst, modelica_metatype *out_eqnSize, modelica_metatype *out_simpleEqnSize)
{
  modelica_integer _eqnSize;
  modelica_integer _simpleEqnSize;
  modelica_integer _varSize;
  modelica_metatype out_varSize;
  _varSize = omc_CheckModel_checkModel(threadData, _inDAELst, &_eqnSize, &_simpleEqnSize);
  out_varSize = mmc_mk_icon(_varSize);
  if (out_eqnSize) { *out_eqnSize = mmc_mk_icon(_eqnSize); }
  if (out_simpleEqnSize) { *out_simpleEqnSize = mmc_mk_icon(_simpleEqnSize); }
  return out_varSize;
}

