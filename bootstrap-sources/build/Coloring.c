#include "omc_simulation_settings.h"
#include "Coloring.h"
#define _OMC_LIT0_data "Print sparse pattern: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,22,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,2,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "}\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,2,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "function mapIndexColors failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,30,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "/projects/OpenModelica-session2/OMCompiler/Compiler/BackEnd/Coloring.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,71,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT7_6,1.781983298e9);
#define _OMC_LIT7_6 MMC_REFREALLIT(_OMC_LIT_STRUCT7_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT6,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(142)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(142)),MMC_IMMEDIATE(MMC_TAGFIXNUM(75)),_OMC_LIT7_6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "analytical Jacobians[SPARSE] -> build sparse graph.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,52,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "dumpSparsePatternVerbose"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,24,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Dumps in verbose mode sparse pattern with coloring used for simulation."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,71,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(50)),_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "sparse graph: \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,15,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "transposed sparse graph: \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,26,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "analytical Jacobians[SPARSE] -> builded graph for coloring.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,60,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "Print Coloring Cols: \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,22,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "function createColoring failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,30,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT17_6,1.781983298e9);
#define _OMC_LIT17_6 MMC_REFREALLIT(_OMC_LIT_STRUCT17_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT6,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(112)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(112)),MMC_IMMEDIATE(MMC_TAGFIXNUM(75)),_OMC_LIT17_6}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#include "util/modelica.h"

#include "Coloring_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_Coloring_dumpColoring(threadData_t *threadData, modelica_metatype _pattern);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Coloring_dumpColoring,2,0) {(void*) boxptr_Coloring_dumpColoring,0}};
#define boxvar_Coloring_dumpColoring MMC_REFSTRUCTLIT(boxvar_lit_Coloring_dumpColoring)
PROTECTED_FUNCTION_STATIC void omc_Coloring_mapIndexColors(threadData_t *threadData, modelica_metatype _inColors, modelica_integer _inMaxIndex, modelica_metatype _inArray);
PROTECTED_FUNCTION_STATIC void boxptr_Coloring_mapIndexColors(threadData_t *threadData, modelica_metatype _inColors, modelica_metatype _inMaxIndex, modelica_metatype _inArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Coloring_mapIndexColors,2,0) {(void*) boxptr_Coloring_mapIndexColors,0}};
#define boxvar_Coloring_mapIndexColors MMC_REFSTRUCTLIT(boxvar_lit_Coloring_mapIndexColors)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Coloring_createBipartiteGraph(threadData_t *threadData, modelica_integer _inNode, modelica_metatype _inSparsePattern);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Coloring_createBipartiteGraph(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inSparsePattern);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Coloring_createBipartiteGraph,2,0) {(void*) boxptr_Coloring_createBipartiteGraph,0}};
#define boxvar_Coloring_createBipartiteGraph MMC_REFSTRUCTLIT(boxvar_lit_Coloring_createBipartiteGraph)

PROTECTED_FUNCTION_STATIC void omc_Coloring_dumpColoring(threadData_t *threadData, modelica_metatype _pattern)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_OMC_LIT0,intString(listLength(_pattern)));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT1);
  fputs(MMC_STRINGDATA(tmpMeta2),stdout);

  {
    modelica_metatype _row;
    for (tmpMeta3 = _pattern; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _row = MMC_CAR(tmpMeta3);
      tmpMeta4 = stringAppend(_OMC_LIT2,stringDelimitList(omc_List_map(threadData, _row, boxvar_intString), _OMC_LIT3));
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT4);
      fputs(MMC_STRINGDATA(tmpMeta5),stdout);
    }
  }

  fputs(MMC_STRINGDATA(_OMC_LIT1),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Coloring_mapIndexColors(threadData_t *threadData, modelica_metatype _inColors, modelica_integer _inMaxIndex, modelica_metatype _inArray)
{
  modelica_integer _index;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
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
          modelica_integer tmp6;
          modelica_integer tmp7;
          modelica_integer tmp8;
          /* Pattern matching succeeded */
          tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = _inMaxIndex;
          if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp6, tmp8); _i += tmp7)
            {
              _index = mmc_unbox_integer(arrayGet(_inColors, _i));

              tmpMeta5 = mmc_mk_cons(mmc_mk_integer(_i), arrayGet(_inArray, _index));
              arrayUpdate(_inArray, _index, tmpMeta5);
            }
          }
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT5, _OMC_LIT7);

          goto goto_1;
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
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_Coloring_mapIndexColors(threadData_t *threadData, modelica_metatype _inColors, modelica_metatype _inMaxIndex, modelica_metatype _inArray)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_inMaxIndex);
  omc_Coloring_mapIndexColors(threadData, _inColors, tmp1, _inArray);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Coloring_createBipartiteGraph(threadData_t *threadData, modelica_integer _inNode, modelica_metatype _inSparsePattern)
{
  modelica_metatype _outEdges = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEdges = tmpMeta1;
  if(((_inNode >= ((modelica_integer) 1)) && (_inNode <= arrayLength(_inSparsePattern))))
  {
    _outEdges = arrayGet(_inSparsePattern, _inNode);
  }
  else
  {
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    _outEdges = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  return _outEdges;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Coloring_createBipartiteGraph(threadData_t *threadData, modelica_metatype _inNode, modelica_metatype _inSparsePattern)
{
  modelica_integer tmp1;
  modelica_metatype _outEdges = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_inNode);
  _outEdges = omc_Coloring_createBipartiteGraph(threadData, tmp1, _inSparsePattern);
  /* skip box _outEdges; list<#Integer> */
  return _outEdges;
}

DLLDirection
modelica_metatype omc_Coloring_createColoring(threadData_t *threadData, modelica_metatype _sparseArray, modelica_metatype _sparseArrayT, modelica_integer _sizeVars, modelica_integer _sizeVarswithDep)
{
  modelica_metatype _coloredArray = NULL;
  modelica_boolean _debug;
  modelica_metatype _nodesList = NULL;
  modelica_metatype _colored = NULL;
  modelica_metatype _forbiddenColor = NULL;
  modelica_metatype _sparseGraph = NULL;
  modelica_metatype _sparseGraphT = NULL;
  modelica_metatype _arraysparseGraph = NULL;
  modelica_integer _maxColor;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _coloredArray has no default value.
  _debug = 0 /* false */;
  // _nodesList has no default value.
  // _colored has no default value.
  // _forbiddenColor has no default value.
  // _sparseGraph has no default value.
  // _sparseGraphT has no default value.
  // _arraysparseGraph has no default value.
  // _maxColor has no default value.
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
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT11))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT8),stdout);
          }

          _nodesList = omc_List_intRange2(threadData, ((modelica_integer) 1), _sizeVarswithDep);

          _sparseGraph = omc_Graph_buildGraph(threadData, _nodesList, boxvar_Coloring_createBipartiteGraph, _sparseArray);

          _sparseGraphT = omc_Graph_buildGraph(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1), _sizeVars), boxvar_Coloring_createBipartiteGraph, _sparseArrayT);

          if(omc_Flags_isSet(threadData, _OMC_LIT11))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT12),stdout);

            omc_Graph_printGraphInt(threadData, _sparseGraph);

            fputs(MMC_STRINGDATA(_OMC_LIT13),stdout);

            omc_Graph_printGraphInt(threadData, _sparseGraphT);

            fputs(MMC_STRINGDATA(_OMC_LIT14),stdout);
          }

          _forbiddenColor = arrayCreate(_sizeVars, mmc_mk_integer(((modelica_integer) 0)));

          _colored = arrayCreate(_sizeVars, mmc_mk_integer(((modelica_integer) 0)));

          _arraysparseGraph = listArray(_sparseGraph);

          if((_sizeVars > ((modelica_integer) 0)))
          {
            omc_Graph_partialDistance2colorInt(threadData, _sparseGraphT, _forbiddenColor, _nodesList, _arraysparseGraph, _colored);
          }

          omc_GCExt_free(threadData, _forbiddenColor);

          omc_GCExt_free(threadData, _arraysparseGraph);

          _maxColor = mmc_unbox_integer(omc_Array_fold(threadData, _colored, boxvar_intMax, mmc_mk_integer(((modelica_integer) 0))));

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _coloredArray = arrayCreate(_maxColor, tmpMeta5);

          omc_Coloring_mapIndexColors(threadData, _colored, _sizeVars, _coloredArray);

          omc_GCExt_free(threadData, _colored);

          if(omc_Flags_isSet(threadData, _OMC_LIT11))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT15),stdout);

            omc_Coloring_dumpColoring(threadData, arrayList(_coloredArray));
          }
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT16, _OMC_LIT17);

          goto goto_1;
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
  return _coloredArray;
}
modelica_metatype boxptr_Coloring_createColoring(threadData_t *threadData, modelica_metatype _sparseArray, modelica_metatype _sparseArrayT, modelica_metatype _sizeVars, modelica_metatype _sizeVarswithDep)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _coloredArray = NULL;
  tmp1 = mmc_unbox_integer(_sizeVars);
  tmp2 = mmc_unbox_integer(_sizeVarswithDep);
  _coloredArray = omc_Coloring_createColoring(threadData, _sparseArray, _sparseArrayT, tmp1, tmp2);
  /* skip box _coloredArray; array<list<#Integer>> */
  return _coloredArray;
}

