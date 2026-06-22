#include "omc_simulation_settings.h"
#include "NBEvaluation.h"
#include "util/modelica.h"

#include "NBEvaluation_includes.h"



static modelica_metatype closure0_Array_filter(threadData_t *thData, modelica_metatype closure, modelica_metatype arr)
{
  modelica_fnptr fun = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Array_filter(thData, arr, fun);
}
DLLDirection
modelica_metatype omc_NBEvaluation_removeDummyComponents(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart)
{
  modelica_metatype _part = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _part = __omcQ_24in_5Fpart;
  tmpMeta2 = mmc_mk_box1(0, boxvar_NBStrongComponent_isDummy);
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[9] = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), (modelica_fnptr) mmc_mk_box2(0,closure0_Array_filter,tmpMeta2));
  _part = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _part;
}

DLLDirection
modelica_metatype omc_NBEvaluation_removeDummies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _bdae;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,13) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp10;
            modelica_metatype _p_loopVar = 0;
            modelica_metatype _p;
            _p_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 2)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar1;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_p_loopVar)) {
                _p = MMC_CAR(_p_loopVar);
                _p_loopVar = MMC_CDR(_p_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar0 = omc_NBEvaluation_removeDummyComponents(threadData, _p);
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar1;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = tmpMeta7;
          _bdae = tmpMeta6;

          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp13;
            modelica_metatype tmpMeta14;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp15;
            modelica_metatype _p_loopVar = 0;
            modelica_metatype _p;
            _p_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 3)));
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta14; /* defaultValue */
            tmp13 = &__omcQ_24tmpVar3;
            while(1) {
              tmp15 = 1;
              if (!listEmpty(_p_loopVar)) {
                _p = MMC_CAR(_p_loopVar);
                _p_loopVar = MMC_CDR(_p_loopVar);
                tmp15--;
              }
              if (tmp15 == 0) {
                __omcQ_24tmpVar2 = omc_NBEvaluation_removeDummyComponents(threadData, _p);
                *tmp13 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp13 = &MMC_CDR(*tmp13);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp13 = mmc_mk_nil();
            tmpMeta12 = __omcQ_24tmpVar3;
          }
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = tmpMeta12;
          _bdae = tmpMeta11;

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp20;
            modelica_metatype _p_loopVar = 0;
            modelica_metatype _p;
            _p_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 4)));
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta19; /* defaultValue */
            tmp18 = &__omcQ_24tmpVar5;
            while(1) {
              tmp20 = 1;
              if (!listEmpty(_p_loopVar)) {
                _p = MMC_CAR(_p_loopVar);
                _p_loopVar = MMC_CDR(_p_loopVar);
                tmp20--;
              }
              if (tmp20 == 0) {
                __omcQ_24tmpVar4 = omc_NBEvaluation_removeDummyComponents(threadData, _p);
                *tmp18 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp18 = &MMC_CDR(*tmp18);
              } else if (tmp20 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp18 = mmc_mk_nil();
            tmpMeta17 = __omcQ_24tmpVar5;
          }
          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[4] = tmpMeta17;
          _bdae = tmpMeta16;

          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp23;
            modelica_metatype tmpMeta24;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp25;
            modelica_metatype _p_loopVar = 0;
            modelica_metatype _p;
            _p_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 5)));
            tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta24; /* defaultValue */
            tmp23 = &__omcQ_24tmpVar7;
            while(1) {
              tmp25 = 1;
              if (!listEmpty(_p_loopVar)) {
                _p = MMC_CAR(_p_loopVar);
                _p_loopVar = MMC_CDR(_p_loopVar);
                tmp25--;
              }
              if (tmp25 == 0) {
                __omcQ_24tmpVar6 = omc_NBEvaluation_removeDummyComponents(threadData, _p);
                *tmp23 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp23 = &MMC_CDR(*tmp23);
              } else if (tmp25 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp23 = mmc_mk_nil();
            tmpMeta22 = __omcQ_24tmpVar7;
          }
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[5] = tmpMeta22;
          _bdae = tmpMeta21;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _bdae;
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
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}

DLLDirection
modelica_metatype omc_NBEvaluation_Stages_convert(threadData_t *threadData, modelica_metatype _stages)
{
  modelica_metatype _oldEvalStages = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldEvalStages has no default value.
  tmpMeta1 = mmc_mk_box5(3, &BackendDAE_EvaluationStages_EVALUATION__STAGES__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stages), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stages), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stages), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stages), 5))));
  _oldEvalStages = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldEvalStages;
}

