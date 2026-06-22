#include "omc_simulation_settings.h"
#include "NBDAEMode.h"
#define _OMC_LIT0_data "default"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,7,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,17,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "NBDAEMode.main failed due to wrong BackendDAE record!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,53,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,1) {_OMC_LIT5,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "NBDAEMode.main failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,22,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,1) {_OMC_LIT7,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#include "util/modelica.h"

#include "NBDAEMode_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBDAEMode_daeModeDefault(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartitions, modelica_metatype _variables, modelica_metatype _uniqueIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBDAEMode_daeModeDefault,2,0) {(void*) boxptr_NBDAEMode_daeModeDefault,0}};
#define boxvar_NBDAEMode_daeModeDefault MMC_REFSTRUCTLIT(boxvar_lit_NBDAEMode_daeModeDefault)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBDAEMode_daeModeDefault(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartitions, modelica_metatype _variables, modelica_metatype _uniqueIndex)
{
  modelica_metatype _partitions = NULL;
  modelica_metatype _new_partitions = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partitions = __omcQ_24in_5Fpartitions;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_partitions = tmpMeta1;
  {
    modelica_metatype _part;
    for (tmpMeta2 = _partitions; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _part = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp6_1;
        tmp6_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 3)));
        {
          modelica_metatype _association = NULL;
          modelica_metatype _new_eqns = NULL;
          modelica_metatype _new_vars = NULL;
          volatile mmc_switch_type tmp6;
          int tmp7;
          // _association has no default value.
          // _new_eqns has no default value.
          // _new_vars has no default value.
          tmp6 = 0;
          for (; tmp6 < 2; tmp6++) {
            switch (MMC_SWITCH_CAST(tmp6)) {
            case 0: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              modelica_metatype tmpMeta25;
              modelica_metatype tmpMeta26;
              modelica_metatype tmpMeta27;
              modelica_metatype tmpMeta28;
              modelica_boolean tmp29;
              modelica_metatype tmpMeta30;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,6) == 0) goto tmp5_end;
              
              _association = tmp6_1;
              /* Pattern matching succeeded */
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(8));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_association), 8*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = mmc_mk_integer(7);
              _association = tmpMeta8;

              tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _association;
              _part = tmpMeta9;

              tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[9] = omc_NBStrongComponent_sortDAEModeComponents(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), _variables, _uniqueIndex);
              _part = tmpMeta10;

              
              
              { /* match expression */
                modelica_metatype tmp14_1;
                tmp14_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9)));
                {
                  modelica_metatype _new_c = NULL;
                  modelica_metatype _eqns = NULL;
                  modelica_metatype _vars = NULL;
                  modelica_metatype _new_eqns_set = NULL;
                  modelica_metatype _new_vars_set = NULL;
                  volatile mmc_switch_type tmp14;
                  int tmp15;
                  // _new_c has no default value.
                  // _eqns has no default value.
                  // _vars has no default value.
                  // _new_eqns_set has no default value.
                  // _new_vars_set has no default value.
                  tmp14 = 0;
                  for (; tmp14 < 2; tmp14++) {
                    switch (MMC_SWITCH_CAST(tmp14)) {
                    case 0: {
                      modelica_metatype tmpMeta16;
                      modelica_metatype tmpMeta17;
                      modelica_metatype tmpMeta18;
                      modelica_metatype tmpMeta19;
                      modelica_metatype tmpMeta20;
                      modelica_metatype tmpMeta21;
                      modelica_metatype tmpMeta22;
                      modelica_integer tmp23;
                      modelica_integer tmp24;
                      if (optionNone(tmp14_1)) goto tmp13_end;
                      tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp14_1), 1));
                      _new_c = tmpMeta16;
                      /* Pattern matching succeeded */
                      _new_eqns_set = omc_UnorderedSet_new(threadData, boxvar_NBEquation_Equation_hash, boxvar_NBEquation_Equation_equalName, ((modelica_integer) 13));

                      _new_vars_set = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));

                      {
                        modelica_metatype _comp;
                        for (tmpMeta17 = _new_c, tmp24 = arrayLength(tmpMeta17), tmp23 = 1; tmp23 <= tmp24; tmp23++)
                        {
                          _comp = arrayGet(tmpMeta17,tmp23);
                          _eqns = omc_NBStrongComponent_getEquations(threadData, _comp);

                          _vars = omc_NBStrongComponent_getVariables(threadData, _comp);

                          {
                            modelica_metatype _eqn;
                            for (tmpMeta18 = _eqns; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
                            {
                              _eqn = MMC_CAR(tmpMeta18);
                              omc_UnorderedSet_add(threadData, _eqn, _new_eqns_set);
                            }
                          }

                          {
                            modelica_metatype _var;
                            for (tmpMeta20 = _vars; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
                            {
                              _var = MMC_CAR(tmpMeta20);
                              omc_UnorderedSet_add(threadData, _var, _new_vars_set);
                            }
                          }
                        }
                      }
                      tmpMeta[0+0] = omc_NBEquation_EquationPointers_fromList(threadData, omc_UnorderedSet_toList(threadData, _new_eqns_set));
                      tmpMeta[0+1] = omc_NBVariable_VariablePointers_fromList(threadData, omc_UnorderedSet_toList(threadData, _new_vars_set), 0 /* false */);
                      goto tmp13_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6)));
                      tmpMeta[0+1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)));
                      goto tmp13_done;
                    }
                    }
                    goto tmp13_end;
                    tmp13_end: ;
                  }
                  goto goto_12;
                  goto_12:;
                  goto goto_4;
                  goto tmp13_done;
                  tmp13_done:;
                }
              }
              _new_eqns = tmpMeta[0+0];
              _new_vars = tmpMeta[0+1];

              tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[6] = _new_eqns;
              _part = tmpMeta25;

              tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[5] = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))));
              _part = tmpMeta26;

              tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(10));
              memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[4] = _new_vars;
              _part = tmpMeta27;
              tmp29 = (modelica_boolean)omc_NBPartition_Partition_isEmpty(threadData, _part);
              if(tmp29)
              {
                tmpMeta30 = _new_partitions;
              }
              else
              {
                tmpMeta28 = mmc_mk_cons(_part, _new_partitions);
                tmpMeta30 = tmpMeta28;
              }
              tmpMeta3 = tmpMeta30;
              goto tmp5_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmpMeta3 = _new_partitions;
              goto tmp5_done;
            }
            }
            goto tmp5_end;
            tmp5_end: ;
          }
          goto goto_4;
          goto_4:;
          MMC_THROW_INTERNAL();
          goto tmp5_done;
          tmp5_done:;
        }
      }
      _new_partitions = tmpMeta3;
    }
  }

  _partitions = listReverse(_new_partitions);
  _return: OMC_LABEL_UNUSED
  return _partitions;
}

DLLDirection
modelica_fnptr omc_NBDAEMode_getModule(threadData_t *threadData)
{
  modelica_fnptr _func;
  modelica_string _flag = NULL;
  modelica_fnptr tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flag = _OMC_LIT0;
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _flag;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBDAEMode_daeModeDefault;
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
  _func = (modelica_fnptr) tmp1;
  _return: OMC_LABEL_UNUSED
  return _func;
}

DLLDirection
modelica_metatype omc_NBDAEMode_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_fnptr _func;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
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
          _func = (modelica_fnptr) omc_NBDAEMode_getModule(threadData);

          { /* match expression */
            modelica_metatype tmp8_1;
            tmp8_1 = _bdae;
            {
              modelica_metatype _ode = NULL;
              modelica_metatype _eqData = NULL;
              modelica_metatype _variables = NULL;
              volatile mmc_switch_type tmp8;
              int tmp9;
              // _ode has no default value.
              // _eqData has no default value.
              // _variables has no default value.
              tmp8 = 0;
              for (; tmp8 < 2; tmp8++) {
                switch (MMC_SWITCH_CAST(tmp8)) {
                case 0: {
                  modelica_metatype tmpMeta10;
                  modelica_metatype tmpMeta11;
                  modelica_metatype tmpMeta12;
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,13) == 0) goto tmp7_end;
                  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 2));
                  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 10));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,24) == 0) goto tmp7_end;
                  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
                  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 11));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,9) == 0) goto tmp7_end;
                  
                  _ode = tmpMeta10;
                  _variables = tmpMeta12;
                  _eqData = tmpMeta13;
                  /* Pattern matching succeeded */
                  tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[9] = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _ode, _variables, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _ode, _variables, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2)))));
                  _bdae = tmpMeta14;
                  tmpMeta5 = _bdae;
                  goto tmp7_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT6);
                  goto goto_6;
                  goto tmp7_done;
                }
                }
                goto tmp7_end;
                tmp7_end: ;
              }
              goto goto_6;
              goto_6:;
              goto goto_1;
              goto tmp7_done;
              tmp7_done:;
            }
          }
          _bdae = tmpMeta5;

          _bdae = omc_NBCausalize_main(threadData, _bdae, 7);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT8);
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
  return _bdae;
}

