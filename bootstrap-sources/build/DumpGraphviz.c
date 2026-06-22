#include "omc_simulation_settings.h"
#include "DumpGraphviz.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "INPUT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,5,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "OUTPUT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,6,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "DISCRETE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,8,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "PARAM"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,5,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "CONST"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,5,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "ALG_ASSIGN"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,10,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,4,3) {&Graphviz_Node_NODE__desc,_OMC_LIT6,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data " DumpGraphviz.printAlgorithm ALG_ERROR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,38,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,4,3) {&Graphviz_Node_NODE__desc,_OMC_LIT8,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "ALG_ERROR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,9,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,4,3) {&Graphviz_Node_NODE__desc,_OMC_LIT10,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,3,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "EQ_EQUALS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,9,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data " indomain "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,10,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "EQ_PDE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,6,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "connect("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,8,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "EQ_CONNECT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,10,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "EQ_FOR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,6,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "EQ_ERROR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,8,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,4,3) {&Graphviz_Node_NODE__desc,_OMC_LIT20,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "COMPONENT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,9,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "replaceable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,11,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "CLASSDEF"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,8,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "EXTENDS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,7,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "COMPONENTS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,10,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data " DumpGraphviz.printElementspec ELSPEC_ERROR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,43,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,4,3) {&Graphviz_Node_NODE__desc,_OMC_LIT27,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,1,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "final"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,5,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "ELEMENT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,7,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,4,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,5,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "PUBLIC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,6,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "PROTECTED"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,9,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "EQUATIONS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,9,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "ALGORITHMS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,10,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data " DumpGraphViz.printClassPart PART_ERROR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,39,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,4,3) {&Graphviz_Node_NODE__desc,_OMC_LIT38,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "ROOT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,4,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#include "util/modelica.h"

#include "DumpGraphviz_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_DumpGraphviz_directionSymbol(threadData_t *threadData, modelica_metatype _inDirection);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_directionSymbol,2,0) {(void*) boxptr_DumpGraphviz_directionSymbol,0}};
#define boxvar_DumpGraphviz_directionSymbol MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_directionSymbol)
PROTECTED_FUNCTION_STATIC modelica_string omc_DumpGraphviz_variabilitySymbol(threadData_t *threadData, modelica_metatype _inVariability);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_variabilitySymbol,2,0) {(void*) boxptr_DumpGraphviz_variabilitySymbol,0}};
#define boxvar_DumpGraphviz_variabilitySymbol MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_variabilitySymbol)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printAlgorithm(threadData_t *threadData, modelica_metatype _inAlgorithm);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printAlgorithm,2,0) {(void*) boxptr_DumpGraphviz_printAlgorithm,0}};
#define boxvar_DumpGraphviz_printAlgorithm MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printAlgorithm)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printAlgorithmitem(threadData_t *threadData, modelica_metatype _inAlgorithmItem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printAlgorithmitem,2,0) {(void*) boxptr_DumpGraphviz_printAlgorithmitem,0}};
#define boxvar_DumpGraphviz_printAlgorithmitem MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printAlgorithmitem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printAlgorithms(threadData_t *threadData, modelica_metatype _inAbsynAlgorithmItemLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printAlgorithms,2,0) {(void*) boxptr_DumpGraphviz_printAlgorithms,0}};
#define boxvar_DumpGraphviz_printAlgorithms MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printAlgorithms)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printEquation(threadData_t *threadData, modelica_metatype _inEquation);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printEquation,2,0) {(void*) boxptr_DumpGraphviz_printEquation,0}};
#define boxvar_DumpGraphviz_printEquation MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printEquations(threadData_t *threadData, modelica_metatype _inAbsynEquationItemLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printEquations,2,0) {(void*) boxptr_DumpGraphviz_printEquations,0}};
#define boxvar_DumpGraphviz_printEquations MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printComponentitem(threadData_t *threadData, modelica_metatype _inComponentItem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printComponentitem,2,0) {(void*) boxptr_DumpGraphviz_printComponentitem,0}};
#define boxvar_DumpGraphviz_printComponentitem MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printComponentitem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printComponents(threadData_t *threadData, modelica_metatype _inAbsynComponentItemLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printComponents,2,0) {(void*) boxptr_DumpGraphviz_printComponents,0}};
#define boxvar_DumpGraphviz_printComponents MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printComponents)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printElementspec(threadData_t *threadData, modelica_metatype _inElementSpec);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printElementspec,2,0) {(void*) boxptr_DumpGraphviz_printElementspec,0}};
#define boxvar_DumpGraphviz_printElementspec MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printElementspec)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printPath(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printPath,2,0) {(void*) boxptr_DumpGraphviz_printPath,0}};
#define boxvar_DumpGraphviz_printPath MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printPath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printElement(threadData_t *threadData, modelica_metatype _inElement);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printElement,2,0) {(void*) boxptr_DumpGraphviz_printElement,0}};
#define boxvar_DumpGraphviz_printElement MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printElement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_makeLeaf(threadData_t *threadData, modelica_string _str, modelica_metatype _al);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_makeLeaf,2,0) {(void*) boxptr_DumpGraphviz_makeLeaf,0}};
#define boxvar_DumpGraphviz_makeLeaf MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_makeLeaf)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_makeBoolAttr(threadData_t *threadData, modelica_string _str, modelica_boolean _flag);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DumpGraphviz_makeBoolAttr(threadData_t *threadData, modelica_metatype _str, modelica_metatype _flag);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_makeBoolAttr,2,0) {(void*) boxptr_DumpGraphviz_makeBoolAttr,0}};
#define boxvar_DumpGraphviz_makeBoolAttr MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_makeBoolAttr)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printElementitems(threadData_t *threadData, modelica_metatype _inAbsynElementItemLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printElementitems,2,0) {(void*) boxptr_DumpGraphviz_printElementitems,0}};
#define boxvar_DumpGraphviz_printElementitems MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printElementitems)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printClassPart(threadData_t *threadData, modelica_metatype _inClassPart);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printClassPart,2,0) {(void*) boxptr_DumpGraphviz_printClassPart,0}};
#define boxvar_DumpGraphviz_printClassPart MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printClassPart)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printParts(threadData_t *threadData, modelica_metatype _inAbsynClassPartLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printParts,2,0) {(void*) boxptr_DumpGraphviz_printParts,0}};
#define boxvar_DumpGraphviz_printParts MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printParts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printClass(threadData_t *threadData, modelica_metatype _inClass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printClass,2,0) {(void*) boxptr_DumpGraphviz_printClass,0}};
#define boxvar_DumpGraphviz_printClass MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printClass)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printClasses(threadData_t *threadData, modelica_metatype _inAbsynClassLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_printClasses,2,0) {(void*) boxptr_DumpGraphviz_printClasses,0}};
#define boxvar_DumpGraphviz_printClasses MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_printClasses)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_buildGraphviz(threadData_t *threadData, modelica_metatype _inProgram);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_buildGraphviz,2,0) {(void*) boxptr_DumpGraphviz_buildGraphviz,0}};
#define boxvar_DumpGraphviz_buildGraphviz MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_buildGraphviz)

PROTECTED_FUNCTION_STATIC modelica_string omc_DumpGraphviz_directionSymbol(threadData_t *threadData, modelica_metatype _inDirection)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inDirection;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT0;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT1;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT2;
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_DumpGraphviz_variabilitySymbol(threadData_t *threadData, modelica_metatype _inVariability)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVariability;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT0;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT3;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT4;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT5;
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printAlgorithm(threadData_t *threadData, modelica_metatype _inAlgorithm)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inAlgorithm;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT7;
          goto tmp3_done;
        }
        case 1: {
          
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printAlgorithmitem(threadData_t *threadData, modelica_metatype _inAlgorithmItem)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inAlgorithmItem;
    {
      modelica_metatype _alg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _alg has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _alg = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_DumpGraphviz_printAlgorithm(threadData, _alg);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT11;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printAlgorithms(threadData_t *threadData, modelica_metatype _inAbsynAlgorithmItemLst)
{
  modelica_metatype _outNodeLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNodeLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inAbsynAlgorithmItemLst;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _nl = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _el = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _nl has no default value.
      // _e has no default value.
      // _el has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _e = tmpMeta7;
          _el = tmpMeta8;
          /* Pattern matching succeeded */
          _node = omc_DumpGraphviz_printAlgorithmitem(threadData, _e);

          _nl = omc_DumpGraphviz_printAlgorithms(threadData, _el);
          tmpMeta9 = mmc_mk_cons(_node, _nl);
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
  _outNodeLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNodeLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printEquation(threadData_t *threadData, modelica_metatype _inEquation)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEquation;
    {
      modelica_string _s1 = NULL;
      modelica_string _s2 = NULL;
      modelica_string _s3 = NULL;
      modelica_string _s = NULL;
      modelica_string _s_1 = NULL;
      modelica_string _s_2 = NULL;
      modelica_string _es = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _c1 = NULL;
      modelica_metatype _c2 = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _iterators = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _s1 has no default value.
      // _s2 has no default value.
      // _s3 has no default value.
      // _s has no default value.
      // _s_1 has no default value.
      // _s_2 has no default value.
      // _es has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _c1 has no default value.
      // _c2 has no default value.
      // _eqn has no default value.
      // _eqs has no default value.
      // _iterators has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta6;
          _e2 = tmpMeta7;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _s1 = omc_Dump_printExpStr(threadData, _e1);

          _s2 = omc_Dump_printExpStr(threadData, _e2);

          tmpMeta8 = stringAppend(_s1,_OMC_LIT12);
          _s = tmpMeta8;

          tmpMeta9 = stringAppend(_s,_s2);
          _s_1 = tmpMeta9;
          tmpMeta10 = mmc_mk_cons(_s_1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = mmc_mk_box5(4, &Graphviz_Node_LNODE__desc, _OMC_LIT13, tmpMeta10, tmpMeta11, tmpMeta12);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta14;
          _e2 = tmpMeta15;
          _c1 = tmpMeta16;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _s1 = omc_Dump_printExpStr(threadData, _e1);

          _s2 = omc_Dump_printExpStr(threadData, _e2);

          _s3 = omc_Dump_printComponentRefStr(threadData, _c1);

          tmpMeta17 = stringAppend(_s1,_OMC_LIT12);
          _s = tmpMeta17;

          tmpMeta18 = stringAppend(_s,_s2);
          _s_1 = tmpMeta18;

          tmpMeta19 = stringAppend(_s_1,_OMC_LIT14);
          _s_1 = tmpMeta19;

          tmpMeta20 = stringAppend(_s_1,_s3);
          _s_1 = tmpMeta20;
          tmpMeta21 = mmc_mk_cons(_s_1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = mmc_mk_box5(4, &Graphviz_Node_LNODE__desc, _OMC_LIT15, tmpMeta21, tmpMeta22, tmpMeta23);
          tmpMeta1 = tmpMeta24;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _c1 = tmpMeta25;
          _c2 = tmpMeta26;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _s1 = omc_Dump_printComponentRefStr(threadData, _c1);

          _s2 = omc_Dump_printComponentRefStr(threadData, _c2);

          tmpMeta27 = stringAppend(_OMC_LIT16,_s1);
          _s = tmpMeta27;

          tmpMeta28 = stringAppend(_s,_s2);
          _s_1 = tmpMeta28;

          tmpMeta29 = stringAppend(_s_1,_OMC_LIT17);
          _s_2 = tmpMeta29;
          tmpMeta30 = mmc_mk_cons(_s_2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta33 = mmc_mk_box5(4, &Graphviz_Node_LNODE__desc, _OMC_LIT18, tmpMeta30, tmpMeta31, tmpMeta32);
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _iterators = tmpMeta34;
          _eqs = tmpMeta35;
          /* Pattern matching succeeded */
          _eqn = omc_DumpGraphviz_printEquations(threadData, _eqs);

          _es = omc_Dump_printIteratorsStr(threadData, _iterators);
          tmpMeta36 = mmc_mk_cons(_es, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta38 = mmc_mk_box5(4, &Graphviz_Node_LNODE__desc, _OMC_LIT19, tmpMeta36, tmpMeta37, _eqn);
          tmpMeta1 = tmpMeta38;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT21;
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printEquations(threadData_t *threadData, modelica_metatype _inAbsynEquationItemLst)
{
  modelica_metatype _outNodeLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNodeLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inAbsynEquationItemLst;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _nl = NULL;
      modelica_metatype _eq = NULL;
      modelica_metatype _el = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _nl has no default value.
      // _eq has no default value.
      // _el has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _eq = tmpMeta9;
          _el = tmpMeta8;
          /* Pattern matching succeeded */
          _node = omc_DumpGraphviz_printEquation(threadData, _eq);

          _nl = omc_DumpGraphviz_printEquations(threadData, _el);
          tmpMeta10 = mmc_mk_cons(_node, _nl);
          tmpMeta1 = tmpMeta10;
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
  _outNodeLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNodeLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printComponentitem(threadData_t *threadData, modelica_metatype _inComponentItem)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inComponentItem;
    {
      modelica_metatype _nn = NULL;
      modelica_string _n = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _nn has no default value.
      // _n has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _n = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _n, tmpMeta8, tmpMeta9);
          _nn = tmpMeta10;
          tmpMeta11 = mmc_mk_cons(_n, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = mmc_mk_cons(_nn, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta14 = mmc_mk_box5(4, &Graphviz_Node_LNODE__desc, _OMC_LIT22, tmpMeta11, tmpMeta12, tmpMeta13);
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printComponents(threadData_t *threadData, modelica_metatype _inAbsynComponentItemLst)
{
  modelica_metatype _outNodeLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNodeLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inAbsynComponentItemLst;
    {
      modelica_metatype _n = NULL;
      modelica_metatype _nl = NULL;
      modelica_metatype _c = NULL;
      modelica_metatype _cs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _n has no default value.
      // _nl has no default value.
      // _c has no default value.
      // _cs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _c = tmpMeta7;
          _cs = tmpMeta8;
          /* Pattern matching succeeded */
          _n = omc_DumpGraphviz_printComponentitem(threadData, _c);

          _nl = omc_DumpGraphviz_printComponents(threadData, _cs);
          tmpMeta9 = mmc_mk_cons(_n, _nl);
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
  _outNodeLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNodeLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printElementspec(threadData_t *threadData, modelica_metatype _inElementSpec)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inElementSpec;
    {
      modelica_metatype _en = NULL;
      modelica_metatype _pn = NULL;
      modelica_metatype _ra = NULL;
      modelica_boolean _repl;
      modelica_metatype _cl = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _cns = NULL;
      modelica_metatype _tspec = NULL;
      modelica_metatype _cs = NULL;
      modelica_string _s = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _en has no default value.
      // _pn has no default value.
      // _ra has no default value.
      // _repl has no default value.
      // _cl has no default value.
      // _p has no default value.
      // _cns has no default value.
      // _tspec has no default value.
      // _cs has no default value.
      // _s has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _repl = tmp7  /* pattern as ty=Boolean */;
          _cl = tmpMeta8;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          omc_DumpGraphviz_printClass(threadData, _cl);

          _ra = omc_DumpGraphviz_makeBoolAttr(threadData, _OMC_LIT23, _repl);
          tmpMeta9 = mmc_mk_cons(_ra, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _OMC_LIT24, tmpMeta9, tmpMeta10);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _p = tmpMeta12;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _en = omc_DumpGraphviz_printPath(threadData, _p);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_cons(_en, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta15 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _OMC_LIT25, tmpMeta13, tmpMeta14);
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _tspec = tmpMeta16;
          _cs = tmpMeta17;
          /* Pattern matching succeeded */
          _s = omc_Dump_unparseTypeSpec(threadData, _tspec);

          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          _pn = omc_DumpGraphviz_makeLeaf(threadData, _s, tmpMeta18);

          _cns = omc_DumpGraphviz_printComponents(threadData, _cs);
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = mmc_mk_cons(_pn, _cns);
          tmpMeta21 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _OMC_LIT26, tmpMeta19, tmpMeta20);
          tmpMeta1 = tmpMeta21;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT28;
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printPath(threadData_t *threadData, modelica_metatype _p)
{
  modelica_metatype _pn = NULL;
  modelica_string _s = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _pn has no default value.
  // _s has no default value.
  _s = omc_AbsynUtil_pathString(threadData, _p, _OMC_LIT29, 1 /* true */, 0 /* false */);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _pn = omc_DumpGraphviz_makeLeaf(threadData, _s, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _pn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printElement(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inElement;
    {
      modelica_metatype _fa = NULL;
      modelica_metatype _elsp = NULL;
      modelica_boolean _finalPrefix;
      modelica_metatype _spec = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fa has no default value.
      // _elsp has no default value.
      // _finalPrefix has no default value.
      // _spec has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _finalPrefix = tmp7  /* pattern as ty=Boolean */;
          _spec = tmpMeta8;
          /* Pattern matching succeeded */
          _fa = omc_DumpGraphviz_makeBoolAttr(threadData, _OMC_LIT30, _finalPrefix);

          _elsp = omc_DumpGraphviz_printElementspec(threadData, _spec);
          tmpMeta9 = mmc_mk_cons(_fa, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta10 = mmc_mk_cons(_elsp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta11 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _OMC_LIT31, tmpMeta9, tmpMeta10);
          tmpMeta1 = tmpMeta11;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_makeLeaf(threadData_t *threadData, modelica_string _str, modelica_metatype _al)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _str, _al, tmpMeta1);
  _outNode = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_makeBoolAttr(threadData_t *threadData, modelica_string _str, modelica_boolean _flag)
{
  modelica_metatype _outAttribute = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAttribute has no default value.
  tmpMeta1 = mmc_mk_box3(3, &Graphviz_Attribute_ATTR__desc, _str, (_flag?_OMC_LIT32:_OMC_LIT33));
  _outAttribute = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outAttribute;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DumpGraphviz_makeBoolAttr(threadData_t *threadData, modelica_metatype _str, modelica_metatype _flag)
{
  modelica_integer tmp1;
  modelica_metatype _outAttribute = NULL;
  tmp1 = mmc_unbox_integer(_flag);
  _outAttribute = omc_DumpGraphviz_makeBoolAttr(threadData, _str, tmp1);
  /* skip box _outAttribute; Graphviz.Attribute */
  return _outAttribute;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printElementitems(threadData_t *threadData, modelica_metatype _inAbsynElementItemLst)
{
  modelica_metatype _outNodeLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNodeLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inAbsynElementItemLst;
    {
      modelica_metatype _nl = NULL;
      modelica_metatype _el = NULL;
      modelica_metatype _node = NULL;
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _nl has no default value.
      // _el has no default value.
      // _node has no default value.
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _e = tmpMeta9;
          _el = tmpMeta8;
          /* Pattern matching succeeded */
          _node = omc_DumpGraphviz_printElement(threadData, _e);

          _nl = omc_DumpGraphviz_printElementitems(threadData, _el);
          tmpMeta10 = mmc_mk_cons(_node, _nl);
          tmpMeta1 = tmpMeta10;
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
  _outNodeLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNodeLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printClassPart(threadData_t *threadData, modelica_metatype _inClassPart)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inClassPart;
    {
      modelica_metatype _nl = NULL;
      modelica_metatype _el = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _als = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _nl has no default value.
      // _el has no default value.
      // _eqs has no default value.
      // _als has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _el = tmpMeta6;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _nl = omc_DumpGraphviz_printElementitems(threadData, _el);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _OMC_LIT34, tmpMeta7, _nl);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _el = tmpMeta9;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _nl = omc_DumpGraphviz_printElementitems(threadData, _el);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _OMC_LIT35, tmpMeta10, _nl);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _eqs = tmpMeta12;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _nl = omc_DumpGraphviz_printEquations(threadData, _eqs);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _OMC_LIT36, tmpMeta13, _nl);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _als = tmpMeta15;
          /* Pattern matching succeeded */
          _nl = omc_DumpGraphviz_printAlgorithms(threadData, _als);
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _OMC_LIT37, tmpMeta16, _nl);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT39;
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printParts(threadData_t *threadData, modelica_metatype _inAbsynClassPartLst)
{
  modelica_metatype _outNodeLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNodeLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inAbsynClassPartLst;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _nl = NULL;
      modelica_metatype _c = NULL;
      modelica_metatype _cs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _nl has no default value.
      // _c has no default value.
      // _cs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _c = tmpMeta7;
          _cs = tmpMeta8;
          /* Pattern matching succeeded */
          _node = omc_DumpGraphviz_printClassPart(threadData, _c);

          _nl = omc_DumpGraphviz_printParts(threadData, _cs);
          tmpMeta9 = mmc_mk_cons(_node, _nl);
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
  _outNodeLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNodeLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printClass(threadData_t *threadData, modelica_metatype _inClass)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inClass;
    {
      modelica_string _rs = NULL;
      modelica_metatype _nl = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _parts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rs has no default value.
      // _nl has no default value.
      // _r has no default value.
      // _parts has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,5) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
          
          _r = tmpMeta6;
          _parts = tmpMeta8;
          /* Pattern matching succeeded */
          _rs = omc_AbsynUtil_restrString(threadData, _r);

          _nl = omc_DumpGraphviz_printParts(threadData, _parts);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _rs, tmpMeta9, _nl);
          tmpMeta1 = tmpMeta10;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_printClasses(threadData_t *threadData, modelica_metatype _inAbsynClassLst)
{
  modelica_metatype _outNodeLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNodeLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inAbsynClassLst;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _nl = NULL;
      modelica_metatype _c = NULL;
      modelica_metatype _cs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _nl has no default value.
      // _c has no default value.
      // _cs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _c = tmpMeta7;
          _cs = tmpMeta8;
          /* Pattern matching succeeded */
          _node = omc_DumpGraphviz_printClass(threadData, _c);

          _nl = omc_DumpGraphviz_printClasses(threadData, _cs);
          tmpMeta9 = mmc_mk_cons(_node, _nl);
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
  _outNodeLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNodeLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DumpGraphviz_buildGraphviz(threadData_t *threadData, modelica_metatype _inProgram)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inProgram;
    {
      modelica_metatype _nl = NULL;
      modelica_metatype _cs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _nl has no default value.
      // _cs has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cs = tmpMeta6;
          /* Pattern matching succeeded */
          _nl = omc_DumpGraphviz_printClasses(threadData, _cs);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = mmc_mk_box4(3, &Graphviz_Node_NODE__desc, _OMC_LIT40, tmpMeta7, _nl);
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

DLLDirection
void omc_DumpGraphviz_dump(threadData_t *threadData, modelica_metatype _p)
{
  modelica_metatype _r = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  _r = omc_DumpGraphviz_buildGraphviz(threadData, _p);

  omc_Graphviz_dump(threadData, _r);
  _return: OMC_LABEL_UNUSED
  return;
}

