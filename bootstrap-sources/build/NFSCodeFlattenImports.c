#include "omc_simulation_settings.h"
#include "NFSCodeFlattenImports.h"
#define _OMC_LIT0_data "SOME"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,4,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,17,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Unknown redeclare in NFSCodeFlattenImports.flattenRedeclare"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,59,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,1) {_OMC_LIT6,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "polymorphic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,11,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,9,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,41,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "- NFSCodeFlattenImports.flattenClass failed on "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,47,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data " in "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,4,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#include "util/modelica.h"

#include "NFSCodeFlattenImports_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenExpTraverserExit(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenExpTraverserExit,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenExpTraverserExit,0}};
#define boxvar_NFSCodeFlattenImports_flattenExpTraverserExit MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenExpTraverserExit)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenExpTraverserEnter(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenExpTraverserEnter,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenExpTraverserEnter,0}};
#define boxvar_NFSCodeFlattenImports_flattenExpTraverserEnter MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenExpTraverserEnter)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenOptExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inEnv, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenOptExp,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenOptExp,0}};
#define boxvar_NFSCodeFlattenImports_flattenOptExp MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenOptExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inEnv, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenExp,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenExp,0}};
#define boxvar_NFSCodeFlattenImports_flattenExp MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenSubscript(threadData_t *threadData, modelica_metatype _inSub, modelica_metatype _inEnv, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenSubscript,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenSubscript,0}};
#define boxvar_NFSCodeFlattenImports_flattenSubscript MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenSubscript)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenRedeclare(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenRedeclare,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenRedeclare,0}};
#define boxvar_NFSCodeFlattenImports_flattenRedeclare MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenRedeclare)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenSubMod(threadData_t *threadData, modelica_metatype _inSubMod, modelica_metatype _inEnv, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenSubMod,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenSubMod,0}};
#define boxvar_NFSCodeFlattenImports_flattenSubMod MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenSubMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenModOptExp(threadData_t *threadData, modelica_metatype _inOptExp, modelica_metatype _inEnv, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenModOptExp,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenModOptExp,0}};
#define boxvar_NFSCodeFlattenImports_flattenModOptExp MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenModOptExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenModifier(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _inEnv, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenModifier,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenModifier,0}};
#define boxvar_NFSCodeFlattenImports_flattenModifier MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenModifier)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenStatementTraverser(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype *out_env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenStatementTraverser,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenStatementTraverser,0}};
#define boxvar_NFSCodeFlattenImports_flattenStatementTraverser MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenStatementTraverser)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenStatement(threadData_t *threadData, modelica_metatype _inStatement, modelica_metatype _inEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenStatement,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenStatement,0}};
#define boxvar_NFSCodeFlattenImports_flattenStatement MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenStatement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenAlgorithm(threadData_t *threadData, modelica_metatype _inAlgorithm, modelica_metatype _inEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenAlgorithm,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenAlgorithm,0}};
#define boxvar_NFSCodeFlattenImports_flattenAlgorithm MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenAlgorithm)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenConstraints(threadData_t *threadData, modelica_metatype _inConstraints, modelica_metatype _inEnv, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenConstraints,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenConstraints,0}};
#define boxvar_NFSCodeFlattenImports_flattenConstraints MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenConstraints)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_traverseExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_traverseExp,2,0) {(void*) boxptr_NFSCodeFlattenImports_traverseExp,0}};
#define boxvar_NFSCodeFlattenImports_traverseExp MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_traverseExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenEquationTraverser(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype *out_env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenEquationTraverser,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenEquationTraverser,0}};
#define boxvar_NFSCodeFlattenImports_flattenEquationTraverser MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenEquationTraverser)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenEquation(threadData_t *threadData, modelica_metatype _inEquation, modelica_metatype _inEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenEquation,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenEquation,0}};
#define boxvar_NFSCodeFlattenImports_flattenEquation MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenExtends(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenExtends,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenExtends,0}};
#define boxvar_NFSCodeFlattenImports_flattenExtends MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenExtends)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenTypeSpec(threadData_t *threadData, modelica_metatype _inTypeSpec, modelica_metatype _inEnv, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenTypeSpec,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenTypeSpec,0}};
#define boxvar_NFSCodeFlattenImports_flattenTypeSpec MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenTypeSpec)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenAttributes(threadData_t *threadData, modelica_metatype _inAttributes, modelica_metatype _inEnv, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenAttributes,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenAttributes,0}};
#define boxvar_NFSCodeFlattenImports_flattenAttributes MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenAttributes)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenComponent(threadData_t *threadData, modelica_metatype _inComponent, modelica_metatype _inEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenComponent,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenComponent,0}};
#define boxvar_NFSCodeFlattenImports_flattenComponent MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenComponent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenElement(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inEnv, modelica_metatype *out_outEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenElement,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenElement,0}};
#define boxvar_NFSCodeFlattenImports_flattenElement MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenElement)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeFlattenImports_isNotImport(threadData_t *threadData, modelica_metatype _inElement);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeFlattenImports_isNotImport(threadData_t *threadData, modelica_metatype _inElement);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_isNotImport,2,0) {(void*) boxptr_NFSCodeFlattenImports_isNotImport,0}};
#define boxvar_NFSCodeFlattenImports_isNotImport MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_isNotImport)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenDerivedClassDef(threadData_t *threadData, modelica_metatype _inClassDef, modelica_metatype _inEnv, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenDerivedClassDef,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenDerivedClassDef,0}};
#define boxvar_NFSCodeFlattenImports_flattenDerivedClassDef MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenDerivedClassDef)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenClassDef(threadData_t *threadData, modelica_metatype _inClassDef, modelica_metatype _inEnv, modelica_metatype _inInfo, modelica_metatype *out_outEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenClassDef,2,0) {(void*) boxptr_NFSCodeFlattenImports_flattenClassDef,0}};
#define boxvar_NFSCodeFlattenImports_flattenClassDef MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlattenImports_flattenClassDef)

DLLDirection
modelica_metatype omc_NFSCodeFlattenImports_flattenComponentRefSubs(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outCref = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCref has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inCref;
    {
      modelica_string _name = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _subs = NULL;
      int tmp4;
      // _name has no default value.
      // _cref has no default value.
      // _subs has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _name = tmpMeta5;
          _subs = tmpMeta6;
          /* Pattern matching succeeded */
          _subs = omc_List_map2(threadData, _subs, boxvar_NFSCodeFlattenImports_flattenSubscript, _inEnv, _inInfo);
          tmpMeta7 = mmc_mk_box3(5, &Absyn_ComponentRef_CREF__IDENT__desc, _name, _subs);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _name = tmpMeta8;
          _subs = tmpMeta9;
          _cref = tmpMeta10;
          /* Pattern matching succeeded */
          _subs = omc_List_map2(threadData, _subs, boxvar_NFSCodeFlattenImports_flattenSubscript, _inEnv, _inInfo);

          _cref = omc_NFSCodeFlattenImports_flattenComponentRefSubs(threadData, _cref, _inEnv, _inInfo);
          tmpMeta11 = mmc_mk_box4(4, &Absyn_ComponentRef_CREF__QUAL__desc, _name, _subs, _cref);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _cref = tmpMeta12;
          /* Pattern matching succeeded */
          _cref = omc_NFSCodeFlattenImports_flattenComponentRefSubs(threadData, _cref, _inEnv, _inInfo);
          tmpMeta1 = omc_AbsynUtil_crefMakeFullyQualified(threadData, _cref);
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
  _outCref = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outCref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenExpTraverserExit(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTuple;
    {
      modelica_metatype _env = NULL;
      modelica_metatype _info = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _env has no default value.
      // _info has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _env = tmpMeta9;
          _info = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box2(0, _env, _info);
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,5) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (listEmpty(tmpMeta13)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmpMeta13);
          tmpMeta15 = MMC_CDR(tmpMeta13);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,2,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _env = tmpMeta15;
          _info = tmpMeta17;
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_box2(0, _env, _info);
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = tmpMeta18;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTuple;
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
  _outExp = tmpMeta[0+0];
  _outTuple = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenExpTraverserEnter(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTuple;
    {
      modelica_metatype _env = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _args = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _iters = NULL;
      modelica_metatype _info = NULL;
      modelica_metatype _tup = NULL;
      modelica_metatype _iterType = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _env has no default value.
      // _cref has no default value.
      // _args has no default value.
      // _exp has no default value.
      // _iters has no default value.
      // _info has no default value.
      // _tup has no default value.
      // _iterType has no default value.
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _cref = tmpMeta6;
          _tup = tmp4_2;
          _env = tmpMeta7;
          _info = tmpMeta8;
          /* Pattern matching succeeded */
          _cref = omc_NFSCodeLookup_lookupComponentRef(threadData, _cref, _env, _info);
          tmpMeta9 = mmc_mk_box2(5, &Absyn_Exp_CREF__desc, _cref);
          tmpMeta[0+0] = tmpMeta9;
          tmpMeta[0+1] = _tup;
          goto tmp3_done;
        }
        case 1: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 4));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _cref = tmpMeta10;
          _exp = tmpMeta12;
          _iterType = tmpMeta13;
          _iters = tmpMeta14;
          _env = tmpMeta15;
          _info = tmpMeta16;
          /* Pattern matching succeeded */
          _cref = omc_NFSCodeLookup_lookupComponentRef(threadData, _cref, _env, _info);

          _env = omc_NFSCodeEnv_extendEnvWithIterators(threadData, _iters, omc_System_tmpTickIndex(threadData, ((modelica_integer) 2)), _env);

          _exp = omc_NFSCodeFlattenImports_flattenExp(threadData, _exp, _env, _info);
          tmpMeta17 = mmc_mk_box4(4, &Absyn_FunctionArgs_FOR__ITER__FARG__desc, _exp, _iterType, _iters);
          tmpMeta18 = mmc_mk_box4(14, &Absyn_Exp_CALL__desc, _cref, tmpMeta17, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp), 4))));
          tmpMeta19 = mmc_mk_box2(0, _env, _info);
          tmpMeta[0+0] = tmpMeta18;
          tmpMeta[0+1] = tmpMeta19;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,3) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,2,2) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (4 != MMC_STRLEN(tmpMeta21) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmpMeta21)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTuple;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _cref = tmpMeta22;
          _args = tmpMeta23;
          _tup = tmp4_2;
          _env = tmpMeta24;
          _info = tmpMeta25;
          /* Pattern matching succeeded */
          _cref = omc_NFSCodeLookup_lookupComponentRef(threadData, _cref, _env, _info);
          tmpMeta26 = mmc_mk_box4(14, &Absyn_Exp_CALL__desc, _cref, _args, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp), 4))));
          tmpMeta[0+0] = tmpMeta26;
          tmpMeta[0+1] = _tup;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,2) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _cref = tmpMeta27;
          _args = tmpMeta28;
          _tup = tmp4_2;
          _env = tmpMeta29;
          _info = tmpMeta30;
          /* Pattern matching succeeded */
          _cref = omc_NFSCodeLookup_lookupComponentRef(threadData, _cref, _env, _info);
          tmpMeta31 = mmc_mk_box3(15, &Absyn_Exp_PARTEVALFUNCTION__desc, _cref, _args);
          tmpMeta[0+0] = tmpMeta31;
          tmpMeta[0+1] = _tup;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,5) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _exp = tmp4_1;
          _env = tmpMeta32;
          _info = tmpMeta33;
          /* Pattern matching succeeded */
          _env = omc_NFSCodeEnv_extendEnvWithMatch(threadData, _exp, omc_System_tmpTickIndex(threadData, ((modelica_integer) 2)), _env);
          tmpMeta34 = mmc_mk_box2(0, _env, _info);
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = tmpMeta34;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTuple;
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
  _outExp = tmpMeta[0+0];
  _outTuple = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenOptExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
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
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _exp = tmpMeta6;
          /* Pattern matching succeeded */
          _exp = omc_NFSCodeFlattenImports_flattenExp(threadData, _exp, _inEnv, _inInfo);
          tmpMeta1 = mmc_mk_some(_exp);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inExp;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  tmpMeta1 = mmc_mk_box2(0, _inEnv, _inInfo);
  _outExp = omc_AbsynUtil_traverseExpBidir(threadData, _inExp, boxvar_NFSCodeFlattenImports_flattenExpTraverserEnter, boxvar_NFSCodeFlattenImports_flattenExpTraverserExit, tmpMeta1, NULL);
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenSubscript(threadData_t *threadData, modelica_metatype _inSub, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outSub = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSub has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inSub;
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
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _exp = tmpMeta6;
          /* Pattern matching succeeded */
          _exp = omc_NFSCodeFlattenImports_flattenExp(threadData, _exp, _inEnv, _inInfo);
          tmpMeta7 = mmc_mk_box2(4, &Absyn_Subscript_SUBSCRIPT__desc, _exp);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _inSub;
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
  _outSub = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outSub;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenRedeclare(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inEnv)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_string _name = NULL;
      modelica_metatype _prefixes = NULL;
      modelica_metatype _pp = NULL;
      modelica_metatype _ep = NULL;
      modelica_metatype _res = NULL;
      modelica_metatype _info = NULL;
      modelica_metatype _cdef = NULL;
      modelica_metatype _cdef2 = NULL;
      modelica_metatype _cmt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _prefixes has no default value.
      // _pp has no default value.
      // _ep has no default value.
      // _res has no default value.
      // _info has no default value.
      // _cdef has no default value.
      // _cdef2 has no default value.
      // _cmt has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          _name = tmpMeta6;
          _prefixes = tmpMeta7;
          _ep = tmpMeta8;
          _pp = tmpMeta9;
          _res = tmpMeta10;
          _cdef = tmpMeta11;
          _cmt = tmpMeta12;
          _info = tmpMeta13;
          /* Pattern matching succeeded */
          _cdef2 = omc_NFSCodeFlattenImports_flattenDerivedClassDef(threadData, _cdef, _inEnv, _info);
          tmpMeta14 = mmc_mk_box9(5, &SCode_Element_CLASS__desc, _name, _prefixes, _ep, _pp, _res, _cdef2, _cmt, _info);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inElement;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSCodeFlattenImports_flattenComponent(threadData, _inElement, _inEnv);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT5, _OMC_LIT7);
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
  _outElement = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outElement;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenSubMod(threadData_t *threadData, modelica_metatype _inSubMod, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outSubMod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSubMod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inSubMod;
    {
      modelica_string _ident = NULL;
      modelica_metatype _mod = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ident has no default value.
      // _mod has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _ident = tmpMeta6;
          _mod = tmpMeta7;
          /* Pattern matching succeeded */
          _mod = omc_NFSCodeFlattenImports_flattenModifier(threadData, _mod, _inEnv, _inInfo);
          tmpMeta8 = mmc_mk_box3(3, &SCode_SubMod_NAMEMOD__desc, _ident, _mod);
          tmpMeta1 = tmpMeta8;
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
  _outSubMod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outSubMod;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenModOptExp(threadData_t *threadData, modelica_metatype _inOptExp, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outOptExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOptExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inOptExp;
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
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _exp = tmpMeta6;
          /* Pattern matching succeeded */
          _exp = omc_NFSCodeFlattenImports_flattenExp(threadData, _exp, _inEnv, _inInfo);
          tmpMeta1 = mmc_mk_some(_exp);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inOptExp;
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
  _outOptExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outOptExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenModifier(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outMod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inMod;
    {
      modelica_metatype _fp = NULL;
      modelica_metatype _ep = NULL;
      modelica_metatype _sub_mods = NULL;
      modelica_metatype _opt_exp = NULL;
      modelica_metatype _el = NULL;
      modelica_metatype _info = NULL;
      modelica_metatype _cmt = NULL;
      int tmp4;
      // _fp has no default value.
      // _ep has no default value.
      // _sub_mods has no default value.
      // _opt_exp has no default value.
      // _el has no default value.
      // _info has no default value.
      // _cmt has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          _fp = tmpMeta5;
          _ep = tmpMeta6;
          _sub_mods = tmpMeta7;
          _opt_exp = tmpMeta8;
          _cmt = tmpMeta9;
          _info = tmpMeta10;
          /* Pattern matching succeeded */
          _opt_exp = omc_NFSCodeFlattenImports_flattenModOptExp(threadData, _opt_exp, _inEnv, _inInfo);

          _sub_mods = omc_List_map2(threadData, _sub_mods, boxvar_NFSCodeFlattenImports_flattenSubMod, _inEnv, _inInfo);
          tmpMeta11 = mmc_mk_box7(3, &SCode_Mod_MOD__desc, _fp, _ep, _sub_mods, _opt_exp, _cmt, _info);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _fp = tmpMeta12;
          _ep = tmpMeta13;
          _el = tmpMeta14;
          /* Pattern matching succeeded */
          _el = omc_NFSCodeFlattenImports_flattenRedeclare(threadData, _el, _inEnv);
          tmpMeta15 = mmc_mk_box4(4, &SCode_Mod_REDECL__desc, _fp, _ep, _el);
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inMod;
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
  _outMod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outMod;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenStatementTraverser(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype *out_env)
{
  modelica_metatype _stmt = NULL;
  modelica_metatype _env = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmt = __omcQ_24in_5Fstmt;
  _env = __omcQ_24in_5Fenv;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      modelica_string _iter_name = NULL;
      modelica_metatype _info = NULL;
      int tmp4;
      // _iter_name has no default value.
      // _info has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _iter_name = tmpMeta5;
          _info = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box4(3, &Absyn_ForIterator_ITERATOR__desc, _iter_name, mmc_mk_none(), mmc_mk_none());
          tmpMeta7 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
          _env = omc_NFSCodeEnv_extendEnvWithIterators(threadData, tmpMeta7, omc_System_tmpTickIndex(threadData, ((modelica_integer) 2)), _env);

          tmpMeta9 = mmc_mk_box2(0, _env, _info);
          _stmt = omc_SCodeUtil_mapFoldStatementExps(threadData, _stmt, boxvar_NFSCodeFlattenImports_traverseExp, tmpMeta9, NULL);
          tmpMeta[0+0] = _stmt;
          tmpMeta[0+1] = _env;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _iter_name = tmpMeta10;
          _info = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box4(3, &Absyn_ForIterator_ITERATOR__desc, _iter_name, mmc_mk_none(), mmc_mk_none());
          tmpMeta12 = mmc_mk_cons(tmpMeta13, MMC_REFSTRUCTLIT(mmc_nil));
          _env = omc_NFSCodeEnv_extendEnvWithIterators(threadData, tmpMeta12, omc_System_tmpTickIndex(threadData, ((modelica_integer) 2)), _env);

          tmpMeta14 = mmc_mk_box2(0, _env, _info);
          _stmt = omc_SCodeUtil_mapFoldStatementExps(threadData, _stmt, boxvar_NFSCodeFlattenImports_traverseExp, tmpMeta14, NULL);
          tmpMeta[0+0] = _stmt;
          tmpMeta[0+1] = _env;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          _info = omc_SCodeUtil_getStatementInfo(threadData, _stmt);

          tmpMeta15 = mmc_mk_box2(0, _env, _info);
          _stmt = omc_SCodeUtil_mapFoldStatementExps(threadData, _stmt, boxvar_NFSCodeFlattenImports_traverseExp, tmpMeta15, NULL);
          tmpMeta[0+0] = _stmt;
          tmpMeta[0+1] = _env;
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
  _stmt = tmpMeta[0+0];
  _env = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_env) { *out_env = _env; }
  return _stmt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenStatement(threadData_t *threadData, modelica_metatype _inStatement, modelica_metatype _inEnv)
{
  modelica_metatype _outStatement = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStatement has no default value.
  _outStatement = omc_SCodeUtil_mapFoldStatements(threadData, _inStatement, boxvar_NFSCodeFlattenImports_flattenStatementTraverser, _inEnv, NULL);
  _return: OMC_LABEL_UNUSED
  return _outStatement;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenAlgorithm(threadData_t *threadData, modelica_metatype _inAlgorithm, modelica_metatype _inEnv)
{
  modelica_metatype _outAlgorithm = NULL;
  modelica_metatype _statements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAlgorithm has no default value.
  // _statements has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inAlgorithm;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _statements = tmpMeta2;

  _statements = omc_List_map1(threadData, _statements, boxvar_NFSCodeFlattenImports_flattenStatement, _inEnv);

  tmpMeta3 = mmc_mk_box2(3, &SCode_AlgorithmSection_ALGORITHM__desc, _statements);
  _outAlgorithm = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _outAlgorithm;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenConstraints(threadData_t *threadData, modelica_metatype _inConstraints, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outConstraints = NULL;
  modelica_metatype _exps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outConstraints has no default value.
  // _exps has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inConstraints;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _exps = tmpMeta2;

  _exps = omc_List_map2(threadData, _exps, boxvar_NFSCodeFlattenImports_flattenExp, _inEnv, _inInfo);

  tmpMeta3 = mmc_mk_box2(3, &SCode_ConstraintSection_CONSTRAINTS__desc, _exps);
  _outConstraints = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _outConstraints;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_traverseExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  _outExp = omc_AbsynUtil_traverseExpBidir(threadData, _inExp, boxvar_NFSCodeFlattenImports_flattenExpTraverserEnter, boxvar_NFSCodeFlattenImports_flattenExpTraverserExit, _inTuple ,&_outTuple);
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenEquationTraverser(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype __omcQ_24in_5Fenv, modelica_metatype *out_env)
{
  modelica_metatype _eq = NULL;
  modelica_metatype _env = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  _env = __omcQ_24in_5Fenv;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_string _iter_name = NULL;
      modelica_metatype _info = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _cmt = NULL;
      modelica_metatype _crefExp = NULL;
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _iter_name has no default value.
      // _info has no default value.
      // _cref has no default value.
      // _cmt has no default value.
      // _crefExp has no default value.
      // _exp has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _iter_name = tmpMeta6;
          _info = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box4(3, &Absyn_ForIterator_ITERATOR__desc, _iter_name, mmc_mk_none(), mmc_mk_none());
          tmpMeta8 = mmc_mk_cons(tmpMeta9, MMC_REFSTRUCTLIT(mmc_nil));
          _env = omc_NFSCodeEnv_extendEnvWithIterators(threadData, tmpMeta8, omc_System_tmpTickIndex(threadData, ((modelica_integer) 2)), _env);

          tmpMeta10 = mmc_mk_box2(0, _env, _info);
          _eq = omc_SCodeUtil_mapFoldEquationExps(threadData, _eq, boxvar_NFSCodeFlattenImports_traverseExp, tmpMeta10, NULL);
          tmpMeta[0+0] = _eq;
          tmpMeta[0+1] = _env;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,4) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _crefExp = tmpMeta11;
          _cref = tmpMeta12;
          _exp = tmpMeta13;
          _cmt = tmpMeta14;
          _info = tmpMeta15;
          /* Pattern matching succeeded */
          _cref = omc_NFSCodeLookup_lookupComponentRef(threadData, _cref, _env, _info);

          tmpMeta16 = mmc_mk_box5(11, &SCode_Equation_EQ__REINIT__desc, _crefExp, _exp, _cmt, _info);
          _eq = tmpMeta16;

          tmpMeta17 = mmc_mk_box2(0, _env, _info);
          _eq = omc_SCodeUtil_mapFoldEquationExps(threadData, _eq, boxvar_NFSCodeFlattenImports_traverseExp, tmpMeta17, NULL);
          tmpMeta[0+0] = _eq;
          tmpMeta[0+1] = _env;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          _info = omc_SCodeUtil_getEquationInfo(threadData, _eq);

          tmpMeta18 = mmc_mk_box2(0, _env, _info);
          _eq = omc_SCodeUtil_mapFoldEquationExps(threadData, _eq, boxvar_NFSCodeFlattenImports_traverseExp, tmpMeta18, NULL);
          tmpMeta[0+0] = _eq;
          tmpMeta[0+1] = _env;
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
  _eq = tmpMeta[0+0];
  _env = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_env) { *out_env = _env; }
  return _eq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenEquation(threadData_t *threadData, modelica_metatype _inEquation, modelica_metatype _inEnv)
{
  modelica_metatype _outEquation = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquation has no default value.
  _outEquation = omc_SCodeUtil_mapFoldEquations(threadData, _inEquation, boxvar_NFSCodeFlattenImports_flattenEquationTraverser, _inEnv, NULL);
  _return: OMC_LABEL_UNUSED
  return _outEquation;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenExtends(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inEnv)
{
  modelica_metatype _outExtends = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _ann = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype _env = NULL;
  modelica_metatype _vis = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExtends has no default value.
  // _path has no default value.
  // _mod has no default value.
  // _ann has no default value.
  // _info has no default value.
  // _env has no default value.
  // _vis has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inExtends;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  _path = tmpMeta2;
  _vis = tmpMeta3;
  _mod = tmpMeta4;
  _ann = tmpMeta5;
  _info = tmpMeta6;

  _env = omc_NFSCodeEnv_removeExtendsFromLocalScope(threadData, _inEnv);

  omc_NFSCodeLookup_lookupBaseClassName(threadData, _path, _env, _info ,&_path ,NULL);

  _mod = omc_NFSCodeFlattenImports_flattenModifier(threadData, _mod, _inEnv, _info);

  tmpMeta7 = mmc_mk_box6(4, &SCode_Element_EXTENDS__desc, _path, _vis, _mod, _ann, _info);
  _outExtends = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _outExtends;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenTypeSpec(threadData_t *threadData, modelica_metatype _inTypeSpec, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outTypeSpec = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTypeSpec has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTypeSpec;
    {
      modelica_metatype _path = NULL;
      modelica_metatype _ad = NULL;
      modelica_metatype _tys = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _path has no default value.
      // _ad has no default value.
      // _tys has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _path = tmpMeta6;
          _ad = tmpMeta7;
          /* Pattern matching succeeded */
          omc_NFSCodeLookup_lookupClassName(threadData, _path, _inEnv, _inInfo ,&_path ,NULL);
          tmpMeta8 = mmc_mk_box3(3, &Absyn_TypeSpec_TPATH__desc, _path, _ad);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (11 != MMC_STRLEN(tmpMeta10) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmpMeta10)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTypeSpec;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _path = tmpMeta11;
          _tys = tmpMeta12;
          _ad = tmpMeta13;
          /* Pattern matching succeeded */
          _tys = omc_List_map2(threadData, _tys, boxvar_NFSCodeFlattenImports_flattenTypeSpec, _inEnv, _inInfo);
          tmpMeta14 = mmc_mk_box4(4, &Absyn_TypeSpec_TCOMPLEX__desc, _path, _tys, _ad);
          tmpMeta1 = tmpMeta14;
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
  _outTypeSpec = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTypeSpec;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenAttributes(threadData_t *threadData, modelica_metatype _inAttributes, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outAttributes = NULL;
  modelica_metatype _ad = NULL;
  modelica_metatype _ct = NULL;
  modelica_metatype _prl = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _dir = NULL;
  modelica_metatype _isf = NULL;
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
  // _outAttributes has no default value.
  // _ad has no default value.
  // _ct has no default value.
  // _prl has no default value.
  // _var has no default value.
  // _dir has no default value.
  // _isf has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inAttributes;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  _ad = tmpMeta2;
  _ct = tmpMeta3;
  _prl = tmpMeta4;
  _var = tmpMeta5;
  _dir = tmpMeta6;
  _isf = tmpMeta7;

  _ad = omc_List_map2(threadData, _ad, boxvar_NFSCodeFlattenImports_flattenSubscript, _inEnv, _inInfo);

  tmpMeta8 = mmc_mk_box7(3, &SCode_Attributes_ATTR__desc, _ad, _ct, _prl, _var, _dir, _isf);
  _outAttributes = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _outAttributes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenComponent(threadData_t *threadData, modelica_metatype _inComponent, modelica_metatype _inEnv)
{
  modelica_metatype _outComponent = NULL;
  modelica_string _name = NULL;
  modelica_metatype _io = NULL;
  modelica_metatype _prefixes = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype _type_spec = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _cmt = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _cc = NULL;
  modelica_metatype _info = NULL;
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
  // _outComponent has no default value.
  // _name has no default value.
  // _io has no default value.
  // _prefixes has no default value.
  // _attr has no default value.
  // _type_spec has no default value.
  // _mod has no default value.
  // _cmt has no default value.
  // _cond has no default value.
  // _cc has no default value.
  // _info has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inComponent;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,3,8) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 8));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 9));
  _name = tmpMeta2;
  _prefixes = tmpMeta3;
  _attr = tmpMeta4;
  _type_spec = tmpMeta5;
  _mod = tmpMeta6;
  _cmt = tmpMeta7;
  _cond = tmpMeta8;
  _info = tmpMeta9;

  _attr = omc_NFSCodeFlattenImports_flattenAttributes(threadData, _attr, _inEnv, _info);

  _type_spec = omc_NFSCodeFlattenImports_flattenTypeSpec(threadData, _type_spec, _inEnv, _info);

  _mod = omc_NFSCodeFlattenImports_flattenModifier(threadData, _mod, _inEnv, _info);

  _cond = omc_NFSCodeFlattenImports_flattenOptExp(threadData, _cond, _inEnv, _info);

  tmpMeta10 = mmc_mk_box9(6, &SCode_Element_COMPONENT__desc, _name, _prefixes, _attr, _type_spec, _mod, _cmt, _cond, _info);
  _outComponent = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _outComponent;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenElement(threadData_t *threadData, modelica_metatype _inElement, modelica_metatype _inEnv, modelica_metatype *out_outEnv)
{
  modelica_metatype _outElement = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  // _outEnv has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_metatype _env = NULL;
      modelica_metatype _elem = NULL;
      modelica_string _name = NULL;
      modelica_metatype _item = NULL;
      int tmp4;
      // _env has no default value.
      // _elem has no default value.
      // _name has no default value.
      // _item has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _name = tmpMeta5;
          /* Pattern matching succeeded */
          _elem = omc_NFSCodeFlattenImports_flattenComponent(threadData, _inElement, _inEnv);

          _item = omc_NFSCodeEnv_newVarItem(threadData, _elem, 1 /* true */);

          _env = omc_NFSCodeEnv_updateItemInEnv(threadData, _item, _inEnv, _name);
          tmpMeta[0+0] = _elem;
          tmpMeta[0+1] = _env;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFSCodeFlattenImports_flattenClass(threadData, _inElement, _inEnv, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFSCodeFlattenImports_flattenExtends(threadData, _inElement, _inEnv);
          tmpMeta[0+1] = _inEnv;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inElement;
          tmpMeta[0+1] = _inEnv;
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
  _outElement = tmpMeta[0+0];
  _outEnv = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outElement;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeFlattenImports_isNotImport(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_boolean _outB;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outB has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _outB = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outB;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeFlattenImports_isNotImport(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_boolean _outB;
  modelica_metatype out_outB;
  _outB = omc_NFSCodeFlattenImports_isNotImport(threadData, _inElement);
  out_outB = mmc_mk_icon(_outB);
  return out_outB;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenDerivedClassDef(threadData_t *threadData, modelica_metatype _inClassDef, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  modelica_metatype _outClassDef = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _mods = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outClassDef has no default value.
  // _ty has no default value.
  // _mods has no default value.
  // _attr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inClassDef;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,2,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _ty = tmpMeta2;
  _mods = tmpMeta3;
  _attr = tmpMeta4;

  _ty = omc_NFSCodeFlattenImports_flattenTypeSpec(threadData, _ty, _inEnv, _inInfo);

  _mods = omc_NFSCodeFlattenImports_flattenModifier(threadData, _mods, _inEnv, _inInfo);

  tmpMeta5 = mmc_mk_box4(5, &SCode_ClassDef_DERIVED__desc, _ty, _mods, _attr);
  _outClassDef = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outClassDef;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlattenImports_flattenClassDef(threadData_t *threadData, modelica_metatype _inClassDef, modelica_metatype _inEnv, modelica_metatype _inInfo, modelica_metatype *out_outEnv)
{
  modelica_metatype _outClassDef = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outClassDef has no default value.
  // _outEnv has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inClassDef;
    tmp4_2 = _inEnv;
    {
      modelica_metatype _el = NULL;
      modelica_metatype _neql = NULL;
      modelica_metatype _ieql = NULL;
      modelica_metatype _nal = NULL;
      modelica_metatype _ial = NULL;
      modelica_metatype _nco = NULL;
      modelica_metatype _clats = NULL;
      modelica_metatype _extdecl = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _mods = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _cdef = NULL;
      int tmp4;
      // _el has no default value.
      // _neql has no default value.
      // _ieql has no default value.
      // _nal has no default value.
      // _ial has no default value.
      // _nco has no default value.
      // _clats has no default value.
      // _extdecl has no default value.
      // _ty has no default value.
      // _mods has no default value.
      // _attr has no default value.
      // _env has no default value.
      // _cdef has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,8) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          
          _el = tmpMeta5;
          _neql = tmpMeta6;
          _ieql = tmpMeta7;
          _nal = tmpMeta8;
          _ial = tmpMeta9;
          _nco = tmpMeta10;
          _clats = tmpMeta11;
          _extdecl = tmpMeta12;
          /* Pattern matching succeeded */
          _el = omc_List_filterOnTrue(threadData, _el, boxvar_NFSCodeFlattenImports_isNotImport);

          _el = omc_List_mapFold(threadData, _el, boxvar_NFSCodeFlattenImports_flattenElement, _inEnv ,&_env);

          _neql = omc_List_map1(threadData, _neql, boxvar_NFSCodeFlattenImports_flattenEquation, _env);

          _ieql = omc_List_map1(threadData, _ieql, boxvar_NFSCodeFlattenImports_flattenEquation, _env);

          _nal = omc_List_map1(threadData, _nal, boxvar_NFSCodeFlattenImports_flattenAlgorithm, _env);

          _ial = omc_List_map1(threadData, _ial, boxvar_NFSCodeFlattenImports_flattenAlgorithm, _env);

          _nco = omc_List_map2(threadData, _nco, boxvar_NFSCodeFlattenImports_flattenConstraints, _env, _inInfo);
          tmpMeta13 = mmc_mk_box9(3, &SCode_ClassDef_PARTS__desc, _el, _neql, _ieql, _nal, _ial, _nco, _clats, _extdecl);
          tmpMeta[0+0] = tmpMeta13;
          tmpMeta[0+1] = _env;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _mods = tmpMeta14;
          _cdef = tmpMeta15;
          /* Pattern matching succeeded */
          _cdef = omc_NFSCodeFlattenImports_flattenClassDef(threadData, _cdef, _inEnv, _inInfo ,&_env);

          _mods = omc_NFSCodeFlattenImports_flattenModifier(threadData, _mods, _env, _inInfo);
          tmpMeta16 = mmc_mk_box3(4, &SCode_ClassDef_CLASS__EXTENDS__desc, _mods, _cdef);
          tmpMeta[0+0] = tmpMeta16;
          tmpMeta[0+1] = _env;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _ty = tmpMeta17;
          _mods = tmpMeta18;
          _attr = tmpMeta19;
          _env = tmp4_2;
          /* Pattern matching succeeded */
          _mods = omc_NFSCodeFlattenImports_flattenModifier(threadData, _mods, _env, _inInfo);

          _env = omc_NFSCodeEnv_removeExtendsFromLocalScope(threadData, _env);

          _ty = omc_NFSCodeFlattenImports_flattenTypeSpec(threadData, _ty, _env, _inInfo);
          tmpMeta20 = mmc_mk_box4(5, &SCode_ClassDef_DERIVED__desc, _ty, _mods, _attr);
          tmpMeta[0+0] = tmpMeta20;
          tmpMeta[0+1] = _inEnv;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inClassDef;
          tmpMeta[0+1] = _inEnv;
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
  _outClassDef = tmpMeta[0+0];
  _outEnv = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outClassDef;
}

DLLDirection
modelica_metatype omc_NFSCodeFlattenImports_flattenClass(threadData_t *threadData, modelica_metatype _inClass, modelica_metatype _inEnv, modelica_metatype *out_outEnv)
{
  modelica_metatype _outClass = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outClass has no default value.
  // _outEnv has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inClass;
    {
      modelica_string _name = NULL;
      modelica_metatype _cdef = NULL;
      modelica_metatype _info = NULL;
      modelica_metatype _item = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _cls_env = NULL;
      modelica_metatype _cls = NULL;
      modelica_metatype _cls_ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _cdef has no default value.
      // _info has no default value.
      // _item has no default value.
      // _env has no default value.
      // _cls_env has no default value.
      // _cls has no default value.
      // _cls_ty has no default value.
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
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          _name = tmpMeta6;
          _cdef = tmpMeta7;
          _info = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta9 = omc_NFSCodeLookup_lookupInClass(threadData, _name, _inEnv, NULL);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,3) == 0) goto goto_2;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (listEmpty(tmpMeta10)) goto goto_2;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          if (!listEmpty(tmpMeta12)) goto goto_2;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          _cls_env = tmpMeta11;
          _cls_ty = tmpMeta13;

          _env = omc_NFSCodeEnv_enterFrame(threadData, _cls_env, _inEnv);

          /* Pattern-matching tuple assignment */
          tmpMeta17 = omc_NFSCodeFlattenImports_flattenClassDef(threadData, _cdef, _env, _info, &tmpMeta14);
          _cdef = tmpMeta17;
          if (listEmpty(tmpMeta14)) goto goto_2;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          _cls_env = tmpMeta15;
          _env = tmpMeta16;

          _cls = omc_SCodeUtil_setElementClassDefinition(threadData, _cdef, _inClass);

          tmpMeta18 = mmc_mk_cons(_cls_env, MMC_REFSTRUCTLIT(mmc_nil));
          _item = omc_NFSCodeEnv_newClassItem(threadData, _cls, tmpMeta18, _cls_ty);

          _env = omc_NFSCodeEnv_updateItemInEnv(threadData, _item, _env, _name);
          tmpMeta[0+0] = _cls;
          tmpMeta[0+1] = _env;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp19 = omc_Flags_isSet(threadData, _OMC_LIT12);
          if (1 /* true */ != tmp19) goto goto_2;

          tmpMeta20 = stringAppend(_OMC_LIT13,omc_SCodeUtil_elementName(threadData, _inClass));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT14);
          tmpMeta22 = stringAppend(tmpMeta21,omc_NFSCodeEnv_getEnvName(threadData, _inEnv));
          omc_Debug_traceln(threadData, tmpMeta22);
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
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outClass = tmpMeta[0+0];
  _outEnv = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outClass;
}

DLLDirection
modelica_metatype omc_NFSCodeFlattenImports_flattenProgram(threadData_t *threadData, modelica_metatype _inProgram, modelica_metatype _inEnv, modelica_metatype *out_outEnv)
{
  modelica_metatype _outProgram = NULL;
  modelica_metatype _outEnv = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outProgram has no default value.
  // _outEnv has no default value.
  _outProgram = omc_List_mapFold(threadData, _inProgram, boxvar_NFSCodeFlattenImports_flattenClass, _inEnv ,&_outEnv);
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outProgram;
}

