#include "omc_simulation_settings.h"
#include "MMToJuliaUtil.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&Absyn_Direction_BIDIR__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,6) {&Absyn_Direction_INPUT__OUTPUT__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&Absyn_Direction_OUTPUT__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,3) {&Absyn_Direction_INPUT__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#include "util/modelica.h"

#include "MMToJuliaUtil_includes.h"



DLLDirection
void omc_MMToJuliaUtil_mMKeywordToJLKeyword(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_MMToJuliaUtil_algorithmItemsContainsReturn(threadData_t *threadData, modelica_metatype _contents)
{
  modelica_boolean _existsReturn;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2 = 0;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _existsReturn = 0 /* false */;
  {
    modelica_metatype _item;
    for (tmpMeta1 = _contents; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _item = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _item;
        {
          modelica_metatype _alg = NULL;
          volatile mmc_switch_type tmp5;
          int tmp6;
          // _alg has no default value.
          tmp5 = 0;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              modelica_boolean tmp8 = 0;
              if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,3) == 0) goto tmp4_end;
              tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              
              _alg = tmpMeta7;
              /* Pattern matching succeeded */
              { /* match expression */
                modelica_metatype tmp11_1;
                tmp11_1 = _alg;
                {
                  volatile mmc_switch_type tmp11;
                  int tmp12;
                  tmp11 = 0;
                  for (; tmp11 < 2; tmp11++) {
                    switch (MMC_SWITCH_CAST(tmp11)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,7,0) == 0) goto tmp10_end;
                      /* Pattern matching succeeded */
                      tmp8 = 1 /* true */;
                      goto tmp10_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      tmp8 = 0 /* false */;
                      goto tmp10_done;
                    }
                    }
                    goto tmp10_end;
                    tmp10_end: ;
                  }
                  goto goto_9;
                  goto_9:;
                  goto goto_3;
                  goto tmp10_done;
                  tmp10_done:;
                }
              }tmp2 = tmp8;
              goto tmp4_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmp2 = 0 /* false */;
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          goto_3:;
          MMC_THROW_INTERNAL();
          goto tmp4_done;
          tmp4_done:;
        }
      }
      _existsReturn = tmp2;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _existsReturn;
}
modelica_metatype boxptr_MMToJuliaUtil_algorithmItemsContainsReturn(threadData_t *threadData, modelica_metatype _contents)
{
  modelica_boolean _existsReturn;
  modelica_metatype out_existsReturn;
  _existsReturn = omc_MMToJuliaUtil_algorithmItemsContainsReturn(threadData, _contents);
  out_existsReturn = mmc_mk_icon(_existsReturn);
  return out_existsReturn;
}

DLLDirection
modelica_boolean omc_MMToJuliaUtil_explicitReturnInClassPart(threadData_t *threadData, modelica_metatype _classParts)
{
  modelica_boolean _existsImplicitReturn;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2 = 0;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _existsImplicitReturn = 0 /* false */;
  {
    modelica_metatype _cp;
    for (tmpMeta1 = _classParts; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _cp = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _cp;
        {
          modelica_metatype _contents = NULL;
          volatile mmc_switch_type tmp5;
          int tmp6;
          // _contents has no default value.
          tmp5 = 0;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,5,1) == 0) goto tmp4_end;
              tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              _contents = tmpMeta7;
              /* Pattern matching succeeded */
              tmp2 = omc_MMToJuliaUtil_algorithmItemsContainsReturn(threadData, _contents);
              goto tmp4_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmp2 = 0 /* false */;
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          goto_3:;
          MMC_THROW_INTERNAL();
          goto tmp4_done;
          tmp4_done:;
        }
      }
      _existsImplicitReturn = tmp2;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _existsImplicitReturn;
}
modelica_metatype boxptr_MMToJuliaUtil_explicitReturnInClassPart(threadData_t *threadData, modelica_metatype _classParts)
{
  modelica_boolean _existsImplicitReturn;
  modelica_metatype out_existsImplicitReturn;
  _existsImplicitReturn = omc_MMToJuliaUtil_explicitReturnInClassPart(threadData, _classParts);
  out_existsImplicitReturn = mmc_mk_icon(_existsImplicitReturn);
  return out_existsImplicitReturn;
}

DLLDirection
modelica_boolean omc_MMToJuliaUtil_elementSpecIsOUTPUT__OR__BIDIR(threadData_t *threadData, modelica_metatype _spec)
{
  modelica_boolean _isOutput;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isOutput has no default value.
  _isOutput = (omc_MMToJuliaUtil_elementSpecIsOUTPUT(threadData, _spec) || omc_MMToJuliaUtil_elementSpecIsBIDIR(threadData, _spec));
  _return: OMC_LABEL_UNUSED
  return _isOutput;
}
modelica_metatype boxptr_MMToJuliaUtil_elementSpecIsOUTPUT__OR__BIDIR(threadData_t *threadData, modelica_metatype _spec)
{
  modelica_boolean _isOutput;
  modelica_metatype out_isOutput;
  _isOutput = omc_MMToJuliaUtil_elementSpecIsOUTPUT__OR__BIDIR(threadData, _spec);
  out_isOutput = mmc_mk_icon(_isOutput);
  return out_isOutput;
}

DLLDirection
modelica_boolean omc_MMToJuliaUtil_elementSpecIsOUTPUT(threadData_t *threadData, modelica_metatype _spec)
{
  modelica_boolean _isOutput;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isOutput has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _spec;
    {
      modelica_metatype _attributes = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _attributes has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _attributes = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attributes), 6)));
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 2; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,1,0) == 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = 0 /* false */;
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_2;
              goto tmp9_done;
              tmp9_done:;
            }
          }tmp1 = tmp7;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isOutput = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isOutput;
}
modelica_metatype boxptr_MMToJuliaUtil_elementSpecIsOUTPUT(threadData_t *threadData, modelica_metatype _spec)
{
  modelica_boolean _isOutput;
  modelica_metatype out_isOutput;
  _isOutput = omc_MMToJuliaUtil_elementSpecIsOUTPUT(threadData, _spec);
  out_isOutput = mmc_mk_icon(_isOutput);
  return out_isOutput;
}

DLLDirection
modelica_boolean omc_MMToJuliaUtil_elementSpecIsBIDIR(threadData_t *threadData, modelica_metatype _spec)
{
  modelica_boolean _isBidir;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isBidir has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _spec;
    {
      modelica_metatype _attributes = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _attributes has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _attributes = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attributes), 6)));
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 2; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,2,0) == 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmp7 = 1 /* true */;
                  goto tmp9_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmp7 = 0 /* false */;
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_2;
              goto tmp9_done;
              tmp9_done:;
            }
          }tmp1 = tmp7;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isBidir = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isBidir;
}
modelica_metatype boxptr_MMToJuliaUtil_elementSpecIsBIDIR(threadData_t *threadData, modelica_metatype _spec)
{
  modelica_boolean _isBidir;
  modelica_metatype out_isBidir;
  _isBidir = omc_MMToJuliaUtil_elementSpecIsBIDIR(threadData, _spec);
  out_isBidir = mmc_mk_icon(_isBidir);
  return out_isBidir;
}

DLLDirection
modelica_metatype omc_MMToJuliaUtil_filterOnDirection(threadData_t *threadData, modelica_metatype _inputs, modelica_metatype _direction)
{
  modelica_metatype _outputs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ioDirection = NULL;
  modelica_boolean _directionEQ;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outputs = tmpMeta1;
  _ioDirection = omc_MMToJuliaUtil_makeInputOutputDirection(threadData);
  _directionEQ = 0 /* false */;
  {
    modelica_metatype _i;
    for (tmpMeta2 = _inputs; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      _directionEQ = (omc_AbsynUtil_directionEqual(threadData, _direction, omc_AbsynUtil_getDirection(threadData, _i)) || omc_AbsynUtil_directionEqual(threadData, _ioDirection, omc_AbsynUtil_getDirection(threadData, _i)));

      if(_directionEQ)
      {
        tmpMeta3 = mmc_mk_cons(_i, _outputs);
        _outputs = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outputs;
}

DLLDirection
modelica_boolean omc_MMToJuliaUtil_isFunctionContext(threadData_t *threadData, modelica_metatype _givenCTX)
{
  modelica_boolean _isFuncCTX;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isFuncCTX = 0 /* false */;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _givenCTX;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _isFuncCTX = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isFuncCTX;
}
modelica_metatype boxptr_MMToJuliaUtil_isFunctionContext(threadData_t *threadData, modelica_metatype _givenCTX)
{
  modelica_boolean _isFuncCTX;
  modelica_metatype out_isFuncCTX;
  _isFuncCTX = omc_MMToJuliaUtil_isFunctionContext(threadData, _givenCTX);
  out_isFuncCTX = mmc_mk_icon(_isFuncCTX);
  return out_isFuncCTX;
}

DLLDirection
modelica_metatype omc_MMToJuliaUtil_makeBDirection(threadData_t *threadData)
{
  modelica_metatype _direction = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _direction has no default value.
  _direction = _OMC_LIT0;
  _return: OMC_LABEL_UNUSED
  return _direction;
}

DLLDirection
modelica_metatype omc_MMToJuliaUtil_makeInputOutputDirection(threadData_t *threadData)
{
  modelica_metatype _direction = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _direction has no default value.
  _direction = _OMC_LIT1;
  _return: OMC_LABEL_UNUSED
  return _direction;
}

DLLDirection
modelica_metatype omc_MMToJuliaUtil_makeOutputDirection(threadData_t *threadData)
{
  modelica_metatype _direction = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _direction has no default value.
  _direction = _OMC_LIT2;
  _return: OMC_LABEL_UNUSED
  return _direction;
}

DLLDirection
modelica_metatype omc_MMToJuliaUtil_makeInputDirection(threadData_t *threadData)
{
  modelica_metatype _direction = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _direction has no default value.
  _direction = _OMC_LIT3;
  _return: OMC_LABEL_UNUSED
  return _direction;
}

DLLDirection
modelica_metatype omc_MMToJuliaUtil_makeMatchContext(threadData_t *threadData, modelica_metatype _iExp)
{
  modelica_metatype _context = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _context has no default value.
  tmpMeta1 = mmc_mk_box2(9, &MMToJuliaUtil_Context_MATCH__CONTEXT__desc, _iExp);
  _context = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _context;
}

DLLDirection
modelica_metatype omc_MMToJuliaUtil_makeFunctionReturnContext(threadData_t *threadData, modelica_string _returnValuesStr, modelica_string _ty_str)
{
  modelica_metatype _context = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _context has no default value.
  tmpMeta1 = mmc_mk_box3(4, &MMToJuliaUtil_Context_FUNCTION__RETURN__CONTEXT__desc, _returnValuesStr, _ty_str);
  _context = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _context;
}

DLLDirection
modelica_metatype omc_MMToJuliaUtil_makeFunctionContext(threadData_t *threadData, modelica_string _returnValuesStr)
{
  modelica_metatype _context = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _context has no default value.
  tmpMeta1 = mmc_mk_box2(3, &MMToJuliaUtil_Context_FUNCTION__desc, _returnValuesStr);
  _context = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _context;
}

DLLDirection
modelica_metatype omc_MMToJuliaUtil_makeInputContext(threadData_t *threadData, modelica_string _ty_str)
{
  modelica_metatype _context = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _context has no default value.
  tmpMeta1 = mmc_mk_box2(8, &MMToJuliaUtil_Context_INPUT__CONTEXT__desc, _ty_str);
  _context = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _context;
}

DLLDirection
modelica_metatype omc_MMToJuliaUtil_makeUniontypeContext(threadData_t *threadData, modelica_string _name)
{
  modelica_metatype _context = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _context has no default value.
  tmpMeta1 = mmc_mk_box2(6, &MMToJuliaUtil_Context_UNIONTYPE__desc, _name);
  _context = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _context;
}

