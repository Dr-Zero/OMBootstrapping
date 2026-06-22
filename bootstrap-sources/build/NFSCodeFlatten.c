#include "omc_simulation_settings.h"
#include "NFSCodeFlatten.h"
#define _OMC_LIT0_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,9,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,41,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "NFSCodeFlatten.flattenCompleteProgram failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,45,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "newInst"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,7,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Enables new instantiation phase."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,32,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(66)),_OMC_LIT4,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "NFSCodeFlatten.flattenClassInProgram failed on "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,47,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#include "util/modelica.h"

#include "NFSCodeFlatten_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeFlatten_isClass(threadData_t *threadData, modelica_metatype _inClass);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeFlatten_isClass(threadData_t *threadData, modelica_metatype _inClass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_isClass,2,0) {(void*) boxptr_NFSCodeFlatten_isClass,0}};
#define boxvar_NFSCodeFlatten_isClass MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_isClass)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlatten_getLastClassNameInProgram(threadData_t *threadData, modelica_metatype _inProgram);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_getLastClassNameInProgram,2,0) {(void*) boxptr_NFSCodeFlatten_getLastClassNameInProgram,0}};
#define boxvar_NFSCodeFlatten_getLastClassNameInProgram MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_getLastClassNameInProgram)

DLLDirection
modelica_metatype omc_NFSCodeFlatten_flattenCompleteProgram(threadData_t *threadData, modelica_metatype _inProgram)
{
  modelica_metatype _outProgram = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outProgram has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inProgram;
    {
      modelica_metatype _env = NULL;
      modelica_metatype _prog = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _env has no default value.
      // _prog has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _prog = tmp4_1;
          /* Pattern matching succeeded */
          _env = omc_NFSCodeEnv_buildInitialEnv(threadData);

          _env = omc_NFSCodeEnv_extendEnvWithClasses(threadData, _prog, _env);

          _env = omc_NFEnvExtends_update(threadData, _env);

          _prog = omc_NFSCodeFlattenImports_flattenProgram(threadData, _prog, _env ,&_env);
          tmpMeta1 = _prog;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp6;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_Flags_isSet(threadData, _OMC_LIT2);
          if (1 /* true */ != tmp6) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT3);
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
  _outProgram = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outProgram;
}

DLLDirection
modelica_metatype omc_NFSCodeFlatten_flattenClassInProgram(threadData_t *threadData, modelica_metatype _inClassName, modelica_metatype _inProgram, modelica_metatype *out_outEnv)
{
  modelica_metatype _outProgram = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outProgram has no default value.
  // _outEnv has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inProgram;
    {
      modelica_metatype _env = NULL;
      modelica_metatype _prog = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _env has no default value.
      // _prog has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _prog = tmp4_1;
          /* Pattern matching succeeded */
          omc_System_tmpTickResetIndex(threadData, ((modelica_integer) 0), ((modelica_integer) 2));

          omc_System_tmpTickResetIndex(threadData, ((modelica_integer) 1), ((modelica_integer) 3));

          omc_System_setUsesCardinality(threadData, 0 /* false */);

          _env = omc_NFSCodeEnv_buildInitialEnv(threadData);

          _env = omc_NFSCodeEnv_extendEnvWithClasses(threadData, _prog, _env);

          _env = omc_NFEnvExtends_update(threadData, _env);

          _prog = omc_NFSCodeDependency_analyse(threadData, _inClassName, _env, _prog ,&_env);

          if((!omc_Flags_isSet(threadData, _OMC_LIT6)))
          {
            _prog = omc_NFSCodeFlattenImports_flattenProgram(threadData, _prog, _env ,&_env);
          }
          tmpMeta[0+0] = _prog;
          tmpMeta[0+1] = _env;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_Flags_isSet(threadData, _OMC_LIT2);
          if (1 /* true */ != tmp6) goto goto_2;

          tmpMeta7 = stringAppend(_OMC_LIT7,omc_AbsynUtil_pathString(threadData, _inClassName, _OMC_LIT8, 1 /* true */, 0 /* false */));
          omc_Debug_traceln(threadData, tmpMeta7);
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
  _outProgram = tmpMeta[0+0];
  _outEnv = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outProgram;
}

DLLDirection
modelica_metatype omc_NFSCodeFlatten_flattenClass(threadData_t *threadData, modelica_metatype _inClass)
{
  modelica_metatype _outClass = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outClass has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = mmc_mk_cons(_inClass, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta2 = omc_NFSCodeFlatten_flattenProgram(threadData, tmpMeta1);
  if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_CAR(tmpMeta2);
  tmpMeta4 = MMC_CDR(tmpMeta2);
  if (!listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
  _outClass = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _outClass;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeFlatten_isClass(threadData_t *threadData, modelica_metatype _inClass)
{
  modelica_boolean _outIsClass;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsClass has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inClass;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,9,1) == 0) goto tmp3_end;
          
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
  _outIsClass = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsClass;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeFlatten_isClass(threadData_t *threadData, modelica_metatype _inClass)
{
  modelica_boolean _outIsClass;
  modelica_metatype out_outIsClass;
  _outIsClass = omc_NFSCodeFlatten_isClass(threadData, _inClass);
  out_outIsClass = mmc_mk_icon(_outIsClass);
  return out_outIsClass;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSCodeFlatten_getLastClassNameInProgram(threadData_t *threadData, modelica_metatype _inProgram)
{
  modelica_metatype _outClassName = NULL;
  modelica_metatype _prog = NULL;
  modelica_string _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outClassName has no default value.
  // _prog has no default value.
  // _name has no default value.
  _prog = listReverse(_inProgram);

  /* Pattern-matching assignment */
  tmpMeta1 = omc_List_find(threadData, _prog, boxvar_NFSCodeFlatten_isClass);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,2,8) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _name = tmpMeta2;

  tmpMeta3 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _name);
  _outClassName = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _outClassName;
}

DLLDirection
modelica_metatype omc_NFSCodeFlatten_flattenProgram(threadData_t *threadData, modelica_metatype _inProgram)
{
  modelica_metatype _outProgram = NULL;
  modelica_metatype _cls_path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outProgram has no default value.
  // _cls_path has no default value.
  _cls_path = omc_NFSCodeFlatten_getLastClassNameInProgram(threadData, _inProgram);

  _outProgram = omc_NFSCodeFlatten_flattenClassInProgram(threadData, _cls_path, _inProgram, NULL);
  _return: OMC_LABEL_UNUSED
  return _outProgram;
}

