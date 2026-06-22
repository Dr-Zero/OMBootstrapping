#include "omc_simulation_settings.h"
#include "FInst.h"
#define _OMC_LIT0_data "graphInstRunDep"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,15,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "Run scode dependency analysis. Use with -d=graphInst"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,52,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(78)),_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "SCode depend:   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,16,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Initial graph:  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,16,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,3) {&FCore_Kind_USERDEFINED__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "SCode->FGraph:  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,16,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "FExpand.path:   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,16,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Total time:     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,16,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10,0.0);
#define _OMC_LIT10 MMC_REFREALLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "F:\\dev\\"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,7,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ".graph.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,14,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,3) {&DAE_DAElist_DAE__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "FInst.inst failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,19,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "FGraph->clone:  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,16,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#include "util/modelica.h"

#include "FInst_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_FInst_doSCodeDep(threadData_t *threadData, modelica_metatype _inProgram, modelica_metatype _inPath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FInst_doSCodeDep,2,0) {(void*) boxptr_FInst_doSCodeDep,0}};
#define boxvar_FInst_doSCodeDep MMC_REFSTRUCTLIT(boxvar_lit_FInst_doSCodeDep)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_FInst_doSCodeDep(threadData_t *threadData, modelica_metatype _inProgram, modelica_metatype _inPath)
{
  modelica_metatype _outProgram = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outProgram has no default value.
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
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_Flags_isSet(threadData, _OMC_LIT2);
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta1 = omc_InstUtil_scodeFlatten(threadData, _inProgram, _inPath);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _inProgram;
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
modelica_metatype omc_FInst_instPath(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inProgram)
{
  modelica_metatype _dae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dae has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _g = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _g has no default value.
      // _p has no default value.
      // _lst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          tmpMeta1 = omc_FInst_inst(threadData, _inPath, _inProgram);
          goto tmp3_done;
        }
        case 1: {
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
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _lst = tmpMeta6;

          omc_System_realtimeTick(threadData, ((modelica_integer) 26));

          _p = omc_FInst_doSCodeDep(threadData, _inProgram, _inPath);

          _lst = omc_List_consr(threadData, _lst, mmc_mk_real(omc_System_realtimeTock(threadData, ((modelica_integer) 26))));

          tmpMeta7 = stringAppend(_OMC_LIT3,realString(mmc_unbox_real(listHead(_lst))));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT4);
          fputs(MMC_STRINGDATA(tmpMeta8),stdout);

          omc_System_realtimeTick(threadData, ((modelica_integer) 26));

          omc_FBuiltin_initialGraph(threadData, omc_FCore_emptyCache(threadData) ,&_g);

          _lst = omc_List_consr(threadData, _lst, mmc_mk_real(omc_System_realtimeTock(threadData, ((modelica_integer) 26))));

          tmpMeta9 = stringAppend(_OMC_LIT5,realString(mmc_unbox_real(listHead(_lst))));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT4);
          fputs(MMC_STRINGDATA(tmpMeta10),stdout);

          omc_System_realtimeTick(threadData, ((modelica_integer) 26));

          _g = omc_FGraphBuild_mkProgramGraph(threadData, _p, _OMC_LIT6, _g);

          _lst = omc_List_consr(threadData, _lst, mmc_mk_real(omc_System_realtimeTock(threadData, ((modelica_integer) 26))));

          tmpMeta11 = stringAppend(_OMC_LIT7,realString(mmc_unbox_real(listHead(_lst))));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT4);
          fputs(MMC_STRINGDATA(tmpMeta12),stdout);

          omc_System_realtimeTick(threadData, ((modelica_integer) 26));

          _g = omc_FExpand_path(threadData, _g, _inPath, NULL);

          _lst = omc_List_consr(threadData, _lst, mmc_mk_real(omc_System_realtimeTock(threadData, ((modelica_integer) 26))));

          tmpMeta13 = stringAppend(_OMC_LIT8,realString(mmc_unbox_real(listHead(_lst))));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT4);
          fputs(MMC_STRINGDATA(tmpMeta14),stdout);

          tmpMeta15 = stringAppend(_OMC_LIT9,realString(mmc_unbox_real(omc_List_fold(threadData, _lst, boxvar_realAdd, _OMC_LIT10))));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT4);
          fputs(MMC_STRINGDATA(tmpMeta16),stdout);

          tmpMeta17 = stringAppend(_OMC_LIT11,omc_AbsynUtil_pathString(threadData, _inPath, _OMC_LIT12, 1 /* true */, 0 /* false */));
          tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT13);
          omc_FGraphDump_dumpGraph(threadData, _g, tmpMeta18);
          tmpMeta1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT15),stdout);
          tmpMeta1 = _OMC_LIT14;
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
  _dae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dae;
}

DLLDirection
modelica_metatype omc_FInst_inst(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inProgram)
{
  modelica_metatype _dae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dae has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _g = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _lst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _g has no default value.
      // _p has no default value.
      // _lst has no default value.
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
          /* Pattern matching succeeded */
          _p = omc_FInst_doSCodeDep(threadData, _inProgram, _inPath);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _lst = tmpMeta6;

          omc_System_realtimeTick(threadData, ((modelica_integer) 26));

          omc_FBuiltin_initialGraph(threadData, omc_FCore_emptyCache(threadData) ,&_g);

          _g = omc_FGraphBuild_mkProgramGraph(threadData, _p, _OMC_LIT6, _g);

          _lst = omc_List_consr(threadData, _lst, mmc_mk_real(omc_System_realtimeTock(threadData, ((modelica_integer) 26))));

          tmpMeta7 = stringAppend(_OMC_LIT7,realString(mmc_unbox_real(listHead(_lst))));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT4);
          fputs(MMC_STRINGDATA(tmpMeta8),stdout);

          omc_System_realtimeTick(threadData, ((modelica_integer) 26));

          _g = omc_FExpand_all(threadData, _g);

          _lst = omc_List_consr(threadData, _lst, mmc_mk_real(omc_System_realtimeTock(threadData, ((modelica_integer) 26))));

          tmpMeta9 = stringAppend(_OMC_LIT9,realString(mmc_unbox_real(omc_List_fold(threadData, _lst, boxvar_realAdd, _OMC_LIT10))));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT4);
          fputs(MMC_STRINGDATA(tmpMeta10),stdout);

          tmpMeta11 = stringAppend(_OMC_LIT11,omc_AbsynUtil_pathString(threadData, _inPath, _OMC_LIT12, 1 /* true */, 0 /* false */));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT13);
          omc_FGraphDump_dumpGraph(threadData, _g, tmpMeta12);

          omc_System_realtimeTick(threadData, ((modelica_integer) 26));

          omc_FGraph_clone(threadData, _g);

          _lst = omc_List_consr(threadData, _lst, mmc_mk_real(omc_System_realtimeTock(threadData, ((modelica_integer) 26))));

          tmpMeta13 = stringAppend(_OMC_LIT16,realString(mmc_unbox_real(listHead(_lst))));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT4);
          fputs(MMC_STRINGDATA(tmpMeta14),stdout);
          tmpMeta1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT15),stdout);
          tmpMeta1 = _OMC_LIT14;
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
  _dae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dae;
}

