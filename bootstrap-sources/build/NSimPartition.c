#include "omc_simulation_settings.h"
#include "NSimPartition.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "NSimPartition.convertSub failed for non-base partition:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,56,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "NSimPartition.convertBase failed for non-base partition:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,57,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "[BASE] Partition "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,17,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "[SUB-] Partition "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,17,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "[ERR-]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,6,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "NSimPartition.getClock failed for unknown partition:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,53,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT12,0.0);
#define _OMC_LIT12 MMC_REFREALLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT14,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "$_clkfire"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,9,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "i"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,1,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT22,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT18,_OMC_LIT20,_OMC_LIT21,_OMC_LIT21,_OMC_LIT23,_OMC_LIT24,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT13}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,1,1) {_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,1,9) {&NFInstNode_InstNodeType_NORMAL__COMP__desc,}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT19,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT26,_OMC_LIT18,_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,1) {_OMC_LIT28,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,3,4) {&DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,1,3) {&DAE_FunctionParallelism_FP__NON__PARALLEL__desc,}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,8,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT31,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT32,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#include "util/modelica.h"

#include "NSimPartition_includes.h"



DLLDirection
modelica_metatype omc_NSimPartition_convertSub(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _oldPart = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldPart has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _part;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp9;
            modelica_metatype _tpl_loopVar = 0;
            modelica_metatype _tpl;
            _tpl_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar1;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_tpl_loopVar)) {
                _tpl = MMC_CAR(_tpl_loopVar);
                _tpl_loopVar = MMC_CDR(_tpl_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar0 = omc_NSimVar_SimVar_convertTpl(threadData, _tpl);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar1;
          }
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp13;
            modelica_metatype _blck_loopVar = 0;
            modelica_metatype _blck;
            _blck_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 3)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar3;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_blck_loopVar)) {
                _blck = MMC_CAR(_blck_loopVar);
                _blck_loopVar = MMC_CDR(_blck_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar2 = omc_NSimStrongComponent_Block_convert(threadData, _blck);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar3;
          }
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp17;
            modelica_metatype _blck_loopVar = 0;
            modelica_metatype _blck;
            _blck_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar5;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_blck_loopVar)) {
                _blck = MMC_CAR(_blck_loopVar);
                _blck_loopVar = MMC_CDR(_blck_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar4 = omc_NSimStrongComponent_Block_convert(threadData, _blck);
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar5;
          }
          tmpMeta18 = mmc_mk_box6(3, &SimCode_SubPartition_SUBPARTITION__desc, tmpMeta6, tmpMeta10, tmpMeta14, omc_NBPartitioning_BClock_convertSub(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))));
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          tmpMeta20 = stringAppend(_OMC_LIT4,omc_NSimPartition_toString(threadData, _part, _OMC_LIT5));
          tmpMeta19 = mmc_mk_cons(tmpMeta20, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta19);
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
  _oldPart = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldPart;
}

DLLDirection
modelica_metatype omc_NSimPartition_convertBase(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _oldPart = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldPart has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _part;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp9;
            modelica_metatype _sub_loopVar = 0;
            modelica_metatype _sub;
            _sub_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 3)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar7;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_sub_loopVar)) {
                _sub = MMC_CAR(_sub_loopVar);
                _sub_loopVar = MMC_CDR(_sub_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar6 = omc_NSimPartition_convertSub(threadData, _sub);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar7;
          }
          tmpMeta10 = mmc_mk_box3(3, &SimCode_ClockedPartition_CLOCKED__PARTITION__desc, omc_NBPartitioning_BClock_convertBase(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2)))), tmpMeta6);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = stringAppend(_OMC_LIT6,omc_NSimPartition_toString(threadData, _part, _OMC_LIT5));
          tmpMeta11 = mmc_mk_cons(tmpMeta12, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta11);
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
  _oldPart = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldPart;
}

DLLDirection
modelica_string omc_NSimPartition_toStringShort(threadData_t *threadData, modelica_metatype _part)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _part;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT7,omc_NBPartitioning_BClock_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2)))));
          tmp1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT8,omc_NBPartitioning_BClock_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 5)))));
          tmp1 = tmpMeta6;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT9;
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

static modelica_metatype closure0_NSimPartition_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype part)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NSimPartition_toString(thData, part, $in_str);
}static modelica_metatype closure1_NSimStrongComponent_Block_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype blck)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NSimStrongComponent_Block_toString(thData, blck, $in_str);
}
DLLDirection
modelica_string omc_NSimPartition_toString(threadData_t *threadData, modelica_metatype _part, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _part;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT7,omc_NBPartitioning_BClock_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2)))));
          tmpMeta6 = mmc_mk_box1(0, _str);
          tmpMeta7 = stringAppend(tmpMeta5,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 3))), (modelica_fnptr) mmc_mk_box2(0,closure0_NSimPartition_toString,tmpMeta6), _OMC_LIT5, _OMC_LIT10, _OMC_LIT5, _OMC_LIT10, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta7;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_str,_OMC_LIT8);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NBPartitioning_BClock_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 5)))));
          tmpMeta10 = mmc_mk_box1(0, _str);
          tmpMeta11 = stringAppend(tmpMeta9,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 3))), (modelica_fnptr) mmc_mk_box2(0,closure1_NSimStrongComponent_Block_toString,tmpMeta10), _OMC_LIT5, _OMC_LIT10, _OMC_LIT5, _OMC_LIT5, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta11;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT9;
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

DLLDirection
modelica_string omc_NSimPartition_listToString(threadData_t *threadData, modelica_metatype _parts, modelica_string __omcQ_24in_5Fstr, modelica_string _header)
{
  modelica_string _str = NULL;
  modelica_string _indent = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  _indent = _str;
  _str = ((!stringEqual(_header, _OMC_LIT5))?omc_StringUtil_headline__3(threadData, _header):_OMC_LIT5);

  {
    modelica_metatype _part;
    for (tmpMeta1 = _parts; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _part = MMC_CAR(tmpMeta1);
      tmpMeta2 = stringAppend(_str,omc_NSimPartition_toString(threadData, _part, _indent));
      _str = tmpMeta2;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NSimPartition_getClock(threadData_t *threadData, modelica_metatype _part)
{
  modelica_metatype _clock = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clock has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _part;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 5)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT11,omc_NSimPartition_toString(threadData, _part, _OMC_LIT5));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta5);
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
  _clock = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _clock;
}

DLLDirection
modelica_metatype omc_NSimPartition_createBasePartitions(threadData_t *threadData, modelica_metatype _clock_collector, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype *out_eventClocks, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _baseParts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _eventClocks = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_metatype _subClocks = NULL;
  modelica_integer _clock_idx;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta42;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _baseParts = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _eventClocks = tmpMeta2;
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  // _baseClock has no default value.
  // _subClocks has no default value.
  _clock_idx = ((modelica_integer) 1);
  {
    modelica_metatype _tpl;
    for (tmpMeta3 = omc_UnorderedMap_toList(threadData, _clock_collector); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _tpl = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _tpl;
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      _baseClock = tmpMeta5;
      _subClocks = tmpMeta6;

      if((!omc_NBPartitioning_BClock_isInferredClock(threadData, _baseClock)))
      {
        tmpMeta8 = mmc_mk_box3(3, &NSimPartition_BASE__PARTITION__desc, _baseClock, _subClocks);
        tmpMeta7 = mmc_mk_cons(tmpMeta8, _baseParts);
        _baseParts = tmpMeta7;
      }
    }
  }

  {
    modelica_metatype _base;
    for (tmpMeta10 = _baseParts; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
    {
      _base = MMC_CAR(tmpMeta10);
      { /* match expression */
        modelica_metatype tmp13_1;
        tmp13_1 = _base;
        {
          modelica_metatype _cond = NULL;
          modelica_metatype _source = NULL;
          modelica_metatype _fire = NULL;
          modelica_metatype _stmt = NULL;
          modelica_metatype _attr = NULL;
          modelica_metatype _blck = NULL;
          volatile mmc_switch_type tmp13;
          int tmp14;
          // _cond has no default value.
          // _source has no default value.
          // _fire has no default value.
          // _stmt has no default value.
          // _attr has no default value.
          // _blck has no default value.
          tmp13 = 0;
          for (; tmp13 < 2; tmp13++) {
            switch (MMC_SWITCH_CAST(tmp13)) {
            case 0: {
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
              modelica_metatype tmpMeta26;
              modelica_metatype tmpMeta27;
              modelica_metatype tmpMeta28;
              modelica_metatype tmpMeta29;
              modelica_metatype tmpMeta30;
              modelica_metatype tmpMeta31;
              modelica_metatype tmpMeta32;
              modelica_metatype tmpMeta33;
              modelica_metatype tmpMeta34;
              modelica_metatype tmpMeta35;
              modelica_metatype tmpMeta36;
              modelica_metatype tmpMeta37;
              modelica_metatype tmpMeta38;
              modelica_metatype tmpMeta39;
              modelica_metatype tmpMeta40;
              modelica_metatype tmpMeta41;
              if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,0,2) == 0) goto tmp12_end;
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,0,1) == 0) goto tmp12_end;
              tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,3,2) == 0) goto tmp12_end;
              tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,6,2) == 0) goto tmp12_end;
              tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 3));
              
              _cond = tmpMeta18;
              /* Pattern matching succeeded */
              _source = _OMC_LIT15;

              tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta25 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT17, _OMC_LIT18, _OMC_LIT29, tmpMeta19, tmpMeta20, mmc_mk_none(), tmpMeta21, _OMC_LIT30, _OMC_LIT34, tmpMeta22, tmpMeta23, listArray(tmpMeta24), _OMC_LIT35, _OMC_LIT36);
              tmpMeta27 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_clock_idx));
              tmpMeta26 = mmc_mk_cons(tmpMeta27, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta34 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT17, _OMC_LIT18, _OMC_LIT29, tmpMeta28, tmpMeta29, mmc_mk_none(), tmpMeta30, _OMC_LIT30, _OMC_LIT34, tmpMeta31, tmpMeta32, listArray(tmpMeta33), _OMC_LIT35, _OMC_LIT36);
              tmpMeta35 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta25, tmpMeta26, 1, 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 9)))));
              _fire = tmpMeta35;

              tmpMeta36 = mmc_mk_box3(7, &NBEquation_WhenStatement_NORETCALL__desc, _fire, _source);
              _stmt = tmpMeta36;

              _attr = omc_NBEquation_default(threadData, 4, 0 /* false */, mmc_mk_none(), mmc_mk_none());

              tmpMeta37 = mmc_mk_cons(_cond, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta38 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta39 = mmc_mk_box8(16, &NSimStrongComponent_Block_WHEN__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18))), mmc_mk_boolean(0 /* false */), tmpMeta37, tmpMeta38, mmc_mk_none(), _source, _attr);
              _blck = tmpMeta39;

              tmpMeta40 = mmc_mk_cons(_blck, _eventClocks);
              _eventClocks = tmpMeta40;

              tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(27));
              memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_simCodeIndices), 27*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[18] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIndices), 18)))));
              _simCodeIndices = tmpMeta41;
              goto tmp12_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              goto tmp12_done;
            }
            }
            goto tmp12_end;
            tmp12_end: ;
          }
          goto goto_11;
          goto_11:;
          MMC_THROW_INTERNAL();
          goto tmp12_done;
          tmp12_done:;
        }
      }
      ;

      _clock_idx = ((modelica_integer) 1) + _clock_idx;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_eventClocks) { *out_eventClocks = _eventClocks; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _baseParts;
}

DLLDirection
modelica_metatype omc_NSimPartition_createSubPartition(threadData_t *threadData, modelica_metatype _subClock, modelica_metatype _equations, modelica_metatype _variables, modelica_boolean _holdEvents)
{
  modelica_metatype _part = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _part has no default value.
  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp5;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = _variables;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar9;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        tmpMeta4 = mmc_mk_box2(0, _v, mmc_mk_boolean(1 /* true */));
        __omcQ_24tmpVar8 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar9;
  }
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = mmc_mk_box6(4, &NSimPartition_SUB__PARTITION__desc, tmpMeta1, _equations, tmpMeta6, _subClock, mmc_mk_boolean(_holdEvents));
  _part = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _part;
}
modelica_metatype boxptr_NSimPartition_createSubPartition(threadData_t *threadData, modelica_metatype _subClock, modelica_metatype _equations, modelica_metatype _variables, modelica_metatype _holdEvents)
{
  modelica_integer tmp1;
  modelica_metatype _part = NULL;
  tmp1 = mmc_unbox_integer(_holdEvents);
  _part = omc_NSimPartition_createSubPartition(threadData, _subClock, _equations, _variables, tmp1);
  /* skip box _part; NSimPartition */
  return _part;
}

