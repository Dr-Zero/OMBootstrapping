#include "omc_simulation_settings.h"
#include "SBGraph.h"
#define _OMC_LIT0_data "V (generic vertex set)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,22,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "F (function vertex set)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,23,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "U (unknown vertex set)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,22,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "E (edge set)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,12,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "SBGraph.BipartiteIncidenceList.setTypeString ERROR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,50,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Set-Based Graph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,15,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "F-Vertices"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,10,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "U-Vertices"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,10,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Edges"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,5,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "SBGraph.BipartiteIncidenceList.vertices failed for wrong SetType: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,66,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "\nAllowed: V,F,U"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,15,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "/projects/OpenModelica-session2/OMCompiler/Compiler/Util/SBGraph.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,67,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT13_6,1.782113391e9);
#define _OMC_LIT13_6 MMC_REFREALLIT(_OMC_LIT_STRUCT13_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(436)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(436)),MMC_IMMEDIATE(MMC_TAGFIXNUM(132)),_OMC_LIT13_6}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "SBGraph.BipartiteIncidenceList.vertexCount failed for wrong SetType: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,69,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT15_6,1.782113391e9);
#define _OMC_LIT15_6 MMC_REFREALLIT(_OMC_LIT_STRUCT15_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(416)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(416)),MMC_IMMEDIATE(MMC_TAGFIXNUM(132)),_OMC_LIT15_6}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "SBGraph.BipartiteIncidenceList.getVertex failed for wrong SetType: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,67,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "\nAllowed: F,U"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,13,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT18_6,1.782113391e9);
#define _OMC_LIT18_6 MMC_REFREALLIT(_OMC_LIT_STRUCT18_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(330)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(330)),MMC_IMMEDIATE(MMC_TAGFIXNUM(130)),_OMC_LIT18_6}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "SBGraph.BipartiteIncidenceList.findVertex failed for wrong SetType: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,68,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT20_6,1.782113391e9);
#define _OMC_LIT20_6 MMC_REFREALLIT(_OMC_LIT_STRUCT20_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(314)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(314)),MMC_IMMEDIATE(MMC_TAGFIXNUM(130)),_OMC_LIT20_6}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "SBGraph.BipartiteIncidenceList.addVertex failed for wrong SetType: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,67,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT22_6,1.782113391e9);
#define _OMC_LIT22_6 MMC_REFREALLIT(_OMC_LIT_STRUCT22_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(293)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(293)),MMC_IMMEDIATE(MMC_TAGFIXNUM(130)),_OMC_LIT22_6}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#include "util/modelica.h"

#include "SBGraph_includes.h"



DLLDirection
modelica_string omc_SBGraph_BipartiteIncidenceList_setTypeString(threadData_t *threadData, modelica_integer _ST)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_ST;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT0;
          goto tmp3_done;
        }
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT1;
          goto tmp3_done;
        }
        case 3: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT2;
          goto tmp3_done;
        }
        case 4: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT3;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT4;
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
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_setTypeString(threadData_t *threadData, modelica_metatype _ST)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_ST);
  _str = omc_SBGraph_BipartiteIncidenceList_setTypeString(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_string omc_SBGraph_BipartiteIncidenceList_toString(threadData_t *threadData, modelica_metatype _il)
{
  modelica_string _str = NULL;
  modelica_fnptr _vertToString;
  modelica_fnptr _edgeToString;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _il;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,8) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 8));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 9));
  _vertToString = tmpMeta2;
  _edgeToString = tmpMeta3;

  tmpMeta4 = stringAppend(omc_StringUtil_headline__2(threadData, _OMC_LIT5),_OMC_LIT6);
  tmpMeta5 = stringAppend(tmpMeta4,omc_StringUtil_headline__3(threadData, _OMC_LIT7));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT6);
  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp8;
    modelica_metatype tmpMeta9;
    modelica_string __omcQ_24tmpVar0;
    modelica_integer tmp10;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))));
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta9; /* defaultValue */
    tmp8 = &__omcQ_24tmpVar1;
    while(1) {
      tmp10 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp10--;
      }
      if (tmp10 == 0) {
        __omcQ_24tmpVar0 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 2))), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 1)))) (threadData, _v);
        *tmp8 = mmc_mk_cons(__omcQ_24tmpVar0,0);
        tmp8 = &MMC_CDR(*tmp8);
      } else if (tmp10 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp8 = mmc_mk_nil();
    tmpMeta7 = __omcQ_24tmpVar1;
  }
  tmpMeta11 = stringAppend(tmpMeta6,stringDelimitList(tmpMeta7, _OMC_LIT6));
  tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT6);
  tmpMeta13 = stringAppend(tmpMeta12,omc_StringUtil_headline__3(threadData, _OMC_LIT8));
  tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT6);
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp16;
    modelica_metatype tmpMeta17;
    modelica_string __omcQ_24tmpVar2;
    modelica_integer tmp18;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))));
    tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta17; /* defaultValue */
    tmp16 = &__omcQ_24tmpVar3;
    while(1) {
      tmp18 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp18--;
      }
      if (tmp18 == 0) {
        __omcQ_24tmpVar2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 2))), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 1)))) (threadData, _v);
        *tmp16 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp16 = &MMC_CDR(*tmp16);
      } else if (tmp18 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp16 = mmc_mk_nil();
    tmpMeta15 = __omcQ_24tmpVar3;
  }
  tmpMeta19 = stringAppend(tmpMeta14,stringDelimitList(tmpMeta15, _OMC_LIT6));
  tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT6);
  tmpMeta21 = stringAppend(tmpMeta20,omc_StringUtil_headline__3(threadData, _OMC_LIT9));
  tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT6);
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp24;
    modelica_metatype tmpMeta25;
    modelica_string __omcQ_24tmpVar4;
    modelica_integer tmp26;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))));
    tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta25; /* defaultValue */
    tmp24 = &__omcQ_24tmpVar5;
    while(1) {
      tmp26 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp26--;
      }
      if (tmp26 == 0) {
        __omcQ_24tmpVar4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_edgeToString), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_edgeToString), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_edgeToString), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_edgeToString), 1)))) (threadData, _e);
        *tmp24 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp24 = &MMC_CDR(*tmp24);
      } else if (tmp26 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp24 = mmc_mk_nil();
    tmpMeta23 = __omcQ_24tmpVar5;
  }
  tmpMeta27 = stringAppend(tmpMeta22,stringDelimitList(tmpMeta23, _OMC_LIT6));
  tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT6);
  _str = tmpMeta28;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_SBGraph_BipartiteIncidenceList_edges(threadData_t *threadData, modelica_metatype _il)
{
  modelica_metatype _el = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _el = omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))));
  _return: OMC_LABEL_UNUSED
  return _el;
}

DLLDirection
modelica_metatype omc_SBGraph_BipartiteIncidenceList_vertices(threadData_t *threadData, modelica_metatype _il, modelica_integer _ST)
{
  modelica_metatype _vl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vl has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_ST;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = listAppend(omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2)))), omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3)))));
          goto tmp3_done;
        }
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))));
          goto tmp3_done;
        }
        case 3: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT10,omc_SBGraph_BipartiteIncidenceList_setTypeString(threadData, (modelica_integer)_ST));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT11);
          omc_Error_terminate(threadData, tmpMeta6, _OMC_LIT13);
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
  _vl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _vl;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_vertices(threadData_t *threadData, modelica_metatype _il, modelica_metatype _ST)
{
  modelica_integer tmp1;
  modelica_metatype _vl = NULL;
  tmp1 = mmc_unbox_integer(_ST);
  _vl = omc_SBGraph_BipartiteIncidenceList_vertices(threadData, _il, tmp1);
  /* skip box _vl; list<polymorphic<VertexT>> */
  return _vl;
}

DLLDirection
modelica_integer omc_SBGraph_BipartiteIncidenceList_edgeCount(threadData_t *threadData, modelica_metatype _il)
{
  modelica_integer _count;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))));
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_edgeCount(threadData_t *threadData, modelica_metatype _il)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_SBGraph_BipartiteIncidenceList_edgeCount(threadData, _il);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
modelica_integer omc_SBGraph_BipartiteIncidenceList_vertexCount(threadData_t *threadData, modelica_metatype _il, modelica_integer _ST)
{
  modelica_integer _count;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _count has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_ST;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2)))) + omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))));
          goto tmp3_done;
        }
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))));
          goto tmp3_done;
        }
        case 3: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT14,omc_SBGraph_BipartiteIncidenceList_setTypeString(threadData, (modelica_integer)_ST));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT11);
          omc_Error_terminate(threadData, tmpMeta6, _OMC_LIT15);
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
  _count = tmp1;
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_vertexCount(threadData_t *threadData, modelica_metatype _il, modelica_metatype _ST)
{
  modelica_integer tmp1;
  modelica_integer _count;
  modelica_metatype out_count;
  tmp1 = mmc_unbox_integer(_ST);
  _count = omc_SBGraph_BipartiteIncidenceList_vertexCount(threadData, _il, tmp1);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
modelica_boolean omc_SBGraph_BipartiteIncidenceList_isEmpty(threadData_t *threadData, modelica_metatype _il)
{
  modelica_boolean _empty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _empty = ((omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2)))) == ((modelica_integer) 0)) && (omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3)))) == ((modelica_integer) 0)));
  _return: OMC_LABEL_UNUSED
  return _empty;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_isEmpty(threadData_t *threadData, modelica_metatype _il)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_SBGraph_BipartiteIncidenceList_isEmpty(threadData, _il);
  out_empty = mmc_mk_icon(_empty);
  return out_empty;
}

DLLDirection
modelica_metatype omc_SBGraph_BipartiteIncidenceList_getEdge(threadData_t *threadData, modelica_metatype _il, modelica_integer _d)
{
  modelica_metatype _e = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _e = omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))), _d);
  _return: OMC_LABEL_UNUSED
  return _e;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_getEdge(threadData_t *threadData, modelica_metatype _il, modelica_metatype _d)
{
  modelica_integer tmp1;
  modelica_metatype _e = NULL;
  tmp1 = mmc_unbox_integer(_d);
  _e = omc_SBGraph_BipartiteIncidenceList_getEdge(threadData, _il, tmp1);
  /* skip box _e; polymorphic<EdgeT> */
  return _e;
}

DLLDirection
modelica_metatype omc_SBGraph_BipartiteIncidenceList_getEdgesFromSet(threadData_t *threadData, modelica_metatype _il, modelica_metatype _set, modelica_fnptr _getSet)
{
  modelica_metatype _set_edges = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _set_edges = tmpMeta1;
  {
    modelica_metatype _e;
    for (tmpMeta2 = omc_SBGraph_BipartiteIncidenceList_edges(threadData, _il); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _e = MMC_CAR(tmpMeta2);
      if((!omc_SBSet_isEmpty(threadData, omc_SBSet_intersection(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 1)))) (threadData, _e), _set))))
      {
        tmpMeta3 = mmc_mk_cons(_e, _set_edges);
        _set_edges = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _set_edges;
}

static modelica_metatype closure0_SBGraph_edge__finder(threadData_t *thData, modelica_metatype closure, modelica_metatype index)
{
  modelica_metatype e = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype edges = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_fnptr eqFn = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_SBGraph_edge__finder(thData, index, e, edges, eqFn);
}
DLLDirection
modelica_integer omc_SBGraph_BipartiteIncidenceList_addEdge(threadData_t *threadData, modelica_metatype _il, modelica_integer _d1, modelica_integer _d2, modelica_metatype _e)
{
  modelica_integer _ei;
  modelica_metatype _eil = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ei has no default value.
  // _eil has no default value.
  _eil = omc_SBGraph_BipartiteIncidenceList_getRow(threadData, _il, _d1);

  tmpMeta1 = mmc_mk_box3(0, _e, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 7))));
  _ei = omc_List_positionOnTrue(threadData, _eil, (modelica_fnptr) mmc_mk_box2(0,closure0_SBGraph_edge__finder,tmpMeta1));

  if((_ei == ((modelica_integer) -1)))
  {
    omc_Vector_push(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))), _e);

    _ei = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))));

    tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_ei), _eil);
    omc_Vector_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 5))), _d1, tmpMeta2);

    tmpMeta3 = mmc_mk_cons(mmc_mk_integer(_ei), omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 5))), _d2));
    omc_Vector_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 5))), _d2, tmpMeta3);
  }
  else
  {
    omc_Vector_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))), _ei, _e);
  }
  _return: OMC_LABEL_UNUSED
  return _ei;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_addEdge(threadData_t *threadData, modelica_metatype _il, modelica_metatype _d1, modelica_metatype _d2, modelica_metatype _e)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _ei;
  modelica_metatype out_ei;
  tmp1 = mmc_unbox_integer(_d1);
  tmp2 = mmc_unbox_integer(_d2);
  _ei = omc_SBGraph_BipartiteIncidenceList_addEdge(threadData, _il, tmp1, tmp2, _e);
  out_ei = mmc_mk_icon(_ei);
  return out_ei;
}

DLLDirection
modelica_metatype omc_SBGraph_BipartiteIncidenceList_getVerticesFromSet(threadData_t *threadData, modelica_metatype _il, modelica_metatype _set, modelica_integer _ST, modelica_fnptr _getSet)
{
  modelica_metatype _set_vertices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _set_vertices = tmpMeta1;
  {
    modelica_metatype _v;
    for (tmpMeta2 = omc_SBGraph_BipartiteIncidenceList_vertices(threadData, _il, (modelica_integer)_ST); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      if((!omc_SBSet_isEmpty(threadData, omc_SBSet_intersection(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 2))), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 1)))) (threadData, _v), _set))))
      {
        tmpMeta3 = mmc_mk_cons(_v, _set_vertices);
        _set_vertices = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _set_vertices;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_getVerticesFromSet(threadData_t *threadData, modelica_metatype _il, modelica_metatype _set, modelica_metatype _ST, modelica_fnptr _getSet)
{
  modelica_integer tmp1;
  modelica_metatype _set_vertices = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_ST);
  _set_vertices = omc_SBGraph_BipartiteIncidenceList_getVerticesFromSet(threadData, _il, _set, tmp1, _getSet);
  /* skip box _set_vertices; list<polymorphic<VertexT>> */
  return _set_vertices;
}

DLLDirection
modelica_metatype omc_SBGraph_BipartiteIncidenceList_getVertex(threadData_t *threadData, modelica_metatype _il, modelica_integer _d, modelica_integer _ST)
{
  modelica_metatype _v = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_ST;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))), _d);
          goto tmp3_done;
        }
        case 3: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))), _d);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT16,omc_SBGraph_BipartiteIncidenceList_setTypeString(threadData, (modelica_integer)_ST));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT17);
          omc_Error_terminate(threadData, tmpMeta6, _OMC_LIT18);
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
  _v = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_getVertex(threadData_t *threadData, modelica_metatype _il, modelica_metatype _d, modelica_metatype _ST)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _v = NULL;
  tmp1 = mmc_unbox_integer(_d);
  tmp2 = mmc_unbox_integer(_ST);
  _v = omc_SBGraph_BipartiteIncidenceList_getVertex(threadData, _il, tmp1, tmp2);
  /* skip box _v; polymorphic<VertexT> */
  return _v;
}

DLLDirection
modelica_metatype omc_SBGraph_BipartiteIncidenceList_findVertex(threadData_t *threadData, modelica_metatype _il, modelica_integer _ST, modelica_fnptr _predFn)
{
  modelica_metatype _od = NULL;
  modelica_integer _index;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _od has no default value.
  // _index has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_ST;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          omc_Vector_find(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))), ((modelica_fnptr) _predFn) ,&_index);
          tmp1 = _index;
          goto tmp3_done;
        }
        case 3: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          omc_Vector_find(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))), ((modelica_fnptr) _predFn) ,&_index);
          tmp1 = _index;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT19,omc_SBGraph_BipartiteIncidenceList_setTypeString(threadData, (modelica_integer)_ST));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT17);
          omc_Error_terminate(threadData, tmpMeta6, _OMC_LIT20);
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
  _index = tmp1;

  _od = ((_index > ((modelica_integer) 0))?mmc_mk_some(mmc_mk_integer(_index)):mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  return _od;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_findVertex(threadData_t *threadData, modelica_metatype _il, modelica_metatype _ST, modelica_fnptr _predFn)
{
  modelica_integer tmp1;
  modelica_metatype _od = NULL;
  tmp1 = mmc_unbox_integer(_ST);
  _od = omc_SBGraph_BipartiteIncidenceList_findVertex(threadData, _il, tmp1, _predFn);
  /* skip box _od; Option<#Integer> */
  return _od;
}

DLLDirection
modelica_integer omc_SBGraph_BipartiteIncidenceList_addVertex(threadData_t *threadData, modelica_metatype _il, modelica_metatype _v, modelica_integer _ST)
{
  modelica_integer _d;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_ST;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 2: {
          modelica_metatype tmpMeta5;
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          omc_Vector_push(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))), _v);

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Vector_push(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 5))), tmpMeta5);
          tmp1 = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))));
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          omc_Vector_push(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))), _v);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Vector_push(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 5))), tmpMeta6);
          tmp1 = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT21,omc_SBGraph_BipartiteIncidenceList_setTypeString(threadData, (modelica_integer)_ST));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT17);
          omc_Error_terminate(threadData, tmpMeta8, _OMC_LIT22);
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
  _d = tmp1;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_addVertex(threadData_t *threadData, modelica_metatype _il, modelica_metatype _v, modelica_metatype _ST)
{
  modelica_integer tmp1;
  modelica_integer _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_integer(_ST);
  _d = omc_SBGraph_BipartiteIncidenceList_addVertex(threadData, _il, _v, tmp1);
  out_d = mmc_mk_icon(_d);
  return out_d;
}

DLLDirection
modelica_metatype omc_SBGraph_BipartiteIncidenceList_getRow(threadData_t *threadData, modelica_metatype _il, modelica_integer _d)
{
  modelica_metatype _row = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _row = omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 5))), _d);
  _return: OMC_LABEL_UNUSED
  return _row;
}
modelica_metatype boxptr_SBGraph_BipartiteIncidenceList_getRow(threadData_t *threadData, modelica_metatype _il, modelica_metatype _d)
{
  modelica_integer tmp1;
  modelica_metatype _row = NULL;
  tmp1 = mmc_unbox_integer(_d);
  _row = omc_SBGraph_BipartiteIncidenceList_getRow(threadData, _il, tmp1);
  /* skip box _row; list<#Integer> */
  return _row;
}

DLLDirection
modelica_metatype omc_SBGraph_BipartiteIncidenceList_new(threadData_t *threadData, modelica_fnptr _vertexEq, modelica_fnptr _edgeEq, modelica_fnptr _vertexStr, modelica_fnptr _edgeStr)
{
  modelica_metatype _il = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _il has no default value.
  tmpMeta1 = mmc_mk_box9(3, &SBGraph_BipartiteIncidenceList_BIPARTITE__INCIDENCE__LIST__desc, omc_Vector_new(threadData, ((modelica_integer) 0)), omc_Vector_new(threadData, ((modelica_integer) 0)), omc_Vector_new(threadData, ((modelica_integer) 0)), omc_Vector_new(threadData, ((modelica_integer) 0)), ((modelica_fnptr) _vertexEq), ((modelica_fnptr) _edgeEq), ((modelica_fnptr) _vertexStr), ((modelica_fnptr) _edgeStr));
  _il = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _il;
}

DLLDirection
modelica_string omc_SBGraph_IncidenceList_toString(threadData_t *threadData, modelica_metatype _il)
{
  modelica_string _str = NULL;
  modelica_fnptr _vertToString;
  modelica_fnptr _edgeToString;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _vertToString = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 7)));
  _edgeToString = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 8)));
  tmpMeta1 = stringAppend(omc_StringUtil_headline__2(threadData, _OMC_LIT5),_OMC_LIT6);
  _str = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_string __omcQ_24tmpVar6;
    modelica_integer tmp5;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar7;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 2))), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vertToString), 1)))) (threadData, _v);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar7;
  }
  tmpMeta6 = stringAppend(_str,stringDelimitList(tmpMeta2, _OMC_LIT6));
  tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT6);
  _str = tmpMeta7;

  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp9;
    modelica_metatype tmpMeta10;
    modelica_string __omcQ_24tmpVar8;
    modelica_integer tmp11;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))));
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta10; /* defaultValue */
    tmp9 = &__omcQ_24tmpVar9;
    while(1) {
      tmp11 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp11--;
      }
      if (tmp11 == 0) {
        __omcQ_24tmpVar8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_edgeToString), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_edgeToString), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_edgeToString), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_edgeToString), 1)))) (threadData, _e);
        *tmp9 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp9 = &MMC_CDR(*tmp9);
      } else if (tmp11 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp9 = mmc_mk_nil();
    tmpMeta8 = __omcQ_24tmpVar9;
  }
  tmpMeta12 = stringAppend(_str,stringDelimitList(tmpMeta8, _OMC_LIT6));
  tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT6);
  _str = tmpMeta13;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_SBGraph_IncidenceList_edges(threadData_t *threadData, modelica_metatype _il)
{
  modelica_metatype _el = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _el = omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))));
  _return: OMC_LABEL_UNUSED
  return _el;
}

DLLDirection
modelica_metatype omc_SBGraph_IncidenceList_vertices(threadData_t *threadData, modelica_metatype _il)
{
  modelica_metatype _vl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vl = omc_Vector_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))));
  _return: OMC_LABEL_UNUSED
  return _vl;
}

DLLDirection
modelica_integer omc_SBGraph_IncidenceList_edgeCount(threadData_t *threadData, modelica_metatype _il)
{
  modelica_integer _count;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))));
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_SBGraph_IncidenceList_edgeCount(threadData_t *threadData, modelica_metatype _il)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_SBGraph_IncidenceList_edgeCount(threadData, _il);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
modelica_integer omc_SBGraph_IncidenceList_vertexCount(threadData_t *threadData, modelica_metatype _il)
{
  modelica_integer _count;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))));
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_SBGraph_IncidenceList_vertexCount(threadData_t *threadData, modelica_metatype _il)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_SBGraph_IncidenceList_vertexCount(threadData, _il);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
modelica_boolean omc_SBGraph_IncidenceList_isEmpty(threadData_t *threadData, modelica_metatype _il)
{
  modelica_boolean _empty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _empty = (omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2)))) == ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _empty;
}
modelica_metatype boxptr_SBGraph_IncidenceList_isEmpty(threadData_t *threadData, modelica_metatype _il)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_SBGraph_IncidenceList_isEmpty(threadData, _il);
  out_empty = mmc_mk_icon(_empty);
  return out_empty;
}

DLLDirection
modelica_metatype omc_SBGraph_IncidenceList_getEdge(threadData_t *threadData, modelica_metatype _il, modelica_integer _d)
{
  modelica_metatype _e = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _e has no default value.
  _e = omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))), _d);
  _return: OMC_LABEL_UNUSED
  return _e;
}
modelica_metatype boxptr_SBGraph_IncidenceList_getEdge(threadData_t *threadData, modelica_metatype _il, modelica_metatype _d)
{
  modelica_integer tmp1;
  modelica_metatype _e = NULL;
  tmp1 = mmc_unbox_integer(_d);
  _e = omc_SBGraph_IncidenceList_getEdge(threadData, _il, tmp1);
  /* skip box _e; polymorphic<EdgeT> */
  return _e;
}

static modelica_metatype closure1_SBGraph_edge__finder(threadData_t *thData, modelica_metatype closure, modelica_metatype index)
{
  modelica_metatype e = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype edges = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_fnptr eqFn = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_SBGraph_edge__finder(thData, index, e, edges, eqFn);
}
DLLDirection
modelica_integer omc_SBGraph_IncidenceList_addEdge(threadData_t *threadData, modelica_metatype _il, modelica_integer _d1, modelica_integer _d2, modelica_metatype _e)
{
  modelica_integer _ei;
  modelica_metatype _eil = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ei has no default value.
  // _eil has no default value.
  _eil = omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))), _d1);

  tmpMeta1 = mmc_mk_box3(0, _e, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 6))));
  _ei = omc_List_positionOnTrue(threadData, _eil, (modelica_fnptr) mmc_mk_box2(0,closure1_SBGraph_edge__finder,tmpMeta1));

  if((_ei == ((modelica_integer) -1)))
  {
    omc_Vector_push(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))), _e);

    _ei = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))));

    tmpMeta2 = mmc_mk_cons(mmc_mk_integer(_ei), _eil);
    omc_Vector_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))), _d1, tmpMeta2);

    tmpMeta3 = mmc_mk_cons(mmc_mk_integer(_ei), omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))), _d2));
    omc_Vector_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))), _d2, tmpMeta3);
  }
  else
  {
    omc_Vector_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 3))), _ei, _e);
  }
  _return: OMC_LABEL_UNUSED
  return _ei;
}
modelica_metatype boxptr_SBGraph_IncidenceList_addEdge(threadData_t *threadData, modelica_metatype _il, modelica_metatype _d1, modelica_metatype _d2, modelica_metatype _e)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _ei;
  modelica_metatype out_ei;
  tmp1 = mmc_unbox_integer(_d1);
  tmp2 = mmc_unbox_integer(_d2);
  _ei = omc_SBGraph_IncidenceList_addEdge(threadData, _il, tmp1, tmp2, _e);
  out_ei = mmc_mk_icon(_ei);
  return out_ei;
}

DLLDirection
modelica_metatype omc_SBGraph_IncidenceList_getVerticesFromSet(threadData_t *threadData, modelica_metatype _il, modelica_metatype _set, modelica_fnptr _getSet)
{
  modelica_metatype _set_vertices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _set_vertices = tmpMeta1;
  {
    modelica_metatype _v;
    for (tmpMeta2 = omc_SBGraph_IncidenceList_vertices(threadData, _il); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      if((!omc_SBSet_isEmpty(threadData, omc_SBSet_intersection(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 2))), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_getSet), 1)))) (threadData, _v), _set))))
      {
        tmpMeta3 = mmc_mk_cons(_v, _set_vertices);
        _set_vertices = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _set_vertices;
}

DLLDirection
modelica_metatype omc_SBGraph_IncidenceList_getVertex(threadData_t *threadData, modelica_metatype _il, modelica_integer _d)
{
  modelica_metatype _v = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  _v = omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))), _d);
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_SBGraph_IncidenceList_getVertex(threadData_t *threadData, modelica_metatype _il, modelica_metatype _d)
{
  modelica_integer tmp1;
  modelica_metatype _v = NULL;
  tmp1 = mmc_unbox_integer(_d);
  _v = omc_SBGraph_IncidenceList_getVertex(threadData, _il, tmp1);
  /* skip box _v; polymorphic<VertexT> */
  return _v;
}

DLLDirection
modelica_metatype omc_SBGraph_IncidenceList_findVertex(threadData_t *threadData, modelica_metatype _il, modelica_fnptr _predFn)
{
  modelica_metatype _od = NULL;
  modelica_integer _index;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _od has no default value.
  // _index has no default value.
  omc_Vector_find(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))), ((modelica_fnptr) _predFn) ,&_index);

  _od = ((_index > ((modelica_integer) 0))?mmc_mk_some(mmc_mk_integer(_index)):mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  return _od;
}

DLLDirection
modelica_integer omc_SBGraph_IncidenceList_addVertex(threadData_t *threadData, modelica_metatype _il, modelica_metatype _v)
{
  modelica_integer _d;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  omc_Vector_push(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))), _v);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  omc_Vector_push(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))), tmpMeta1);

  _d = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 2))));
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_SBGraph_IncidenceList_addVertex(threadData_t *threadData, modelica_metatype _il, modelica_metatype _v)
{
  modelica_integer _d;
  modelica_metatype out_d;
  _d = omc_SBGraph_IncidenceList_addVertex(threadData, _il, _v);
  out_d = mmc_mk_icon(_d);
  return out_d;
}

DLLDirection
modelica_metatype omc_SBGraph_IncidenceList_getRow(threadData_t *threadData, modelica_metatype _il, modelica_integer _d)
{
  modelica_metatype _row = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _row has no default value.
  _row = omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_il), 4))), _d);
  _return: OMC_LABEL_UNUSED
  return _row;
}
modelica_metatype boxptr_SBGraph_IncidenceList_getRow(threadData_t *threadData, modelica_metatype _il, modelica_metatype _d)
{
  modelica_integer tmp1;
  modelica_metatype _row = NULL;
  tmp1 = mmc_unbox_integer(_d);
  _row = omc_SBGraph_IncidenceList_getRow(threadData, _il, tmp1);
  /* skip box _row; list<#Integer> */
  return _row;
}

DLLDirection
modelica_metatype omc_SBGraph_IncidenceList_new(threadData_t *threadData, modelica_fnptr _vertexEq, modelica_fnptr _edgeEq, modelica_fnptr _vertexStr, modelica_fnptr _edgeStr)
{
  modelica_metatype _il = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _il has no default value.
  tmpMeta1 = mmc_mk_box8(3, &SBGraph_IncidenceList_INCIDENCE__LIST__desc, omc_Vector_new(threadData, ((modelica_integer) 0)), omc_Vector_new(threadData, ((modelica_integer) 0)), omc_Vector_new(threadData, ((modelica_integer) 0)), ((modelica_fnptr) _vertexEq), ((modelica_fnptr) _edgeEq), ((modelica_fnptr) _vertexStr), ((modelica_fnptr) _edgeStr));
  _il = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _il;
}

DLLDirection
modelica_boolean omc_SBGraph_edge__finder(threadData_t *threadData, modelica_integer _index, modelica_metatype _e, modelica_metatype _edges, modelica_fnptr _eqFn)
{
  modelica_boolean _matching;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _matching = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFn), 2))), _e, omc_Vector_get(threadData, _edges, _index)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqFn), 1)))) (threadData, _e, omc_Vector_get(threadData, _edges, _index)));
  _return: OMC_LABEL_UNUSED
  return _matching;
}
modelica_metatype boxptr_SBGraph_edge__finder(threadData_t *threadData, modelica_metatype _index, modelica_metatype _e, modelica_metatype _edges, modelica_fnptr _eqFn)
{
  modelica_integer tmp1;
  modelica_boolean _matching;
  modelica_metatype out_matching;
  tmp1 = mmc_unbox_integer(_index);
  _matching = omc_SBGraph_edge__finder(threadData, tmp1, _e, _edges, _eqFn);
  out_matching = mmc_mk_icon(_matching);
  return out_matching;
}

